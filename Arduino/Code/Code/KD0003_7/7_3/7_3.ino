/*
kidsbits coding robot kit
Project 7-3
8*8 Dot Matrix Dispaly
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);       //Instantiate an object myMatrix, and define the communication pins
//Define an array and assign it to the array data obtained by the modulating tool
uint8_t LedArray1[8]={0x18,0x18,0x18,0x18,0x99,0x5a,0x3c,0x18};
uint8_t  LEDArray[8];     //Define an array and assign it to the array data obtained by the modulating tool
uint8_t LedArray2[8]={0x10,0x20,0x40,0xff,0xff,0x40,0x20,0x10};
uint8_t LedArray3[8]={0x18,0x3c,0x5a,0x99,0x18,0x18,0x18,0x18};
uint8_t LedArray4[8]={0x08,0x04,0x02,0xff,0xff,0x02,0x04,0x08};
uint8_t LedArray5[8]={0x00,0x18,0x24,0x00,0x00,0xa5,0xa5,0x42};

void setup(){
  myMatrix.begin(0x70);  //communication address

}

void loop(){
  myMatrix.clear();       //clear
  for(int i=0; i<8; i++)     //The array has 8 pieces of data, which are looped 8 times, analyzed one by one
  {
    LEDArray[i]=LedArray1[i];   //Assign the emoticon array data to LEDArray one by one
    for(int j=7; j>=0; j--)       //Each data has 8 bits, so it needs to be looped 8 times
    {
      if((LEDArray[i]&0x01)>0)    //Check whether the last bit of the data is >0, that is, whether it is 1
      myMatrix.drawPixel(j, i,1);     //Light up the corresponding point
      LEDArray[i] = LEDArray[i]>>1;   //LEDArray[i] moves one bit to the right to judge the first 1 bit
    }
  }
  myMatrix.writeDisplay();    //dot matrix display
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
