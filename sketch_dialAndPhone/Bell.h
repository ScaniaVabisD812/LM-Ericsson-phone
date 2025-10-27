#ifndef Bell_h
#define Bell_h

class Phone;

class Bell {
 public:
  Bell(int outputPin, Phone& phone);
  void loop();
  void startBell();
  void stopBell();

 private:
  int _outputPin;
  Phone& _phone;
  int _ringing;
  int _relayState;
  long _lastStateChangeTime;
  long _stateLength;

  void relayState(int state);
};

#endif
