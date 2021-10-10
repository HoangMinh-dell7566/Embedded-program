int lock_hang = 13;
int lock_cot = 7;
int latch = 11;
int data_hang = 12;
int data_cot = 6;
byte row[8]={
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01100110,
  B01100110,
  B01100110,
  B01100110
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
  for(int i=0;i<8;i++){
    digitalWrite(latch, LOW);
    shiftOut(data_hang,lock_hang,MSBFIRST,row[i]);
    shiftOut(data_cot,lock_cot,MSBFIRST,hex[i]);
    digitalWrite(latch, HIGH);
  }
//  digitalWrite(latch, LOW);
//    shiftOut(data_hang,lock_hang,MSBFIRST,B00111100);
//    shiftOut(data_cot,lock_cot,MSBFIRST,B01111110);
//    digitalWrite(latch, HIGH);
}
