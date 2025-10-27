#ifndef Phone_h
#define Phone_h

#include "Dial.h"
#include "Stand.h"
#include "Bell.h"

class Phone {
 public:
  Phone(int dialPin, int standPin, int bellPin);
  void loop();

 private:
  int _dialPin;
  Dial _dial;

  int _standPin;
  Stand _stand;

  int _bellPin;
  Bell _bell;
};

#endif
