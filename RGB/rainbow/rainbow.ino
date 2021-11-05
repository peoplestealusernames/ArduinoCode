/*UNCIA ROBOTICS | www.unciarobotics.com
  PROGRAM: ARDUINO RGB LED RAINBOW CODE USING PWM
  Glow RGB led with different patterns

  Connections:
  9     Red
  10    Green
  11    Blue
  GND   (-)
*/

// variables to hold the LED color
int Rvalue = 254, Gvalue = 1, Bvalue = 127;;
int Rdirection = -1, Gdirection = 1, Bdirection = -1;

// constants to name the pins
const int Red = 5, Green = 3, Blue = 6;
void setup() {
}

void loop() {
  //send PWM signal on LEDs
  analogWrite(Red, Rvalue);       // write analog signal
  analogWrite(Green, Gvalue);
  analogWrite(Blue, Bvalue);

  Rvalue = Rvalue + Rdirection;   //changing values of LEDs
  Gvalue = Gvalue + Gdirection;
  Bvalue = Bvalue + Bdirection;

  //now change direction for each color if it reaches 255
  if (Rvalue >= 255 || Rvalue <= 0)
  {
    Rdirection = Rdirection * -1;
  }
  if (Gvalue >= 255 || Gvalue <= 0)
  {
    Gdirection = Rdirection * -1;
  }
  if (Bvalue >= 255 || Bvalue <= 0)
  {
    Bdirection = Bdirection * -1;
  }
  delay(1);    //give some delay so you can see the change
}
