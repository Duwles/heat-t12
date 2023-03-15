#include "Display.h"

Display::Display(): LiquidCrystal_I2C(0x24, 16, 2)
{
	backlight();
	init();
	clear();
}
