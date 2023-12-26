/*
kidsbits coding robot kit
Project 13
Bluetooth Knowledge
http//www.kidsbits.cc
*/
#include <Matrix.h>

volatile char val;

Matrix myMatrix(A4,A5);
void Front() {   //前进代码
  digitalWrite(8,LOW);    
  digitalWrite(A1,LOW);
  analogWrite(9,200);   
  analogWrite(10,200);
}

void Back() {     //后退代码
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,194);
  analogWrite(10,200);
}

uint8_t LedArray1[8]={0x18,0x18,0x18,0x18,0x99,0x5a,0x3c,0x18};
uint8_t  LEDArray[8];
uint8_t LedArray2[8]={0x18,0x3c,0x5a,0x99,0x18,0x18,0x18,0x18};
uint8_t LedArray3[8]={0x08,0x04,0x02,0xff,0xff,0x02,0x04,0x08};
uint8_t LedArray4[8]={0x10,0x20,0x40,0xff,0xff,0x40,0x20,0x10};
uint8_t LedArray5[8]={0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x18};
void Left() {   //左转代码
  digitalWrite(8,HIGH);   
  digitalWrite(A1,LOW);
  analogWrite(9,120);
  analogWrite(10,120);
}

void Right() {      //右转代码
  digitalWrite(8,LOW);   
  digitalWrite(A1,HIGH);
  analogWrite(9,120);
  analogWrite(10,120);
}

void Stop() {     //  停止代码
  digitalWrite(8,HIGH);
  digitalWrite(A1,HIGH);
  analogWrite(9,0);
  analogWrite(10,0);
}

void setup(){
  Serial.begin(9600);
  val = 0;
  myMatrix.begin(0x70);
  myMatrix.clear();
  myMatrix.writeDisplay();
  pinMode(8, OUTPUT);
  pinMode(A1,OUTPUT);
}

void loop(){
  if (Serial.available() > 0) {   //判断串口缓存区是否有数据
    val = Serial.read();          //读取串口缓存区的数据
    Serial.println(val);           //打印出来
  
  }
  switch (val) {
   case 'F':
    Front();
    myMatrix.clear();
    myMatrix.writeDisplay();
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
    break;
   case 'B':
    Back();
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray2[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    break;
   case 'L':
    Left();
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray3[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    break;
   case 'R':
    Right();
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray4[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    break;
   case 'S':
    Stop();
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray5[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    break;
  }

}
