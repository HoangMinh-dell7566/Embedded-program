// khai báo thư viện stepper
#include <Stepper.h>

// số bước trên mỗi vòng quay
const int stepsPerRevolution = 100;

//tạo đối tượng trong thư viện stepper
Stepper myStepper(stepsPerRevolution, 12, 11, 10, 9);


void setup()
{
  // thiết lập tốc độ tại 60rpm
  myStepper.setSpeed(60);
}

void loop() 
{
  myStepper.step(stepsPerRevolution);
  delay(500);

  myStepper.step(-stepsPerRevolution);
  delay(500);
}
