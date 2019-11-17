#include <FastLED.h>

class Strand
{
public:
  Strand() {};
  Strand(CRGB leds, int firstLEDIndex, int lastLEDIndex)
  {
    _leds = leds;
    _firstLEDIndex = firstLEDIndex;
    _lastLEDIndex = lastLEDIndex;
  };

  void setColor(CRGB color)
  {
    for (int i = _firstLEDIndex; i < _lastLEDIndex; i++)
    {
      _leds[i] = color;
    }
  };

private:
  CRGB _leds;
  int _firstLEDIndex;
  int _lastLEDIndex;
};