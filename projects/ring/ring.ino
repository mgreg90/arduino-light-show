// purple, red, yellow, green, blue
// purple - 190, 33, 252
// red - 255, 0, 0
// yellow - 255, 255, 0
// blue 0, 0, 255
// green 0, 133, 18

#include <FastLED.h>

CRGB leds[150];
int intensity = 30;
int changeDelay = 30;

CRGB blank = CRGB(0, 0, 0);
CRGB purple = CRGB(22, 4, 30);
CRGB white = CRGB(intensity, intensity, intensity);
CRGB red = CRGB(30, 0, 0);
CRGB yellow = CRGB(30, 30, 0);
CRGB blue = CRGB(0, 0, 30);
CRGB green = CRGB(0, 16, 30);
CRGB teal = CRGB(4, intensity, 19);
int colors[5] = {purple, red, yellow, green, blue};

void setup()
{
  FastLED.addLeds<WS2812, 2, GRB>(leds, 150);
};

void loop(){
    // original 5 color set
    // runSet5(purple, red, yellow, green, blue);
    // runSet5(blue, purple, red, yellow, green);
    // runSet5(green, blue, purple, red, yellow);
    // runSet5(yellow, green, blue, purple, red);
    // runSet5(red, yellow, green, blue, purple);

    // with 3 blanks
    runSet8(purple, red, yellow, green, blue, blank, blank, blank);
    runSet8(blank, purple, red, yellow, green, blue, blank, blank);
    runSet8(blank, blank, purple, red, yellow, green, blue, blank);
    runSet8(blank, blank, blank, purple, red, yellow, green, blue);
    runSet8(blue, blank, blank, blank, purple, red, yellow, green);
    runSet8(green, blue, blank, blank, blank, purple, red, yellow);
    runSet8(yellow, green, blue, blank, blank, blank, purple, red);
    runSet8(red, yellow, green, blue, blank, blank, blank, purple);
};
void runSet8(CRGB color1, CRGB color2, CRGB color3, CRGB color4, CRGB color5, CRGB color6, CRGB color7, CRGB color8)
{
  for (int i = 0; i < 150; i += 8)
  {
    if (i < 150) { leds[i] = color1; }
    if (i + 1 < 150) { leds[i + 1] = color2; }
    if (i + 2 < 150) { leds[i + 2] = color3; }
    if (i + 3 < 150) { leds[i + 3] = color4; }
    if (i + 4 < 150) { leds[i + 4] = color5; }
    if (i + 5 < 150) { leds[i + 5] = color6; }
    if (i + 6 < 150) { leds[i + 6] = color7; }
    if (i + 7 < 150) { leds[i + 7] = color8; }
  };
  FastLED.show();
  delay(changeDelay);
}
void runSet5(CRGB color1, CRGB color2, CRGB color3, CRGB color4, CRGB color5)
{
  for (int i = 0; i < 150; i += 5)
  {
    if (i < 150) { leds[i] = color1; }
    if (i + 1 < 150) { leds[i + 1] = color2; }
    if (i + 2 < 150) { leds[i + 2] = color3; }
    if (i + 3 < 150) { leds[i + 3] = color4; }
    if (i + 4 < 150) { leds[i + 4] = color5; }
  };
  FastLED.show();
  delay(changeDelay);
}