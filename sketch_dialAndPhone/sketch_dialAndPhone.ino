//Documents/Arduino/libraries/[klassnamn] --> Lägg i .h och .cpp-filer!

#include "Phone.h"
#include "Dial.h"
#include "Stand.h"

int dialPin = 2;
int standPin = 4;
int bellPin = 6;

Phone phone(dialPin, standPin, bellPin);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  phone.loop();
}