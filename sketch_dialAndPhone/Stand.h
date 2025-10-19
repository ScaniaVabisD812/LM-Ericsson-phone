#ifndef Stand_h
#define Stand_h

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
