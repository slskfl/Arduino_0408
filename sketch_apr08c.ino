#include <Servo.h>
Servo myServo;
int pos;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
 /* for(pos=0; pos<120; pos++){
    myServo.write(pos);
    delay(15);
    }*/
    myServo.write(map(analogRead(A0), 0, 1023, 0, 120));
    delay(15);
  
}
