# ESPHome VarioProtoController

Um die Integration des __Vario Controllers__ in Home Assistant zu vereinfachen, soll die Hardware vollumfänglich mit __ESPHome__ kompatibel sein.

## Referenzen
(Home Assistant)[https://www.home-assistant.io/]
(ESPHome)[https://esphome.io/] 


## BOM
Alle Komponenten des Prototyps kommen vom Hersteller DFRobot und können ohne Löten* miteinender verbunden werden.
* DAC 0-10 V (DFR0971)[https://www.dfrobot.com/product-2613.html?tracking=eRmtFq7RTyz5CLPwkCZQdwcDTMfhkVjnuthet7fM9aYc6CMu7iSdQkA2BJXVdRcO]
* ADC (DFR0553)[https://www.dfrobot.com/product-1730.html?tracking=eRmtFq7RTyz5CLPwkCZQdwcDTMfhkVjnuthet7fM9aYc6CMu7iSdQkA2BJXVdRcO]
* IO Shild (DFR0762)[https://www.dfrobot.com/product-2395.html?tracking=eRmtFq7RTyz5CLPwkCZQdwcDTMfhkVjnuthet7fM9aYc6CMu7iSdQkA2BJXVdRcO]
* ESP32 (DFR0654)[https://www.dfrobot.com/product-2231.html?tracking=eRmtFq7RTyz5CLPwkCZQdwcDTMfhkVjnuthet7fM9aYc6CMu7iSdQkA2BJXVdRcO]
* DS18B20 (KIT0021)[https://www.dfrobot.com/product-1354.html?tracking=eRmtFq7RTyz5CLPwkCZQdwcDTMfhkVjnuthet7fM9aYc6CMu7iSdQkA2BJXVdRcO]

\*) Für den Anschluss der Temperatursensoren (DS18B20) ohne das DFRobot Gravity Shild müssen die Sensoren direkt mit einem entsprechenden Stecker (3-pin 2,54 mm) versehen werden.


## Funktionen
### Übersicht
* Steuerung der Pumpe über 0 - 10 V Schnittstelle
* Eingang für 4 analoge Sensoren (z.B. Drucksensoren)
* Temperaturerfassung mit DS18B20 Sensoren

### DAC


### ADC
* Eingangsspannung ADS1115 min.: GND – 0.3
* Eingangsspannung ADS1115 max.: VDD + 0.3

Für den Anschluss von Sensoren mit 0 - 10 V Schnittstelle ist ein Spannungsteiler vorzusehen.