volatile int num;      //定义整型变量num

void setup(){
  num = 0;              //变量num赋值为0
  Serial.begin(9600);        //设置波特率
  pinMode(12, INPUT);      //设置数字口12为输入
}

void loop(){
  if (digitalRead(12) == 0) {     //判断数字口12是否等于低电平
    delay(10);                  //延时10ms 按键消抖
    if (digitalRead(12) == 0) {
      delay(200);
      if (digitalRead(12) == 1) {    //判断数字口12是否等于高电平
        delay(10);                  //延时10ms 按键消抖
        if (digitalRead(12) == 1) {
          num = num + 1;     //计算按键按下的次数
          Serial.println(num);   //显示按键按下的次数

        }
      }
    }
  }
}
