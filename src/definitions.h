#ifndef FS__DEFINITIONS_H__
#define FS__DEFINITIONS_H__
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
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
	HEAT_STATE,
	SYNTAX
} StateType;


#endif