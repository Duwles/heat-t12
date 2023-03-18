#include "I2C.h"


void I2C::start()
{
	TWCR = (1 << TWINT) | (1 << TWSTA) | (1 << TWEN);
	while(!(TWCR & (1 << TWINT)));
	while((TWSR & 0xf8) != 0x08);	
  //	while((TWSR & 0xf8)!= 0xf8) {i++; _delay_ms(1); if(i>10) break;	};	
}

void I2C::Write::Address(unsigned char address)
{
	TWDR=address;
	TWCR=(1 << TWINT) | (1 << TWEN);
	while (!(TWCR & (1 << TWINT)));
	while ((TWSR & 0xf8) != 0x18);
}

void I2C::Write::Data(unsigned char data)
{
	TWDR=data;
	TWCR=(1 << TWINT) | (1 << TWEN);
	while (!(TWCR & (1 << TWint)));
	while ((TWSR & 0xf8) != 0x28);
	
	
	
}
