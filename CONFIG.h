
// ATSAML10D14A Configuration Bit Settings

// 'C' source line config statements

// Config Source code for XC32 compiler.
// USER_WORD_0
#pragma config NVMCTRL_NSULCK = 0x7 // Enter Hexadecimal value
#pragma config BOD33_LEVEL = 0x07 // Enter Hexadecimal value
#pragma config BOD33_DIS = CLEAR
#pragma config BOD33_ACTION = NONE
#pragma config WDT_RUNSTDBY = CLEAR
#pragma config WDT_ENABLE = CLEAR
#pragma config WDT_ALWAYSON = CLEAR
#pragma config WDT_PER = CYC8

// USER_WORD_1
#pragma config WDT_WINDOW = CYC8
#pragma config WDT_EWOFFSET = CYC8
#pragma config WDT_WEN = CLEAR
#pragma config BOD33_HYST = CLEAR

// BOCOR_WORD_1
#pragma config IDAU_BOOTPROT = 0x0 // Enter Hexadecimal value

// BOCOR_WORD_16
#pragma config BOOTROM_CRCKEY_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_17
#pragma config BOOTROM_CRCKEY_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_18
#pragma config BOOTROM_CRCKEY_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_19
#pragma config BOOTROM_CRCKEY_3 = 0xFFFFFFFF // Enter Hexadecimal value

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
