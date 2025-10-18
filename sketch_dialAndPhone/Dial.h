#ifndef Dial_h
#define Dial_h

#include "Arduino.h"
#include "Phone.h"

class Dial{
  public:
    Dial(int inputPin, Phone phone)
  private:
    int _inputPin
    Phone& _phone
};

#endif