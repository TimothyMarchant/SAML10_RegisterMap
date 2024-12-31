#ifndef SPI_Drivers_SER0
#define SPI_Drivers_SER0
void SetSER0Clock(void);
void SetupSPI(void);
void SPIBeginCOM(unsigned char CS);
void SPIEndCOM(unsigned char CS);
unsigned char SPIDuplex(unsigned char data);
#endif