#include "Arduino.h”

Dial::Dial(int inputPin) {
    _inputPin = inputPin;
    pinMode(inputPin, INPUT);
}