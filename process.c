#include "prototyper.h"

unsigned char Segments [] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92,
						     0x82, 0xF8, 0x80, 0x90};
						     
void DisplayNumber (char Incoming)
{
	LATD = Segments [Incoming];
}

void DebounceDelay (void)
{
	Delay10KTCYx (100);		// A debounce delay of 180ms at a XTAL of 22.1184MHz
}

