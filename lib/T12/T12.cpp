#include <Arduino.h>
#include <EEPROM.h>
#include "T12.h"



void saveConfig()
{
	EEPROM.write(0, 1);
}

void updateConfig()
{

}


void loadConfig()
{
	uint16_t _identifier = (EEPROM.read(0) << 8) | EEPROM.read(1);

	if (EEPROM_IDENT == _identifier) {
		tempMain  	= 	(EEPROM.read(2) << 8) | EEPROM.read(3);
		tempSleep 	= 	(EEPROM.read(4) << 8) | EEPROM.read(5));
		time2Sleep	= 	EEPROM.read(6);
		time2Off	=	EEPROM.read(7);
		timeOfBoost = 	EEPROM.read(8);
		currentTip  =   EEPROM.read(9);
    	ammountTips =   EEPROM.read(10);
		//Display_ptr = 	;

		beep_enable	= 	EEPROM.read(11);
		pid_enable  =   EEPROM.read(12);
	}
	else {
		EEPROM.update(0, EEPROM_IDENT >>   8);
		EEPROM.update(1. EEPROM_IDENT & 0xff);
		updateConfig();
	}

}

