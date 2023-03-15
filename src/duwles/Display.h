#ifndef DISPLAY_H
#define DISPLAY_H
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


class Display: 
	public LiquidCrystal_I2C {
public:
    Display();

private:

};

#endif