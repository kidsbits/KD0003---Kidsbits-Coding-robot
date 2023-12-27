/*
kidsbits coding robot kit
Project 3
Birthday Gift
http//www.kidsbits.cc
*/
void setup(){
  Serial.begin(9600);   //Set the baud rate to 9600
  pinMode(6, OUTPUT);  //Set analog port A6 to output
  pinMode(12, OUTPUT);  //Set digital port 12 to output
}

void loop(){
  Serial.println(analogRead(A6)); //Read the analog value of A6
  if (analogRead(A6) < 700) {     //Judge whether the value of A6 is less than 700
    tone(6,392);               //A6 analog value is 392 pulses
    delay(125);                //delay
    tone(6,392);
    digitalWrite(12,HIGH);       //Digital port 12 outputs high level
    delay(125);
    tone(6,440);
    digitalWrite(12,LOW);       //Digital port 12 outputs low level
    delay(250);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,532);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,494);
    delay(500);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(125);
    tone(6,392);
    delay(125);
    tone(6,440);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,587);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,532);
    delay(500);
    tone(6,392);
    digitalWrite(12,HIGH);
    delay(125);
    tone(6,392);
    delay(125);
    tone(6,784);
    digitalWrite(12,LOW);
    delay(250);
    tone(6,659);
    delay(250);
    tone(6,532);
    delay(250);
    tone(6,494);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,440);
    delay(250);
    tone(6,392);
    delay(125);
    digitalWrite(12,LOW);
    tone(6,392);
    delay(125);
    tone(6,330);
    delay(250);
    tone(6,262);
    digitalWrite(12,HIGH);
    delay(250);
    tone(6,587);
    delay(250);
    tone(6,532);
    delay(500);
    noTone(6);
    digitalWrite(12,LOW);

  }
  if (analogRead(A6) > 750) {
    digitalWrite(12,LOW);
    noTone(6);

  }

}
