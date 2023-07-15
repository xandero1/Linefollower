                              // Motor Rechts
const int IN1 = 6;
const int IN2 = 5;
                              // Motor Links
const int IN3 = 11;
const int IN4 = 10;

bool StatusKnop;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT); 
  pinMode(IN3, OUTPUT); 
  pinMode(IN4, OUTPUT);
}




void loop() {
    // Wagentje voorwaarts
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    delay(2000);



    // Wagentje achterwaarts
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    delay(2000);



    
    // Wagentje rechts draaien
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(10);
    }
    



    // Wagentje links draaien
    for (int i = 0; i <= 255; i++)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(10);
    }
    delay(2000);    
}
