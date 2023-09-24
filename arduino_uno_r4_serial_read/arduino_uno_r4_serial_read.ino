char input[30];
int i = 0;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()){
    input[i] = Serial1.read();
//Serial.println("Hello World");
    if (i > 30 || input[i] == '.' ){
      input[i] = '\0';
      Serial.write(input);
      Serial.write("\n");
      i = 0; 
    }
    else { 
      i++; 
    }
  }
}