/*
kidsbits coding robot kit
Project 9
Line Tracking robot
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);        //实例化一个对象名为myMatrix，和定义通讯引脚
uint8_t LedArray1[8]={0xff,0x81,0xbd,0xa5,0xa5,0xbd,0x81,0xff};   //定义一个数组并赋值为取模工具得到的数组数据。
uint8_t  LEDArray[8];
void left() {              //定义左转的状态
  digitalWrite(8,HIGH);    //左边电机反转
  digitalWrite(A1,LOW);   //右边电机正转
  analogWrite(9,100);   //左边电机速度100
  analogWrite(10,100);    //右边电机速度100
}

void Stop() {           //定义停止的状态
  digitalWrite(8,HIGH);   //左边电机反转
  digitalWrite(A1,HIGH);    //右边电机反转
  analogWrite(9,0);     //左边电机速度0
  analogWrite(10,0);      //右边电机速度0
}

void right() {          //定义右转的状态
  digitalWrite(8,LOW);      //左边电机正转
  digitalWrite(A1,HIGH);      //右边电机反转
  analogWrite(9,102);     //左边电机速度102
  analogWrite(10,102);      //右边电机速度102
}

void front() {            //定义前进的状态
  digitalWrite(8,LOW);      //左边电机正转
  digitalWrite(A1,LOW);       //右边电机正转
  analogWrite(9,150);     //左边电机速度150
  analogWrite(10,150);      //右边电机速度150
}

void setup(){       
  Serial.begin(9600);
  myMatrix.begin(0x70);
  myMatrix.clear();   //清屏
  delay(1000);        //延迟
  for(int i=0; i<8; i++)
  {
    LEDArray[i]=LedArray1[i];
    for(int j=7; j>=0; j--)
    {
      if((LEDArray[i]&0x01)>0)
      myMatrix.drawPixel(j, i,1);
      LEDArray[i] = LEDArray[i]>>1;
    }
  }
  myMatrix.writeDisplay();
  pinMode(8, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(A1, OUTPUT);
}

void loop(){
  Serial.println(digitalRead(4));
  Serial.println(digitalRead(5));
  if (digitalRead(4) == 0 && digitalRead(5) == 1) {
    left();

  } else if (digitalRead(4) == 1 && digitalRead(5) == 0) {
    right();
  } else if (digitalRead(4) == 1 && digitalRead(5) == 1) {
    Stop();
  } else {
    front();

  }
}
