#ifndef LIB__T12_H__
#define LIB__T12_H__
#include <Arduino.h>
#include <EEPROM.h>
#include "config.h"

/**
 * PORTB[6] = {
 * 	PB0, PB1, PB2, PB3, PB4, PB5
 * }
 * 
 * PORTC[6] = {
 *  PC0, PC1, PC2, PC3,
 *  PC4, PC5
 * }
 * 
 * PORTD[8] = {
 *  PD0, PD1
 * 	PD2, PD3, 
 *  PD4, 
 *  PD5, PD6, 
 *  PD7
 * } 
 */
// Stałe określające limity pracy stacji lutowniczej
static constexpr int DEF_TEMPERATURE = 220;

static constexpr int MAX_TEMPERATURE = 450;
static constexpr int MIN_TEMPERATURE = 100;


typedef struct {	
	std::string		model;		// 	Model końcówki
	float 		calib_val;		//	Współczynnik calibrujący
	uint16_t 		  uid;		//  Unikalny IDentyfikator
} IronHandle;

IronHandle tip = {"T12-BC3", 0.1, 1};

void saveConfig();
void loadConfig();

uint16_t tempMain;
uint16_t tempSleep;
uint8_t	 time2Sleep;
uint8_t  time2Off;
uint8_t  timeOfBoost;
uint8_t  Display_ptr;

bool beep_enable = false;
bool pid_enable	 = true;


class IronTip {
public:

private:
}


class T12 {
public:
	T12();



};

#endif //! LIB__T12_H__
