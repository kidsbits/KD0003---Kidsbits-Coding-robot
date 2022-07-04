#include <Matrix.h>

Matrix myMatrix(A4,A5);       //实例化一个对象名为myMatrix，和定义通讯引脚
//定义一个数组并赋值为取模工具得到的数组数据。
uint8_t LedArray1[8]={0x18,0x18,0x18,0x18,0x99,0x5a,0x3c,0x18};
uint8_t  LEDArray[8];     //定义一个数组并赋值为取模工具得到的数组数据。
uint8_t LedArray2[8]={0x10,0x20,0x40,0xff,0xff,0x40,0x20,0x10};
uint8_t LedArray3[8]={0x18,0x3c,0x5a,0x99,0x18,0x18,0x18,0x18};
uint8_t LedArray4[8]={0x08,0x04,0x02,0xff,0xff,0x02,0x04,0x08};
uint8_t LedArray5[8]={0x00,0x18,0x24,0x00,0x00,0xa5,0xa5,0x42};

void setup(){
  myMatrix.begin(0x70);  //通讯地址

}

void loop(){
  myMatrix.clear();       //清屏
  for(int i=0; i<8; i++)     //数组有8个数据，循环8次，一个一个分析
  {
    LEDArray[i]=LedArray1[i];   //将表情图案数组数据一个一个的赋给LEDArray  
    for(int j=7; j>=0; j--)       //每个数据（字节）有8 bit ,所以需要循环8次
    {
      if((LEDArray[i]&0x01)>0)    //判断数据的最后一个bit是否>0，就是是否为1
      myMatrix.drawPixel(j, i,1);     //点亮对应的点
      LEDArray[i] = LEDArray[i]>>1;   //LEDArray[i]往右移一位,用于判断前 1 bit 做准备
    }
  }
  myMatrix.writeDisplay();    //点阵显示
  delay(1000);
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
  delay(1000);
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
  delay(1000);
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
  delay(1000);
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
  delay(1000);
  myMatrix.clear();
  myMatrix.writeDisplay();

}
