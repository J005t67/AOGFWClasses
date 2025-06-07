#include "PwmPin.h"

PwmPin::PwmPin(uint8_t pinNr) : Pin(pinNr)
{
  // TODO initialize pin
}

void PwmPin::setDutyCycle(float fraction)
{
  // convert fraction to uint8_t
}