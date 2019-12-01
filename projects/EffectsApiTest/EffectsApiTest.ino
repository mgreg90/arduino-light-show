#include <Colors.h>
#include <Strand.h>
#include <RainbowWave.h>
#include <FastLED.h>

CRGB leds[150];
int intensity = 80;
int beatMilliseconds = 350;

Strand TopStrand;
Strand BottomStrand;

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
  TopStrand = Strand(leds, 0, 75);
  BottomStrand = Strand(leds, 76, 150);
}

void loop()
{
  RainbowWave rainbowWave = new RainbowWave();
  TopStrand.applyEffect(rainbowWave);
  FastLED.show();
}