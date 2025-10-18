#include "Arduino.h"
#include "Stand.h"
#include "Phone.h"

Stand::Stand(int inputPin, Phone& phone)
        : _inputPin(inputPin), _phone(phone) {
    pinMode(_inputPin, INPUT);
}

void Stand::loop() {
    // TODO: implement stand reading logic
}