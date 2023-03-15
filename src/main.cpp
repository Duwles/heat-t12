#include <Arduino.h>
#include <PID_v1.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <TimerOne.h>
#include <RotaryEncoder.h>
#include <OneButton.h>

#include "definitions.h"

LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLS, LCD_ROWS);


void setup() 
{
	Timer1.initialize(1000000);
	Serial.begin(9600);

	lcd.backlight();
	lcd.init();
	lcd.println(" Initializing...");
	delay(1000);
}


void loop() 
{
}
