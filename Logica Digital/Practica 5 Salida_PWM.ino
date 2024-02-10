// 5. Salidas PWM
// Variables

int led_pwm = 9;

void setup()
{
  
  // no necesitamos
  
}

void loop()
  
{
  
  //Bucle de incremento del brillo 
  
  for (int brillo = 0; brillo <= 255; brillo++){
  
  	analogWrite(led_pwm,brillo);
    delay(25);
  
  }
  
  //Bucle de decremento del brillo 
  
  for (int brillo = 255; brillo >= 0; brillo--){
  
  	analogWrite(led_pwm,brillo);
    delay(25);
    
  }
}