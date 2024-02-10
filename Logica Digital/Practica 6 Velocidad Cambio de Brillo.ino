// 6. Velocidad de Cambio de Brillo

// Variables

int led_pin = 9;
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
  
  	analogWrite(led_pin,brillo);
    delay(delayVal());
  
  }
  
  //Bucle de decremento del brillo 
  
  for (int brillo = 255; brillo >= 0; brillo++){
  
  	analogWrite(led_pin,brillo);
    delay(delayVal());
    
  }
}

//Funcion calculo del retardo 

int delayVal(){

  int v;
  v = analogRead(pot_pin);
  v = v/16; // 0 - 128
  
  return v;

}