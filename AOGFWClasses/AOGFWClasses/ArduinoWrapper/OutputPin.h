#ifndef _OUTPUT_PIN_H
#define _OUTPUT_PIN_H

#include "Pin.h"

class OutputPin : Pin
{
public:
  OutputPin(uint8_t pinNr);
  void setHigh();
  void setLow();
};

#endif