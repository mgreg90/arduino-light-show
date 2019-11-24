#include <Strand.h>
#include <Colors.h>
#include <FastLED.h>

CRGB leds[150];
int intensity = 30;

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
}

void loop()
{
  // Strand all = Strand(leds, 0, 100);
  // all.setColor(Colors::red(30));
  for (int i = 0; i < 150; i++) {
    leds[i] = Colors::white(80);
  };
  FastLED.show();
}