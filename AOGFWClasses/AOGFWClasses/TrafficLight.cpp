#include "TrafficLight.h"

TrafficLight::TrafficLight(
  uint8_t redPin, uint8_t orangePin, uint8_t greenPin
):
  _redLed(Led(redPin)),
  _orangeLed(Led(orangePin)),
  _greenLed(Led(greenPin))
{
}

void TrafficLight::TurnGreen()
{
  _greenLed.on();
  _orangeLed.off();
  _redLed.off();
}

void TrafficLight::TurnOrange()
{
  _orangeLed.on();
  _greenLed.off();
  _redLed.off();
}

void TrafficLight::TurnRed()
{
  _redLed.on();
  _orangeLed.off();
  _greenLed.off();
}



// void LEDClass::init()
// {
// 	pinMode(GGAReceivedLED, OUTPUT);
// 	pinMode(Power_on_LED, OUTPUT);
// 	pinMode(Ethernet_Active_LED, OUTPUT);
// 	pinMode(GPSRED_LED, OUTPUT);
// 	pinMode(GPSGREEN_LED, OUTPUT);
// 	pinMode(AUTOSTEER_STANDBY_LED, OUTPUT);
// 	pinMode(AUTOSTEER_ACTIVE_LED, OUTPUT);

// }

// void LEDClass::ledOn(LEDs led)
// {
// 	digitalWrite(led, HIGH);

// }

// void LEDClass::ledOff(LEDs led)
// {
// 	digitalWrite(led, LOW);

// }

// void LEDClass::ledBlink(LEDs led, boolean State)
// {
// 	digitalWrite(led, State);
// }
