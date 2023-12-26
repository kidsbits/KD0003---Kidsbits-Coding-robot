/*
kidsbits coding robot kit
Project 7-1
8*8 Dot Matrix Dispaly
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);     //实例化一个对象名为myMatrix，和定义通讯引脚


void setup(){
  myMatrix.begin(0x70);     //通讯地址
}

void loop(){
  myMatrix.clear();     //清屏
  myMatrix.drawStr("hello!");

}
