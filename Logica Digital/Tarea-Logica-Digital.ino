// Tarea Bulce con Potenciometro

// Inicializacion de variables

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int potPin = 0;

void setup()
  
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
  
{
  
  Serial.println(delayValue());
  
  // Bucle de icremento del brillo
  
  for(int brillo = 0; brillo <= 255; brillo++){
  
  	analogWrite(led1, brillo);
    delay(delayValue());
    analogWrite(led1,LOW);
  
    analogWrite(led2, brillo);
    delay(delayValue());
    analogWrite(led2,LOW);
    
    analogWrite(led3, brillo);
    delay(delayValue());
    analogWrite(led3,LOW);
    
    analogWrite(led4, brillo);
    delay(delayValue());
    analogWrite(led4,LOW);
    
    analogWrite(led5, brillo);
    delay(delayValue());
    analogWrite(led5,LOW);
    
    analogWrite(led6, brillo);
    delay(delayValue());
    analogWrite(led6,LOW);
    
    analogWrite(led6, brillo);
    delay(delayValue());
    analogWrite(led6,LOW);
    
    analogWrite(led5, brillo);
    delay(delayValue());
    analogWrite(led5,LOW);
    
    analogWrite(led4, brillo);
    delay(delayValue());
    analogWrite(led4,LOW);
    
    analogWrite(led3, brillo);
    delay(delayValue());
    analogWrite(led3,LOW);
    
    analogWrite(led2, brillo);
    delay(delayValue());
    analogWrite(led2,LOW);
    
    analogWrite(led1, brillo);
    delay(delayValue());
    analogWrite(led1,LOW);
    
  }
  
}

// Funcion Calculo del Retardo

int delayValue(){
  
  int v;
  v = analogRead(potPin);
  v = v/2;
  
  return v;


}