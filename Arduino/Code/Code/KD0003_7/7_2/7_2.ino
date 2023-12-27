/*
kidsbits coding robot kit
Project 7-2
8*8 Dot Matrix Dispaly
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);         //Instantiate an object myMatrix, and define the communication pins
uint8_t LedArray1[8]={0xff,0x81,0xbd,0xa5,0xa5,0xbd,0x81,0xff};     //Define an array and assign it to the array data obtained by the modulating tool
uint8_t  LEDArray[8];   //Define an array variable without an initial value to facilitate the processing of multiple emoticon arrays

void setup(){
  myMatrix.begin(0x70);   //communication address

}

void loop(){
  myMatrix.clear();           //clear
  for(int i=0; i<8; i++)      //The array has 8 pieces of data, which are looped 8 times, analyzed one by one
  {
    LEDArray[i]=LedArray1[i];   //Assign the emoticon array data to LEDArray one by one
    for(int j=7; j>=0; j--)    //Each data has 8 bits, so it needs to be looped 8 times
    {
      if((LEDArray[i]&0x01)>0)  //Check whether the last bit of the data is >0, that is, whether it is 1
      myMatrix.drawPixel(j, i,1); //Light up the corresponding point
      LEDArray[i] = LEDArray[i]>>1; //LEDArray[i] moves one bit to the right to judge the first 1 bit
    }
  }
  myMatrix.writeDisplay();       //dot matrix display

}
