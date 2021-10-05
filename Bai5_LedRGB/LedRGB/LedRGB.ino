int redPin = 9;
int bluePin = 10;
int greenPin = 11;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
   // call the function to change the colors of LED randomly. 
    colorRGB(random(0,255),random(0,255),random(0,255)); //R:0-255 G:0-255 B:0-255
    delay(1000);
}
void colorRGB(int red, int green, int blue){
     analogWrite(redPin,constrain(red,0,255));
     analogWrite(greenPin,constrain(green,0,255));
     analogWrite(bluePin,constrain(blue,0,255));
}
