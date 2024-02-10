// Practica 3 Pulsador

// Declaracion de Variable 

int salida = 13; // pin 13 Led
int in_A = 12; // entrada a
int in_B = 11; // entrada b
int in_C = 10; // entrada c
int in_D = 9; // entrada d
bool value_A = LOW; 
bool value_B = LOW;
bool value_C = LOW; 
bool value_D = LOW;
bool operacion = LOW;


void setup()
{
  pinMode(salida, OUTPUT);
  pinMode(in_A, INPUT);
  pinMode(in_B, INPUT);
  pinMode(in_C, INPUT);
  pinMode(in_D, INPUT);
}

void loop()
{
  // Lectura de las entras A / B / C / D 
  
  value_A = digitalRead(in_A);
  value_B = digitalRead(in_B);
  value_C = digitalRead(in_C);
  value_D = digitalRead(in_D);
  
  // Realizamos la operacion AND
  
  operacion = value_A && value_B && value_C && value_D; 
    
  digitalWrite(salida,operacion);
  delay(100); // Wait for 100 millisecond(s)
  
}