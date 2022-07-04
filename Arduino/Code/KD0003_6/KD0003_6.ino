void setup(){
  pinMode(8, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop(){
//前进代码
  digitalWrite(8,LOW);    
  digitalWrite(A1,LOW);
  analogWrite(9,200);   
  analogWrite(10,200);    
  delay(3000);
  //后退代码
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,194);
  analogWrite(10,200);
  delay(3000);
//  停止代码
  digitalWrite(8,HIGH);  
  digitalWrite(A1,HIGH);
  analogWrite(9,0);
  analogWrite(10,0);
  delay(3000);
//左转代码
  digitalWrite(8,HIGH);   
  digitalWrite(A1,LOW);
  analogWrite(9,120);
  analogWrite(10,120);
  delay(2000);
  //右转代码
  digitalWrite(8,LOW);   
  digitalWrite(A1,HIGH);
  analogWrite(9,120);
  analogWrite(10,120);
  delay(2000);
}
