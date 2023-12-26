/*
kidsbits coding robot kit
Project 4
Distance Detector
http//www.kidsbits.cc
*/
volatile int distance;        //定义一个变量名distance

float checkdistance_2_3() {     //定义一个测距函数
//传感器由10微秒或更多的高脉冲触发。
  digitalWrite(2, LOW);       //预先给出一个短的低脉冲，以确保一个干净的高脉冲:
  delayMicroseconds(2);       //延迟2微妙
  digitalWrite(2, HIGH);
  delayMicroseconds(10);      //延迟10微妙
  digitalWrite(2, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;      //距离计算公式
  delay(10);
  return distance;
}

void setup(){
  Serial.begin(9600);
  distance = 0;
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  distance = checkdistance_2_3();
  delay(1);
  Serial.println(distance);              //串口监视器显示距离
  if (distance > 0 && distance < 8) {       //如果距离大于0且小于8cm
    tone(6,532);
    tone(7,532);
    delay(250);
    noTone(6);
    noTone(7);
    delay(250);
    tone(6,532);
    tone(7,532);
    delay(250);
    noTone(6);
    noTone(7);
    delay(1000);

  }

}
