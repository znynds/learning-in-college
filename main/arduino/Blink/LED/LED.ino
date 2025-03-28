

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);//将引脚2设置为输入上拉模式
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  int sensorVal = digitalRead(2);
  Serial.println(sensorVal);

  if(sensorVal == HIGH){
    digitalWrite(13,LOW);
  }
  else{
    digitalWrite(13,HIGH);
  }
}
