/*
	This Project was created to increment & decrement the count of a Number displayed on a Common-Anode 
	Seven Segment display when pushbuttons are pressed. 
	
	The Project Uses a XTAL of 22.1184 MHz
	
	Author: ABEL ASHENAFI
	DATE: November 29, 2021
*/

#include "prototyper.h"

#pragma config OSC = HS
#pragma config LVP = OFF
#pragma config WDT = OFF

void main (void)
{
	char Count = 0; 
	
	PortInit ();
	
	while (1)
	{
		if (Up)
		{
			DebounceDelay(); 
			
			Count ++;
			
			if (Count == 10)
				Count = 0;  
		}
		
		if (Down)
		{
			DebounceDelay();
			
			Count --; 
			
			if (Count < 0)
			Count = 0; 
		}
		
		DisplayNumber (Count); 
	}
}



