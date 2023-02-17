#include <delays.h>
#include <p18f4520.h>

#define SevenSeg LATCbits.LATC4
#define Up PORTAbits.RA0
#define Down PORTAbits.RA1

void PortInit (void); 
void DebounceDelay (void);
void DisplayNumber (char);

