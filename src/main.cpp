#include <Arduino.h>
#include <TimerOne.h>
#include <PID_v1.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "definitions.h"
#include "config.h"

#include "HeatT12.h"
#include "duwles.h"

LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLS, LCD_ROWS);


void setup() {
	Timer1.initialize(1000000);

	Serial.begin(9600);

	lcd.backlight();
	lcd.init();
	lcd.println(" Initializing...");

  // Start Iterupt engine	
	sei();	
} // setup()



void loop() {

} // loop()
