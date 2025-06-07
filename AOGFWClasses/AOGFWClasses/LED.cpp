#include "LED.h"

Led::Led(uint8_t pinNr) : OutputPin(pinNr)
{
}

void Led::on()
{
	_isOn = true;
	setHigh();
}

void Led::off()
{
	_isOn = false;
	setLow();
}

void Led::invert()
{
	if (_isOn)
	{
		off();
	}
	else
	{
		on();
	}
}