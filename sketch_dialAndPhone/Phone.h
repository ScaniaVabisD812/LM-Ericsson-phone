#ifndef Phone_h
#define Phone_h

#include "Dial.h"
#include "Stand.h"

class Phone {
 public:
  Phone(int dialPin, int standPin);
  void loop();

 private:
  int _dialPin;
  Dial _dial;

  int _standPin;
  Stand _stand;
};

#endif
