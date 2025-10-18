#include "Arduino.h”
#include "Phone.h"
#include "Dial.h"
#include "Stand.h"

Phone::Phone(int dialPin, int standPin) {
    _dialPin = dialPin;
    Dial dial(dialPin);
    _dial = dial;

    pinMode(standPin, INPUT);
    _standPin = standPin;
    Stand stand(standPin);
    _stand = stand;
}