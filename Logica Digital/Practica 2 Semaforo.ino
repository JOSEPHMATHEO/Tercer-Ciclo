// Practica 2 Semaforo 

// Declaracion de Variables 

byte redPin = 13;
byte yellowPin = 12;
byte greenPin = 11;

// Configuracion de Salidas 
  
void setup(){

  pinMode(redPin, OUTPUT); // Configuracion del pin 13 como salidad 
  pinMode(yellowPin, OUTPUT); // Configuracion del pin 12 como salidad 
  pinMode(greenPin, OUTPUT); // Configuracion del pin 11 como salidad
  
}

// Programa 

void loop(){
	
  // Green Pin
  
  digitalWrite(greenPin,HIGH); // Encendido de led
  delay(1000); // Retardo de 1 segundo 
  digitalWrite(greenPin, LOW); // Apagado del led
  
  // Yellow Pin
  
  digitalWrite(yellowPin,HIGH); // Encendido de led
  digitalWrite(yellowPin, LOW); // Apagado del led
  delay(500); // Retardo de 0.5 segundo
  
  // Red Pin
  
  digitalWrite(redPin,HIGH); // Encendido de led 
  delay(1000); // Retardo de 1 segundo
  digitalWrite(redPin, LOW); // Apagado del led
 
}
