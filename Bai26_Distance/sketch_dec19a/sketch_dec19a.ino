#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int trig = 8;
const int echo = 7;
//...............................................
void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(13, 0);
  lcd.print(" cm");
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}
//...............................................
void loop()
{
  unsigned long duration;
  int distance;
  digitalWrite(trig, 0);
  delayMicroseconds(2);
  digitalWrite(trig, 1);
  delayMicroseconds(5);
  digitalWrite(trig, 0);
  duration = pulseIn(echo, HIGH);
  distance = int(duration / 2 * 0.034);
  lcd.setCursor(10, 0);
  lcd.print(distance);
  delay(200);
}
