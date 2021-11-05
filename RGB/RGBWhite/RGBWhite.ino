int red = 5;
int green = 3;
int blue = 6;
int t = 500;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A7, OUTPUT);
}

void reset(int pin)
{
  analogWrite(red, 0);
  analogWrite(green,0);
  analogWrite(blue,0);
  analogWrite(pin,255);
  delay(t);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); 
  reset(red);
  reset(green);
  reset(blue);
  digitalWrite(LED_BUILTIN, LOW); 
  analogWrite(red,200);
  analogWrite(green,200);
  analogWrite(blue,200);
  delay(1000);
}
