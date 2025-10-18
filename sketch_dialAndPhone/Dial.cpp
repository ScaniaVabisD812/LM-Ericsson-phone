#include "Arduino.h”
#include "Phone.h"

Dial::Dial(int inputPin, Phone& phone) {
    _inputPin = inputPin;
    _phone = phone;
    pinMode(inputPin, INPUT);
}