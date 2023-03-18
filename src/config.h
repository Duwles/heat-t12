#ifndef __CONFIG_H__
#define __CONFIG_H__
#include <Arduino.h>

// EEPROM Identifier
#define EEPROM_IDENT  			0xDAB7   					// to identify if EEPROM was written by this program


/// @brief Pinout Configuration
static constexpr uint8_t TILTSW_PIN		=	2;

static constexpr uint8_t ENCCLK_PIN		=	3;
static constexpr uint8_t  ENCDT_PIN		=	4;
static constexpr uint8_t  ENCPB_PIN		=	5;

static constexpr uint8_t MOSFET_PIN		=	6;
static constexpr uint8_t HEATLED_PIN	=	7;
static constexpr uint8_t PWROKLED_PIN	=	8;

static constexpr uint8_t BUZZER_PIN		=	9;

static constexpr uint8_t  TSENS_ADC		=	A1;
static constexpr uint8_t  VSENS_ADC		=	A2;

static constexpr uint8_t LCD_ADDR		=	0x24;
static constexpr uint8_t LCD_COLS		=	16;
static constexpr uint8_t LCD_ROWS		=	2;

#endif