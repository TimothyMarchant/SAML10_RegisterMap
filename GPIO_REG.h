//There is only one group so we don't need to worry about PB PC, etc.
//configure pin as output/input.
#define DIR (unsigned int *)0x40003000
#define DIRCLR (unsigned int *)0x40003004
#define DIRSET (unsigned int *)0x40003008
#define DIRTGL (unsigned int *)0x4000300C
//output
#define OUT (unsigned int *)0x40003010
#define OUTCLR (unsigned int *)0x40003014
#define OUTSET (unsigned int *)0x40003018
#define OUTTGL (unsigned int *)0x4000301C
//refers to input
#define IN (unsigned int *)0x40003020
#define CTRL (unsigned int *)0x40003024
#define WRCONFIG (unsigned int *)0x40003028
#define EVCTRL (unsigned int *)0x4000302C
//Pin Configuration; This was a major source of headache.
#define PinConfigAdd 0x40003040
//modify a specific pin.
#define ConfigPin(n) (unsigned char *) (PinConfigAdd+n)
#define EnableInputPin 0x02
//Setup pins
#define DefaultSetup *DIR=0xFFFFFFFF
#define Setinput(pin) *DIRCLR=1<<pin
#define Setoutput(pin) *DIRSET=1<<pin
//output a specific pin
#define OutputHIGH(pin) *OUTSET=1<<pin
#define OutputLOW(pin) *OUTCLR=1<<pin
//Read input of a pin
#define ReadPin(pin) *IN&(1<<pin)