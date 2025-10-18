#include "Arduino.h”
#include "Phone.h"
#include "Dial.h"
#include "Stand.h"

Phone::Phone(int dialPin, int standPin) {
  _dialPin = dialPin;
  Dial dial(dialPin, *this);
  _dial = dial;

  _standPin = standPin;
  Stand stand(standPin, *this);
  _stand = stand;
}

Phone::Loop() {
  dial.loop();
  stand.loop();
}