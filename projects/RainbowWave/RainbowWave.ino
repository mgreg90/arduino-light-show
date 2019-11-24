// purple, red, yellow, green, blue
// purple - 190, 33, 252
// red - 255, 0, 0
// yellow - 255, 255, 0
// blue 0, 0, 255
// green 0, 133, 18

#include <FastLED.h>

CRGB leds[150];
int changeDelay = 1;

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
};

void loop()
{
  for (int offset = 0; offset < 150; offset++) {
    for (int i = 0; i < 50; i++) {
      int index = (i + offset) % 150;
      leds[index] = CRGB(50 - i, 0 + i, 0);
    }
    for (int i = 0; i < 50; i++) {
      int index = (i + 50 + offset) % 150;
      leds[index] = CRGB(0, 50 - i, 0 + i);
    }
    for (int i = 0; i < 50; i++) {
      int index = (i + 100 + offset) % 150;
      leds[index] = CRGB(0 + i, 0, 50 - i);
    }
    FastLED.show();
    delay(changeDelay);
  }
};