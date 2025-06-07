#include "OutputPin.h"

OutputPin::OutputPin(uint8_t pinNr) : Pin(pinNr)
{
  pinMode(_pinNr, OUTPUT);
}

void OutputPin::setHigh()
{
  digitalWrite(_pinNr, HIGH);
}

void OutputPin::setLow()
{
  digitalWrite(_pinNr, LOW);
}
