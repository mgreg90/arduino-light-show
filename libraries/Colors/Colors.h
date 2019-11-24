#ifndef Colors_h
#define Colors_h

#include "Arduino.h"
#include <FastLED.h>

class Colors
{
  public:
    static CRGB blank();
    static CRGB red(int intensity);
    static CRGB green(int intensity);
    static CRGB blue(int intensity);
    static CRGB white(int intensity);
    static CRGB yellow(int intensity);
    static CRGB purple(int intensity);

  private:
    Colors() {}
};

#endif