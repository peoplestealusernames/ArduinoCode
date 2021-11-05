int red = 6;
int green = 5;
int blue = 3;
int t = 0;
int pin = 3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A7, OUTPUT);
}

void loop()
{
  t=t+1;
  if(t>180) {t=0;
    switch (pin) {
      case 3:
        pin = 6; 
        break;
      case 6:
        pin = 5;
        break;
      default:
        pin = 3;
        break;
    }
  };
  analogWrite(pin, sin(t * (PI/180))*255);
  delay(5);
}
