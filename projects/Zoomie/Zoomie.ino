// purple, red, yellow, green, blue
// purple - 190, 33, 252
// red - 255, 0, 0
// yellow - 255, 255, 0
// blue 0, 0, 255
// green 0, 133, 18

#include <FastLED.h>

CRGB leds[150];
int intensity = 1;
int changeDelay = 30;

CRGB blank = CRGB(0, 0, 0);
CRGB purple = CRGB(22, 4, 30);
CRGB white = CRGB(intensity, intensity, intensity);
CRGB red = CRGB(30, 0, 0);
CRGB yellow = CRGB(30, 30, 0);
CRGB blue = CRGB(0, 0, 30);
CRGB green = CRGB(0, 16, 30);
CRGB teal = CRGB(4, intensity, 19);
int colors[5] = {purple, red, yellow, green, blue};

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
};

void loop()
{
  for (int j = 0; j < 150; j++)
  {
    for (int i = 0; i < 150; i++)
    {
      leds[i] = CRGB(0, 0, 0);
    }
    leds[j] = CRGB(255, 255, 255);
    FastLED.show();
    delay(changeDelay);
  }
};