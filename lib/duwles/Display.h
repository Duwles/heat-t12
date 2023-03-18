#ifndef __DUWLES_DISPLAY_H__
#define __DUWLES_DISPLAY_H__
namespace Duwles 
{	
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
class Display: 
	public LiquidCrystal_I2C {
public:
    Display();

private:

};
}

#endif //! __DUWLES_DISPLAY_H__