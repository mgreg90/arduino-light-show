#include <FastLED.h>

class Colors {
  CRGB red(int intensity) {
    return CRGB(intensity, 0, 0);
  }
}

// CRGB Colors::red(int intensity)
// {
//   return CRGB(intensity, 0, 0);
// }