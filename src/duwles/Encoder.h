#ifndef __DUWLES_ENCODER_H__
#define __DUWLES_ENCODER_H__
#include <Arduino.h>

namespace Duwles
{

class Encoder 
{
public:
	Encoder(int pin1, int pin2, int pin3);
	~Encoder() = default;
};

}
#endif //! __DUWLES_ENCODER_H__
