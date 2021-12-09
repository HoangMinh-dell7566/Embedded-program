#include <Servo.h>  //khai báo thư viện servo
Servo myservo1, myservo2, myservo3, myservo4 ; //tạo 4 đối tượng servo
#define sensor 2
#define led 10
//......................................................
void setup()
{
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  myservo4.attach(9);//thiết lập các chân kết nối vs motor
  myservo3.attach(8);
  myservo2.attach(7);
  myservo1.attach(6);
}
//......................................................
void loop()
{ // 
  if (digitalRead(sensor) == 1)
  {
    myservo4.write(0);  //nếu gặp vật cản thì quay về trạng thái ban đầu
    myservo3.write(0);
    myservo2.write(0);
    myservo1.write(0);
    digitalWrite(led, HIGH);// và bật led
  }
  else
  {
    myservo4.write(90); // k phat hien thì sẽ quay 1 góc 90 
    myservo3.write(90);
    myservo2.write(90);
    myservo1.write(90);
    digitalWrite(led, LOW);//và tắt led
  }
}
