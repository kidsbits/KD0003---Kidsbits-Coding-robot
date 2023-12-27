/*
kidsbits coding robot kit
Project 4
Distance Detector
http//www.kidsbits.cc
*/
volatile int distance;        //Define a variable distance

float checkdistance_2_3() {     //Define a range function
//The sensor is triggered by a high pulse of 10 microseconds or more.
  digitalWrite(2, LOW);       //Give a short low pulse in advance to ensure a clean high pulse:
  delayMicroseconds(2);       //Delay 2 microseconds
  digitalWrite(2, HIGH);
  delayMicroseconds(10);      //Delay 10 microseconds
  digitalWrite(2, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;      //Distance calculation formula
  delay(10);
  return distance;
}

void setup(){
  Serial.begin(9600);
  distance = 0;
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  distance = checkdistance_2_3();
  delay(1);
  Serial.println(distance);              //Serial monitor displays distance
  if (distance > 0 && distance < 8) {       //If the distance is greater than 0 and less than 8cm
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

}
