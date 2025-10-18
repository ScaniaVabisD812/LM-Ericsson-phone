#include "Arduino.h"
#include "Dial.h"
#include "Phone.h"

Dial::Dial(int inputPin, Phone& phone)
        : _inputPin(inputPin), _phone(phone) {
    pinMode(_inputPin, INPUT);
}

void Dial::loop() {
    // TODO: implement dial reading logic
}