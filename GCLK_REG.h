#define GCLK_Base_Address 0x40001C00
#define CONTROLA (unsigned char *) GCLK_Base_Address
#define SYNCBUSY (unsigned int *) (GCLK_Base_Address+0x04)
//n is between 0 and 4 inclusive.
#define GENCTRLn(n) (unsigned int *) (GCLK_Base_Address+0x20+n*0x04)
//peripheral clock selection between 0 and 20 inclusive.
#define PCHCTRLn(m) (unsigned int *) (GCLK_Base_Address+0x80+m*0x04)
//peripheral clock sources
#define GCLK_SERCOM0 PCHCTRLn(11)
#define GCLK_SERCOM1 PCHCTRLn(12)
#define GCLK_SERCOM2 PCHCTRLn(13)
#define GCLK_TC0_TC1 PCHCTRLn(14)
#define GCLK_TC2 PCHCTRLn(15)
#define GCLK_ADC PCHCTRLn(16)
#define GCLK_AC PCHCTRLn(17)
#define GCLK_DAC PCHCTRLn(18)
#define GCLK_PTC PCHCTRLn(19)
#define GCLK_CCL PCHCTRLn(20)