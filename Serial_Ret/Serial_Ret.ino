void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0) {
    char Rec = Serial.read();
    Serial.println(Rec);
  }
}

/*void loop() {
  Serial.println("test");
  delay(1000);
}*/
