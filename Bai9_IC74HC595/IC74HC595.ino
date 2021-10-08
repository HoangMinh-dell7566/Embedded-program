int _data=5,_latch=6,_clock=7;
byte ledStatus;
void setup() {
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
}

void loop() {
  //Sáng tuần tự
  ledStatus = 0;//mặc định là không có đèn nào sáng hết (0 = 0b00000000)
  for (int i = 0; i < 8; i++) {
    ledStatus = (ledStatus << 1) | 1;//Đẩy toàn bộ các bit qua trái 1 bit và cộng bit có giá trị là 1 ở bit 0  
    digitalWrite(_latch, LOW);
    //ShiftOut ra IC
    shiftOut(_data, _clock, MSBFIRST, ledStatus);  
    digitalWrite(_latch, HIGH);//các đèn LED sẽ sáng với trạng thái vừa được cập nhập
    delay(500); // Dừng chương trình khoảng 500 mili giây để thấy các hiệu ứng của đèn LED
  }
  
  //Tắt tuần tự
  for (int i = 0;i<8;i++) {
    ledStatus <<= 1; //Đẩy tất cả các bit qua bên trái 1 bit
    digitalWrite(_latch, LOW);
    shiftOut(_data, _clock, MSBFIRST, ledStatus);  
    digitalWrite(_latch, HIGH);
    delay(500);
  }
}
