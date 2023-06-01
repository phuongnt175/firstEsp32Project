#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  // put your setup code here, to run once:l
  Serial.begin(115200);

  pinMode(23, OUTPUT);
  digitalWrite(23, 128);

  tft.init();

  tft.setRotation(1);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_BLACK);
  
  tft.setTextSize(2);
  tft.setTextColor(TFT_GREEN);
  tft.drawString("Hello from Setup", 50, 50);
}

void loop() {
  // put your main code here, to run repeatedly:
  tft.setTextSize(2);
  tft.setTextColor(TFT_RED);
  tft.drawString("Hello from loop", 50, 100);
}