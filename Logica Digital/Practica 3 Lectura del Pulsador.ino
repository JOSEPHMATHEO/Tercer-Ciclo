// Practica 3 Pulsador

int led = 13; // pin 13 Led
int pulsador = 10; // pin 10 Pulsador
bool value = LOW; // Leer estado del pulsador

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop()
{
  
  value = digitalRead(pulsador);
  digitalWrite(led,value);
  delay(500); // Wait for 5000 millisecond(s)
  
}