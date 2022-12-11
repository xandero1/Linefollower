const int StartKnop = 2;
const int Led = 12;

bool Led_toestand = false;

void setup() 
{
  Serial.begin(9600);

  
  pinMode(StartKnop, INPUT);
  pinMode(Led, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(StartKnop), Interrupt, RISING);
}


void loop() 
{
  digitalWrite(Led, Led_toestand);
  delayMicroseconds(10);
}


void Interrupt() 
{
  Serial.println("Interrupt");
  Led_toestand = !Led_toestand;
}
