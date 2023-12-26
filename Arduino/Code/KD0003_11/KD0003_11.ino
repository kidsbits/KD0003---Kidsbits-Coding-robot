/*
kidsbits coding robot kit
Project 11
Sound-controlled Smart Car
http//www.kidsbits.cc
*/
#include <Matrix.h>        
Matrix myMatrix(A4, A5);    //实例化一个对象名为myMatrix，和定义通讯引脚
volatile int distance;     //超声波测距变量
volatile int distance1;
volatile int distance2;
int  sensorVal;
uint8_t LedArray1[8] = {0x00, 0x18, 0x24, 0x00, 0x00, 0xa5, 0xa5, 0x42};
uint8_t  LEDArray[8];  //定义一个没有初始值的数组变量，为了方便处理多个表情图案数组

void front() {           //前进代码
  digitalWrite(8, LOW);
  digitalWrite(A1, LOW);
  analogWrite(9, 150);
  analogWrite(10, 150);
}

void back() {                 //后退代码
  digitalWrite(8, HIGH);
  digitalWrite(A1, HIGH);
  analogWrite(9, 150);
  analogWrite(10, 150);
}

void Stop() {               //停止代码
  digitalWrite(8, HIGH);
  digitalWrite(A1, HIGH);
  analogWrite(9, 0);
  analogWrite(10, 0);
}

float checkdistance_2_3() {            //超声波测距代码
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;      //计算距离
  delay(10);
  return distance;
}

 void left() {           //左转代码
  digitalWrite(8, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(9, 140);
  analogWrite(10, 140);
}


void right() {              //右转代码
  digitalWrite(8, LOW);
  digitalWrite(A1, HIGH);
  analogWrite(9, 140);
  analogWrite(10, 140);
}

void avoid(){
  distance = checkdistance_2_3();       //超声波当前所测的距离赋给distance
  if(distance < 15&&distance >0){
    Stop();              //暂停
    left();             //左转
    delay(380);           //延时380毫秒
    Stop();
    distance1 = checkdistance_2_3();   //当前超声波所测的值赋给distance1
    delay(300);                //延时300毫秒
    right();                 //右转  
    delay(750);           //延时750毫秒
    Stop();            //暂停
    distance2 = checkdistance_2_3();   //当前超声波所测的值赋给distance2
    delay(300);
    if (distance1 > distance2) {    //如果左边大于右边
      left();
      delay(750);
      front();
    }else{
      front();
      }
  }
  else{
  front();
  }
 
}


void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);       //定义8脚为输出
  pinMode(A1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);          //定义3脚为输入
  distance = 0;
  distance1 = 0;
  distance2 = 0;
  myMatrix.begin(0x70);
  myMatrix.clear();
  delay(1000);
  for (int i = 0; i < 8; i++)
  {
    LEDArray[i] = LedArray1[i];
    for (int j = 7; j >= 0; j--)
    {
      if ((LEDArray[i] & 0x01) > 0)
        myMatrix.drawPixel(j, i, 1);
      LEDArray[i] = LEDArray[i] >> 1;
    }
  }
  myMatrix.writeDisplay();
}


void loop() {
  sensorVal = analogRead(A0);
  Serial.println(sensorVal);
  if(sensorVal > 150){
   for(int i=0;i<10;i++){
    avoid();
    delay(10);
  }
  }
  else{
    Stop();
  }
}
