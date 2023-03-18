#include <Arduino.h>
#include "HAL.hpp"

HAL::Encoder::Encoder(uint8_t pin_cl, uint8_t pin_dt): phasea_pin(pin_cl), phaseb_pin(pin_dt)
{
	_last_a = digitalRead(phasea_pin);
	_last_b = digitalRead(phaseb_pin);
	_position = 0;
}

long HAL::Encoder::getPosition()
{
	return _position;
}