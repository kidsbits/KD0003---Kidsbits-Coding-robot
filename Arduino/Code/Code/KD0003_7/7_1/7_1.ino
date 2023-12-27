/*
kidsbits coding robot kit
Project 7-1
8*8 Dot Matrix Dispaly
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);     //Instantiate an object myMatrix, and define the communication pins


void setup(){
  myMatrix.begin(0x70);     //communication address
}

void loop(){
  myMatrix.clear();     //clear
  myMatrix.drawStr("hello!");

}
