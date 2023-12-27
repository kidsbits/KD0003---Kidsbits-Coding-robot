/*
kidsbits coding robot kit
Project 10
Magical Pattern
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);           //Instantiate an object myMatrix, and define the communication pins
uint8_t LedArray1[8]={0xff,0x81,0x81,0x81,0x81,0x81,0x81,0xff};
uint8_t  LEDArray[8];  //Define an array variable without an initial value to facilitate the processing of multiple emoticon arrays
uint8_t LedArray2[8]={0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00};
uint8_t LedArray3[8]={0x00,0x00,0x3c,0x24,0x24,0x3c,0x00,0x00};
uint8_t LedArray4[8]={0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00};
uint8_t LedArray5[8]={0x00,0x00,0x3c,0x24,0x24,0x3c,0x00,0x00};
uint8_t LedArray6[8]={0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00};
uint8_t LedArray7[8]={0xff,0x81,0x81,0x81,0x81,0x81,0x81,0xff};
//The pattern on the dot matrix displays that the large square gradually decreases from the tool


void setup(){
  Serial.begin(9600);
  myMatrix.begin(0x70);   //communication address

  myMatrix.clear();     //clear
  pinMode(12, INPUT);
}

void loop(){
  Serial.println(digitalRead(12));
  if (digitalRead(12) == 1) {       //If the PIR motion sensor senses someone nearby
    myMatrix.clear();
    myMatrix.writeDisplay();      //dot matrix display
    for (int i = 0; i <= 8; i = i + (1)) {    //The array has 8 pieces of data, which are looped 8 times, analyzed one by one
      for (int j = 0; j <= 8; j = j + (1)) {
        myMatrix.drawPixel(i-1,j-1,1);   //Light up the corresponding point
        myMatrix.writeDisplay();  //dot matrix display
        delay(100);
      }
    }

  } else {        //else
    for(int i=0; i<8; i++)
    {
      LEDArray[i]=LedArray1[i];   //Assign the emoticon array data to LEDArray one by one
      for(int j=7; j>=0; j--)      //Each data has 8 bits, so it needs to be looped 8 times
      {
        if((LEDArray[i]&0x01)>0)   //Check whether the last bit of the data is >0, that is, whether it is 1
        myMatrix.drawPixel(j, i,1);    //Light up the corresponding point
        LEDArray[i] = LEDArray[i]>>1;   //LEDArray[i] moves one bit to the right to judge the first 1 bit
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
