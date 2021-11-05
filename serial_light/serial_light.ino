void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

String MsgTab = "";

void loop() {
  while(Serial.available()>0) {
    char Rec = Serial.read();

    if (Rec == '|'){
      MsgRec(MsgTab);
      MsgTab = "";
    } else {
      MsgTab.concat(Rec);
    }
  }

}

void MsgRec(String Msg) {
  if (Msg == "On") {
    digitalWrite(LED_BUILTIN, HIGH);
  };
  if (Msg == "Off") {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
