#ifndef Dial_h
#define Dial_h

class Phone;

class Dial {
 public:
  Dial(int inputPin, Phone& phone);
  void loop();

 private:
  int _inputPin;
  Phone& _phone;

  int _trueState;
  int _reading;
  long _lastStateChangeTime;
  int _handleChangedState;

  int _dialHasFinishedRotatingAfterMs;

  int _count;
  int _needPrint;
};

#endif
