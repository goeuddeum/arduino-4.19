#include <TimerOne.h>
const int but=11;
const int but2=8;
const int LED_green =10 ;
const int LED_yellow = 9;

int buttonState = 0; 
int buttonState2 = 0; 
bool ledOn = false; 
bool ledOn2 = false; 


void setup() {
  pinMode(but,INPUT);
  pinMode(but2,INPUT);
  Timer1.initialize();
  Timer1.setPeriod(1000000);

  Timer1.pwm(LED_green, 0);
  Timer1.pwm(LED_yellow, 0);
  
}

void loop() {
  buttonState=digitalRead(but);
  if(buttonState == HIGH){
    if(!ledOn){
  Timer1.setPwmDuty(LED_green, 100); 
  Timer1.setPwmDuty(LED_yellow,900 ); 
  ledOn=true;
}else{
  Timer1.setPwmDuty(LED_green, 0); 
  Timer1.setPwmDuty(LED_yellow,0 );
ledOn=false;
}

delay(500);
  }
  buttonState2=digitalRead(but2);
  if(buttonState2 == HIGH){
    if(!ledOn2){
  Timer1.setPwmDuty(LED_green, 900); 
  Timer1.setPwmDuty(LED_yellow,100 ); 
  ledOn2=true;
}else{
  Timer1.setPwmDuty(LED_green, 0); 
  Timer1.setPwmDuty(LED_yellow,0 );
ledOn2=false;
}
delay(500);
  }
}


