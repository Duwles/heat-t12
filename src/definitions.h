#ifndef FS__DEFINITIONS_H__
#define FS__DEFINITIONS_H__
#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#elif defined(ARDUINO) && defined(ATTINY)
	#include <WProgram.h>
#else 
	#warning "Arduino hardware type undefined."	
#endif

extern double g_Output;

// MOSFET control definitions
#if defined (P_MOSFET)         // P-Channel MOSFET
  #define HEATER_ON   255
  #define HEATER_OFF  0
  #define HEATER_PWM  255 - g_Output
#elif defined (N_MOSFET)       // N-Channel MOSFET
  #define HEATER_ON   0
  #define HEATER_OFF  255
  #define HEATER_PWM  g_Output
#else
  #error Wrong MOSFET type!
#endif

/// @brief Function callback types should be global.
extern "C" {
	typedef void (*callbackFunction)(void);
	typedef void (*parameterizedCallbackFunction)(void *);
}


/// @brief State machine types.
typedef enum {
	INIT_STATE,
	
	IDLE_STATE,
	SLEEP_STATE,
	COOLING_STATE,
	STANDBY_STATE,

	SOLDER_STATE,
	HEATING_STATE,
	
	SYNTAX
} stateType;


static constexpr uint8_t DigitalIO_Pullup[] = {
	TILTSW_PIN, 
	ENCCLK_PIN, 
	ENCDT_PIN, 
	ENCPB_PIN 
};


static constexpr uint8_t DigitalIO_Output[] = {
	MOSFET_PIN,
	HEATLED_PIN,
	PWROKLED_PIN,
	BUZZER_PIN
};

#endif