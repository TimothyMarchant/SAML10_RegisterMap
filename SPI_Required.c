#include "GCLK_REG.h"
#include "GPIO.h"
#include "GPIO_REG.h"
#include "SERCOM_REG.h"
void SetSER0Clock(void){
    *GCLK_SERCOM0=0x00000040;
}
//device is being run at 4 MHz
//PA04 is PAD[0] for SERCOM0
//PA05 is PAD[1] for SERCOM0
//PA02 is PAD[2]
//PA03 is PAD[3]
//in other words pins 9,10,7,8 on the SSOP package respectively.

void SetupSPI(void){
    //setup SPI pins
    Setpinmode(4,OUTPUT);
    Setpinmode(5,OUTPUT);
    Outputpin(4,LOW);
    Outputpin(5,LOW);
    Setpinmode(2,OUTPUT);
    Outputpin(2,HIGH);
    Setpinmode(3,INPUT);
    //enable peripheral multiplexer.
    *PINCFGn(4)=0x01;
    *PINCFGn(5)=0x01;
    *PINCFGn(3)=0x01;
    *PINCFGn(2)=0x01;
    *PMUXn(1)=0x33;
    *PMUXn(2)=0x33;
    //setup SPI
    *SERCTRLB0=0x00022000;
    //fref=4MHz want fBAUD=2MHz, need BAUD register set to 1
    *BAUD0=2;
    //this will enable SPI
    //PAD[0]=MOSI, PAD[1]=SCK, PAD[2]=SS, PAD[3]=MISO
    *SERCTRLA0=0x1030008E;
    
}
void SPI_Wait(void){
    //while the DRE bit is set, we cannot transmit
    while (!(*SER0INTFLAG&0x01));
}
void SPIBeginCOM(unsigned char CS){
    Outputpin(CS,LOW);
}
void SPIEndCOM(unsigned char CS){
    Outputpin(CS,HIGH);
}
void SPIWrite(unsigned char data){
    *SER0DATA=data;
    data=*SER0DATA;
}
//for certain applications the actual dummy write value may be important.
unsigned char SPIRead(unsigned char dummy){
    *SER0DATA=dummy;
    unsigned char data=*SER0DATA;
    return data;
}
unsigned char SPIDuplex(unsigned char data){
    while (!(*SER0INTFLAG&0x01));
    *SER0DATA=data;
    while (!(*SER0INTFLAG&0x01));
    data=*SER0DATA;
    return data;
}

