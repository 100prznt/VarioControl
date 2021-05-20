<img src="docu/icon_pumpe_RZ.svg" alt="Temp2IoT wiring" width="256" height="256" />

# VarioControl
IoT Pumpensteuerung für Vario Pumpen mit 0 – 10 V Schnittstelle.

------------

## Hardware Features

+ 0 – 10 V Schnittstelle zur Drehzahlsteuerung einer Vario Pumpe
+ WiFi Schnittstelle
+ 1-wire Schnittstelle für zwei DS18B20 Temperatursensoren
+ 0 – 10 V Eingang für einen Drucksensor (alt. auch 0 – 5 V oder 4 - 20 mA möglich)
+ Schaltereingang zur Betriebsartvorwahl (AUTO – AUS – MANUELL)
+ 5 LEDs zur Zustandsvisualisierung
+ Weitbereichsspannungsversorgung (12 – 36 V)


## PCB

![VarioControl PCB TopView v1.1](hardware/VarioController/VarioControl_PCB_TopView_Green_v1.1.png)


![VarioControl PCB BottomView v1.1](hardware/VarioController/VarioControl_PCB_BottomView_Green_v1.1.png)


## AquaTechnix AquaVarioPlus

![AquaVarioPlus Display PCB](docu/AquaTechnix_AquaVarioPlus_PCB.jpg)

### Connector
The CN4 (pin 2) connector is provided for controlling the pump via the 0 - 10 V interface. 

#### Type
|--------------|----------------------------------|
| Manufacturer | JST (JAPAN SOLDERLESS TERMINALS) |
| SKU          | XHP-5                            |

![JST XHP-5.png](docu/JST-XHP-5-1024x634.png)

#### Pinning

|------|----------|----------------------------------|
| pin# | function | specification                    |     
|------|----------|----------------------------------|
| 1    | n/a      |                                  |
| 2    | Signal   | 0 - 10 V                         |
| 3    | PWM      | unknow specs?                    |
| 4    | Signal   | 4 - 20 mA                        |
| 5    | GND      |                                  |
