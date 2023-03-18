#include <Arduino.h>
#include <TimerOne.h>
#include <PID_v1.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include "config.h"
#include "definitions.h"
#include "hardware.h"

#include <HAL.hpp>

double g_Output = 125.0;

LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLS, LCD_ROWS);


//Przerwanie wywolywane 100 razy na sekunde
// ISR(TIMER1_COMPA_vect) {}


//ISR(INT0_vect) {	
void tiltsw_vect() {
  // Kod obsługi przerwania 
  //			@INT0, 		- D2
  	Serial.println("vector-swVibration");
}

//ISR(INT1_vect) {
void encoder_vect() {
  // Kod obsługi przerwania 
  //			@INT1, 		- D3
  Serial.println("Encoder call.");
}


// Przerwanie od przetwornika ADC 
// ISR(ADC_vect) {}


void setup() {
  // IO Pin mapping
	for(uint8_t pin_uid : DigitalIO_Pullup) {
		pinMode(pin_uid, INPUT_PULLUP);
	}

	for(uint8_t pin_uid : DigitalIO_Output) {
		pinMode(pin_uid, OUTPUT);
	}

  // Init Timer1	
	Timer1.initialize(1000000);
	

  // Start I2C serial
	Wire.begin();	

  // Start serial communication port
	Serial.begin(19200);
	Serial.println(" Initializing...");

  // Start Lcd1602 Display layer
	lcd.backlight();
	lcd.init();
	lcd.println(" Initializing...");


  // Włączenie przerwań INT0, INT1 dla pinów (pin D2, D3)
	attachInterrupt(digitalPinToInterrupt(TILTSW_PIN), tiltsw_vect, 	CHANGE);	
	attachInterrupt(digitalPinToInterrupt(ENCCLK_PIN), encoder_vect, CHANGE);

  // Uruchomienie przerwań
	sei();	

} // setup()



void loop() {

	cli();
	PORTD |= (1 << PD2);
	delay(1600);

	PORTD &= ~(1 << PD2);
	delay(2000);
} // loop()
