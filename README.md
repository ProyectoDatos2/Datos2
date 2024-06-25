To change language:&nbsp;&nbsp;
[![en](https://img.shields.io/badge/lang-en-red.svg)](/README.en.md)

# Datos² y EME

Datos² es una plataforma ofrecida por OMIXOM que permite compartir, almacenar y visualizar datos ambientales provenientes de proyectos de ciencia ciudadana de la comunidad.

Con el objetivo de contribuir al desarrollo de herramientas accesibles, OMIXOM ha diseñado EME (Estación Meteorológica de uso Educativo), una estación meteorológica de bajo costo y fácil ensamblaje, ideal para proyectos educativos en tecnología y medio ambiente. EME está equipada con un sistema de sensores, telemetría y autonomía que permite medir variables como lluvia, temperatura, humedad y radiación UV, subiendo estos datos a la plataforma de Datos² sin necesidad de una red eléctrica.

<img align="center" width="260" height="430" src="Imagenes/FotoSEHMA.png">
<br>

## Componentes y materiales

<table align="center">
  <thead>
    <tr>
      <th>Componentes</th>
      <th>Cantidad</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1117390716-atmel-nano-v30-atmega328-usb-compatible-ch340-cable-usb-_JM#position=4&search_layout=grid&type=item&tracking_id=72562e09-0b68-4055-bb07-b63051b15a30">Arduino Nano</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-677999119-fuente-step-up-mt3608-dc-dc-booster-hasta-28v-arduino-_JM#position=5&search_layout=grid&type=item&tracking_id=8fe16bd9-8071-4581-baf5-30e2aaf3523e">Step-Up MT3608</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-732240129-modulo-driver-mosfet-irf520-24v-9a-controlador-arduino-pic-_JM#position=2&search_layout=grid&type=item&tracking_id=4971c395-66a7-4063-87e5-2919493828b4">Driver Mosfet IRF520</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-628919809-sensor-de-lluvia-raindrop-nivel-de-agua-gotas-arduino-pic-_JM#position=1&search_layout=stack&type=item&tracking_id=30c9dd6e-3289-46bd-bf59-e12049e01e5d">Sensor de Lluvia</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-652467602-reloj-tiempo-real-rtc-ds1307-eeprom-24c32-arduino-todom">RTC DS1307</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://www.mercadolibre.com.ar/pila-samsung-inr18650-30q-cilindrica-1-unidad/p/MLA16952001#searchVariation=MLA16952001&position=1&search_layout=stack&type=product&tracking_id=262fdb61-1f61-41e8-b207-c581f31320b5">Baterías 18650 Samsung</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-810911247-10-portapilas-holder-bateria-18650-portapila-pack-x-10-_JM#position=36&search_layout=stack&type=item&tracking_id=58fa4027-1cb1-4b2d-b6bb-21a118f22569">Holder para Baterías</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-767685589-dht-22-sensor-humedad-y-temperatura-arduino-raspberry-_JM#position=1&search_layout=grid&type=item&tracking_id=bb4ca5b0-af4a-41e8-9012-47ee587c1c7a">Sensor de Humedad y Temperatura DHT22</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-921895103-modulo-sensor-luz-ultravioleta-uv-ml8511-arduino-_JM#position=6&search_layout=grid&type=item&tracking_id=b31fa0ab-c297-4237-8fd0-921482750ff8">Sensor de Luz Ultravioleta ML8511</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1437846022-modulo-gprs-a6-mini-cuatribanda-sms-gsm-gprs-ideal-arduino-_JM#position=31&search_layout=stack&type=item&tracking_id=b92e1ad1-eb10-41e8-8f06-538f5c0ab563">Módem GPRS A6 Mini</a> | <a href="https://articulo.mercadolibre.com.ar/MLA-1308505021-modulo-celular-gsm-gprs-sim800l-sim800-domotica-arduino-ubot-_JM#position=1&search_layout=grid&type=item&tracking_id=351d4014-7b06-4f31-87f1-ae97d6f6fd73">SIM800L</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1106257985-cargador-bateria-lipo-uso-panel-solar-cn3791-arduino-elegir-_JM#position=30&search_layout=stack&type=item&tracking_id=802ccaf1-c51f-4cb6-aa45-b20c71b1849a">Cargador Solar CN3791</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-733004040-celda-de-carga-10kg-con-amplificador-hx711-arduino-candy-_JM#position=14&search_layout=grid&type=item&tracking_id=8e1c6a0c-bf37-4eee-bc3d-d1f6ae97d8ef">Celda de carga 10Kg con driver HX711</a></td>
      <td align="center">1</td>
    </tr>
      <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1530414156-kit-x-30u-2-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=3&search_layout=grid&type=item&tracking_id=feedb67d-d999-4e10-83dc-8528ae580bf2">Kit Molex de 2 Pines</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1547547796-kit-x-30u-3-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=51&search_layout=stack&type=item&tracking_id=4f2edef0-6c5c-400e-8229-65fce00075ec">Kit Molex de 3 Pines</a></td>
      <td align="center">3</td>
    </tr>
     <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1544835568-kit-x-30u-4-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=1&search_layout=grid&type=item&tracking_id=8ec89334-1835-4339-9225-2a076de11fa3">Kit Molex de 4 Pines</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1548402732-kit-x-30u-5-pin-terminal-molex-hembra-macho-y-pines-htec-_JM#position=2&search_layout=grid&type=item&tracking_id=0542de33-9c89-4d24-a9b2-bdc8694cdf21">Kit Molex de 5 Pines</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-841986521-10-x-resistencias-10k-ohm-1-14w-metal-film-_JM#position=8&search_layout=grid&type=item&tracking_id=424a52a9-8c38-42ca-8fbc-487ac3932614">Resistencias 10 KΩ</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-879655442-tira-de-40-pines-hembra-paso-254mm-recta-1-fila-_JM#position=4&search_layout=grid&type=item&tracking_id=f194ae8c-4a52-457f-882d-bc9aa2cb7714">Tira de Pines Hembra</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1457486094-llave-electronica-tecla-interruptora-redonda-alcides-2500-_JM#position=1&search_layout=stack&type=item&tracking_id=a7d7d1b3-e35b-4af4-bd44-98e7a9482798">Interruptor de Encendido/Apagado</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://tienda.ityt.com.ar/antenas-gsm-2g-3g-4g/8259-antena-modem-2g-3g-4g-lte-exterior-cable-5m-sma-itytarg.html">Antena 3G</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-740053599-cable-pigtail-ufl-ipx-a-sma-hembra-cable-antena-15-cm-_JM#position=2&search_layout=stack&type=item&tracking_id=59d777cc-f65b-4182-b457-41c2329058b1">Adaptador Pigtail SMA a U.fl</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-840122267-5-x-pilas-boton-cr2032-vinnic-2032-san-martin-caseros-_JM#position=12&search_layout=stack&type=item&tracking_id=319399d4-d1e2-4e31-b8e0-133f9c6257ec">Pila CR2032</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1248406422-chip-prepago-movistar-personal-claro-tuenti-gsm-4g-_JM#position=5&search_layout=stack&type=item&tracking_id=6764688f-a6c5-4715-9250-fc3602753aae">Chip</a></td>
      <td align="center">1</td>
    </tr>

  </tbody>
</table>

<table align="center">
  <thead>
    <tr>
      <th>Ferreteria</th>
      <th>Cantidad</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-935747094-pluviometro-plastico-luft-aro-medidor-lluvia-soporte-pared-_JM#position=8&search_layout=grid&type=item&tracking_id=40f3e3c5-67b8-4b75-a9dc-d82897870d00">Pluviómetro</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td>Tornillos</td>
      <td align="center"><a href="https://articulo.mercadolibre.com.ar/MLA-1374684557-tornillos-para-electronica-phillips-fresada-m3-x-30mm-x-50u-_JM#position=1&search_layout=stack&type=item&tracking_id=30d64cdf-a3ee-4883-a1f4-83c76c65277d">M3 x 8mm x 8</a><br/><a href="https://articulo.mercadolibre.com.ar/MLA-1374658753-tornillos-para-electronica-phillips-fresada-m3-x-8mm-x-50u-_JM#position=2&search_layout=grid&type=item&tracking_id=17c3c2b8-84f3-491f-8fa9-93f3de6ca513">M3 x 30mm x 1</a><br/><a href="https://articulo.mercadolibre.com.ar/MLA-851601087-tornillos-electronica-philips-m4-x-15mm-pack-x-50-unidades-_JM#position=26&search_layout=stack&type=item&tracking_id=d3443aa8-b714-4dcf-8139-188bc350e0b2">M4 x 15mm x 4</a><br/><a href="https://www.google.com/search?sca_esv=cfcd3706826e13a2&rlz=1C1ONGR_esAR1060AR1060&q=tornillos+m4+75mm&udm=2&fbs=AEQNm0CbCVgAZ5mWEJDg6aoPVcBgWizR0-0aFOH11Sb5tlNhd7Qv31WAq-g3XdD7m281OKyew6CGJrEYYQ4lESOC_x5KkE_SDY1zOtKTls3hovcNa6l_ItgJaIBwjFlejPm39w49Y4BxxGyRdKxxx_9klNmppRGjpVAmC2paJxmKME9gKCeweFeHNk13bUsJGMlkFsW02nTigN9iX_s4ABlGPJPAolXpcg&sa=X&ved=2ahUKEwixkavpgPWGAxWaO7kGHWEMB-gQtKgLegQIEBAB&biw=1366&bih=651&dpr=1">M4 x 75mm x 3</a></td>
    </tr>
    <tr>
      <td>Tuercas</td>
      <td align="center"><a href="https://articulo.mercadolibre.com.ar/MLA-1530972980-tuerca-cuadrada-m4-llavelado-78mm-altura-3mm-x50u-_JM#position=2&search_layout=grid&type=item&tracking_id=8fbc1ed0-af53-4e58-b601-2e823bb12032">M3 x 3</a><br/><a href="https://articulo.mercadolibre.com.ar/MLA-1633357430-tuerca-hexagonal-zincada-m4-llave-516-altura-220mm-x50u-_JM#position=12&search_layout=grid&type=item&tracking_id=37672aff-6c92-4fee-9517-dc0f171e088d">M4 x 16</a></td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-856438789-varilla-roscada-zincada-metrica-4-mm-x-1-metro-5-unid-_JM#position=44&search_layout=grid&type=item&tracking_id=8f69ecda-bf72-4896-88bf-04332535ec9a">Varilla Roscada</a></td>
      <td align="center">M4 x 60mm x 3</a><br/>M4 x 210mm x 3</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1392845759-cable-plano-de-linea-telefono-4mts-rj11-4-hilos-_JM?attributes=COLOR_SECONDARY_COLOR%3ATmVncm8%3D&quantity=1">Cable de 4 Hilos</a></td>
      <td align="center">3m</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1110851260-prensacables-12-plasticopvcnylon-x10-unidades-_JM#position=13&search_layout=grid&type=item&tracking_id=16fe9a83-f60b-4a61-9817-195cd61cc1a3">Prensacable Plástico 1/2</a></td>
      <td align="center">6</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1123750333-bornera-divisible-new-motion-pcable-25mm-_JM?variation=179893909693#reco_item_pos=2&reco_backend=ranker_vip_v2p_marketplace&reco_backend_type=low_level&reco_client=vip-v2p&reco_id=590e2a83-78eb-46df-b734-4a96798e51a0">Bornera</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://www.herrerocons.es/producto/manguito-union-tubo-pvc-110mm-claro-cod-1000717/">Tubo Unión PVC 110mm</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1137150523-junta-o-ring-goma-diametro-exterior-110mm-y-35mm-espesor-_JM#position=50&search_layout=stack&type=item&tracking_id=8d5f25ba-2ce8-458a-8c3f-09c2b75aed30">O'ring 110mm</a></td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td><a href="https://www.mercadolibre.com.ar/cristal-repuesto-lentes-para-soldar-truper/p/MLA26196668">Cristal de Soldadura</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-926213442-termocontraible-negro-6-mm-contrae-a-3-mm-por-1-metro-_JM#position=24&search_layout=stack&type=item&tracking_id=e86bf665-c37a-4c91-992f-f2ff9ed5f905">Termocontraíble 3mm</a></td>
      <td align="center">Poco</td>
    </tr>
    <tr>
      <td><a href="https://www.mercadolibre.com.ar/sellador-tacsa-silicona-acetica-color-transparente/p/MLA27649062#searchVariation=MLA27649062&position=3&search_layout=stack&type=product&tracking_id=52e10322-f6e2-4aa6-902a-391dd70c1d53">Silicona</a></td>
      <td align="center">Poco</td>
    </tr>
    <tr>
      <td><a href="https://www.mercadolibre.com.ar/la-gotita-adhesivo-instantaneo-2ml/p/MLA28207746#searchVariation=MLA28207746&position=21&search_layout=grid&type=product&tracking_id=c36740ee-e7bf-424d-8e3e-31748246c240">Pegamento Instantáneo</a></td>
      <td align="center">Poco</td>
    </tr>
      <tr>
      <td><a href="https://articulo.mercadolibre.com.ar/MLA-1320701568-acuarel-interior-y-exterior-latex-x-1-lt-_JM?attributes=COLOR_SECONDARY_COLOR%3AVmVyZGUgRm9yZXN0YWw%3D&quantity=1">Pintura Látex</a></td>
      <td align="center">Poco</td>
    </tr>
     <tr>
      <td><a href="https://www.google.com/search?q=grasa+ferreteria&sca_esv=0bc43c4c8dd2597c&rlz=1C1ONGR_esAR1060AR1060&udm=2&ei=JcJ6Zo_iB67c1sQPv-WS0AE&ved=0ahUKEwjPiKyn6vaGAxUurpUCHb-yBBoQ4dUDCBA&uact=5&oq=grasa+ferreteria&gs_lp=Egxnd3Mtd2l6LXNlcnAiEGdyYXNhIGZlcnJldGVyaWEyBRAAGIAESP4RUBdYuQ5wAHgAkAEAmAHlAaABlQuqAQU3LjMuMrgBA8gBAPgBAZgCDKACwAvCAg0QABiABBixAxhDGIoFwgIKEAAYgAQYQxiKBcICBhAAGAUYHsICBhAAGAgYHsICBxAAGIAEGBiYAwCIBgGSBwU3LjMuMqAH0B4&sclient=gws-wiz-serp">Grasa</a></td>
      <td align="center">Poco</td>
    </tr>
  </tbody>
</table>

<table align="center">
  <thead>
    <tr>
      <th>Impresión 3D</th>
      <th>Cantidad</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Aro.STL">Aro</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Estanco A.STL">Estanco A</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Estanco B.STL">Estanco B</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Localizador.STL">Localizador</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Mensula.STL">Ménsula</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Tapa.STL">Tapa</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Pluviómetro\Pluv_Totalizador.STL">Totalizador</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Holder Cargador.STL">Holder Cargador</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Holder Step Up.STL">Holder Step-Up</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Pieza T.STL">Pieza en T</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Placa Portapilas.STL">Placa Porta Pila</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Separador.STL">Separador</a></td>
      <td align="center">3</td>
    </tr>
      <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Tapa Inferior.STL">Tapa Inferior</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Tapa Superior.STL">Tapa Superior</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href = "Impresion 3D STL\Telemetría\Tel_Tope.STL">Topes</a></td>
      <td align="center">3</td>
    </tr>
     <tr>
      <td><a href = "Impresion 3D STL\UV\UV_Base.STL">Base</a></td>
      <td align="center">1</td>
    </tr>
     <tr>
      <td><a href = "Impresion 3D STL\UV\UV_Cuerpo.STL">Cuerpo</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\UV\UV_Tapa.STL">Tapa</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Agarre\Agarre_Fijacion.STL">Fijación</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Agarre\Agarre_Mariposa.STL">Mariposa</a></td>
      <td align="center">1</td>
    </tr>
    <tr>
      <td><a href = "Impresion 3D STL\Agarre\Agarre_Traba.STL">Traba</a></td>
      <td align="center">1</td>
    </tr>

  </tbody>
</table>


>[!IMPORTANT]
>**Configuración de Impresión:**
>- Altura de Capa: 0,2 mm
>- Relleno: 30% al 50%
>- Líneas de pared: 3
>- Capas de Superficie: 3

<br>

## Armado PCB

Para comenzar a armar el sistema, hay que preparar el PCB (Placa de Circuito Impreso) con el siguiente [circuito](SEHMA/Arduino_Nano+A6mini_GPRS/Hardware/PCB_Datos2.pdf). Si no sabes cómo prepararla, haz clic [aquí](https://youtu.be/MX9_9U6Wnu8?si=8ijrH3XqB462RJCx&t=36).

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

### **Paso 1** - Componentes

Ten a mano todos los componentes necesarios para la placa. Se recomienda probar que cada uno de ellos esté funcionando correctamente. A continuación, se presenta una imagen con cada uno.

<br>

<img align="center" width="1200" height="550" src="Imagenes/PCB/Componentes Necesarios.jpg">

### **Paso 2** - Soldadura

<img align="right" width="455" height="455" src="Imagenes/PCB/Pines Placa.png">

<br><br><br><br><br><br>

Con un soldador de estaño como [este](https://www.mercadolibre.com.ar/soldador-de-estano-30w-tipo-lapiz-punta-ceramica-zurich-profesional-para-electronica-y-electricidad/p/MLA24319090?pdp_filters=category:MLA455278#searchVariation=MLA24319090&position=2&search_layout=stack&type=product&tracking_id=12611802-c75b-4189-8a99-06b5f4bf6936), procede a soldar los componentes más bajos en altura primero, siguiendo por lo más altos. Si no sabes cómo soldar, haz clic [aquí](https://www.youtube.com/watch?v=snM_ABjXGsw). La placa se debería ver así al terminar: 

<br><br><br><br><br><br><br><br><br>

### **Paso 3** - Integración

<img align="right" width="500" height="455" src="Imagenes/PCB/Placa Terminada.png">

<br><br>

Ahora lo que hay que hacer es cargar el [programa](SEHMA/Arduino_Nano+A6mini_GPRS/Firmware/Estacion_v1.4_1hora/Estacion_v1.4_1hora.ino) en la Arduino. Para instalar las librerias, sigue los pasos detallados en este [tutorial](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries/) para importar [librerias](SEHMA/Arduino_Nano+A6mini_GPRS/Firmware/Estacion_v1.4_1hora/Librerias/) .zip. Insertar cada componente (habiendo asegurado que funcionan correctamente) en su lugar. Colocar el chip en el modem y [pila en el RTC](Imagenes/PCB/Posicion%20Pila%20RTC.jpg).
Finalmente, colocar el prensa cables en la antena y, a travez del pigtail, conectarlo al modem.

Para [colocar el prensa cables en la antena](Imagenes/PCB/Prensa%20Cables%20para%20Antena.jpg), hay que primero perforar el prensa cables con una mecha de 9,5 mm (sacarle la goma prensadora). Luego donde se sujetará el prensa cables, dar 6 o 7 vueltas de cinta aislante para engrosar el cable y asegurar el correcto funcionamiento del prensador.

<br><br><br><br><br><br>

## Ensamblaje Sistema

Para comenzar a armar el sistema, hay que ya haber terminado la placa, como a su vez ya tener impreso y compradas todas las [piezas](Impresion%203D%20STL/) detalladas en este documento. <br><br><br>

### **Paso 1** - Preparar sistema de Autonomía

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

Todo el conjunto esta sostenido por la [placa base portapilas](Impresion%203D%20STL/Telemetría/Tel_Placa%20Portapilas.STL) y a su vez la placa de Step Up esta sobre el [holder Step Up](Impresion%203D%20STL/Telemetría/Tel_Holder%20Step%20Up.STL) y el módulo de carga solar esta sobre el [holder cargador](Impresion%203D%20STL/Telemetría/Tel_Holder%20Cargador.STL). El sistema unido por la gotita debería quedar como la imagen a la izquierda.

<br><br><br>

El cableado debe ser al ras asi los cables no nos quedan incomodos al unir los sistemas con tornillos. Para eso hay que seguir los siguientes pasos: 

1. Primero hay que [pasar el cable positivo](Imagenes/Ensamble/Sistema%20de%20Autonomía/Cable%20Positivo%20por%20Abajo.jpg) por debajo del cargador solar para luego [empalmarlo](Imagenes/Ensamble/Sistema%20de%20Autonomía/Empalme%20Positivos.jpg). A todos los empalmes se los aísla con un aislante termo-contraíble.

2. Luego, [empalmar los cables negativos](Imagenes/Ensamble/Sistema%20de%20Autonomía/Empalme%20Negativos.jpg) con ese largo, asi no molestan con el hueco para el tornillo. Pegarlo con la gotita al holder si es necesario.

3. Con cables trenzados positivos, desde la otra salida de batería del cargador solar, llevar hasta el interruptor y devuelta a la entrada positiva del modulo step up. 

4. Cerca de los cables negativos anteriores, desde la misma entrada que el paso anterior, llevar el cable negativo a la entrada negativa del [modulo de step up](Imagenes/Ensamble/Sistema%20de%20Autonomía/Cable%20Negativo%20a%20Step%20Up.jpg). 

5. Para el conexionado del panel solar al sistema, se debe seguir la siguiente [imagen](Imagenes/Ensamble/Sistema%20de%20Autonomía/Conexionado%20Panel%20Solar.jpg).

6. Por último, insertar las baterías para regular el módulo de step up [con un multimetro](Imagenes/Ensamble/Sistema%20de%20Autonomía/Regulacion%20de%20Step%20Up.jpg).


<img align="right" width="440" height="400" src="Imagenes/Ensamble/Sistema de Autonomía/Base PortaPila Completa (2).png">

<br><br><br><br><br>

Con las pilas ya puestas y desde otra perspectiva: 

<br><br><br><br><br><br><br><br><br><br><br>

El conexionado de este sistema es bastante simple, solo hay que seguir el [esquematico](Imagenes/Ensamble/Sistema%20de%20Autonomía/Conexionado%20Sistema%20de%20Autonomia.jpg) adjunto. Al accionar el interruptor, se debería prender todo el sistema. 

### **Paso 2** - Preparar sensor UV


Para la estructura sensor UV se necesita:

<img align="right" width="300" height="300" src="Imagenes/Ensamble/Conjunto UV/Conjunto UV Terminado .png">


- [Base Sensor UV](Impresion%203D%20STL/UV/UV_Base.STL)
- [Cuerpo Sensor UV](Impresion%203D%20STL/UV/UV_Cuerpo.STL)
- [Tapa Sensor UV](Impresion%203D%20STL/UV/UV_Tapa.STL)
- [Lente Sensor UV](Imagenes/Ensamble/Conjunto%20UV/Lente%20Sensor%20UV.jpg)
- Sensor UV 8511
- 1 m de cable de 4 polos
- 4 tornillos M3 x 8 mm

1. Primero se debe soldar los cables en el orden indicado en esta [imagen](Imagenes/Ensamble/Conjunto%20UV/Conexión%20sensor%20UV.png). Asegurarse de que la soldadura sea del mismo lado que el integrado.
2. Luego, atornillar el sensor a la base del sensor como se ve en esta [imagen](Imagenes/Ensamble/Conjunto%20UV/Colocación%20Sensor%20UV.png).
3. Finalmente, ajustar los tornillos inferiores entre la base y el cuerpo, para luego pegar con la gotita el lente y asegurarlo con la tapa para que quede como la imagen a la derecha (deben coincidir las muescas de la tapa y el cuerpo).

El conjunto se deberia ver de [esta manera](Imagenes/Ensamble/Conjunto%20UV/Posicion%20Sensor%20UV.jpg) al estar en el sistema final.

### **Paso 3** - Preparar Pluviómetro

<img align="right" width="400" height="500" src="Imagenes/Ensamble/Conjunto Pluviómetro/Terminado.png">

Para el conjunto del pluviómetro se precisa de lo siguiente:

- [Aro Totalizador](Impresion%203D%20STL/Pluviómetro/Pluv_Aro.STL)
- [Ménsula](Impresion%203D%20STL/Pluviómetro/Pluv_Mensula.STL)
- [Tapa](Impresion%203D%20STL/Pluviómetro/Pluv_Tapa.STL)
- [Totalizador](Impresion%203D%20STL/Pluviómetro/Pluv_Totalizador.STL)
- [Estanco A](Impresion%203D%20STL/Pluviómetro/Pluv_Estanco%20A.STL)
- [Estanco B](Impresion%203D%20STL/Pluviómetro/Pluv_Estanco%20B.STL)
- [Localizador](Impresion%203D%20STL/Pluviómetro/Pluv_Localizador.STL)
- Celda de Carga + Driver HX711
- 13 Tuercas M4
- 4 Tornillos M4 x 16 mm
- 3 Varillas M4 de 210 mm
- 4 Tornillos M3 x 8 mm
- 0,5 m de cable de 4 polos

1. Hay que colocar las varillas de 210 mm en el aro totalizador, asegurando que el aro quede a nivel con respecto el suelo como se muestran las imágenes de ejemplo al final de la sección.

2. Del lado de la muesca en el aro, [se inserta la ménsula](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Mensula.jpg), sujetada tambien por otra rosca.

3. Se colocan las [arandelas y tornillos](Imagenes/Ensamble/Conjunto%20Pluviómetro/Arandelas%20Localizador.jpg) y se [atornilla](Imagenes/Ensamble/Conjunto%20Pluviómetro/Orientacion%20Localizador.jpg) sobre la cara contraria a la flecha del peso de la celda de carga

4. Sobre el totalizador, se coloca la celda de carga con la [orientación correcta](Imagenes/Ensamble/Conjunto%20Pluviómetro/Orientación%20Celda%20de%20Carga.jpg) y se [atornilla desde abajo](Imagenes/Ensamble/Conjunto%20Pluviómetro/Tornillos%20Celda%20de%20Carga.jpg).

5. Conectar la [celda de carga al driver](Imagenes/Ensamble/Conjunto%20Pluviómetro/Conexión%20Celda%20de%20Carga.png) y los cables de entrada/salida del otro lado (acordarse como conectó cada cable porque luego esto queda sellado).

6. Guardar el driver [dentro de los estancos A y B](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Driver%20Celda%20de%20Carga.jpg) y [posicionar al lado de la celda](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocacion%20Driver%20Celda%20de%20Carga%202.jpg) para luego [colocar la tapa sobre ambos](Imagenes/Ensamble/Conjunto%20Pluviómetro/Colocación%20Tapa.jpg).

7. Ya casi terminando, inserte primero las contra roscas en las varillas, para luego colocar el aro en el totalizador, ajustando tambien roscas del [lado contrario](Imagenes/Ensamble/Conjunto%20Pluviómetro/Roscas%20por%20Abajo.jpg) y que las varillas queden al ras del piso del totalizador, asi queda a nivel el aro. Volver a comprobar el nivel del aro y hacer ajustes necesarios en caso de que no esté a nivel.

<table align="center">
  <thead>
    <tr>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 1.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 2.jpg"></th>
      <th><img align="center" width="400" height="380" src="Imagenes/Ensamble/Conjunto Pluviómetro/Nivel 3.jpg"></th>
    </tr>
  </thead>
</table>

8. Para finalizar, [conectar sensor raindrop](Imagenes/Ensamble/Conjunto%20Pluviómetro/Conexion%20Sensor%20Raindrop.png) y [colocar sobre la mensula](Imagenes/Ensamble/Conjunto%20Pluviómetro/Pintado%20y%20Colocacion%20Sensor%20Raindrop.png) pintando con la pintura latex por encima del sensor y ajustando con los tornillos M3.

### **Paso 4** - Integración Sistemas Eléctricos

Ya teniendo completados todos los pasos anteriores, lo único que queda es unir cada uno de los sistemas individuales. Necesitaremos las siguientes piezas:

- [Tapa Inferior](Impresion%203D%20STL/Telemetría/Tel_Tapa%20Inferior.STL)
- [Separador PCB a Techo Pila](Impresion%203D%20STL/Telemetría/Tel_Separador.STL)
- [Tapa Superior](Impresion%203D%20STL/Telemetría/Tel_Tapa%20Superior.STL)
- [Tope Interno](Impresion%203D%20STL/Telemetría/Tel_Tope.STL)
- [Pieza en T](Impresion%203D%20STL/Telemetría/Tel_Pieza%20T.STL)
- Conjunto UV
- Conjunto Pluviómetro
- PCB Terminada
- Interruptor
- Prensa Cables
- O’ Ring 
- Cable unipolar (Medición de carga de Batería)
- 3 Tuercas M4

1. Para comenzar, lo que haremos es colocar el O-Ring, [enroscar las varillas](Imagenes/Ensamble/Sistema%20General/O'Ring%20Colocación.jpg) de 60 mm y [atornillar la pieza en T](Imagenes/Ensamble/Sistema%20General/Colocación%20Pieza%20en%20T.jpg) en la Tapa Inferior.

2. Insertar los prensa cables y el interruptor de encendido como se muestra en las imágenes de abajo

  <img align="left" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion de In-Out.png">

  <img align="right" width="380" height="380" src="Imagenes/Ensamble/Sistema General/Indicacion In-Out 2.png">

  <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

3. Cortar pines del DHT a la mitad, soldar los cables del cable de 4 o 6 polos y pasar una película de [laca](https://www.google.com/search?q=laca+delta+electroquimica&tbm=isch&ved=2ahUKEwjtp9-atLKDAxXlhJUCHatYAYcQ2-cCegQIABAA&oq=laca+delta+electroquimica&gs_lcp=CgNpbWcQAzoECCMQJzoKCAAQgAQQigUQQzoFCAAQgAQ6BggAEAgQHjoHCAAQgAQQGDoJCAAQgAQQGBAKUL8MWIopYO4paABwAHgAgAFniAGfD5IBBDIwLjGYAQCgAQGqAQtnd3Mtd2l6LWltZ8ABAQ&sclient=img&ei=AY-NZa2jG-WJ1sQPq7GFuAg&bih=945&biw=1920&rlz=1C1ALOY_esAR997AR998#imgrc=js21fCIKTrFWCM) o un termo contraíble para que la humedad no interfiera. Se debería ver [asi](Imagenes/Ensamble/Sistema%20General/Preparado%20AHT.jpg).

3. Pegar con la gotita el sensor DHT sobre la pieza en T, como se puede ver en esta [imagen](Imagenes/Ensamble/Sistema%20General/Colocación%20Sensor%20AHT.jpg)

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
      <td>Totalizador Lluvia</td>
      <td align="center">1<br>2<br>3<br>4</td>
      <td align="center">CLK<br>DOUT<br>GND<br>5 V</td>
    </tr>
    <tr>
      <td>UV</td>
      <td align="center">5<br>6<br>7<br>8<br>9</td>
      <td align="center">GND<br>3v3<br>ENABLE<br>NC<br>OUT UV</td>
    </tr>
    <tr>
      <td>Batería + Raindrop</td>
      <td align="center">10<br>11<br>12</td>
      <td align="center">V BAT (Cable que viene del Interruptor)<br>Pin Lluvia 1<br>Pin Lluvia 2</td>
    </tr>
    <tr>
      <td>DHT</td>
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

## **Paso 5** - Integración Final

Para este paso se necesita:

- Integración Sistemas Eléctricos Terminado
- [Tubo 4" Unión entre 2](Imagenes/Ensamble/Sistema%20General/Tubo%20Union%20entre%202.jpg)
- O’ Ring 
- WD40
- 3 tornillos M3
- 3 tornillos M4

1. De ser posible, agujerear huecos de 15 mm cada 45 mm alrededor de la base del tubo, en dos hileras con una distancia de 20 mm desde los centros.

2. [Insertar O'Ring](Imagenes/Ensamble/Sistema%20General/Tapa%20con%20O'Ring.jpg) y pegar con Ciano los topes como se observa en la imagen.

3. [Colocar Tapa](Imagenes/Ensamble/Sistema%20General/Tubo%20Union%20entre%202%20con%20Tapa.jpg) sobre el tubo y atornillar.

4. Insertar los sistemas eléctricos. Se recomienda aplicar WD40 sobre el O’ Ring para que deslice más fácilmente. Al encajar, ajuste los tornillos sobre los topes para que quede sujetado.

5. Atornillar el sistema UV contrario al encaje con el soporte como se muestra en la [foto.](Imagenes/Ensamble/Sistema%20General/Sistema%20General%20Terminado.jpg)

Para conseguir el numero serial, hay que enviar un correo electronico a soporte@omixom.com.
