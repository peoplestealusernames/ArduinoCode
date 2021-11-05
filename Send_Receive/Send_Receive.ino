/*
  Simple example for receiving
  
  https://github.com/sui77/rc-switch/
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();
RCSwitch SendSwitch = RCSwitch();

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600);
  Serial.print("On");
  
  mySwitch.enableReceive(0);  // Receiver on interrupt 0 => that is pin #2
  SendSwitch.enableTransmit(10);
}

void loop() {
  if (mySwitch.available()) {
    
    /* Serial.print("Received ");
    Serial.print( mySwitch.getReceivedValue() );
    Serial.print(" / ");
    Serial.print( mySwitch.getReceivedBitlength() );
    Serial.print("bit ");
    Serial.print("Protocol: ");
    Serial.println( mySwitch.getReceivedProtocol() );
    */
    for (int x = 0; x < 10; x++)
    {
     delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    }
    
    mySwitch.resetAvailable();
  }

  SendSwitch.send("000000000001010100010001");
}
