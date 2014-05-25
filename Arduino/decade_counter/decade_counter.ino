#include <Adafruit_NeoPixel.h>

#define PIN 3

int sensorPin = A2;

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  
  analogReference(INTERNAL); // set to the internal 1.1v ref voltage
  pinMode(sensorPin, INPUT);
  digitalWrite(sensorPin, HIGH); // enable the internal pull up.
}

void loop() {
  
  int sensorValue = analogRead(sensorPin);
  
  if (sensorValue > 290) // 9
      strip.setPixelColor(0, strip.Color(0, 255, 0));
  else if (sensorValue > 260) // 8
      strip.setPixelColor(0, strip.Color(0, 0, 255));
  else if (sensorValue > 240) // 7
      strip.setPixelColor(0, strip.Color(0, 255, 255));
  else if (sensorValue > 215) // 6
      strip.setPixelColor(0, strip.Color(0, 255, 0));
  else if (sensorValue > 190) // 5
      strip.setPixelColor(0, strip.Color(0, 0, 255));
  else if (sensorValue > 170) // 4
      strip.setPixelColor(0, strip.Color(0, 255, 255));
  else if (sensorValue > 145) // 3
      strip.setPixelColor(0, strip.Color(0, 255, 0));
  else if (sensorValue > 120) // 2
      strip.setPixelColor(0, strip.Color(0, 0, 255));
  else if (sensorValue > 90) // 1
      strip.setPixelColor(0, strip.Color(0, 255, 255));
  else
      strip.setPixelColor(0, strip.Color(255, 0, 0));

 
  
  strip.begin();
  strip.show();
  
  //delay(200);
}
