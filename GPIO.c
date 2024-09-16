#include "GPIO_REG.h"
unsigned int GPIO_Status=0xFFFFFFFF;
void IntializeGPIO(void){
    for (unsigned char i=0;i<32;i++){
        //just enable each pin to be able to be an input.  This will cause less problems later.
        *ConfigPin(i)=EnableInputPin;
    }
    DefaultSetup;
    *OUT=0xFFFFFFFF;
}
void Setpinmode(unsigned char pinnum,_Bool isOutput){
    if (isOutput){
        Setoutput(pinnum);
    }
    else {
        Setinput(pinnum);
    }
}
//
void Outputpin(unsigned char pinnum,_Bool HighLow){
    if (HighLow){
        OutputHIGH(pinnum);
    }
    else {
        OutputLOW(pinnum);
    }
}
//
_Bool ReadInput(unsigned char pinnum){
    return ReadPin(pinnum);
}
