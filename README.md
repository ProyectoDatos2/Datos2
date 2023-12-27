To change language:&nbsp;&nbsp;
[![en](https://img.shields.io/badge/lang-en-red.svg)](/README.en.md)

# Datos²

## Introducción

El proyecto Datos² es un desarrollo científico tecnológico que está brindando una herramienta y una plataforma para proyectos de ciencia ciudadana y la comunidad en general. El dispositivo que ofrece es Open-Source con el fin de recolectar, almacenar y compartir datos ambientales que se visualizan en la plataforma.

Buscamos que cada uno pueda apropiarse del proyecto de la manera más conveniente, generando un impacto en el presente y futuro de nuestra sociedad. Para ello diseñamos SEHMA (Sistema Educativo Hidro Metrológico y Ambiental) formada por diversos sensores que podrán ser incorporados según las necesidades de las comunidades, y por una telemetría que se encargará de subir los datos a una plataforma web para su visualización. Desde aquí, toda la comunidad podrá utilizar los datos generados para distintos proyectos o necesidades.

## SEHMA

<img align="right" width="260" height="430" src="Imagenes/FotoSEHMA.png">

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

### Componentes Electrónicos

<table align="center">
  <thead>
    <tr>
      <th>Componentes</th>
      <th>Cantidad</th>
      <th>Enlace de Compra</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Arduino Nano</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1117390716-atmel-nano-v30-atmega328-usb-compatible-ch340-cable-usb-_JM#position=4&search_layout=grid&type=item&tracking_id=72562e09-0b68-4055-bb07-b63051b15a30">Arduino Nano</a></td>
    </tr>
    <tr>
      <td>Modulo Step-Up MT3608</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-677999119-fuente-step-up-mt3608-dc-dc-booster-hasta-28v-arduino-_JM#position=5&search_layout=grid&type=item&tracking_id=8fe16bd9-8071-4581-baf5-30e2aaf3523e">MT3608</a></td>
    </tr>
    <tr>
      <td>Modulo Driver Mosfet IRF520 24V 9A</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-732240129-modulo-driver-mosfet-irf520-24v-9a-controlador-arduino-pic-_JM#position=2&search_layout=grid&type=item&tracking_id=4971c395-66a7-4063-87e5-2919493828b4">IRF520</a></td>
    </tr>
    <tr>
      <td>Sensor de Lluvia Raindrop</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-628919809-sensor-de-lluvia-raindrop-nivel-de-agua-gotas-arduino-pic-_JM#position=1&search_layout=stack&type=item&tracking_id=30c9dd6e-3289-46bd-bf59-e12049e01e5d">Raindrop</a></td>
    </tr>
    <tr>
      <td>Reloj de Tiempo Real RTC DS1307 EEPROM 24C32</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-652467602-reloj-tiempo-real-rtc-ds1307-eeprom-24c32-arduino-todom">DS1307</a></td>
    </tr>
    <tr>
      <td>Baterías 18650 Samsung 3000 mA</td>
      <td align="center">2</td>
      <td><a href="https://www.mercadolibre.com.ar/pila-samsung-inr18650-30q-cilindrica-1-unidad/p/MLA16952001#searchVariation=MLA16952001&position=1&search_layout=stack&type=product&tracking_id=262fdb61-1f61-41e8-b207-c581f31320b5">Bateria Samsung</a></td>
    </tr>
    <tr>
      <td>Holder para baterías 18650</td>
      <td align="center">2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-810911247-10-portapilas-holder-bateria-18650-portapila-pack-x-10-_JM#position=36&search_layout=stack&type=item&tracking_id=58fa4027-1cb1-4b2d-b6bb-21a118f22569">Holder Baterías</a></td>
    </tr>
    <tr>
      <td>Sensor de Humedad y Temperatura DHT22</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-767685589-dht-22-sensor-humedad-y-temperatura-arduino-raspberry-_JM#position=1&search_layout=grid&type=item&tracking_id=bb4ca5b0-af4a-41e8-9012-47ee587c1c7a">DHT22</a></td>
    </tr>
    <tr>
      <td>Sensor de Luz Ultravioleta ML8511</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-921895103-modulo-sensor-luz-ultravioleta-uv-ml8511-arduino-_JM#position=6&search_layout=grid&type=item&tracking_id=b31fa0ab-c297-4237-8fd0-921482750ff8">ML8511</a></td>
    </tr>
    <tr>
      <td>Modem A6 Mini o SIM800L para Telecomunicaciones</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1437846022-modulo-gprs-a6-mini-cuatribanda-sms-gsm-gprs-ideal-arduino-_JM#position=31&search_layout=stack&type=item&tracking_id=b92e1ad1-eb10-41e8-8f06-538f5c0ab563">A6</a> | <a href="https://articulo.mercadolibre.com.ar/MLA-1308505021-modulo-celular-gsm-gprs-sim800l-sim800-domotica-arduino-ubot-_JM#position=1&search_layout=grid&type=item&tracking_id=351d4014-7b06-4f31-87f1-ae97d6f6fd73">SIM800L</a></td>
    </tr>
    <tr>
      <td>Cargador Solar CN3791</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1106257985-cargador-bateria-lipo-uso-panel-solar-cn3791-arduino-elegir-_JM#position=30&search_layout=stack&type=item&tracking_id=802ccaf1-c51f-4cb6-aa45-b20c71b1849a">CN3791</a></td>
    </tr>
    <tr>
      <td>Celda de Carga de 10 Kg + Driver HX711</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-733004040-celda-de-carga-10kg-con-amplificador-hx711-arduino-candy-_JM#position=14&search_layout=grid&type=item&tracking_id=8e1c6a0c-bf37-4eee-bc3d-d1f6ae97d8ef">HX711</a></td>
    </tr>
      <tr>
      <td>Kit Molex x 2 Pines</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1530414156-kit-x-30u-2-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=3&search_layout=grid&type=item&tracking_id=feedb67d-d999-4e10-83dc-8528ae580bf2">Kit Molex x 2</a></td>
    </tr>
     <tr>
      <td>Kit Molex x 3 Pines</td>
      <td align="center">3</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1547547796-kit-x-30u-3-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=51&search_layout=stack&type=item&tracking_id=4f2edef0-6c5c-400e-8229-65fce00075ec">Kit Molex x 3</a></td>
    </tr>
     <tr>
      <td>Kit Molex x 4 Pines</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1544835568-kit-x-30u-4-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=1&search_layout=grid&type=item&tracking_id=8ec89334-1835-4339-9225-2a076de11fa3">Kit Molex x 4</a></td>
    </tr>
     <tr>
      <td>Kit Molex x 5 Pines</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1548402732-kit-x-30u-5-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=2&search_layout=grid&type=item&tracking_id=0542de33-9c89-4d24-a9b2-bdc8694cdf21">Kit Molex x 5</a></td>
    </tr>
     <tr>
      <td>Resistencias 10K Ω</td>
      <td align="center">2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-841986521-10-x-resistencias-10k-ohm-1-14w-metal-film-_JM#position=8&search_layout=grid&type=item&tracking_id=424a52a9-8c38-42ca-8fbc-487ac3932614">Resistencias</a></td>
    </tr>
    <tr>
      <td>Tira Pines Hembra</td>
      <td align="center">2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-879655442-tira-de-40-pines-hembra-paso-254mm-recta-1-fila-_JM#position=4&search_layout=grid&type=item&tracking_id=f194ae8c-4a52-457f-882d-bc9aa2cb7714">Tira Pines Hembra</a></td>
    </tr>
  </tbody>
</table>

### Estructura

A la estructura se la pensó a partir de dos líneas de trabajo. La primera es en impresión 3D, que nos permite la replicación exacta en cada sistema.

>[!IMPORTANT]
>**Configuración de Impresión:**
>- Altura de Capa: 0,2 mm
>- Relleno: 30% al 50%
>- Líneas de pared: 3
>- Capas de Superficie: 3


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
      <td align="center">87</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Inferior</td>
      <td align="center">29</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Topes</td>
      <td align="center">6</td>
      <td align="center">3</td>
    </tr>
    <tr>
      <td>Base Porta pila</td>
      <td align="center">22</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Soporte Step-Up</td>
      <td align="center">2</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Soporte Holder</td>
      <td align="center">3</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Soporte Telemetría</td>
      <td align="center">37</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Pieza en T</td>
      <td align="center">11</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Separador PCB</td>
      <td align="center">1</td>
      <td align="center">3</td>
    </tr>
    <tr>
      <td>Mariposa</td>
      <td align="center">3</td>
      <td align="center">4</td>
    </tr>
    <tr>
      <td>Aro Totalizador</td>
      <td align="center">31</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Estanco A</td>
      <td align="center">3</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Estanco B</td>
      <td align="center">5</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Agarre Caño</td>
      <td align="center">37</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Ménsula Sensor Lluvia</td>
      <td align="center">5</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Localizador Base</td>
      <td align="center">22</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Totalizador Pluviómetro</td>
      <td align="center">82</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Protectora Viga</td>
      <td align="center">12</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Cuerpo Sensor UV</td>
      <td align="center">43</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Inferior</td>
      <td align="center">9</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Protector de Lente</td>
      <td align="center">3</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td align="center"><strong>(hay que pesar) (-% relleno)</strong></td>
      <td align="center"><strong>28</strong></td>
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
      <td>Cable Seis Polos</td>
      <td align="center">3 m</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Philips o Punta Plana</td>
      <td align="center">M3 x 8mm <br/> M3 x 30mm <br/> M4 x 16mm <br/> M4 x 75mm</td>
      <td align="center">14 <br/> 1 <br/> 4 <br/> 3 <br/></td>
    </tr>
    <tr>
      <td>Varilla</td>
      <td align="center">M4 x 210mm <br/> M4 x 60mm</td>
      <td align="center">3 <br/> 3</td>
    </tr>
    <tr>
      <td>Tuerca</td>
      <td align="center">M4 <br/> M3 <br/> M6</td>
      <td align="center">16 <br/> 1 <br/> 1</td>
    </tr>
    <tr>
      <td>Tornillo</td>
      <td align="center">M6 x 50mm</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tubo</td>
      <td align="center">4"</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Brida Acero</td>
      <td align="center">Para 4"</td>
      <td align="center">3</td>
    </tr>
    <tr>
      <td>O' Ring</td>
      <td align="center">W2,6 mm x D105 mm</td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td>Vidrio Repuesto Lente Soldadura</td>
      <td align="center">Estándar</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Prensa Cable</td>
      <td align="center">1/2"</td>
      <td align="center">5</td>
    </tr>
    <tr>
      <td>Pluviómetro</td>
      <td align="center">-</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Ciano acrilato</td>
      <td align="center">-</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Silicona</td>
      <td align="center">-</td>
      <td align="center">-</td>
    </tr>
  </tbody>
</table>

### Armado PCB

Para comenzar a armar el sistema, hay que preparar el PCB (Placa de Circuito Impreso) con el siguiente [circuito](Hardware/PCB_Datos2.pdf). Si no sabes cómo prepararla, haz clic [aquí](https://youtu.be/MX9_9U6Wnu8?si=8ijrH3XqB462RJCx&t=36).

Al ya tener la placa lista, perforando con una mecha de 1mm, debería verse así:

<table align="center">
  <thead>
    <tr>
      <th><img align="center" width="430" height="380" src="Imagenes/PCB/PCB Abajo.png"></th>
      <th><img align="center" width="430" height="380" src="Imagenes/PCB/PCB Arriba.png"></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center">Placa desde Abajo</td>
      <td align="center">Placa desde Arriba</td>
    </tr>
  </tbody>
</table>

<br>

>[!IMPORTANT]
>Hay que estar seguro de que no se hayan cometido errores durante el proceso, así que con un multímetro en modo continuidad se puede verificar que no haya cortocircuitos entre Vcc y GND, como también entre cada uno de los pines de los componentes.

#### **Paso 1** - Componentes

Ten a mano todos los componentes necesarios para la placa. Se recomienda probar que cada uno de ellos esté funcionando correctamente. A continuación, se presenta una imagen con cada uno. (Faltan componentes, después le saco foto)

<br>

<img align="center" width="1200" height="550" src="Imagenes/PCB/Componentes Necesarios.jpg">

#### **Paso 2** - Soldadura

<img align="right" width="455" height="455" src="Imagenes/PCB/Pines Placa.png">

<br><br><br><br><br><br>

Con un soldador de estaño como [este](https://www.mercadolibre.com.ar/soldador-de-estano-30w-tipo-lapiz-punta-ceramica-zurich-profesional-para-electronica-y-electricidad/p/MLA24319090?pdp_filters=category:MLA455278#searchVariation=MLA24319090&position=2&search_layout=stack&type=product&tracking_id=12611802-c75b-4189-8a99-06b5f4bf6936), procede a soldar los componentes más bajos en altura primero, siguiendo por lo más altos. Si no sabes cómo soldar, haz click [aquí](https://www.youtube.com/watch?v=snM_ABjXGsw). La placa se debería ver así al terminar: 

<br><br><br><br><br><br><br><br><br>

#### **Paso 3** - Integración

<img align="right" width="500" height="455" src="Imagenes/PCB/Placa Terminada.png">

<br><br><br><br><br>

Lo único que queda ahora es cargar el [programa](Firmware/Estacion_v1.4_1hora/Estacion_v1.4_1hora.ino) en la Arduino e insertar cada componente (habiendo asegurado que funcionan correctamente) en su lugar:

<br><br><br><br><br><br><br><br><br><br><br>

### Ensamblaje Sistema

Para comenzar a armar el sistema, hay que ya haber terminado la placa, como a su vez ya tener impreso y compradas todas las [piezas](Impresion%203D%20STL/) detalladas en este documento. <br><br><br>

#### **Paso 1** - Preparar sistema de Autonomía

<br><br>

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/Ensamble/Sistema%20de%20Autonom%C3%ADa/Base%20PortaPila%20Completa%20-%20Blanco.png">
  <source media="(prefers-color-scheme: light)" srcset="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/Ensamble/Sistema%20de%20Autonom%C3%ADa/Base%20PortaPila%20Completa%20-%20Negro.png">
  <img align="left" width="440" height="400" src="Imagenes/Ensamble/Sistema de Autonomía/Base PortaPila Completa - Negro.png">
</picture>

<br><br><br>

El sistema de autonomía está formado por: 
- Dos baterías 18650
- Placa de Step Up 
- Módulo de carga solar 
Todo el conjunto esta sostenido por la [placa base portapilas](Impresion%203D%20STL/Telemetría/Placa%20base%20portapilas.STL) y a su vez la placa de Step Up esta sobre el [holder Step Up](Impresion%203D%20STL/Telemetría/Holder%20step%20up.STL) y el módulo de carga solar esta sobre el [holder cargador](Impresion%203D%20STL/Telemetría/Holder%20cargador.STL). El sistema unido por la gotita debería quedar como la imagen a la izquierda.

<br><br><br><br><br><br><br>

<img align="right" width="440" height="400" src="Imagenes/Ensamble/Sistema de Autonomía/Base PortaPila Completa (2).png">

<br><br><br><br><br>

Con las pilas ya puestas y desde otra perspectiva: 

<br><br><br><br><br><br><br><br><br><br><br>

El conexionado de este sistema es bastante simple, solo hay que seguir el [esquematico](Imagenes/Ensamble/Sistema%20de%20Autonomía/Conexionado%20Sistema%20de%20Autonomia.jpg) adjunto. Al accionar el interruptor, se debería prender todo el sistema. 

#### **Paso 2** - Preparar sensor UV

Para la estructura sensor UV se necesita:
- [Base Sensor UV](Impresion%203D%20STL/UV/Base%20sensor%20uv.STL)
- [Cuerpo Sensor UV](Impresion%203D%20STL/UV/Cuerpo%20sensor%20uv.STL)
- [Tapa Sensor UV](Impresion%203D%20STL/UV/Tapa%20sensor%20uv.STL)
- [Lente Sensor UV](Imagenes/Ensamble/Conjunto%20UV/Lente%20Sensor%20UV.jpg)
- Sensor UV 8511

1. Se debe primero atornillar o pegar con la gotita el sensor al cuerpo como se ve en esta [imagen](Imagenes/Ensamble/Conjunto%20UV/Colocación%20Sensor%20UV.png).
2. Luego, colocar el lente sobre el cuerpo, y ajustarlo pegando con la gotita la tapa para que quede de [esta](Imagenes/Ensamble/Conjunto%20UV/Estructura%20Sensor%20UV.png) manera (deben coincidir las muescas de la tapa y el cuerpo).
3. Finalmente, atornillar la base al cuerpo ya armado.

(Imagen de todo el conjunto UV Completo).

#### **Paso 3** - Preparar Pluviómetro

Para el conjunto del pluviómetro se precisa de lo siguiente:

- [Aro Totalizador](Impresion%203D%20STL/Pluviómetro/Aro%20totalizador%20sensor%20lluvia.STL)
- [Ménsula](Impresion%203D%20STL/Pluviómetro/Mensula%201%20sensor%20de%20lluvia.STL)
- [Tapa](Impresion%203D%20STL/Pluviómetro/Tapa%20version%20master.STL)
- [Totalizador](Impresion%203D%20STL/Pluviómetro/Totalizador%20Pluviómetro%20Version%20Master.STL)
- [Estanco A](Impresion%203D%20STL/Pluviómetro/estanco_a.STL)
- [Estanco B](Impresion%203D%20STL/Pluviómetro/estanco%20b.STL)
- [Localizador](Impresion%203D%20STL/Pluviómetro/localizador%20vaso%20pluviómetro.STL)
- Celda de Carga + Driver HX711

1. Hay que colocar las varillas de 210 mm en el aro totalizador, asegurando que quede tanto la rosca como la varilla al raz del aro y con una contra rosca del lado contrario, como se muestra [aqui](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Varillas.jpg).

2. Del lado de la muesca en el aro, [se inserta la ménsula](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Mensula.jpg), sujetada tambien por otra rosca.

3. Sobre el totalizador, se coloca la celda de carga con la [orientación correcta](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Celda%20de%20Carga.jpg) y se [atornilla desde abajo](Imagenes/Ensamble/Conjunto%20Pluviómetro/Tornillos%20Celda%20de%20Carga.jpg). Luego, [atornille el totalizador](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Celda%20de%20Carga.jpg) sobre la celda

4. Conectar la [celda de carga al driver](Imagenes/Ensamble/Conjunto%20Pluviómetro/Conexión%20Celda%20de%20Carga.png) y los cables de entrada/salida del otro lado.

5. Guardar el driver [dentro de los estancos A y B](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Driver%20Celda%20de%20Carga.jpg) y [posicionar al lado de la celda](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Driver%20Celda%20de%20Carga%202.jpg) para luego [colocar la tapa sobre ambos](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Tapa.jpg).

6. Luego de esto, hay que asegurarse que no hayan pesos "fantasma" en la celda, asi que se usará el arduino para ajustar la tara de la celda.

7. Ya casi terminando, inserte primero las contraroscas en las varillas, para luego colocar el aro en el totalizador, ajustando tambien roscas del lado contrario. No ajuste tanto estas roscas, ya que hay que nivelar el sistema.

8. Colocando el conjunto sobre una estructura a nivel plana, con espacio para ajustar las tuercas, ajuste el largo de cada una de las varillas en relacion al totalizador para que el aro quede a nivel. 

<table align="center">
  <thead>
    <tr>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 1.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 2.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 3.jpg"></th>
    </tr>
  </thead>
</table>

#### **Paso 4** - Integración Final

Ya teniendo completados todos los pasos anteriores, lo único que queda es unir cada uno de los sistemas individuales. Necesitaremos las siguientes piezas:

- [Tapa Inferior](Impresion%203D%20STL/Telemetría/Tapa%20telemetría%20inferior.STL)
- [Separador PCB a Techo Pila](Impresion%203D%20STL/Telemetría/Separador%20PCB%20a%20techo%20pila.STL)
- [Tapa con Encastre](Impresion%203D%20STL/Telemetría)
- [Tope Interno](Impresion%203D%20STL/Telemetría/Tope%20interno%20telemetría.STL)
- [Traba de Agarre](Impresion%203D%20STL/Telemetría/Traba%20de%20agarre%20telemetría.STL)
- [Pieza en T](Impresion%203D%20STL/Telemetría/pieza%20T.STL)

1. Para comenzar, lo que haremos es colocar el O-Ring, [enroscar las varillas](Imagenes/Ensamble/Sistema%20General/O'Ring%20Colocación.jpg) de 60 mm y [atornillar la pieza en T](Imagenes/Ensamble/Sistema%20General/Colocación%20Pieza%20en%20T.jpg) en la Tapa Inferior.

2. Insertar los prensa cables y el interruptor de encendido como se muestra en las imágenes de abajo

  <img align="left" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion de In-Out.png">

  <img align="right" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion In-Out 2.png">

  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

3. Pegar con la gotita el sensor AHT sobre la pieza en T, como se puede ver en esta [imagen](Imagenes/Ensamble/Sistema%20General/Colocación%20Sensor%20AHT.jpg)

4. Luego de pasar cada uno de los respectivos cables por los prensa cables, se tiene que agregar un cable del lado normalmente abierto del interruptor, el cual se une después a uno de los conectores molex que van conectados a la placa.

5. Armar cada uno de los molex (si no sabe cómo, [aquí](https://www.youtube.com/watch?v=tU62sOKsNWI) hay un tutorial), y coloque el PCB de la siguiente manera:

  <img align="left" width="400" height="400" src="Imagenes/Ensamble/Sistema General/Molex 1.png">

  <img align="right" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Molex 2.png">

  
  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

  A continuación, se detalla cada una de las posiciones de los cables del molex:

<table align="center">
  <thead>
    <tr>
      <th>Sensor</th>
      <th>Números de Pin Molex</th>
      <th>Función del Pin</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Raindrop</td>
      <td align="center">1<br>2<br>3<br>4</td>
      <td align="center">CLK<br>DOUT<br>GND<br>5 V</td>
    </tr>
    <tr>
      <td>UV</td>
      <td align="center">5<br>6<br>7<br>8<br>9</td>
      <td align="center">GND<br>3v3<br>ENABLE<br>NC<br>OUT UV</td>
    </tr>
    <tr>
      <td>Batería + Lluvia</td>
      <td align="center">10<br>11<br>12</td>
      <td align="center">V BAT (Cable que viene del Interruptor)<br>Pin Lluvia 1<br>Pin Lluvia 2</td>
    </tr>
    <tr>
      <td>AHT</td>
      <td align="center">1<br>2<br>3</td>
      <td align="center">OUT<br>GND<br>5 V</td>
    </tr>
    <tr>
      <td>Alimentación</td>
      <td align="center">1<br>2</td>
      <td align="center">5 V<br>GND</td>
    </tr>
  </tbody>
</table>

6. Al terminar con el paso anterior, estando seguro de que cada conector se haya armado correctamente, se [colocan los separadores](Imagenes/Ensamble/Sistema%20General/Separadores%20Colocados.png) entre el PCB y la placa del sistema de autonomía, para que luego se inserte el sistema y se ajusten las tuercas correspondientes:

<img align="center" width="800" height="500" src="Imagenes/Ensamble/Sistema General/Sistema Terminado 1.png">