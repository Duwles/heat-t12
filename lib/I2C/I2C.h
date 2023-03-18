#ifndef LIB__I2C_H
#define LIB__I2C_H
#include <Arduino.h>


class I2C {
public:
	static void start(void);

	class Write {
	public:
		static void Address(unsigned char address);
		static void Data(unsigned char data);
		
	};

};
	