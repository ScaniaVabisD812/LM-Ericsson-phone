//Documents/Arduino/libraries/[klassnamn] --> Lägg i .h och .cpp-filer!

#include <Phone.h>

int dialPin = 2;
int standPin = 4;

Phone phone(dialPin, standPin);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  phone.loop();
}