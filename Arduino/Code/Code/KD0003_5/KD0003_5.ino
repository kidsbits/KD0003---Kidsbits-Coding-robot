/*
kidsbits coding robot kit
Project 5
Button Counter
http//www.kidsbits.cc
*/
volatile int num;      //Define the integer variable num

void setup(){
  num = 0;              //variable num is 0
  Serial.begin(9600);        //Set baud rate
  pinMode(12, INPUT);      //Set digital port 12 to input
}

void loop(){
  if (digitalRead(12) == 0) {     //Judge whether digital port 12 is low level
    delay(10);                  //Delay 10ms eliminate button jitter
    if (digitalRead(12) == 0) {
      delay(200);
      if (digitalRead(12) == 1) {    //Judge whether digital port 12 is high level
        delay(10);                  //Delay 10ms eliminate button jitter
        if (digitalRead(12) == 1) {
          num = num + 1;     //Count the number of times the key is pressed
          Serial.println(num);   //Display the number of times the key is pressed

        }
      }
    }
  }
}
