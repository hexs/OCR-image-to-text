#include "FastLED.h"
#define LED_PIN     7 //กำหนดขาที่เชื่อมต่อกับสายส่งสัญญาณของ LED ในที่คือขา 7
#define NUM_LEDS    20 //กำหนดจำนวนหลอดไฟ LED ที่ต้องการให้ทำงาน ***ในกรณีของโค๊ดนี้คือ 20 แต่กำหนดให้หลอดไฟติดเพียง 10 ดวงเท่านั้น ***
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}
void loop() {

  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(500);
  leds[1] = CRGB(0, 255, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 255);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(0, 72, 255);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(73, 50, 255);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(150, 0, 255);
  FastLED.show();
  delay(500);
  leds[9] = CRGB(255, 200, 20);
  FastLED.show();
  delay(500);
  leds[10] = CRGB(0, 255, 255);
  FastLED.show();
  delay(500);
  leds[14] = CRGB(85, 60, 180);
  FastLED.show();
  delay(500);
  leds[19] = CRGB(50, 255, 20);
  FastLED.show();
  delay(500);
}
