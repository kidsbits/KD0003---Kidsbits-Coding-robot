/*
kidsbits coding robot kit
Project 14
Bluetooth Robot Car
http//www.kidsbits.cc
*/
#include <Matrix.h>

volatile char val;
volatile int distance1;
volatile int val_L;
volatile int val_R;
volatile int distance2;
volatile int distance3;
volatile int distance4;
volatile int sound1;
volatile int flag;

Matrix myMatrix(A4, A5);     //实例化一个对象名为myMatrix，和定义通讯引脚
void Front() {                //前进代码
  digitalWrite(8,LOW);    
  digitalWrite(A1,LOW);
  analogWrite(9,140);   
  analogWrite(10,140);  
}

void Left() {                 //前进左转代码
  digitalWrite(8, LOW);
  digitalWrite(A1, LOW);
  analogWrite(9, 100);
  analogWrite(10, 180);
}

void Left2() {             //左转代码
  digitalWrite(8, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(9, 120);
  analogWrite(10, 120);
}

void Back() {                //后退代码
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,149);
  analogWrite(10,150);
}

void Right() {                //前进右转代码
  digitalWrite(8, LOW);
  digitalWrite(A1, LOW);
  analogWrite(9, 180);
  analogWrite(10, 100);
}

void Right2() {            //右转代码
  digitalWrite(8, LOW);
  digitalWrite(A1, HIGH);
  analogWrite(9, 120);
  analogWrite(10, 120);
}

void Stop() {                  //暂停代码
  digitalWrite(8, HIGH);
  digitalWrite(A1, HIGH);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
//LCD点阵显示代码
uint8_t LedArray1[8] = {0x18, 0x18, 0x18, 0x18, 0x99, 0x5a, 0x3c, 0x18};
uint8_t  LEDArray[8];
uint8_t LedArray2[8] = {0x18, 0x3c, 0x5a, 0x99, 0x18, 0x18, 0x18, 0x18};
uint8_t LedArray4[8] = {0x08, 0x04, 0x02, 0xff, 0xff, 0x02, 0x04, 0x08};
uint8_t LedArray3[8] = {0x10, 0x20, 0x40, 0xff, 0xff, 0x40, 0x20, 0x10};
uint8_t LedArray5[8] = {0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18};
float checkdistance_2_3() {        //超声波测距
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;     //计算距离
  delay(10);                           //延时
  return distance;
}

void follow() {
  flag = 0;
  while (flag == 0) {
    distance1 = checkdistance_2_3();
    if (distance1 > 20 && distance1 < 40) {
      Front();

    } else if (distance1 > 15 && distance1 <= 20) {
      Stop();
    } else if (distance1 > 0 && distance1 <= 15) {
      Back();
    } else if (distance1 > 40) {
      Stop();
    }
    if (Serial.available() > 0) {
      val = Serial.read();
      if (val == 'S') {
        flag = 1;

      }

    }
  }
}

void tracking() {
  flag = 0;
  while (flag == 0) {
    val_L = digitalRead(4);
    val_R = digitalRead(5);
    if (val_L == 0 && val_R == 1) {
      Left();

    } else if (val_L == 1 && val_R == 0) {
      Right();
    } else if (val_L == 1 && val_R == 1) {
      Stop();
    } else {
      Front();

    }
    if (Serial.available() > 0) {
      val = Serial.read();
      if (val == 'S') {
        flag = 1;

      }

    }
  }
}

void avoid(){
  distance4 = checkdistance_2_3();       //超声波当前所测的距离赋给distance
  if(distance4 < 15&&distance4 >0){
    Stop();              //暂停
    Left2();             //左转
    delay(380);           //延时380毫秒
    Stop();
    distance1 = checkdistance_2_3();   //当前超声波所测的值赋给distance1
    delay(300);                //延时300毫秒
    Right2();                 //右转  
    delay(750);           //延时750毫秒
    Stop();            //暂停
    distance2 = checkdistance_2_3();   //当前超声波所测的值赋给distance2
    delay(300);
    if (distance1 > distance2) {    //如果左边大于右边
      Left2();
      delay(750);
      Front();
    }else{
      Front();
      }
  }
  else{
  Front();
  }
 
}


void sound() {
  flag = 0;
  while (flag == 0) {
    sound1 = analogRead(A0);
    if (sound1 > 150) {
       for(int i=0;i<10;i++){
    avoid();
    delay(10);
  }
  }
  else{
    Stop();
  }
    if (Serial.available() > 0) {
      val = Serial.read();
      if (val == 'S') {
        flag = 1;

      }

    }
  }
}

void music123() {                //生日歌代码
  flag = 0;
  while (flag == 0) {
    tone(6, 392);
    delay(125);
    tone(6, 392);
    delay(125);
    tone(6, 440);
    delay(250);
    tone(6, 392);
    delay(250);
    tone(6, 532);
    delay(250);
    tone(6, 494);
    delay(500);
    tone(6, 392);
    delay(125);
    tone(6, 392);
    delay(125);
    tone(6, 440);
    delay(250);
    tone(6, 392);
    delay(250);
    tone(6, 587);
    delay(250);
    tone(6, 532);
    delay(500);
    tone(6, 392);
    delay(125);
    tone(6, 392);
    delay(125);
    tone(6, 784);
    delay(250);
    tone(6, 659);
    delay(250);
    tone(6, 532);
    delay(250);
    tone(6, 494);
    delay(250);
    tone(6, 440);
    delay(250);
    tone(6, 392);
    delay(125);
    tone(6, 392);
    delay(125);
    tone(6, 330);
    delay(250);
    tone(6, 262);
    delay(250);
    tone(6, 587);
    delay(250);
    tone(6, 532);
    delay(500);
    noTone(6);
    flag = 1;
    val = 'S';
  }
}

void setup() {
  Serial.begin(9600);
  val = 0;
  distance1 = 0;
  val_L = 0;
  val_R = 0;
  distance2 = 0;
  distance3 = 0;
  distance4 = 0;
  sound1 = 0;
  flag = 0;
  myMatrix.begin(0x70);

  myMatrix.clear();
  myMatrix.clear();
  myMatrix.writeDisplay();
  pinMode(8, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

}

void loop() {
  if (Serial.available() > 0) {
    val = Serial.read();
    Serial.println(val);

  }
  switch (val) {
    case 'F':
      Front();
      myMatrix.clear();
      myMatrix.writeDisplay();
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
      break;
    case 'B':
      Back();
      myMatrix.clear();
      myMatrix.writeDisplay();
      for (int i = 0; i < 8; i++)
      {
        LEDArray[i] = LedArray2[i];
        for (int j = 7; j >= 0; j--)
        {
          if ((LEDArray[i] & 0x01) > 0)
            myMatrix.drawPixel(j, i, 1);
          LEDArray[i] = LEDArray[i] >> 1;
        }
      }
      myMatrix.writeDisplay();
      break;
    case 'L':
      Left();
      myMatrix.clear();
      myMatrix.writeDisplay();
      for (int i = 0; i < 8; i++)
      {
        LEDArray[i] = LedArray4[i];
        for (int j = 7; j >= 0; j--)
        {
          if ((LEDArray[i] & 0x01) > 0)
            myMatrix.drawPixel(j, i, 1);
          LEDArray[i] = LEDArray[i] >> 1;
        }
      }
      myMatrix.writeDisplay();
      break;
    case 'R':
      Right();
      myMatrix.clear();
      myMatrix.writeDisplay();
      for (int i = 0; i < 8; i++)
      {
        LEDArray[i] = LedArray3[i];
        for (int j = 7; j >= 0; j--)
        {
          if ((LEDArray[i] & 0x01) > 0)
            myMatrix.drawPixel(j, i, 1);
          LEDArray[i] = LEDArray[i] >> 1;
        }
      }
      myMatrix.writeDisplay();
      break;
    case 'S':
      Stop();
      myMatrix.clear();
      myMatrix.writeDisplay();
      for (int i = 0; i < 8; i++)
      {
        LEDArray[i] = LedArray5[i];
        for (int j = 7; j >= 0; j--)
        {
          if ((LEDArray[i] & 0x01) > 0)
            myMatrix.drawPixel(j, i, 1);
          LEDArray[i] = LEDArray[i] >> 1;
        }
      }
      myMatrix.writeDisplay();
      noTone(6);
      break;
    case 'U':
      follow();
      break;
    case 'X':
      tracking();
      break;
    case 'Y':
      sound();
      break;
    case '1':
      tone(6, 262);
      break;
    case '2':
      tone(6, 294);
      break;
    case '3':
      tone(6, 330);
      break;
    case '4':
      tone(6, 349);
      break;
    case '5':
      tone(6, 392);
      break;
    case '6':
      tone(6, 440);
      break;
    case '7':
      tone(6, 494);
      break;
    case '8':
      tone(6, 532);
      break;
    case 'G':
      tone(6, 587);
      break;
    case 'H':
      tone(6, 659);
      break;
    case 'J':
      tone(6, 698);
      break;
    case 'P':
      music123();
      break;
  }

}
