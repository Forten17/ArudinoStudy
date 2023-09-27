#include <M5Unified.h>

void setup() {
  auto cfg = M5.config();
  cfg.serial_baudrate = 9600;

  M5.begin(cfg);
  pinMode(27, OUTPUT);
  pinMode(19, OUTPUT);
}

void loop() {
  M5.update();  //m5stackの状態の更新を検知する
  if (M5.BtnA.isPressed()) {
    M5.Lcd.println("holdA");
    //1個目のLED点灯
    digitalWrite(27, HIGH);
    M5.Lcd.println("LED1 ON");
    delay(1000);

    //1個目のLED消灯
    digitalWrite(27, LOW);
    delay(1000);
  } else if (M5.BtnC.isPressed()) {
    M5.Lcd.println("holdC");
    digitalWrite(19, HIGH);
    delay(500);

    digitalWrite(19, LOW);
    delay(500);
  } else {  //ifが偽のとき
    delay(500);
    M5.Lcd.print(".");
  }
}
