// TAREA: Pulsador Secuencia

// Declaracion de Variable 

// Leds 

byte led1 = 13; // led 1
byte led2 = 12; // led 2
byte led3 = 11; // led 3
byte led4 = 10; // led 4

// Pulsadores 

byte pulsador1 = 9; 
byte pulsador2 = 8;

// Lectura de Pulsadores

bool value1 = LOW;
bool value2 = LOW;

// Inicializacion de Entradas y Salidas 

void setup()
{
  
  // Leds
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  // Pulsadores 
  
  pinMode(pulsador1 , INPUT);
  pinMode(pulsador2 , INPUT);
  
}

// Programa 

void loop()
{
  // Asignacion de valores de la lectura de los pulsadores
  
  value1 = digitalRead(pulsador1);
  value2 = digitalRead(pulsador2);
  
  // Logica del Programa
  
  if(value1 == HIGH){
  	
    digitalWrite(led1,value1);
    delay(500);
    digitalWrite(led1,LOW);
    
    digitalWrite(led2,value1);
    delay(500);
    digitalWrite(led2,LOW);
    
    digitalWrite(led3,value1);
    delay(500);
    digitalWrite(led3,LOW);
    
    digitalWrite(led4,value1);
    delay(500);
    digitalWrite(led4,LOW);
   
  }if(value2 == HIGH){
  
  	digitalWrite(led4,value2);
    delay(500);
    digitalWrite(led4,LOW);
    
    digitalWrite(led3,value2);
    delay(500);
    digitalWrite(led3,LOW);
    
    digitalWrite(led2,value2);
    delay(500);
    digitalWrite(led2,LOW);
    
    digitalWrite(led1,value2);
    delay(500);
    digitalWrite(led1,LOW);
  
  }
  
  
}