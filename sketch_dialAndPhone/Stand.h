#ifndef Stand_h
#define Stand_h

// Forward declaration to avoid circular include
class Phone;

class Stand {
 public:
  Stand(int inputPin, Phone& phone);
  void loop();

 private:
  int _inputPin;
  Phone& _phone;
};

#endif
