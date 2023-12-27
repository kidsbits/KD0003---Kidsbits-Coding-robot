/*
kidsbits coding robot kit
Project 11
Sound-controlled Smart Car
http//www.kidsbits.cc
*/
#include <Matrix.h>        
Matrix myMatrix(A4, A5);    //Instantiate an object myMatrix, and define the communication pins
volatile int distance;     //Ultrasonic ranging variable
volatile int distance1;
volatile int distance2;
int  sensorVal;
uint8_t LedArray1[8] = {0x00, 0x18, 0x24, 0x00, 0x00, 0xa5, 0xa5, 0x42};
uint8_t  LEDArray[8];  //Define an array variable without an initial value to facilitate the processing of multiple emoticon arrays

void front() {           //advance
  digitalWrite(8, LOW);
  digitalWrite(A1, LOW);
  analogWrite(9, 150);
  analogWrite(10, 150);
}

void back() {                 //move back
  digitalWrite(8, HIGH);
  digitalWrite(A1, HIGH);
  analogWrite(9, 150);
  analogWrite(10, 150);
}

void Stop() {               //Stop
  digitalWrite(8, HIGH);
  digitalWrite(A1, HIGH);
  analogWrite(9, 0);
  analogWrite(10, 0);
}

float checkdistance_2_3() {            //Ultrasonic ranging code
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;      //calculate distance
  delay(10);
  return distance;
}

 void left() {           //turn left
  digitalWrite(8, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(9, 140);
  analogWrite(10, 140);
}


void right() {              //turn right
  digitalWrite(8, LOW);
  digitalWrite(A1, HIGH);
  analogWrite(9, 140);
  analogWrite(10, 140);
}

void avoid(){
  distance = checkdistance_2_3();       //Assign the distance value to distance
  if(distance < 15&&distance >0){
    Stop();              // Stop
    left();             //turn left
    delay(380);           //delay 380ms
    Stop();
    distance1 = checkdistance_2_3();   //Assign the value to distance1
    delay(300);                //delay 300ms
    right();                 //turn right  
    delay(750);           //delay 750ms
    Stop();            // Stop
    distance2 = checkdistance_2_3();   //Assign the value to distance2
    delay(300);
    if (distance1 > distance2) {    //If the left is greater than the right 
      left();
      delay(750);
      front();
    }else{
      front();
      }
  }
  else{
  front();
  }
 
}


void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);       //Define pin 8 to output
  pinMode(A1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);          //Define pin 3 to input
  distance = 0;
  distance1 = 0;
  distance2 = 0;
  myMatrix.begin(0x70);
  myMatrix.clear();
  delay(1000);
  for (int i = 0; i < 8; i++)
  {
    LEDArray[i] = LedArray1[i];
    for (int j = 7; j >= 0; j--)
    {
      if ((LEDArray[i] & 0x01) > 0)
        myMatrix.drawPixel(j, i, 1);
      LEDArray[i] = LEDArray[i] >> 1;
    }
  }
  myMatrix.writeDisplay();
}


void loop() {
  sensorVal = analogRead(A0);
  Serial.println(sensorVal);
  if(sensorVal > 150){
   for(int i=0;i<10;i++){
    avoid();
    delay(10);
  }
  }
  else{
    Stop();
  }
}
