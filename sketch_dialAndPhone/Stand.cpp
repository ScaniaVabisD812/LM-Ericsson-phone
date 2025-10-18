#include "Arduino.h”

Stand::Stand(int inputPin) {
    _inputPin = inputPin;
    pinMode(inputPin, INPUT);
}