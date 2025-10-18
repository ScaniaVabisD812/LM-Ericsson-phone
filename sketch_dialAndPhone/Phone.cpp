#include "Arduino.h"
#include "Phone.h"

Phone::Phone(int dialPin, int standPin)
    : _dialPin(dialPin), _dial(_dialPin, *this), _standPin(standPin), _stand(_standPin, *this) {}

void Phone::loop() {
  _dial.loop();
  _stand.loop();
}