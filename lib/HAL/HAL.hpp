#ifndef __HAL_HPP__
#define __HAL_HPP__
#include <Arduino.h>

namespace HAL
{
class PortIO {
public:
	virtual void 	pinMode(uint8_t pin, uint8_t mode) = 0; 		// Ustawienie trybu wejścia/wyjścia dla pinu
	virtual void 	digitalWrite(uint8_t pin, uint8_t value) = 0; 	// Ustawienie stanu pinu
	virtual uint8_t digitalRead(uint8_t pin) = 0; 					// Odczyt stanu pinu
};


class Encoder 
{
public: 
	Encoder(uint8_t pin_cl, uint8_t pin_dt);

	long getPosition();

private:
	uint8_t phasea_pin;
	uint8_t phaseb_pin;
	volatile uint8_t _last_a;
	volatile uint8_t _last_b;
	volatile long _position;
}; // Encoder;
} // HAL
#endif // !__HAL__HPP__