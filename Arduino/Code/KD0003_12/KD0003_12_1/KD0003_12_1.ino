/*
kidsbits coding robot kit
Project 12-1
Bluetooth Remote Control
http//www.kidsbits.cc
*/
char ble_val; //字符变量，用于存放蓝牙接收到的值
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) //判断串口缓存区是否有数据
  {
    ble_val = Serial.read();  //读取串口缓存区的数据
    Serial.println(ble_val);  //打印出来
  }
}
//**********************************************************************
