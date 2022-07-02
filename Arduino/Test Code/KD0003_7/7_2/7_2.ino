#include <Matrix.h>

Matrix myMatrix(A4,A5);         //实例化一个对象名为myMatrix，和定义通讯引脚
uint8_t LedArray1[8]={0xff,0x81,0xbd,0xa5,0xa5,0xbd,0x81,0xff};     //定义一个数组并赋值为取模工具得到的数组数据。
uint8_t  LEDArray[8];   //定义一个没有初始值的数组变量，为了方便处理多个表情图案数组

void setup(){
  myMatrix.begin(0x70);   //通讯地址

}

void loop(){
  myMatrix.clear();           //清屏
  for(int i=0; i<8; i++)      //数组有8个数据，循环8次，一个一个分析
  {
    LEDArray[i]=LedArray1[i];   //将表情图案数组数据一个一个的赋给LEDArray
    for(int j=7; j>=0; j--)    //每个数据（字节）有8 bit ,所以需要循环8次
    {
      if((LEDArray[i]&0x01)>0)  //判断数据的最后一个bit是否>0，就是是否为1
      myMatrix.drawPixel(j, i,1); //点亮对应的点
      LEDArray[i] = LEDArray[i]>>1; //LEDArray[i]往右移一位,用于判断前 1 bit 做准备
    }
  }
  myMatrix.writeDisplay();       //点阵显示

}
