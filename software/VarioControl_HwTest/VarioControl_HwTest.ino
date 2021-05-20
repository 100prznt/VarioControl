/*
  VarioControl - Hardware Test

  No description.

  created 2021/05/20
  by Ruemmler, Elias
  modified 2021/05/20
  by Ruemmler, Elias

  Find the full project on GitHub:
  https://github.com/100prznt/VarioControl
*/


#include <Adafruit_DS3502.h>


#define LED_STATUS D3 //LOW to on (GPIO0)
#define LED_ERROR D4  //HIGH to on (GPIO2)
#define EN_PUMP D0    //HIGH to enable pump, LED on (GPIO16)

#define OW_DATA D7    //GPIO13

#define SW_MODE1 D5   //GPIO14
#define SW_MODE2 D8   //GPIO15

#define PRESSURE_AI A0 //Analog input for pressure sensor


Adafruit_DS3502 ds3502 = Adafruit_DS3502();


void setup() {
  Serial.begin(9600);
  // Wait until serial port is opened
  while (!Serial)
  {
    delay(1);
  }

  Serial.println();
  Serial.println("VarioControl - Hardware Test");


  Serial.println();
  Serial.println("Initialize GPIOs");
  Serial.println("- Outputs");
  pinMode(LED_STATUS, OUTPUT);
  pinMode(LED_ERROR, OUTPUT);
  pinMode(EN_PUMP, OUTPUT);
  Serial.println("  turn LEDs off");
  digitalWrite(LED_STATUS, HIGH);
  digitalWrite(LED_ERROR, LOW);
  digitalWrite(EN_PUMP, LOW);
  Serial.println("  successful");


  Serial.println("- Inputs");
  pinMode(SW_MODE1, INPUT);
  pinMode(SW_MODE2, INPUT);
  Serial.println("  successful");

  Serial.println("Initialize DS3502");
  if (!ds3502.begin())
  {
    Serial.println("  Couldn't find DS3502 chip");
    while (1);
  }
  Serial.println("  Found DS3502 chip");
}

void readAnalogInput()
{
  Serial.println("Start reading analog input...");
  
  int sensorValue = analogRead(PRESSURE_AI);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 10V):
  float voltage = sensorValue * (10.0 / 1023.0);
  // print out the value you read:
  Serial.print("Analog value: ");
  Serial.println(voltage);
}


void loop()
{  
  digitalWrite(LED_ERROR, LOW);
  delay(800);
  digitalWrite(LED_ERROR, HIGH);
  delay(400);
  readAnalogInput();
}
