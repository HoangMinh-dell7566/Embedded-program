int A=11,B=10,C=9,D=8;
void setup() {
 pinMode(A,OUTPUT);
 pinMode(B,OUTPUT);
 pinMode(C,OUTPUT);
 pinMode(D,OUTPUT);
}
void khong(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
}

void mot(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void hai(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,HIGH); digitalWrite(D,LOW);
}
void ba(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
}
void bon(){
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
}
void nam(){
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void sau(){
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,LOW);
}
void bay(){
  digitalWrite(A,LOW); digitalWrite(B,HIGH);
  digitalWrite(C,HIGH); digitalWrite(D,HIGH);
}
void tam(){
  digitalWrite(A,HIGH); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
}
void chin(){
  digitalWrite(A,HIGH); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void loop() {
   khong();
  delay(500);
  mot();
  delay(500);
  hai();
  delay(500);
  ba();
  delay(500);
  bon();
  delay(500);
  nam();
  delay(500);
  sau();
  delay(500);
  bay();
  delay(500);
  tam();
  delay(500);//
  chin();
  delay(500);
}
