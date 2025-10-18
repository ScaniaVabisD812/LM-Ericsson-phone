#ifndef Dial_h
#define Dial_h

// Forward declaration to avoid circular include
class Phone;

class Dial {
 public:
  Dial(int inputPin, Phone& phone);
  void loop();

 private:
  int _inputPin;
  Phone& _phone;
};

#endif
