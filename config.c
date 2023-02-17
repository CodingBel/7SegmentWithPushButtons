#include "prototyper.h"

void PortInit (void)
{
	TRISCbits.TRISC4 = 0; 	// Pin to Control the NPN transistor of the 7Seg Display 
	SevenSeg = 1;
	
	TRISAbits.TRISA0 = 1; 	// Pin conneted to the Push Button (UP) 
	TRISAbits.TRISA1 = 1; 	// Pin conneted to the Push Button (Down)
	
	ADCON1 = 0xFF; 			// Make all Analog Pins Digital GPIO pins
	
	TRISD = 0x00; 			// Port used to control the 7Seg  
	LATD  = 0xFF; 			// Initialize not to sink any current 
}


