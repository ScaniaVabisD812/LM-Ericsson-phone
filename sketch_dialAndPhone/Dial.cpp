#include "Arduino.h"
#include "Dial.h"
#include "Phone.h"

Dial::Dial(int inputPin, Phone& phone)
        : _inputPin(inputPin), _phone(phone) {
    pinMode(_inputPin, INPUT);

    _trueState = LOW;
    _reading = LOW;
    _lastStateChangeTime = 0;
    _handleChangedState = 0;

    _dialHasFinishedRotatingAfterMs = 200;

    _count = 0;
    _needPrint = 0;
}

void Dial::loop() {
    _reading = digitalRead(_inputPin);

    if((millis() - _lastStateChangeTime) > _dialHasFinishedRotatingAfterMs && _needPrint)
    {
        int number = _count - 1;
        _count = 0;
        Serial.println(number);
        _needPrint = 0;
    }

    if(_reading != _trueState)
    {
        int delta = millis() - _lastStateChangeTime;
        if(delta > 5 && delta < 100 && _reading == LOW)
        {
            _handleChangedState = 1;
        }

        _lastStateChangeTime = millis();
        _trueState = _reading;
    }

    if(_handleChangedState)
    {
        _count++;
        _needPrint = 1;
        _handleChangedState = 0;
    }
}