//
#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0
#ifndef GPIO
#define GPIO
void IntializeGPIO(void);
void Setpinmode(unsigned char pinnum,_Bool isOutput);
void Outputpin(unsigned char pinnum,_Bool HighLow);
_Bool ReadInput(unsigned char pinnum);
#endif