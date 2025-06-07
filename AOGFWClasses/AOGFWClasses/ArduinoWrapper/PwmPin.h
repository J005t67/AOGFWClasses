#ifndef _PWM_PIN_H
#define _PWM_PIN_H

#include "Pin.h"

class PwmPin : Pin
{
public:
  PwmPin(uint8_t pinNr);
  void setDutyCycle(float fraction);
};

#endif