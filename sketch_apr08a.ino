#define TRIG 3
#define ECHO 2
#define RED 9
#define GREEN 10
#define BLUE 11

void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // 초음파를 발생시키는 코드
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  //초음파가 들어오는 시간을 계산(m->cm) 거리 측정
  long distance=pulseIn(ECHO, HIGH)/58.2;
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  if(distance<10){
    digitalWrite(RED, HIGH);
  }else if(distance<20){
    digitalWrite(GREEN, HIGH);
  }else{
    digitalWrite(BLUE, HIGH);
  }
  delay(100);
}
