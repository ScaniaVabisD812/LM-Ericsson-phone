#include "Arduino.h"
#include "Phone.h"

Phone::Phone(int dialPin, int standPin, int bellPin)
    : _dialPin(dialPin), _dial(_dialPin, *this), _standPin(standPin), _stand(_standPin, *this), _bellPin(bellPin), _bell(_bellPin, *this) {
    }

void Phone::loop() {
  _dial.loop();
  _stand.loop();
  _bell.loop();
}