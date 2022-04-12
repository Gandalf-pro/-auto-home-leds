#ifndef pins__1
#define pins__1
#include <Arduino.h>

namespace Pins {
const uint8_t red0 = D1;
const uint8_t green0 = D2;
const uint8_t blue0 = D3;

const uint8_t red1 = D5;
const uint8_t green1 = D6;
const uint8_t blue1 = D7;
}  // namespace Pins

namespace Setup {
void pinSetup() {
    pinMode(Pins::red0, OUTPUT);
    pinMode(Pins::green0, OUTPUT);
    pinMode(Pins::blue0, OUTPUT);

    pinMode(Pins::red1, OUTPUT);
    pinMode(Pins::green1, OUTPUT);
    pinMode(Pins::blue1, OUTPUT);
}
}  // namespace Setup

#endif