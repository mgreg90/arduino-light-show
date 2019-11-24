// TODO use local libraries instead of just one messy file.
#include <Colors.h>
#include <Strand.h>
#include <FastLED.h>

CRGB leds[150];
int intensity = 30;
int beatMilliseconds = 350;

Strand BottomStrand;
Strand RightStrand;
Strand TopStrand;
Strand LeftStrand;

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
  BottomStrand = Strand(leds, 0, 45);
  RightStrand = Strand(leds, 46, 75);
  TopStrand = Strand(leds, 76, 120);
  LeftStrand = Strand(leds, 121, 150);
}

void loop() 
{
  // TODO figure out how to use strand here!
  // BottomStrand.setColor(CRGB(30, 30, 30));
  // for (int i = 0; i < 150; i++) {
  //   leds[i] = Colors::blue(30);
  // }
  // FastLED.show();
  for (int i = 0; i < 8; i++) {
    single_loop(Colors::blue(intensity), Colors::green(intensity));
  }
  for (int i = 0; i < 8; i++) {
    single_loop(Colors::yellow(intensity), Colors::purple(intensity));
  }
}

void single_loop(CRGB color1, CRGB color2) {
  BottomStrand.setColor(color1);
  TopStrand.setColor(color1);
  RightStrand.setColor(color2);
  LeftStrand.setColor(color2);
  FastLED.show();
  delay(beatMilliseconds);

  BottomStrand.setColor(color2);
  TopStrand.setColor(color2);
  RightStrand.setColor(color1);
  LeftStrand.setColor(color1);
  FastLED.show();
  delay(beatMilliseconds);
}