// Definition file for P30F6011A

// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;
const char B8 = 8;
const char B9 = 9;
const char B10 = 10;
const char B11 = 11;
const char B12 = 12;
const char B13 = 13;
const char B14 = 14;
const char B15 = 15;

const unsigned long __FLASH_SIZE = 0x00021000;
const unsigned long __XRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const unsigned long __YRAM_RAM_SIZE = 0x000007FF;
const unsigned long __YRAM_RAM_START = 0x1800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 4;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_RESERVEDTRAP0        = 0x0004;
const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0006;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
const unsigned IVT_ADDR_RESERVEDTRAP6        = 0x0010;
const unsigned IVT_ADDR_RESERVEDTRAP7        = 0x0012;
const unsigned IVT_ADDR_INT0INTERRUPT        = 0x0014;
const unsigned IVT_ADDR_IC1INTERRUPT         = 0x0016;
const unsigned IVT_ADDR_OC1INTERRUPT         = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001C;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0020;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0024;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x0026;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x0028;
const unsigned IVT_ADDR_ADCINTERRUPT         = 0x002A;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x002C;
const unsigned IVT_ADDR_SI2CINTERRUPT        = 0x002E;
const unsigned IVT_ADDR_MI2CINTERRUPT        = 0x0030;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x0032;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x0034;
const unsigned IVT_ADDR_IC7INTERRUPT         = 0x0036;
const unsigned IVT_ADDR_IC8INTERRUPT         = 0x0038;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x003A;
const unsigned IVT_ADDR_OC4INTERRUPT         = 0x003C;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x003E;
const unsigned IVT_ADDR_T5INTERRUPT          = 0x0040;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x0042;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0044;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0046;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0048;
const unsigned IVT_ADDR_C1INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x004C;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x004E;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0050;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0052;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0054;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0056;
const unsigned IVT_ADDR_OC7INTERRUPT         = 0x0058;
const unsigned IVT_ADDR_OC8INTERRUPT         = 0x005A;
const unsigned IVT_ADDR_INT3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x005E;
const unsigned IVT_ADDR_C2INTERRUPT          = 0x0060;
const unsigned IVT_ADDR_PWMINTERRUPT         = 0x0062;
const unsigned IVT_ADDR_QEIINTERRUPT         = 0x0064;
const unsigned IVT_ADDR_DCIINTERRUPT         = 0x0066;
const unsigned IVT_ADDR_LVDINTERRUPT         = 0x0068;
const unsigned IVT_ADDR_FLTAINTERRUPT        = 0x006A;
const unsigned IVT_ADDR_FLTBINTERRUPT        = 0x006C;
const unsigned IVT_ADDR_INTERRUPT45          = 0x006E;
const unsigned IVT_ADDR_INTERRUPT46          = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_INTERRUPT49          = 0x0076;
const unsigned IVT_ADDR_INTERRUPT50          = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0084;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0086;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0088;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x008A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x008C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x008E;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP6     = 0x0090;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0092;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0094;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0096;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0098;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x009A;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x009C;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x009E;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x00A0;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x00A2;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x00A4;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x00A6;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x00A8;
const unsigned AIVT_ADDR_ALTADCINTERRUPT      = 0x00AA;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x00AC;
const unsigned AIVT_ADDR_ALTSI2CINTERRUPT     = 0x00AE;
const unsigned AIVT_ADDR_ALTMI2CINTERRUPT     = 0x00B0;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x00B2;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x00B4;
const unsigned AIVT_ADDR_ALTIC7INTERRUPT      = 0x00B6;
const unsigned AIVT_ADDR_ALTIC8INTERRUPT      = 0x00B8;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x00BA;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x00BC;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x00BE;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x00C0;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x00C2;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x00C4;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x00C6;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x00C8;
const unsigned AIVT_ADDR_ALTC1INTERRUPT       = 0x00CA;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x00CC;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x00CE;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x00D0;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x00D2;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x00D4;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x00D6;
const unsigned AIVT_ADDR_ALTOC7INTERRUPT      = 0x00D8;
const unsigned AIVT_ADDR_ALTOC8INTERRUPT      = 0x00DA;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x00DC;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x00DE;
const unsigned AIVT_ADDR_ALTC2INTERRUPT       = 0x00E0;
const unsigned AIVT_ADDR_ALTPWMINTERRUPT      = 0x00E2;
const unsigned AIVT_ADDR_ALTQEIINTERRUPT      = 0x00E4;
const unsigned AIVT_ADDR_ALTDCIINTERRUPT      = 0x00E6;
const unsigned AIVT_ADDR_ALTLVDINTERRUPT      = 0x00E8;
const unsigned AIVT_ADDR_ALTFLTAINTERRUPT     = 0x00EA;
const unsigned AIVT_ADDR_ALTFLTBINTERRUPT     = 0x00EC;
const unsigned AIVT_ADDR_ALTINTERRUPT45       = 0x00EE;
const unsigned AIVT_ADDR_ALTINTERRUPT46       = 0x00F0;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x00F2;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x00F4;
const unsigned AIVT_ADDR_ALTINTERRUPT49       = 0x00F6;
const unsigned AIVT_ADDR_ALTINTERRUPT50       = 0x00F8;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x00FA;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x00FC;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x00FE;

// Working space registers
rx unsigned int W0  absolute 0x0000;
rx unsigned int W1  absolute 0x0002;
rx unsigned int W2  absolute 0x0004;
rx unsigned int W3  absolute 0x0006;
rx unsigned int W4  absolute 0x0008;
rx unsigned int W5  absolute 0x000A;
rx unsigned int W6  absolute 0x000C;
rx unsigned int W7  absolute 0x000E;
rx unsigned int W8  absolute 0x0010;
rx unsigned int W9  absolute 0x0012;
rx unsigned int W10 absolute 0x0014;
rx unsigned int W11 absolute 0x0016;
rx unsigned int W12 absolute 0x0018;
rx unsigned int W13 absolute 0x001A;
rx unsigned int W14 absolute 0x001C;
rx unsigned int W15 absolute 0x001E;

const register unsigned short int A      = 0;
const register unsigned short int B      = 1;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;


// Special function registers (SFRs)
rx  unsigned int volatile WREG             absolute 0x0000;
rx  unsigned int volatile WREG0            absolute 0x0000;
rx  unsigned int volatile WREG1            absolute 0x0002;
rx  unsigned int volatile WREG2            absolute 0x0004;
rx  unsigned int volatile WREG3            absolute 0x0006;
rx  unsigned int volatile WREG4            absolute 0x0008;
rx  unsigned int volatile WREG5            absolute 0x000A;
rx  unsigned int volatile WREG6            absolute 0x000C;
rx  unsigned int volatile WREG7            absolute 0x000E;
rx  unsigned int volatile WREG8            absolute 0x0010;
rx  unsigned int volatile WREG9            absolute 0x0012;
rx  unsigned int volatile WREG10           absolute 0x0014;
rx  unsigned int volatile WREG11           absolute 0x0016;
rx  unsigned int volatile WREG12           absolute 0x0018;
rx  unsigned int volatile WREG13           absolute 0x001A;
rx  unsigned int volatile WREG14           absolute 0x001C;
rx  unsigned int volatile WREG15           absolute 0x001E;
sfr unsigned int volatile SPLIM            absolute 0x0020;
sfr unsigned int volatile ACCAL            absolute 0x0022;
sfr unsigned int volatile ACCAH            absolute 0x0024;
sfr unsigned int volatile ACCAU            absolute 0x0026;
sfr unsigned int volatile ACCBL            absolute 0x0028;
sfr unsigned int volatile ACCBH            absolute 0x002A;
sfr unsigned int volatile ACCBU            absolute 0x002C;
sfr unsigned int volatile PCL              absolute 0x002E;
sfr unsigned int volatile PCH              absolute 0x0030;
sfr unsigned int volatile TBLPAG           absolute 0x0032;
sfr unsigned int volatile PSVPAG           absolute 0x0034;
sfr unsigned int volatile RCOUNT           absolute 0x0036;
sfr unsigned int volatile DCOUNT           absolute 0x0038;
sfr unsigned int volatile DOSTARTL         absolute 0x003A;
sfr unsigned int volatile DOSTARTH         absolute 0x003C;
sfr unsigned int volatile DOENDL           absolute 0x003E;
sfr unsigned int volatile DOENDH           absolute 0x0040;
sfr unsigned int volatile SR               absolute 0x0042;
sfr unsigned int volatile CORCON           absolute 0x0044;
sfr unsigned int volatile MODCON           absolute 0x0046;
sfr unsigned int volatile XMODSRT          absolute 0x0048;
sfr unsigned int volatile XMODEND          absolute 0x004A;
sfr unsigned int volatile YMODSRT          absolute 0x004C;
sfr unsigned int volatile YMODEND          absolute 0x004E;
sfr unsigned int volatile XBREV            absolute 0x0050;
sfr unsigned int volatile DISICNT          absolute 0x0052;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int          IEC0             absolute 0x008C;
sfr unsigned int          IEC1             absolute 0x008E;
sfr unsigned int          IEC2             absolute 0x0090;
sfr unsigned int          IPC0             absolute 0x0094;
sfr unsigned int          IPC1             absolute 0x0096;
sfr unsigned int          IPC2             absolute 0x0098;
sfr unsigned int          IPC3             absolute 0x009A;
sfr unsigned int          IPC4             absolute 0x009C;
sfr unsigned int          IPC5             absolute 0x009E;
sfr unsigned int          IPC6             absolute 0x00A0;
sfr unsigned int          IPC7             absolute 0x00A2;
sfr unsigned int          IPC8             absolute 0x00A4;
sfr unsigned int          IPC9             absolute 0x00A6;
sfr unsigned int          IPC10            absolute 0x00A8;
sfr unsigned int volatile INTTREG          absolute 0x00B0;
sfr unsigned int volatile CNEN1            absolute 0x00C0;
sfr unsigned int volatile CNEN2            absolute 0x00C2;
sfr unsigned int volatile CNPU1            absolute 0x00C4;
sfr unsigned int volatile CNPU2            absolute 0x00C6;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile TMR2             absolute 0x0106;
sfr unsigned int volatile TMR3HLD          absolute 0x0108;
sfr unsigned int volatile TMR3             absolute 0x010A;
sfr unsigned int volatile PR2              absolute 0x010C;
sfr unsigned int volatile PR3              absolute 0x010E;
sfr unsigned int volatile T2CON            absolute 0x0110;
sfr unsigned int volatile T3CON            absolute 0x0112;
sfr unsigned int volatile TMR4             absolute 0x0114;
sfr unsigned int volatile TMR5HLD          absolute 0x0116;
sfr unsigned int volatile TMR5             absolute 0x0118;
sfr unsigned int volatile PR4              absolute 0x011A;
sfr unsigned int volatile PR5              absolute 0x011C;
sfr unsigned int volatile T4CON            absolute 0x011E;
sfr unsigned int volatile T5CON            absolute 0x0120;
sfr unsigned int volatile IC1BUF           absolute 0x0140;
sfr unsigned int volatile IC1CON           absolute 0x0142;
sfr unsigned int volatile IC2BUF           absolute 0x0144;
sfr unsigned int volatile IC2CON           absolute 0x0146;
sfr unsigned int volatile IC3BUF           absolute 0x0148;
sfr unsigned int volatile IC3CON           absolute 0x014A;
sfr unsigned int volatile IC4BUF           absolute 0x014C;
sfr unsigned int volatile IC4CON           absolute 0x014E;
sfr unsigned int volatile IC5BUF           absolute 0x0150;
sfr unsigned int volatile IC5CON           absolute 0x0152;
sfr unsigned int volatile IC6BUF           absolute 0x0154;
sfr unsigned int volatile IC6CON           absolute 0x0156;
sfr unsigned int volatile IC7BUF           absolute 0x0158;
sfr unsigned int volatile IC7CON           absolute 0x015A;
sfr unsigned int volatile IC8BUF           absolute 0x015C;
sfr unsigned int volatile IC8CON           absolute 0x015E;
sfr unsigned int          OC1RS            absolute 0x0180;
sfr unsigned int volatile OC1R             absolute 0x0182;
sfr unsigned int volatile OC1CON           absolute 0x0184;
sfr unsigned int          OC2RS            absolute 0x0186;
sfr unsigned int volatile OC2R             absolute 0x0188;
sfr unsigned int volatile OC2CON           absolute 0x018A;
sfr unsigned int          OC3RS            absolute 0x018C;
sfr unsigned int volatile OC3R             absolute 0x018E;
sfr unsigned int volatile OC3CON           absolute 0x0190;
sfr unsigned int          OC4RS            absolute 0x0192;
sfr unsigned int volatile OC4R             absolute 0x0194;
sfr unsigned int volatile OC4CON           absolute 0x0196;
sfr unsigned int          OC5RS            absolute 0x0198;
sfr unsigned int volatile OC5R             absolute 0x019A;
sfr unsigned int volatile OC5CON           absolute 0x019C;
sfr unsigned int          OC6RS            absolute 0x019E;
sfr unsigned int volatile OC6R             absolute 0x01A0;
sfr unsigned int volatile OC6CON           absolute 0x01A2;
sfr unsigned int          OC7RS            absolute 0x01A4;
sfr unsigned int volatile OC7R             absolute 0x01A6;
sfr unsigned int volatile OC7CON           absolute 0x01A8;
sfr unsigned int          OC8RS            absolute 0x01AA;
sfr unsigned int volatile OC8R             absolute 0x01AC;
sfr unsigned int volatile OC8CON           absolute 0x01AE;
sfr unsigned int volatile I2CRCV           absolute 0x0200;
sfr unsigned int volatile I2CTRN           absolute 0x0202;
sfr unsigned int volatile I2CBRG           absolute 0x0204;
sfr unsigned int volatile I2CCON           absolute 0x0206;
sfr unsigned int volatile I2CSTAT          absolute 0x0208;
sfr unsigned int volatile I2CADD           absolute 0x020A;
sfr unsigned int volatile U1MODE           absolute 0x020C;
sfr unsigned int volatile U1STA            absolute 0x020E;
sfr unsigned int          U1TXREG          absolute 0x0210;
sfr unsigned int volatile U1RXREG          absolute 0x0212;
sfr unsigned int          U1BRG            absolute 0x0214;
sfr unsigned int volatile U2MODE           absolute 0x0216;
sfr unsigned int volatile U2STA            absolute 0x0218;
sfr unsigned int          U2TXREG          absolute 0x021A;
sfr unsigned int volatile U2RXREG          absolute 0x021C;
sfr unsigned int          U2BRG            absolute 0x021E;
sfr unsigned int volatile SPI1STAT         absolute 0x0220;
sfr unsigned int volatile SPI1CON          absolute 0x0222;
sfr unsigned int volatile SPI1BUF          absolute 0x0224;
sfr unsigned int volatile SPI2STAT         absolute 0x0226;
sfr unsigned int volatile SPI2CON          absolute 0x0228;
sfr unsigned int volatile SPI2BUF          absolute 0x022A;
sfr unsigned int volatile ADCBUF0          absolute 0x0280;
sfr unsigned int volatile ADCBUF1          absolute 0x0282;
sfr unsigned int volatile ADCBUF2          absolute 0x0284;
sfr unsigned int volatile ADCBUF3          absolute 0x0286;
sfr unsigned int volatile ADCBUF4          absolute 0x0288;
sfr unsigned int volatile ADCBUF5          absolute 0x028A;
sfr unsigned int volatile ADCBUF6          absolute 0x028C;
sfr unsigned int volatile ADCBUF7          absolute 0x028E;
sfr unsigned int volatile ADCBUF8          absolute 0x0290;
sfr unsigned int volatile ADCBUF9          absolute 0x0292;
sfr unsigned int volatile ADCBUFA          absolute 0x0294;
sfr unsigned int volatile ADCBUFB          absolute 0x0296;
sfr unsigned int volatile ADCBUFC          absolute 0x0298;
sfr unsigned int volatile ADCBUFD          absolute 0x029A;
sfr unsigned int volatile ADCBUFE          absolute 0x029C;
sfr unsigned int volatile ADCBUFF          absolute 0x029E;
sfr unsigned int volatile ADCON1           absolute 0x02A0;
sfr unsigned int volatile ADCON2           absolute 0x02A2;
sfr unsigned int volatile ADCON3           absolute 0x02A4;
sfr unsigned int volatile ADCHS            absolute 0x02A6;
sfr unsigned int volatile ADPCFG           absolute 0x02A8;
sfr unsigned int volatile ADCSSL           absolute 0x02AA;
sfr unsigned int volatile TRISB            absolute 0x02C6;
sfr unsigned int volatile PORTB            absolute 0x02C8;
sfr unsigned int volatile LATB             absolute 0x02CA;
sfr unsigned int volatile TRISC            absolute 0x02CC;
sfr unsigned int volatile PORTC            absolute 0x02CE;
sfr unsigned int volatile LATC             absolute 0x02D0;
sfr unsigned int volatile TRISD            absolute 0x02D2;
sfr unsigned int volatile PORTD            absolute 0x02D4;
sfr unsigned int volatile LATD             absolute 0x02D6;
sfr unsigned int volatile TRISF            absolute 0x02DE;
sfr unsigned int volatile PORTF            absolute 0x02E0;
sfr unsigned int volatile LATF             absolute 0x02E2;
sfr unsigned int volatile TRISG            absolute 0x02E4;
sfr unsigned int volatile PORTG            absolute 0x02E6;
sfr unsigned int volatile LATG             absolute 0x02E8;
sfr unsigned int volatile C1RXF0SID        absolute 0x0300;
sfr unsigned int volatile C1RXF0EIDH       absolute 0x0302;
sfr unsigned int volatile C1RXF0EIDL       absolute 0x0304;
sfr unsigned int volatile C1RXF1SID        absolute 0x0308;
sfr unsigned int volatile C1RXF1EIDH       absolute 0x030A;
sfr unsigned int volatile C1RXF1EIDL       absolute 0x030C;
sfr unsigned int volatile C1RXF2SID        absolute 0x0310;
sfr unsigned int volatile C1RXF2EIDH       absolute 0x0312;
sfr unsigned int volatile C1RXF2EIDL       absolute 0x0314;
sfr unsigned int volatile C1RXF3SID        absolute 0x0318;
sfr unsigned int volatile C1RXF3EIDH       absolute 0x031A;
sfr unsigned int volatile C1RXF3EIDL       absolute 0x031C;
sfr unsigned int volatile C1RXF4SID        absolute 0x0320;
sfr unsigned int volatile C1RXF4EIDH       absolute 0x0322;
sfr unsigned int volatile C1RXF4EIDL       absolute 0x0324;
sfr unsigned int volatile C1RXF5SID        absolute 0x0328;
sfr unsigned int volatile C1RXF5EIDH       absolute 0x032A;
sfr unsigned int volatile C1RXF5EIDL       absolute 0x032C;
sfr unsigned int volatile C1RXM0SID        absolute 0x0330;
sfr unsigned int volatile C1RXM0EIDH       absolute 0x0332;
sfr unsigned int volatile C1RXM0EIDL       absolute 0x0334;
sfr unsigned int volatile C1RXM1SID        absolute 0x0338;
sfr unsigned int volatile C1RXM1EIDH       absolute 0x033A;
sfr unsigned int volatile C1RXM1EIDL       absolute 0x033C;
sfr unsigned int volatile C1TX2SID         absolute 0x0340;
sfr unsigned int volatile C1TX2EID         absolute 0x0342;
sfr unsigned int volatile C1TX2DLC         absolute 0x0344;
sfr unsigned int volatile C1TX2B1          absolute 0x0346;
sfr unsigned int volatile C1TX2B2          absolute 0x0348;
sfr unsigned int volatile C1TX2B3          absolute 0x034A;
sfr unsigned int volatile C1TX2B4          absolute 0x034C;
sfr unsigned int volatile C1TX2CON         absolute 0x034E;
sfr unsigned int volatile C1TX1SID         absolute 0x0350;
sfr unsigned int volatile C1TX1EID         absolute 0x0352;
sfr unsigned int volatile C1TX1DLC         absolute 0x0354;
sfr unsigned int volatile C1TX1B1          absolute 0x0356;
sfr unsigned int volatile C1TX1B2          absolute 0x0358;
sfr unsigned int volatile C1TX1B3          absolute 0x035A;
sfr unsigned int volatile C1TX1B4          absolute 0x035C;
sfr unsigned int volatile C1TX1CON         absolute 0x035E;
sfr unsigned int volatile C1TX0SID         absolute 0x0360;
sfr unsigned int volatile C1TX0EID         absolute 0x0362;
sfr unsigned int volatile C1TX0DLC         absolute 0x0364;
sfr unsigned int volatile C1TX0B1          absolute 0x0366;
sfr unsigned int volatile C1TX0B2          absolute 0x0368;
sfr unsigned int volatile C1TX0B3          absolute 0x036A;
sfr unsigned int volatile C1TX0B4          absolute 0x036C;
sfr unsigned int volatile C1TX0CON         absolute 0x036E;
sfr unsigned int volatile C1RX1SID         absolute 0x0370;
sfr unsigned int volatile C1RX1EID         absolute 0x0372;
sfr unsigned int volatile C1RX1DLC         absolute 0x0374;
sfr unsigned int volatile C1RX1B1          absolute 0x0376;
sfr unsigned int volatile C1RX1B2          absolute 0x0378;
sfr unsigned int volatile C1RX1B3          absolute 0x037A;
sfr unsigned int volatile C1RX1B4          absolute 0x037C;
sfr unsigned int volatile C1RX1CON         absolute 0x037E;
sfr unsigned int volatile C1RX0SID         absolute 0x0380;
sfr unsigned int volatile C1RX0EID         absolute 0x0382;
sfr unsigned int volatile C1RX0DLC         absolute 0x0384;
sfr unsigned int volatile C1RX0B1          absolute 0x0386;
sfr unsigned int volatile C1RX0B2          absolute 0x0388;
sfr unsigned int volatile C1RX0B3          absolute 0x038A;
sfr unsigned int volatile C1RX0B4          absolute 0x038C;
sfr unsigned int volatile C1RX0CON         absolute 0x038E;
sfr unsigned int volatile C1CTRL           absolute 0x0390;
sfr unsigned int volatile C1CFG1           absolute 0x0392;
sfr unsigned int volatile C1CFG2           absolute 0x0394;
sfr unsigned int volatile C1INTF           absolute 0x0396;
sfr unsigned int volatile C1INTE           absolute 0x0398;
sfr unsigned int volatile C1EC             absolute 0x039A;
sfr unsigned int volatile C1RERRCNT        absolute 0x039A;
sfr unsigned short volatile C1TERRCNT        absolute 0x039B;
sfr unsigned int volatile C2RXF0SID        absolute 0x03C0;
sfr unsigned int volatile C2RXF0EIDH       absolute 0x03C2;
sfr unsigned int volatile C2RXF0EIDL       absolute 0x03C4;
sfr unsigned int volatile C2RXF1SID        absolute 0x03C8;
sfr unsigned int volatile C2RXF1EIDH       absolute 0x03CA;
sfr unsigned int volatile C2RXF1EIDL       absolute 0x03CC;
sfr unsigned int volatile C2RXF2SID        absolute 0x03D0;
sfr unsigned int volatile C2RXF2EIDH       absolute 0x03D2;
sfr unsigned int volatile C2RXF2EIDL       absolute 0x03D4;
sfr unsigned int volatile C2RXF3SID        absolute 0x03D8;
sfr unsigned int volatile C2RXF3EIDH       absolute 0x03DA;
sfr unsigned int volatile C2RXF3EIDL       absolute 0x03DC;
sfr unsigned int volatile C2RXF4SID        absolute 0x03E0;
sfr unsigned int volatile C2RXF4EIDH       absolute 0x03E2;
sfr unsigned int volatile C2RXF4EIDL       absolute 0x03E4;
sfr unsigned int volatile C2RXF5SID        absolute 0x03E8;
sfr unsigned int volatile C2RXF5EIDH       absolute 0x03EA;
sfr unsigned int volatile C2RXF5EIDL       absolute 0x03EC;
sfr unsigned int volatile C2RXM0SID        absolute 0x03F0;
sfr unsigned int volatile C2RXM0EIDH       absolute 0x03F2;
sfr unsigned int volatile C2RXM0EIDL       absolute 0x03F4;
sfr unsigned int volatile C2RXM1SID        absolute 0x03F8;
sfr unsigned int volatile C2RXM1EIDH       absolute 0x03FA;
sfr unsigned int volatile C2RXM1EIDL       absolute 0x03FC;
sfr unsigned int volatile C2TX2SID         absolute 0x0400;
sfr unsigned int volatile C2TX2EID         absolute 0x0402;
sfr unsigned int volatile C2TX2DLC         absolute 0x0404;
sfr unsigned int volatile C2TX2B1          absolute 0x0406;
sfr unsigned int volatile C2TX2B2          absolute 0x0408;
sfr unsigned int volatile C2TX2B3          absolute 0x040A;
sfr unsigned int volatile C2TX2B4          absolute 0x040C;
sfr unsigned int volatile C2TX2CON         absolute 0x040E;
sfr unsigned int volatile C2TX1SID         absolute 0x0410;
sfr unsigned int volatile C2TX1EID         absolute 0x0412;
sfr unsigned int volatile C2TX1DLC         absolute 0x0414;
sfr unsigned int volatile C2TX1B1          absolute 0x0416;
sfr unsigned int volatile C2TX1B2          absolute 0x0418;
sfr unsigned int volatile C2TX1B3          absolute 0x041A;
sfr unsigned int volatile C2TX1B4          absolute 0x041C;
sfr unsigned int volatile C2TX1CON         absolute 0x041E;
sfr unsigned int volatile C2TX0SID         absolute 0x0420;
sfr unsigned int volatile C2TX0EID         absolute 0x0422;
sfr unsigned int volatile C2TX0DLC         absolute 0x0424;
sfr unsigned int volatile C2TX0B1          absolute 0x0426;
sfr unsigned int volatile C2TX0B2          absolute 0x0428;
sfr unsigned int volatile C2TX0B3          absolute 0x042A;
sfr unsigned int volatile C2TX0B4          absolute 0x042C;
sfr unsigned int volatile C2TX0CON         absolute 0x042E;
sfr unsigned int volatile C2RX1SID         absolute 0x0430;
sfr unsigned int volatile C2RX1EID         absolute 0x0432;
sfr unsigned int volatile C2RX1DLC         absolute 0x0434;
sfr unsigned int volatile C2RX1B1          absolute 0x0436;
sfr unsigned int volatile C2RX1B2          absolute 0x0438;
sfr unsigned int volatile C2RX1B3          absolute 0x043A;
sfr unsigned int volatile C2RX1B4          absolute 0x043C;
sfr unsigned int volatile C2RX1CON         absolute 0x043E;
sfr unsigned int volatile C2RX0SID         absolute 0x0440;
sfr unsigned int volatile C2RX0EID         absolute 0x0442;
sfr unsigned int volatile C2RX0DLC         absolute 0x0444;
sfr unsigned int volatile C2RX0B1          absolute 0x0446;
sfr unsigned int volatile C2RX0B2          absolute 0x0448;
sfr unsigned int volatile C2RX0B3          absolute 0x044A;
sfr unsigned int volatile C2RX0B4          absolute 0x044C;
sfr unsigned int volatile C2RX0CON         absolute 0x044E;
sfr unsigned int volatile C2CTRL           absolute 0x0450;
sfr unsigned int volatile C2CFG1           absolute 0x0452;
sfr unsigned int volatile C2CFG2           absolute 0x0454;
sfr unsigned int volatile C2INTF           absolute 0x0456;
sfr unsigned int volatile C2INTE           absolute 0x0458;
sfr unsigned int volatile C2EC             absolute 0x045A;
sfr unsigned int volatile C2RERRCNT        absolute 0x045A;
sfr unsigned short volatile C2TERRCNT        absolute 0x045B;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile OSCTUN           absolute 0x0744;
sfr unsigned int volatile BSRAM            absolute 0x0750;
sfr unsigned int volatile SSRAM            absolute 0x0752;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int volatile NVMADR           absolute 0x0762;
sfr unsigned int volatile NVMADRU          absolute 0x0764;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;

    // WREG0 bits
    const register unsigned short int WREG0_15 = 15;
    sbit  WREG0_15_bit at WREG0.B15;
    const register unsigned short int WREG0_14 = 14;
    sbit  WREG0_14_bit at WREG0.B14;
    const register unsigned short int WREG0_13 = 13;
    sbit  WREG0_13_bit at WREG0.B13;
    const register unsigned short int WREG0_12 = 12;
    sbit  WREG0_12_bit at WREG0.B12;
    const register unsigned short int WREG0_11 = 11;
    sbit  WREG0_11_bit at WREG0.B11;
    const register unsigned short int WREG0_10 = 10;
    sbit  WREG0_10_bit at WREG0.B10;
    const register unsigned short int WREG0_9 = 9;
    sbit  WREG0_9_bit at WREG0.B9;
    const register unsigned short int WREG0_8 = 8;
    sbit  WREG0_8_bit at WREG0.B8;
    const register unsigned short int WREG0_7 = 7;
    sbit  WREG0_7_bit at WREG0.B7;
    const register unsigned short int WREG0_6 = 6;
    sbit  WREG0_6_bit at WREG0.B6;
    const register unsigned short int WREG0_5 = 5;
    sbit  WREG0_5_bit at WREG0.B5;
    const register unsigned short int WREG0_4 = 4;
    sbit  WREG0_4_bit at WREG0.B4;
    const register unsigned short int WREG0_3 = 3;
    sbit  WREG0_3_bit at WREG0.B3;
    const register unsigned short int WREG0_2 = 2;
    sbit  WREG0_2_bit at WREG0.B2;
    const register unsigned short int WREG0_1 = 1;
    sbit  WREG0_1_bit at WREG0.B1;
    const register unsigned short int WREG0_0 = 0;
    sbit  WREG0_0_bit at WREG0.B0;

    // WREG1 bits
    const register unsigned short int WREG1_15 = 15;
    sbit  WREG1_15_bit at WREG1.B15;
    const register unsigned short int WREG1_14 = 14;
    sbit  WREG1_14_bit at WREG1.B14;
    const register unsigned short int WREG1_13 = 13;
    sbit  WREG1_13_bit at WREG1.B13;
    const register unsigned short int WREG1_12 = 12;
    sbit  WREG1_12_bit at WREG1.B12;
    const register unsigned short int WREG1_11 = 11;
    sbit  WREG1_11_bit at WREG1.B11;
    const register unsigned short int WREG1_10 = 10;
    sbit  WREG1_10_bit at WREG1.B10;
    const register unsigned short int WREG1_9 = 9;
    sbit  WREG1_9_bit at WREG1.B9;
    const register unsigned short int WREG1_8 = 8;
    sbit  WREG1_8_bit at WREG1.B8;
    const register unsigned short int WREG1_7 = 7;
    sbit  WREG1_7_bit at WREG1.B7;
    const register unsigned short int WREG1_6 = 6;
    sbit  WREG1_6_bit at WREG1.B6;
    const register unsigned short int WREG1_5 = 5;
    sbit  WREG1_5_bit at WREG1.B5;
    const register unsigned short int WREG1_4 = 4;
    sbit  WREG1_4_bit at WREG1.B4;
    const register unsigned short int WREG1_3 = 3;
    sbit  WREG1_3_bit at WREG1.B3;
    const register unsigned short int WREG1_2 = 2;
    sbit  WREG1_2_bit at WREG1.B2;
    const register unsigned short int WREG1_1 = 1;
    sbit  WREG1_1_bit at WREG1.B1;
    const register unsigned short int WREG1_0 = 0;
    sbit  WREG1_0_bit at WREG1.B0;

    // WREG2 bits
    const register unsigned short int WREG2_15 = 15;
    sbit  WREG2_15_bit at WREG2.B15;
    const register unsigned short int WREG2_14 = 14;
    sbit  WREG2_14_bit at WREG2.B14;
    const register unsigned short int WREG2_13 = 13;
    sbit  WREG2_13_bit at WREG2.B13;
    const register unsigned short int WREG2_12 = 12;
    sbit  WREG2_12_bit at WREG2.B12;
    const register unsigned short int WREG2_11 = 11;
    sbit  WREG2_11_bit at WREG2.B11;
    const register unsigned short int WREG2_10 = 10;
    sbit  WREG2_10_bit at WREG2.B10;
    const register unsigned short int WREG2_9 = 9;
    sbit  WREG2_9_bit at WREG2.B9;
    const register unsigned short int WREG2_8 = 8;
    sbit  WREG2_8_bit at WREG2.B8;
    const register unsigned short int WREG2_7 = 7;
    sbit  WREG2_7_bit at WREG2.B7;
    const register unsigned short int WREG2_6 = 6;
    sbit  WREG2_6_bit at WREG2.B6;
    const register unsigned short int WREG2_5 = 5;
    sbit  WREG2_5_bit at WREG2.B5;
    const register unsigned short int WREG2_4 = 4;
    sbit  WREG2_4_bit at WREG2.B4;
    const register unsigned short int WREG2_3 = 3;
    sbit  WREG2_3_bit at WREG2.B3;
    const register unsigned short int WREG2_2 = 2;
    sbit  WREG2_2_bit at WREG2.B2;
    const register unsigned short int WREG2_1 = 1;
    sbit  WREG2_1_bit at WREG2.B1;
    const register unsigned short int WREG2_0 = 0;
    sbit  WREG2_0_bit at WREG2.B0;

    // WREG3 bits
    const register unsigned short int WREG3_15 = 15;
    sbit  WREG3_15_bit at WREG3.B15;
    const register unsigned short int WREG3_14 = 14;
    sbit  WREG3_14_bit at WREG3.B14;
    const register unsigned short int WREG3_13 = 13;
    sbit  WREG3_13_bit at WREG3.B13;
    const register unsigned short int WREG3_12 = 12;
    sbit  WREG3_12_bit at WREG3.B12;
    const register unsigned short int WREG3_11 = 11;
    sbit  WREG3_11_bit at WREG3.B11;
    const register unsigned short int WREG3_10 = 10;
    sbit  WREG3_10_bit at WREG3.B10;
    const register unsigned short int WREG3_9 = 9;
    sbit  WREG3_9_bit at WREG3.B9;
    const register unsigned short int WREG3_8 = 8;
    sbit  WREG3_8_bit at WREG3.B8;
    const register unsigned short int WREG3_7 = 7;
    sbit  WREG3_7_bit at WREG3.B7;
    const register unsigned short int WREG3_6 = 6;
    sbit  WREG3_6_bit at WREG3.B6;
    const register unsigned short int WREG3_5 = 5;
    sbit  WREG3_5_bit at WREG3.B5;
    const register unsigned short int WREG3_4 = 4;
    sbit  WREG3_4_bit at WREG3.B4;
    const register unsigned short int WREG3_3 = 3;
    sbit  WREG3_3_bit at WREG3.B3;
    const register unsigned short int WREG3_2 = 2;
    sbit  WREG3_2_bit at WREG3.B2;
    const register unsigned short int WREG3_1 = 1;
    sbit  WREG3_1_bit at WREG3.B1;
    const register unsigned short int WREG3_0 = 0;
    sbit  WREG3_0_bit at WREG3.B0;

    // WREG4 bits
    const register unsigned short int WREG4_15 = 15;
    sbit  WREG4_15_bit at WREG4.B15;
    const register unsigned short int WREG4_14 = 14;
    sbit  WREG4_14_bit at WREG4.B14;
    const register unsigned short int WREG4_13 = 13;
    sbit  WREG4_13_bit at WREG4.B13;
    const register unsigned short int WREG4_12 = 12;
    sbit  WREG4_12_bit at WREG4.B12;
    const register unsigned short int WREG4_11 = 11;
    sbit  WREG4_11_bit at WREG4.B11;
    const register unsigned short int WREG4_10 = 10;
    sbit  WREG4_10_bit at WREG4.B10;
    const register unsigned short int WREG4_9 = 9;
    sbit  WREG4_9_bit at WREG4.B9;
    const register unsigned short int WREG4_8 = 8;
    sbit  WREG4_8_bit at WREG4.B8;
    const register unsigned short int WREG4_7 = 7;
    sbit  WREG4_7_bit at WREG4.B7;
    const register unsigned short int WREG4_6 = 6;
    sbit  WREG4_6_bit at WREG4.B6;
    const register unsigned short int WREG4_5 = 5;
    sbit  WREG4_5_bit at WREG4.B5;
    const register unsigned short int WREG4_4 = 4;
    sbit  WREG4_4_bit at WREG4.B4;
    const register unsigned short int WREG4_3 = 3;
    sbit  WREG4_3_bit at WREG4.B3;
    const register unsigned short int WREG4_2 = 2;
    sbit  WREG4_2_bit at WREG4.B2;
    const register unsigned short int WREG4_1 = 1;
    sbit  WREG4_1_bit at WREG4.B1;
    const register unsigned short int WREG4_0 = 0;
    sbit  WREG4_0_bit at WREG4.B0;

    // WREG5 bits
    const register unsigned short int WREG5_15 = 15;
    sbit  WREG5_15_bit at WREG5.B15;
    const register unsigned short int WREG5_14 = 14;
    sbit  WREG5_14_bit at WREG5.B14;
    const register unsigned short int WREG5_13 = 13;
    sbit  WREG5_13_bit at WREG5.B13;
    const register unsigned short int WREG5_12 = 12;
    sbit  WREG5_12_bit at WREG5.B12;
    const register unsigned short int WREG5_11 = 11;
    sbit  WREG5_11_bit at WREG5.B11;
    const register unsigned short int WREG5_10 = 10;
    sbit  WREG5_10_bit at WREG5.B10;
    const register unsigned short int WREG5_9 = 9;
    sbit  WREG5_9_bit at WREG5.B9;
    const register unsigned short int WREG5_8 = 8;
    sbit  WREG5_8_bit at WREG5.B8;
    const register unsigned short int WREG5_7 = 7;
    sbit  WREG5_7_bit at WREG5.B7;
    const register unsigned short int WREG5_6 = 6;
    sbit  WREG5_6_bit at WREG5.B6;
    const register unsigned short int WREG5_5 = 5;
    sbit  WREG5_5_bit at WREG5.B5;
    const register unsigned short int WREG5_4 = 4;
    sbit  WREG5_4_bit at WREG5.B4;
    const register unsigned short int WREG5_3 = 3;
    sbit  WREG5_3_bit at WREG5.B3;
    const register unsigned short int WREG5_2 = 2;
    sbit  WREG5_2_bit at WREG5.B2;
    const register unsigned short int WREG5_1 = 1;
    sbit  WREG5_1_bit at WREG5.B1;
    const register unsigned short int WREG5_0 = 0;
    sbit  WREG5_0_bit at WREG5.B0;

    // WREG6 bits
    const register unsigned short int WREG6_15 = 15;
    sbit  WREG6_15_bit at WREG6.B15;
    const register unsigned short int WREG6_14 = 14;
    sbit  WREG6_14_bit at WREG6.B14;
    const register unsigned short int WREG6_13 = 13;
    sbit  WREG6_13_bit at WREG6.B13;
    const register unsigned short int WREG6_12 = 12;
    sbit  WREG6_12_bit at WREG6.B12;
    const register unsigned short int WREG6_11 = 11;
    sbit  WREG6_11_bit at WREG6.B11;
    const register unsigned short int WREG6_10 = 10;
    sbit  WREG6_10_bit at WREG6.B10;
    const register unsigned short int WREG6_9 = 9;
    sbit  WREG6_9_bit at WREG6.B9;
    const register unsigned short int WREG6_8 = 8;
    sbit  WREG6_8_bit at WREG6.B8;
    const register unsigned short int WREG6_7 = 7;
    sbit  WREG6_7_bit at WREG6.B7;
    const register unsigned short int WREG6_6 = 6;
    sbit  WREG6_6_bit at WREG6.B6;
    const register unsigned short int WREG6_5 = 5;
    sbit  WREG6_5_bit at WREG6.B5;
    const register unsigned short int WREG6_4 = 4;
    sbit  WREG6_4_bit at WREG6.B4;
    const register unsigned short int WREG6_3 = 3;
    sbit  WREG6_3_bit at WREG6.B3;
    const register unsigned short int WREG6_2 = 2;
    sbit  WREG6_2_bit at WREG6.B2;
    const register unsigned short int WREG6_1 = 1;
    sbit  WREG6_1_bit at WREG6.B1;
    const register unsigned short int WREG6_0 = 0;
    sbit  WREG6_0_bit at WREG6.B0;

    // WREG7 bits
    const register unsigned short int WREG7_15 = 15;
    sbit  WREG7_15_bit at WREG7.B15;
    const register unsigned short int WREG7_14 = 14;
    sbit  WREG7_14_bit at WREG7.B14;
    const register unsigned short int WREG7_13 = 13;
    sbit  WREG7_13_bit at WREG7.B13;
    const register unsigned short int WREG7_12 = 12;
    sbit  WREG7_12_bit at WREG7.B12;
    const register unsigned short int WREG7_11 = 11;
    sbit  WREG7_11_bit at WREG7.B11;
    const register unsigned short int WREG7_10 = 10;
    sbit  WREG7_10_bit at WREG7.B10;
    const register unsigned short int WREG7_9 = 9;
    sbit  WREG7_9_bit at WREG7.B9;
    const register unsigned short int WREG7_8 = 8;
    sbit  WREG7_8_bit at WREG7.B8;
    const register unsigned short int WREG7_7 = 7;
    sbit  WREG7_7_bit at WREG7.B7;
    const register unsigned short int WREG7_6 = 6;
    sbit  WREG7_6_bit at WREG7.B6;
    const register unsigned short int WREG7_5 = 5;
    sbit  WREG7_5_bit at WREG7.B5;
    const register unsigned short int WREG7_4 = 4;
    sbit  WREG7_4_bit at WREG7.B4;
    const register unsigned short int WREG7_3 = 3;
    sbit  WREG7_3_bit at WREG7.B3;
    const register unsigned short int WREG7_2 = 2;
    sbit  WREG7_2_bit at WREG7.B2;
    const register unsigned short int WREG7_1 = 1;
    sbit  WREG7_1_bit at WREG7.B1;
    const register unsigned short int WREG7_0 = 0;
    sbit  WREG7_0_bit at WREG7.B0;

    // WREG8 bits
    const register unsigned short int WREG8_15 = 15;
    sbit  WREG8_15_bit at WREG8.B15;
    const register unsigned short int WREG8_14 = 14;
    sbit  WREG8_14_bit at WREG8.B14;
    const register unsigned short int WREG8_13 = 13;
    sbit  WREG8_13_bit at WREG8.B13;
    const register unsigned short int WREG8_12 = 12;
    sbit  WREG8_12_bit at WREG8.B12;
    const register unsigned short int WREG8_11 = 11;
    sbit  WREG8_11_bit at WREG8.B11;
    const register unsigned short int WREG8_10 = 10;
    sbit  WREG8_10_bit at WREG8.B10;
    const register unsigned short int WREG8_9 = 9;
    sbit  WREG8_9_bit at WREG8.B9;
    const register unsigned short int WREG8_8 = 8;
    sbit  WREG8_8_bit at WREG8.B8;
    const register unsigned short int WREG8_7 = 7;
    sbit  WREG8_7_bit at WREG8.B7;
    const register unsigned short int WREG8_6 = 6;
    sbit  WREG8_6_bit at WREG8.B6;
    const register unsigned short int WREG8_5 = 5;
    sbit  WREG8_5_bit at WREG8.B5;
    const register unsigned short int WREG8_4 = 4;
    sbit  WREG8_4_bit at WREG8.B4;
    const register unsigned short int WREG8_3 = 3;
    sbit  WREG8_3_bit at WREG8.B3;
    const register unsigned short int WREG8_2 = 2;
    sbit  WREG8_2_bit at WREG8.B2;
    const register unsigned short int WREG8_1 = 1;
    sbit  WREG8_1_bit at WREG8.B1;
    const register unsigned short int WREG8_0 = 0;
    sbit  WREG8_0_bit at WREG8.B0;

    // WREG9 bits
    const register unsigned short int WREG9_15 = 15;
    sbit  WREG9_15_bit at WREG9.B15;
    const register unsigned short int WREG9_14 = 14;
    sbit  WREG9_14_bit at WREG9.B14;
    const register unsigned short int WREG9_13 = 13;
    sbit  WREG9_13_bit at WREG9.B13;
    const register unsigned short int WREG9_12 = 12;
    sbit  WREG9_12_bit at WREG9.B12;
    const register unsigned short int WREG9_11 = 11;
    sbit  WREG9_11_bit at WREG9.B11;
    const register unsigned short int WREG9_10 = 10;
    sbit  WREG9_10_bit at WREG9.B10;
    const register unsigned short int WREG9_9 = 9;
    sbit  WREG9_9_bit at WREG9.B9;
    const register unsigned short int WREG9_8 = 8;
    sbit  WREG9_8_bit at WREG9.B8;
    const register unsigned short int WREG9_7 = 7;
    sbit  WREG9_7_bit at WREG9.B7;
    const register unsigned short int WREG9_6 = 6;
    sbit  WREG9_6_bit at WREG9.B6;
    const register unsigned short int WREG9_5 = 5;
    sbit  WREG9_5_bit at WREG9.B5;
    const register unsigned short int WREG9_4 = 4;
    sbit  WREG9_4_bit at WREG9.B4;
    const register unsigned short int WREG9_3 = 3;
    sbit  WREG9_3_bit at WREG9.B3;
    const register unsigned short int WREG9_2 = 2;
    sbit  WREG9_2_bit at WREG9.B2;
    const register unsigned short int WREG9_1 = 1;
    sbit  WREG9_1_bit at WREG9.B1;
    const register unsigned short int WREG9_0 = 0;
    sbit  WREG9_0_bit at WREG9.B0;

    // WREG10 bits
    const register unsigned short int WREG10_15 = 15;
    sbit  WREG10_15_bit at WREG10.B15;
    const register unsigned short int WREG10_14 = 14;
    sbit  WREG10_14_bit at WREG10.B14;
    const register unsigned short int WREG10_13 = 13;
    sbit  WREG10_13_bit at WREG10.B13;
    const register unsigned short int WREG10_12 = 12;
    sbit  WREG10_12_bit at WREG10.B12;
    const register unsigned short int WREG10_11 = 11;
    sbit  WREG10_11_bit at WREG10.B11;
    const register unsigned short int WREG10_10 = 10;
    sbit  WREG10_10_bit at WREG10.B10;
    const register unsigned short int WREG10_9 = 9;
    sbit  WREG10_9_bit at WREG10.B9;
    const register unsigned short int WREG10_8 = 8;
    sbit  WREG10_8_bit at WREG10.B8;
    const register unsigned short int WREG10_7 = 7;
    sbit  WREG10_7_bit at WREG10.B7;
    const register unsigned short int WREG10_6 = 6;
    sbit  WREG10_6_bit at WREG10.B6;
    const register unsigned short int WREG10_5 = 5;
    sbit  WREG10_5_bit at WREG10.B5;
    const register unsigned short int WREG10_4 = 4;
    sbit  WREG10_4_bit at WREG10.B4;
    const register unsigned short int WREG10_3 = 3;
    sbit  WREG10_3_bit at WREG10.B3;
    const register unsigned short int WREG10_2 = 2;
    sbit  WREG10_2_bit at WREG10.B2;
    const register unsigned short int WREG10_1 = 1;
    sbit  WREG10_1_bit at WREG10.B1;
    const register unsigned short int WREG10_0 = 0;
    sbit  WREG10_0_bit at WREG10.B0;

    // WREG11 bits
    const register unsigned short int WREG11_15 = 15;
    sbit  WREG11_15_bit at WREG11.B15;
    const register unsigned short int WREG11_14 = 14;
    sbit  WREG11_14_bit at WREG11.B14;
    const register unsigned short int WREG11_13 = 13;
    sbit  WREG11_13_bit at WREG11.B13;
    const register unsigned short int WREG11_12 = 12;
    sbit  WREG11_12_bit at WREG11.B12;
    const register unsigned short int WREG11_11 = 11;
    sbit  WREG11_11_bit at WREG11.B11;
    const register unsigned short int WREG11_10 = 10;
    sbit  WREG11_10_bit at WREG11.B10;
    const register unsigned short int WREG11_9 = 9;
    sbit  WREG11_9_bit at WREG11.B9;
    const register unsigned short int WREG11_8 = 8;
    sbit  WREG11_8_bit at WREG11.B8;
    const register unsigned short int WREG11_7 = 7;
    sbit  WREG11_7_bit at WREG11.B7;
    const register unsigned short int WREG11_6 = 6;
    sbit  WREG11_6_bit at WREG11.B6;
    const register unsigned short int WREG11_5 = 5;
    sbit  WREG11_5_bit at WREG11.B5;
    const register unsigned short int WREG11_4 = 4;
    sbit  WREG11_4_bit at WREG11.B4;
    const register unsigned short int WREG11_3 = 3;
    sbit  WREG11_3_bit at WREG11.B3;
    const register unsigned short int WREG11_2 = 2;
    sbit  WREG11_2_bit at WREG11.B2;
    const register unsigned short int WREG11_1 = 1;
    sbit  WREG11_1_bit at WREG11.B1;
    const register unsigned short int WREG11_0 = 0;
    sbit  WREG11_0_bit at WREG11.B0;

    // WREG12 bits
    const register unsigned short int WREG12_15 = 15;
    sbit  WREG12_15_bit at WREG12.B15;
    const register unsigned short int WREG12_14 = 14;
    sbit  WREG12_14_bit at WREG12.B14;
    const register unsigned short int WREG12_13 = 13;
    sbit  WREG12_13_bit at WREG12.B13;
    const register unsigned short int WREG12_12 = 12;
    sbit  WREG12_12_bit at WREG12.B12;
    const register unsigned short int WREG12_11 = 11;
    sbit  WREG12_11_bit at WREG12.B11;
    const register unsigned short int WREG12_10 = 10;
    sbit  WREG12_10_bit at WREG12.B10;
    const register unsigned short int WREG12_9 = 9;
    sbit  WREG12_9_bit at WREG12.B9;
    const register unsigned short int WREG12_8 = 8;
    sbit  WREG12_8_bit at WREG12.B8;
    const register unsigned short int WREG12_7 = 7;
    sbit  WREG12_7_bit at WREG12.B7;
    const register unsigned short int WREG12_6 = 6;
    sbit  WREG12_6_bit at WREG12.B6;
    const register unsigned short int WREG12_5 = 5;
    sbit  WREG12_5_bit at WREG12.B5;
    const register unsigned short int WREG12_4 = 4;
    sbit  WREG12_4_bit at WREG12.B4;
    const register unsigned short int WREG12_3 = 3;
    sbit  WREG12_3_bit at WREG12.B3;
    const register unsigned short int WREG12_2 = 2;
    sbit  WREG12_2_bit at WREG12.B2;
    const register unsigned short int WREG12_1 = 1;
    sbit  WREG12_1_bit at WREG12.B1;
    const register unsigned short int WREG12_0 = 0;
    sbit  WREG12_0_bit at WREG12.B0;

    // WREG13 bits
    const register unsigned short int WREG13_15 = 15;
    sbit  WREG13_15_bit at WREG13.B15;
    const register unsigned short int WREG13_14 = 14;
    sbit  WREG13_14_bit at WREG13.B14;
    const register unsigned short int WREG13_13 = 13;
    sbit  WREG13_13_bit at WREG13.B13;
    const register unsigned short int WREG13_12 = 12;
    sbit  WREG13_12_bit at WREG13.B12;
    const register unsigned short int WREG13_11 = 11;
    sbit  WREG13_11_bit at WREG13.B11;
    const register unsigned short int WREG13_10 = 10;
    sbit  WREG13_10_bit at WREG13.B10;
    const register unsigned short int WREG13_9 = 9;
    sbit  WREG13_9_bit at WREG13.B9;
    const register unsigned short int WREG13_8 = 8;
    sbit  WREG13_8_bit at WREG13.B8;
    const register unsigned short int WREG13_7 = 7;
    sbit  WREG13_7_bit at WREG13.B7;
    const register unsigned short int WREG13_6 = 6;
    sbit  WREG13_6_bit at WREG13.B6;
    const register unsigned short int WREG13_5 = 5;
    sbit  WREG13_5_bit at WREG13.B5;
    const register unsigned short int WREG13_4 = 4;
    sbit  WREG13_4_bit at WREG13.B4;
    const register unsigned short int WREG13_3 = 3;
    sbit  WREG13_3_bit at WREG13.B3;
    const register unsigned short int WREG13_2 = 2;
    sbit  WREG13_2_bit at WREG13.B2;
    const register unsigned short int WREG13_1 = 1;
    sbit  WREG13_1_bit at WREG13.B1;
    const register unsigned short int WREG13_0 = 0;
    sbit  WREG13_0_bit at WREG13.B0;

    // WREG14 bits
    const register unsigned short int WREG14_15 = 15;
    sbit  WREG14_15_bit at WREG14.B15;
    const register unsigned short int WREG14_14 = 14;
    sbit  WREG14_14_bit at WREG14.B14;
    const register unsigned short int WREG14_13 = 13;
    sbit  WREG14_13_bit at WREG14.B13;
    const register unsigned short int WREG14_12 = 12;
    sbit  WREG14_12_bit at WREG14.B12;
    const register unsigned short int WREG14_11 = 11;
    sbit  WREG14_11_bit at WREG14.B11;
    const register unsigned short int WREG14_10 = 10;
    sbit  WREG14_10_bit at WREG14.B10;
    const register unsigned short int WREG14_9 = 9;
    sbit  WREG14_9_bit at WREG14.B9;
    const register unsigned short int WREG14_8 = 8;
    sbit  WREG14_8_bit at WREG14.B8;
    const register unsigned short int WREG14_7 = 7;
    sbit  WREG14_7_bit at WREG14.B7;
    const register unsigned short int WREG14_6 = 6;
    sbit  WREG14_6_bit at WREG14.B6;
    const register unsigned short int WREG14_5 = 5;
    sbit  WREG14_5_bit at WREG14.B5;
    const register unsigned short int WREG14_4 = 4;
    sbit  WREG14_4_bit at WREG14.B4;
    const register unsigned short int WREG14_3 = 3;
    sbit  WREG14_3_bit at WREG14.B3;
    const register unsigned short int WREG14_2 = 2;
    sbit  WREG14_2_bit at WREG14.B2;
    const register unsigned short int WREG14_1 = 1;
    sbit  WREG14_1_bit at WREG14.B1;
    const register unsigned short int WREG14_0 = 0;
    sbit  WREG14_0_bit at WREG14.B0;

    // WREG15 bits
    const register unsigned short int WREG15_15 = 15;
    sbit  WREG15_15_bit at WREG15.B15;
    const register unsigned short int WREG15_14 = 14;
    sbit  WREG15_14_bit at WREG15.B14;
    const register unsigned short int WREG15_13 = 13;
    sbit  WREG15_13_bit at WREG15.B13;
    const register unsigned short int WREG15_12 = 12;
    sbit  WREG15_12_bit at WREG15.B12;
    const register unsigned short int WREG15_11 = 11;
    sbit  WREG15_11_bit at WREG15.B11;
    const register unsigned short int WREG15_10 = 10;
    sbit  WREG15_10_bit at WREG15.B10;
    const register unsigned short int WREG15_9 = 9;
    sbit  WREG15_9_bit at WREG15.B9;
    const register unsigned short int WREG15_8 = 8;
    sbit  WREG15_8_bit at WREG15.B8;
    const register unsigned short int WREG15_7 = 7;
    sbit  WREG15_7_bit at WREG15.B7;
    const register unsigned short int WREG15_6 = 6;
    sbit  WREG15_6_bit at WREG15.B6;
    const register unsigned short int WREG15_5 = 5;
    sbit  WREG15_5_bit at WREG15.B5;
    const register unsigned short int WREG15_4 = 4;
    sbit  WREG15_4_bit at WREG15.B4;
    const register unsigned short int WREG15_3 = 3;
    sbit  WREG15_3_bit at WREG15.B3;
    const register unsigned short int WREG15_2 = 2;
    sbit  WREG15_2_bit at WREG15.B2;
    const register unsigned short int WREG15_1 = 1;
    sbit  WREG15_1_bit at WREG15.B1;
    const register unsigned short int WREG15_0 = 0;
    sbit  WREG15_0_bit at WREG15.B0;

    // SPLIM bits
    const register unsigned short int SPLIM_15 = 15;
    sbit  SPLIM_15_bit at SPLIM.B15;
    const register unsigned short int SPLIM_14 = 14;
    sbit  SPLIM_14_bit at SPLIM.B14;
    const register unsigned short int SPLIM_13 = 13;
    sbit  SPLIM_13_bit at SPLIM.B13;
    const register unsigned short int SPLIM_12 = 12;
    sbit  SPLIM_12_bit at SPLIM.B12;
    const register unsigned short int SPLIM_11 = 11;
    sbit  SPLIM_11_bit at SPLIM.B11;
    const register unsigned short int SPLIM_10 = 10;
    sbit  SPLIM_10_bit at SPLIM.B10;
    const register unsigned short int SPLIM_9 = 9;
    sbit  SPLIM_9_bit at SPLIM.B9;
    const register unsigned short int SPLIM_8 = 8;
    sbit  SPLIM_8_bit at SPLIM.B8;
    const register unsigned short int SPLIM_7 = 7;
    sbit  SPLIM_7_bit at SPLIM.B7;
    const register unsigned short int SPLIM_6 = 6;
    sbit  SPLIM_6_bit at SPLIM.B6;
    const register unsigned short int SPLIM_5 = 5;
    sbit  SPLIM_5_bit at SPLIM.B5;
    const register unsigned short int SPLIM_4 = 4;
    sbit  SPLIM_4_bit at SPLIM.B4;
    const register unsigned short int SPLIM_3 = 3;
    sbit  SPLIM_3_bit at SPLIM.B3;
    const register unsigned short int SPLIM_2 = 2;
    sbit  SPLIM_2_bit at SPLIM.B2;
    const register unsigned short int SPLIM_1 = 1;
    sbit  SPLIM_1_bit at SPLIM.B1;
    const register unsigned short int SPLIM_0 = 0;
    sbit  SPLIM_0_bit at SPLIM.B0;

    // ACCAL bits
    const register unsigned short int ACCAL_15 = 15;
    sbit  ACCAL_15_bit at ACCAL.B15;
    const register unsigned short int ACCAL_14 = 14;
    sbit  ACCAL_14_bit at ACCAL.B14;
    const register unsigned short int ACCAL_13 = 13;
    sbit  ACCAL_13_bit at ACCAL.B13;
    const register unsigned short int ACCAL_12 = 12;
    sbit  ACCAL_12_bit at ACCAL.B12;
    const register unsigned short int ACCAL_11 = 11;
    sbit  ACCAL_11_bit at ACCAL.B11;
    const register unsigned short int ACCAL_10 = 10;
    sbit  ACCAL_10_bit at ACCAL.B10;
    const register unsigned short int ACCAL_9 = 9;
    sbit  ACCAL_9_bit at ACCAL.B9;
    const register unsigned short int ACCAL_8 = 8;
    sbit  ACCAL_8_bit at ACCAL.B8;
    const register unsigned short int ACCAL_7 = 7;
    sbit  ACCAL_7_bit at ACCAL.B7;
    const register unsigned short int ACCAL_6 = 6;
    sbit  ACCAL_6_bit at ACCAL.B6;
    const register unsigned short int ACCAL_5 = 5;
    sbit  ACCAL_5_bit at ACCAL.B5;
    const register unsigned short int ACCAL_4 = 4;
    sbit  ACCAL_4_bit at ACCAL.B4;
    const register unsigned short int ACCAL_3 = 3;
    sbit  ACCAL_3_bit at ACCAL.B3;
    const register unsigned short int ACCAL_2 = 2;
    sbit  ACCAL_2_bit at ACCAL.B2;
    const register unsigned short int ACCAL_1 = 1;
    sbit  ACCAL_1_bit at ACCAL.B1;
    const register unsigned short int ACCAL_0 = 0;
    sbit  ACCAL_0_bit at ACCAL.B0;

    // ACCAH bits
    const register unsigned short int ACCAH_15 = 15;
    sbit  ACCAH_15_bit at ACCAH.B15;
    const register unsigned short int ACCAH_14 = 14;
    sbit  ACCAH_14_bit at ACCAH.B14;
    const register unsigned short int ACCAH_13 = 13;
    sbit  ACCAH_13_bit at ACCAH.B13;
    const register unsigned short int ACCAH_12 = 12;
    sbit  ACCAH_12_bit at ACCAH.B12;
    const register unsigned short int ACCAH_11 = 11;
    sbit  ACCAH_11_bit at ACCAH.B11;
    const register unsigned short int ACCAH_10 = 10;
    sbit  ACCAH_10_bit at ACCAH.B10;
    const register unsigned short int ACCAH_9 = 9;
    sbit  ACCAH_9_bit at ACCAH.B9;
    const register unsigned short int ACCAH_8 = 8;
    sbit  ACCAH_8_bit at ACCAH.B8;
    const register unsigned short int ACCAH_7 = 7;
    sbit  ACCAH_7_bit at ACCAH.B7;
    const register unsigned short int ACCAH_6 = 6;
    sbit  ACCAH_6_bit at ACCAH.B6;
    const register unsigned short int ACCAH_5 = 5;
    sbit  ACCAH_5_bit at ACCAH.B5;
    const register unsigned short int ACCAH_4 = 4;
    sbit  ACCAH_4_bit at ACCAH.B4;
    const register unsigned short int ACCAH_3 = 3;
    sbit  ACCAH_3_bit at ACCAH.B3;
    const register unsigned short int ACCAH_2 = 2;
    sbit  ACCAH_2_bit at ACCAH.B2;
    const register unsigned short int ACCAH_1 = 1;
    sbit  ACCAH_1_bit at ACCAH.B1;
    const register unsigned short int ACCAH_0 = 0;
    sbit  ACCAH_0_bit at ACCAH.B0;

    // ACCAU bits
    const register unsigned short int SIGNEXT_7 = 15;
    sbit  SIGNEXT_7_bit at ACCAU.B15;
    const register unsigned short int SIGNEXT_6 = 14;
    sbit  SIGNEXT_6_bit at ACCAU.B14;
    const register unsigned short int SIGNEXT_5 = 13;
    sbit  SIGNEXT_5_bit at ACCAU.B13;
    const register unsigned short int SIGNEXT_4 = 12;
    sbit  SIGNEXT_4_bit at ACCAU.B12;
    const register unsigned short int SIGNEXT_3 = 11;
    sbit  SIGNEXT_3_bit at ACCAU.B11;
    const register unsigned short int SIGNEXT_2 = 10;
    sbit  SIGNEXT_2_bit at ACCAU.B10;
    const register unsigned short int SIGNEXT_1 = 9;
    sbit  SIGNEXT_1_bit at ACCAU.B9;
    const register unsigned short int SIGNEXT_0 = 8;
    sbit  SIGNEXT_0_bit at ACCAU.B8;
    const register unsigned short int ACCAU_7 = 7;
    sbit  ACCAU_7_bit at ACCAU.B7;
    const register unsigned short int ACCAU_6 = 6;
    sbit  ACCAU_6_bit at ACCAU.B6;
    const register unsigned short int ACCAU_5 = 5;
    sbit  ACCAU_5_bit at ACCAU.B5;
    const register unsigned short int ACCAU_4 = 4;
    sbit  ACCAU_4_bit at ACCAU.B4;
    const register unsigned short int ACCAU_3 = 3;
    sbit  ACCAU_3_bit at ACCAU.B3;
    const register unsigned short int ACCAU_2 = 2;
    sbit  ACCAU_2_bit at ACCAU.B2;
    const register unsigned short int ACCAU_1 = 1;
    sbit  ACCAU_1_bit at ACCAU.B1;
    const register unsigned short int ACCAU_0 = 0;
    sbit  ACCAU_0_bit at ACCAU.B0;

    // ACCBL bits
    const register unsigned short int ACCBL_15 = 15;
    sbit  ACCBL_15_bit at ACCBL.B15;
    const register unsigned short int ACCBL_14 = 14;
    sbit  ACCBL_14_bit at ACCBL.B14;
    const register unsigned short int ACCBL_13 = 13;
    sbit  ACCBL_13_bit at ACCBL.B13;
    const register unsigned short int ACCBL_12 = 12;
    sbit  ACCBL_12_bit at ACCBL.B12;
    const register unsigned short int ACCBL_11 = 11;
    sbit  ACCBL_11_bit at ACCBL.B11;
    const register unsigned short int ACCBL_10 = 10;
    sbit  ACCBL_10_bit at ACCBL.B10;
    const register unsigned short int ACCBL_9 = 9;
    sbit  ACCBL_9_bit at ACCBL.B9;
    const register unsigned short int ACCBL_8 = 8;
    sbit  ACCBL_8_bit at ACCBL.B8;
    const register unsigned short int ACCBL_7 = 7;
    sbit  ACCBL_7_bit at ACCBL.B7;
    const register unsigned short int ACCBL_6 = 6;
    sbit  ACCBL_6_bit at ACCBL.B6;
    const register unsigned short int ACCBL_5 = 5;
    sbit  ACCBL_5_bit at ACCBL.B5;
    const register unsigned short int ACCBL_4 = 4;
    sbit  ACCBL_4_bit at ACCBL.B4;
    const register unsigned short int ACCBL_3 = 3;
    sbit  ACCBL_3_bit at ACCBL.B3;
    const register unsigned short int ACCBL_2 = 2;
    sbit  ACCBL_2_bit at ACCBL.B2;
    const register unsigned short int ACCBL_1 = 1;
    sbit  ACCBL_1_bit at ACCBL.B1;
    const register unsigned short int ACCBL_0 = 0;
    sbit  ACCBL_0_bit at ACCBL.B0;

    // ACCBH bits
    const register unsigned short int ACCBH_15 = 15;
    sbit  ACCBH_15_bit at ACCBH.B15;
    const register unsigned short int ACCBH_14 = 14;
    sbit  ACCBH_14_bit at ACCBH.B14;
    const register unsigned short int ACCBH_13 = 13;
    sbit  ACCBH_13_bit at ACCBH.B13;
    const register unsigned short int ACCBH_12 = 12;
    sbit  ACCBH_12_bit at ACCBH.B12;
    const register unsigned short int ACCBH_11 = 11;
    sbit  ACCBH_11_bit at ACCBH.B11;
    const register unsigned short int ACCBH_10 = 10;
    sbit  ACCBH_10_bit at ACCBH.B10;
    const register unsigned short int ACCBH_9 = 9;
    sbit  ACCBH_9_bit at ACCBH.B9;
    const register unsigned short int ACCBH_8 = 8;
    sbit  ACCBH_8_bit at ACCBH.B8;
    const register unsigned short int ACCBH_7 = 7;
    sbit  ACCBH_7_bit at ACCBH.B7;
    const register unsigned short int ACCBH_6 = 6;
    sbit  ACCBH_6_bit at ACCBH.B6;
    const register unsigned short int ACCBH_5 = 5;
    sbit  ACCBH_5_bit at ACCBH.B5;
    const register unsigned short int ACCBH_4 = 4;
    sbit  ACCBH_4_bit at ACCBH.B4;
    const register unsigned short int ACCBH_3 = 3;
    sbit  ACCBH_3_bit at ACCBH.B3;
    const register unsigned short int ACCBH_2 = 2;
    sbit  ACCBH_2_bit at ACCBH.B2;
    const register unsigned short int ACCBH_1 = 1;
    sbit  ACCBH_1_bit at ACCBH.B1;
    const register unsigned short int ACCBH_0 = 0;
    sbit  ACCBH_0_bit at ACCBH.B0;

    // ACCBU bits
    const register unsigned short int SIGNEXT_23 = 15;
    sbit  SIGNEXT_23_bit at ACCBU.B15;
    const register unsigned short int SIGNEXT_22 = 14;
    sbit  SIGNEXT_22_bit at ACCBU.B14;
    const register unsigned short int SIGNEXT_21 = 13;
    sbit  SIGNEXT_21_bit at ACCBU.B13;
    const register unsigned short int SIGNEXT_20 = 12;
    sbit  SIGNEXT_20_bit at ACCBU.B12;
    const register unsigned short int SIGNEXT_19 = 11;
    sbit  SIGNEXT_19_bit at ACCBU.B11;
    const register unsigned short int SIGNEXT_18 = 10;
    sbit  SIGNEXT_18_bit at ACCBU.B10;
    const register unsigned short int SIGNEXT_17 = 9;
    sbit  SIGNEXT_17_bit at ACCBU.B9;
    const register unsigned short int SIGNEXT_16 = 8;
    sbit  SIGNEXT_16_bit at ACCBU.B8;
    const register unsigned short int ACCBU_23 = 7;
    sbit  ACCBU_23_bit at ACCBU.B7;
    const register unsigned short int ACCBU_22 = 6;
    sbit  ACCBU_22_bit at ACCBU.B6;
    const register unsigned short int ACCBU_21 = 5;
    sbit  ACCBU_21_bit at ACCBU.B5;
    const register unsigned short int ACCBU_20 = 4;
    sbit  ACCBU_20_bit at ACCBU.B4;
    const register unsigned short int ACCBU_19 = 3;
    sbit  ACCBU_19_bit at ACCBU.B3;
    const register unsigned short int ACCBU_18 = 2;
    sbit  ACCBU_18_bit at ACCBU.B2;
    const register unsigned short int ACCBU_17 = 1;
    sbit  ACCBU_17_bit at ACCBU.B1;
    const register unsigned short int ACCBU_16 = 0;
    sbit  ACCBU_16_bit at ACCBU.B0;

    // PCL bits
    const register unsigned short int PCL_15 = 15;
    sbit  PCL_15_bit at PCL.B15;
    const register unsigned short int PCL_14 = 14;
    sbit  PCL_14_bit at PCL.B14;
    const register unsigned short int PCL_13 = 13;
    sbit  PCL_13_bit at PCL.B13;
    const register unsigned short int PCL_12 = 12;
    sbit  PCL_12_bit at PCL.B12;
    const register unsigned short int PCL_11 = 11;
    sbit  PCL_11_bit at PCL.B11;
    const register unsigned short int PCL_10 = 10;
    sbit  PCL_10_bit at PCL.B10;
    const register unsigned short int PCL_9 = 9;
    sbit  PCL_9_bit at PCL.B9;
    const register unsigned short int PCL_8 = 8;
    sbit  PCL_8_bit at PCL.B8;
    const register unsigned short int PCL_7 = 7;
    sbit  PCL_7_bit at PCL.B7;
    const register unsigned short int PCL_6 = 6;
    sbit  PCL_6_bit at PCL.B6;
    const register unsigned short int PCL_5 = 5;
    sbit  PCL_5_bit at PCL.B5;
    const register unsigned short int PCL_4 = 4;
    sbit  PCL_4_bit at PCL.B4;
    const register unsigned short int PCL_3 = 3;
    sbit  PCL_3_bit at PCL.B3;
    const register unsigned short int PCL_2 = 2;
    sbit  PCL_2_bit at PCL.B2;
    const register unsigned short int PCL_1 = 1;
    sbit  PCL_1_bit at PCL.B1;
    const register unsigned short int PCL_0 = 0;
    sbit  PCL_0_bit at PCL.B0;

    // PCH bits
    const register unsigned short int PCH_6 = 6;
    sbit  PCH_6_bit at PCH.B6;
    const register unsigned short int PCH_5 = 5;
    sbit  PCH_5_bit at PCH.B5;
    const register unsigned short int PCH_4 = 4;
    sbit  PCH_4_bit at PCH.B4;
    const register unsigned short int PCH_3 = 3;
    sbit  PCH_3_bit at PCH.B3;
    const register unsigned short int PCH_2 = 2;
    sbit  PCH_2_bit at PCH.B2;
    const register unsigned short int PCH_1 = 1;
    sbit  PCH_1_bit at PCH.B1;
    const register unsigned short int PCH_0 = 0;
    sbit  PCH_0_bit at PCH.B0;

    // TBLPAG bits
    const register unsigned short int TBLPAG_7 = 7;
    sbit  TBLPAG_7_bit at TBLPAG.B7;
    const register unsigned short int TBLPAG_6 = 6;
    sbit  TBLPAG_6_bit at TBLPAG.B6;
    const register unsigned short int TBLPAG_5 = 5;
    sbit  TBLPAG_5_bit at TBLPAG.B5;
    const register unsigned short int TBLPAG_4 = 4;
    sbit  TBLPAG_4_bit at TBLPAG.B4;
    const register unsigned short int TBLPAG_3 = 3;
    sbit  TBLPAG_3_bit at TBLPAG.B3;
    const register unsigned short int TBLPAG_2 = 2;
    sbit  TBLPAG_2_bit at TBLPAG.B2;
    const register unsigned short int TBLPAG_1 = 1;
    sbit  TBLPAG_1_bit at TBLPAG.B1;
    const register unsigned short int TBLPAG_0 = 0;
    sbit  TBLPAG_0_bit at TBLPAG.B0;

    // PSVPAG bits
    const register unsigned short int PSVPAG_7 = 7;
    sbit  PSVPAG_7_bit at PSVPAG.B7;
    const register unsigned short int PSVPAG_6 = 6;
    sbit  PSVPAG_6_bit at PSVPAG.B6;
    const register unsigned short int PSVPAG_5 = 5;
    sbit  PSVPAG_5_bit at PSVPAG.B5;
    const register unsigned short int PSVPAG_4 = 4;
    sbit  PSVPAG_4_bit at PSVPAG.B4;
    const register unsigned short int PSVPAG_3 = 3;
    sbit  PSVPAG_3_bit at PSVPAG.B3;
    const register unsigned short int PSVPAG_2 = 2;
    sbit  PSVPAG_2_bit at PSVPAG.B2;
    const register unsigned short int PSVPAG_1 = 1;
    sbit  PSVPAG_1_bit at PSVPAG.B1;
    const register unsigned short int PSVPAG_0 = 0;
    sbit  PSVPAG_0_bit at PSVPAG.B0;

    // RCOUNT bits
    const register unsigned short int RCOUNT_13 = 13;
    sbit  RCOUNT_13_bit at RCOUNT.B13;
    const register unsigned short int RCOUNT_12 = 12;
    sbit  RCOUNT_12_bit at RCOUNT.B12;
    const register unsigned short int RCOUNT_11 = 11;
    sbit  RCOUNT_11_bit at RCOUNT.B11;
    const register unsigned short int RCOUNT_10 = 10;
    sbit  RCOUNT_10_bit at RCOUNT.B10;
    const register unsigned short int RCOUNT_9 = 9;
    sbit  RCOUNT_9_bit at RCOUNT.B9;
    const register unsigned short int RCOUNT_8 = 8;
    sbit  RCOUNT_8_bit at RCOUNT.B8;
    const register unsigned short int RCOUNT_7 = 7;
    sbit  RCOUNT_7_bit at RCOUNT.B7;
    const register unsigned short int RCOUNT_6 = 6;
    sbit  RCOUNT_6_bit at RCOUNT.B6;
    const register unsigned short int RCOUNT_5 = 5;
    sbit  RCOUNT_5_bit at RCOUNT.B5;
    const register unsigned short int RCOUNT_4 = 4;
    sbit  RCOUNT_4_bit at RCOUNT.B4;
    const register unsigned short int RCOUNT_3 = 3;
    sbit  RCOUNT_3_bit at RCOUNT.B3;
    const register unsigned short int RCOUNT_2 = 2;
    sbit  RCOUNT_2_bit at RCOUNT.B2;
    const register unsigned short int RCOUNT_1 = 1;
    sbit  RCOUNT_1_bit at RCOUNT.B1;
    const register unsigned short int RCOUNT_0 = 0;
    sbit  RCOUNT_0_bit at RCOUNT.B0;

    // DCOUNT bits
    const register unsigned short int DCOUNT_13 = 13;
    sbit  DCOUNT_13_bit at DCOUNT.B13;
    const register unsigned short int DCOUNT_12 = 12;
    sbit  DCOUNT_12_bit at DCOUNT.B12;
    const register unsigned short int DCOUNT_11 = 11;
    sbit  DCOUNT_11_bit at DCOUNT.B11;
    const register unsigned short int DCOUNT_10 = 10;
    sbit  DCOUNT_10_bit at DCOUNT.B10;
    const register unsigned short int DCOUNT_9 = 9;
    sbit  DCOUNT_9_bit at DCOUNT.B9;
    const register unsigned short int DCOUNT_8 = 8;
    sbit  DCOUNT_8_bit at DCOUNT.B8;
    const register unsigned short int DCOUNT_7 = 7;
    sbit  DCOUNT_7_bit at DCOUNT.B7;
    const register unsigned short int DCOUNT_6 = 6;
    sbit  DCOUNT_6_bit at DCOUNT.B6;
    const register unsigned short int DCOUNT_5 = 5;
    sbit  DCOUNT_5_bit at DCOUNT.B5;
    const register unsigned short int DCOUNT_4 = 4;
    sbit  DCOUNT_4_bit at DCOUNT.B4;
    const register unsigned short int DCOUNT_3 = 3;
    sbit  DCOUNT_3_bit at DCOUNT.B3;
    const register unsigned short int DCOUNT_2 = 2;
    sbit  DCOUNT_2_bit at DCOUNT.B2;
    const register unsigned short int DCOUNT_1 = 1;
    sbit  DCOUNT_1_bit at DCOUNT.B1;
    const register unsigned short int DCOUNT_0 = 0;
    sbit  DCOUNT_0_bit at DCOUNT.B0;

    // DOSTARTL bits
    const register unsigned short int DOSTARTL_15 = 15;
    sbit  DOSTARTL_15_bit at DOSTARTL.B15;
    const register unsigned short int DOSTARTL_14 = 14;
    sbit  DOSTARTL_14_bit at DOSTARTL.B14;
    const register unsigned short int DOSTARTL_13 = 13;
    sbit  DOSTARTL_13_bit at DOSTARTL.B13;
    const register unsigned short int DOSTARTL_12 = 12;
    sbit  DOSTARTL_12_bit at DOSTARTL.B12;
    const register unsigned short int DOSTARTL_11 = 11;
    sbit  DOSTARTL_11_bit at DOSTARTL.B11;
    const register unsigned short int DOSTARTL_10 = 10;
    sbit  DOSTARTL_10_bit at DOSTARTL.B10;
    const register unsigned short int DOSTARTL_9 = 9;
    sbit  DOSTARTL_9_bit at DOSTARTL.B9;
    const register unsigned short int DOSTARTL_8 = 8;
    sbit  DOSTARTL_8_bit at DOSTARTL.B8;
    const register unsigned short int DOSTARTL_7 = 7;
    sbit  DOSTARTL_7_bit at DOSTARTL.B7;
    const register unsigned short int DOSTARTL_6 = 6;
    sbit  DOSTARTL_6_bit at DOSTARTL.B6;
    const register unsigned short int DOSTARTL_5 = 5;
    sbit  DOSTARTL_5_bit at DOSTARTL.B5;
    const register unsigned short int DOSTARTL_4 = 4;
    sbit  DOSTARTL_4_bit at DOSTARTL.B4;
    const register unsigned short int DOSTARTL_3 = 3;
    sbit  DOSTARTL_3_bit at DOSTARTL.B3;
    const register unsigned short int DOSTARTL_2 = 2;
    sbit  DOSTARTL_2_bit at DOSTARTL.B2;
    const register unsigned short int DOSTARTL_1 = 1;
    sbit  DOSTARTL_1_bit at DOSTARTL.B1;
    const register unsigned short int DOSTARTL_0 = 0;
    sbit  DOSTARTL_0_bit at DOSTARTL.B0;

    // DOSTARTH bits
    const register unsigned short int DOSTARTH_6 = 6;
    sbit  DOSTARTH_6_bit at DOSTARTH.B6;
    const register unsigned short int DOSTARTH_5 = 5;
    sbit  DOSTARTH_5_bit at DOSTARTH.B5;
    const register unsigned short int DOSTARTH_4 = 4;
    sbit  DOSTARTH_4_bit at DOSTARTH.B4;
    const register unsigned short int DOSTARTH_3 = 3;
    sbit  DOSTARTH_3_bit at DOSTARTH.B3;
    const register unsigned short int DOSTARTH_2 = 2;
    sbit  DOSTARTH_2_bit at DOSTARTH.B2;
    const register unsigned short int DOSTARTH_1 = 1;
    sbit  DOSTARTH_1_bit at DOSTARTH.B1;
    const register unsigned short int DOSTARTH_0 = 0;
    sbit  DOSTARTH_0_bit at DOSTARTH.B0;

    // DOENDL bits
    const register unsigned short int DOENDL_15 = 15;
    sbit  DOENDL_15_bit at DOENDL.B15;
    const register unsigned short int DOENDL_14 = 14;
    sbit  DOENDL_14_bit at DOENDL.B14;
    const register unsigned short int DOENDL_13 = 13;
    sbit  DOENDL_13_bit at DOENDL.B13;
    const register unsigned short int DOENDL_12 = 12;
    sbit  DOENDL_12_bit at DOENDL.B12;
    const register unsigned short int DOENDL_11 = 11;
    sbit  DOENDL_11_bit at DOENDL.B11;
    const register unsigned short int DOENDL_10 = 10;
    sbit  DOENDL_10_bit at DOENDL.B10;
    const register unsigned short int DOENDL_9 = 9;
    sbit  DOENDL_9_bit at DOENDL.B9;
    const register unsigned short int DOENDL_8 = 8;
    sbit  DOENDL_8_bit at DOENDL.B8;
    const register unsigned short int DOENDL_7 = 7;
    sbit  DOENDL_7_bit at DOENDL.B7;
    const register unsigned short int DOENDL_6 = 6;
    sbit  DOENDL_6_bit at DOENDL.B6;
    const register unsigned short int DOENDL_5 = 5;
    sbit  DOENDL_5_bit at DOENDL.B5;
    const register unsigned short int DOENDL_4 = 4;
    sbit  DOENDL_4_bit at DOENDL.B4;
    const register unsigned short int DOENDL_3 = 3;
    sbit  DOENDL_3_bit at DOENDL.B3;
    const register unsigned short int DOENDL_2 = 2;
    sbit  DOENDL_2_bit at DOENDL.B2;
    const register unsigned short int DOENDL_1 = 1;
    sbit  DOENDL_1_bit at DOENDL.B1;
    const register unsigned short int DOENDL_0 = 0;
    sbit  DOENDL_0_bit at DOENDL.B0;

    // DOENDH bits
    const register unsigned short int DOENDH_6 = 6;
    sbit  DOENDH_6_bit at DOENDH.B6;
    const register unsigned short int DOENDH_5 = 5;
    sbit  DOENDH_5_bit at DOENDH.B5;
    const register unsigned short int DOENDH_4 = 4;
    sbit  DOENDH_4_bit at DOENDH.B4;
    const register unsigned short int DOENDH_3 = 3;
    sbit  DOENDH_3_bit at DOENDH.B3;
    const register unsigned short int DOENDH_2 = 2;
    sbit  DOENDH_2_bit at DOENDH.B2;
    const register unsigned short int DOENDH_1 = 1;
    sbit  DOENDH_1_bit at DOENDH.B1;
    const register unsigned short int DOENDH_0 = 0;
    sbit  DOENDH_0_bit at DOENDH.B0;

    // SR bits
    const register unsigned short int OA = 15;
    sbit  OA_bit at SR.B15;
    const register unsigned short int OB = 14;
    sbit  OB_bit at SR.B14;
    const register unsigned short int SA = 13;
    sbit  SA_bit at SR.B13;
    const register unsigned short int SB = 12;
    sbit  SB_bit at SR.B12;
    const register unsigned short int OAB = 11;
    sbit  OAB_bit at SR.B11;
    const register unsigned short int SAB = 10;
    sbit  SAB_bit at SR.B10;
    const register unsigned short int DA = 9;
    sbit  DA_bit at SR.B9;
    const register unsigned short int DC = 8;
    sbit  DC_bit at SR.B8;
    const register unsigned short int IPL_2 = 7;
    sbit  IPL_2_bit at SR.B7;
    const register unsigned short int IPL_1 = 6;
    sbit  IPL_1_bit at SR.B6;
    const register unsigned short int IPL_0 = 5;
    sbit  IPL_0_bit at SR.B5;
    const register unsigned short int RA = 4;
    sbit  RA_bit at SR.B4;
    const register unsigned short int N = 3;
    sbit  N_bit at SR.B3;
    const register unsigned short int OV = 2;
    sbit  OV_bit at SR.B2;
    const register unsigned short int Z = 1;
    sbit  Z_bit at SR.B1;
    const register unsigned short int C = 0;
    sbit  C_bit at SR.B0;

    // CORCON bits
    const register unsigned short int US = 12;
    sbit  US_bit at CORCON.B12;
    const register unsigned short int EDT = 11;
    sbit  EDT_bit at CORCON.B11;
    const register unsigned short int DL_2 = 10;
    sbit  DL_2_bit at CORCON.B10;
    const register unsigned short int DL_1 = 9;
    sbit  DL_1_bit at CORCON.B9;
    const register unsigned short int DL_0 = 8;
    sbit  DL_0_bit at CORCON.B8;
    const register unsigned short int SATA = 7;
    sbit  SATA_bit at CORCON.B7;
    const register unsigned short int SATB = 6;
    sbit  SATB_bit at CORCON.B6;
    const register unsigned short int SATDW = 5;
    sbit  SATDW_bit at CORCON.B5;
    const register unsigned short int ACCSAT = 4;
    sbit  ACCSAT_bit at CORCON.B4;
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;
    const register unsigned short int PSV = 2;
    sbit  PSV_bit at CORCON.B2;
    const register unsigned short int RND_ = 1;
    sbit  RND_bit at CORCON.B1;
    const register unsigned short int IF_ = 0;
    sbit  IF_bit at CORCON.B0;

    // MODCON bits
    const register unsigned short int XMODEN = 15;
    sbit  XMODEN_bit at MODCON.B15;
    const register unsigned short int YMODEN = 14;
    sbit  YMODEN_bit at MODCON.B14;
    const register unsigned short int BWM_3 = 11;
    sbit  BWM_3_bit at MODCON.B11;
    const register unsigned short int BWM_2 = 10;
    sbit  BWM_2_bit at MODCON.B10;
    const register unsigned short int BWM_1 = 9;
    sbit  BWM_1_bit at MODCON.B9;
    const register unsigned short int BWM_0 = 8;
    sbit  BWM_0_bit at MODCON.B8;
    const register unsigned short int YWM_3 = 7;
    sbit  YWM_3_bit at MODCON.B7;
    const register unsigned short int YWM_2 = 6;
    sbit  YWM_2_bit at MODCON.B6;
    const register unsigned short int YWM_1 = 5;
    sbit  YWM_1_bit at MODCON.B5;
    const register unsigned short int YWM_0 = 4;
    sbit  YWM_0_bit at MODCON.B4;
    const register unsigned short int XWM_3 = 3;
    sbit  XWM_3_bit at MODCON.B3;
    const register unsigned short int XWM_2 = 2;
    sbit  XWM_2_bit at MODCON.B2;
    const register unsigned short int XWM_1 = 1;
    sbit  XWM_1_bit at MODCON.B1;
    const register unsigned short int XWM_0 = 0;
    sbit  XWM_0_bit at MODCON.B0;

    // XMODSRT bits
    const register unsigned short int XS_15 = 15;
    sbit  XS_15_bit at XMODSRT.B15;
    const register unsigned short int XS_14 = 14;
    sbit  XS_14_bit at XMODSRT.B14;
    const register unsigned short int XS_13 = 13;
    sbit  XS_13_bit at XMODSRT.B13;
    const register unsigned short int XS_12 = 12;
    sbit  XS_12_bit at XMODSRT.B12;
    const register unsigned short int XS_11 = 11;
    sbit  XS_11_bit at XMODSRT.B11;
    const register unsigned short int XS_10 = 10;
    sbit  XS_10_bit at XMODSRT.B10;
    const register unsigned short int XS_9 = 9;
    sbit  XS_9_bit at XMODSRT.B9;
    const register unsigned short int XS_8 = 8;
    sbit  XS_8_bit at XMODSRT.B8;
    const register unsigned short int XS_7 = 7;
    sbit  XS_7_bit at XMODSRT.B7;
    const register unsigned short int XS_6 = 6;
    sbit  XS_6_bit at XMODSRT.B6;
    const register unsigned short int XS_5 = 5;
    sbit  XS_5_bit at XMODSRT.B5;
    const register unsigned short int XS_4 = 4;
    sbit  XS_4_bit at XMODSRT.B4;
    const register unsigned short int XS_3 = 3;
    sbit  XS_3_bit at XMODSRT.B3;
    const register unsigned short int XS_2 = 2;
    sbit  XS_2_bit at XMODSRT.B2;
    const register unsigned short int XS_1 = 1;
    sbit  XS_1_bit at XMODSRT.B1;
    const register unsigned short int XS_0 = 0;
    sbit  XS_0_bit at XMODSRT.B0;

    // XMODEND bits
    const register unsigned short int XE_15 = 15;
    sbit  XE_15_bit at XMODEND.B15;
    const register unsigned short int XE_14 = 14;
    sbit  XE_14_bit at XMODEND.B14;
    const register unsigned short int XE_13 = 13;
    sbit  XE_13_bit at XMODEND.B13;
    const register unsigned short int XE_12 = 12;
    sbit  XE_12_bit at XMODEND.B12;
    const register unsigned short int XE_11 = 11;
    sbit  XE_11_bit at XMODEND.B11;
    const register unsigned short int XE_10 = 10;
    sbit  XE_10_bit at XMODEND.B10;
    const register unsigned short int XE_9 = 9;
    sbit  XE_9_bit at XMODEND.B9;
    const register unsigned short int XE_8 = 8;
    sbit  XE_8_bit at XMODEND.B8;
    const register unsigned short int XE_7 = 7;
    sbit  XE_7_bit at XMODEND.B7;
    const register unsigned short int XE_6 = 6;
    sbit  XE_6_bit at XMODEND.B6;
    const register unsigned short int XE_5 = 5;
    sbit  XE_5_bit at XMODEND.B5;
    const register unsigned short int XE_4 = 4;
    sbit  XE_4_bit at XMODEND.B4;
    const register unsigned short int XE_3 = 3;
    sbit  XE_3_bit at XMODEND.B3;
    const register unsigned short int XE_2 = 2;
    sbit  XE_2_bit at XMODEND.B2;
    const register unsigned short int XE_1 = 1;
    sbit  XE_1_bit at XMODEND.B1;
    const register unsigned short int XE_0 = 0;
    sbit  XE_0_bit at XMODEND.B0;

    // YMODSRT bits
    const register unsigned short int YS_15 = 15;
    sbit  YS_15_bit at YMODSRT.B15;
    const register unsigned short int YS_14 = 14;
    sbit  YS_14_bit at YMODSRT.B14;
    const register unsigned short int YS_13 = 13;
    sbit  YS_13_bit at YMODSRT.B13;
    const register unsigned short int YS_12 = 12;
    sbit  YS_12_bit at YMODSRT.B12;
    const register unsigned short int YS_11 = 11;
    sbit  YS_11_bit at YMODSRT.B11;
    const register unsigned short int YS_10 = 10;
    sbit  YS_10_bit at YMODSRT.B10;
    const register unsigned short int YS_9 = 9;
    sbit  YS_9_bit at YMODSRT.B9;
    const register unsigned short int YS_8 = 8;
    sbit  YS_8_bit at YMODSRT.B8;
    const register unsigned short int YS_7 = 7;
    sbit  YS_7_bit at YMODSRT.B7;
    const register unsigned short int YS_6 = 6;
    sbit  YS_6_bit at YMODSRT.B6;
    const register unsigned short int YS_5 = 5;
    sbit  YS_5_bit at YMODSRT.B5;
    const register unsigned short int YS_4 = 4;
    sbit  YS_4_bit at YMODSRT.B4;
    const register unsigned short int YS_3 = 3;
    sbit  YS_3_bit at YMODSRT.B3;
    const register unsigned short int YS_2 = 2;
    sbit  YS_2_bit at YMODSRT.B2;
    const register unsigned short int YS_1 = 1;
    sbit  YS_1_bit at YMODSRT.B1;
    const register unsigned short int YS_0 = 0;
    sbit  YS_0_bit at YMODSRT.B0;

    // YMODEND bits
    const register unsigned short int YE_15 = 15;
    sbit  YE_15_bit at YMODEND.B15;
    const register unsigned short int YE_14 = 14;
    sbit  YE_14_bit at YMODEND.B14;
    const register unsigned short int YE_13 = 13;
    sbit  YE_13_bit at YMODEND.B13;
    const register unsigned short int YE_12 = 12;
    sbit  YE_12_bit at YMODEND.B12;
    const register unsigned short int YE_11 = 11;
    sbit  YE_11_bit at YMODEND.B11;
    const register unsigned short int YE_10 = 10;
    sbit  YE_10_bit at YMODEND.B10;
    const register unsigned short int YE_9 = 9;
    sbit  YE_9_bit at YMODEND.B9;
    const register unsigned short int YE_8 = 8;
    sbit  YE_8_bit at YMODEND.B8;
    const register unsigned short int YE_7 = 7;
    sbit  YE_7_bit at YMODEND.B7;
    const register unsigned short int YE_6 = 6;
    sbit  YE_6_bit at YMODEND.B6;
    const register unsigned short int YE_5 = 5;
    sbit  YE_5_bit at YMODEND.B5;
    const register unsigned short int YE_4 = 4;
    sbit  YE_4_bit at YMODEND.B4;
    const register unsigned short int YE_3 = 3;
    sbit  YE_3_bit at YMODEND.B3;
    const register unsigned short int YE_2 = 2;
    sbit  YE_2_bit at YMODEND.B2;
    const register unsigned short int YE_1 = 1;
    sbit  YE_1_bit at YMODEND.B1;
    const register unsigned short int YE_0 = 0;
    sbit  YE_0_bit at YMODEND.B0;

    // XBREV bits
    const register unsigned short int BREN = 15;
    sbit  BREN_bit at XBREV.B15;
    const register unsigned short int XB_14 = 14;
    sbit  XB_14_bit at XBREV.B14;
    const register unsigned short int XB_13 = 13;
    sbit  XB_13_bit at XBREV.B13;
    const register unsigned short int XB_12 = 12;
    sbit  XB_12_bit at XBREV.B12;
    const register unsigned short int XB_11 = 11;
    sbit  XB_11_bit at XBREV.B11;
    const register unsigned short int XB_10 = 10;
    sbit  XB_10_bit at XBREV.B10;
    const register unsigned short int XB_9 = 9;
    sbit  XB_9_bit at XBREV.B9;
    const register unsigned short int XB_8 = 8;
    sbit  XB_8_bit at XBREV.B8;
    const register unsigned short int XB_7 = 7;
    sbit  XB_7_bit at XBREV.B7;
    const register unsigned short int XB_6 = 6;
    sbit  XB_6_bit at XBREV.B6;
    const register unsigned short int XB_5 = 5;
    sbit  XB_5_bit at XBREV.B5;
    const register unsigned short int XB_4 = 4;
    sbit  XB_4_bit at XBREV.B4;
    const register unsigned short int XB_3 = 3;
    sbit  XB_3_bit at XBREV.B3;
    const register unsigned short int XB_2 = 2;
    sbit  XB_2_bit at XBREV.B2;
    const register unsigned short int XB_1 = 1;
    sbit  XB_1_bit at XBREV.B1;
    const register unsigned short int XB_0 = 0;
    sbit  XB_0_bit at XBREV.B0;

    // DISICNT bits
    const register unsigned short int DISICNT_13 = 13;
    sbit  DISICNT_13_bit at DISICNT.B13;
    const register unsigned short int DISICNT_12 = 12;
    sbit  DISICNT_12_bit at DISICNT.B12;
    const register unsigned short int DISICNT_11 = 11;
    sbit  DISICNT_11_bit at DISICNT.B11;
    const register unsigned short int DISICNT_10 = 10;
    sbit  DISICNT_10_bit at DISICNT.B10;
    const register unsigned short int DISICNT_9 = 9;
    sbit  DISICNT_9_bit at DISICNT.B9;
    const register unsigned short int DISICNT_8 = 8;
    sbit  DISICNT_8_bit at DISICNT.B8;
    const register unsigned short int DISICNT_7 = 7;
    sbit  DISICNT_7_bit at DISICNT.B7;
    const register unsigned short int DISICNT_6 = 6;
    sbit  DISICNT_6_bit at DISICNT.B6;
    const register unsigned short int DISICNT_5 = 5;
    sbit  DISICNT_5_bit at DISICNT.B5;
    const register unsigned short int DISICNT_4 = 4;
    sbit  DISICNT_4_bit at DISICNT.B4;
    const register unsigned short int DISICNT_3 = 3;
    sbit  DISICNT_3_bit at DISICNT.B3;
    const register unsigned short int DISICNT_2 = 2;
    sbit  DISICNT_2_bit at DISICNT.B2;
    const register unsigned short int DISICNT_1 = 1;
    sbit  DISICNT_1_bit at DISICNT.B1;
    const register unsigned short int DISICNT_0 = 0;
    sbit  DISICNT_0_bit at DISICNT.B0;

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
    const register unsigned short int OVATE = 10;
    sbit  OVATE_bit at INTCON1.B10;
    const register unsigned short int OVBTE = 9;
    sbit  OVBTE_bit at INTCON1.B9;
    const register unsigned short int COVTE = 8;
    sbit  COVTE_bit at INTCON1.B8;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;

    // INTCON2 bits
    const register unsigned short int ALTIVT = 15;
    sbit  ALTIVT_bit at INTCON2.B15;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int INT4EP = 4;
    sbit  INT4EP_bit at INTCON2.B4;
    const register unsigned short int INT3EP = 3;
    sbit  INT3EP_bit at INTCON2.B3;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;

    // IFS0 bits
    const register unsigned short int CNIF = 15;
    sbit  CNIF_bit at IFS0.B15;
    const register unsigned short int MI2CIF = 14;
    sbit  MI2CIF_bit at IFS0.B14;
    const register unsigned short int SI2CIF = 13;
    sbit  SI2CIF_bit at IFS0.B13;
    const register unsigned short int NVMIF = 12;
    sbit  NVMIF_bit at IFS0.B12;
    const register unsigned short int ADIF = 11;
    sbit  ADIF_bit at IFS0.B11;
    const register unsigned short int U1TXIF = 10;
    sbit  U1TXIF_bit at IFS0.B10;
    const register unsigned short int U1RXIF = 9;
    sbit  U1RXIF_bit at IFS0.B9;
    const register unsigned short int SPI1IF = 8;
    sbit  SPI1IF_bit at IFS0.B8;
    const register unsigned short int T3IF = 7;
    sbit  T3IF_bit at IFS0.B7;
    const register unsigned short int T2IF = 6;
    sbit  T2IF_bit at IFS0.B6;
    const register unsigned short int OC2IF = 5;
    sbit  OC2IF_bit at IFS0.B5;
    const register unsigned short int IC2IF = 4;
    sbit  IC2IF_bit at IFS0.B4;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int IC6IF = 15;
    sbit  IC6IF_bit at IFS1.B15;
    const register unsigned short int IC5IF = 14;
    sbit  IC5IF_bit at IFS1.B14;
    const register unsigned short int IC4IF = 13;
    sbit  IC4IF_bit at IFS1.B13;
    const register unsigned short int IC3IF = 12;
    sbit  IC3IF_bit at IFS1.B12;
    const register unsigned short int C1IF = 11;
    sbit  C1IF_bit at IFS1.B11;
    const register unsigned short int SPI2IF = 10;
    sbit  SPI2IF_bit at IFS1.B10;
    const register unsigned short int U2TXIF = 9;
    sbit  U2TXIF_bit at IFS1.B9;
    const register unsigned short int U2RXIF = 8;
    sbit  U2RXIF_bit at IFS1.B8;
    const register unsigned short int INT2IF = 7;
    sbit  INT2IF_bit at IFS1.B7;
    const register unsigned short int T5IF = 6;
    sbit  T5IF_bit at IFS1.B6;
    const register unsigned short int T4IF = 5;
    sbit  T4IF_bit at IFS1.B5;
    const register unsigned short int OC4IF = 4;
    sbit  OC4IF_bit at IFS1.B4;
    const register unsigned short int OC3IF = 3;
    sbit  OC3IF_bit at IFS1.B3;
    const register unsigned short int IC8IF = 2;
    sbit  IC8IF_bit at IFS1.B2;
    const register unsigned short int IC7IF = 1;
    sbit  IC7IF_bit at IFS1.B1;
    const register unsigned short int INT1IF = 0;
    sbit  INT1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int LVDIF = 10;
    sbit  LVDIF_bit at IFS2.B10;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at IFS2.B6;
    const register unsigned short int INT4IF = 5;
    sbit  INT4IF_bit at IFS2.B5;
    const register unsigned short int INT3IF = 4;
    sbit  INT3IF_bit at IFS2.B4;
    const register unsigned short int OC8IF = 3;
    sbit  OC8IF_bit at IFS2.B3;
    const register unsigned short int OC7IF = 2;
    sbit  OC7IF_bit at IFS2.B2;
    const register unsigned short int OC6IF = 1;
    sbit  OC6IF_bit at IFS2.B1;
    const register unsigned short int OC5IF = 0;
    sbit  OC5IF_bit at IFS2.B0;

    // IEC0 bits
    const register unsigned short int CNIE = 15;
    sbit  CNIE_bit at IEC0.B15;
    const register unsigned short int MI2CIE = 14;
    sbit  MI2CIE_bit at IEC0.B14;
    const register unsigned short int SI2CIE = 13;
    sbit  SI2CIE_bit at IEC0.B13;
    const register unsigned short int NVMIE = 12;
    sbit  NVMIE_bit at IEC0.B12;
    const register unsigned short int ADIE = 11;
    sbit  ADIE_bit at IEC0.B11;
    const register unsigned short int U1TXIE = 10;
    sbit  U1TXIE_bit at IEC0.B10;
    const register unsigned short int U1RXIE = 9;
    sbit  U1RXIE_bit at IEC0.B9;
    const register unsigned short int SPI1IE = 8;
    sbit  SPI1IE_bit at IEC0.B8;
    const register unsigned short int T3IE = 7;
    sbit  T3IE_bit at IEC0.B7;
    const register unsigned short int T2IE = 6;
    sbit  T2IE_bit at IEC0.B6;
    const register unsigned short int OC2IE = 5;
    sbit  OC2IE_bit at IEC0.B5;
    const register unsigned short int IC2IE = 4;
    sbit  IC2IE_bit at IEC0.B4;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int IC6IE = 15;
    sbit  IC6IE_bit at IEC1.B15;
    const register unsigned short int IC5IE = 14;
    sbit  IC5IE_bit at IEC1.B14;
    const register unsigned short int IC4IE = 13;
    sbit  IC4IE_bit at IEC1.B13;
    const register unsigned short int IC3IE = 12;
    sbit  IC3IE_bit at IEC1.B12;
    const register unsigned short int C1IE = 11;
    sbit  C1IE_bit at IEC1.B11;
    const register unsigned short int SPI2IE = 10;
    sbit  SPI2IE_bit at IEC1.B10;
    const register unsigned short int U2TXIE = 9;
    sbit  U2TXIE_bit at IEC1.B9;
    const register unsigned short int U2RXIE = 8;
    sbit  U2RXIE_bit at IEC1.B8;
    const register unsigned short int INT2IE = 7;
    sbit  INT2IE_bit at IEC1.B7;
    const register unsigned short int T5IE = 6;
    sbit  T5IE_bit at IEC1.B6;
    const register unsigned short int T4IE = 5;
    sbit  T4IE_bit at IEC1.B5;
    const register unsigned short int OC4IE = 4;
    sbit  OC4IE_bit at IEC1.B4;
    const register unsigned short int OC3IE = 3;
    sbit  OC3IE_bit at IEC1.B3;
    const register unsigned short int IC8IE = 2;
    sbit  IC8IE_bit at IEC1.B2;
    const register unsigned short int IC7IE = 1;
    sbit  IC7IE_bit at IEC1.B1;
    const register unsigned short int INT1IE = 0;
    sbit  INT1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int LVDIE = 10;
    sbit  LVDIE_bit at IEC2.B10;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at IEC2.B6;
    const register unsigned short int INT4IE = 5;
    sbit  INT4IE_bit at IEC2.B5;
    const register unsigned short int INT3IE = 4;
    sbit  INT3IE_bit at IEC2.B4;
    const register unsigned short int OC8IE = 3;
    sbit  OC8IE_bit at IEC2.B3;
    const register unsigned short int OC7IE = 2;
    sbit  OC7IE_bit at IEC2.B2;
    const register unsigned short int OC6IE = 1;
    sbit  OC6IE_bit at IEC2.B1;
    const register unsigned short int OC5IE = 0;
    sbit  OC5IE_bit at IEC2.B0;

    // IPC0 bits
    const register unsigned short int T1IP_2 = 14;
    sbit  T1IP_2_bit at IPC0.B14;
    sbit  T1IP2_bit at IPC0.B14;
    const register unsigned short int T1IP_1 = 13;
    sbit  T1IP_1_bit at IPC0.B13;
    sbit  T1IP1_bit at IPC0.B13;
    const register unsigned short int T1IP_0 = 12;
    sbit  T1IP_0_bit at IPC0.B12;
    sbit  T1IP0_bit at IPC0.B12;
    const register unsigned short int OC1IP_2 = 10;
    sbit  OC1IP_2_bit at IPC0.B10;
    const register unsigned short int OC1IP_1 = 9;
    sbit  OC1IP_1_bit at IPC0.B9;
    const register unsigned short int OC1IP_0 = 8;
    sbit  OC1IP_0_bit at IPC0.B8;
    const register unsigned short int IC1IP_2 = 6;
    sbit  IC1IP_2_bit at IPC0.B6;
    const register unsigned short int IC1IP_1 = 5;
    sbit  IC1IP_1_bit at IPC0.B5;
    const register unsigned short int IC1IP_0 = 4;
    sbit  IC1IP_0_bit at IPC0.B4;
    const register unsigned short int INT0IP_2 = 2;
    sbit  INT0IP_2_bit at IPC0.B2;
    const register unsigned short int INT0IP_1 = 1;
    sbit  INT0IP_1_bit at IPC0.B1;
    const register unsigned short int INT0IP_0 = 0;
    sbit  INT0IP_0_bit at IPC0.B0;

    // IPC1 bits
    const register unsigned short int T3IP_2 = 14;
    sbit  T3IP_2_bit at IPC1.B14;
    const register unsigned short int T3IP_1 = 13;
    sbit  T3IP_1_bit at IPC1.B13;
    const register unsigned short int T3IP_0 = 12;
    sbit  T3IP_0_bit at IPC1.B12;
    const register unsigned short int T2IP_2 = 10;
    sbit  T2IP_2_bit at IPC1.B10;
    const register unsigned short int T2IP_1 = 9;
    sbit  T2IP_1_bit at IPC1.B9;
    const register unsigned short int T2IP_0 = 8;
    sbit  T2IP_0_bit at IPC1.B8;
    const register unsigned short int OC2IP_2 = 6;
    sbit  OC2IP_2_bit at IPC1.B6;
    const register unsigned short int OC2IP_1 = 5;
    sbit  OC2IP_1_bit at IPC1.B5;
    const register unsigned short int OC2IP_0 = 4;
    sbit  OC2IP_0_bit at IPC1.B4;
    const register unsigned short int IC2IP_2 = 2;
    sbit  IC2IP_2_bit at IPC1.B2;
    const register unsigned short int IC2IP_1 = 1;
    sbit  IC2IP_1_bit at IPC1.B1;
    const register unsigned short int IC2IP_0 = 0;
    sbit  IC2IP_0_bit at IPC1.B0;

    // IPC2 bits
    const register unsigned short int ADIP_2 = 14;
    sbit  ADIP_2_bit at IPC2.B14;
    const register unsigned short int ADIP_1 = 13;
    sbit  ADIP_1_bit at IPC2.B13;
    const register unsigned short int ADIP_0 = 12;
    sbit  ADIP_0_bit at IPC2.B12;
    const register unsigned short int U1TXIP_2 = 10;
    sbit  U1TXIP_2_bit at IPC2.B10;
    const register unsigned short int U1TXIP_1 = 9;
    sbit  U1TXIP_1_bit at IPC2.B9;
    const register unsigned short int U1TXIP_0 = 8;
    sbit  U1TXIP_0_bit at IPC2.B8;
    const register unsigned short int U1RXIP_2 = 6;
    sbit  U1RXIP_2_bit at IPC2.B6;
    const register unsigned short int U1RXIP_1 = 5;
    sbit  U1RXIP_1_bit at IPC2.B5;
    const register unsigned short int U1RXIP_0 = 4;
    sbit  U1RXIP_0_bit at IPC2.B4;
    const register unsigned short int SPI1IP_2 = 2;
    sbit  SPI1IP_2_bit at IPC2.B2;
    const register unsigned short int SPI1IP_1 = 1;
    sbit  SPI1IP_1_bit at IPC2.B1;
    const register unsigned short int SPI1IP_0 = 0;
    sbit  SPI1IP_0_bit at IPC2.B0;

    // IPC3 bits
    const register unsigned short int CNIP_2 = 14;
    sbit  CNIP_2_bit at IPC3.B14;
    const register unsigned short int CNIP_1 = 13;
    sbit  CNIP_1_bit at IPC3.B13;
    const register unsigned short int CNIP_0 = 12;
    sbit  CNIP_0_bit at IPC3.B12;
    const register unsigned short int MI2CIP_2 = 10;
    sbit  MI2CIP_2_bit at IPC3.B10;
    const register unsigned short int MI2CIP_1 = 9;
    sbit  MI2CIP_1_bit at IPC3.B9;
    const register unsigned short int MI2CIP_0 = 8;
    sbit  MI2CIP_0_bit at IPC3.B8;
    const register unsigned short int SI2CIP_2 = 6;
    sbit  SI2CIP_2_bit at IPC3.B6;
    const register unsigned short int SI2CIP_1 = 5;
    sbit  SI2CIP_1_bit at IPC3.B5;
    const register unsigned short int SI2CIP_0 = 4;
    sbit  SI2CIP_0_bit at IPC3.B4;
    const register unsigned short int NVMIP_2 = 2;
    sbit  NVMIP_2_bit at IPC3.B2;
    const register unsigned short int NVMIP_1 = 1;
    sbit  NVMIP_1_bit at IPC3.B1;
    const register unsigned short int NVMIP_0 = 0;
    sbit  NVMIP_0_bit at IPC3.B0;

    // IPC4 bits
    const register unsigned short int OC3IP_2 = 14;
    sbit  OC3IP_2_bit at IPC4.B14;
    const register unsigned short int OC3IP_1 = 13;
    sbit  OC3IP_1_bit at IPC4.B13;
    const register unsigned short int OC3IP_0 = 12;
    sbit  OC3IP_0_bit at IPC4.B12;
    const register unsigned short int IC8IP_2 = 10;
    sbit  IC8IP_2_bit at IPC4.B10;
    const register unsigned short int IC8IP_1 = 9;
    sbit  IC8IP_1_bit at IPC4.B9;
    const register unsigned short int IC8IP_0 = 8;
    sbit  IC8IP_0_bit at IPC4.B8;
    const register unsigned short int IC7IP_2 = 6;
    sbit  IC7IP_2_bit at IPC4.B6;
    const register unsigned short int IC7IP_1 = 5;
    sbit  IC7IP_1_bit at IPC4.B5;
    const register unsigned short int IC7IP_0 = 4;
    sbit  IC7IP_0_bit at IPC4.B4;
    const register unsigned short int INT1IP_2 = 2;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP_2_bit at IPC4.B2;
    const register unsigned short int INT1IP_1 = 1;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP_1_bit at IPC4.B1;
    const register unsigned short int INT1IP_0 = 0;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP_0_bit at IPC4.B0;

    // IPC5 bits
    const register unsigned short int INT2IP_2 = 14;
    const register unsigned short int INT2IP2 = 14;
    sbit  INT2IP_2_bit at IPC5.B14;
    const register unsigned short int INT2IP_1 = 13;
    const register unsigned short int INT2IP1= 13;
    sbit  INT2IP_1_bit at IPC5.B13;
    const register unsigned short int INT2IP_0 = 12;
    const register unsigned short int INT2IP0= 12;
    sbit  INT2IP_0_bit at IPC5.B12;
    const register unsigned short int T5IP_2 = 10;
    sbit  T5IP_2_bit at IPC5.B10;
    const register unsigned short int T5IP_1 = 9;
    sbit  T5IP_1_bit at IPC5.B9;
    const register unsigned short int T5IP_0 = 8;
    sbit  T5IP_0_bit at IPC5.B8;
    const register unsigned short int T4IP_2 = 6;
    sbit  T4IP_2_bit at IPC5.B6;
    const register unsigned short int T4IP_1 = 5;
    sbit  T4IP_1_bit at IPC5.B5;
    const register unsigned short int T4IP_0 = 4;
    sbit  T4IP_0_bit at IPC5.B4;
    const register unsigned short int OC4IP_2 = 2;
    sbit  OC4IP_2_bit at IPC5.B2;
    const register unsigned short int OC4IP_1 = 1;
    sbit  OC4IP_1_bit at IPC5.B1;
    const register unsigned short int OC4IP_0 = 0;
    sbit  OC4IP_0_bit at IPC5.B0;

    // IPC6 bits
    const register unsigned short int C1IP_2 = 14;
    sbit  C1IP_2_bit at IPC6.B14;
    const register unsigned short int C1IP_1 = 13;
    sbit  C1IP_1_bit at IPC6.B13;
    const register unsigned short int C1IP_0 = 12;
    sbit  C1IP_0_bit at IPC6.B12;
    const register unsigned short int SPI2IP_2 = 10;
    sbit  SPI2IP_2_bit at IPC6.B10;
    const register unsigned short int SPI2IP_1 = 9;
    sbit  SPI2IP_1_bit at IPC6.B9;
    const register unsigned short int SPI2IP_0 = 8;
    sbit  SPI2IP_0_bit at IPC6.B8;
    const register unsigned short int U2TXIP_2 = 6;
    sbit  U2TXIP_2_bit at IPC6.B6;
    const register unsigned short int U2TXIP_1 = 5;
    sbit  U2TXIP_1_bit at IPC6.B5;
    const register unsigned short int U2TXIP_0 = 4;
    sbit  U2TXIP_0_bit at IPC6.B4;
    const register unsigned short int U2RXIP_2 = 2;
    sbit  U2RXIP_2_bit at IPC6.B2;
    const register unsigned short int U2RXIP_1 = 1;
    sbit  U2RXIP_1_bit at IPC6.B1;
    const register unsigned short int U2RXIP_0 = 0;
    sbit  U2RXIP_0_bit at IPC6.B0;

    // IPC7 bits
    const register unsigned short int IC6IP_2 = 14;
    sbit  IC6IP_2_bit at IPC7.B14;
    const register unsigned short int IC6IP_1 = 13;
    sbit  IC6IP_1_bit at IPC7.B13;
    const register unsigned short int IC6IP_0 = 12;
    sbit  IC6IP_0_bit at IPC7.B12;
    const register unsigned short int IC5IP_2 = 10;
    sbit  IC5IP_2_bit at IPC7.B10;
    const register unsigned short int IC5IP_1 = 9;
    sbit  IC5IP_1_bit at IPC7.B9;
    const register unsigned short int IC5IP_0 = 8;
    sbit  IC5IP_0_bit at IPC7.B8;
    const register unsigned short int IC4IP_2 = 6;
    sbit  IC4IP_2_bit at IPC7.B6;
    const register unsigned short int IC4IP_1 = 5;
    sbit  IC4IP_1_bit at IPC7.B5;
    const register unsigned short int IC4IP_0 = 4;
    sbit  IC4IP_0_bit at IPC7.B4;
    const register unsigned short int IC3IP_2 = 2;
    sbit  IC3IP_2_bit at IPC7.B2;
    const register unsigned short int IC3IP_1 = 1;
    sbit  IC3IP_1_bit at IPC7.B1;
    const register unsigned short int IC3IP_0 = 0;
    sbit  IC3IP_0_bit at IPC7.B0;

    // IPC8 bits
    const register unsigned short int OC8IP_2 = 14;
    sbit  OC8IP_2_bit at IPC8.B14;
    const register unsigned short int OC8IP_1 = 13;
    sbit  OC8IP_1_bit at IPC8.B13;
    const register unsigned short int OC8IP_0 = 12;
    sbit  OC8IP_0_bit at IPC8.B12;
    const register unsigned short int OC7IP_2 = 10;
    sbit  OC7IP_2_bit at IPC8.B10;
    const register unsigned short int OC7IP_1 = 9;
    sbit  OC7IP_1_bit at IPC8.B9;
    const register unsigned short int OC7IP_0 = 8;
    sbit  OC7IP_0_bit at IPC8.B8;
    const register unsigned short int OC6IP_2 = 6;
    sbit  OC6IP_2_bit at IPC8.B6;
    const register unsigned short int OC6IP_1 = 5;
    sbit  OC6IP_1_bit at IPC8.B5;
    const register unsigned short int OC6IP_0 = 4;
    sbit  OC6IP_0_bit at IPC8.B4;
    const register unsigned short int OC5IP_2 = 2;
    sbit  OC5IP_2_bit at IPC8.B2;
    const register unsigned short int OC5IP_1 = 1;
    sbit  OC5IP_1_bit at IPC8.B1;
    const register unsigned short int OC5IP_0 = 0;
    sbit  OC5IP_0_bit at IPC8.B0;

    // IPC9 bits
    const register unsigned short int C2IP_2 = 10;
    sbit  C2IP_2_bit at IPC9.B10;
    const register unsigned short int C2IP_1 = 9;
    sbit  C2IP_1_bit at IPC9.B9;
    const register unsigned short int C2IP_0 = 8;
    sbit  C2IP_0_bit at IPC9.B8;
    const register unsigned short int INT4IP_2 = 6;
    sbit  INT4IP_2_bit at IPC9.B6;
    const register unsigned short int INT4IP_1 = 5;
    sbit  INT4IP_1_bit at IPC9.B5;
    const register unsigned short int INT4IP_0 = 4;
    sbit  INT4IP_0_bit at IPC9.B4;
    const register unsigned short int INT3IP_2 = 2;
    sbit  INT3IP_2_bit at IPC9.B2;
    const register unsigned short int INT3IP_1 = 1;
    sbit  INT3IP_1_bit at IPC9.B1;
    const register unsigned short int INT3IP_0 = 0;
    sbit  INT3IP_0_bit at IPC9.B0;

    // IPC10 bits
    const register unsigned short int LVDIP_2 = 10;
    sbit  LVDIP_2_bit at IPC10.B10;
    const register unsigned short int LVDIP_1 = 9;
    sbit  LVDIP_1_bit at IPC10.B9;
    const register unsigned short int LVDIP_0 = 8;
    sbit  LVDIP_0_bit at IPC10.B8;

    // INTTREG bits
    const register unsigned short int IRQTOCPU = 15;
    sbit  IRQTOCPU_bit at INTTREG.B15;
    const register unsigned short int TMODE = 14;
    sbit  TMODE_bit at INTTREG.B14;
    const register unsigned short int VHOLD = 13;
    sbit  VHOLD_bit at INTTREG.B13;
    const register unsigned short int ILR_3 = 11;
    sbit  ILR_3_bit at INTTREG.B11;
    const register unsigned short int ILR_2 = 10;
    sbit  ILR_2_bit at INTTREG.B10;
    const register unsigned short int ILR_1 = 9;
    sbit  ILR_1_bit at INTTREG.B9;
    const register unsigned short int ILR_0 = 8;
    sbit  ILR_0_bit at INTTREG.B8;
    const register unsigned short int VECNUM_5 = 5;
    sbit  VECNUM_5_bit at INTTREG.B5;
    const register unsigned short int VECNUM_4 = 4;
    sbit  VECNUM_4_bit at INTTREG.B4;
    const register unsigned short int VECNUM_3 = 3;
    sbit  VECNUM_3_bit at INTTREG.B3;
    const register unsigned short int VECNUM_2 = 2;
    sbit  VECNUM_2_bit at INTTREG.B2;
    const register unsigned short int VECNUM_1 = 1;
    sbit  VECNUM_1_bit at INTTREG.B1;
    const register unsigned short int VECNUM_0 = 0;
    sbit  VECNUM_0_bit at INTTREG.B0;

    // CNEN1 bits
    const register unsigned short int CN15IE = 15;
    sbit  CN15IE_bit at CNEN1.B15;
    const register unsigned short int CN14IE = 14;
    sbit  CN14IE_bit at CNEN1.B14;
    const register unsigned short int CN13IE = 13;
    sbit  CN13IE_bit at CNEN1.B13;
    const register unsigned short int CN12IE = 12;
    sbit  CN12IE_bit at CNEN1.B12;
    const register unsigned short int CN11IE = 11;
    sbit  CN11IE_bit at CNEN1.B11;
    const register unsigned short int CN10IE = 10;
    sbit  CN10IE_bit at CNEN1.B10;
    const register unsigned short int CN9IE = 9;
    sbit  CN9IE_bit at CNEN1.B9;
    const register unsigned short int CN8IE = 8;
    sbit  CN8IE_bit at CNEN1.B8;
    const register unsigned short int CN7IE = 7;
    sbit  CN7IE_bit at CNEN1.B7;
    const register unsigned short int CN6IE = 6;
    sbit  CN6IE_bit at CNEN1.B6;
    const register unsigned short int CN5IE = 5;
    sbit  CN5IE_bit at CNEN1.B5;
    const register unsigned short int CN4IE = 4;
    sbit  CN4IE_bit at CNEN1.B4;
    const register unsigned short int CN3IE = 3;
    sbit  CN3IE_bit at CNEN1.B3;
    const register unsigned short int CN2IE = 2;
    sbit  CN2IE_bit at CNEN1.B2;
    const register unsigned short int CN1IE = 1;
    sbit  CN1IE_bit at CNEN1.B1;
    const register unsigned short int CN0IE = 0;
    sbit  CN0IE_bit at CNEN1.B0;

    // CNEN2 bits
    const register unsigned short int CN18IE = 2;
    sbit  CN18IE_bit at CNEN2.B2;
    const register unsigned short int CN17IE = 1;
    sbit  CN17IE_bit at CNEN2.B1;
    const register unsigned short int CN16IE = 0;
    sbit  CN16IE_bit at CNEN2.B0;

    // CNPU1 bits
    const register unsigned short int CN15PUE = 15;
    sbit  CN15PUE_bit at CNPU1.B15;
    const register unsigned short int CN14PUE = 14;
    sbit  CN14PUE_bit at CNPU1.B14;
    const register unsigned short int CN13PUE = 13;
    sbit  CN13PUE_bit at CNPU1.B13;
    const register unsigned short int CN12PUE = 12;
    sbit  CN12PUE_bit at CNPU1.B12;
    const register unsigned short int CN11PUE = 11;
    sbit  CN11PUE_bit at CNPU1.B11;
    const register unsigned short int CN10PUE = 10;
    sbit  CN10PUE_bit at CNPU1.B10;
    const register unsigned short int CN9PUE = 9;
    sbit  CN9PUE_bit at CNPU1.B9;
    const register unsigned short int CN8PUE = 8;
    sbit  CN8PUE_bit at CNPU1.B8;
    const register unsigned short int CN7PUE = 7;
    sbit  CN7PUE_bit at CNPU1.B7;
    const register unsigned short int CN6PUE = 6;
    sbit  CN6PUE_bit at CNPU1.B6;
    const register unsigned short int CN5PUE = 5;
    sbit  CN5PUE_bit at CNPU1.B5;
    const register unsigned short int CN4PUE = 4;
    sbit  CN4PUE_bit at CNPU1.B4;
    const register unsigned short int CN3PUE = 3;
    sbit  CN3PUE_bit at CNPU1.B3;
    const register unsigned short int CN2PUE = 2;
    sbit  CN2PUE_bit at CNPU1.B2;
    const register unsigned short int CN1PUE = 1;
    sbit  CN1PUE_bit at CNPU1.B1;
    const register unsigned short int CN0PUE = 0;
    sbit  CN0PUE_bit at CNPU1.B0;

    // CNPU2 bits
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;

    // TMR1 bits
    const register unsigned short int TMR1_15 = 15;
    sbit  TMR1_15_bit at TMR1.B15;
    const register unsigned short int TMR1_14 = 14;
    sbit  TMR1_14_bit at TMR1.B14;
    const register unsigned short int TMR1_13 = 13;
    sbit  TMR1_13_bit at TMR1.B13;
    const register unsigned short int TMR1_12 = 12;
    sbit  TMR1_12_bit at TMR1.B12;
    const register unsigned short int TMR1_11 = 11;
    sbit  TMR1_11_bit at TMR1.B11;
    const register unsigned short int TMR1_10 = 10;
    sbit  TMR1_10_bit at TMR1.B10;
    const register unsigned short int TMR1_9 = 9;
    sbit  TMR1_9_bit at TMR1.B9;
    const register unsigned short int TMR1_8 = 8;
    sbit  TMR1_8_bit at TMR1.B8;
    const register unsigned short int TMR1_7 = 7;
    sbit  TMR1_7_bit at TMR1.B7;
    const register unsigned short int TMR1_6 = 6;
    sbit  TMR1_6_bit at TMR1.B6;
    const register unsigned short int TMR1_5 = 5;
    sbit  TMR1_5_bit at TMR1.B5;
    const register unsigned short int TMR1_4 = 4;
    sbit  TMR1_4_bit at TMR1.B4;
    const register unsigned short int TMR1_3 = 3;
    sbit  TMR1_3_bit at TMR1.B3;
    const register unsigned short int TMR1_2 = 2;
    sbit  TMR1_2_bit at TMR1.B2;
    const register unsigned short int TMR1_1 = 1;
    sbit  TMR1_1_bit at TMR1.B1;
    const register unsigned short int TMR1_0 = 0;
    sbit  TMR1_0_bit at TMR1.B0;

    // PR1 bits
    const register unsigned short int PR1_15 = 15;
    sbit  PR1_15_bit at PR1.B15;
    const register unsigned short int PR1_14 = 14;
    sbit  PR1_14_bit at PR1.B14;
    const register unsigned short int PR1_13 = 13;
    sbit  PR1_13_bit at PR1.B13;
    const register unsigned short int PR1_12 = 12;
    sbit  PR1_12_bit at PR1.B12;
    const register unsigned short int PR1_11 = 11;
    sbit  PR1_11_bit at PR1.B11;
    const register unsigned short int PR1_10 = 10;
    sbit  PR1_10_bit at PR1.B10;
    const register unsigned short int PR1_9 = 9;
    sbit  PR1_9_bit at PR1.B9;
    const register unsigned short int PR1_8 = 8;
    sbit  PR1_8_bit at PR1.B8;
    const register unsigned short int PR1_7 = 7;
    sbit  PR1_7_bit at PR1.B7;
    const register unsigned short int PR1_6 = 6;
    sbit  PR1_6_bit at PR1.B6;
    const register unsigned short int PR1_5 = 5;
    sbit  PR1_5_bit at PR1.B5;
    const register unsigned short int PR1_4 = 4;
    sbit  PR1_4_bit at PR1.B4;
    const register unsigned short int PR1_3 = 3;
    sbit  PR1_3_bit at PR1.B3;
    const register unsigned short int PR1_2 = 2;
    sbit  PR1_2_bit at PR1.B2;
    const register unsigned short int PR1_1 = 1;
    sbit  PR1_1_bit at PR1.B1;
    const register unsigned short int PR1_0 = 0;
    sbit  PR1_0_bit at PR1.B0;

    // T1CON bits
    const register unsigned short int TON = 15;
    sbit  TON_bit at T1CON.B15;
    sbit  TON_T1CON_bit at T1CON.B15;
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    sbit  TSIDL_T1CON_bit at T1CON.B13;
    const register unsigned short int TGATE = 6;
    sbit  TGATE_bit at T1CON.B6;
    sbit  TGATE_T1CON_bit at T1CON.B6;
    const register unsigned short int TCKPS_1 = 5;
    sbit  TCKPS_1_bit at T1CON.B5;
    sbit  TCKPS_1_T1CON_bit at T1CON.B5;
    const register unsigned short int TCKPS_0 = 4;
    sbit  TCKPS_0_bit at T1CON.B4;
    sbit  TCKPS_0_T1CON_bit at T1CON.B4;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;
    sbit  TCS_T1CON_bit at T1CON.B1;

    // TMR2 bits
    const register unsigned short int TMR2_15 = 15;
    sbit  TMR2_15_bit at TMR2.B15;
    const register unsigned short int TMR2_14 = 14;
    sbit  TMR2_14_bit at TMR2.B14;
    const register unsigned short int TMR2_13 = 13;
    sbit  TMR2_13_bit at TMR2.B13;
    const register unsigned short int TMR2_12 = 12;
    sbit  TMR2_12_bit at TMR2.B12;
    const register unsigned short int TMR2_11 = 11;
    sbit  TMR2_11_bit at TMR2.B11;
    const register unsigned short int TMR2_10 = 10;
    sbit  TMR2_10_bit at TMR2.B10;
    const register unsigned short int TMR2_9 = 9;
    sbit  TMR2_9_bit at TMR2.B9;
    const register unsigned short int TMR2_8 = 8;
    sbit  TMR2_8_bit at TMR2.B8;
    const register unsigned short int TMR2_7 = 7;
    sbit  TMR2_7_bit at TMR2.B7;
    const register unsigned short int TMR2_6 = 6;
    sbit  TMR2_6_bit at TMR2.B6;
    const register unsigned short int TMR2_5 = 5;
    sbit  TMR2_5_bit at TMR2.B5;
    const register unsigned short int TMR2_4 = 4;
    sbit  TMR2_4_bit at TMR2.B4;
    const register unsigned short int TMR2_3 = 3;
    sbit  TMR2_3_bit at TMR2.B3;
    const register unsigned short int TMR2_2 = 2;
    sbit  TMR2_2_bit at TMR2.B2;
    const register unsigned short int TMR2_1 = 1;
    sbit  TMR2_1_bit at TMR2.B1;
    const register unsigned short int TMR2_0 = 0;
    sbit  TMR2_0_bit at TMR2.B0;

    // TMR3HLD bits
    const register unsigned short int TMR3HLD_15 = 15;
    sbit  TMR3HLD_15_bit at TMR3HLD.B15;
    const register unsigned short int TMR3HLD_14 = 14;
    sbit  TMR3HLD_14_bit at TMR3HLD.B14;
    const register unsigned short int TMR3HLD_13 = 13;
    sbit  TMR3HLD_13_bit at TMR3HLD.B13;
    const register unsigned short int TMR3HLD_12 = 12;
    sbit  TMR3HLD_12_bit at TMR3HLD.B12;
    const register unsigned short int TMR3HLD_11 = 11;
    sbit  TMR3HLD_11_bit at TMR3HLD.B11;
    const register unsigned short int TMR3HLD_10 = 10;
    sbit  TMR3HLD_10_bit at TMR3HLD.B10;
    const register unsigned short int TMR3HLD_9 = 9;
    sbit  TMR3HLD_9_bit at TMR3HLD.B9;
    const register unsigned short int TMR3HLD_8 = 8;
    sbit  TMR3HLD_8_bit at TMR3HLD.B8;
    const register unsigned short int TMR3HLD_7 = 7;
    sbit  TMR3HLD_7_bit at TMR3HLD.B7;
    const register unsigned short int TMR3HLD_6 = 6;
    sbit  TMR3HLD_6_bit at TMR3HLD.B6;
    const register unsigned short int TMR3HLD_5 = 5;
    sbit  TMR3HLD_5_bit at TMR3HLD.B5;
    const register unsigned short int TMR3HLD_4 = 4;
    sbit  TMR3HLD_4_bit at TMR3HLD.B4;
    const register unsigned short int TMR3HLD_3 = 3;
    sbit  TMR3HLD_3_bit at TMR3HLD.B3;
    const register unsigned short int TMR3HLD_2 = 2;
    sbit  TMR3HLD_2_bit at TMR3HLD.B2;
    const register unsigned short int TMR3HLD_1 = 1;
    sbit  TMR3HLD_1_bit at TMR3HLD.B1;
    const register unsigned short int TMR3HLD_0 = 0;
    sbit  TMR3HLD_0_bit at TMR3HLD.B0;

    // TMR3 bits
    const register unsigned short int TMR3_15 = 15;
    sbit  TMR3_15_bit at TMR3.B15;
    const register unsigned short int TMR3_14 = 14;
    sbit  TMR3_14_bit at TMR3.B14;
    const register unsigned short int TMR3_13 = 13;
    sbit  TMR3_13_bit at TMR3.B13;
    const register unsigned short int TMR3_12 = 12;
    sbit  TMR3_12_bit at TMR3.B12;
    const register unsigned short int TMR3_11 = 11;
    sbit  TMR3_11_bit at TMR3.B11;
    const register unsigned short int TMR3_10 = 10;
    sbit  TMR3_10_bit at TMR3.B10;
    const register unsigned short int TMR3_9 = 9;
    sbit  TMR3_9_bit at TMR3.B9;
    const register unsigned short int TMR3_8 = 8;
    sbit  TMR3_8_bit at TMR3.B8;
    const register unsigned short int TMR3_7 = 7;
    sbit  TMR3_7_bit at TMR3.B7;
    const register unsigned short int TMR3_6 = 6;
    sbit  TMR3_6_bit at TMR3.B6;
    const register unsigned short int TMR3_5 = 5;
    sbit  TMR3_5_bit at TMR3.B5;
    const register unsigned short int TMR3_4 = 4;
    sbit  TMR3_4_bit at TMR3.B4;
    const register unsigned short int TMR3_3 = 3;
    sbit  TMR3_3_bit at TMR3.B3;
    const register unsigned short int TMR3_2 = 2;
    sbit  TMR3_2_bit at TMR3.B2;
    const register unsigned short int TMR3_1 = 1;
    sbit  TMR3_1_bit at TMR3.B1;
    const register unsigned short int TMR3_0 = 0;
    sbit  TMR3_0_bit at TMR3.B0;

    // PR2 bits
    const register unsigned short int PR2_15 = 15;
    sbit  PR2_15_bit at PR2.B15;
    const register unsigned short int PR2_14 = 14;
    sbit  PR2_14_bit at PR2.B14;
    const register unsigned short int PR2_13 = 13;
    sbit  PR2_13_bit at PR2.B13;
    const register unsigned short int PR2_12 = 12;
    sbit  PR2_12_bit at PR2.B12;
    const register unsigned short int PR2_11 = 11;
    sbit  PR2_11_bit at PR2.B11;
    const register unsigned short int PR2_10 = 10;
    sbit  PR2_10_bit at PR2.B10;
    const register unsigned short int PR2_9 = 9;
    sbit  PR2_9_bit at PR2.B9;
    const register unsigned short int PR2_8 = 8;
    sbit  PR2_8_bit at PR2.B8;
    const register unsigned short int PR2_7 = 7;
    sbit  PR2_7_bit at PR2.B7;
    const register unsigned short int PR2_6 = 6;
    sbit  PR2_6_bit at PR2.B6;
    const register unsigned short int PR2_5 = 5;
    sbit  PR2_5_bit at PR2.B5;
    const register unsigned short int PR2_4 = 4;
    sbit  PR2_4_bit at PR2.B4;
    const register unsigned short int PR2_3 = 3;
    sbit  PR2_3_bit at PR2.B3;
    const register unsigned short int PR2_2 = 2;
    sbit  PR2_2_bit at PR2.B2;
    const register unsigned short int PR2_1 = 1;
    sbit  PR2_1_bit at PR2.B1;
    const register unsigned short int PR2_0 = 0;
    sbit  PR2_0_bit at PR2.B0;

    // PR3 bits
    const register unsigned short int PR3_15 = 15;
    sbit  PR3_15_bit at PR3.B15;
    const register unsigned short int PR3_14 = 14;
    sbit  PR3_14_bit at PR3.B14;
    const register unsigned short int PR3_13 = 13;
    sbit  PR3_13_bit at PR3.B13;
    const register unsigned short int PR3_12 = 12;
    sbit  PR3_12_bit at PR3.B12;
    const register unsigned short int PR3_11 = 11;
    sbit  PR3_11_bit at PR3.B11;
    const register unsigned short int PR3_10 = 10;
    sbit  PR3_10_bit at PR3.B10;
    const register unsigned short int PR3_9 = 9;
    sbit  PR3_9_bit at PR3.B9;
    const register unsigned short int PR3_8 = 8;
    sbit  PR3_8_bit at PR3.B8;
    const register unsigned short int PR3_7 = 7;
    sbit  PR3_7_bit at PR3.B7;
    const register unsigned short int PR3_6 = 6;
    sbit  PR3_6_bit at PR3.B6;
    const register unsigned short int PR3_5 = 5;
    sbit  PR3_5_bit at PR3.B5;
    const register unsigned short int PR3_4 = 4;
    sbit  PR3_4_bit at PR3.B4;
    const register unsigned short int PR3_3 = 3;
    sbit  PR3_3_bit at PR3.B3;
    const register unsigned short int PR3_2 = 2;
    sbit  PR3_2_bit at PR3.B2;
    const register unsigned short int PR3_1 = 1;
    sbit  PR3_1_bit at PR3.B1;
    const register unsigned short int PR3_0 = 0;
    sbit  PR3_0_bit at PR3.B0;

    // T2CON bits
    sbit  TON_T2CON_bit at T2CON.B15;
    sbit  TSIDL_T2CON_bit at T2CON.B13;
    sbit  TGATE_T2CON_bit at T2CON.B6;
    sbit  TCKPS_1_T2CON_bit at T2CON.B5;
    sbit  TCKPS_0_T2CON_bit at T2CON.B4;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    sbit  T32_T2CON_bit at T2CON.B3;
    sbit  TCS_T2CON_bit at T2CON.B1;

    // T3CON bits
    sbit  TON_T3CON_bit at T3CON.B15;
    sbit  TSIDL_T3CON_bit at T3CON.B13;
    sbit  TGATE_T3CON_bit at T3CON.B6;
    sbit  TCKPS_1_T3CON_bit at T3CON.B5;
    sbit  TCKPS_0_T3CON_bit at T3CON.B4;
    sbit  TCS_T3CON_bit at T3CON.B1;

    // TMR4 bits
    const register unsigned short int TMR4_15 = 15;
    sbit  TMR4_15_bit at TMR4.B15;
    const register unsigned short int TMR4_14 = 14;
    sbit  TMR4_14_bit at TMR4.B14;
    const register unsigned short int TMR4_13 = 13;
    sbit  TMR4_13_bit at TMR4.B13;
    const register unsigned short int TMR4_12 = 12;
    sbit  TMR4_12_bit at TMR4.B12;
    const register unsigned short int TMR4_11 = 11;
    sbit  TMR4_11_bit at TMR4.B11;
    const register unsigned short int TMR4_10 = 10;
    sbit  TMR4_10_bit at TMR4.B10;
    const register unsigned short int TMR4_9 = 9;
    sbit  TMR4_9_bit at TMR4.B9;
    const register unsigned short int TMR4_8 = 8;
    sbit  TMR4_8_bit at TMR4.B8;
    const register unsigned short int TMR4_7 = 7;
    sbit  TMR4_7_bit at TMR4.B7;
    const register unsigned short int TMR4_6 = 6;
    sbit  TMR4_6_bit at TMR4.B6;
    const register unsigned short int TMR4_5 = 5;
    sbit  TMR4_5_bit at TMR4.B5;
    const register unsigned short int TMR4_4 = 4;
    sbit  TMR4_4_bit at TMR4.B4;
    const register unsigned short int TMR4_3 = 3;
    sbit  TMR4_3_bit at TMR4.B3;
    const register unsigned short int TMR4_2 = 2;
    sbit  TMR4_2_bit at TMR4.B2;
    const register unsigned short int TMR4_1 = 1;
    sbit  TMR4_1_bit at TMR4.B1;
    const register unsigned short int TMR4_0 = 0;
    sbit  TMR4_0_bit at TMR4.B0;

    // TMR5HLD bits
    const register unsigned short int TMR5HLD_15 = 15;
    sbit  TMR5HLD_15_bit at TMR5HLD.B15;
    const register unsigned short int TMR5HLD_14 = 14;
    sbit  TMR5HLD_14_bit at TMR5HLD.B14;
    const register unsigned short int TMR5HLD_13 = 13;
    sbit  TMR5HLD_13_bit at TMR5HLD.B13;
    const register unsigned short int TMR5HLD_12 = 12;
    sbit  TMR5HLD_12_bit at TMR5HLD.B12;
    const register unsigned short int TMR5HLD_11 = 11;
    sbit  TMR5HLD_11_bit at TMR5HLD.B11;
    const register unsigned short int TMR5HLD_10 = 10;
    sbit  TMR5HLD_10_bit at TMR5HLD.B10;
    const register unsigned short int TMR5HLD_9 = 9;
    sbit  TMR5HLD_9_bit at TMR5HLD.B9;
    const register unsigned short int TMR5HLD_8 = 8;
    sbit  TMR5HLD_8_bit at TMR5HLD.B8;
    const register unsigned short int TMR5HLD_7 = 7;
    sbit  TMR5HLD_7_bit at TMR5HLD.B7;
    const register unsigned short int TMR5HLD_6 = 6;
    sbit  TMR5HLD_6_bit at TMR5HLD.B6;
    const register unsigned short int TMR5HLD_5 = 5;
    sbit  TMR5HLD_5_bit at TMR5HLD.B5;
    const register unsigned short int TMR5HLD_4 = 4;
    sbit  TMR5HLD_4_bit at TMR5HLD.B4;
    const register unsigned short int TMR5HLD_3 = 3;
    sbit  TMR5HLD_3_bit at TMR5HLD.B3;
    const register unsigned short int TMR5HLD_2 = 2;
    sbit  TMR5HLD_2_bit at TMR5HLD.B2;
    const register unsigned short int TMR5HLD_1 = 1;
    sbit  TMR5HLD_1_bit at TMR5HLD.B1;
    const register unsigned short int TMR5HLD_0 = 0;
    sbit  TMR5HLD_0_bit at TMR5HLD.B0;

    // TMR5 bits
    const register unsigned short int TMR5_15 = 15;
    sbit  TMR5_15_bit at TMR5.B15;
    const register unsigned short int TMR5_14 = 14;
    sbit  TMR5_14_bit at TMR5.B14;
    const register unsigned short int TMR5_13 = 13;
    sbit  TMR5_13_bit at TMR5.B13;
    const register unsigned short int TMR5_12 = 12;
    sbit  TMR5_12_bit at TMR5.B12;
    const register unsigned short int TMR5_11 = 11;
    sbit  TMR5_11_bit at TMR5.B11;
    const register unsigned short int TMR5_10 = 10;
    sbit  TMR5_10_bit at TMR5.B10;
    const register unsigned short int TMR5_9 = 9;
    sbit  TMR5_9_bit at TMR5.B9;
    const register unsigned short int TMR5_8 = 8;
    sbit  TMR5_8_bit at TMR5.B8;
    const register unsigned short int TMR5_7 = 7;
    sbit  TMR5_7_bit at TMR5.B7;
    const register unsigned short int TMR5_6 = 6;
    sbit  TMR5_6_bit at TMR5.B6;
    const register unsigned short int TMR5_5 = 5;
    sbit  TMR5_5_bit at TMR5.B5;
    const register unsigned short int TMR5_4 = 4;
    sbit  TMR5_4_bit at TMR5.B4;
    const register unsigned short int TMR5_3 = 3;
    sbit  TMR5_3_bit at TMR5.B3;
    const register unsigned short int TMR5_2 = 2;
    sbit  TMR5_2_bit at TMR5.B2;
    const register unsigned short int TMR5_1 = 1;
    sbit  TMR5_1_bit at TMR5.B1;
    const register unsigned short int TMR5_0 = 0;
    sbit  TMR5_0_bit at TMR5.B0;

    // PR4 bits
    const register unsigned short int PR4_15 = 15;
    sbit  PR4_15_bit at PR4.B15;
    const register unsigned short int PR4_14 = 14;
    sbit  PR4_14_bit at PR4.B14;
    const register unsigned short int PR4_13 = 13;
    sbit  PR4_13_bit at PR4.B13;
    const register unsigned short int PR4_12 = 12;
    sbit  PR4_12_bit at PR4.B12;
    const register unsigned short int PR4_11 = 11;
    sbit  PR4_11_bit at PR4.B11;
    const register unsigned short int PR4_10 = 10;
    sbit  PR4_10_bit at PR4.B10;
    const register unsigned short int PR4_9 = 9;
    sbit  PR4_9_bit at PR4.B9;
    const register unsigned short int PR4_8 = 8;
    sbit  PR4_8_bit at PR4.B8;
    const register unsigned short int PR4_7 = 7;
    sbit  PR4_7_bit at PR4.B7;
    const register unsigned short int PR4_6 = 6;
    sbit  PR4_6_bit at PR4.B6;
    const register unsigned short int PR4_5 = 5;
    sbit  PR4_5_bit at PR4.B5;
    const register unsigned short int PR4_4 = 4;
    sbit  PR4_4_bit at PR4.B4;
    const register unsigned short int PR4_3 = 3;
    sbit  PR4_3_bit at PR4.B3;
    const register unsigned short int PR4_2 = 2;
    sbit  PR4_2_bit at PR4.B2;
    const register unsigned short int PR4_1 = 1;
    sbit  PR4_1_bit at PR4.B1;
    const register unsigned short int PR4_0 = 0;
    sbit  PR4_0_bit at PR4.B0;

    // PR5 bits
    const register unsigned short int PR5_15 = 15;
    sbit  PR5_15_bit at PR5.B15;
    const register unsigned short int PR5_14 = 14;
    sbit  PR5_14_bit at PR5.B14;
    const register unsigned short int PR5_13 = 13;
    sbit  PR5_13_bit at PR5.B13;
    const register unsigned short int PR5_12 = 12;
    sbit  PR5_12_bit at PR5.B12;
    const register unsigned short int PR5_11 = 11;
    sbit  PR5_11_bit at PR5.B11;
    const register unsigned short int PR5_10 = 10;
    sbit  PR5_10_bit at PR5.B10;
    const register unsigned short int PR5_9 = 9;
    sbit  PR5_9_bit at PR5.B9;
    const register unsigned short int PR5_8 = 8;
    sbit  PR5_8_bit at PR5.B8;
    const register unsigned short int PR5_7 = 7;
    sbit  PR5_7_bit at PR5.B7;
    const register unsigned short int PR5_6 = 6;
    sbit  PR5_6_bit at PR5.B6;
    const register unsigned short int PR5_5 = 5;
    sbit  PR5_5_bit at PR5.B5;
    const register unsigned short int PR5_4 = 4;
    sbit  PR5_4_bit at PR5.B4;
    const register unsigned short int PR5_3 = 3;
    sbit  PR5_3_bit at PR5.B3;
    const register unsigned short int PR5_2 = 2;
    sbit  PR5_2_bit at PR5.B2;
    const register unsigned short int PR5_1 = 1;
    sbit  PR5_1_bit at PR5.B1;
    const register unsigned short int PR5_0 = 0;
    sbit  PR5_0_bit at PR5.B0;

    // T4CON bits
    sbit  TON_T4CON_bit at T4CON.B15;
    sbit  TSIDL_T4CON_bit at T4CON.B13;
    sbit  TGATE_T4CON_bit at T4CON.B6;
    sbit  TCKPS_1_T4CON_bit at T4CON.B5;
    sbit  TCKPS_0_T4CON_bit at T4CON.B4;
    sbit  T32_T4CON_bit at T4CON.B3;
    sbit  TCS_T4CON_bit at T4CON.B1;

    // T5CON bits
    sbit  TON_T5CON_bit at T5CON.B15;
    sbit  TSIDL_T5CON_bit at T5CON.B13;
    sbit  TGATE_T5CON_bit at T5CON.B6;
    sbit  TCKPS_1_T5CON_bit at T5CON.B5;
    sbit  TCKPS_0_T5CON_bit at T5CON.B4;
    sbit  TCS_T5CON_bit at T5CON.B1;

    // IC1BUF bits
    const register unsigned short int IC1BUF_15 = 15;
    sbit  IC1BUF_15_bit at IC1BUF.B15;
    const register unsigned short int IC1BUF_14 = 14;
    sbit  IC1BUF_14_bit at IC1BUF.B14;
    const register unsigned short int IC1BUF_13 = 13;
    sbit  IC1BUF_13_bit at IC1BUF.B13;
    const register unsigned short int IC1BUF_12 = 12;
    sbit  IC1BUF_12_bit at IC1BUF.B12;
    const register unsigned short int IC1BUF_11 = 11;
    sbit  IC1BUF_11_bit at IC1BUF.B11;
    const register unsigned short int IC1BUF_10 = 10;
    sbit  IC1BUF_10_bit at IC1BUF.B10;
    const register unsigned short int IC1BUF_9 = 9;
    sbit  IC1BUF_9_bit at IC1BUF.B9;
    const register unsigned short int IC1BUF_8 = 8;
    sbit  IC1BUF_8_bit at IC1BUF.B8;
    const register unsigned short int IC1BUF_7 = 7;
    sbit  IC1BUF_7_bit at IC1BUF.B7;
    const register unsigned short int IC1BUF_6 = 6;
    sbit  IC1BUF_6_bit at IC1BUF.B6;
    const register unsigned short int IC1BUF_5 = 5;
    sbit  IC1BUF_5_bit at IC1BUF.B5;
    const register unsigned short int IC1BUF_4 = 4;
    sbit  IC1BUF_4_bit at IC1BUF.B4;
    const register unsigned short int IC1BUF_3 = 3;
    sbit  IC1BUF_3_bit at IC1BUF.B3;
    const register unsigned short int IC1BUF_2 = 2;
    sbit  IC1BUF_2_bit at IC1BUF.B2;
    const register unsigned short int IC1BUF_1 = 1;
    sbit  IC1BUF_1_bit at IC1BUF.B1;
    const register unsigned short int IC1BUF_0 = 0;
    sbit  IC1BUF_0_bit at IC1BUF.B0;

    // IC1CON bits
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON.B13;
    sbit  ICSIDL_IC1CON_bit at IC1CON.B13;
    const register unsigned short int ICTMR = 7;
    sbit  ICTMR_bit at IC1CON.B7;
    sbit  ICTMR_IC1CON_bit at IC1CON.B7;
    const register unsigned short int ICI_1 = 6;
    sbit  ICI_1_bit at IC1CON.B6;
    sbit  ICI_1_IC1CON_bit at IC1CON.B6;
    const register unsigned short int ICI_0 = 5;
    sbit  ICI_0_bit at IC1CON.B5;
    sbit  ICI_0_IC1CON_bit at IC1CON.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON.B4;
    sbit  ICOV_IC1CON_bit at IC1CON.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON.B3;
    sbit  ICBNE_IC1CON_bit at IC1CON.B3;
    const register unsigned short int ICM_2 = 2;
    sbit  ICM_2_bit at IC1CON.B2;
    sbit  ICM_2_IC1CON_bit at IC1CON.B2;
    const register unsigned short int ICM_1 = 1;
    sbit  ICM_1_bit at IC1CON.B1;
    sbit  ICM_1_IC1CON_bit at IC1CON.B1;
    const register unsigned short int ICM_0 = 0;
    sbit  ICM_0_bit at IC1CON.B0;
    sbit  ICM_0_IC1CON_bit at IC1CON.B0;

    // IC2BUF bits
    const register unsigned short int IC2BUF_15 = 15;
    sbit  IC2BUF_15_bit at IC2BUF.B15;
    const register unsigned short int IC2BUF_14 = 14;
    sbit  IC2BUF_14_bit at IC2BUF.B14;
    const register unsigned short int IC2BUF_13 = 13;
    sbit  IC2BUF_13_bit at IC2BUF.B13;
    const register unsigned short int IC2BUF_12 = 12;
    sbit  IC2BUF_12_bit at IC2BUF.B12;
    const register unsigned short int IC2BUF_11 = 11;
    sbit  IC2BUF_11_bit at IC2BUF.B11;
    const register unsigned short int IC2BUF_10 = 10;
    sbit  IC2BUF_10_bit at IC2BUF.B10;
    const register unsigned short int IC2BUF_9 = 9;
    sbit  IC2BUF_9_bit at IC2BUF.B9;
    const register unsigned short int IC2BUF_8 = 8;
    sbit  IC2BUF_8_bit at IC2BUF.B8;
    const register unsigned short int IC2BUF_7 = 7;
    sbit  IC2BUF_7_bit at IC2BUF.B7;
    const register unsigned short int IC2BUF_6 = 6;
    sbit  IC2BUF_6_bit at IC2BUF.B6;
    const register unsigned short int IC2BUF_5 = 5;
    sbit  IC2BUF_5_bit at IC2BUF.B5;
    const register unsigned short int IC2BUF_4 = 4;
    sbit  IC2BUF_4_bit at IC2BUF.B4;
    const register unsigned short int IC2BUF_3 = 3;
    sbit  IC2BUF_3_bit at IC2BUF.B3;
    const register unsigned short int IC2BUF_2 = 2;
    sbit  IC2BUF_2_bit at IC2BUF.B2;
    const register unsigned short int IC2BUF_1 = 1;
    sbit  IC2BUF_1_bit at IC2BUF.B1;
    const register unsigned short int IC2BUF_0 = 0;
    sbit  IC2BUF_0_bit at IC2BUF.B0;

    // IC2CON bits
    sbit  ICSIDL_IC2CON_bit at IC2CON.B13;
    sbit  ICTMR_IC2CON_bit at IC2CON.B7;
    sbit  ICI_1_IC2CON_bit at IC2CON.B6;
    sbit  ICI_0_IC2CON_bit at IC2CON.B5;
    sbit  ICOV_IC2CON_bit at IC2CON.B4;
    sbit  ICBNE_IC2CON_bit at IC2CON.B3;
    sbit  ICM_2_IC2CON_bit at IC2CON.B2;
    sbit  ICM_1_IC2CON_bit at IC2CON.B1;
    sbit  ICM_0_IC2CON_bit at IC2CON.B0;

    // IC3BUF bits
    const register unsigned short int IC3BUF_15 = 15;
    sbit  IC3BUF_15_bit at IC3BUF.B15;
    const register unsigned short int IC3BUF_14 = 14;
    sbit  IC3BUF_14_bit at IC3BUF.B14;
    const register unsigned short int IC3BUF_13 = 13;
    sbit  IC3BUF_13_bit at IC3BUF.B13;
    const register unsigned short int IC3BUF_12 = 12;
    sbit  IC3BUF_12_bit at IC3BUF.B12;
    const register unsigned short int IC3BUF_11 = 11;
    sbit  IC3BUF_11_bit at IC3BUF.B11;
    const register unsigned short int IC3BUF_10 = 10;
    sbit  IC3BUF_10_bit at IC3BUF.B10;
    const register unsigned short int IC3BUF_9 = 9;
    sbit  IC3BUF_9_bit at IC3BUF.B9;
    const register unsigned short int IC3BUF_8 = 8;
    sbit  IC3BUF_8_bit at IC3BUF.B8;
    const register unsigned short int IC3BUF_7 = 7;
    sbit  IC3BUF_7_bit at IC3BUF.B7;
    const register unsigned short int IC3BUF_6 = 6;
    sbit  IC3BUF_6_bit at IC3BUF.B6;
    const register unsigned short int IC3BUF_5 = 5;
    sbit  IC3BUF_5_bit at IC3BUF.B5;
    const register unsigned short int IC3BUF_4 = 4;
    sbit  IC3BUF_4_bit at IC3BUF.B4;
    const register unsigned short int IC3BUF_3 = 3;
    sbit  IC3BUF_3_bit at IC3BUF.B3;
    const register unsigned short int IC3BUF_2 = 2;
    sbit  IC3BUF_2_bit at IC3BUF.B2;
    const register unsigned short int IC3BUF_1 = 1;
    sbit  IC3BUF_1_bit at IC3BUF.B1;
    const register unsigned short int IC3BUF_0 = 0;
    sbit  IC3BUF_0_bit at IC3BUF.B0;

    // IC3CON bits
    sbit  ICSIDL_IC3CON_bit at IC3CON.B13;
    sbit  ICTMR_IC3CON_bit at IC3CON.B7;
    sbit  ICI_1_IC3CON_bit at IC3CON.B6;
    sbit  ICI_0_IC3CON_bit at IC3CON.B5;
    sbit  ICOV_IC3CON_bit at IC3CON.B4;
    sbit  ICBNE_IC3CON_bit at IC3CON.B3;
    sbit  ICM_2_IC3CON_bit at IC3CON.B2;
    sbit  ICM_1_IC3CON_bit at IC3CON.B1;
    sbit  ICM_0_IC3CON_bit at IC3CON.B0;

    // IC4BUF bits
    const register unsigned short int IC4BUF_15 = 15;
    sbit  IC4BUF_15_bit at IC4BUF.B15;
    const register unsigned short int IC4BUF_14 = 14;
    sbit  IC4BUF_14_bit at IC4BUF.B14;
    const register unsigned short int IC4BUF_13 = 13;
    sbit  IC4BUF_13_bit at IC4BUF.B13;
    const register unsigned short int IC4BUF_12 = 12;
    sbit  IC4BUF_12_bit at IC4BUF.B12;
    const register unsigned short int IC4BUF_11 = 11;
    sbit  IC4BUF_11_bit at IC4BUF.B11;
    const register unsigned short int IC4BUF_10 = 10;
    sbit  IC4BUF_10_bit at IC4BUF.B10;
    const register unsigned short int IC4BUF_9 = 9;
    sbit  IC4BUF_9_bit at IC4BUF.B9;
    const register unsigned short int IC4BUF_8 = 8;
    sbit  IC4BUF_8_bit at IC4BUF.B8;
    const register unsigned short int IC4BUF_7 = 7;
    sbit  IC4BUF_7_bit at IC4BUF.B7;
    const register unsigned short int IC4BUF_6 = 6;
    sbit  IC4BUF_6_bit at IC4BUF.B6;
    const register unsigned short int IC4BUF_5 = 5;
    sbit  IC4BUF_5_bit at IC4BUF.B5;
    const register unsigned short int IC4BUF_4 = 4;
    sbit  IC4BUF_4_bit at IC4BUF.B4;
    const register unsigned short int IC4BUF_3 = 3;
    sbit  IC4BUF_3_bit at IC4BUF.B3;
    const register unsigned short int IC4BUF_2 = 2;
    sbit  IC4BUF_2_bit at IC4BUF.B2;
    const register unsigned short int IC4BUF_1 = 1;
    sbit  IC4BUF_1_bit at IC4BUF.B1;
    const register unsigned short int IC4BUF_0 = 0;
    sbit  IC4BUF_0_bit at IC4BUF.B0;

    // IC4CON bits
    sbit  ICSIDL_IC4CON_bit at IC4CON.B13;
    sbit  ICTMR_IC4CON_bit at IC4CON.B7;
    sbit  ICI_1_IC4CON_bit at IC4CON.B6;
    sbit  ICI_0_IC4CON_bit at IC4CON.B5;
    sbit  ICOV_IC4CON_bit at IC4CON.B4;
    sbit  ICBNE_IC4CON_bit at IC4CON.B3;
    sbit  ICM_2_IC4CON_bit at IC4CON.B2;
    sbit  ICM_1_IC4CON_bit at IC4CON.B1;
    sbit  ICM_0_IC4CON_bit at IC4CON.B0;

    // IC5BUF bits
    const register unsigned short int IC5BUF_15 = 15;
    sbit  IC5BUF_15_bit at IC5BUF.B15;
    const register unsigned short int IC5BUF_14 = 14;
    sbit  IC5BUF_14_bit at IC5BUF.B14;
    const register unsigned short int IC5BUF_13 = 13;
    sbit  IC5BUF_13_bit at IC5BUF.B13;
    const register unsigned short int IC5BUF_12 = 12;
    sbit  IC5BUF_12_bit at IC5BUF.B12;
    const register unsigned short int IC5BUF_11 = 11;
    sbit  IC5BUF_11_bit at IC5BUF.B11;
    const register unsigned short int IC5BUF_10 = 10;
    sbit  IC5BUF_10_bit at IC5BUF.B10;
    const register unsigned short int IC5BUF_9 = 9;
    sbit  IC5BUF_9_bit at IC5BUF.B9;
    const register unsigned short int IC5BUF_8 = 8;
    sbit  IC5BUF_8_bit at IC5BUF.B8;
    const register unsigned short int IC5BUF_7 = 7;
    sbit  IC5BUF_7_bit at IC5BUF.B7;
    const register unsigned short int IC5BUF_6 = 6;
    sbit  IC5BUF_6_bit at IC5BUF.B6;
    const register unsigned short int IC5BUF_5 = 5;
    sbit  IC5BUF_5_bit at IC5BUF.B5;
    const register unsigned short int IC5BUF_4 = 4;
    sbit  IC5BUF_4_bit at IC5BUF.B4;
    const register unsigned short int IC5BUF_3 = 3;
    sbit  IC5BUF_3_bit at IC5BUF.B3;
    const register unsigned short int IC5BUF_2 = 2;
    sbit  IC5BUF_2_bit at IC5BUF.B2;
    const register unsigned short int IC5BUF_1 = 1;
    sbit  IC5BUF_1_bit at IC5BUF.B1;
    const register unsigned short int IC5BUF_0 = 0;
    sbit  IC5BUF_0_bit at IC5BUF.B0;

    // IC5CON bits
    sbit  ICSIDL_IC5CON_bit at IC5CON.B13;
    sbit  ICTMR_IC5CON_bit at IC5CON.B7;
    sbit  ICI_1_IC5CON_bit at IC5CON.B6;
    sbit  ICI_0_IC5CON_bit at IC5CON.B5;
    sbit  ICOV_IC5CON_bit at IC5CON.B4;
    sbit  ICBNE_IC5CON_bit at IC5CON.B3;
    sbit  ICM_2_IC5CON_bit at IC5CON.B2;
    sbit  ICM_1_IC5CON_bit at IC5CON.B1;
    sbit  ICM_0_IC5CON_bit at IC5CON.B0;

    // IC6BUF bits
    const register unsigned short int IC6BUF_15 = 15;
    sbit  IC6BUF_15_bit at IC6BUF.B15;
    const register unsigned short int IC6BUF_14 = 14;
    sbit  IC6BUF_14_bit at IC6BUF.B14;
    const register unsigned short int IC6BUF_13 = 13;
    sbit  IC6BUF_13_bit at IC6BUF.B13;
    const register unsigned short int IC6BUF_12 = 12;
    sbit  IC6BUF_12_bit at IC6BUF.B12;
    const register unsigned short int IC6BUF_11 = 11;
    sbit  IC6BUF_11_bit at IC6BUF.B11;
    const register unsigned short int IC6BUF_10 = 10;
    sbit  IC6BUF_10_bit at IC6BUF.B10;
    const register unsigned short int IC6BUF_9 = 9;
    sbit  IC6BUF_9_bit at IC6BUF.B9;
    const register unsigned short int IC6BUF_8 = 8;
    sbit  IC6BUF_8_bit at IC6BUF.B8;
    const register unsigned short int IC6BUF_7 = 7;
    sbit  IC6BUF_7_bit at IC6BUF.B7;
    const register unsigned short int IC6BUF_6 = 6;
    sbit  IC6BUF_6_bit at IC6BUF.B6;
    const register unsigned short int IC6BUF_5 = 5;
    sbit  IC6BUF_5_bit at IC6BUF.B5;
    const register unsigned short int IC6BUF_4 = 4;
    sbit  IC6BUF_4_bit at IC6BUF.B4;
    const register unsigned short int IC6BUF_3 = 3;
    sbit  IC6BUF_3_bit at IC6BUF.B3;
    const register unsigned short int IC6BUF_2 = 2;
    sbit  IC6BUF_2_bit at IC6BUF.B2;
    const register unsigned short int IC6BUF_1 = 1;
    sbit  IC6BUF_1_bit at IC6BUF.B1;
    const register unsigned short int IC6BUF_0 = 0;
    sbit  IC6BUF_0_bit at IC6BUF.B0;

    // IC6CON bits
    sbit  ICSIDL_IC6CON_bit at IC6CON.B13;
    sbit  ICTMR_IC6CON_bit at IC6CON.B7;
    sbit  ICI_1_IC6CON_bit at IC6CON.B6;
    sbit  ICI_0_IC6CON_bit at IC6CON.B5;
    sbit  ICOV_IC6CON_bit at IC6CON.B4;
    sbit  ICBNE_IC6CON_bit at IC6CON.B3;
    sbit  ICM_2_IC6CON_bit at IC6CON.B2;
    sbit  ICM_1_IC6CON_bit at IC6CON.B1;
    sbit  ICM_0_IC6CON_bit at IC6CON.B0;

    // IC7BUF bits
    const register unsigned short int IC7BUF_15 = 15;
    sbit  IC7BUF_15_bit at IC7BUF.B15;
    const register unsigned short int IC7BUF_14 = 14;
    sbit  IC7BUF_14_bit at IC7BUF.B14;
    const register unsigned short int IC7BUF_13 = 13;
    sbit  IC7BUF_13_bit at IC7BUF.B13;
    const register unsigned short int IC7BUF_12 = 12;
    sbit  IC7BUF_12_bit at IC7BUF.B12;
    const register unsigned short int IC7BUF_11 = 11;
    sbit  IC7BUF_11_bit at IC7BUF.B11;
    const register unsigned short int IC7BUF_10 = 10;
    sbit  IC7BUF_10_bit at IC7BUF.B10;
    const register unsigned short int IC7BUF_9 = 9;
    sbit  IC7BUF_9_bit at IC7BUF.B9;
    const register unsigned short int IC7BUF_8 = 8;
    sbit  IC7BUF_8_bit at IC7BUF.B8;
    const register unsigned short int IC7BUF_7 = 7;
    sbit  IC7BUF_7_bit at IC7BUF.B7;
    const register unsigned short int IC7BUF_6 = 6;
    sbit  IC7BUF_6_bit at IC7BUF.B6;
    const register unsigned short int IC7BUF_5 = 5;
    sbit  IC7BUF_5_bit at IC7BUF.B5;
    const register unsigned short int IC7BUF_4 = 4;
    sbit  IC7BUF_4_bit at IC7BUF.B4;
    const register unsigned short int IC7BUF_3 = 3;
    sbit  IC7BUF_3_bit at IC7BUF.B3;
    const register unsigned short int IC7BUF_2 = 2;
    sbit  IC7BUF_2_bit at IC7BUF.B2;
    const register unsigned short int IC7BUF_1 = 1;
    sbit  IC7BUF_1_bit at IC7BUF.B1;
    const register unsigned short int IC7BUF_0 = 0;
    sbit  IC7BUF_0_bit at IC7BUF.B0;

    // IC7CON bits
    sbit  ICSIDL_IC7CON_bit at IC7CON.B13;
    sbit  ICTMR_IC7CON_bit at IC7CON.B7;
    sbit  ICI_1_IC7CON_bit at IC7CON.B6;
    sbit  ICI_0_IC7CON_bit at IC7CON.B5;
    sbit  ICOV_IC7CON_bit at IC7CON.B4;
    sbit  ICBNE_IC7CON_bit at IC7CON.B3;
    sbit  ICM_2_IC7CON_bit at IC7CON.B2;
    sbit  ICM_1_IC7CON_bit at IC7CON.B1;
    sbit  ICM_0_IC7CON_bit at IC7CON.B0;

    // IC8BUF bits
    const register unsigned short int IC8BUF_15 = 15;
    sbit  IC8BUF_15_bit at IC8BUF.B15;
    const register unsigned short int IC8BUF_14 = 14;
    sbit  IC8BUF_14_bit at IC8BUF.B14;
    const register unsigned short int IC8BUF_13 = 13;
    sbit  IC8BUF_13_bit at IC8BUF.B13;
    const register unsigned short int IC8BUF_12 = 12;
    sbit  IC8BUF_12_bit at IC8BUF.B12;
    const register unsigned short int IC8BUF_11 = 11;
    sbit  IC8BUF_11_bit at IC8BUF.B11;
    const register unsigned short int IC8BUF_10 = 10;
    sbit  IC8BUF_10_bit at IC8BUF.B10;
    const register unsigned short int IC8BUF_9 = 9;
    sbit  IC8BUF_9_bit at IC8BUF.B9;
    const register unsigned short int IC8BUF_8 = 8;
    sbit  IC8BUF_8_bit at IC8BUF.B8;
    const register unsigned short int IC8BUF_7 = 7;
    sbit  IC8BUF_7_bit at IC8BUF.B7;
    const register unsigned short int IC8BUF_6 = 6;
    sbit  IC8BUF_6_bit at IC8BUF.B6;
    const register unsigned short int IC8BUF_5 = 5;
    sbit  IC8BUF_5_bit at IC8BUF.B5;
    const register unsigned short int IC8BUF_4 = 4;
    sbit  IC8BUF_4_bit at IC8BUF.B4;
    const register unsigned short int IC8BUF_3 = 3;
    sbit  IC8BUF_3_bit at IC8BUF.B3;
    const register unsigned short int IC8BUF_2 = 2;
    sbit  IC8BUF_2_bit at IC8BUF.B2;
    const register unsigned short int IC8BUF_1 = 1;
    sbit  IC8BUF_1_bit at IC8BUF.B1;
    const register unsigned short int IC8BUF_0 = 0;
    sbit  IC8BUF_0_bit at IC8BUF.B0;

    // IC8CON bits
    sbit  ICSIDL_IC8CON_bit at IC8CON.B13;
    sbit  ICTMR_IC8CON_bit at IC8CON.B7;
    sbit  ICI_1_IC8CON_bit at IC8CON.B6;
    sbit  ICI_0_IC8CON_bit at IC8CON.B5;
    sbit  ICOV_IC8CON_bit at IC8CON.B4;
    sbit  ICBNE_IC8CON_bit at IC8CON.B3;
    sbit  ICM_2_IC8CON_bit at IC8CON.B2;
    sbit  ICM_1_IC8CON_bit at IC8CON.B1;
    sbit  ICM_0_IC8CON_bit at IC8CON.B0;

    // OC1RS bits
    const register unsigned short int OC1RS_15 = 15;
    sbit  OC1RS_15_bit at OC1RS.B15;
    const register unsigned short int OC1RS_14 = 14;
    sbit  OC1RS_14_bit at OC1RS.B14;
    const register unsigned short int OC1RS_13 = 13;
    sbit  OC1RS_13_bit at OC1RS.B13;
    const register unsigned short int OC1RS_12 = 12;
    sbit  OC1RS_12_bit at OC1RS.B12;
    const register unsigned short int OC1RS_11 = 11;
    sbit  OC1RS_11_bit at OC1RS.B11;
    const register unsigned short int OC1RS_10 = 10;
    sbit  OC1RS_10_bit at OC1RS.B10;
    const register unsigned short int OC1RS_9 = 9;
    sbit  OC1RS_9_bit at OC1RS.B9;
    const register unsigned short int OC1RS_8 = 8;
    sbit  OC1RS_8_bit at OC1RS.B8;
    const register unsigned short int OC1RS_7 = 7;
    sbit  OC1RS_7_bit at OC1RS.B7;
    const register unsigned short int OC1RS_6 = 6;
    sbit  OC1RS_6_bit at OC1RS.B6;
    const register unsigned short int OC1RS_5 = 5;
    sbit  OC1RS_5_bit at OC1RS.B5;
    const register unsigned short int OC1RS_4 = 4;
    sbit  OC1RS_4_bit at OC1RS.B4;
    const register unsigned short int OC1RS_3 = 3;
    sbit  OC1RS_3_bit at OC1RS.B3;
    const register unsigned short int OC1RS_2 = 2;
    sbit  OC1RS_2_bit at OC1RS.B2;
    const register unsigned short int OC1RS_1 = 1;
    sbit  OC1RS_1_bit at OC1RS.B1;
    const register unsigned short int OC1RS_0 = 0;
    sbit  OC1RS_0_bit at OC1RS.B0;

    // OC1R bits
    const register unsigned short int OC1R_15 = 15;
    sbit  OC1R_15_bit at OC1R.B15;
    const register unsigned short int OC1R_14 = 14;
    sbit  OC1R_14_bit at OC1R.B14;
    const register unsigned short int OC1R_13 = 13;
    sbit  OC1R_13_bit at OC1R.B13;
    const register unsigned short int OC1R_12 = 12;
    sbit  OC1R_12_bit at OC1R.B12;
    const register unsigned short int OC1R_11 = 11;
    sbit  OC1R_11_bit at OC1R.B11;
    const register unsigned short int OC1R_10 = 10;
    sbit  OC1R_10_bit at OC1R.B10;
    const register unsigned short int OC1R_9 = 9;
    sbit  OC1R_9_bit at OC1R.B9;
    const register unsigned short int OC1R_8 = 8;
    sbit  OC1R_8_bit at OC1R.B8;
    const register unsigned short int OC1R_7 = 7;
    sbit  OC1R_7_bit at OC1R.B7;
    const register unsigned short int OC1R_6 = 6;
    sbit  OC1R_6_bit at OC1R.B6;
    const register unsigned short int OC1R_5 = 5;
    sbit  OC1R_5_bit at OC1R.B5;
    const register unsigned short int OC1R_4 = 4;
    sbit  OC1R_4_bit at OC1R.B4;
    const register unsigned short int OC1R_3 = 3;
    sbit  OC1R_3_bit at OC1R.B3;
    const register unsigned short int OC1R_2 = 2;
    sbit  OC1R_2_bit at OC1R.B2;
    const register unsigned short int OC1R_1 = 1;
    sbit  OC1R_1_bit at OC1R.B1;
    const register unsigned short int OC1R_0 = 0;
    sbit  OC1R_0_bit at OC1R.B0;

    // OC1CON bits
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON.B13;
    sbit  OCSIDL_OC1CON_bit at OC1CON.B13;
    const register unsigned short int OCFLT = 4;
    sbit  OCFLT_bit at OC1CON.B4;
    sbit  OCFLT_OC1CON_bit at OC1CON.B4;
    const register unsigned short int OCTSEL = 3;
    sbit  OCTSEL_bit at OC1CON.B3;
    sbit  OCTSEL_OC1CON_bit at OC1CON.B3;
    const register unsigned short int OCM_2 = 2;
    sbit  OCM_2_bit at OC1CON.B2;
    sbit  OCM_2_OC1CON_bit at OC1CON.B2;
    const register unsigned short int OCM_1 = 1;
    sbit  OCM_1_bit at OC1CON.B1;
    sbit  OCM_1_OC1CON_bit at OC1CON.B1;
    const register unsigned short int OCM_0 = 0;
    sbit  OCM_0_bit at OC1CON.B0;
    sbit  OCM_0_OC1CON_bit at OC1CON.B0;

    // OC2RS bits
    const register unsigned short int OC2RS_15 = 15;
    sbit  OC2RS_15_bit at OC2RS.B15;
    const register unsigned short int OC2RS_14 = 14;
    sbit  OC2RS_14_bit at OC2RS.B14;
    const register unsigned short int OC2RS_13 = 13;
    sbit  OC2RS_13_bit at OC2RS.B13;
    const register unsigned short int OC2RS_12 = 12;
    sbit  OC2RS_12_bit at OC2RS.B12;
    const register unsigned short int OC2RS_11 = 11;
    sbit  OC2RS_11_bit at OC2RS.B11;
    const register unsigned short int OC2RS_10 = 10;
    sbit  OC2RS_10_bit at OC2RS.B10;
    const register unsigned short int OC2RS_9 = 9;
    sbit  OC2RS_9_bit at OC2RS.B9;
    const register unsigned short int OC2RS_8 = 8;
    sbit  OC2RS_8_bit at OC2RS.B8;
    const register unsigned short int OC2RS_7 = 7;
    sbit  OC2RS_7_bit at OC2RS.B7;
    const register unsigned short int OC2RS_6 = 6;
    sbit  OC2RS_6_bit at OC2RS.B6;
    const register unsigned short int OC2RS_5 = 5;
    sbit  OC2RS_5_bit at OC2RS.B5;
    const register unsigned short int OC2RS_4 = 4;
    sbit  OC2RS_4_bit at OC2RS.B4;
    const register unsigned short int OC2RS_3 = 3;
    sbit  OC2RS_3_bit at OC2RS.B3;
    const register unsigned short int OC2RS_2 = 2;
    sbit  OC2RS_2_bit at OC2RS.B2;
    const register unsigned short int OC2RS_1 = 1;
    sbit  OC2RS_1_bit at OC2RS.B1;
    const register unsigned short int OC2RS_0 = 0;
    sbit  OC2RS_0_bit at OC2RS.B0;

    // OC2R bits
    const register unsigned short int OC2R_15 = 15;
    sbit  OC2R_15_bit at OC2R.B15;
    const register unsigned short int OC2R_14 = 14;
    sbit  OC2R_14_bit at OC2R.B14;
    const register unsigned short int OC2R_13 = 13;
    sbit  OC2R_13_bit at OC2R.B13;
    const register unsigned short int OC2R_12 = 12;
    sbit  OC2R_12_bit at OC2R.B12;
    const register unsigned short int OC2R_11 = 11;
    sbit  OC2R_11_bit at OC2R.B11;
    const register unsigned short int OC2R_10 = 10;
    sbit  OC2R_10_bit at OC2R.B10;
    const register unsigned short int OC2R_9 = 9;
    sbit  OC2R_9_bit at OC2R.B9;
    const register unsigned short int OC2R_8 = 8;
    sbit  OC2R_8_bit at OC2R.B8;
    const register unsigned short int OC2R_7 = 7;
    sbit  OC2R_7_bit at OC2R.B7;
    const register unsigned short int OC2R_6 = 6;
    sbit  OC2R_6_bit at OC2R.B6;
    const register unsigned short int OC2R_5 = 5;
    sbit  OC2R_5_bit at OC2R.B5;
    const register unsigned short int OC2R_4 = 4;
    sbit  OC2R_4_bit at OC2R.B4;
    const register unsigned short int OC2R_3 = 3;
    sbit  OC2R_3_bit at OC2R.B3;
    const register unsigned short int OC2R_2 = 2;
    sbit  OC2R_2_bit at OC2R.B2;
    const register unsigned short int OC2R_1 = 1;
    sbit  OC2R_1_bit at OC2R.B1;
    const register unsigned short int OC2R_0 = 0;
    sbit  OC2R_0_bit at OC2R.B0;

    // OC2CON bits
    sbit  OCSIDL_OC2CON_bit at OC2CON.B13;
    sbit  OCFLT_OC2CON_bit at OC2CON.B4;
    sbit  OCTSEL_OC2CON_bit at OC2CON.B3;
    sbit  OCM_2_OC2CON_bit at OC2CON.B2;
    sbit  OCM_1_OC2CON_bit at OC2CON.B1;
    sbit  OCM_0_OC2CON_bit at OC2CON.B0;

    // OC3RS bits
    const register unsigned short int OC3RS_15 = 15;
    sbit  OC3RS_15_bit at OC3RS.B15;
    const register unsigned short int OC3RS_14 = 14;
    sbit  OC3RS_14_bit at OC3RS.B14;
    const register unsigned short int OC3RS_13 = 13;
    sbit  OC3RS_13_bit at OC3RS.B13;
    const register unsigned short int OC3RS_12 = 12;
    sbit  OC3RS_12_bit at OC3RS.B12;
    const register unsigned short int OC3RS_11 = 11;
    sbit  OC3RS_11_bit at OC3RS.B11;
    const register unsigned short int OC3RS_10 = 10;
    sbit  OC3RS_10_bit at OC3RS.B10;
    const register unsigned short int OC3RS_9 = 9;
    sbit  OC3RS_9_bit at OC3RS.B9;
    const register unsigned short int OC3RS_8 = 8;
    sbit  OC3RS_8_bit at OC3RS.B8;
    const register unsigned short int OC3RS_7 = 7;
    sbit  OC3RS_7_bit at OC3RS.B7;
    const register unsigned short int OC3RS_6 = 6;
    sbit  OC3RS_6_bit at OC3RS.B6;
    const register unsigned short int OC3RS_5 = 5;
    sbit  OC3RS_5_bit at OC3RS.B5;
    const register unsigned short int OC3RS_4 = 4;
    sbit  OC3RS_4_bit at OC3RS.B4;
    const register unsigned short int OC3RS_3 = 3;
    sbit  OC3RS_3_bit at OC3RS.B3;
    const register unsigned short int OC3RS_2 = 2;
    sbit  OC3RS_2_bit at OC3RS.B2;
    const register unsigned short int OC3RS_1 = 1;
    sbit  OC3RS_1_bit at OC3RS.B1;
    const register unsigned short int OC3RS_0 = 0;
    sbit  OC3RS_0_bit at OC3RS.B0;

    // OC3R bits
    const register unsigned short int OC3R_15 = 15;
    sbit  OC3R_15_bit at OC3R.B15;
    const register unsigned short int OC3R_14 = 14;
    sbit  OC3R_14_bit at OC3R.B14;
    const register unsigned short int OC3R_13 = 13;
    sbit  OC3R_13_bit at OC3R.B13;
    const register unsigned short int OC3R_12 = 12;
    sbit  OC3R_12_bit at OC3R.B12;
    const register unsigned short int OC3R_11 = 11;
    sbit  OC3R_11_bit at OC3R.B11;
    const register unsigned short int OC3R_10 = 10;
    sbit  OC3R_10_bit at OC3R.B10;
    const register unsigned short int OC3R_9 = 9;
    sbit  OC3R_9_bit at OC3R.B9;
    const register unsigned short int OC3R_8 = 8;
    sbit  OC3R_8_bit at OC3R.B8;
    const register unsigned short int OC3R_7 = 7;
    sbit  OC3R_7_bit at OC3R.B7;
    const register unsigned short int OC3R_6 = 6;
    sbit  OC3R_6_bit at OC3R.B6;
    const register unsigned short int OC3R_5 = 5;
    sbit  OC3R_5_bit at OC3R.B5;
    const register unsigned short int OC3R_4 = 4;
    sbit  OC3R_4_bit at OC3R.B4;
    const register unsigned short int OC3R_3 = 3;
    sbit  OC3R_3_bit at OC3R.B3;
    const register unsigned short int OC3R_2 = 2;
    sbit  OC3R_2_bit at OC3R.B2;
    const register unsigned short int OC3R_1 = 1;
    sbit  OC3R_1_bit at OC3R.B1;
    const register unsigned short int OC3R_0 = 0;
    sbit  OC3R_0_bit at OC3R.B0;

    // OC3CON bits
    sbit  OCSIDL_OC3CON_bit at OC3CON.B13;
    sbit  OCFLT_OC3CON_bit at OC3CON.B4;
    sbit  OCTSEL_OC3CON_bit at OC3CON.B3;
    sbit  OCM_2_OC3CON_bit at OC3CON.B2;
    sbit  OCM_1_OC3CON_bit at OC3CON.B1;
    sbit  OCM_0_OC3CON_bit at OC3CON.B0;

    // OC4RS bits
    const register unsigned short int OC4RS_15 = 15;
    sbit  OC4RS_15_bit at OC4RS.B15;
    const register unsigned short int OC4RS_14 = 14;
    sbit  OC4RS_14_bit at OC4RS.B14;
    const register unsigned short int OC4RS_13 = 13;
    sbit  OC4RS_13_bit at OC4RS.B13;
    const register unsigned short int OC4RS_12 = 12;
    sbit  OC4RS_12_bit at OC4RS.B12;
    const register unsigned short int OC4RS_11 = 11;
    sbit  OC4RS_11_bit at OC4RS.B11;
    const register unsigned short int OC4RS_10 = 10;
    sbit  OC4RS_10_bit at OC4RS.B10;
    const register unsigned short int OC4RS_9 = 9;
    sbit  OC4RS_9_bit at OC4RS.B9;
    const register unsigned short int OC4RS_8 = 8;
    sbit  OC4RS_8_bit at OC4RS.B8;
    const register unsigned short int OC4RS_7 = 7;
    sbit  OC4RS_7_bit at OC4RS.B7;
    const register unsigned short int OC4RS_6 = 6;
    sbit  OC4RS_6_bit at OC4RS.B6;
    const register unsigned short int OC4RS_5 = 5;
    sbit  OC4RS_5_bit at OC4RS.B5;
    const register unsigned short int OC4RS_4 = 4;
    sbit  OC4RS_4_bit at OC4RS.B4;
    const register unsigned short int OC4RS_3 = 3;
    sbit  OC4RS_3_bit at OC4RS.B3;
    const register unsigned short int OC4RS_2 = 2;
    sbit  OC4RS_2_bit at OC4RS.B2;
    const register unsigned short int OC4RS_1 = 1;
    sbit  OC4RS_1_bit at OC4RS.B1;
    const register unsigned short int OC4RS_0 = 0;
    sbit  OC4RS_0_bit at OC4RS.B0;

    // OC4R bits
    const register unsigned short int OC4R_15 = 15;
    sbit  OC4R_15_bit at OC4R.B15;
    const register unsigned short int OC4R_14 = 14;
    sbit  OC4R_14_bit at OC4R.B14;
    const register unsigned short int OC4R_13 = 13;
    sbit  OC4R_13_bit at OC4R.B13;
    const register unsigned short int OC4R_12 = 12;
    sbit  OC4R_12_bit at OC4R.B12;
    const register unsigned short int OC4R_11 = 11;
    sbit  OC4R_11_bit at OC4R.B11;
    const register unsigned short int OC4R_10 = 10;
    sbit  OC4R_10_bit at OC4R.B10;
    const register unsigned short int OC4R_9 = 9;
    sbit  OC4R_9_bit at OC4R.B9;
    const register unsigned short int OC4R_8 = 8;
    sbit  OC4R_8_bit at OC4R.B8;
    const register unsigned short int OC4R_7 = 7;
    sbit  OC4R_7_bit at OC4R.B7;
    const register unsigned short int OC4R_6 = 6;
    sbit  OC4R_6_bit at OC4R.B6;
    const register unsigned short int OC4R_5 = 5;
    sbit  OC4R_5_bit at OC4R.B5;
    const register unsigned short int OC4R_4 = 4;
    sbit  OC4R_4_bit at OC4R.B4;
    const register unsigned short int OC4R_3 = 3;
    sbit  OC4R_3_bit at OC4R.B3;
    const register unsigned short int OC4R_2 = 2;
    sbit  OC4R_2_bit at OC4R.B2;
    const register unsigned short int OC4R_1 = 1;
    sbit  OC4R_1_bit at OC4R.B1;
    const register unsigned short int OC4R_0 = 0;
    sbit  OC4R_0_bit at OC4R.B0;

    // OC4CON bits
    sbit  OCSIDL_OC4CON_bit at OC4CON.B13;
    sbit  OCFLT_OC4CON_bit at OC4CON.B4;
    sbit  OCTSEL_OC4CON_bit at OC4CON.B3;
    sbit  OCM_2_OC4CON_bit at OC4CON.B2;
    sbit  OCM_1_OC4CON_bit at OC4CON.B1;
    sbit  OCM_0_OC4CON_bit at OC4CON.B0;

    // OC5RS bits
    const register unsigned short int OC5RS_15 = 15;
    sbit  OC5RS_15_bit at OC5RS.B15;
    const register unsigned short int OC5RS_14 = 14;
    sbit  OC5RS_14_bit at OC5RS.B14;
    const register unsigned short int OC5RS_13 = 13;
    sbit  OC5RS_13_bit at OC5RS.B13;
    const register unsigned short int OC5RS_12 = 12;
    sbit  OC5RS_12_bit at OC5RS.B12;
    const register unsigned short int OC5RS_11 = 11;
    sbit  OC5RS_11_bit at OC5RS.B11;
    const register unsigned short int OC5RS_10 = 10;
    sbit  OC5RS_10_bit at OC5RS.B10;
    const register unsigned short int OC5RS_9 = 9;
    sbit  OC5RS_9_bit at OC5RS.B9;
    const register unsigned short int OC5RS_8 = 8;
    sbit  OC5RS_8_bit at OC5RS.B8;
    const register unsigned short int OC5RS_7 = 7;
    sbit  OC5RS_7_bit at OC5RS.B7;
    const register unsigned short int OC5RS_6 = 6;
    sbit  OC5RS_6_bit at OC5RS.B6;
    const register unsigned short int OC5RS_5 = 5;
    sbit  OC5RS_5_bit at OC5RS.B5;
    const register unsigned short int OC5RS_4 = 4;
    sbit  OC5RS_4_bit at OC5RS.B4;
    const register unsigned short int OC5RS_3 = 3;
    sbit  OC5RS_3_bit at OC5RS.B3;
    const register unsigned short int OC5RS_2 = 2;
    sbit  OC5RS_2_bit at OC5RS.B2;
    const register unsigned short int OC5RS_1 = 1;
    sbit  OC5RS_1_bit at OC5RS.B1;
    const register unsigned short int OC5RS_0 = 0;
    sbit  OC5RS_0_bit at OC5RS.B0;

    // OC5R bits
    const register unsigned short int OC5R_15 = 15;
    sbit  OC5R_15_bit at OC5R.B15;
    const register unsigned short int OC5R_14 = 14;
    sbit  OC5R_14_bit at OC5R.B14;
    const register unsigned short int OC5R_13 = 13;
    sbit  OC5R_13_bit at OC5R.B13;
    const register unsigned short int OC5R_12 = 12;
    sbit  OC5R_12_bit at OC5R.B12;
    const register unsigned short int OC5R_11 = 11;
    sbit  OC5R_11_bit at OC5R.B11;
    const register unsigned short int OC5R_10 = 10;
    sbit  OC5R_10_bit at OC5R.B10;
    const register unsigned short int OC5R_9 = 9;
    sbit  OC5R_9_bit at OC5R.B9;
    const register unsigned short int OC5R_8 = 8;
    sbit  OC5R_8_bit at OC5R.B8;
    const register unsigned short int OC5R_7 = 7;
    sbit  OC5R_7_bit at OC5R.B7;
    const register unsigned short int OC5R_6 = 6;
    sbit  OC5R_6_bit at OC5R.B6;
    const register unsigned short int OC5R_5 = 5;
    sbit  OC5R_5_bit at OC5R.B5;
    const register unsigned short int OC5R_4 = 4;
    sbit  OC5R_4_bit at OC5R.B4;
    const register unsigned short int OC5R_3 = 3;
    sbit  OC5R_3_bit at OC5R.B3;
    const register unsigned short int OC5R_2 = 2;
    sbit  OC5R_2_bit at OC5R.B2;
    const register unsigned short int OC5R_1 = 1;
    sbit  OC5R_1_bit at OC5R.B1;
    const register unsigned short int OC5R_0 = 0;
    sbit  OC5R_0_bit at OC5R.B0;

    // OC5CON bits
    sbit  OCSIDL_OC5CON_bit at OC5CON.B13;
    sbit  OCFLT_OC5CON_bit at OC5CON.B4;
    sbit  OCTSEL_OC5CON_bit at OC5CON.B3;
    sbit  OCM_2_OC5CON_bit at OC5CON.B2;
    sbit  OCM_1_OC5CON_bit at OC5CON.B1;
    sbit  OCM_0_OC5CON_bit at OC5CON.B0;

    // OC6RS bits
    const register unsigned short int OC6RS_15 = 15;
    sbit  OC6RS_15_bit at OC6RS.B15;
    const register unsigned short int OC6RS_14 = 14;
    sbit  OC6RS_14_bit at OC6RS.B14;
    const register unsigned short int OC6RS_13 = 13;
    sbit  OC6RS_13_bit at OC6RS.B13;
    const register unsigned short int OC6RS_12 = 12;
    sbit  OC6RS_12_bit at OC6RS.B12;
    const register unsigned short int OC6RS_11 = 11;
    sbit  OC6RS_11_bit at OC6RS.B11;
    const register unsigned short int OC6RS_10 = 10;
    sbit  OC6RS_10_bit at OC6RS.B10;
    const register unsigned short int OC6RS_9 = 9;
    sbit  OC6RS_9_bit at OC6RS.B9;
    const register unsigned short int OC6RS_8 = 8;
    sbit  OC6RS_8_bit at OC6RS.B8;
    const register unsigned short int OC6RS_7 = 7;
    sbit  OC6RS_7_bit at OC6RS.B7;
    const register unsigned short int OC6RS_6 = 6;
    sbit  OC6RS_6_bit at OC6RS.B6;
    const register unsigned short int OC6RS_5 = 5;
    sbit  OC6RS_5_bit at OC6RS.B5;
    const register unsigned short int OC6RS_4 = 4;
    sbit  OC6RS_4_bit at OC6RS.B4;
    const register unsigned short int OC6RS_3 = 3;
    sbit  OC6RS_3_bit at OC6RS.B3;
    const register unsigned short int OC6RS_2 = 2;
    sbit  OC6RS_2_bit at OC6RS.B2;
    const register unsigned short int OC6RS_1 = 1;
    sbit  OC6RS_1_bit at OC6RS.B1;
    const register unsigned short int OC6RS_0 = 0;
    sbit  OC6RS_0_bit at OC6RS.B0;

    // OC6R bits
    const register unsigned short int OC6R_15 = 15;
    sbit  OC6R_15_bit at OC6R.B15;
    const register unsigned short int OC6R_14 = 14;
    sbit  OC6R_14_bit at OC6R.B14;
    const register unsigned short int OC6R_13 = 13;
    sbit  OC6R_13_bit at OC6R.B13;
    const register unsigned short int OC6R_12 = 12;
    sbit  OC6R_12_bit at OC6R.B12;
    const register unsigned short int OC6R_11 = 11;
    sbit  OC6R_11_bit at OC6R.B11;
    const register unsigned short int OC6R_10 = 10;
    sbit  OC6R_10_bit at OC6R.B10;
    const register unsigned short int OC6R_9 = 9;
    sbit  OC6R_9_bit at OC6R.B9;
    const register unsigned short int OC6R_8 = 8;
    sbit  OC6R_8_bit at OC6R.B8;
    const register unsigned short int OC6R_7 = 7;
    sbit  OC6R_7_bit at OC6R.B7;
    const register unsigned short int OC6R_6 = 6;
    sbit  OC6R_6_bit at OC6R.B6;
    const register unsigned short int OC6R_5 = 5;
    sbit  OC6R_5_bit at OC6R.B5;
    const register unsigned short int OC6R_4 = 4;
    sbit  OC6R_4_bit at OC6R.B4;
    const register unsigned short int OC6R_3 = 3;
    sbit  OC6R_3_bit at OC6R.B3;
    const register unsigned short int OC6R_2 = 2;
    sbit  OC6R_2_bit at OC6R.B2;
    const register unsigned short int OC6R_1 = 1;
    sbit  OC6R_1_bit at OC6R.B1;
    const register unsigned short int OC6R_0 = 0;
    sbit  OC6R_0_bit at OC6R.B0;

    // OC6CON bits
    sbit  OCSIDL_OC6CON_bit at OC6CON.B13;
    sbit  OCFLT_OC6CON_bit at OC6CON.B4;
    sbit  OCTSEL_OC6CON_bit at OC6CON.B3;
    sbit  OCM_2_OC6CON_bit at OC6CON.B2;
    sbit  OCM_1_OC6CON_bit at OC6CON.B1;
    sbit  OCM_0_OC6CON_bit at OC6CON.B0;

    // OC7RS bits
    const register unsigned short int OC7RS_15 = 15;
    sbit  OC7RS_15_bit at OC7RS.B15;
    const register unsigned short int OC7RS_14 = 14;
    sbit  OC7RS_14_bit at OC7RS.B14;
    const register unsigned short int OC7RS_13 = 13;
    sbit  OC7RS_13_bit at OC7RS.B13;
    const register unsigned short int OC7RS_12 = 12;
    sbit  OC7RS_12_bit at OC7RS.B12;
    const register unsigned short int OC7RS_11 = 11;
    sbit  OC7RS_11_bit at OC7RS.B11;
    const register unsigned short int OC7RS_10 = 10;
    sbit  OC7RS_10_bit at OC7RS.B10;
    const register unsigned short int OC7RS_9 = 9;
    sbit  OC7RS_9_bit at OC7RS.B9;
    const register unsigned short int OC7RS_8 = 8;
    sbit  OC7RS_8_bit at OC7RS.B8;
    const register unsigned short int OC7RS_7 = 7;
    sbit  OC7RS_7_bit at OC7RS.B7;
    const register unsigned short int OC7RS_6 = 6;
    sbit  OC7RS_6_bit at OC7RS.B6;
    const register unsigned short int OC7RS_5 = 5;
    sbit  OC7RS_5_bit at OC7RS.B5;
    const register unsigned short int OC7RS_4 = 4;
    sbit  OC7RS_4_bit at OC7RS.B4;
    const register unsigned short int OC7RS_3 = 3;
    sbit  OC7RS_3_bit at OC7RS.B3;
    const register unsigned short int OC7RS_2 = 2;
    sbit  OC7RS_2_bit at OC7RS.B2;
    const register unsigned short int OC7RS_1 = 1;
    sbit  OC7RS_1_bit at OC7RS.B1;
    const register unsigned short int OC7RS_0 = 0;
    sbit  OC7RS_0_bit at OC7RS.B0;

    // OC7R bits
    const register unsigned short int OC7R_15 = 15;
    sbit  OC7R_15_bit at OC7R.B15;
    const register unsigned short int OC7R_14 = 14;
    sbit  OC7R_14_bit at OC7R.B14;
    const register unsigned short int OC7R_13 = 13;
    sbit  OC7R_13_bit at OC7R.B13;
    const register unsigned short int OC7R_12 = 12;
    sbit  OC7R_12_bit at OC7R.B12;
    const register unsigned short int OC7R_11 = 11;
    sbit  OC7R_11_bit at OC7R.B11;
    const register unsigned short int OC7R_10 = 10;
    sbit  OC7R_10_bit at OC7R.B10;
    const register unsigned short int OC7R_9 = 9;
    sbit  OC7R_9_bit at OC7R.B9;
    const register unsigned short int OC7R_8 = 8;
    sbit  OC7R_8_bit at OC7R.B8;
    const register unsigned short int OC7R_7 = 7;
    sbit  OC7R_7_bit at OC7R.B7;
    const register unsigned short int OC7R_6 = 6;
    sbit  OC7R_6_bit at OC7R.B6;
    const register unsigned short int OC7R_5 = 5;
    sbit  OC7R_5_bit at OC7R.B5;
    const register unsigned short int OC7R_4 = 4;
    sbit  OC7R_4_bit at OC7R.B4;
    const register unsigned short int OC7R_3 = 3;
    sbit  OC7R_3_bit at OC7R.B3;
    const register unsigned short int OC7R_2 = 2;
    sbit  OC7R_2_bit at OC7R.B2;
    const register unsigned short int OC7R_1 = 1;
    sbit  OC7R_1_bit at OC7R.B1;
    const register unsigned short int OC7R_0 = 0;
    sbit  OC7R_0_bit at OC7R.B0;

    // OC7CON bits
    sbit  OCSIDL_OC7CON_bit at OC7CON.B13;
    sbit  OCFLT_OC7CON_bit at OC7CON.B4;
    sbit  OCTSEL_OC7CON_bit at OC7CON.B3;
    sbit  OCM_2_OC7CON_bit at OC7CON.B2;
    sbit  OCM_1_OC7CON_bit at OC7CON.B1;
    sbit  OCM_0_OC7CON_bit at OC7CON.B0;

    // OC8RS bits
    const register unsigned short int OC8RS_15 = 15;
    sbit  OC8RS_15_bit at OC8RS.B15;
    const register unsigned short int OC8RS_14 = 14;
    sbit  OC8RS_14_bit at OC8RS.B14;
    const register unsigned short int OC8RS_13 = 13;
    sbit  OC8RS_13_bit at OC8RS.B13;
    const register unsigned short int OC8RS_12 = 12;
    sbit  OC8RS_12_bit at OC8RS.B12;
    const register unsigned short int OC8RS_11 = 11;
    sbit  OC8RS_11_bit at OC8RS.B11;
    const register unsigned short int OC8RS_10 = 10;
    sbit  OC8RS_10_bit at OC8RS.B10;
    const register unsigned short int OC8RS_9 = 9;
    sbit  OC8RS_9_bit at OC8RS.B9;
    const register unsigned short int OC8RS_8 = 8;
    sbit  OC8RS_8_bit at OC8RS.B8;
    const register unsigned short int OC8RS_7 = 7;
    sbit  OC8RS_7_bit at OC8RS.B7;
    const register unsigned short int OC8RS_6 = 6;
    sbit  OC8RS_6_bit at OC8RS.B6;
    const register unsigned short int OC8RS_5 = 5;
    sbit  OC8RS_5_bit at OC8RS.B5;
    const register unsigned short int OC8RS_4 = 4;
    sbit  OC8RS_4_bit at OC8RS.B4;
    const register unsigned short int OC8RS_3 = 3;
    sbit  OC8RS_3_bit at OC8RS.B3;
    const register unsigned short int OC8RS_2 = 2;
    sbit  OC8RS_2_bit at OC8RS.B2;
    const register unsigned short int OC8RS_1 = 1;
    sbit  OC8RS_1_bit at OC8RS.B1;
    const register unsigned short int OC8RS_0 = 0;
    sbit  OC8RS_0_bit at OC8RS.B0;

    // OC8R bits
    const register unsigned short int OC8R_15 = 15;
    sbit  OC8R_15_bit at OC8R.B15;
    const register unsigned short int OC8R_14 = 14;
    sbit  OC8R_14_bit at OC8R.B14;
    const register unsigned short int OC8R_13 = 13;
    sbit  OC8R_13_bit at OC8R.B13;
    const register unsigned short int OC8R_12 = 12;
    sbit  OC8R_12_bit at OC8R.B12;
    const register unsigned short int OC8R_11 = 11;
    sbit  OC8R_11_bit at OC8R.B11;
    const register unsigned short int OC8R_10 = 10;
    sbit  OC8R_10_bit at OC8R.B10;
    const register unsigned short int OC8R_9 = 9;
    sbit  OC8R_9_bit at OC8R.B9;
    const register unsigned short int OC8R_8 = 8;
    sbit  OC8R_8_bit at OC8R.B8;
    const register unsigned short int OC8R_7 = 7;
    sbit  OC8R_7_bit at OC8R.B7;
    const register unsigned short int OC8R_6 = 6;
    sbit  OC8R_6_bit at OC8R.B6;
    const register unsigned short int OC8R_5 = 5;
    sbit  OC8R_5_bit at OC8R.B5;
    const register unsigned short int OC8R_4 = 4;
    sbit  OC8R_4_bit at OC8R.B4;
    const register unsigned short int OC8R_3 = 3;
    sbit  OC8R_3_bit at OC8R.B3;
    const register unsigned short int OC8R_2 = 2;
    sbit  OC8R_2_bit at OC8R.B2;
    const register unsigned short int OC8R_1 = 1;
    sbit  OC8R_1_bit at OC8R.B1;
    const register unsigned short int OC8R_0 = 0;
    sbit  OC8R_0_bit at OC8R.B0;

    // OC8CON bits
    sbit  OCSIDL_OC8CON_bit at OC8CON.B13;
    sbit  OCFLT_OC8CON_bit at OC8CON.B4;
    sbit  OCTSEL_OC8CON_bit at OC8CON.B3;
    sbit  OCM_2_OC8CON_bit at OC8CON.B2;
    sbit  OCM_1_OC8CON_bit at OC8CON.B1;
    sbit  OCM_0_OC8CON_bit at OC8CON.B0;

    // I2CRCV bits
    const register unsigned short int I2CRCV_7 = 7;
    sbit  I2CRCV_7_bit at I2CRCV.B7;
    const register unsigned short int I2CRCV_6 = 6;
    sbit  I2CRCV_6_bit at I2CRCV.B6;
    const register unsigned short int I2CRCV_5 = 5;
    sbit  I2CRCV_5_bit at I2CRCV.B5;
    const register unsigned short int I2CRCV_4 = 4;
    sbit  I2CRCV_4_bit at I2CRCV.B4;
    const register unsigned short int I2CRCV_3 = 3;
    sbit  I2CRCV_3_bit at I2CRCV.B3;
    const register unsigned short int I2CRCV_2 = 2;
    sbit  I2CRCV_2_bit at I2CRCV.B2;
    const register unsigned short int I2CRCV_1 = 1;
    sbit  I2CRCV_1_bit at I2CRCV.B1;
    const register unsigned short int I2CRCV_0 = 0;
    sbit  I2CRCV_0_bit at I2CRCV.B0;

    // I2CTRN bits
    const register unsigned short int I2CTRN_7 = 7;
    sbit  I2CTRN_7_bit at I2CTRN.B7;
    const register unsigned short int I2CTRN_6 = 6;
    sbit  I2CTRN_6_bit at I2CTRN.B6;
    const register unsigned short int I2CTRN_5 = 5;
    sbit  I2CTRN_5_bit at I2CTRN.B5;
    const register unsigned short int I2CTRN_4 = 4;
    sbit  I2CTRN_4_bit at I2CTRN.B4;
    const register unsigned short int I2CTRN_3 = 3;
    sbit  I2CTRN_3_bit at I2CTRN.B3;
    const register unsigned short int I2CTRN_2 = 2;
    sbit  I2CTRN_2_bit at I2CTRN.B2;
    const register unsigned short int I2CTRN_1 = 1;
    sbit  I2CTRN_1_bit at I2CTRN.B1;
    const register unsigned short int I2CTRN_0 = 0;
    sbit  I2CTRN_0_bit at I2CTRN.B0;

    // I2CBRG bits
    const register unsigned short int I2CBRG_8 = 8;
    sbit  I2CBRG_8_bit at I2CBRG.B8;
    const register unsigned short int I2CBRG_7 = 7;
    sbit  I2CBRG_7_bit at I2CBRG.B7;
    const register unsigned short int I2CBRG_6 = 6;
    sbit  I2CBRG_6_bit at I2CBRG.B6;
    const register unsigned short int I2CBRG_5 = 5;
    sbit  I2CBRG_5_bit at I2CBRG.B5;
    const register unsigned short int I2CBRG_4 = 4;
    sbit  I2CBRG_4_bit at I2CBRG.B4;
    const register unsigned short int I2CBRG_3 = 3;
    sbit  I2CBRG_3_bit at I2CBRG.B3;
    const register unsigned short int I2CBRG_2 = 2;
    sbit  I2CBRG_2_bit at I2CBRG.B2;
    const register unsigned short int I2CBRG_1 = 1;
    sbit  I2CBRG_1_bit at I2CBRG.B1;
    const register unsigned short int I2CBRG_0 = 0;
    sbit  I2CBRG_0_bit at I2CBRG.B0;

    // I2CCON bits
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2CCON.B15;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2CCON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2CCON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2CCON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2CCON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2CCON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2CCON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2CCON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2CCON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2CCON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2CCON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2CCON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2CCON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2CCON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2CCON.B0;

    // I2CSTAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2CSTAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2CSTAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2CSTAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2CSTAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2CSTAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2CSTAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2CSTAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2CSTAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2CSTAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2CSTAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2CSTAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2CSTAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2CSTAT.B0;

    // I2CADD bits
    const register unsigned short int I2CADD_9 = 9;
    sbit  I2CADD_9_bit at I2CADD.B9;
    const register unsigned short int I2CADD_8 = 8;
    sbit  I2CADD_8_bit at I2CADD.B8;
    const register unsigned short int I2CADD_7 = 7;
    sbit  I2CADD_7_bit at I2CADD.B7;
    const register unsigned short int I2CADD_6 = 6;
    sbit  I2CADD_6_bit at I2CADD.B6;
    const register unsigned short int I2CADD_5 = 5;
    sbit  I2CADD_5_bit at I2CADD.B5;
    const register unsigned short int I2CADD_4 = 4;
    sbit  I2CADD_4_bit at I2CADD.B4;
    const register unsigned short int I2CADD_3 = 3;
    sbit  I2CADD_3_bit at I2CADD.B3;
    const register unsigned short int I2CADD_2 = 2;
    sbit  I2CADD_2_bit at I2CADD.B2;
    const register unsigned short int I2CADD_1 = 1;
    sbit  I2CADD_1_bit at I2CADD.B1;
    const register unsigned short int I2CADD_0 = 0;
    sbit  I2CADD_0_bit at I2CADD.B0;

    // U1MODE bits
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    sbit  UARTEN_U1MODE_bit at U1MODE.B15;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    sbit  USIDL_U1MODE_bit at U1MODE.B13;
    const register unsigned short int ALTIO = 10;
    sbit  ALTIO_bit at U1MODE.B10;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    sbit  WAKE_U1MODE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    sbit  LPBACK_U1MODE_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    sbit  ABAUD_U1MODE_bit at U1MODE.B5;
    const register unsigned short int PDSEL_1 = 2;
    sbit  PDSEL_1_bit at U1MODE.B2;
    sbit  PDSEL_1_U1MODE_bit at U1MODE.B2;
    const register unsigned short int PDSEL_0 = 1;
    sbit  PDSEL_0_bit at U1MODE.B1;
    sbit  PDSEL_0_U1MODE_bit at U1MODE.B1;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;
    sbit  STSEL_U1MODE_bit at U1MODE.B0;

    // U1STA bits
    const register unsigned short int UTXISEL = 15;
    sbit  UTXISEL_bit at U1STA.B15;
    sbit  UTXISEL_U1STA_bit at U1STA.B15;
    const register unsigned short int UTXBRK = 11;
    sbit  UTXBRK_bit at U1STA.B11;
    sbit  UTXBRK_U1STA_bit at U1STA.B11;
    const register unsigned short int UTXEN = 10;
    sbit  UTXEN_bit at U1STA.B10;
    sbit  UTXEN_U1STA_bit at U1STA.B10;
    const register unsigned short int UTXBF = 9;
    sbit  UTXBF_bit at U1STA.B9;
    sbit  UTXBF_U1STA_bit at U1STA.B9;
    const register unsigned short int TRMT = 8;
    sbit  TRMT_bit at U1STA.B8;
    sbit  TRMT_U1STA_bit at U1STA.B8;
    const register unsigned short int URXISEL_1 = 7;
    sbit  URXISEL_1_bit at U1STA.B7;
    sbit  URXISEL_1_U1STA_bit at U1STA.B7;
    const register unsigned short int URXISEL_0 = 6;
    sbit  URXISEL_0_bit at U1STA.B6;
    sbit  URXISEL_0_U1STA_bit at U1STA.B6;
    const register unsigned short int ADDEN = 5;
    sbit  ADDEN_bit at U1STA.B5;
    sbit  ADDEN_U1STA_bit at U1STA.B5;
    const register unsigned short int RIDLE = 4;
    sbit  RIDLE_bit at U1STA.B4;
    sbit  RIDLE_U1STA_bit at U1STA.B4;
    const register unsigned short int PERR = 3;
    sbit  PERR_bit at U1STA.B3;
    sbit  PERR_U1STA_bit at U1STA.B3;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at U1STA.B2;
    sbit  FERR_U1STA_bit at U1STA.B2;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at U1STA.B1;
    sbit  OERR_U1STA_bit at U1STA.B1;
    const register unsigned short int URXDA = 0;
    sbit  URXDA_bit at U1STA.B0;
    sbit  URXDA_U1STA_bit at U1STA.B0;

    // U1TXREG bits
    const register unsigned short int U1TXREG_8 = 8;
    sbit  U1TXREG_8_bit at U1TXREG.B8;
    const register unsigned short int U1TXREG_7 = 7;
    sbit  U1TXREG_7_bit at U1TXREG.B7;
    const register unsigned short int U1TXREG_6 = 6;
    sbit  U1TXREG_6_bit at U1TXREG.B6;
    const register unsigned short int U1TXREG_5 = 5;
    sbit  U1TXREG_5_bit at U1TXREG.B5;
    const register unsigned short int U1TXREG_4 = 4;
    sbit  U1TXREG_4_bit at U1TXREG.B4;
    const register unsigned short int U1TXREG_3 = 3;
    sbit  U1TXREG_3_bit at U1TXREG.B3;
    const register unsigned short int U1TXREG_2 = 2;
    sbit  U1TXREG_2_bit at U1TXREG.B2;
    const register unsigned short int U1TXREG_1 = 1;
    sbit  U1TXREG_1_bit at U1TXREG.B1;
    const register unsigned short int U1TXREG_0 = 0;
    sbit  U1TXREG_0_bit at U1TXREG.B0;

    // U1RXREG bits
    const register unsigned short int U1RXREG_8 = 8;
    sbit  U1RXREG_8_bit at U1RXREG.B8;
    const register unsigned short int U1RXREG_7 = 7;
    sbit  U1RXREG_7_bit at U1RXREG.B7;
    const register unsigned short int U1RXREG_6 = 6;
    sbit  U1RXREG_6_bit at U1RXREG.B6;
    const register unsigned short int U1RXREG_5 = 5;
    sbit  U1RXREG_5_bit at U1RXREG.B5;
    const register unsigned short int U1RXREG_4 = 4;
    sbit  U1RXREG_4_bit at U1RXREG.B4;
    const register unsigned short int U1RXREG_3 = 3;
    sbit  U1RXREG_3_bit at U1RXREG.B3;
    const register unsigned short int U1RXREG_2 = 2;
    sbit  U1RXREG_2_bit at U1RXREG.B2;
    const register unsigned short int U1RXREG_1 = 1;
    sbit  U1RXREG_1_bit at U1RXREG.B1;
    const register unsigned short int U1RXREG_0 = 0;
    sbit  U1RXREG_0_bit at U1RXREG.B0;

    // U1BRG bits
    const register unsigned short int BRG_15 = 15;
    sbit  BRG_15_bit at U1BRG.B15;
    sbit  BRG_15_U1BRG_bit at U1BRG.B15;
    const register unsigned short int BRG_14 = 14;
    sbit  BRG_14_bit at U1BRG.B14;
    sbit  BRG_14_U1BRG_bit at U1BRG.B14;
    const register unsigned short int BRG_13 = 13;
    sbit  BRG_13_bit at U1BRG.B13;
    sbit  BRG_13_U1BRG_bit at U1BRG.B13;
    const register unsigned short int BRG_12 = 12;
    sbit  BRG_12_bit at U1BRG.B12;
    sbit  BRG_12_U1BRG_bit at U1BRG.B12;
    const register unsigned short int BRG_11 = 11;
    sbit  BRG_11_bit at U1BRG.B11;
    sbit  BRG_11_U1BRG_bit at U1BRG.B11;
    const register unsigned short int BRG_10 = 10;
    sbit  BRG_10_bit at U1BRG.B10;
    sbit  BRG_10_U1BRG_bit at U1BRG.B10;
    const register unsigned short int BRG_9 = 9;
    sbit  BRG_9_bit at U1BRG.B9;
    sbit  BRG_9_U1BRG_bit at U1BRG.B9;
    const register unsigned short int BRG_8 = 8;
    sbit  BRG_8_bit at U1BRG.B8;
    sbit  BRG_8_U1BRG_bit at U1BRG.B8;
    const register unsigned short int BRG_7 = 7;
    sbit  BRG_7_bit at U1BRG.B7;
    sbit  BRG_7_U1BRG_bit at U1BRG.B7;
    const register unsigned short int BRG_6 = 6;
    sbit  BRG_6_bit at U1BRG.B6;
    sbit  BRG_6_U1BRG_bit at U1BRG.B6;
    const register unsigned short int BRG_5 = 5;
    sbit  BRG_5_bit at U1BRG.B5;
    sbit  BRG_5_U1BRG_bit at U1BRG.B5;
    const register unsigned short int BRG_4 = 4;
    sbit  BRG_4_bit at U1BRG.B4;
    sbit  BRG_4_U1BRG_bit at U1BRG.B4;
    const register unsigned short int BRG_3 = 3;
    sbit  BRG_3_bit at U1BRG.B3;
    sbit  BRG_3_U1BRG_bit at U1BRG.B3;
    const register unsigned short int BRG_2 = 2;
    sbit  BRG_2_bit at U1BRG.B2;
    sbit  BRG_2_U1BRG_bit at U1BRG.B2;
    const register unsigned short int BRG_1 = 1;
    sbit  BRG_1_bit at U1BRG.B1;
    sbit  BRG_1_U1BRG_bit at U1BRG.B1;
    const register unsigned short int BRG_0 = 0;
    sbit  BRG_0_bit at U1BRG.B0;
    sbit  BRG_0_U1BRG_bit at U1BRG.B0;

    // U2MODE bits
    sbit  UARTEN_U2MODE_bit at U2MODE.B15;
    sbit  USIDL_U2MODE_bit at U2MODE.B13;
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  PDSEL_1_U2MODE_bit at U2MODE.B2;
    sbit  PDSEL_0_U2MODE_bit at U2MODE.B1;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;

    // U2STA bits
    sbit  UTXISEL_U2STA_bit at U2STA.B15;
    sbit  UTXBRK_U2STA_bit at U2STA.B11;
    sbit  UTXEN_U2STA_bit at U2STA.B10;
    sbit  UTXBF_U2STA_bit at U2STA.B9;
    sbit  TRMT_U2STA_bit at U2STA.B8;
    sbit  URXISEL_1_U2STA_bit at U2STA.B7;
    sbit  URXISEL_0_U2STA_bit at U2STA.B6;
    sbit  ADDEN_U2STA_bit at U2STA.B5;
    sbit  RIDLE_U2STA_bit at U2STA.B4;
    sbit  PERR_U2STA_bit at U2STA.B3;
    sbit  FERR_U2STA_bit at U2STA.B2;
    sbit  OERR_U2STA_bit at U2STA.B1;
    sbit  URXDA_U2STA_bit at U2STA.B0;

    // U2TXREG bits
    const register unsigned short int U2TXREG_8 = 8;
    sbit  U2TXREG_8_bit at U2TXREG.B8;
    const register unsigned short int U2TXREG_7 = 7;
    sbit  U2TXREG_7_bit at U2TXREG.B7;
    const register unsigned short int U2TXREG_6 = 6;
    sbit  U2TXREG_6_bit at U2TXREG.B6;
    const register unsigned short int U2TXREG_5 = 5;
    sbit  U2TXREG_5_bit at U2TXREG.B5;
    const register unsigned short int U2TXREG_4 = 4;
    sbit  U2TXREG_4_bit at U2TXREG.B4;
    const register unsigned short int U2TXREG_3 = 3;
    sbit  U2TXREG_3_bit at U2TXREG.B3;
    const register unsigned short int U2TXREG_2 = 2;
    sbit  U2TXREG_2_bit at U2TXREG.B2;
    const register unsigned short int U2TXREG_1 = 1;
    sbit  U2TXREG_1_bit at U2TXREG.B1;
    const register unsigned short int U2TXREG_0 = 0;
    sbit  U2TXREG_0_bit at U2TXREG.B0;

    // U2RXREG bits
    const register unsigned short int U2RXREG_8 = 8;
    sbit  U2RXREG_8_bit at U2RXREG.B8;
    const register unsigned short int U2RXREG_7 = 7;
    sbit  U2RXREG_7_bit at U2RXREG.B7;
    const register unsigned short int U2RXREG_6 = 6;
    sbit  U2RXREG_6_bit at U2RXREG.B6;
    const register unsigned short int U2RXREG_5 = 5;
    sbit  U2RXREG_5_bit at U2RXREG.B5;
    const register unsigned short int U2RXREG_4 = 4;
    sbit  U2RXREG_4_bit at U2RXREG.B4;
    const register unsigned short int U2RXREG_3 = 3;
    sbit  U2RXREG_3_bit at U2RXREG.B3;
    const register unsigned short int U2RXREG_2 = 2;
    sbit  U2RXREG_2_bit at U2RXREG.B2;
    const register unsigned short int U2RXREG_1 = 1;
    sbit  U2RXREG_1_bit at U2RXREG.B1;
    const register unsigned short int U2RXREG_0 = 0;
    sbit  U2RXREG_0_bit at U2RXREG.B0;

    // U2BRG bits
    sbit  BRG_15_U2BRG_bit at U2BRG.B15;
    sbit  BRG_14_U2BRG_bit at U2BRG.B14;
    sbit  BRG_13_U2BRG_bit at U2BRG.B13;
    sbit  BRG_12_U2BRG_bit at U2BRG.B12;
    sbit  BRG_11_U2BRG_bit at U2BRG.B11;
    sbit  BRG_10_U2BRG_bit at U2BRG.B10;
    sbit  BRG_9_U2BRG_bit at U2BRG.B9;
    sbit  BRG_8_U2BRG_bit at U2BRG.B8;
    sbit  BRG_7_U2BRG_bit at U2BRG.B7;
    sbit  BRG_6_U2BRG_bit at U2BRG.B6;
    sbit  BRG_5_U2BRG_bit at U2BRG.B5;
    sbit  BRG_4_U2BRG_bit at U2BRG.B4;
    sbit  BRG_3_U2BRG_bit at U2BRG.B3;
    sbit  BRG_2_U2BRG_bit at U2BRG.B2;
    sbit  BRG_1_U2BRG_bit at U2BRG.B1;
    sbit  BRG_0_U2BRG_bit at U2BRG.B0;

    // SPI1STAT bits
    const register unsigned short int SPIEN = 15;
    sbit  SPIEN_bit at SPI1STAT.B15;
    sbit  SPIEN_SPI1STAT_bit at SPI1STAT.B15;
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1STAT.B13;
    sbit  SPISIDL_SPI1STAT_bit at SPI1STAT.B13;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    sbit  SPIROV_SPI1STAT_bit at SPI1STAT.B6;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    sbit  SPITBF_SPI1STAT_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;
    sbit  SPIRBF_SPI1STAT_bit at SPI1STAT.B0;

    // SPI1CON bits
    const register unsigned short int FRMEN = 14;
    sbit  FRMEN_bit at SPI1CON.B14;
    sbit  FRMEN_SPI1CON_bit at SPI1CON.B14;
    const register unsigned short int SPIFSD = 13;
    sbit  SPIFSD_bit at SPI1CON.B13;
    sbit  SPIFSD_SPI1CON_bit at SPI1CON.B13;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON.B11;
    sbit  DISSDO_SPI1CON_bit at SPI1CON.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON.B10;
    sbit  MODE16_SPI1CON_bit at SPI1CON.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON.B9;
    sbit  SMP_SPI1CON_bit at SPI1CON.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON.B8;
    sbit  CKE_SPI1CON_bit at SPI1CON.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON.B7;
    sbit  SSEN_SPI1CON_bit at SPI1CON.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON.B6;
    sbit  CKP_SPI1CON_bit at SPI1CON.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON.B5;
    sbit  MSTEN_SPI1CON_bit at SPI1CON.B5;
    const register unsigned short int SPRE2 = 4;
    sbit  SPRE2_bit at SPI1CON.B4;
    sbit  SPRE2_SPI1CON_bit at SPI1CON.B4;
    const register unsigned short int SPRE1 = 3;
    sbit  SPRE1_bit at SPI1CON.B3;
    sbit  SPRE1_SPI1CON_bit at SPI1CON.B3;
    const register unsigned short int SPRE0 = 2;
    sbit  SPRE0_bit at SPI1CON.B2;
    sbit  SPRE0_SPI1CON_bit at SPI1CON.B2;
    const register unsigned short int PPRE1 = 1;
    sbit  PPRE1_bit at SPI1CON.B1;
    sbit  PPRE1_SPI1CON_bit at SPI1CON.B1;
    const register unsigned short int PPRE0 = 0;
    sbit  PPRE0_bit at SPI1CON.B0;
    sbit  PPRE0_SPI1CON_bit at SPI1CON.B0;

    // SPI1BUF bits
    const register unsigned short int SPI1BUF_15 = 15;
    sbit  SPI1BUF_15_bit at SPI1BUF.B15;
    const register unsigned short int SPI1BUF_14 = 14;
    sbit  SPI1BUF_14_bit at SPI1BUF.B14;
    const register unsigned short int SPI1BUF_13 = 13;
    sbit  SPI1BUF_13_bit at SPI1BUF.B13;
    const register unsigned short int SPI1BUF_12 = 12;
    sbit  SPI1BUF_12_bit at SPI1BUF.B12;
    const register unsigned short int SPI1BUF_11 = 11;
    sbit  SPI1BUF_11_bit at SPI1BUF.B11;
    const register unsigned short int SPI1BUF_10 = 10;
    sbit  SPI1BUF_10_bit at SPI1BUF.B10;
    const register unsigned short int SPI1BUF_9 = 9;
    sbit  SPI1BUF_9_bit at SPI1BUF.B9;
    const register unsigned short int SPI1BUF_8 = 8;
    sbit  SPI1BUF_8_bit at SPI1BUF.B8;
    const register unsigned short int SPI1BUF_7 = 7;
    sbit  SPI1BUF_7_bit at SPI1BUF.B7;
    const register unsigned short int SPI1BUF_6 = 6;
    sbit  SPI1BUF_6_bit at SPI1BUF.B6;
    const register unsigned short int SPI1BUF_5 = 5;
    sbit  SPI1BUF_5_bit at SPI1BUF.B5;
    const register unsigned short int SPI1BUF_4 = 4;
    sbit  SPI1BUF_4_bit at SPI1BUF.B4;
    const register unsigned short int SPI1BUF_3 = 3;
    sbit  SPI1BUF_3_bit at SPI1BUF.B3;
    const register unsigned short int SPI1BUF_2 = 2;
    sbit  SPI1BUF_2_bit at SPI1BUF.B2;
    const register unsigned short int SPI1BUF_1 = 1;
    sbit  SPI1BUF_1_bit at SPI1BUF.B1;
    const register unsigned short int SPI1BUF_0 = 0;
    sbit  SPI1BUF_0_bit at SPI1BUF.B0;

    // SPI2STAT bits
    sbit  SPIEN_SPI2STAT_bit at SPI2STAT.B15;
    sbit  SPISIDL_SPI2STAT_bit at SPI2STAT.B13;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
    sbit  SPITBF_SPI2STAT_bit at SPI2STAT.B1;
    sbit  SPIRBF_SPI2STAT_bit at SPI2STAT.B0;

    // SPI2CON bits
    sbit  FRMEN_SPI2CON_bit at SPI2CON.B14;
    sbit  SPIFSD_SPI2CON_bit at SPI2CON.B13;
    sbit  DISSDO_SPI2CON_bit at SPI2CON.B11;
    sbit  MODE16_SPI2CON_bit at SPI2CON.B10;
    sbit  SMP_SPI2CON_bit at SPI2CON.B9;
    sbit  CKE_SPI2CON_bit at SPI2CON.B8;
    sbit  SSEN_SPI2CON_bit at SPI2CON.B7;
    sbit  CKP_SPI2CON_bit at SPI2CON.B6;
    sbit  MSTEN_SPI2CON_bit at SPI2CON.B5;
    sbit  SPRE2_SPI2CON_bit at SPI2CON.B4;
    sbit  SPRE1_SPI2CON_bit at SPI2CON.B3;
    sbit  SPRE0_SPI2CON_bit at SPI2CON.B2;
    sbit  PPRE1_SPI2CON_bit at SPI2CON.B1;
    sbit  PPRE0_SPI2CON_bit at SPI2CON.B0;

    // SPI2BUF bits
    const register unsigned short int SPI2BUF_15 = 15;
    sbit  SPI2BUF_15_bit at SPI2BUF.B15;
    const register unsigned short int SPI2BUF_14 = 14;
    sbit  SPI2BUF_14_bit at SPI2BUF.B14;
    const register unsigned short int SPI2BUF_13 = 13;
    sbit  SPI2BUF_13_bit at SPI2BUF.B13;
    const register unsigned short int SPI2BUF_12 = 12;
    sbit  SPI2BUF_12_bit at SPI2BUF.B12;
    const register unsigned short int SPI2BUF_11 = 11;
    sbit  SPI2BUF_11_bit at SPI2BUF.B11;
    const register unsigned short int SPI2BUF_10 = 10;
    sbit  SPI2BUF_10_bit at SPI2BUF.B10;
    const register unsigned short int SPI2BUF_9 = 9;
    sbit  SPI2BUF_9_bit at SPI2BUF.B9;
    const register unsigned short int SPI2BUF_8 = 8;
    sbit  SPI2BUF_8_bit at SPI2BUF.B8;
    const register unsigned short int SPI2BUF_7 = 7;
    sbit  SPI2BUF_7_bit at SPI2BUF.B7;
    const register unsigned short int SPI2BUF_6 = 6;
    sbit  SPI2BUF_6_bit at SPI2BUF.B6;
    const register unsigned short int SPI2BUF_5 = 5;
    sbit  SPI2BUF_5_bit at SPI2BUF.B5;
    const register unsigned short int SPI2BUF_4 = 4;
    sbit  SPI2BUF_4_bit at SPI2BUF.B4;
    const register unsigned short int SPI2BUF_3 = 3;
    sbit  SPI2BUF_3_bit at SPI2BUF.B3;
    const register unsigned short int SPI2BUF_2 = 2;
    sbit  SPI2BUF_2_bit at SPI2BUF.B2;
    const register unsigned short int SPI2BUF_1 = 1;
    sbit  SPI2BUF_1_bit at SPI2BUF.B1;
    const register unsigned short int SPI2BUF_0 = 0;
    sbit  SPI2BUF_0_bit at SPI2BUF.B0;

    // ADCBUF0 bits
    const register unsigned short int ADCBUF0_11 = 11;
    sbit  ADCBUF0_11_bit at ADCBUF0.B11;
    const register unsigned short int ADCBUF0_10 = 10;
    sbit  ADCBUF0_10_bit at ADCBUF0.B10;
    const register unsigned short int ADCBUF0_9 = 9;
    sbit  ADCBUF0_9_bit at ADCBUF0.B9;
    const register unsigned short int ADCBUF0_8 = 8;
    sbit  ADCBUF0_8_bit at ADCBUF0.B8;
    const register unsigned short int ADCBUF0_7 = 7;
    sbit  ADCBUF0_7_bit at ADCBUF0.B7;
    const register unsigned short int ADCBUF0_6 = 6;
    sbit  ADCBUF0_6_bit at ADCBUF0.B6;
    const register unsigned short int ADCBUF0_5 = 5;
    sbit  ADCBUF0_5_bit at ADCBUF0.B5;
    const register unsigned short int ADCBUF0_4 = 4;
    sbit  ADCBUF0_4_bit at ADCBUF0.B4;
    const register unsigned short int ADCBUF0_3 = 3;
    sbit  ADCBUF0_3_bit at ADCBUF0.B3;
    const register unsigned short int ADCBUF0_2 = 2;
    sbit  ADCBUF0_2_bit at ADCBUF0.B2;
    const register unsigned short int ADCBUF0_1 = 1;
    sbit  ADCBUF0_1_bit at ADCBUF0.B1;
    const register unsigned short int ADCBUF0_0 = 0;
    sbit  ADCBUF0_0_bit at ADCBUF0.B0;

    // ADCBUF1 bits
    const register unsigned short int ADCBUF1_11 = 11;
    sbit  ADCBUF1_11_bit at ADCBUF1.B11;
    const register unsigned short int ADCBUF1_10 = 10;
    sbit  ADCBUF1_10_bit at ADCBUF1.B10;
    const register unsigned short int ADCBUF1_9 = 9;
    sbit  ADCBUF1_9_bit at ADCBUF1.B9;
    const register unsigned short int ADCBUF1_8 = 8;
    sbit  ADCBUF1_8_bit at ADCBUF1.B8;
    const register unsigned short int ADCBUF1_7 = 7;
    sbit  ADCBUF1_7_bit at ADCBUF1.B7;
    const register unsigned short int ADCBUF1_6 = 6;
    sbit  ADCBUF1_6_bit at ADCBUF1.B6;
    const register unsigned short int ADCBUF1_5 = 5;
    sbit  ADCBUF1_5_bit at ADCBUF1.B5;
    const register unsigned short int ADCBUF1_4 = 4;
    sbit  ADCBUF1_4_bit at ADCBUF1.B4;
    const register unsigned short int ADCBUF1_3 = 3;
    sbit  ADCBUF1_3_bit at ADCBUF1.B3;
    const register unsigned short int ADCBUF1_2 = 2;
    sbit  ADCBUF1_2_bit at ADCBUF1.B2;
    const register unsigned short int ADCBUF1_1 = 1;
    sbit  ADCBUF1_1_bit at ADCBUF1.B1;
    const register unsigned short int ADCBUF1_0 = 0;
    sbit  ADCBUF1_0_bit at ADCBUF1.B0;

    // ADCBUF2 bits
    const register unsigned short int ADCBUF2_11 = 11;
    sbit  ADCBUF2_11_bit at ADCBUF2.B11;
    const register unsigned short int ADCBUF2_10 = 10;
    sbit  ADCBUF2_10_bit at ADCBUF2.B10;
    const register unsigned short int ADCBUF2_9 = 9;
    sbit  ADCBUF2_9_bit at ADCBUF2.B9;
    const register unsigned short int ADCBUF2_8 = 8;
    sbit  ADCBUF2_8_bit at ADCBUF2.B8;
    const register unsigned short int ADCBUF2_7 = 7;
    sbit  ADCBUF2_7_bit at ADCBUF2.B7;
    const register unsigned short int ADCBUF2_6 = 6;
    sbit  ADCBUF2_6_bit at ADCBUF2.B6;
    const register unsigned short int ADCBUF2_5 = 5;
    sbit  ADCBUF2_5_bit at ADCBUF2.B5;
    const register unsigned short int ADCBUF2_4 = 4;
    sbit  ADCBUF2_4_bit at ADCBUF2.B4;
    const register unsigned short int ADCBUF2_3 = 3;
    sbit  ADCBUF2_3_bit at ADCBUF2.B3;
    const register unsigned short int ADCBUF2_2 = 2;
    sbit  ADCBUF2_2_bit at ADCBUF2.B2;
    const register unsigned short int ADCBUF2_1 = 1;
    sbit  ADCBUF2_1_bit at ADCBUF2.B1;
    const register unsigned short int ADCBUF2_0 = 0;
    sbit  ADCBUF2_0_bit at ADCBUF2.B0;

    // ADCBUF3 bits
    const register unsigned short int ADCBUF3_11 = 11;
    sbit  ADCBUF3_11_bit at ADCBUF3.B11;
    const register unsigned short int ADCBUF3_10 = 10;
    sbit  ADCBUF3_10_bit at ADCBUF3.B10;
    const register unsigned short int ADCBUF3_9 = 9;
    sbit  ADCBUF3_9_bit at ADCBUF3.B9;
    const register unsigned short int ADCBUF3_8 = 8;
    sbit  ADCBUF3_8_bit at ADCBUF3.B8;
    const register unsigned short int ADCBUF3_7 = 7;
    sbit  ADCBUF3_7_bit at ADCBUF3.B7;
    const register unsigned short int ADCBUF3_6 = 6;
    sbit  ADCBUF3_6_bit at ADCBUF3.B6;
    const register unsigned short int ADCBUF3_5 = 5;
    sbit  ADCBUF3_5_bit at ADCBUF3.B5;
    const register unsigned short int ADCBUF3_4 = 4;
    sbit  ADCBUF3_4_bit at ADCBUF3.B4;
    const register unsigned short int ADCBUF3_3 = 3;
    sbit  ADCBUF3_3_bit at ADCBUF3.B3;
    const register unsigned short int ADCBUF3_2 = 2;
    sbit  ADCBUF3_2_bit at ADCBUF3.B2;
    const register unsigned short int ADCBUF3_1 = 1;
    sbit  ADCBUF3_1_bit at ADCBUF3.B1;
    const register unsigned short int ADCBUF3_0 = 0;
    sbit  ADCBUF3_0_bit at ADCBUF3.B0;

    // ADCBUF4 bits
    const register unsigned short int ADCBUF4_11 = 11;
    sbit  ADCBUF4_11_bit at ADCBUF4.B11;
    const register unsigned short int ADCBUF4_10 = 10;
    sbit  ADCBUF4_10_bit at ADCBUF4.B10;
    const register unsigned short int ADCBUF4_9 = 9;
    sbit  ADCBUF4_9_bit at ADCBUF4.B9;
    const register unsigned short int ADCBUF4_8 = 8;
    sbit  ADCBUF4_8_bit at ADCBUF4.B8;
    const register unsigned short int ADCBUF4_7 = 7;
    sbit  ADCBUF4_7_bit at ADCBUF4.B7;
    const register unsigned short int ADCBUF4_6 = 6;
    sbit  ADCBUF4_6_bit at ADCBUF4.B6;
    const register unsigned short int ADCBUF4_5 = 5;
    sbit  ADCBUF4_5_bit at ADCBUF4.B5;
    const register unsigned short int ADCBUF4_4 = 4;
    sbit  ADCBUF4_4_bit at ADCBUF4.B4;
    const register unsigned short int ADCBUF4_3 = 3;
    sbit  ADCBUF4_3_bit at ADCBUF4.B3;
    const register unsigned short int ADCBUF4_2 = 2;
    sbit  ADCBUF4_2_bit at ADCBUF4.B2;
    const register unsigned short int ADCBUF4_1 = 1;
    sbit  ADCBUF4_1_bit at ADCBUF4.B1;
    const register unsigned short int ADCBUF4_0 = 0;
    sbit  ADCBUF4_0_bit at ADCBUF4.B0;

    // ADCBUF5 bits
    const register unsigned short int ADCBUF5_11 = 11;
    sbit  ADCBUF5_11_bit at ADCBUF5.B11;
    const register unsigned short int ADCBUF5_10 = 10;
    sbit  ADCBUF5_10_bit at ADCBUF5.B10;
    const register unsigned short int ADCBUF5_9 = 9;
    sbit  ADCBUF5_9_bit at ADCBUF5.B9;
    const register unsigned short int ADCBUF5_8 = 8;
    sbit  ADCBUF5_8_bit at ADCBUF5.B8;
    const register unsigned short int ADCBUF5_7 = 7;
    sbit  ADCBUF5_7_bit at ADCBUF5.B7;
    const register unsigned short int ADCBUF5_6 = 6;
    sbit  ADCBUF5_6_bit at ADCBUF5.B6;
    const register unsigned short int ADCBUF5_5 = 5;
    sbit  ADCBUF5_5_bit at ADCBUF5.B5;
    const register unsigned short int ADCBUF5_4 = 4;
    sbit  ADCBUF5_4_bit at ADCBUF5.B4;
    const register unsigned short int ADCBUF5_3 = 3;
    sbit  ADCBUF5_3_bit at ADCBUF5.B3;
    const register unsigned short int ADCBUF5_2 = 2;
    sbit  ADCBUF5_2_bit at ADCBUF5.B2;
    const register unsigned short int ADCBUF5_1 = 1;
    sbit  ADCBUF5_1_bit at ADCBUF5.B1;
    const register unsigned short int ADCBUF5_0 = 0;
    sbit  ADCBUF5_0_bit at ADCBUF5.B0;

    // ADCBUF6 bits
    const register unsigned short int ADCBUF6_11 = 11;
    sbit  ADCBUF6_11_bit at ADCBUF6.B11;
    const register unsigned short int ADCBUF6_10 = 10;
    sbit  ADCBUF6_10_bit at ADCBUF6.B10;
    const register unsigned short int ADCBUF6_9 = 9;
    sbit  ADCBUF6_9_bit at ADCBUF6.B9;
    const register unsigned short int ADCBUF6_8 = 8;
    sbit  ADCBUF6_8_bit at ADCBUF6.B8;
    const register unsigned short int ADCBUF6_7 = 7;
    sbit  ADCBUF6_7_bit at ADCBUF6.B7;
    const register unsigned short int ADCBUF6_6 = 6;
    sbit  ADCBUF6_6_bit at ADCBUF6.B6;
    const register unsigned short int ADCBUF6_5 = 5;
    sbit  ADCBUF6_5_bit at ADCBUF6.B5;
    const register unsigned short int ADCBUF6_4 = 4;
    sbit  ADCBUF6_4_bit at ADCBUF6.B4;
    const register unsigned short int ADCBUF6_3 = 3;
    sbit  ADCBUF6_3_bit at ADCBUF6.B3;
    const register unsigned short int ADCBUF6_2 = 2;
    sbit  ADCBUF6_2_bit at ADCBUF6.B2;
    const register unsigned short int ADCBUF6_1 = 1;
    sbit  ADCBUF6_1_bit at ADCBUF6.B1;
    const register unsigned short int ADCBUF6_0 = 0;
    sbit  ADCBUF6_0_bit at ADCBUF6.B0;

    // ADCBUF7 bits
    const register unsigned short int ADCBUF7_11 = 11;
    sbit  ADCBUF7_11_bit at ADCBUF7.B11;
    const register unsigned short int ADCBUF7_10 = 10;
    sbit  ADCBUF7_10_bit at ADCBUF7.B10;
    const register unsigned short int ADCBUF7_9 = 9;
    sbit  ADCBUF7_9_bit at ADCBUF7.B9;
    const register unsigned short int ADCBUF7_8 = 8;
    sbit  ADCBUF7_8_bit at ADCBUF7.B8;
    const register unsigned short int ADCBUF7_7 = 7;
    sbit  ADCBUF7_7_bit at ADCBUF7.B7;
    const register unsigned short int ADCBUF7_6 = 6;
    sbit  ADCBUF7_6_bit at ADCBUF7.B6;
    const register unsigned short int ADCBUF7_5 = 5;
    sbit  ADCBUF7_5_bit at ADCBUF7.B5;
    const register unsigned short int ADCBUF7_4 = 4;
    sbit  ADCBUF7_4_bit at ADCBUF7.B4;
    const register unsigned short int ADCBUF7_3 = 3;
    sbit  ADCBUF7_3_bit at ADCBUF7.B3;
    const register unsigned short int ADCBUF7_2 = 2;
    sbit  ADCBUF7_2_bit at ADCBUF7.B2;
    const register unsigned short int ADCBUF7_1 = 1;
    sbit  ADCBUF7_1_bit at ADCBUF7.B1;
    const register unsigned short int ADCBUF7_0 = 0;
    sbit  ADCBUF7_0_bit at ADCBUF7.B0;

    // ADCBUF8 bits
    const register unsigned short int ADCBUF8_11 = 11;
    sbit  ADCBUF8_11_bit at ADCBUF8.B11;
    const register unsigned short int ADCBUF8_10 = 10;
    sbit  ADCBUF8_10_bit at ADCBUF8.B10;
    const register unsigned short int ADCBUF8_9 = 9;
    sbit  ADCBUF8_9_bit at ADCBUF8.B9;
    const register unsigned short int ADCBUF8_8 = 8;
    sbit  ADCBUF8_8_bit at ADCBUF8.B8;
    const register unsigned short int ADCBUF8_7 = 7;
    sbit  ADCBUF8_7_bit at ADCBUF8.B7;
    const register unsigned short int ADCBUF8_6 = 6;
    sbit  ADCBUF8_6_bit at ADCBUF8.B6;
    const register unsigned short int ADCBUF8_5 = 5;
    sbit  ADCBUF8_5_bit at ADCBUF8.B5;
    const register unsigned short int ADCBUF8_4 = 4;
    sbit  ADCBUF8_4_bit at ADCBUF8.B4;
    const register unsigned short int ADCBUF8_3 = 3;
    sbit  ADCBUF8_3_bit at ADCBUF8.B3;
    const register unsigned short int ADCBUF8_2 = 2;
    sbit  ADCBUF8_2_bit at ADCBUF8.B2;
    const register unsigned short int ADCBUF8_1 = 1;
    sbit  ADCBUF8_1_bit at ADCBUF8.B1;
    const register unsigned short int ADCBUF8_0 = 0;
    sbit  ADCBUF8_0_bit at ADCBUF8.B0;

    // ADCBUF9 bits
    const register unsigned short int ADCBUF9_11 = 11;
    sbit  ADCBUF9_11_bit at ADCBUF9.B11;
    const register unsigned short int ADCBUF9_10 = 10;
    sbit  ADCBUF9_10_bit at ADCBUF9.B10;
    const register unsigned short int ADCBUF9_9 = 9;
    sbit  ADCBUF9_9_bit at ADCBUF9.B9;
    const register unsigned short int ADCBUF9_8 = 8;
    sbit  ADCBUF9_8_bit at ADCBUF9.B8;
    const register unsigned short int ADCBUF9_7 = 7;
    sbit  ADCBUF9_7_bit at ADCBUF9.B7;
    const register unsigned short int ADCBUF9_6 = 6;
    sbit  ADCBUF9_6_bit at ADCBUF9.B6;
    const register unsigned short int ADCBUF9_5 = 5;
    sbit  ADCBUF9_5_bit at ADCBUF9.B5;
    const register unsigned short int ADCBUF9_4 = 4;
    sbit  ADCBUF9_4_bit at ADCBUF9.B4;
    const register unsigned short int ADCBUF9_3 = 3;
    sbit  ADCBUF9_3_bit at ADCBUF9.B3;
    const register unsigned short int ADCBUF9_2 = 2;
    sbit  ADCBUF9_2_bit at ADCBUF9.B2;
    const register unsigned short int ADCBUF9_1 = 1;
    sbit  ADCBUF9_1_bit at ADCBUF9.B1;
    const register unsigned short int ADCBUF9_0 = 0;
    sbit  ADCBUF9_0_bit at ADCBUF9.B0;

    // ADCBUFA bits
    const register unsigned short int ADCBUFA_11 = 11;
    sbit  ADCBUFA_11_bit at ADCBUFA.B11;
    const register unsigned short int ADCBUFA_10 = 10;
    sbit  ADCBUFA_10_bit at ADCBUFA.B10;
    const register unsigned short int ADCBUFA_9 = 9;
    sbit  ADCBUFA_9_bit at ADCBUFA.B9;
    const register unsigned short int ADCBUFA_8 = 8;
    sbit  ADCBUFA_8_bit at ADCBUFA.B8;
    const register unsigned short int ADCBUFA_7 = 7;
    sbit  ADCBUFA_7_bit at ADCBUFA.B7;
    const register unsigned short int ADCBUFA_6 = 6;
    sbit  ADCBUFA_6_bit at ADCBUFA.B6;
    const register unsigned short int ADCBUFA_5 = 5;
    sbit  ADCBUFA_5_bit at ADCBUFA.B5;
    const register unsigned short int ADCBUFA_4 = 4;
    sbit  ADCBUFA_4_bit at ADCBUFA.B4;
    const register unsigned short int ADCBUFA_3 = 3;
    sbit  ADCBUFA_3_bit at ADCBUFA.B3;
    const register unsigned short int ADCBUFA_2 = 2;
    sbit  ADCBUFA_2_bit at ADCBUFA.B2;
    const register unsigned short int ADCBUFA_1 = 1;
    sbit  ADCBUFA_1_bit at ADCBUFA.B1;
    const register unsigned short int ADCBUFA_0 = 0;
    sbit  ADCBUFA_0_bit at ADCBUFA.B0;

    // ADCBUFB bits
    const register unsigned short int ADCBUFB_11 = 11;
    sbit  ADCBUFB_11_bit at ADCBUFB.B11;
    const register unsigned short int ADCBUFB_10 = 10;
    sbit  ADCBUFB_10_bit at ADCBUFB.B10;
    const register unsigned short int ADCBUFB_9 = 9;
    sbit  ADCBUFB_9_bit at ADCBUFB.B9;
    const register unsigned short int ADCBUFB_8 = 8;
    sbit  ADCBUFB_8_bit at ADCBUFB.B8;
    const register unsigned short int ADCBUFB_7 = 7;
    sbit  ADCBUFB_7_bit at ADCBUFB.B7;
    const register unsigned short int ADCBUFB_6 = 6;
    sbit  ADCBUFB_6_bit at ADCBUFB.B6;
    const register unsigned short int ADCBUFB_5 = 5;
    sbit  ADCBUFB_5_bit at ADCBUFB.B5;
    const register unsigned short int ADCBUFB_4 = 4;
    sbit  ADCBUFB_4_bit at ADCBUFB.B4;
    const register unsigned short int ADCBUFB_3 = 3;
    sbit  ADCBUFB_3_bit at ADCBUFB.B3;
    const register unsigned short int ADCBUFB_2 = 2;
    sbit  ADCBUFB_2_bit at ADCBUFB.B2;
    const register unsigned short int ADCBUFB_1 = 1;
    sbit  ADCBUFB_1_bit at ADCBUFB.B1;
    const register unsigned short int ADCBUFB_0 = 0;
    sbit  ADCBUFB_0_bit at ADCBUFB.B0;

    // ADCBUFC bits
    const register unsigned short int ADCBUFC_11 = 11;
    sbit  ADCBUFC_11_bit at ADCBUFC.B11;
    const register unsigned short int ADCBUFC_10 = 10;
    sbit  ADCBUFC_10_bit at ADCBUFC.B10;
    const register unsigned short int ADCBUFC_9 = 9;
    sbit  ADCBUFC_9_bit at ADCBUFC.B9;
    const register unsigned short int ADCBUFC_8 = 8;
    sbit  ADCBUFC_8_bit at ADCBUFC.B8;
    const register unsigned short int ADCBUFC_7 = 7;
    sbit  ADCBUFC_7_bit at ADCBUFC.B7;
    const register unsigned short int ADCBUFC_6 = 6;
    sbit  ADCBUFC_6_bit at ADCBUFC.B6;
    const register unsigned short int ADCBUFC_5 = 5;
    sbit  ADCBUFC_5_bit at ADCBUFC.B5;
    const register unsigned short int ADCBUFC_4 = 4;
    sbit  ADCBUFC_4_bit at ADCBUFC.B4;
    const register unsigned short int ADCBUFC_3 = 3;
    sbit  ADCBUFC_3_bit at ADCBUFC.B3;
    const register unsigned short int ADCBUFC_2 = 2;
    sbit  ADCBUFC_2_bit at ADCBUFC.B2;
    const register unsigned short int ADCBUFC_1 = 1;
    sbit  ADCBUFC_1_bit at ADCBUFC.B1;
    const register unsigned short int ADCBUFC_0 = 0;
    sbit  ADCBUFC_0_bit at ADCBUFC.B0;

    // ADCBUFD bits
    const register unsigned short int ADCBUFD_11 = 11;
    sbit  ADCBUFD_11_bit at ADCBUFD.B11;
    const register unsigned short int ADCBUFD_10 = 10;
    sbit  ADCBUFD_10_bit at ADCBUFD.B10;
    const register unsigned short int ADCBUFD_9 = 9;
    sbit  ADCBUFD_9_bit at ADCBUFD.B9;
    const register unsigned short int ADCBUFD_8 = 8;
    sbit  ADCBUFD_8_bit at ADCBUFD.B8;
    const register unsigned short int ADCBUFD_7 = 7;
    sbit  ADCBUFD_7_bit at ADCBUFD.B7;
    const register unsigned short int ADCBUFD_6 = 6;
    sbit  ADCBUFD_6_bit at ADCBUFD.B6;
    const register unsigned short int ADCBUFD_5 = 5;
    sbit  ADCBUFD_5_bit at ADCBUFD.B5;
    const register unsigned short int ADCBUFD_4 = 4;
    sbit  ADCBUFD_4_bit at ADCBUFD.B4;
    const register unsigned short int ADCBUFD_3 = 3;
    sbit  ADCBUFD_3_bit at ADCBUFD.B3;
    const register unsigned short int ADCBUFD_2 = 2;
    sbit  ADCBUFD_2_bit at ADCBUFD.B2;
    const register unsigned short int ADCBUFD_1 = 1;
    sbit  ADCBUFD_1_bit at ADCBUFD.B1;
    const register unsigned short int ADCBUFD_0 = 0;
    sbit  ADCBUFD_0_bit at ADCBUFD.B0;

    // ADCBUFE bits
    const register unsigned short int ADCBUFE_11 = 11;
    sbit  ADCBUFE_11_bit at ADCBUFE.B11;
    const register unsigned short int ADCBUFE_10 = 10;
    sbit  ADCBUFE_10_bit at ADCBUFE.B10;
    const register unsigned short int ADCBUFE_9 = 9;
    sbit  ADCBUFE_9_bit at ADCBUFE.B9;
    const register unsigned short int ADCBUFE_8 = 8;
    sbit  ADCBUFE_8_bit at ADCBUFE.B8;
    const register unsigned short int ADCBUFE_7 = 7;
    sbit  ADCBUFE_7_bit at ADCBUFE.B7;
    const register unsigned short int ADCBUFE_6 = 6;
    sbit  ADCBUFE_6_bit at ADCBUFE.B6;
    const register unsigned short int ADCBUFE_5 = 5;
    sbit  ADCBUFE_5_bit at ADCBUFE.B5;
    const register unsigned short int ADCBUFE_4 = 4;
    sbit  ADCBUFE_4_bit at ADCBUFE.B4;
    const register unsigned short int ADCBUFE_3 = 3;
    sbit  ADCBUFE_3_bit at ADCBUFE.B3;
    const register unsigned short int ADCBUFE_2 = 2;
    sbit  ADCBUFE_2_bit at ADCBUFE.B2;
    const register unsigned short int ADCBUFE_1 = 1;
    sbit  ADCBUFE_1_bit at ADCBUFE.B1;
    const register unsigned short int ADCBUFE_0 = 0;
    sbit  ADCBUFE_0_bit at ADCBUFE.B0;

    // ADCBUFF bits
    const register unsigned short int ADCBUFF_11 = 11;
    sbit  ADCBUFF_11_bit at ADCBUFF.B11;
    const register unsigned short int ADCBUFF_10 = 10;
    sbit  ADCBUFF_10_bit at ADCBUFF.B10;
    const register unsigned short int ADCBUFF_9 = 9;
    sbit  ADCBUFF_9_bit at ADCBUFF.B9;
    const register unsigned short int ADCBUFF_8 = 8;
    sbit  ADCBUFF_8_bit at ADCBUFF.B8;
    const register unsigned short int ADCBUFF_7 = 7;
    sbit  ADCBUFF_7_bit at ADCBUFF.B7;
    const register unsigned short int ADCBUFF_6 = 6;
    sbit  ADCBUFF_6_bit at ADCBUFF.B6;
    const register unsigned short int ADCBUFF_5 = 5;
    sbit  ADCBUFF_5_bit at ADCBUFF.B5;
    const register unsigned short int ADCBUFF_4 = 4;
    sbit  ADCBUFF_4_bit at ADCBUFF.B4;
    const register unsigned short int ADCBUFF_3 = 3;
    sbit  ADCBUFF_3_bit at ADCBUFF.B3;
    const register unsigned short int ADCBUFF_2 = 2;
    sbit  ADCBUFF_2_bit at ADCBUFF.B2;
    const register unsigned short int ADCBUFF_1 = 1;
    sbit  ADCBUFF_1_bit at ADCBUFF.B1;
    const register unsigned short int ADCBUFF_0 = 0;
    sbit  ADCBUFF_0_bit at ADCBUFF.B0;

    // ADCON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON1.B13;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at ADCON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at ADCON1.B8;
    const register unsigned short int SSRC_2 = 7;
    sbit  SSRC_2_bit at ADCON1.B7;
    const register unsigned short int SSRC_1 = 6;
    sbit  SSRC_1_bit at ADCON1.B6;
    const register unsigned short int SSRC_0 = 5;
    sbit  SSRC_0_bit at ADCON1.B5;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at ADCON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at ADCON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at ADCON1.B0;

    // ADCON2 bits
    const register unsigned short int VCFG_2 = 15;
    sbit  VCFG_2_bit at ADCON2.B15;
    const register unsigned short int VCFG_1 = 14;
    sbit  VCFG_1_bit at ADCON2.B14;
    const register unsigned short int VCFG_0 = 13;
    sbit  VCFG_0_bit at ADCON2.B13;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at ADCON2.B10;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at ADCON2.B7;
    const register unsigned short int SMPI_3 = 5;
    sbit  SMPI_3_bit at ADCON2.B5;
    const register unsigned short int SMPI_2 = 4;
    sbit  SMPI_2_bit at ADCON2.B4;
    const register unsigned short int SMPI_1 = 3;
    sbit  SMPI_1_bit at ADCON2.B3;
    const register unsigned short int SMPI_0 = 2;
    sbit  SMPI_0_bit at ADCON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at ADCON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at ADCON2.B0;

    // ADCON3 bits
    const register unsigned short int SAMC_4 = 12;
    sbit  SAMC_4_bit at ADCON3.B12;
    const register unsigned short int SAMC_3 = 11;
    sbit  SAMC_3_bit at ADCON3.B11;
    const register unsigned short int SAMC_2 = 10;
    sbit  SAMC_2_bit at ADCON3.B10;
    const register unsigned short int SAMC_1 = 9;
    sbit  SAMC_1_bit at ADCON3.B9;
    const register unsigned short int SAMC_0 = 8;
    sbit  SAMC_0_bit at ADCON3.B8;
    const register unsigned short int ADRC = 7;
    sbit  ADRC_bit at ADCON3.B7;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at ADCON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at ADCON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at ADCON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at ADCON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at ADCON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at ADCON3.B0;

    // ADCHS bits
    const register unsigned short int CH0NB = 12;
    sbit  CH0NB_bit at ADCHS.B12;
    const register unsigned short int CH0SB_3 = 11;
    sbit  CH0SB_3_bit at ADCHS.B11;
    const register unsigned short int CH0SB_2 = 10;
    sbit  CH0SB_2_bit at ADCHS.B10;
    const register unsigned short int CH0SB_1 = 9;
    sbit  CH0SB_1_bit at ADCHS.B9;
    const register unsigned short int CH0SB_0 = 8;
    sbit  CH0SB_0_bit at ADCHS.B8;
    const register unsigned short int CH0NA = 4;
    sbit  CH0NA_bit at ADCHS.B4;
    const register unsigned short int CH0SA_3 = 3;
    sbit  CH0SA_3_bit at ADCHS.B3;
    const register unsigned short int CH0SA_2 = 2;
    sbit  CH0SA_2_bit at ADCHS.B2;
    const register unsigned short int CH0SA_1 = 1;
    sbit  CH0SA_1_bit at ADCHS.B1;
    const register unsigned short int CH0SA_0 = 0;
    sbit  CH0SA_0_bit at ADCHS.B0;

    // ADPCFG bits
    const register unsigned short int PCFG_15 = 15;
    sbit  PCFG_15_bit at ADPCFG.B15;
    const register unsigned short int PCFG_14 = 14;
    sbit  PCFG_14_bit at ADPCFG.B14;
    const register unsigned short int PCFG_13 = 13;
    sbit  PCFG_13_bit at ADPCFG.B13;
    const register unsigned short int PCFG_12 = 12;
    sbit  PCFG_12_bit at ADPCFG.B12;
    const register unsigned short int PCFG_11 = 11;
    sbit  PCFG_11_bit at ADPCFG.B11;
    const register unsigned short int PCFG_10 = 10;
    sbit  PCFG_10_bit at ADPCFG.B10;
    const register unsigned short int PCFG_9 = 9;
    sbit  PCFG_9_bit at ADPCFG.B9;
    const register unsigned short int PCFG_8 = 8;
    sbit  PCFG_8_bit at ADPCFG.B8;
    const register unsigned short int PCFG_7 = 7;
    sbit  PCFG_7_bit at ADPCFG.B7;
    const register unsigned short int PCFG_6 = 6;
    sbit  PCFG_6_bit at ADPCFG.B6;
    const register unsigned short int PCFG_5 = 5;
    sbit  PCFG_5_bit at ADPCFG.B5;
    const register unsigned short int PCFG_4 = 4;
    sbit  PCFG_4_bit at ADPCFG.B4;
    const register unsigned short int PCFG_3 = 3;
    sbit  PCFG_3_bit at ADPCFG.B3;
    const register unsigned short int PCFG_2 = 2;
    sbit  PCFG_2_bit at ADPCFG.B2;
    const register unsigned short int PCFG_1 = 1;
    sbit  PCFG_1_bit at ADPCFG.B1;
    const register unsigned short int PCFG_0 = 0;
    sbit  PCFG_0_bit at ADPCFG.B0;

    // ADCSSL bits
    const register unsigned short int CSSL_15 = 15;
    sbit  CSSL_15_bit at ADCSSL.B15;
    const register unsigned short int CSSL_14 = 14;
    sbit  CSSL_14_bit at ADCSSL.B14;
    const register unsigned short int CSSL_13 = 13;
    sbit  CSSL_13_bit at ADCSSL.B13;
    const register unsigned short int CSSL_12 = 12;
    sbit  CSSL_12_bit at ADCSSL.B12;
    const register unsigned short int CSSL_11 = 11;
    sbit  CSSL_11_bit at ADCSSL.B11;
    const register unsigned short int CSSL_10 = 10;
    sbit  CSSL_10_bit at ADCSSL.B10;
    const register unsigned short int CSSL_9 = 9;
    sbit  CSSL_9_bit at ADCSSL.B9;
    const register unsigned short int CSSL_8 = 8;
    sbit  CSSL_8_bit at ADCSSL.B8;
    const register unsigned short int CSSL_7 = 7;
    sbit  CSSL_7_bit at ADCSSL.B7;
    const register unsigned short int CSSL_6 = 6;
    sbit  CSSL_6_bit at ADCSSL.B6;
    const register unsigned short int CSSL_5 = 5;
    sbit  CSSL_5_bit at ADCSSL.B5;
    const register unsigned short int CSSL_4 = 4;
    sbit  CSSL_4_bit at ADCSSL.B4;
    const register unsigned short int CSSL_3 = 3;
    sbit  CSSL_3_bit at ADCSSL.B3;
    const register unsigned short int CSSL_2 = 2;
    sbit  CSSL_2_bit at ADCSSL.B2;
    const register unsigned short int CSSL_1 = 1;
    sbit  CSSL_1_bit at ADCSSL.B1;
    const register unsigned short int CSSL_0 = 0;
    sbit  CSSL_0_bit at ADCSSL.B0;

    // TRISB bits
    const register unsigned short int TRISB15 = 15;
    sbit  TRISB15_bit at TRISB.B15;
    const register unsigned short int TRISB14 = 14;
    sbit  TRISB14_bit at TRISB.B14;
    const register unsigned short int TRISB13 = 13;
    sbit  TRISB13_bit at TRISB.B13;
    const register unsigned short int TRISB12 = 12;
    sbit  TRISB12_bit at TRISB.B12;
    const register unsigned short int TRISB11 = 11;
    sbit  TRISB11_bit at TRISB.B11;
    const register unsigned short int TRISB10 = 10;
    sbit  TRISB10_bit at TRISB.B10;
    const register unsigned short int TRISB9 = 9;
    sbit  TRISB9_bit at TRISB.B9;
    const register unsigned short int TRISB8 = 8;
    sbit  TRISB8_bit at TRISB.B8;
    const register unsigned short int TRISB7 = 7;
    sbit  TRISB7_bit at TRISB.B7;
    const register unsigned short int TRISB6 = 6;
    sbit  TRISB6_bit at TRISB.B6;
    const register unsigned short int TRISB5 = 5;
    sbit  TRISB5_bit at TRISB.B5;
    const register unsigned short int TRISB4 = 4;
    sbit  TRISB4_bit at TRISB.B4;
    const register unsigned short int TRISB3 = 3;
    sbit  TRISB3_bit at TRISB.B3;
    const register unsigned short int TRISB2 = 2;
    sbit  TRISB2_bit at TRISB.B2;
    const register unsigned short int TRISB1 = 1;
    sbit  TRISB1_bit at TRISB.B1;
    const register unsigned short int TRISB0 = 0;
    sbit  TRISB0_bit at TRISB.B0;

    // PORTB bits
    const register unsigned short int RB15 = 15;
    sbit  RB15_bit at PORTB.B15;
    const register unsigned short int RB14 = 14;
    sbit  RB14_bit at PORTB.B14;
    const register unsigned short int RB13 = 13;
    sbit  RB13_bit at PORTB.B13;
    const register unsigned short int RB12 = 12;
    sbit  RB12_bit at PORTB.B12;
    const register unsigned short int RB11 = 11;
    sbit  RB11_bit at PORTB.B11;
    const register unsigned short int RB10 = 10;
    sbit  RB10_bit at PORTB.B10;
    const register unsigned short int RB9 = 9;
    sbit  RB9_bit at PORTB.B9;
    const register unsigned short int RB8 = 8;
    sbit  RB8_bit at PORTB.B8;
    const register unsigned short int RB7 = 7;
    sbit  RB7_bit at PORTB.B7;
    const register unsigned short int RB6 = 6;
    sbit  RB6_bit at PORTB.B6;
    const register unsigned short int RB5 = 5;
    sbit  RB5_bit at PORTB.B5;
    const register unsigned short int RB4 = 4;
    sbit  RB4_bit at PORTB.B4;
    const register unsigned short int RB3 = 3;
    sbit  RB3_bit at PORTB.B3;
    const register unsigned short int RB2 = 2;
    sbit  RB2_bit at PORTB.B2;
    const register unsigned short int RB1 = 1;
    sbit  RB1_bit at PORTB.B1;
    const register unsigned short int RB0 = 0;
    sbit  RB0_bit at PORTB.B0;

    // LATB bits
    const register unsigned short int LATB15 = 15;
    sbit  LATB15_bit at LATB.B15;
    const register unsigned short int LATB14 = 14;
    sbit  LATB14_bit at LATB.B14;
    const register unsigned short int LATB13 = 13;
    sbit  LATB13_bit at LATB.B13;
    const register unsigned short int LATB12 = 12;
    sbit  LATB12_bit at LATB.B12;
    const register unsigned short int LATB11 = 11;
    sbit  LATB11_bit at LATB.B11;
    const register unsigned short int LATB10 = 10;
    sbit  LATB10_bit at LATB.B10;
    const register unsigned short int LATB9 = 9;
    sbit  LATB9_bit at LATB.B9;
    const register unsigned short int LATB8 = 8;
    sbit  LATB8_bit at LATB.B8;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;
    const register unsigned short int LATB6 = 6;
    sbit  LATB6_bit at LATB.B6;
    const register unsigned short int LATB5 = 5;
    sbit  LATB5_bit at LATB.B5;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
    const register unsigned short int LATB3 = 3;
    sbit  LATB3_bit at LATB.B3;
    const register unsigned short int LATB2 = 2;
    sbit  LATB2_bit at LATB.B2;
    const register unsigned short int LATB1 = 1;
    sbit  LATB1_bit at LATB.B1;
    const register unsigned short int LATB0 = 0;
    sbit  LATB0_bit at LATB.B0;

    // TRISC bits
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC2 = 2;
    sbit  TRISC2_bit at TRISC.B2;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;

    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC2 = 2;
    sbit  RC2_bit at PORTC.B2;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;

    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;

    // TRISD bits
    const register unsigned short int TRISD11 = 11;
    sbit  TRISD11_bit at TRISD.B11;
    const register unsigned short int TRISD10 = 10;
    sbit  TRISD10_bit at TRISD.B10;
    const register unsigned short int TRISD9 = 9;
    sbit  TRISD9_bit at TRISD.B9;
    const register unsigned short int TRISD8 = 8;
    sbit  TRISD8_bit at TRISD.B8;
    const register unsigned short int TRISD7 = 7;
    sbit  TRISD7_bit at TRISD.B7;
    const register unsigned short int TRISD6 = 6;
    sbit  TRISD6_bit at TRISD.B6;
    const register unsigned short int TRISD5 = 5;
    sbit  TRISD5_bit at TRISD.B5;
    const register unsigned short int TRISD4 = 4;
    sbit  TRISD4_bit at TRISD.B4;
    const register unsigned short int TRISD3 = 3;
    sbit  TRISD3_bit at TRISD.B3;
    const register unsigned short int TRISD2 = 2;
    sbit  TRISD2_bit at TRISD.B2;
    const register unsigned short int TRISD1 = 1;
    sbit  TRISD1_bit at TRISD.B1;
    const register unsigned short int TRISD0 = 0;
    sbit  TRISD0_bit at TRISD.B0;

    // PORTD bits
    const register unsigned short int RD11 = 11;
    sbit  RD11_bit at PORTD.B11;
    const register unsigned short int RD10 = 10;
    sbit  RD10_bit at PORTD.B10;
    const register unsigned short int RD9 = 9;
    sbit  RD9_bit at PORTD.B9;
    const register unsigned short int RD8 = 8;
    sbit  RD8_bit at PORTD.B8;
    const register unsigned short int RD7 = 7;
    sbit  RD7_bit at PORTD.B7;
    const register unsigned short int RD6 = 6;
    sbit  RD6_bit at PORTD.B6;
    const register unsigned short int RD5 = 5;
    sbit  RD5_bit at PORTD.B5;
    const register unsigned short int RD4 = 4;
    sbit  RD4_bit at PORTD.B4;
    const register unsigned short int RD3 = 3;
    sbit  RD3_bit at PORTD.B3;
    const register unsigned short int RD2 = 2;
    sbit  RD2_bit at PORTD.B2;
    const register unsigned short int RD1 = 1;
    sbit  RD1_bit at PORTD.B1;
    const register unsigned short int RD0 = 0;
    sbit  RD0_bit at PORTD.B0;

    // LATD bits
    const register unsigned short int LATD11 = 11;
    sbit  LATD11_bit at LATD.B11;
    const register unsigned short int LATD10 = 10;
    sbit  LATD10_bit at LATD.B10;
    const register unsigned short int LATD9 = 9;
    sbit  LATD9_bit at LATD.B9;
    const register unsigned short int LATD8 = 8;
    sbit  LATD8_bit at LATD.B8;
    const register unsigned short int LATD7 = 7;
    sbit  LATD7_bit at LATD.B7;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD4 = 4;
    sbit  LATD4_bit at LATD.B4;
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;

    // TRISF bits
    const register unsigned short int TRISF6 = 6;
    sbit  TRISF6_bit at TRISF.B6;
    const register unsigned short int TRISF5 = 5;
    sbit  TRISF5_bit at TRISF.B5;
    const register unsigned short int TRISF4 = 4;
    sbit  TRISF4_bit at TRISF.B4;
    const register unsigned short int TRISF3 = 3;
    sbit  TRISF3_bit at TRISF.B3;
    const register unsigned short int TRISF2 = 2;
    sbit  TRISF2_bit at TRISF.B2;
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // PORTF bits
    const register unsigned short int RF6 = 6;
    sbit  RF6_bit at PORTF.B6;
    const register unsigned short int RF5 = 5;
    sbit  RF5_bit at PORTF.B5;
    const register unsigned short int RF4 = 4;
    sbit  RF4_bit at PORTF.B4;
    const register unsigned short int RF3 = 3;
    sbit  RF3_bit at PORTF.B3;
    const register unsigned short int RF2 = 2;
    sbit  RF2_bit at PORTF.B2;
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // LATF bits
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF2 = 2;
    sbit  LATF2_bit at LATF.B2;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;

    // TRISG bits
    const register unsigned short int TRISG15 = 15;
    sbit  TRISG15_bit at TRISG.B15;
    const register unsigned short int TRISG14 = 14;
    sbit  TRISG14_bit at TRISG.B14;
    const register unsigned short int TRISG13 = 13;
    sbit  TRISG13_bit at TRISG.B13;
    const register unsigned short int TRISG12 = 12;
    sbit  TRISG12_bit at TRISG.B12;
    const register unsigned short int TRISG9 = 9;
    sbit  TRISG9_bit at TRISG.B9;
    const register unsigned short int TRISG8 = 8;
    sbit  TRISG8_bit at TRISG.B8;
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
    const register unsigned short int TRISG3 = 3;
    sbit  TRISG3_bit at TRISG.B3;
    const register unsigned short int TRISG2 = 2;
    sbit  TRISG2_bit at TRISG.B2;
    const register unsigned short int TRISG1 = 1;
    sbit  TRISG1_bit at TRISG.B1;
    const register unsigned short int TRISG0 = 0;
    sbit  TRISG0_bit at TRISG.B0;

    // PORTG bits
    const register unsigned short int RG15 = 15;
    sbit  RG15_bit at PORTG.B15;
    const register unsigned short int RG14 = 14;
    sbit  RG14_bit at PORTG.B14;
    const register unsigned short int RG13 = 13;
    sbit  RG13_bit at PORTG.B13;
    const register unsigned short int RG12 = 12;
    sbit  RG12_bit at PORTG.B12;
    const register unsigned short int RG9 = 9;
    sbit  RG9_bit at PORTG.B9;
    const register unsigned short int RG8 = 8;
    sbit  RG8_bit at PORTG.B8;
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
    const register unsigned short int RG3 = 3;
    sbit  RG3_bit at PORTG.B3;
    const register unsigned short int RG2 = 2;
    sbit  RG2_bit at PORTG.B2;
    const register unsigned short int RG1 = 1;
    sbit  RG1_bit at PORTG.B1;
    const register unsigned short int RG0 = 0;
    sbit  RG0_bit at PORTG.B0;

    // LATG bits
    const register unsigned short int LATG15 = 15;
    sbit  LATG15_bit at LATG.B15;
    const register unsigned short int LATG14 = 14;
    sbit  LATG14_bit at LATG.B14;
    const register unsigned short int LATG13 = 13;
    sbit  LATG13_bit at LATG.B13;
    const register unsigned short int LATG12 = 12;
    sbit  LATG12_bit at LATG.B12;
    const register unsigned short int LATG9 = 9;
    sbit  LATG9_bit at LATG.B9;
    const register unsigned short int LATG8 = 8;
    sbit  LATG8_bit at LATG.B8;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;

    // C1RXF0SID bits
    const register unsigned short int SID10 = 12;
    sbit  SID10_bit at C1RXF0SID.B12;
    sbit  SID10_C1RXF0SID_bit at C1RXF0SID.B12;
    const register unsigned short int SID9 = 11;
    sbit  SID9_bit at C1RXF0SID.B11;
    sbit  SID9_C1RXF0SID_bit at C1RXF0SID.B11;
    const register unsigned short int SID8 = 10;
    sbit  SID8_bit at C1RXF0SID.B10;
    sbit  SID8_C1RXF0SID_bit at C1RXF0SID.B10;
    const register unsigned short int SID7 = 9;
    sbit  SID7_bit at C1RXF0SID.B9;
    sbit  SID7_C1RXF0SID_bit at C1RXF0SID.B9;
    const register unsigned short int SID6 = 8;
    sbit  SID6_bit at C1RXF0SID.B8;
    sbit  SID6_C1RXF0SID_bit at C1RXF0SID.B8;
    const register unsigned short int SID5 = 7;
    sbit  SID5_bit at C1RXF0SID.B7;
    sbit  SID5_C1RXF0SID_bit at C1RXF0SID.B7;
    const register unsigned short int SID4 = 6;
    sbit  SID4_bit at C1RXF0SID.B6;
    sbit  SID4_C1RXF0SID_bit at C1RXF0SID.B6;
    const register unsigned short int SID3 = 5;
    sbit  SID3_bit at C1RXF0SID.B5;
    sbit  SID3_C1RXF0SID_bit at C1RXF0SID.B5;
    const register unsigned short int SID2 = 4;
    sbit  SID2_bit at C1RXF0SID.B4;
    sbit  SID2_C1RXF0SID_bit at C1RXF0SID.B4;
    const register unsigned short int SID1 = 3;
    sbit  SID1_bit at C1RXF0SID.B3;
    sbit  SID1_C1RXF0SID_bit at C1RXF0SID.B3;
    const register unsigned short int SID0 = 2;
    sbit  SID0_bit at C1RXF0SID.B2;
    sbit  SID0_C1RXF0SID_bit at C1RXF0SID.B2;
    const register unsigned short int EXIDE = 0;
    sbit  EXIDE_bit at C1RXF0SID.B0;
    sbit  EXIDE_C1RXF0SID_bit at C1RXF0SID.B0;

    // C1RXF0EIDH bits
    const register unsigned short int EID17 = 11;
    sbit  EID17_bit at C1RXF0EIDH.B11;
    sbit  EID17_C1RXF0EIDH_bit at C1RXF0EIDH.B11;
    const register unsigned short int EID16 = 10;
    sbit  EID16_bit at C1RXF0EIDH.B10;
    sbit  EID16_C1RXF0EIDH_bit at C1RXF0EIDH.B10;
    const register unsigned short int EID15 = 9;
    sbit  EID15_bit at C1RXF0EIDH.B9;
    sbit  EID15_C1RXF0EIDH_bit at C1RXF0EIDH.B9;
    const register unsigned short int EID14 = 8;
    sbit  EID14_bit at C1RXF0EIDH.B8;
    sbit  EID14_C1RXF0EIDH_bit at C1RXF0EIDH.B8;
    const register unsigned short int EID13 = 7;
    sbit  EID13_bit at C1RXF0EIDH.B7;
    sbit  EID13_C1RXF0EIDH_bit at C1RXF0EIDH.B7;
    const register unsigned short int EID12 = 6;
    sbit  EID12_bit at C1RXF0EIDH.B6;
    sbit  EID12_C1RXF0EIDH_bit at C1RXF0EIDH.B6;
    const register unsigned short int EID11 = 5;
    sbit  EID11_bit at C1RXF0EIDH.B5;
    sbit  EID11_C1RXF0EIDH_bit at C1RXF0EIDH.B5;
    const register unsigned short int EID10 = 4;
    sbit  EID10_bit at C1RXF0EIDH.B4;
    sbit  EID10_C1RXF0EIDH_bit at C1RXF0EIDH.B4;
    const register unsigned short int EID9 = 3;
    sbit  EID9_bit at C1RXF0EIDH.B3;
    sbit  EID9_C1RXF0EIDH_bit at C1RXF0EIDH.B3;
    const register unsigned short int EID8 = 2;
    sbit  EID8_bit at C1RXF0EIDH.B2;
    sbit  EID8_C1RXF0EIDH_bit at C1RXF0EIDH.B2;
    const register unsigned short int EID7 = 1;
    sbit  EID7_bit at C1RXF0EIDH.B1;
    sbit  EID7_C1RXF0EIDH_bit at C1RXF0EIDH.B1;
    const register unsigned short int EID6 = 0;
    sbit  EID6_bit at C1RXF0EIDH.B0;
    sbit  EID6_C1RXF0EIDH_bit at C1RXF0EIDH.B0;

    // C1RXF0EIDL bits
    const register unsigned short int EID5 = 15;
    sbit  EID5_bit at C1RXF0EIDL.B15;
    sbit  EID5_C1RXF0EIDL_bit at C1RXF0EIDL.B15;
    const register unsigned short int EID4 = 14;
    sbit  EID4_bit at C1RXF0EIDL.B14;
    sbit  EID4_C1RXF0EIDL_bit at C1RXF0EIDL.B14;
    const register unsigned short int EID3 = 13;
    sbit  EID3_bit at C1RXF0EIDL.B13;
    sbit  EID3_C1RXF0EIDL_bit at C1RXF0EIDL.B13;
    const register unsigned short int EID2 = 12;
    sbit  EID2_bit at C1RXF0EIDL.B12;
    sbit  EID2_C1RXF0EIDL_bit at C1RXF0EIDL.B12;
    const register unsigned short int EID1 = 11;
    sbit  EID1_bit at C1RXF0EIDL.B11;
    sbit  EID1_C1RXF0EIDL_bit at C1RXF0EIDL.B11;
    const register unsigned short int EID0 = 10;
    sbit  EID0_bit at C1RXF0EIDL.B10;
    sbit  EID0_C1RXF0EIDL_bit at C1RXF0EIDL.B10;

    // C1RXF1SID bits
    sbit  SID10_C1RXF1SID_bit at C1RXF1SID.B12;
    sbit  SID9_C1RXF1SID_bit at C1RXF1SID.B11;
    sbit  SID8_C1RXF1SID_bit at C1RXF1SID.B10;
    sbit  SID7_C1RXF1SID_bit at C1RXF1SID.B9;
    sbit  SID6_C1RXF1SID_bit at C1RXF1SID.B8;
    sbit  SID5_C1RXF1SID_bit at C1RXF1SID.B7;
    sbit  SID4_C1RXF1SID_bit at C1RXF1SID.B6;
    sbit  SID3_C1RXF1SID_bit at C1RXF1SID.B5;
    sbit  SID2_C1RXF1SID_bit at C1RXF1SID.B4;
    sbit  SID1_C1RXF1SID_bit at C1RXF1SID.B3;
    sbit  SID0_C1RXF1SID_bit at C1RXF1SID.B2;
    sbit  EXIDE_C1RXF1SID_bit at C1RXF1SID.B0;

    // C1RXF1EIDH bits
    sbit  EID17_C1RXF1EIDH_bit at C1RXF1EIDH.B11;
    sbit  EID16_C1RXF1EIDH_bit at C1RXF1EIDH.B10;
    sbit  EID15_C1RXF1EIDH_bit at C1RXF1EIDH.B9;
    sbit  EID14_C1RXF1EIDH_bit at C1RXF1EIDH.B8;
    sbit  EID13_C1RXF1EIDH_bit at C1RXF1EIDH.B7;
    sbit  EID12_C1RXF1EIDH_bit at C1RXF1EIDH.B6;
    sbit  EID11_C1RXF1EIDH_bit at C1RXF1EIDH.B5;
    sbit  EID10_C1RXF1EIDH_bit at C1RXF1EIDH.B4;
    sbit  EID9_C1RXF1EIDH_bit at C1RXF1EIDH.B3;
    sbit  EID8_C1RXF1EIDH_bit at C1RXF1EIDH.B2;
    sbit  EID7_C1RXF1EIDH_bit at C1RXF1EIDH.B1;
    sbit  EID6_C1RXF1EIDH_bit at C1RXF1EIDH.B0;

    // C1RXF1EIDL bits
    sbit  EID5_C1RXF1EIDL_bit at C1RXF1EIDL.B15;
    sbit  EID4_C1RXF1EIDL_bit at C1RXF1EIDL.B14;
    sbit  EID3_C1RXF1EIDL_bit at C1RXF1EIDL.B13;
    sbit  EID2_C1RXF1EIDL_bit at C1RXF1EIDL.B12;
    sbit  EID1_C1RXF1EIDL_bit at C1RXF1EIDL.B11;
    sbit  EID0_C1RXF1EIDL_bit at C1RXF1EIDL.B10;

    // C1RXF2SID bits
    sbit  SID10_C1RXF2SID_bit at C1RXF2SID.B12;
    sbit  SID9_C1RXF2SID_bit at C1RXF2SID.B11;
    sbit  SID8_C1RXF2SID_bit at C1RXF2SID.B10;
    sbit  SID7_C1RXF2SID_bit at C1RXF2SID.B9;
    sbit  SID6_C1RXF2SID_bit at C1RXF2SID.B8;
    sbit  SID5_C1RXF2SID_bit at C1RXF2SID.B7;
    sbit  SID4_C1RXF2SID_bit at C1RXF2SID.B6;
    sbit  SID3_C1RXF2SID_bit at C1RXF2SID.B5;
    sbit  SID2_C1RXF2SID_bit at C1RXF2SID.B4;
    sbit  SID1_C1RXF2SID_bit at C1RXF2SID.B3;
    sbit  SID0_C1RXF2SID_bit at C1RXF2SID.B2;
    sbit  EXIDE_C1RXF2SID_bit at C1RXF2SID.B0;

    // C1RXF2EIDH bits
    sbit  EID17_C1RXF2EIDH_bit at C1RXF2EIDH.B11;
    sbit  EID16_C1RXF2EIDH_bit at C1RXF2EIDH.B10;
    sbit  EID15_C1RXF2EIDH_bit at C1RXF2EIDH.B9;
    sbit  EID14_C1RXF2EIDH_bit at C1RXF2EIDH.B8;
    sbit  EID13_C1RXF2EIDH_bit at C1RXF2EIDH.B7;
    sbit  EID12_C1RXF2EIDH_bit at C1RXF2EIDH.B6;
    sbit  EID11_C1RXF2EIDH_bit at C1RXF2EIDH.B5;
    sbit  EID10_C1RXF2EIDH_bit at C1RXF2EIDH.B4;
    sbit  EID9_C1RXF2EIDH_bit at C1RXF2EIDH.B3;
    sbit  EID8_C1RXF2EIDH_bit at C1RXF2EIDH.B2;
    sbit  EID7_C1RXF2EIDH_bit at C1RXF2EIDH.B1;
    sbit  EID6_C1RXF2EIDH_bit at C1RXF2EIDH.B0;

    // C1RXF2EIDL bits
    sbit  EID5_C1RXF2EIDL_bit at C1RXF2EIDL.B15;
    sbit  EID4_C1RXF2EIDL_bit at C1RXF2EIDL.B14;
    sbit  EID3_C1RXF2EIDL_bit at C1RXF2EIDL.B13;
    sbit  EID2_C1RXF2EIDL_bit at C1RXF2EIDL.B12;
    sbit  EID1_C1RXF2EIDL_bit at C1RXF2EIDL.B11;
    sbit  EID0_C1RXF2EIDL_bit at C1RXF2EIDL.B10;

    // C1RXF3SID bits
    sbit  SID10_C1RXF3SID_bit at C1RXF3SID.B12;
    sbit  SID9_C1RXF3SID_bit at C1RXF3SID.B11;
    sbit  SID8_C1RXF3SID_bit at C1RXF3SID.B10;
    sbit  SID7_C1RXF3SID_bit at C1RXF3SID.B9;
    sbit  SID6_C1RXF3SID_bit at C1RXF3SID.B8;
    sbit  SID5_C1RXF3SID_bit at C1RXF3SID.B7;
    sbit  SID4_C1RXF3SID_bit at C1RXF3SID.B6;
    sbit  SID3_C1RXF3SID_bit at C1RXF3SID.B5;
    sbit  SID2_C1RXF3SID_bit at C1RXF3SID.B4;
    sbit  SID1_C1RXF3SID_bit at C1RXF3SID.B3;
    sbit  SID0_C1RXF3SID_bit at C1RXF3SID.B2;
    sbit  EXIDE_C1RXF3SID_bit at C1RXF3SID.B0;

    // C1RXF3EIDH bits
    sbit  EID17_C1RXF3EIDH_bit at C1RXF3EIDH.B11;
    sbit  EID16_C1RXF3EIDH_bit at C1RXF3EIDH.B10;
    sbit  EID15_C1RXF3EIDH_bit at C1RXF3EIDH.B9;
    sbit  EID14_C1RXF3EIDH_bit at C1RXF3EIDH.B8;
    sbit  EID13_C1RXF3EIDH_bit at C1RXF3EIDH.B7;
    sbit  EID12_C1RXF3EIDH_bit at C1RXF3EIDH.B6;
    sbit  EID11_C1RXF3EIDH_bit at C1RXF3EIDH.B5;
    sbit  EID10_C1RXF3EIDH_bit at C1RXF3EIDH.B4;
    sbit  EID9_C1RXF3EIDH_bit at C1RXF3EIDH.B3;
    sbit  EID8_C1RXF3EIDH_bit at C1RXF3EIDH.B2;
    sbit  EID7_C1RXF3EIDH_bit at C1RXF3EIDH.B1;
    sbit  EID6_C1RXF3EIDH_bit at C1RXF3EIDH.B0;

    // C1RXF3EIDL bits
    sbit  EID5_C1RXF3EIDL_bit at C1RXF3EIDL.B15;
    sbit  EID4_C1RXF3EIDL_bit at C1RXF3EIDL.B14;
    sbit  EID3_C1RXF3EIDL_bit at C1RXF3EIDL.B13;
    sbit  EID2_C1RXF3EIDL_bit at C1RXF3EIDL.B12;
    sbit  EID1_C1RXF3EIDL_bit at C1RXF3EIDL.B11;
    sbit  EID0_C1RXF3EIDL_bit at C1RXF3EIDL.B10;

    // C1RXF4SID bits
    sbit  SID10_C1RXF4SID_bit at C1RXF4SID.B12;
    sbit  SID9_C1RXF4SID_bit at C1RXF4SID.B11;
    sbit  SID8_C1RXF4SID_bit at C1RXF4SID.B10;
    sbit  SID7_C1RXF4SID_bit at C1RXF4SID.B9;
    sbit  SID6_C1RXF4SID_bit at C1RXF4SID.B8;
    sbit  SID5_C1RXF4SID_bit at C1RXF4SID.B7;
    sbit  SID4_C1RXF4SID_bit at C1RXF4SID.B6;
    sbit  SID3_C1RXF4SID_bit at C1RXF4SID.B5;
    sbit  SID2_C1RXF4SID_bit at C1RXF4SID.B4;
    sbit  SID1_C1RXF4SID_bit at C1RXF4SID.B3;
    sbit  SID0_C1RXF4SID_bit at C1RXF4SID.B2;
    sbit  EXIDE_C1RXF4SID_bit at C1RXF4SID.B0;

    // C1RXF4EIDH bits
    sbit  EID17_C1RXF4EIDH_bit at C1RXF4EIDH.B11;
    sbit  EID16_C1RXF4EIDH_bit at C1RXF4EIDH.B10;
    sbit  EID15_C1RXF4EIDH_bit at C1RXF4EIDH.B9;
    sbit  EID14_C1RXF4EIDH_bit at C1RXF4EIDH.B8;
    sbit  EID13_C1RXF4EIDH_bit at C1RXF4EIDH.B7;
    sbit  EID12_C1RXF4EIDH_bit at C1RXF4EIDH.B6;
    sbit  EID11_C1RXF4EIDH_bit at C1RXF4EIDH.B5;
    sbit  EID10_C1RXF4EIDH_bit at C1RXF4EIDH.B4;
    sbit  EID9_C1RXF4EIDH_bit at C1RXF4EIDH.B3;
    sbit  EID8_C1RXF4EIDH_bit at C1RXF4EIDH.B2;
    sbit  EID7_C1RXF4EIDH_bit at C1RXF4EIDH.B1;
    sbit  EID6_C1RXF4EIDH_bit at C1RXF4EIDH.B0;

    // C1RXF4EIDL bits
    sbit  EID5_C1RXF4EIDL_bit at C1RXF4EIDL.B15;
    sbit  EID4_C1RXF4EIDL_bit at C1RXF4EIDL.B14;
    sbit  EID3_C1RXF4EIDL_bit at C1RXF4EIDL.B13;
    sbit  EID2_C1RXF4EIDL_bit at C1RXF4EIDL.B12;
    sbit  EID1_C1RXF4EIDL_bit at C1RXF4EIDL.B11;
    sbit  EID0_C1RXF4EIDL_bit at C1RXF4EIDL.B10;

    // C1RXF5SID bits
    sbit  SID10_C1RXF5SID_bit at C1RXF5SID.B12;
    sbit  SID9_C1RXF5SID_bit at C1RXF5SID.B11;
    sbit  SID8_C1RXF5SID_bit at C1RXF5SID.B10;
    sbit  SID7_C1RXF5SID_bit at C1RXF5SID.B9;
    sbit  SID6_C1RXF5SID_bit at C1RXF5SID.B8;
    sbit  SID5_C1RXF5SID_bit at C1RXF5SID.B7;
    sbit  SID4_C1RXF5SID_bit at C1RXF5SID.B6;
    sbit  SID3_C1RXF5SID_bit at C1RXF5SID.B5;
    sbit  SID2_C1RXF5SID_bit at C1RXF5SID.B4;
    sbit  SID1_C1RXF5SID_bit at C1RXF5SID.B3;
    sbit  SID0_C1RXF5SID_bit at C1RXF5SID.B2;
    sbit  EXIDE_C1RXF5SID_bit at C1RXF5SID.B0;

    // C1RXF5EIDH bits
    sbit  EID17_C1RXF5EIDH_bit at C1RXF5EIDH.B11;
    sbit  EID16_C1RXF5EIDH_bit at C1RXF5EIDH.B10;
    sbit  EID15_C1RXF5EIDH_bit at C1RXF5EIDH.B9;
    sbit  EID14_C1RXF5EIDH_bit at C1RXF5EIDH.B8;
    sbit  EID13_C1RXF5EIDH_bit at C1RXF5EIDH.B7;
    sbit  EID12_C1RXF5EIDH_bit at C1RXF5EIDH.B6;
    sbit  EID11_C1RXF5EIDH_bit at C1RXF5EIDH.B5;
    sbit  EID10_C1RXF5EIDH_bit at C1RXF5EIDH.B4;
    sbit  EID9_C1RXF5EIDH_bit at C1RXF5EIDH.B3;
    sbit  EID8_C1RXF5EIDH_bit at C1RXF5EIDH.B2;
    sbit  EID7_C1RXF5EIDH_bit at C1RXF5EIDH.B1;
    sbit  EID6_C1RXF5EIDH_bit at C1RXF5EIDH.B0;

    // C1RXF5EIDL bits
    sbit  EID5_C1RXF5EIDL_bit at C1RXF5EIDL.B15;
    sbit  EID4_C1RXF5EIDL_bit at C1RXF5EIDL.B14;
    sbit  EID3_C1RXF5EIDL_bit at C1RXF5EIDL.B13;
    sbit  EID2_C1RXF5EIDL_bit at C1RXF5EIDL.B12;
    sbit  EID1_C1RXF5EIDL_bit at C1RXF5EIDL.B11;
    sbit  EID0_C1RXF5EIDL_bit at C1RXF5EIDL.B10;

    // C1RXM0SID bits
    sbit  SID10_C1RXM0SID_bit at C1RXM0SID.B12;
    sbit  SID9_C1RXM0SID_bit at C1RXM0SID.B11;
    sbit  SID8_C1RXM0SID_bit at C1RXM0SID.B10;
    sbit  SID7_C1RXM0SID_bit at C1RXM0SID.B9;
    sbit  SID6_C1RXM0SID_bit at C1RXM0SID.B8;
    sbit  SID5_C1RXM0SID_bit at C1RXM0SID.B7;
    sbit  SID4_C1RXM0SID_bit at C1RXM0SID.B6;
    sbit  SID3_C1RXM0SID_bit at C1RXM0SID.B5;
    sbit  SID2_C1RXM0SID_bit at C1RXM0SID.B4;
    sbit  SID1_C1RXM0SID_bit at C1RXM0SID.B3;
    sbit  SID0_C1RXM0SID_bit at C1RXM0SID.B2;
    const register unsigned short int MIDE = 0;
    sbit  MIDE_bit at C1RXM0SID.B0;
    sbit  MIDE_C1RXM0SID_bit at C1RXM0SID.B0;

    // C1RXM0EIDH bits
    sbit  EID17_C1RXM0EIDH_bit at C1RXM0EIDH.B11;
    sbit  EID16_C1RXM0EIDH_bit at C1RXM0EIDH.B10;
    sbit  EID15_C1RXM0EIDH_bit at C1RXM0EIDH.B9;
    sbit  EID14_C1RXM0EIDH_bit at C1RXM0EIDH.B8;
    sbit  EID13_C1RXM0EIDH_bit at C1RXM0EIDH.B7;
    sbit  EID12_C1RXM0EIDH_bit at C1RXM0EIDH.B6;
    sbit  EID11_C1RXM0EIDH_bit at C1RXM0EIDH.B5;
    sbit  EID10_C1RXM0EIDH_bit at C1RXM0EIDH.B4;
    sbit  EID9_C1RXM0EIDH_bit at C1RXM0EIDH.B3;
    sbit  EID8_C1RXM0EIDH_bit at C1RXM0EIDH.B2;
    sbit  EID7_C1RXM0EIDH_bit at C1RXM0EIDH.B1;
    sbit  EID6_C1RXM0EIDH_bit at C1RXM0EIDH.B0;

    // C1RXM0EIDL bits
    sbit  EID5_C1RXM0EIDL_bit at C1RXM0EIDL.B15;
    sbit  EID4_C1RXM0EIDL_bit at C1RXM0EIDL.B14;
    sbit  EID3_C1RXM0EIDL_bit at C1RXM0EIDL.B13;
    sbit  EID2_C1RXM0EIDL_bit at C1RXM0EIDL.B12;
    sbit  EID1_C1RXM0EIDL_bit at C1RXM0EIDL.B11;
    sbit  EID0_C1RXM0EIDL_bit at C1RXM0EIDL.B10;

    // C1RXM1SID bits
    sbit  SID10_C1RXM1SID_bit at C1RXM1SID.B12;
    sbit  SID9_C1RXM1SID_bit at C1RXM1SID.B11;
    sbit  SID8_C1RXM1SID_bit at C1RXM1SID.B10;
    sbit  SID7_C1RXM1SID_bit at C1RXM1SID.B9;
    sbit  SID6_C1RXM1SID_bit at C1RXM1SID.B8;
    sbit  SID5_C1RXM1SID_bit at C1RXM1SID.B7;
    sbit  SID4_C1RXM1SID_bit at C1RXM1SID.B6;
    sbit  SID3_C1RXM1SID_bit at C1RXM1SID.B5;
    sbit  SID2_C1RXM1SID_bit at C1RXM1SID.B4;
    sbit  SID1_C1RXM1SID_bit at C1RXM1SID.B3;
    sbit  SID0_C1RXM1SID_bit at C1RXM1SID.B2;
    sbit  MIDE_C1RXM1SID_bit at C1RXM1SID.B0;

    // C1RXM1EIDH bits
    sbit  EID17_C1RXM1EIDH_bit at C1RXM1EIDH.B11;
    sbit  EID16_C1RXM1EIDH_bit at C1RXM1EIDH.B10;
    sbit  EID15_C1RXM1EIDH_bit at C1RXM1EIDH.B9;
    sbit  EID14_C1RXM1EIDH_bit at C1RXM1EIDH.B8;
    sbit  EID13_C1RXM1EIDH_bit at C1RXM1EIDH.B7;
    sbit  EID12_C1RXM1EIDH_bit at C1RXM1EIDH.B6;
    sbit  EID11_C1RXM1EIDH_bit at C1RXM1EIDH.B5;
    sbit  EID10_C1RXM1EIDH_bit at C1RXM1EIDH.B4;
    sbit  EID9_C1RXM1EIDH_bit at C1RXM1EIDH.B3;
    sbit  EID8_C1RXM1EIDH_bit at C1RXM1EIDH.B2;
    sbit  EID7_C1RXM1EIDH_bit at C1RXM1EIDH.B1;
    sbit  EID6_C1RXM1EIDH_bit at C1RXM1EIDH.B0;

    // C1RXM1EIDL bits
    sbit  EID5_C1RXM1EIDL_bit at C1RXM1EIDL.B15;
    sbit  EID4_C1RXM1EIDL_bit at C1RXM1EIDL.B14;
    sbit  EID3_C1RXM1EIDL_bit at C1RXM1EIDL.B13;
    sbit  EID2_C1RXM1EIDL_bit at C1RXM1EIDL.B12;
    sbit  EID1_C1RXM1EIDL_bit at C1RXM1EIDL.B11;
    sbit  EID0_C1RXM1EIDL_bit at C1RXM1EIDL.B10;

    // C1TX2SID bits
    sbit  SID10_C1TX2SID_bit at C1TX2SID.B15;
    sbit  SID9_C1TX2SID_bit at C1TX2SID.B14;
    sbit  SID8_C1TX2SID_bit at C1TX2SID.B13;
    sbit  SID7_C1TX2SID_bit at C1TX2SID.B12;
    sbit  SID6_C1TX2SID_bit at C1TX2SID.B11;
    sbit  SID5_C1TX2SID_bit at C1TX2SID.B7;
    sbit  SID4_C1TX2SID_bit at C1TX2SID.B6;
    sbit  SID3_C1TX2SID_bit at C1TX2SID.B5;
    sbit  SID2_C1TX2SID_bit at C1TX2SID.B4;
    sbit  SID1_C1TX2SID_bit at C1TX2SID.B3;
    sbit  SID0_C1TX2SID_bit at C1TX2SID.B2;
    const register unsigned short int SRR = 1;
    sbit  SRR_bit at C1TX2SID.B1;
    sbit  SRR_C1TX2SID_bit at C1TX2SID.B1;
    const register unsigned short int TXIDE = 0;
    sbit  TXIDE_bit at C1TX2SID.B0;
    sbit  TXIDE_C1TX2SID_bit at C1TX2SID.B0;

    // C1TX2EID bits
    sbit  EID17_C1TX2EID_bit at C1TX2EID.B15;
    sbit  EID16_C1TX2EID_bit at C1TX2EID.B14;
    sbit  EID15_C1TX2EID_bit at C1TX2EID.B13;
    sbit  EID14_C1TX2EID_bit at C1TX2EID.B12;
    sbit  EID13_C1TX2EID_bit at C1TX2EID.B7;
    sbit  EID12_C1TX2EID_bit at C1TX2EID.B6;
    sbit  EID11_C1TX2EID_bit at C1TX2EID.B5;
    sbit  EID10_C1TX2EID_bit at C1TX2EID.B4;
    sbit  EID9_C1TX2EID_bit at C1TX2EID.B3;
    sbit  EID8_C1TX2EID_bit at C1TX2EID.B2;
    sbit  EID7_C1TX2EID_bit at C1TX2EID.B1;
    sbit  EID6_C1TX2EID_bit at C1TX2EID.B0;

    // C1TX2DLC bits
    sbit  EID5_C1TX2DLC_bit at C1TX2DLC.B15;
    sbit  EID4_C1TX2DLC_bit at C1TX2DLC.B14;
    sbit  EID3_C1TX2DLC_bit at C1TX2DLC.B13;
    sbit  EID2_C1TX2DLC_bit at C1TX2DLC.B12;
    sbit  EID1_C1TX2DLC_bit at C1TX2DLC.B11;
    sbit  EID0_C1TX2DLC_bit at C1TX2DLC.B10;
    const register unsigned short int TXRTR = 9;
    sbit  TXRTR_bit at C1TX2DLC.B9;
    sbit  TXRTR_C1TX2DLC_bit at C1TX2DLC.B9;
    const register unsigned short int TXRB1 = 8;
    sbit  TXRB1_bit at C1TX2DLC.B8;
    sbit  TXRB1_C1TX2DLC_bit at C1TX2DLC.B8;
    const register unsigned short int TXRB0 = 7;
    sbit  TXRB0_bit at C1TX2DLC.B7;
    sbit  TXRB0_C1TX2DLC_bit at C1TX2DLC.B7;
    const register unsigned short int DLC_3 = 6;
    sbit  DLC_3_bit at C1TX2DLC.B6;
    sbit  DLC_3_C1TX2DLC_bit at C1TX2DLC.B6;
    const register unsigned short int DLC_2 = 5;
    sbit  DLC_2_bit at C1TX2DLC.B5;
    sbit  DLC_2_C1TX2DLC_bit at C1TX2DLC.B5;
    const register unsigned short int DLC_1 = 4;
    sbit  DLC_1_bit at C1TX2DLC.B4;
    sbit  DLC_1_C1TX2DLC_bit at C1TX2DLC.B4;
    const register unsigned short int DLC_0 = 3;
    sbit  DLC_0_bit at C1TX2DLC.B3;
    sbit  DLC_0_C1TX2DLC_bit at C1TX2DLC.B3;

    // C1TX2B1 bits
    const register unsigned short int TXB2D1_7 = 15;
    sbit  TXB2D1_7_bit at C1TX2B1.B15;
    sbit  TXB2D1_7_C1TX2B1_bit at C1TX2B1.B15;
    const register unsigned short int TXB2D1_6 = 14;
    sbit  TXB2D1_6_bit at C1TX2B1.B14;
    sbit  TXB2D1_6_C1TX2B1_bit at C1TX2B1.B14;
    const register unsigned short int TXB2D1_5 = 13;
    sbit  TXB2D1_5_bit at C1TX2B1.B13;
    sbit  TXB2D1_5_C1TX2B1_bit at C1TX2B1.B13;
    const register unsigned short int TXB2D1_4 = 12;
    sbit  TXB2D1_4_bit at C1TX2B1.B12;
    sbit  TXB2D1_4_C1TX2B1_bit at C1TX2B1.B12;
    const register unsigned short int TXB2D1_3 = 11;
    sbit  TXB2D1_3_bit at C1TX2B1.B11;
    sbit  TXB2D1_3_C1TX2B1_bit at C1TX2B1.B11;
    const register unsigned short int TXB2D1_2 = 10;
    sbit  TXB2D1_2_bit at C1TX2B1.B10;
    sbit  TXB2D1_2_C1TX2B1_bit at C1TX2B1.B10;
    const register unsigned short int TXB2D1_1 = 9;
    sbit  TXB2D1_1_bit at C1TX2B1.B9;
    sbit  TXB2D1_1_C1TX2B1_bit at C1TX2B1.B9;
    const register unsigned short int TXB2D1_0 = 8;
    sbit  TXB2D1_0_bit at C1TX2B1.B8;
    sbit  TXB2D1_0_C1TX2B1_bit at C1TX2B1.B8;
    const register unsigned short int TXB2D0_7 = 7;
    sbit  TXB2D0_7_bit at C1TX2B1.B7;
    sbit  TXB2D0_7_C1TX2B1_bit at C1TX2B1.B7;
    const register unsigned short int TXB2D0_6 = 6;
    sbit  TXB2D0_6_bit at C1TX2B1.B6;
    sbit  TXB2D0_6_C1TX2B1_bit at C1TX2B1.B6;
    const register unsigned short int TXB2D0_5 = 5;
    sbit  TXB2D0_5_bit at C1TX2B1.B5;
    sbit  TXB2D0_5_C1TX2B1_bit at C1TX2B1.B5;
    const register unsigned short int TXB2D0_4 = 4;
    sbit  TXB2D0_4_bit at C1TX2B1.B4;
    sbit  TXB2D0_4_C1TX2B1_bit at C1TX2B1.B4;
    const register unsigned short int TXB2D0_3 = 3;
    sbit  TXB2D0_3_bit at C1TX2B1.B3;
    sbit  TXB2D0_3_C1TX2B1_bit at C1TX2B1.B3;
    const register unsigned short int TXB2D0_2 = 2;
    sbit  TXB2D0_2_bit at C1TX2B1.B2;
    sbit  TXB2D0_2_C1TX2B1_bit at C1TX2B1.B2;
    const register unsigned short int TXB2D0_1 = 1;
    sbit  TXB2D0_1_bit at C1TX2B1.B1;
    sbit  TXB2D0_1_C1TX2B1_bit at C1TX2B1.B1;
    const register unsigned short int TXB2D0_0 = 0;
    sbit  TXB2D0_0_bit at C1TX2B1.B0;
    sbit  TXB2D0_0_C1TX2B1_bit at C1TX2B1.B0;

    // C1TX2B2 bits
    const register unsigned short int TXB2D3_7 = 15;
    sbit  TXB2D3_7_bit at C1TX2B2.B15;
    sbit  TXB2D3_7_C1TX2B2_bit at C1TX2B2.B15;
    const register unsigned short int TXB2D3_6 = 14;
    sbit  TXB2D3_6_bit at C1TX2B2.B14;
    sbit  TXB2D3_6_C1TX2B2_bit at C1TX2B2.B14;
    const register unsigned short int TXB2D3_5 = 13;
    sbit  TXB2D3_5_bit at C1TX2B2.B13;
    sbit  TXB2D3_5_C1TX2B2_bit at C1TX2B2.B13;
    const register unsigned short int TXB2D3_4 = 12;
    sbit  TXB2D3_4_bit at C1TX2B2.B12;
    sbit  TXB2D3_4_C1TX2B2_bit at C1TX2B2.B12;
    const register unsigned short int TXB2D3_3 = 11;
    sbit  TXB2D3_3_bit at C1TX2B2.B11;
    sbit  TXB2D3_3_C1TX2B2_bit at C1TX2B2.B11;
    const register unsigned short int TXB2D3_2 = 10;
    sbit  TXB2D3_2_bit at C1TX2B2.B10;
    sbit  TXB2D3_2_C1TX2B2_bit at C1TX2B2.B10;
    const register unsigned short int TXB2D3_1 = 9;
    sbit  TXB2D3_1_bit at C1TX2B2.B9;
    sbit  TXB2D3_1_C1TX2B2_bit at C1TX2B2.B9;
    const register unsigned short int TXB2D3_0 = 8;
    sbit  TXB2D3_0_bit at C1TX2B2.B8;
    sbit  TXB2D3_0_C1TX2B2_bit at C1TX2B2.B8;
    const register unsigned short int TXB2D2_7 = 7;
    sbit  TXB2D2_7_bit at C1TX2B2.B7;
    sbit  TXB2D2_7_C1TX2B2_bit at C1TX2B2.B7;
    const register unsigned short int TXB2D2_6 = 6;
    sbit  TXB2D2_6_bit at C1TX2B2.B6;
    sbit  TXB2D2_6_C1TX2B2_bit at C1TX2B2.B6;
    const register unsigned short int TXB2D2_5 = 5;
    sbit  TXB2D2_5_bit at C1TX2B2.B5;
    sbit  TXB2D2_5_C1TX2B2_bit at C1TX2B2.B5;
    const register unsigned short int TXB2D2_4 = 4;
    sbit  TXB2D2_4_bit at C1TX2B2.B4;
    sbit  TXB2D2_4_C1TX2B2_bit at C1TX2B2.B4;
    const register unsigned short int TXB2D2_3 = 3;
    sbit  TXB2D2_3_bit at C1TX2B2.B3;
    sbit  TXB2D2_3_C1TX2B2_bit at C1TX2B2.B3;
    const register unsigned short int TXB2D2_2 = 2;
    sbit  TXB2D2_2_bit at C1TX2B2.B2;
    sbit  TXB2D2_2_C1TX2B2_bit at C1TX2B2.B2;
    const register unsigned short int TXB2D2_1 = 1;
    sbit  TXB2D2_1_bit at C1TX2B2.B1;
    sbit  TXB2D2_1_C1TX2B2_bit at C1TX2B2.B1;
    const register unsigned short int TXB2D2_0 = 0;
    sbit  TXB2D2_0_bit at C1TX2B2.B0;
    sbit  TXB2D2_0_C1TX2B2_bit at C1TX2B2.B0;

    // C1TX2B3 bits
    const register unsigned short int TXB2D5_7 = 15;
    sbit  TXB2D5_7_bit at C1TX2B3.B15;
    sbit  TXB2D5_7_C1TX2B3_bit at C1TX2B3.B15;
    const register unsigned short int TXB2D5_6 = 14;
    sbit  TXB2D5_6_bit at C1TX2B3.B14;
    sbit  TXB2D5_6_C1TX2B3_bit at C1TX2B3.B14;
    const register unsigned short int TXB2D5_5 = 13;
    sbit  TXB2D5_5_bit at C1TX2B3.B13;
    sbit  TXB2D5_5_C1TX2B3_bit at C1TX2B3.B13;
    const register unsigned short int TXB2D5_4 = 12;
    sbit  TXB2D5_4_bit at C1TX2B3.B12;
    sbit  TXB2D5_4_C1TX2B3_bit at C1TX2B3.B12;
    const register unsigned short int TXB2D5_3 = 11;
    sbit  TXB2D5_3_bit at C1TX2B3.B11;
    sbit  TXB2D5_3_C1TX2B3_bit at C1TX2B3.B11;
    const register unsigned short int TXB2D5_2 = 10;
    sbit  TXB2D5_2_bit at C1TX2B3.B10;
    sbit  TXB2D5_2_C1TX2B3_bit at C1TX2B3.B10;
    const register unsigned short int TXB2D5_1 = 9;
    sbit  TXB2D5_1_bit at C1TX2B3.B9;
    sbit  TXB2D5_1_C1TX2B3_bit at C1TX2B3.B9;
    const register unsigned short int TXB2D5_0 = 8;
    sbit  TXB2D5_0_bit at C1TX2B3.B8;
    sbit  TXB2D5_0_C1TX2B3_bit at C1TX2B3.B8;
    const register unsigned short int TXB2D4_7 = 7;
    sbit  TXB2D4_7_bit at C1TX2B3.B7;
    sbit  TXB2D4_7_C1TX2B3_bit at C1TX2B3.B7;
    const register unsigned short int TXB2D4_6 = 6;
    sbit  TXB2D4_6_bit at C1TX2B3.B6;
    sbit  TXB2D4_6_C1TX2B3_bit at C1TX2B3.B6;
    const register unsigned short int TXB2D4_5 = 5;
    sbit  TXB2D4_5_bit at C1TX2B3.B5;
    sbit  TXB2D4_5_C1TX2B3_bit at C1TX2B3.B5;
    const register unsigned short int TXB2D4_4 = 4;
    sbit  TXB2D4_4_bit at C1TX2B3.B4;
    sbit  TXB2D4_4_C1TX2B3_bit at C1TX2B3.B4;
    const register unsigned short int TXB2D4_3 = 3;
    sbit  TXB2D4_3_bit at C1TX2B3.B3;
    sbit  TXB2D4_3_C1TX2B3_bit at C1TX2B3.B3;
    const register unsigned short int TXB2D4_2 = 2;
    sbit  TXB2D4_2_bit at C1TX2B3.B2;
    sbit  TXB2D4_2_C1TX2B3_bit at C1TX2B3.B2;
    const register unsigned short int TXB2D4_1 = 1;
    sbit  TXB2D4_1_bit at C1TX2B3.B1;
    sbit  TXB2D4_1_C1TX2B3_bit at C1TX2B3.B1;
    const register unsigned short int TXB2D4_0 = 0;
    sbit  TXB2D4_0_bit at C1TX2B3.B0;
    sbit  TXB2D4_0_C1TX2B3_bit at C1TX2B3.B0;

    // C1TX2B4 bits
    const register unsigned short int TXB2D7_7 = 15;
    sbit  TXB2D7_7_bit at C1TX2B4.B15;
    sbit  TXB2D7_7_C1TX2B4_bit at C1TX2B4.B15;
    const register unsigned short int TXB2D7_6 = 14;
    sbit  TXB2D7_6_bit at C1TX2B4.B14;
    sbit  TXB2D7_6_C1TX2B4_bit at C1TX2B4.B14;
    const register unsigned short int TXB2D7_5 = 13;
    sbit  TXB2D7_5_bit at C1TX2B4.B13;
    sbit  TXB2D7_5_C1TX2B4_bit at C1TX2B4.B13;
    const register unsigned short int TXB2D7_4 = 12;
    sbit  TXB2D7_4_bit at C1TX2B4.B12;
    sbit  TXB2D7_4_C1TX2B4_bit at C1TX2B4.B12;
    const register unsigned short int TXB2D7_3 = 11;
    sbit  TXB2D7_3_bit at C1TX2B4.B11;
    sbit  TXB2D7_3_C1TX2B4_bit at C1TX2B4.B11;
    const register unsigned short int TXB2D7_2 = 10;
    sbit  TXB2D7_2_bit at C1TX2B4.B10;
    sbit  TXB2D7_2_C1TX2B4_bit at C1TX2B4.B10;
    const register unsigned short int TXB2D7_1 = 9;
    sbit  TXB2D7_1_bit at C1TX2B4.B9;
    sbit  TXB2D7_1_C1TX2B4_bit at C1TX2B4.B9;
    const register unsigned short int TXB2D7_0 = 8;
    sbit  TXB2D7_0_bit at C1TX2B4.B8;
    sbit  TXB2D7_0_C1TX2B4_bit at C1TX2B4.B8;
    const register unsigned short int TXB2D6_7 = 7;
    sbit  TXB2D6_7_bit at C1TX2B4.B7;
    sbit  TXB2D6_7_C1TX2B4_bit at C1TX2B4.B7;
    const register unsigned short int TXB2D6_6 = 6;
    sbit  TXB2D6_6_bit at C1TX2B4.B6;
    sbit  TXB2D6_6_C1TX2B4_bit at C1TX2B4.B6;
    const register unsigned short int TXB2D6_5 = 5;
    sbit  TXB2D6_5_bit at C1TX2B4.B5;
    sbit  TXB2D6_5_C1TX2B4_bit at C1TX2B4.B5;
    const register unsigned short int TXB2D6_4 = 4;
    sbit  TXB2D6_4_bit at C1TX2B4.B4;
    sbit  TXB2D6_4_C1TX2B4_bit at C1TX2B4.B4;
    const register unsigned short int TXB2D6_3 = 3;
    sbit  TXB2D6_3_bit at C1TX2B4.B3;
    sbit  TXB2D6_3_C1TX2B4_bit at C1TX2B4.B3;
    const register unsigned short int TXB2D6_2 = 2;
    sbit  TXB2D6_2_bit at C1TX2B4.B2;
    sbit  TXB2D6_2_C1TX2B4_bit at C1TX2B4.B2;
    const register unsigned short int TXB2D6_1 = 1;
    sbit  TXB2D6_1_bit at C1TX2B4.B1;
    sbit  TXB2D6_1_C1TX2B4_bit at C1TX2B4.B1;
    const register unsigned short int TXB2D6_0 = 0;
    sbit  TXB2D6_0_bit at C1TX2B4.B0;
    sbit  TXB2D6_0_C1TX2B4_bit at C1TX2B4.B0;

    // C1TX2CON bits
    const register unsigned short int TXABT = 6;
    sbit  TXABT_bit at C1TX2CON.B6;
    sbit  TXABT_C1TX2CON_bit at C1TX2CON.B6;
    const register unsigned short int TXLARB = 5;
    sbit  TXLARB_bit at C1TX2CON.B5;
    sbit  TXLARB_C1TX2CON_bit at C1TX2CON.B5;
    const register unsigned short int TXERR = 4;
    sbit  TXERR_bit at C1TX2CON.B4;
    sbit  TXERR_C1TX2CON_bit at C1TX2CON.B4;
    const register unsigned short int TXREQ = 3;
    sbit  TXREQ_bit at C1TX2CON.B3;
    sbit  TXREQ_C1TX2CON_bit at C1TX2CON.B3;
    const register unsigned short int TXPRI_1 = 1;
    sbit  TXPRI_1_bit at C1TX2CON.B1;
    sbit  TXPRI_1_C1TX2CON_bit at C1TX2CON.B1;
    const register unsigned short int TXPRI_0 = 0;
    sbit  TXPRI_0_bit at C1TX2CON.B0;
    sbit  TXPRI_0_C1TX2CON_bit at C1TX2CON.B0;

    // C1TX1SID bits
    sbit  SID10_C1TX1SID_bit at C1TX1SID.B15;
    sbit  SID9_C1TX1SID_bit at C1TX1SID.B14;
    sbit  SID8_C1TX1SID_bit at C1TX1SID.B13;
    sbit  SID7_C1TX1SID_bit at C1TX1SID.B12;
    sbit  SID6_C1TX1SID_bit at C1TX1SID.B11;
    sbit  SID5_C1TX1SID_bit at C1TX1SID.B7;
    sbit  SID4_C1TX1SID_bit at C1TX1SID.B6;
    sbit  SID3_C1TX1SID_bit at C1TX1SID.B5;
    sbit  SID2_C1TX1SID_bit at C1TX1SID.B4;
    sbit  SID1_C1TX1SID_bit at C1TX1SID.B3;
    sbit  SID0_C1TX1SID_bit at C1TX1SID.B2;
    sbit  SRR_C1TX1SID_bit at C1TX1SID.B1;
    sbit  TXIDE_C1TX1SID_bit at C1TX1SID.B0;

    // C1TX1EID bits
    sbit  EID17_C1TX1EID_bit at C1TX1EID.B15;
    sbit  EID16_C1TX1EID_bit at C1TX1EID.B14;
    sbit  EID15_C1TX1EID_bit at C1TX1EID.B13;
    sbit  EID14_C1TX1EID_bit at C1TX1EID.B12;
    sbit  EID13_C1TX1EID_bit at C1TX1EID.B7;
    sbit  EID12_C1TX1EID_bit at C1TX1EID.B6;
    sbit  EID11_C1TX1EID_bit at C1TX1EID.B5;
    sbit  EID10_C1TX1EID_bit at C1TX1EID.B4;
    sbit  EID9_C1TX1EID_bit at C1TX1EID.B3;
    sbit  EID8_C1TX1EID_bit at C1TX1EID.B2;
    sbit  EID7_C1TX1EID_bit at C1TX1EID.B1;
    sbit  EID6_C1TX1EID_bit at C1TX1EID.B0;

    // C1TX1DLC bits
    sbit  EID5_C1TX1DLC_bit at C1TX1DLC.B15;
    sbit  EID4_C1TX1DLC_bit at C1TX1DLC.B14;
    sbit  EID3_C1TX1DLC_bit at C1TX1DLC.B13;
    sbit  EID2_C1TX1DLC_bit at C1TX1DLC.B12;
    sbit  EID1_C1TX1DLC_bit at C1TX1DLC.B11;
    sbit  EID0_C1TX1DLC_bit at C1TX1DLC.B10;
    sbit  TXRTR_C1TX1DLC_bit at C1TX1DLC.B9;
    sbit  TXRB1_C1TX1DLC_bit at C1TX1DLC.B8;
    sbit  TXRB0_C1TX1DLC_bit at C1TX1DLC.B7;
    sbit  DLC_3_C1TX1DLC_bit at C1TX1DLC.B6;
    sbit  DLC_2_C1TX1DLC_bit at C1TX1DLC.B5;
    sbit  DLC_1_C1TX1DLC_bit at C1TX1DLC.B4;
    sbit  DLC_0_C1TX1DLC_bit at C1TX1DLC.B3;

    // C1TX1B1 bits
    const register unsigned short int TXB1D1_7 = 15;
    sbit  TXB1D1_7_bit at C1TX1B1.B15;
    sbit  TXB1D1_7_C1TX1B1_bit at C1TX1B1.B15;
    const register unsigned short int TXB1D1_6 = 14;
    sbit  TXB1D1_6_bit at C1TX1B1.B14;
    sbit  TXB1D1_6_C1TX1B1_bit at C1TX1B1.B14;
    const register unsigned short int TXB1D1_5 = 13;
    sbit  TXB1D1_5_bit at C1TX1B1.B13;
    sbit  TXB1D1_5_C1TX1B1_bit at C1TX1B1.B13;
    const register unsigned short int TXB1D1_4 = 12;
    sbit  TXB1D1_4_bit at C1TX1B1.B12;
    sbit  TXB1D1_4_C1TX1B1_bit at C1TX1B1.B12;
    const register unsigned short int TXB1D1_3 = 11;
    sbit  TXB1D1_3_bit at C1TX1B1.B11;
    sbit  TXB1D1_3_C1TX1B1_bit at C1TX1B1.B11;
    const register unsigned short int TXB1D1_2 = 10;
    sbit  TXB1D1_2_bit at C1TX1B1.B10;
    sbit  TXB1D1_2_C1TX1B1_bit at C1TX1B1.B10;
    const register unsigned short int TXB1D1_1 = 9;
    sbit  TXB1D1_1_bit at C1TX1B1.B9;
    sbit  TXB1D1_1_C1TX1B1_bit at C1TX1B1.B9;
    const register unsigned short int TXB1D1_0 = 8;
    sbit  TXB1D1_0_bit at C1TX1B1.B8;
    sbit  TXB1D1_0_C1TX1B1_bit at C1TX1B1.B8;
    const register unsigned short int TXB1D0_7 = 7;
    sbit  TXB1D0_7_bit at C1TX1B1.B7;
    sbit  TXB1D0_7_C1TX1B1_bit at C1TX1B1.B7;
    const register unsigned short int TXB1D0_6 = 6;
    sbit  TXB1D0_6_bit at C1TX1B1.B6;
    sbit  TXB1D0_6_C1TX1B1_bit at C1TX1B1.B6;
    const register unsigned short int TXB1D0_5 = 5;
    sbit  TXB1D0_5_bit at C1TX1B1.B5;
    sbit  TXB1D0_5_C1TX1B1_bit at C1TX1B1.B5;
    const register unsigned short int TXB1D0_4 = 4;
    sbit  TXB1D0_4_bit at C1TX1B1.B4;
    sbit  TXB1D0_4_C1TX1B1_bit at C1TX1B1.B4;
    const register unsigned short int TXB1D0_3 = 3;
    sbit  TXB1D0_3_bit at C1TX1B1.B3;
    sbit  TXB1D0_3_C1TX1B1_bit at C1TX1B1.B3;
    const register unsigned short int TXB1D0_2 = 2;
    sbit  TXB1D0_2_bit at C1TX1B1.B2;
    sbit  TXB1D0_2_C1TX1B1_bit at C1TX1B1.B2;
    const register unsigned short int TXB1D0_1 = 1;
    sbit  TXB1D0_1_bit at C1TX1B1.B1;
    sbit  TXB1D0_1_C1TX1B1_bit at C1TX1B1.B1;
    const register unsigned short int TXB1D0_0 = 0;
    sbit  TXB1D0_0_bit at C1TX1B1.B0;
    sbit  TXB1D0_0_C1TX1B1_bit at C1TX1B1.B0;

    // C1TX1B2 bits
    const register unsigned short int TXB1D3_7 = 15;
    sbit  TXB1D3_7_bit at C1TX1B2.B15;
    sbit  TXB1D3_7_C1TX1B2_bit at C1TX1B2.B15;
    const register unsigned short int TXB1D3_6 = 14;
    sbit  TXB1D3_6_bit at C1TX1B2.B14;
    sbit  TXB1D3_6_C1TX1B2_bit at C1TX1B2.B14;
    const register unsigned short int TXB1D3_5 = 13;
    sbit  TXB1D3_5_bit at C1TX1B2.B13;
    sbit  TXB1D3_5_C1TX1B2_bit at C1TX1B2.B13;
    const register unsigned short int TXB1D3_4 = 12;
    sbit  TXB1D3_4_bit at C1TX1B2.B12;
    sbit  TXB1D3_4_C1TX1B2_bit at C1TX1B2.B12;
    const register unsigned short int TXB1D3_3 = 11;
    sbit  TXB1D3_3_bit at C1TX1B2.B11;
    sbit  TXB1D3_3_C1TX1B2_bit at C1TX1B2.B11;
    const register unsigned short int TXB1D3_2 = 10;
    sbit  TXB1D3_2_bit at C1TX1B2.B10;
    sbit  TXB1D3_2_C1TX1B2_bit at C1TX1B2.B10;
    const register unsigned short int TXB1D3_1 = 9;
    sbit  TXB1D3_1_bit at C1TX1B2.B9;
    sbit  TXB1D3_1_C1TX1B2_bit at C1TX1B2.B9;
    const register unsigned short int TXB1D3_0 = 8;
    sbit  TXB1D3_0_bit at C1TX1B2.B8;
    sbit  TXB1D3_0_C1TX1B2_bit at C1TX1B2.B8;
    const register unsigned short int TXB1D2_7 = 7;
    sbit  TXB1D2_7_bit at C1TX1B2.B7;
    sbit  TXB1D2_7_C1TX1B2_bit at C1TX1B2.B7;
    const register unsigned short int TXB1D2_6 = 6;
    sbit  TXB1D2_6_bit at C1TX1B2.B6;
    sbit  TXB1D2_6_C1TX1B2_bit at C1TX1B2.B6;
    const register unsigned short int TXB1D2_5 = 5;
    sbit  TXB1D2_5_bit at C1TX1B2.B5;
    sbit  TXB1D2_5_C1TX1B2_bit at C1TX1B2.B5;
    const register unsigned short int TXB1D2_4 = 4;
    sbit  TXB1D2_4_bit at C1TX1B2.B4;
    sbit  TXB1D2_4_C1TX1B2_bit at C1TX1B2.B4;
    const register unsigned short int TXB1D2_3 = 3;
    sbit  TXB1D2_3_bit at C1TX1B2.B3;
    sbit  TXB1D2_3_C1TX1B2_bit at C1TX1B2.B3;
    const register unsigned short int TXB1D2_2 = 2;
    sbit  TXB1D2_2_bit at C1TX1B2.B2;
    sbit  TXB1D2_2_C1TX1B2_bit at C1TX1B2.B2;
    const register unsigned short int TXB1D2_1 = 1;
    sbit  TXB1D2_1_bit at C1TX1B2.B1;
    sbit  TXB1D2_1_C1TX1B2_bit at C1TX1B2.B1;
    const register unsigned short int TXB1D2_0 = 0;
    sbit  TXB1D2_0_bit at C1TX1B2.B0;
    sbit  TXB1D2_0_C1TX1B2_bit at C1TX1B2.B0;

    // C1TX1B3 bits
    const register unsigned short int TXB1D5_7 = 15;
    sbit  TXB1D5_7_bit at C1TX1B3.B15;
    sbit  TXB1D5_7_C1TX1B3_bit at C1TX1B3.B15;
    const register unsigned short int TXB1D5_6 = 14;
    sbit  TXB1D5_6_bit at C1TX1B3.B14;
    sbit  TXB1D5_6_C1TX1B3_bit at C1TX1B3.B14;
    const register unsigned short int TXB1D5_5 = 13;
    sbit  TXB1D5_5_bit at C1TX1B3.B13;
    sbit  TXB1D5_5_C1TX1B3_bit at C1TX1B3.B13;
    const register unsigned short int TXB1D5_4 = 12;
    sbit  TXB1D5_4_bit at C1TX1B3.B12;
    sbit  TXB1D5_4_C1TX1B3_bit at C1TX1B3.B12;
    const register unsigned short int TXB1D5_3 = 11;
    sbit  TXB1D5_3_bit at C1TX1B3.B11;
    sbit  TXB1D5_3_C1TX1B3_bit at C1TX1B3.B11;
    const register unsigned short int TXB1D5_2 = 10;
    sbit  TXB1D5_2_bit at C1TX1B3.B10;
    sbit  TXB1D5_2_C1TX1B3_bit at C1TX1B3.B10;
    const register unsigned short int TXB1D5_1 = 9;
    sbit  TXB1D5_1_bit at C1TX1B3.B9;
    sbit  TXB1D5_1_C1TX1B3_bit at C1TX1B3.B9;
    const register unsigned short int TXB1D5_0 = 8;
    sbit  TXB1D5_0_bit at C1TX1B3.B8;
    sbit  TXB1D5_0_C1TX1B3_bit at C1TX1B3.B8;
    const register unsigned short int TXB1D4_7 = 7;
    sbit  TXB1D4_7_bit at C1TX1B3.B7;
    sbit  TXB1D4_7_C1TX1B3_bit at C1TX1B3.B7;
    const register unsigned short int TXB1D4_6 = 6;
    sbit  TXB1D4_6_bit at C1TX1B3.B6;
    sbit  TXB1D4_6_C1TX1B3_bit at C1TX1B3.B6;
    const register unsigned short int TXB1D4_5 = 5;
    sbit  TXB1D4_5_bit at C1TX1B3.B5;
    sbit  TXB1D4_5_C1TX1B3_bit at C1TX1B3.B5;
    const register unsigned short int TXB1D4_4 = 4;
    sbit  TXB1D4_4_bit at C1TX1B3.B4;
    sbit  TXB1D4_4_C1TX1B3_bit at C1TX1B3.B4;
    const register unsigned short int TXB1D4_3 = 3;
    sbit  TXB1D4_3_bit at C1TX1B3.B3;
    sbit  TXB1D4_3_C1TX1B3_bit at C1TX1B3.B3;
    const register unsigned short int TXB1D4_2 = 2;
    sbit  TXB1D4_2_bit at C1TX1B3.B2;
    sbit  TXB1D4_2_C1TX1B3_bit at C1TX1B3.B2;
    const register unsigned short int TXB1D4_1 = 1;
    sbit  TXB1D4_1_bit at C1TX1B3.B1;
    sbit  TXB1D4_1_C1TX1B3_bit at C1TX1B3.B1;
    const register unsigned short int TXB1D4_0 = 0;
    sbit  TXB1D4_0_bit at C1TX1B3.B0;
    sbit  TXB1D4_0_C1TX1B3_bit at C1TX1B3.B0;

    // C1TX1B4 bits
    const register unsigned short int TXB1D7_7 = 15;
    sbit  TXB1D7_7_bit at C1TX1B4.B15;
    sbit  TXB1D7_7_C1TX1B4_bit at C1TX1B4.B15;
    const register unsigned short int TXB1D7_6 = 14;
    sbit  TXB1D7_6_bit at C1TX1B4.B14;
    sbit  TXB1D7_6_C1TX1B4_bit at C1TX1B4.B14;
    const register unsigned short int TXB1D7_5 = 13;
    sbit  TXB1D7_5_bit at C1TX1B4.B13;
    sbit  TXB1D7_5_C1TX1B4_bit at C1TX1B4.B13;
    const register unsigned short int TXB1D7_4 = 12;
    sbit  TXB1D7_4_bit at C1TX1B4.B12;
    sbit  TXB1D7_4_C1TX1B4_bit at C1TX1B4.B12;
    const register unsigned short int TXB1D7_3 = 11;
    sbit  TXB1D7_3_bit at C1TX1B4.B11;
    sbit  TXB1D7_3_C1TX1B4_bit at C1TX1B4.B11;
    const register unsigned short int TXB1D7_2 = 10;
    sbit  TXB1D7_2_bit at C1TX1B4.B10;
    sbit  TXB1D7_2_C1TX1B4_bit at C1TX1B4.B10;
    const register unsigned short int TXB1D7_1 = 9;
    sbit  TXB1D7_1_bit at C1TX1B4.B9;
    sbit  TXB1D7_1_C1TX1B4_bit at C1TX1B4.B9;
    const register unsigned short int TXB1D7_0 = 8;
    sbit  TXB1D7_0_bit at C1TX1B4.B8;
    sbit  TXB1D7_0_C1TX1B4_bit at C1TX1B4.B8;
    const register unsigned short int TXB1D6_7 = 7;
    sbit  TXB1D6_7_bit at C1TX1B4.B7;
    sbit  TXB1D6_7_C1TX1B4_bit at C1TX1B4.B7;
    const register unsigned short int TXB1D6_6 = 6;
    sbit  TXB1D6_6_bit at C1TX1B4.B6;
    sbit  TXB1D6_6_C1TX1B4_bit at C1TX1B4.B6;
    const register unsigned short int TXB1D6_5 = 5;
    sbit  TXB1D6_5_bit at C1TX1B4.B5;
    sbit  TXB1D6_5_C1TX1B4_bit at C1TX1B4.B5;
    const register unsigned short int TXB1D6_4 = 4;
    sbit  TXB1D6_4_bit at C1TX1B4.B4;
    sbit  TXB1D6_4_C1TX1B4_bit at C1TX1B4.B4;
    const register unsigned short int TXB1D6_3 = 3;
    sbit  TXB1D6_3_bit at C1TX1B4.B3;
    sbit  TXB1D6_3_C1TX1B4_bit at C1TX1B4.B3;
    const register unsigned short int TXB1D6_2 = 2;
    sbit  TXB1D6_2_bit at C1TX1B4.B2;
    sbit  TXB1D6_2_C1TX1B4_bit at C1TX1B4.B2;
    const register unsigned short int TXB1D6_1 = 1;
    sbit  TXB1D6_1_bit at C1TX1B4.B1;
    sbit  TXB1D6_1_C1TX1B4_bit at C1TX1B4.B1;
    const register unsigned short int TXB1D6_0 = 0;
    sbit  TXB1D6_0_bit at C1TX1B4.B0;
    sbit  TXB1D6_0_C1TX1B4_bit at C1TX1B4.B0;

    // C1TX1CON bits
    sbit  TXABT_C1TX1CON_bit at C1TX1CON.B6;
    sbit  TXLARB_C1TX1CON_bit at C1TX1CON.B5;
    sbit  TXERR_C1TX1CON_bit at C1TX1CON.B4;
    sbit  TXREQ_C1TX1CON_bit at C1TX1CON.B3;
    sbit  TXPRI_1_C1TX1CON_bit at C1TX1CON.B1;
    sbit  TXPRI_0_C1TX1CON_bit at C1TX1CON.B0;

    // C1TX0SID bits
    sbit  SID10_C1TX0SID_bit at C1TX0SID.B15;
    sbit  SID9_C1TX0SID_bit at C1TX0SID.B14;
    sbit  SID8_C1TX0SID_bit at C1TX0SID.B13;
    sbit  SID7_C1TX0SID_bit at C1TX0SID.B12;
    sbit  SID6_C1TX0SID_bit at C1TX0SID.B11;
    sbit  SID5_C1TX0SID_bit at C1TX0SID.B7;
    sbit  SID4_C1TX0SID_bit at C1TX0SID.B6;
    sbit  SID3_C1TX0SID_bit at C1TX0SID.B5;
    sbit  SID2_C1TX0SID_bit at C1TX0SID.B4;
    sbit  SID1_C1TX0SID_bit at C1TX0SID.B3;
    sbit  SID0_C1TX0SID_bit at C1TX0SID.B2;
    sbit  SRR_C1TX0SID_bit at C1TX0SID.B1;
    sbit  TXIDE_C1TX0SID_bit at C1TX0SID.B0;

    // C1TX0EID bits
    sbit  EID17_C1TX0EID_bit at C1TX0EID.B15;
    sbit  EID16_C1TX0EID_bit at C1TX0EID.B14;
    sbit  EID15_C1TX0EID_bit at C1TX0EID.B13;
    sbit  EID14_C1TX0EID_bit at C1TX0EID.B12;
    sbit  EID13_C1TX0EID_bit at C1TX0EID.B7;
    sbit  EID12_C1TX0EID_bit at C1TX0EID.B6;
    sbit  EID11_C1TX0EID_bit at C1TX0EID.B5;
    sbit  EID10_C1TX0EID_bit at C1TX0EID.B4;
    sbit  EID9_C1TX0EID_bit at C1TX0EID.B3;
    sbit  EID8_C1TX0EID_bit at C1TX0EID.B2;
    sbit  EID7_C1TX0EID_bit at C1TX0EID.B1;
    sbit  EID6_C1TX0EID_bit at C1TX0EID.B0;

    // C1TX0DLC bits
    sbit  EID5_C1TX0DLC_bit at C1TX0DLC.B15;
    sbit  EID4_C1TX0DLC_bit at C1TX0DLC.B14;
    sbit  EID3_C1TX0DLC_bit at C1TX0DLC.B13;
    sbit  EID2_C1TX0DLC_bit at C1TX0DLC.B12;
    sbit  EID1_C1TX0DLC_bit at C1TX0DLC.B11;
    sbit  EID0_C1TX0DLC_bit at C1TX0DLC.B10;
    sbit  TXRTR_C1TX0DLC_bit at C1TX0DLC.B9;
    sbit  TXRB1_C1TX0DLC_bit at C1TX0DLC.B8;
    sbit  TXRB0_C1TX0DLC_bit at C1TX0DLC.B7;
    sbit  DLC_3_C1TX0DLC_bit at C1TX0DLC.B6;
    sbit  DLC_2_C1TX0DLC_bit at C1TX0DLC.B5;
    sbit  DLC_1_C1TX0DLC_bit at C1TX0DLC.B4;
    sbit  DLC_0_C1TX0DLC_bit at C1TX0DLC.B3;

    // C1TX0B1 bits
    const register unsigned short int TXB0D1_7 = 15;
    sbit  TXB0D1_7_bit at C1TX0B1.B15;
    sbit  TXB0D1_7_C1TX0B1_bit at C1TX0B1.B15;
    const register unsigned short int TXB0D1_6 = 14;
    sbit  TXB0D1_6_bit at C1TX0B1.B14;
    sbit  TXB0D1_6_C1TX0B1_bit at C1TX0B1.B14;
    const register unsigned short int TXB0D1_5 = 13;
    sbit  TXB0D1_5_bit at C1TX0B1.B13;
    sbit  TXB0D1_5_C1TX0B1_bit at C1TX0B1.B13;
    const register unsigned short int TXB0D1_4 = 12;
    sbit  TXB0D1_4_bit at C1TX0B1.B12;
    sbit  TXB0D1_4_C1TX0B1_bit at C1TX0B1.B12;
    const register unsigned short int TXB0D1_3 = 11;
    sbit  TXB0D1_3_bit at C1TX0B1.B11;
    sbit  TXB0D1_3_C1TX0B1_bit at C1TX0B1.B11;
    const register unsigned short int TXB0D1_2 = 10;
    sbit  TXB0D1_2_bit at C1TX0B1.B10;
    sbit  TXB0D1_2_C1TX0B1_bit at C1TX0B1.B10;
    const register unsigned short int TXB0D1_1 = 9;
    sbit  TXB0D1_1_bit at C1TX0B1.B9;
    sbit  TXB0D1_1_C1TX0B1_bit at C1TX0B1.B9;
    const register unsigned short int TXB0D1_0 = 8;
    sbit  TXB0D1_0_bit at C1TX0B1.B8;
    sbit  TXB0D1_0_C1TX0B1_bit at C1TX0B1.B8;
    const register unsigned short int TXB0D0_7 = 7;
    sbit  TXB0D0_7_bit at C1TX0B1.B7;
    sbit  TXB0D0_7_C1TX0B1_bit at C1TX0B1.B7;
    const register unsigned short int TXB0D0_6 = 6;
    sbit  TXB0D0_6_bit at C1TX0B1.B6;
    sbit  TXB0D0_6_C1TX0B1_bit at C1TX0B1.B6;
    const register unsigned short int TXB0D0_5 = 5;
    sbit  TXB0D0_5_bit at C1TX0B1.B5;
    sbit  TXB0D0_5_C1TX0B1_bit at C1TX0B1.B5;
    const register unsigned short int TXB0D0_4 = 4;
    sbit  TXB0D0_4_bit at C1TX0B1.B4;
    sbit  TXB0D0_4_C1TX0B1_bit at C1TX0B1.B4;
    const register unsigned short int TXB0D0_3 = 3;
    sbit  TXB0D0_3_bit at C1TX0B1.B3;
    sbit  TXB0D0_3_C1TX0B1_bit at C1TX0B1.B3;
    const register unsigned short int TXB0D0_2 = 2;
    sbit  TXB0D0_2_bit at C1TX0B1.B2;
    sbit  TXB0D0_2_C1TX0B1_bit at C1TX0B1.B2;
    const register unsigned short int TXB0D0_1 = 1;
    sbit  TXB0D0_1_bit at C1TX0B1.B1;
    sbit  TXB0D0_1_C1TX0B1_bit at C1TX0B1.B1;
    const register unsigned short int TXB0D0_0 = 0;
    sbit  TXB0D0_0_bit at C1TX0B1.B0;
    sbit  TXB0D0_0_C1TX0B1_bit at C1TX0B1.B0;

    // C1TX0B2 bits
    const register unsigned short int TXB0D3_7 = 15;
    sbit  TXB0D3_7_bit at C1TX0B2.B15;
    sbit  TXB0D3_7_C1TX0B2_bit at C1TX0B2.B15;
    const register unsigned short int TXB0D3_6 = 14;
    sbit  TXB0D3_6_bit at C1TX0B2.B14;
    sbit  TXB0D3_6_C1TX0B2_bit at C1TX0B2.B14;
    const register unsigned short int TXB0D3_5 = 13;
    sbit  TXB0D3_5_bit at C1TX0B2.B13;
    sbit  TXB0D3_5_C1TX0B2_bit at C1TX0B2.B13;
    const register unsigned short int TXB0D3_4 = 12;
    sbit  TXB0D3_4_bit at C1TX0B2.B12;
    sbit  TXB0D3_4_C1TX0B2_bit at C1TX0B2.B12;
    const register unsigned short int TXB0D3_3 = 11;
    sbit  TXB0D3_3_bit at C1TX0B2.B11;
    sbit  TXB0D3_3_C1TX0B2_bit at C1TX0B2.B11;
    const register unsigned short int TXB0D3_2 = 10;
    sbit  TXB0D3_2_bit at C1TX0B2.B10;
    sbit  TXB0D3_2_C1TX0B2_bit at C1TX0B2.B10;
    const register unsigned short int TXB0D3_1 = 9;
    sbit  TXB0D3_1_bit at C1TX0B2.B9;
    sbit  TXB0D3_1_C1TX0B2_bit at C1TX0B2.B9;
    const register unsigned short int TXB0D3_0 = 8;
    sbit  TXB0D3_0_bit at C1TX0B2.B8;
    sbit  TXB0D3_0_C1TX0B2_bit at C1TX0B2.B8;
    const register unsigned short int TXB0D2_7 = 7;
    sbit  TXB0D2_7_bit at C1TX0B2.B7;
    sbit  TXB0D2_7_C1TX0B2_bit at C1TX0B2.B7;
    const register unsigned short int TXB0D2_6 = 6;
    sbit  TXB0D2_6_bit at C1TX0B2.B6;
    sbit  TXB0D2_6_C1TX0B2_bit at C1TX0B2.B6;
    const register unsigned short int TXB0D2_5 = 5;
    sbit  TXB0D2_5_bit at C1TX0B2.B5;
    sbit  TXB0D2_5_C1TX0B2_bit at C1TX0B2.B5;
    const register unsigned short int TXB0D2_4 = 4;
    sbit  TXB0D2_4_bit at C1TX0B2.B4;
    sbit  TXB0D2_4_C1TX0B2_bit at C1TX0B2.B4;
    const register unsigned short int TXB0D2_3 = 3;
    sbit  TXB0D2_3_bit at C1TX0B2.B3;
    sbit  TXB0D2_3_C1TX0B2_bit at C1TX0B2.B3;
    const register unsigned short int TXB0D2_2 = 2;
    sbit  TXB0D2_2_bit at C1TX0B2.B2;
    sbit  TXB0D2_2_C1TX0B2_bit at C1TX0B2.B2;
    const register unsigned short int TXB0D2_1 = 1;
    sbit  TXB0D2_1_bit at C1TX0B2.B1;
    sbit  TXB0D2_1_C1TX0B2_bit at C1TX0B2.B1;
    const register unsigned short int TXB0D2_0 = 0;
    sbit  TXB0D2_0_bit at C1TX0B2.B0;
    sbit  TXB0D2_0_C1TX0B2_bit at C1TX0B2.B0;

    // C1TX0B3 bits
    const register unsigned short int TXB0D5_7 = 15;
    sbit  TXB0D5_7_bit at C1TX0B3.B15;
    sbit  TXB0D5_7_C1TX0B3_bit at C1TX0B3.B15;
    const register unsigned short int TXB0D5_6 = 14;
    sbit  TXB0D5_6_bit at C1TX0B3.B14;
    sbit  TXB0D5_6_C1TX0B3_bit at C1TX0B3.B14;
    const register unsigned short int TXB0D5_5 = 13;
    sbit  TXB0D5_5_bit at C1TX0B3.B13;
    sbit  TXB0D5_5_C1TX0B3_bit at C1TX0B3.B13;
    const register unsigned short int TXB0D5_4 = 12;
    sbit  TXB0D5_4_bit at C1TX0B3.B12;
    sbit  TXB0D5_4_C1TX0B3_bit at C1TX0B3.B12;
    const register unsigned short int TXB0D5_3 = 11;
    sbit  TXB0D5_3_bit at C1TX0B3.B11;
    sbit  TXB0D5_3_C1TX0B3_bit at C1TX0B3.B11;
    const register unsigned short int TXB0D5_2 = 10;
    sbit  TXB0D5_2_bit at C1TX0B3.B10;
    sbit  TXB0D5_2_C1TX0B3_bit at C1TX0B3.B10;
    const register unsigned short int TXB0D5_1 = 9;
    sbit  TXB0D5_1_bit at C1TX0B3.B9;
    sbit  TXB0D5_1_C1TX0B3_bit at C1TX0B3.B9;
    const register unsigned short int TXB0D5_0 = 8;
    sbit  TXB0D5_0_bit at C1TX0B3.B8;
    sbit  TXB0D5_0_C1TX0B3_bit at C1TX0B3.B8;
    const register unsigned short int TXB0D4_7 = 7;
    sbit  TXB0D4_7_bit at C1TX0B3.B7;
    sbit  TXB0D4_7_C1TX0B3_bit at C1TX0B3.B7;
    const register unsigned short int TXB0D4_6 = 6;
    sbit  TXB0D4_6_bit at C1TX0B3.B6;
    sbit  TXB0D4_6_C1TX0B3_bit at C1TX0B3.B6;
    const register unsigned short int TXB0D4_5 = 5;
    sbit  TXB0D4_5_bit at C1TX0B3.B5;
    sbit  TXB0D4_5_C1TX0B3_bit at C1TX0B3.B5;
    const register unsigned short int TXB0D4_4 = 4;
    sbit  TXB0D4_4_bit at C1TX0B3.B4;
    sbit  TXB0D4_4_C1TX0B3_bit at C1TX0B3.B4;
    const register unsigned short int TXB0D4_3 = 3;
    sbit  TXB0D4_3_bit at C1TX0B3.B3;
    sbit  TXB0D4_3_C1TX0B3_bit at C1TX0B3.B3;
    const register unsigned short int TXB0D4_2 = 2;
    sbit  TXB0D4_2_bit at C1TX0B3.B2;
    sbit  TXB0D4_2_C1TX0B3_bit at C1TX0B3.B2;
    const register unsigned short int TXB0D4_1 = 1;
    sbit  TXB0D4_1_bit at C1TX0B3.B1;
    sbit  TXB0D4_1_C1TX0B3_bit at C1TX0B3.B1;
    const register unsigned short int TXB0D4_0 = 0;
    sbit  TXB0D4_0_bit at C1TX0B3.B0;
    sbit  TXB0D4_0_C1TX0B3_bit at C1TX0B3.B0;

    // C1TX0B4 bits
    const register unsigned short int TXB0D7_7 = 15;
    sbit  TXB0D7_7_bit at C1TX0B4.B15;
    sbit  TXB0D7_7_C1TX0B4_bit at C1TX0B4.B15;
    const register unsigned short int TXB0D7_6 = 14;
    sbit  TXB0D7_6_bit at C1TX0B4.B14;
    sbit  TXB0D7_6_C1TX0B4_bit at C1TX0B4.B14;
    const register unsigned short int TXB0D7_5 = 13;
    sbit  TXB0D7_5_bit at C1TX0B4.B13;
    sbit  TXB0D7_5_C1TX0B4_bit at C1TX0B4.B13;
    const register unsigned short int TXB0D7_4 = 12;
    sbit  TXB0D7_4_bit at C1TX0B4.B12;
    sbit  TXB0D7_4_C1TX0B4_bit at C1TX0B4.B12;
    const register unsigned short int TXB0D7_3 = 11;
    sbit  TXB0D7_3_bit at C1TX0B4.B11;
    sbit  TXB0D7_3_C1TX0B4_bit at C1TX0B4.B11;
    const register unsigned short int TXB0D7_2 = 10;
    sbit  TXB0D7_2_bit at C1TX0B4.B10;
    sbit  TXB0D7_2_C1TX0B4_bit at C1TX0B4.B10;
    const register unsigned short int TXB0D7_1 = 9;
    sbit  TXB0D7_1_bit at C1TX0B4.B9;
    sbit  TXB0D7_1_C1TX0B4_bit at C1TX0B4.B9;
    const register unsigned short int TXB0D7_0 = 8;
    sbit  TXB0D7_0_bit at C1TX0B4.B8;
    sbit  TXB0D7_0_C1TX0B4_bit at C1TX0B4.B8;
    const register unsigned short int TXB0D6_7 = 7;
    sbit  TXB0D6_7_bit at C1TX0B4.B7;
    sbit  TXB0D6_7_C1TX0B4_bit at C1TX0B4.B7;
    const register unsigned short int TXB0D6_6 = 6;
    sbit  TXB0D6_6_bit at C1TX0B4.B6;
    sbit  TXB0D6_6_C1TX0B4_bit at C1TX0B4.B6;
    const register unsigned short int TXB0D6_5 = 5;
    sbit  TXB0D6_5_bit at C1TX0B4.B5;
    sbit  TXB0D6_5_C1TX0B4_bit at C1TX0B4.B5;
    const register unsigned short int TXB0D6_4 = 4;
    sbit  TXB0D6_4_bit at C1TX0B4.B4;
    sbit  TXB0D6_4_C1TX0B4_bit at C1TX0B4.B4;
    const register unsigned short int TXB0D6_3 = 3;
    sbit  TXB0D6_3_bit at C1TX0B4.B3;
    sbit  TXB0D6_3_C1TX0B4_bit at C1TX0B4.B3;
    const register unsigned short int TXB0D6_2 = 2;
    sbit  TXB0D6_2_bit at C1TX0B4.B2;
    sbit  TXB0D6_2_C1TX0B4_bit at C1TX0B4.B2;
    const register unsigned short int TXB0D6_1 = 1;
    sbit  TXB0D6_1_bit at C1TX0B4.B1;
    sbit  TXB0D6_1_C1TX0B4_bit at C1TX0B4.B1;
    const register unsigned short int TXB0D6_0 = 0;
    sbit  TXB0D6_0_bit at C1TX0B4.B0;
    sbit  TXB0D6_0_C1TX0B4_bit at C1TX0B4.B0;

    // C1TX0CON bits
    sbit  TXABT_C1TX0CON_bit at C1TX0CON.B6;
    sbit  TXLARB_C1TX0CON_bit at C1TX0CON.B5;
    sbit  TXERR_C1TX0CON_bit at C1TX0CON.B4;
    sbit  TXREQ_C1TX0CON_bit at C1TX0CON.B3;
    sbit  TXPRI_1_C1TX0CON_bit at C1TX0CON.B1;
    sbit  TXPRI_0_C1TX0CON_bit at C1TX0CON.B0;

    // C1RX1SID bits
    sbit  SID10_C1RX1SID_bit at C1RX1SID.B12;
    sbit  SID9_C1RX1SID_bit at C1RX1SID.B11;
    sbit  SID8_C1RX1SID_bit at C1RX1SID.B10;
    sbit  SID7_C1RX1SID_bit at C1RX1SID.B9;
    sbit  SID6_C1RX1SID_bit at C1RX1SID.B8;
    sbit  SID5_C1RX1SID_bit at C1RX1SID.B7;
    sbit  SID4_C1RX1SID_bit at C1RX1SID.B6;
    sbit  SID3_C1RX1SID_bit at C1RX1SID.B5;
    sbit  SID2_C1RX1SID_bit at C1RX1SID.B4;
    sbit  SID1_C1RX1SID_bit at C1RX1SID.B3;
    sbit  SID0_C1RX1SID_bit at C1RX1SID.B2;
    sbit  SRR_C1RX1SID_bit at C1RX1SID.B1;
    const register unsigned short int RXIDE = 0;
    sbit  RXIDE_bit at C1RX1SID.B0;
    sbit  RXIDE_C1RX1SID_bit at C1RX1SID.B0;

    // C1RX1EID bits
    sbit  EID17_C1RX1EID_bit at C1RX1EID.B11;
    sbit  EID16_C1RX1EID_bit at C1RX1EID.B10;
    sbit  EID15_C1RX1EID_bit at C1RX1EID.B9;
    sbit  EID14_C1RX1EID_bit at C1RX1EID.B8;
    sbit  EID13_C1RX1EID_bit at C1RX1EID.B7;
    sbit  EID12_C1RX1EID_bit at C1RX1EID.B6;
    sbit  EID11_C1RX1EID_bit at C1RX1EID.B5;
    sbit  EID10_C1RX1EID_bit at C1RX1EID.B4;
    sbit  EID9_C1RX1EID_bit at C1RX1EID.B3;
    sbit  EID8_C1RX1EID_bit at C1RX1EID.B2;
    sbit  EID7_C1RX1EID_bit at C1RX1EID.B1;
    sbit  EID6_C1RX1EID_bit at C1RX1EID.B0;

    // C1RX1DLC bits
    sbit  EID5_C1RX1DLC_bit at C1RX1DLC.B15;
    sbit  EID4_C1RX1DLC_bit at C1RX1DLC.B14;
    sbit  EID3_C1RX1DLC_bit at C1RX1DLC.B13;
    sbit  EID2_C1RX1DLC_bit at C1RX1DLC.B12;
    sbit  EID1_C1RX1DLC_bit at C1RX1DLC.B11;
    sbit  EID0_C1RX1DLC_bit at C1RX1DLC.B10;
    const register unsigned short int RXRTR = 9;
    sbit  RXRTR_bit at C1RX1DLC.B9;
    sbit  RXRTR_C1RX1DLC_bit at C1RX1DLC.B9;
    const register unsigned short int RXRB1 = 8;
    sbit  RXRB1_bit at C1RX1DLC.B8;
    sbit  RXRB1_C1RX1DLC_bit at C1RX1DLC.B8;
    const register unsigned short int RXRB0 = 4;
    sbit  RXRB0_bit at C1RX1DLC.B4;
    sbit  RXRB0_C1RX1DLC_bit at C1RX1DLC.B4;
    sbit  DLC_3_C1RX1DLC_bit at C1RX1DLC.B3;
    sbit  DLC_2_C1RX1DLC_bit at C1RX1DLC.B2;
    sbit  DLC_1_C1RX1DLC_bit at C1RX1DLC.B1;
    sbit  DLC_0_C1RX1DLC_bit at C1RX1DLC.B0;

    // C1RX1B1 bits
    sbit  TXB1D1_7_C1RX1B1_bit at C1RX1B1.B15;
    sbit  TXB1D1_6_C1RX1B1_bit at C1RX1B1.B14;
    sbit  TXB1D1_5_C1RX1B1_bit at C1RX1B1.B13;
    sbit  TXB1D1_4_C1RX1B1_bit at C1RX1B1.B12;
    sbit  TXB1D1_3_C1RX1B1_bit at C1RX1B1.B11;
    sbit  TXB1D1_2_C1RX1B1_bit at C1RX1B1.B10;
    sbit  TXB1D1_1_C1RX1B1_bit at C1RX1B1.B9;
    sbit  TXB1D1_0_C1RX1B1_bit at C1RX1B1.B8;
    sbit  TXB1D0_7_C1RX1B1_bit at C1RX1B1.B7;
    sbit  TXB1D0_6_C1RX1B1_bit at C1RX1B1.B6;
    sbit  TXB1D0_5_C1RX1B1_bit at C1RX1B1.B5;
    sbit  TXB1D0_4_C1RX1B1_bit at C1RX1B1.B4;
    sbit  TXB1D0_3_C1RX1B1_bit at C1RX1B1.B3;
    sbit  TXB1D0_2_C1RX1B1_bit at C1RX1B1.B2;
    sbit  TXB1D0_1_C1RX1B1_bit at C1RX1B1.B1;
    sbit  TXB1D0_0_C1RX1B1_bit at C1RX1B1.B0;

    // C1RX1B2 bits
    sbit  TXB1D3_7_C1RX1B2_bit at C1RX1B2.B15;
    sbit  TXB1D3_6_C1RX1B2_bit at C1RX1B2.B14;
    sbit  TXB1D3_5_C1RX1B2_bit at C1RX1B2.B13;
    sbit  TXB1D3_4_C1RX1B2_bit at C1RX1B2.B12;
    sbit  TXB1D3_3_C1RX1B2_bit at C1RX1B2.B11;
    sbit  TXB1D3_2_C1RX1B2_bit at C1RX1B2.B10;
    sbit  TXB1D3_1_C1RX1B2_bit at C1RX1B2.B9;
    sbit  TXB1D3_0_C1RX1B2_bit at C1RX1B2.B8;
    sbit  TXB1D2_7_C1RX1B2_bit at C1RX1B2.B7;
    sbit  TXB1D2_6_C1RX1B2_bit at C1RX1B2.B6;
    sbit  TXB1D2_5_C1RX1B2_bit at C1RX1B2.B5;
    sbit  TXB1D2_4_C1RX1B2_bit at C1RX1B2.B4;
    sbit  TXB1D2_3_C1RX1B2_bit at C1RX1B2.B3;
    sbit  TXB1D2_2_C1RX1B2_bit at C1RX1B2.B2;
    sbit  TXB1D2_1_C1RX1B2_bit at C1RX1B2.B1;
    sbit  TXB1D2_0_C1RX1B2_bit at C1RX1B2.B0;

    // C1RX1B3 bits
    sbit  TXB1D5_7_C1RX1B3_bit at C1RX1B3.B15;
    sbit  TXB1D5_6_C1RX1B3_bit at C1RX1B3.B14;
    sbit  TXB1D5_5_C1RX1B3_bit at C1RX1B3.B13;
    sbit  TXB1D5_4_C1RX1B3_bit at C1RX1B3.B12;
    sbit  TXB1D5_3_C1RX1B3_bit at C1RX1B3.B11;
    sbit  TXB1D5_2_C1RX1B3_bit at C1RX1B3.B10;
    sbit  TXB1D5_1_C1RX1B3_bit at C1RX1B3.B9;
    sbit  TXB1D5_0_C1RX1B3_bit at C1RX1B3.B8;
    sbit  TXB1D4_7_C1RX1B3_bit at C1RX1B3.B7;
    sbit  TXB1D4_6_C1RX1B3_bit at C1RX1B3.B6;
    sbit  TXB1D4_5_C1RX1B3_bit at C1RX1B3.B5;
    sbit  TXB1D4_4_C1RX1B3_bit at C1RX1B3.B4;
    sbit  TXB1D4_3_C1RX1B3_bit at C1RX1B3.B3;
    sbit  TXB1D4_2_C1RX1B3_bit at C1RX1B3.B2;
    sbit  TXB1D4_1_C1RX1B3_bit at C1RX1B3.B1;
    sbit  TXB1D4_0_C1RX1B3_bit at C1RX1B3.B0;

    // C1RX1B4 bits
    sbit  TXB1D7_7_C1RX1B4_bit at C1RX1B4.B15;
    sbit  TXB1D7_6_C1RX1B4_bit at C1RX1B4.B14;
    sbit  TXB1D7_5_C1RX1B4_bit at C1RX1B4.B13;
    sbit  TXB1D7_4_C1RX1B4_bit at C1RX1B4.B12;
    sbit  TXB1D7_3_C1RX1B4_bit at C1RX1B4.B11;
    sbit  TXB1D7_2_C1RX1B4_bit at C1RX1B4.B10;
    sbit  TXB1D7_1_C1RX1B4_bit at C1RX1B4.B9;
    sbit  TXB1D7_0_C1RX1B4_bit at C1RX1B4.B8;
    sbit  TXB1D6_7_C1RX1B4_bit at C1RX1B4.B7;
    sbit  TXB1D6_6_C1RX1B4_bit at C1RX1B4.B6;
    sbit  TXB1D6_5_C1RX1B4_bit at C1RX1B4.B5;
    sbit  TXB1D6_4_C1RX1B4_bit at C1RX1B4.B4;
    sbit  TXB1D6_3_C1RX1B4_bit at C1RX1B4.B3;
    sbit  TXB1D6_2_C1RX1B4_bit at C1RX1B4.B2;
    sbit  TXB1D6_1_C1RX1B4_bit at C1RX1B4.B1;
    sbit  TXB1D6_0_C1RX1B4_bit at C1RX1B4.B0;

    // C1RX1CON bits
    const register unsigned short int RXFUL = 7;
    sbit  RXFUL_bit at C1RX1CON.B7;
    sbit  RXFUL_C1RX1CON_bit at C1RX1CON.B7;
    const register unsigned short int RXRTRRO = 3;
    sbit  RXRTRRO_bit at C1RX1CON.B3;
    sbit  RXRTRRO_C1RX1CON_bit at C1RX1CON.B3;
    const register unsigned short int FILHIT_2 = 2;
    sbit  FILHIT_2_bit at C1RX1CON.B2;
    sbit  FILHIT_2_C1RX1CON_bit at C1RX1CON.B2;
    const register unsigned short int FILHIT_1 = 1;
    sbit  FILHIT_1_bit at C1RX1CON.B1;
    sbit  FILHIT_1_C1RX1CON_bit at C1RX1CON.B1;
    const register unsigned short int FILHIT_0 = 0;
    sbit  FILHIT_0_bit at C1RX1CON.B0;
    sbit  FILHIT_0_C1RX1CON_bit at C1RX1CON.B0;

    // C1RX0SID bits
    sbit  SID10_C1RX0SID_bit at C1RX0SID.B12;
    sbit  SID9_C1RX0SID_bit at C1RX0SID.B11;
    sbit  SID8_C1RX0SID_bit at C1RX0SID.B10;
    sbit  SID7_C1RX0SID_bit at C1RX0SID.B9;
    sbit  SID6_C1RX0SID_bit at C1RX0SID.B8;
    sbit  SID5_C1RX0SID_bit at C1RX0SID.B7;
    sbit  SID4_C1RX0SID_bit at C1RX0SID.B6;
    sbit  SID3_C1RX0SID_bit at C1RX0SID.B5;
    sbit  SID2_C1RX0SID_bit at C1RX0SID.B4;
    sbit  SID1_C1RX0SID_bit at C1RX0SID.B3;
    sbit  SID0_C1RX0SID_bit at C1RX0SID.B2;
    sbit  SRR_C1RX0SID_bit at C1RX0SID.B1;
    sbit  RXIDE_C1RX0SID_bit at C1RX0SID.B0;

    // C1RX0EID bits
    sbit  EID17_C1RX0EID_bit at C1RX0EID.B11;
    sbit  EID16_C1RX0EID_bit at C1RX0EID.B10;
    sbit  EID15_C1RX0EID_bit at C1RX0EID.B9;
    sbit  EID14_C1RX0EID_bit at C1RX0EID.B8;
    sbit  EID13_C1RX0EID_bit at C1RX0EID.B7;
    sbit  EID12_C1RX0EID_bit at C1RX0EID.B6;
    sbit  EID11_C1RX0EID_bit at C1RX0EID.B5;
    sbit  EID10_C1RX0EID_bit at C1RX0EID.B4;
    sbit  EID9_C1RX0EID_bit at C1RX0EID.B3;
    sbit  EID8_C1RX0EID_bit at C1RX0EID.B2;
    sbit  EID7_C1RX0EID_bit at C1RX0EID.B1;
    sbit  EID6_C1RX0EID_bit at C1RX0EID.B0;

    // C1RX0DLC bits
    sbit  EID5_C1RX0DLC_bit at C1RX0DLC.B15;
    sbit  EID4_C1RX0DLC_bit at C1RX0DLC.B14;
    sbit  EID3_C1RX0DLC_bit at C1RX0DLC.B13;
    sbit  EID2_C1RX0DLC_bit at C1RX0DLC.B12;
    sbit  EID1_C1RX0DLC_bit at C1RX0DLC.B11;
    sbit  EID0_C1RX0DLC_bit at C1RX0DLC.B10;
    sbit  RXRTR_C1RX0DLC_bit at C1RX0DLC.B9;
    sbit  RXRB1_C1RX0DLC_bit at C1RX0DLC.B8;
    sbit  RXRB0_C1RX0DLC_bit at C1RX0DLC.B4;
    sbit  DLC_3_C1RX0DLC_bit at C1RX0DLC.B3;
    sbit  DLC_2_C1RX0DLC_bit at C1RX0DLC.B2;
    sbit  DLC_1_C1RX0DLC_bit at C1RX0DLC.B1;
    sbit  DLC_0_C1RX0DLC_bit at C1RX0DLC.B0;

    // C1RX0B1 bits
    sbit  TXB0D1_7_C1RX0B1_bit at C1RX0B1.B15;
    sbit  TXB0D1_6_C1RX0B1_bit at C1RX0B1.B14;
    sbit  TXB0D1_5_C1RX0B1_bit at C1RX0B1.B13;
    sbit  TXB0D1_4_C1RX0B1_bit at C1RX0B1.B12;
    sbit  TXB0D1_3_C1RX0B1_bit at C1RX0B1.B11;
    sbit  TXB0D1_2_C1RX0B1_bit at C1RX0B1.B10;
    sbit  TXB0D1_1_C1RX0B1_bit at C1RX0B1.B9;
    sbit  TXB0D1_0_C1RX0B1_bit at C1RX0B1.B8;
    sbit  TXB0D0_7_C1RX0B1_bit at C1RX0B1.B7;
    sbit  TXB0D0_6_C1RX0B1_bit at C1RX0B1.B6;
    sbit  TXB0D0_5_C1RX0B1_bit at C1RX0B1.B5;
    sbit  TXB0D0_4_C1RX0B1_bit at C1RX0B1.B4;
    sbit  TXB0D0_3_C1RX0B1_bit at C1RX0B1.B3;
    sbit  TXB0D0_2_C1RX0B1_bit at C1RX0B1.B2;
    sbit  TXB0D0_1_C1RX0B1_bit at C1RX0B1.B1;
    sbit  TXB0D0_0_C1RX0B1_bit at C1RX0B1.B0;

    // C1RX0B2 bits
    sbit  TXB0D3_7_C1RX0B2_bit at C1RX0B2.B15;
    sbit  TXB0D3_6_C1RX0B2_bit at C1RX0B2.B14;
    sbit  TXB0D3_5_C1RX0B2_bit at C1RX0B2.B13;
    sbit  TXB0D3_4_C1RX0B2_bit at C1RX0B2.B12;
    sbit  TXB0D3_3_C1RX0B2_bit at C1RX0B2.B11;
    sbit  TXB0D3_2_C1RX0B2_bit at C1RX0B2.B10;
    sbit  TXB0D3_1_C1RX0B2_bit at C1RX0B2.B9;
    sbit  TXB0D3_0_C1RX0B2_bit at C1RX0B2.B8;
    sbit  TXB0D2_7_C1RX0B2_bit at C1RX0B2.B7;
    sbit  TXB0D2_6_C1RX0B2_bit at C1RX0B2.B6;
    sbit  TXB0D2_5_C1RX0B2_bit at C1RX0B2.B5;
    sbit  TXB0D2_4_C1RX0B2_bit at C1RX0B2.B4;
    sbit  TXB0D2_3_C1RX0B2_bit at C1RX0B2.B3;
    sbit  TXB0D2_2_C1RX0B2_bit at C1RX0B2.B2;
    sbit  TXB0D2_1_C1RX0B2_bit at C1RX0B2.B1;
    sbit  TXB0D2_0_C1RX0B2_bit at C1RX0B2.B0;

    // C1RX0B3 bits
    sbit  TXB0D5_7_C1RX0B3_bit at C1RX0B3.B15;
    sbit  TXB0D5_6_C1RX0B3_bit at C1RX0B3.B14;
    sbit  TXB0D5_5_C1RX0B3_bit at C1RX0B3.B13;
    sbit  TXB0D5_4_C1RX0B3_bit at C1RX0B3.B12;
    sbit  TXB0D5_3_C1RX0B3_bit at C1RX0B3.B11;
    sbit  TXB0D5_2_C1RX0B3_bit at C1RX0B3.B10;
    sbit  TXB0D5_1_C1RX0B3_bit at C1RX0B3.B9;
    sbit  TXB0D5_0_C1RX0B3_bit at C1RX0B3.B8;
    sbit  TXB0D4_7_C1RX0B3_bit at C1RX0B3.B7;
    sbit  TXB0D4_6_C1RX0B3_bit at C1RX0B3.B6;
    sbit  TXB0D4_5_C1RX0B3_bit at C1RX0B3.B5;
    sbit  TXB0D4_4_C1RX0B3_bit at C1RX0B3.B4;
    sbit  TXB0D4_3_C1RX0B3_bit at C1RX0B3.B3;
    sbit  TXB0D4_2_C1RX0B3_bit at C1RX0B3.B2;
    sbit  TXB0D4_1_C1RX0B3_bit at C1RX0B3.B1;
    sbit  TXB0D4_0_C1RX0B3_bit at C1RX0B3.B0;

    // C1RX0B4 bits
    sbit  TXB0D7_7_C1RX0B4_bit at C1RX0B4.B15;
    sbit  TXB0D7_6_C1RX0B4_bit at C1RX0B4.B14;
    sbit  TXB0D7_5_C1RX0B4_bit at C1RX0B4.B13;
    sbit  TXB0D7_4_C1RX0B4_bit at C1RX0B4.B12;
    sbit  TXB0D7_3_C1RX0B4_bit at C1RX0B4.B11;
    sbit  TXB0D7_2_C1RX0B4_bit at C1RX0B4.B10;
    sbit  TXB0D7_1_C1RX0B4_bit at C1RX0B4.B9;
    sbit  TXB0D7_0_C1RX0B4_bit at C1RX0B4.B8;
    sbit  TXB0D6_7_C1RX0B4_bit at C1RX0B4.B7;
    sbit  TXB0D6_6_C1RX0B4_bit at C1RX0B4.B6;
    sbit  TXB0D6_5_C1RX0B4_bit at C1RX0B4.B5;
    sbit  TXB0D6_4_C1RX0B4_bit at C1RX0B4.B4;
    sbit  TXB0D6_3_C1RX0B4_bit at C1RX0B4.B3;
    sbit  TXB0D6_2_C1RX0B4_bit at C1RX0B4.B2;
    sbit  TXB0D6_1_C1RX0B4_bit at C1RX0B4.B1;
    sbit  TXB0D6_0_C1RX0B4_bit at C1RX0B4.B0;

    // C1RX0CON bits
    sbit  RXFUL_C1RX0CON_bit at C1RX0CON.B7;
    sbit  RXRTRRO_C1RX0CON_bit at C1RX0CON.B3;
    const register unsigned short int DBEN = 2;
    sbit  DBEN_bit at C1RX0CON.B2;
    sbit  DBEN_C1RX0CON_bit at C1RX0CON.B2;
    const register unsigned short int JTOFF = 1;
    sbit  JTOFF_bit at C1RX0CON.B1;
    sbit  JTOFF_C1RX0CON_bit at C1RX0CON.B1;
    const register unsigned short int FILHIT0 = 0;
    sbit  FILHIT0_bit at C1RX0CON.B0;
    sbit  FILHIT0_C1RX0CON_bit at C1RX0CON.B0;

    // C1CTRL bits
    const register unsigned short int CANCAP = 15;
    sbit  CANCAP_bit at C1CTRL.B15;
    sbit  CANCAP_C1CTRL_bit at C1CTRL.B15;
    const register unsigned short int CANFRZ = 14;
    sbit  CANFRZ_bit at C1CTRL.B14;
    sbit  CANFRZ_C1CTRL_bit at C1CTRL.B14;
    const register unsigned short int CANSIDL = 13;
    sbit  CANSIDL_bit at C1CTRL.B13;
    sbit  CANSIDL_C1CTRL_bit at C1CTRL.B13;
    const register unsigned short int ABAT = 12;
    sbit  ABAT_bit at C1CTRL.B12;
    sbit  ABAT_C1CTRL_bit at C1CTRL.B12;
    const register unsigned short int CANCKS = 11;
    sbit  CANCKS_bit at C1CTRL.B11;
    sbit  CANCKS_C1CTRL_bit at C1CTRL.B11;
    const register unsigned short int REQOP_2 = 10;
    sbit  REQOP_2_bit at C1CTRL.B10;
    sbit  REQOP_2_C1CTRL_bit at C1CTRL.B10;
    const register unsigned short int REQOP_1 = 9;
    sbit  REQOP_1_bit at C1CTRL.B9;
    sbit  REQOP_1_C1CTRL_bit at C1CTRL.B9;
    const register unsigned short int REQOP_0 = 8;
    sbit  REQOP_0_bit at C1CTRL.B8;
    sbit  REQOP_0_C1CTRL_bit at C1CTRL.B8;
    const register unsigned short int OPMODE_2 = 7;
    sbit  OPMODE_2_bit at C1CTRL.B7;
    sbit  OPMODE_2_C1CTRL_bit at C1CTRL.B7;
    const register unsigned short int OPMODE_1 = 6;
    sbit  OPMODE_1_bit at C1CTRL.B6;
    sbit  OPMODE_1_C1CTRL_bit at C1CTRL.B6;
    const register unsigned short int OPMODE_0 = 5;
    sbit  OPMODE_0_bit at C1CTRL.B5;
    sbit  OPMODE_0_C1CTRL_bit at C1CTRL.B5;
    const register unsigned short int ICODE_2 = 3;
    sbit  ICODE_2_bit at C1CTRL.B3;
    sbit  ICODE_2_C1CTRL_bit at C1CTRL.B3;
    const register unsigned short int ICODE_1 = 2;
    sbit  ICODE_1_bit at C1CTRL.B2;
    sbit  ICODE_1_C1CTRL_bit at C1CTRL.B2;
    const register unsigned short int ICODE_0 = 1;
    sbit  ICODE_0_bit at C1CTRL.B1;
    sbit  ICODE_0_C1CTRL_bit at C1CTRL.B1;

    // C1CFG1 bits
    const register unsigned short int SJW_1 = 7;
    sbit  SJW_1_bit at C1CFG1.B7;
    sbit  SJW_1_C1CFG1_bit at C1CFG1.B7;
    const register unsigned short int SJW_0 = 6;
    sbit  SJW_0_bit at C1CFG1.B6;
    sbit  SJW_0_C1CFG1_bit at C1CFG1.B6;
    const register unsigned short int BRP_5 = 5;
    sbit  BRP_5_bit at C1CFG1.B5;
    sbit  BRP_5_C1CFG1_bit at C1CFG1.B5;
    const register unsigned short int BRP_4 = 4;
    sbit  BRP_4_bit at C1CFG1.B4;
    sbit  BRP_4_C1CFG1_bit at C1CFG1.B4;
    const register unsigned short int BRP_3 = 3;
    sbit  BRP_3_bit at C1CFG1.B3;
    sbit  BRP_3_C1CFG1_bit at C1CFG1.B3;
    const register unsigned short int BRP_2 = 2;
    sbit  BRP_2_bit at C1CFG1.B2;
    sbit  BRP_2_C1CFG1_bit at C1CFG1.B2;
    const register unsigned short int BRP_1 = 1;
    sbit  BRP_1_bit at C1CFG1.B1;
    sbit  BRP_1_C1CFG1_bit at C1CFG1.B1;
    const register unsigned short int BRP_0 = 0;
    sbit  BRP_0_bit at C1CFG1.B0;
    sbit  BRP_0_C1CFG1_bit at C1CFG1.B0;

    // C1CFG2 bits
    const register unsigned short int WAKFIL = 14;
    sbit  WAKFIL_bit at C1CFG2.B14;
    sbit  WAKFIL_C1CFG2_bit at C1CFG2.B14;
    const register unsigned short int SEG2PH_2 = 10;
    sbit  SEG2PH_2_bit at C1CFG2.B10;
    sbit  SEG2PH_2_C1CFG2_bit at C1CFG2.B10;
    const register unsigned short int SEG2PH_1 = 9;
    sbit  SEG2PH_1_bit at C1CFG2.B9;
    sbit  SEG2PH_1_C1CFG2_bit at C1CFG2.B9;
    const register unsigned short int SEG2PH_0 = 8;
    sbit  SEG2PH_0_bit at C1CFG2.B8;
    sbit  SEG2PH_0_C1CFG2_bit at C1CFG2.B8;
    const register unsigned short int SEG2PHTS = 7;
    sbit  SEG2PHTS_bit at C1CFG2.B7;
    sbit  SEG2PHTS_C1CFG2_bit at C1CFG2.B7;
    const register unsigned short int SAM = 6;
    sbit  SAM_bit at C1CFG2.B6;
    sbit  SAM_C1CFG2_bit at C1CFG2.B6;
    const register unsigned short int SEG1PH_2 = 5;
    sbit  SEG1PH_2_bit at C1CFG2.B5;
    sbit  SEG1PH_2_C1CFG2_bit at C1CFG2.B5;
    const register unsigned short int SEG1PH_1 = 4;
    sbit  SEG1PH_1_bit at C1CFG2.B4;
    sbit  SEG1PH_1_C1CFG2_bit at C1CFG2.B4;
    const register unsigned short int SEG1PH_0 = 3;
    sbit  SEG1PH_0_bit at C1CFG2.B3;
    sbit  SEG1PH_0_C1CFG2_bit at C1CFG2.B3;
    const register unsigned short int PRSEG_2 = 2;
    sbit  PRSEG_2_bit at C1CFG2.B2;
    sbit  PRSEG_2_C1CFG2_bit at C1CFG2.B2;
    const register unsigned short int PRSEG_1 = 1;
    sbit  PRSEG_1_bit at C1CFG2.B1;
    sbit  PRSEG_1_C1CFG2_bit at C1CFG2.B1;
    const register unsigned short int PRSEG_0 = 0;
    sbit  PRSEG_0_bit at C1CFG2.B0;
    sbit  PRSEG_0_C1CFG2_bit at C1CFG2.B0;

    // C1INTF bits
    const register unsigned short int RXB0OVFL = 15;
    sbit  RXB0OVFL_bit at C1INTF.B15;
    sbit  RXB0OVFL_C1INTF_bit at C1INTF.B15;
    const register unsigned short int RXB1OVFL = 14;
    sbit  RXB1OVFL_bit at C1INTF.B14;
    sbit  RXB1OVFL_C1INTF_bit at C1INTF.B14;
    const register unsigned short int TXBO = 13;
    sbit  TXBO_bit at C1INTF.B13;
    sbit  TXBO_C1INTF_bit at C1INTF.B13;
    const register unsigned short int TXBP = 12;
    sbit  TXBP_bit at C1INTF.B12;
    sbit  TXBP_C1INTF_bit at C1INTF.B12;
    const register unsigned short int RXBP = 11;
    sbit  RXBP_bit at C1INTF.B11;
    sbit  RXBP_C1INTF_bit at C1INTF.B11;
    const register unsigned short int TXWARN = 10;
    sbit  TXWARN_bit at C1INTF.B10;
    sbit  TXWARN_C1INTF_bit at C1INTF.B10;
    const register unsigned short int RXWARN = 9;
    sbit  RXWARN_bit at C1INTF.B9;
    sbit  RXWARN_C1INTF_bit at C1INTF.B9;
    const register unsigned short int EWARN = 8;
    sbit  EWARN_bit at C1INTF.B8;
    sbit  EWARN_C1INTF_bit at C1INTF.B8;
    const register unsigned short int IRXIF = 7;
    sbit  IRXIF_bit at C1INTF.B7;
    sbit  IRXIF_C1INTF_bit at C1INTF.B7;
    const register unsigned short int WAKIF = 6;
    sbit  WAKIF_bit at C1INTF.B6;
    sbit  WAKIF_C1INTF_bit at C1INTF.B6;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at C1INTF.B5;
    sbit  ERRIF_C1INTF_bit at C1INTF.B5;
    const register unsigned short int TXB2IF = 4;
    sbit  TXB2IF_bit at C1INTF.B4;
    sbit  TXB2IF_C1INTF_bit at C1INTF.B4;
    const register unsigned short int TXB1IF = 3;
    sbit  TXB1IF_bit at C1INTF.B3;
    sbit  TXB1IF_C1INTF_bit at C1INTF.B3;
    const register unsigned short int TXB0IF = 2;
    sbit  TXB0IF_bit at C1INTF.B2;
    sbit  TXB0IF_C1INTF_bit at C1INTF.B2;
    const register unsigned short int RXB1IF = 1;
    sbit  RXB1IF_bit at C1INTF.B1;
    sbit  RXB1IF_C1INTF_bit at C1INTF.B1;
    const register unsigned short int RXB0IF = 0;
    sbit  RXB0IF_bit at C1INTF.B0;
    sbit  RXB0IF_C1INTF_bit at C1INTF.B0;

    // C1INTE bits
    const register unsigned short int IRXIE = 7;
    sbit  IRXIE_bit at C1INTE.B7;
    sbit  IRXIE_C1INTE_bit at C1INTE.B7;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at C1INTE.B6;
    sbit  WAKIE_C1INTE_bit at C1INTE.B6;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at C1INTE.B5;
    sbit  ERRIE_C1INTE_bit at C1INTE.B5;
    const register unsigned short int TXB2IE = 4;
    sbit  TXB2IE_bit at C1INTE.B4;
    sbit  TXB2IE_C1INTE_bit at C1INTE.B4;
    const register unsigned short int TXB1IE = 3;
    sbit  TXB1IE_bit at C1INTE.B3;
    sbit  TXB1IE_C1INTE_bit at C1INTE.B3;
    const register unsigned short int TXB0IE = 2;
    sbit  TXB0IE_bit at C1INTE.B2;
    sbit  TXB0IE_C1INTE_bit at C1INTE.B2;
    const register unsigned short int RXB1IE = 1;
    sbit  RXB1IE_bit at C1INTE.B1;
    sbit  RXB1IE_C1INTE_bit at C1INTE.B1;
    const register unsigned short int RXB0IE = 0;
    sbit  RXB0IE_bit at C1INTE.B0;
    sbit  RXB0IE_C1INTE_bit at C1INTE.B0;

    // C1EC bits
    const register unsigned short int TEC_7 = 15;
    sbit  TEC_7_bit at C1EC.B15;
    sbit  TEC_7_C1EC_bit at C1EC.B15;
    const register unsigned short int TEC_6 = 14;
    sbit  TEC_6_bit at C1EC.B14;
    sbit  TEC_6_C1EC_bit at C1EC.B14;
    const register unsigned short int TEC_5 = 13;
    sbit  TEC_5_bit at C1EC.B13;
    sbit  TEC_5_C1EC_bit at C1EC.B13;
    const register unsigned short int TEC_4 = 12;
    sbit  TEC_4_bit at C1EC.B12;
    sbit  TEC_4_C1EC_bit at C1EC.B12;
    const register unsigned short int TEC_3 = 11;
    sbit  TEC_3_bit at C1EC.B11;
    sbit  TEC_3_C1EC_bit at C1EC.B11;
    const register unsigned short int TEC_2 = 10;
    sbit  TEC_2_bit at C1EC.B10;
    sbit  TEC_2_C1EC_bit at C1EC.B10;
    const register unsigned short int TEC_1 = 9;
    sbit  TEC_1_bit at C1EC.B9;
    sbit  TEC_1_C1EC_bit at C1EC.B9;
    const register unsigned short int TEC_0 = 8;
    sbit  TEC_0_bit at C1EC.B8;
    sbit  TEC_0_C1EC_bit at C1EC.B8;
    const register unsigned short int REC_7 = 7;
    sbit  REC_7_bit at C1EC.B7;
    sbit  REC_7_C1EC_bit at C1EC.B7;
    const register unsigned short int REC_6 = 6;
    sbit  REC_6_bit at C1EC.B6;
    sbit  REC_6_C1EC_bit at C1EC.B6;
    const register unsigned short int REC_5 = 5;
    sbit  REC_5_bit at C1EC.B5;
    sbit  REC_5_C1EC_bit at C1EC.B5;
    const register unsigned short int REC_4 = 4;
    sbit  REC_4_bit at C1EC.B4;
    sbit  REC_4_C1EC_bit at C1EC.B4;
    const register unsigned short int REC_3 = 3;
    sbit  REC_3_bit at C1EC.B3;
    sbit  REC_3_C1EC_bit at C1EC.B3;
    const register unsigned short int REC_2 = 2;
    sbit  REC_2_bit at C1EC.B2;
    sbit  REC_2_C1EC_bit at C1EC.B2;
    const register unsigned short int REC_1 = 1;
    sbit  REC_1_bit at C1EC.B1;
    sbit  REC_1_C1EC_bit at C1EC.B1;
    const register unsigned short int REC_0 = 0;
    sbit  REC_0_bit at C1EC.B0;
    sbit  REC_0_C1EC_bit at C1EC.B0;

    // C2RXF0SID bits
    sbit  SID10_C2RXF0SID_bit at C2RXF0SID.B12;
    sbit  SID9_C2RXF0SID_bit at C2RXF0SID.B11;
    sbit  SID8_C2RXF0SID_bit at C2RXF0SID.B10;
    sbit  SID7_C2RXF0SID_bit at C2RXF0SID.B9;
    sbit  SID6_C2RXF0SID_bit at C2RXF0SID.B8;
    sbit  SID5_C2RXF0SID_bit at C2RXF0SID.B7;
    sbit  SID4_C2RXF0SID_bit at C2RXF0SID.B6;
    sbit  SID3_C2RXF0SID_bit at C2RXF0SID.B5;
    sbit  SID2_C2RXF0SID_bit at C2RXF0SID.B4;
    sbit  SID1_C2RXF0SID_bit at C2RXF0SID.B3;
    sbit  SID0_C2RXF0SID_bit at C2RXF0SID.B2;
    sbit  EXIDE_C2RXF0SID_bit at C2RXF0SID.B0;

    // C2RXF0EIDH bits
    sbit  EID17_C2RXF0EIDH_bit at C2RXF0EIDH.B11;
    sbit  EID16_C2RXF0EIDH_bit at C2RXF0EIDH.B10;
    sbit  EID15_C2RXF0EIDH_bit at C2RXF0EIDH.B9;
    sbit  EID14_C2RXF0EIDH_bit at C2RXF0EIDH.B8;
    sbit  EID13_C2RXF0EIDH_bit at C2RXF0EIDH.B7;
    sbit  EID12_C2RXF0EIDH_bit at C2RXF0EIDH.B6;
    sbit  EID11_C2RXF0EIDH_bit at C2RXF0EIDH.B5;
    sbit  EID10_C2RXF0EIDH_bit at C2RXF0EIDH.B4;
    sbit  EID9_C2RXF0EIDH_bit at C2RXF0EIDH.B3;
    sbit  EID8_C2RXF0EIDH_bit at C2RXF0EIDH.B2;
    sbit  EID7_C2RXF0EIDH_bit at C2RXF0EIDH.B1;
    sbit  EID6_C2RXF0EIDH_bit at C2RXF0EIDH.B0;

    // C2RXF0EIDL bits
    sbit  EID5_C2RXF0EIDL_bit at C2RXF0EIDL.B15;
    sbit  EID4_C2RXF0EIDL_bit at C2RXF0EIDL.B14;
    sbit  EID3_C2RXF0EIDL_bit at C2RXF0EIDL.B13;
    sbit  EID2_C2RXF0EIDL_bit at C2RXF0EIDL.B12;
    sbit  EID1_C2RXF0EIDL_bit at C2RXF0EIDL.B11;
    sbit  EID0_C2RXF0EIDL_bit at C2RXF0EIDL.B10;

    // C2RXF1SID bits
    sbit  SID10_C2RXF1SID_bit at C2RXF1SID.B12;
    sbit  SID9_C2RXF1SID_bit at C2RXF1SID.B11;
    sbit  SID8_C2RXF1SID_bit at C2RXF1SID.B10;
    sbit  SID7_C2RXF1SID_bit at C2RXF1SID.B9;
    sbit  SID6_C2RXF1SID_bit at C2RXF1SID.B8;
    sbit  SID5_C2RXF1SID_bit at C2RXF1SID.B7;
    sbit  SID4_C2RXF1SID_bit at C2RXF1SID.B6;
    sbit  SID3_C2RXF1SID_bit at C2RXF1SID.B5;
    sbit  SID2_C2RXF1SID_bit at C2RXF1SID.B4;
    sbit  SID1_C2RXF1SID_bit at C2RXF1SID.B3;
    sbit  SID0_C2RXF1SID_bit at C2RXF1SID.B2;
    sbit  EXIDE_C2RXF1SID_bit at C2RXF1SID.B0;

    // C2RXF1EIDH bits
    sbit  EID17_C2RXF1EIDH_bit at C2RXF1EIDH.B11;
    sbit  EID16_C2RXF1EIDH_bit at C2RXF1EIDH.B10;
    sbit  EID15_C2RXF1EIDH_bit at C2RXF1EIDH.B9;
    sbit  EID14_C2RXF1EIDH_bit at C2RXF1EIDH.B8;
    sbit  EID13_C2RXF1EIDH_bit at C2RXF1EIDH.B7;
    sbit  EID12_C2RXF1EIDH_bit at C2RXF1EIDH.B6;
    sbit  EID11_C2RXF1EIDH_bit at C2RXF1EIDH.B5;
    sbit  EID10_C2RXF1EIDH_bit at C2RXF1EIDH.B4;
    sbit  EID9_C2RXF1EIDH_bit at C2RXF1EIDH.B3;
    sbit  EID8_C2RXF1EIDH_bit at C2RXF1EIDH.B2;
    sbit  EID7_C2RXF1EIDH_bit at C2RXF1EIDH.B1;
    sbit  EID6_C2RXF1EIDH_bit at C2RXF1EIDH.B0;

    // C2RXF1EIDL bits
    sbit  EID5_C2RXF1EIDL_bit at C2RXF1EIDL.B15;
    sbit  EID4_C2RXF1EIDL_bit at C2RXF1EIDL.B14;
    sbit  EID3_C2RXF1EIDL_bit at C2RXF1EIDL.B13;
    sbit  EID2_C2RXF1EIDL_bit at C2RXF1EIDL.B12;
    sbit  EID1_C2RXF1EIDL_bit at C2RXF1EIDL.B11;
    sbit  EID0_C2RXF1EIDL_bit at C2RXF1EIDL.B10;

    // C2RXF2SID bits
    sbit  SID10_C2RXF2SID_bit at C2RXF2SID.B12;
    sbit  SID9_C2RXF2SID_bit at C2RXF2SID.B11;
    sbit  SID8_C2RXF2SID_bit at C2RXF2SID.B10;
    sbit  SID7_C2RXF2SID_bit at C2RXF2SID.B9;
    sbit  SID6_C2RXF2SID_bit at C2RXF2SID.B8;
    sbit  SID5_C2RXF2SID_bit at C2RXF2SID.B7;
    sbit  SID4_C2RXF2SID_bit at C2RXF2SID.B6;
    sbit  SID3_C2RXF2SID_bit at C2RXF2SID.B5;
    sbit  SID2_C2RXF2SID_bit at C2RXF2SID.B4;
    sbit  SID1_C2RXF2SID_bit at C2RXF2SID.B3;
    sbit  SID0_C2RXF2SID_bit at C2RXF2SID.B2;
    sbit  EXIDE_C2RXF2SID_bit at C2RXF2SID.B0;

    // C2RXF2EIDH bits
    sbit  EID17_C2RXF2EIDH_bit at C2RXF2EIDH.B11;
    sbit  EID16_C2RXF2EIDH_bit at C2RXF2EIDH.B10;
    sbit  EID15_C2RXF2EIDH_bit at C2RXF2EIDH.B9;
    sbit  EID14_C2RXF2EIDH_bit at C2RXF2EIDH.B8;
    sbit  EID13_C2RXF2EIDH_bit at C2RXF2EIDH.B7;
    sbit  EID12_C2RXF2EIDH_bit at C2RXF2EIDH.B6;
    sbit  EID11_C2RXF2EIDH_bit at C2RXF2EIDH.B5;
    sbit  EID10_C2RXF2EIDH_bit at C2RXF2EIDH.B4;
    sbit  EID9_C2RXF2EIDH_bit at C2RXF2EIDH.B3;
    sbit  EID8_C2RXF2EIDH_bit at C2RXF2EIDH.B2;
    sbit  EID7_C2RXF2EIDH_bit at C2RXF2EIDH.B1;
    sbit  EID6_C2RXF2EIDH_bit at C2RXF2EIDH.B0;

    // C2RXF2EIDL bits
    sbit  EID5_C2RXF2EIDL_bit at C2RXF2EIDL.B15;
    sbit  EID4_C2RXF2EIDL_bit at C2RXF2EIDL.B14;
    sbit  EID3_C2RXF2EIDL_bit at C2RXF2EIDL.B13;
    sbit  EID2_C2RXF2EIDL_bit at C2RXF2EIDL.B12;
    sbit  EID1_C2RXF2EIDL_bit at C2RXF2EIDL.B11;
    sbit  EID0_C2RXF2EIDL_bit at C2RXF2EIDL.B10;

    // C2RXF3SID bits
    sbit  SID10_C2RXF3SID_bit at C2RXF3SID.B12;
    sbit  SID9_C2RXF3SID_bit at C2RXF3SID.B11;
    sbit  SID8_C2RXF3SID_bit at C2RXF3SID.B10;
    sbit  SID7_C2RXF3SID_bit at C2RXF3SID.B9;
    sbit  SID6_C2RXF3SID_bit at C2RXF3SID.B8;
    sbit  SID5_C2RXF3SID_bit at C2RXF3SID.B7;
    sbit  SID4_C2RXF3SID_bit at C2RXF3SID.B6;
    sbit  SID3_C2RXF3SID_bit at C2RXF3SID.B5;
    sbit  SID2_C2RXF3SID_bit at C2RXF3SID.B4;
    sbit  SID1_C2RXF3SID_bit at C2RXF3SID.B3;
    sbit  SID0_C2RXF3SID_bit at C2RXF3SID.B2;
    sbit  EXIDE_C2RXF3SID_bit at C2RXF3SID.B0;

    // C2RXF3EIDH bits
    sbit  EID17_C2RXF3EIDH_bit at C2RXF3EIDH.B11;
    sbit  EID16_C2RXF3EIDH_bit at C2RXF3EIDH.B10;
    sbit  EID15_C2RXF3EIDH_bit at C2RXF3EIDH.B9;
    sbit  EID14_C2RXF3EIDH_bit at C2RXF3EIDH.B8;
    sbit  EID13_C2RXF3EIDH_bit at C2RXF3EIDH.B7;
    sbit  EID12_C2RXF3EIDH_bit at C2RXF3EIDH.B6;
    sbit  EID11_C2RXF3EIDH_bit at C2RXF3EIDH.B5;
    sbit  EID10_C2RXF3EIDH_bit at C2RXF3EIDH.B4;
    sbit  EID9_C2RXF3EIDH_bit at C2RXF3EIDH.B3;
    sbit  EID8_C2RXF3EIDH_bit at C2RXF3EIDH.B2;
    sbit  EID7_C2RXF3EIDH_bit at C2RXF3EIDH.B1;
    sbit  EID6_C2RXF3EIDH_bit at C2RXF3EIDH.B0;

    // C2RXF3EIDL bits
    sbit  EID5_C2RXF3EIDL_bit at C2RXF3EIDL.B15;
    sbit  EID4_C2RXF3EIDL_bit at C2RXF3EIDL.B14;
    sbit  EID3_C2RXF3EIDL_bit at C2RXF3EIDL.B13;
    sbit  EID2_C2RXF3EIDL_bit at C2RXF3EIDL.B12;
    sbit  EID1_C2RXF3EIDL_bit at C2RXF3EIDL.B11;
    sbit  EID0_C2RXF3EIDL_bit at C2RXF3EIDL.B10;

    // C2RXF4SID bits
    sbit  SID10_C2RXF4SID_bit at C2RXF4SID.B12;
    sbit  SID9_C2RXF4SID_bit at C2RXF4SID.B11;
    sbit  SID8_C2RXF4SID_bit at C2RXF4SID.B10;
    sbit  SID7_C2RXF4SID_bit at C2RXF4SID.B9;
    sbit  SID6_C2RXF4SID_bit at C2RXF4SID.B8;
    sbit  SID5_C2RXF4SID_bit at C2RXF4SID.B7;
    sbit  SID4_C2RXF4SID_bit at C2RXF4SID.B6;
    sbit  SID3_C2RXF4SID_bit at C2RXF4SID.B5;
    sbit  SID2_C2RXF4SID_bit at C2RXF4SID.B4;
    sbit  SID1_C2RXF4SID_bit at C2RXF4SID.B3;
    sbit  SID0_C2RXF4SID_bit at C2RXF4SID.B2;
    sbit  EXIDE_C2RXF4SID_bit at C2RXF4SID.B0;

    // C2RXF4EIDH bits
    sbit  EID17_C2RXF4EIDH_bit at C2RXF4EIDH.B11;
    sbit  EID16_C2RXF4EIDH_bit at C2RXF4EIDH.B10;
    sbit  EID15_C2RXF4EIDH_bit at C2RXF4EIDH.B9;
    sbit  EID14_C2RXF4EIDH_bit at C2RXF4EIDH.B8;
    sbit  EID13_C2RXF4EIDH_bit at C2RXF4EIDH.B7;
    sbit  EID12_C2RXF4EIDH_bit at C2RXF4EIDH.B6;
    sbit  EID11_C2RXF4EIDH_bit at C2RXF4EIDH.B5;
    sbit  EID10_C2RXF4EIDH_bit at C2RXF4EIDH.B4;
    sbit  EID9_C2RXF4EIDH_bit at C2RXF4EIDH.B3;
    sbit  EID8_C2RXF4EIDH_bit at C2RXF4EIDH.B2;
    sbit  EID7_C2RXF4EIDH_bit at C2RXF4EIDH.B1;
    sbit  EID6_C2RXF4EIDH_bit at C2RXF4EIDH.B0;

    // C2RXF4EIDL bits
    sbit  EID5_C2RXF4EIDL_bit at C2RXF4EIDL.B15;
    sbit  EID4_C2RXF4EIDL_bit at C2RXF4EIDL.B14;
    sbit  EID3_C2RXF4EIDL_bit at C2RXF4EIDL.B13;
    sbit  EID2_C2RXF4EIDL_bit at C2RXF4EIDL.B12;
    sbit  EID1_C2RXF4EIDL_bit at C2RXF4EIDL.B11;
    sbit  EID0_C2RXF4EIDL_bit at C2RXF4EIDL.B10;

    // C2RXF5SID bits
    sbit  SID10_C2RXF5SID_bit at C2RXF5SID.B12;
    sbit  SID9_C2RXF5SID_bit at C2RXF5SID.B11;
    sbit  SID8_C2RXF5SID_bit at C2RXF5SID.B10;
    sbit  SID7_C2RXF5SID_bit at C2RXF5SID.B9;
    sbit  SID6_C2RXF5SID_bit at C2RXF5SID.B8;
    sbit  SID5_C2RXF5SID_bit at C2RXF5SID.B7;
    sbit  SID4_C2RXF5SID_bit at C2RXF5SID.B6;
    sbit  SID3_C2RXF5SID_bit at C2RXF5SID.B5;
    sbit  SID2_C2RXF5SID_bit at C2RXF5SID.B4;
    sbit  SID1_C2RXF5SID_bit at C2RXF5SID.B3;
    sbit  SID0_C2RXF5SID_bit at C2RXF5SID.B2;
    sbit  EXIDE_C2RXF5SID_bit at C2RXF5SID.B0;

    // C2RXF5EIDH bits
    sbit  EID17_C2RXF5EIDH_bit at C2RXF5EIDH.B11;
    sbit  EID16_C2RXF5EIDH_bit at C2RXF5EIDH.B10;
    sbit  EID15_C2RXF5EIDH_bit at C2RXF5EIDH.B9;
    sbit  EID14_C2RXF5EIDH_bit at C2RXF5EIDH.B8;
    sbit  EID13_C2RXF5EIDH_bit at C2RXF5EIDH.B7;
    sbit  EID12_C2RXF5EIDH_bit at C2RXF5EIDH.B6;
    sbit  EID11_C2RXF5EIDH_bit at C2RXF5EIDH.B5;
    sbit  EID10_C2RXF5EIDH_bit at C2RXF5EIDH.B4;
    sbit  EID9_C2RXF5EIDH_bit at C2RXF5EIDH.B3;
    sbit  EID8_C2RXF5EIDH_bit at C2RXF5EIDH.B2;
    sbit  EID7_C2RXF5EIDH_bit at C2RXF5EIDH.B1;
    sbit  EID6_C2RXF5EIDH_bit at C2RXF5EIDH.B0;

    // C2RXF5EIDL bits
    sbit  EID5_C2RXF5EIDL_bit at C2RXF5EIDL.B15;
    sbit  EID4_C2RXF5EIDL_bit at C2RXF5EIDL.B14;
    sbit  EID3_C2RXF5EIDL_bit at C2RXF5EIDL.B13;
    sbit  EID2_C2RXF5EIDL_bit at C2RXF5EIDL.B12;
    sbit  EID1_C2RXF5EIDL_bit at C2RXF5EIDL.B11;
    sbit  EID0_C2RXF5EIDL_bit at C2RXF5EIDL.B10;

    // C2RXM0SID bits
    sbit  SID10_C2RXM0SID_bit at C2RXM0SID.B12;
    sbit  SID9_C2RXM0SID_bit at C2RXM0SID.B11;
    sbit  SID8_C2RXM0SID_bit at C2RXM0SID.B10;
    sbit  SID7_C2RXM0SID_bit at C2RXM0SID.B9;
    sbit  SID6_C2RXM0SID_bit at C2RXM0SID.B8;
    sbit  SID5_C2RXM0SID_bit at C2RXM0SID.B7;
    sbit  SID4_C2RXM0SID_bit at C2RXM0SID.B6;
    sbit  SID3_C2RXM0SID_bit at C2RXM0SID.B5;
    sbit  SID2_C2RXM0SID_bit at C2RXM0SID.B4;
    sbit  SID1_C2RXM0SID_bit at C2RXM0SID.B3;
    sbit  SID0_C2RXM0SID_bit at C2RXM0SID.B2;
    sbit  MIDE_C2RXM0SID_bit at C2RXM0SID.B0;

    // C2RXM0EIDH bits
    sbit  EID17_C2RXM0EIDH_bit at C2RXM0EIDH.B11;
    sbit  EID16_C2RXM0EIDH_bit at C2RXM0EIDH.B10;
    sbit  EID15_C2RXM0EIDH_bit at C2RXM0EIDH.B9;
    sbit  EID14_C2RXM0EIDH_bit at C2RXM0EIDH.B8;
    sbit  EID13_C2RXM0EIDH_bit at C2RXM0EIDH.B7;
    sbit  EID12_C2RXM0EIDH_bit at C2RXM0EIDH.B6;
    sbit  EID11_C2RXM0EIDH_bit at C2RXM0EIDH.B5;
    sbit  EID10_C2RXM0EIDH_bit at C2RXM0EIDH.B4;
    sbit  EID9_C2RXM0EIDH_bit at C2RXM0EIDH.B3;
    sbit  EID8_C2RXM0EIDH_bit at C2RXM0EIDH.B2;
    sbit  EID7_C2RXM0EIDH_bit at C2RXM0EIDH.B1;
    sbit  EID6_C2RXM0EIDH_bit at C2RXM0EIDH.B0;

    // C2RXM0EIDL bits
    sbit  EID5_C2RXM0EIDL_bit at C2RXM0EIDL.B15;
    sbit  EID4_C2RXM0EIDL_bit at C2RXM0EIDL.B14;
    sbit  EID3_C2RXM0EIDL_bit at C2RXM0EIDL.B13;
    sbit  EID2_C2RXM0EIDL_bit at C2RXM0EIDL.B12;
    sbit  EID1_C2RXM0EIDL_bit at C2RXM0EIDL.B11;
    sbit  EID0_C2RXM0EIDL_bit at C2RXM0EIDL.B10;

    // C2RXM1SID bits
    sbit  SID10_C2RXM1SID_bit at C2RXM1SID.B12;
    sbit  SID9_C2RXM1SID_bit at C2RXM1SID.B11;
    sbit  SID8_C2RXM1SID_bit at C2RXM1SID.B10;
    sbit  SID7_C2RXM1SID_bit at C2RXM1SID.B9;
    sbit  SID6_C2RXM1SID_bit at C2RXM1SID.B8;
    sbit  SID5_C2RXM1SID_bit at C2RXM1SID.B7;
    sbit  SID4_C2RXM1SID_bit at C2RXM1SID.B6;
    sbit  SID3_C2RXM1SID_bit at C2RXM1SID.B5;
    sbit  SID2_C2RXM1SID_bit at C2RXM1SID.B4;
    sbit  SID1_C2RXM1SID_bit at C2RXM1SID.B3;
    sbit  SID0_C2RXM1SID_bit at C2RXM1SID.B2;
    sbit  MIDE_C2RXM1SID_bit at C2RXM1SID.B0;

    // C2RXM1EIDH bits
    sbit  EID17_C2RXM1EIDH_bit at C2RXM1EIDH.B11;
    sbit  EID16_C2RXM1EIDH_bit at C2RXM1EIDH.B10;
    sbit  EID15_C2RXM1EIDH_bit at C2RXM1EIDH.B9;
    sbit  EID14_C2RXM1EIDH_bit at C2RXM1EIDH.B8;
    sbit  EID13_C2RXM1EIDH_bit at C2RXM1EIDH.B7;
    sbit  EID12_C2RXM1EIDH_bit at C2RXM1EIDH.B6;
    sbit  EID11_C2RXM1EIDH_bit at C2RXM1EIDH.B5;
    sbit  EID10_C2RXM1EIDH_bit at C2RXM1EIDH.B4;
    sbit  EID9_C2RXM1EIDH_bit at C2RXM1EIDH.B3;
    sbit  EID8_C2RXM1EIDH_bit at C2RXM1EIDH.B2;
    sbit  EID7_C2RXM1EIDH_bit at C2RXM1EIDH.B1;
    sbit  EID6_C2RXM1EIDH_bit at C2RXM1EIDH.B0;

    // C2RXM1EIDL bits
    sbit  EID5_C2RXM1EIDL_bit at C2RXM1EIDL.B15;
    sbit  EID4_C2RXM1EIDL_bit at C2RXM1EIDL.B14;
    sbit  EID3_C2RXM1EIDL_bit at C2RXM1EIDL.B13;
    sbit  EID2_C2RXM1EIDL_bit at C2RXM1EIDL.B12;
    sbit  EID1_C2RXM1EIDL_bit at C2RXM1EIDL.B11;
    sbit  EID0_C2RXM1EIDL_bit at C2RXM1EIDL.B10;

    // C2TX2SID bits
    sbit  SID10_C2TX2SID_bit at C2TX2SID.B15;
    sbit  SID9_C2TX2SID_bit at C2TX2SID.B14;
    sbit  SID8_C2TX2SID_bit at C2TX2SID.B13;
    sbit  SID7_C2TX2SID_bit at C2TX2SID.B12;
    sbit  SID6_C2TX2SID_bit at C2TX2SID.B11;
    sbit  SID5_C2TX2SID_bit at C2TX2SID.B7;
    sbit  SID4_C2TX2SID_bit at C2TX2SID.B6;
    sbit  SID3_C2TX2SID_bit at C2TX2SID.B5;
    sbit  SID2_C2TX2SID_bit at C2TX2SID.B4;
    sbit  SID1_C2TX2SID_bit at C2TX2SID.B3;
    sbit  SID0_C2TX2SID_bit at C2TX2SID.B2;
    sbit  SRR_C2TX2SID_bit at C2TX2SID.B1;
    sbit  TXIDE_C2TX2SID_bit at C2TX2SID.B0;

    // C2TX2EID bits
    sbit  EID17_C2TX2EID_bit at C2TX2EID.B15;
    sbit  EID16_C2TX2EID_bit at C2TX2EID.B14;
    sbit  EID15_C2TX2EID_bit at C2TX2EID.B13;
    sbit  EID14_C2TX2EID_bit at C2TX2EID.B12;
    sbit  EID13_C2TX2EID_bit at C2TX2EID.B7;
    sbit  EID12_C2TX2EID_bit at C2TX2EID.B6;
    sbit  EID11_C2TX2EID_bit at C2TX2EID.B5;
    sbit  EID10_C2TX2EID_bit at C2TX2EID.B4;
    sbit  EID9_C2TX2EID_bit at C2TX2EID.B3;
    sbit  EID8_C2TX2EID_bit at C2TX2EID.B2;
    sbit  EID7_C2TX2EID_bit at C2TX2EID.B1;
    sbit  EID6_C2TX2EID_bit at C2TX2EID.B0;

    // C2TX2DLC bits
    sbit  EID5_C2TX2DLC_bit at C2TX2DLC.B15;
    sbit  EID4_C2TX2DLC_bit at C2TX2DLC.B14;
    sbit  EID3_C2TX2DLC_bit at C2TX2DLC.B13;
    sbit  EID2_C2TX2DLC_bit at C2TX2DLC.B12;
    sbit  EID1_C2TX2DLC_bit at C2TX2DLC.B11;
    sbit  EID0_C2TX2DLC_bit at C2TX2DLC.B10;
    sbit  TXRTR_C2TX2DLC_bit at C2TX2DLC.B9;
    sbit  TXRB1_C2TX2DLC_bit at C2TX2DLC.B8;
    sbit  TXRB0_C2TX2DLC_bit at C2TX2DLC.B7;
    sbit  DLC_3_C2TX2DLC_bit at C2TX2DLC.B6;
    sbit  DLC_2_C2TX2DLC_bit at C2TX2DLC.B5;
    sbit  DLC_1_C2TX2DLC_bit at C2TX2DLC.B4;
    sbit  DLC_0_C2TX2DLC_bit at C2TX2DLC.B3;

    // C2TX2B1 bits
    sbit  TXB2D1_7_C2TX2B1_bit at C2TX2B1.B15;
    sbit  TXB2D1_6_C2TX2B1_bit at C2TX2B1.B14;
    sbit  TXB2D1_5_C2TX2B1_bit at C2TX2B1.B13;
    sbit  TXB2D1_4_C2TX2B1_bit at C2TX2B1.B12;
    sbit  TXB2D1_3_C2TX2B1_bit at C2TX2B1.B11;
    sbit  TXB2D1_2_C2TX2B1_bit at C2TX2B1.B10;
    sbit  TXB2D1_1_C2TX2B1_bit at C2TX2B1.B9;
    sbit  TXB2D1_0_C2TX2B1_bit at C2TX2B1.B8;
    sbit  TXB2D0_7_C2TX2B1_bit at C2TX2B1.B7;
    sbit  TXB2D0_6_C2TX2B1_bit at C2TX2B1.B6;
    sbit  TXB2D0_5_C2TX2B1_bit at C2TX2B1.B5;
    sbit  TXB2D0_4_C2TX2B1_bit at C2TX2B1.B4;
    sbit  TXB2D0_3_C2TX2B1_bit at C2TX2B1.B3;
    sbit  TXB2D0_2_C2TX2B1_bit at C2TX2B1.B2;
    sbit  TXB2D0_1_C2TX2B1_bit at C2TX2B1.B1;
    sbit  TXB2D0_0_C2TX2B1_bit at C2TX2B1.B0;

    // C2TX2B2 bits
    sbit  TXB2D3_7_C2TX2B2_bit at C2TX2B2.B15;
    sbit  TXB2D3_6_C2TX2B2_bit at C2TX2B2.B14;
    sbit  TXB2D3_5_C2TX2B2_bit at C2TX2B2.B13;
    sbit  TXB2D3_4_C2TX2B2_bit at C2TX2B2.B12;
    sbit  TXB2D3_3_C2TX2B2_bit at C2TX2B2.B11;
    sbit  TXB2D3_2_C2TX2B2_bit at C2TX2B2.B10;
    sbit  TXB2D3_1_C2TX2B2_bit at C2TX2B2.B9;
    sbit  TXB2D3_0_C2TX2B2_bit at C2TX2B2.B8;
    sbit  TXB2D2_7_C2TX2B2_bit at C2TX2B2.B7;
    sbit  TXB2D2_6_C2TX2B2_bit at C2TX2B2.B6;
    sbit  TXB2D2_5_C2TX2B2_bit at C2TX2B2.B5;
    sbit  TXB2D2_4_C2TX2B2_bit at C2TX2B2.B4;
    sbit  TXB2D2_3_C2TX2B2_bit at C2TX2B2.B3;
    sbit  TXB2D2_2_C2TX2B2_bit at C2TX2B2.B2;
    sbit  TXB2D2_1_C2TX2B2_bit at C2TX2B2.B1;
    sbit  TXB2D2_0_C2TX2B2_bit at C2TX2B2.B0;

    // C2TX2B3 bits
    sbit  TXB2D5_7_C2TX2B3_bit at C2TX2B3.B15;
    sbit  TXB2D5_6_C2TX2B3_bit at C2TX2B3.B14;
    sbit  TXB2D5_5_C2TX2B3_bit at C2TX2B3.B13;
    sbit  TXB2D5_4_C2TX2B3_bit at C2TX2B3.B12;
    sbit  TXB2D5_3_C2TX2B3_bit at C2TX2B3.B11;
    sbit  TXB2D5_2_C2TX2B3_bit at C2TX2B3.B10;
    sbit  TXB2D5_1_C2TX2B3_bit at C2TX2B3.B9;
    sbit  TXB2D5_0_C2TX2B3_bit at C2TX2B3.B8;
    sbit  TXB2D4_7_C2TX2B3_bit at C2TX2B3.B7;
    sbit  TXB2D4_6_C2TX2B3_bit at C2TX2B3.B6;
    sbit  TXB2D4_5_C2TX2B3_bit at C2TX2B3.B5;
    sbit  TXB2D4_4_C2TX2B3_bit at C2TX2B3.B4;
    sbit  TXB2D4_3_C2TX2B3_bit at C2TX2B3.B3;
    sbit  TXB2D4_2_C2TX2B3_bit at C2TX2B3.B2;
    sbit  TXB2D4_1_C2TX2B3_bit at C2TX2B3.B1;
    sbit  TXB2D4_0_C2TX2B3_bit at C2TX2B3.B0;

    // C2TX2B4 bits
    sbit  TXB2D7_7_C2TX2B4_bit at C2TX2B4.B15;
    sbit  TXB2D7_6_C2TX2B4_bit at C2TX2B4.B14;
    sbit  TXB2D7_5_C2TX2B4_bit at C2TX2B4.B13;
    sbit  TXB2D7_4_C2TX2B4_bit at C2TX2B4.B12;
    sbit  TXB2D7_3_C2TX2B4_bit at C2TX2B4.B11;
    sbit  TXB2D7_2_C2TX2B4_bit at C2TX2B4.B10;
    sbit  TXB2D7_1_C2TX2B4_bit at C2TX2B4.B9;
    sbit  TXB2D7_0_C2TX2B4_bit at C2TX2B4.B8;
    sbit  TXB2D6_7_C2TX2B4_bit at C2TX2B4.B7;
    sbit  TXB2D6_6_C2TX2B4_bit at C2TX2B4.B6;
    sbit  TXB2D6_5_C2TX2B4_bit at C2TX2B4.B5;
    sbit  TXB2D6_4_C2TX2B4_bit at C2TX2B4.B4;
    sbit  TXB2D6_3_C2TX2B4_bit at C2TX2B4.B3;
    sbit  TXB2D6_2_C2TX2B4_bit at C2TX2B4.B2;
    sbit  TXB2D6_1_C2TX2B4_bit at C2TX2B4.B1;
    sbit  TXB2D6_0_C2TX2B4_bit at C2TX2B4.B0;

    // C2TX2CON bits
    sbit  TXABT_C2TX2CON_bit at C2TX2CON.B6;
    sbit  TXLARB_C2TX2CON_bit at C2TX2CON.B5;
    sbit  TXERR_C2TX2CON_bit at C2TX2CON.B4;
    sbit  TXREQ_C2TX2CON_bit at C2TX2CON.B3;
    sbit  TXPRI_1_C2TX2CON_bit at C2TX2CON.B1;
    sbit  TXPRI_0_C2TX2CON_bit at C2TX2CON.B0;

    // C2TX1SID bits
    sbit  SID10_C2TX1SID_bit at C2TX1SID.B15;
    sbit  SID9_C2TX1SID_bit at C2TX1SID.B14;
    sbit  SID8_C2TX1SID_bit at C2TX1SID.B13;
    sbit  SID7_C2TX1SID_bit at C2TX1SID.B12;
    sbit  SID6_C2TX1SID_bit at C2TX1SID.B11;
    sbit  SID5_C2TX1SID_bit at C2TX1SID.B7;
    sbit  SID4_C2TX1SID_bit at C2TX1SID.B6;
    sbit  SID3_C2TX1SID_bit at C2TX1SID.B5;
    sbit  SID2_C2TX1SID_bit at C2TX1SID.B4;
    sbit  SID1_C2TX1SID_bit at C2TX1SID.B3;
    sbit  SID0_C2TX1SID_bit at C2TX1SID.B2;
    sbit  SRR_C2TX1SID_bit at C2TX1SID.B1;
    sbit  TXIDE_C2TX1SID_bit at C2TX1SID.B0;

    // C2TX1EID bits
    sbit  EID17_C2TX1EID_bit at C2TX1EID.B15;
    sbit  EID16_C2TX1EID_bit at C2TX1EID.B14;
    sbit  EID15_C2TX1EID_bit at C2TX1EID.B13;
    sbit  EID14_C2TX1EID_bit at C2TX1EID.B12;
    sbit  EID13_C2TX1EID_bit at C2TX1EID.B7;
    sbit  EID12_C2TX1EID_bit at C2TX1EID.B6;
    sbit  EID11_C2TX1EID_bit at C2TX1EID.B5;
    sbit  EID10_C2TX1EID_bit at C2TX1EID.B4;
    sbit  EID9_C2TX1EID_bit at C2TX1EID.B3;
    sbit  EID8_C2TX1EID_bit at C2TX1EID.B2;
    sbit  EID7_C2TX1EID_bit at C2TX1EID.B1;
    sbit  EID6_C2TX1EID_bit at C2TX1EID.B0;

    // C2TX1DLC bits
    sbit  EID5_C2TX1DLC_bit at C2TX1DLC.B15;
    sbit  EID4_C2TX1DLC_bit at C2TX1DLC.B14;
    sbit  EID3_C2TX1DLC_bit at C2TX1DLC.B13;
    sbit  EID2_C2TX1DLC_bit at C2TX1DLC.B12;
    sbit  EID1_C2TX1DLC_bit at C2TX1DLC.B11;
    sbit  EID0_C2TX1DLC_bit at C2TX1DLC.B10;
    sbit  TXRTR_C2TX1DLC_bit at C2TX1DLC.B9;
    sbit  TXRB1_C2TX1DLC_bit at C2TX1DLC.B8;
    sbit  TXRB0_C2TX1DLC_bit at C2TX1DLC.B7;
    sbit  DLC_3_C2TX1DLC_bit at C2TX1DLC.B6;
    sbit  DLC_2_C2TX1DLC_bit at C2TX1DLC.B5;
    sbit  DLC_1_C2TX1DLC_bit at C2TX1DLC.B4;
    sbit  DLC_0_C2TX1DLC_bit at C2TX1DLC.B3;

    // C2TX1B1 bits
    sbit  TXB1D1_7_C2TX1B1_bit at C2TX1B1.B15;
    sbit  TXB1D1_6_C2TX1B1_bit at C2TX1B1.B14;
    sbit  TXB1D1_5_C2TX1B1_bit at C2TX1B1.B13;
    sbit  TXB1D1_4_C2TX1B1_bit at C2TX1B1.B12;
    sbit  TXB1D1_3_C2TX1B1_bit at C2TX1B1.B11;
    sbit  TXB1D1_2_C2TX1B1_bit at C2TX1B1.B10;
    sbit  TXB1D1_1_C2TX1B1_bit at C2TX1B1.B9;
    sbit  TXB1D1_0_C2TX1B1_bit at C2TX1B1.B8;
    sbit  TXB1D0_7_C2TX1B1_bit at C2TX1B1.B7;
    sbit  TXB1D0_6_C2TX1B1_bit at C2TX1B1.B6;
    sbit  TXB1D0_5_C2TX1B1_bit at C2TX1B1.B5;
    sbit  TXB1D0_4_C2TX1B1_bit at C2TX1B1.B4;
    sbit  TXB1D0_3_C2TX1B1_bit at C2TX1B1.B3;
    sbit  TXB1D0_2_C2TX1B1_bit at C2TX1B1.B2;
    sbit  TXB1D0_1_C2TX1B1_bit at C2TX1B1.B1;
    sbit  TXB1D0_0_C2TX1B1_bit at C2TX1B1.B0;

    // C2TX1B2 bits
    sbit  TXB1D3_7_C2TX1B2_bit at C2TX1B2.B15;
    sbit  TXB1D3_6_C2TX1B2_bit at C2TX1B2.B14;
    sbit  TXB1D3_5_C2TX1B2_bit at C2TX1B2.B13;
    sbit  TXB1D3_4_C2TX1B2_bit at C2TX1B2.B12;
    sbit  TXB1D3_3_C2TX1B2_bit at C2TX1B2.B11;
    sbit  TXB1D3_2_C2TX1B2_bit at C2TX1B2.B10;
    sbit  TXB1D3_1_C2TX1B2_bit at C2TX1B2.B9;
    sbit  TXB1D3_0_C2TX1B2_bit at C2TX1B2.B8;
    sbit  TXB1D2_7_C2TX1B2_bit at C2TX1B2.B7;
    sbit  TXB1D2_6_C2TX1B2_bit at C2TX1B2.B6;
    sbit  TXB1D2_5_C2TX1B2_bit at C2TX1B2.B5;
    sbit  TXB1D2_4_C2TX1B2_bit at C2TX1B2.B4;
    sbit  TXB1D2_3_C2TX1B2_bit at C2TX1B2.B3;
    sbit  TXB1D2_2_C2TX1B2_bit at C2TX1B2.B2;
    sbit  TXB1D2_1_C2TX1B2_bit at C2TX1B2.B1;
    sbit  TXB1D2_0_C2TX1B2_bit at C2TX1B2.B0;

    // C2TX1B3 bits
    sbit  TXB1D5_7_C2TX1B3_bit at C2TX1B3.B15;
    sbit  TXB1D5_6_C2TX1B3_bit at C2TX1B3.B14;
    sbit  TXB1D5_5_C2TX1B3_bit at C2TX1B3.B13;
    sbit  TXB1D5_4_C2TX1B3_bit at C2TX1B3.B12;
    sbit  TXB1D5_3_C2TX1B3_bit at C2TX1B3.B11;
    sbit  TXB1D5_2_C2TX1B3_bit at C2TX1B3.B10;
    sbit  TXB1D5_1_C2TX1B3_bit at C2TX1B3.B9;
    sbit  TXB1D5_0_C2TX1B3_bit at C2TX1B3.B8;
    sbit  TXB1D4_7_C2TX1B3_bit at C2TX1B3.B7;
    sbit  TXB1D4_6_C2TX1B3_bit at C2TX1B3.B6;
    sbit  TXB1D4_5_C2TX1B3_bit at C2TX1B3.B5;
    sbit  TXB1D4_4_C2TX1B3_bit at C2TX1B3.B4;
    sbit  TXB1D4_3_C2TX1B3_bit at C2TX1B3.B3;
    sbit  TXB1D4_2_C2TX1B3_bit at C2TX1B3.B2;
    sbit  TXB1D4_1_C2TX1B3_bit at C2TX1B3.B1;
    sbit  TXB1D4_0_C2TX1B3_bit at C2TX1B3.B0;

    // C2TX1B4 bits
    sbit  TXB1D7_7_C2TX1B4_bit at C2TX1B4.B15;
    sbit  TXB1D7_6_C2TX1B4_bit at C2TX1B4.B14;
    sbit  TXB1D7_5_C2TX1B4_bit at C2TX1B4.B13;
    sbit  TXB1D7_4_C2TX1B4_bit at C2TX1B4.B12;
    sbit  TXB1D7_3_C2TX1B4_bit at C2TX1B4.B11;
    sbit  TXB1D7_2_C2TX1B4_bit at C2TX1B4.B10;
    sbit  TXB1D7_1_C2TX1B4_bit at C2TX1B4.B9;
    sbit  TXB1D7_0_C2TX1B4_bit at C2TX1B4.B8;
    sbit  TXB1D6_7_C2TX1B4_bit at C2TX1B4.B7;
    sbit  TXB1D6_6_C2TX1B4_bit at C2TX1B4.B6;
    sbit  TXB1D6_5_C2TX1B4_bit at C2TX1B4.B5;
    sbit  TXB1D6_4_C2TX1B4_bit at C2TX1B4.B4;
    sbit  TXB1D6_3_C2TX1B4_bit at C2TX1B4.B3;
    sbit  TXB1D6_2_C2TX1B4_bit at C2TX1B4.B2;
    sbit  TXB1D6_1_C2TX1B4_bit at C2TX1B4.B1;
    sbit  TXB1D6_0_C2TX1B4_bit at C2TX1B4.B0;

    // C2TX1CON bits
    sbit  TXABT_C2TX1CON_bit at C2TX1CON.B6;
    sbit  TXLARB_C2TX1CON_bit at C2TX1CON.B5;
    sbit  TXERR_C2TX1CON_bit at C2TX1CON.B4;
    sbit  TXREQ_C2TX1CON_bit at C2TX1CON.B3;
    sbit  TXPRI_1_C2TX1CON_bit at C2TX1CON.B1;
    sbit  TXPRI_0_C2TX1CON_bit at C2TX1CON.B0;

    // C2TX0SID bits
    sbit  SID10_C2TX0SID_bit at C2TX0SID.B15;
    sbit  SID9_C2TX0SID_bit at C2TX0SID.B14;
    sbit  SID8_C2TX0SID_bit at C2TX0SID.B13;
    sbit  SID7_C2TX0SID_bit at C2TX0SID.B12;
    sbit  SID6_C2TX0SID_bit at C2TX0SID.B11;
    sbit  SID5_C2TX0SID_bit at C2TX0SID.B7;
    sbit  SID4_C2TX0SID_bit at C2TX0SID.B6;
    sbit  SID3_C2TX0SID_bit at C2TX0SID.B5;
    sbit  SID2_C2TX0SID_bit at C2TX0SID.B4;
    sbit  SID1_C2TX0SID_bit at C2TX0SID.B3;
    sbit  SID0_C2TX0SID_bit at C2TX0SID.B2;
    sbit  SRR_C2TX0SID_bit at C2TX0SID.B1;
    sbit  TXIDE_C2TX0SID_bit at C2TX0SID.B0;

    // C2TX0EID bits
    sbit  EID17_C2TX0EID_bit at C2TX0EID.B15;
    sbit  EID16_C2TX0EID_bit at C2TX0EID.B14;
    sbit  EID15_C2TX0EID_bit at C2TX0EID.B13;
    sbit  EID14_C2TX0EID_bit at C2TX0EID.B12;
    sbit  EID13_C2TX0EID_bit at C2TX0EID.B7;
    sbit  EID12_C2TX0EID_bit at C2TX0EID.B6;
    sbit  EID11_C2TX0EID_bit at C2TX0EID.B5;
    sbit  EID10_C2TX0EID_bit at C2TX0EID.B4;
    sbit  EID9_C2TX0EID_bit at C2TX0EID.B3;
    sbit  EID8_C2TX0EID_bit at C2TX0EID.B2;
    sbit  EID7_C2TX0EID_bit at C2TX0EID.B1;
    sbit  EID6_C2TX0EID_bit at C2TX0EID.B0;

    // C2TX0DLC bits
    sbit  EID5_C2TX0DLC_bit at C2TX0DLC.B15;
    sbit  EID4_C2TX0DLC_bit at C2TX0DLC.B14;
    sbit  EID3_C2TX0DLC_bit at C2TX0DLC.B13;
    sbit  EID2_C2TX0DLC_bit at C2TX0DLC.B12;
    sbit  EID1_C2TX0DLC_bit at C2TX0DLC.B11;
    sbit  EID0_C2TX0DLC_bit at C2TX0DLC.B10;
    sbit  TXRTR_C2TX0DLC_bit at C2TX0DLC.B9;
    sbit  TXRB1_C2TX0DLC_bit at C2TX0DLC.B8;
    sbit  TXRB0_C2TX0DLC_bit at C2TX0DLC.B7;
    sbit  DLC_3_C2TX0DLC_bit at C2TX0DLC.B6;
    sbit  DLC_2_C2TX0DLC_bit at C2TX0DLC.B5;
    sbit  DLC_1_C2TX0DLC_bit at C2TX0DLC.B4;
    sbit  DLC_0_C2TX0DLC_bit at C2TX0DLC.B3;

    // C2TX0B1 bits
    sbit  TXB0D1_7_C2TX0B1_bit at C2TX0B1.B15;
    sbit  TXB0D1_6_C2TX0B1_bit at C2TX0B1.B14;
    sbit  TXB0D1_5_C2TX0B1_bit at C2TX0B1.B13;
    sbit  TXB0D1_4_C2TX0B1_bit at C2TX0B1.B12;
    sbit  TXB0D1_3_C2TX0B1_bit at C2TX0B1.B11;
    sbit  TXB0D1_2_C2TX0B1_bit at C2TX0B1.B10;
    sbit  TXB0D1_1_C2TX0B1_bit at C2TX0B1.B9;
    sbit  TXB0D1_0_C2TX0B1_bit at C2TX0B1.B8;
    sbit  TXB0D0_7_C2TX0B1_bit at C2TX0B1.B7;
    sbit  TXB0D0_6_C2TX0B1_bit at C2TX0B1.B6;
    sbit  TXB0D0_5_C2TX0B1_bit at C2TX0B1.B5;
    sbit  TXB0D0_4_C2TX0B1_bit at C2TX0B1.B4;
    sbit  TXB0D0_3_C2TX0B1_bit at C2TX0B1.B3;
    sbit  TXB0D0_2_C2TX0B1_bit at C2TX0B1.B2;
    sbit  TXB0D0_1_C2TX0B1_bit at C2TX0B1.B1;
    sbit  TXB0D0_0_C2TX0B1_bit at C2TX0B1.B0;

    // C2TX0B2 bits
    sbit  TXB0D3_7_C2TX0B2_bit at C2TX0B2.B15;
    sbit  TXB0D3_6_C2TX0B2_bit at C2TX0B2.B14;
    sbit  TXB0D3_5_C2TX0B2_bit at C2TX0B2.B13;
    sbit  TXB0D3_4_C2TX0B2_bit at C2TX0B2.B12;
    sbit  TXB0D3_3_C2TX0B2_bit at C2TX0B2.B11;
    sbit  TXB0D3_2_C2TX0B2_bit at C2TX0B2.B10;
    sbit  TXB0D3_1_C2TX0B2_bit at C2TX0B2.B9;
    sbit  TXB0D3_0_C2TX0B2_bit at C2TX0B2.B8;
    sbit  TXB0D2_7_C2TX0B2_bit at C2TX0B2.B7;
    sbit  TXB0D2_6_C2TX0B2_bit at C2TX0B2.B6;
    sbit  TXB0D2_5_C2TX0B2_bit at C2TX0B2.B5;
    sbit  TXB0D2_4_C2TX0B2_bit at C2TX0B2.B4;
    sbit  TXB0D2_3_C2TX0B2_bit at C2TX0B2.B3;
    sbit  TXB0D2_2_C2TX0B2_bit at C2TX0B2.B2;
    sbit  TXB0D2_1_C2TX0B2_bit at C2TX0B2.B1;
    sbit  TXB0D2_0_C2TX0B2_bit at C2TX0B2.B0;

    // C2TX0B3 bits
    sbit  TXB0D5_7_C2TX0B3_bit at C2TX0B3.B15;
    sbit  TXB0D5_6_C2TX0B3_bit at C2TX0B3.B14;
    sbit  TXB0D5_5_C2TX0B3_bit at C2TX0B3.B13;
    sbit  TXB0D5_4_C2TX0B3_bit at C2TX0B3.B12;
    sbit  TXB0D5_3_C2TX0B3_bit at C2TX0B3.B11;
    sbit  TXB0D5_2_C2TX0B3_bit at C2TX0B3.B10;
    sbit  TXB0D5_1_C2TX0B3_bit at C2TX0B3.B9;
    sbit  TXB0D5_0_C2TX0B3_bit at C2TX0B3.B8;
    sbit  TXB0D4_7_C2TX0B3_bit at C2TX0B3.B7;
    sbit  TXB0D4_6_C2TX0B3_bit at C2TX0B3.B6;
    sbit  TXB0D4_5_C2TX0B3_bit at C2TX0B3.B5;
    sbit  TXB0D4_4_C2TX0B3_bit at C2TX0B3.B4;
    sbit  TXB0D4_3_C2TX0B3_bit at C2TX0B3.B3;
    sbit  TXB0D4_2_C2TX0B3_bit at C2TX0B3.B2;
    sbit  TXB0D4_1_C2TX0B3_bit at C2TX0B3.B1;
    sbit  TXB0D4_0_C2TX0B3_bit at C2TX0B3.B0;

    // C2TX0B4 bits
    sbit  TXB0D7_7_C2TX0B4_bit at C2TX0B4.B15;
    sbit  TXB0D7_6_C2TX0B4_bit at C2TX0B4.B14;
    sbit  TXB0D7_5_C2TX0B4_bit at C2TX0B4.B13;
    sbit  TXB0D7_4_C2TX0B4_bit at C2TX0B4.B12;
    sbit  TXB0D7_3_C2TX0B4_bit at C2TX0B4.B11;
    sbit  TXB0D7_2_C2TX0B4_bit at C2TX0B4.B10;
    sbit  TXB0D7_1_C2TX0B4_bit at C2TX0B4.B9;
    sbit  TXB0D7_0_C2TX0B4_bit at C2TX0B4.B8;
    sbit  TXB0D6_7_C2TX0B4_bit at C2TX0B4.B7;
    sbit  TXB0D6_6_C2TX0B4_bit at C2TX0B4.B6;
    sbit  TXB0D6_5_C2TX0B4_bit at C2TX0B4.B5;
    sbit  TXB0D6_4_C2TX0B4_bit at C2TX0B4.B4;
    sbit  TXB0D6_3_C2TX0B4_bit at C2TX0B4.B3;
    sbit  TXB0D6_2_C2TX0B4_bit at C2TX0B4.B2;
    sbit  TXB0D6_1_C2TX0B4_bit at C2TX0B4.B1;
    sbit  TXB0D6_0_C2TX0B4_bit at C2TX0B4.B0;

    // C2TX0CON bits
    sbit  TXABT_C2TX0CON_bit at C2TX0CON.B6;
    sbit  TXLARB_C2TX0CON_bit at C2TX0CON.B5;
    sbit  TXERR_C2TX0CON_bit at C2TX0CON.B4;
    sbit  TXREQ_C2TX0CON_bit at C2TX0CON.B3;
    sbit  TXPRI_1_C2TX0CON_bit at C2TX0CON.B1;
    sbit  TXPRI_0_C2TX0CON_bit at C2TX0CON.B0;

    // C2RX1SID bits
    sbit  SID10_C2RX1SID_bit at C2RX1SID.B12;
    sbit  SID9_C2RX1SID_bit at C2RX1SID.B11;
    sbit  SID8_C2RX1SID_bit at C2RX1SID.B10;
    sbit  SID7_C2RX1SID_bit at C2RX1SID.B9;
    sbit  SID6_C2RX1SID_bit at C2RX1SID.B8;
    sbit  SID5_C2RX1SID_bit at C2RX1SID.B7;
    sbit  SID4_C2RX1SID_bit at C2RX1SID.B6;
    sbit  SID3_C2RX1SID_bit at C2RX1SID.B5;
    sbit  SID2_C2RX1SID_bit at C2RX1SID.B4;
    sbit  SID1_C2RX1SID_bit at C2RX1SID.B3;
    sbit  SID0_C2RX1SID_bit at C2RX1SID.B2;
    sbit  SRR_C2RX1SID_bit at C2RX1SID.B1;
    sbit  RXIDE_C2RX1SID_bit at C2RX1SID.B0;

    // C2RX1EID bits
    sbit  EID17_C2RX1EID_bit at C2RX1EID.B11;
    sbit  EID16_C2RX1EID_bit at C2RX1EID.B10;
    sbit  EID15_C2RX1EID_bit at C2RX1EID.B9;
    sbit  EID14_C2RX1EID_bit at C2RX1EID.B8;
    sbit  EID13_C2RX1EID_bit at C2RX1EID.B7;
    sbit  EID12_C2RX1EID_bit at C2RX1EID.B6;
    sbit  EID11_C2RX1EID_bit at C2RX1EID.B5;
    sbit  EID10_C2RX1EID_bit at C2RX1EID.B4;
    sbit  EID9_C2RX1EID_bit at C2RX1EID.B3;
    sbit  EID8_C2RX1EID_bit at C2RX1EID.B2;
    sbit  EID7_C2RX1EID_bit at C2RX1EID.B1;
    sbit  EID6_C2RX1EID_bit at C2RX1EID.B0;

    // C2RX1DLC bits
    sbit  EID5_C2RX1DLC_bit at C2RX1DLC.B15;
    sbit  EID4_C2RX1DLC_bit at C2RX1DLC.B14;
    sbit  EID3_C2RX1DLC_bit at C2RX1DLC.B13;
    sbit  EID2_C2RX1DLC_bit at C2RX1DLC.B12;
    sbit  EID1_C2RX1DLC_bit at C2RX1DLC.B11;
    sbit  EID0_C2RX1DLC_bit at C2RX1DLC.B10;
    sbit  RXRTR_C2RX1DLC_bit at C2RX1DLC.B9;
    sbit  RXRB1_C2RX1DLC_bit at C2RX1DLC.B8;
    sbit  RXRB0_C2RX1DLC_bit at C2RX1DLC.B4;
    sbit  DLC_3_C2RX1DLC_bit at C2RX1DLC.B3;
    sbit  DLC_2_C2RX1DLC_bit at C2RX1DLC.B2;
    sbit  DLC_1_C2RX1DLC_bit at C2RX1DLC.B1;
    sbit  DLC_0_C2RX1DLC_bit at C2RX1DLC.B0;

    // C2RX1B1 bits
    sbit  TXB1D1_7_C2RX1B1_bit at C2RX1B1.B15;
    sbit  TXB1D1_6_C2RX1B1_bit at C2RX1B1.B14;
    sbit  TXB1D1_5_C2RX1B1_bit at C2RX1B1.B13;
    sbit  TXB1D1_4_C2RX1B1_bit at C2RX1B1.B12;
    sbit  TXB1D1_3_C2RX1B1_bit at C2RX1B1.B11;
    sbit  TXB1D1_2_C2RX1B1_bit at C2RX1B1.B10;
    sbit  TXB1D1_1_C2RX1B1_bit at C2RX1B1.B9;
    sbit  TXB1D1_0_C2RX1B1_bit at C2RX1B1.B8;
    sbit  TXB1D0_7_C2RX1B1_bit at C2RX1B1.B7;
    sbit  TXB1D0_6_C2RX1B1_bit at C2RX1B1.B6;
    sbit  TXB1D0_5_C2RX1B1_bit at C2RX1B1.B5;
    sbit  TXB1D0_4_C2RX1B1_bit at C2RX1B1.B4;
    sbit  TXB1D0_3_C2RX1B1_bit at C2RX1B1.B3;
    sbit  TXB1D0_2_C2RX1B1_bit at C2RX1B1.B2;
    sbit  TXB1D0_1_C2RX1B1_bit at C2RX1B1.B1;
    sbit  TXB1D0_0_C2RX1B1_bit at C2RX1B1.B0;

    // C2RX1B2 bits
    sbit  TXB1D3_7_C2RX1B2_bit at C2RX1B2.B15;
    sbit  TXB1D3_6_C2RX1B2_bit at C2RX1B2.B14;
    sbit  TXB1D3_5_C2RX1B2_bit at C2RX1B2.B13;
    sbit  TXB1D3_4_C2RX1B2_bit at C2RX1B2.B12;
    sbit  TXB1D3_3_C2RX1B2_bit at C2RX1B2.B11;
    sbit  TXB1D3_2_C2RX1B2_bit at C2RX1B2.B10;
    sbit  TXB1D3_1_C2RX1B2_bit at C2RX1B2.B9;
    sbit  TXB1D3_0_C2RX1B2_bit at C2RX1B2.B8;
    sbit  TXB1D2_7_C2RX1B2_bit at C2RX1B2.B7;
    sbit  TXB1D2_6_C2RX1B2_bit at C2RX1B2.B6;
    sbit  TXB1D2_5_C2RX1B2_bit at C2RX1B2.B5;
    sbit  TXB1D2_4_C2RX1B2_bit at C2RX1B2.B4;
    sbit  TXB1D2_3_C2RX1B2_bit at C2RX1B2.B3;
    sbit  TXB1D2_2_C2RX1B2_bit at C2RX1B2.B2;
    sbit  TXB1D2_1_C2RX1B2_bit at C2RX1B2.B1;
    sbit  TXB1D2_0_C2RX1B2_bit at C2RX1B2.B0;

    // C2RX1B3 bits
    sbit  TXB1D5_7_C2RX1B3_bit at C2RX1B3.B15;
    sbit  TXB1D5_6_C2RX1B3_bit at C2RX1B3.B14;
    sbit  TXB1D5_5_C2RX1B3_bit at C2RX1B3.B13;
    sbit  TXB1D5_4_C2RX1B3_bit at C2RX1B3.B12;
    sbit  TXB1D5_3_C2RX1B3_bit at C2RX1B3.B11;
    sbit  TXB1D5_2_C2RX1B3_bit at C2RX1B3.B10;
    sbit  TXB1D5_1_C2RX1B3_bit at C2RX1B3.B9;
    sbit  TXB1D5_0_C2RX1B3_bit at C2RX1B3.B8;
    sbit  TXB1D4_7_C2RX1B3_bit at C2RX1B3.B7;
    sbit  TXB1D4_6_C2RX1B3_bit at C2RX1B3.B6;
    sbit  TXB1D4_5_C2RX1B3_bit at C2RX1B3.B5;
    sbit  TXB1D4_4_C2RX1B3_bit at C2RX1B3.B4;
    sbit  TXB1D4_3_C2RX1B3_bit at C2RX1B3.B3;
    sbit  TXB1D4_2_C2RX1B3_bit at C2RX1B3.B2;
    sbit  TXB1D4_1_C2RX1B3_bit at C2RX1B3.B1;
    sbit  TXB1D4_0_C2RX1B3_bit at C2RX1B3.B0;

    // C2RX1B4 bits
    sbit  TXB1D7_7_C2RX1B4_bit at C2RX1B4.B15;
    sbit  TXB1D7_6_C2RX1B4_bit at C2RX1B4.B14;
    sbit  TXB1D7_5_C2RX1B4_bit at C2RX1B4.B13;
    sbit  TXB1D7_4_C2RX1B4_bit at C2RX1B4.B12;
    sbit  TXB1D7_3_C2RX1B4_bit at C2RX1B4.B11;
    sbit  TXB1D7_2_C2RX1B4_bit at C2RX1B4.B10;
    sbit  TXB1D7_1_C2RX1B4_bit at C2RX1B4.B9;
    sbit  TXB1D7_0_C2RX1B4_bit at C2RX1B4.B8;
    sbit  TXB1D6_7_C2RX1B4_bit at C2RX1B4.B7;
    sbit  TXB1D6_6_C2RX1B4_bit at C2RX1B4.B6;
    sbit  TXB1D6_5_C2RX1B4_bit at C2RX1B4.B5;
    sbit  TXB1D6_4_C2RX1B4_bit at C2RX1B4.B4;
    sbit  TXB1D6_3_C2RX1B4_bit at C2RX1B4.B3;
    sbit  TXB1D6_2_C2RX1B4_bit at C2RX1B4.B2;
    sbit  TXB1D6_1_C2RX1B4_bit at C2RX1B4.B1;
    sbit  TXB1D6_0_C2RX1B4_bit at C2RX1B4.B0;

    // C2RX1CON bits
    sbit  RXFUL_C2RX1CON_bit at C2RX1CON.B7;
    sbit  RXRTRRO_C2RX1CON_bit at C2RX1CON.B3;
    sbit  FILHIT_2_C2RX1CON_bit at C2RX1CON.B2;
    sbit  FILHIT_1_C2RX1CON_bit at C2RX1CON.B1;
    sbit  FILHIT_0_C2RX1CON_bit at C2RX1CON.B0;

    // C2RX0SID bits
    sbit  SID10_C2RX0SID_bit at C2RX0SID.B12;
    sbit  SID9_C2RX0SID_bit at C2RX0SID.B11;
    sbit  SID8_C2RX0SID_bit at C2RX0SID.B10;
    sbit  SID7_C2RX0SID_bit at C2RX0SID.B9;
    sbit  SID6_C2RX0SID_bit at C2RX0SID.B8;
    sbit  SID5_C2RX0SID_bit at C2RX0SID.B7;
    sbit  SID4_C2RX0SID_bit at C2RX0SID.B6;
    sbit  SID3_C2RX0SID_bit at C2RX0SID.B5;
    sbit  SID2_C2RX0SID_bit at C2RX0SID.B4;
    sbit  SID1_C2RX0SID_bit at C2RX0SID.B3;
    sbit  SID0_C2RX0SID_bit at C2RX0SID.B2;
    sbit  SRR_C2RX0SID_bit at C2RX0SID.B1;
    sbit  RXIDE_C2RX0SID_bit at C2RX0SID.B0;

    // C2RX0EID bits
    sbit  EID17_C2RX0EID_bit at C2RX0EID.B11;
    sbit  EID16_C2RX0EID_bit at C2RX0EID.B10;
    sbit  EID15_C2RX0EID_bit at C2RX0EID.B9;
    sbit  EID14_C2RX0EID_bit at C2RX0EID.B8;
    sbit  EID13_C2RX0EID_bit at C2RX0EID.B7;
    sbit  EID12_C2RX0EID_bit at C2RX0EID.B6;
    sbit  EID11_C2RX0EID_bit at C2RX0EID.B5;
    sbit  EID10_C2RX0EID_bit at C2RX0EID.B4;
    sbit  EID9_C2RX0EID_bit at C2RX0EID.B3;
    sbit  EID8_C2RX0EID_bit at C2RX0EID.B2;
    sbit  EID7_C2RX0EID_bit at C2RX0EID.B1;
    sbit  EID6_C2RX0EID_bit at C2RX0EID.B0;

    // C2RX0DLC bits
    sbit  EID5_C2RX0DLC_bit at C2RX0DLC.B15;
    sbit  EID4_C2RX0DLC_bit at C2RX0DLC.B14;
    sbit  EID3_C2RX0DLC_bit at C2RX0DLC.B13;
    sbit  EID2_C2RX0DLC_bit at C2RX0DLC.B12;
    sbit  EID1_C2RX0DLC_bit at C2RX0DLC.B11;
    sbit  EID0_C2RX0DLC_bit at C2RX0DLC.B10;
    sbit  RXRTR_C2RX0DLC_bit at C2RX0DLC.B9;
    sbit  RXRB1_C2RX0DLC_bit at C2RX0DLC.B8;
    sbit  RXRB0_C2RX0DLC_bit at C2RX0DLC.B4;
    sbit  DLC_3_C2RX0DLC_bit at C2RX0DLC.B3;
    sbit  DLC_2_C2RX0DLC_bit at C2RX0DLC.B2;
    sbit  DLC_1_C2RX0DLC_bit at C2RX0DLC.B1;
    sbit  DLC_0_C2RX0DLC_bit at C2RX0DLC.B0;

    // C2RX0B1 bits
    sbit  TXB0D1_7_C2RX0B1_bit at C2RX0B1.B15;
    sbit  TXB0D1_6_C2RX0B1_bit at C2RX0B1.B14;
    sbit  TXB0D1_5_C2RX0B1_bit at C2RX0B1.B13;
    sbit  TXB0D1_4_C2RX0B1_bit at C2RX0B1.B12;
    sbit  TXB0D1_3_C2RX0B1_bit at C2RX0B1.B11;
    sbit  TXB0D1_2_C2RX0B1_bit at C2RX0B1.B10;
    sbit  TXB0D1_1_C2RX0B1_bit at C2RX0B1.B9;
    sbit  TXB0D1_0_C2RX0B1_bit at C2RX0B1.B8;
    sbit  TXB0D0_7_C2RX0B1_bit at C2RX0B1.B7;
    sbit  TXB0D0_6_C2RX0B1_bit at C2RX0B1.B6;
    sbit  TXB0D0_5_C2RX0B1_bit at C2RX0B1.B5;
    sbit  TXB0D0_4_C2RX0B1_bit at C2RX0B1.B4;
    sbit  TXB0D0_3_C2RX0B1_bit at C2RX0B1.B3;
    sbit  TXB0D0_2_C2RX0B1_bit at C2RX0B1.B2;
    sbit  TXB0D0_1_C2RX0B1_bit at C2RX0B1.B1;
    sbit  TXB0D0_0_C2RX0B1_bit at C2RX0B1.B0;

    // C2RX0B2 bits
    sbit  TXB0D3_7_C2RX0B2_bit at C2RX0B2.B15;
    sbit  TXB0D3_6_C2RX0B2_bit at C2RX0B2.B14;
    sbit  TXB0D3_5_C2RX0B2_bit at C2RX0B2.B13;
    sbit  TXB0D3_4_C2RX0B2_bit at C2RX0B2.B12;
    sbit  TXB0D3_3_C2RX0B2_bit at C2RX0B2.B11;
    sbit  TXB0D3_2_C2RX0B2_bit at C2RX0B2.B10;
    sbit  TXB0D3_1_C2RX0B2_bit at C2RX0B2.B9;
    sbit  TXB0D3_0_C2RX0B2_bit at C2RX0B2.B8;
    sbit  TXB0D2_7_C2RX0B2_bit at C2RX0B2.B7;
    sbit  TXB0D2_6_C2RX0B2_bit at C2RX0B2.B6;
    sbit  TXB0D2_5_C2RX0B2_bit at C2RX0B2.B5;
    sbit  TXB0D2_4_C2RX0B2_bit at C2RX0B2.B4;
    sbit  TXB0D2_3_C2RX0B2_bit at C2RX0B2.B3;
    sbit  TXB0D2_2_C2RX0B2_bit at C2RX0B2.B2;
    sbit  TXB0D2_1_C2RX0B2_bit at C2RX0B2.B1;
    sbit  TXB0D2_0_C2RX0B2_bit at C2RX0B2.B0;

    // C2RX0B3 bits
    sbit  TXB0D5_7_C2RX0B3_bit at C2RX0B3.B15;
    sbit  TXB0D5_6_C2RX0B3_bit at C2RX0B3.B14;
    sbit  TXB0D5_5_C2RX0B3_bit at C2RX0B3.B13;
    sbit  TXB0D5_4_C2RX0B3_bit at C2RX0B3.B12;
    sbit  TXB0D5_3_C2RX0B3_bit at C2RX0B3.B11;
    sbit  TXB0D5_2_C2RX0B3_bit at C2RX0B3.B10;
    sbit  TXB0D5_1_C2RX0B3_bit at C2RX0B3.B9;
    sbit  TXB0D5_0_C2RX0B3_bit at C2RX0B3.B8;
    sbit  TXB0D4_7_C2RX0B3_bit at C2RX0B3.B7;
    sbit  TXB0D4_6_C2RX0B3_bit at C2RX0B3.B6;
    sbit  TXB0D4_5_C2RX0B3_bit at C2RX0B3.B5;
    sbit  TXB0D4_4_C2RX0B3_bit at C2RX0B3.B4;
    sbit  TXB0D4_3_C2RX0B3_bit at C2RX0B3.B3;
    sbit  TXB0D4_2_C2RX0B3_bit at C2RX0B3.B2;
    sbit  TXB0D4_1_C2RX0B3_bit at C2RX0B3.B1;
    sbit  TXB0D4_0_C2RX0B3_bit at C2RX0B3.B0;

    // C2RX0B4 bits
    sbit  TXB0D7_7_C2RX0B4_bit at C2RX0B4.B15;
    sbit  TXB0D7_6_C2RX0B4_bit at C2RX0B4.B14;
    sbit  TXB0D7_5_C2RX0B4_bit at C2RX0B4.B13;
    sbit  TXB0D7_4_C2RX0B4_bit at C2RX0B4.B12;
    sbit  TXB0D7_3_C2RX0B4_bit at C2RX0B4.B11;
    sbit  TXB0D7_2_C2RX0B4_bit at C2RX0B4.B10;
    sbit  TXB0D7_1_C2RX0B4_bit at C2RX0B4.B9;
    sbit  TXB0D7_0_C2RX0B4_bit at C2RX0B4.B8;
    sbit  TXB0D6_7_C2RX0B4_bit at C2RX0B4.B7;
    sbit  TXB0D6_6_C2RX0B4_bit at C2RX0B4.B6;
    sbit  TXB0D6_5_C2RX0B4_bit at C2RX0B4.B5;
    sbit  TXB0D6_4_C2RX0B4_bit at C2RX0B4.B4;
    sbit  TXB0D6_3_C2RX0B4_bit at C2RX0B4.B3;
    sbit  TXB0D6_2_C2RX0B4_bit at C2RX0B4.B2;
    sbit  TXB0D6_1_C2RX0B4_bit at C2RX0B4.B1;
    sbit  TXB0D6_0_C2RX0B4_bit at C2RX0B4.B0;

    // C2RX0CON bits
    sbit  RXFUL_C2RX0CON_bit at C2RX0CON.B7;
    sbit  RXRTRRO_C2RX0CON_bit at C2RX0CON.B3;
    sbit  DBEN_C2RX0CON_bit at C2RX0CON.B2;
    sbit  JTOFF_C2RX0CON_bit at C2RX0CON.B1;
    sbit  FILHIT0_C2RX0CON_bit at C2RX0CON.B0;

    // C2CTRL bits
    sbit  CANCAP_C2CTRL_bit at C2CTRL.B15;
    sbit  CANFRZ_C2CTRL_bit at C2CTRL.B14;
    sbit  CANSIDL_C2CTRL_bit at C2CTRL.B13;
    sbit  ABAT_C2CTRL_bit at C2CTRL.B12;
    sbit  CANCKS_C2CTRL_bit at C2CTRL.B11;
    sbit  REQOP_2_C2CTRL_bit at C2CTRL.B10;
    sbit  REQOP_1_C2CTRL_bit at C2CTRL.B9;
    sbit  REQOP_0_C2CTRL_bit at C2CTRL.B8;
    sbit  OPMODE_2_C2CTRL_bit at C2CTRL.B7;
    sbit  OPMODE_1_C2CTRL_bit at C2CTRL.B6;
    sbit  OPMODE_0_C2CTRL_bit at C2CTRL.B5;
    sbit  ICODE_2_C2CTRL_bit at C2CTRL.B3;
    sbit  ICODE_1_C2CTRL_bit at C2CTRL.B2;
    sbit  ICODE_0_C2CTRL_bit at C2CTRL.B1;

    // C2CFG1 bits
    sbit  SJW_1_C2CFG1_bit at C2CFG1.B7;
    sbit  SJW_0_C2CFG1_bit at C2CFG1.B6;
    sbit  BRP_5_C2CFG1_bit at C2CFG1.B5;
    sbit  BRP_4_C2CFG1_bit at C2CFG1.B4;
    sbit  BRP_3_C2CFG1_bit at C2CFG1.B3;
    sbit  BRP_2_C2CFG1_bit at C2CFG1.B2;
    sbit  BRP_1_C2CFG1_bit at C2CFG1.B1;
    sbit  BRP_0_C2CFG1_bit at C2CFG1.B0;

    // C2CFG2 bits
    sbit  WAKFIL_C2CFG2_bit at C2CFG2.B14;
    sbit  SEG2PH_2_C2CFG2_bit at C2CFG2.B10;
    sbit  SEG2PH_1_C2CFG2_bit at C2CFG2.B9;
    sbit  SEG2PH_0_C2CFG2_bit at C2CFG2.B8;
    sbit  SEG2PHTS_C2CFG2_bit at C2CFG2.B7;
    sbit  SAM_C2CFG2_bit at C2CFG2.B6;
    sbit  SEG1PH_2_C2CFG2_bit at C2CFG2.B5;
    sbit  SEG1PH_1_C2CFG2_bit at C2CFG2.B4;
    sbit  SEG1PH_0_C2CFG2_bit at C2CFG2.B3;
    sbit  PRSEG_2_C2CFG2_bit at C2CFG2.B2;
    sbit  PRSEG_1_C2CFG2_bit at C2CFG2.B1;
    sbit  PRSEG_0_C2CFG2_bit at C2CFG2.B0;

    // C2INTF bits
    sbit  RXB0OVFL_C2INTF_bit at C2INTF.B15;
    sbit  RXB1OVFL_C2INTF_bit at C2INTF.B14;
    sbit  TXBO_C2INTF_bit at C2INTF.B13;
    sbit  TXBP_C2INTF_bit at C2INTF.B12;
    sbit  RXBP_C2INTF_bit at C2INTF.B11;
    sbit  TXWARN_C2INTF_bit at C2INTF.B10;
    sbit  RXWARN_C2INTF_bit at C2INTF.B9;
    sbit  EWARN_C2INTF_bit at C2INTF.B8;
    sbit  IRXIF_C2INTF_bit at C2INTF.B7;
    sbit  WAKIF_C2INTF_bit at C2INTF.B6;
    sbit  ERRIF_C2INTF_bit at C2INTF.B5;
    sbit  TXB2IF_C2INTF_bit at C2INTF.B4;
    sbit  TXB1IF_C2INTF_bit at C2INTF.B3;
    sbit  TXB0IF_C2INTF_bit at C2INTF.B2;
    sbit  RXB1IF_C2INTF_bit at C2INTF.B1;
    sbit  RXB0IF_C2INTF_bit at C2INTF.B0;

    // C2INTE bits
    sbit  IRXIE_C2INTE_bit at C2INTE.B7;
    sbit  WAKIE_C2INTE_bit at C2INTE.B6;
    sbit  ERRIE_C2INTE_bit at C2INTE.B5;
    sbit  TXB2IE_C2INTE_bit at C2INTE.B4;
    sbit  TXB1IE_C2INTE_bit at C2INTE.B3;
    sbit  TXB0IE_C2INTE_bit at C2INTE.B2;
    sbit  RXB1IE_C2INTE_bit at C2INTE.B1;
    sbit  RXB0IE_C2INTE_bit at C2INTE.B0;

    // C2EC bits
    sbit  TEC_7_C2EC_bit at C2EC.B15;
    sbit  TEC_6_C2EC_bit at C2EC.B14;
    sbit  TEC_5_C2EC_bit at C2EC.B13;
    sbit  TEC_4_C2EC_bit at C2EC.B12;
    sbit  TEC_3_C2EC_bit at C2EC.B11;
    sbit  TEC_2_C2EC_bit at C2EC.B10;
    sbit  TEC_1_C2EC_bit at C2EC.B9;
    sbit  TEC_0_C2EC_bit at C2EC.B8;
    sbit  REC_7_C2EC_bit at C2EC.B7;
    sbit  REC_6_C2EC_bit at C2EC.B6;
    sbit  REC_5_C2EC_bit at C2EC.B5;
    sbit  REC_4_C2EC_bit at C2EC.B4;
    sbit  REC_3_C2EC_bit at C2EC.B3;
    sbit  REC_2_C2EC_bit at C2EC.B2;
    sbit  REC_1_C2EC_bit at C2EC.B1;
    sbit  REC_0_C2EC_bit at C2EC.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int BGST = 13;
    sbit  BGST_bit at RCON.B13;
    const register unsigned short int LVDEN = 12;
    sbit  LVDEN_bit at RCON.B12;
    const register unsigned short int LVDL_3 = 11;
    sbit  LVDL_3_bit at RCON.B11;
    const register unsigned short int LVDL_2 = 10;
    sbit  LVDL_2_bit at RCON.B10;
    const register unsigned short int LVDL_1 = 9;
    sbit  LVDL_1_bit at RCON.B9;
    const register unsigned short int LVDL_0 = 8;
    sbit  LVDL_0_bit at RCON.B8;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON.B7;
    const register unsigned short int SWR = 6;
    sbit  SWR_bit at RCON.B6;
    const register unsigned short int SWDTEN = 5;
    sbit  SWDTEN_bit at RCON.B5;
    const register unsigned short int WDTO = 4;
    sbit  WDTO_bit at RCON.B4;
    const register unsigned short int SLEEP = 3;
    sbit  SLEEP_bit at RCON.B3;
    const register unsigned short int IDLE = 2;
    sbit  IDLE_bit at RCON.B2;
    const register unsigned short int BOR = 1;
    sbit  BOR_bit at RCON.B1;
    const register unsigned short int POR = 0;
    sbit  POR_bit at RCON.B0;

    // OSCCON bits
    const register unsigned short int COSC_2 = 14;
    sbit  COSC_2_bit at OSCCON.B14;
    const register unsigned short int COSC_1 = 13;
    sbit  COSC_1_bit at OSCCON.B13;
    const register unsigned short int COSC_0 = 12;
    sbit  COSC_0_bit at OSCCON.B12;
    const register unsigned short int NOSC_2 = 10;
    sbit  NOSC_2_bit at OSCCON.B10;
    const register unsigned short int NOSC_1 = 9;
    sbit  NOSC_1_bit at OSCCON.B9;
    const register unsigned short int NOSC_0 = 8;
    sbit  NOSC_0_bit at OSCCON.B8;
    const register unsigned short int POST_1 = 7;
    sbit  POST_1_bit at OSCCON.B7;
    const register unsigned short int POST_0 = 6;
    sbit  POST_0_bit at OSCCON.B6;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int LPOSCEN = 1;
    sbit  LPOSCEN_bit at OSCCON.B1;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

    // OSCTUN bits
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUN.B3;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUN.B2;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUN.B1;
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUN.B0;

    // BSRAM bits
    const register unsigned short int IW_BSR = 2;
    sbit  IW_BSR_bit at BSRAM.B2;
    const register unsigned short int IR_BSR = 1;
    sbit  IR_BSR_bit at BSRAM.B1;
    const register unsigned short int RL_BSR = 0;
    sbit  RL_BSR_bit at BSRAM.B0;

    // SSRAM bits
    const register unsigned short int IW_SSR = 2;
    sbit  IW_SSR_bit at SSRAM.B2;
    const register unsigned short int IR_SSR = 1;
    sbit  IR_SSR_bit at SSRAM.B1;
    const register unsigned short int RL_SSR = 0;
    sbit  RL_SSR_bit at SSRAM.B0;

    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int TWRI = 8;
    sbit  TWRI_bit at NVMCON.B8;
    const register unsigned short int PROGOP_6 = 6;
    sbit  PROGOP_6_bit at NVMCON.B6;
    const register unsigned short int PROGOP_5 = 5;
    sbit  PROGOP_5_bit at NVMCON.B5;
    const register unsigned short int PROGOP_4 = 4;
    sbit  PROGOP_4_bit at NVMCON.B4;
    const register unsigned short int PROGOP_3 = 3;
    sbit  PROGOP_3_bit at NVMCON.B3;
    const register unsigned short int PROGOP_2 = 2;
    sbit  PROGOP_2_bit at NVMCON.B2;
    const register unsigned short int PROGOP_1 = 1;
    sbit  PROGOP_1_bit at NVMCON.B1;
    const register unsigned short int PROGOP_0 = 0;
    sbit  PROGOP_0_bit at NVMCON.B0;

    // NVMADR bits
    const register unsigned short int NVMADR_15 = 15;
    sbit  NVMADR_15_bit at NVMADR.B15;
    const register unsigned short int NVMADR_14 = 14;
    sbit  NVMADR_14_bit at NVMADR.B14;
    const register unsigned short int NVMADR_13 = 13;
    sbit  NVMADR_13_bit at NVMADR.B13;
    const register unsigned short int NVMADR_12 = 12;
    sbit  NVMADR_12_bit at NVMADR.B12;
    const register unsigned short int NVMADR_11 = 11;
    sbit  NVMADR_11_bit at NVMADR.B11;
    const register unsigned short int NVMADR_10 = 10;
    sbit  NVMADR_10_bit at NVMADR.B10;
    const register unsigned short int NVMADR_9 = 9;
    sbit  NVMADR_9_bit at NVMADR.B9;
    const register unsigned short int NVMADR_8 = 8;
    sbit  NVMADR_8_bit at NVMADR.B8;
    const register unsigned short int NVMADR_7 = 7;
    sbit  NVMADR_7_bit at NVMADR.B7;
    const register unsigned short int NVMADR_6 = 6;
    sbit  NVMADR_6_bit at NVMADR.B6;
    const register unsigned short int NVMADR_5 = 5;
    sbit  NVMADR_5_bit at NVMADR.B5;
    const register unsigned short int NVMADR_4 = 4;
    sbit  NVMADR_4_bit at NVMADR.B4;
    const register unsigned short int NVMADR_3 = 3;
    sbit  NVMADR_3_bit at NVMADR.B3;
    const register unsigned short int NVMADR_2 = 2;
    sbit  NVMADR_2_bit at NVMADR.B2;
    const register unsigned short int NVMADR_1 = 1;
    sbit  NVMADR_1_bit at NVMADR.B1;
    const register unsigned short int NVMADR_0 = 0;
    sbit  NVMADR_0_bit at NVMADR.B0;

    // NVMADRU bits
    const register unsigned short int NVMADR_23 = 7;
    sbit  NVMADR_23_bit at NVMADRU.B7;
    const register unsigned short int NVMADR_22 = 6;
    sbit  NVMADR_22_bit at NVMADRU.B6;
    const register unsigned short int NVMADR_21 = 5;
    sbit  NVMADR_21_bit at NVMADRU.B5;
    const register unsigned short int NVMADR_20 = 4;
    sbit  NVMADR_20_bit at NVMADRU.B4;
    const register unsigned short int NVMADR_19 = 3;
    sbit  NVMADR_19_bit at NVMADRU.B3;
    const register unsigned short int NVMADR_18 = 2;
    sbit  NVMADR_18_bit at NVMADRU.B2;
    const register unsigned short int NVMADR_17 = 1;
    sbit  NVMADR_17_bit at NVMADRU.B1;
    const register unsigned short int NVMADR_16 = 0;
    sbit  NVMADR_16_bit at NVMADRU.B0;

    // NVMKEY bits
    const register unsigned short int KEY_7 = 7;
    sbit  KEY_7_bit at NVMKEY.B7;
    const register unsigned short int KEY_6 = 6;
    sbit  KEY_6_bit at NVMKEY.B6;
    const register unsigned short int KEY_5 = 5;
    sbit  KEY_5_bit at NVMKEY.B5;
    const register unsigned short int KEY_4 = 4;
    sbit  KEY_4_bit at NVMKEY.B4;
    const register unsigned short int KEY_3 = 3;
    sbit  KEY_3_bit at NVMKEY.B3;
    const register unsigned short int KEY_2 = 2;
    sbit  KEY_2_bit at NVMKEY.B2;
    const register unsigned short int KEY_1 = 1;
    sbit  KEY_1_bit at NVMKEY.B1;
    const register unsigned short int KEY_0 = 0;
    sbit  KEY_0_bit at NVMKEY.B0;

    // PMD1 bits
    const register unsigned short int T5MD = 15;
    sbit  T5MD_bit at PMD1.B15;
    const register unsigned short int T4MD = 14;
    sbit  T4MD_bit at PMD1.B14;
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int I2CMD = 7;
    sbit  I2CMD_bit at PMD1.B7;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI2MD = 4;
    sbit  SPI2MD_bit at PMD1.B4;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int C2MD = 2;
    sbit  C2MD_bit at PMD1.B2;
    const register unsigned short int C1MD = 1;
    sbit  C1MD_bit at PMD1.B1;
    const register unsigned short int ADCM = 0;
    sbit  ADCM_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC8MD = 15;
    sbit  IC8MD_bit at PMD2.B15;
    const register unsigned short int IC7MD = 14;
    sbit  IC7MD_bit at PMD2.B14;
    const register unsigned short int IC6MD = 13;
    sbit  IC6MD_bit at PMD2.B13;
    const register unsigned short int IC5MD = 12;
    sbit  IC5MD_bit at PMD2.B12;
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int OC8MD = 7;
    sbit  OC8MD_bit at PMD2.B7;
    const register unsigned short int OC7MD = 6;
    sbit  OC7MD_bit at PMD2.B6;
    const register unsigned short int OC6MD = 5;
    sbit  OC6MD_bit at PMD2.B5;
    const register unsigned short int OC5MD = 4;
    sbit  OC5MD_bit at PMD2.B4;
    const register unsigned short int OC4MD = 3;
    sbit  OC4MD_bit at PMD2.B3;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;

    // Start of structures implementation for backward compatibility

// backward compatibility for SRBITS
    typedef struct tagSRBITS {
      union {
        struct {
          unsigned C:1;
          unsigned Z:1;
          unsigned OV:1;
          unsigned N:1;
          unsigned RA:1;
          unsigned IPL:3;
          unsigned DC:1;
          unsigned DA:1;
          unsigned SAB:1;
          unsigned OAB:1;
          unsigned SB:1;
          unsigned SA:1;
          unsigned OB:1;
          unsigned OA:1;
        };
        struct {
          unsigned :5;
          unsigned IPL0:1;
          unsigned IPL1:1;
          unsigned IPL2:1;
        };
      };
} typeSRBITS;
sfr volatile typeSRBITS SRbits absolute 0x042;

// backward compatibility for CORCONBITS
    typedef struct tagCORCONBITS {
      union {
        struct {
          unsigned IF:1;
          unsigned RND:1;
          unsigned PSV:1;
          unsigned IPL3:1;
          unsigned ACCSAT:1;
          unsigned SATDW:1;
          unsigned SATB:1;
          unsigned SATA:1;
          unsigned DL:3;
          unsigned EDT:1;
          unsigned US:1;
        };
        struct {
          unsigned :8;
          unsigned DL0:1;
          unsigned DL1:1;
          unsigned DL2:1;
        };
      };
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x044;

// backward compatibility for MODCONBITS
    typedef struct tagMODCONBITS {
      union {
        struct {
          unsigned XWM:4;
          unsigned YWM:4;
          unsigned BWM:4;
          unsigned :2;
          unsigned YMODEN:1;
          unsigned XMODEN:1;
        };
        struct {
          unsigned XWM0:1;
          unsigned XWM1:1;
          unsigned XWM2:1;
          unsigned XWM3:1;
          unsigned YWM0:1;
          unsigned YWM1:1;
          unsigned YWM2:1;
          unsigned YWM3:1;
          unsigned BWM0:1;
          unsigned BWM1:1;
          unsigned BWM2:1;
          unsigned BWM3:1;
        };
      };
} typeMODCONBITS;
sfr volatile typeMODCONBITS MODCONbits absolute 0x046;

// backward compatibility for XBREVBITS
    typedef struct tagXBREVBITS {
      union {
        struct {
          unsigned XB:15;
          unsigned BREN:1;
        };
        struct {
          unsigned XB0:1;
          unsigned XB1:1;
          unsigned XB2:1;
          unsigned XB3:1;
          unsigned XB4:1;
          unsigned XB5:1;
          unsigned XB6:1;
          unsigned XB7:1;
          unsigned XB8:1;
          unsigned XB9:1;
          unsigned XB10:1;
          unsigned XB11:1;
          unsigned XB12:1;
          unsigned XB13:1;
          unsigned XB14:1;
        };
      };
} typeXBREVBITS;
sfr volatile typeXBREVBITS XBREVbits absolute 0x050;

// backward compatibility for DISICNTBITS
    typedef struct tagDISICNTBITS {
      unsigned DISICNT:14;
} typeDISICNTBITS;
sfr volatile typeDISICNTBITS DISICNTbits absolute 0x052;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned :3;
      unsigned COVTE:1;
      unsigned OVBTE:1;
      unsigned OVATE:1;
      unsigned :4;
      unsigned NSTDIS:1;
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x080;

// backward compatibility for INTCON2BITS
    typedef struct tagINTCON2BITS {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned INT3EP:1;
      unsigned INT4EP:1;
      unsigned :9;
      unsigned DISI:1;
      unsigned ALTIVT:1;
} typeINTCON2BITS;
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x082;

// backward compatibility for IFS0BITS
    typedef struct tagIFS0BITS {
      unsigned INT0IF:1;
      unsigned IC1IF:1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADIF:1;
      unsigned NVMIF:1;
      unsigned SI2CIF:1;
      unsigned MI2CIF:1;
      unsigned CNIF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned INT1IF:1;
      unsigned IC7IF:1;
      unsigned IC8IF:1;
      unsigned OC3IF:1;
      unsigned OC4IF:1;
      unsigned T4IF:1;
      unsigned T5IF:1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
      unsigned SPI2IF:1;
      unsigned C1IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
      unsigned IC5IF:1;
      unsigned IC6IF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned OC5IF:1;
      unsigned OC6IF:1;
      unsigned OC7IF:1;
      unsigned OC8IF:1;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned C2IF:1;
      unsigned :3;
      unsigned LVDIF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADIE:1;
      unsigned NVMIE:1;
      unsigned SI2CIE:1;
      unsigned MI2CIE:1;
      unsigned CNIE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x08C;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned INT1IE:1;
      unsigned IC7IE:1;
      unsigned IC8IE:1;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
      unsigned SPI2IE:1;
      unsigned C1IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
      unsigned IC5IE:1;
      unsigned IC6IE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x08E;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned OC5IE:1;
      unsigned OC6IE:1;
      unsigned OC7IE:1;
      unsigned OC8IE:1;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned C2IE:1;
      unsigned :3;
      unsigned LVDIE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x090;

// backward compatibility for IPC0BITS
    typedef struct tagIPC0BITS {
      union {
        struct {
          unsigned INT0IP:3;
          unsigned :1;
          unsigned IC1IP:3;
          unsigned :1;
          unsigned OC1IP:3;
          unsigned :1;
          unsigned T1IP:3;
        };
        struct {
          unsigned INT0IP0:1;
          unsigned INT0IP1:1;
          unsigned INT0IP2:1;
          unsigned :1;
          unsigned IC1IP0:1;
          unsigned IC1IP1:1;
          unsigned IC1IP2:1;
          unsigned :1;
          unsigned OC1IP0:1;
          unsigned OC1IP1:1;
          unsigned OC1IP2:1;
          unsigned :1;
          unsigned T1IP0:1;
          unsigned T1IP1:1;
          unsigned T1IP2:1;
        };
      };
} typeIPC0BITS;
sfr volatile typeIPC0BITS IPC0bits absolute 0x094;

// backward compatibility for IPC1BITS
    typedef struct tagIPC1BITS {
      union {
        struct {
          unsigned IC2IP:3;
          unsigned :1;
          unsigned OC2IP:3;
          unsigned :1;
          unsigned T2IP:3;
          unsigned :1;
          unsigned T3IP:3;
        };
        struct {
          unsigned IC2IP0:1;
          unsigned IC2IP1:1;
          unsigned IC2IP2:1;
          unsigned :1;
          unsigned OC2IP0:1;
          unsigned OC2IP1:1;
          unsigned OC2IP2:1;
          unsigned :1;
          unsigned T2IP0:1;
          unsigned T2IP1:1;
          unsigned T2IP2:1;
          unsigned :1;
          unsigned T3IP0:1;
          unsigned T3IP1:1;
          unsigned T3IP2:1;
        };
      };
} typeIPC1BITS;
sfr volatile typeIPC1BITS IPC1bits absolute 0x096;

// backward compatibility for IPC2BITS
    typedef struct tagIPC2BITS {
      union {
        struct {
          unsigned SPI1IP:3;
          unsigned :1;
          unsigned U1RXIP:3;
          unsigned :1;
          unsigned U1TXIP:3;
          unsigned :1;
          unsigned ADIP:3;
        };
        struct {
          unsigned SPI1IP0:1;
          unsigned SPI1IP1:1;
          unsigned SPI1IP2:1;
          unsigned :1;
          unsigned U1RXIP0:1;
          unsigned U1RXIP1:1;
          unsigned U1RXIP2:1;
          unsigned :1;
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned ADIP0:1;
          unsigned ADIP1:1;
          unsigned ADIP2:1;
        };
      };
} typeIPC2BITS;
sfr volatile typeIPC2BITS IPC2bits absolute 0x098;

// backward compatibility for IPC3BITS
    typedef struct tagIPC3BITS {
      union {
        struct {
          unsigned NVMIP:3;
          unsigned :1;
          unsigned SI2CIP:3;
          unsigned :1;
          unsigned MI2CIP:3;
          unsigned :1;
          unsigned CNIP:3;
        };
        struct {
          unsigned NVMIP0:1;
          unsigned NVMIP1:1;
          unsigned NVMIP2:1;
          unsigned :1;
          unsigned SI2CIP0:1;
          unsigned SI2CIP1:1;
          unsigned SI2CIP2:1;
          unsigned :1;
          unsigned MI2CIP0:1;
          unsigned MI2CIP1:1;
          unsigned MI2CIP2:1;
          unsigned :1;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x09A;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned INT1IP:3;
          unsigned :1;
          unsigned IC7IP:3;
          unsigned :1;
          unsigned IC8IP:3;
          unsigned :1;
          unsigned OC3IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
          unsigned :1;
          unsigned IC7IP0:1;
          unsigned IC7IP1:1;
          unsigned IC7IP2:1;
          unsigned :1;
          unsigned IC8IP0:1;
          unsigned IC8IP1:1;
          unsigned IC8IP2:1;
          unsigned :1;
          unsigned OC3IP0:1;
          unsigned OC3IP1:1;
          unsigned OC3IP2:1;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x09C;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned OC4IP:3;
          unsigned :1;
          unsigned T4IP:3;
          unsigned :1;
          unsigned T5IP:3;
          unsigned :1;
          unsigned INT2IP:3;
        };
        struct {
          unsigned OC4IP0:1;
          unsigned OC4IP1:1;
          unsigned OC4IP2:1;
          unsigned :1;
          unsigned T4IP0:1;
          unsigned T4IP1:1;
          unsigned T4IP2:1;
          unsigned :1;
          unsigned T5IP0:1;
          unsigned T5IP1:1;
          unsigned T5IP2:1;
          unsigned :1;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x09E;

// backward compatibility for IPC6BITS
    typedef struct tagIPC6BITS {
      union {
        struct {
          unsigned U2RXIP:3;
          unsigned :1;
          unsigned U2TXIP:3;
          unsigned :1;
          unsigned SPI2IP:3;
          unsigned :1;
          unsigned C1IP:3;
        };
        struct {
          unsigned U2RXIP0:1;
          unsigned U2RXIP1:1;
          unsigned U2RXIP2:1;
          unsigned :1;
          unsigned U2TXIP0:1;
          unsigned U2TXIP1:1;
          unsigned U2TXIP2:1;
          unsigned :1;
          unsigned SPI2IP0:1;
          unsigned SPI2IP1:1;
          unsigned SPI2IP2:1;
          unsigned :1;
          unsigned C1IP0:1;
          unsigned C1IP1:1;
          unsigned C1IP2:1;
        };
      };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0x0A0;

// backward compatibility for IPC7BITS
    typedef struct tagIPC7BITS {
      union {
        struct {
          unsigned IC3IP:3;
          unsigned :1;
          unsigned IC4IP:3;
          unsigned :1;
          unsigned IC5IP:3;
          unsigned :1;
          unsigned IC6IP:3;
        };
        struct {
          unsigned IC3IP0:1;
          unsigned IC3IP1:1;
          unsigned IC3IP2:1;
          unsigned :1;
          unsigned IC4IP0:1;
          unsigned IC4IP1:1;
          unsigned IC4IP2:1;
          unsigned :1;
          unsigned IC5IP0:1;
          unsigned IC5IP1:1;
          unsigned IC5IP2:1;
          unsigned :1;
          unsigned IC6IP0:1;
          unsigned IC6IP1:1;
          unsigned IC6IP2:1;
        };
      };
} typeIPC7BITS;
sfr volatile typeIPC7BITS IPC7bits absolute 0x0A2;

// backward compatibility for IPC8BITS
    typedef struct tagIPC8BITS {
      union {
        struct {
          unsigned OC5IP:3;
          unsigned :1;
          unsigned OC6IP:3;
          unsigned :1;
          unsigned OC7IP:3;
          unsigned :1;
          unsigned OC8IP:3;
        };
        struct {
          unsigned OC5IP0:1;
          unsigned OC5IP1:1;
          unsigned OC5IP2:1;
          unsigned :1;
          unsigned OC6IP0:1;
          unsigned OC6IP1:1;
          unsigned OC6IP2:1;
          unsigned :1;
          unsigned OC7IP0:1;
          unsigned OC7IP1:1;
          unsigned OC7IP2:1;
          unsigned :1;
          unsigned OC8IP0:1;
          unsigned OC8IP1:1;
          unsigned OC8IP2:1;
        };
      };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0x0A4;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned INT3IP:3;
          unsigned :1;
          unsigned INT4IP:3;
          unsigned :1;
          unsigned C2IP:3;
        };
        struct {
          unsigned INT3IP0:1;
          unsigned INT3IP1:1;
          unsigned INT3IP2:1;
          unsigned :1;
          unsigned INT4IP0:1;
          unsigned INT4IP1:1;
          unsigned INT4IP2:1;
          unsigned :1;
          unsigned C2IP0:1;
          unsigned C2IP1:1;
          unsigned C2IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0A6;

// backward compatibility for IPC10BITS
    typedef struct tagIPC10BITS {
      union {
        struct {
          unsigned :8;
          unsigned LVDIP:3;
        };
        struct {
          unsigned :8;
          unsigned LVDIP0:1;
          unsigned LVDIP1:1;
          unsigned LVDIP2:1;
        };
      };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0x0A8;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:6;
          unsigned :2;
          unsigned ILR:4;
          unsigned :1;
          unsigned VHOLD:1;
          unsigned TMODE:1;
          unsigned IRQTOCPU:1;
        };
        struct {
          unsigned VECNUM0:1;
          unsigned VECNUM1:1;
          unsigned VECNUM2:1;
          unsigned VECNUM3:1;
          unsigned VECNUM4:1;
          unsigned VECNUM5:1;
          unsigned :2;
          unsigned ILR0:1;
          unsigned ILR1:1;
          unsigned ILR2:1;
          unsigned ILR3:1;
        };
      };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x0B0;

// backward compatibility for CNEN1BITS
    typedef struct tagCNEN1BITS {
      unsigned CN0IE:1;
      unsigned CN1IE:1;
      unsigned CN2IE:1;
      unsigned CN3IE:1;
      unsigned CN4IE:1;
      unsigned CN5IE:1;
      unsigned CN6IE:1;
      unsigned CN7IE:1;
      unsigned CN8IE:1;
      unsigned CN9IE:1;
      unsigned CN10IE:1;
      unsigned CN11IE:1;
      unsigned CN12IE:1;
      unsigned CN13IE:1;
      unsigned CN14IE:1;
      unsigned CN15IE:1;
} typeCNEN1BITS;
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x0C0;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned CN16IE:1;
      unsigned CN17IE:1;
      unsigned CN18IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x0C2;

// backward compatibility for CNPU1BITS
    typedef struct tagCNPU1BITS {
      unsigned CN0PUE:1;
      unsigned CN1PUE:1;
      unsigned CN2PUE:1;
      unsigned CN3PUE:1;
      unsigned CN4PUE:1;
      unsigned CN5PUE:1;
      unsigned CN6PUE:1;
      unsigned CN7PUE:1;
      unsigned CN8PUE:1;
      unsigned CN9PUE:1;
      unsigned CN10PUE:1;
      unsigned CN11PUE:1;
      unsigned CN12PUE:1;
      unsigned CN13PUE:1;
      unsigned CN14PUE:1;
      unsigned CN15PUE:1;
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x0C4;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned CN16PUE:1;
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x0C6;

// backward compatibility for T1CONBITS
    typedef struct tagT1CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned TSYNC:1;
          unsigned :1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT1CONBITS;
sfr volatile typeT1CONBITS T1CONbits absolute 0x104;

// backward compatibility for T2CONBITS
    typedef struct tagT2CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :1;
          unsigned T32:1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT2CONBITS;
sfr volatile typeT2CONBITS T2CONbits absolute 0x110;

// backward compatibility for T3CONBITS
    typedef struct tagT3CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :2;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT3CONBITS;
sfr volatile typeT3CONBITS T3CONbits absolute 0x112;

// backward compatibility for T4CONBITS
    typedef struct tagT4CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :1;
          unsigned T32:1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT4CONBITS;
sfr volatile typeT4CONBITS T4CONbits absolute 0x11E;

// backward compatibility for T5CONBITS
    typedef struct tagT5CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :2;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT5CONBITS;
sfr volatile typeT5CONBITS T5CONbits absolute 0x120;

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x140;
sfr volatile typeIC IC2 absolute 0x144;
sfr volatile typeIC IC3 absolute 0x148;
sfr volatile typeIC IC4 absolute 0x14C;
sfr volatile typeIC IC5 absolute 0x150;
sfr volatile typeIC IC6 absolute 0x154;
sfr volatile typeIC IC7 absolute 0x158;
sfr volatile typeIC IC8 absolute 0x15C;

// backward compatibility for IC1CONBITS
    typedef struct tagIC1CONBITS {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned ICTMR:1;
      unsigned :5;
      unsigned ICSIDL:1;
} typeIC1CONBITS;
sfr volatile typeIC1CONBITS IC1CONbits absolute 0x142;

// backward compatibility for IC2CONBITS
    typedef struct tagIC2CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC2CONBITS;
sfr volatile typeIC2CONBITS IC2CONbits absolute 0x146;

// backward compatibility for IC3CONBITS
    typedef struct tagIC3CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC3CONBITS;
sfr volatile typeIC3CONBITS IC3CONbits absolute 0x14A;

// backward compatibility for IC4CONBITS
    typedef struct tagIC4CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC4CONBITS;
sfr volatile typeIC4CONBITS IC4CONbits absolute 0x14E;

// backward compatibility for IC5CONBITS
    typedef struct tagIC5CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC5CONBITS;
sfr volatile typeIC5CONBITS IC5CONbits absolute 0x152;

// backward compatibility for IC6CONBITS
    typedef struct tagIC6CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC6CONBITS;
sfr volatile typeIC6CONBITS IC6CONbits absolute 0x156;

// backward compatibility for IC7CONBITS
    typedef struct tagIC7CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC7CONBITS;
sfr volatile typeIC7CONBITS IC7CONbits absolute 0x15A;

// backward compatibility for IC8CONBITS
    typedef struct tagIC8CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC8CONBITS;
sfr volatile typeIC8CONBITS IC8CONbits absolute 0x15E;

// backward compatibility for OC
    typedef struct tagOC {
            unsigned int ocxrs;
            unsigned int ocxr;
            unsigned int ocxcon;
} typeOC;
sfr volatile typeOC OC1 absolute 0x180;
sfr volatile typeOC OC2 absolute 0x186;
sfr volatile typeOC OC3 absolute 0x18C;
sfr volatile typeOC OC4 absolute 0x192;
sfr volatile typeOC OC5 absolute 0x198;
sfr volatile typeOC OC6 absolute 0x19E;
sfr volatile typeOC OC7 absolute 0x1A4;
sfr volatile typeOC OC8 absolute 0x1AA;

// backward compatibility for OC1CONBITS
    typedef struct tagOC1CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC1CONBITS;
sfr volatile typeOC1CONBITS OC1CONbits absolute 0x184;

// backward compatibility for OC2CONBITS
    typedef struct tagOC2CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC2CONBITS;
sfr volatile typeOC2CONBITS OC2CONbits absolute 0x18A;

// backward compatibility for OC3CONBITS
    typedef struct tagOC3CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC3CONBITS;
sfr volatile typeOC3CONBITS OC3CONbits absolute 0x190;

// backward compatibility for OC4CONBITS
    typedef struct tagOC4CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC4CONBITS;
sfr volatile typeOC4CONBITS OC4CONbits absolute 0x196;

// backward compatibility for OC5CONBITS
    typedef struct tagOC5CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC5CONBITS;
sfr volatile typeOC5CONBITS OC5CONbits absolute 0x19C;

// backward compatibility for OC6CONBITS
    typedef struct tagOC6CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC6CONBITS;
sfr volatile typeOC6CONBITS OC6CONbits absolute 0x1A2;

// backward compatibility for OC7CONBITS
    typedef struct tagOC7CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC7CONBITS;
sfr volatile typeOC7CONBITS OC7CONbits absolute 0x1A8;

// backward compatibility for OC8CONBITS
    typedef struct tagOC8CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC8CONBITS;
sfr volatile typeOC8CONBITS OC8CONbits absolute 0x1AE;

// backward compatibility for I2CRCVBITS
    typedef struct tagI2CRCVBITS {
      union {
        struct {
          unsigned I2CRCV:8;
        };
        struct {
          unsigned I2CRCV0:1;
          unsigned I2CRCV1:1;
          unsigned I2CRCV2:1;
          unsigned I2CRCV3:1;
          unsigned I2CRCV4:1;
          unsigned I2CRCV5:1;
          unsigned I2CRCV6:1;
          unsigned I2CRCV7:1;
        };
      };
} typeI2CRCVBITS;
sfr volatile typeI2CRCVBITS I2CRCVbits absolute 0x200;

// backward compatibility for I2CTRNBITS
    typedef struct tagI2CTRNBITS {
      union {
        struct {
          unsigned I2CTRN:8;
        };
        struct {
          unsigned I2CTRN0:1;
          unsigned I2CTRN1:1;
          unsigned I2CTRN2:1;
          unsigned I2CTRN3:1;
          unsigned I2CTRN4:1;
          unsigned I2CTRN5:1;
          unsigned I2CTRN6:1;
          unsigned I2CTRN7:1;
        };
      };
} typeI2CTRNBITS;
sfr volatile typeI2CTRNBITS I2CTRNbits absolute 0x202;

// backward compatibility for I2CBRGBITS
    typedef struct tagI2CBRGBITS {
      unsigned I2CBRG:9;
} typeI2CBRGBITS;
sfr volatile typeI2CBRGBITS I2CBRGbits absolute 0x204;

// backward compatibility for I2CCONBITS
    typedef struct tagI2CCONBITS {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned STREN:1;
      unsigned GCEN:1;
      unsigned SMEN:1;
      unsigned DISSLW:1;
      unsigned A10M:1;
      unsigned IPMIEN:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
} typeI2CCONBITS;
sfr volatile typeI2CCONBITS I2CCONbits absolute 0x206;

// backward compatibility for I2CSTATBITS
    typedef struct tagI2CSTATBITS {
      union {
        struct {
          unsigned TBF:1;
          unsigned RBF:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
          unsigned I2COV:1;
          unsigned IWCOL:1;
          unsigned ADD10:1;
          unsigned GCSTAT:1;
          unsigned BCL:1;
          unsigned :3;
          unsigned TRSTAT:1;
          unsigned ACKSTAT:1;
        };
        struct {
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
      };
} typeI2CSTATBITS;
sfr volatile typeI2CSTATBITS I2CSTATbits absolute 0x208;

// backward compatibility for I2CADDBITS
    typedef struct tagI2CADDBITS {
      unsigned I2CADD:10;
} typeI2CADDBITS;
sfr volatile typeI2CADDBITS I2CADDbits absolute 0x20A;

// backward compatibility for UART
    typedef struct tagUART {
            unsigned int uxmode;
            unsigned int uxsta;
            unsigned int uxtxreg;
            unsigned int uxrxreg;
            unsigned int uxbrg;
} typeUART;
sfr volatile typeUART UART1 absolute 0x20C;
sfr volatile typeUART UART2 absolute 0x216;

// backward compatibility for U1MODEBITS
    typedef struct tagU1MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned :2;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned :2;
          unsigned ALTIO:1;
          unsigned :2;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
        };
      };
} typeU1MODEBITS;
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x20C;

// backward compatibility for U1STABITS
    typedef struct tagU1STABITS {
      union {
        struct {
          unsigned URXDA:1;
          unsigned OERR:1;
          unsigned FERR:1;
          unsigned PERR:1;
          unsigned RIDLE:1;
          unsigned ADDEN:1;
          unsigned URXISEL:2;
          unsigned TRMT:1;
          unsigned UTXBF:1;
          unsigned UTXEN:1;
          unsigned UTXBRK:1;
          unsigned :3;
          unsigned UTXISEL:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU1STABITS;
sfr volatile typeU1STABITS U1STAbits absolute 0x20E;

// backward compatibility for U1TXREGBITS
    typedef struct tagU1TXREGBITS {
      union {
        struct {
          unsigned UTXREG0:1;
          unsigned UTXREG1:1;
          unsigned UTXREG2:1;
          unsigned UTXREG3:1;
          unsigned UTXREG4:1;
          unsigned UTXREG5:1;
          unsigned UTXREG6:1;
          unsigned UTXREG7:1;
          unsigned UTXREG8:1;
        };
        struct {
          unsigned :8;
          unsigned UTX8:1;
        };
      };
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x210;

// backward compatibility for U1RXREGBITS
    typedef struct tagU1RXREGBITS {
      union {
        struct {
          unsigned URXREG0:1;
          unsigned URXREG1:1;
          unsigned URXREG2:1;
          unsigned URXREG3:1;
          unsigned URXREG4:1;
          unsigned URXREG5:1;
          unsigned URXREG6:1;
          unsigned URXREG7:1;
          unsigned URXREG8:1;
        };
        struct {
          unsigned :8;
          unsigned URX8:1;
        };
      };
} typeU1RXREGBITS;
sfr volatile typeU1RXREGBITS U1RXREGbits absolute 0x212;

// backward compatibility for U2MODEBITS
    typedef struct tagU2MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned :2;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned :5;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
        };
      };
} typeU2MODEBITS;
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x216;

// backward compatibility for U2STABITS
    typedef struct tagU2STABITS {
      union {
        struct {
          unsigned URXDA:1;
          unsigned OERR:1;
          unsigned FERR:1;
          unsigned PERR:1;
          unsigned RIDLE:1;
          unsigned ADDEN:1;
          unsigned URXISEL:2;
          unsigned TRMT:1;
          unsigned UTXBF:1;
          unsigned UTXEN:1;
          unsigned UTXBRK:1;
          unsigned :3;
          unsigned UTXISEL:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU2STABITS;
sfr volatile typeU2STABITS U2STAbits absolute 0x218;

// backward compatibility for U2TXREGBITS
    typedef struct tagU2TXREGBITS {
      union {
        struct {
          unsigned UTXREG0:1;
          unsigned UTXREG1:1;
          unsigned UTXREG2:1;
          unsigned UTXREG3:1;
          unsigned UTXREG4:1;
          unsigned UTXREG5:1;
          unsigned UTXREG6:1;
          unsigned UTXREG7:1;
          unsigned UTXREG8:1;
        };
        struct {
          unsigned :8;
          unsigned UTX8:1;
        };
      };
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x21A;

// backward compatibility for U2RXREGBITS
    typedef struct tagU2RXREGBITS {
      union {
        struct {
          unsigned URXREG0:1;
          unsigned URXREG1:1;
          unsigned URXREG2:1;
          unsigned URXREG3:1;
          unsigned URXREG4:1;
          unsigned URXREG5:1;
          unsigned URXREG6:1;
          unsigned URXREG7:1;
          unsigned URXREG8:1;
        };
        struct {
          unsigned :8;
          unsigned URX8:1;
        };
      };
} typeU2RXREGBITS;
sfr volatile typeU2RXREGBITS U2RXREGbits absolute 0x21C;

// backward compatibility for SPI
    typedef struct tagSPI {
            unsigned int spixstat;
            unsigned int spixcon1;
            unsigned int spixcon2;
            unsigned int unused;
            unsigned int spixbuf;
} typeSPI;
sfr volatile typeSPI SPI1 absolute 0x220;
sfr volatile typeSPI SPI2 absolute 0x226;

// backward compatibility for SPI1STATBITS
    typedef struct tagSPI1STATBITS {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
} typeSPI1STATBITS;
sfr volatile typeSPI1STATBITS SPI1STATbits absolute 0x220;

// backward compatibility for SPI1CONBITS
    typedef struct tagSPI1CONBITS {
      union {
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned :1;
          unsigned SPIFSD:1;
          unsigned FRMEN:1;
        };
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
        };
      };
} typeSPI1CONBITS;
sfr volatile typeSPI1CONBITS SPI1CONbits absolute 0x222;

// backward compatibility for SPI2STATBITS
    typedef struct tagSPI2STATBITS {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
} typeSPI2STATBITS;
sfr volatile typeSPI2STATBITS SPI2STATbits absolute 0x226;

// backward compatibility for SPI2CONBITS
    typedef struct tagSPI2CONBITS {
      union {
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned :1;
          unsigned SPIFSD:1;
          unsigned FRMEN:1;
        };
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
        };
      };
} typeSPI2CONBITS;
sfr volatile typeSPI2CONBITS SPI2CONbits absolute 0x228;

// backward compatibility for ADCON1BITS
    typedef struct tagADCON1BITS {
      union {
        struct {
          unsigned DONE:1;
          unsigned SAMP:1;
          unsigned ASAM:1;
          unsigned :2;
          unsigned SSRC:3;
          unsigned FORM:2;
          unsigned :3;
          unsigned ADSIDL:1;
          unsigned :1;
          unsigned ADON:1;
        };
        struct {
          unsigned :5;
          unsigned SSRC0:1;
          unsigned SSRC1:1;
          unsigned SSRC2:1;
          unsigned FORM0:1;
          unsigned FORM1:1;
        };
      };
} typeADCON1BITS;
sfr volatile typeADCON1BITS ADCON1bits absolute 0x2A0;

// backward compatibility for ADCON2BITS
    typedef struct tagADCON2BITS {
      union {
        struct {
          unsigned ALTS:1;
          unsigned BUFM:1;
          unsigned SMPI:4;
          unsigned :1;
          unsigned BUFS:1;
          unsigned :2;
          unsigned CSCNA:1;
          unsigned :2;
          unsigned VCFG:3;
        };
        struct {
          unsigned :2;
          unsigned SMPI0:1;
          unsigned SMPI1:1;
          unsigned SMPI2:1;
          unsigned SMPI3:1;
          unsigned :7;
          unsigned VCFG0:1;
          unsigned VCFG1:1;
          unsigned VCFG2:1;
        };
      };
} typeADCON2BITS;
sfr volatile typeADCON2BITS ADCON2bits absolute 0x2A2;

// backward compatibility for ADCON3BITS
    typedef struct tagADCON3BITS {
      union {
        struct {
          unsigned ADCS:6;
          unsigned :1;
          unsigned ADRC:1;
          unsigned SAMC:5;
        };
        struct {
          unsigned ADCS0:1;
          unsigned ADCS1:1;
          unsigned ADCS2:1;
          unsigned ADCS3:1;
          unsigned ADCS4:1;
          unsigned ADCS5:1;
          unsigned :2;
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
        };
      };
} typeADCON3BITS;
sfr volatile typeADCON3BITS ADCON3bits absolute 0x2A4;

// backward compatibility for ADCHSBITS
    typedef struct tagADCHSBITS {
      union {
        struct {
          unsigned CH0SA:4;
          unsigned CH0NA:1;
          unsigned :3;
          unsigned CH0SB:4;
          unsigned CH0NB:1;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned :4;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
        };
      };
} typeADCHSBITS;
sfr volatile typeADCHSBITS ADCHSbits absolute 0x2A6;

// backward compatibility for ADPCFGBITS
    typedef struct tagADPCFGBITS {
      unsigned PCFG0:1;
      unsigned PCFG1:1;
      unsigned PCFG2:1;
      unsigned PCFG3:1;
      unsigned PCFG4:1;
      unsigned PCFG5:1;
      unsigned PCFG6:1;
      unsigned PCFG7:1;
      unsigned PCFG8:1;
      unsigned PCFG9:1;
      unsigned PCFG10:1;
      unsigned PCFG11:1;
      unsigned PCFG12:1;
      unsigned PCFG13:1;
      unsigned PCFG14:1;
      unsigned PCFG15:1;
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x2A8;

// backward compatibility for ADCSSLBITS
    typedef struct tagADCSSLBITS {
      unsigned CSSL0:1;
      unsigned CSSL1:1;
      unsigned CSSL2:1;
      unsigned CSSL3:1;
      unsigned CSSL4:1;
      unsigned CSSL5:1;
      unsigned CSSL6:1;
      unsigned CSSL7:1;
      unsigned CSSL8:1;
      unsigned CSSL9:1;
      unsigned CSSL10:1;
      unsigned CSSL11:1;
      unsigned CSSL12:1;
      unsigned CSSL13:1;
      unsigned CSSL14:1;
      unsigned CSSL15:1;
} typeADCSSLBITS;
sfr volatile typeADCSSLBITS ADCSSLbits absolute 0x2AA;

// backward compatibility for TRISBBITS
    typedef struct tagTRISBBITS {
      unsigned TRISB0:1;
      unsigned TRISB1:1;
      unsigned TRISB2:1;
      unsigned TRISB3:1;
      unsigned TRISB4:1;
      unsigned TRISB5:1;
      unsigned TRISB6:1;
      unsigned TRISB7:1;
      unsigned TRISB8:1;
      unsigned TRISB9:1;
      unsigned TRISB10:1;
      unsigned TRISB11:1;
      unsigned TRISB12:1;
      unsigned TRISB13:1;
      unsigned TRISB14:1;
      unsigned TRISB15:1;
} typeTRISBBITS;
sfr volatile typeTRISBBITS TRISBbits absolute 0x2C6;

// backward compatibility for PORTBBITS
    typedef struct tagPORTBBITS {
      unsigned RB0:1;
      unsigned RB1:1;
      unsigned RB2:1;
      unsigned RB3:1;
      unsigned RB4:1;
      unsigned RB5:1;
      unsigned RB6:1;
      unsigned RB7:1;
      unsigned RB8:1;
      unsigned RB9:1;
      unsigned RB10:1;
      unsigned RB11:1;
      unsigned RB12:1;
      unsigned RB13:1;
      unsigned RB14:1;
      unsigned RB15:1;
} typePORTBBITS;
sfr volatile typePORTBBITS PORTBbits absolute 0x2C8;

// backward compatibility for LATBBITS
    typedef struct tagLATBBITS {
      unsigned LATB0:1;
      unsigned LATB1:1;
      unsigned LATB2:1;
      unsigned LATB3:1;
      unsigned LATB4:1;
      unsigned LATB5:1;
      unsigned LATB6:1;
      unsigned LATB7:1;
      unsigned LATB8:1;
      unsigned LATB9:1;
      unsigned LATB10:1;
      unsigned LATB11:1;
      unsigned LATB12:1;
      unsigned LATB13:1;
      unsigned LATB14:1;
      unsigned LATB15:1;
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x2CA;

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned :1;
      unsigned TRISC1:1;
      unsigned TRISC2:1;
      unsigned :10;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
      unsigned TRISC15:1;
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2CC;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
      unsigned :1;
      unsigned RC1:1;
      unsigned RC2:1;
      unsigned :10;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2CE;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
      unsigned :1;
      unsigned LATC1:1;
      unsigned LATC2:1;
      unsigned :10;
      unsigned LATC13:1;
      unsigned LATC14:1;
      unsigned LATC15:1;
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D0;

// backward compatibility for TRISDBITS
    typedef struct tagTRISDBITS {
      unsigned TRISD0:1;
      unsigned TRISD1:1;
      unsigned TRISD2:1;
      unsigned TRISD3:1;
      unsigned TRISD4:1;
      unsigned TRISD5:1;
      unsigned TRISD6:1;
      unsigned TRISD7:1;
      unsigned TRISD8:1;
      unsigned TRISD9:1;
      unsigned TRISD10:1;
      unsigned TRISD11:1;
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0x2D2;

// backward compatibility for PORTDBITS
    typedef struct tagPORTDBITS {
      unsigned RD0:1;
      unsigned RD1:1;
      unsigned RD2:1;
      unsigned RD3:1;
      unsigned RD4:1;
      unsigned RD5:1;
      unsigned RD6:1;
      unsigned RD7:1;
      unsigned RD8:1;
      unsigned RD9:1;
      unsigned RD10:1;
      unsigned RD11:1;
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0x2D4;

// backward compatibility for LATDBITS
    typedef struct tagLATDBITS {
      unsigned LATD0:1;
      unsigned LATD1:1;
      unsigned LATD2:1;
      unsigned LATD3:1;
      unsigned LATD4:1;
      unsigned LATD5:1;
      unsigned LATD6:1;
      unsigned LATD7:1;
      unsigned LATD8:1;
      unsigned LATD9:1;
      unsigned LATD10:1;
      unsigned LATD11:1;
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0x2D6;

// backward compatibility for TRISFBITS
    typedef struct tagTRISFBITS {
      unsigned TRISF0:1;
      unsigned TRISF1:1;
      unsigned TRISF2:1;
      unsigned TRISF3:1;
      unsigned TRISF4:1;
      unsigned TRISF5:1;
      unsigned TRISF6:1;
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0x2DE;

// backward compatibility for PORTFBITS
    typedef struct tagPORTFBITS {
      unsigned RF0:1;
      unsigned RF1:1;
      unsigned RF2:1;
      unsigned RF3:1;
      unsigned RF4:1;
      unsigned RF5:1;
      unsigned RF6:1;
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0x2E0;

// backward compatibility for LATFBITS
    typedef struct tagLATFBITS {
      unsigned LATF0:1;
      unsigned LATF1:1;
      unsigned LATF2:1;
      unsigned LATF3:1;
      unsigned LATF4:1;
      unsigned LATF5:1;
      unsigned LATF6:1;
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0x2E2;

// backward compatibility for TRISGBITS
    typedef struct tagTRISGBITS {
      unsigned TRISG0:1;
      unsigned TRISG1:1;
      unsigned TRISG2:1;
      unsigned TRISG3:1;
      unsigned :2;
      unsigned TRISG6:1;
      unsigned TRISG7:1;
      unsigned TRISG8:1;
      unsigned TRISG9:1;
      unsigned :2;
      unsigned TRISG12:1;
      unsigned TRISG13:1;
      unsigned TRISG14:1;
      unsigned TRISG15:1;
} typeTRISGBITS;
sfr volatile typeTRISGBITS TRISGbits absolute 0x2E4;

// backward compatibility for PORTGBITS
    typedef struct tagPORTGBITS {
      unsigned RG0:1;
      unsigned RG1:1;
      unsigned RG2:1;
      unsigned RG3:1;
      unsigned :2;
      unsigned RG6:1;
      unsigned RG7:1;
      unsigned RG8:1;
      unsigned RG9:1;
      unsigned :2;
      unsigned RG12:1;
      unsigned RG13:1;
      unsigned RG14:1;
      unsigned RG15:1;
} typePORTGBITS;
sfr volatile typePORTGBITS PORTGbits absolute 0x2E6;

// backward compatibility for LATGBITS
    typedef struct tagLATGBITS {
      unsigned LATG0:1;
      unsigned LATG1:1;
      unsigned LATG2:1;
      unsigned LATG3:1;
      unsigned :2;
      unsigned LATG6:1;
      unsigned LATG7:1;
      unsigned LATG8:1;
      unsigned LATG9:1;
      unsigned :2;
      unsigned LATG12:1;
      unsigned LATG13:1;
      unsigned LATG14:1;
      unsigned LATG15:1;
} typeLATGBITS;
sfr volatile typeLATGBITS LATGbits absolute 0x2E8;

// backward compatibility for CAN
    typedef struct tagCAN {
            unsigned int cxrxf0sid;
            unsigned int cxrxf0eidh;
            unsigned int cxrxf0eidl;
            unsigned int reserved0;
            unsigned int cxrxf1sid;
            unsigned int cxrxf1eidh;
            unsigned int cxrxf1eidl;
            unsigned int reserved1;
            unsigned int cxrxf2sid;
            unsigned int cxrxf2eidh;
            unsigned int cxrxf2eidl;
            unsigned int reserved2;
            unsigned int cxrxf3sid;
            unsigned int cxrxf3eidh;
            unsigned int cxrxf3eidl;
            unsigned int reserved3;
            unsigned int cxrxf4sid;
            unsigned int cxrxf4eidh;
            unsigned int cxrxf4eidl;
            unsigned int reserved4;
            unsigned int cxrxf5sid;
            unsigned int cxrxf5eidh;
            unsigned int cxrxf5eidl;
            unsigned int reserved5;
            unsigned int cxrxm0sid;
            unsigned int cxrxm0eidh;
            unsigned int cxrxm0eidl;
            unsigned int reserved6;
            unsigned int cxrxm1sid;
            unsigned int cxrxm1eidh;
            unsigned int cxrxm1eidl;
            unsigned int reserved7;
            unsigned int cxtx2sid;
            unsigned int cxtx2eid;
            unsigned int cxtx2dlc;
            unsigned int cxtx2b1;
            unsigned int cxtx2b2;
            unsigned int cxtx2b3;
            unsigned int cxtx2b4;
            unsigned int cxtx2con;
            unsigned int cxtx1sid;
            unsigned int cxtx1eid;
            unsigned int cxtx1dlc;
            unsigned int cxtx1b1;
            unsigned int cxtx1b2;
            unsigned int cxtx1b3;
            unsigned int cxtx1b4;
            unsigned int cxtx1con;
            unsigned int cxtx0sid;
            unsigned int cxtx0eid;
            unsigned int cxtx0dlc;
            unsigned int cxtx0b1;
            unsigned int cxtx0b2;
            unsigned int cxtx0b3;
            unsigned int cxtx0b4;
            unsigned int cxtx0con;
            unsigned int cxrx1sid;
            unsigned int cxrx1eid;
            unsigned int cxrx1dlc;
            unsigned int cxrx1b1;
            unsigned int cxrx1b2;
            unsigned int cxrx1b3;
            unsigned int cxrx1b4;
            unsigned int cxrx1con;
            unsigned int cxrx0sid;
            unsigned int cxrx0eid;
            unsigned int cxrx0dlc;
            unsigned int cxrx0b1;
            unsigned int cxrx0b2;
            unsigned int cxrx0b3;
            unsigned int cxrx0b4;
            unsigned int cxrx0con;
            unsigned int cxctrl;
            unsigned int cxcfg1;
            unsigned int cxcfg2;
            unsigned int cxintf;
            unsigned int cxinte;
            unsigned int cxec;
            unsigned int reserved8[50];
} typeCAN;
sfr volatile typeCAN CAN1 absolute 0x226;
sfr volatile typeCAN CAN2 absolute 0x226;

// backward compatibility for C1RXF0SIDBITS
    typedef struct tagC1RXF0SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF0SIDBITS;
sfr volatile typeC1RXF0SIDBITS C1RXF0SIDbits absolute 0x300;

// backward compatibility for C1RXF0EIDHBITS
    typedef struct tagC1RXF0EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF0EIDHBITS;
sfr volatile typeC1RXF0EIDHBITS C1RXF0EIDHbits absolute 0x302;

// backward compatibility for C1RXF0EIDLBITS
    typedef struct tagC1RXF0EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF0EIDLBITS;
sfr volatile typeC1RXF0EIDLBITS C1RXF0EIDLbits absolute 0x304;

// backward compatibility for C1RXF1SIDBITS
    typedef struct tagC1RXF1SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF1SIDBITS;
sfr volatile typeC1RXF1SIDBITS C1RXF1SIDbits absolute 0x308;

// backward compatibility for C1RXF1EIDHBITS
    typedef struct tagC1RXF1EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF1EIDHBITS;
sfr volatile typeC1RXF1EIDHBITS C1RXF1EIDHbits absolute 0x30A;

// backward compatibility for C1RXF1EIDLBITS
    typedef struct tagC1RXF1EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF1EIDLBITS;
sfr volatile typeC1RXF1EIDLBITS C1RXF1EIDLbits absolute 0x30C;

// backward compatibility for C1RXF2SIDBITS
    typedef struct tagC1RXF2SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF2SIDBITS;
sfr volatile typeC1RXF2SIDBITS C1RXF2SIDbits absolute 0x310;

// backward compatibility for C1RXF2EIDHBITS
    typedef struct tagC1RXF2EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF2EIDHBITS;
sfr volatile typeC1RXF2EIDHBITS C1RXF2EIDHbits absolute 0x312;

// backward compatibility for C1RXF2EIDLBITS
    typedef struct tagC1RXF2EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF2EIDLBITS;
sfr volatile typeC1RXF2EIDLBITS C1RXF2EIDLbits absolute 0x314;

// backward compatibility for C1RXF3SIDBITS
    typedef struct tagC1RXF3SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF3SIDBITS;
sfr volatile typeC1RXF3SIDBITS C1RXF3SIDbits absolute 0x318;

// backward compatibility for C1RXF3EIDHBITS
    typedef struct tagC1RXF3EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF3EIDHBITS;
sfr volatile typeC1RXF3EIDHBITS C1RXF3EIDHbits absolute 0x31A;

// backward compatibility for C1RXF3EIDLBITS
    typedef struct tagC1RXF3EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF3EIDLBITS;
sfr volatile typeC1RXF3EIDLBITS C1RXF3EIDLbits absolute 0x31C;

// backward compatibility for C1RXF4SIDBITS
    typedef struct tagC1RXF4SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF4SIDBITS;
sfr volatile typeC1RXF4SIDBITS C1RXF4SIDbits absolute 0x320;

// backward compatibility for C1RXF4EIDHBITS
    typedef struct tagC1RXF4EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF4EIDHBITS;
sfr volatile typeC1RXF4EIDHBITS C1RXF4EIDHbits absolute 0x322;

// backward compatibility for C1RXF4EIDLBITS
    typedef struct tagC1RXF4EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF4EIDLBITS;
sfr volatile typeC1RXF4EIDLBITS C1RXF4EIDLbits absolute 0x324;

// backward compatibility for C1RXF5SIDBITS
    typedef struct tagC1RXF5SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXF5SIDBITS;
sfr volatile typeC1RXF5SIDBITS C1RXF5SIDbits absolute 0x328;

// backward compatibility for C1RXF5EIDHBITS
    typedef struct tagC1RXF5EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXF5EIDHBITS;
sfr volatile typeC1RXF5EIDHBITS C1RXF5EIDHbits absolute 0x32A;

// backward compatibility for C1RXF5EIDLBITS
    typedef struct tagC1RXF5EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXF5EIDLBITS;
sfr volatile typeC1RXF5EIDLBITS C1RXF5EIDLbits absolute 0x32C;

// backward compatibility for C1RXM0SIDBITS
    typedef struct tagC1RXM0SIDBITS {
      union {
        struct {
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXM0SIDBITS;
sfr volatile typeC1RXM0SIDBITS C1RXM0SIDbits absolute 0x330;

// backward compatibility for C1RXM0EIDHBITS
    typedef struct tagC1RXM0EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXM0EIDHBITS;
sfr volatile typeC1RXM0EIDHBITS C1RXM0EIDHbits absolute 0x332;

// backward compatibility for C1RXM0EIDLBITS
    typedef struct tagC1RXM0EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXM0EIDLBITS;
sfr volatile typeC1RXM0EIDLBITS C1RXM0EIDLbits absolute 0x334;

// backward compatibility for C1RXM1SIDBITS
    typedef struct tagC1RXM1SIDBITS {
      union {
        struct {
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RXM1SIDBITS;
sfr volatile typeC1RXM1SIDBITS C1RXM1SIDbits absolute 0x338;

// backward compatibility for C1RXM1EIDHBITS
    typedef struct tagC1RXM1EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RXM1EIDHBITS;
sfr volatile typeC1RXM1EIDHBITS C1RXM1EIDHbits absolute 0x33A;

// backward compatibility for C1RXM1EIDLBITS
    typedef struct tagC1RXM1EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1RXM1EIDLBITS;
sfr volatile typeC1RXM1EIDLBITS C1RXM1EIDLbits absolute 0x33C;

// backward compatibility for C1TX2SIDBITS
    typedef struct tagC1TX2SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC1TX2SIDBITS;
sfr volatile typeC1TX2SIDBITS C1TX2SIDbits absolute 0x340;

// backward compatibility for C1TX2EIDBITS
    typedef struct tagC1TX2EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC1TX2EIDBITS;
sfr volatile typeC1TX2EIDBITS C1TX2EIDbits absolute 0x342;

// backward compatibility for C1TX2DLCBITS
    typedef struct tagC1TX2DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC1TX2DLCBITS;
sfr volatile typeC1TX2DLCBITS C1TX2DLCbits absolute 0x344;

// backward compatibility for C1TX2B1BITS
    typedef struct tagC1TX2B1BITS {
      unsigned TXB2D00:1;
      unsigned TXB2D01:1;
      unsigned TXB2D02:1;
      unsigned TXB2D03:1;
      unsigned TXB2D04:1;
      unsigned TXB2D05:1;
      unsigned TXB2D06:1;
      unsigned TXB2D07:1;
      unsigned TXB2D10:1;
      unsigned TXB2D11:1;
      unsigned TXB2D12:1;
      unsigned TXB2D13:1;
      unsigned TXB2D14:1;
      unsigned TXB2D15:1;
      unsigned TXB2D16:1;
      unsigned TXB2D17:1;
} typeC1TX2B1BITS;
sfr volatile typeC1TX2B1BITS C1TX2B1bits absolute 0x346;

// backward compatibility for C1TX2B2BITS
    typedef struct tagC1TX2B2BITS {
      unsigned TXB2D20:1;
      unsigned TXB2D21:1;
      unsigned TXB2D22:1;
      unsigned TXB2D23:1;
      unsigned TXB2D24:1;
      unsigned TXB2D25:1;
      unsigned TXB2D26:1;
      unsigned TXB2D27:1;
      unsigned TXB2D30:1;
      unsigned TXB2D31:1;
      unsigned TXB2D32:1;
      unsigned TXB2D33:1;
      unsigned TXB2D34:1;
      unsigned TXB2D35:1;
      unsigned TXB2D36:1;
      unsigned TXB2D37:1;
} typeC1TX2B2BITS;
sfr volatile typeC1TX2B2BITS C1TX2B2bits absolute 0x348;

// backward compatibility for C1TX2B3BITS
    typedef struct tagC1TX2B3BITS {
      unsigned TX2B2D40:1;
      unsigned TX2B2D41:1;
      unsigned TX2B2D42:1;
      unsigned TX2B2D43:1;
      unsigned TX2B2D44:1;
      unsigned TX2B2D45:1;
      unsigned TX2B2D46:1;
      unsigned TX2B2D47:1;
      unsigned TXB2D50:1;
      unsigned TXB2D51:1;
      unsigned TXB2D52:1;
      unsigned TXB2D53:1;
      unsigned TXB2D54:1;
      unsigned TXB2D55:1;
      unsigned TXB2D56:1;
      unsigned TXB2D57:1;
} typeC1TX2B3BITS;
sfr volatile typeC1TX2B3BITS C1TX2B3bits absolute 0x34A;

// backward compatibility for C1TX2B4BITS
    typedef struct tagC1TX2B4BITS {
      unsigned TX2B2D60:1;
      unsigned TX2B2D61:1;
      unsigned TX2B2D62:1;
      unsigned TX2B2D63:1;
      unsigned TX2B2D64:1;
      unsigned TX2B2D65:1;
      unsigned TX2B2D66:1;
      unsigned TX2B2D67:1;
      unsigned TX2B2D70:1;
      unsigned TX2B2D71:1;
      unsigned TX2B2D72:1;
      unsigned TX2B2D73:1;
      unsigned TX2B2D74:1;
      unsigned TX2B2D75:1;
      unsigned TX2B2D76:1;
      unsigned TX2B2D77:1;
} typeC1TX2B4BITS;
sfr volatile typeC1TX2B4BITS C1TX2B4bits absolute 0x34C;

// backward compatibility for C1TX2CONBITS
    typedef struct tagC1TX2CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC1TX2CONBITS;
sfr volatile typeC1TX2CONBITS C1TX2CONbits absolute 0x34E;

// backward compatibility for C1TX1SIDBITS
    typedef struct tagC1TX1SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC1TX1SIDBITS;
sfr volatile typeC1TX1SIDBITS C1TX1SIDbits absolute 0x350;

// backward compatibility for C1TX1EIDBITS
    typedef struct tagC1TX1EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC1TX1EIDBITS;
sfr volatile typeC1TX1EIDBITS C1TX1EIDbits absolute 0x352;

// backward compatibility for C1TX1DLCBITS
    typedef struct tagC1TX1DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned :3;
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC1TX1DLCBITS;
sfr volatile typeC1TX1DLCBITS C1TX1DLCbits absolute 0x354;

// backward compatibility for C1TX1B1BITS
    typedef struct tagC1TX1B1BITS {
      unsigned TXB1D00:1;
      unsigned TXB1D01:1;
      unsigned TXB1D02:1;
      unsigned TXB1D03:1;
      unsigned TXB1D04:1;
      unsigned TXB1D05:1;
      unsigned TXB1D06:1;
      unsigned TXB1D07:1;
      unsigned TXB1D10:1;
      unsigned TXB1D11:1;
      unsigned TXB1D12:1;
      unsigned TXB1D13:1;
      unsigned TXB1D14:1;
      unsigned TXB1D15:1;
      unsigned TXB1D16:1;
      unsigned TXB1D17:1;
} typeC1TX1B1BITS;
sfr volatile typeC1TX1B1BITS C1TX1B1bits absolute 0x356;

// backward compatibility for C1TX1B2BITS
    typedef struct tagC1TX1B2BITS {
      unsigned TXB1D20:1;
      unsigned TXB1D21:1;
      unsigned TXB1D22:1;
      unsigned TXB1D23:1;
      unsigned TXB1D24:1;
      unsigned TXB1D25:1;
      unsigned TXB1D26:1;
      unsigned TXB1D27:1;
      unsigned TXB1D30:1;
      unsigned TXB1D31:1;
      unsigned TXB1D32:1;
      unsigned TXB1D33:1;
      unsigned TXB1D34:1;
      unsigned TXB1D35:1;
      unsigned TXB1D36:1;
      unsigned TXB1D37:1;
} typeC1TX1B2BITS;
sfr volatile typeC1TX1B2BITS C1TX1B2bits absolute 0x358;

// backward compatibility for C1TX1B3BITS
    typedef struct tagC1TX1B3BITS {
      unsigned TXB1D40:1;
      unsigned TXB1D41:1;
      unsigned TXB1D42:1;
      unsigned TXB1D43:1;
      unsigned TXB1D44:1;
      unsigned TXB1D45:1;
      unsigned TXB1D46:1;
      unsigned TXB1D47:1;
      unsigned TXB1D50:1;
      unsigned TXB1D51:1;
      unsigned TXB1D52:1;
      unsigned TXB1D53:1;
      unsigned TXB1D54:1;
      unsigned TXB1D55:1;
      unsigned TXB1D56:1;
      unsigned TXB1D57:1;
} typeC1TX1B3BITS;
sfr volatile typeC1TX1B3BITS C1TX1B3bits absolute 0x35A;

// backward compatibility for C1TX1B4BITS
    typedef struct tagC1TX1B4BITS {
      unsigned TXB1D60:1;
      unsigned TXB1D61:1;
      unsigned TXB1D62:1;
      unsigned TXB1D63:1;
      unsigned TXB1D64:1;
      unsigned TXB1D65:1;
      unsigned TXB1D66:1;
      unsigned TXB1D67:1;
      unsigned TXB1D70:1;
      unsigned TXB1D71:1;
      unsigned TXB1D72:1;
      unsigned TXB1D73:1;
      unsigned TXB1D74:1;
      unsigned TXB1D75:1;
      unsigned TXB1D76:1;
      unsigned TXB1D77:1;
} typeC1TX1B4BITS;
sfr volatile typeC1TX1B4BITS C1TX1B4bits absolute 0x35C;

// backward compatibility for C1TX1CONBITS
    typedef struct tagC1TX1CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC1TX1CONBITS;
sfr volatile typeC1TX1CONBITS C1TX1CONbits absolute 0x35E;

// backward compatibility for C1TX0SIDBITS
    typedef struct tagC1TX0SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC1TX0SIDBITS;
sfr volatile typeC1TX0SIDBITS C1TX0SIDbits absolute 0x360;

// backward compatibility for C1TX0EIDBITS
    typedef struct tagC1TX0EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC1TX0EIDBITS;
sfr volatile typeC1TX0EIDBITS C1TX0EIDbits absolute 0x362;

// backward compatibility for C1TX0DLCBITS
    typedef struct tagC1TX0DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned :3;
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC1TX0DLCBITS;
sfr volatile typeC1TX0DLCBITS C1TX0DLCbits absolute 0x364;

// backward compatibility for C1TX0B1BITS
    typedef struct tagC1TX0B1BITS {
      unsigned TXB0D00:1;
      unsigned TXB0D01:1;
      unsigned TXB0D02:1;
      unsigned TXB0D03:1;
      unsigned TXB0D04:1;
      unsigned TXB0D05:1;
      unsigned TXB0D06:1;
      unsigned TXB0D07:1;
      unsigned TXB0D10:1;
      unsigned TXB0D11:1;
      unsigned TXB0D12:1;
      unsigned TXB0D13:1;
      unsigned TXB0D14:1;
      unsigned TXB0D15:1;
      unsigned TXB0D16:1;
      unsigned TXB0D17:1;
} typeC1TX0B1BITS;
sfr volatile typeC1TX0B1BITS C1TX0B1bits absolute 0x366;

// backward compatibility for C1TX0B2BITS
    typedef struct tagC1TX0B2BITS {
      unsigned TXB0D20:1;
      unsigned TXB0D21:1;
      unsigned TXB0D22:1;
      unsigned TXB0D23:1;
      unsigned TXB0D24:1;
      unsigned TXB0D25:1;
      unsigned TXB0D26:1;
      unsigned TXB0D27:1;
      unsigned TXB0D30:1;
      unsigned TXB0D31:1;
      unsigned TXB0D32:1;
      unsigned TXB0D33:1;
      unsigned TXB0D34:1;
      unsigned TXB0D35:1;
      unsigned TXB0D36:1;
      unsigned TXB0D37:1;
} typeC1TX0B2BITS;
sfr volatile typeC1TX0B2BITS C1TX0B2bits absolute 0x368;

// backward compatibility for C1TX0B3BITS
    typedef struct tagC1TX0B3BITS {
      unsigned TXB0D40:1;
      unsigned TXB0D41:1;
      unsigned TXB0D42:1;
      unsigned TXB0D43:1;
      unsigned TXB0D44:1;
      unsigned TXB0D45:1;
      unsigned TXB0D46:1;
      unsigned TXB0D47:1;
      unsigned TXB0D50:1;
      unsigned TXB0D51:1;
      unsigned TXB0D52:1;
      unsigned TXB0D53:1;
      unsigned TXB0D54:1;
      unsigned TXB0D55:1;
      unsigned TXB0D56:1;
      unsigned TXB0D57:1;
} typeC1TX0B3BITS;
sfr volatile typeC1TX0B3BITS C1TX0B3bits absolute 0x36A;

// backward compatibility for C1TX0B4BITS
    typedef struct tagC1TX0B4BITS {
      unsigned TXB0D60:1;
      unsigned TXB0D61:1;
      unsigned TXB0D62:1;
      unsigned TXB0D63:1;
      unsigned TXB0D64:1;
      unsigned TXB0D65:1;
      unsigned TXB0D66:1;
      unsigned TXB0D67:1;
      unsigned TXB0D70:1;
      unsigned TXB0D71:1;
      unsigned TXB0D72:1;
      unsigned TXB0D73:1;
      unsigned TXB0D74:1;
      unsigned TXB0D75:1;
      unsigned TXB0D76:1;
      unsigned TXB0D77:1;
} typeC1TX0B4BITS;
sfr volatile typeC1TX0B4BITS C1TX0B4bits absolute 0x36C;

// backward compatibility for C1TX0CONBITS
    typedef struct tagC1TX0CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC1TX0CONBITS;
sfr volatile typeC1TX0CONBITS C1TX0CONbits absolute 0x36E;

// backward compatibility for C1RX1SIDBITS
    typedef struct tagC1RX1SIDBITS {
      union {
        struct {
          unsigned RXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RX1SIDBITS;
sfr volatile typeC1RX1SIDBITS C1RX1SIDbits absolute 0x370;

// backward compatibility for C1RX1EIDBITS
    typedef struct tagC1RX1EIDBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RX1EIDBITS;
sfr volatile typeC1RX1EIDBITS C1RX1EIDbits absolute 0x372;

// backward compatibility for C1RX1DLCBITS
    typedef struct tagC1RX1DLCBITS {
      union {
        struct {
          unsigned DLC:4;
          unsigned RXRB0:1;
          unsigned :3;
          unsigned RXRB1:1;
          unsigned RXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC1RX1DLCBITS;
sfr volatile typeC1RX1DLCBITS C1RX1DLCbits absolute 0x374;

// backward compatibility for C1RX1B1BITS
    typedef struct tagC1RX1B1BITS {
      unsigned TXB1D00:1;
      unsigned TXB1D01:1;
      unsigned TXB1D02:1;
      unsigned TXB1D03:1;
      unsigned TXB1D04:1;
      unsigned TXB1D05:1;
      unsigned TXB1D06:1;
      unsigned TXB1D07:1;
      unsigned TXB1D10:1;
      unsigned TXB1D11:1;
      unsigned TXB1D12:1;
      unsigned TXB1D13:1;
      unsigned TXB1D14:1;
      unsigned TXB1D15:1;
      unsigned TXB1D16:1;
      unsigned TXB1D17:1;
} typeC1RX1B1BITS;
sfr volatile typeC1RX1B1BITS C1RX1B1bits absolute 0x376;

// backward compatibility for C1RX1B2BITS
    typedef struct tagC1RX1B2BITS {
      unsigned TXB1D20:1;
      unsigned TXB1D21:1;
      unsigned TXB1D22:1;
      unsigned TXB1D23:1;
      unsigned TXB1D24:1;
      unsigned TXB1D25:1;
      unsigned TXB1D26:1;
      unsigned TXB1D27:1;
      unsigned TXB1D30:1;
      unsigned TXB1D31:1;
      unsigned TXB1D32:1;
      unsigned TXB1D33:1;
      unsigned TXB1D34:1;
      unsigned TXB1D35:1;
      unsigned TXB1D36:1;
      unsigned TXB1D37:1;
} typeC1RX1B2BITS;
sfr volatile typeC1RX1B2BITS C1RX1B2bits absolute 0x378;

// backward compatibility for C1RX1B3BITS
    typedef struct tagC1RX1B3BITS {
      unsigned TXB1D40:1;
      unsigned TXB1D41:1;
      unsigned TXB1D42:1;
      unsigned TXB1D43:1;
      unsigned TXB1D44:1;
      unsigned TXB1D45:1;
      unsigned TXB1D46:1;
      unsigned TXB1D47:1;
      unsigned TXB1D50:1;
      unsigned TXB1D51:1;
      unsigned TXB1D52:1;
      unsigned TXB1D53:1;
      unsigned TXB1D54:1;
      unsigned TXB1D55:1;
      unsigned TXB1D56:1;
      unsigned TXB1D57:1;
} typeC1RX1B3BITS;
sfr volatile typeC1RX1B3BITS C1RX1B3bits absolute 0x37A;

// backward compatibility for C1RX1B4BITS
    typedef struct tagC1RX1B4BITS {
      unsigned TXB1D60:1;
      unsigned TXB1D61:1;
      unsigned TXB1D62:1;
      unsigned TXB1D63:1;
      unsigned TXB1D64:1;
      unsigned TXB1D65:1;
      unsigned TXB1D66:1;
      unsigned TXB1D67:1;
      unsigned TXB1D70:1;
      unsigned TXB1D71:1;
      unsigned TXB1D72:1;
      unsigned TXB1D73:1;
      unsigned TXB1D74:1;
      unsigned TXB1D75:1;
      unsigned TXB1D76:1;
      unsigned TXB1D77:1;
} typeC1RX1B4BITS;
sfr volatile typeC1RX1B4BITS C1RX1B4bits absolute 0x37C;

// backward compatibility for C1RX1CONBITS
    typedef struct tagC1RX1CONBITS {
      union {
        struct {
          unsigned FILHIT:3;
          unsigned RXRTRRO:1;
          unsigned :3;
          unsigned RXFUL:1;
        };
        struct {
          unsigned FILHIT0:1;
          unsigned FILHIT1:1;
          unsigned FILHIT2:1;
        };
      };
} typeC1RX1CONBITS;
sfr volatile typeC1RX1CONBITS C1RX1CONbits absolute 0x37E;

// backward compatibility for C1RX0SIDBITS
    typedef struct tagC1RX0SIDBITS {
      union {
        struct {
          unsigned RXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC1RX0SIDBITS;
sfr volatile typeC1RX0SIDBITS C1RX0SIDbits absolute 0x380;

// backward compatibility for C1RX0EIDBITS
    typedef struct tagC1RX0EIDBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC1RX0EIDBITS;
sfr volatile typeC1RX0EIDBITS C1RX0EIDbits absolute 0x382;

// backward compatibility for C1RX0DLCBITS
    typedef struct tagC1RX0DLCBITS {
      union {
        struct {
          unsigned DLC:4;
          unsigned RXRB0:1;
          unsigned :3;
          unsigned RXRB1:1;
          unsigned RXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC1RX0DLCBITS;
sfr volatile typeC1RX0DLCBITS C1RX0DLCbits absolute 0x384;

// backward compatibility for C1RX0B1BITS
    typedef struct tagC1RX0B1BITS {
      unsigned TXB0D00:1;
      unsigned TXB0D01:1;
      unsigned TXB0D02:1;
      unsigned TXB0D03:1;
      unsigned TXB0D04:1;
      unsigned TXB0D05:1;
      unsigned TXB0D06:1;
      unsigned TXB0D07:1;
      unsigned TXB0D10:1;
      unsigned TXB0D11:1;
      unsigned TXB0D12:1;
      unsigned TXB0D13:1;
      unsigned TXB0D14:1;
      unsigned TXB0D15:1;
      unsigned TXB0D16:1;
      unsigned TXB0D17:1;
} typeC1RX0B1BITS;
sfr volatile typeC1RX0B1BITS C1RX0B1bits absolute 0x386;

// backward compatibility for C1RX0B2BITS
    typedef struct tagC1RX0B2BITS {
      unsigned TXB0D20:1;
      unsigned TXB0D21:1;
      unsigned TXB0D22:1;
      unsigned TXB0D23:1;
      unsigned TXB0D24:1;
      unsigned TXB0D25:1;
      unsigned TXB0D26:1;
      unsigned TXB0D27:1;
      unsigned TXB0D30:1;
      unsigned TXB0D31:1;
      unsigned TXB0D32:1;
      unsigned TXB0D33:1;
      unsigned TXB0D34:1;
      unsigned TXB0D35:1;
      unsigned TXB0D36:1;
      unsigned TXB0D37:1;
} typeC1RX0B2BITS;
sfr volatile typeC1RX0B2BITS C1RX0B2bits absolute 0x388;

// backward compatibility for C1RX0B3BITS
    typedef struct tagC1RX0B3BITS {
      unsigned TXB0D40:1;
      unsigned TXB0D41:1;
      unsigned TXB0D42:1;
      unsigned TXB0D43:1;
      unsigned TXB0D44:1;
      unsigned TXB0D45:1;
      unsigned TXB0D46:1;
      unsigned TXB0D47:1;
      unsigned TXB0D50:1;
      unsigned TXB0D51:1;
      unsigned TXB0D52:1;
      unsigned TXB0D53:1;
      unsigned TXB0D54:1;
      unsigned TXB0D55:1;
      unsigned TXB0D56:1;
      unsigned TXB0D57:1;
} typeC1RX0B3BITS;
sfr volatile typeC1RX0B3BITS C1RX0B3bits absolute 0x38A;

// backward compatibility for C1RX0B4BITS
    typedef struct tagC1RX0B4BITS {
      unsigned TXB0D60:1;
      unsigned TXB0D61:1;
      unsigned TXB0D62:1;
      unsigned TXB0D63:1;
      unsigned TXB0D64:1;
      unsigned TXB0D65:1;
      unsigned TXB0D66:1;
      unsigned TXB0D67:1;
      unsigned TXB0D70:1;
      unsigned TXB0D71:1;
      unsigned TXB0D72:1;
      unsigned TXB0D73:1;
      unsigned TXB0D74:1;
      unsigned TXB0D75:1;
      unsigned TXB0D76:1;
      unsigned TXB0D77:1;
} typeC1RX0B4BITS;
sfr volatile typeC1RX0B4BITS C1RX0B4bits absolute 0x38C;

// backward compatibility for C1RX0CONBITS
    typedef struct tagC1RX0CONBITS {
      union {
        struct {
          unsigned FILHIT0:1;
          unsigned JTOFF:1;
          unsigned DBEN:1;
          unsigned RXRTRRO:1;
          unsigned :3;
          unsigned RXFUL:1;
        };
        struct {
          unsigned FILHIT:1;
          unsigned :1;
          unsigned RXB0DBEN:1;
        };
      };
} typeC1RX0CONBITS;
sfr volatile typeC1RX0CONBITS C1RX0CONbits absolute 0x38E;

// backward compatibility for C1CTRLBITS
    typedef struct tagC1CTRLBITS {
      union {
        struct {
          unsigned :1;
          unsigned ICODE:3;
          unsigned :1;
          unsigned OPMODE:3;
          unsigned REQOP:3;
          unsigned CANCKS:1;
          unsigned ABAT:1;
          unsigned CANSIDL:1;
          unsigned CANFRZ:1;
          unsigned CANCAP:1;
        };
        struct {
          unsigned :1;
          unsigned ICODE0:1;
          unsigned ICODE1:1;
          unsigned ICODE2:1;
          unsigned :1;
          unsigned OPMODE0:1;
          unsigned OPMODE1:1;
          unsigned OPMODE2:1;
          unsigned REQOP0:1;
          unsigned REQOP1:1;
          unsigned REQOP2:1;
          unsigned :2;
          unsigned CSIDL:1;
        };
      };
} typeC1CTRLBITS;
sfr volatile typeC1CTRLBITS C1CTRLbits absolute 0x390;

// backward compatibility for C1CFG1BITS
    typedef struct tagC1CFG1BITS {
      union {
        struct {
          unsigned BRP:6;
          unsigned SJW:2;
        };
        struct {
          unsigned BRP0:1;
          unsigned BRP1:1;
          unsigned BRP2:1;
          unsigned BRP3:1;
          unsigned BRP4:1;
          unsigned BRP5:1;
          unsigned SJW0:1;
          unsigned SJW1:1;
        };
      };
} typeC1CFG1BITS;
sfr volatile typeC1CFG1BITS C1CFG1bits absolute 0x392;

// backward compatibility for C1CFG2BITS
    typedef struct tagC1CFG2BITS {
      union {
        struct {
          unsigned PRSEG:3;
          unsigned SEG1PH:3;
          unsigned SAM:1;
          unsigned SEG2PHTS:1;
          unsigned SEG2PH:3;
          unsigned :3;
          unsigned WAKFIL:1;
        };
        struct {
          unsigned PRSEG0:1;
          unsigned PRSEG1:1;
          unsigned PRSEG2:1;
          unsigned SEG1PH0:1;
          unsigned SEG1PH1:1;
          unsigned SEG1PH2:1;
          unsigned :2;
          unsigned SEG2PH0:1;
          unsigned SEG2PH1:1;
          unsigned SEG2PH2:1;
        };
      };
} typeC1CFG2BITS;
sfr volatile typeC1CFG2BITS C1CFG2bits absolute 0x394;

// backward compatibility for C1INTFBITS
    typedef struct tagC1INTFBITS {
      union {
        struct {
          unsigned RXB0IF:1;
          unsigned RXB1IF:1;
          unsigned TXB0IF:1;
          unsigned TXB1IF:1;
          unsigned TXB2IF:1;
          unsigned ERRIF:1;
          unsigned WAKIF:1;
          unsigned IRXIF:1;
          unsigned EWARN:1;
          unsigned RXWARN:1;
          unsigned TXWARN:1;
          unsigned RXBP:1;
          unsigned TXBP:1;
          unsigned TXBO:1;
          unsigned RXB1OVFL:1;
          unsigned RXB0OVFL:1;
        };
        struct {
          unsigned RX0IF:1;
          unsigned RX1IF:1;
          unsigned TX0IF:1;
          unsigned TX1IF:1;
          unsigned TX2IF:1;
          unsigned :2;
          unsigned IVRIF:1;
          unsigned :1;
          unsigned RXWAR:1;
          unsigned TXWAR:1;
          unsigned RXEP:1;
          unsigned TXEP:1;
          unsigned :1;
          unsigned RX1OVR:1;
          unsigned RX0OVR:1;
        };
      };
} typeC1INTFBITS;
sfr volatile typeC1INTFBITS C1INTFbits absolute 0x396;

// backward compatibility for C1INTEBITS
    typedef struct tagC1INTEBITS {
      union {
        struct {
          unsigned RXB0IE:1;
          unsigned RXB1IE:1;
          unsigned TXB0IE:1;
          unsigned TXB1IE:1;
          unsigned TXB2IE:1;
          unsigned ERRIE:1;
          unsigned WAKIE:1;
          unsigned IRXIE:1;
        };
        struct {
          unsigned RX0IE:1;
          unsigned RX1IE:1;
          unsigned TX0IE:1;
          unsigned TX1IE:1;
          unsigned TX2IE:1;
          unsigned :2;
          unsigned IVRIE:1;
        };
      };
} typeC1INTEBITS;
sfr volatile typeC1INTEBITS C1INTEbits absolute 0x398;

// backward compatibility for C1ECBITS
    typedef struct tagC1ECBITS {
      unsigned REC0:1;
      unsigned REC1:1;
      unsigned REC2:1;
      unsigned REC3:1;
      unsigned REC4:1;
      unsigned REC5:1;
      unsigned REC6:1;
      unsigned REC7:1;
      unsigned TEC0:1;
      unsigned TEC1:1;
      unsigned TEC2:1;
      unsigned TEC3:1;
      unsigned TEC4:1;
      unsigned TEC5:1;
      unsigned TEC6:1;
      unsigned TEC7:1;
} typeC1ECBITS;
sfr volatile typeC1ECBITS C1ECbits absolute 0x39A;

// backward compatibility for C2RXF0SIDBITS
    typedef struct tagC2RXF0SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF0SIDBITS;
sfr volatile typeC2RXF0SIDBITS C2RXF0SIDbits absolute 0x3C0;

// backward compatibility for C2RXF0EIDHBITS
    typedef struct tagC2RXF0EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF0EIDHBITS;
sfr volatile typeC2RXF0EIDHBITS C2RXF0EIDHbits absolute 0x3C2;

// backward compatibility for C2RXF0EIDLBITS
    typedef struct tagC2RXF0EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF0EIDLBITS;
sfr volatile typeC2RXF0EIDLBITS C2RXF0EIDLbits absolute 0x3C4;

// backward compatibility for C2RXF1SIDBITS
    typedef struct tagC2RXF1SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF1SIDBITS;
sfr volatile typeC2RXF1SIDBITS C2RXF1SIDbits absolute 0x3C8;

// backward compatibility for C2RXF1EIDHBITS
    typedef struct tagC2RXF1EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF1EIDHBITS;
sfr volatile typeC2RXF1EIDHBITS C2RXF1EIDHbits absolute 0x3CA;

// backward compatibility for C2RXF1EIDLBITS
    typedef struct tagC2RXF1EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF1EIDLBITS;
sfr volatile typeC2RXF1EIDLBITS C2RXF1EIDLbits absolute 0x3CC;

// backward compatibility for C2RXF2SIDBITS
    typedef struct tagC2RXF2SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF2SIDBITS;
sfr volatile typeC2RXF2SIDBITS C2RXF2SIDbits absolute 0x3D0;

// backward compatibility for C2RXF2EIDHBITS
    typedef struct tagC2RXF2EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF2EIDHBITS;
sfr volatile typeC2RXF2EIDHBITS C2RXF2EIDHbits absolute 0x3D2;

// backward compatibility for C2RXF2EIDLBITS
    typedef struct tagC2RXF2EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF2EIDLBITS;
sfr volatile typeC2RXF2EIDLBITS C2RXF2EIDLbits absolute 0x3D4;

// backward compatibility for C2RXF3SIDBITS
    typedef struct tagC2RXF3SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF3SIDBITS;
sfr volatile typeC2RXF3SIDBITS C2RXF3SIDbits absolute 0x3D8;

// backward compatibility for C2RXF3EIDHBITS
    typedef struct tagC2RXF3EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF3EIDHBITS;
sfr volatile typeC2RXF3EIDHBITS C2RXF3EIDHbits absolute 0x3DA;

// backward compatibility for C2RXF3EIDLBITS
    typedef struct tagC2RXF3EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF3EIDLBITS;
sfr volatile typeC2RXF3EIDLBITS C2RXF3EIDLbits absolute 0x3DC;

// backward compatibility for C2RXF4SIDBITS
    typedef struct tagC2RXF4SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF4SIDBITS;
sfr volatile typeC2RXF4SIDBITS C2RXF4SIDbits absolute 0x3E0;

// backward compatibility for C2RXF4EIDHBITS
    typedef struct tagC2RXF4EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF4EIDHBITS;
sfr volatile typeC2RXF4EIDHBITS C2RXF4EIDHbits absolute 0x3E2;

// backward compatibility for C2RXF4EIDLBITS
    typedef struct tagC2RXF4EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF4EIDLBITS;
sfr volatile typeC2RXF4EIDLBITS C2RXF4EIDLbits absolute 0x3E4;

// backward compatibility for C2RXF5SIDBITS
    typedef struct tagC2RXF5SIDBITS {
      union {
        struct {
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXF5SIDBITS;
sfr volatile typeC2RXF5SIDBITS C2RXF5SIDbits absolute 0x3E8;

// backward compatibility for C2RXF5EIDHBITS
    typedef struct tagC2RXF5EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXF5EIDHBITS;
sfr volatile typeC2RXF5EIDHBITS C2RXF5EIDHbits absolute 0x3EA;

// backward compatibility for C2RXF5EIDLBITS
    typedef struct tagC2RXF5EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXF5EIDLBITS;
sfr volatile typeC2RXF5EIDLBITS C2RXF5EIDLbits absolute 0x3EC;

// backward compatibility for C2RXM0SIDBITS
    typedef struct tagC2RXM0SIDBITS {
      union {
        struct {
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXM0SIDBITS;
sfr volatile typeC2RXM0SIDBITS C2RXM0SIDbits absolute 0x3F0;

// backward compatibility for C2RXM0EIDHBITS
    typedef struct tagC2RXM0EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXM0EIDHBITS;
sfr volatile typeC2RXM0EIDHBITS C2RXM0EIDHbits absolute 0x3F2;

// backward compatibility for C2RXM0EIDLBITS
    typedef struct tagC2RXM0EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXM0EIDLBITS;
sfr volatile typeC2RXM0EIDLBITS C2RXM0EIDLbits absolute 0x3F4;

// backward compatibility for C2RXM1SIDBITS
    typedef struct tagC2RXM1SIDBITS {
      union {
        struct {
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RXM1SIDBITS;
sfr volatile typeC2RXM1SIDBITS C2RXM1SIDbits absolute 0x3F8;

// backward compatibility for C2RXM1EIDHBITS
    typedef struct tagC2RXM1EIDHBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RXM1EIDHBITS;
sfr volatile typeC2RXM1EIDHBITS C2RXM1EIDHbits absolute 0x3FA;

// backward compatibility for C2RXM1EIDLBITS
    typedef struct tagC2RXM1EIDLBITS {
      union {
        struct {
          unsigned :10;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2RXM1EIDLBITS;
sfr volatile typeC2RXM1EIDLBITS C2RXM1EIDLbits absolute 0x3FC;

// backward compatibility for C2TX2SIDBITS
    typedef struct tagC2TX2SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC2TX2SIDBITS;
sfr volatile typeC2TX2SIDBITS C2TX2SIDbits absolute 0x400;

// backward compatibility for C2TX2EIDBITS
    typedef struct tagC2TX2EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC2TX2EIDBITS;
sfr volatile typeC2TX2EIDBITS C2TX2EIDbits absolute 0x402;

// backward compatibility for C2TX2DLCBITS
    typedef struct tagC2TX2DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned :3;
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC2TX2DLCBITS;
sfr volatile typeC2TX2DLCBITS C2TX2DLCbits absolute 0x404;

// backward compatibility for C2TX2B1BITS
    typedef struct tagC2TX2B1BITS {
      unsigned TXB2D00:1;
      unsigned TXB2D01:1;
      unsigned TXB2D02:1;
      unsigned TXB2D03:1;
      unsigned TXB2D04:1;
      unsigned TXB2D05:1;
      unsigned TXB2D06:1;
      unsigned TXB2D07:1;
      unsigned TXB2D10:1;
      unsigned TXB2D11:1;
      unsigned TXB2D12:1;
      unsigned TXB2D13:1;
      unsigned TXB2D14:1;
      unsigned TXB2D15:1;
      unsigned TXB2D16:1;
      unsigned TXB2D17:1;
} typeC2TX2B1BITS;
sfr volatile typeC2TX2B1BITS C2TX2B1bits absolute 0x406;

// backward compatibility for C2TX2B2BITS
    typedef struct tagC2TX2B2BITS {
      unsigned TXB2D20:1;
      unsigned TXB2D21:1;
      unsigned TXB2D22:1;
      unsigned TXB2D23:1;
      unsigned TXB2D24:1;
      unsigned TXB2D25:1;
      unsigned TXB2D26:1;
      unsigned TXB2D27:1;
      unsigned TXB2D30:1;
      unsigned TXB2D31:1;
      unsigned TXB2D32:1;
      unsigned TXB2D33:1;
      unsigned TXB2D34:1;
      unsigned TXB2D35:1;
      unsigned TXB2D36:1;
      unsigned TXB2D37:1;
} typeC2TX2B2BITS;
sfr volatile typeC2TX2B2BITS C2TX2B2bits absolute 0x408;

// backward compatibility for C2TX2B3BITS
    typedef struct tagC2TX2B3BITS {
      unsigned TXB2D40:1;
      unsigned TXB2D41:1;
      unsigned TXB2D42:1;
      unsigned TXB2D43:1;
      unsigned TXB2D44:1;
      unsigned TXB2D45:1;
      unsigned TXB2D46:1;
      unsigned TXB2D47:1;
      unsigned TXB2D50:1;
      unsigned TXB2D51:1;
      unsigned TXB2D52:1;
      unsigned TXB2D53:1;
      unsigned TXB2D54:1;
      unsigned TXB2D55:1;
      unsigned TXB2D56:1;
      unsigned TXB2D57:1;
} typeC2TX2B3BITS;
sfr volatile typeC2TX2B3BITS C2TX2B3bits absolute 0x40A;

// backward compatibility for C2TX2B4BITS
    typedef struct tagC2TX2B4BITS {
      unsigned TXB2D60:1;
      unsigned TXB2D61:1;
      unsigned TXB2D62:1;
      unsigned TXB2D63:1;
      unsigned TXB2D64:1;
      unsigned TXB2D65:1;
      unsigned TXB2D66:1;
      unsigned TXB2D67:1;
      unsigned TXB2D70:1;
      unsigned TXB2D71:1;
      unsigned TXB2D72:1;
      unsigned TXB2D73:1;
      unsigned TXB2D74:1;
      unsigned TXB2D75:1;
      unsigned TXB2D76:1;
      unsigned TXB2D77:1;
} typeC2TX2B4BITS;
sfr volatile typeC2TX2B4BITS C2TX2B4bits absolute 0x40C;

// backward compatibility for C2TX2CONBITS
    typedef struct tagC2TX2CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC2TX2CONBITS;
sfr volatile typeC2TX2CONBITS C2TX2CONbits absolute 0x40E;

// backward compatibility for C2TX1SIDBITS
    typedef struct tagC2TX1SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC2TX1SIDBITS;
sfr volatile typeC2TX1SIDBITS C2TX1SIDbits absolute 0x410;

// backward compatibility for C2TX1EIDBITS
    typedef struct tagC2TX1EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC2TX1EIDBITS;
sfr volatile typeC2TX1EIDBITS C2TX1EIDbits absolute 0x412;

// backward compatibility for C2TX1DLCBITS
    typedef struct tagC2TX1DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned :3;
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC2TX1DLCBITS;
sfr volatile typeC2TX1DLCBITS C2TX1DLCbits absolute 0x414;

// backward compatibility for C2TX1B1BITS
    typedef struct tagC2TX1B1BITS {
      unsigned TXB1D00:1;
      unsigned TXB1D01:1;
      unsigned TXB1D02:1;
      unsigned TXB1D03:1;
      unsigned TXB1D04:1;
      unsigned TXB1D05:1;
      unsigned TXB1D06:1;
      unsigned TXB1D07:1;
      unsigned TXB1D10:1;
      unsigned TXB1D11:1;
      unsigned TXB1D12:1;
      unsigned TXB1D13:1;
      unsigned TXB1D14:1;
      unsigned TXB1D15:1;
      unsigned TXB1D16:1;
      unsigned TXB1D17:1;
} typeC2TX1B1BITS;
sfr volatile typeC2TX1B1BITS C2TX1B1bits absolute 0x416;

// backward compatibility for C2TX1B2BITS
    typedef struct tagC2TX1B2BITS {
      unsigned TXB1D20:1;
      unsigned TXB1D21:1;
      unsigned TXB1D22:1;
      unsigned TXB1D23:1;
      unsigned TXB1D24:1;
      unsigned TXB1D25:1;
      unsigned TXB1D26:1;
      unsigned TXB1D27:1;
      unsigned TXB1D30:1;
      unsigned TXB1D31:1;
      unsigned TXB1D32:1;
      unsigned TXB1D33:1;
      unsigned TXB1D34:1;
      unsigned TXB1D35:1;
      unsigned TXB1D36:1;
      unsigned TXB1D37:1;
} typeC2TX1B2BITS;
sfr volatile typeC2TX1B2BITS C2TX1B2bits absolute 0x418;

// backward compatibility for C2TX1B3BITS
    typedef struct tagC2TX1B3BITS {
      unsigned TXB1D40:1;
      unsigned TXB1D41:1;
      unsigned TXB1D42:1;
      unsigned TXB1D43:1;
      unsigned TXB1D44:1;
      unsigned TXB1D45:1;
      unsigned TXB1D46:1;
      unsigned TXB1D47:1;
      unsigned TXB1D50:1;
      unsigned TXB1D51:1;
      unsigned TXB1D52:1;
      unsigned TXB1D53:1;
      unsigned TXB1D54:1;
      unsigned TXB1D55:1;
      unsigned TXB1D56:1;
      unsigned TXB1D57:1;
} typeC2TX1B3BITS;
sfr volatile typeC2TX1B3BITS C2TX1B3bits absolute 0x41A;

// backward compatibility for C2TX1B4BITS
    typedef struct tagC2TX1B4BITS {
      unsigned TXB1D60:1;
      unsigned TXB1D61:1;
      unsigned TXB1D62:1;
      unsigned TXB1D63:1;
      unsigned TXB1D64:1;
      unsigned TXB1D65:1;
      unsigned TXB1D66:1;
      unsigned TXB1D67:1;
      unsigned TXB1D70:1;
      unsigned TXB1D71:1;
      unsigned TXB1D72:1;
      unsigned TXB1D73:1;
      unsigned TXB1D74:1;
      unsigned TXB1D75:1;
      unsigned TXB1D76:1;
      unsigned TXB1D77:1;
} typeC2TX1B4BITS;
sfr volatile typeC2TX1B4BITS C2TX1B4bits absolute 0x41C;

// backward compatibility for C2TX1CONBITS
    typedef struct tagC2TX1CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC2TX1CONBITS;
sfr volatile typeC2TX1CONBITS C2TX1CONbits absolute 0x41E;

// backward compatibility for C2TX0SIDBITS
    typedef struct tagC2TX0SIDBITS {
      union {
        struct {
          unsigned TXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned :3;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID5_0:6;
          unsigned :3;
          unsigned SID10_6:5;
        };
      };
} typeC2TX0SIDBITS;
sfr volatile typeC2TX0SIDBITS C2TX0SIDbits absolute 0x420;

// backward compatibility for C2TX0EIDBITS
    typedef struct tagC2TX0EIDBITS {
      union {
        struct {
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned :4;
          unsigned EID14:1;
          unsigned EID15:1;
          unsigned EID16:1;
          unsigned EID17:1;
        };
        struct {
          unsigned EID13_6:8;
          unsigned :4;
          unsigned EID17_14:4;
        };
      };
} typeC2TX0EIDBITS;
sfr volatile typeC2TX0EIDBITS C2TX0EIDbits absolute 0x422;

// backward compatibility for C2TX0DLCBITS
    typedef struct tagC2TX0DLCBITS {
      union {
        struct {
          unsigned :3;
          unsigned DLC:4;
          unsigned TXRB0:1;
          unsigned TXRB1:1;
          unsigned TXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
      };
} typeC2TX0DLCBITS;
sfr volatile typeC2TX0DLCBITS C2TX0DLCbits absolute 0x424;

// backward compatibility for C2TX0B1BITS
    typedef struct tagC2TX0B1BITS {
      unsigned TXB0D00:1;
      unsigned TXB0D01:1;
      unsigned TXB0D02:1;
      unsigned TXB0D03:1;
      unsigned TXB0D04:1;
      unsigned TXB0D05:1;
      unsigned TXB0D06:1;
      unsigned TXB0D07:1;
      unsigned TXB0D10:1;
      unsigned TXB0D11:1;
      unsigned TXB0D12:1;
      unsigned TXB0D13:1;
      unsigned TXB0D14:1;
      unsigned TXB0D15:1;
      unsigned TXB0D16:1;
      unsigned TXB0D17:1;
} typeC2TX0B1BITS;
sfr volatile typeC2TX0B1BITS C2TX0B1bits absolute 0x426;

// backward compatibility for C2TX0B2BITS
    typedef struct tagC2TX0B2BITS {
      unsigned TXB0D20:1;
      unsigned TXB0D21:1;
      unsigned TXB0D22:1;
      unsigned TXB0D23:1;
      unsigned TXB0D24:1;
      unsigned TXB0D25:1;
      unsigned TXB0D26:1;
      unsigned TXB0D27:1;
      unsigned TXB0D30:1;
      unsigned TXB0D31:1;
      unsigned TXB0D32:1;
      unsigned TXB0D33:1;
      unsigned TXB0D34:1;
      unsigned TXB0D35:1;
      unsigned TXB0D36:1;
      unsigned TXB0D37:1;
} typeC2TX0B2BITS;
sfr volatile typeC2TX0B2BITS C2TX0B2bits absolute 0x428;

// backward compatibility for C2TX0B3BITS
    typedef struct tagC2TX0B3BITS {
      unsigned TXB0D40:1;
      unsigned TXB0D41:1;
      unsigned TXB0D42:1;
      unsigned TXB0D43:1;
      unsigned TXB0D44:1;
      unsigned TXB0D45:1;
      unsigned TXB0D46:1;
      unsigned TXB0D47:1;
      unsigned TXB0D50:1;
      unsigned TXB0D51:1;
      unsigned TXB0D52:1;
      unsigned TXB0D53:1;
      unsigned TXB0D54:1;
      unsigned TXB0D55:1;
      unsigned TXB0D56:1;
      unsigned TXB0D57:1;
} typeC2TX0B3BITS;
sfr volatile typeC2TX0B3BITS C2TX0B3bits absolute 0x42A;

// backward compatibility for C2TX0B4BITS
    typedef struct tagC2TX0B4BITS {
      unsigned TXB0D60:1;
      unsigned TXB0D61:1;
      unsigned TXB0D62:1;
      unsigned TXB0D63:1;
      unsigned TXB0D64:1;
      unsigned TXB0D65:1;
      unsigned TXB0D66:1;
      unsigned TXB0D67:1;
      unsigned TXB0D70:1;
      unsigned TXB0D71:1;
      unsigned TXB0D72:1;
      unsigned TXB0D73:1;
      unsigned TXB0D74:1;
      unsigned TXB0D75:1;
      unsigned TXB0D76:1;
      unsigned TXB0D77:1;
} typeC2TX0B4BITS;
sfr volatile typeC2TX0B4BITS C2TX0B4bits absolute 0x42C;

// backward compatibility for C2TX0CONBITS
    typedef struct tagC2TX0CONBITS {
      union {
        struct {
          unsigned TXPRI:2;
          unsigned :1;
          unsigned TXREQ:1;
          unsigned TXERR:1;
          unsigned TXLARB:1;
          unsigned TXABT:1;
        };
        struct {
          unsigned TXPRI0:1;
          unsigned TXPRI1:1;
        };
      };
} typeC2TX0CONBITS;
sfr volatile typeC2TX0CONBITS C2TX0CONbits absolute 0x42E;

// backward compatibility for C2RX1SIDBITS
    typedef struct tagC2RX1SIDBITS {
      union {
        struct {
          unsigned RXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RX1SIDBITS;
sfr volatile typeC2RX1SIDBITS C2RX1SIDbits absolute 0x430;

// backward compatibility for C2RX1EIDBITS
    typedef struct tagC2RX1EIDBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RX1EIDBITS;
sfr volatile typeC2RX1EIDBITS C2RX1EIDbits absolute 0x432;

// backward compatibility for C2RX1DLCBITS
    typedef struct tagC2RX1DLCBITS {
      union {
        struct {
          unsigned DLC:4;
          unsigned RXRB0:1;
          unsigned :3;
          unsigned RXRB1:1;
          unsigned RXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC2RX1DLCBITS;
sfr volatile typeC2RX1DLCBITS C2RX1DLCbits absolute 0x434;

// backward compatibility for C2RX1B1BITS
    typedef struct tagC2RX1B1BITS {
      unsigned TXB1D00:1;
      unsigned TXB1D01:1;
      unsigned TXB1D02:1;
      unsigned TXB1D03:1;
      unsigned TXB1D04:1;
      unsigned TXB1D05:1;
      unsigned TXB1D06:1;
      unsigned TXB1D07:1;
      unsigned TXB1D10:1;
      unsigned TXB1D11:1;
      unsigned TXB1D12:1;
      unsigned TXB1D13:1;
      unsigned TXB1D14:1;
      unsigned TXB1D15:1;
      unsigned TXB1D16:1;
      unsigned TXB1D17:1;
} typeC2RX1B1BITS;
sfr volatile typeC2RX1B1BITS C2RX1B1bits absolute 0x436;

// backward compatibility for C2RX1B2BITS
    typedef struct tagC2RX1B2BITS {
      unsigned TXB1D20:1;
      unsigned TXB1D21:1;
      unsigned TXB1D22:1;
      unsigned TXB1D23:1;
      unsigned TXB1D24:1;
      unsigned TXB1D25:1;
      unsigned TXB1D26:1;
      unsigned TXB1D27:1;
      unsigned TXB1D30:1;
      unsigned TXB1D31:1;
      unsigned TXB1D32:1;
      unsigned TXB1D33:1;
      unsigned TXB1D34:1;
      unsigned TXB1D35:1;
      unsigned TXB1D36:1;
      unsigned TXB1D37:1;
} typeC2RX1B2BITS;
sfr volatile typeC2RX1B2BITS C2RX1B2bits absolute 0x438;

// backward compatibility for C2RX1B3BITS
    typedef struct tagC2RX1B3BITS {
      unsigned TXB1D40:1;
      unsigned TXB1D41:1;
      unsigned TXB1D42:1;
      unsigned TXB1D43:1;
      unsigned TXB1D44:1;
      unsigned TXB1D45:1;
      unsigned TXB1D46:1;
      unsigned TXB1D47:1;
      unsigned TXB1D50:1;
      unsigned TXB1D51:1;
      unsigned TXB1D52:1;
      unsigned TXB1D53:1;
      unsigned TXB1D54:1;
      unsigned TXB1D55:1;
      unsigned TXB1D56:1;
      unsigned TXB1D57:1;
} typeC2RX1B3BITS;
sfr volatile typeC2RX1B3BITS C2RX1B3bits absolute 0x43A;

// backward compatibility for C2RX1B4BITS
    typedef struct tagC2RX1B4BITS {
      unsigned TXB1D60:1;
      unsigned TXB1D61:1;
      unsigned TXB1D62:1;
      unsigned TXB1D63:1;
      unsigned TXB1D64:1;
      unsigned TXB1D65:1;
      unsigned TXB1D66:1;
      unsigned TXB1D67:1;
      unsigned TXB1D70:1;
      unsigned TXB1D71:1;
      unsigned TXB1D72:1;
      unsigned TXB1D73:1;
      unsigned TXB1D74:1;
      unsigned TXB1D75:1;
      unsigned TXB1D76:1;
      unsigned TXB1D77:1;
} typeC2RX1B4BITS;
sfr volatile typeC2RX1B4BITS C2RX1B4bits absolute 0x43C;

// backward compatibility for C2RX1CONBITS
    typedef struct tagC2RX1CONBITS {
      union {
        struct {
          unsigned FILHIT:3;
          unsigned RXRTRRO:1;
          unsigned :3;
          unsigned RXFUL:1;
        };
        struct {
          unsigned FILHIT0:1;
          unsigned FILHIT1:1;
          unsigned FILHIT2:1;
        };
      };
} typeC2RX1CONBITS;
sfr volatile typeC2RX1CONBITS C2RX1CONbits absolute 0x43E;

// backward compatibility for C2RX0SIDBITS
    typedef struct tagC2RX0SIDBITS {
      union {
        struct {
          unsigned RXIDE:1;
          unsigned SRR:1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned :2;
          unsigned SID:11;
        };
      };
} typeC2RX0SIDBITS;
sfr volatile typeC2RX0SIDBITS C2RX0SIDbits absolute 0x440;

// backward compatibility for C2RX0EIDBITS
    typedef struct tagC2RX0EIDBITS {
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
      unsigned EID16:1;
      unsigned EID17:1;
} typeC2RX0EIDBITS;
sfr volatile typeC2RX0EIDBITS C2RX0EIDbits absolute 0x442;

// backward compatibility for C2RX0DLCBITS
    typedef struct tagC2RX0DLCBITS {
      union {
        struct {
          unsigned DLC:4;
          unsigned RXRB0:1;
          unsigned :3;
          unsigned RXRB1:1;
          unsigned RXRTR:1;
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
        };
        struct {
          unsigned :10;
          unsigned EID5_0:6;
        };
        struct {
          unsigned DLC0:1;
          unsigned DLC1:1;
          unsigned DLC2:1;
          unsigned DLC3:1;
        };
      };
} typeC2RX0DLCBITS;
sfr volatile typeC2RX0DLCBITS C2RX0DLCbits absolute 0x444;

// backward compatibility for C2RX0B1BITS
    typedef struct tagC2RX0B1BITS {
      unsigned TXB0D00:1;
      unsigned TXB0D01:1;
      unsigned TXB0D02:1;
      unsigned TXB0D03:1;
      unsigned TXB0D04:1;
      unsigned TXB0D05:1;
      unsigned TXB0D06:1;
      unsigned TXB0D07:1;
      unsigned TXB0D10:1;
      unsigned TXB0D11:1;
      unsigned TXB0D12:1;
      unsigned TXB0D13:1;
      unsigned TXB0D14:1;
      unsigned TXB0D15:1;
      unsigned TXB0D16:1;
      unsigned TXB0D17:1;
} typeC2RX0B1BITS;
sfr volatile typeC2RX0B1BITS C2RX0B1bits absolute 0x446;

// backward compatibility for C2RX0B2BITS
    typedef struct tagC2RX0B2BITS {
      unsigned TXB0D20:1;
      unsigned TXB0D21:1;
      unsigned TXB0D22:1;
      unsigned TXB0D23:1;
      unsigned TXB0D24:1;
      unsigned TXB0D25:1;
      unsigned TXB0D26:1;
      unsigned TXB0D27:1;
      unsigned TXB0D30:1;
      unsigned TXB0D31:1;
      unsigned TXB0D32:1;
      unsigned TXB0D33:1;
      unsigned TXB0D34:1;
      unsigned TXB0D35:1;
      unsigned TXB0D36:1;
      unsigned TXB0D37:1;
} typeC2RX0B2BITS;
sfr volatile typeC2RX0B2BITS C2RX0B2bits absolute 0x448;

// backward compatibility for C2RX0B3BITS
    typedef struct tagC2RX0B3BITS {
      unsigned TXB0D40:1;
      unsigned TXB0D41:1;
      unsigned TXB0D42:1;
      unsigned TXB0D43:1;
      unsigned TXB0D44:1;
      unsigned TXB0D45:1;
      unsigned TXB0D46:1;
      unsigned TXB0D47:1;
      unsigned TXB0D50:1;
      unsigned TXB0D51:1;
      unsigned TXB0D52:1;
      unsigned TXB0D53:1;
      unsigned TXB0D54:1;
      unsigned TXB0D55:1;
      unsigned TXB0D56:1;
      unsigned TXB0D57:1;
} typeC2RX0B3BITS;
sfr volatile typeC2RX0B3BITS C2RX0B3bits absolute 0x44A;

// backward compatibility for C2RX0B4BITS
    typedef struct tagC2RX0B4BITS {
      unsigned TXB0D60:1;
      unsigned TXB0D61:1;
      unsigned TXB0D62:1;
      unsigned TXB0D63:1;
      unsigned TXB0D64:1;
      unsigned TXB0D65:1;
      unsigned TXB0D66:1;
      unsigned TXB0D67:1;
      unsigned TXB0D70:1;
      unsigned TXB0D71:1;
      unsigned TXB0D72:1;
      unsigned TXB0D73:1;
      unsigned TXB0D74:1;
      unsigned TXB0D75:1;
      unsigned TXB0D76:1;
      unsigned TXB0D77:1;
} typeC2RX0B4BITS;
sfr volatile typeC2RX0B4BITS C2RX0B4bits absolute 0x44C;

// backward compatibility for C2RX0CONBITS
    typedef struct tagC2RX0CONBITS {
      union {
        struct {
          unsigned FILHIT0:1;
          unsigned JTOFF:1;
          unsigned DBEN:1;
          unsigned RXRTRRO:1;
          unsigned :3;
          unsigned RXFUL:1;
        };
        struct {
          unsigned FILHIT:1;
          unsigned :1;
          unsigned RXB0DBEN:1;
        };
      };
} typeC2RX0CONBITS;
sfr volatile typeC2RX0CONBITS C2RX0CONbits absolute 0x44E;

// backward compatibility for C2CTRLBITS
    typedef struct tagC2CTRLBITS {
      union {
        struct {
          unsigned :1;
          unsigned ICODE:3;
          unsigned :1;
          unsigned OPMODE:3;
          unsigned REQOP:3;
          unsigned CANCKS:1;
          unsigned ABAT:1;
          unsigned CANSIDL:1;
          unsigned CANFRZ:1;
          unsigned CANCAP:1;
        };
        struct {
          unsigned :1;
          unsigned ICODE0:1;
          unsigned ICODE1:1;
          unsigned ICODE2:1;
          unsigned :1;
          unsigned OPMODE0:1;
          unsigned OPMODE1:1;
          unsigned OPMODE2:1;
          unsigned REQOP0:1;
          unsigned REQOP1:1;
          unsigned REQOP2:1;
          unsigned :2;
          unsigned CSIDL:1;
        };
      };
} typeC2CTRLBITS;
sfr volatile typeC2CTRLBITS C2CTRLbits absolute 0x450;

// backward compatibility for C2CFG1BITS
    typedef struct tagC2CFG1BITS {
      union {
        struct {
          unsigned BRP:6;
          unsigned SJW:2;
        };
        struct {
          unsigned BRP0:1;
          unsigned BRP1:1;
          unsigned BRP2:1;
          unsigned BRP3:1;
          unsigned BRP4:1;
          unsigned BRP5:1;
          unsigned SJW0:1;
          unsigned SJW1:1;
        };
      };
} typeC2CFG1BITS;
sfr volatile typeC2CFG1BITS C2CFG1bits absolute 0x452;

// backward compatibility for C2CFG2BITS
    typedef struct tagC2CFG2BITS {
      union {
        struct {
          unsigned PRSEG:3;
          unsigned SEG1PH:3;
          unsigned SAM:1;
          unsigned SEG2PHTS:1;
          unsigned SEG2PH:3;
          unsigned :3;
          unsigned WAKFIL:1;
        };
        struct {
          unsigned PRSEG0:1;
          unsigned PRSEG1:1;
          unsigned PRSEG2:1;
          unsigned SEG1PH0:1;
          unsigned SEG1PH1:1;
          unsigned SEG1PH2:1;
          unsigned :2;
          unsigned SEG2PH0:1;
          unsigned SEG2PH1:1;
          unsigned SEG2PH2:1;
        };
      };
} typeC2CFG2BITS;
sfr volatile typeC2CFG2BITS C2CFG2bits absolute 0x454;

// backward compatibility for C2INTFBITS
    typedef struct tagC2INTFBITS {
      union {
        struct {
          unsigned RXB0IF:1;
          unsigned RXB1IF:1;
          unsigned TXB0IF:1;
          unsigned TXB1IF:1;
          unsigned TXB2IF:1;
          unsigned ERRIF:1;
          unsigned WAKIF:1;
          unsigned IRXIF:1;
          unsigned EWARN:1;
          unsigned RXWARN:1;
          unsigned TXWARN:1;
          unsigned RXBP:1;
          unsigned TXBP:1;
          unsigned TXBO:1;
          unsigned RXB1OVFL:1;
          unsigned RXB0OVFL:1;
        };
        struct {
          unsigned RX0IF:1;
          unsigned RX1IF:1;
          unsigned TX0IF:1;
          unsigned TX1IF:1;
          unsigned TX2IF:1;
          unsigned :2;
          unsigned IVRIF:1;
          unsigned :1;
          unsigned RXWAR:1;
          unsigned TXWAR:1;
          unsigned RXEP:1;
          unsigned TXEP:1;
          unsigned :1;
          unsigned RX1OVR:1;
          unsigned RX0OVR:1;
        };
      };
} typeC2INTFBITS;
sfr volatile typeC2INTFBITS C2INTFbits absolute 0x456;

// backward compatibility for C2INTEBITS
    typedef struct tagC2INTEBITS {
      union {
        struct {
          unsigned RXB0IE:1;
          unsigned RXB1IE:1;
          unsigned TXB0IE:1;
          unsigned TXB1IE:1;
          unsigned TXB2IE:1;
          unsigned ERRIE:1;
          unsigned WAKIE:1;
          unsigned IRXIE:1;
        };
        struct {
          unsigned RX0IE:1;
          unsigned RX1IE:1;
          unsigned TX0IE:1;
          unsigned TX1IE:1;
          unsigned TX2IE:1;
          unsigned :2;
          unsigned IVRIE:1;
        };
      };
} typeC2INTEBITS;
sfr volatile typeC2INTEBITS C2INTEbits absolute 0x458;

// backward compatibility for C2ECBITS
    typedef struct tagC2ECBITS {
      unsigned REC0:1;
      unsigned REC1:1;
      unsigned REC2:1;
      unsigned REC3:1;
      unsigned REC4:1;
      unsigned REC5:1;
      unsigned REC6:1;
      unsigned REC7:1;
      unsigned TEC0:1;
      unsigned TEC1:1;
      unsigned TEC2:1;
      unsigned TEC3:1;
      unsigned TEC4:1;
      unsigned TEC5:1;
      unsigned TEC6:1;
      unsigned TEC7:1;
} typeC2ECBITS;
sfr volatile typeC2ECBITS C2ECbits absolute 0x45A;

// backward compatibility for RCONBITS
    typedef struct tagRCONBITS {
      union {
        struct {
          unsigned POR:1;
          unsigned BOR:1;
          unsigned IDLE:1;
          unsigned SLEEP:1;
          unsigned WDTO:1;
          unsigned SWDTEN:1;
          unsigned SWR:1;
          unsigned EXTR:1;
          unsigned LVDL:4;
          unsigned LVDEN:1;
          unsigned BGST:1;
          unsigned IOPUWR:1;
          unsigned TRAPR:1;
        };
        struct {
          unsigned :8;
          unsigned LVDL0:1;
          unsigned LVDL1:1;
          unsigned LVDL2:1;
          unsigned LVDL3:1;
        };
      };
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned LPOSCEN:1;
          unsigned :1;
          unsigned CF:1;
          unsigned :1;
          unsigned LOCK:1;
          unsigned POST:2;
          unsigned NOSC:3;
          unsigned :1;
          unsigned COSC:3;
        };
        struct {
          unsigned :6;
          unsigned POST0:1;
          unsigned POST1:1;
          unsigned NOSC0:1;
          unsigned NOSC1:1;
          unsigned NOSC2:1;
          unsigned :1;
          unsigned COSC0:1;
          unsigned COSC1:1;
          unsigned COSC2:1;
        };
      };
} typeOSCCONBITS;
sfr volatile typeOSCCONBITS OSCCONbits absolute 0x742;

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      unsigned TUN0:1;
      unsigned TUN1:1;
      unsigned TUN2:1;
      unsigned TUN3:1;
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x744;

// backward compatibility for BSRAMBITS
    typedef struct tagBSRAMBITS {
      unsigned RL_BSR:1;
      unsigned IR_BSR:1;
      unsigned IW_BSR:1;
} typeBSRAMBITS;
sfr volatile typeBSRAMBITS BSRAMbits absolute 0x750;

// backward compatibility for SSRAMBITS
    typedef struct tagSSRAMBITS {
      unsigned RL_SSR:1;
      unsigned IR_SSR:1;
      unsigned IW_SSR:1;
} typeSSRAMBITS;
sfr volatile typeSSRAMBITS SSRAMbits absolute 0x752;

// backward compatibility for NVMCONBITS
    typedef struct tagNVMCONBITS {
      union {
        struct {
          unsigned PROGOP:7;
          unsigned :1;
          unsigned TWRI:1;
          unsigned :4;
          unsigned WRERR:1;
          unsigned WREN:1;
          unsigned WR:1;
        };
        struct {
          unsigned PROGOP0:1;
          unsigned PROGOP1:1;
          unsigned PROGOP2:1;
          unsigned PROGOP3:1;
          unsigned PROGOP4:1;
          unsigned PROGOP5:1;
          unsigned PROGOP6:1;
        };
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

// backward compatibility for NVMADRUBITS
    typedef struct tagNVMADRUBITS {
      unsigned NVMADR:8;
} typeNVMADRUBITS;
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x764;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned ADCMD:1;
      unsigned C1MD:1;
      unsigned C2MD:1;
      unsigned SPI1MD:1;
      unsigned SPI2MD:1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2CMD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
      unsigned T5MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned OC5MD:1;
      unsigned OC6MD:1;
      unsigned OC7MD:1;
      unsigned OC8MD:1;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
      unsigned IC5MD:1;
      unsigned IC6MD:1;
      unsigned IC7MD:1;
      unsigned IC8MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;
