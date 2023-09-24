String sendstr = "m5stack. ";

void setup(){
  Serial.begin(9600);
  Serial.println("Start writeing.");
}

void loop(){
  for (int i = 0; i < sendstr.length(); i++){
    Serial.write(sendstr.charAt(i)); 
  }
  delay(2000);
}