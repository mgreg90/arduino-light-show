#include <Colors.h>
#include <FastLED.h>

CRGB leds[150];

void setup() 
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
}

void loop() 
{
  for(int i = 0; i < 150; i++)
  {
    // TODO fix this error
    leds[i] = Colors::Red(50);
  }
  FastLED.show();
  delay(70);
}
