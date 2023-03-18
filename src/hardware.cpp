#include "hardware.h"

void hardwareInit() {
  // Timer 1 100 razy na sekunde (CTC)	
  TCCR1A  = 0;
  TCNT1   = 0;
  OCR1A   = 1249;
  TCCR1B  = _BV(WGM12) | _BV(CS11) | _BV(CS10);
  TIMSK0 |= _BV(OCIE1A);
  
  	
  // Inicjalizacja przerwan zewn i tyrystora
  //	TYDIR |= TYPIN;
	MCUCR |= _BV(ISC00);		//Kazde zbocze gen IRQ
	MCUCR &= ~_BV(ISC01);
	//ISR   |= _BV(INT0);			//Wlacz Przerw zewn

  // Inicjalizacja klawiatury
//	KEYDIR &= ~ (K1PIN | K2PIN | K3PIN);	//Inp
//	KEYPORT |= K1PIN | K2PIN | K3PIN;		//pullup R


  // Inicjalizacja przetwornika ADC
	ADMUX |= _BV(REFS0);
	ADCSRA = _BV(ADPS2) | _BV(ADPS1) |_BV(ADPS0) | _BV(ADEN) | _BV(ADIE);

  // Wlacz globalnie przerwania
	sei();
}