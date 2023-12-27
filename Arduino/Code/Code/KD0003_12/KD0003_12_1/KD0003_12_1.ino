/*
kidsbits coding robot kit
Project 12-1
Bluetooth Remote Control
http//www.kidsbits.cc
*/
char ble_val; //A character variable that holds the value received by Bluetooth
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) //Determine whether there is data in the serial port buffer area
  {
    ble_val = Serial.read();  //Read data from the serial port buffer
    Serial.println(ble_val);  //print
  }
}
//**********************************************************************
