#include "LED.h"

class TrafficLight
{
public:
  TrafficLight(uint8_t redPin, uint8_t orangePin, uint8_t greenPin);

  void TurnRed();
  void TurnOrange();
  void TurnGreen();

private:
  Led _redLed;
  Led _orangeLed;
  Led _greenLed;
};