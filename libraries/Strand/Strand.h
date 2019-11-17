#include <FastLED.h>

class Strand
{
public:
  Strand();
  Strand(CRGB leds, int firstLEDIndex, int lastLEDIndex);
  void setColor(CRGB color);

private:
  CRGB _leds;
  int _firstLEDIndex;
  int _lastLEDIndex;
};