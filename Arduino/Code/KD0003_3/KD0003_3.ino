/*
kidsbits coding robot kit
Project 3
Birthday Gift
http//www.kidsbits.cc
*/
void setup(){
  Serial.begin(9600);   //设置波特率为9600
  pinMode(6, OUTPUT);  //设置模拟口A6为输出
  pinMode(12, OUTPUT);  //设置数字口12为输出
}

void loop(){
  Serial.println(analogRead(A6)); //读取A6的模拟值
  if (analogRead(A6) < 700) {     //判断A6的模拟值是否小于700
    tone(6,392);               //A6模拟口输出模拟值为392脉冲
    delay(125);                //延时
    tone(6,392);
    digitalWrite(12,HIGH);       //数字口12输出高电平
    delay(125);
    tone(6,440);
    digitalWrite(12,LOW);       //数字口12输出低电平
    delay(250);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,532);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,494);
    delay(500);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(125);
    tone(6,392);
    delay(125);
    tone(6,440);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,587);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,532);
    delay(500);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(125);
    tone(6,392);
    delay(125);
    tone(6,784);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,659);
    delay(250);
    tone(6,532);
    delay(250);
    tone(6,494);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,440);
    delay(250);
    tone(6,392);
    delay(125);
    digitalWrite(12,LOW);
    tone(6,392);
    delay(125);
    tone(6,330);
    delay(250);
    tone(6,262);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,587);
    delay(250);
    tone(6,532);
    delay(500);
    noTone(6);
    digitalWrite(12,LOW);

  }
  if (analogRead(A6) > 750) {
    digitalWrite(12,LOW);
    noTone(6);

  }

}
