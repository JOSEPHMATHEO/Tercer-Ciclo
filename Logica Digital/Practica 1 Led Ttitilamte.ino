// Practica Hola Mundo-Led Ttitilante 

// Declaracion de Variables 

byte pinled = 13;

// Configuracion de Salidas 
  
void setup(){

  pinMode(pinled, OUTPUT); // Configuracion del pin 13 como salidad 
 
}

// Programa 

void loop(){

  digitalWrite(pinled,HIGH); // Encendido de led
  delay(200); // Retardo de 0.5 segundos 
  digitalWrite(pinled, LOW); // Apagado del led
  delay(200); // Retardo de 0.5 seg

}
