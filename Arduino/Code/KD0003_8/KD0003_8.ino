/*
kidsbits coding robot kit
Project 8
Obstacle Avoidance Robot
http//www.kidsbits.cc
*/
volatile int distance;
volatile int distance1;
volatile int distance2;
void Stop() {          //停止代码
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH); 
  analogWrite(9,0);
  analogWrite(10,0);
}

void left() {         //左转代码
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,LOW);
  analogWrite(9,120);
  analogWrite(10,120);
}

float checkdistance_2_3() {         //超声波测距代码
  digitalWrite(2, LOW);          //定义2脚输出低电平
  delayMicroseconds(2);         //精确延迟2毫秒
  digitalWrite(2, HIGH);        //定义2脚输出高电平
  delayMicroseconds(10);      //精确延迟10毫秒
  digitalWrite(2, LOW);       
  float distance = pulseIn(3, HIGH) / 58.00;     //计算距离
  delay(10);
  return distance;
}

void back() {           //后退代码
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH);
  analogWrite(9,150);
  analogWrite(10,150);
}

void buzzer() {        //蜂鸣器代码
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

void front() {           //前进代码
  digitalWrite(8,LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,LOW);
  analogWrite(9,150);
  analogWrite(10,150);
}

void right() {         //右转代码
  digitalWrite(8,LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH);
  analogWrite(9,120);
  analogWrite(10,120);
}

void setup(){
  Serial.begin(9600);
  distance = 0;
  distance1 = 0;
  distance2 = 0;
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  distance = checkdistance_2_3();     //把距离值 赋给distance
  if (distance < 15&&distance > 0) {         //判断距离是否小于15cm
    Stop();
    buzzer();
    delay(1000);
    left();
    delay(380);
    Stop();
    distance1 = checkdistance_2_3();
    delay(1000);
    right();
    delay(750);
    Stop();
    distance2 = checkdistance_2_3();
    delay(1000);
    if (distance1 > distance2) {      //如果左边大于右边
      left();
      delay(750);
      front();

    } else {
      front();

    }

  } else {
    front();

  }

}
