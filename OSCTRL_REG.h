#define OSC_Base_Address 0x40001000
#define INTENCLR (unsigned int *) (OSC_Base_Address+0x04)
#define INTENSET (unsigned int *) (OSC_Base_Address+0x08)
#define INTFLAG (unsigned int *) (OSC_Base_Address+0x0C)
#define STATUS (unsigned int *) (OSC_Base_Address+0x10)
#define XOSCCTRL (unsigned short *) (OSC_Base_Address+0x14)
#define OSC16MCTRL (unsigned char *) (OSC_Base_Address+0x18)
