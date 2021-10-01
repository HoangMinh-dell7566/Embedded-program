void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
  int t=map(x,20,358,-40,125);
  if(t>37) digitalWrite(10,HIGH);
  else digitalWrite(10,LOW);
  delay(1000);

}
