#include "Arduino.h”

Stand::Stand(int inputPin, Phone& phone) {
    _inputPin = inputPin;
    _phone = phone;
    pinMode(inputPin, INPUT);
}