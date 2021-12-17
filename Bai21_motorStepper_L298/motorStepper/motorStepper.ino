#include <Stepper.h>
const int stepsPerRevolution = 20; // khởi tạo 1 đối tượng step 20 bước, 1 bước 18độ 
//Khai báo các chân để điều khiển step là 8 9 10 11 như trong Proteus
Stepper myStepper(stepsPerRevolution, 11, 10, 9, 8); // khai báo các chân để diều khiển step
//....................................................
void setup() {
  //tốc độ 50rpm
  myStepper.setSpeed(50);
  pinMode(8, OUTPUT); //Khai báo chân xuất tín hiệu
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
//....................................................
void loop() {
  myStepper.step(stepsPerRevolution); // Quay thuận 1 vòng 360 độ
  delay(1000); //Sau đó dừng 1 giây
  myStepper.step(-stepsPerRevolution);// Quay ngược 1 vòng 360 độ
  delay(1000);
}
