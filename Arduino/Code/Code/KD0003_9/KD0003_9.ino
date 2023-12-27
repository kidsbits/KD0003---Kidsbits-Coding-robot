/*
kidsbits coding robot kit
Project 9
Line Tracking robot
http//www.kidsbits.cc
*/
#include <Matrix.h>

Matrix myMatrix(A4,A5);        //Instantiate an object myMatrix, and define the communication pins
uint8_t LedArray1[8]={0xff,0x81,0xbd,0xa5,0xa5,0xbd,0x81,0xff};   //Define an array and assign it to the array data obtained by the modulating tool
uint8_t  LEDArray[8];
void left() {              //Define the state of the left turn
  digitalWrite(8,HIGH);    //Left motor rotates anticlockwise
  digitalWrite(A1,LOW);   //right motor rotates clockwise
  analogWrite(9,100);   //Left motor speed is 100
  analogWrite(10,100);    //right motor speed is 100
}

void Stop() {           //Define the state of stop
  digitalWrite(8,HIGH);   //Left motor rotates anticlockwise
  digitalWrite(A1,HIGH);    //right motor rotates anticlockwise
  analogWrite(9,0);     //Left motor speed is 0
  analogWrite(10,0);      //right motor speed is 0

void right() {          //Define the state of the right turn
  digitalWrite(8,LOW);      //Left motor rotates clockwise
  digitalWrite(A1,HIGH);      //right motor rotates anticlockwise
  analogWrite(9,102);     //Left motor speed is 102
  analogWrite(10,102);      //right motor speed is 102
}

void front() {            //Define the state of advance
  digitalWrite(8,LOW);      //Left motor rotates clockwise
  digitalWrite(A1,LOW);       //right motor rotates clockwise
  analogWrite(9,150);     //Left motor speed is 150
  analogWrite(10,150);      //right motor speed is 150
}

void setup(){       
  Serial.begin(9600);
  myMatrix.begin(0x70);
  myMatrix.clear();   //clear
  delay(1000);        // delay
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
