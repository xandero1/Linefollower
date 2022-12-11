/*
   Bluetooth module HC-05
   Code om te connecteren = 1234

   Code uploaden: eerst de TX en RX pinnen aan arduino efkes uittrekken.
                  dan verbinden gsm en HC-05 met bloothooth.
                  als laatste de code uploaden en de TX en RX pinnen terug steken.
*/
int LedBlauw = 12;
char ReadSerial = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LedBlauw, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    ReadSerial = Serial.read();
    Serial.println(ReadSerial);

    
    if (ReadSerial == '0')
    {
      digitalWrite(LedBlauw, LOW);
      Serial.println("LED UIT");
    }

    
    else if (ReadSerial == '1')
    {
      digitalWrite(LedBlauw, HIGH);
      Serial.println("LED AAN");
    }

    
    else if (ReadSerial == '2')
    {
      Serial.println("LED Knipperen");
      digitalWrite(LedBlauw, HIGH);
      delay(500);
      digitalWrite(LedBlauw, LOW);
      delay(500);
      digitalWrite(LedBlauw, HIGH);
      delay(500);
      digitalWrite(LedBlauw, LOW);
      delay(500);
      digitalWrite(LedBlauw, HIGH);
      delay(500);
      digitalWrite(LedBlauw, LOW);
    }
  }
}
