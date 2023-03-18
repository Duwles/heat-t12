#ifndef __DUWLES_ENCODER_H__
#define __DUWLES_ENCODER_H__
#include <Arduino.h>

/// This file should only be included from 'src/duwles.h', never directly. */
#ifndef _AVR_IO_H_
#  error "Include 'duwles.h' instead of this file."
#endif
namespace Duwles
{

class Encoder 
{
public:
	Encoder(int pin1, int pin2, int pin3);
};

}
#endif //! __DUWLES_ENCODER_H__
