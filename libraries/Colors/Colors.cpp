#include <FastLED.h>

class Colors
{
  public:
    static CRGB Red(int intensity)
    {
      CRGB(intensity, 0, 0);
    }
}