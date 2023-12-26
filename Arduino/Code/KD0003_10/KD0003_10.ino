/*
kidsbits coding robot kit
Project 10
Magical Pattern
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);           //实例化一个对象名为myMatrix，和定义通讯引脚
uint8_t LedArray1[8]={0xff,0x81,0x81,0x81,0x81,0x81,0x81,0xff};
uint8_t  LEDArray[8];  //定义一个没有初始值的数组变量，为了方便处理多个表情图案数组
uint8_t LedArray2[8]={0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00};
uint8_t LedArray3[8]={0x00,0x00,0x3c,0x24,0x24,0x3c,0x00,0x00};
uint8_t LedArray4[8]={0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00};
uint8_t LedArray5[8]={0x00,0x00,0x3c,0x24,0x24,0x3c,0x00,0x00};
uint8_t LedArray6[8]={0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00};
uint8_t LedArray7[8]={0xff,0x81,0x81,0x81,0x81,0x81,0x81,0xff};
//从取摸工具中得到的点阵屏大的正方形逐渐变小过程中的图案


void setup(){
  Serial.begin(9600);
  myMatrix.begin(0x70);   //通讯地址

  myMatrix.clear();     //清屏
  pinMode(12, INPUT);
}

void loop(){
  Serial.println(digitalRead(12));
  if (digitalRead(12) == 1) {       //如果人体感应传感器感应到附近有人
    myMatrix.clear();
    myMatrix.writeDisplay();      //点阵显示
    for (int i = 0; i <= 8; i = i + (1)) {    //数组有8个数据，循环8次，一个一个分析
      for (int j = 0; j <= 8; j = j + (1)) {
        myMatrix.drawPixel(i-1,j-1,1);   //点亮对应的点
        myMatrix.writeDisplay();  //点阵显示
        delay(100);
      }
    }

  } else {        //否则
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray1[i];   //将表情图案数组数据一个一个的赋给LEDArray
      for(int j=7; j>=0; j--)      //每个数据（字节）有8 bit ,所以需要循环8次
      {
        if((LEDArray[i]&0x01)>0)   //判断数据的最后一个bit是否>0，就是是否为1
        myMatrix.drawPixel(j, i,1);    //点亮对应的点
        LEDArray[i] = LEDArray[i]>>1;   //LEDArray[i]往右移一位,用于判断前 1 bit 做准备
      }
    }
    myMatrix.writeDisplay();
    delay(200);
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
    delay(200);
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
    delay(200);
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
    delay(200);
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
    delay(200);
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray6[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    delay(200);
    myMatrix.clear();
    myMatrix.writeDisplay();
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray7[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    }
    myMatrix.writeDisplay();
    delay(200);
    myMatrix.clear();
    myMatrix.writeDisplay();

  }

}
