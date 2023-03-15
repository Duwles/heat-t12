#ifndef FS__DEFINITIONS_H__
#define FS__DEFINITIONS_H__

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


/// @brief Function callback types.
extern "C" {
	typedef void (*callbackFunction)(void);
	typedef void (*parameterizedCallbackFunction)(void *);
}


/// @brief Pinout Configuration
static constexpr uint8_t TILTSW_PIN		=	2;

static constexpr uint8_t ENCCLK_PIN		=	3;
static constexpr uint8_t  ENCDT_PIN		=	4;
static constexpr uint8_t  ENCPB_PIN		=	5;

static constexpr uint8_t MOSFET_PIN		=	6;
static constexpr uint8_t PWMLED_PIN		=	7;
static constexpr uint8_t PWRLED_PIN		=	8;

static constexpr uint8_t BUZZER_PIN		=	9;

static constexpr uint8_t  TSENS_ADC		=	A1;
static constexpr uint8_t   PWRV_ADC		=	A2;


static constexpr uint8_t LCD_ADDR		=	0x24;
static constexpr uint8_t LCD_COLS		=	16;
static constexpr uint8_t LCD_ROWS		=	2;


typedef enum {
	INIT_STATE,
	IDLE_STATE,
	
	SYNTAX
} 
StateType;


#endif