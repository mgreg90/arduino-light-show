#include "Arduino.h"
#include "Strand.h"
#include <FastLED.h>

Strand::Strand() {};
Strand::Strand(CRGB leds, int firstLEDIndex, int lastLEDIndex) {
  _leds = &leds;
  _firstLEDIndex = firstLEDIndex;
  _lastLEDIndex = lastLEDIndex;
};

void Strand::setColor(CRGB color) {
  for (int i = _firstLEDIndex; i < _lastLEDIndex; i++){
    _leds[i] = color;
  };
};