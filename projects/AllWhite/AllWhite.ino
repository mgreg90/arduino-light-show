#include <Colors.h>
#include <FastLED.h>

CRGB leds[150];
int intensity = 80;
int beatMilliseconds = 350;

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
}

void loop()
{
  for (int i = 0; i < 150; i++) {
    leds[i] = Colors::white(intensity);
  }
  FastLED.show();
}
