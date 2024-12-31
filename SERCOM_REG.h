//SERCOM    register map
//SERCOM0
#define SERCOM0Base 0x42000400
//set settings for communication protocols
#define SERCTRLA0  (unsigned int *) (SERCOM0Base+0x00)
#define SERCTRLB0 (unsigned int *) (SERCOM0Base+0x04)
//CTRLC is reserved for SPI and I2C so don't use it for that case.  In other words it's only used for UART
#define SERCTRLC0 (unsigned int *) (SERCOM0Base+0x08)
//baudrate register
#define BAUD0 (unsigned short *) (SERCOM0Base+0x0C)
#define RXPL0 (unsigned char *) (SERCOM0Base+0x0E)
//interrupt registers
#define SER0INTENCLR (unsigned char *) (SERCOM0Base+0x14)
#define SER0INTENSET (unsigned char *) (SERCOM0Base+0x16)
#define SER0INTFLAG (unsigned char *) (SERCOM0Base+0x18)
//status register
#define SER0STATUS (unsigned short *) (SERCOM0Base+0x1A)
#define SYNCBUSY0 (unsigned int *) (SERCOM0Base+0x1C)
#define RXERRCNT0 (unsigned char *) (SERCOM0Base+0x20)
//used only in SPI and I2C
#define SER0ADDR (unsigned int *) (SERCOM0Base+0x24)
//It seems that only bits 0-7 are used for this register except for the last bit.
#define SER0DATA (unsigned short *) (SERCOM0Base+0x28)
//Debug control
#define DBGCTRL0 (unsigned char *) (SERCOM0Base+0x30)
//SERCOM1
#define SERCOM1Base 0x42000800

//SERCOM2 not present on 24 pin packages
#define SERCOM2Base 0x42000C00
