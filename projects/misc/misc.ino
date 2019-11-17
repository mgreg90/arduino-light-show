// TODO use local libraries instead of just one messy file.
// #include <Colors.h>
#include <FastLED.h>

CRGB leds[150];
int intensity = 30;
int beatMilliseconds = 350;
int line1Start = 0;
int line1End = 45;
int line2Start = 46;
int line2End = 75;
int line3Start = 76;
int line3End = 120;
int line4Start = 121;
int line4End = 150;

class Strand
{
public:
  Strand(int firstLEDIndex, int lastLEDIndex)
  {
    _firstLEDIndex = firstLEDIndex;
    _lastLEDIndex = lastLEDIndex;
  };

  void setColor(CRGB color)
  {
    for (int i = _firstLEDIndex; i < _lastLEDIndex; i++)
    {
      leds[i] = color;
    }
  }

private:
  int _firstLEDIndex;
  int _lastLEDIndex;
};

Strand BottomStrand = Strand(line1Start, line1End);
Strand RightStrand = Strand(line2Start, line2End);
Strand TopStrand = Strand(line3Start, line3End);
Strand LeftStrand = Strand(line4Start, line4End);

CRGB red = CRGB(intensity, 0, 0);
CRGB white = CRGB(intensity, intensity, intensity);
CRGB green = CRGB(0, intensity, 0);
CRGB teal = CRGB(4, intensity, 19);
CRGB blue = CRGB(0, 0, intensity);
CRGB yellow = CRGB(intensity, intensity, 0);
CRGB purple = CRGB(0, intensity, intensity);
CRGB pink = CRGB(intensity, 12, 21);

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
}

void loop()
{
  single_loop(yellow, pink, teal, white);
}

void single_loop(CRGB color1, CRGB color2, CRGB color3, CRGB color4)
{
  BottomStrand.setColor(color1);
  RightStrand.setColor(color2);
  TopStrand.setColor(color3);
  LeftStrand.setColor(color4);
  FastLED.show();
  delay(beatMilliseconds);

  BottomStrand.setColor(color2);
  RightStrand.setColor(color3);
  TopStrand.setColor(color4);
  LeftStrand.setColor(color1);
  FastLED.show();
  delay(beatMilliseconds);

  BottomStrand.setColor(color3);
  RightStrand.setColor(color4);
  TopStrand.setColor(color1);
  LeftStrand.setColor(color2);
  FastLED.show();
  delay(beatMilliseconds);

  BottomStrand.setColor(color4);
  RightStrand.setColor(color1);
  TopStrand.setColor(color2);
  LeftStrand.setColor(color3);
  FastLED.show();
  delay(beatMilliseconds);

}