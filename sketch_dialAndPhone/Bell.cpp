#include "Arduino.h"
#include "Bell.h"
#include "Phone.h"

Bell::Bell(int outputPin, Phone& phone)
        : _outputPin(outputPin), _phone(phone) {
    pinMode(_outputPin, OUTPUT);

    _ringing = 0;
    _relayState = LOW;
    _lastStateChangeTime = 0;
    _stateLength = 1000;
}

void Bell::loop() {
  if(_ringing && (millis() - _lastStateChangeTime) > _stateLength)
  {
    relayState(!_relayState);
  }
}

void Bell::startBell() {
  relayState(HIGH);
  _ringing = 1;
}

void Bell::stopBell() {
  relayState(LOW);
  _ringing = 0;
}

void Bell::relayState(int state)
{
  _relayState = state;
  digitalWrite(_outputPin, _relayState);
  _lastStateChangeTime = millis();
}