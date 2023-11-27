
# Datos²

## Introducción

El proyecto Datos² es un desarrollo cientifico tecnologico que esta brindando una herramineta y una plataforma para proyectos de ciencia ciudadana y la comunidad en general. El dispositivo que ofrece es Open-Source con el fin de recolectar, almacenar y compartir datos ambientales que se visualizan en la plataforma.

Buscamos que cada uno pueda apropiarse del proyecto de la manera más conveniente, generando un impacto en el presente y futuro de nuestra sociedad. Para ello diseñamos SEHMA (Sistema Educativo Hidro Metereologico y Ambiental) formada por diversos sensores que podrán ser incorporados según las necesidades de las comunidades, y por una telemetría que se encargará de subir los datos a una plataforma web para su visualización. Desde aquí, toda la comunidad podrá utilizar los datos generados para distintos proyectos o necesidades.

## SEHMA

<img align="right" width="260" height="430" src="https://github.com/ProyectoDatos2/Datos2/blob/main/Imagenes/Foto%20SEHMA.png">

El dispositivo SEHMA es un sistema educativo meteorológico de bajo costo, fácil ensamble y con componentes accesibles, que permite a cualquier persona armar su propia SEHMA. La estructura principal consta de piezas de contención impresas en 3D y una placa de control con comunicación GPRS que permite la lectura de sensores y carga de datos a la red. 
Tiene las siguientes funciones y sensores:
<br>
<br>
<br>
- Pluviómetro totalizador que mide el volumen de agua acumulada durante el evento
- Sensor Ultravioleta que mide la radiación UV global
-  Sensor de temperatura
- Sensor de humedad
- Panel solar que permite autonomía a través de energía renovable
<br>
<br>

### Componentes Electronicos


<table align="center">
  <thead>
    <tr>
      <th>Componentes</th>
      <th>Cantidad</th>
      <th>Link de Compra</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Arduino Nano</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1117390716-atmel-nano-v30-atmega328-usb-compatible-ch340-cable-usb-_JM#position=4&search_layout=grid&type=item&tracking_id=72562e09-0b68-4055-bb07-b63051b15a30">Arduino Nano</a></td>
    </tr>
    <tr>
      <td>Modulo Step-Up MT3608</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-677999119-fuente-step-up-mt3608-dc-dc-booster-hasta-28v-arduino-_JM#position=5&search_layout=grid&type=item&tracking_id=8fe16bd9-8071-4581-baf5-30e2aaf3523e">MT3608</a></td>
    </tr>
    <tr>
      <td>Modulo Driver Mosfet IRF520 24V 9A</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-732240129-modulo-driver-mosfet-irf520-24v-9a-controlador-arduino-pic-_JM#position=2&search_layout=grid&type=item&tracking_id=4971c395-66a7-4063-87e5-2919493828b4">IRF520</a></td>
    </tr>
    <tr>
      <td>Sensor de Lluvia Raindrop</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-628919809-sensor-de-lluvia-raindrop-nivel-de-agua-gotas-arduino-pic-_JM#position=1&search_layout=stack&type=item&tracking_id=30c9dd6e-3289-46bd-bf59-e12049e01e5d">Raindrop</a></td>
    </tr>
    <tr>
      <td>Reloj de Tiempo Real RTC DS1307 EEPROM 24C32</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-652467602-reloj-tiempo-real-rtc-ds1307-eeprom-24c32-arduino-todom">DS1307</a></td>
    </tr>
    <tr>
      <td>Baterias 18650 Samsung 3000 mA</td>
      <td>2</td>
      <td><a href="https://www.mercadolibre.com.ar/pila-samsung-inr18650-30q-cilindrica-1-unidad/p/MLA16952001#searchVariation=MLA16952001&position=1&search_layout=stack&type=product&tracking_id=262fdb61-1f61-41e8-b207-c581f31320b5">Bateria Samsung</a></td>
    </tr>
    <tr>
      <td>Holder para baterias 18650</td>
      <td>2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-810911247-10-portapilas-holder-bateria-18650-portapila-pack-x-10-_JM#position=36&search_layout=stack&type=item&tracking_id=58fa4027-1cb1-4b2d-b6bb-21a118f22569">Holder Baterias</a></td>
    </tr>
    <tr>
      <td>Sensor de Humedad y Temperatura DHT22</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-767685589-dht-22-sensor-humedad-y-temperatura-arduino-raspberry-_JM#position=1&search_layout=grid&type=item&tracking_id=bb4ca5b0-af4a-41e8-9012-47ee587c1c7a">DHT22</a></td>
    </tr>
    <tr>
      <td>Sensor de Luz Ultravioleta ML8511</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-921895103-modulo-sensor-luz-ultravioleta-uv-ml8511-arduino-_JM#position=6&search_layout=grid&type=item&tracking_id=b31fa0ab-c297-4237-8fd0-921482750ff8">ML8511</a></td>
    </tr>
    <tr>
      <td>Modem A6 Mini o SIM800L para Telecomunicaciones</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1437846022-modulo-gprs-a6-mini-cuatribanda-sms-gsm-gprs-ideal-arduino-_JM#position=31&search_layout=stack&type=item&tracking_id=b92e1ad1-eb10-41e8-8f06-538f5c0ab563">A6</a> \| <a href="https://articulo.mercadolibre.com.ar/MLA-1308505021-modulo-celular-gsm-gprs-sim800l-sim800-domotica-arduino-ubot-_JM#position=1&search_layout=grid&type=item&tracking_id=351d4014-7b06-4f31-87f1-ae97d6f6fd73">SIM800L</a></td>
    </tr>
    <tr>
      <td>Cargador Solar CN3791</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1106257985-cargador-bateria-lipo-uso-panel-solar-cn3791-arduino-elegir-_JM#position=30&search_layout=stack&type=item&tracking_id=802ccaf1-c51f-4cb6-aa45-b20c71b1849a">CN3791</a></td>
    </tr>
    <tr>
      <td>Celda de Carga de 10 Kg + Driver HX711</td>
      <td>1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-733004040-celda-de-carga-10kg-con-amplificador-hx711-arduino-candy-_JM#position=14&search_layout=grid&type=item&tracking_id=8e1c6a0c-bf37-4eee-bc3d-d1f6ae97d8ef">HX711</a></td>
    </tr>
  </tbody>
</table>



### Estructura


A la estructura se la pensó a partir de dos líneas de trabajo. La primera es en impresión 3D, que nos permite la replicacion exacta en cada sistema.

>[!IMPORTANT]
>**Se recomienda como material de impresión el _PETG_, ya que los demás materiales se pueden degradar debido a las condiciones climáticas a la que está expuesto el sistema. La altura de capa debe ser de 0,2 mm y con un relleno del 30% al 50% (a diferencia del 60% del siguiente cuadro). Se imprimió con 3 líneas de pared y con 3 capas de superficie**

<table align="center">
  <thead>
    <tr>
      <th>Pieza</th>
      <th>Peso [g]</th>
      <th>Cantidad</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Tapa Superior</td>
      <td>87</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tapa Inferior</td>
      <td>29</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Topes</td>
      <td>6</td>
      <td>3</td>
    </tr>
    <tr>
      <td>Base Portapila</td>
      <td>22</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Soporte Step-Up</td>
      <td>2</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Soporte Holder</td>
      <td>3</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Soporte Telemetría</td>
      <td>37</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Pieza en T</td>
      <td>11</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Separador PCB</td>
      <td>1</td>
      <td>3</td>
    </tr>
    <tr>
      <td>Mariposa</td>
      <td>3</td>
      <td>4</td>
    </tr>
    <tr>
      <td>Aro Totalizador</td>
      <td>31</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tapa Estanco A</td>
      <td>3</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tapa Estando B</td>
      <td>5</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Agarre Caño</td>
      <td>37</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Mensula Sensor Lluvia</td>
      <td>5</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Localizador Vase</td>
      <td>22</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Totalizador Pluviometro</td>
      <td>82</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tapa Protectora Viga</td>
      <td>12</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Cuerpo Sensor UV</td>
      <td>43</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tapa Inferior</td>
      <td>9</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Protector de Lente</td>
      <td>3</td>
      <td>1</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td><strong>476 (60% relleno)</strong></td>
      <td><strong>28</strong></td>
    </tr>
  </tbody>
</table>



La otra línea de trabajo sobre la que se pensó es en materiales que se puedan conseguir fácilmente en una ferretería, que a su vez conserva la calidad que se requiere para que funcione correctamente el sistema.


<table align="center">
  <thead>
    <tr>
      <th>Producto</th>
      <th>Medida</th>
      <th>Cantidad</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Philips o Punta Plana</td>
      <td>M3 x 8mm <br/> M3 x 30mm <br/> M4 x 16mm <br/> M4 x 75mm</td>
      <td>14 <br/> 1 <br/> 4 <br/> 3 <br/></td>
    </tr>
    <tr>
      <td>Varilla</td>
      <td>M4 x 210mm <br/> M4 x 60mm</td>
      <td>3 <br/> 3</td>
    </tr>
    <tr>
      <td>Tuerca</td>
      <td>M4 <br/> M3 <br/> M6</td>
      <td>16 <br/> 1 <br/> 1</td>
    </tr>
    <tr>
      <td>Tornillo</td>
      <td>M6 x 50mm</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Tubo</td>
      <td>4"</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Brida Acero</td>
      <td>Para 4"</td>
      <td>3</td>
    </tr>
    <tr>
      <td>O' Ring</td>
      <td>W2,6 mm x D105 mm</td>
      <td>2</td>
    </tr>
    <tr>
      <td>Vidrio Repuesto Lente Soldadura</td>
      <td>Estándar</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Prensa Cable</td>
      <td>1/2"</td>
      <td>5</td>
    </tr>
    <tr>
      <td>Pluviómetro</td>
      <td>-</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Cianoacrilato</td>
      <td>-</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Silicona</td>
      <td>-</td>
      <td>-</td>
    </tr>
  </tbody>
</table>



### Ensamblaje PCB


Para comenzar a armar el sistema, hay que preparar el PCB (Placa de Circuito Impreso) con el siguiente [circuito](https://github.com/ProyectoDatos2/Datos2/blob/main/Hardware/PCB_Datos2.pdf). Si no sabes como prepararla, haz clic [aqui](https://youtu.be/MX9_9U6Wnu8?si=8ijrH3XqB462RJCx&t=36).


Al ya tener la placa lista, deberia verse asi:



---

  <img align="right" width="380" height="460" src="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/PCB/PCB%20Arriba.png">



  <img align="left" width="380" height="460" src="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/PCB/PCB%20Abajo.png">

  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Placa desde arriba&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Placa desde abajo


---

#### **Paso 1** Componentes

Ten a mano todos los componentes necesarios para la placa. A continuación se presenta una imagen con cada uno. (Faltan componentes, despues le saco foto)

<br>

<img align="center" width="1200" height="550" src="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/PCB/Componentes%20Necesarios.jpg">

#### **Paso 2** Soldadura

<img align="right" width="455" height="400" src="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/PCB/Pines%20Placa.png">

<br><br><br><br><br><br>

Con un soldador de estaño como [este](https://www.mercadolibre.com.ar/soldador-de-estano-30w-tipo-lapiz-punta-ceramica-zurich-profesional-para-electronica-y-electricidad/p/MLA24319090?pdp_filters=category:MLA455278#searchVariation=MLA24319090&position=2&search_layout=stack&type=product&tracking_id=12611802-c75b-4189-8a99-06b5f4bf6936), procede a soldar los componentes mas bajos en altura primero, siguiendo por lo mas altos. Si no sabes como soldar, haz click [aqui](https://www.youtube.com/watch?v=snM_ABjXGsw). La placa se deberia ver asi al terminar: 

<br><br><br><br><br><br><br><br><br>

#### **Paso 3** Insertar componentes

<img align="right" width="455" height="400" src="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/PCB/Placa%20Terminada.png">

<br><br><br><br><br><br><br>

Al terminar el paso anterior, lo único que queda es insertar cada componente en su lugar correspondiente:

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
