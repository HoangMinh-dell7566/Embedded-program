int x =0;
void setup()
{
  Serial.begin(960000);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  x = analogRead(A0);
  Serial.print(x);
  int brightness = map(x,0,1023,0,255);
  digitalWrite(9,brightness);  
  delay(1000);
}
