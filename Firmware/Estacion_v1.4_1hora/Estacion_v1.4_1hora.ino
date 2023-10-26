#include <Wire.h>
#include "RTClib.h"          //RTC
#include "HX711.h"           //Driver Balanza
#include "DHT.h"             //T/H
#include "SoftwareSerial.h"  //puerto serie
#include <AT24CX.h>          // Memoria
#include "ModemDriver.h"     //Modem




//Comunicación modem
SoftwareSerial port(3, 4);
ModemDriver mdm(&port, 9600);

#define HORA_LIM_SUP 5
#define HORA_LIM_INF 3
#define MINUTO_LIM_SUP 10
#define MINUTO_LIM_INF 50


char trama[48] = "";
bool enviando_dato = false;
char dataRecibida[SERVER_RESP_SIZE] = "";

//serie
#define t_envio 1
#define t_registro 4
#define tipo 2
#define serie 5042


//rtc
RTC_DS1307 rtc;
DateTime HoraFecha;
#define memoria 227  //maxima cantidad de muestras
//lluvia
#define DOUT A1
#define CLK A0
#define s_lluvia_a2 A2
bool l = 0;
bool l1 = 0;
HX711 balanza;
int lluvia = 0;  // deberia ser long para poder alcanzar el rango de 10kg pero se lo utiliza hasta el rango de los 5 kg
int hora_anterior = 0;
bool forzado = false;
#define hora_forzado 12  //hora que se usa para saber cuando forzar una muestra. Se usa 9 am ya que de 9am a 9am es el periodo para tomar la lluvia diaria

//Tiempo
unsigned long t_actual;
unsigned long t_millis;
unsigned long t_millis_recept;

// On/off sensores
#define modem_on_of 5


//sensor T/H
#define DHTTYPE DHT22  // Sensor DHT22
#define DHTPIN 6       // Pin donde está conectado el sensor
DHT dht(DHTPIN, DHTTYPE);
float h = 0.0;
float t = 0.0;

//Sensor UV
#define ANALOGPIN A3
#define ENABLEPIN 13

float UV = 0;   //mide la radiación UV
float DUV = 0;  //indice UV

#define REF_3V3 A7  //3.3V power on the Arduino board
int uvLevel;
int refLevel;

//Memoria
AT24C32 EepromRTC;
//Variables que inciden en la secuencia del programa, el muestreo y guardado en memoria
int i = 0;
bool f = 0;
int r = 0;  //se usa para la parte de envio de datos
//estructura de muestreo

byte hora = 0;
byte minuto = 0;
byte dia = 0;
byte mes = 0;
byte year = 0;
byte senal = 0;
byte bateria = 0;
byte estado_lluvia = 0;
byte humedad = 0;
byte d_u_v = 0;
int temperatura = 0;
int u_v = 0;
int pm25 = 0;
int lluvia_ps = 0;

//Bateria
#define V_BAT A6



// Conteo de muestras
byte pws = 0;
byte prs = 0;

//modem
int error = 0;             // cuenta los errores de un mal envio de muestras o que estan fuera de formato
bool dato = false;         // flag que indica si envie un dato o no y permite que se envie un nuevo dato
bool inicio = false;       // flag que indica si el modem esta prendido
int sin_respuesta = 0;     // cuenta los errores por no obtener respuesta
bool transmision = false;  //flag para permitir la transmision de datos
bool registro = false;     // flag para permitir el registro
// bool reset_registro = false;  // flag para reiniciar el registro


void setup() {
  Serial.begin(9600);
  rtc.begin();  //Inicializamos el RTC
  balanza.begin(DOUT, CLK);
  balanza.set_scale(218);  // Establecemos la escala
  pinMode(s_lluvia_a2, INPUT);
  pinMode(modem_on_of, OUTPUT);
  pinMode(V_BAT, INPUT);
  digitalWrite(modem_on_of, HIGH);
  mdm.init();
  inicio = true;
  registro = true;  //habilito el registro de la estación
  dht.begin();
  pinMode(ENABLEPIN, OUTPUT);
  digitalWrite(ENABLEPIN, HIGH);  /// habilitacion sensor UV
  pinMode(ANALOGPIN, INPUT);

  // rtc.writenvram(0, pws);
  // rtc.writenvram(3, prs);
  // pws = rtc.readnvram(0);
  // prs = rtc.readnvram(3);
  // EepromRTC.write(4090, prs);
  // EepromRTC.write(4092, pws);
  // delay(100);
  prs = EepromRTC.read(4090);
  pws = EepromRTC.read(4092);

  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // Serial.println(rtc.readnvram(0));

  Serial.print("iniciando");
  t_millis = millis();
  while (millis() <= t_millis + 20000) {
    delay(1);
  }
  //balanza.tare(20);
}

void loop() {


  t_millis = millis();
  while (millis() <= t_millis + 2000) {
    delay(1);
  }



  HoraFecha = rtc.now();
  Serial.print(F("Version 1.4 "));
  Serial.print(F("hora "));
  Serial.println(HoraFecha.hour());
  Serial.print(F("minuto "));
  Serial.println(HoraFecha.minute());
  Serial.println("");
  Serial.print(F("dia "));
  Serial.println(HoraFecha.day());
  Serial.print(F("mes "));
  Serial.println(HoraFecha.month());
  Serial.print(F("anio "));
  Serial.println(HoraFecha.year());
  Serial.println("");
  Serial.println("");
  Serial.print(F("prs "));
  Serial.println(prs);
  Serial.print(F("pws "));
  Serial.println(pws);
  Serial.println("");
  // Serial.println(balanza.get_units(10));
  // Serial.println(estado_lluvia);
  // Serial.println("");
  // Serial.println(analogRead(s_lluvia_a2));


  if ((analogRead(s_lluvia_a2) <= 870) && (l == 0)) {  //leo el estado del analogico y lo comparo con el nivel 800 del adc y consulto se vengo de un momento sin lluvia, si es menor es porque empezo a llover
    balanza.tare(20);                                  //El peso actual es considerado Tara.
    Serial.println("");
    Serial.println(F("-----------Tara-----------"));

    l = 1;
    l1 = 0;
    estado_lluvia = 1;

  } else if ((analogRead(s_lluvia_a2) >= 900) && (l == 1)) {
    l1 = 1;

    lluvia = lluvia + balanza.get_units(10);
    t_millis = millis();
    while (millis() <= t_millis + 1000) {
      delay(1);
    }
    Serial.println(F("------Listo para subir muestra------"));


    estado_lluvia = 0;
    l = 0;
  }


  if ((HoraFecha.hour() >= 0) && (HoraFecha.hour() <= 23)) {  // controlo que la hora este correcta
    if (HoraFecha.hour() <= HORA_LIM_INF) {                   //si la hora actual es menor o igual al limite inferior establecido
      if (HoraFecha.hour() == HORA_LIM_INF) {                 // la hora actual es igual al limite voy a consultar en que minuto me encuentro
        if (HoraFecha.minute() <= MINUTO_LIM_INF) {           //si el minuto actual es menor o igual al limite inferior establecido transmito
          transmision = true;
        } else {  //de lo contrario no transmito
          transmision = false;
        }
      } else {  // la hora actual es menor al limite voy a transmitir directamente
        transmision = true;
      }
    } else {
      if (HoraFecha.hour() >= HORA_LIM_SUP) {          //si la hora actual es mayor o igual al limite superior establecido
        if (HoraFecha.hour() == HORA_LIM_SUP) {        // la hora actual es igual al limite superior voy a consultar en que minuto me encuentro
          if (HoraFecha.minute() >= MINUTO_LIM_SUP) {  //si el minuto actual es mayor o igual al limite superior establecido transmito
            transmision = true;
          } else {  //de lo contrario no transmito
            transmision = false;
          }
        } else {  // la hora actual es mayor al limite voy a transmitir directamente
          transmision = true;
        }
      }
    }
  } else {
    transmision = true;
    registro = true;
  }

  if ((transmision == true) || (registro == true)) {
    if (registro == true) {
      send_data(1);
    } else if (prs != pws) {  // si son distintos inicio el proceso para subir a sistema
      send_data(0);
    } else {
      Serial.println(F("no hay muestras para subir "));
      digitalWrite(modem_on_of, LOW);  //apago el modem si no hay muestras que subir
      inicio = false;                  // indico que el modem esta apagado
      dato = false;                    // indico que se puede enviar un dato la proxima vez}
    }

  } else {  // si no estoy habilitado para transmitir
    Serial.println(F("no transmito"));
    digitalWrite(modem_on_of, LOW);  //apago el modem
    inicio = false;
    dato = false;
  }

  while ((HoraFecha.minute() % 10) == 9) {  //en el minuto 59 empiezo el proceso sampling
    sin_respuesta = 0;
    f = 1;

    // Serial.println(F("m9"));

    t_actual = millis();  // pongo un valor en segundos al tiempo que uso de comparacion para el intervalo entre pedido de valores
    sampling();           //muestreo
    while (millis() < t_actual + 1000) {
      delay(1);
    }  //tiempo de espera para tomar una muestra

    HoraFecha = rtc.now();
  }

  if (((HoraFecha.minute() % 10) == 0) && (f == 1)) {  // en el minuto 10 guardo las muestras para subir
    // Serial.println(F("m10"));

    saving();
  }
  memset(dataRecibida, 0, sizeof(dataRecibida));

  if (mdm.available()) {  //espero una respuesta del servidor
    mdm.getResponse(dataRecibida);
    // Serial.print(F("RESPUESTA DEL SERVIDOR: "));
    // Serial.println(dataRecibida);
    r = 1;
  }

  if ((dato == true) && (r == 1)) {  // hay una respuesta del servidor y envie un dato
    r = 0;

    if (strcmp(dataRecibida, "004F") == 0) {  // Si el servidor responde ok muevo un lugar prs
      dato = false;

      if (prs <= memoria) {
        prs++;
      } else {
        prs = 0;
      }
      error = 0;
      EepromRTC.write(4090, prs);


    } else if (strcmp(dataRecibida, "004565") == 0) {  // Si el servidor responde error  cuento 3 veces error y si no funciona avanzo prs de todas formas ya que hay un error en la muestra
      Serial.print(F("004565 "));
      dato = false;

      if (error == 2) {
        if (prs <= memoria) {
          prs++;
        } else {
          prs = 0;
        }
        error = 0;

        EepromRTC.write(4090, prs);
      } else {
        error++;
      }
    } else if ((dataRecibida[0] == '0') && (dataRecibida[1] == '2') && (dataRecibida[2] == '4') && (dataRecibida[3] == 'F')) {
      dato = false;
      registro = false;
      Serial.println("registro");
      char a[2] = "";
      char a2[2] = "";
      a[0] = dataRecibida[5];
      a2[0] = dataRecibida[7];
      int hora2 = (atoi(a) * 10) + atoi(a2);
      // Serial.print(F("hora "));
      // Serial.println(hora2);

      a[0] = dataRecibida[9];
      a2[0] = dataRecibida[11];
      int minutos2 = (atoi(a) * 10) + atoi(a2);
      // Serial.print(F("minuto "));
      // Serial.println(minutos2);

      a[0] = dataRecibida[13];
      a2[0] = dataRecibida[15];
      int dia2 = (atoi(a) * 10) + atoi(a2);
      // Serial.print(F("dia "));
      // Serial.println(dia2);

      a[0] = dataRecibida[17];
      a2[0] = dataRecibida[19];
      int mes2 = (atoi(a) * 10) + atoi(a2);
      // Serial.print(F("mes "));
      // Serial.println(mes2);

      a[0] = dataRecibida[21];
      a2[0] = dataRecibida[23];
      int anio2 = (atoi(a) * 10) + atoi(a2) + 2000;
      // Serial.print(F("anio "));
      // Serial.println(anio2);

      rtc.adjust(DateTime(anio2, mes2, dia2, hora2, minutos2, 0));  //2016,Junio,10,18 h,29 min,0 seg


    } else {
      memset(dataRecibida, 0, sizeof(dataRecibida));
    }


  } else if ((dato == true) && (r == 0)) {       // si se envio un dato y no hay resuesta
    if (millis() >= t_millis_recept + 120000) {  //espero 3 minutos y si no hay respuesta intento eviar de nuevo la muestra
      sin_respuesta++;
      digitalWrite(modem_on_of, LOW);  //apago el modem
      inicio = false;                  // indico que el modem esta apagado
      Serial.print(F("no hubo respuesta"));
      // Serial.println(sin_respuesta);
      dato = false;
    }
  }  // else {
  //   memset(dataRecibida, 0, sizeof(dataRecibida));
  // }

  mdm.update();
}
void sampling() {
  Serial.println(F("sampling"));
  h = h + dht.readHumidity();                  //Leemos la Humedad y lo sumamos a la lectura anterior
  t = t + dht.readTemperature();               //Leemos la temperatura en grados Celsius y lo sumamos a la lectura anterior
  UV = UV + (analogRead(ANALOGPIN) * 0.0048);  //envio dato crudo del sensor UV
  i++;                                         //cuenta las veces que se pide valores a los sensores
}
void saving() {
  Serial.println(F("saving"));
  dia = HoraFecha.day();
  mes = HoraFecha.month();
  year = HoraFecha.year() % 1000;
  hora = HoraFecha.hour();
  minuto = HoraFecha.minute();
  senal = 31;
  bateria = (0.0048 * analogRead(V_BAT)) * 10;
  temperatura = (((t / i) + 40) * 100);  //sumo 40 para enviar siempre temperaturas positivas casteo t a int para que ocupe menos espacio en la memoria
  humedad = (h / i);                     //casteo h a int para que ocupe menos espacio en la memoria
  u_v = ((UV / i) * 100);                //casteo uv a int para que ocupe menos espacio en la memoria mando el dato crudo del analogico

  uvLevel = analogRead(ANALOGPIN);
  refLevel = analogRead(REF_3V3);

  float outputVoltage = 3.3 / refLevel * uvLevel;
  d_u_v = mapfloat(outputVoltage, 0.96, 2.8, 0.0, 15.0);  //Convert the voltage to a UV intensity level

  pm25 = 0;

  if (l1 == 1) {  //cuando se cumple un ciclo de mojado a seco, sube la lluvia acumulada desde que se realizo la tara.
                  // Serial.print("lluvia en samplig ");
    lluvia_ps = lluvia;
    if (lluvia_ps < 0) {
      lluvia_ps = 0;
    }
    l1 = 0;
    lluvia = 0;
  } else {
    if ((HoraFecha.hour() == hora_forzado) && (HoraFecha.minute() == 0)) {  //cuando son las 9am toma una muestra y sube el valor de lluvia sin importar si aun lleve o no. Luego si esta lloviendo hace una tara y sigue tomando muestras normalmente
      registro = true;
      //Serial.println(F("Lluvia forzado---------------"));

      lluvia_ps = lluvia + balanza.get_units(10);
      t_millis = millis();
      while (millis() <= t_millis + 1000) {
        delay(1);
      }

      if (lluvia_ps < 0) {
        lluvia_ps = 0;
      }
      balanza.tare(20);  //El peso actual es considerado Tara.
      Serial.println("");
      Serial.println(F("-----------Tara forzada-----------"));

      lluvia = 0;
    } else {
      lluvia_ps = 0;
    }
  }


  writing();

  f = 0;
  i = 0;   //vuelvo a 0 el conteo de mustras en samplig
  h = 0;   //vuelvo a 0 la humedad
  UV = 0;  //vuelvo a 0 uv
  DUV = 0;
  t = 0;  //vuelvo a 0 la temperatura
}

void writing() {
  //Serial.println(lluvia_ps);
  Serial.println(F("writing"));

  int pos_mem = pws * 18;  // int pos_mem = (pws * 20) + 1;
  EepromRTC.write(pos_mem, hora);
  EepromRTC.write(pos_mem + 1, minuto);
  EepromRTC.write(pos_mem + 2, dia);
  EepromRTC.write(pos_mem + 3, mes);
  EepromRTC.write(pos_mem + 4, year);
  EepromRTC.write(pos_mem + 5, senal);
  EepromRTC.write(pos_mem + 6, bateria);
  EepromRTC.write(pos_mem + 7, estado_lluvia);
  EepromRTC.writeInt(pos_mem + 8, temperatura);
  EepromRTC.write(pos_mem + 10, humedad);
  EepromRTC.writeInt(pos_mem + 11, u_v);
  EepromRTC.write(pos_mem + 13, d_u_v);
  EepromRTC.writeInt(pos_mem + 14, lluvia_ps);
  EepromRTC.writeInt(pos_mem + 16, pm25);

  lluvia_ps = 0;

  if (pws <= memoria) {
    pws++;
  } else {
    pws = 0;
  }

  //rtc.writenvram(0, pws);
  EepromRTC.write(4092, pws);
}

void read_build() {  // leo la memoria segun prs, armo la cadena para enviar al servidor y envio
  Serial.println(F("read_build"));
  memset(trama, 0, sizeof(trama));
  char aux[5] = "";
  sprintf(aux, "%02X", t_envio);  //codigo de trama para registrarse
  strcat(trama, aux);
  sprintf(aux, "%02X", tipo);  //codigo de tipo de equipo
  strcat(trama, aux);
  sprintf(aux, "%04X", serie);  //numero de serie del equipo
  strcat(trama, aux);

  int pos_mem = prs * 18;

  sprintf(aux, "%02X", EepromRTC.read(pos_mem));  //hora
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 1));  //minuto
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 2));  //, dia
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 3));  //, mes
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 4));  //, year
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 5));  //, senal
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 6));  //, bateria
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 7));  //, estado_lluvia
  strcat(trama, aux);

  sprintf(aux, "%04X", EepromRTC.readInt(pos_mem + 8));  //, temperatura
  strcat(trama, aux);


  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 10));  //, humedad
  strcat(trama, aux);

  sprintf(aux, "%04X", EepromRTC.readInt(pos_mem + 11));  //, UV
  strcat(trama, aux);

  sprintf(aux, "%02X", EepromRTC.read(pos_mem + 13));  //, DUV
  strcat(trama, aux);

  sprintf(aux, "%04X", EepromRTC.readInt(pos_mem + 14));  //, lluvia
  strcat(trama, aux);

  sprintf(aux, "%04X", EepromRTC.readInt(pos_mem + 16));  //, pm25

  strcat(trama, aux);


  strcat(trama, "0F");


  // Serial.print("Trama: ");
  // Serial.println(trama);
}
void registrando() {
  memset(trama, 0, sizeof(trama));
  char aux[5] = "";
  sprintf(aux, "%02X", t_registro);  //codigo de trama para registrarse
  strcat(trama, aux);
  sprintf(aux, "%02X", tipo);  //codigo de tipo decequipo
  strcat(trama, aux);
  sprintf(aux, "%04X", serie);  //numero de serie del equipo
  strcat(trama, aux);
}
void send_data(bool n) {
  if (sin_respuesta < 2) {  // una vez que se contaron 1 intentos de subir datos y no se obtuvo respuesta (error) se espera que se tome una nueva muestra para volver a intentar el envio

    Serial.println(F("se puede enviar "));

    if (inicio == false) {              // verifico si el modem esta prendido o esta apagado
      digitalWrite(modem_on_of, HIGH);  //prendo el modem    //Serial.println("punteros distintos");
                                        //dato = false;
      mdm.init();
      t_millis = millis();
      while (millis() <= t_millis + 20000) {
        delay(1);
      }
      mdm.update();
      inicio = true;
    }


    if (mdm.uploaded() && !mdm.available() && dato == false) {  //modem habilitado para subir un dato, no hay respuesta del servidor y no se esta enviando un dato anterior
      Serial.println(F("enviando "));
      dato = true;
      if (n == 1) {
        registrando();  //forma la cadena trama de registro
      } else {
        read_build();  //forma la cadena trama de envio de datos
      }

      mdm.upload(trama);
      // Serial.println(trama);
      memset(trama, 0, sizeof(trama));
      t_millis_recept = millis();
    }

  } else {
    //Serial.println(F("error porque no hubo respuesta y pasaron 3 minutos"));
    digitalWrite(modem_on_of, LOW);  //apago el modem hasta que se tome una nueva muestra
    inicio = false;                  // indico que el modem esta apagado
    dato = false;                    // indico que se puede enviar un dato la proxima vez
  }
}
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}