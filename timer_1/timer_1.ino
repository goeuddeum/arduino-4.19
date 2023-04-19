unsigned int x;

int main(void){
  
  Serial.begin(9600);
  TCCR1A = 0b00000000;
  TCCR1B = 0b00000101;

  while(1){
    //Serial.println(TCNT1);
    _delay_ms(100);
    x = x+100;
    Serial.println(x);
    
  }
  
}