bool pushBotton;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushBotton = digitalRead(2);
//按下按键，引脚2低电平，不按按键，引脚2高电平
//~~~~pushbottom = 0，~~~~pushButton = 1
  if (pushBotton){
    digitalWrite(13,LOW);    //点亮LED
  }else{
    digitalWrite(13,HIGH);   //熄灭LED
  }
}
