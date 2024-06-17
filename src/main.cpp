#include <Arduino.h>

#define mr1 2
#define mr2 3
#define pwm 4


// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(115200);

  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  pinMode(pwm,OUTPUT);
}

void loop() {

 digitalWrite(mr1,1);
 digitalWrite(mr2,0);
 analogWrite(pwm,200);

 delay(3000);

  digitalWrite(mr1,0);
 digitalWrite(mr2,1);
 analogWrite(pwm,200);

 delay(3000);
}

