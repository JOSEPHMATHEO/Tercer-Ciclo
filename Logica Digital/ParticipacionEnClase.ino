// Participacion En Clase

// Variables

int led_pin1 = 11;
int led_pin2 = 10;
int led_pin3 = 9;
int led_pin4 = 6;
int pot_pin = 0;

void setup()
{
  
  Serial.begin(9600);
  
}

void loop()
  
{
  Serial.println(delayVal());
  //Bucle de incremento del brillo 
  
  for (int brillo = 0; brillo <= 255; brillo++){
  
  	analogWrite(led_pin1,brillo);
    delay(delayVal());
    analogWrite(led_pin1,LOW);
    
    analogWrite(led_pin2,brillo);
    delay(delayVal());
    analogWrite(led_pin2,LOW);
    
    analogWrite(led_pin3,brillo);
    delay(delayVal());
    analogWrite(led_pin3,LOW);
    
    analogWrite(led_pin4,brillo);
    delay(delayVal());
    analogWrite(led_pin4,LOW);
  
  }
  
 
}

//Funcion calculo del retardo 

int delayVal(){

  int v;
  v = analogRead(pot_pin);
  v = v/8; // 0 - 128
  
  return v;

}