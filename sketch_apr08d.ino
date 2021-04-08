int flame=A0; //정온식 화재감지기
int sp=8; //v피에조 스피커
int value=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(flame, INPUT);
  pinMode(sp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(flame);
  Serial.println(value);
  if(value>=1000){
    digitalWrite(sp, HIGH);
  } else{
    digitalWrite(sp, LOW);
  }
  delay(500);
}
