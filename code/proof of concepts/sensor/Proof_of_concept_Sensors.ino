#include <QTRSensors.h> //QTR bibilotheek
QTRSensors qtr;


const uint8_t SensorCount = 8; // aantal sensoren die je gebruikt
uint16_t sensorValues[SensorCount];




void setup()
{
  qtr.setTypeAnalog();
  qtr.setSensorPins((const uint8_t[]){A7, A6, A5, A4, A3, A2, A1, A0}, SensorCount);
  qtr.setEmitterPin(13);
  Serial.begin(9600);
}




void loop()
{
  qtr.read(sensorValues);  // leest de waarden van de sensoren


  
  for (uint8_t i = 0; i < SensorCount; i++)   // Sensor waardes van 0 tot 1023 en 0 = maximum reflectie en 1023 = minimum reflectie
  {
    Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  Serial.println();
  delay(500);
}
