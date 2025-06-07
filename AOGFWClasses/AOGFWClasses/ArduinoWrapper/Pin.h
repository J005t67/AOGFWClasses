#ifndef _PIN_H
#define _PIN_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class Pin
{
public:
  Pin(uint8_t pinNr);

protected:
  uint8_t _pinNr;
};

#endif