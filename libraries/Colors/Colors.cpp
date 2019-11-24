#include "Arduino.h"
#include "Colors.h"
#include <FastLED.h>

CRGB Colors::blank()
{
  return CRGB(0, 0, 0);
};

CRGB Colors::red(int intensity) {
  return CRGB(intensity, 0, 0);
};

CRGB Colors::green(int intensity) {
  return CRGB(0, intensity, 0);
};

CRGB Colors::blue(int intensity) {
  return CRGB(0, 0, intensity);
};

CRGB Colors::white(int intensity) {
  return CRGB(intensity, intensity, intensity);
};

CRGB Colors::yellow(int intensity) {
  return CRGB(intensity, intensity, 0);
};

CRGB Colors::purple(int intensity) {
  return CRGB(0, intensity, intensity);
};

// TODO add pink
// CRGB pink = CRGB(255 / 255 * 30, 105 / 255 * 30, 180 / 255 * 30);