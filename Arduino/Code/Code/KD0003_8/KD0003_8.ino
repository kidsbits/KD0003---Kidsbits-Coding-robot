/*
kidsbits coding robot kit
Project 8
Obstacle Avoidance Robot
http//www.kidsbits.cc
*/
volatile int distance;
volatile int distance1;
volatile int distance2;
void Stop() {          //Stop
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH); 
  analogWrite(9,0);
  analogWrite(10,0);
}

void left() {         //turn left
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,LOW);
  analogWrite(9,120);
  analogWrite(10,120);
}

float checkdistance_2_3() {         //Ultrasonic ranging code
  digitalWrite(2, LOW);          //Define pin 2 output low level
  delayMicroseconds(2);         //Delay 2 ms
  digitalWrite(2, HIGH);        //Define pin 2 output high level
  delayMicroseconds(10);      //Delay 10 ms
  digitalWrite(2, LOW);       
  float distance = pulseIn(3, HIGH) / 58.00;     // calculate distance
  delay(10);
  return distance;
}

void back() {           //move back
  digitalWrite(8,HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH);
  analogWrite(9,150);
  analogWrite(10,150);
}

void buzzer() {        //Buzzer code
  tone(6,532);
  tone(7,532);
  delay(250);
  noTone(6);
  noTone(7);
  delay(250);
  tone(6,532);
  tone(7,532);
  delay(250);
  noTone(6);
  noTone(7);
  delay(1000);
}

void front() {           //advance
  digitalWrite(8,LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,LOW);
  analogWrite(9,150);
  analogWrite(10,150);
}

void right() {         //turn right
  digitalWrite(8,LOW);
  pinMode(A1, OUTPUT);
  digitalWrite(A1,HIGH);
  analogWrite(9,120);
  analogWrite(10,120);
}

void setup(){
  Serial.begin(9600);
  distance = 0;
  distance1 = 0;
  distance2 = 0;
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  distance = checkdistance_2_3();     //Assign the distance value to distance
  if (distance < 15&&distance > 0) {         //Judge whether the distance is less than 15cm
    Stop();
    buzzer();
    delay(1000);
    left();
    delay(380);
    Stop();
    distance1 = checkdistance_2_3();
    delay(1000);
    right();
    delay(750);
    Stop();
    distance2 = checkdistance_2_3();
    delay(1000);
    if (distance1 > distance2) {      //If the left is greater than the right 
      left();
      delay(750);
      front();

    } else {
      front();

    }

  } else {
    front();

  }

}
