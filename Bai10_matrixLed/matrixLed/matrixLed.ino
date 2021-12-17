int lock_hang = 13;
int lock_cot = 7;
int latch = 11;
int data_hang = 12;
int data_cot = 6;
byte H[8]={
  B01100110,
  B01100110,
  B01100110,
  B01111110,
  B01111110,
  B01100110,
  B01100110,
  B01100110
};
byte O[8]={
  B00111100,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00111100
};
byte A[8]={
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01100110,
  B01100110,
  B01100110,
  B01100110
};
byte N[8]={
  B11000011,
  B11000111,
  B11001111,
  B11111111,
  B11111111,
  B11110011,
  B11100011,
  B11000011
};
byte G[8]={
  B00111100,
  B01100110,
  B01100110,
  B00000110,
  B00000110,
  B01110110,
  B01100110,
  B00111100
};

byte hex[8]={
    B11111110,
    B11111101,
    B11111011,
    B11110111,
    B11101111,
    B11011111,
    B10111111,
    B01111111
};
void setup()
{
  pinMode(lock_hang, OUTPUT);
  pinMode(lock_cot, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(data_hang, OUTPUT);
  pinMode(data_cot, OUTPUT);
}

void loop()
{
  H1();
  delay(1000);
  O1();
  delay(1000);
  A2();
  delay(1000);
  N1();
  delay(1000);
  G1();
  delay(1000);
}
void H1(){
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,H[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
 }
 void O1(){
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,O[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
 }
void A2(){
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,A[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
 }
void N1(){
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,N[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
 }
void G1(){
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,G[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
 }
