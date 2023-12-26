/*
kidsbits coding robot kit
Project 1
Blinking LED
http//www.kidsbits.cc
*/
int led=12;   //set to digital port
void setup()
{
  pinMode(led, OUTPUT);  //set led to OUTPUT
}

void loop()
{
  digitalWrite(led,HIGH);  //led outputs high levels, LED on
  delay(500);            //delay in 500ms
  digitalWrite(led,LOW);   //led outputs low levels, LED off
  delay(500);
}
