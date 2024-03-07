Para cambiar idioma:&nbsp;&nbsp;
[![es](https://img.shields.io/badge/lang-es-yellow.svg)](/README.md) 

# Datos²

## Introduction

The project Datos² is a scientific and technological development that is providing a tool and a platform for citizen science projects and the community in general. The device it offers is Open-Source with the aim of collecting, storing, and sharing environmental data that is visualized on the platform.

We aim for everyone to be able to take ownership of the project in the most convenient way, generating an impact on the present and future of our society. To achieve this, we designed SEHMA, (by the acronyms in spanish, Hydro Meteorological and Environmental Educational System), composed of various sensors that can be incorporated according to the needs of the communities, and a telemetry system that will upload the data to a web platform for visualization. From here, the entire community can use the generated data for various projects or needs.

## SEHMA

<img align="right" width="260" height="430" src="Imagenes/FotoSEHMA.png">

The SEHMA device is an affordable meteorological educational system, easy to assemble, and with accessible components, allowing anyone to build their own SEHMA. The main structure consists of 3D-printed containment parts and a control board with GPRS communication that enables sensor readings and data uploading to the network. It has the following functions and sensors:
<br>
<br>
<br>

- Totalizing rain gauge that measures the volume of accumulated water during the event
- Ultraviolet sensor that measures global UV radiation
- Temperature sensor
- Humidity sensor
- Solar panel that provides autonomy through renewable energy

<br>
<br>

### Electronic Components

<table align="center">
  <thead>
    <tr>
      <th>Components</th>
      <th>Quantity</th>
      <th>Purchase Link</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Arduino Nano</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1117390716-atmel-nano-v30-atmega328-usb-compatible-ch340-cable-usb-_JM#position=4&search_layout=grid&type=item&tracking_id=72562e09-0b68-4055-bb07-b63051b15a30">Arduino Nano</a></td>
    </tr>
    <tr>
      <td>Step-Up Module MT3608</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-677999119-fuente-step-up-mt3608-dc-dc-booster-hasta-28v-arduino-_JM#position=5&search_layout=grid&type=item&tracking_id=8fe16bd9-8071-4581-baf5-30e2aaf3523e">MT3608</a></td>
    </tr>
    <tr>
      <td>IRF520 MOSFET Driver Module 24V 9A</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-732240129-modulo-driver-mosfet-irf520-24v-9a-controlador-arduino-pic-_JM#position=2&search_layout=grid&type=item&tracking_id=4971c395-66a7-4063-87e5-2919493828b4">IRF520</a></td>
    </tr>
    <tr>
      <td>Raindrop Rain Sensor</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-628919809-sensor-de-lluvia-raindrop-nivel-de-agua-gotas-arduino-pic-_JM#position=1&search_layout=stack&type=item&tracking_id=30c9dd6e-3289-46bd-bf59-e12049e01e5d">Raindrop</a></td>
    </tr>
    <tr>
      <td>RTC DS1307 EEPROM 24C32</td>
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
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-767685589-dht-22-sensor-humedad-y-temperatura-arduino-raspberry-_JM#position=1&search_layout=grid&type=item&tracking_id=bb4ca5b0-af4a-41e8-9012-47ee587c1c7a">DHT22

</a></td>
    </tr>
    <tr>
      <td>ML8511 Ultraviolet Light Sensor</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-921895103-modulo-sensor-luz-ultravioleta-uv-ml8511-arduino-_JM#position=6&search_layout=grid&type=item&tracking_id=b31fa0ab-c297-4237-8fd0-921482750ff8">ML8511</a></td>
    </tr>
    <tr>
      <td>A6 Mini Modem or SIM800L for Telecommunications</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1437846022-modulo-gprs-a6-mini-cuatribanda-sms-gsm-gprs-ideal-arduino-_JM#position=31&search_layout=stack&type=item&tracking_id=b92e1ad1-eb10-41e8-8f06-538f5c0ab563">A6</a> | <a href="https://articulo.mercadolibre.com.ar/MLA-1308505021-modulo-celular-gsm-gprs-sim800l-sim800-domotica-arduino-ubot-_JM#position=1&search_layout=grid&type=item&tracking_id=351d4014-7b06-4f31-87f1-ae97d6f6fd73">SIM800L</a></td>
    </tr>
    <tr>
      <td>CN3791 Solar Charger</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1106257985-cargador-bateria-lipo-uso-panel-solar-cn3791-arduino-elegir-_JM#position=30&search_layout=stack&type=item&tracking_id=802ccaf1-c51f-4cb6-aa45-b20c71b1849a">CN3791</a></td>
    </tr>
    <tr>
      <td>10 Kg Load Cell + HX711 Driver</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-733004040-celda-de-carga-10kg-con-amplificador-hx711-arduino-candy-_JM#position=14&search_layout=grid&type=item&tracking_id=8e1c6a0c-bf37-4eee-bc3d-d1f6ae97d8ef">HX711</a></td>
    </tr>
      <tr>
      <td>Molex Kit x 2 Pins</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1530414156-kit-x-30u-2-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=3&search_layout=grid&type=item&tracking_id=feedb67d-d999-4e10-83dc-8528ae580bf2">Kit Molex x 2</a></td>
    </tr>
     <tr>
      <td>Molex Kit x 3 Pins</td>
      <td align="center">3</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1547547796-kit-x-30u-3-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=51&search_layout=stack&type=item&tracking_id=4f2edef0-6c5c-400e-8229-65fce00075ec">Kit Molex x 3</a></td>
    </tr>
     <tr>
      <td>Molex Kit x 4 Pins</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1544835568-kit-x-30u-4-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=1&search_layout=grid&type=item&tracking_id=8ec89334-1835-4339-9225-2a076de11fa3">Kit Molex x 4</a></td>
    </tr>
     <tr>
      <td>Molex Kit x 5 Pins</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1548402732-kit-x-30u-5-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=2&search_layout=grid&type=item&tracking_id=0542de33-9c89-4d24-a9b2-bdc8694cdf21">Kit Molex x 5</a></td>
    </tr>
     <tr>
      <td>10K Ω Resistors</td>
      <td align="center">2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-841986521-10-x-resistencias-10k-ohm-1-14w-metal-film-_JM#position=8&search_layout=grid&type=item&tracking_id=424a52a9-8c38-42ca-8fbc-487ac3932614">Resistencias</a></td>
    </tr>
    <tr>
      <td>Female Pin Strip</td>
      <td align="center">2</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-879655442-tira-de-40-pines-hembra-paso-254mm-recta-1-fila-_JM#position=4&search_layout=grid&type=item&tracking_id=f194ae8c-4a52-457f-882d-bc9aa2cb7714">Tira Pines Hembra</a></td>
    </tr>
    <tr>
      <td>On/Off Switch</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1457486094-llave-electronica-tecla-interruptora-redonda-alcides-2500-_JM#position=1&search_layout=stack&type=item&tracking_id=a7d7d1b3-e35b-4af4-bd44-98e7a9482798">Interruptor</a></td>
    </tr>
    <tr>
      <td>3G Antenna</td>
      <td align="center">1</td>
      <td><a href="https://tienda.ityt.com.ar/antenas-gsm-2g-3g-4g/8259-antena-modem-2g-3g-4g-lte-exterior-cable-5m-sma-itytarg.html">Antena</a></td>
    </tr>
    <tr>
      <td>Pigtail Adapter</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-740053599-cable-pigtail-ufl-ipx-a-sma-hembra-cable-antena-15-cm-_JM#position=2&search_layout=stack&type=item&tracking_id=59d777cc-f65b-4182-b457-41c2329058b1">Pigtail SMA a U.fl</a></td>
    </tr>
    <tr>
      <td>CR2032 Battery</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-840122267-5-x-pilas-boton-cr2032-vinnic-2032-san-martin-caseros-_JM#position=12&search_layout=stack&type=item&tracking_id=319399d4-d1e2-4e31-b8e0-133f9c6257ec">Pila</a></td>
    </tr>
    <tr>
      <td>Prepaid Chip</td>
      <td align="center">1</td>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1248406422-chip-prepago-movistar-personal-claro-tuenti-gsm-4g-_JM#position=5&search_layout=stack&type=item&tracking_id=6764688f-a6c5-4715-9250-fc3602753aae">Chip</a></td>
    </tr>

  </tbody>
</table>

### Structure

The structure of the system was designed with two main lines of work in mind. The first involves 3D printing, which allows for exact replication in each system.

<table align="left">
  <thead>
    <tr>
      <th colspan="3">Pluviometer</th>
    </tr>
    <tr>
      <th>Piece</th>
      <th>Weight [g]</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Aro</td>
      <td align="center">31</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Estanco A</td>
      <td align="center">3</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Estanco B</td>
      <td align="center">4</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Localizador</td>
      <td align="center">24</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Ménsula</td>
      <td align="center">6</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa</td>
      <td align="center">13</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Totalizador Pluviómetro</td>
      <td align="center">81</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td align="center">162</td>
      <td align="center">7</td>
    </tr>
  </tbody>
</table>

<table align="center">
  <thead>
    <tr>
      <th colspan="3">Telemetry</th>
    </tr>
    <tr>
      <th>Piece</th>
      <th>Weight [g]</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Holder Cargador</td>
      <td align="center">2</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Holder Step-Up</td>
      <td align="center">2</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Pieza en T</td>
      <td align="center">11</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Placa Porta pila</td>
      <td align="center">23</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Separador</td>
      <td align="center">1</td>
      <td align="center">3</td>
    </tr>
    <tr>
      <td>Tapa Inferior</td>
      <td align="center">31</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa Superior</td>
      <td align="center">88</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Topes</td>
      <td align="center">5</td>
      <td align="center">3</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td align="center">175</td>
      <td align="center">12</td>
    </tr>
  </tbody>
</table>

<table align="left">
  <thead>
    <tr>
      <th colspan="3">UV</th>
    </tr>
    <tr>
      <th>Piece</th>
      <th>Weight [g]</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Base</td>
      <td align="center">10</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Cuerpo</td>
      <td align="center">44</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tapa</td>
      <td align="center">2</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td align="center">56</td>
      <td align="center">3</td>
    </tr>
  </tbody>
</table>

<table align="center">
  <thead>
    <tr>
      <th colspan="3">Agarre</th>
    </tr>
    <tr>
      <th>Piece</th>
      <th>Weight [g]</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Fijacion</td>
      <td align="center">38</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Mariposa</td>
      <td align="center">3</td>
      <td align="center">4</td>
    </tr>
    <tr>
      <td>Traba</td>
      <td align="center">38</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><strong>TOTAL</strong></td>
      <td align="center">88</td>
      <td align="center">6</td>
    </tr>
  </tbody>
</table>

The other line of work considered materials easily obtainable in a hardware store, ensuring the quality required for the system to function correctly.


### Miscellaneous Materials
<table align="center">
  <thead>
    <tr>
      <th>Product</th>
      <th>Measurement</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Cable Cuatro Polos</td>
      <td align="center">6 m</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Philips o Punta Plana</td>
      <td align="center">M3 x 8mm, M3 x 30mm, M4 x 16mm, M4 x 75mm</td>
      <td align="center">14, 1, 4, 3</td>
    </tr>
    <tr>
      <td>Varilla</td>
      <td align="center">M4 x 210mm, M4 x 60mm</td>
      <td align="center">3, 3</td>
    </tr>
    <tr>
      <td>Tuerca</td>
      <td align="center">M4, M3, M6</td>
      <td align="center">16, 1, 1</td>
    </tr>
    <tr>
      <td>Tornillo</td>
      <td align="center">M6 x 50mm</td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tubo Unión entre 2</td>
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
      <td align="center">6</td>
    </tr>
    <tr>
      <td>Pluviometer</td>
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
    <tr>
      <td>Pintura Latex</td>
      <td align="center">-</td>
      <td align="center">-</td>
    </tr>
  </tbody>
</table>


### PCB Assembly

To start assembling the system, you need to prepare the PCB (Printed Circuit Board) with the following [circuit](Hardware/PCB_Datos2.pdf). If you're unsure how to prepare it, click [here](https://youtu.be/MX9_9U6Wnu8?si=8ijrH3XqB462RJCx&t=36).

Once the board is ready, after drilling with a 1mm drill bit, it should look like this:

<table align="center">
  <thead>
    <tr>
      <th><img align="center" width="430" height="380" src="Imagenes/PCB/PCB Abajo.png"></th>
      <th><img align="center" width="430" height="380" src="Imagenes/PCB/PCB Arriba.png"></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center">Board from bottom</td>
      <td align="center">Board from top</td>
    </tr>
  </tbody>
</table>

<br>

>[!IMPORTANT]
>It is important to ensure that no errors have occurred during the process. Using a multimeter in continuity mode, you can verify that there are no short circuits between Vcc and GND, as well as between each of the pins of the components.

#### **Step 1** - Components

Have all the necessary components on hand for the board. It is recommended to test that each of them is functioning correctly. Below is an image with each one.

<br>

<img align="center" width="1200" height="550" src="Imagenes/PCB/Componentes Necesarios.jpg">

#### **Step 2** - Soldering

<img align="right" width="455" height="455" src="Imagenes/PCB/Pines Placa.png">

<br><br><br><br><br><br>


With a soldering iron like [this one](https://www.mercadolibre.com.ar/soldador-de-estano-30w-tipo-lapiz-punta-ceramica-zurich-profesional-para-electronica-y-electricidad/p/MLA24319090?pdp_filters=category:MLA455278#searchVariation=MLA24319090&position=2&search_layout=stack&type=product&tracking_id=12611802-c75b-4189-8a99-06b5f4bf6936), proceed to solder the lower height components first, followed by the taller ones. If you're not familiar with soldering, [click here](https://www.youtube.com/watch?v=snM_ABjXGsw). The board should look like this when finished:

<br><br><br><br><br><br><br><br><br>

#### **Step 3** - Integration

<img align="right" width="500" height="455" src="Imagenes/PCB/Placa Terminada.png">

<br><br><br><br><br>

The only thing left now is to upload the [program](Firmware/Estacion_v1.4_1hora/Estacion_v1.4_1hora.ino) to the Arduino and insert each component (ensuring they work correctly) in their respective places:

<br><br><br><br><br><br><br><br><br><br><br>

### System Assembly

To begin assembling the system, you should have already finished the board and, in turn, have printed and purchased all the [pieces](Impresion%203D%20STL/) detailed in this document. <br><br><br>

#### **Step 1** - Preparar sistema de Autonomía

<br><br>

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/Ensamble/Sistema%20de%20Autonom%C3%ADa/Base%20PortaPila%20Completa%20-%20Blanco.png">
  <source media="(prefers-color-scheme: light)" srcset="https://github.com/ProyectoDatos2/Datos2/blob/Readme-Writing/Imagenes/Ensamble/Sistema%20de%20Autonom%C3%ADa/Base%20PortaPila%20Completa%20-%20Negro.png">
  <img align="left" width="440" height="400" src="Imagenes/Ensamble/Sistema de Autonomía/Base PortaPila Completa - Negro.png">
</picture>

<br><br><br>

The autonomy system consists of:

- Two 18650 batteries
- Step-Up board
- Solar charging module

The entire assembly is supported by the [battery holder base plate](Impresion%203D%20STL/Telemetría/Placa%20base%20portapilas.STL), and, in turn, the Step-Up board is on the [Step-Up holder](Impresion%203D%20STL/Telemetría/Holder%20step%20up.STL), while the solar charging module is on the [charger holder](Impresion%203D%20STL/Telemetría/Holder%20cargador.STL). The system, joined by super glue, should look like the image on the left.

<br><br><br>

The wiring must be flush so that the cables are not uncomfortable when connecting the systems with screws. To achieve this, follow these steps:

1. First, [pass the positive cable](Imagenes/Ensamble/Sistema%20de%20Autonomía/Cable%20Positivo%20por%20Abajo.jpg) under the solar charger for later [splicing](Imagenes/Ensamble/Sistema%20de%20Autonomía/Empalme%20Positivos.jpg). All splices are insulated with heat-shrink material.

2. Next, [splice the negative cables](Imagenes/Ensamble/Sistema%20de%20Autonomía/Empalme%20Negativos.jpg) with that length, so they do not interfere with the screw hole. Glue them if necessary.

3. With positive braided cables, from the other battery output of the solar charger, lead them to the switch and back to the positive input of the [step-up module]().

4. Near the previous negative cables, from the same input as the previous step, lead the negative cable to the negative input of the [step-up module](Imagenes/Ensamble/Sistema%20de%20Autonomía/Cable%20Negativo%20a%20Step%20Up.jpg).

5. Finally, insert the batteries to adjust the step-up module [using a multimeter](Imagenes/Ensamble/Sistema%20de%20Autonomía/Regulacion%20de%20Step%20Up.jpg).


<img align="right" width="440" height="400" src="Imagenes/Ensamble/Sistema de Autonomía/Base PortaPila Completa (2).png">

<br><br><br><br><br>

With the batteries already in place and from another perspective:

<br><br><br><br><br><br><br><br><br><br><br>

The wiring of this system is quite simple; you just need to follow the attached [schematic](Imagenes/Ensamble/Sistema%20de%20Autonomía/Conexionado%20Sistema%20de%20Autonomia.jpg). When you switch it on, the entire system should power up. 

#### **Step 2** - Preparing UV sensor

For the UV sensor structure, you'll need:
- [UV Sensor Base](Impresion%203D%20STL/UV/Base%20sensor%20uv.STL)
- [UV Sensor Body](Impresion%203D%20STL/UV/Cuerpo%20sensor%20uv.STL)
- [UV Sensor Lid](Impresion%203D%20STL/UV/Tapa%20sensor%20uv.STL)
- [UV Sensor Lens](Imagenes/Ensamble/Conjunto%20UV/Lente%20Sensor%20UV.jpg)
- UV Sensor 8511

1. First, screw or glue the sensor to the body as shown in this [image](Imagenes/Ensamble/Conjunto%20UV/Colocación%20Sensor%20UV.png).
2. Next, place the lens on the body and adjust it by gluing the lid so that it looks like [this](Imagenes/Ensamble/Conjunto%20UV/Estructura%20Sensor%20UV.png) (the notches on the lid and body must align).
3. Finally, screw the base onto the assembled body.

(Imagen de todo el conjunto UV Completo).

#### **Step 3** - Prepare Rain Gauge

<img align="right" width="400" height="500" src="Imagenes/Ensamble/Conjunto Pluviómetro/Terminado.png">

For the rain gauge assembly, you will need the following:

- [Totalizing Ring](Impresion%203D%20STL/Pluviómetro/Aro%20totalizador%20sensor%20lluvia.STL)
- [Bracket](Impresion%203D%20STL/Pluviómetro/Mensula%201%20sensor%20de%20lluvia.STL)
- [Cover](Impresion%203D%20STL/Pluviómetro/Tapa%20version%20master.STL)
- [Totalizer](Impresion%203D%20STL/Pluviómetro/Totalizador%20Pluviómetro%20Version%20Master.STL)
- [Waterproof A](Impresion%203D%20STL/Pluviómetro/estanco_a.STL)
- [Waterproof B](Impresion%203D%20STL/Pluviómetro/estanco%20b.STL)
- [Locator](Impresion%203D%20STL/Pluviómetro/localizador%20vaso%20pluviómetro.STL)
- Load Cell + HX711 Driver
- 13 M4 Nuts
- 4 M4 Screws
- 3 M4 Rods, 210 mm each
- 0.5 m of 4 or 6-pole cable

1. Insert the 210 mm rods into the totalizing ring, ensuring that the ring is level with the ground as shown in the example images at the end of the section.

2. On the notch side of the ring, [insert the bracket](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Mensula.jpg), also secured by another screw.

3. Place the [washers and screws](Imagenes/Ensamble/Conjunto%20Pluviómetro/Arandelas%20Localizador.jpg) and [screw](Imagenes/Ensamble/Conjunto%20Pluviómetro/Orientacion%20Localizador.jpg) them on the side opposite the arrow of the weight of the load cell.

4. On the totalizer, place the load cell with the [correct orientation](Imagenes/Ensamble/Conjunto%20Pluviómetro/Orientación%20Celda%20de%20Carga.jpg) and [screw it from below](Imagenes/Ensamble/Conjunto%20Pluviómetro/Tornillos%20Celda%20de%20Carga.jpg).

5. Connect the [load cell to the driver](Imagenes/Ensamble/Conjunto%20Pluviómetro/Conexión%20Celda%20de%20Carga.png) and the input/output cables on the other side.

6. Place the driver [inside waterproof A and B](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Driver%20Celda%20de%20Carga.jpg) and [position it next to the cell](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocacion%20Driver%20Celda%20de%20Carga%202.jpg) and then [place the cover over both](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Tapa.jpg).

7. After this, ensure there are no "phantom" weights in the cell, so use the Arduino to adjust the tare of the cell.

8. Almost done, first insert the lock nuts on the rods, then place the ring on the totalizer, also adjusting nuts from the [opposite side](Imagenes/Ensamble/Conjunto%20Pluviómetro/Roscas%20por%20Abajo.jpg) so that the rods are flush with the totalizer floor, keeping the ring level. Recheck the ring level and make necessary adjustments if not leveled.


<table align="center">
  <thead>
    <tr>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 1.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 2.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 3.jpg"></th>
    </tr>
  </thead>
</table>

#### **Step 4** - Final Integration

Having completed all the previous steps, all that remains is to assemble each of the individual systems. We will need the following parts:

- [Bottom Cover](3D%20Printing%20STL/Telemetry/Bottom%20telemetry%20cover.STL)
- [PCB Separator to Battery Ceiling](3D%20Printing%20STL/Telemetry/PCB%20separator%20to%20battery%20ceiling.STL)
- [Snap-on Cover](3D%20Printing%20STL/Telemetry)
- [Internal Stopper](3D%20Printing%20STL/Telemetry/Internal%20stop%20telemetry.STL)
- [Grip Lock](3D%20Printing%20STL/Telemetry/Grip%20lock%20telemetry.STL)
- [T-piece](3D%20Printing%20STL/Telemetry/T-piece.STL)

1. To begin, place the O-Ring, [screw in the rods](Assembly%20Images/General%20System/O'Ring%20Placement.jpg) of 60 mm, and screw the T-piece onto the Bottom Cover [as shown](Assembly%20Images/General%20System/T-piece%20Placement.jpg).

2. Insert the cable glands and the power switch as shown in the images below.

  <img align="left" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion de In-Out.png">

  <img align="right" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion In-Out 2.png">

  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

3. Glue the AHT sensor onto the T-piece using an adhesive, as shown in this [image](Assembly%20Images/General%20System/AHT%20Sensor%20Placement.jpg).

4. After routing each of the respective cables through the cable glands, you need to add a cable from the normally open side of the switch, which is then connected to one of the Molex connectors that are connected to the PCB.

5. Assemble each of the Molex connectors (if you don't know how, [here](https://www.youtube.com/watch?v=tU62sOKsNWI) is a tutorial), and place the PCB in the following way:

  <img align="left" width="400" height="400" src="Imagenes/Ensamble/Sistema General/Molex 1.png">

  <img align="right" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Molex 2.png">

  
  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

 Below, each of the positions of the Molex cables is detailed:

<table align="center">
  <thead>
    <tr>
      <th>Sensor</th>
      <th>Molex Pin Numbers</th>
      <th>Pin Function</th>
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
      <td>Battery + Rain</td>
      <td align="center">10<br>11<br>12</td>
      <td align="center">V BAT (Cable from the Switch)<br>Rain Pin 1<br>Rain Pin 2</td>
    </tr>
    <tr>
      <td>AHT</td>          
      <td align="center">1<br>2<br>3</td>
      <td align="center">OUT<br>GND<br>5 V</td>
    </tr>
    <tr>
      <td>Power</td>
      <td align="center">1<br>2</td>
      <td align="center">5 V<br>GND</td>
    </tr>
  </tbody>
</table>

6. After completing the previous step, ensuring that each connector has been assembled correctly, [place the separators](Imagenes/Ensamble/Sistema%20General/Separadores%20Colocados.png) between the PCB and the autonomy system board. Then, insert the system and tighten the corresponding nuts:


<img align="center" width="800" height="500" src="Imagenes/Ensamble/Sistema General/Sistema Terminado 1.png">