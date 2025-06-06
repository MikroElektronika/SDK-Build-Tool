// Definition file for P33EP64GP506

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

const unsigned long __FLASH_SIZE = 0x000107E2;
const unsigned long __XRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __XRAM_RAM_START = 0x1000;
const unsigned long __YRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __YRAM_RAM_START = 0x2000;
const long __CONST_FAR_PREFIX = 0x200;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0004;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0006;
const unsigned IVT_ADDR_HARDTRAPERROR        = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_DMACERROR            = 0x000E;
const unsigned IVT_ADDR_SOFTTRAPERROR        = 0x0010;
const unsigned IVT_ADDR_RESERVEDTRAP7        = 0x0012;
const unsigned IVT_ADDR_INT0INTERRUPT        = 0x0014;
const unsigned IVT_ADDR_IC1INTERRUPT         = 0x0016;
const unsigned IVT_ADDR_OC1INTERRUPT         = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_DMA0INTERRUPT        = 0x001C;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_AD1INTERRUPT         = 0x002E;
const unsigned IVT_ADDR_DMA1INTERRUPT        = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_CM1INTERRUPT         = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_DMA2INTERRUPT        = 0x0044;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x0046;
const unsigned IVT_ADDR_OC4INTERRUPT         = 0x0048;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_T5INTERRUPT          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0050;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0052;
const unsigned IVT_ADDR_SPI2ERRINTERRUPT     = 0x0054;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0056;
const unsigned IVT_ADDR_C1RXRDYINTERRUPT     = 0x0058;
const unsigned IVT_ADDR_C1INTERRUPT          = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_INTERRUPT39          = 0x0062;
const unsigned IVT_ADDR_INTERRUPT40          = 0x0064;
const unsigned IVT_ADDR_INTERRUPT41          = 0x0066;
const unsigned IVT_ADDR_INTERRUPT42          = 0x0068;
const unsigned IVT_ADDR_INTERRUPT43          = 0x006A;
const unsigned IVT_ADDR_INTERRUPT44          = 0x006C;
const unsigned IVT_ADDR_INTERRUPT45          = 0x006E;
const unsigned IVT_ADDR_INTERRUPT46          = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_SI2C2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MI2C2INTERRUPT       = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;
const unsigned IVT_ADDR_INTERRUPT54          = 0x0080;
const unsigned IVT_ADDR_INTERRUPT55          = 0x0082;
const unsigned IVT_ADDR_INTERRUPT56          = 0x0084;
const unsigned IVT_ADDR_INTERRUPT57          = 0x0086;
const unsigned IVT_ADDR_INTERRUPT58          = 0x0088;
const unsigned IVT_ADDR_INTERRUPT59          = 0x008A;
const unsigned IVT_ADDR_INTERRUPT60          = 0x008C;
const unsigned IVT_ADDR_INTERRUPT61          = 0x008E;
const unsigned IVT_ADDR_INTERRUPT62          = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_CRCINTERRUPT         = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_C1TXREQINTERRUPT     = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_INTERRUPT72          = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_CTMUINTERRUPT        = 0x00AE;
const unsigned IVT_ADDR_INTERRUPT78          = 0x00B0;
const unsigned IVT_ADDR_INTERRUPT79          = 0x00B2;
const unsigned IVT_ADDR_INTERRUPT80          = 0x00B4;
const unsigned IVT_ADDR_INTERRUPT81          = 0x00B6;
const unsigned IVT_ADDR_INTERRUPT82          = 0x00B8;
const unsigned IVT_ADDR_INTERRUPT83          = 0x00BA;
const unsigned IVT_ADDR_INTERRUPT84          = 0x00BC;
const unsigned IVT_ADDR_INTERRUPT85          = 0x00BE;
const unsigned IVT_ADDR_INTERRUPT86          = 0x00C0;
const unsigned IVT_ADDR_INTERRUPT87          = 0x00C2;
const unsigned IVT_ADDR_INTERRUPT88          = 0x00C4;
const unsigned IVT_ADDR_INTERRUPT89          = 0x00C6;
const unsigned IVT_ADDR_INTERRUPT90          = 0x00C8;
const unsigned IVT_ADDR_INTERRUPT91          = 0x00CA;
const unsigned IVT_ADDR_INTERRUPT92          = 0x00CC;
const unsigned IVT_ADDR_INTERRUPT93          = 0x00CE;
const unsigned IVT_ADDR_INTERRUPT94          = 0x00D0;
const unsigned IVT_ADDR_INTERRUPT95          = 0x00D2;
const unsigned IVT_ADDR_INTERRUPT96          = 0x00D4;
const unsigned IVT_ADDR_INTERRUPT97          = 0x00D6;
const unsigned IVT_ADDR_INTERRUPT98          = 0x00D8;
const unsigned IVT_ADDR_INTERRUPT99          = 0x00DA;
const unsigned IVT_ADDR_INTERRUPT100         = 0x00DC;
const unsigned IVT_ADDR_INTERRUPT101         = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_INTERRUPT103         = 0x00E2;
const unsigned IVT_ADDR_INTERRUPT104         = 0x00E4;
const unsigned IVT_ADDR_INTERRUPT105         = 0x00E6;
const unsigned IVT_ADDR_INTERRUPT106         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_INTERRUPT108         = 0x00EC;
const unsigned IVT_ADDR_INTERRUPT109         = 0x00EE;
const unsigned IVT_ADDR_INTERRUPT110         = 0x00F0;
const unsigned IVT_ADDR_INTERRUPT111         = 0x00F2;
const unsigned IVT_ADDR_INTERRUPT112         = 0x00F4;
const unsigned IVT_ADDR_INTERRUPT113         = 0x00F6;
const unsigned IVT_ADDR_INTERRUPT114         = 0x00F8;
const unsigned IVT_ADDR_INTERRUPT115         = 0x00FA;
const unsigned IVT_ADDR_INTERRUPT116         = 0x00FC;
const unsigned IVT_ADDR_INTERRUPT117         = 0x00FE;
const unsigned IVT_ADDR_INTERRUPT118         = 0x0100;
const unsigned IVT_ADDR_INTERRUPT119         = 0x0102;
const unsigned IVT_ADDR_INTERRUPT120         = 0x0104;
const unsigned IVT_ADDR_INTERRUPT121         = 0x0106;
const unsigned IVT_ADDR_INTERRUPT122         = 0x0108;
const unsigned IVT_ADDR_INTERRUPT123         = 0x010A;
const unsigned IVT_ADDR_INTERRUPT124         = 0x010C;
const unsigned IVT_ADDR_INTERRUPT125         = 0x010E;
const unsigned IVT_ADDR_INTERRUPT126         = 0x0110;
const unsigned IVT_ADDR_INTERRUPT127         = 0x0112;
const unsigned IVT_ADDR_INTERRUPT128         = 0x0114;
const unsigned IVT_ADDR_INTERRUPT129         = 0x0116;
const unsigned IVT_ADDR_INTERRUPT130         = 0x0118;
const unsigned IVT_ADDR_INTERRUPT131         = 0x011A;
const unsigned IVT_ADDR_INTERRUPT132         = 0x011C;
const unsigned IVT_ADDR_INTERRUPT133         = 0x011E;
const unsigned IVT_ADDR_INTERRUPT134         = 0x0120;
const unsigned IVT_ADDR_INTERRUPT135         = 0x0122;
const unsigned IVT_ADDR_INTERRUPT136         = 0x0124;
const unsigned IVT_ADDR_INTERRUPT137         = 0x0126;
const unsigned IVT_ADDR_INTERRUPT138         = 0x0128;
const unsigned IVT_ADDR_INTERRUPT139         = 0x012A;
const unsigned IVT_ADDR_INTERRUPT140         = 0x012C;
const unsigned IVT_ADDR_INTERRUPT141         = 0x012E;
const unsigned IVT_ADDR_ICDINTERRUPT         = 0x0130;
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x0132;
const unsigned IVT_ADDR_INTERRUPT144         = 0x0134;
const unsigned IVT_ADDR_PTGSTEPINTERRUPT     = 0x0136;
const unsigned IVT_ADDR_PTGWDTINTERRUPT      = 0x0138;
const unsigned IVT_ADDR_PTG0INTERRUPT        = 0x013A;
const unsigned IVT_ADDR_PTG1INTERRUPT        = 0x013C;
const unsigned IVT_ADDR_PTG2INTERRUPT        = 0x013E;
const unsigned IVT_ADDR_PTG3INTERRUPT        = 0x0140;

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
sfr unsigned int volatile DFTDATA_INC      absolute 0x0FCA;
sfr unsigned int volatile DFTDATA          absolute 0x0FC8;
sfr unsigned int volatile DFTADD           absolute 0x0FC6;
sfr unsigned int volatile _APPIN           absolute 0x0FA2;
sfr unsigned int volatile _APPO            absolute 0x0FA0;
sfr unsigned int volatile DPCU             absolute 0x0F8C;
sfr unsigned int volatile DPCL             absolute 0x0F8A;
sfr unsigned int volatile VISI             absolute 0x0F88;
sfr unsigned int volatile FEXU             absolute 0x0F82;
sfr unsigned int volatile FEXL             absolute 0x0F80;
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
sfr unsigned int volatile DSRPAG           absolute 0x0032;
sfr unsigned int volatile DSWPAG           absolute 0x0034;
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
sfr unsigned int volatile TBLPAG           absolute 0x0054;
sfr unsigned int volatile MSTRPR           absolute 0x0058;
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
sfr unsigned int volatile IC1CON1          absolute 0x0140;
sfr unsigned int volatile IC1CON2          absolute 0x0142;
sfr unsigned int volatile IC1BUF           absolute 0x0144;
sfr unsigned int volatile IC1TMR           absolute 0x0146;
sfr unsigned int volatile IC2CON1          absolute 0x0148;
sfr unsigned int volatile IC2CON2          absolute 0x014A;
sfr unsigned int volatile IC2BUF           absolute 0x014C;
sfr unsigned int volatile IC2TMR           absolute 0x014E;
sfr unsigned int volatile IC3CON1          absolute 0x0150;
sfr unsigned int volatile IC3CON2          absolute 0x0152;
sfr unsigned int volatile IC3BUF           absolute 0x0154;
sfr unsigned int volatile IC3TMR           absolute 0x0156;
sfr unsigned int volatile IC4CON1          absolute 0x0158;
sfr unsigned int volatile IC4CON2          absolute 0x015A;
sfr unsigned int volatile IC4BUF           absolute 0x015C;
sfr unsigned int volatile IC4TMR           absolute 0x015E;
sfr unsigned int volatile I2C1RCV          absolute 0x0200;
sfr unsigned int volatile I2C1TRN          absolute 0x0202;
sfr unsigned int          I2C1BRG          absolute 0x0204;
sfr unsigned int volatile I2C1CON          absolute 0x0206;
sfr unsigned int volatile I2C1STAT         absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int volatile I2C1MSK          absolute 0x020C;
sfr unsigned int volatile I2C2RCV          absolute 0x0210;
sfr unsigned int volatile I2C2TRN          absolute 0x0212;
sfr unsigned int          I2C2BRG          absolute 0x0214;
sfr unsigned int volatile I2C2CON          absolute 0x0216;
sfr unsigned int volatile I2C2STAT         absolute 0x0218;
sfr unsigned int volatile I2C2ADD          absolute 0x021A;
sfr unsigned int volatile I2C2MSK          absolute 0x021C;
sfr unsigned int volatile U1MODE           absolute 0x0220;
sfr unsigned int volatile U1STA            absolute 0x0222;
sfr unsigned int          U1TXREG          absolute 0x0224;
sfr unsigned int volatile U1RXREG          absolute 0x0226;
sfr unsigned int          U1BRG            absolute 0x0228;
sfr unsigned int volatile U2MODE           absolute 0x0230;
sfr unsigned int volatile U2STA            absolute 0x0232;
sfr unsigned int          U2TXREG          absolute 0x0234;
sfr unsigned int volatile U2RXREG          absolute 0x0236;
sfr unsigned int          U2BRG            absolute 0x0238;
sfr unsigned int volatile SPI1STAT         absolute 0x0240;
sfr unsigned int volatile SPI1CON1         absolute 0x0242;
sfr unsigned int volatile SPI1CON          absolute 0x0242;
sfr unsigned int volatile SPI1CON2         absolute 0x0244;
sfr unsigned int volatile SPI1BUF          absolute 0x0248;
sfr unsigned int volatile SPI2STAT         absolute 0x0260;
sfr unsigned int volatile SPI2CON1         absolute 0x0262;
sfr unsigned int volatile SPI2CON          absolute 0x0262;
sfr unsigned int volatile SPI2CON2         absolute 0x0264;
sfr unsigned int volatile SPI2BUF          absolute 0x0268;
sfr unsigned int volatile ADC1BUF0         absolute 0x0300;
sfr unsigned int volatile ADC1BUF1         absolute 0x0302;
sfr unsigned int volatile ADC1BUF2         absolute 0x0304;
sfr unsigned int volatile ADC1BUF3         absolute 0x0306;
sfr unsigned int volatile ADC1BUF4         absolute 0x0308;
sfr unsigned int volatile ADC1BUF5         absolute 0x030A;
sfr unsigned int volatile ADC1BUF6         absolute 0x030C;
sfr unsigned int volatile ADC1BUF7         absolute 0x030E;
sfr unsigned int volatile ADC1BUF8         absolute 0x0310;
sfr unsigned int volatile ADC1BUF9         absolute 0x0312;
sfr unsigned int volatile ADC1BUFA         absolute 0x0314;
sfr unsigned int volatile ADC1BUFB         absolute 0x0316;
sfr unsigned int volatile ADC1BUFC         absolute 0x0318;
sfr unsigned int volatile ADC1BUFD         absolute 0x031A;
sfr unsigned int volatile ADC1BUFE         absolute 0x031C;
sfr unsigned int volatile ADC1BUFF         absolute 0x031E;
sfr unsigned int volatile AD1CON1          absolute 0x0320;
sfr unsigned int volatile AD1CON2          absolute 0x0322;
sfr unsigned int volatile AD1CON3          absolute 0x0324;
sfr unsigned int          AD1CHS123        absolute 0x0326;
sfr unsigned int          AD1CHS0          absolute 0x0328;
sfr unsigned int          AD1CSSH          absolute 0x032E;
sfr unsigned int          AD1CSSL          absolute 0x0330;
sfr unsigned int          AD1CON4          absolute 0x0332;
sfr unsigned int volatile CTMUCON1         absolute 0x033A;
sfr unsigned int volatile CTMUCON2         absolute 0x033C;
sfr unsigned int volatile CTMUICON         absolute 0x033E;
sfr unsigned int volatile C1CTRL1          absolute 0x0400;
sfr unsigned int volatile C1CTRL2          absolute 0x0402;
sfr unsigned int volatile C1VEC            absolute 0x0404;
sfr unsigned int volatile C1FCTRL          absolute 0x0406;
sfr unsigned int volatile C1FIFO           absolute 0x0408;
sfr unsigned int volatile C1INTF           absolute 0x040A;
sfr unsigned int volatile C1INTE           absolute 0x040C;
sfr unsigned int volatile C1EC             absolute 0x040E;
sfr unsigned int volatile C1RERRCNT        absolute 0x040E;
sfr unsigned short volatile C1TERRCNT        absolute 0x040F;
sfr unsigned int volatile C1CFG1           absolute 0x0410;
sfr unsigned int volatile C1CFG2           absolute 0x0412;
sfr unsigned int volatile C1FEN1           absolute 0x0414;
sfr unsigned int volatile C1FMSKSEL1       absolute 0x0418;
sfr unsigned int volatile C1FMSKSEL2       absolute 0x041A;
sfr unsigned int volatile C1BUFPNT1        absolute 0x0420;
sfr unsigned int volatile C1RXFUL1         absolute 0x0420;
sfr unsigned int volatile C1BUFPNT2        absolute 0x0422;
sfr unsigned int volatile C1RXFUL2         absolute 0x0422;
sfr unsigned int volatile C1BUFPNT3        absolute 0x0424;
sfr unsigned int volatile C1BUFPNT4        absolute 0x0426;
sfr unsigned int volatile C1RXOVF1         absolute 0x0428;
sfr unsigned int volatile C1RXOVF2         absolute 0x042A;
sfr unsigned int volatile C1RXM0SID        absolute 0x0430;
sfr unsigned int volatile C1TR01CON        absolute 0x0430;
sfr unsigned int volatile C1RXM0EID        absolute 0x0432;
sfr unsigned int volatile C1TR23CON        absolute 0x0432;
sfr unsigned int volatile C1RXM1SID        absolute 0x0434;
sfr unsigned int volatile C1TR45CON        absolute 0x0434;
sfr unsigned int volatile C1RXM1EID        absolute 0x0436;
sfr unsigned int volatile C1TR67CON        absolute 0x0436;
sfr unsigned int volatile C1RXM2SID        absolute 0x0438;
sfr unsigned int volatile C1RXM2EID        absolute 0x043A;
sfr unsigned int volatile C1RXD            absolute 0x0440;
sfr unsigned int volatile C1RXF0SID        absolute 0x0440;
sfr unsigned int volatile C1RXF0EID        absolute 0x0442;
sfr unsigned int volatile C1TXD            absolute 0x0442;
sfr unsigned int volatile C1RXF1SID        absolute 0x0444;
sfr unsigned int volatile C1RXF1EID        absolute 0x0446;
sfr unsigned int volatile C1RXF2SID        absolute 0x0448;
sfr unsigned int volatile C1RXF2EID        absolute 0x044A;
sfr unsigned int volatile C1RXF3SID        absolute 0x044C;
sfr unsigned int volatile C1RXF3EID        absolute 0x044E;
sfr unsigned int volatile C1RXF4SID        absolute 0x0450;
sfr unsigned int volatile C1RXF4EID        absolute 0x0452;
sfr unsigned int volatile C1RXF5SID        absolute 0x0454;
sfr unsigned int volatile C1RXF5EID        absolute 0x0456;
sfr unsigned int volatile C1RXF6SID        absolute 0x0458;
sfr unsigned int volatile C1RXF6EID        absolute 0x045A;
sfr unsigned int volatile C1RXF7SID        absolute 0x045C;
sfr unsigned int volatile C1RXF7EID        absolute 0x045E;
sfr unsigned int volatile C1RXF8SID        absolute 0x0460;
sfr unsigned int volatile C1RXF8EID        absolute 0x0462;
sfr unsigned int volatile C1RXF9SID        absolute 0x0464;
sfr unsigned int volatile C1RXF9EID        absolute 0x0466;
sfr unsigned int volatile C1RXF10SID       absolute 0x0468;
sfr unsigned int volatile C1RXF10EID       absolute 0x046A;
sfr unsigned int volatile C1RXF11SID       absolute 0x046C;
sfr unsigned int volatile C1RXF11EID       absolute 0x046E;
sfr unsigned int volatile C1RXF12SID       absolute 0x0470;
sfr unsigned int volatile C1RXF12EID       absolute 0x0472;
sfr unsigned int volatile C1RXF13SID       absolute 0x0474;
sfr unsigned int volatile C1RXF13EID       absolute 0x0476;
sfr unsigned int volatile C1RXF14SID       absolute 0x0478;
sfr unsigned int volatile C1RXF14EID       absolute 0x047A;
sfr unsigned int volatile C1RXF15SID       absolute 0x047C;
sfr unsigned int volatile C1RXF15EID       absolute 0x047E;
sfr unsigned int volatile CRCCON1          absolute 0x0640;
sfr unsigned int volatile CRCCON2          absolute 0x0642;
sfr unsigned int volatile CRCXORL          absolute 0x0644;
sfr unsigned int volatile CRCXORH          absolute 0x0646;
sfr unsigned int volatile CRCDAT           absolute 0x0648;
sfr unsigned int volatile CRCDATL          absolute 0x0648;
sfr unsigned int volatile CRCDATH          absolute 0x064A;
sfr unsigned int volatile CRCWDAT          absolute 0x064C;
sfr unsigned int volatile CRCWDATL         absolute 0x064C;
sfr unsigned int volatile CRCWDATH         absolute 0x064E;
sfr unsigned int          RPOR0            absolute 0x0680;
sfr unsigned int          RPOR1            absolute 0x0682;
sfr unsigned int          RPOR2            absolute 0x0684;
sfr unsigned int          RPOR3            absolute 0x0686;
sfr unsigned int          RPOR4            absolute 0x0688;
sfr unsigned int          RPOR5            absolute 0x068A;
sfr unsigned int          RPOR6            absolute 0x068C;
sfr unsigned int          RPOR7            absolute 0x068E;
sfr unsigned int          RPOR8            absolute 0x0690;
sfr unsigned int          RPOR9            absolute 0x0692;
sfr unsigned int          RPINR0           absolute 0x06A0;
sfr unsigned int          RPINR1           absolute 0x06A2;
sfr unsigned int          RPINR3           absolute 0x06A6;
sfr unsigned int          RPINR7           absolute 0x06AE;
sfr unsigned int          RPINR8           absolute 0x06B0;
sfr unsigned int          RPINR11          absolute 0x06B6;
sfr unsigned int          RPINR18          absolute 0x06C4;
sfr unsigned int          RPINR19          absolute 0x06C6;
sfr unsigned int          RPINR22          absolute 0x06CC;
sfr unsigned int          RPINR23          absolute 0x06CE;
sfr unsigned int          RPINR26          absolute 0x06D4;
sfr unsigned int volatile NVMCON           absolute 0x0728;
sfr unsigned int volatile NVMADR           absolute 0x072A;
sfr unsigned int volatile NVMADRU          absolute 0x072C;
sfr unsigned int          NVMKEY           absolute 0x072E;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile PLLFBD           absolute 0x0746;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int          PMD1             absolute 0x0760;
sfr unsigned int          PMD2             absolute 0x0762;
sfr unsigned int          PMD3             absolute 0x0764;
sfr unsigned int volatile PMD4             absolute 0x0766;
sfr unsigned int volatile PMD6             absolute 0x076A;
sfr unsigned int volatile PMD7             absolute 0x076C;
sfr unsigned int volatile IFS0             absolute 0x0800;
sfr unsigned int volatile IFS1             absolute 0x0802;
sfr unsigned int volatile IFS2             absolute 0x0804;
sfr unsigned int volatile IFS3             absolute 0x0806;
sfr unsigned int volatile IFS4             absolute 0x0808;
sfr unsigned int volatile IFS5             absolute 0x080A;
sfr unsigned int volatile IFS6             absolute 0x080C;
sfr unsigned int volatile IFS8             absolute 0x0810;
sfr unsigned int volatile IFS9             absolute 0x0812;
sfr unsigned int          IEC0             absolute 0x0820;
sfr unsigned int          IEC1             absolute 0x0822;
sfr unsigned int          IEC2             absolute 0x0824;
sfr unsigned int          IEC3             absolute 0x0826;
sfr unsigned int          IEC4             absolute 0x0828;
sfr unsigned int volatile IEC8             absolute 0x0830;
sfr unsigned int volatile IEC9             absolute 0x0832;
sfr unsigned int          IPC0             absolute 0x0840;
sfr unsigned int          IPC1             absolute 0x0842;
sfr unsigned int          IPC2             absolute 0x0844;
sfr unsigned int          IPC3             absolute 0x0846;
sfr unsigned int          IPC4             absolute 0x0848;
sfr unsigned int          IPC5             absolute 0x084A;
sfr unsigned int          IPC6             absolute 0x084C;
sfr unsigned int          IPC7             absolute 0x084E;
sfr unsigned int          IPC8             absolute 0x0850;
sfr unsigned int          IPC9             absolute 0x0852;
sfr unsigned int          IPC12            absolute 0x0858;
sfr unsigned int          IPC16            absolute 0x0860;
sfr unsigned int          IPC17            absolute 0x0862;
sfr unsigned int          IPC19            absolute 0x0866;
sfr unsigned int volatile IPC35            absolute 0x0886;
sfr unsigned int volatile IPC36            absolute 0x0888;
sfr unsigned int volatile IPC37            absolute 0x088A;
sfr unsigned int volatile INTCON1          absolute 0x08C0;
sfr unsigned int volatile INTCON2          absolute 0x08C2;
sfr unsigned int volatile INTCON3          absolute 0x08C4;
sfr unsigned int volatile INTCON4          absolute 0x08C6;
sfr unsigned int volatile INTTREG          absolute 0x08C8;
sfr unsigned int volatile OC1CON1          absolute 0x0900;
sfr unsigned int volatile OC1CON2          absolute 0x0902;
sfr unsigned int          OC1RS            absolute 0x0904;
sfr unsigned int volatile OC1R             absolute 0x0906;
sfr unsigned int volatile OC1TMR           absolute 0x0908;
sfr unsigned int volatile OC2CON1          absolute 0x090A;
sfr unsigned int volatile OC2CON2          absolute 0x090C;
sfr unsigned int          OC2RS            absolute 0x090E;
sfr unsigned int volatile OC2R             absolute 0x0910;
sfr unsigned int volatile OC2TMR           absolute 0x0912;
sfr unsigned int volatile OC3CON1          absolute 0x0914;
sfr unsigned int volatile OC3CON2          absolute 0x0916;
sfr unsigned int          OC3RS            absolute 0x0918;
sfr unsigned int volatile OC3R             absolute 0x091A;
sfr unsigned int volatile OC3TMR           absolute 0x091C;
sfr unsigned int volatile OC4CON1          absolute 0x091E;
sfr unsigned int volatile OC4CON2          absolute 0x0920;
sfr unsigned int          OC4RS            absolute 0x0922;
sfr unsigned int volatile OC4R             absolute 0x0924;
sfr unsigned int volatile OC4TMR           absolute 0x0926;
sfr unsigned int volatile CMSTAT           absolute 0x0A80;
sfr unsigned int          CVRCON           absolute 0x0A82;
sfr unsigned int volatile CM1CON           absolute 0x0A84;
sfr unsigned int volatile CM1MSKSRC        absolute 0x0A86;
sfr unsigned int volatile CM1MSKCON        absolute 0x0A88;
sfr unsigned int volatile CM1FLTR          absolute 0x0A8A;
sfr unsigned int volatile CM2CON           absolute 0x0A8C;
sfr unsigned int volatile CM2MSKSRC        absolute 0x0A8E;
sfr unsigned int volatile CM2MSKCON        absolute 0x0A90;
sfr unsigned int volatile CM2FLTR          absolute 0x0A92;
sfr unsigned int volatile CM3CON           absolute 0x0A94;
sfr unsigned int volatile CM3MSKSRC        absolute 0x0A96;
sfr unsigned int volatile CM3MSKCON        absolute 0x0A98;
sfr unsigned int volatile CM3FLTR          absolute 0x0A9A;
sfr unsigned int volatile CM4CON           absolute 0x0A9C;
sfr unsigned int volatile CM4MSKSRC        absolute 0x0A9E;
sfr unsigned int volatile CM4MSKCON        absolute 0x0AA0;
sfr unsigned int volatile CM4FLTR          absolute 0x0AA2;
sfr unsigned int volatile PTGCST           absolute 0x0AC0;
sfr unsigned int volatile PTGCON           absolute 0x0AC2;
sfr unsigned int volatile PTGBTE           absolute 0x0AC4;
sfr unsigned int volatile PTGHOLD          absolute 0x0AC6;
sfr unsigned int volatile PTGT0LIM         absolute 0x0AC8;
sfr unsigned int volatile PTGT1LIM         absolute 0x0ACA;
sfr unsigned int volatile PTGSDLIM         absolute 0x0ACC;
sfr unsigned int volatile PTGC0LIM         absolute 0x0ACE;
sfr unsigned int volatile PTGC1LIM         absolute 0x0AD0;
sfr unsigned int volatile PTGADJ           absolute 0x0AD2;
sfr unsigned int volatile PTGL0            absolute 0x0AD4;
sfr unsigned int volatile PTGQPTR          absolute 0x0AD6;
sfr unsigned int volatile PTGQUE0          absolute 0x0AD8;
sfr unsigned int volatile PTGQUE1          absolute 0x0ADA;
sfr unsigned int volatile PTGQUE2          absolute 0x0ADC;
sfr unsigned int volatile PTGQUE3          absolute 0x0ADE;
sfr unsigned int volatile PTGQUE4          absolute 0x0AE0;
sfr unsigned int volatile PTGQUE5          absolute 0x0AE2;
sfr unsigned int volatile PTGQUE6          absolute 0x0AE4;
sfr unsigned int volatile PTGQUE7          absolute 0x0AE6;
sfr unsigned int          DMA0CON          absolute 0x0B00;
sfr unsigned int volatile DMA0REQ          absolute 0x0B02;
sfr unsigned int volatile DMA0STAL         absolute 0x0B04;
sfr unsigned int volatile DMA0STAH         absolute 0x0B06;
sfr unsigned int volatile DMA0STBL         absolute 0x0B08;
sfr unsigned int volatile DMA0STBH         absolute 0x0B0A;
sfr unsigned int volatile DMA0PAD          absolute 0x0B0C;
sfr unsigned int volatile DMA0CNT          absolute 0x0B0E;
sfr unsigned int          DMA1CON          absolute 0x0B10;
sfr unsigned int volatile DMA1REQ          absolute 0x0B12;
sfr unsigned int volatile DMA1STAL         absolute 0x0B14;
sfr unsigned int volatile DMA1STAH         absolute 0x0B16;
sfr unsigned int volatile DMA1STBL         absolute 0x0B18;
sfr unsigned int volatile DMA1STBH         absolute 0x0B1A;
sfr unsigned int volatile DMA1PAD          absolute 0x0B1C;
sfr unsigned int volatile DMA1CNT          absolute 0x0B1E;
sfr unsigned int          DMA2CON          absolute 0x0B20;
sfr unsigned int volatile DMA2REQ          absolute 0x0B22;
sfr unsigned int volatile DMA2STAL         absolute 0x0B24;
sfr unsigned int volatile DMA2STAH         absolute 0x0B26;
sfr unsigned int volatile DMA2STBL         absolute 0x0B28;
sfr unsigned int volatile DMA2STBH         absolute 0x0B2A;
sfr unsigned int volatile DMA2PAD          absolute 0x0B2C;
sfr unsigned int volatile DMA2CNT          absolute 0x0B2E;
sfr unsigned int          DMA3CON          absolute 0x0B30;
sfr unsigned int volatile DMA3REQ          absolute 0x0B32;
sfr unsigned int volatile DMA3STAL         absolute 0x0B34;
sfr unsigned int volatile DMA3STAH         absolute 0x0B36;
sfr unsigned int volatile DMA3STBL         absolute 0x0B38;
sfr unsigned int volatile DMA3STBH         absolute 0x0B3A;
sfr unsigned int volatile DMA3PAD          absolute 0x0B3C;
sfr unsigned int volatile DMA3CNT          absolute 0x0B3E;
sfr unsigned int volatile DMAPWC           absolute 0x0BF0;
sfr unsigned int volatile DMARQC           absolute 0x0BF2;
sfr unsigned int volatile DMAPPS           absolute 0x0BF4;
sfr unsigned int volatile DMALCA           absolute 0x0BF6;
sfr unsigned int volatile DSADRL           absolute 0x0BF8;
sfr unsigned int volatile DSADRH           absolute 0x0BFA;
sfr unsigned int volatile TRISA            absolute 0x0E00;
sfr unsigned int volatile PORTA            absolute 0x0E02;
sfr unsigned int volatile LATA             absolute 0x0E04;
sfr unsigned int volatile ODCA             absolute 0x0E06;
sfr unsigned int volatile CNENA            absolute 0x0E08;
sfr unsigned int volatile CNPUA            absolute 0x0E0A;
sfr unsigned int volatile CNPDA            absolute 0x0E0C;
sfr unsigned int volatile ANSELA           absolute 0x0E0E;
sfr unsigned int volatile TRISB            absolute 0x0E10;
sfr unsigned int volatile PORTB            absolute 0x0E12;
sfr unsigned int volatile LATB             absolute 0x0E14;
sfr unsigned int volatile ODCB             absolute 0x0E16;
sfr unsigned int volatile CNENB            absolute 0x0E18;
sfr unsigned int volatile CNPUB            absolute 0x0E1A;
sfr unsigned int volatile CNPDB            absolute 0x0E1C;
sfr unsigned int volatile ANSELB           absolute 0x0E1E;
sfr unsigned int volatile TRISC            absolute 0x0E20;
sfr unsigned int volatile PORTC            absolute 0x0E22;
sfr unsigned int volatile LATC             absolute 0x0E24;
sfr unsigned int volatile ODCC             absolute 0x0E26;
sfr unsigned int volatile CNENC            absolute 0x0E28;
sfr unsigned int volatile CNPUC            absolute 0x0E2A;
sfr unsigned int volatile CNPDC            absolute 0x0E2C;
sfr unsigned int volatile ANSELC           absolute 0x0E2E;
sfr unsigned int volatile TRISD            absolute 0x0E30;
sfr unsigned int volatile PORTD            absolute 0x0E32;
sfr unsigned int volatile LATD             absolute 0x0E34;
sfr unsigned int volatile ODCD             absolute 0x0E36;
sfr unsigned int volatile CNEND            absolute 0x0E38;
sfr unsigned int volatile CNPUD            absolute 0x0E3A;
sfr unsigned int volatile CNPDD            absolute 0x0E3C;
sfr unsigned int volatile TRISE            absolute 0x0E40;
sfr unsigned int volatile PORTE            absolute 0x0E42;
sfr unsigned int volatile LATE             absolute 0x0E44;
sfr unsigned int volatile ODCE             absolute 0x0E46;
sfr unsigned int volatile CNENE            absolute 0x0E48;
sfr unsigned int volatile CNPUE            absolute 0x0E4A;
sfr unsigned int volatile CNPDE            absolute 0x0E4C;
sfr unsigned int volatile ANSELE           absolute 0x0E4E;
sfr unsigned int volatile TRISF            absolute 0x0E50;
sfr unsigned int volatile PORTF            absolute 0x0E52;
sfr unsigned int volatile LATF             absolute 0x0E54;
sfr unsigned int volatile ODCF             absolute 0x0E56;
sfr unsigned int volatile CNENF            absolute 0x0E58;
sfr unsigned int volatile CNPUF            absolute 0x0E5A;
sfr unsigned int volatile CNPDF            absolute 0x0E5C;
sfr unsigned int volatile TRISG            absolute 0x0E60;
sfr unsigned int volatile PORTG            absolute 0x0E62;
sfr unsigned int volatile LATG             absolute 0x0E64;
sfr unsigned int volatile ODCG             absolute 0x0E66;
sfr unsigned int volatile CNENG            absolute 0x0E68;
sfr unsigned int volatile CNPUG            absolute 0x0E6A;
sfr unsigned int volatile CNPDG            absolute 0x0E6C;
sfr unsigned int volatile APPS             absolute 0x0FA4;
sfr unsigned int volatile STROUTL          absolute 0x0FA6;
sfr unsigned int volatile STROUTH          absolute 0x0FA8;
sfr unsigned int volatile STROVCNT         absolute 0x0FAA;
sfr unsigned int volatile JDATAH           absolute 0x0FF0;
sfr unsigned int volatile JDATAL           absolute 0x0FF2;

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
    const register unsigned short int ACCA39_7 = 15;
    sbit  ACCA39_7_bit at ACCAU.B15;
    const register unsigned short int ACCA39_6 = 14;
    sbit  ACCA39_6_bit at ACCAU.B14;
    const register unsigned short int ACCA39_5 = 13;
    sbit  ACCA39_5_bit at ACCAU.B13;
    const register unsigned short int ACCA39_4 = 12;
    sbit  ACCA39_4_bit at ACCAU.B12;
    const register unsigned short int ACCA39_3 = 11;
    sbit  ACCA39_3_bit at ACCAU.B11;
    const register unsigned short int ACCA39_2 = 10;
    sbit  ACCA39_2_bit at ACCAU.B10;
    const register unsigned short int ACCA39_1 = 9;
    sbit  ACCA39_1_bit at ACCAU.B9;
    const register unsigned short int ACCA39_0 = 8;
    sbit  ACCA39_0_bit at ACCAU.B8;
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
    const register unsigned short int ACCB39_23 = 15;
    sbit  ACCB39_23_bit at ACCBU.B15;
    const register unsigned short int ACCB39_22 = 14;
    sbit  ACCB39_22_bit at ACCBU.B14;
    const register unsigned short int ACCB39_21 = 13;
    sbit  ACCB39_21_bit at ACCBU.B13;
    const register unsigned short int ACCB39_20 = 12;
    sbit  ACCB39_20_bit at ACCBU.B12;
    const register unsigned short int ACCB39_19 = 11;
    sbit  ACCB39_19_bit at ACCBU.B11;
    const register unsigned short int ACCB39_18 = 10;
    sbit  ACCB39_18_bit at ACCBU.B10;
    const register unsigned short int ACCB39_17 = 9;
    sbit  ACCB39_17_bit at ACCBU.B9;
    const register unsigned short int ACCB39_16 = 8;
    sbit  ACCB39_16_bit at ACCBU.B8;
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
    const register unsigned short int PCH_7 = 7;
    sbit  PCH_7_bit at PCH.B7;
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

    // DSRPAG bits
    const register unsigned short int DSRPAG_9 = 9;
    sbit  DSRPAG_9_bit at DSRPAG.B9;
    const register unsigned short int DSRPAG_8 = 8;
    sbit  DSRPAG_8_bit at DSRPAG.B8;
    const register unsigned short int DSRPAG_7 = 7;
    sbit  DSRPAG_7_bit at DSRPAG.B7;
    const register unsigned short int DSRPAG_6 = 6;
    sbit  DSRPAG_6_bit at DSRPAG.B6;
    const register unsigned short int DSRPAG_5 = 5;
    sbit  DSRPAG_5_bit at DSRPAG.B5;
    const register unsigned short int DSRPAG_4 = 4;
    sbit  DSRPAG_4_bit at DSRPAG.B4;
    const register unsigned short int DSRPAG_3 = 3;
    sbit  DSRPAG_3_bit at DSRPAG.B3;
    const register unsigned short int DSRPAG_2 = 2;
    sbit  DSRPAG_2_bit at DSRPAG.B2;
    const register unsigned short int DSRPAG_1 = 1;
    sbit  DSRPAG_1_bit at DSRPAG.B1;
    const register unsigned short int DSRPAG_0 = 0;
    sbit  DSRPAG_0_bit at DSRPAG.B0;

    // DSWPAG bits
    const register unsigned short int DSWPAG_8 = 8;
    sbit  DSWPAG_8_bit at DSWPAG.B8;
    const register unsigned short int DSWPAG_7 = 7;
    sbit  DSWPAG_7_bit at DSWPAG.B7;
    const register unsigned short int DSWPAG_6 = 6;
    sbit  DSWPAG_6_bit at DSWPAG.B6;
    const register unsigned short int DSWPAG_5 = 5;
    sbit  DSWPAG_5_bit at DSWPAG.B5;
    const register unsigned short int DSWPAG_4 = 4;
    sbit  DSWPAG_4_bit at DSWPAG.B4;
    const register unsigned short int DSWPAG_3 = 3;
    sbit  DSWPAG_3_bit at DSWPAG.B3;
    const register unsigned short int DSWPAG_2 = 2;
    sbit  DSWPAG_2_bit at DSWPAG.B2;
    const register unsigned short int DSWPAG_1 = 1;
    sbit  DSWPAG_1_bit at DSWPAG.B1;
    const register unsigned short int DSWPAG_0 = 0;
    sbit  DSWPAG_0_bit at DSWPAG.B0;

    // RCOUNT bits
    const register unsigned short int RCOUNT_15 = 15;
    sbit  RCOUNT_15_bit at RCOUNT.B15;
    const register unsigned short int RCOUNT_14 = 14;
    sbit  RCOUNT_14_bit at RCOUNT.B14;
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
    const register unsigned short int DCOUNT_15 = 15;
    sbit  DCOUNT_15_bit at DCOUNT.B15;
    const register unsigned short int DCOUNT_14 = 14;
    sbit  DCOUNT_14_bit at DCOUNT.B14;
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
    const register unsigned short int VAR_ = 15;
    sbit  VAR_bit at CORCON.B15;
    const register unsigned short int US_1 = 13;
    sbit  US_1_bit at CORCON.B13;
    const register unsigned short int US_0 = 12;
    sbit  US_0_bit at CORCON.B12;
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
    const register unsigned short int SFA = 2;
    sbit  SFA_bit at CORCON.B2;
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

    // MSTRPR bits
    const register unsigned short int MSTRPR_15 = 15;
    sbit  MSTRPR_15_bit at MSTRPR.B15;
    const register unsigned short int MSTRPR_14 = 14;
    sbit  MSTRPR_14_bit at MSTRPR.B14;
    const register unsigned short int MSTRPR_13 = 13;
    sbit  MSTRPR_13_bit at MSTRPR.B13;
    const register unsigned short int MSTRPR_12 = 12;
    sbit  MSTRPR_12_bit at MSTRPR.B12;
    const register unsigned short int MSTRPR_11 = 11;
    sbit  MSTRPR_11_bit at MSTRPR.B11;
    const register unsigned short int MSTRPR_10 = 10;
    sbit  MSTRPR_10_bit at MSTRPR.B10;
    const register unsigned short int MSTRPR_9 = 9;
    sbit  MSTRPR_9_bit at MSTRPR.B9;
    const register unsigned short int MSTRPR_8 = 8;
    sbit  MSTRPR_8_bit at MSTRPR.B8;
    const register unsigned short int MSTRPR_7 = 7;
    sbit  MSTRPR_7_bit at MSTRPR.B7;
    const register unsigned short int MSTRPR_6 = 6;
    sbit  MSTRPR_6_bit at MSTRPR.B6;
    const register unsigned short int MSTRPR_5 = 5;
    sbit  MSTRPR_5_bit at MSTRPR.B5;
    const register unsigned short int MSTRPR_4 = 4;
    sbit  MSTRPR_4_bit at MSTRPR.B4;
    const register unsigned short int MSTRPR_3 = 3;
    sbit  MSTRPR_3_bit at MSTRPR.B3;
    const register unsigned short int MSTRPR_2 = 2;
    sbit  MSTRPR_2_bit at MSTRPR.B2;
    const register unsigned short int MSTRPR_1 = 1;
    sbit  MSTRPR_1_bit at MSTRPR.B1;
    const register unsigned short int MSTRPR_0 = 0;
    sbit  MSTRPR_0_bit at MSTRPR.B0;

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

    // IC1CON1 bits
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON1.B13;
    sbit  ICSIDL_IC1CON1_bit at IC1CON1.B13;
    const register unsigned short int ICTSEL_2 = 12;
    sbit  ICTSEL_2_bit at IC1CON1.B12;
    sbit  ICTSEL_2_IC1CON1_bit at IC1CON1.B12;
    const register unsigned short int ICTSEL_1 = 11;
    sbit  ICTSEL_1_bit at IC1CON1.B11;
    sbit  ICTSEL_1_IC1CON1_bit at IC1CON1.B11;
    const register unsigned short int ICTSEL_0 = 10;
    sbit  ICTSEL_0_bit at IC1CON1.B10;
    sbit  ICTSEL_0_IC1CON1_bit at IC1CON1.B10;
    const register unsigned short int ICI_1 = 6;
    sbit  ICI_1_bit at IC1CON1.B6;
    sbit  ICI_1_IC1CON1_bit at IC1CON1.B6;
    const register unsigned short int ICI_0 = 5;
    sbit  ICI_0_bit at IC1CON1.B5;
    sbit  ICI_0_IC1CON1_bit at IC1CON1.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON1.B4;
    sbit  ICOV_IC1CON1_bit at IC1CON1.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON1.B3;
    sbit  ICBNE_IC1CON1_bit at IC1CON1.B3;
    const register unsigned short int ICM_2 = 2;
    sbit  ICM_2_bit at IC1CON1.B2;
    sbit  ICM_2_IC1CON1_bit at IC1CON1.B2;
    const register unsigned short int ICM_1 = 1;
    sbit  ICM_1_bit at IC1CON1.B1;
    sbit  ICM_1_IC1CON1_bit at IC1CON1.B1;
    const register unsigned short int ICM_0 = 0;
    sbit  ICM_0_bit at IC1CON1.B0;
    sbit  ICM_0_IC1CON1_bit at IC1CON1.B0;

    // IC1CON2 bits
    const register unsigned short int IC32 = 8;
    sbit  IC32_bit at IC1CON2.B8;
    sbit  IC32_IC1CON2_bit at IC1CON2.B8;
    const register unsigned short int ICTRIG = 7;
    sbit  ICTRIG_bit at IC1CON2.B7;
    sbit  ICTRIG_IC1CON2_bit at IC1CON2.B7;
    const register unsigned short int TRIGSTAT = 6;
    sbit  TRIGSTAT_bit at IC1CON2.B6;
    sbit  TRIGSTAT_IC1CON2_bit at IC1CON2.B6;
    const register unsigned short int SYNCSEL_4 = 4;
    sbit  SYNCSEL_4_bit at IC1CON2.B4;
    sbit  SYNCSEL_4_IC1CON2_bit at IC1CON2.B4;
    const register unsigned short int SYNCSEL_3 = 3;
    sbit  SYNCSEL_3_bit at IC1CON2.B3;
    sbit  SYNCSEL_3_IC1CON2_bit at IC1CON2.B3;
    const register unsigned short int SYNCSEL_2 = 2;
    sbit  SYNCSEL_2_bit at IC1CON2.B2;
    sbit  SYNCSEL_2_IC1CON2_bit at IC1CON2.B2;
    const register unsigned short int SYNCSEL_1 = 1;
    sbit  SYNCSEL_1_bit at IC1CON2.B1;
    sbit  SYNCSEL_1_IC1CON2_bit at IC1CON2.B1;
    const register unsigned short int SYNCSEL_0 = 0;
    sbit  SYNCSEL_0_bit at IC1CON2.B0;
    sbit  SYNCSEL_0_IC1CON2_bit at IC1CON2.B0;

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

    // IC1TMR bits
    const register unsigned short int IC1TMR_15 = 15;
    sbit  IC1TMR_15_bit at IC1TMR.B15;
    const register unsigned short int IC1TMR_14 = 14;
    sbit  IC1TMR_14_bit at IC1TMR.B14;
    const register unsigned short int IC1TMR_13 = 13;
    sbit  IC1TMR_13_bit at IC1TMR.B13;
    const register unsigned short int IC1TMR_12 = 12;
    sbit  IC1TMR_12_bit at IC1TMR.B12;
    const register unsigned short int IC1TMR_11 = 11;
    sbit  IC1TMR_11_bit at IC1TMR.B11;
    const register unsigned short int IC1TMR_10 = 10;
    sbit  IC1TMR_10_bit at IC1TMR.B10;
    const register unsigned short int IC1TMR_9 = 9;
    sbit  IC1TMR_9_bit at IC1TMR.B9;
    const register unsigned short int IC1TMR_8 = 8;
    sbit  IC1TMR_8_bit at IC1TMR.B8;
    const register unsigned short int IC1TMR_7 = 7;
    sbit  IC1TMR_7_bit at IC1TMR.B7;
    const register unsigned short int IC1TMR_6 = 6;
    sbit  IC1TMR_6_bit at IC1TMR.B6;
    const register unsigned short int IC1TMR_5 = 5;
    sbit  IC1TMR_5_bit at IC1TMR.B5;
    const register unsigned short int IC1TMR_4 = 4;
    sbit  IC1TMR_4_bit at IC1TMR.B4;
    const register unsigned short int IC1TMR_3 = 3;
    sbit  IC1TMR_3_bit at IC1TMR.B3;
    const register unsigned short int IC1TMR_2 = 2;
    sbit  IC1TMR_2_bit at IC1TMR.B2;
    const register unsigned short int IC1TMR_1 = 1;
    sbit  IC1TMR_1_bit at IC1TMR.B1;
    const register unsigned short int IC1TMR_0 = 0;
    sbit  IC1TMR_0_bit at IC1TMR.B0;

    // IC2CON1 bits
    sbit  ICSIDL_IC2CON1_bit at IC2CON1.B13;
    sbit  ICTSEL_2_IC2CON1_bit at IC2CON1.B12;
    sbit  ICTSEL_1_IC2CON1_bit at IC2CON1.B11;
    sbit  ICTSEL_0_IC2CON1_bit at IC2CON1.B10;
    sbit  ICI_1_IC2CON1_bit at IC2CON1.B6;
    sbit  ICI_0_IC2CON1_bit at IC2CON1.B5;
    sbit  ICOV_IC2CON1_bit at IC2CON1.B4;
    sbit  ICBNE_IC2CON1_bit at IC2CON1.B3;
    sbit  ICM_2_IC2CON1_bit at IC2CON1.B2;
    sbit  ICM_1_IC2CON1_bit at IC2CON1.B1;
    sbit  ICM_0_IC2CON1_bit at IC2CON1.B0;

    // IC2CON2 bits
    sbit  IC32_IC2CON2_bit at IC2CON2.B8;
    sbit  ICTRIG_IC2CON2_bit at IC2CON2.B7;
    sbit  TRIGSTAT_IC2CON2_bit at IC2CON2.B6;
    sbit  SYNCSEL_4_IC2CON2_bit at IC2CON2.B4;
    sbit  SYNCSEL_3_IC2CON2_bit at IC2CON2.B3;
    sbit  SYNCSEL_2_IC2CON2_bit at IC2CON2.B2;
    sbit  SYNCSEL_1_IC2CON2_bit at IC2CON2.B1;
    sbit  SYNCSEL_0_IC2CON2_bit at IC2CON2.B0;

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

    // IC2TMR bits
    const register unsigned short int IC2TMR_15 = 15;
    sbit  IC2TMR_15_bit at IC2TMR.B15;
    const register unsigned short int IC2TMR_14 = 14;
    sbit  IC2TMR_14_bit at IC2TMR.B14;
    const register unsigned short int IC2TMR_13 = 13;
    sbit  IC2TMR_13_bit at IC2TMR.B13;
    const register unsigned short int IC2TMR_12 = 12;
    sbit  IC2TMR_12_bit at IC2TMR.B12;
    const register unsigned short int IC2TMR_11 = 11;
    sbit  IC2TMR_11_bit at IC2TMR.B11;
    const register unsigned short int IC2TMR_10 = 10;
    sbit  IC2TMR_10_bit at IC2TMR.B10;
    const register unsigned short int IC2TMR_9 = 9;
    sbit  IC2TMR_9_bit at IC2TMR.B9;
    const register unsigned short int IC2TMR_8 = 8;
    sbit  IC2TMR_8_bit at IC2TMR.B8;
    const register unsigned short int IC2TMR_7 = 7;
    sbit  IC2TMR_7_bit at IC2TMR.B7;
    const register unsigned short int IC2TMR_6 = 6;
    sbit  IC2TMR_6_bit at IC2TMR.B6;
    const register unsigned short int IC2TMR_5 = 5;
    sbit  IC2TMR_5_bit at IC2TMR.B5;
    const register unsigned short int IC2TMR_4 = 4;
    sbit  IC2TMR_4_bit at IC2TMR.B4;
    const register unsigned short int IC2TMR_3 = 3;
    sbit  IC2TMR_3_bit at IC2TMR.B3;
    const register unsigned short int IC2TMR_2 = 2;
    sbit  IC2TMR_2_bit at IC2TMR.B2;
    const register unsigned short int IC2TMR_1 = 1;
    sbit  IC2TMR_1_bit at IC2TMR.B1;
    const register unsigned short int IC2TMR_0 = 0;
    sbit  IC2TMR_0_bit at IC2TMR.B0;

    // IC3CON1 bits
    sbit  ICSIDL_IC3CON1_bit at IC3CON1.B13;
    sbit  ICTSEL_2_IC3CON1_bit at IC3CON1.B12;
    sbit  ICTSEL_1_IC3CON1_bit at IC3CON1.B11;
    sbit  ICTSEL_0_IC3CON1_bit at IC3CON1.B10;
    sbit  ICI_1_IC3CON1_bit at IC3CON1.B6;
    sbit  ICI_0_IC3CON1_bit at IC3CON1.B5;
    sbit  ICOV_IC3CON1_bit at IC3CON1.B4;
    sbit  ICBNE_IC3CON1_bit at IC3CON1.B3;
    sbit  ICM_2_IC3CON1_bit at IC3CON1.B2;
    sbit  ICM_1_IC3CON1_bit at IC3CON1.B1;
    sbit  ICM_0_IC3CON1_bit at IC3CON1.B0;

    // IC3CON2 bits
    sbit  IC32_IC3CON2_bit at IC3CON2.B8;
    sbit  ICTRIG_IC3CON2_bit at IC3CON2.B7;
    sbit  TRIGSTAT_IC3CON2_bit at IC3CON2.B6;
    sbit  SYNCSEL_4_IC3CON2_bit at IC3CON2.B4;
    sbit  SYNCSEL_3_IC3CON2_bit at IC3CON2.B3;
    sbit  SYNCSEL_2_IC3CON2_bit at IC3CON2.B2;
    sbit  SYNCSEL_1_IC3CON2_bit at IC3CON2.B1;
    sbit  SYNCSEL_0_IC3CON2_bit at IC3CON2.B0;

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

    // IC3TMR bits
    const register unsigned short int IC3TMR_15 = 15;
    sbit  IC3TMR_15_bit at IC3TMR.B15;
    const register unsigned short int IC3TMR_14 = 14;
    sbit  IC3TMR_14_bit at IC3TMR.B14;
    const register unsigned short int IC3TMR_13 = 13;
    sbit  IC3TMR_13_bit at IC3TMR.B13;
    const register unsigned short int IC3TMR_12 = 12;
    sbit  IC3TMR_12_bit at IC3TMR.B12;
    const register unsigned short int IC3TMR_11 = 11;
    sbit  IC3TMR_11_bit at IC3TMR.B11;
    const register unsigned short int IC3TMR_10 = 10;
    sbit  IC3TMR_10_bit at IC3TMR.B10;
    const register unsigned short int IC3TMR_9 = 9;
    sbit  IC3TMR_9_bit at IC3TMR.B9;
    const register unsigned short int IC3TMR_8 = 8;
    sbit  IC3TMR_8_bit at IC3TMR.B8;
    const register unsigned short int IC3TMR_7 = 7;
    sbit  IC3TMR_7_bit at IC3TMR.B7;
    const register unsigned short int IC3TMR_6 = 6;
    sbit  IC3TMR_6_bit at IC3TMR.B6;
    const register unsigned short int IC3TMR_5 = 5;
    sbit  IC3TMR_5_bit at IC3TMR.B5;
    const register unsigned short int IC3TMR_4 = 4;
    sbit  IC3TMR_4_bit at IC3TMR.B4;
    const register unsigned short int IC3TMR_3 = 3;
    sbit  IC3TMR_3_bit at IC3TMR.B3;
    const register unsigned short int IC3TMR_2 = 2;
    sbit  IC3TMR_2_bit at IC3TMR.B2;
    const register unsigned short int IC3TMR_1 = 1;
    sbit  IC3TMR_1_bit at IC3TMR.B1;
    const register unsigned short int IC3TMR_0 = 0;
    sbit  IC3TMR_0_bit at IC3TMR.B0;

    // IC4CON1 bits
    sbit  ICSIDL_IC4CON1_bit at IC4CON1.B13;
    sbit  ICTSEL_2_IC4CON1_bit at IC4CON1.B12;
    sbit  ICTSEL_1_IC4CON1_bit at IC4CON1.B11;
    sbit  ICTSEL_0_IC4CON1_bit at IC4CON1.B10;
    sbit  ICI_1_IC4CON1_bit at IC4CON1.B6;
    sbit  ICI_0_IC4CON1_bit at IC4CON1.B5;
    sbit  ICOV_IC4CON1_bit at IC4CON1.B4;
    sbit  ICBNE_IC4CON1_bit at IC4CON1.B3;
    sbit  ICM_2_IC4CON1_bit at IC4CON1.B2;
    sbit  ICM_1_IC4CON1_bit at IC4CON1.B1;
    sbit  ICM_0_IC4CON1_bit at IC4CON1.B0;

    // IC4CON2 bits
    sbit  IC32_IC4CON2_bit at IC4CON2.B8;
    sbit  ICTRIG_IC4CON2_bit at IC4CON2.B7;
    sbit  TRIGSTAT_IC4CON2_bit at IC4CON2.B6;
    sbit  SYNCSEL_4_IC4CON2_bit at IC4CON2.B4;
    sbit  SYNCSEL_3_IC4CON2_bit at IC4CON2.B3;
    sbit  SYNCSEL_2_IC4CON2_bit at IC4CON2.B2;
    sbit  SYNCSEL_1_IC4CON2_bit at IC4CON2.B1;
    sbit  SYNCSEL_0_IC4CON2_bit at IC4CON2.B0;

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

    // IC4TMR bits
    const register unsigned short int IC4TMR_15 = 15;
    sbit  IC4TMR_15_bit at IC4TMR.B15;
    const register unsigned short int IC4TMR_14 = 14;
    sbit  IC4TMR_14_bit at IC4TMR.B14;
    const register unsigned short int IC4TMR_13 = 13;
    sbit  IC4TMR_13_bit at IC4TMR.B13;
    const register unsigned short int IC4TMR_12 = 12;
    sbit  IC4TMR_12_bit at IC4TMR.B12;
    const register unsigned short int IC4TMR_11 = 11;
    sbit  IC4TMR_11_bit at IC4TMR.B11;
    const register unsigned short int IC4TMR_10 = 10;
    sbit  IC4TMR_10_bit at IC4TMR.B10;
    const register unsigned short int IC4TMR_9 = 9;
    sbit  IC4TMR_9_bit at IC4TMR.B9;
    const register unsigned short int IC4TMR_8 = 8;
    sbit  IC4TMR_8_bit at IC4TMR.B8;
    const register unsigned short int IC4TMR_7 = 7;
    sbit  IC4TMR_7_bit at IC4TMR.B7;
    const register unsigned short int IC4TMR_6 = 6;
    sbit  IC4TMR_6_bit at IC4TMR.B6;
    const register unsigned short int IC4TMR_5 = 5;
    sbit  IC4TMR_5_bit at IC4TMR.B5;
    const register unsigned short int IC4TMR_4 = 4;
    sbit  IC4TMR_4_bit at IC4TMR.B4;
    const register unsigned short int IC4TMR_3 = 3;
    sbit  IC4TMR_3_bit at IC4TMR.B3;
    const register unsigned short int IC4TMR_2 = 2;
    sbit  IC4TMR_2_bit at IC4TMR.B2;
    const register unsigned short int IC4TMR_1 = 1;
    sbit  IC4TMR_1_bit at IC4TMR.B1;
    const register unsigned short int IC4TMR_0 = 0;
    sbit  IC4TMR_0_bit at IC4TMR.B0;

    // I2C1RCV bits
    const register unsigned short int I2CRCV_7 = 7;
    sbit  I2CRCV_7_bit at I2C1RCV.B7;
    sbit  I2CRCV_7_I2C1RCV_bit at I2C1RCV.B7;
    const register unsigned short int I2CRCV_6 = 6;
    sbit  I2CRCV_6_bit at I2C1RCV.B6;
    sbit  I2CRCV_6_I2C1RCV_bit at I2C1RCV.B6;
    const register unsigned short int I2CRCV_5 = 5;
    sbit  I2CRCV_5_bit at I2C1RCV.B5;
    sbit  I2CRCV_5_I2C1RCV_bit at I2C1RCV.B5;
    const register unsigned short int I2CRCV_4 = 4;
    sbit  I2CRCV_4_bit at I2C1RCV.B4;
    sbit  I2CRCV_4_I2C1RCV_bit at I2C1RCV.B4;
    const register unsigned short int I2CRCV_3 = 3;
    sbit  I2CRCV_3_bit at I2C1RCV.B3;
    sbit  I2CRCV_3_I2C1RCV_bit at I2C1RCV.B3;
    const register unsigned short int I2CRCV_2 = 2;
    sbit  I2CRCV_2_bit at I2C1RCV.B2;
    sbit  I2CRCV_2_I2C1RCV_bit at I2C1RCV.B2;
    const register unsigned short int I2CRCV_1 = 1;
    sbit  I2CRCV_1_bit at I2C1RCV.B1;
    sbit  I2CRCV_1_I2C1RCV_bit at I2C1RCV.B1;
    const register unsigned short int I2CRCV_0 = 0;
    sbit  I2CRCV_0_bit at I2C1RCV.B0;
    sbit  I2CRCV_0_I2C1RCV_bit at I2C1RCV.B0;

    // I2C1TRN bits
    const register unsigned short int I2CTRN_7 = 7;
    sbit  I2CTRN_7_bit at I2C1TRN.B7;
    sbit  I2CTRN_7_I2C1TRN_bit at I2C1TRN.B7;
    const register unsigned short int I2CTRN_6 = 6;
    sbit  I2CTRN_6_bit at I2C1TRN.B6;
    sbit  I2CTRN_6_I2C1TRN_bit at I2C1TRN.B6;
    const register unsigned short int I2CTRN_5 = 5;
    sbit  I2CTRN_5_bit at I2C1TRN.B5;
    sbit  I2CTRN_5_I2C1TRN_bit at I2C1TRN.B5;
    const register unsigned short int I2CTRN_4 = 4;
    sbit  I2CTRN_4_bit at I2C1TRN.B4;
    sbit  I2CTRN_4_I2C1TRN_bit at I2C1TRN.B4;
    const register unsigned short int I2CTRN_3 = 3;
    sbit  I2CTRN_3_bit at I2C1TRN.B3;
    sbit  I2CTRN_3_I2C1TRN_bit at I2C1TRN.B3;
    const register unsigned short int I2CTRN_2 = 2;
    sbit  I2CTRN_2_bit at I2C1TRN.B2;
    sbit  I2CTRN_2_I2C1TRN_bit at I2C1TRN.B2;
    const register unsigned short int I2CTRN_1 = 1;
    sbit  I2CTRN_1_bit at I2C1TRN.B1;
    sbit  I2CTRN_1_I2C1TRN_bit at I2C1TRN.B1;
    const register unsigned short int I2CTRN_0 = 0;
    sbit  I2CTRN_0_bit at I2C1TRN.B0;
    sbit  I2CTRN_0_I2C1TRN_bit at I2C1TRN.B0;

    // I2C1BRG bits
    const register unsigned short int I2CBRG_8 = 8;
    sbit  I2CBRG_8_bit at I2C1BRG.B8;
    sbit  I2CBRG_8_I2C1BRG_bit at I2C1BRG.B8;
    const register unsigned short int I2CBRG_7 = 7;
    sbit  I2CBRG_7_bit at I2C1BRG.B7;
    sbit  I2CBRG_7_I2C1BRG_bit at I2C1BRG.B7;
    const register unsigned short int I2CBRG_6 = 6;
    sbit  I2CBRG_6_bit at I2C1BRG.B6;
    sbit  I2CBRG_6_I2C1BRG_bit at I2C1BRG.B6;
    const register unsigned short int I2CBRG_5 = 5;
    sbit  I2CBRG_5_bit at I2C1BRG.B5;
    sbit  I2CBRG_5_I2C1BRG_bit at I2C1BRG.B5;
    const register unsigned short int I2CBRG_4 = 4;
    sbit  I2CBRG_4_bit at I2C1BRG.B4;
    sbit  I2CBRG_4_I2C1BRG_bit at I2C1BRG.B4;
    const register unsigned short int I2CBRG_3 = 3;
    sbit  I2CBRG_3_bit at I2C1BRG.B3;
    sbit  I2CBRG_3_I2C1BRG_bit at I2C1BRG.B3;
    const register unsigned short int I2CBRG_2 = 2;
    sbit  I2CBRG_2_bit at I2C1BRG.B2;
    sbit  I2CBRG_2_I2C1BRG_bit at I2C1BRG.B2;
    const register unsigned short int I2CBRG_1 = 1;
    sbit  I2CBRG_1_bit at I2C1BRG.B1;
    sbit  I2CBRG_1_I2C1BRG_bit at I2C1BRG.B1;
    const register unsigned short int I2CBRG_0 = 0;
    sbit  I2CBRG_0_bit at I2C1BRG.B0;
    sbit  I2CBRG_0_I2C1BRG_bit at I2C1BRG.B0;

    // I2C1CON bits
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2C1CON.B15;
    sbit  I2CEN_I2C1CON_bit at I2C1CON.B15;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON.B13;
    sbit  I2CSIDL_I2C1CON_bit at I2C1CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    sbit  SCLREL_I2C1CON_bit at I2C1CON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2C1CON.B11;
    sbit  IPMIEN_I2C1CON_bit at I2C1CON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON.B10;
    sbit  A10M_I2C1CON_bit at I2C1CON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON.B9;
    sbit  DISSLW_I2C1CON_bit at I2C1CON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON.B8;
    sbit  SMEN_I2C1CON_bit at I2C1CON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON.B7;
    sbit  GCEN_I2C1CON_bit at I2C1CON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON.B6;
    sbit  STREN_I2C1CON_bit at I2C1CON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON.B5;
    sbit  ACKDT_I2C1CON_bit at I2C1CON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON.B4;
    sbit  ACKEN_I2C1CON_bit at I2C1CON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON.B3;
    sbit  RCEN_I2C1CON_bit at I2C1CON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON.B2;
    sbit  PEN_I2C1CON_bit at I2C1CON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON.B1;
    sbit  RSEN_I2C1CON_bit at I2C1CON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON.B0;
    sbit  SEN_I2C1CON_bit at I2C1CON.B0;

    // I2C1STAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    sbit  ACKSTAT_I2C1STAT_bit at I2C1STAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    sbit  TRSTAT_I2C1STAT_bit at I2C1STAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    sbit  BCL_I2C1STAT_bit at I2C1STAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    sbit  GCSTAT_I2C1STAT_bit at I2C1STAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    sbit  ADD10_I2C1STAT_bit at I2C1STAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    sbit  IWCOL_I2C1STAT_bit at I2C1STAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    sbit  I2COV_I2C1STAT_bit at I2C1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    sbit  D_A_I2C1STAT_bit at I2C1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    sbit  P_I2C1STAT_bit at I2C1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    sbit  S_I2C1STAT_bit at I2C1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    sbit  R_W_I2C1STAT_bit at I2C1STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    sbit  RBF_I2C1STAT_bit at I2C1STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;
    sbit  TBF_I2C1STAT_bit at I2C1STAT.B0;

    // I2C1ADD bits
    const register unsigned short int I2CADD_9 = 9;
    sbit  I2CADD_9_bit at I2C1ADD.B9;
    sbit  I2CADD_9_I2C1ADD_bit at I2C1ADD.B9;
    const register unsigned short int I2CADD_8 = 8;
    sbit  I2CADD_8_bit at I2C1ADD.B8;
    sbit  I2CADD_8_I2C1ADD_bit at I2C1ADD.B8;
    const register unsigned short int I2CADD_7 = 7;
    sbit  I2CADD_7_bit at I2C1ADD.B7;
    sbit  I2CADD_7_I2C1ADD_bit at I2C1ADD.B7;
    const register unsigned short int I2CADD_6 = 6;
    sbit  I2CADD_6_bit at I2C1ADD.B6;
    sbit  I2CADD_6_I2C1ADD_bit at I2C1ADD.B6;
    const register unsigned short int I2CADD_5 = 5;
    sbit  I2CADD_5_bit at I2C1ADD.B5;
    sbit  I2CADD_5_I2C1ADD_bit at I2C1ADD.B5;
    const register unsigned short int I2CADD_4 = 4;
    sbit  I2CADD_4_bit at I2C1ADD.B4;
    sbit  I2CADD_4_I2C1ADD_bit at I2C1ADD.B4;
    const register unsigned short int I2CADD_3 = 3;
    sbit  I2CADD_3_bit at I2C1ADD.B3;
    sbit  I2CADD_3_I2C1ADD_bit at I2C1ADD.B3;
    const register unsigned short int I2CADD_2 = 2;
    sbit  I2CADD_2_bit at I2C1ADD.B2;
    sbit  I2CADD_2_I2C1ADD_bit at I2C1ADD.B2;
    const register unsigned short int I2CADD_1 = 1;
    sbit  I2CADD_1_bit at I2C1ADD.B1;
    sbit  I2CADD_1_I2C1ADD_bit at I2C1ADD.B1;
    const register unsigned short int I2CADD_0 = 0;
    sbit  I2CADD_0_bit at I2C1ADD.B0;
    sbit  I2CADD_0_I2C1ADD_bit at I2C1ADD.B0;

    // I2C1MSK bits
    const register unsigned short int AMSK_9 = 9;
    sbit  AMSK_9_bit at I2C1MSK.B9;
    sbit  AMSK_9_I2C1MSK_bit at I2C1MSK.B9;
    const register unsigned short int AMSK_8 = 8;
    sbit  AMSK_8_bit at I2C1MSK.B8;
    sbit  AMSK_8_I2C1MSK_bit at I2C1MSK.B8;
    const register unsigned short int AMSK_7 = 7;
    sbit  AMSK_7_bit at I2C1MSK.B7;
    sbit  AMSK_7_I2C1MSK_bit at I2C1MSK.B7;
    const register unsigned short int AMSK_6 = 6;
    sbit  AMSK_6_bit at I2C1MSK.B6;
    sbit  AMSK_6_I2C1MSK_bit at I2C1MSK.B6;
    const register unsigned short int AMSK_5 = 5;
    sbit  AMSK_5_bit at I2C1MSK.B5;
    sbit  AMSK_5_I2C1MSK_bit at I2C1MSK.B5;
    const register unsigned short int AMSK_4 = 4;
    sbit  AMSK_4_bit at I2C1MSK.B4;
    sbit  AMSK_4_I2C1MSK_bit at I2C1MSK.B4;
    const register unsigned short int AMSK_3 = 3;
    sbit  AMSK_3_bit at I2C1MSK.B3;
    sbit  AMSK_3_I2C1MSK_bit at I2C1MSK.B3;
    const register unsigned short int AMSK_2 = 2;
    sbit  AMSK_2_bit at I2C1MSK.B2;
    sbit  AMSK_2_I2C1MSK_bit at I2C1MSK.B2;
    const register unsigned short int AMSK_1 = 1;
    sbit  AMSK_1_bit at I2C1MSK.B1;
    sbit  AMSK_1_I2C1MSK_bit at I2C1MSK.B1;
    const register unsigned short int AMSK_0 = 0;
    sbit  AMSK_0_bit at I2C1MSK.B0;
    sbit  AMSK_0_I2C1MSK_bit at I2C1MSK.B0;

    // I2C2RCV bits
    sbit  I2CRCV_7_I2C2RCV_bit at I2C2RCV.B7;
    sbit  I2CRCV_6_I2C2RCV_bit at I2C2RCV.B6;
    sbit  I2CRCV_5_I2C2RCV_bit at I2C2RCV.B5;
    sbit  I2CRCV_4_I2C2RCV_bit at I2C2RCV.B4;
    sbit  I2CRCV_3_I2C2RCV_bit at I2C2RCV.B3;
    sbit  I2CRCV_2_I2C2RCV_bit at I2C2RCV.B2;
    sbit  I2CRCV_1_I2C2RCV_bit at I2C2RCV.B1;
    sbit  I2CRCV_0_I2C2RCV_bit at I2C2RCV.B0;

    // I2C2TRN bits
    sbit  I2CTRN_7_I2C2TRN_bit at I2C2TRN.B7;
    sbit  I2CTRN_6_I2C2TRN_bit at I2C2TRN.B6;
    sbit  I2CTRN_5_I2C2TRN_bit at I2C2TRN.B5;
    sbit  I2CTRN_4_I2C2TRN_bit at I2C2TRN.B4;
    sbit  I2CTRN_3_I2C2TRN_bit at I2C2TRN.B3;
    sbit  I2CTRN_2_I2C2TRN_bit at I2C2TRN.B2;
    sbit  I2CTRN_1_I2C2TRN_bit at I2C2TRN.B1;
    sbit  I2CTRN_0_I2C2TRN_bit at I2C2TRN.B0;

    // I2C2BRG bits
    sbit  I2CBRG_8_I2C2BRG_bit at I2C2BRG.B8;
    sbit  I2CBRG_7_I2C2BRG_bit at I2C2BRG.B7;
    sbit  I2CBRG_6_I2C2BRG_bit at I2C2BRG.B6;
    sbit  I2CBRG_5_I2C2BRG_bit at I2C2BRG.B5;
    sbit  I2CBRG_4_I2C2BRG_bit at I2C2BRG.B4;
    sbit  I2CBRG_3_I2C2BRG_bit at I2C2BRG.B3;
    sbit  I2CBRG_2_I2C2BRG_bit at I2C2BRG.B2;
    sbit  I2CBRG_1_I2C2BRG_bit at I2C2BRG.B1;
    sbit  I2CBRG_0_I2C2BRG_bit at I2C2BRG.B0;

    // I2C2CON bits
    sbit  I2CEN_I2C2CON_bit at I2C2CON.B15;
    sbit  I2CSIDL_I2C2CON_bit at I2C2CON.B13;
    sbit  SCLREL_I2C2CON_bit at I2C2CON.B12;
    sbit  IPMIEN_I2C2CON_bit at I2C2CON.B11;
    sbit  A10M_I2C2CON_bit at I2C2CON.B10;
    sbit  DISSLW_I2C2CON_bit at I2C2CON.B9;
    sbit  SMEN_I2C2CON_bit at I2C2CON.B8;
    sbit  GCEN_I2C2CON_bit at I2C2CON.B7;
    sbit  STREN_I2C2CON_bit at I2C2CON.B6;
    sbit  ACKDT_I2C2CON_bit at I2C2CON.B5;
    sbit  ACKEN_I2C2CON_bit at I2C2CON.B4;
    sbit  RCEN_I2C2CON_bit at I2C2CON.B3;
    sbit  PEN_I2C2CON_bit at I2C2CON.B2;
    sbit  RSEN_I2C2CON_bit at I2C2CON.B1;
    sbit  SEN_I2C2CON_bit at I2C2CON.B0;

    // I2C2STAT bits
    sbit  ACKSTAT_I2C2STAT_bit at I2C2STAT.B15;
    sbit  TRSTAT_I2C2STAT_bit at I2C2STAT.B14;
    sbit  BCL_I2C2STAT_bit at I2C2STAT.B10;
    sbit  GCSTAT_I2C2STAT_bit at I2C2STAT.B9;
    sbit  ADD10_I2C2STAT_bit at I2C2STAT.B8;
    sbit  IWCOL_I2C2STAT_bit at I2C2STAT.B7;
    sbit  I2COV_I2C2STAT_bit at I2C2STAT.B6;
    sbit  D_A_I2C2STAT_bit at I2C2STAT.B5;
    sbit  P_I2C2STAT_bit at I2C2STAT.B4;
    sbit  S_I2C2STAT_bit at I2C2STAT.B3;
    sbit  R_W_I2C2STAT_bit at I2C2STAT.B2;
    sbit  RBF_I2C2STAT_bit at I2C2STAT.B1;
    sbit  TBF_I2C2STAT_bit at I2C2STAT.B0;

    // I2C2ADD bits
    sbit  I2CADD_9_I2C2ADD_bit at I2C2ADD.B9;
    sbit  I2CADD_8_I2C2ADD_bit at I2C2ADD.B8;
    sbit  I2CADD_7_I2C2ADD_bit at I2C2ADD.B7;
    sbit  I2CADD_6_I2C2ADD_bit at I2C2ADD.B6;
    sbit  I2CADD_5_I2C2ADD_bit at I2C2ADD.B5;
    sbit  I2CADD_4_I2C2ADD_bit at I2C2ADD.B4;
    sbit  I2CADD_3_I2C2ADD_bit at I2C2ADD.B3;
    sbit  I2CADD_2_I2C2ADD_bit at I2C2ADD.B2;
    sbit  I2CADD_1_I2C2ADD_bit at I2C2ADD.B1;
    sbit  I2CADD_0_I2C2ADD_bit at I2C2ADD.B0;

    // I2C2MSK bits
    sbit  AMSK_9_I2C2MSK_bit at I2C2MSK.B9;
    sbit  AMSK_8_I2C2MSK_bit at I2C2MSK.B8;
    sbit  AMSK_7_I2C2MSK_bit at I2C2MSK.B7;
    sbit  AMSK_6_I2C2MSK_bit at I2C2MSK.B6;
    sbit  AMSK_5_I2C2MSK_bit at I2C2MSK.B5;
    sbit  AMSK_4_I2C2MSK_bit at I2C2MSK.B4;
    sbit  AMSK_3_I2C2MSK_bit at I2C2MSK.B3;
    sbit  AMSK_2_I2C2MSK_bit at I2C2MSK.B2;
    sbit  AMSK_1_I2C2MSK_bit at I2C2MSK.B1;
    sbit  AMSK_0_I2C2MSK_bit at I2C2MSK.B0;

    // U1MODE bits
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    sbit  UARTEN_U1MODE_bit at U1MODE.B15;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    sbit  USIDL_U1MODE_bit at U1MODE.B13;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    sbit  IREN_U1MODE_bit at U1MODE.B12;
    const register unsigned short int RTSMD = 11;
    sbit  RTSMD_bit at U1MODE.B11;
    sbit  RTSMD_U1MODE_bit at U1MODE.B11;
    const register unsigned short int UEN_1 = 9;
    sbit  UEN_1_bit at U1MODE.B9;
    sbit  UEN_1_U1MODE_bit at U1MODE.B9;
    const register unsigned short int UEN_0 = 8;
    sbit  UEN_0_bit at U1MODE.B8;
    sbit  UEN_0_U1MODE_bit at U1MODE.B8;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    sbit  WAKE_U1MODE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    sbit  LPBACK_U1MODE_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    sbit  ABAUD_U1MODE_bit at U1MODE.B5;
    const register unsigned short int URXINV = 4;
    sbit  URXINV_bit at U1MODE.B4;
    sbit  URXINV_U1MODE_bit at U1MODE.B4;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    sbit  BRGH_U1MODE_bit at U1MODE.B3;
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
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    sbit  UTXISEL1_U1STA_bit at U1STA.B15;
    const register unsigned short int UTXINV = 14;
    sbit  UTXINV_bit at U1STA.B14;
    sbit  UTXINV_U1STA_bit at U1STA.B14;
    const register unsigned short int UTXISEL0 = 13;
    sbit  UTXISEL0_bit at U1STA.B13;
    sbit  UTXISEL0_U1STA_bit at U1STA.B13;
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
    sbit  IREN_U2MODE_bit at U2MODE.B12;
    sbit  RTSMD_U2MODE_bit at U2MODE.B11;
    sbit  UEN_1_U2MODE_bit at U2MODE.B9;
    sbit  UEN_0_U2MODE_bit at U2MODE.B8;
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  URXINV_U2MODE_bit at U2MODE.B4;
    sbit  BRGH_U2MODE_bit at U2MODE.B3;
    sbit  PDSEL_1_U2MODE_bit at U2MODE.B2;
    sbit  PDSEL_0_U2MODE_bit at U2MODE.B1;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;

    // U2STA bits
    sbit  UTXISEL1_U2STA_bit at U2STA.B15;
    sbit  UTXINV_U2STA_bit at U2STA.B14;
    sbit  UTXISEL0_U2STA_bit at U2STA.B13;
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
    const register unsigned short int SPIBEC_2 = 10;
    sbit  SPIBEC_2_bit at SPI1STAT.B10;
    sbit  SPIBEC_2_SPI1STAT_bit at SPI1STAT.B10;
    const register unsigned short int SPIBEC_1 = 9;
    sbit  SPIBEC_1_bit at SPI1STAT.B9;
    sbit  SPIBEC_1_SPI1STAT_bit at SPI1STAT.B9;
    const register unsigned short int SPIBEC_0 = 8;
    sbit  SPIBEC_0_bit at SPI1STAT.B8;
    sbit  SPIBEC_0_SPI1STAT_bit at SPI1STAT.B8;
    const register unsigned short int SRMPT = 7;
    sbit  SRMPT_bit at SPI1STAT.B7;
    sbit  SRMPT_SPI1STAT_bit at SPI1STAT.B7;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    sbit  SPIROV_SPI1STAT_bit at SPI1STAT.B6;
    const register unsigned short int SRXMPT = 5;
    sbit  SRXMPT_bit at SPI1STAT.B5;
    sbit  SRXMPT_SPI1STAT_bit at SPI1STAT.B5;
    const register unsigned short int SISEL_2 = 4;
    sbit  SISEL_2_bit at SPI1STAT.B4;
    sbit  SISEL_2_SPI1STAT_bit at SPI1STAT.B4;
    const register unsigned short int SISEL_1 = 3;
    sbit  SISEL_1_bit at SPI1STAT.B3;
    sbit  SISEL_1_SPI1STAT_bit at SPI1STAT.B3;
    const register unsigned short int SISEL_0 = 2;
    sbit  SISEL_0_bit at SPI1STAT.B2;
    sbit  SISEL_0_SPI1STAT_bit at SPI1STAT.B2;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    sbit  SPITBF_SPI1STAT_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;
    sbit  SPIRBF_SPI1STAT_bit at SPI1STAT.B0;

    // SPI1CON1 bits
    const register unsigned short int DISSCK = 12;
    sbit  DISSCK_bit at SPI1CON1.B12;
    sbit  DISSCK_SPI1CON1_bit at SPI1CON1.B12;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON1.B11;
    sbit  DISSDO_SPI1CON1_bit at SPI1CON1.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON1.B10;
    sbit  MODE16_SPI1CON1_bit at SPI1CON1.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON1.B9;
    sbit  SMP_SPI1CON1_bit at SPI1CON1.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON1.B8;
    sbit  CKE_SPI1CON1_bit at SPI1CON1.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON1.B7;
    sbit  SSEN_SPI1CON1_bit at SPI1CON1.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON1.B6;
    sbit  CKP_SPI1CON1_bit at SPI1CON1.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON1.B5;
    sbit  MSTEN_SPI1CON1_bit at SPI1CON1.B5;
    const register unsigned short int SPRE_2 = 4;
    sbit  SPRE_2_bit at SPI1CON1.B4;
    sbit  SPRE_2_SPI1CON1_bit at SPI1CON1.B4;
    const register unsigned short int SPRE_1 = 3;
    sbit  SPRE_1_bit at SPI1CON1.B3;
    sbit  SPRE_1_SPI1CON1_bit at SPI1CON1.B3;
    const register unsigned short int SPRE_0 = 2;
    sbit  SPRE_0_bit at SPI1CON1.B2;
    sbit  SPRE_0_SPI1CON1_bit at SPI1CON1.B2;
    const register unsigned short int PPRE_1 = 1;
    sbit  PPRE_1_bit at SPI1CON1.B1;
    sbit  PPRE_1_SPI1CON1_bit at SPI1CON1.B1;
    const register unsigned short int PPRE_0 = 0;
    sbit  PPRE_0_bit at SPI1CON1.B0;
    sbit  PPRE_0_SPI1CON1_bit at SPI1CON1.B0;

    // SPI1CON2 bits
    const register unsigned short int FRMEN = 15;
    sbit  FRMEN_bit at SPI1CON2.B15;
    sbit  FRMEN_SPI1CON2_bit at SPI1CON2.B15;
    const register unsigned short int SPIFSD = 14;
    sbit  SPIFSD_bit at SPI1CON2.B14;
    sbit  SPIFSD_SPI1CON2_bit at SPI1CON2.B14;
    const register unsigned short int FRMPOL = 13;
    sbit  FRMPOL_bit at SPI1CON2.B13;
    sbit  FRMPOL_SPI1CON2_bit at SPI1CON2.B13;
    const register unsigned short int FRMDLY = 1;
    sbit  FRMDLY_bit at SPI1CON2.B1;
    sbit  FRMDLY_SPI1CON2_bit at SPI1CON2.B1;
    const register unsigned short int SPIBEN = 0;
    sbit  SPIBEN_bit at SPI1CON2.B0;
    sbit  SPIBEN_SPI1CON2_bit at SPI1CON2.B0;

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
    sbit  SPIBEC_2_SPI2STAT_bit at SPI2STAT.B10;
    sbit  SPIBEC_1_SPI2STAT_bit at SPI2STAT.B9;
    sbit  SPIBEC_0_SPI2STAT_bit at SPI2STAT.B8;
    sbit  SRMPT_SPI2STAT_bit at SPI2STAT.B7;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
    sbit  SRXMPT_SPI2STAT_bit at SPI2STAT.B5;
    sbit  SISEL_2_SPI2STAT_bit at SPI2STAT.B4;
    sbit  SISEL_1_SPI2STAT_bit at SPI2STAT.B3;
    sbit  SISEL_0_SPI2STAT_bit at SPI2STAT.B2;
    sbit  SPITBF_SPI2STAT_bit at SPI2STAT.B1;
    sbit  SPIRBF_SPI2STAT_bit at SPI2STAT.B0;

    // SPI2CON1 bits
    sbit  DISSCK_SPI2CON1_bit at SPI2CON1.B12;
    sbit  DISSDO_SPI2CON1_bit at SPI2CON1.B11;
    sbit  MODE16_SPI2CON1_bit at SPI2CON1.B10;
    sbit  SMP_SPI2CON1_bit at SPI2CON1.B9;
    sbit  CKE_SPI2CON1_bit at SPI2CON1.B8;
    sbit  SSEN_SPI2CON1_bit at SPI2CON1.B7;
    sbit  CKP_SPI2CON1_bit at SPI2CON1.B6;
    sbit  MSTEN_SPI2CON1_bit at SPI2CON1.B5;
    sbit  SPRE_2_SPI2CON1_bit at SPI2CON1.B4;
    sbit  SPRE_1_SPI2CON1_bit at SPI2CON1.B3;
    sbit  SPRE_0_SPI2CON1_bit at SPI2CON1.B2;
    sbit  PPRE_1_SPI2CON1_bit at SPI2CON1.B1;
    sbit  PPRE_0_SPI2CON1_bit at SPI2CON1.B0;

    // SPI2CON2 bits
    sbit  FRMEN_SPI2CON2_bit at SPI2CON2.B15;
    sbit  SPIFSD_SPI2CON2_bit at SPI2CON2.B14;
    sbit  FRMPOL_SPI2CON2_bit at SPI2CON2.B13;
    sbit  FRMDLY_SPI2CON2_bit at SPI2CON2.B1;
    sbit  SPIBEN_SPI2CON2_bit at SPI2CON2.B0;

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

    // ADC1BUF0 bits
    const register unsigned short int ADC1BUF0_15 = 15;
    sbit  ADC1BUF0_15_bit at ADC1BUF0.B15;
    const register unsigned short int ADC1BUF0_14 = 14;
    sbit  ADC1BUF0_14_bit at ADC1BUF0.B14;
    const register unsigned short int ADC1BUF0_13 = 13;
    sbit  ADC1BUF0_13_bit at ADC1BUF0.B13;
    const register unsigned short int ADC1BUF0_12 = 12;
    sbit  ADC1BUF0_12_bit at ADC1BUF0.B12;
    const register unsigned short int ADC1BUF0_11 = 11;
    sbit  ADC1BUF0_11_bit at ADC1BUF0.B11;
    const register unsigned short int ADC1BUF0_10 = 10;
    sbit  ADC1BUF0_10_bit at ADC1BUF0.B10;
    const register unsigned short int ADC1BUF0_9 = 9;
    sbit  ADC1BUF0_9_bit at ADC1BUF0.B9;
    const register unsigned short int ADC1BUF0_8 = 8;
    sbit  ADC1BUF0_8_bit at ADC1BUF0.B8;
    const register unsigned short int ADC1BUF0_7 = 7;
    sbit  ADC1BUF0_7_bit at ADC1BUF0.B7;
    const register unsigned short int ADC1BUF0_6 = 6;
    sbit  ADC1BUF0_6_bit at ADC1BUF0.B6;
    const register unsigned short int ADC1BUF0_5 = 5;
    sbit  ADC1BUF0_5_bit at ADC1BUF0.B5;
    const register unsigned short int ADC1BUF0_4 = 4;
    sbit  ADC1BUF0_4_bit at ADC1BUF0.B4;
    const register unsigned short int ADC1BUF0_3 = 3;
    sbit  ADC1BUF0_3_bit at ADC1BUF0.B3;
    const register unsigned short int ADC1BUF0_2 = 2;
    sbit  ADC1BUF0_2_bit at ADC1BUF0.B2;
    const register unsigned short int ADC1BUF0_1 = 1;
    sbit  ADC1BUF0_1_bit at ADC1BUF0.B1;
    const register unsigned short int ADC1BUF0_0 = 0;
    sbit  ADC1BUF0_0_bit at ADC1BUF0.B0;

    // ADC1BUF1 bits
    const register unsigned short int ADC1BUF1_15 = 15;
    sbit  ADC1BUF1_15_bit at ADC1BUF1.B15;
    const register unsigned short int ADC1BUF1_14 = 14;
    sbit  ADC1BUF1_14_bit at ADC1BUF1.B14;
    const register unsigned short int ADC1BUF1_13 = 13;
    sbit  ADC1BUF1_13_bit at ADC1BUF1.B13;
    const register unsigned short int ADC1BUF1_12 = 12;
    sbit  ADC1BUF1_12_bit at ADC1BUF1.B12;
    const register unsigned short int ADC1BUF1_11 = 11;
    sbit  ADC1BUF1_11_bit at ADC1BUF1.B11;
    const register unsigned short int ADC1BUF1_10 = 10;
    sbit  ADC1BUF1_10_bit at ADC1BUF1.B10;
    const register unsigned short int ADC1BUF1_9 = 9;
    sbit  ADC1BUF1_9_bit at ADC1BUF1.B9;
    const register unsigned short int ADC1BUF1_8 = 8;
    sbit  ADC1BUF1_8_bit at ADC1BUF1.B8;
    const register unsigned short int ADC1BUF1_7 = 7;
    sbit  ADC1BUF1_7_bit at ADC1BUF1.B7;
    const register unsigned short int ADC1BUF1_6 = 6;
    sbit  ADC1BUF1_6_bit at ADC1BUF1.B6;
    const register unsigned short int ADC1BUF1_5 = 5;
    sbit  ADC1BUF1_5_bit at ADC1BUF1.B5;
    const register unsigned short int ADC1BUF1_4 = 4;
    sbit  ADC1BUF1_4_bit at ADC1BUF1.B4;
    const register unsigned short int ADC1BUF1_3 = 3;
    sbit  ADC1BUF1_3_bit at ADC1BUF1.B3;
    const register unsigned short int ADC1BUF1_2 = 2;
    sbit  ADC1BUF1_2_bit at ADC1BUF1.B2;
    const register unsigned short int ADC1BUF1_1 = 1;
    sbit  ADC1BUF1_1_bit at ADC1BUF1.B1;
    const register unsigned short int ADC1BUF1_0 = 0;
    sbit  ADC1BUF1_0_bit at ADC1BUF1.B0;

    // ADC1BUF2 bits
    const register unsigned short int ADC1BUF2_15 = 15;
    sbit  ADC1BUF2_15_bit at ADC1BUF2.B15;
    const register unsigned short int ADC1BUF2_14 = 14;
    sbit  ADC1BUF2_14_bit at ADC1BUF2.B14;
    const register unsigned short int ADC1BUF2_13 = 13;
    sbit  ADC1BUF2_13_bit at ADC1BUF2.B13;
    const register unsigned short int ADC1BUF2_12 = 12;
    sbit  ADC1BUF2_12_bit at ADC1BUF2.B12;
    const register unsigned short int ADC1BUF2_11 = 11;
    sbit  ADC1BUF2_11_bit at ADC1BUF2.B11;
    const register unsigned short int ADC1BUF2_10 = 10;
    sbit  ADC1BUF2_10_bit at ADC1BUF2.B10;
    const register unsigned short int ADC1BUF2_9 = 9;
    sbit  ADC1BUF2_9_bit at ADC1BUF2.B9;
    const register unsigned short int ADC1BUF2_8 = 8;
    sbit  ADC1BUF2_8_bit at ADC1BUF2.B8;
    const register unsigned short int ADC1BUF2_7 = 7;
    sbit  ADC1BUF2_7_bit at ADC1BUF2.B7;
    const register unsigned short int ADC1BUF2_6 = 6;
    sbit  ADC1BUF2_6_bit at ADC1BUF2.B6;
    const register unsigned short int ADC1BUF2_5 = 5;
    sbit  ADC1BUF2_5_bit at ADC1BUF2.B5;
    const register unsigned short int ADC1BUF2_4 = 4;
    sbit  ADC1BUF2_4_bit at ADC1BUF2.B4;
    const register unsigned short int ADC1BUF2_3 = 3;
    sbit  ADC1BUF2_3_bit at ADC1BUF2.B3;
    const register unsigned short int ADC1BUF2_2 = 2;
    sbit  ADC1BUF2_2_bit at ADC1BUF2.B2;
    const register unsigned short int ADC1BUF2_1 = 1;
    sbit  ADC1BUF2_1_bit at ADC1BUF2.B1;
    const register unsigned short int ADC1BUF2_0 = 0;
    sbit  ADC1BUF2_0_bit at ADC1BUF2.B0;

    // ADC1BUF3 bits
    const register unsigned short int ADC1BUF3_15 = 15;
    sbit  ADC1BUF3_15_bit at ADC1BUF3.B15;
    const register unsigned short int ADC1BUF3_14 = 14;
    sbit  ADC1BUF3_14_bit at ADC1BUF3.B14;
    const register unsigned short int ADC1BUF3_13 = 13;
    sbit  ADC1BUF3_13_bit at ADC1BUF3.B13;
    const register unsigned short int ADC1BUF3_12 = 12;
    sbit  ADC1BUF3_12_bit at ADC1BUF3.B12;
    const register unsigned short int ADC1BUF3_11 = 11;
    sbit  ADC1BUF3_11_bit at ADC1BUF3.B11;
    const register unsigned short int ADC1BUF3_10 = 10;
    sbit  ADC1BUF3_10_bit at ADC1BUF3.B10;
    const register unsigned short int ADC1BUF3_9 = 9;
    sbit  ADC1BUF3_9_bit at ADC1BUF3.B9;
    const register unsigned short int ADC1BUF3_8 = 8;
    sbit  ADC1BUF3_8_bit at ADC1BUF3.B8;
    const register unsigned short int ADC1BUF3_7 = 7;
    sbit  ADC1BUF3_7_bit at ADC1BUF3.B7;
    const register unsigned short int ADC1BUF3_6 = 6;
    sbit  ADC1BUF3_6_bit at ADC1BUF3.B6;
    const register unsigned short int ADC1BUF3_5 = 5;
    sbit  ADC1BUF3_5_bit at ADC1BUF3.B5;
    const register unsigned short int ADC1BUF3_4 = 4;
    sbit  ADC1BUF3_4_bit at ADC1BUF3.B4;
    const register unsigned short int ADC1BUF3_3 = 3;
    sbit  ADC1BUF3_3_bit at ADC1BUF3.B3;
    const register unsigned short int ADC1BUF3_2 = 2;
    sbit  ADC1BUF3_2_bit at ADC1BUF3.B2;
    const register unsigned short int ADC1BUF3_1 = 1;
    sbit  ADC1BUF3_1_bit at ADC1BUF3.B1;
    const register unsigned short int ADC1BUF3_0 = 0;
    sbit  ADC1BUF3_0_bit at ADC1BUF3.B0;

    // ADC1BUF4 bits
    const register unsigned short int ADC1BUF4_15 = 15;
    sbit  ADC1BUF4_15_bit at ADC1BUF4.B15;
    const register unsigned short int ADC1BUF4_14 = 14;
    sbit  ADC1BUF4_14_bit at ADC1BUF4.B14;
    const register unsigned short int ADC1BUF4_13 = 13;
    sbit  ADC1BUF4_13_bit at ADC1BUF4.B13;
    const register unsigned short int ADC1BUF4_12 = 12;
    sbit  ADC1BUF4_12_bit at ADC1BUF4.B12;
    const register unsigned short int ADC1BUF4_11 = 11;
    sbit  ADC1BUF4_11_bit at ADC1BUF4.B11;
    const register unsigned short int ADC1BUF4_10 = 10;
    sbit  ADC1BUF4_10_bit at ADC1BUF4.B10;
    const register unsigned short int ADC1BUF4_9 = 9;
    sbit  ADC1BUF4_9_bit at ADC1BUF4.B9;
    const register unsigned short int ADC1BUF4_8 = 8;
    sbit  ADC1BUF4_8_bit at ADC1BUF4.B8;
    const register unsigned short int ADC1BUF4_7 = 7;
    sbit  ADC1BUF4_7_bit at ADC1BUF4.B7;
    const register unsigned short int ADC1BUF4_6 = 6;
    sbit  ADC1BUF4_6_bit at ADC1BUF4.B6;
    const register unsigned short int ADC1BUF4_5 = 5;
    sbit  ADC1BUF4_5_bit at ADC1BUF4.B5;
    const register unsigned short int ADC1BUF4_4 = 4;
    sbit  ADC1BUF4_4_bit at ADC1BUF4.B4;
    const register unsigned short int ADC1BUF4_3 = 3;
    sbit  ADC1BUF4_3_bit at ADC1BUF4.B3;
    const register unsigned short int ADC1BUF4_2 = 2;
    sbit  ADC1BUF4_2_bit at ADC1BUF4.B2;
    const register unsigned short int ADC1BUF4_1 = 1;
    sbit  ADC1BUF4_1_bit at ADC1BUF4.B1;
    const register unsigned short int ADC1BUF4_0 = 0;
    sbit  ADC1BUF4_0_bit at ADC1BUF4.B0;

    // ADC1BUF5 bits
    const register unsigned short int ADC1BUF5_15 = 15;
    sbit  ADC1BUF5_15_bit at ADC1BUF5.B15;
    const register unsigned short int ADC1BUF5_14 = 14;
    sbit  ADC1BUF5_14_bit at ADC1BUF5.B14;
    const register unsigned short int ADC1BUF5_13 = 13;
    sbit  ADC1BUF5_13_bit at ADC1BUF5.B13;
    const register unsigned short int ADC1BUF5_12 = 12;
    sbit  ADC1BUF5_12_bit at ADC1BUF5.B12;
    const register unsigned short int ADC1BUF5_11 = 11;
    sbit  ADC1BUF5_11_bit at ADC1BUF5.B11;
    const register unsigned short int ADC1BUF5_10 = 10;
    sbit  ADC1BUF5_10_bit at ADC1BUF5.B10;
    const register unsigned short int ADC1BUF5_9 = 9;
    sbit  ADC1BUF5_9_bit at ADC1BUF5.B9;
    const register unsigned short int ADC1BUF5_8 = 8;
    sbit  ADC1BUF5_8_bit at ADC1BUF5.B8;
    const register unsigned short int ADC1BUF5_7 = 7;
    sbit  ADC1BUF5_7_bit at ADC1BUF5.B7;
    const register unsigned short int ADC1BUF5_6 = 6;
    sbit  ADC1BUF5_6_bit at ADC1BUF5.B6;
    const register unsigned short int ADC1BUF5_5 = 5;
    sbit  ADC1BUF5_5_bit at ADC1BUF5.B5;
    const register unsigned short int ADC1BUF5_4 = 4;
    sbit  ADC1BUF5_4_bit at ADC1BUF5.B4;
    const register unsigned short int ADC1BUF5_3 = 3;
    sbit  ADC1BUF5_3_bit at ADC1BUF5.B3;
    const register unsigned short int ADC1BUF5_2 = 2;
    sbit  ADC1BUF5_2_bit at ADC1BUF5.B2;
    const register unsigned short int ADC1BUF5_1 = 1;
    sbit  ADC1BUF5_1_bit at ADC1BUF5.B1;
    const register unsigned short int ADC1BUF5_0 = 0;
    sbit  ADC1BUF5_0_bit at ADC1BUF5.B0;

    // ADC1BUF6 bits
    const register unsigned short int ADC1BUF6_15 = 15;
    sbit  ADC1BUF6_15_bit at ADC1BUF6.B15;
    const register unsigned short int ADC1BUF6_14 = 14;
    sbit  ADC1BUF6_14_bit at ADC1BUF6.B14;
    const register unsigned short int ADC1BUF6_13 = 13;
    sbit  ADC1BUF6_13_bit at ADC1BUF6.B13;
    const register unsigned short int ADC1BUF6_12 = 12;
    sbit  ADC1BUF6_12_bit at ADC1BUF6.B12;
    const register unsigned short int ADC1BUF6_11 = 11;
    sbit  ADC1BUF6_11_bit at ADC1BUF6.B11;
    const register unsigned short int ADC1BUF6_10 = 10;
    sbit  ADC1BUF6_10_bit at ADC1BUF6.B10;
    const register unsigned short int ADC1BUF6_9 = 9;
    sbit  ADC1BUF6_9_bit at ADC1BUF6.B9;
    const register unsigned short int ADC1BUF6_8 = 8;
    sbit  ADC1BUF6_8_bit at ADC1BUF6.B8;
    const register unsigned short int ADC1BUF6_7 = 7;
    sbit  ADC1BUF6_7_bit at ADC1BUF6.B7;
    const register unsigned short int ADC1BUF6_6 = 6;
    sbit  ADC1BUF6_6_bit at ADC1BUF6.B6;
    const register unsigned short int ADC1BUF6_5 = 5;
    sbit  ADC1BUF6_5_bit at ADC1BUF6.B5;
    const register unsigned short int ADC1BUF6_4 = 4;
    sbit  ADC1BUF6_4_bit at ADC1BUF6.B4;
    const register unsigned short int ADC1BUF6_3 = 3;
    sbit  ADC1BUF6_3_bit at ADC1BUF6.B3;
    const register unsigned short int ADC1BUF6_2 = 2;
    sbit  ADC1BUF6_2_bit at ADC1BUF6.B2;
    const register unsigned short int ADC1BUF6_1 = 1;
    sbit  ADC1BUF6_1_bit at ADC1BUF6.B1;
    const register unsigned short int ADC1BUF6_0 = 0;
    sbit  ADC1BUF6_0_bit at ADC1BUF6.B0;

    // ADC1BUF7 bits
    const register unsigned short int ADC1BUF7_15 = 15;
    sbit  ADC1BUF7_15_bit at ADC1BUF7.B15;
    const register unsigned short int ADC1BUF7_14 = 14;
    sbit  ADC1BUF7_14_bit at ADC1BUF7.B14;
    const register unsigned short int ADC1BUF7_13 = 13;
    sbit  ADC1BUF7_13_bit at ADC1BUF7.B13;
    const register unsigned short int ADC1BUF7_12 = 12;
    sbit  ADC1BUF7_12_bit at ADC1BUF7.B12;
    const register unsigned short int ADC1BUF7_11 = 11;
    sbit  ADC1BUF7_11_bit at ADC1BUF7.B11;
    const register unsigned short int ADC1BUF7_10 = 10;
    sbit  ADC1BUF7_10_bit at ADC1BUF7.B10;
    const register unsigned short int ADC1BUF7_9 = 9;
    sbit  ADC1BUF7_9_bit at ADC1BUF7.B9;
    const register unsigned short int ADC1BUF7_8 = 8;
    sbit  ADC1BUF7_8_bit at ADC1BUF7.B8;
    const register unsigned short int ADC1BUF7_7 = 7;
    sbit  ADC1BUF7_7_bit at ADC1BUF7.B7;
    const register unsigned short int ADC1BUF7_6 = 6;
    sbit  ADC1BUF7_6_bit at ADC1BUF7.B6;
    const register unsigned short int ADC1BUF7_5 = 5;
    sbit  ADC1BUF7_5_bit at ADC1BUF7.B5;
    const register unsigned short int ADC1BUF7_4 = 4;
    sbit  ADC1BUF7_4_bit at ADC1BUF7.B4;
    const register unsigned short int ADC1BUF7_3 = 3;
    sbit  ADC1BUF7_3_bit at ADC1BUF7.B3;
    const register unsigned short int ADC1BUF7_2 = 2;
    sbit  ADC1BUF7_2_bit at ADC1BUF7.B2;
    const register unsigned short int ADC1BUF7_1 = 1;
    sbit  ADC1BUF7_1_bit at ADC1BUF7.B1;
    const register unsigned short int ADC1BUF7_0 = 0;
    sbit  ADC1BUF7_0_bit at ADC1BUF7.B0;

    // ADC1BUF8 bits
    const register unsigned short int ADC1BUF8_15 = 15;
    sbit  ADC1BUF8_15_bit at ADC1BUF8.B15;
    const register unsigned short int ADC1BUF8_14 = 14;
    sbit  ADC1BUF8_14_bit at ADC1BUF8.B14;
    const register unsigned short int ADC1BUF8_13 = 13;
    sbit  ADC1BUF8_13_bit at ADC1BUF8.B13;
    const register unsigned short int ADC1BUF8_12 = 12;
    sbit  ADC1BUF8_12_bit at ADC1BUF8.B12;
    const register unsigned short int ADC1BUF8_11 = 11;
    sbit  ADC1BUF8_11_bit at ADC1BUF8.B11;
    const register unsigned short int ADC1BUF8_10 = 10;
    sbit  ADC1BUF8_10_bit at ADC1BUF8.B10;
    const register unsigned short int ADC1BUF8_9 = 9;
    sbit  ADC1BUF8_9_bit at ADC1BUF8.B9;
    const register unsigned short int ADC1BUF8_8 = 8;
    sbit  ADC1BUF8_8_bit at ADC1BUF8.B8;
    const register unsigned short int ADC1BUF8_7 = 7;
    sbit  ADC1BUF8_7_bit at ADC1BUF8.B7;
    const register unsigned short int ADC1BUF8_6 = 6;
    sbit  ADC1BUF8_6_bit at ADC1BUF8.B6;
    const register unsigned short int ADC1BUF8_5 = 5;
    sbit  ADC1BUF8_5_bit at ADC1BUF8.B5;
    const register unsigned short int ADC1BUF8_4 = 4;
    sbit  ADC1BUF8_4_bit at ADC1BUF8.B4;
    const register unsigned short int ADC1BUF8_3 = 3;
    sbit  ADC1BUF8_3_bit at ADC1BUF8.B3;
    const register unsigned short int ADC1BUF8_2 = 2;
    sbit  ADC1BUF8_2_bit at ADC1BUF8.B2;
    const register unsigned short int ADC1BUF8_1 = 1;
    sbit  ADC1BUF8_1_bit at ADC1BUF8.B1;
    const register unsigned short int ADC1BUF8_0 = 0;
    sbit  ADC1BUF8_0_bit at ADC1BUF8.B0;

    // ADC1BUF9 bits
    const register unsigned short int ADC1BUF9_15 = 15;
    sbit  ADC1BUF9_15_bit at ADC1BUF9.B15;
    const register unsigned short int ADC1BUF9_14 = 14;
    sbit  ADC1BUF9_14_bit at ADC1BUF9.B14;
    const register unsigned short int ADC1BUF9_13 = 13;
    sbit  ADC1BUF9_13_bit at ADC1BUF9.B13;
    const register unsigned short int ADC1BUF9_12 = 12;
    sbit  ADC1BUF9_12_bit at ADC1BUF9.B12;
    const register unsigned short int ADC1BUF9_11 = 11;
    sbit  ADC1BUF9_11_bit at ADC1BUF9.B11;
    const register unsigned short int ADC1BUF9_10 = 10;
    sbit  ADC1BUF9_10_bit at ADC1BUF9.B10;
    const register unsigned short int ADC1BUF9_9 = 9;
    sbit  ADC1BUF9_9_bit at ADC1BUF9.B9;
    const register unsigned short int ADC1BUF9_8 = 8;
    sbit  ADC1BUF9_8_bit at ADC1BUF9.B8;
    const register unsigned short int ADC1BUF9_7 = 7;
    sbit  ADC1BUF9_7_bit at ADC1BUF9.B7;
    const register unsigned short int ADC1BUF9_6 = 6;
    sbit  ADC1BUF9_6_bit at ADC1BUF9.B6;
    const register unsigned short int ADC1BUF9_5 = 5;
    sbit  ADC1BUF9_5_bit at ADC1BUF9.B5;
    const register unsigned short int ADC1BUF9_4 = 4;
    sbit  ADC1BUF9_4_bit at ADC1BUF9.B4;
    const register unsigned short int ADC1BUF9_3 = 3;
    sbit  ADC1BUF9_3_bit at ADC1BUF9.B3;
    const register unsigned short int ADC1BUF9_2 = 2;
    sbit  ADC1BUF9_2_bit at ADC1BUF9.B2;
    const register unsigned short int ADC1BUF9_1 = 1;
    sbit  ADC1BUF9_1_bit at ADC1BUF9.B1;
    const register unsigned short int ADC1BUF9_0 = 0;
    sbit  ADC1BUF9_0_bit at ADC1BUF9.B0;

    // ADC1BUFA bits
    const register unsigned short int ADC1BUFA_15 = 15;
    sbit  ADC1BUFA_15_bit at ADC1BUFA.B15;
    const register unsigned short int ADC1BUFA_14 = 14;
    sbit  ADC1BUFA_14_bit at ADC1BUFA.B14;
    const register unsigned short int ADC1BUFA_13 = 13;
    sbit  ADC1BUFA_13_bit at ADC1BUFA.B13;
    const register unsigned short int ADC1BUFA_12 = 12;
    sbit  ADC1BUFA_12_bit at ADC1BUFA.B12;
    const register unsigned short int ADC1BUFA_11 = 11;
    sbit  ADC1BUFA_11_bit at ADC1BUFA.B11;
    const register unsigned short int ADC1BUFA_10 = 10;
    sbit  ADC1BUFA_10_bit at ADC1BUFA.B10;
    const register unsigned short int ADC1BUFA_9 = 9;
    sbit  ADC1BUFA_9_bit at ADC1BUFA.B9;
    const register unsigned short int ADC1BUFA_8 = 8;
    sbit  ADC1BUFA_8_bit at ADC1BUFA.B8;
    const register unsigned short int ADC1BUFA_7 = 7;
    sbit  ADC1BUFA_7_bit at ADC1BUFA.B7;
    const register unsigned short int ADC1BUFA_6 = 6;
    sbit  ADC1BUFA_6_bit at ADC1BUFA.B6;
    const register unsigned short int ADC1BUFA_5 = 5;
    sbit  ADC1BUFA_5_bit at ADC1BUFA.B5;
    const register unsigned short int ADC1BUFA_4 = 4;
    sbit  ADC1BUFA_4_bit at ADC1BUFA.B4;
    const register unsigned short int ADC1BUFA_3 = 3;
    sbit  ADC1BUFA_3_bit at ADC1BUFA.B3;
    const register unsigned short int ADC1BUFA_2 = 2;
    sbit  ADC1BUFA_2_bit at ADC1BUFA.B2;
    const register unsigned short int ADC1BUFA_1 = 1;
    sbit  ADC1BUFA_1_bit at ADC1BUFA.B1;
    const register unsigned short int ADC1BUFA_0 = 0;
    sbit  ADC1BUFA_0_bit at ADC1BUFA.B0;

    // ADC1BUFB bits
    const register unsigned short int ADC1BUFB_15 = 15;
    sbit  ADC1BUFB_15_bit at ADC1BUFB.B15;
    const register unsigned short int ADC1BUFB_14 = 14;
    sbit  ADC1BUFB_14_bit at ADC1BUFB.B14;
    const register unsigned short int ADC1BUFB_13 = 13;
    sbit  ADC1BUFB_13_bit at ADC1BUFB.B13;
    const register unsigned short int ADC1BUFB_12 = 12;
    sbit  ADC1BUFB_12_bit at ADC1BUFB.B12;
    const register unsigned short int ADC1BUFB_11 = 11;
    sbit  ADC1BUFB_11_bit at ADC1BUFB.B11;
    const register unsigned short int ADC1BUFB_10 = 10;
    sbit  ADC1BUFB_10_bit at ADC1BUFB.B10;
    const register unsigned short int ADC1BUFB_9 = 9;
    sbit  ADC1BUFB_9_bit at ADC1BUFB.B9;
    const register unsigned short int ADC1BUFB_8 = 8;
    sbit  ADC1BUFB_8_bit at ADC1BUFB.B8;
    const register unsigned short int ADC1BUFB_7 = 7;
    sbit  ADC1BUFB_7_bit at ADC1BUFB.B7;
    const register unsigned short int ADC1BUFB_6 = 6;
    sbit  ADC1BUFB_6_bit at ADC1BUFB.B6;
    const register unsigned short int ADC1BUFB_5 = 5;
    sbit  ADC1BUFB_5_bit at ADC1BUFB.B5;
    const register unsigned short int ADC1BUFB_4 = 4;
    sbit  ADC1BUFB_4_bit at ADC1BUFB.B4;
    const register unsigned short int ADC1BUFB_3 = 3;
    sbit  ADC1BUFB_3_bit at ADC1BUFB.B3;
    const register unsigned short int ADC1BUFB_2 = 2;
    sbit  ADC1BUFB_2_bit at ADC1BUFB.B2;
    const register unsigned short int ADC1BUFB_1 = 1;
    sbit  ADC1BUFB_1_bit at ADC1BUFB.B1;
    const register unsigned short int ADC1BUFB_0 = 0;
    sbit  ADC1BUFB_0_bit at ADC1BUFB.B0;

    // ADC1BUFC bits
    const register unsigned short int ADC1BUFC_15 = 15;
    sbit  ADC1BUFC_15_bit at ADC1BUFC.B15;
    const register unsigned short int ADC1BUFC_14 = 14;
    sbit  ADC1BUFC_14_bit at ADC1BUFC.B14;
    const register unsigned short int ADC1BUFC_13 = 13;
    sbit  ADC1BUFC_13_bit at ADC1BUFC.B13;
    const register unsigned short int ADC1BUFC_12 = 12;
    sbit  ADC1BUFC_12_bit at ADC1BUFC.B12;
    const register unsigned short int ADC1BUFC_11 = 11;
    sbit  ADC1BUFC_11_bit at ADC1BUFC.B11;
    const register unsigned short int ADC1BUFC_10 = 10;
    sbit  ADC1BUFC_10_bit at ADC1BUFC.B10;
    const register unsigned short int ADC1BUFC_9 = 9;
    sbit  ADC1BUFC_9_bit at ADC1BUFC.B9;
    const register unsigned short int ADC1BUFC_8 = 8;
    sbit  ADC1BUFC_8_bit at ADC1BUFC.B8;
    const register unsigned short int ADC1BUFC_7 = 7;
    sbit  ADC1BUFC_7_bit at ADC1BUFC.B7;
    const register unsigned short int ADC1BUFC_6 = 6;
    sbit  ADC1BUFC_6_bit at ADC1BUFC.B6;
    const register unsigned short int ADC1BUFC_5 = 5;
    sbit  ADC1BUFC_5_bit at ADC1BUFC.B5;
    const register unsigned short int ADC1BUFC_4 = 4;
    sbit  ADC1BUFC_4_bit at ADC1BUFC.B4;
    const register unsigned short int ADC1BUFC_3 = 3;
    sbit  ADC1BUFC_3_bit at ADC1BUFC.B3;
    const register unsigned short int ADC1BUFC_2 = 2;
    sbit  ADC1BUFC_2_bit at ADC1BUFC.B2;
    const register unsigned short int ADC1BUFC_1 = 1;
    sbit  ADC1BUFC_1_bit at ADC1BUFC.B1;
    const register unsigned short int ADC1BUFC_0 = 0;
    sbit  ADC1BUFC_0_bit at ADC1BUFC.B0;

    // ADC1BUFD bits
    const register unsigned short int ADC1BUFD_15 = 15;
    sbit  ADC1BUFD_15_bit at ADC1BUFD.B15;
    const register unsigned short int ADC1BUFD_14 = 14;
    sbit  ADC1BUFD_14_bit at ADC1BUFD.B14;
    const register unsigned short int ADC1BUFD_13 = 13;
    sbit  ADC1BUFD_13_bit at ADC1BUFD.B13;
    const register unsigned short int ADC1BUFD_12 = 12;
    sbit  ADC1BUFD_12_bit at ADC1BUFD.B12;
    const register unsigned short int ADC1BUFD_11 = 11;
    sbit  ADC1BUFD_11_bit at ADC1BUFD.B11;
    const register unsigned short int ADC1BUFD_10 = 10;
    sbit  ADC1BUFD_10_bit at ADC1BUFD.B10;
    const register unsigned short int ADC1BUFD_9 = 9;
    sbit  ADC1BUFD_9_bit at ADC1BUFD.B9;
    const register unsigned short int ADC1BUFD_8 = 8;
    sbit  ADC1BUFD_8_bit at ADC1BUFD.B8;
    const register unsigned short int ADC1BUFD_7 = 7;
    sbit  ADC1BUFD_7_bit at ADC1BUFD.B7;
    const register unsigned short int ADC1BUFD_6 = 6;
    sbit  ADC1BUFD_6_bit at ADC1BUFD.B6;
    const register unsigned short int ADC1BUFD_5 = 5;
    sbit  ADC1BUFD_5_bit at ADC1BUFD.B5;
    const register unsigned short int ADC1BUFD_4 = 4;
    sbit  ADC1BUFD_4_bit at ADC1BUFD.B4;
    const register unsigned short int ADC1BUFD_3 = 3;
    sbit  ADC1BUFD_3_bit at ADC1BUFD.B3;
    const register unsigned short int ADC1BUFD_2 = 2;
    sbit  ADC1BUFD_2_bit at ADC1BUFD.B2;
    const register unsigned short int ADC1BUFD_1 = 1;
    sbit  ADC1BUFD_1_bit at ADC1BUFD.B1;
    const register unsigned short int ADC1BUFD_0 = 0;
    sbit  ADC1BUFD_0_bit at ADC1BUFD.B0;

    // ADC1BUFE bits
    const register unsigned short int ADC1BUFE_15 = 15;
    sbit  ADC1BUFE_15_bit at ADC1BUFE.B15;
    const register unsigned short int ADC1BUFE_14 = 14;
    sbit  ADC1BUFE_14_bit at ADC1BUFE.B14;
    const register unsigned short int ADC1BUFE_13 = 13;
    sbit  ADC1BUFE_13_bit at ADC1BUFE.B13;
    const register unsigned short int ADC1BUFE_12 = 12;
    sbit  ADC1BUFE_12_bit at ADC1BUFE.B12;
    const register unsigned short int ADC1BUFE_11 = 11;
    sbit  ADC1BUFE_11_bit at ADC1BUFE.B11;
    const register unsigned short int ADC1BUFE_10 = 10;
    sbit  ADC1BUFE_10_bit at ADC1BUFE.B10;
    const register unsigned short int ADC1BUFE_9 = 9;
    sbit  ADC1BUFE_9_bit at ADC1BUFE.B9;
    const register unsigned short int ADC1BUFE_8 = 8;
    sbit  ADC1BUFE_8_bit at ADC1BUFE.B8;
    const register unsigned short int ADC1BUFE_7 = 7;
    sbit  ADC1BUFE_7_bit at ADC1BUFE.B7;
    const register unsigned short int ADC1BUFE_6 = 6;
    sbit  ADC1BUFE_6_bit at ADC1BUFE.B6;
    const register unsigned short int ADC1BUFE_5 = 5;
    sbit  ADC1BUFE_5_bit at ADC1BUFE.B5;
    const register unsigned short int ADC1BUFE_4 = 4;
    sbit  ADC1BUFE_4_bit at ADC1BUFE.B4;
    const register unsigned short int ADC1BUFE_3 = 3;
    sbit  ADC1BUFE_3_bit at ADC1BUFE.B3;
    const register unsigned short int ADC1BUFE_2 = 2;
    sbit  ADC1BUFE_2_bit at ADC1BUFE.B2;
    const register unsigned short int ADC1BUFE_1 = 1;
    sbit  ADC1BUFE_1_bit at ADC1BUFE.B1;
    const register unsigned short int ADC1BUFE_0 = 0;
    sbit  ADC1BUFE_0_bit at ADC1BUFE.B0;

    // ADC1BUFF bits
    const register unsigned short int ADC1BUFF_15 = 15;
    sbit  ADC1BUFF_15_bit at ADC1BUFF.B15;
    const register unsigned short int ADC1BUFF_14 = 14;
    sbit  ADC1BUFF_14_bit at ADC1BUFF.B14;
    const register unsigned short int ADC1BUFF_13 = 13;
    sbit  ADC1BUFF_13_bit at ADC1BUFF.B13;
    const register unsigned short int ADC1BUFF_12 = 12;
    sbit  ADC1BUFF_12_bit at ADC1BUFF.B12;
    const register unsigned short int ADC1BUFF_11 = 11;
    sbit  ADC1BUFF_11_bit at ADC1BUFF.B11;
    const register unsigned short int ADC1BUFF_10 = 10;
    sbit  ADC1BUFF_10_bit at ADC1BUFF.B10;
    const register unsigned short int ADC1BUFF_9 = 9;
    sbit  ADC1BUFF_9_bit at ADC1BUFF.B9;
    const register unsigned short int ADC1BUFF_8 = 8;
    sbit  ADC1BUFF_8_bit at ADC1BUFF.B8;
    const register unsigned short int ADC1BUFF_7 = 7;
    sbit  ADC1BUFF_7_bit at ADC1BUFF.B7;
    const register unsigned short int ADC1BUFF_6 = 6;
    sbit  ADC1BUFF_6_bit at ADC1BUFF.B6;
    const register unsigned short int ADC1BUFF_5 = 5;
    sbit  ADC1BUFF_5_bit at ADC1BUFF.B5;
    const register unsigned short int ADC1BUFF_4 = 4;
    sbit  ADC1BUFF_4_bit at ADC1BUFF.B4;
    const register unsigned short int ADC1BUFF_3 = 3;
    sbit  ADC1BUFF_3_bit at ADC1BUFF.B3;
    const register unsigned short int ADC1BUFF_2 = 2;
    sbit  ADC1BUFF_2_bit at ADC1BUFF.B2;
    const register unsigned short int ADC1BUFF_1 = 1;
    sbit  ADC1BUFF_1_bit at ADC1BUFF.B1;
    const register unsigned short int ADC1BUFF_0 = 0;
    sbit  ADC1BUFF_0_bit at ADC1BUFF.B0;

    // AD1CON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    const register unsigned short int ADDMABM = 12;
    sbit  ADDMABM_bit at AD1CON1.B12;
    const register unsigned short int AD12B = 10;
    sbit  AD12B_bit at AD1CON1.B10;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at AD1CON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at AD1CON1.B8;
    const register unsigned short int SSRC_2 = 7;
    sbit  SSRC_2_bit at AD1CON1.B7;
    const register unsigned short int SSRC_1 = 6;
    sbit  SSRC_1_bit at AD1CON1.B6;
    const register unsigned short int SSRC_0 = 5;
    sbit  SSRC_0_bit at AD1CON1.B5;
    const register unsigned short int SSRCG = 4;
    sbit  SSRCG_bit at AD1CON1.B4;
    const register unsigned short int SIMSAM = 3;
    sbit  SIMSAM_bit at AD1CON1.B3;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;

    // AD1CON2 bits
    const register unsigned short int VCFG_2 = 15;
    sbit  VCFG_2_bit at AD1CON2.B15;
    const register unsigned short int VCFG_1 = 14;
    sbit  VCFG_1_bit at AD1CON2.B14;
    const register unsigned short int VCFG_0 = 13;
    sbit  VCFG_0_bit at AD1CON2.B13;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    const register unsigned short int CHPS_1 = 9;
    sbit  CHPS_1_bit at AD1CON2.B9;
    const register unsigned short int CHPS_0 = 8;
    sbit  CHPS_0_bit at AD1CON2.B8;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    const register unsigned short int SMPI_4 = 6;
    sbit  SMPI_4_bit at AD1CON2.B6;
    const register unsigned short int SMPI_3 = 5;
    sbit  SMPI_3_bit at AD1CON2.B5;
    const register unsigned short int SMPI_2 = 4;
    sbit  SMPI_2_bit at AD1CON2.B4;
    const register unsigned short int SMPI_1 = 3;
    sbit  SMPI_1_bit at AD1CON2.B3;
    const register unsigned short int SMPI_0 = 2;
    sbit  SMPI_0_bit at AD1CON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at AD1CON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at AD1CON2.B0;

    // AD1CON3 bits
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;
    const register unsigned short int SAMC_4 = 12;
    sbit  SAMC_4_bit at AD1CON3.B12;
    const register unsigned short int SAMC_3 = 11;
    sbit  SAMC_3_bit at AD1CON3.B11;
    const register unsigned short int SAMC_2 = 10;
    sbit  SAMC_2_bit at AD1CON3.B10;
    const register unsigned short int SAMC_1 = 9;
    sbit  SAMC_1_bit at AD1CON3.B9;
    const register unsigned short int SAMC_0 = 8;
    sbit  SAMC_0_bit at AD1CON3.B8;
    const register unsigned short int ADCS_7 = 7;
    sbit  ADCS_7_bit at AD1CON3.B7;
    const register unsigned short int ADCS_6 = 6;
    sbit  ADCS_6_bit at AD1CON3.B6;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at AD1CON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at AD1CON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at AD1CON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at AD1CON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at AD1CON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at AD1CON3.B0;

    // AD1CHS123 bits
    const register unsigned short int CH123NB_1 = 10;
    sbit  CH123NB_1_bit at AD1CHS123.B10;
    const register unsigned short int CH123NB_0 = 9;
    sbit  CH123NB_0_bit at AD1CHS123.B9;
    const register unsigned short int CH123SB = 8;
    sbit  CH123SB_bit at AD1CHS123.B8;
    const register unsigned short int CH123NA_1 = 2;
    sbit  CH123NA_1_bit at AD1CHS123.B2;
    const register unsigned short int CH123NA_0 = 1;
    sbit  CH123NA_0_bit at AD1CHS123.B1;
    const register unsigned short int CH123SA = 0;
    sbit  CH123SA_bit at AD1CHS123.B0;

    // AD1CHS0 bits
    const register unsigned short int CH0NB = 15;
    sbit  CH0NB_bit at AD1CHS0.B15;
    const register unsigned short int CH0SB_4 = 12;
    sbit  CH0SB_4_bit at AD1CHS0.B12;
    const register unsigned short int CH0SB_3 = 11;
    sbit  CH0SB_3_bit at AD1CHS0.B11;
    const register unsigned short int CH0SB_2 = 10;
    sbit  CH0SB_2_bit at AD1CHS0.B10;
    const register unsigned short int CH0SB_1 = 9;
    sbit  CH0SB_1_bit at AD1CHS0.B9;
    const register unsigned short int CH0SB_0 = 8;
    sbit  CH0SB_0_bit at AD1CHS0.B8;
    const register unsigned short int CH0NA = 7;
    sbit  CH0NA_bit at AD1CHS0.B7;
    const register unsigned short int CH0SA_4 = 4;
    sbit  CH0SA_4_bit at AD1CHS0.B4;
    const register unsigned short int CH0SA_3 = 3;
    sbit  CH0SA_3_bit at AD1CHS0.B3;
    const register unsigned short int CH0SA_2 = 2;
    sbit  CH0SA_2_bit at AD1CHS0.B2;
    const register unsigned short int CH0SA_1 = 1;
    sbit  CH0SA_1_bit at AD1CHS0.B1;
    const register unsigned short int CH0SA_0 = 0;
    sbit  CH0SA_0_bit at AD1CHS0.B0;

    // AD1CSSH bits
    const register unsigned short int CSS31 = 15;
    sbit  CSS31_bit at AD1CSSH.B15;
    const register unsigned short int CSS30 = 14;
    sbit  CSS30_bit at AD1CSSH.B14;
    const register unsigned short int CSS26 = 10;
    sbit  CSS26_bit at AD1CSSH.B10;
    const register unsigned short int CSS25 = 9;
    sbit  CSS25_bit at AD1CSSH.B9;
    const register unsigned short int CSS24 = 8;
    sbit  CSS24_bit at AD1CSSH.B8;

    // AD1CSSL bits
    const register unsigned short int CSS15 = 15;
    sbit  CSS15_bit at AD1CSSL.B15;
    const register unsigned short int CSS14 = 14;
    sbit  CSS14_bit at AD1CSSL.B14;
    const register unsigned short int CSS13 = 13;
    sbit  CSS13_bit at AD1CSSL.B13;
    const register unsigned short int CSS12 = 12;
    sbit  CSS12_bit at AD1CSSL.B12;
    const register unsigned short int CSS11 = 11;
    sbit  CSS11_bit at AD1CSSL.B11;
    const register unsigned short int CSS10 = 10;
    sbit  CSS10_bit at AD1CSSL.B10;
    const register unsigned short int CSS9 = 9;
    sbit  CSS9_bit at AD1CSSL.B9;
    const register unsigned short int CSS8 = 8;
    sbit  CSS8_bit at AD1CSSL.B8;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at AD1CSSL.B7;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at AD1CSSL.B6;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at AD1CSSL.B5;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at AD1CSSL.B4;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at AD1CSSL.B3;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at AD1CSSL.B2;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at AD1CSSL.B1;
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at AD1CSSL.B0;

    // AD1CON4 bits
    const register unsigned short int ADDMAEN = 8;
    sbit  ADDMAEN_bit at AD1CON4.B8;
    const register unsigned short int DMABL_2 = 2;
    sbit  DMABL_2_bit at AD1CON4.B2;
    const register unsigned short int DMABL_1 = 1;
    sbit  DMABL_1_bit at AD1CON4.B1;
    const register unsigned short int DMABL_0 = 0;
    sbit  DMABL_0_bit at AD1CON4.B0;

    // CTMUCON1 bits
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON1.B15;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON1.B13;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON1.B12;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON1.B11;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON1.B10;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON1.B9;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON1.B8;

    // CTMUCON2 bits
    const register unsigned short int EDG1MOD = 15;
    sbit  EDG1MOD_bit at CTMUCON2.B15;
    const register unsigned short int EDG1POL = 14;
    sbit  EDG1POL_bit at CTMUCON2.B14;
    const register unsigned short int EDG1SEL_3 = 13;
    sbit  EDG1SEL_3_bit at CTMUCON2.B13;
    const register unsigned short int EDG1SEL_2 = 12;
    sbit  EDG1SEL_2_bit at CTMUCON2.B12;
    const register unsigned short int EDG1SEL_1 = 11;
    sbit  EDG1SEL_1_bit at CTMUCON2.B11;
    const register unsigned short int EDG1SEL_0 = 10;
    sbit  EDG1SEL_0_bit at CTMUCON2.B10;
    const register unsigned short int EDG2STAT = 9;
    sbit  EDG2STAT_bit at CTMUCON2.B9;
    const register unsigned short int EDG1STAT = 8;
    sbit  EDG1STAT_bit at CTMUCON2.B8;
    const register unsigned short int EDG2MOD = 7;
    sbit  EDG2MOD_bit at CTMUCON2.B7;
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON2.B6;
    const register unsigned short int EDG2SEL_3 = 5;
    sbit  EDG2SEL_3_bit at CTMUCON2.B5;
    const register unsigned short int EDG2SEL_2 = 4;
    sbit  EDG2SEL_2_bit at CTMUCON2.B4;
    const register unsigned short int EDG2SEL_1 = 3;
    sbit  EDG2SEL_1_bit at CTMUCON2.B3;
    const register unsigned short int EDG2SEL_0 = 2;
    sbit  EDG2SEL_0_bit at CTMUCON2.B2;

    // CTMUICON bits
    const register unsigned short int ITRIM_5 = 15;
    sbit  ITRIM_5_bit at CTMUICON.B15;
    const register unsigned short int ITRIM_4 = 14;
    sbit  ITRIM_4_bit at CTMUICON.B14;
    const register unsigned short int ITRIM_3 = 13;
    sbit  ITRIM_3_bit at CTMUICON.B13;
    const register unsigned short int ITRIM_2 = 12;
    sbit  ITRIM_2_bit at CTMUICON.B12;
    const register unsigned short int ITRIM_1 = 11;
    sbit  ITRIM_1_bit at CTMUICON.B11;
    const register unsigned short int ITRIM_0 = 10;
    sbit  ITRIM_0_bit at CTMUICON.B10;
    const register unsigned short int IRNG_1 = 9;
    sbit  IRNG_1_bit at CTMUICON.B9;
    const register unsigned short int IRNG_0 = 8;
    sbit  IRNG_0_bit at CTMUICON.B8;

    // C1CTRL1 bits
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at C1CTRL1.B13;
    sbit  CSIDL_C1CTRL1_bit at C1CTRL1.B13;
    const register unsigned short int ABAT = 12;
    sbit  ABAT_bit at C1CTRL1.B12;
    const register unsigned short int CANCKS = 11;
    sbit  CANCKS_bit at C1CTRL1.B11;
    const register unsigned short int REQOP_2 = 10;
    sbit  REQOP_2_bit at C1CTRL1.B10;
    const register unsigned short int REQOP_1 = 9;
    sbit  REQOP_1_bit at C1CTRL1.B9;
    const register unsigned short int REQOP_0 = 8;
    sbit  REQOP_0_bit at C1CTRL1.B8;
    const register unsigned short int OPMODE_2 = 7;
    sbit  OPMODE_2_bit at C1CTRL1.B7;
    const register unsigned short int OPMODE_1 = 6;
    sbit  OPMODE_1_bit at C1CTRL1.B6;
    const register unsigned short int OPMODE_0 = 5;
    sbit  OPMODE_0_bit at C1CTRL1.B5;
    const register unsigned short int CANCAP = 3;
    sbit  CANCAP_bit at C1CTRL1.B3;
    const register unsigned short int WIN = 0;
    sbit  WIN_bit at C1CTRL1.B0;

    // C1CTRL2 bits
    const register unsigned short int DNCNT_4 = 4;
    sbit  DNCNT_4_bit at C1CTRL2.B4;
    const register unsigned short int DNCNT_3 = 3;
    sbit  DNCNT_3_bit at C1CTRL2.B3;
    const register unsigned short int DNCNT_2 = 2;
    sbit  DNCNT_2_bit at C1CTRL2.B2;
    const register unsigned short int DNCNT_1 = 1;
    sbit  DNCNT_1_bit at C1CTRL2.B1;
    const register unsigned short int DNCNT_0 = 0;
    sbit  DNCNT_0_bit at C1CTRL2.B0;

    // C1VEC bits
    const register unsigned short int FILHIT_4 = 12;
    sbit  FILHIT_4_bit at C1VEC.B12;
    const register unsigned short int FILHIT_3 = 11;
    sbit  FILHIT_3_bit at C1VEC.B11;
    const register unsigned short int FILHIT_2 = 10;
    sbit  FILHIT_2_bit at C1VEC.B10;
    const register unsigned short int FILHIT_1 = 9;
    sbit  FILHIT_1_bit at C1VEC.B9;
    const register unsigned short int FILHIT_0 = 8;
    sbit  FILHIT_0_bit at C1VEC.B8;
    const register unsigned short int ICODE_6 = 6;
    sbit  ICODE_6_bit at C1VEC.B6;
    const register unsigned short int ICODE_5 = 5;
    sbit  ICODE_5_bit at C1VEC.B5;
    const register unsigned short int ICODE_4 = 4;
    sbit  ICODE_4_bit at C1VEC.B4;
    const register unsigned short int ICODE_3 = 3;
    sbit  ICODE_3_bit at C1VEC.B3;
    const register unsigned short int ICODE_2 = 2;
    sbit  ICODE_2_bit at C1VEC.B2;
    const register unsigned short int ICODE_1 = 1;
    sbit  ICODE_1_bit at C1VEC.B1;
    const register unsigned short int ICODE_0 = 0;
    sbit  ICODE_0_bit at C1VEC.B0;

    // C1FCTRL bits
    const register unsigned short int DMABS_2 = 15;
    sbit  DMABS_2_bit at C1FCTRL.B15;
    const register unsigned short int DMABS_1 = 14;
    sbit  DMABS_1_bit at C1FCTRL.B14;
    const register unsigned short int DMABS_0 = 13;
    sbit  DMABS_0_bit at C1FCTRL.B13;
    const register unsigned short int FSA_4 = 4;
    sbit  FSA_4_bit at C1FCTRL.B4;
    const register unsigned short int FSA_3 = 3;
    sbit  FSA_3_bit at C1FCTRL.B3;
    const register unsigned short int FSA_2 = 2;
    sbit  FSA_2_bit at C1FCTRL.B2;
    const register unsigned short int FSA_1 = 1;
    sbit  FSA_1_bit at C1FCTRL.B1;
    const register unsigned short int FSA_0 = 0;
    sbit  FSA_0_bit at C1FCTRL.B0;

    // C1FIFO bits
    const register unsigned short int FBP_5 = 13;
    sbit  FBP_5_bit at C1FIFO.B13;
    const register unsigned short int FBP_4 = 12;
    sbit  FBP_4_bit at C1FIFO.B12;
    const register unsigned short int FBP_3 = 11;
    sbit  FBP_3_bit at C1FIFO.B11;
    const register unsigned short int FBP_2 = 10;
    sbit  FBP_2_bit at C1FIFO.B10;
    const register unsigned short int FBP_1 = 9;
    sbit  FBP_1_bit at C1FIFO.B9;
    const register unsigned short int FBP_0 = 8;
    sbit  FBP_0_bit at C1FIFO.B8;
    const register unsigned short int FNRB_5 = 5;
    sbit  FNRB_5_bit at C1FIFO.B5;
    const register unsigned short int FNRB_4 = 4;
    sbit  FNRB_4_bit at C1FIFO.B4;
    const register unsigned short int FNRB_3 = 3;
    sbit  FNRB_3_bit at C1FIFO.B3;
    const register unsigned short int FNRB_2 = 2;
    sbit  FNRB_2_bit at C1FIFO.B2;
    const register unsigned short int FNRB_1 = 1;
    sbit  FNRB_1_bit at C1FIFO.B1;
    const register unsigned short int FNRB_0 = 0;
    sbit  FNRB_0_bit at C1FIFO.B0;

    // C1INTF bits
    const register unsigned short int TXBO = 13;
    sbit  TXBO_bit at C1INTF.B13;
    const register unsigned short int TXBP = 12;
    sbit  TXBP_bit at C1INTF.B12;
    const register unsigned short int RXBP = 11;
    sbit  RXBP_bit at C1INTF.B11;
    const register unsigned short int TXWAR = 10;
    sbit  TXWAR_bit at C1INTF.B10;
    const register unsigned short int RXWAR = 9;
    sbit  RXWAR_bit at C1INTF.B9;
    const register unsigned short int EWARN = 8;
    sbit  EWARN_bit at C1INTF.B8;
    const register unsigned short int IVRIF = 7;
    sbit  IVRIF_bit at C1INTF.B7;
    const register unsigned short int WAKIF = 6;
    sbit  WAKIF_bit at C1INTF.B6;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at C1INTF.B5;
    const register unsigned short int FIFOIF = 3;
    sbit  FIFOIF_bit at C1INTF.B3;
    const register unsigned short int RBOVIF = 2;
    sbit  RBOVIF_bit at C1INTF.B2;
    const register unsigned short int RBIF = 1;
    sbit  RBIF_bit at C1INTF.B1;
    const register unsigned short int TBIF = 0;
    sbit  TBIF_bit at C1INTF.B0;

    // C1INTE bits
    const register unsigned short int IVRIE = 7;
    sbit  IVRIE_bit at C1INTE.B7;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at C1INTE.B6;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at C1INTE.B5;
    const register unsigned short int FIFOIE = 3;
    sbit  FIFOIE_bit at C1INTE.B3;
    const register unsigned short int RBOVIE = 2;
    sbit  RBOVIE_bit at C1INTE.B2;
    const register unsigned short int RBIE = 1;
    sbit  RBIE_bit at C1INTE.B1;
    const register unsigned short int TBIE = 0;
    sbit  TBIE_bit at C1INTE.B0;

    // C1EC bits
    const register unsigned short int TERRCNT_7 = 15;
    sbit  TERRCNT_7_bit at C1EC.B15;
    const register unsigned short int TERRCNT_6 = 14;
    sbit  TERRCNT_6_bit at C1EC.B14;
    const register unsigned short int TERRCNT_5 = 13;
    sbit  TERRCNT_5_bit at C1EC.B13;
    const register unsigned short int TERRCNT_4 = 12;
    sbit  TERRCNT_4_bit at C1EC.B12;
    const register unsigned short int TERRCNT_3 = 11;
    sbit  TERRCNT_3_bit at C1EC.B11;
    const register unsigned short int TERRCNT_2 = 10;
    sbit  TERRCNT_2_bit at C1EC.B10;
    const register unsigned short int TERRCNT_1 = 9;
    sbit  TERRCNT_1_bit at C1EC.B9;
    const register unsigned short int TERRCNT_0 = 8;
    sbit  TERRCNT_0_bit at C1EC.B8;
    const register unsigned short int RERRCNT_7 = 7;
    sbit  RERRCNT_7_bit at C1EC.B7;
    const register unsigned short int RERRCNT_6 = 6;
    sbit  RERRCNT_6_bit at C1EC.B6;
    const register unsigned short int RERRCNT_5 = 5;
    sbit  RERRCNT_5_bit at C1EC.B5;
    const register unsigned short int RERRCNT_4 = 4;
    sbit  RERRCNT_4_bit at C1EC.B4;
    const register unsigned short int RERRCNT_3 = 3;
    sbit  RERRCNT_3_bit at C1EC.B3;
    const register unsigned short int RERRCNT_2 = 2;
    sbit  RERRCNT_2_bit at C1EC.B2;
    const register unsigned short int RERRCNT_1 = 1;
    sbit  RERRCNT_1_bit at C1EC.B1;
    const register unsigned short int RERRCNT_0 = 0;
    sbit  RERRCNT_0_bit at C1EC.B0;

    // C1CFG1 bits
    const register unsigned short int SJW_1 = 7;
    sbit  SJW_1_bit at C1CFG1.B7;
    const register unsigned short int SJW_0 = 6;
    sbit  SJW_0_bit at C1CFG1.B6;
    const register unsigned short int BRP_5 = 5;
    sbit  BRP_5_bit at C1CFG1.B5;
    const register unsigned short int BRP_4 = 4;
    sbit  BRP_4_bit at C1CFG1.B4;
    const register unsigned short int BRP_3 = 3;
    sbit  BRP_3_bit at C1CFG1.B3;
    const register unsigned short int BRP_2 = 2;
    sbit  BRP_2_bit at C1CFG1.B2;
    const register unsigned short int BRP_1 = 1;
    sbit  BRP_1_bit at C1CFG1.B1;
    const register unsigned short int BRP_0 = 0;
    sbit  BRP_0_bit at C1CFG1.B0;

    // C1CFG2 bits
    const register unsigned short int WAKFIL = 14;
    sbit  WAKFIL_bit at C1CFG2.B14;
    const register unsigned short int SEG2PH_2 = 10;
    sbit  SEG2PH_2_bit at C1CFG2.B10;
    const register unsigned short int SEG2PH_1 = 9;
    sbit  SEG2PH_1_bit at C1CFG2.B9;
    const register unsigned short int SEG2PH_0 = 8;
    sbit  SEG2PH_0_bit at C1CFG2.B8;
    const register unsigned short int SEG2PHTS = 7;
    sbit  SEG2PHTS_bit at C1CFG2.B7;
    const register unsigned short int SAM = 6;
    sbit  SAM_bit at C1CFG2.B6;
    const register unsigned short int SEG1PH_2 = 5;
    sbit  SEG1PH_2_bit at C1CFG2.B5;
    const register unsigned short int SEG1PH_1 = 4;
    sbit  SEG1PH_1_bit at C1CFG2.B4;
    const register unsigned short int SEG1PH_0 = 3;
    sbit  SEG1PH_0_bit at C1CFG2.B3;
    const register unsigned short int PRSEG_2 = 2;
    sbit  PRSEG_2_bit at C1CFG2.B2;
    const register unsigned short int PRSEG_1 = 1;
    sbit  PRSEG_1_bit at C1CFG2.B1;
    const register unsigned short int PRSEG_0 = 0;
    sbit  PRSEG_0_bit at C1CFG2.B0;

    // C1FEN1 bits
    const register unsigned short int FLTEN15 = 15;
    sbit  FLTEN15_bit at C1FEN1.B15;
    const register unsigned short int FLTEN14 = 14;
    sbit  FLTEN14_bit at C1FEN1.B14;
    const register unsigned short int FLTEN13 = 13;
    sbit  FLTEN13_bit at C1FEN1.B13;
    const register unsigned short int FLTEN12 = 12;
    sbit  FLTEN12_bit at C1FEN1.B12;
    const register unsigned short int FLTEN11 = 11;
    sbit  FLTEN11_bit at C1FEN1.B11;
    const register unsigned short int FLTEN10 = 10;
    sbit  FLTEN10_bit at C1FEN1.B10;
    const register unsigned short int FLTEN9 = 9;
    sbit  FLTEN9_bit at C1FEN1.B9;
    const register unsigned short int FLTEN8 = 8;
    sbit  FLTEN8_bit at C1FEN1.B8;
    const register unsigned short int FLTEN7 = 7;
    sbit  FLTEN7_bit at C1FEN1.B7;
    const register unsigned short int FLTEN6 = 6;
    sbit  FLTEN6_bit at C1FEN1.B6;
    const register unsigned short int FLTEN5 = 5;
    sbit  FLTEN5_bit at C1FEN1.B5;
    const register unsigned short int FLTEN4 = 4;
    sbit  FLTEN4_bit at C1FEN1.B4;
    const register unsigned short int FLTEN3 = 3;
    sbit  FLTEN3_bit at C1FEN1.B3;
    const register unsigned short int FLTEN2 = 2;
    sbit  FLTEN2_bit at C1FEN1.B2;
    const register unsigned short int FLTEN1 = 1;
    sbit  FLTEN1_bit at C1FEN1.B1;
    const register unsigned short int FLTEN0 = 0;
    sbit  FLTEN0_bit at C1FEN1.B0;

    // C1FMSKSEL1 bits
    const register unsigned short int F7MSK_1 = 15;
    sbit  F7MSK_1_bit at C1FMSKSEL1.B15;
    const register unsigned short int F7MSK_0 = 14;
    sbit  F7MSK_0_bit at C1FMSKSEL1.B14;
    const register unsigned short int F6MSK_1 = 13;
    sbit  F6MSK_1_bit at C1FMSKSEL1.B13;
    const register unsigned short int F6MSK_0 = 12;
    sbit  F6MSK_0_bit at C1FMSKSEL1.B12;
    const register unsigned short int F5MSK_1 = 11;
    sbit  F5MSK_1_bit at C1FMSKSEL1.B11;
    const register unsigned short int F5MSK_0 = 10;
    sbit  F5MSK_0_bit at C1FMSKSEL1.B10;
    const register unsigned short int F4MSK_1 = 9;
    sbit  F4MSK_1_bit at C1FMSKSEL1.B9;
    const register unsigned short int F4MSK_0 = 8;
    sbit  F4MSK_0_bit at C1FMSKSEL1.B8;
    const register unsigned short int F3MSK_1 = 7;
    sbit  F3MSK_1_bit at C1FMSKSEL1.B7;
    const register unsigned short int F3MSK_0 = 6;
    sbit  F3MSK_0_bit at C1FMSKSEL1.B6;
    const register unsigned short int F2MSK_1 = 5;
    sbit  F2MSK_1_bit at C1FMSKSEL1.B5;
    const register unsigned short int F2MSK_0 = 4;
    sbit  F2MSK_0_bit at C1FMSKSEL1.B4;
    const register unsigned short int F1MSK_1 = 3;
    sbit  F1MSK_1_bit at C1FMSKSEL1.B3;
    const register unsigned short int F1MSK_0 = 2;
    sbit  F1MSK_0_bit at C1FMSKSEL1.B2;
    const register unsigned short int F0MSK_1 = 1;
    sbit  F0MSK_1_bit at C1FMSKSEL1.B1;
    const register unsigned short int F0MSK_0 = 0;
    sbit  F0MSK_0_bit at C1FMSKSEL1.B0;

    // C1FMSKSEL2 bits
    const register unsigned short int F15MSK_1 = 15;
    sbit  F15MSK_1_bit at C1FMSKSEL2.B15;
    const register unsigned short int F15MSK_0 = 14;
    sbit  F15MSK_0_bit at C1FMSKSEL2.B14;
    const register unsigned short int F14MSK_1 = 13;
    sbit  F14MSK_1_bit at C1FMSKSEL2.B13;
    const register unsigned short int F14MSK_0 = 12;
    sbit  F14MSK_0_bit at C1FMSKSEL2.B12;
    const register unsigned short int F13MSK_1 = 11;
    sbit  F13MSK_1_bit at C1FMSKSEL2.B11;
    const register unsigned short int F13MSK_0 = 10;
    sbit  F13MSK_0_bit at C1FMSKSEL2.B10;
    const register unsigned short int F12MSK_1 = 9;
    sbit  F12MSK_1_bit at C1FMSKSEL2.B9;
    const register unsigned short int F12MSK_0 = 8;
    sbit  F12MSK_0_bit at C1FMSKSEL2.B8;
    const register unsigned short int F11MSK_1 = 7;
    sbit  F11MSK_1_bit at C1FMSKSEL2.B7;
    const register unsigned short int F11MSK_0 = 6;
    sbit  F11MSK_0_bit at C1FMSKSEL2.B6;
    const register unsigned short int F10MSK_1 = 5;
    sbit  F10MSK_1_bit at C1FMSKSEL2.B5;
    const register unsigned short int F10MSK_0 = 4;
    sbit  F10MSK_0_bit at C1FMSKSEL2.B4;
    const register unsigned short int F9MSK_1 = 3;
    sbit  F9MSK_1_bit at C1FMSKSEL2.B3;
    const register unsigned short int F9MSK_0 = 2;
    sbit  F9MSK_0_bit at C1FMSKSEL2.B2;
    const register unsigned short int F8MSK_1 = 1;
    sbit  F8MSK_1_bit at C1FMSKSEL2.B1;
    const register unsigned short int F8MSK_0 = 0;
    sbit  F8MSK_0_bit at C1FMSKSEL2.B0;

    // C1RXFUL1 bits
    const register unsigned short int RXFUL15 = 15;
    sbit  RXFUL15_bit at C1RXFUL1.B15;
    const register unsigned short int RXFUL14 = 14;
    sbit  RXFUL14_bit at C1RXFUL1.B14;
    const register unsigned short int RXFUL13 = 13;
    sbit  RXFUL13_bit at C1RXFUL1.B13;
    const register unsigned short int RXFUL12 = 12;
    sbit  RXFUL12_bit at C1RXFUL1.B12;
    const register unsigned short int RXFUL11 = 11;
    sbit  RXFUL11_bit at C1RXFUL1.B11;
    const register unsigned short int RXFUL10 = 10;
    sbit  RXFUL10_bit at C1RXFUL1.B10;
    const register unsigned short int RXFUL9 = 9;
    sbit  RXFUL9_bit at C1RXFUL1.B9;
    const register unsigned short int RXFUL8 = 8;
    sbit  RXFUL8_bit at C1RXFUL1.B8;
    const register unsigned short int RXFUL7 = 7;
    sbit  RXFUL7_bit at C1RXFUL1.B7;
    const register unsigned short int RXFUL6 = 6;
    sbit  RXFUL6_bit at C1RXFUL1.B6;
    const register unsigned short int RXFUL5 = 5;
    sbit  RXFUL5_bit at C1RXFUL1.B5;
    const register unsigned short int RXFUL4 = 4;
    sbit  RXFUL4_bit at C1RXFUL1.B4;
    const register unsigned short int RXFUL3 = 3;
    sbit  RXFUL3_bit at C1RXFUL1.B3;
    const register unsigned short int RXFUL2 = 2;
    sbit  RXFUL2_bit at C1RXFUL1.B2;
    const register unsigned short int RXFUL1 = 1;
    sbit  RXFUL1_bit at C1RXFUL1.B1;
    const register unsigned short int RXFUL0 = 0;
    sbit  RXFUL0_bit at C1RXFUL1.B0;

    // C1RXFUL2 bits
    const register unsigned short int RXFUL31 = 15;
    sbit  RXFUL31_bit at C1RXFUL2.B15;
    const register unsigned short int RXFUL30 = 14;
    sbit  RXFUL30_bit at C1RXFUL2.B14;
    const register unsigned short int RXFUL29 = 13;
    sbit  RXFUL29_bit at C1RXFUL2.B13;
    const register unsigned short int RXFUL28 = 12;
    sbit  RXFUL28_bit at C1RXFUL2.B12;
    const register unsigned short int RXFUL27 = 11;
    sbit  RXFUL27_bit at C1RXFUL2.B11;
    const register unsigned short int RXFUL26 = 10;
    sbit  RXFUL26_bit at C1RXFUL2.B10;
    const register unsigned short int RXFUL25 = 9;
    sbit  RXFUL25_bit at C1RXFUL2.B9;
    const register unsigned short int RXFUL24 = 8;
    sbit  RXFUL24_bit at C1RXFUL2.B8;
    const register unsigned short int RXFUL23 = 7;
    sbit  RXFUL23_bit at C1RXFUL2.B7;
    const register unsigned short int RXFUL22 = 6;
    sbit  RXFUL22_bit at C1RXFUL2.B6;
    const register unsigned short int RXFUL21 = 5;
    sbit  RXFUL21_bit at C1RXFUL2.B5;
    const register unsigned short int RXFUL20 = 4;
    sbit  RXFUL20_bit at C1RXFUL2.B4;
    const register unsigned short int RXFUL19 = 3;
    sbit  RXFUL19_bit at C1RXFUL2.B3;
    const register unsigned short int RXFUL18 = 2;
    sbit  RXFUL18_bit at C1RXFUL2.B2;
    const register unsigned short int RXFUL17 = 1;
    sbit  RXFUL17_bit at C1RXFUL2.B1;
    const register unsigned short int RXFUL16 = 0;
    sbit  RXFUL16_bit at C1RXFUL2.B0;

    // C1BUFPNT3 bits
    const register unsigned short int F11BP_3 = 15;
    sbit  F11BP_3_bit at C1BUFPNT3.B15;
    const register unsigned short int F11BP_2 = 14;
    sbit  F11BP_2_bit at C1BUFPNT3.B14;
    const register unsigned short int F11BP_1 = 13;
    sbit  F11BP_1_bit at C1BUFPNT3.B13;
    const register unsigned short int F11BP_0 = 12;
    sbit  F11BP_0_bit at C1BUFPNT3.B12;
    const register unsigned short int F10BP_3 = 11;
    sbit  F10BP_3_bit at C1BUFPNT3.B11;
    const register unsigned short int F10BP_2 = 10;
    sbit  F10BP_2_bit at C1BUFPNT3.B10;
    const register unsigned short int F10BP_1 = 9;
    sbit  F10BP_1_bit at C1BUFPNT3.B9;
    const register unsigned short int F10BP_0 = 8;
    sbit  F10BP_0_bit at C1BUFPNT3.B8;
    const register unsigned short int F9BP_3 = 7;
    sbit  F9BP_3_bit at C1BUFPNT3.B7;
    const register unsigned short int F9BP_2 = 6;
    sbit  F9BP_2_bit at C1BUFPNT3.B6;
    const register unsigned short int F9BP_1 = 5;
    sbit  F9BP_1_bit at C1BUFPNT3.B5;
    const register unsigned short int F9BP_0 = 4;
    sbit  F9BP_0_bit at C1BUFPNT3.B4;
    const register unsigned short int F8BP_3 = 3;
    sbit  F8BP_3_bit at C1BUFPNT3.B3;
    const register unsigned short int F8BP_2 = 2;
    sbit  F8BP_2_bit at C1BUFPNT3.B2;
    const register unsigned short int F8BP_1 = 1;
    sbit  F8BP_1_bit at C1BUFPNT3.B1;
    const register unsigned short int F8BP_0 = 0;
    sbit  F8BP_0_bit at C1BUFPNT3.B0;

    // C1BUFPNT4 bits
    const register unsigned short int F15BP_3 = 15;
    sbit  F15BP_3_bit at C1BUFPNT4.B15;
    const register unsigned short int F15BP_2 = 14;
    sbit  F15BP_2_bit at C1BUFPNT4.B14;
    const register unsigned short int F15BP_1 = 13;
    sbit  F15BP_1_bit at C1BUFPNT4.B13;
    const register unsigned short int F15BP_0 = 12;
    sbit  F15BP_0_bit at C1BUFPNT4.B12;
    const register unsigned short int F14BP_3 = 11;
    sbit  F14BP_3_bit at C1BUFPNT4.B11;
    const register unsigned short int F14BP_2 = 10;
    sbit  F14BP_2_bit at C1BUFPNT4.B10;
    const register unsigned short int F14BP_1 = 9;
    sbit  F14BP_1_bit at C1BUFPNT4.B9;
    const register unsigned short int F14BP_0 = 8;
    sbit  F14BP_0_bit at C1BUFPNT4.B8;
    const register unsigned short int F13BP_3 = 7;
    sbit  F13BP_3_bit at C1BUFPNT4.B7;
    const register unsigned short int F13BP_2 = 6;
    sbit  F13BP_2_bit at C1BUFPNT4.B6;
    const register unsigned short int F13BP_1 = 5;
    sbit  F13BP_1_bit at C1BUFPNT4.B5;
    const register unsigned short int F13BP_0 = 4;
    sbit  F13BP_0_bit at C1BUFPNT4.B4;
    const register unsigned short int F12BP_3 = 3;
    sbit  F12BP_3_bit at C1BUFPNT4.B3;
    const register unsigned short int F12BP_2 = 2;
    sbit  F12BP_2_bit at C1BUFPNT4.B2;
    const register unsigned short int F12BP_1 = 1;
    sbit  F12BP_1_bit at C1BUFPNT4.B1;
    const register unsigned short int F12BP_0 = 0;
    sbit  F12BP_0_bit at C1BUFPNT4.B0;

    // C1RXOVF1 bits
    const register unsigned short int RXOVF15 = 15;
    sbit  RXOVF15_bit at C1RXOVF1.B15;
    const register unsigned short int RXOVF14 = 14;
    sbit  RXOVF14_bit at C1RXOVF1.B14;
    const register unsigned short int RXOVF13 = 13;
    sbit  RXOVF13_bit at C1RXOVF1.B13;
    const register unsigned short int RXOVF12 = 12;
    sbit  RXOVF12_bit at C1RXOVF1.B12;
    const register unsigned short int RXOVF11 = 11;
    sbit  RXOVF11_bit at C1RXOVF1.B11;
    const register unsigned short int RXOVF10 = 10;
    sbit  RXOVF10_bit at C1RXOVF1.B10;
    const register unsigned short int RXOVF9 = 9;
    sbit  RXOVF9_bit at C1RXOVF1.B9;
    const register unsigned short int RXOVF8 = 8;
    sbit  RXOVF8_bit at C1RXOVF1.B8;
    const register unsigned short int RXOVF7 = 7;
    sbit  RXOVF7_bit at C1RXOVF1.B7;
    const register unsigned short int RXOVF6 = 6;
    sbit  RXOVF6_bit at C1RXOVF1.B6;
    const register unsigned short int RXOVF5 = 5;
    sbit  RXOVF5_bit at C1RXOVF1.B5;
    const register unsigned short int RXOVF4 = 4;
    sbit  RXOVF4_bit at C1RXOVF1.B4;
    const register unsigned short int RXOVF3 = 3;
    sbit  RXOVF3_bit at C1RXOVF1.B3;
    const register unsigned short int RXOVF2 = 2;
    sbit  RXOVF2_bit at C1RXOVF1.B2;
    const register unsigned short int RXOVF1 = 1;
    sbit  RXOVF1_bit at C1RXOVF1.B1;
    const register unsigned short int RXOVF0 = 0;
    sbit  RXOVF0_bit at C1RXOVF1.B0;

    // C1RXOVF2 bits
    const register unsigned short int RXOVF31 = 15;
    sbit  RXOVF31_bit at C1RXOVF2.B15;
    const register unsigned short int RXOVF30 = 14;
    sbit  RXOVF30_bit at C1RXOVF2.B14;
    const register unsigned short int RXOVF29 = 13;
    sbit  RXOVF29_bit at C1RXOVF2.B13;
    const register unsigned short int RXOVF28 = 12;
    sbit  RXOVF28_bit at C1RXOVF2.B12;
    const register unsigned short int RXOVF27 = 11;
    sbit  RXOVF27_bit at C1RXOVF2.B11;
    const register unsigned short int RXOVF26 = 10;
    sbit  RXOVF26_bit at C1RXOVF2.B10;
    const register unsigned short int RXOVF25 = 9;
    sbit  RXOVF25_bit at C1RXOVF2.B9;
    const register unsigned short int RXOVF24 = 8;
    sbit  RXOVF24_bit at C1RXOVF2.B8;
    const register unsigned short int RXOVF23 = 7;
    sbit  RXOVF23_bit at C1RXOVF2.B7;
    const register unsigned short int RXOVF22 = 6;
    sbit  RXOVF22_bit at C1RXOVF2.B6;
    const register unsigned short int RXOVF21 = 5;
    sbit  RXOVF21_bit at C1RXOVF2.B5;
    const register unsigned short int RXOVF20 = 4;
    sbit  RXOVF20_bit at C1RXOVF2.B4;
    const register unsigned short int RXOVF19 = 3;
    sbit  RXOVF19_bit at C1RXOVF2.B3;
    const register unsigned short int RXOVF18 = 2;
    sbit  RXOVF18_bit at C1RXOVF2.B2;
    const register unsigned short int RXOVF17 = 1;
    sbit  RXOVF17_bit at C1RXOVF2.B1;
    const register unsigned short int RXOVF16 = 0;
    sbit  RXOVF16_bit at C1RXOVF2.B0;

    // C1TR01CON bits
    const register unsigned short int TXEN1 = 15;
    sbit  TXEN1_bit at C1TR01CON.B15;
    const register unsigned short int TXABT1 = 14;
    sbit  TXABT1_bit at C1TR01CON.B14;
    const register unsigned short int TXLARB1 = 13;
    sbit  TXLARB1_bit at C1TR01CON.B13;
    const register unsigned short int TXERR1 = 12;
    sbit  TXERR1_bit at C1TR01CON.B12;
    const register unsigned short int TXREQ1 = 11;
    sbit  TXREQ1_bit at C1TR01CON.B11;
    const register unsigned short int RTREN1 = 10;
    sbit  RTREN1_bit at C1TR01CON.B10;
    const register unsigned short int TX1PRI_1 = 9;
    sbit  TX1PRI_1_bit at C1TR01CON.B9;
    const register unsigned short int TX1PRI_0 = 8;
    sbit  TX1PRI_0_bit at C1TR01CON.B8;
    const register unsigned short int TXEN0 = 7;
    sbit  TXEN0_bit at C1TR01CON.B7;
    const register unsigned short int TXABT0 = 6;
    sbit  TXABT0_bit at C1TR01CON.B6;
    const register unsigned short int TXLARB0 = 5;
    sbit  TXLARB0_bit at C1TR01CON.B5;
    const register unsigned short int TXERR0 = 4;
    sbit  TXERR0_bit at C1TR01CON.B4;
    const register unsigned short int TXREQ0 = 3;
    sbit  TXREQ0_bit at C1TR01CON.B3;
    const register unsigned short int RTREN0 = 2;
    sbit  RTREN0_bit at C1TR01CON.B2;
    const register unsigned short int TX0PRI_1 = 1;
    sbit  TX0PRI_1_bit at C1TR01CON.B1;
    const register unsigned short int TX0PRI_0 = 0;
    sbit  TX0PRI_0_bit at C1TR01CON.B0;

    // C1TR23CON bits
    const register unsigned short int TXEN3 = 15;
    sbit  TXEN3_bit at C1TR23CON.B15;
    const register unsigned short int TXABT3 = 14;
    sbit  TXABT3_bit at C1TR23CON.B14;
    const register unsigned short int TXLARB3 = 13;
    sbit  TXLARB3_bit at C1TR23CON.B13;
    const register unsigned short int TXERR3 = 12;
    sbit  TXERR3_bit at C1TR23CON.B12;
    const register unsigned short int TXREQ3 = 11;
    sbit  TXREQ3_bit at C1TR23CON.B11;
    const register unsigned short int RTREN3 = 10;
    sbit  RTREN3_bit at C1TR23CON.B10;
    const register unsigned short int TX3PRI_1 = 9;
    sbit  TX3PRI_1_bit at C1TR23CON.B9;
    const register unsigned short int TX3PRI_0 = 8;
    sbit  TX3PRI_0_bit at C1TR23CON.B8;
    const register unsigned short int TXEN2 = 7;
    sbit  TXEN2_bit at C1TR23CON.B7;
    const register unsigned short int TXABT2 = 6;
    sbit  TXABT2_bit at C1TR23CON.B6;
    const register unsigned short int TXLARB2 = 5;
    sbit  TXLARB2_bit at C1TR23CON.B5;
    const register unsigned short int TXERR2 = 4;
    sbit  TXERR2_bit at C1TR23CON.B4;
    const register unsigned short int TXREQ2 = 3;
    sbit  TXREQ2_bit at C1TR23CON.B3;
    const register unsigned short int RTREN2 = 2;
    sbit  RTREN2_bit at C1TR23CON.B2;
    const register unsigned short int TX2PRI_1 = 1;
    sbit  TX2PRI_1_bit at C1TR23CON.B1;
    const register unsigned short int TX2PRI_0 = 0;
    sbit  TX2PRI_0_bit at C1TR23CON.B0;

    // C1TR45CON bits
    const register unsigned short int TXEN5 = 15;
    sbit  TXEN5_bit at C1TR45CON.B15;
    const register unsigned short int TXABT5 = 14;
    sbit  TXABT5_bit at C1TR45CON.B14;
    const register unsigned short int TXLARB5 = 13;
    sbit  TXLARB5_bit at C1TR45CON.B13;
    const register unsigned short int TXERR5 = 12;
    sbit  TXERR5_bit at C1TR45CON.B12;
    const register unsigned short int TXREQ5 = 11;
    sbit  TXREQ5_bit at C1TR45CON.B11;
    const register unsigned short int RTREN5 = 10;
    sbit  RTREN5_bit at C1TR45CON.B10;
    const register unsigned short int TX5PRI_1 = 9;
    sbit  TX5PRI_1_bit at C1TR45CON.B9;
    const register unsigned short int TX5PRI_0 = 8;
    sbit  TX5PRI_0_bit at C1TR45CON.B8;
    const register unsigned short int TXEN4 = 7;
    sbit  TXEN4_bit at C1TR45CON.B7;
    const register unsigned short int TXABT4 = 6;
    sbit  TXABT4_bit at C1TR45CON.B6;
    const register unsigned short int TXLARB4 = 5;
    sbit  TXLARB4_bit at C1TR45CON.B5;
    const register unsigned short int TXERR4 = 4;
    sbit  TXERR4_bit at C1TR45CON.B4;
    const register unsigned short int TXREQ4 = 3;
    sbit  TXREQ4_bit at C1TR45CON.B3;
    const register unsigned short int RTREN4 = 2;
    sbit  RTREN4_bit at C1TR45CON.B2;
    const register unsigned short int TX4PRI_1 = 1;
    sbit  TX4PRI_1_bit at C1TR45CON.B1;
    const register unsigned short int TX4PRI_0 = 0;
    sbit  TX4PRI_0_bit at C1TR45CON.B0;

    // C1TR67CON bits
    const register unsigned short int TXEN7 = 15;
    sbit  TXEN7_bit at C1TR67CON.B15;
    const register unsigned short int TXABT7 = 14;
    sbit  TXABT7_bit at C1TR67CON.B14;
    const register unsigned short int TXLARB7 = 13;
    sbit  TXLARB7_bit at C1TR67CON.B13;
    const register unsigned short int TXERR7 = 12;
    sbit  TXERR7_bit at C1TR67CON.B12;
    const register unsigned short int TXREQ7 = 11;
    sbit  TXREQ7_bit at C1TR67CON.B11;
    const register unsigned short int RTREN7 = 10;
    sbit  RTREN7_bit at C1TR67CON.B10;
    const register unsigned short int TX7PRI_1 = 9;
    sbit  TX7PRI_1_bit at C1TR67CON.B9;
    const register unsigned short int TX7PRI_0 = 8;
    sbit  TX7PRI_0_bit at C1TR67CON.B8;
    const register unsigned short int TXEN6 = 7;
    sbit  TXEN6_bit at C1TR67CON.B7;
    const register unsigned short int TXABT6 = 6;
    sbit  TXABT6_bit at C1TR67CON.B6;
    const register unsigned short int TXLARB6 = 5;
    sbit  TXLARB6_bit at C1TR67CON.B5;
    const register unsigned short int TXERR6 = 4;
    sbit  TXERR6_bit at C1TR67CON.B4;
    const register unsigned short int TXREQ6 = 3;
    sbit  TXREQ6_bit at C1TR67CON.B3;
    const register unsigned short int RTREN6 = 2;
    sbit  RTREN6_bit at C1TR67CON.B2;
    const register unsigned short int TX6PRI_1 = 1;
    sbit  TX6PRI_1_bit at C1TR67CON.B1;
    const register unsigned short int TX6PRI_0 = 0;
    sbit  TX6PRI_0_bit at C1TR67CON.B0;

    // C1RXM2SID bits
    const register unsigned short int SID10 = 15;
    sbit  SID10_bit at C1RXM2SID.B15;
    sbit  SID10_C1RXM2SID_bit at C1RXM2SID.B15;
    const register unsigned short int SID9 = 14;
    sbit  SID9_bit at C1RXM2SID.B14;
    sbit  SID9_C1RXM2SID_bit at C1RXM2SID.B14;
    const register unsigned short int SID8 = 13;
    sbit  SID8_bit at C1RXM2SID.B13;
    sbit  SID8_C1RXM2SID_bit at C1RXM2SID.B13;
    const register unsigned short int SID7 = 12;
    sbit  SID7_bit at C1RXM2SID.B12;
    sbit  SID7_C1RXM2SID_bit at C1RXM2SID.B12;
    const register unsigned short int SID6 = 11;
    sbit  SID6_bit at C1RXM2SID.B11;
    sbit  SID6_C1RXM2SID_bit at C1RXM2SID.B11;
    const register unsigned short int SID5 = 10;
    sbit  SID5_bit at C1RXM2SID.B10;
    sbit  SID5_C1RXM2SID_bit at C1RXM2SID.B10;
    const register unsigned short int SID4 = 9;
    sbit  SID4_bit at C1RXM2SID.B9;
    sbit  SID4_C1RXM2SID_bit at C1RXM2SID.B9;
    const register unsigned short int SID3 = 8;
    sbit  SID3_bit at C1RXM2SID.B8;
    sbit  SID3_C1RXM2SID_bit at C1RXM2SID.B8;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at C1RXM2SID.B7;
    sbit  SID2_C1RXM2SID_bit at C1RXM2SID.B7;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at C1RXM2SID.B6;
    sbit  SID1_C1RXM2SID_bit at C1RXM2SID.B6;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at C1RXM2SID.B5;
    sbit  SID0_C1RXM2SID_bit at C1RXM2SID.B5;
    const register unsigned short int MIDE = 3;
    sbit  MIDE_bit at C1RXM2SID.B3;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at C1RXM2SID.B1;
    sbit  EID17_C1RXM2SID_bit at C1RXM2SID.B1;
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at C1RXM2SID.B0;
    sbit  EID16_C1RXM2SID_bit at C1RXM2SID.B0;

    // C1RXM2EID bits
    const register unsigned short int EID15 = 15;
    sbit  EID15_bit at C1RXM2EID.B15;
    sbit  EID15_C1RXM2EID_bit at C1RXM2EID.B15;
    const register unsigned short int EID14 = 14;
    sbit  EID14_bit at C1RXM2EID.B14;
    sbit  EID14_C1RXM2EID_bit at C1RXM2EID.B14;
    const register unsigned short int EID13 = 13;
    sbit  EID13_bit at C1RXM2EID.B13;
    sbit  EID13_C1RXM2EID_bit at C1RXM2EID.B13;
    const register unsigned short int EID12 = 12;
    sbit  EID12_bit at C1RXM2EID.B12;
    sbit  EID12_C1RXM2EID_bit at C1RXM2EID.B12;
    const register unsigned short int EID11 = 11;
    sbit  EID11_bit at C1RXM2EID.B11;
    sbit  EID11_C1RXM2EID_bit at C1RXM2EID.B11;
    const register unsigned short int EID10 = 10;
    sbit  EID10_bit at C1RXM2EID.B10;
    sbit  EID10_C1RXM2EID_bit at C1RXM2EID.B10;
    const register unsigned short int EID9 = 9;
    sbit  EID9_bit at C1RXM2EID.B9;
    sbit  EID9_C1RXM2EID_bit at C1RXM2EID.B9;
    const register unsigned short int EID8 = 8;
    sbit  EID8_bit at C1RXM2EID.B8;
    sbit  EID8_C1RXM2EID_bit at C1RXM2EID.B8;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at C1RXM2EID.B7;
    sbit  EID7_C1RXM2EID_bit at C1RXM2EID.B7;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at C1RXM2EID.B6;
    sbit  EID6_C1RXM2EID_bit at C1RXM2EID.B6;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at C1RXM2EID.B5;
    sbit  EID5_C1RXM2EID_bit at C1RXM2EID.B5;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at C1RXM2EID.B4;
    sbit  EID4_C1RXM2EID_bit at C1RXM2EID.B4;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at C1RXM2EID.B3;
    sbit  EID3_C1RXM2EID_bit at C1RXM2EID.B3;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at C1RXM2EID.B2;
    sbit  EID2_C1RXM2EID_bit at C1RXM2EID.B2;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at C1RXM2EID.B1;
    sbit  EID1_C1RXM2EID_bit at C1RXM2EID.B1;
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at C1RXM2EID.B0;
    sbit  EID0_C1RXM2EID_bit at C1RXM2EID.B0;

    // C1RXD bits
    const register unsigned short int C1RXD_15 = 15;
    sbit  C1RXD_15_bit at C1RXD.B15;
    const register unsigned short int C1RXD_14 = 14;
    sbit  C1RXD_14_bit at C1RXD.B14;
    const register unsigned short int C1RXD_13 = 13;
    sbit  C1RXD_13_bit at C1RXD.B13;
    const register unsigned short int C1RXD_12 = 12;
    sbit  C1RXD_12_bit at C1RXD.B12;
    const register unsigned short int C1RXD_11 = 11;
    sbit  C1RXD_11_bit at C1RXD.B11;
    const register unsigned short int C1RXD_10 = 10;
    sbit  C1RXD_10_bit at C1RXD.B10;
    const register unsigned short int C1RXD_9 = 9;
    sbit  C1RXD_9_bit at C1RXD.B9;
    const register unsigned short int C1RXD_8 = 8;
    sbit  C1RXD_8_bit at C1RXD.B8;
    const register unsigned short int C1RXD_7 = 7;
    sbit  C1RXD_7_bit at C1RXD.B7;
    const register unsigned short int C1RXD_6 = 6;
    sbit  C1RXD_6_bit at C1RXD.B6;
    const register unsigned short int C1RXD_5 = 5;
    sbit  C1RXD_5_bit at C1RXD.B5;
    const register unsigned short int C1RXD_4 = 4;
    sbit  C1RXD_4_bit at C1RXD.B4;
    const register unsigned short int C1RXD_3 = 3;
    sbit  C1RXD_3_bit at C1RXD.B3;
    const register unsigned short int C1RXD_2 = 2;
    sbit  C1RXD_2_bit at C1RXD.B2;
    const register unsigned short int C1RXD_1 = 1;
    sbit  C1RXD_1_bit at C1RXD.B1;
    const register unsigned short int C1RXD_0 = 0;
    sbit  C1RXD_0_bit at C1RXD.B0;

    // C1TXD bits
    const register unsigned short int C1TXD_15 = 15;
    sbit  C1TXD_15_bit at C1TXD.B15;
    const register unsigned short int C1TXD_14 = 14;
    sbit  C1TXD_14_bit at C1TXD.B14;
    const register unsigned short int C1TXD_13 = 13;
    sbit  C1TXD_13_bit at C1TXD.B13;
    const register unsigned short int C1TXD_12 = 12;
    sbit  C1TXD_12_bit at C1TXD.B12;
    const register unsigned short int C1TXD_11 = 11;
    sbit  C1TXD_11_bit at C1TXD.B11;
    const register unsigned short int C1TXD_10 = 10;
    sbit  C1TXD_10_bit at C1TXD.B10;
    const register unsigned short int C1TXD_9 = 9;
    sbit  C1TXD_9_bit at C1TXD.B9;
    const register unsigned short int C1TXD_8 = 8;
    sbit  C1TXD_8_bit at C1TXD.B8;
    const register unsigned short int C1TXD_7 = 7;
    sbit  C1TXD_7_bit at C1TXD.B7;
    const register unsigned short int C1TXD_6 = 6;
    sbit  C1TXD_6_bit at C1TXD.B6;
    const register unsigned short int C1TXD_5 = 5;
    sbit  C1TXD_5_bit at C1TXD.B5;
    const register unsigned short int C1TXD_4 = 4;
    sbit  C1TXD_4_bit at C1TXD.B4;
    const register unsigned short int C1TXD_3 = 3;
    sbit  C1TXD_3_bit at C1TXD.B3;
    const register unsigned short int C1TXD_2 = 2;
    sbit  C1TXD_2_bit at C1TXD.B2;
    const register unsigned short int C1TXD_1 = 1;
    sbit  C1TXD_1_bit at C1TXD.B1;
    const register unsigned short int C1TXD_0 = 0;
    sbit  C1TXD_0_bit at C1TXD.B0;

    // C1RXF1SID bits
    sbit  SID10_C1RXF1SID_bit at C1RXF1SID.B15;
    sbit  SID9_C1RXF1SID_bit at C1RXF1SID.B14;
    sbit  SID8_C1RXF1SID_bit at C1RXF1SID.B13;
    sbit  SID7_C1RXF1SID_bit at C1RXF1SID.B12;
    sbit  SID6_C1RXF1SID_bit at C1RXF1SID.B11;
    sbit  SID5_C1RXF1SID_bit at C1RXF1SID.B10;
    sbit  SID4_C1RXF1SID_bit at C1RXF1SID.B9;
    sbit  SID3_C1RXF1SID_bit at C1RXF1SID.B8;
    sbit  SID2_C1RXF1SID_bit at C1RXF1SID.B7;
    sbit  SID1_C1RXF1SID_bit at C1RXF1SID.B6;
    sbit  SID0_C1RXF1SID_bit at C1RXF1SID.B5;
    const register unsigned short int EXIDE = 3;
    sbit  EXIDE_bit at C1RXF1SID.B3;
    sbit  EXIDE_C1RXF1SID_bit at C1RXF1SID.B3;
    sbit  EID17_C1RXF1SID_bit at C1RXF1SID.B1;
    sbit  EID16_C1RXF1SID_bit at C1RXF1SID.B0;

    // C1RXF1EID bits
    sbit  EID15_C1RXF1EID_bit at C1RXF1EID.B15;
    sbit  EID14_C1RXF1EID_bit at C1RXF1EID.B14;
    sbit  EID13_C1RXF1EID_bit at C1RXF1EID.B13;
    sbit  EID12_C1RXF1EID_bit at C1RXF1EID.B12;
    sbit  EID11_C1RXF1EID_bit at C1RXF1EID.B11;
    sbit  EID10_C1RXF1EID_bit at C1RXF1EID.B10;
    sbit  EID9_C1RXF1EID_bit at C1RXF1EID.B9;
    sbit  EID8_C1RXF1EID_bit at C1RXF1EID.B8;
    sbit  EID7_C1RXF1EID_bit at C1RXF1EID.B7;
    sbit  EID6_C1RXF1EID_bit at C1RXF1EID.B6;
    sbit  EID5_C1RXF1EID_bit at C1RXF1EID.B5;
    sbit  EID4_C1RXF1EID_bit at C1RXF1EID.B4;
    sbit  EID3_C1RXF1EID_bit at C1RXF1EID.B3;
    sbit  EID2_C1RXF1EID_bit at C1RXF1EID.B2;
    sbit  EID1_C1RXF1EID_bit at C1RXF1EID.B1;
    sbit  EID0_C1RXF1EID_bit at C1RXF1EID.B0;

    // C1RXF2SID bits
    sbit  SID10_C1RXF2SID_bit at C1RXF2SID.B15;
    sbit  SID9_C1RXF2SID_bit at C1RXF2SID.B14;
    sbit  SID8_C1RXF2SID_bit at C1RXF2SID.B13;
    sbit  SID7_C1RXF2SID_bit at C1RXF2SID.B12;
    sbit  SID6_C1RXF2SID_bit at C1RXF2SID.B11;
    sbit  SID5_C1RXF2SID_bit at C1RXF2SID.B10;
    sbit  SID4_C1RXF2SID_bit at C1RXF2SID.B9;
    sbit  SID3_C1RXF2SID_bit at C1RXF2SID.B8;
    sbit  SID2_C1RXF2SID_bit at C1RXF2SID.B7;
    sbit  SID1_C1RXF2SID_bit at C1RXF2SID.B6;
    sbit  SID0_C1RXF2SID_bit at C1RXF2SID.B5;
    sbit  EXIDE_C1RXF2SID_bit at C1RXF2SID.B3;
    sbit  EID17_C1RXF2SID_bit at C1RXF2SID.B1;
    sbit  EID16_C1RXF2SID_bit at C1RXF2SID.B0;

    // C1RXF2EID bits
    sbit  EID15_C1RXF2EID_bit at C1RXF2EID.B15;
    sbit  EID14_C1RXF2EID_bit at C1RXF2EID.B14;
    sbit  EID13_C1RXF2EID_bit at C1RXF2EID.B13;
    sbit  EID12_C1RXF2EID_bit at C1RXF2EID.B12;
    sbit  EID11_C1RXF2EID_bit at C1RXF2EID.B11;
    sbit  EID10_C1RXF2EID_bit at C1RXF2EID.B10;
    sbit  EID9_C1RXF2EID_bit at C1RXF2EID.B9;
    sbit  EID8_C1RXF2EID_bit at C1RXF2EID.B8;
    sbit  EID7_C1RXF2EID_bit at C1RXF2EID.B7;
    sbit  EID6_C1RXF2EID_bit at C1RXF2EID.B6;
    sbit  EID5_C1RXF2EID_bit at C1RXF2EID.B5;
    sbit  EID4_C1RXF2EID_bit at C1RXF2EID.B4;
    sbit  EID3_C1RXF2EID_bit at C1RXF2EID.B3;
    sbit  EID2_C1RXF2EID_bit at C1RXF2EID.B2;
    sbit  EID1_C1RXF2EID_bit at C1RXF2EID.B1;
    sbit  EID0_C1RXF2EID_bit at C1RXF2EID.B0;

    // C1RXF3SID bits
    sbit  SID10_C1RXF3SID_bit at C1RXF3SID.B15;
    sbit  SID9_C1RXF3SID_bit at C1RXF3SID.B14;
    sbit  SID8_C1RXF3SID_bit at C1RXF3SID.B13;
    sbit  SID7_C1RXF3SID_bit at C1RXF3SID.B12;
    sbit  SID6_C1RXF3SID_bit at C1RXF3SID.B11;
    sbit  SID5_C1RXF3SID_bit at C1RXF3SID.B10;
    sbit  SID4_C1RXF3SID_bit at C1RXF3SID.B9;
    sbit  SID3_C1RXF3SID_bit at C1RXF3SID.B8;
    sbit  SID2_C1RXF3SID_bit at C1RXF3SID.B7;
    sbit  SID1_C1RXF3SID_bit at C1RXF3SID.B6;
    sbit  SID0_C1RXF3SID_bit at C1RXF3SID.B5;
    sbit  EXIDE_C1RXF3SID_bit at C1RXF3SID.B3;
    sbit  EID17_C1RXF3SID_bit at C1RXF3SID.B1;
    sbit  EID16_C1RXF3SID_bit at C1RXF3SID.B0;

    // C1RXF3EID bits
    sbit  EID15_C1RXF3EID_bit at C1RXF3EID.B15;
    sbit  EID14_C1RXF3EID_bit at C1RXF3EID.B14;
    sbit  EID13_C1RXF3EID_bit at C1RXF3EID.B13;
    sbit  EID12_C1RXF3EID_bit at C1RXF3EID.B12;
    sbit  EID11_C1RXF3EID_bit at C1RXF3EID.B11;
    sbit  EID10_C1RXF3EID_bit at C1RXF3EID.B10;
    sbit  EID9_C1RXF3EID_bit at C1RXF3EID.B9;
    sbit  EID8_C1RXF3EID_bit at C1RXF3EID.B8;
    sbit  EID7_C1RXF3EID_bit at C1RXF3EID.B7;
    sbit  EID6_C1RXF3EID_bit at C1RXF3EID.B6;
    sbit  EID5_C1RXF3EID_bit at C1RXF3EID.B5;
    sbit  EID4_C1RXF3EID_bit at C1RXF3EID.B4;
    sbit  EID3_C1RXF3EID_bit at C1RXF3EID.B3;
    sbit  EID2_C1RXF3EID_bit at C1RXF3EID.B2;
    sbit  EID1_C1RXF3EID_bit at C1RXF3EID.B1;
    sbit  EID0_C1RXF3EID_bit at C1RXF3EID.B0;

    // C1RXF4SID bits
    sbit  SID10_C1RXF4SID_bit at C1RXF4SID.B15;
    sbit  SID9_C1RXF4SID_bit at C1RXF4SID.B14;
    sbit  SID8_C1RXF4SID_bit at C1RXF4SID.B13;
    sbit  SID7_C1RXF4SID_bit at C1RXF4SID.B12;
    sbit  SID6_C1RXF4SID_bit at C1RXF4SID.B11;
    sbit  SID5_C1RXF4SID_bit at C1RXF4SID.B10;
    sbit  SID4_C1RXF4SID_bit at C1RXF4SID.B9;
    sbit  SID3_C1RXF4SID_bit at C1RXF4SID.B8;
    sbit  SID2_C1RXF4SID_bit at C1RXF4SID.B7;
    sbit  SID1_C1RXF4SID_bit at C1RXF4SID.B6;
    sbit  SID0_C1RXF4SID_bit at C1RXF4SID.B5;
    sbit  EXIDE_C1RXF4SID_bit at C1RXF4SID.B3;
    sbit  EID17_C1RXF4SID_bit at C1RXF4SID.B1;
    sbit  EID16_C1RXF4SID_bit at C1RXF4SID.B0;

    // C1RXF4EID bits
    sbit  EID15_C1RXF4EID_bit at C1RXF4EID.B15;
    sbit  EID14_C1RXF4EID_bit at C1RXF4EID.B14;
    sbit  EID13_C1RXF4EID_bit at C1RXF4EID.B13;
    sbit  EID12_C1RXF4EID_bit at C1RXF4EID.B12;
    sbit  EID11_C1RXF4EID_bit at C1RXF4EID.B11;
    sbit  EID10_C1RXF4EID_bit at C1RXF4EID.B10;
    sbit  EID9_C1RXF4EID_bit at C1RXF4EID.B9;
    sbit  EID8_C1RXF4EID_bit at C1RXF4EID.B8;
    sbit  EID7_C1RXF4EID_bit at C1RXF4EID.B7;
    sbit  EID6_C1RXF4EID_bit at C1RXF4EID.B6;
    sbit  EID5_C1RXF4EID_bit at C1RXF4EID.B5;
    sbit  EID4_C1RXF4EID_bit at C1RXF4EID.B4;
    sbit  EID3_C1RXF4EID_bit at C1RXF4EID.B3;
    sbit  EID2_C1RXF4EID_bit at C1RXF4EID.B2;
    sbit  EID1_C1RXF4EID_bit at C1RXF4EID.B1;
    sbit  EID0_C1RXF4EID_bit at C1RXF4EID.B0;

    // C1RXF5SID bits
    sbit  SID10_C1RXF5SID_bit at C1RXF5SID.B15;
    sbit  SID9_C1RXF5SID_bit at C1RXF5SID.B14;
    sbit  SID8_C1RXF5SID_bit at C1RXF5SID.B13;
    sbit  SID7_C1RXF5SID_bit at C1RXF5SID.B12;
    sbit  SID6_C1RXF5SID_bit at C1RXF5SID.B11;
    sbit  SID5_C1RXF5SID_bit at C1RXF5SID.B10;
    sbit  SID4_C1RXF5SID_bit at C1RXF5SID.B9;
    sbit  SID3_C1RXF5SID_bit at C1RXF5SID.B8;
    sbit  SID2_C1RXF5SID_bit at C1RXF5SID.B7;
    sbit  SID1_C1RXF5SID_bit at C1RXF5SID.B6;
    sbit  SID0_C1RXF5SID_bit at C1RXF5SID.B5;
    sbit  EXIDE_C1RXF5SID_bit at C1RXF5SID.B3;
    sbit  EID17_C1RXF5SID_bit at C1RXF5SID.B1;
    sbit  EID16_C1RXF5SID_bit at C1RXF5SID.B0;

    // C1RXF5EID bits
    sbit  EID15_C1RXF5EID_bit at C1RXF5EID.B15;
    sbit  EID14_C1RXF5EID_bit at C1RXF5EID.B14;
    sbit  EID13_C1RXF5EID_bit at C1RXF5EID.B13;
    sbit  EID12_C1RXF5EID_bit at C1RXF5EID.B12;
    sbit  EID11_C1RXF5EID_bit at C1RXF5EID.B11;
    sbit  EID10_C1RXF5EID_bit at C1RXF5EID.B10;
    sbit  EID9_C1RXF5EID_bit at C1RXF5EID.B9;
    sbit  EID8_C1RXF5EID_bit at C1RXF5EID.B8;
    sbit  EID7_C1RXF5EID_bit at C1RXF5EID.B7;
    sbit  EID6_C1RXF5EID_bit at C1RXF5EID.B6;
    sbit  EID5_C1RXF5EID_bit at C1RXF5EID.B5;
    sbit  EID4_C1RXF5EID_bit at C1RXF5EID.B4;
    sbit  EID3_C1RXF5EID_bit at C1RXF5EID.B3;
    sbit  EID2_C1RXF5EID_bit at C1RXF5EID.B2;
    sbit  EID1_C1RXF5EID_bit at C1RXF5EID.B1;
    sbit  EID0_C1RXF5EID_bit at C1RXF5EID.B0;

    // C1RXF6SID bits
    sbit  SID10_C1RXF6SID_bit at C1RXF6SID.B15;
    sbit  SID9_C1RXF6SID_bit at C1RXF6SID.B14;
    sbit  SID8_C1RXF6SID_bit at C1RXF6SID.B13;
    sbit  SID7_C1RXF6SID_bit at C1RXF6SID.B12;
    sbit  SID6_C1RXF6SID_bit at C1RXF6SID.B11;
    sbit  SID5_C1RXF6SID_bit at C1RXF6SID.B10;
    sbit  SID4_C1RXF6SID_bit at C1RXF6SID.B9;
    sbit  SID3_C1RXF6SID_bit at C1RXF6SID.B8;
    sbit  SID2_C1RXF6SID_bit at C1RXF6SID.B7;
    sbit  SID1_C1RXF6SID_bit at C1RXF6SID.B6;
    sbit  SID0_C1RXF6SID_bit at C1RXF6SID.B5;
    sbit  EXIDE_C1RXF6SID_bit at C1RXF6SID.B3;
    sbit  EID17_C1RXF6SID_bit at C1RXF6SID.B1;
    sbit  EID16_C1RXF6SID_bit at C1RXF6SID.B0;

    // C1RXF6EID bits
    sbit  EID15_C1RXF6EID_bit at C1RXF6EID.B15;
    sbit  EID14_C1RXF6EID_bit at C1RXF6EID.B14;
    sbit  EID13_C1RXF6EID_bit at C1RXF6EID.B13;
    sbit  EID12_C1RXF6EID_bit at C1RXF6EID.B12;
    sbit  EID11_C1RXF6EID_bit at C1RXF6EID.B11;
    sbit  EID10_C1RXF6EID_bit at C1RXF6EID.B10;
    sbit  EID9_C1RXF6EID_bit at C1RXF6EID.B9;
    sbit  EID8_C1RXF6EID_bit at C1RXF6EID.B8;
    sbit  EID7_C1RXF6EID_bit at C1RXF6EID.B7;
    sbit  EID6_C1RXF6EID_bit at C1RXF6EID.B6;
    sbit  EID5_C1RXF6EID_bit at C1RXF6EID.B5;
    sbit  EID4_C1RXF6EID_bit at C1RXF6EID.B4;
    sbit  EID3_C1RXF6EID_bit at C1RXF6EID.B3;
    sbit  EID2_C1RXF6EID_bit at C1RXF6EID.B2;
    sbit  EID1_C1RXF6EID_bit at C1RXF6EID.B1;
    sbit  EID0_C1RXF6EID_bit at C1RXF6EID.B0;

    // C1RXF7SID bits
    sbit  SID10_C1RXF7SID_bit at C1RXF7SID.B15;
    sbit  SID9_C1RXF7SID_bit at C1RXF7SID.B14;
    sbit  SID8_C1RXF7SID_bit at C1RXF7SID.B13;
    sbit  SID7_C1RXF7SID_bit at C1RXF7SID.B12;
    sbit  SID6_C1RXF7SID_bit at C1RXF7SID.B11;
    sbit  SID5_C1RXF7SID_bit at C1RXF7SID.B10;
    sbit  SID4_C1RXF7SID_bit at C1RXF7SID.B9;
    sbit  SID3_C1RXF7SID_bit at C1RXF7SID.B8;
    sbit  SID2_C1RXF7SID_bit at C1RXF7SID.B7;
    sbit  SID1_C1RXF7SID_bit at C1RXF7SID.B6;
    sbit  SID0_C1RXF7SID_bit at C1RXF7SID.B5;
    sbit  EXIDE_C1RXF7SID_bit at C1RXF7SID.B3;
    sbit  EID17_C1RXF7SID_bit at C1RXF7SID.B1;
    sbit  EID16_C1RXF7SID_bit at C1RXF7SID.B0;

    // C1RXF7EID bits
    sbit  EID15_C1RXF7EID_bit at C1RXF7EID.B15;
    sbit  EID14_C1RXF7EID_bit at C1RXF7EID.B14;
    sbit  EID13_C1RXF7EID_bit at C1RXF7EID.B13;
    sbit  EID12_C1RXF7EID_bit at C1RXF7EID.B12;
    sbit  EID11_C1RXF7EID_bit at C1RXF7EID.B11;
    sbit  EID10_C1RXF7EID_bit at C1RXF7EID.B10;
    sbit  EID9_C1RXF7EID_bit at C1RXF7EID.B9;
    sbit  EID8_C1RXF7EID_bit at C1RXF7EID.B8;
    sbit  EID7_C1RXF7EID_bit at C1RXF7EID.B7;
    sbit  EID6_C1RXF7EID_bit at C1RXF7EID.B6;
    sbit  EID5_C1RXF7EID_bit at C1RXF7EID.B5;
    sbit  EID4_C1RXF7EID_bit at C1RXF7EID.B4;
    sbit  EID3_C1RXF7EID_bit at C1RXF7EID.B3;
    sbit  EID2_C1RXF7EID_bit at C1RXF7EID.B2;
    sbit  EID1_C1RXF7EID_bit at C1RXF7EID.B1;
    sbit  EID0_C1RXF7EID_bit at C1RXF7EID.B0;

    // C1RXF8SID bits
    sbit  SID10_C1RXF8SID_bit at C1RXF8SID.B15;
    sbit  SID9_C1RXF8SID_bit at C1RXF8SID.B14;
    sbit  SID8_C1RXF8SID_bit at C1RXF8SID.B13;
    sbit  SID7_C1RXF8SID_bit at C1RXF8SID.B12;
    sbit  SID6_C1RXF8SID_bit at C1RXF8SID.B11;
    sbit  SID5_C1RXF8SID_bit at C1RXF8SID.B10;
    sbit  SID4_C1RXF8SID_bit at C1RXF8SID.B9;
    sbit  SID3_C1RXF8SID_bit at C1RXF8SID.B8;
    sbit  SID2_C1RXF8SID_bit at C1RXF8SID.B7;
    sbit  SID1_C1RXF8SID_bit at C1RXF8SID.B6;
    sbit  SID0_C1RXF8SID_bit at C1RXF8SID.B5;
    sbit  EXIDE_C1RXF8SID_bit at C1RXF8SID.B3;
    sbit  EID17_C1RXF8SID_bit at C1RXF8SID.B1;
    sbit  EID16_C1RXF8SID_bit at C1RXF8SID.B0;

    // C1RXF8EID bits
    sbit  EID15_C1RXF8EID_bit at C1RXF8EID.B15;
    sbit  EID14_C1RXF8EID_bit at C1RXF8EID.B14;
    sbit  EID13_C1RXF8EID_bit at C1RXF8EID.B13;
    sbit  EID12_C1RXF8EID_bit at C1RXF8EID.B12;
    sbit  EID11_C1RXF8EID_bit at C1RXF8EID.B11;
    sbit  EID10_C1RXF8EID_bit at C1RXF8EID.B10;
    sbit  EID9_C1RXF8EID_bit at C1RXF8EID.B9;
    sbit  EID8_C1RXF8EID_bit at C1RXF8EID.B8;
    sbit  EID7_C1RXF8EID_bit at C1RXF8EID.B7;
    sbit  EID6_C1RXF8EID_bit at C1RXF8EID.B6;
    sbit  EID5_C1RXF8EID_bit at C1RXF8EID.B5;
    sbit  EID4_C1RXF8EID_bit at C1RXF8EID.B4;
    sbit  EID3_C1RXF8EID_bit at C1RXF8EID.B3;
    sbit  EID2_C1RXF8EID_bit at C1RXF8EID.B2;
    sbit  EID1_C1RXF8EID_bit at C1RXF8EID.B1;
    sbit  EID0_C1RXF8EID_bit at C1RXF8EID.B0;

    // C1RXF9SID bits
    sbit  SID10_C1RXF9SID_bit at C1RXF9SID.B15;
    sbit  SID9_C1RXF9SID_bit at C1RXF9SID.B14;
    sbit  SID8_C1RXF9SID_bit at C1RXF9SID.B13;
    sbit  SID7_C1RXF9SID_bit at C1RXF9SID.B12;
    sbit  SID6_C1RXF9SID_bit at C1RXF9SID.B11;
    sbit  SID5_C1RXF9SID_bit at C1RXF9SID.B10;
    sbit  SID4_C1RXF9SID_bit at C1RXF9SID.B9;
    sbit  SID3_C1RXF9SID_bit at C1RXF9SID.B8;
    sbit  SID2_C1RXF9SID_bit at C1RXF9SID.B7;
    sbit  SID1_C1RXF9SID_bit at C1RXF9SID.B6;
    sbit  SID0_C1RXF9SID_bit at C1RXF9SID.B5;
    sbit  EXIDE_C1RXF9SID_bit at C1RXF9SID.B3;
    sbit  EID17_C1RXF9SID_bit at C1RXF9SID.B1;
    sbit  EID16_C1RXF9SID_bit at C1RXF9SID.B0;

    // C1RXF9EID bits
    sbit  EID15_C1RXF9EID_bit at C1RXF9EID.B15;
    sbit  EID14_C1RXF9EID_bit at C1RXF9EID.B14;
    sbit  EID13_C1RXF9EID_bit at C1RXF9EID.B13;
    sbit  EID12_C1RXF9EID_bit at C1RXF9EID.B12;
    sbit  EID11_C1RXF9EID_bit at C1RXF9EID.B11;
    sbit  EID10_C1RXF9EID_bit at C1RXF9EID.B10;
    sbit  EID9_C1RXF9EID_bit at C1RXF9EID.B9;
    sbit  EID8_C1RXF9EID_bit at C1RXF9EID.B8;
    sbit  EID7_C1RXF9EID_bit at C1RXF9EID.B7;
    sbit  EID6_C1RXF9EID_bit at C1RXF9EID.B6;
    sbit  EID5_C1RXF9EID_bit at C1RXF9EID.B5;
    sbit  EID4_C1RXF9EID_bit at C1RXF9EID.B4;
    sbit  EID3_C1RXF9EID_bit at C1RXF9EID.B3;
    sbit  EID2_C1RXF9EID_bit at C1RXF9EID.B2;
    sbit  EID1_C1RXF9EID_bit at C1RXF9EID.B1;
    sbit  EID0_C1RXF9EID_bit at C1RXF9EID.B0;

    // C1RXF10SID bits
    sbit  SID10_C1RXF10SID_bit at C1RXF10SID.B15;
    sbit  SID9_C1RXF10SID_bit at C1RXF10SID.B14;
    sbit  SID8_C1RXF10SID_bit at C1RXF10SID.B13;
    sbit  SID7_C1RXF10SID_bit at C1RXF10SID.B12;
    sbit  SID6_C1RXF10SID_bit at C1RXF10SID.B11;
    sbit  SID5_C1RXF10SID_bit at C1RXF10SID.B10;
    sbit  SID4_C1RXF10SID_bit at C1RXF10SID.B9;
    sbit  SID3_C1RXF10SID_bit at C1RXF10SID.B8;
    sbit  SID2_C1RXF10SID_bit at C1RXF10SID.B7;
    sbit  SID1_C1RXF10SID_bit at C1RXF10SID.B6;
    sbit  SID0_C1RXF10SID_bit at C1RXF10SID.B5;
    sbit  EXIDE_C1RXF10SID_bit at C1RXF10SID.B3;
    sbit  EID17_C1RXF10SID_bit at C1RXF10SID.B1;
    sbit  EID16_C1RXF10SID_bit at C1RXF10SID.B0;

    // C1RXF10EID bits
    sbit  EID15_C1RXF10EID_bit at C1RXF10EID.B15;
    sbit  EID14_C1RXF10EID_bit at C1RXF10EID.B14;
    sbit  EID13_C1RXF10EID_bit at C1RXF10EID.B13;
    sbit  EID12_C1RXF10EID_bit at C1RXF10EID.B12;
    sbit  EID11_C1RXF10EID_bit at C1RXF10EID.B11;
    sbit  EID10_C1RXF10EID_bit at C1RXF10EID.B10;
    sbit  EID9_C1RXF10EID_bit at C1RXF10EID.B9;
    sbit  EID8_C1RXF10EID_bit at C1RXF10EID.B8;
    sbit  EID7_C1RXF10EID_bit at C1RXF10EID.B7;
    sbit  EID6_C1RXF10EID_bit at C1RXF10EID.B6;
    sbit  EID5_C1RXF10EID_bit at C1RXF10EID.B5;
    sbit  EID4_C1RXF10EID_bit at C1RXF10EID.B4;
    sbit  EID3_C1RXF10EID_bit at C1RXF10EID.B3;
    sbit  EID2_C1RXF10EID_bit at C1RXF10EID.B2;
    sbit  EID1_C1RXF10EID_bit at C1RXF10EID.B1;
    sbit  EID0_C1RXF10EID_bit at C1RXF10EID.B0;

    // C1RXF11SID bits
    sbit  SID10_C1RXF11SID_bit at C1RXF11SID.B15;
    sbit  SID9_C1RXF11SID_bit at C1RXF11SID.B14;
    sbit  SID8_C1RXF11SID_bit at C1RXF11SID.B13;
    sbit  SID7_C1RXF11SID_bit at C1RXF11SID.B12;
    sbit  SID6_C1RXF11SID_bit at C1RXF11SID.B11;
    sbit  SID5_C1RXF11SID_bit at C1RXF11SID.B10;
    sbit  SID4_C1RXF11SID_bit at C1RXF11SID.B9;
    sbit  SID3_C1RXF11SID_bit at C1RXF11SID.B8;
    sbit  SID2_C1RXF11SID_bit at C1RXF11SID.B7;
    sbit  SID1_C1RXF11SID_bit at C1RXF11SID.B6;
    sbit  SID0_C1RXF11SID_bit at C1RXF11SID.B5;
    sbit  EXIDE_C1RXF11SID_bit at C1RXF11SID.B3;
    sbit  EID17_C1RXF11SID_bit at C1RXF11SID.B1;
    sbit  EID16_C1RXF11SID_bit at C1RXF11SID.B0;

    // C1RXF11EID bits
    sbit  EID15_C1RXF11EID_bit at C1RXF11EID.B15;
    sbit  EID14_C1RXF11EID_bit at C1RXF11EID.B14;
    sbit  EID13_C1RXF11EID_bit at C1RXF11EID.B13;
    sbit  EID12_C1RXF11EID_bit at C1RXF11EID.B12;
    sbit  EID11_C1RXF11EID_bit at C1RXF11EID.B11;
    sbit  EID10_C1RXF11EID_bit at C1RXF11EID.B10;
    sbit  EID9_C1RXF11EID_bit at C1RXF11EID.B9;
    sbit  EID8_C1RXF11EID_bit at C1RXF11EID.B8;
    sbit  EID7_C1RXF11EID_bit at C1RXF11EID.B7;
    sbit  EID6_C1RXF11EID_bit at C1RXF11EID.B6;
    sbit  EID5_C1RXF11EID_bit at C1RXF11EID.B5;
    sbit  EID4_C1RXF11EID_bit at C1RXF11EID.B4;
    sbit  EID3_C1RXF11EID_bit at C1RXF11EID.B3;
    sbit  EID2_C1RXF11EID_bit at C1RXF11EID.B2;
    sbit  EID1_C1RXF11EID_bit at C1RXF11EID.B1;
    sbit  EID0_C1RXF11EID_bit at C1RXF11EID.B0;

    // C1RXF12SID bits
    sbit  SID10_C1RXF12SID_bit at C1RXF12SID.B15;
    sbit  SID9_C1RXF12SID_bit at C1RXF12SID.B14;
    sbit  SID8_C1RXF12SID_bit at C1RXF12SID.B13;
    sbit  SID7_C1RXF12SID_bit at C1RXF12SID.B12;
    sbit  SID6_C1RXF12SID_bit at C1RXF12SID.B11;
    sbit  SID5_C1RXF12SID_bit at C1RXF12SID.B10;
    sbit  SID4_C1RXF12SID_bit at C1RXF12SID.B9;
    sbit  SID3_C1RXF12SID_bit at C1RXF12SID.B8;
    sbit  SID2_C1RXF12SID_bit at C1RXF12SID.B7;
    sbit  SID1_C1RXF12SID_bit at C1RXF12SID.B6;
    sbit  SID0_C1RXF12SID_bit at C1RXF12SID.B5;
    sbit  EXIDE_C1RXF12SID_bit at C1RXF12SID.B3;
    sbit  EID17_C1RXF12SID_bit at C1RXF12SID.B1;
    sbit  EID16_C1RXF12SID_bit at C1RXF12SID.B0;

    // C1RXF12EID bits
    sbit  EID15_C1RXF12EID_bit at C1RXF12EID.B15;
    sbit  EID14_C1RXF12EID_bit at C1RXF12EID.B14;
    sbit  EID13_C1RXF12EID_bit at C1RXF12EID.B13;
    sbit  EID12_C1RXF12EID_bit at C1RXF12EID.B12;
    sbit  EID11_C1RXF12EID_bit at C1RXF12EID.B11;
    sbit  EID10_C1RXF12EID_bit at C1RXF12EID.B10;
    sbit  EID9_C1RXF12EID_bit at C1RXF12EID.B9;
    sbit  EID8_C1RXF12EID_bit at C1RXF12EID.B8;
    sbit  EID7_C1RXF12EID_bit at C1RXF12EID.B7;
    sbit  EID6_C1RXF12EID_bit at C1RXF12EID.B6;
    sbit  EID5_C1RXF12EID_bit at C1RXF12EID.B5;
    sbit  EID4_C1RXF12EID_bit at C1RXF12EID.B4;
    sbit  EID3_C1RXF12EID_bit at C1RXF12EID.B3;
    sbit  EID2_C1RXF12EID_bit at C1RXF12EID.B2;
    sbit  EID1_C1RXF12EID_bit at C1RXF12EID.B1;
    sbit  EID0_C1RXF12EID_bit at C1RXF12EID.B0;

    // C1RXF13SID bits
    sbit  SID10_C1RXF13SID_bit at C1RXF13SID.B15;
    sbit  SID9_C1RXF13SID_bit at C1RXF13SID.B14;
    sbit  SID8_C1RXF13SID_bit at C1RXF13SID.B13;
    sbit  SID7_C1RXF13SID_bit at C1RXF13SID.B12;
    sbit  SID6_C1RXF13SID_bit at C1RXF13SID.B11;
    sbit  SID5_C1RXF13SID_bit at C1RXF13SID.B10;
    sbit  SID4_C1RXF13SID_bit at C1RXF13SID.B9;
    sbit  SID3_C1RXF13SID_bit at C1RXF13SID.B8;
    sbit  SID2_C1RXF13SID_bit at C1RXF13SID.B7;
    sbit  SID1_C1RXF13SID_bit at C1RXF13SID.B6;
    sbit  SID0_C1RXF13SID_bit at C1RXF13SID.B5;
    sbit  EXIDE_C1RXF13SID_bit at C1RXF13SID.B3;
    sbit  EID17_C1RXF13SID_bit at C1RXF13SID.B1;
    sbit  EID16_C1RXF13SID_bit at C1RXF13SID.B0;

    // C1RXF13EID bits
    sbit  EID15_C1RXF13EID_bit at C1RXF13EID.B15;
    sbit  EID14_C1RXF13EID_bit at C1RXF13EID.B14;
    sbit  EID13_C1RXF13EID_bit at C1RXF13EID.B13;
    sbit  EID12_C1RXF13EID_bit at C1RXF13EID.B12;
    sbit  EID11_C1RXF13EID_bit at C1RXF13EID.B11;
    sbit  EID10_C1RXF13EID_bit at C1RXF13EID.B10;
    sbit  EID9_C1RXF13EID_bit at C1RXF13EID.B9;
    sbit  EID8_C1RXF13EID_bit at C1RXF13EID.B8;
    sbit  EID7_C1RXF13EID_bit at C1RXF13EID.B7;
    sbit  EID6_C1RXF13EID_bit at C1RXF13EID.B6;
    sbit  EID5_C1RXF13EID_bit at C1RXF13EID.B5;
    sbit  EID4_C1RXF13EID_bit at C1RXF13EID.B4;
    sbit  EID3_C1RXF13EID_bit at C1RXF13EID.B3;
    sbit  EID2_C1RXF13EID_bit at C1RXF13EID.B2;
    sbit  EID1_C1RXF13EID_bit at C1RXF13EID.B1;
    sbit  EID0_C1RXF13EID_bit at C1RXF13EID.B0;

    // C1RXF14SID bits
    sbit  SID10_C1RXF14SID_bit at C1RXF14SID.B15;
    sbit  SID9_C1RXF14SID_bit at C1RXF14SID.B14;
    sbit  SID8_C1RXF14SID_bit at C1RXF14SID.B13;
    sbit  SID7_C1RXF14SID_bit at C1RXF14SID.B12;
    sbit  SID6_C1RXF14SID_bit at C1RXF14SID.B11;
    sbit  SID5_C1RXF14SID_bit at C1RXF14SID.B10;
    sbit  SID4_C1RXF14SID_bit at C1RXF14SID.B9;
    sbit  SID3_C1RXF14SID_bit at C1RXF14SID.B8;
    sbit  SID2_C1RXF14SID_bit at C1RXF14SID.B7;
    sbit  SID1_C1RXF14SID_bit at C1RXF14SID.B6;
    sbit  SID0_C1RXF14SID_bit at C1RXF14SID.B5;
    sbit  EXIDE_C1RXF14SID_bit at C1RXF14SID.B3;
    sbit  EID17_C1RXF14SID_bit at C1RXF14SID.B1;
    sbit  EID16_C1RXF14SID_bit at C1RXF14SID.B0;

    // C1RXF14EID bits
    sbit  EID15_C1RXF14EID_bit at C1RXF14EID.B15;
    sbit  EID14_C1RXF14EID_bit at C1RXF14EID.B14;
    sbit  EID13_C1RXF14EID_bit at C1RXF14EID.B13;
    sbit  EID12_C1RXF14EID_bit at C1RXF14EID.B12;
    sbit  EID11_C1RXF14EID_bit at C1RXF14EID.B11;
    sbit  EID10_C1RXF14EID_bit at C1RXF14EID.B10;
    sbit  EID9_C1RXF14EID_bit at C1RXF14EID.B9;
    sbit  EID8_C1RXF14EID_bit at C1RXF14EID.B8;
    sbit  EID7_C1RXF14EID_bit at C1RXF14EID.B7;
    sbit  EID6_C1RXF14EID_bit at C1RXF14EID.B6;
    sbit  EID5_C1RXF14EID_bit at C1RXF14EID.B5;
    sbit  EID4_C1RXF14EID_bit at C1RXF14EID.B4;
    sbit  EID3_C1RXF14EID_bit at C1RXF14EID.B3;
    sbit  EID2_C1RXF14EID_bit at C1RXF14EID.B2;
    sbit  EID1_C1RXF14EID_bit at C1RXF14EID.B1;
    sbit  EID0_C1RXF14EID_bit at C1RXF14EID.B0;

    // C1RXF15SID bits
    sbit  SID10_C1RXF15SID_bit at C1RXF15SID.B15;
    sbit  SID9_C1RXF15SID_bit at C1RXF15SID.B14;
    sbit  SID8_C1RXF15SID_bit at C1RXF15SID.B13;
    sbit  SID7_C1RXF15SID_bit at C1RXF15SID.B12;
    sbit  SID6_C1RXF15SID_bit at C1RXF15SID.B11;
    sbit  SID5_C1RXF15SID_bit at C1RXF15SID.B10;
    sbit  SID4_C1RXF15SID_bit at C1RXF15SID.B9;
    sbit  SID3_C1RXF15SID_bit at C1RXF15SID.B8;
    sbit  SID2_C1RXF15SID_bit at C1RXF15SID.B7;
    sbit  SID1_C1RXF15SID_bit at C1RXF15SID.B6;
    sbit  SID0_C1RXF15SID_bit at C1RXF15SID.B5;
    sbit  EXIDE_C1RXF15SID_bit at C1RXF15SID.B3;
    sbit  EID17_C1RXF15SID_bit at C1RXF15SID.B1;
    sbit  EID16_C1RXF15SID_bit at C1RXF15SID.B0;

    // C1RXF15EID bits
    sbit  EID15_C1RXF15EID_bit at C1RXF15EID.B15;
    sbit  EID14_C1RXF15EID_bit at C1RXF15EID.B14;
    sbit  EID13_C1RXF15EID_bit at C1RXF15EID.B13;
    sbit  EID12_C1RXF15EID_bit at C1RXF15EID.B12;
    sbit  EID11_C1RXF15EID_bit at C1RXF15EID.B11;
    sbit  EID10_C1RXF15EID_bit at C1RXF15EID.B10;
    sbit  EID9_C1RXF15EID_bit at C1RXF15EID.B9;
    sbit  EID8_C1RXF15EID_bit at C1RXF15EID.B8;
    sbit  EID7_C1RXF15EID_bit at C1RXF15EID.B7;
    sbit  EID6_C1RXF15EID_bit at C1RXF15EID.B6;
    sbit  EID5_C1RXF15EID_bit at C1RXF15EID.B5;
    sbit  EID4_C1RXF15EID_bit at C1RXF15EID.B4;
    sbit  EID3_C1RXF15EID_bit at C1RXF15EID.B3;
    sbit  EID2_C1RXF15EID_bit at C1RXF15EID.B2;
    sbit  EID1_C1RXF15EID_bit at C1RXF15EID.B1;
    sbit  EID0_C1RXF15EID_bit at C1RXF15EID.B0;

    // CRCCON1 bits
    const register unsigned short int CRCEN = 15;
    sbit  CRCEN_bit at CRCCON1.B15;
    sbit  CSIDL_CRCCON1_bit at CRCCON1.B13;
    const register unsigned short int VWORD_4 = 12;
    sbit  VWORD_4_bit at CRCCON1.B12;
    const register unsigned short int VWORD_3 = 11;
    sbit  VWORD_3_bit at CRCCON1.B11;
    const register unsigned short int VWORD_2 = 10;
    sbit  VWORD_2_bit at CRCCON1.B10;
    const register unsigned short int VWORD_1 = 9;
    sbit  VWORD_1_bit at CRCCON1.B9;
    const register unsigned short int VWORD_0 = 8;
    sbit  VWORD_0_bit at CRCCON1.B8;
    const register unsigned short int CRCFUL = 7;
    sbit  CRCFUL_bit at CRCCON1.B7;
    const register unsigned short int CRCMPT = 6;
    sbit  CRCMPT_bit at CRCCON1.B6;
    const register unsigned short int CRCISEL = 5;
    sbit  CRCISEL_bit at CRCCON1.B5;
    const register unsigned short int CRCGO = 4;
    sbit  CRCGO_bit at CRCCON1.B4;
    const register unsigned short int LENDIAN = 3;
    sbit  LENDIAN_bit at CRCCON1.B3;

    // CRCCON2 bits
    const register unsigned short int DWIDTH_4 = 12;
    sbit  DWIDTH_4_bit at CRCCON2.B12;
    const register unsigned short int DWIDTH_3 = 11;
    sbit  DWIDTH_3_bit at CRCCON2.B11;
    const register unsigned short int DWIDTH_2 = 10;
    sbit  DWIDTH_2_bit at CRCCON2.B10;
    const register unsigned short int DWIDTH_1 = 9;
    sbit  DWIDTH_1_bit at CRCCON2.B9;
    const register unsigned short int DWIDTH_0 = 8;
    sbit  DWIDTH_0_bit at CRCCON2.B8;
    const register unsigned short int PLEN_4 = 4;
    sbit  PLEN_4_bit at CRCCON2.B4;
    const register unsigned short int PLEN_3 = 3;
    sbit  PLEN_3_bit at CRCCON2.B3;
    const register unsigned short int PLEN_2 = 2;
    sbit  PLEN_2_bit at CRCCON2.B2;
    const register unsigned short int PLEN_1 = 1;
    sbit  PLEN_1_bit at CRCCON2.B1;
    const register unsigned short int PLEN_0 = 0;
    sbit  PLEN_0_bit at CRCCON2.B0;

    // CRCXORL bits
    const register unsigned short int X15 = 15;
    sbit  X15_bit at CRCXORL.B15;
    const register unsigned short int X14 = 14;
    sbit  X14_bit at CRCXORL.B14;
    const register unsigned short int X13 = 13;
    sbit  X13_bit at CRCXORL.B13;
    const register unsigned short int X12 = 12;
    sbit  X12_bit at CRCXORL.B12;
    const register unsigned short int X11 = 11;
    sbit  X11_bit at CRCXORL.B11;
    const register unsigned short int X10 = 10;
    sbit  X10_bit at CRCXORL.B10;
    const register unsigned short int X9 = 9;
    sbit  X9_bit at CRCXORL.B9;
    const register unsigned short int X8 = 8;
    sbit  X8_bit at CRCXORL.B8;
    const register unsigned short int X7 = 7;
    sbit  X7_bit at CRCXORL.B7;
    const register unsigned short int X6 = 6;
    sbit  X6_bit at CRCXORL.B6;
    const register unsigned short int X5 = 5;
    sbit  X5_bit at CRCXORL.B5;
    const register unsigned short int X4 = 4;
    sbit  X4_bit at CRCXORL.B4;
    const register unsigned short int X3 = 3;
    sbit  X3_bit at CRCXORL.B3;
    const register unsigned short int X2 = 2;
    sbit  X2_bit at CRCXORL.B2;
    const register unsigned short int X1 = 1;
    sbit  X1_bit at CRCXORL.B1;

    // CRCXORH bits
    const register unsigned short int X31 = 15;
    sbit  X31_bit at CRCXORH.B15;
    const register unsigned short int X30 = 14;
    sbit  X30_bit at CRCXORH.B14;
    const register unsigned short int X29 = 13;
    sbit  X29_bit at CRCXORH.B13;
    const register unsigned short int X28 = 12;
    sbit  X28_bit at CRCXORH.B12;
    const register unsigned short int X27 = 11;
    sbit  X27_bit at CRCXORH.B11;
    const register unsigned short int X26 = 10;
    sbit  X26_bit at CRCXORH.B10;
    const register unsigned short int X25 = 9;
    sbit  X25_bit at CRCXORH.B9;
    const register unsigned short int X24 = 8;
    sbit  X24_bit at CRCXORH.B8;
    const register unsigned short int X23 = 7;
    sbit  X23_bit at CRCXORH.B7;
    const register unsigned short int X22 = 6;
    sbit  X22_bit at CRCXORH.B6;
    const register unsigned short int X21 = 5;
    sbit  X21_bit at CRCXORH.B5;
    const register unsigned short int X20 = 4;
    sbit  X20_bit at CRCXORH.B4;
    const register unsigned short int X19 = 3;
    sbit  X19_bit at CRCXORH.B3;
    const register unsigned short int X18 = 2;
    sbit  X18_bit at CRCXORH.B2;
    const register unsigned short int X17 = 1;
    sbit  X17_bit at CRCXORH.B1;
    const register unsigned short int X16 = 0;
    sbit  X16_bit at CRCXORH.B0;

    // CRCDATL bits
    const register unsigned short int CRCDATL_15 = 15;
    sbit  CRCDATL_15_bit at CRCDATL.B15;
    const register unsigned short int CRCDATL_14 = 14;
    sbit  CRCDATL_14_bit at CRCDATL.B14;
    const register unsigned short int CRCDATL_13 = 13;
    sbit  CRCDATL_13_bit at CRCDATL.B13;
    const register unsigned short int CRCDATL_12 = 12;
    sbit  CRCDATL_12_bit at CRCDATL.B12;
    const register unsigned short int CRCDATL_11 = 11;
    sbit  CRCDATL_11_bit at CRCDATL.B11;
    const register unsigned short int CRCDATL_10 = 10;
    sbit  CRCDATL_10_bit at CRCDATL.B10;
    const register unsigned short int CRCDATL_9 = 9;
    sbit  CRCDATL_9_bit at CRCDATL.B9;
    const register unsigned short int CRCDATL_8 = 8;
    sbit  CRCDATL_8_bit at CRCDATL.B8;
    const register unsigned short int CRCDATL_7 = 7;
    sbit  CRCDATL_7_bit at CRCDATL.B7;
    const register unsigned short int CRCDATL_6 = 6;
    sbit  CRCDATL_6_bit at CRCDATL.B6;
    const register unsigned short int CRCDATL_5 = 5;
    sbit  CRCDATL_5_bit at CRCDATL.B5;
    const register unsigned short int CRCDATL_4 = 4;
    sbit  CRCDATL_4_bit at CRCDATL.B4;
    const register unsigned short int CRCDATL_3 = 3;
    sbit  CRCDATL_3_bit at CRCDATL.B3;
    const register unsigned short int CRCDATL_2 = 2;
    sbit  CRCDATL_2_bit at CRCDATL.B2;
    const register unsigned short int CRCDATL_1 = 1;
    sbit  CRCDATL_1_bit at CRCDATL.B1;
    const register unsigned short int CRCDATL_0 = 0;
    sbit  CRCDATL_0_bit at CRCDATL.B0;

    // CRCDATH bits
    const register unsigned short int CRCDATH_15 = 15;
    sbit  CRCDATH_15_bit at CRCDATH.B15;
    const register unsigned short int CRCDATH_14 = 14;
    sbit  CRCDATH_14_bit at CRCDATH.B14;
    const register unsigned short int CRCDATH_13 = 13;
    sbit  CRCDATH_13_bit at CRCDATH.B13;
    const register unsigned short int CRCDATH_12 = 12;
    sbit  CRCDATH_12_bit at CRCDATH.B12;
    const register unsigned short int CRCDATH_11 = 11;
    sbit  CRCDATH_11_bit at CRCDATH.B11;
    const register unsigned short int CRCDATH_10 = 10;
    sbit  CRCDATH_10_bit at CRCDATH.B10;
    const register unsigned short int CRCDATH_9 = 9;
    sbit  CRCDATH_9_bit at CRCDATH.B9;
    const register unsigned short int CRCDATH_8 = 8;
    sbit  CRCDATH_8_bit at CRCDATH.B8;
    const register unsigned short int CRCDATH_7 = 7;
    sbit  CRCDATH_7_bit at CRCDATH.B7;
    const register unsigned short int CRCDATH_6 = 6;
    sbit  CRCDATH_6_bit at CRCDATH.B6;
    const register unsigned short int CRCDATH_5 = 5;
    sbit  CRCDATH_5_bit at CRCDATH.B5;
    const register unsigned short int CRCDATH_4 = 4;
    sbit  CRCDATH_4_bit at CRCDATH.B4;
    const register unsigned short int CRCDATH_3 = 3;
    sbit  CRCDATH_3_bit at CRCDATH.B3;
    const register unsigned short int CRCDATH_2 = 2;
    sbit  CRCDATH_2_bit at CRCDATH.B2;
    const register unsigned short int CRCDATH_1 = 1;
    sbit  CRCDATH_1_bit at CRCDATH.B1;
    const register unsigned short int CRCDATH_0 = 0;
    sbit  CRCDATH_0_bit at CRCDATH.B0;

    // CRCWDATL bits
    const register unsigned short int CRCWDATL_15 = 15;
    sbit  CRCWDATL_15_bit at CRCWDATL.B15;
    const register unsigned short int CRCWDATL_14 = 14;
    sbit  CRCWDATL_14_bit at CRCWDATL.B14;
    const register unsigned short int CRCWDATL_13 = 13;
    sbit  CRCWDATL_13_bit at CRCWDATL.B13;
    const register unsigned short int CRCWDATL_12 = 12;
    sbit  CRCWDATL_12_bit at CRCWDATL.B12;
    const register unsigned short int CRCWDATL_11 = 11;
    sbit  CRCWDATL_11_bit at CRCWDATL.B11;
    const register unsigned short int CRCWDATL_10 = 10;
    sbit  CRCWDATL_10_bit at CRCWDATL.B10;
    const register unsigned short int CRCWDATL_9 = 9;
    sbit  CRCWDATL_9_bit at CRCWDATL.B9;
    const register unsigned short int CRCWDATL_8 = 8;
    sbit  CRCWDATL_8_bit at CRCWDATL.B8;
    const register unsigned short int CRCWDATL_7 = 7;
    sbit  CRCWDATL_7_bit at CRCWDATL.B7;
    const register unsigned short int CRCWDATL_6 = 6;
    sbit  CRCWDATL_6_bit at CRCWDATL.B6;
    const register unsigned short int CRCWDATL_5 = 5;
    sbit  CRCWDATL_5_bit at CRCWDATL.B5;
    const register unsigned short int CRCWDATL_4 = 4;
    sbit  CRCWDATL_4_bit at CRCWDATL.B4;
    const register unsigned short int CRCWDATL_3 = 3;
    sbit  CRCWDATL_3_bit at CRCWDATL.B3;
    const register unsigned short int CRCWDATL_2 = 2;
    sbit  CRCWDATL_2_bit at CRCWDATL.B2;
    const register unsigned short int CRCWDATL_1 = 1;
    sbit  CRCWDATL_1_bit at CRCWDATL.B1;
    const register unsigned short int CRCWDATL_0 = 0;
    sbit  CRCWDATL_0_bit at CRCWDATL.B0;

    // CRCWDATH bits
    const register unsigned short int CRCWDATH_15 = 15;
    sbit  CRCWDATH_15_bit at CRCWDATH.B15;
    const register unsigned short int CRCWDATH_14 = 14;
    sbit  CRCWDATH_14_bit at CRCWDATH.B14;
    const register unsigned short int CRCWDATH_13 = 13;
    sbit  CRCWDATH_13_bit at CRCWDATH.B13;
    const register unsigned short int CRCWDATH_12 = 12;
    sbit  CRCWDATH_12_bit at CRCWDATH.B12;
    const register unsigned short int CRCWDATH_11 = 11;
    sbit  CRCWDATH_11_bit at CRCWDATH.B11;
    const register unsigned short int CRCWDATH_10 = 10;
    sbit  CRCWDATH_10_bit at CRCWDATH.B10;
    const register unsigned short int CRCWDATH_9 = 9;
    sbit  CRCWDATH_9_bit at CRCWDATH.B9;
    const register unsigned short int CRCWDATH_8 = 8;
    sbit  CRCWDATH_8_bit at CRCWDATH.B8;
    const register unsigned short int CRCWDATH_7 = 7;
    sbit  CRCWDATH_7_bit at CRCWDATH.B7;
    const register unsigned short int CRCWDATH_6 = 6;
    sbit  CRCWDATH_6_bit at CRCWDATH.B6;
    const register unsigned short int CRCWDATH_5 = 5;
    sbit  CRCWDATH_5_bit at CRCWDATH.B5;
    const register unsigned short int CRCWDATH_4 = 4;
    sbit  CRCWDATH_4_bit at CRCWDATH.B4;
    const register unsigned short int CRCWDATH_3 = 3;
    sbit  CRCWDATH_3_bit at CRCWDATH.B3;
    const register unsigned short int CRCWDATH_2 = 2;
    sbit  CRCWDATH_2_bit at CRCWDATH.B2;
    const register unsigned short int CRCWDATH_1 = 1;
    sbit  CRCWDATH_1_bit at CRCWDATH.B1;
    const register unsigned short int CRCWDATH_0 = 0;
    sbit  CRCWDATH_0_bit at CRCWDATH.B0;

    // RPOR0 bits
    const register unsigned short int RP35R_5 = 13;
    sbit  RP35R_5_bit at RPOR0.B13;
    const register unsigned short int RP35R_4 = 12;
    sbit  RP35R_4_bit at RPOR0.B12;
    const register unsigned short int RP35R_3 = 11;
    sbit  RP35R_3_bit at RPOR0.B11;
    const register unsigned short int RP35R_2 = 10;
    sbit  RP35R_2_bit at RPOR0.B10;
    const register unsigned short int RP35R_1 = 9;
    sbit  RP35R_1_bit at RPOR0.B9;
    const register unsigned short int RP35R_0 = 8;
    sbit  RP35R_0_bit at RPOR0.B8;
    const register unsigned short int RP20R_5 = 5;
    sbit  RP20R_5_bit at RPOR0.B5;
    const register unsigned short int RP20R_4 = 4;
    sbit  RP20R_4_bit at RPOR0.B4;
    const register unsigned short int RP20R_3 = 3;
    sbit  RP20R_3_bit at RPOR0.B3;
    const register unsigned short int RP20R_2 = 2;
    sbit  RP20R_2_bit at RPOR0.B2;
    const register unsigned short int RP20R_1 = 1;
    sbit  RP20R_1_bit at RPOR0.B1;
    const register unsigned short int RP20R_0 = 0;
    sbit  RP20R_0_bit at RPOR0.B0;

    // RPOR1 bits
    const register unsigned short int RP37R_5 = 13;
    sbit  RP37R_5_bit at RPOR1.B13;
    const register unsigned short int RP37R_4 = 12;
    sbit  RP37R_4_bit at RPOR1.B12;
    const register unsigned short int RP37R_3 = 11;
    sbit  RP37R_3_bit at RPOR1.B11;
    const register unsigned short int RP37R_2 = 10;
    sbit  RP37R_2_bit at RPOR1.B10;
    const register unsigned short int RP37R_1 = 9;
    sbit  RP37R_1_bit at RPOR1.B9;
    const register unsigned short int RP37R_0 = 8;
    sbit  RP37R_0_bit at RPOR1.B8;
    const register unsigned short int RP36R_5 = 5;
    sbit  RP36R_5_bit at RPOR1.B5;
    const register unsigned short int RP36R_4 = 4;
    sbit  RP36R_4_bit at RPOR1.B4;
    const register unsigned short int RP36R_3 = 3;
    sbit  RP36R_3_bit at RPOR1.B3;
    const register unsigned short int RP36R_2 = 2;
    sbit  RP36R_2_bit at RPOR1.B2;
    const register unsigned short int RP36R_1 = 1;
    sbit  RP36R_1_bit at RPOR1.B1;
    const register unsigned short int RP36R_0 = 0;
    sbit  RP36R_0_bit at RPOR1.B0;

    // RPOR2 bits
    const register unsigned short int RP39R_5 = 13;
    sbit  RP39R_5_bit at RPOR2.B13;
    const register unsigned short int RP39R_4 = 12;
    sbit  RP39R_4_bit at RPOR2.B12;
    const register unsigned short int RP39R_3 = 11;
    sbit  RP39R_3_bit at RPOR2.B11;
    const register unsigned short int RP39R_2 = 10;
    sbit  RP39R_2_bit at RPOR2.B10;
    const register unsigned short int RP39R_1 = 9;
    sbit  RP39R_1_bit at RPOR2.B9;
    const register unsigned short int RP39R_0 = 8;
    sbit  RP39R_0_bit at RPOR2.B8;
    const register unsigned short int RP38R_5 = 5;
    sbit  RP38R_5_bit at RPOR2.B5;
    const register unsigned short int RP38R_4 = 4;
    sbit  RP38R_4_bit at RPOR2.B4;
    const register unsigned short int RP38R_3 = 3;
    sbit  RP38R_3_bit at RPOR2.B3;
    const register unsigned short int RP38R_2 = 2;
    sbit  RP38R_2_bit at RPOR2.B2;
    const register unsigned short int RP38R_1 = 1;
    sbit  RP38R_1_bit at RPOR2.B1;
    const register unsigned short int RP38R_0 = 0;
    sbit  RP38R_0_bit at RPOR2.B0;

    // RPOR3 bits
    const register unsigned short int RP41R_5 = 13;
    sbit  RP41R_5_bit at RPOR3.B13;
    const register unsigned short int RP41R_4 = 12;
    sbit  RP41R_4_bit at RPOR3.B12;
    const register unsigned short int RP41R_3 = 11;
    sbit  RP41R_3_bit at RPOR3.B11;
    const register unsigned short int RP41R_2 = 10;
    sbit  RP41R_2_bit at RPOR3.B10;
    const register unsigned short int RP41R_1 = 9;
    sbit  RP41R_1_bit at RPOR3.B9;
    const register unsigned short int RP41R_0 = 8;
    sbit  RP41R_0_bit at RPOR3.B8;
    const register unsigned short int RP40R_5 = 5;
    sbit  RP40R_5_bit at RPOR3.B5;
    const register unsigned short int RP40R_4 = 4;
    sbit  RP40R_4_bit at RPOR3.B4;
    const register unsigned short int RP40R_3 = 3;
    sbit  RP40R_3_bit at RPOR3.B3;
    const register unsigned short int RP40R_2 = 2;
    sbit  RP40R_2_bit at RPOR3.B2;
    const register unsigned short int RP40R_1 = 1;
    sbit  RP40R_1_bit at RPOR3.B1;
    const register unsigned short int RP40R_0 = 0;
    sbit  RP40R_0_bit at RPOR3.B0;

    // RPOR4 bits
    const register unsigned short int RP43R_5 = 13;
    sbit  RP43R_5_bit at RPOR4.B13;
    const register unsigned short int RP43R_4 = 12;
    sbit  RP43R_4_bit at RPOR4.B12;
    const register unsigned short int RP43R_3 = 11;
    sbit  RP43R_3_bit at RPOR4.B11;
    const register unsigned short int RP43R_2 = 10;
    sbit  RP43R_2_bit at RPOR4.B10;
    const register unsigned short int RP43R_1 = 9;
    sbit  RP43R_1_bit at RPOR4.B9;
    const register unsigned short int RP43R_0 = 8;
    sbit  RP43R_0_bit at RPOR4.B8;
    const register unsigned short int RP42R_5 = 5;
    sbit  RP42R_5_bit at RPOR4.B5;
    const register unsigned short int RP42R_4 = 4;
    sbit  RP42R_4_bit at RPOR4.B4;
    const register unsigned short int RP42R_3 = 3;
    sbit  RP42R_3_bit at RPOR4.B3;
    const register unsigned short int RP42R_2 = 2;
    sbit  RP42R_2_bit at RPOR4.B2;
    const register unsigned short int RP42R_1 = 1;
    sbit  RP42R_1_bit at RPOR4.B1;
    const register unsigned short int RP42R_0 = 0;
    sbit  RP42R_0_bit at RPOR4.B0;

    // RPOR5 bits
    const register unsigned short int RP55R_5 = 13;
    sbit  RP55R_5_bit at RPOR5.B13;
    const register unsigned short int RP55R_4 = 12;
    sbit  RP55R_4_bit at RPOR5.B12;
    const register unsigned short int RP55R_3 = 11;
    sbit  RP55R_3_bit at RPOR5.B11;
    const register unsigned short int RP55R_2 = 10;
    sbit  RP55R_2_bit at RPOR5.B10;
    const register unsigned short int RP55R_1 = 9;
    sbit  RP55R_1_bit at RPOR5.B9;
    const register unsigned short int RP55R_0 = 8;
    sbit  RP55R_0_bit at RPOR5.B8;
    const register unsigned short int RP54R_5 = 5;
    sbit  RP54R_5_bit at RPOR5.B5;
    const register unsigned short int RP54R_4 = 4;
    sbit  RP54R_4_bit at RPOR5.B4;
    const register unsigned short int RP54R_3 = 3;
    sbit  RP54R_3_bit at RPOR5.B3;
    const register unsigned short int RP54R_2 = 2;
    sbit  RP54R_2_bit at RPOR5.B2;
    const register unsigned short int RP54R_1 = 1;
    sbit  RP54R_1_bit at RPOR5.B1;
    const register unsigned short int RP54R_0 = 0;
    sbit  RP54R_0_bit at RPOR5.B0;

    // RPOR6 bits
    const register unsigned short int RP57R_5 = 13;
    sbit  RP57R_5_bit at RPOR6.B13;
    const register unsigned short int RP57R_4 = 12;
    sbit  RP57R_4_bit at RPOR6.B12;
    const register unsigned short int RP57R_3 = 11;
    sbit  RP57R_3_bit at RPOR6.B11;
    const register unsigned short int RP57R_2 = 10;
    sbit  RP57R_2_bit at RPOR6.B10;
    const register unsigned short int RP57R_1 = 9;
    sbit  RP57R_1_bit at RPOR6.B9;
    const register unsigned short int RP57R_0 = 8;
    sbit  RP57R_0_bit at RPOR6.B8;
    const register unsigned short int RP56R_5 = 5;
    sbit  RP56R_5_bit at RPOR6.B5;
    const register unsigned short int RP56R_4 = 4;
    sbit  RP56R_4_bit at RPOR6.B4;
    const register unsigned short int RP56R_3 = 3;
    sbit  RP56R_3_bit at RPOR6.B3;
    const register unsigned short int RP56R_2 = 2;
    sbit  RP56R_2_bit at RPOR6.B2;
    const register unsigned short int RP56R_1 = 1;
    sbit  RP56R_1_bit at RPOR6.B1;
    const register unsigned short int RP56R_0 = 0;
    sbit  RP56R_0_bit at RPOR6.B0;

    // RPOR7 bits
    const register unsigned short int RP97R_5 = 13;
    sbit  RP97R_5_bit at RPOR7.B13;
    const register unsigned short int RP97R_4 = 12;
    sbit  RP97R_4_bit at RPOR7.B12;
    const register unsigned short int RP97R_3 = 11;
    sbit  RP97R_3_bit at RPOR7.B11;
    const register unsigned short int RP97R_2 = 10;
    sbit  RP97R_2_bit at RPOR7.B10;
    const register unsigned short int RP97R_1 = 9;
    sbit  RP97R_1_bit at RPOR7.B9;
    const register unsigned short int RP97R_0 = 8;
    sbit  RP97R_0_bit at RPOR7.B8;

    // RPOR8 bits
    const register unsigned short int RP118R_5 = 13;
    sbit  RP118R_5_bit at RPOR8.B13;
    const register unsigned short int RP118R_4 = 12;
    sbit  RP118R_4_bit at RPOR8.B12;
    const register unsigned short int RP118R_3 = 11;
    sbit  RP118R_3_bit at RPOR8.B11;
    const register unsigned short int RP118R_2 = 10;
    sbit  RP118R_2_bit at RPOR8.B10;
    const register unsigned short int RP118R_1 = 9;
    sbit  RP118R_1_bit at RPOR8.B9;
    const register unsigned short int RP118R_0 = 8;
    sbit  RP118R_0_bit at RPOR8.B8;

    // RPOR9 bits
    const register unsigned short int RP120R_5 = 5;
    sbit  RP120R_5_bit at RPOR9.B5;
    const register unsigned short int RP120R_4 = 4;
    sbit  RP120R_4_bit at RPOR9.B4;
    const register unsigned short int RP120R_3 = 3;
    sbit  RP120R_3_bit at RPOR9.B3;
    const register unsigned short int RP120R_2 = 2;
    sbit  RP120R_2_bit at RPOR9.B2;
    const register unsigned short int RP120R_1 = 1;
    sbit  RP120R_1_bit at RPOR9.B1;
    const register unsigned short int RP120R_0 = 0;
    sbit  RP120R_0_bit at RPOR9.B0;

    // RPINR0 bits
    const register unsigned short int INT1R_6 = 14;
    sbit  INT1R_6_bit at RPINR0.B14;
    const register unsigned short int INT1R_5 = 13;
    sbit  INT1R_5_bit at RPINR0.B13;
    const register unsigned short int INT1R_4 = 12;
    sbit  INT1R_4_bit at RPINR0.B12;
    const register unsigned short int INT1R_3 = 11;
    sbit  INT1R_3_bit at RPINR0.B11;
    const register unsigned short int INT1R_2 = 10;
    sbit  INT1R_2_bit at RPINR0.B10;
    const register unsigned short int INT1R_1 = 9;
    sbit  INT1R_1_bit at RPINR0.B9;
    const register unsigned short int INT1R_0 = 8;
    sbit  INT1R_0_bit at RPINR0.B8;

    // RPINR1 bits
    const register unsigned short int INT2R_6 = 6;
    sbit  INT2R_6_bit at RPINR1.B6;
    const register unsigned short int INT2R_5 = 5;
    sbit  INT2R_5_bit at RPINR1.B5;
    const register unsigned short int INT2R_4 = 4;
    sbit  INT2R_4_bit at RPINR1.B4;
    const register unsigned short int INT2R_3 = 3;
    sbit  INT2R_3_bit at RPINR1.B3;
    const register unsigned short int INT2R_2 = 2;
    sbit  INT2R_2_bit at RPINR1.B2;
    const register unsigned short int INT2R_1 = 1;
    sbit  INT2R_1_bit at RPINR1.B1;
    const register unsigned short int INT2R_0 = 0;
    sbit  INT2R_0_bit at RPINR1.B0;

    // RPINR3 bits
    const register unsigned short int T2CKR_6 = 6;
    sbit  T2CKR_6_bit at RPINR3.B6;
    const register unsigned short int T2CKR_5 = 5;
    sbit  T2CKR_5_bit at RPINR3.B5;
    const register unsigned short int T2CKR_4 = 4;
    sbit  T2CKR_4_bit at RPINR3.B4;
    const register unsigned short int T2CKR_3 = 3;
    sbit  T2CKR_3_bit at RPINR3.B3;
    const register unsigned short int T2CKR_2 = 2;
    sbit  T2CKR_2_bit at RPINR3.B2;
    const register unsigned short int T2CKR_1 = 1;
    sbit  T2CKR_1_bit at RPINR3.B1;
    const register unsigned short int T2CKR_0 = 0;
    sbit  T2CKR_0_bit at RPINR3.B0;

    // RPINR7 bits
    const register unsigned short int IC2R_6 = 14;
    sbit  IC2R_6_bit at RPINR7.B14;
    const register unsigned short int IC2R_5 = 13;
    sbit  IC2R_5_bit at RPINR7.B13;
    const register unsigned short int IC2R_4 = 12;
    sbit  IC2R_4_bit at RPINR7.B12;
    const register unsigned short int IC2R_3 = 11;
    sbit  IC2R_3_bit at RPINR7.B11;
    const register unsigned short int IC2R_2 = 10;
    sbit  IC2R_2_bit at RPINR7.B10;
    const register unsigned short int IC2R_1 = 9;
    sbit  IC2R_1_bit at RPINR7.B9;
    const register unsigned short int IC2R_0 = 8;
    sbit  IC2R_0_bit at RPINR7.B8;
    const register unsigned short int IC1R_6 = 6;
    sbit  IC1R_6_bit at RPINR7.B6;
    const register unsigned short int IC1R_5 = 5;
    sbit  IC1R_5_bit at RPINR7.B5;
    const register unsigned short int IC1R_4 = 4;
    sbit  IC1R_4_bit at RPINR7.B4;
    const register unsigned short int IC1R_3 = 3;
    sbit  IC1R_3_bit at RPINR7.B3;
    const register unsigned short int IC1R_2 = 2;
    sbit  IC1R_2_bit at RPINR7.B2;
    const register unsigned short int IC1R_1 = 1;
    sbit  IC1R_1_bit at RPINR7.B1;
    const register unsigned short int IC1R_0 = 0;
    sbit  IC1R_0_bit at RPINR7.B0;

    // RPINR8 bits
    const register unsigned short int IC4R_6 = 14;
    sbit  IC4R_6_bit at RPINR8.B14;
    const register unsigned short int IC4R_5 = 13;
    sbit  IC4R_5_bit at RPINR8.B13;
    const register unsigned short int IC4R_4 = 12;
    sbit  IC4R_4_bit at RPINR8.B12;
    const register unsigned short int IC4R_3 = 11;
    sbit  IC4R_3_bit at RPINR8.B11;
    const register unsigned short int IC4R_2 = 10;
    sbit  IC4R_2_bit at RPINR8.B10;
    const register unsigned short int IC4R_1 = 9;
    sbit  IC4R_1_bit at RPINR8.B9;
    const register unsigned short int IC4R_0 = 8;
    sbit  IC4R_0_bit at RPINR8.B8;
    const register unsigned short int IC3R_6 = 6;
    sbit  IC3R_6_bit at RPINR8.B6;
    const register unsigned short int IC3R_5 = 5;
    sbit  IC3R_5_bit at RPINR8.B5;
    const register unsigned short int IC3R_4 = 4;
    sbit  IC3R_4_bit at RPINR8.B4;
    const register unsigned short int IC3R_3 = 3;
    sbit  IC3R_3_bit at RPINR8.B3;
    const register unsigned short int IC3R_2 = 2;
    sbit  IC3R_2_bit at RPINR8.B2;
    const register unsigned short int IC3R_1 = 1;
    sbit  IC3R_1_bit at RPINR8.B1;
    const register unsigned short int IC3R_0 = 0;
    sbit  IC3R_0_bit at RPINR8.B0;

    // RPINR11 bits
    const register unsigned short int OCFAR_6 = 6;
    sbit  OCFAR_6_bit at RPINR11.B6;
    const register unsigned short int OCFAR_5 = 5;
    sbit  OCFAR_5_bit at RPINR11.B5;
    const register unsigned short int OCFAR_4 = 4;
    sbit  OCFAR_4_bit at RPINR11.B4;
    const register unsigned short int OCFAR_3 = 3;
    sbit  OCFAR_3_bit at RPINR11.B3;
    const register unsigned short int OCFAR_2 = 2;
    sbit  OCFAR_2_bit at RPINR11.B2;
    const register unsigned short int OCFAR_1 = 1;
    sbit  OCFAR_1_bit at RPINR11.B1;
    const register unsigned short int OCFAR_0 = 0;
    sbit  OCFAR_0_bit at RPINR11.B0;

    // RPINR18 bits
    const register unsigned short int U1RXR_6 = 6;
    sbit  U1RXR_6_bit at RPINR18.B6;
    const register unsigned short int U1RXR_5 = 5;
    sbit  U1RXR_5_bit at RPINR18.B5;
    const register unsigned short int U1RXR_4 = 4;
    sbit  U1RXR_4_bit at RPINR18.B4;
    const register unsigned short int U1RXR_3 = 3;
    sbit  U1RXR_3_bit at RPINR18.B3;
    const register unsigned short int U1RXR_2 = 2;
    sbit  U1RXR_2_bit at RPINR18.B2;
    const register unsigned short int U1RXR_1 = 1;
    sbit  U1RXR_1_bit at RPINR18.B1;
    const register unsigned short int U1RXR_0 = 0;
    sbit  U1RXR_0_bit at RPINR18.B0;

    // RPINR19 bits
    const register unsigned short int U2RXR_6 = 6;
    sbit  U2RXR_6_bit at RPINR19.B6;
    const register unsigned short int U2RXR_5 = 5;
    sbit  U2RXR_5_bit at RPINR19.B5;
    const register unsigned short int U2RXR_4 = 4;
    sbit  U2RXR_4_bit at RPINR19.B4;
    const register unsigned short int U2RXR_3 = 3;
    sbit  U2RXR_3_bit at RPINR19.B3;
    const register unsigned short int U2RXR_2 = 2;
    sbit  U2RXR_2_bit at RPINR19.B2;
    const register unsigned short int U2RXR_1 = 1;
    sbit  U2RXR_1_bit at RPINR19.B1;
    const register unsigned short int U2RXR_0 = 0;
    sbit  U2RXR_0_bit at RPINR19.B0;

    // RPINR22 bits
    const register unsigned short int SCK2R_6 = 14;
    sbit  SCK2R_6_bit at RPINR22.B14;
    const register unsigned short int SCK2R_5 = 13;
    sbit  SCK2R_5_bit at RPINR22.B13;
    const register unsigned short int SCK2R_4 = 12;
    sbit  SCK2R_4_bit at RPINR22.B12;
    const register unsigned short int SCK2R_3 = 11;
    sbit  SCK2R_3_bit at RPINR22.B11;
    const register unsigned short int SCK2R_2 = 10;
    sbit  SCK2R_2_bit at RPINR22.B10;
    const register unsigned short int SCK2R_1 = 9;
    sbit  SCK2R_1_bit at RPINR22.B9;
    const register unsigned short int SCK2R_0 = 8;
    sbit  SCK2R_0_bit at RPINR22.B8;
    const register unsigned short int SDI2R_6 = 6;
    sbit  SDI2R_6_bit at RPINR22.B6;
    const register unsigned short int SDI2R_5 = 5;
    sbit  SDI2R_5_bit at RPINR22.B5;
    const register unsigned short int SDI2R_4 = 4;
    sbit  SDI2R_4_bit at RPINR22.B4;
    const register unsigned short int SDI2R_3 = 3;
    sbit  SDI2R_3_bit at RPINR22.B3;
    const register unsigned short int SDI2R_2 = 2;
    sbit  SDI2R_2_bit at RPINR22.B2;
    const register unsigned short int SDI2R_1 = 1;
    sbit  SDI2R_1_bit at RPINR22.B1;
    const register unsigned short int SDI2R_0 = 0;
    sbit  SDI2R_0_bit at RPINR22.B0;

    // RPINR23 bits
    const register unsigned short int SS2R_6 = 6;
    sbit  SS2R_6_bit at RPINR23.B6;
    const register unsigned short int SS2R_5 = 5;
    sbit  SS2R_5_bit at RPINR23.B5;
    const register unsigned short int SS2R_4 = 4;
    sbit  SS2R_4_bit at RPINR23.B4;
    const register unsigned short int SS2R_3 = 3;
    sbit  SS2R_3_bit at RPINR23.B3;
    const register unsigned short int SS2R_2 = 2;
    sbit  SS2R_2_bit at RPINR23.B2;
    const register unsigned short int SS2R_1 = 1;
    sbit  SS2R_1_bit at RPINR23.B1;
    const register unsigned short int SS2R_0 = 0;
    sbit  SS2R_0_bit at RPINR23.B0;

    // RPINR26 bits
    const register unsigned short int C1RXR_6 = 6;
    sbit  C1RXR_6_bit at RPINR26.B6;
    const register unsigned short int C1RXR_5 = 5;
    sbit  C1RXR_5_bit at RPINR26.B5;
    const register unsigned short int C1RXR_4 = 4;
    sbit  C1RXR_4_bit at RPINR26.B4;
    const register unsigned short int C1RXR_3 = 3;
    sbit  C1RXR_3_bit at RPINR26.B3;
    const register unsigned short int C1RXR_2 = 2;
    sbit  C1RXR_2_bit at RPINR26.B2;
    const register unsigned short int C1RXR_1 = 1;
    sbit  C1RXR_1_bit at RPINR26.B1;
    const register unsigned short int C1RXR_0 = 0;
    sbit  C1RXR_0_bit at RPINR26.B0;

    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int NVMSIDL = 12;
    sbit  NVMSIDL_bit at NVMCON.B12;
    const register unsigned short int NVMOP_3 = 3;
    sbit  NVMOP_3_bit at NVMCON.B3;
    const register unsigned short int NVMOP_2 = 2;
    sbit  NVMOP_2_bit at NVMCON.B2;
    const register unsigned short int NVMOP_1 = 1;
    sbit  NVMOP_1_bit at NVMCON.B1;
    const register unsigned short int NVMOP_0 = 0;
    sbit  NVMOP_0_bit at NVMCON.B0;

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
    const register unsigned short int NVMADRU_23 = 7;
    sbit  NVMADRU_23_bit at NVMADRU.B7;
    const register unsigned short int NVMADRU_22 = 6;
    sbit  NVMADRU_22_bit at NVMADRU.B6;
    const register unsigned short int NVMADRU_21 = 5;
    sbit  NVMADRU_21_bit at NVMADRU.B5;
    const register unsigned short int NVMADRU_20 = 4;
    sbit  NVMADRU_20_bit at NVMADRU.B4;
    const register unsigned short int NVMADRU_19 = 3;
    sbit  NVMADRU_19_bit at NVMADRU.B3;
    const register unsigned short int NVMADRU_18 = 2;
    sbit  NVMADRU_18_bit at NVMADRU.B2;
    const register unsigned short int NVMADRU_17 = 1;
    sbit  NVMADRU_17_bit at NVMADRU.B1;
    const register unsigned short int NVMADRU_16 = 0;
    sbit  NVMADRU_16_bit at NVMADRU.B0;

    // NVMKEY bits
    const register unsigned short int NVMKEY_7 = 7;
    sbit  NVMKEY_7_bit at NVMKEY.B7;
    const register unsigned short int NVMKEY_6 = 6;
    sbit  NVMKEY_6_bit at NVMKEY.B6;
    const register unsigned short int NVMKEY_5 = 5;
    sbit  NVMKEY_5_bit at NVMKEY.B5;
    const register unsigned short int NVMKEY_4 = 4;
    sbit  NVMKEY_4_bit at NVMKEY.B4;
    const register unsigned short int NVMKEY_3 = 3;
    sbit  NVMKEY_3_bit at NVMKEY.B3;
    const register unsigned short int NVMKEY_2 = 2;
    sbit  NVMKEY_2_bit at NVMKEY.B2;
    const register unsigned short int NVMKEY_1 = 1;
    sbit  NVMKEY_1_bit at NVMKEY.B1;
    const register unsigned short int NVMKEY_0 = 0;
    sbit  NVMKEY_0_bit at NVMKEY.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int VREGSF = 11;
    sbit  VREGSF_bit at RCON.B11;
    const register unsigned short int CM = 9;
    sbit  CM_bit at RCON.B9;
    const register unsigned short int VREGS = 8;
    sbit  VREGS_bit at RCON.B8;
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
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON.B7;
    const register unsigned short int IOLOCK = 6;
    sbit  IOLOCK_bit at OSCCON.B6;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

    // CLKDIV bits
    const register unsigned short int ROI = 15;
    sbit  ROI_bit at CLKDIV.B15;
    const register unsigned short int DOZE_2 = 14;
    sbit  DOZE_2_bit at CLKDIV.B14;
    const register unsigned short int DOZE_1 = 13;
    sbit  DOZE_1_bit at CLKDIV.B13;
    const register unsigned short int DOZE_0 = 12;
    sbit  DOZE_0_bit at CLKDIV.B12;
    const register unsigned short int DOZEN = 11;
    sbit  DOZEN_bit at CLKDIV.B11;
    const register unsigned short int FRCDIV_2 = 10;
    sbit  FRCDIV_2_bit at CLKDIV.B10;
    const register unsigned short int FRCDIV_1 = 9;
    sbit  FRCDIV_1_bit at CLKDIV.B9;
    const register unsigned short int FRCDIV_0 = 8;
    sbit  FRCDIV_0_bit at CLKDIV.B8;
    const register unsigned short int PLLPOST_1 = 7;
    sbit  PLLPOST_1_bit at CLKDIV.B7;
    const register unsigned short int PLLPOST_0 = 6;
    sbit  PLLPOST_0_bit at CLKDIV.B6;
    const register unsigned short int PLLPRE_4 = 4;
    sbit  PLLPRE_4_bit at CLKDIV.B4;
    const register unsigned short int PLLPRE_3 = 3;
    sbit  PLLPRE_3_bit at CLKDIV.B3;
    const register unsigned short int PLLPRE_2 = 2;
    sbit  PLLPRE_2_bit at CLKDIV.B2;
    const register unsigned short int PLLPRE_1 = 1;
    sbit  PLLPRE_1_bit at CLKDIV.B1;
    const register unsigned short int PLLPRE_0 = 0;
    sbit  PLLPRE_0_bit at CLKDIV.B0;

    // PLLFBD bits
    const register unsigned short int PLLDIV_8 = 8;
    sbit  PLLDIV_8_bit at PLLFBD.B8;
    const register unsigned short int PLLDIV_7 = 7;
    sbit  PLLDIV_7_bit at PLLFBD.B7;
    const register unsigned short int PLLDIV_6 = 6;
    sbit  PLLDIV_6_bit at PLLFBD.B6;
    const register unsigned short int PLLDIV_5 = 5;
    sbit  PLLDIV_5_bit at PLLFBD.B5;
    const register unsigned short int PLLDIV_4 = 4;
    sbit  PLLDIV_4_bit at PLLFBD.B4;
    const register unsigned short int PLLDIV_3 = 3;
    sbit  PLLDIV_3_bit at PLLFBD.B3;
    const register unsigned short int PLLDIV_2 = 2;
    sbit  PLLDIV_2_bit at PLLFBD.B2;
    const register unsigned short int PLLDIV_1 = 1;
    sbit  PLLDIV_1_bit at PLLFBD.B1;
    const register unsigned short int PLLDIV_0 = 0;
    sbit  PLLDIV_0_bit at PLLFBD.B0;

    // OSCTUN bits
    const register unsigned short int TUN_5 = 5;
    sbit  TUN_5_bit at OSCTUN.B5;
    const register unsigned short int TUN_4 = 4;
    sbit  TUN_4_bit at OSCTUN.B4;
    const register unsigned short int TUN_3 = 3;
    sbit  TUN_3_bit at OSCTUN.B3;
    const register unsigned short int TUN_2 = 2;
    sbit  TUN_2_bit at OSCTUN.B2;
    const register unsigned short int TUN_1 = 1;
    sbit  TUN_1_bit at OSCTUN.B1;
    const register unsigned short int TUN_0 = 0;
    sbit  TUN_0_bit at OSCTUN.B0;

    // REFOCON bits
    const register unsigned short int ROON = 15;
    sbit  ROON_bit at REFOCON.B15;
    const register unsigned short int ROSSLP = 13;
    sbit  ROSSLP_bit at REFOCON.B13;
    const register unsigned short int ROSEL = 12;
    sbit  ROSEL_bit at REFOCON.B12;
    const register unsigned short int RODIV_3 = 11;
    sbit  RODIV_3_bit at REFOCON.B11;
    const register unsigned short int RODIV_2 = 10;
    sbit  RODIV_2_bit at REFOCON.B10;
    const register unsigned short int RODIV_1 = 9;
    sbit  RODIV_1_bit at REFOCON.B9;
    const register unsigned short int RODIV_0 = 8;
    sbit  RODIV_0_bit at REFOCON.B8;

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
    const register unsigned short int I2C1MD = 7;
    sbit  I2C1MD_bit at PMD1.B7;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI2MD = 4;
    sbit  SPI2MD_bit at PMD1.B4;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int C1MD = 1;
    sbit  C1MD_bit at PMD1.B1;
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int OC4MD = 3;
    sbit  OC4MD_bit at PMD2.B3;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;

    // PMD4 bits
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;

    // PMD6 bits

    // PMD7 bits
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;
    const register unsigned short int PTGMD = 3;
    sbit  PTGMD_bit at PMD7.B3;

    // IFS0 bits
    const register unsigned short int DMA1IF = 14;
    sbit  DMA1IF_bit at IFS0.B14;
    const register unsigned short int AD1IF = 13;
    sbit  AD1IF_bit at IFS0.B13;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int SPI1IF = 10;
    sbit  SPI1IF_bit at IFS0.B10;
    const register unsigned short int SPI1EIF = 9;
    sbit  SPI1EIF_bit at IFS0.B9;
    const register unsigned short int T3IF = 8;
    sbit  T3IF_bit at IFS0.B8;
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int OC2IF = 6;
    sbit  OC2IF_bit at IFS0.B6;
    const register unsigned short int IC2IF = 5;
    sbit  IC2IF_bit at IFS0.B5;
    const register unsigned short int DMA0IF = 4;
    sbit  DMA0IF_bit at IFS0.B4;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int U2TXIF = 15;
    sbit  U2TXIF_bit at IFS1.B15;
    const register unsigned short int U2RXIF = 14;
    sbit  U2RXIF_bit at IFS1.B14;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
    const register unsigned short int T5IF = 12;
    sbit  T5IF_bit at IFS1.B12;
    const register unsigned short int T4IF = 11;
    sbit  T4IF_bit at IFS1.B11;
    const register unsigned short int OC4IF = 10;
    sbit  OC4IF_bit at IFS1.B10;
    const register unsigned short int OC3IF = 9;
    sbit  OC3IF_bit at IFS1.B9;
    const register unsigned short int DMA2IF = 8;
    sbit  DMA2IF_bit at IFS1.B8;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int CMIF = 2;
    sbit  CMIF_bit at IFS1.B2;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int C1IF = 3;
    sbit  C1IF_bit at IFS2.B3;
    const register unsigned short int C1RXIF = 2;
    sbit  C1RXIF_bit at IFS2.B2;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int SPI2EIF = 0;
    sbit  SPI2EIF_bit at IFS2.B0;

    // IFS3 bits
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;

    // IFS4 bits
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;
    const register unsigned short int C1TXIF = 6;
    sbit  C1TXIF_bit at IFS4.B6;
    const register unsigned short int CRCIF = 3;
    sbit  CRCIF_bit at IFS4.B3;
    const register unsigned short int U2EIF = 2;
    sbit  U2EIF_bit at IFS4.B2;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;

    // IFS5 bits

    // IFS6 bits

    // IFS8 bits
    const register unsigned short int JTAGIF = 15;
    sbit  JTAGIF_bit at IFS8.B15;
    const register unsigned short int ICDIF = 14;
    sbit  ICDIF_bit at IFS8.B14;
    sbit  ICDIF_IFS8_bit at IFS8.B14;

    // IFS9 bits
    const register unsigned short int PTG3IF = 6;
    sbit  PTG3IF_bit at IFS9.B6;
    const register unsigned short int PTG2IF = 5;
    sbit  PTG2IF_bit at IFS9.B5;
    const register unsigned short int PTG1IF = 4;
    sbit  PTG1IF_bit at IFS9.B4;
    const register unsigned short int PTG0IF = 3;
    sbit  PTG0IF_bit at IFS9.B3;
    const register unsigned short int PTGWDTIF = 2;
    sbit  PTGWDTIF_bit at IFS9.B2;
    const register unsigned short int PTGSTEPIF = 1;
    sbit  PTGSTEPIF_bit at IFS9.B1;

    // IEC0 bits
    const register unsigned short int DMA1IE = 14;
    sbit  DMA1IE_bit at IEC0.B14;
    const register unsigned short int AD1IE = 13;
    sbit  AD1IE_bit at IEC0.B13;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int SPI1IE = 10;
    sbit  SPI1IE_bit at IEC0.B10;
    const register unsigned short int SPI1EIE = 9;
    sbit  SPI1EIE_bit at IEC0.B9;
    const register unsigned short int T3IE = 8;
    sbit  T3IE_bit at IEC0.B8;
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int OC2IE = 6;
    sbit  OC2IE_bit at IEC0.B6;
    const register unsigned short int IC2IE = 5;
    sbit  IC2IE_bit at IEC0.B5;
    const register unsigned short int DMA0IE = 4;
    sbit  DMA0IE_bit at IEC0.B4;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int U2TXIE = 15;
    sbit  U2TXIE_bit at IEC1.B15;
    const register unsigned short int U2RXIE = 14;
    sbit  U2RXIE_bit at IEC1.B14;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
    const register unsigned short int T5IE = 12;
    sbit  T5IE_bit at IEC1.B12;
    const register unsigned short int T4IE = 11;
    sbit  T4IE_bit at IEC1.B11;
    const register unsigned short int OC4IE = 10;
    sbit  OC4IE_bit at IEC1.B10;
    const register unsigned short int OC3IE = 9;
    sbit  OC3IE_bit at IEC1.B9;
    const register unsigned short int DMA2IE = 8;
    sbit  DMA2IE_bit at IEC1.B8;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int CMIE = 2;
    sbit  CMIE_bit at IEC1.B2;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int C1IE = 3;
    sbit  C1IE_bit at IEC2.B3;
    const register unsigned short int C1RXIE = 2;
    sbit  C1RXIE_bit at IEC2.B2;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int SPI2EIE = 0;
    sbit  SPI2EIE_bit at IEC2.B0;

    // IEC3 bits
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;

    // IEC4 bits
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;
    const register unsigned short int C1TXIE = 6;
    sbit  C1TXIE_bit at IEC4.B6;
    const register unsigned short int CRCIE = 3;
    sbit  CRCIE_bit at IEC4.B3;
    const register unsigned short int U2EIE = 2;
    sbit  U2EIE_bit at IEC4.B2;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;

    // IEC8 bits
    const register unsigned short int JTAGIE = 15;
    sbit  JTAGIE_bit at IEC8.B15;
    sbit  ICDIF_IEC8_bit at IEC8.B14;

    // IEC9 bits
    const register unsigned short int PTG3IE = 6;
    sbit  PTG3IE_bit at IEC9.B6;
    const register unsigned short int PTG2IE = 5;
    sbit  PTG2IE_bit at IEC9.B5;
    const register unsigned short int PTG1IE = 4;
    sbit  PTG1IE_bit at IEC9.B4;
    const register unsigned short int PTG0IE = 3;
    sbit  PTG0IE_bit at IEC9.B3;
    const register unsigned short int PTGWDTIE = 2;
    sbit  PTGWDTIE_bit at IEC9.B2;
    const register unsigned short int PTGSTEPIE = 1;
    sbit  PTGSTEPIE_bit at IEC9.B1;

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
    const register unsigned short int T2IP_2 = 14;
    sbit  T2IP_2_bit at IPC1.B14;
    const register unsigned short int T2IP_1 = 13;
    sbit  T2IP_1_bit at IPC1.B13;
    const register unsigned short int T2IP_0 = 12;
    sbit  T2IP_0_bit at IPC1.B12;
    const register unsigned short int OC2IP_2 = 10;
    sbit  OC2IP_2_bit at IPC1.B10;
    const register unsigned short int OC2IP_1 = 9;
    sbit  OC2IP_1_bit at IPC1.B9;
    const register unsigned short int OC2IP_0 = 8;
    sbit  OC2IP_0_bit at IPC1.B8;
    const register unsigned short int IC2IP_2 = 6;
    sbit  IC2IP_2_bit at IPC1.B6;
    const register unsigned short int IC2IP_1 = 5;
    sbit  IC2IP_1_bit at IPC1.B5;
    const register unsigned short int IC2IP_0 = 4;
    sbit  IC2IP_0_bit at IPC1.B4;
    const register unsigned short int DMA0IP_2 = 2;
    sbit  DMA0IP_2_bit at IPC1.B2;
    const register unsigned short int DMA0IP_1 = 1;
    sbit  DMA0IP_1_bit at IPC1.B1;
    const register unsigned short int DMA0IP_0 = 0;
    sbit  DMA0IP_0_bit at IPC1.B0;

    // IPC2 bits
    const register unsigned short int U1RXIP_2 = 14;
    sbit  U1RXIP_2_bit at IPC2.B14;
    const register unsigned short int U1RXIP_1 = 13;
    sbit  U1RXIP_1_bit at IPC2.B13;
    const register unsigned short int U1RXIP_0 = 12;
    sbit  U1RXIP_0_bit at IPC2.B12;
    const register unsigned short int SPI1IP_2 = 10;
    sbit  SPI1IP_2_bit at IPC2.B10;
    const register unsigned short int SPI1IP_1 = 9;
    sbit  SPI1IP_1_bit at IPC2.B9;
    const register unsigned short int SPI1IP_0 = 8;
    sbit  SPI1IP_0_bit at IPC2.B8;
    const register unsigned short int SPI1EIP_2 = 6;
    sbit  SPI1EIP_2_bit at IPC2.B6;
    const register unsigned short int SPI1EIP_1 = 5;
    sbit  SPI1EIP_1_bit at IPC2.B5;
    const register unsigned short int SPI1EIP_0 = 4;
    sbit  SPI1EIP_0_bit at IPC2.B4;
    const register unsigned short int T3IP_2 = 2;
    sbit  T3IP_2_bit at IPC2.B2;
    const register unsigned short int T3IP_1 = 1;
    sbit  T3IP_1_bit at IPC2.B1;
    const register unsigned short int T3IP_0 = 0;
    sbit  T3IP_0_bit at IPC2.B0;

    // IPC3 bits
    const register unsigned short int DMA1IP_2 = 10;
    sbit  DMA1IP_2_bit at IPC3.B10;
    const register unsigned short int DMA1IP_1 = 9;
    sbit  DMA1IP_1_bit at IPC3.B9;
    const register unsigned short int DMA1IP_0 = 8;
    sbit  DMA1IP_0_bit at IPC3.B8;
    const register unsigned short int AD1IP_2 = 6;
    sbit  AD1IP_2_bit at IPC3.B6;
    const register unsigned short int AD1IP_1 = 5;
    sbit  AD1IP_1_bit at IPC3.B5;
    const register unsigned short int AD1IP_0 = 4;
    sbit  AD1IP_0_bit at IPC3.B4;
    const register unsigned short int U1TXIP_2 = 2;
    sbit  U1TXIP_2_bit at IPC3.B2;
    const register unsigned short int U1TXIP_1 = 1;
    sbit  U1TXIP_1_bit at IPC3.B1;
    const register unsigned short int U1TXIP_0 = 0;
    sbit  U1TXIP_0_bit at IPC3.B0;

    // IPC4 bits
    const register unsigned short int CNIP_2 = 14;
    sbit  CNIP_2_bit at IPC4.B14;
    const register unsigned short int CNIP_1 = 13;
    sbit  CNIP_1_bit at IPC4.B13;
    const register unsigned short int CNIP_0 = 12;
    sbit  CNIP_0_bit at IPC4.B12;
    const register unsigned short int CMIP_2 = 10;
    sbit  CMIP_2_bit at IPC4.B10;
    const register unsigned short int CMIP_1 = 9;
    sbit  CMIP_1_bit at IPC4.B9;
    const register unsigned short int CMIP_0 = 8;
    sbit  CMIP_0_bit at IPC4.B8;
    const register unsigned short int MI2C1IP_2 = 6;
    sbit  MI2C1IP_2_bit at IPC4.B6;
    const register unsigned short int MI2C1IP_1 = 5;
    sbit  MI2C1IP_1_bit at IPC4.B5;
    const register unsigned short int MI2C1IP_0 = 4;
    sbit  MI2C1IP_0_bit at IPC4.B4;
    const register unsigned short int SI2C1IP_2 = 2;
    sbit  SI2C1IP_2_bit at IPC4.B2;
    const register unsigned short int SI2C1IP_1 = 1;
    sbit  SI2C1IP_1_bit at IPC4.B1;
    const register unsigned short int SI2C1IP_0 = 0;
    sbit  SI2C1IP_0_bit at IPC4.B0;

    // IPC5 bits
    const register unsigned short int INT1IP_2 = 2;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP_2_bit at IPC5.B2;
    const register unsigned short int INT1IP_1 = 1;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP_1_bit at IPC5.B1;
    const register unsigned short int INT1IP_0 = 0;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP_0_bit at IPC5.B0;

    // IPC6 bits
    const register unsigned short int T4IP_2 = 14;
    sbit  T4IP_2_bit at IPC6.B14;
    const register unsigned short int T4IP_1 = 13;
    sbit  T4IP_1_bit at IPC6.B13;
    const register unsigned short int T4IP_0 = 12;
    sbit  T4IP_0_bit at IPC6.B12;
    const register unsigned short int OC4IP_2 = 10;
    sbit  OC4IP_2_bit at IPC6.B10;
    const register unsigned short int OC4IP_1 = 9;
    sbit  OC4IP_1_bit at IPC6.B9;
    const register unsigned short int OC4IP_0 = 8;
    sbit  OC4IP_0_bit at IPC6.B8;
    const register unsigned short int OC3IP_2 = 6;
    sbit  OC3IP_2_bit at IPC6.B6;
    const register unsigned short int OC3IP_1 = 5;
    sbit  OC3IP_1_bit at IPC6.B5;
    const register unsigned short int OC3IP_0 = 4;
    sbit  OC3IP_0_bit at IPC6.B4;
    const register unsigned short int DMA2IP_2 = 2;
    sbit  DMA2IP_2_bit at IPC6.B2;
    const register unsigned short int DMA2IP_1 = 1;
    sbit  DMA2IP_1_bit at IPC6.B1;
    const register unsigned short int DMA2IP_0 = 0;
    sbit  DMA2IP_0_bit at IPC6.B0;

    // IPC7 bits
    const register unsigned short int U2TXIP_2 = 14;
    sbit  U2TXIP_2_bit at IPC7.B14;
    const register unsigned short int U2TXIP_1 = 13;
    sbit  U2TXIP_1_bit at IPC7.B13;
    const register unsigned short int U2TXIP_0 = 12;
    sbit  U2TXIP_0_bit at IPC7.B12;
    const register unsigned short int U2RXIP_2 = 10;
    sbit  U2RXIP_2_bit at IPC7.B10;
    const register unsigned short int U2RXIP_1 = 9;
    sbit  U2RXIP_1_bit at IPC7.B9;
    const register unsigned short int U2RXIP_0 = 8;
    sbit  U2RXIP_0_bit at IPC7.B8;
    const register unsigned short int INT2IP_2 = 6;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP_2_bit at IPC7.B6;
    const register unsigned short int INT2IP_1 = 5;
    const register unsigned short int INT2IP1= 5;
    sbit  INT2IP_1_bit at IPC7.B5;
    const register unsigned short int INT2IP_0 = 4;
    const register unsigned short int INT2IP0= 4;
    sbit  INT2IP_0_bit at IPC7.B4;
    const register unsigned short int T5IP_2 = 2;
    sbit  T5IP_2_bit at IPC7.B2;
    const register unsigned short int T5IP_1 = 1;
    sbit  T5IP_1_bit at IPC7.B1;
    const register unsigned short int T5IP_0 = 0;
    sbit  T5IP_0_bit at IPC7.B0;

    // IPC8 bits
    const register unsigned short int C1IP_2 = 14;
    sbit  C1IP_2_bit at IPC8.B14;
    const register unsigned short int C1IP_1 = 13;
    sbit  C1IP_1_bit at IPC8.B13;
    const register unsigned short int C1IP_0 = 12;
    sbit  C1IP_0_bit at IPC8.B12;
    const register unsigned short int C1RXIP_2 = 10;
    sbit  C1RXIP_2_bit at IPC8.B10;
    const register unsigned short int C1RXIP_1 = 9;
    sbit  C1RXIP_1_bit at IPC8.B9;
    const register unsigned short int C1RXIP_0 = 8;
    sbit  C1RXIP_0_bit at IPC8.B8;
    const register unsigned short int SPI2IP_2 = 6;
    sbit  SPI2IP_2_bit at IPC8.B6;
    const register unsigned short int SPI2IP_1 = 5;
    sbit  SPI2IP_1_bit at IPC8.B5;
    const register unsigned short int SPI2IP_0 = 4;
    sbit  SPI2IP_0_bit at IPC8.B4;
    const register unsigned short int SPI2EIP_2 = 2;
    sbit  SPI2EIP_2_bit at IPC8.B2;
    const register unsigned short int SPI2EIP_1 = 1;
    sbit  SPI2EIP_1_bit at IPC8.B1;
    const register unsigned short int SPI2EIP_0 = 0;
    sbit  SPI2EIP_0_bit at IPC8.B0;

    // IPC9 bits
    const register unsigned short int IC4IP_2 = 10;
    sbit  IC4IP_2_bit at IPC9.B10;
    const register unsigned short int IC4IP_1 = 9;
    sbit  IC4IP_1_bit at IPC9.B9;
    const register unsigned short int IC4IP_0 = 8;
    sbit  IC4IP_0_bit at IPC9.B8;
    const register unsigned short int IC3IP_2 = 6;
    sbit  IC3IP_2_bit at IPC9.B6;
    const register unsigned short int IC3IP_1 = 5;
    sbit  IC3IP_1_bit at IPC9.B5;
    const register unsigned short int IC3IP_0 = 4;
    sbit  IC3IP_0_bit at IPC9.B4;
    const register unsigned short int DMA3IP_2 = 2;
    sbit  DMA3IP_2_bit at IPC9.B2;
    const register unsigned short int DMA3IP_1 = 1;
    sbit  DMA3IP_1_bit at IPC9.B1;
    const register unsigned short int DMA3IP_0 = 0;
    sbit  DMA3IP_0_bit at IPC9.B0;

    // IPC12 bits
    const register unsigned short int MI2C2IP_2 = 10;
    sbit  MI2C2IP_2_bit at IPC12.B10;
    const register unsigned short int MI2C2IP_1 = 9;
    sbit  MI2C2IP_1_bit at IPC12.B9;
    const register unsigned short int MI2C2IP_0 = 8;
    sbit  MI2C2IP_0_bit at IPC12.B8;
    const register unsigned short int SI2C2IP_2 = 6;
    sbit  SI2C2IP_2_bit at IPC12.B6;
    const register unsigned short int SI2C2IP_1 = 5;
    sbit  SI2C2IP_1_bit at IPC12.B5;
    const register unsigned short int SI2C2IP_0 = 4;
    sbit  SI2C2IP_0_bit at IPC12.B4;

    // IPC16 bits
    const register unsigned short int CRCIP_2 = 14;
    sbit  CRCIP_2_bit at IPC16.B14;
    const register unsigned short int CRCIP_1 = 13;
    sbit  CRCIP_1_bit at IPC16.B13;
    const register unsigned short int CRCIP_0 = 12;
    sbit  CRCIP_0_bit at IPC16.B12;
    const register unsigned short int U2EIP_2 = 10;
    sbit  U2EIP_2_bit at IPC16.B10;
    const register unsigned short int U2EIP_1 = 9;
    sbit  U2EIP_1_bit at IPC16.B9;
    const register unsigned short int U2EIP_0 = 8;
    sbit  U2EIP_0_bit at IPC16.B8;
    const register unsigned short int U1EIP_2 = 6;
    sbit  U1EIP_2_bit at IPC16.B6;
    const register unsigned short int U1EIP_1 = 5;
    sbit  U1EIP_1_bit at IPC16.B5;
    const register unsigned short int U1EIP_0 = 4;
    sbit  U1EIP_0_bit at IPC16.B4;

    // IPC17 bits
    const register unsigned short int C1TXIP_2 = 10;
    sbit  C1TXIP_2_bit at IPC17.B10;
    const register unsigned short int C1TXIP_1 = 9;
    sbit  C1TXIP_1_bit at IPC17.B9;
    const register unsigned short int C1TXIP_0 = 8;
    sbit  C1TXIP_0_bit at IPC17.B8;

    // IPC19 bits
    const register unsigned short int CTMUIP_2 = 6;
    sbit  CTMUIP_2_bit at IPC19.B6;
    const register unsigned short int CTMUIP_1 = 5;
    sbit  CTMUIP_1_bit at IPC19.B5;
    const register unsigned short int CTMUIP_0 = 4;
    sbit  CTMUIP_0_bit at IPC19.B4;

    // IPC35 bits
    const register unsigned short int JTAGIP_2 = 14;
    sbit  JTAGIP_2_bit at IPC35.B14;
    const register unsigned short int JTAGIP_1 = 13;
    sbit  JTAGIP_1_bit at IPC35.B13;
    const register unsigned short int JTAGIP_0 = 12;
    sbit  JTAGIP_0_bit at IPC35.B12;
    const register unsigned short int ICDIP_2 = 10;
    sbit  ICDIP_2_bit at IPC35.B10;
    const register unsigned short int ICDIP_1 = 9;
    sbit  ICDIP_1_bit at IPC35.B9;
    const register unsigned short int ICDIP_0 = 8;
    sbit  ICDIP_0_bit at IPC35.B8;

    // IPC36 bits
    const register unsigned short int PTG0IP_2 = 14;
    sbit  PTG0IP_2_bit at IPC36.B14;
    const register unsigned short int PTG0IP_1 = 13;
    sbit  PTG0IP_1_bit at IPC36.B13;
    const register unsigned short int PTG0IP_0 = 12;
    sbit  PTG0IP_0_bit at IPC36.B12;
    const register unsigned short int PTGWDTIP_2 = 10;
    sbit  PTGWDTIP_2_bit at IPC36.B10;
    const register unsigned short int PTGWDTIP_1 = 9;
    sbit  PTGWDTIP_1_bit at IPC36.B9;
    const register unsigned short int PTGWDTIP_0 = 8;
    sbit  PTGWDTIP_0_bit at IPC36.B8;
    const register unsigned short int PTGSTEPIP_2 = 6;
    sbit  PTGSTEPIP_2_bit at IPC36.B6;
    const register unsigned short int PTGSTEPIP_1 = 5;
    sbit  PTGSTEPIP_1_bit at IPC36.B5;
    const register unsigned short int PTGSTEPIP_0 = 4;
    sbit  PTGSTEPIP_0_bit at IPC36.B4;

    // IPC37 bits
    const register unsigned short int PTG3IP_2 = 10;
    sbit  PTG3IP_2_bit at IPC37.B10;
    const register unsigned short int PTG3IP_1 = 9;
    sbit  PTG3IP_1_bit at IPC37.B9;
    const register unsigned short int PTG3IP_0 = 8;
    sbit  PTG3IP_0_bit at IPC37.B8;
    const register unsigned short int PTG2IP_2 = 6;
    sbit  PTG2IP_2_bit at IPC37.B6;
    const register unsigned short int PTG2IP_1 = 5;
    sbit  PTG2IP_1_bit at IPC37.B5;
    const register unsigned short int PTG2IP_0 = 4;
    sbit  PTG2IP_0_bit at IPC37.B4;
    const register unsigned short int PTG1IP_2 = 2;
    sbit  PTG1IP_2_bit at IPC37.B2;
    const register unsigned short int PTG1IP_1 = 1;
    sbit  PTG1IP_1_bit at IPC37.B1;
    const register unsigned short int PTG1IP_0 = 0;
    sbit  PTG1IP_0_bit at IPC37.B0;

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
    const register unsigned short int OVAERR = 14;
    sbit  OVAERR_bit at INTCON1.B14;
    const register unsigned short int OVBERR = 13;
    sbit  OVBERR_bit at INTCON1.B13;
    const register unsigned short int COVAERR = 12;
    sbit  COVAERR_bit at INTCON1.B12;
    const register unsigned short int COVBERR = 11;
    sbit  COVBERR_bit at INTCON1.B11;
    const register unsigned short int OVATE = 10;
    sbit  OVATE_bit at INTCON1.B10;
    const register unsigned short int OVBTE = 9;
    sbit  OVBTE_bit at INTCON1.B9;
    const register unsigned short int COVTE = 8;
    sbit  COVTE_bit at INTCON1.B8;
    const register unsigned short int SFTACERR = 7;
    sbit  SFTACERR_bit at INTCON1.B7;
    const register unsigned short int DIV0ERR = 6;
    sbit  DIV0ERR_bit at INTCON1.B6;
    const register unsigned short int DMACERR = 5;
    sbit  DMACERR_bit at INTCON1.B5;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;

    // INTCON2 bits
    const register unsigned short int GIE = 15;
    sbit  GIE_bit at INTCON2.B15;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int SWTRAP = 13;
    sbit  SWTRAP_bit at INTCON2.B13;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;

    // INTCON3 bits
    const register unsigned short int DAE = 5;
    sbit  DAE_bit at INTCON3.B5;
    const register unsigned short int DOOVR = 4;
    sbit  DOOVR_bit at INTCON3.B4;

    // INTCON4 bits
    const register unsigned short int SGHT = 0;
    sbit  SGHT_bit at INTCON4.B0;

    // INTTREG bits
    const register unsigned short int ILR_3 = 11;
    sbit  ILR_3_bit at INTTREG.B11;
    const register unsigned short int ILR_2 = 10;
    sbit  ILR_2_bit at INTTREG.B10;
    const register unsigned short int ILR_1 = 9;
    sbit  ILR_1_bit at INTTREG.B9;
    const register unsigned short int ILR_0 = 8;
    sbit  ILR_0_bit at INTTREG.B8;
    const register unsigned short int VECNUM_7 = 7;
    sbit  VECNUM_7_bit at INTTREG.B7;
    const register unsigned short int VECNUM_6 = 6;
    sbit  VECNUM_6_bit at INTTREG.B6;
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

    // OC1CON1 bits
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON1.B13;
    sbit  OCSIDL_OC1CON1_bit at OC1CON1.B13;
    const register unsigned short int OCTSEL_2 = 12;
    sbit  OCTSEL_2_bit at OC1CON1.B12;
    sbit  OCTSEL_2_OC1CON1_bit at OC1CON1.B12;
    const register unsigned short int OCTSEL_1 = 11;
    sbit  OCTSEL_1_bit at OC1CON1.B11;
    sbit  OCTSEL_1_OC1CON1_bit at OC1CON1.B11;
    const register unsigned short int OCTSEL_0 = 10;
    sbit  OCTSEL_0_bit at OC1CON1.B10;
    sbit  OCTSEL_0_OC1CON1_bit at OC1CON1.B10;
    const register unsigned short int ENFLTB = 8;
    sbit  ENFLTB_bit at OC1CON1.B8;
    sbit  ENFLTB_OC1CON1_bit at OC1CON1.B8;
    const register unsigned short int ENFLTA = 7;
    sbit  ENFLTA_bit at OC1CON1.B7;
    sbit  ENFLTA_OC1CON1_bit at OC1CON1.B7;
    const register unsigned short int OCFLTB = 5;
    sbit  OCFLTB_bit at OC1CON1.B5;
    sbit  OCFLTB_OC1CON1_bit at OC1CON1.B5;
    const register unsigned short int OCFLTA = 4;
    sbit  OCFLTA_bit at OC1CON1.B4;
    sbit  OCFLTA_OC1CON1_bit at OC1CON1.B4;
    const register unsigned short int TRIGMODE = 3;
    sbit  TRIGMODE_bit at OC1CON1.B3;
    sbit  TRIGMODE_OC1CON1_bit at OC1CON1.B3;
    const register unsigned short int OCM_2 = 2;
    sbit  OCM_2_bit at OC1CON1.B2;
    sbit  OCM_2_OC1CON1_bit at OC1CON1.B2;
    const register unsigned short int OCM_1 = 1;
    sbit  OCM_1_bit at OC1CON1.B1;
    sbit  OCM_1_OC1CON1_bit at OC1CON1.B1;
    const register unsigned short int OCM_0 = 0;
    sbit  OCM_0_bit at OC1CON1.B0;
    sbit  OCM_0_OC1CON1_bit at OC1CON1.B0;

    // OC1CON2 bits
    const register unsigned short int FLTMD = 15;
    sbit  FLTMD_bit at OC1CON2.B15;
    sbit  FLTMD_OC1CON2_bit at OC1CON2.B15;
    const register unsigned short int FLTOUT = 14;
    sbit  FLTOUT_bit at OC1CON2.B14;
    sbit  FLTOUT_OC1CON2_bit at OC1CON2.B14;
    const register unsigned short int FLTTRIEN = 13;
    sbit  FLTTRIEN_bit at OC1CON2.B13;
    sbit  FLTTRIEN_OC1CON2_bit at OC1CON2.B13;
    const register unsigned short int OCINV = 12;
    sbit  OCINV_bit at OC1CON2.B12;
    sbit  OCINV_OC1CON2_bit at OC1CON2.B12;
    const register unsigned short int OC32 = 8;
    sbit  OC32_bit at OC1CON2.B8;
    sbit  OC32_OC1CON2_bit at OC1CON2.B8;
    const register unsigned short int OCTRIG = 7;
    sbit  OCTRIG_bit at OC1CON2.B7;
    sbit  OCTRIG_OC1CON2_bit at OC1CON2.B7;
    sbit  TRIGSTAT_OC1CON2_bit at OC1CON2.B6;
    const register unsigned short int OCTRIS = 5;
    sbit  OCTRIS_bit at OC1CON2.B5;
    sbit  OCTRIS_OC1CON2_bit at OC1CON2.B5;
    sbit  SYNCSEL_4_OC1CON2_bit at OC1CON2.B4;
    sbit  SYNCSEL_3_OC1CON2_bit at OC1CON2.B3;
    sbit  SYNCSEL_2_OC1CON2_bit at OC1CON2.B2;
    sbit  SYNCSEL_1_OC1CON2_bit at OC1CON2.B1;
    sbit  SYNCSEL_0_OC1CON2_bit at OC1CON2.B0;

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

    // OC1TMR bits
    const register unsigned short int OC1TMR_15 = 15;
    sbit  OC1TMR_15_bit at OC1TMR.B15;
    const register unsigned short int OC1TMR_14 = 14;
    sbit  OC1TMR_14_bit at OC1TMR.B14;
    const register unsigned short int OC1TMR_13 = 13;
    sbit  OC1TMR_13_bit at OC1TMR.B13;
    const register unsigned short int OC1TMR_12 = 12;
    sbit  OC1TMR_12_bit at OC1TMR.B12;
    const register unsigned short int OC1TMR_11 = 11;
    sbit  OC1TMR_11_bit at OC1TMR.B11;
    const register unsigned short int OC1TMR_10 = 10;
    sbit  OC1TMR_10_bit at OC1TMR.B10;
    const register unsigned short int OC1TMR_9 = 9;
    sbit  OC1TMR_9_bit at OC1TMR.B9;
    const register unsigned short int OC1TMR_8 = 8;
    sbit  OC1TMR_8_bit at OC1TMR.B8;
    const register unsigned short int OC1TMR_7 = 7;
    sbit  OC1TMR_7_bit at OC1TMR.B7;
    const register unsigned short int OC1TMR_6 = 6;
    sbit  OC1TMR_6_bit at OC1TMR.B6;
    const register unsigned short int OC1TMR_5 = 5;
    sbit  OC1TMR_5_bit at OC1TMR.B5;
    const register unsigned short int OC1TMR_4 = 4;
    sbit  OC1TMR_4_bit at OC1TMR.B4;
    const register unsigned short int OC1TMR_3 = 3;
    sbit  OC1TMR_3_bit at OC1TMR.B3;
    const register unsigned short int OC1TMR_2 = 2;
    sbit  OC1TMR_2_bit at OC1TMR.B2;
    const register unsigned short int OC1TMR_1 = 1;
    sbit  OC1TMR_1_bit at OC1TMR.B1;
    const register unsigned short int OC1TMR_0 = 0;
    sbit  OC1TMR_0_bit at OC1TMR.B0;

    // OC2CON1 bits
    sbit  OCSIDL_OC2CON1_bit at OC2CON1.B13;
    sbit  OCTSEL_2_OC2CON1_bit at OC2CON1.B12;
    sbit  OCTSEL_1_OC2CON1_bit at OC2CON1.B11;
    sbit  OCTSEL_0_OC2CON1_bit at OC2CON1.B10;
    sbit  ENFLTB_OC2CON1_bit at OC2CON1.B8;
    sbit  ENFLTA_OC2CON1_bit at OC2CON1.B7;
    sbit  OCFLTB_OC2CON1_bit at OC2CON1.B5;
    sbit  OCFLTA_OC2CON1_bit at OC2CON1.B4;
    sbit  TRIGMODE_OC2CON1_bit at OC2CON1.B3;
    sbit  OCM_2_OC2CON1_bit at OC2CON1.B2;
    sbit  OCM_1_OC2CON1_bit at OC2CON1.B1;
    sbit  OCM_0_OC2CON1_bit at OC2CON1.B0;

    // OC2CON2 bits
    sbit  FLTMD_OC2CON2_bit at OC2CON2.B15;
    sbit  FLTOUT_OC2CON2_bit at OC2CON2.B14;
    sbit  FLTTRIEN_OC2CON2_bit at OC2CON2.B13;
    sbit  OCINV_OC2CON2_bit at OC2CON2.B12;
    sbit  OC32_OC2CON2_bit at OC2CON2.B8;
    sbit  OCTRIG_OC2CON2_bit at OC2CON2.B7;
    sbit  TRIGSTAT_OC2CON2_bit at OC2CON2.B6;
    sbit  OCTRIS_OC2CON2_bit at OC2CON2.B5;
    sbit  SYNCSEL_4_OC2CON2_bit at OC2CON2.B4;
    sbit  SYNCSEL_3_OC2CON2_bit at OC2CON2.B3;
    sbit  SYNCSEL_2_OC2CON2_bit at OC2CON2.B2;
    sbit  SYNCSEL_1_OC2CON2_bit at OC2CON2.B1;
    sbit  SYNCSEL_0_OC2CON2_bit at OC2CON2.B0;

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

    // OC2TMR bits
    const register unsigned short int OC2TMR_15 = 15;
    sbit  OC2TMR_15_bit at OC2TMR.B15;
    const register unsigned short int OC2TMR_14 = 14;
    sbit  OC2TMR_14_bit at OC2TMR.B14;
    const register unsigned short int OC2TMR_13 = 13;
    sbit  OC2TMR_13_bit at OC2TMR.B13;
    const register unsigned short int OC2TMR_12 = 12;
    sbit  OC2TMR_12_bit at OC2TMR.B12;
    const register unsigned short int OC2TMR_11 = 11;
    sbit  OC2TMR_11_bit at OC2TMR.B11;
    const register unsigned short int OC2TMR_10 = 10;
    sbit  OC2TMR_10_bit at OC2TMR.B10;
    const register unsigned short int OC2TMR_9 = 9;
    sbit  OC2TMR_9_bit at OC2TMR.B9;
    const register unsigned short int OC2TMR_8 = 8;
    sbit  OC2TMR_8_bit at OC2TMR.B8;
    const register unsigned short int OC2TMR_7 = 7;
    sbit  OC2TMR_7_bit at OC2TMR.B7;
    const register unsigned short int OC2TMR_6 = 6;
    sbit  OC2TMR_6_bit at OC2TMR.B6;
    const register unsigned short int OC2TMR_5 = 5;
    sbit  OC2TMR_5_bit at OC2TMR.B5;
    const register unsigned short int OC2TMR_4 = 4;
    sbit  OC2TMR_4_bit at OC2TMR.B4;
    const register unsigned short int OC2TMR_3 = 3;
    sbit  OC2TMR_3_bit at OC2TMR.B3;
    const register unsigned short int OC2TMR_2 = 2;
    sbit  OC2TMR_2_bit at OC2TMR.B2;
    const register unsigned short int OC2TMR_1 = 1;
    sbit  OC2TMR_1_bit at OC2TMR.B1;
    const register unsigned short int OC2TMR_0 = 0;
    sbit  OC2TMR_0_bit at OC2TMR.B0;

    // OC3CON1 bits
    sbit  OCSIDL_OC3CON1_bit at OC3CON1.B13;
    sbit  OCTSEL_2_OC3CON1_bit at OC3CON1.B12;
    sbit  OCTSEL_1_OC3CON1_bit at OC3CON1.B11;
    sbit  OCTSEL_0_OC3CON1_bit at OC3CON1.B10;
    sbit  ENFLTB_OC3CON1_bit at OC3CON1.B8;
    sbit  ENFLTA_OC3CON1_bit at OC3CON1.B7;
    sbit  OCFLTB_OC3CON1_bit at OC3CON1.B5;
    sbit  OCFLTA_OC3CON1_bit at OC3CON1.B4;
    sbit  TRIGMODE_OC3CON1_bit at OC3CON1.B3;
    sbit  OCM_2_OC3CON1_bit at OC3CON1.B2;
    sbit  OCM_1_OC3CON1_bit at OC3CON1.B1;
    sbit  OCM_0_OC3CON1_bit at OC3CON1.B0;

    // OC3CON2 bits
    sbit  FLTMD_OC3CON2_bit at OC3CON2.B15;
    sbit  FLTOUT_OC3CON2_bit at OC3CON2.B14;
    sbit  FLTTRIEN_OC3CON2_bit at OC3CON2.B13;
    sbit  OCINV_OC3CON2_bit at OC3CON2.B12;
    sbit  OC32_OC3CON2_bit at OC3CON2.B8;
    sbit  OCTRIG_OC3CON2_bit at OC3CON2.B7;
    sbit  TRIGSTAT_OC3CON2_bit at OC3CON2.B6;
    sbit  OCTRIS_OC3CON2_bit at OC3CON2.B5;
    sbit  SYNCSEL_4_OC3CON2_bit at OC3CON2.B4;
    sbit  SYNCSEL_3_OC3CON2_bit at OC3CON2.B3;
    sbit  SYNCSEL_2_OC3CON2_bit at OC3CON2.B2;
    sbit  SYNCSEL_1_OC3CON2_bit at OC3CON2.B1;
    sbit  SYNCSEL_0_OC3CON2_bit at OC3CON2.B0;

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

    // OC3TMR bits
    const register unsigned short int OC3TMR_15 = 15;
    sbit  OC3TMR_15_bit at OC3TMR.B15;
    const register unsigned short int OC3TMR_14 = 14;
    sbit  OC3TMR_14_bit at OC3TMR.B14;
    const register unsigned short int OC3TMR_13 = 13;
    sbit  OC3TMR_13_bit at OC3TMR.B13;
    const register unsigned short int OC3TMR_12 = 12;
    sbit  OC3TMR_12_bit at OC3TMR.B12;
    const register unsigned short int OC3TMR_11 = 11;
    sbit  OC3TMR_11_bit at OC3TMR.B11;
    const register unsigned short int OC3TMR_10 = 10;
    sbit  OC3TMR_10_bit at OC3TMR.B10;
    const register unsigned short int OC3TMR_9 = 9;
    sbit  OC3TMR_9_bit at OC3TMR.B9;
    const register unsigned short int OC3TMR_8 = 8;
    sbit  OC3TMR_8_bit at OC3TMR.B8;
    const register unsigned short int OC3TMR_7 = 7;
    sbit  OC3TMR_7_bit at OC3TMR.B7;
    const register unsigned short int OC3TMR_6 = 6;
    sbit  OC3TMR_6_bit at OC3TMR.B6;
    const register unsigned short int OC3TMR_5 = 5;
    sbit  OC3TMR_5_bit at OC3TMR.B5;
    const register unsigned short int OC3TMR_4 = 4;
    sbit  OC3TMR_4_bit at OC3TMR.B4;
    const register unsigned short int OC3TMR_3 = 3;
    sbit  OC3TMR_3_bit at OC3TMR.B3;
    const register unsigned short int OC3TMR_2 = 2;
    sbit  OC3TMR_2_bit at OC3TMR.B2;
    const register unsigned short int OC3TMR_1 = 1;
    sbit  OC3TMR_1_bit at OC3TMR.B1;
    const register unsigned short int OC3TMR_0 = 0;
    sbit  OC3TMR_0_bit at OC3TMR.B0;

    // OC4CON1 bits
    sbit  OCSIDL_OC4CON1_bit at OC4CON1.B13;
    sbit  OCTSEL_2_OC4CON1_bit at OC4CON1.B12;
    sbit  OCTSEL_1_OC4CON1_bit at OC4CON1.B11;
    sbit  OCTSEL_0_OC4CON1_bit at OC4CON1.B10;
    sbit  ENFLTB_OC4CON1_bit at OC4CON1.B8;
    sbit  ENFLTA_OC4CON1_bit at OC4CON1.B7;
    sbit  OCFLTB_OC4CON1_bit at OC4CON1.B5;
    sbit  OCFLTA_OC4CON1_bit at OC4CON1.B4;
    sbit  TRIGMODE_OC4CON1_bit at OC4CON1.B3;
    sbit  OCM_2_OC4CON1_bit at OC4CON1.B2;
    sbit  OCM_1_OC4CON1_bit at OC4CON1.B1;
    sbit  OCM_0_OC4CON1_bit at OC4CON1.B0;

    // OC4CON2 bits
    sbit  FLTMD_OC4CON2_bit at OC4CON2.B15;
    sbit  FLTOUT_OC4CON2_bit at OC4CON2.B14;
    sbit  FLTTRIEN_OC4CON2_bit at OC4CON2.B13;
    sbit  OCINV_OC4CON2_bit at OC4CON2.B12;
    sbit  OC32_OC4CON2_bit at OC4CON2.B8;
    sbit  OCTRIG_OC4CON2_bit at OC4CON2.B7;
    sbit  TRIGSTAT_OC4CON2_bit at OC4CON2.B6;
    sbit  OCTRIS_OC4CON2_bit at OC4CON2.B5;
    sbit  SYNCSEL_4_OC4CON2_bit at OC4CON2.B4;
    sbit  SYNCSEL_3_OC4CON2_bit at OC4CON2.B3;
    sbit  SYNCSEL_2_OC4CON2_bit at OC4CON2.B2;
    sbit  SYNCSEL_1_OC4CON2_bit at OC4CON2.B1;
    sbit  SYNCSEL_0_OC4CON2_bit at OC4CON2.B0;

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

    // OC4TMR bits
    const register unsigned short int OC4TMR_15 = 15;
    sbit  OC4TMR_15_bit at OC4TMR.B15;
    const register unsigned short int OC4TMR_14 = 14;
    sbit  OC4TMR_14_bit at OC4TMR.B14;
    const register unsigned short int OC4TMR_13 = 13;
    sbit  OC4TMR_13_bit at OC4TMR.B13;
    const register unsigned short int OC4TMR_12 = 12;
    sbit  OC4TMR_12_bit at OC4TMR.B12;
    const register unsigned short int OC4TMR_11 = 11;
    sbit  OC4TMR_11_bit at OC4TMR.B11;
    const register unsigned short int OC4TMR_10 = 10;
    sbit  OC4TMR_10_bit at OC4TMR.B10;
    const register unsigned short int OC4TMR_9 = 9;
    sbit  OC4TMR_9_bit at OC4TMR.B9;
    const register unsigned short int OC4TMR_8 = 8;
    sbit  OC4TMR_8_bit at OC4TMR.B8;
    const register unsigned short int OC4TMR_7 = 7;
    sbit  OC4TMR_7_bit at OC4TMR.B7;
    const register unsigned short int OC4TMR_6 = 6;
    sbit  OC4TMR_6_bit at OC4TMR.B6;
    const register unsigned short int OC4TMR_5 = 5;
    sbit  OC4TMR_5_bit at OC4TMR.B5;
    const register unsigned short int OC4TMR_4 = 4;
    sbit  OC4TMR_4_bit at OC4TMR.B4;
    const register unsigned short int OC4TMR_3 = 3;
    sbit  OC4TMR_3_bit at OC4TMR.B3;
    const register unsigned short int OC4TMR_2 = 2;
    sbit  OC4TMR_2_bit at OC4TMR.B2;
    const register unsigned short int OC4TMR_1 = 1;
    sbit  OC4TMR_1_bit at OC4TMR.B1;
    const register unsigned short int OC4TMR_0 = 0;
    sbit  OC4TMR_0_bit at OC4TMR.B0;

    // CMSTAT bits
    const register unsigned short int PSIDL = 15;
    sbit  PSIDL_bit at CMSTAT.B15;
    const register unsigned short int C4EVT = 11;
    sbit  C4EVT_bit at CMSTAT.B11;
    const register unsigned short int C3EVT = 10;
    sbit  C3EVT_bit at CMSTAT.B10;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C4OUT = 3;
    sbit  C4OUT_bit at CMSTAT.B3;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

    // CVRCON bits
    const register unsigned short int CVR2OE = 14;
    sbit  CVR2OE_bit at CVRCON.B14;
    const register unsigned short int VREFSEL = 10;
    sbit  VREFSEL_bit at CVRCON.B10;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVR_3 = 3;
    sbit  CVR_3_bit at CVRCON.B3;
    const register unsigned short int CVR_2 = 2;
    sbit  CVR_2_bit at CVRCON.B2;
    const register unsigned short int CVR_1 = 1;
    sbit  CVR_1_bit at CVRCON.B1;
    const register unsigned short int CVR_0 = 0;
    sbit  CVR_0_bit at CVRCON.B0;

    // CM1CON bits
    const register unsigned short int CON = 15;
    sbit  CON_bit at CM1CON.B15;
    sbit  CON_CM1CON_bit at CM1CON.B15;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    sbit  COE_CM1CON_bit at CM1CON.B14;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    sbit  CPOL_CM1CON_bit at CM1CON.B13;
    const register unsigned short int OPMODE = 10;
    sbit  OPMODE_bit at CM1CON.B10;
    sbit  OPMODE_CM1CON_bit at CM1CON.B10;
    const register unsigned short int CEVT = 9;
    sbit  CEVT_bit at CM1CON.B9;
    sbit  CEVT_CM1CON_bit at CM1CON.B9;
    const register unsigned short int COUT = 8;
    sbit  COUT_bit at CM1CON.B8;
    sbit  COUT_CM1CON_bit at CM1CON.B8;
    const register unsigned short int EVPOL_1 = 7;
    sbit  EVPOL_1_bit at CM1CON.B7;
    sbit  EVPOL_1_CM1CON_bit at CM1CON.B7;
    const register unsigned short int EVPOL_0 = 6;
    sbit  EVPOL_0_bit at CM1CON.B6;
    sbit  EVPOL_0_CM1CON_bit at CM1CON.B6;
    const register unsigned short int CREF = 4;
    sbit  CREF_bit at CM1CON.B4;
    sbit  CREF_CM1CON_bit at CM1CON.B4;
    const register unsigned short int CCH_1 = 1;
    sbit  CCH_1_bit at CM1CON.B1;
    sbit  CCH_1_CM1CON_bit at CM1CON.B1;
    const register unsigned short int CCH_0 = 0;
    sbit  CCH_0_bit at CM1CON.B0;
    sbit  CCH_0_CM1CON_bit at CM1CON.B0;

    // CM1MSKSRC bits
    const register unsigned short int SELSRCC_3 = 11;
    sbit  SELSRCC_3_bit at CM1MSKSRC.B11;
    sbit  SELSRCC_3_CM1MSKSRC_bit at CM1MSKSRC.B11;
    const register unsigned short int SELSRCC_2 = 10;
    sbit  SELSRCC_2_bit at CM1MSKSRC.B10;
    sbit  SELSRCC_2_CM1MSKSRC_bit at CM1MSKSRC.B10;
    const register unsigned short int SELSRCC_1 = 9;
    sbit  SELSRCC_1_bit at CM1MSKSRC.B9;
    sbit  SELSRCC_1_CM1MSKSRC_bit at CM1MSKSRC.B9;
    const register unsigned short int SELSRCC_0 = 8;
    sbit  SELSRCC_0_bit at CM1MSKSRC.B8;
    sbit  SELSRCC_0_CM1MSKSRC_bit at CM1MSKSRC.B8;
    const register unsigned short int SELSRCB_3 = 7;
    sbit  SELSRCB_3_bit at CM1MSKSRC.B7;
    sbit  SELSRCB_3_CM1MSKSRC_bit at CM1MSKSRC.B7;
    const register unsigned short int SELSRCB_2 = 6;
    sbit  SELSRCB_2_bit at CM1MSKSRC.B6;
    sbit  SELSRCB_2_CM1MSKSRC_bit at CM1MSKSRC.B6;
    const register unsigned short int SELSRCB_1 = 5;
    sbit  SELSRCB_1_bit at CM1MSKSRC.B5;
    sbit  SELSRCB_1_CM1MSKSRC_bit at CM1MSKSRC.B5;
    const register unsigned short int SELSRCB_0 = 4;
    sbit  SELSRCB_0_bit at CM1MSKSRC.B4;
    sbit  SELSRCB_0_CM1MSKSRC_bit at CM1MSKSRC.B4;
    const register unsigned short int SELSRCA_3 = 3;
    sbit  SELSRCA_3_bit at CM1MSKSRC.B3;
    sbit  SELSRCA_3_CM1MSKSRC_bit at CM1MSKSRC.B3;
    const register unsigned short int SELSRCA_2 = 2;
    sbit  SELSRCA_2_bit at CM1MSKSRC.B2;
    sbit  SELSRCA_2_CM1MSKSRC_bit at CM1MSKSRC.B2;
    const register unsigned short int SELSRCA_1 = 1;
    sbit  SELSRCA_1_bit at CM1MSKSRC.B1;
    sbit  SELSRCA_1_CM1MSKSRC_bit at CM1MSKSRC.B1;
    const register unsigned short int SELSRCA_0 = 0;
    sbit  SELSRCA_0_bit at CM1MSKSRC.B0;
    sbit  SELSRCA_0_CM1MSKSRC_bit at CM1MSKSRC.B0;

    // CM1MSKCON bits
    const register unsigned short int HLMS = 15;
    sbit  HLMS_bit at CM1MSKCON.B15;
    sbit  HLMS_CM1MSKCON_bit at CM1MSKCON.B15;
    const register unsigned short int OCEN = 13;
    sbit  OCEN_bit at CM1MSKCON.B13;
    sbit  OCEN_CM1MSKCON_bit at CM1MSKCON.B13;
    const register unsigned short int OCNEN = 12;
    sbit  OCNEN_bit at CM1MSKCON.B12;
    sbit  OCNEN_CM1MSKCON_bit at CM1MSKCON.B12;
    const register unsigned short int OBEN = 11;
    sbit  OBEN_bit at CM1MSKCON.B11;
    sbit  OBEN_CM1MSKCON_bit at CM1MSKCON.B11;
    const register unsigned short int OBNEN = 10;
    sbit  OBNEN_bit at CM1MSKCON.B10;
    sbit  OBNEN_CM1MSKCON_bit at CM1MSKCON.B10;
    const register unsigned short int OAEN = 9;
    sbit  OAEN_bit at CM1MSKCON.B9;
    sbit  OAEN_CM1MSKCON_bit at CM1MSKCON.B9;
    const register unsigned short int OANEN = 8;
    sbit  OANEN_bit at CM1MSKCON.B8;
    sbit  OANEN_CM1MSKCON_bit at CM1MSKCON.B8;
    const register unsigned short int NAGS = 7;
    sbit  NAGS_bit at CM1MSKCON.B7;
    sbit  NAGS_CM1MSKCON_bit at CM1MSKCON.B7;
    const register unsigned short int PAGS = 6;
    sbit  PAGS_bit at CM1MSKCON.B6;
    sbit  PAGS_CM1MSKCON_bit at CM1MSKCON.B6;
    const register unsigned short int ACEN = 5;
    sbit  ACEN_bit at CM1MSKCON.B5;
    sbit  ACEN_CM1MSKCON_bit at CM1MSKCON.B5;
    const register unsigned short int ACNEN = 4;
    sbit  ACNEN_bit at CM1MSKCON.B4;
    sbit  ACNEN_CM1MSKCON_bit at CM1MSKCON.B4;
    const register unsigned short int ABEN = 3;
    sbit  ABEN_bit at CM1MSKCON.B3;
    sbit  ABEN_CM1MSKCON_bit at CM1MSKCON.B3;
    const register unsigned short int ABNEN = 2;
    sbit  ABNEN_bit at CM1MSKCON.B2;
    sbit  ABNEN_CM1MSKCON_bit at CM1MSKCON.B2;
    const register unsigned short int AAEN = 1;
    sbit  AAEN_bit at CM1MSKCON.B1;
    sbit  AAEN_CM1MSKCON_bit at CM1MSKCON.B1;
    const register unsigned short int AANEN = 0;
    sbit  AANEN_bit at CM1MSKCON.B0;
    sbit  AANEN_CM1MSKCON_bit at CM1MSKCON.B0;

    // CM1FLTR bits
    const register unsigned short int CFSEL_2 = 6;
    sbit  CFSEL_2_bit at CM1FLTR.B6;
    sbit  CFSEL_2_CM1FLTR_bit at CM1FLTR.B6;
    const register unsigned short int CFSEL_1 = 5;
    sbit  CFSEL_1_bit at CM1FLTR.B5;
    sbit  CFSEL_1_CM1FLTR_bit at CM1FLTR.B5;
    const register unsigned short int CFSEL_0 = 4;
    sbit  CFSEL_0_bit at CM1FLTR.B4;
    sbit  CFSEL_0_CM1FLTR_bit at CM1FLTR.B4;
    const register unsigned short int CFLTREN = 3;
    sbit  CFLTREN_bit at CM1FLTR.B3;
    sbit  CFLTREN_CM1FLTR_bit at CM1FLTR.B3;
    const register unsigned short int CFDIV_2 = 2;
    sbit  CFDIV_2_bit at CM1FLTR.B2;
    sbit  CFDIV_2_CM1FLTR_bit at CM1FLTR.B2;
    const register unsigned short int CFDIV_1 = 1;
    sbit  CFDIV_1_bit at CM1FLTR.B1;
    sbit  CFDIV_1_CM1FLTR_bit at CM1FLTR.B1;
    const register unsigned short int CFDIV_0 = 0;
    sbit  CFDIV_0_bit at CM1FLTR.B0;
    sbit  CFDIV_0_CM1FLTR_bit at CM1FLTR.B0;

    // CM2CON bits
    sbit  CON_CM2CON_bit at CM2CON.B15;
    sbit  COE_CM2CON_bit at CM2CON.B14;
    sbit  CPOL_CM2CON_bit at CM2CON.B13;
    sbit  OPMODE_CM2CON_bit at CM2CON.B10;
    sbit  CEVT_CM2CON_bit at CM2CON.B9;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  EVPOL_1_CM2CON_bit at CM2CON.B7;
    sbit  EVPOL_0_CM2CON_bit at CM2CON.B6;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  CCH_1_CM2CON_bit at CM2CON.B1;
    sbit  CCH_0_CM2CON_bit at CM2CON.B0;

    // CM2MSKSRC bits
    sbit  SELSRCC_3_CM2MSKSRC_bit at CM2MSKSRC.B11;
    sbit  SELSRCC_2_CM2MSKSRC_bit at CM2MSKSRC.B10;
    sbit  SELSRCC_1_CM2MSKSRC_bit at CM2MSKSRC.B9;
    sbit  SELSRCC_0_CM2MSKSRC_bit at CM2MSKSRC.B8;
    sbit  SELSRCB_3_CM2MSKSRC_bit at CM2MSKSRC.B7;
    sbit  SELSRCB_2_CM2MSKSRC_bit at CM2MSKSRC.B6;
    sbit  SELSRCB_1_CM2MSKSRC_bit at CM2MSKSRC.B5;
    sbit  SELSRCB_0_CM2MSKSRC_bit at CM2MSKSRC.B4;
    sbit  SELSRCA_3_CM2MSKSRC_bit at CM2MSKSRC.B3;
    sbit  SELSRCA_2_CM2MSKSRC_bit at CM2MSKSRC.B2;
    sbit  SELSRCA_1_CM2MSKSRC_bit at CM2MSKSRC.B1;
    sbit  SELSRCA_0_CM2MSKSRC_bit at CM2MSKSRC.B0;

    // CM2MSKCON bits
    sbit  HLMS_CM2MSKCON_bit at CM2MSKCON.B15;
    sbit  OCEN_CM2MSKCON_bit at CM2MSKCON.B13;
    sbit  OCNEN_CM2MSKCON_bit at CM2MSKCON.B12;
    sbit  OBEN_CM2MSKCON_bit at CM2MSKCON.B11;
    sbit  OBNEN_CM2MSKCON_bit at CM2MSKCON.B10;
    sbit  OAEN_CM2MSKCON_bit at CM2MSKCON.B9;
    sbit  OANEN_CM2MSKCON_bit at CM2MSKCON.B8;
    sbit  NAGS_CM2MSKCON_bit at CM2MSKCON.B7;
    sbit  PAGS_CM2MSKCON_bit at CM2MSKCON.B6;
    sbit  ACEN_CM2MSKCON_bit at CM2MSKCON.B5;
    sbit  ACNEN_CM2MSKCON_bit at CM2MSKCON.B4;
    sbit  ABEN_CM2MSKCON_bit at CM2MSKCON.B3;
    sbit  ABNEN_CM2MSKCON_bit at CM2MSKCON.B2;
    sbit  AAEN_CM2MSKCON_bit at CM2MSKCON.B1;
    sbit  AANEN_CM2MSKCON_bit at CM2MSKCON.B0;

    // CM2FLTR bits
    sbit  CFSEL_2_CM2FLTR_bit at CM2FLTR.B6;
    sbit  CFSEL_1_CM2FLTR_bit at CM2FLTR.B5;
    sbit  CFSEL_0_CM2FLTR_bit at CM2FLTR.B4;
    sbit  CFLTREN_CM2FLTR_bit at CM2FLTR.B3;
    sbit  CFDIV_2_CM2FLTR_bit at CM2FLTR.B2;
    sbit  CFDIV_1_CM2FLTR_bit at CM2FLTR.B1;
    sbit  CFDIV_0_CM2FLTR_bit at CM2FLTR.B0;

    // CM3CON bits
    sbit  CON_CM3CON_bit at CM3CON.B15;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  OPMODE_CM3CON_bit at CM3CON.B10;
    sbit  CEVT_CM3CON_bit at CM3CON.B9;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    sbit  EVPOL_1_CM3CON_bit at CM3CON.B7;
    sbit  EVPOL_0_CM3CON_bit at CM3CON.B6;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    sbit  CCH_1_CM3CON_bit at CM3CON.B1;
    sbit  CCH_0_CM3CON_bit at CM3CON.B0;

    // CM3MSKSRC bits
    sbit  SELSRCC_3_CM3MSKSRC_bit at CM3MSKSRC.B11;
    sbit  SELSRCC_2_CM3MSKSRC_bit at CM3MSKSRC.B10;
    sbit  SELSRCC_1_CM3MSKSRC_bit at CM3MSKSRC.B9;
    sbit  SELSRCC_0_CM3MSKSRC_bit at CM3MSKSRC.B8;
    sbit  SELSRCB_3_CM3MSKSRC_bit at CM3MSKSRC.B7;
    sbit  SELSRCB_2_CM3MSKSRC_bit at CM3MSKSRC.B6;
    sbit  SELSRCB_1_CM3MSKSRC_bit at CM3MSKSRC.B5;
    sbit  SELSRCB_0_CM3MSKSRC_bit at CM3MSKSRC.B4;
    sbit  SELSRCA_3_CM3MSKSRC_bit at CM3MSKSRC.B3;
    sbit  SELSRCA_2_CM3MSKSRC_bit at CM3MSKSRC.B2;
    sbit  SELSRCA_1_CM3MSKSRC_bit at CM3MSKSRC.B1;
    sbit  SELSRCA_0_CM3MSKSRC_bit at CM3MSKSRC.B0;

    // CM3MSKCON bits
    sbit  HLMS_CM3MSKCON_bit at CM3MSKCON.B15;
    sbit  OCEN_CM3MSKCON_bit at CM3MSKCON.B13;
    sbit  OCNEN_CM3MSKCON_bit at CM3MSKCON.B12;
    sbit  OBEN_CM3MSKCON_bit at CM3MSKCON.B11;
    sbit  OBNEN_CM3MSKCON_bit at CM3MSKCON.B10;
    sbit  OAEN_CM3MSKCON_bit at CM3MSKCON.B9;
    sbit  OANEN_CM3MSKCON_bit at CM3MSKCON.B8;
    sbit  NAGS_CM3MSKCON_bit at CM3MSKCON.B7;
    sbit  PAGS_CM3MSKCON_bit at CM3MSKCON.B6;
    sbit  ACEN_CM3MSKCON_bit at CM3MSKCON.B5;
    sbit  ACNEN_CM3MSKCON_bit at CM3MSKCON.B4;
    sbit  ABEN_CM3MSKCON_bit at CM3MSKCON.B3;
    sbit  ABNEN_CM3MSKCON_bit at CM3MSKCON.B2;
    sbit  AAEN_CM3MSKCON_bit at CM3MSKCON.B1;
    sbit  AANEN_CM3MSKCON_bit at CM3MSKCON.B0;

    // CM3FLTR bits
    sbit  CFSEL_2_CM3FLTR_bit at CM3FLTR.B6;
    sbit  CFSEL_1_CM3FLTR_bit at CM3FLTR.B5;
    sbit  CFSEL_0_CM3FLTR_bit at CM3FLTR.B4;
    sbit  CFLTREN_CM3FLTR_bit at CM3FLTR.B3;
    sbit  CFDIV_2_CM3FLTR_bit at CM3FLTR.B2;
    sbit  CFDIV_1_CM3FLTR_bit at CM3FLTR.B1;
    sbit  CFDIV_0_CM3FLTR_bit at CM3FLTR.B0;

    // CM4CON bits
    sbit  CON_CM4CON_bit at CM4CON.B15;
    sbit  COE_CM4CON_bit at CM4CON.B14;
    sbit  CPOL_CM4CON_bit at CM4CON.B13;
    sbit  CEVT_CM4CON_bit at CM4CON.B9;
    sbit  COUT_CM4CON_bit at CM4CON.B8;
    sbit  EVPOL_1_CM4CON_bit at CM4CON.B7;
    sbit  EVPOL_0_CM4CON_bit at CM4CON.B6;
    sbit  CREF_CM4CON_bit at CM4CON.B4;
    sbit  CCH_1_CM4CON_bit at CM4CON.B1;
    sbit  CCH_0_CM4CON_bit at CM4CON.B0;

    // CM4MSKSRC bits
    sbit  SELSRCC_3_CM4MSKSRC_bit at CM4MSKSRC.B11;
    sbit  SELSRCC_2_CM4MSKSRC_bit at CM4MSKSRC.B10;
    sbit  SELSRCC_1_CM4MSKSRC_bit at CM4MSKSRC.B9;
    sbit  SELSRCC_0_CM4MSKSRC_bit at CM4MSKSRC.B8;
    sbit  SELSRCB_3_CM4MSKSRC_bit at CM4MSKSRC.B7;
    sbit  SELSRCB_2_CM4MSKSRC_bit at CM4MSKSRC.B6;
    sbit  SELSRCB_1_CM4MSKSRC_bit at CM4MSKSRC.B5;
    sbit  SELSRCB_0_CM4MSKSRC_bit at CM4MSKSRC.B4;
    sbit  SELSRCA_3_CM4MSKSRC_bit at CM4MSKSRC.B3;
    sbit  SELSRCA_2_CM4MSKSRC_bit at CM4MSKSRC.B2;
    sbit  SELSRCA_1_CM4MSKSRC_bit at CM4MSKSRC.B1;
    sbit  SELSRCA_0_CM4MSKSRC_bit at CM4MSKSRC.B0;

    // CM4MSKCON bits
    sbit  HLMS_CM4MSKCON_bit at CM4MSKCON.B15;
    sbit  OCEN_CM4MSKCON_bit at CM4MSKCON.B13;
    sbit  OCNEN_CM4MSKCON_bit at CM4MSKCON.B12;
    sbit  OBEN_CM4MSKCON_bit at CM4MSKCON.B11;
    sbit  OBNEN_CM4MSKCON_bit at CM4MSKCON.B10;
    sbit  OAEN_CM4MSKCON_bit at CM4MSKCON.B9;
    sbit  OANEN_CM4MSKCON_bit at CM4MSKCON.B8;
    sbit  NAGS_CM4MSKCON_bit at CM4MSKCON.B7;
    sbit  PAGS_CM4MSKCON_bit at CM4MSKCON.B6;
    sbit  ACEN_CM4MSKCON_bit at CM4MSKCON.B5;
    sbit  ACNEN_CM4MSKCON_bit at CM4MSKCON.B4;
    sbit  ABEN_CM4MSKCON_bit at CM4MSKCON.B3;
    sbit  ABNEN_CM4MSKCON_bit at CM4MSKCON.B2;
    sbit  AAEN_CM4MSKCON_bit at CM4MSKCON.B1;
    sbit  AANEN_CM4MSKCON_bit at CM4MSKCON.B0;

    // CM4FLTR bits
    sbit  CFSEL_2_CM4FLTR_bit at CM4FLTR.B6;
    sbit  CFSEL_1_CM4FLTR_bit at CM4FLTR.B5;
    sbit  CFSEL_0_CM4FLTR_bit at CM4FLTR.B4;
    sbit  CFLTREN_CM4FLTR_bit at CM4FLTR.B3;
    sbit  CFDIV_2_CM4FLTR_bit at CM4FLTR.B2;
    sbit  CFDIV_1_CM4FLTR_bit at CM4FLTR.B1;
    sbit  CFDIV_0_CM4FLTR_bit at CM4FLTR.B0;

    // PTGCST bits
    const register unsigned short int PTGEN = 15;
    sbit  PTGEN_bit at PTGCST.B15;
    const register unsigned short int PTGSIDL = 13;
    sbit  PTGSIDL_bit at PTGCST.B13;
    const register unsigned short int PTGTOGL = 12;
    sbit  PTGTOGL_bit at PTGCST.B12;
    const register unsigned short int PTGSWT = 10;
    sbit  PTGSWT_bit at PTGCST.B10;
    const register unsigned short int PTGSSEN = 9;
    sbit  PTGSSEN_bit at PTGCST.B9;
    const register unsigned short int PTGIVIS = 8;
    sbit  PTGIVIS_bit at PTGCST.B8;
    const register unsigned short int PTGSTRT = 7;
    sbit  PTGSTRT_bit at PTGCST.B7;
    const register unsigned short int PTGWTO = 6;
    sbit  PTGWTO_bit at PTGCST.B6;
    const register unsigned short int PTGITM_1 = 1;
    sbit  PTGITM_1_bit at PTGCST.B1;
    const register unsigned short int PTGITM_0 = 0;
    sbit  PTGITM_0_bit at PTGCST.B0;

    // PTGCON bits
    const register unsigned short int PTGCLK_2 = 15;
    sbit  PTGCLK_2_bit at PTGCON.B15;
    const register unsigned short int PTGCLK_1 = 14;
    sbit  PTGCLK_1_bit at PTGCON.B14;
    const register unsigned short int PTGCLK_0 = 13;
    sbit  PTGCLK_0_bit at PTGCON.B13;
    const register unsigned short int PTGDIV_4 = 12;
    sbit  PTGDIV_4_bit at PTGCON.B12;
    const register unsigned short int PTGDIV_3 = 11;
    sbit  PTGDIV_3_bit at PTGCON.B11;
    const register unsigned short int PTGDIV_2 = 10;
    sbit  PTGDIV_2_bit at PTGCON.B10;
    const register unsigned short int PTGDIV_1 = 9;
    sbit  PTGDIV_1_bit at PTGCON.B9;
    const register unsigned short int PTGDIV_0 = 8;
    sbit  PTGDIV_0_bit at PTGCON.B8;
    const register unsigned short int PTGPWD_3 = 7;
    sbit  PTGPWD_3_bit at PTGCON.B7;
    const register unsigned short int PTGPWD_2 = 6;
    sbit  PTGPWD_2_bit at PTGCON.B6;
    const register unsigned short int PTGPWD_1 = 5;
    sbit  PTGPWD_1_bit at PTGCON.B5;
    const register unsigned short int PTGPWD_0 = 4;
    sbit  PTGPWD_0_bit at PTGCON.B4;
    const register unsigned short int PTGWDT_2 = 2;
    sbit  PTGWDT_2_bit at PTGCON.B2;
    const register unsigned short int PTGWDT_1 = 1;
    sbit  PTGWDT_1_bit at PTGCON.B1;
    const register unsigned short int PTGWDT_0 = 0;
    sbit  PTGWDT_0_bit at PTGCON.B0;

    // PTGBTE bits
    const register unsigned short int PTGBTE_15 = 15;
    sbit  PTGBTE_15_bit at PTGBTE.B15;
    const register unsigned short int PTGBTE_14 = 14;
    sbit  PTGBTE_14_bit at PTGBTE.B14;
    const register unsigned short int PTGBTE_13 = 13;
    sbit  PTGBTE_13_bit at PTGBTE.B13;
    const register unsigned short int PTGBTE_12 = 12;
    sbit  PTGBTE_12_bit at PTGBTE.B12;
    const register unsigned short int PTGBTE_11 = 11;
    sbit  PTGBTE_11_bit at PTGBTE.B11;
    const register unsigned short int PTGBTE_10 = 10;
    sbit  PTGBTE_10_bit at PTGBTE.B10;
    const register unsigned short int PTGBTE_9 = 9;
    sbit  PTGBTE_9_bit at PTGBTE.B9;
    const register unsigned short int PTGBTE_8 = 8;
    sbit  PTGBTE_8_bit at PTGBTE.B8;
    const register unsigned short int PTGBTE_7 = 7;
    sbit  PTGBTE_7_bit at PTGBTE.B7;
    const register unsigned short int PTGBTE_6 = 6;
    sbit  PTGBTE_6_bit at PTGBTE.B6;
    const register unsigned short int PTGBTE_5 = 5;
    sbit  PTGBTE_5_bit at PTGBTE.B5;
    const register unsigned short int PTGBTE_4 = 4;
    sbit  PTGBTE_4_bit at PTGBTE.B4;
    const register unsigned short int PTGBTE_3 = 3;
    sbit  PTGBTE_3_bit at PTGBTE.B3;
    const register unsigned short int PTGBTE_2 = 2;
    sbit  PTGBTE_2_bit at PTGBTE.B2;
    const register unsigned short int PTGBTE_1 = 1;
    sbit  PTGBTE_1_bit at PTGBTE.B1;
    const register unsigned short int PTGBTE_0 = 0;
    sbit  PTGBTE_0_bit at PTGBTE.B0;

    // PTGHOLD bits
    const register unsigned short int PTGHOLD_15 = 15;
    sbit  PTGHOLD_15_bit at PTGHOLD.B15;
    const register unsigned short int PTGHOLD_14 = 14;
    sbit  PTGHOLD_14_bit at PTGHOLD.B14;
    const register unsigned short int PTGHOLD_13 = 13;
    sbit  PTGHOLD_13_bit at PTGHOLD.B13;
    const register unsigned short int PTGHOLD_12 = 12;
    sbit  PTGHOLD_12_bit at PTGHOLD.B12;
    const register unsigned short int PTGHOLD_11 = 11;
    sbit  PTGHOLD_11_bit at PTGHOLD.B11;
    const register unsigned short int PTGHOLD_10 = 10;
    sbit  PTGHOLD_10_bit at PTGHOLD.B10;
    const register unsigned short int PTGHOLD_9 = 9;
    sbit  PTGHOLD_9_bit at PTGHOLD.B9;
    const register unsigned short int PTGHOLD_8 = 8;
    sbit  PTGHOLD_8_bit at PTGHOLD.B8;
    const register unsigned short int PTGHOLD_7 = 7;
    sbit  PTGHOLD_7_bit at PTGHOLD.B7;
    const register unsigned short int PTGHOLD_6 = 6;
    sbit  PTGHOLD_6_bit at PTGHOLD.B6;
    const register unsigned short int PTGHOLD_5 = 5;
    sbit  PTGHOLD_5_bit at PTGHOLD.B5;
    const register unsigned short int PTGHOLD_4 = 4;
    sbit  PTGHOLD_4_bit at PTGHOLD.B4;
    const register unsigned short int PTGHOLD_3 = 3;
    sbit  PTGHOLD_3_bit at PTGHOLD.B3;
    const register unsigned short int PTGHOLD_2 = 2;
    sbit  PTGHOLD_2_bit at PTGHOLD.B2;
    const register unsigned short int PTGHOLD_1 = 1;
    sbit  PTGHOLD_1_bit at PTGHOLD.B1;
    const register unsigned short int PTGHOLD_0 = 0;
    sbit  PTGHOLD_0_bit at PTGHOLD.B0;

    // PTGT0LIM bits
    const register unsigned short int PTGT0LIM_15 = 15;
    sbit  PTGT0LIM_15_bit at PTGT0LIM.B15;
    const register unsigned short int PTGT0LIM_14 = 14;
    sbit  PTGT0LIM_14_bit at PTGT0LIM.B14;
    const register unsigned short int PTGT0LIM_13 = 13;
    sbit  PTGT0LIM_13_bit at PTGT0LIM.B13;
    const register unsigned short int PTGT0LIM_12 = 12;
    sbit  PTGT0LIM_12_bit at PTGT0LIM.B12;
    const register unsigned short int PTGT0LIM_11 = 11;
    sbit  PTGT0LIM_11_bit at PTGT0LIM.B11;
    const register unsigned short int PTGT0LIM_10 = 10;
    sbit  PTGT0LIM_10_bit at PTGT0LIM.B10;
    const register unsigned short int PTGT0LIM_9 = 9;
    sbit  PTGT0LIM_9_bit at PTGT0LIM.B9;
    const register unsigned short int PTGT0LIM_8 = 8;
    sbit  PTGT0LIM_8_bit at PTGT0LIM.B8;
    const register unsigned short int PTGT0LIM_7 = 7;
    sbit  PTGT0LIM_7_bit at PTGT0LIM.B7;
    const register unsigned short int PTGT0LIM_6 = 6;
    sbit  PTGT0LIM_6_bit at PTGT0LIM.B6;
    const register unsigned short int PTGT0LIM_5 = 5;
    sbit  PTGT0LIM_5_bit at PTGT0LIM.B5;
    const register unsigned short int PTGT0LIM_4 = 4;
    sbit  PTGT0LIM_4_bit at PTGT0LIM.B4;
    const register unsigned short int PTGT0LIM_3 = 3;
    sbit  PTGT0LIM_3_bit at PTGT0LIM.B3;
    const register unsigned short int PTGT0LIM_2 = 2;
    sbit  PTGT0LIM_2_bit at PTGT0LIM.B2;
    const register unsigned short int PTGT0LIM_1 = 1;
    sbit  PTGT0LIM_1_bit at PTGT0LIM.B1;
    const register unsigned short int PTGT0LIM_0 = 0;
    sbit  PTGT0LIM_0_bit at PTGT0LIM.B0;

    // PTGT1LIM bits
    const register unsigned short int PTGT1LIM_15 = 15;
    sbit  PTGT1LIM_15_bit at PTGT1LIM.B15;
    const register unsigned short int PTGT1LIM_14 = 14;
    sbit  PTGT1LIM_14_bit at PTGT1LIM.B14;
    const register unsigned short int PTGT1LIM_13 = 13;
    sbit  PTGT1LIM_13_bit at PTGT1LIM.B13;
    const register unsigned short int PTGT1LIM_12 = 12;
    sbit  PTGT1LIM_12_bit at PTGT1LIM.B12;
    const register unsigned short int PTGT1LIM_11 = 11;
    sbit  PTGT1LIM_11_bit at PTGT1LIM.B11;
    const register unsigned short int PTGT1LIM_10 = 10;
    sbit  PTGT1LIM_10_bit at PTGT1LIM.B10;
    const register unsigned short int PTGT1LIM_9 = 9;
    sbit  PTGT1LIM_9_bit at PTGT1LIM.B9;
    const register unsigned short int PTGT1LIM_8 = 8;
    sbit  PTGT1LIM_8_bit at PTGT1LIM.B8;
    const register unsigned short int PTGT1LIM_7 = 7;
    sbit  PTGT1LIM_7_bit at PTGT1LIM.B7;
    const register unsigned short int PTGT1LIM_6 = 6;
    sbit  PTGT1LIM_6_bit at PTGT1LIM.B6;
    const register unsigned short int PTGT1LIM_5 = 5;
    sbit  PTGT1LIM_5_bit at PTGT1LIM.B5;
    const register unsigned short int PTGT1LIM_4 = 4;
    sbit  PTGT1LIM_4_bit at PTGT1LIM.B4;
    const register unsigned short int PTGT1LIM_3 = 3;
    sbit  PTGT1LIM_3_bit at PTGT1LIM.B3;
    const register unsigned short int PTGT1LIM_2 = 2;
    sbit  PTGT1LIM_2_bit at PTGT1LIM.B2;
    const register unsigned short int PTGT1LIM_1 = 1;
    sbit  PTGT1LIM_1_bit at PTGT1LIM.B1;
    const register unsigned short int PTGT1LIM_0 = 0;
    sbit  PTGT1LIM_0_bit at PTGT1LIM.B0;

    // PTGSDLIM bits
    const register unsigned short int PTGSDLIM_15 = 15;
    sbit  PTGSDLIM_15_bit at PTGSDLIM.B15;
    const register unsigned short int PTGSDLIM_14 = 14;
    sbit  PTGSDLIM_14_bit at PTGSDLIM.B14;
    const register unsigned short int PTGSDLIM_13 = 13;
    sbit  PTGSDLIM_13_bit at PTGSDLIM.B13;
    const register unsigned short int PTGSDLIM_12 = 12;
    sbit  PTGSDLIM_12_bit at PTGSDLIM.B12;
    const register unsigned short int PTGSDLIM_11 = 11;
    sbit  PTGSDLIM_11_bit at PTGSDLIM.B11;
    const register unsigned short int PTGSDLIM_10 = 10;
    sbit  PTGSDLIM_10_bit at PTGSDLIM.B10;
    const register unsigned short int PTGSDLIM_9 = 9;
    sbit  PTGSDLIM_9_bit at PTGSDLIM.B9;
    const register unsigned short int PTGSDLIM_8 = 8;
    sbit  PTGSDLIM_8_bit at PTGSDLIM.B8;
    const register unsigned short int PTGSDLIM_7 = 7;
    sbit  PTGSDLIM_7_bit at PTGSDLIM.B7;
    const register unsigned short int PTGSDLIM_6 = 6;
    sbit  PTGSDLIM_6_bit at PTGSDLIM.B6;
    const register unsigned short int PTGSDLIM_5 = 5;
    sbit  PTGSDLIM_5_bit at PTGSDLIM.B5;
    const register unsigned short int PTGSDLIM_4 = 4;
    sbit  PTGSDLIM_4_bit at PTGSDLIM.B4;
    const register unsigned short int PTGSDLIM_3 = 3;
    sbit  PTGSDLIM_3_bit at PTGSDLIM.B3;
    const register unsigned short int PTGSDLIM_2 = 2;
    sbit  PTGSDLIM_2_bit at PTGSDLIM.B2;
    const register unsigned short int PTGSDLIM_1 = 1;
    sbit  PTGSDLIM_1_bit at PTGSDLIM.B1;
    const register unsigned short int PTGSDLIM_0 = 0;
    sbit  PTGSDLIM_0_bit at PTGSDLIM.B0;

    // PTGC0LIM bits
    const register unsigned short int PTGC0LIM_15 = 15;
    sbit  PTGC0LIM_15_bit at PTGC0LIM.B15;
    const register unsigned short int PTGC0LIM_14 = 14;
    sbit  PTGC0LIM_14_bit at PTGC0LIM.B14;
    const register unsigned short int PTGC0LIM_13 = 13;
    sbit  PTGC0LIM_13_bit at PTGC0LIM.B13;
    const register unsigned short int PTGC0LIM_12 = 12;
    sbit  PTGC0LIM_12_bit at PTGC0LIM.B12;
    const register unsigned short int PTGC0LIM_11 = 11;
    sbit  PTGC0LIM_11_bit at PTGC0LIM.B11;
    const register unsigned short int PTGC0LIM_10 = 10;
    sbit  PTGC0LIM_10_bit at PTGC0LIM.B10;
    const register unsigned short int PTGC0LIM_9 = 9;
    sbit  PTGC0LIM_9_bit at PTGC0LIM.B9;
    const register unsigned short int PTGC0LIM_8 = 8;
    sbit  PTGC0LIM_8_bit at PTGC0LIM.B8;
    const register unsigned short int PTGC0LIM_7 = 7;
    sbit  PTGC0LIM_7_bit at PTGC0LIM.B7;
    const register unsigned short int PTGC0LIM_6 = 6;
    sbit  PTGC0LIM_6_bit at PTGC0LIM.B6;
    const register unsigned short int PTGC0LIM_5 = 5;
    sbit  PTGC0LIM_5_bit at PTGC0LIM.B5;
    const register unsigned short int PTGC0LIM_4 = 4;
    sbit  PTGC0LIM_4_bit at PTGC0LIM.B4;
    const register unsigned short int PTGC0LIM_3 = 3;
    sbit  PTGC0LIM_3_bit at PTGC0LIM.B3;
    const register unsigned short int PTGC0LIM_2 = 2;
    sbit  PTGC0LIM_2_bit at PTGC0LIM.B2;
    const register unsigned short int PTGC0LIM_1 = 1;
    sbit  PTGC0LIM_1_bit at PTGC0LIM.B1;
    const register unsigned short int PTGC0LIM_0 = 0;
    sbit  PTGC0LIM_0_bit at PTGC0LIM.B0;

    // PTGC1LIM bits
    const register unsigned short int PTGC1LIM_15 = 15;
    sbit  PTGC1LIM_15_bit at PTGC1LIM.B15;
    const register unsigned short int PTGC1LIM_14 = 14;
    sbit  PTGC1LIM_14_bit at PTGC1LIM.B14;
    const register unsigned short int PTGC1LIM_13 = 13;
    sbit  PTGC1LIM_13_bit at PTGC1LIM.B13;
    const register unsigned short int PTGC1LIM_12 = 12;
    sbit  PTGC1LIM_12_bit at PTGC1LIM.B12;
    const register unsigned short int PTGC1LIM_11 = 11;
    sbit  PTGC1LIM_11_bit at PTGC1LIM.B11;
    const register unsigned short int PTGC1LIM_10 = 10;
    sbit  PTGC1LIM_10_bit at PTGC1LIM.B10;
    const register unsigned short int PTGC1LIM_9 = 9;
    sbit  PTGC1LIM_9_bit at PTGC1LIM.B9;
    const register unsigned short int PTGC1LIM_8 = 8;
    sbit  PTGC1LIM_8_bit at PTGC1LIM.B8;
    const register unsigned short int PTGC1LIM_7 = 7;
    sbit  PTGC1LIM_7_bit at PTGC1LIM.B7;
    const register unsigned short int PTGC1LIM_6 = 6;
    sbit  PTGC1LIM_6_bit at PTGC1LIM.B6;
    const register unsigned short int PTGC1LIM_5 = 5;
    sbit  PTGC1LIM_5_bit at PTGC1LIM.B5;
    const register unsigned short int PTGC1LIM_4 = 4;
    sbit  PTGC1LIM_4_bit at PTGC1LIM.B4;
    const register unsigned short int PTGC1LIM_3 = 3;
    sbit  PTGC1LIM_3_bit at PTGC1LIM.B3;
    const register unsigned short int PTGC1LIM_2 = 2;
    sbit  PTGC1LIM_2_bit at PTGC1LIM.B2;
    const register unsigned short int PTGC1LIM_1 = 1;
    sbit  PTGC1LIM_1_bit at PTGC1LIM.B1;
    const register unsigned short int PTGC1LIM_0 = 0;
    sbit  PTGC1LIM_0_bit at PTGC1LIM.B0;

    // PTGADJ bits
    const register unsigned short int PTGADJ_15 = 15;
    sbit  PTGADJ_15_bit at PTGADJ.B15;
    const register unsigned short int PTGADJ_14 = 14;
    sbit  PTGADJ_14_bit at PTGADJ.B14;
    const register unsigned short int PTGADJ_13 = 13;
    sbit  PTGADJ_13_bit at PTGADJ.B13;
    const register unsigned short int PTGADJ_12 = 12;
    sbit  PTGADJ_12_bit at PTGADJ.B12;
    const register unsigned short int PTGADJ_11 = 11;
    sbit  PTGADJ_11_bit at PTGADJ.B11;
    const register unsigned short int PTGADJ_10 = 10;
    sbit  PTGADJ_10_bit at PTGADJ.B10;
    const register unsigned short int PTGADJ_9 = 9;
    sbit  PTGADJ_9_bit at PTGADJ.B9;
    const register unsigned short int PTGADJ_8 = 8;
    sbit  PTGADJ_8_bit at PTGADJ.B8;
    const register unsigned short int PTGADJ_7 = 7;
    sbit  PTGADJ_7_bit at PTGADJ.B7;
    const register unsigned short int PTGADJ_6 = 6;
    sbit  PTGADJ_6_bit at PTGADJ.B6;
    const register unsigned short int PTGADJ_5 = 5;
    sbit  PTGADJ_5_bit at PTGADJ.B5;
    const register unsigned short int PTGADJ_4 = 4;
    sbit  PTGADJ_4_bit at PTGADJ.B4;
    const register unsigned short int PTGADJ_3 = 3;
    sbit  PTGADJ_3_bit at PTGADJ.B3;
    const register unsigned short int PTGADJ_2 = 2;
    sbit  PTGADJ_2_bit at PTGADJ.B2;
    const register unsigned short int PTGADJ_1 = 1;
    sbit  PTGADJ_1_bit at PTGADJ.B1;
    const register unsigned short int PTGADJ_0 = 0;
    sbit  PTGADJ_0_bit at PTGADJ.B0;

    // PTGL0 bits
    const register unsigned short int PTGL0_15 = 15;
    sbit  PTGL0_15_bit at PTGL0.B15;
    const register unsigned short int PTGL0_14 = 14;
    sbit  PTGL0_14_bit at PTGL0.B14;
    const register unsigned short int PTGL0_13 = 13;
    sbit  PTGL0_13_bit at PTGL0.B13;
    const register unsigned short int PTGL0_12 = 12;
    sbit  PTGL0_12_bit at PTGL0.B12;
    const register unsigned short int PTGL0_11 = 11;
    sbit  PTGL0_11_bit at PTGL0.B11;
    const register unsigned short int PTGL0_10 = 10;
    sbit  PTGL0_10_bit at PTGL0.B10;
    const register unsigned short int PTGL0_9 = 9;
    sbit  PTGL0_9_bit at PTGL0.B9;
    const register unsigned short int PTGL0_8 = 8;
    sbit  PTGL0_8_bit at PTGL0.B8;
    const register unsigned short int PTGL0_7 = 7;
    sbit  PTGL0_7_bit at PTGL0.B7;
    const register unsigned short int PTGL0_6 = 6;
    sbit  PTGL0_6_bit at PTGL0.B6;
    const register unsigned short int PTGL0_5 = 5;
    sbit  PTGL0_5_bit at PTGL0.B5;
    const register unsigned short int PTGL0_4 = 4;
    sbit  PTGL0_4_bit at PTGL0.B4;
    const register unsigned short int PTGL0_3 = 3;
    sbit  PTGL0_3_bit at PTGL0.B3;
    const register unsigned short int PTGL0_2 = 2;
    sbit  PTGL0_2_bit at PTGL0.B2;
    const register unsigned short int PTGL0_1 = 1;
    sbit  PTGL0_1_bit at PTGL0.B1;
    const register unsigned short int PTGL0_0 = 0;
    sbit  PTGL0_0_bit at PTGL0.B0;

    // PTGQPTR bits
    const register unsigned short int PTGQPTR_4 = 4;
    sbit  PTGQPTR_4_bit at PTGQPTR.B4;
    const register unsigned short int PTGQPTR_3 = 3;
    sbit  PTGQPTR_3_bit at PTGQPTR.B3;
    const register unsigned short int PTGQPTR_2 = 2;
    sbit  PTGQPTR_2_bit at PTGQPTR.B2;
    const register unsigned short int PTGQPTR_1 = 1;
    sbit  PTGQPTR_1_bit at PTGQPTR.B1;
    const register unsigned short int PTGQPTR_0 = 0;
    sbit  PTGQPTR_0_bit at PTGQPTR.B0;

    // PTGQUE0 bits
    const register unsigned short int STEP1_7 = 15;
    sbit  STEP1_7_bit at PTGQUE0.B15;
    const register unsigned short int STEP1_6 = 14;
    sbit  STEP1_6_bit at PTGQUE0.B14;
    const register unsigned short int STEP1_5 = 13;
    sbit  STEP1_5_bit at PTGQUE0.B13;
    const register unsigned short int STEP1_4 = 12;
    sbit  STEP1_4_bit at PTGQUE0.B12;
    const register unsigned short int STEP1_3 = 11;
    sbit  STEP1_3_bit at PTGQUE0.B11;
    const register unsigned short int STEP1_2 = 10;
    sbit  STEP1_2_bit at PTGQUE0.B10;
    const register unsigned short int STEP1_1 = 9;
    sbit  STEP1_1_bit at PTGQUE0.B9;
    const register unsigned short int STEP1_0 = 8;
    sbit  STEP1_0_bit at PTGQUE0.B8;
    const register unsigned short int STEP0_7 = 7;
    sbit  STEP0_7_bit at PTGQUE0.B7;
    const register unsigned short int STEP0_6 = 6;
    sbit  STEP0_6_bit at PTGQUE0.B6;
    const register unsigned short int STEP0_5 = 5;
    sbit  STEP0_5_bit at PTGQUE0.B5;
    const register unsigned short int STEP0_4 = 4;
    sbit  STEP0_4_bit at PTGQUE0.B4;
    const register unsigned short int STEP0_3 = 3;
    sbit  STEP0_3_bit at PTGQUE0.B3;
    const register unsigned short int STEP0_2 = 2;
    sbit  STEP0_2_bit at PTGQUE0.B2;
    const register unsigned short int STEP0_1 = 1;
    sbit  STEP0_1_bit at PTGQUE0.B1;
    const register unsigned short int STEP0_0 = 0;
    sbit  STEP0_0_bit at PTGQUE0.B0;

    // PTGQUE1 bits
    const register unsigned short int STEP3_7 = 15;
    sbit  STEP3_7_bit at PTGQUE1.B15;
    const register unsigned short int STEP3_6 = 14;
    sbit  STEP3_6_bit at PTGQUE1.B14;
    const register unsigned short int STEP3_5 = 13;
    sbit  STEP3_5_bit at PTGQUE1.B13;
    const register unsigned short int STEP3_4 = 12;
    sbit  STEP3_4_bit at PTGQUE1.B12;
    const register unsigned short int STEP3_3 = 11;
    sbit  STEP3_3_bit at PTGQUE1.B11;
    const register unsigned short int STEP3_2 = 10;
    sbit  STEP3_2_bit at PTGQUE1.B10;
    const register unsigned short int STEP3_1 = 9;
    sbit  STEP3_1_bit at PTGQUE1.B9;
    const register unsigned short int STEP3_0 = 8;
    sbit  STEP3_0_bit at PTGQUE1.B8;
    const register unsigned short int STEP2_7 = 7;
    sbit  STEP2_7_bit at PTGQUE1.B7;
    const register unsigned short int STEP2_6 = 6;
    sbit  STEP2_6_bit at PTGQUE1.B6;
    const register unsigned short int STEP2_5 = 5;
    sbit  STEP2_5_bit at PTGQUE1.B5;
    const register unsigned short int STEP2_4 = 4;
    sbit  STEP2_4_bit at PTGQUE1.B4;
    const register unsigned short int STEP2_3 = 3;
    sbit  STEP2_3_bit at PTGQUE1.B3;
    const register unsigned short int STEP2_2 = 2;
    sbit  STEP2_2_bit at PTGQUE1.B2;
    const register unsigned short int STEP2_1 = 1;
    sbit  STEP2_1_bit at PTGQUE1.B1;
    const register unsigned short int STEP2_0 = 0;
    sbit  STEP2_0_bit at PTGQUE1.B0;

    // PTGQUE2 bits
    const register unsigned short int STEP5_7 = 15;
    sbit  STEP5_7_bit at PTGQUE2.B15;
    const register unsigned short int STEP5_6 = 14;
    sbit  STEP5_6_bit at PTGQUE2.B14;
    const register unsigned short int STEP5_5 = 13;
    sbit  STEP5_5_bit at PTGQUE2.B13;
    const register unsigned short int STEP5_4 = 12;
    sbit  STEP5_4_bit at PTGQUE2.B12;
    const register unsigned short int STEP5_3 = 11;
    sbit  STEP5_3_bit at PTGQUE2.B11;
    const register unsigned short int STEP5_2 = 10;
    sbit  STEP5_2_bit at PTGQUE2.B10;
    const register unsigned short int STEP5_1 = 9;
    sbit  STEP5_1_bit at PTGQUE2.B9;
    const register unsigned short int STEP5_0 = 8;
    sbit  STEP5_0_bit at PTGQUE2.B8;
    const register unsigned short int STEP4_7 = 7;
    sbit  STEP4_7_bit at PTGQUE2.B7;
    const register unsigned short int STEP4_6 = 6;
    sbit  STEP4_6_bit at PTGQUE2.B6;
    const register unsigned short int STEP4_5 = 5;
    sbit  STEP4_5_bit at PTGQUE2.B5;
    const register unsigned short int STEP4_4 = 4;
    sbit  STEP4_4_bit at PTGQUE2.B4;
    const register unsigned short int STEP4_3 = 3;
    sbit  STEP4_3_bit at PTGQUE2.B3;
    const register unsigned short int STEP4_2 = 2;
    sbit  STEP4_2_bit at PTGQUE2.B2;
    const register unsigned short int STEP4_1 = 1;
    sbit  STEP4_1_bit at PTGQUE2.B1;
    const register unsigned short int STEP4_0 = 0;
    sbit  STEP4_0_bit at PTGQUE2.B0;

    // PTGQUE3 bits
    const register unsigned short int STEP7_7 = 15;
    sbit  STEP7_7_bit at PTGQUE3.B15;
    const register unsigned short int STEP7_6 = 14;
    sbit  STEP7_6_bit at PTGQUE3.B14;
    const register unsigned short int STEP7_5 = 13;
    sbit  STEP7_5_bit at PTGQUE3.B13;
    const register unsigned short int STEP7_4 = 12;
    sbit  STEP7_4_bit at PTGQUE3.B12;
    const register unsigned short int STEP7_3 = 11;
    sbit  STEP7_3_bit at PTGQUE3.B11;
    const register unsigned short int STEP7_2 = 10;
    sbit  STEP7_2_bit at PTGQUE3.B10;
    const register unsigned short int STEP7_1 = 9;
    sbit  STEP7_1_bit at PTGQUE3.B9;
    const register unsigned short int STEP7_0 = 8;
    sbit  STEP7_0_bit at PTGQUE3.B8;
    const register unsigned short int STEP6_7 = 7;
    sbit  STEP6_7_bit at PTGQUE3.B7;
    const register unsigned short int STEP6_6 = 6;
    sbit  STEP6_6_bit at PTGQUE3.B6;
    const register unsigned short int STEP6_5 = 5;
    sbit  STEP6_5_bit at PTGQUE3.B5;
    const register unsigned short int STEP6_4 = 4;
    sbit  STEP6_4_bit at PTGQUE3.B4;
    const register unsigned short int STEP6_3 = 3;
    sbit  STEP6_3_bit at PTGQUE3.B3;
    const register unsigned short int STEP6_2 = 2;
    sbit  STEP6_2_bit at PTGQUE3.B2;
    const register unsigned short int STEP6_1 = 1;
    sbit  STEP6_1_bit at PTGQUE3.B1;
    const register unsigned short int STEP6_0 = 0;
    sbit  STEP6_0_bit at PTGQUE3.B0;

    // PTGQUE4 bits
    const register unsigned short int STEP9_7 = 15;
    sbit  STEP9_7_bit at PTGQUE4.B15;
    const register unsigned short int STEP9_6 = 14;
    sbit  STEP9_6_bit at PTGQUE4.B14;
    const register unsigned short int STEP9_5 = 13;
    sbit  STEP9_5_bit at PTGQUE4.B13;
    const register unsigned short int STEP9_4 = 12;
    sbit  STEP9_4_bit at PTGQUE4.B12;
    const register unsigned short int STEP9_3 = 11;
    sbit  STEP9_3_bit at PTGQUE4.B11;
    const register unsigned short int STEP9_2 = 10;
    sbit  STEP9_2_bit at PTGQUE4.B10;
    const register unsigned short int STEP9_1 = 9;
    sbit  STEP9_1_bit at PTGQUE4.B9;
    const register unsigned short int STEP9_0 = 8;
    sbit  STEP9_0_bit at PTGQUE4.B8;
    const register unsigned short int STEP8_7 = 7;
    sbit  STEP8_7_bit at PTGQUE4.B7;
    const register unsigned short int STEP8_6 = 6;
    sbit  STEP8_6_bit at PTGQUE4.B6;
    const register unsigned short int STEP8_5 = 5;
    sbit  STEP8_5_bit at PTGQUE4.B5;
    const register unsigned short int STEP8_4 = 4;
    sbit  STEP8_4_bit at PTGQUE4.B4;
    const register unsigned short int STEP8_3 = 3;
    sbit  STEP8_3_bit at PTGQUE4.B3;
    const register unsigned short int STEP8_2 = 2;
    sbit  STEP8_2_bit at PTGQUE4.B2;
    const register unsigned short int STEP8_1 = 1;
    sbit  STEP8_1_bit at PTGQUE4.B1;
    const register unsigned short int STEP8_0 = 0;
    sbit  STEP8_0_bit at PTGQUE4.B0;

    // PTGQUE5 bits
    const register unsigned short int STEP11_7 = 15;
    sbit  STEP11_7_bit at PTGQUE5.B15;
    const register unsigned short int STEP11_6 = 14;
    sbit  STEP11_6_bit at PTGQUE5.B14;
    const register unsigned short int STEP11_5 = 13;
    sbit  STEP11_5_bit at PTGQUE5.B13;
    const register unsigned short int STEP11_4 = 12;
    sbit  STEP11_4_bit at PTGQUE5.B12;
    const register unsigned short int STEP11_3 = 11;
    sbit  STEP11_3_bit at PTGQUE5.B11;
    const register unsigned short int STEP11_2 = 10;
    sbit  STEP11_2_bit at PTGQUE5.B10;
    const register unsigned short int STEP11_1 = 9;
    sbit  STEP11_1_bit at PTGQUE5.B9;
    const register unsigned short int STEP11_0 = 8;
    sbit  STEP11_0_bit at PTGQUE5.B8;
    const register unsigned short int STEP10_7 = 7;
    sbit  STEP10_7_bit at PTGQUE5.B7;
    const register unsigned short int STEP10_6 = 6;
    sbit  STEP10_6_bit at PTGQUE5.B6;
    const register unsigned short int STEP10_5 = 5;
    sbit  STEP10_5_bit at PTGQUE5.B5;
    const register unsigned short int STEP10_4 = 4;
    sbit  STEP10_4_bit at PTGQUE5.B4;
    const register unsigned short int STEP10_3 = 3;
    sbit  STEP10_3_bit at PTGQUE5.B3;
    const register unsigned short int STEP10_2 = 2;
    sbit  STEP10_2_bit at PTGQUE5.B2;
    const register unsigned short int STEP10_1 = 1;
    sbit  STEP10_1_bit at PTGQUE5.B1;
    const register unsigned short int STEP10_0 = 0;
    sbit  STEP10_0_bit at PTGQUE5.B0;

    // PTGQUE6 bits
    const register unsigned short int STEP13_7 = 15;
    sbit  STEP13_7_bit at PTGQUE6.B15;
    const register unsigned short int STEP13_6 = 14;
    sbit  STEP13_6_bit at PTGQUE6.B14;
    const register unsigned short int STEP13_5 = 13;
    sbit  STEP13_5_bit at PTGQUE6.B13;
    const register unsigned short int STEP13_4 = 12;
    sbit  STEP13_4_bit at PTGQUE6.B12;
    const register unsigned short int STEP13_3 = 11;
    sbit  STEP13_3_bit at PTGQUE6.B11;
    const register unsigned short int STEP13_2 = 10;
    sbit  STEP13_2_bit at PTGQUE6.B10;
    const register unsigned short int STEP13_1 = 9;
    sbit  STEP13_1_bit at PTGQUE6.B9;
    const register unsigned short int STEP13_0 = 8;
    sbit  STEP13_0_bit at PTGQUE6.B8;
    const register unsigned short int STEP12_7 = 7;
    sbit  STEP12_7_bit at PTGQUE6.B7;
    const register unsigned short int STEP12_6 = 6;
    sbit  STEP12_6_bit at PTGQUE6.B6;
    const register unsigned short int STEP12_5 = 5;
    sbit  STEP12_5_bit at PTGQUE6.B5;
    const register unsigned short int STEP12_4 = 4;
    sbit  STEP12_4_bit at PTGQUE6.B4;
    const register unsigned short int STEP12_3 = 3;
    sbit  STEP12_3_bit at PTGQUE6.B3;
    const register unsigned short int STEP12_2 = 2;
    sbit  STEP12_2_bit at PTGQUE6.B2;
    const register unsigned short int STEP12_1 = 1;
    sbit  STEP12_1_bit at PTGQUE6.B1;
    const register unsigned short int STEP12_0 = 0;
    sbit  STEP12_0_bit at PTGQUE6.B0;

    // PTGQUE7 bits
    const register unsigned short int STEP15_7 = 15;
    sbit  STEP15_7_bit at PTGQUE7.B15;
    const register unsigned short int STEP15_6 = 14;
    sbit  STEP15_6_bit at PTGQUE7.B14;
    const register unsigned short int STEP15_5 = 13;
    sbit  STEP15_5_bit at PTGQUE7.B13;
    const register unsigned short int STEP15_4 = 12;
    sbit  STEP15_4_bit at PTGQUE7.B12;
    const register unsigned short int STEP15_3 = 11;
    sbit  STEP15_3_bit at PTGQUE7.B11;
    const register unsigned short int STEP15_2 = 10;
    sbit  STEP15_2_bit at PTGQUE7.B10;
    const register unsigned short int STEP15_1 = 9;
    sbit  STEP15_1_bit at PTGQUE7.B9;
    const register unsigned short int STEP15_0 = 8;
    sbit  STEP15_0_bit at PTGQUE7.B8;
    const register unsigned short int STEP14_7 = 7;
    sbit  STEP14_7_bit at PTGQUE7.B7;
    const register unsigned short int STEP14_6 = 6;
    sbit  STEP14_6_bit at PTGQUE7.B6;
    const register unsigned short int STEP14_5 = 5;
    sbit  STEP14_5_bit at PTGQUE7.B5;
    const register unsigned short int STEP14_4 = 4;
    sbit  STEP14_4_bit at PTGQUE7.B4;
    const register unsigned short int STEP14_3 = 3;
    sbit  STEP14_3_bit at PTGQUE7.B3;
    const register unsigned short int STEP14_2 = 2;
    sbit  STEP14_2_bit at PTGQUE7.B2;
    const register unsigned short int STEP14_1 = 1;
    sbit  STEP14_1_bit at PTGQUE7.B1;
    const register unsigned short int STEP14_0 = 0;
    sbit  STEP14_0_bit at PTGQUE7.B0;

    // DMA0CON bits
    const register unsigned short int CHEN = 15;
    sbit  CHEN_bit at DMA0CON.B15;
    sbit  CHEN_DMA0CON_bit at DMA0CON.B15;
    const register unsigned short int SIZE = 14;
    sbit  SIZE_bit at DMA0CON.B14;
    sbit  SIZE_DMA0CON_bit at DMA0CON.B14;
    const register unsigned short int DIR_ = 13;
    sbit  DIR_bit at DMA0CON.B13;
    const register unsigned short int HALF = 12;
    sbit  HALF_bit at DMA0CON.B12;
    sbit  HALF_DMA0CON_bit at DMA0CON.B12;
    const register unsigned short int NULLW = 11;
    sbit  NULLW_bit at DMA0CON.B11;
    sbit  NULLW_DMA0CON_bit at DMA0CON.B11;
    const register unsigned short int AMODE_1 = 5;
    sbit  AMODE_1_bit at DMA0CON.B5;
    sbit  AMODE_1_DMA0CON_bit at DMA0CON.B5;
    const register unsigned short int AMODE_0 = 4;
    sbit  AMODE_0_bit at DMA0CON.B4;
    sbit  AMODE_0_DMA0CON_bit at DMA0CON.B4;
    const register unsigned short int MODE_1 = 1;
    sbit  MODE_1_bit at DMA0CON.B1;
    sbit  MODE_1_DMA0CON_bit at DMA0CON.B1;
    const register unsigned short int MODE_0 = 0;
    sbit  MODE_0_bit at DMA0CON.B0;
    sbit  MODE_0_DMA0CON_bit at DMA0CON.B0;

    // DMA0REQ bits
    const register unsigned short int FORCE = 15;
    sbit  FORCE_bit at DMA0REQ.B15;
    sbit  FORCE_DMA0REQ_bit at DMA0REQ.B15;
    const register unsigned short int IRQSEL_7 = 7;
    sbit  IRQSEL_7_bit at DMA0REQ.B7;
    sbit  IRQSEL_7_DMA0REQ_bit at DMA0REQ.B7;
    const register unsigned short int IRQSEL_6 = 6;
    sbit  IRQSEL_6_bit at DMA0REQ.B6;
    sbit  IRQSEL_6_DMA0REQ_bit at DMA0REQ.B6;
    const register unsigned short int IRQSEL_5 = 5;
    sbit  IRQSEL_5_bit at DMA0REQ.B5;
    sbit  IRQSEL_5_DMA0REQ_bit at DMA0REQ.B5;
    const register unsigned short int IRQSEL_4 = 4;
    sbit  IRQSEL_4_bit at DMA0REQ.B4;
    sbit  IRQSEL_4_DMA0REQ_bit at DMA0REQ.B4;
    const register unsigned short int IRQSEL_3 = 3;
    sbit  IRQSEL_3_bit at DMA0REQ.B3;
    sbit  IRQSEL_3_DMA0REQ_bit at DMA0REQ.B3;
    const register unsigned short int IRQSEL_2 = 2;
    sbit  IRQSEL_2_bit at DMA0REQ.B2;
    sbit  IRQSEL_2_DMA0REQ_bit at DMA0REQ.B2;
    const register unsigned short int IRQSEL_1 = 1;
    sbit  IRQSEL_1_bit at DMA0REQ.B1;
    sbit  IRQSEL_1_DMA0REQ_bit at DMA0REQ.B1;
    const register unsigned short int IRQSEL_0 = 0;
    sbit  IRQSEL_0_bit at DMA0REQ.B0;
    sbit  IRQSEL_0_DMA0REQ_bit at DMA0REQ.B0;

    // DMA0STAL bits
    const register unsigned short int STA_15 = 15;
    sbit  STA_15_bit at DMA0STAL.B15;
    sbit  STA_15_DMA0STAL_bit at DMA0STAL.B15;
    const register unsigned short int STA_14 = 14;
    sbit  STA_14_bit at DMA0STAL.B14;
    sbit  STA_14_DMA0STAL_bit at DMA0STAL.B14;
    const register unsigned short int STA_13 = 13;
    sbit  STA_13_bit at DMA0STAL.B13;
    sbit  STA_13_DMA0STAL_bit at DMA0STAL.B13;
    const register unsigned short int STA_12 = 12;
    sbit  STA_12_bit at DMA0STAL.B12;
    sbit  STA_12_DMA0STAL_bit at DMA0STAL.B12;
    const register unsigned short int STA_11 = 11;
    sbit  STA_11_bit at DMA0STAL.B11;
    sbit  STA_11_DMA0STAL_bit at DMA0STAL.B11;
    const register unsigned short int STA_10 = 10;
    sbit  STA_10_bit at DMA0STAL.B10;
    sbit  STA_10_DMA0STAL_bit at DMA0STAL.B10;
    const register unsigned short int STA_9 = 9;
    sbit  STA_9_bit at DMA0STAL.B9;
    sbit  STA_9_DMA0STAL_bit at DMA0STAL.B9;
    const register unsigned short int STA_8 = 8;
    sbit  STA_8_bit at DMA0STAL.B8;
    sbit  STA_8_DMA0STAL_bit at DMA0STAL.B8;
    const register unsigned short int STA_7 = 7;
    sbit  STA_7_bit at DMA0STAL.B7;
    sbit  STA_7_DMA0STAL_bit at DMA0STAL.B7;
    const register unsigned short int STA_6 = 6;
    sbit  STA_6_bit at DMA0STAL.B6;
    sbit  STA_6_DMA0STAL_bit at DMA0STAL.B6;
    const register unsigned short int STA_5 = 5;
    sbit  STA_5_bit at DMA0STAL.B5;
    sbit  STA_5_DMA0STAL_bit at DMA0STAL.B5;
    const register unsigned short int STA_4 = 4;
    sbit  STA_4_bit at DMA0STAL.B4;
    sbit  STA_4_DMA0STAL_bit at DMA0STAL.B4;
    const register unsigned short int STA_3 = 3;
    sbit  STA_3_bit at DMA0STAL.B3;
    sbit  STA_3_DMA0STAL_bit at DMA0STAL.B3;
    const register unsigned short int STA_2 = 2;
    sbit  STA_2_bit at DMA0STAL.B2;
    sbit  STA_2_DMA0STAL_bit at DMA0STAL.B2;
    const register unsigned short int STA_1 = 1;
    sbit  STA_1_bit at DMA0STAL.B1;
    sbit  STA_1_DMA0STAL_bit at DMA0STAL.B1;
    const register unsigned short int STA_0 = 0;
    sbit  STA_0_bit at DMA0STAL.B0;
    sbit  STA_0_DMA0STAL_bit at DMA0STAL.B0;

    // DMA0STAH bits
    sbit  STA_7_DMA0STAH_bit at DMA0STAH.B7;
    sbit  STA_6_DMA0STAH_bit at DMA0STAH.B6;
    sbit  STA_5_DMA0STAH_bit at DMA0STAH.B5;
    sbit  STA_4_DMA0STAH_bit at DMA0STAH.B4;
    sbit  STA_3_DMA0STAH_bit at DMA0STAH.B3;
    sbit  STA_2_DMA0STAH_bit at DMA0STAH.B2;
    sbit  STA_1_DMA0STAH_bit at DMA0STAH.B1;
    sbit  STA_0_DMA0STAH_bit at DMA0STAH.B0;

    // DMA0STBL bits
    const register unsigned short int STB_15 = 15;
    sbit  STB_15_bit at DMA0STBL.B15;
    sbit  STB_15_DMA0STBL_bit at DMA0STBL.B15;
    const register unsigned short int STB_14 = 14;
    sbit  STB_14_bit at DMA0STBL.B14;
    sbit  STB_14_DMA0STBL_bit at DMA0STBL.B14;
    const register unsigned short int STB_13 = 13;
    sbit  STB_13_bit at DMA0STBL.B13;
    sbit  STB_13_DMA0STBL_bit at DMA0STBL.B13;
    const register unsigned short int STB_12 = 12;
    sbit  STB_12_bit at DMA0STBL.B12;
    sbit  STB_12_DMA0STBL_bit at DMA0STBL.B12;
    const register unsigned short int STB_11 = 11;
    sbit  STB_11_bit at DMA0STBL.B11;
    sbit  STB_11_DMA0STBL_bit at DMA0STBL.B11;
    const register unsigned short int STB_10 = 10;
    sbit  STB_10_bit at DMA0STBL.B10;
    sbit  STB_10_DMA0STBL_bit at DMA0STBL.B10;
    const register unsigned short int STB_9 = 9;
    sbit  STB_9_bit at DMA0STBL.B9;
    sbit  STB_9_DMA0STBL_bit at DMA0STBL.B9;
    const register unsigned short int STB_8 = 8;
    sbit  STB_8_bit at DMA0STBL.B8;
    sbit  STB_8_DMA0STBL_bit at DMA0STBL.B8;
    const register unsigned short int STB_7 = 7;
    sbit  STB_7_bit at DMA0STBL.B7;
    sbit  STB_7_DMA0STBL_bit at DMA0STBL.B7;
    const register unsigned short int STB_6 = 6;
    sbit  STB_6_bit at DMA0STBL.B6;
    sbit  STB_6_DMA0STBL_bit at DMA0STBL.B6;
    const register unsigned short int STB_5 = 5;
    sbit  STB_5_bit at DMA0STBL.B5;
    sbit  STB_5_DMA0STBL_bit at DMA0STBL.B5;
    const register unsigned short int STB_4 = 4;
    sbit  STB_4_bit at DMA0STBL.B4;
    sbit  STB_4_DMA0STBL_bit at DMA0STBL.B4;
    const register unsigned short int STB_3 = 3;
    sbit  STB_3_bit at DMA0STBL.B3;
    sbit  STB_3_DMA0STBL_bit at DMA0STBL.B3;
    const register unsigned short int STB_2 = 2;
    sbit  STB_2_bit at DMA0STBL.B2;
    sbit  STB_2_DMA0STBL_bit at DMA0STBL.B2;
    const register unsigned short int STB_1 = 1;
    sbit  STB_1_bit at DMA0STBL.B1;
    sbit  STB_1_DMA0STBL_bit at DMA0STBL.B1;
    const register unsigned short int STB_0 = 0;
    sbit  STB_0_bit at DMA0STBL.B0;
    sbit  STB_0_DMA0STBL_bit at DMA0STBL.B0;

    // DMA0STBH bits
    sbit  STB_7_DMA0STBH_bit at DMA0STBH.B7;
    sbit  STB_6_DMA0STBH_bit at DMA0STBH.B6;
    sbit  STB_5_DMA0STBH_bit at DMA0STBH.B5;
    sbit  STB_4_DMA0STBH_bit at DMA0STBH.B4;
    sbit  STB_3_DMA0STBH_bit at DMA0STBH.B3;
    sbit  STB_2_DMA0STBH_bit at DMA0STBH.B2;
    sbit  STB_1_DMA0STBH_bit at DMA0STBH.B1;
    sbit  STB_0_DMA0STBH_bit at DMA0STBH.B0;

    // DMA0PAD bits
    const register unsigned short int PAD_15 = 15;
    sbit  PAD_15_bit at DMA0PAD.B15;
    sbit  PAD_15_DMA0PAD_bit at DMA0PAD.B15;
    const register unsigned short int PAD_14 = 14;
    sbit  PAD_14_bit at DMA0PAD.B14;
    sbit  PAD_14_DMA0PAD_bit at DMA0PAD.B14;
    const register unsigned short int PAD_13 = 13;
    sbit  PAD_13_bit at DMA0PAD.B13;
    sbit  PAD_13_DMA0PAD_bit at DMA0PAD.B13;
    const register unsigned short int PAD_12 = 12;
    sbit  PAD_12_bit at DMA0PAD.B12;
    sbit  PAD_12_DMA0PAD_bit at DMA0PAD.B12;
    const register unsigned short int PAD_11 = 11;
    sbit  PAD_11_bit at DMA0PAD.B11;
    sbit  PAD_11_DMA0PAD_bit at DMA0PAD.B11;
    const register unsigned short int PAD_10 = 10;
    sbit  PAD_10_bit at DMA0PAD.B10;
    sbit  PAD_10_DMA0PAD_bit at DMA0PAD.B10;
    const register unsigned short int PAD_9 = 9;
    sbit  PAD_9_bit at DMA0PAD.B9;
    sbit  PAD_9_DMA0PAD_bit at DMA0PAD.B9;
    const register unsigned short int PAD_8 = 8;
    sbit  PAD_8_bit at DMA0PAD.B8;
    sbit  PAD_8_DMA0PAD_bit at DMA0PAD.B8;
    const register unsigned short int PAD_7 = 7;
    sbit  PAD_7_bit at DMA0PAD.B7;
    sbit  PAD_7_DMA0PAD_bit at DMA0PAD.B7;
    const register unsigned short int PAD_6 = 6;
    sbit  PAD_6_bit at DMA0PAD.B6;
    sbit  PAD_6_DMA0PAD_bit at DMA0PAD.B6;
    const register unsigned short int PAD_5 = 5;
    sbit  PAD_5_bit at DMA0PAD.B5;
    sbit  PAD_5_DMA0PAD_bit at DMA0PAD.B5;
    const register unsigned short int PAD_4 = 4;
    sbit  PAD_4_bit at DMA0PAD.B4;
    sbit  PAD_4_DMA0PAD_bit at DMA0PAD.B4;
    const register unsigned short int PAD_3 = 3;
    sbit  PAD_3_bit at DMA0PAD.B3;
    sbit  PAD_3_DMA0PAD_bit at DMA0PAD.B3;
    const register unsigned short int PAD_2 = 2;
    sbit  PAD_2_bit at DMA0PAD.B2;
    sbit  PAD_2_DMA0PAD_bit at DMA0PAD.B2;
    const register unsigned short int PAD_1 = 1;
    sbit  PAD_1_bit at DMA0PAD.B1;
    sbit  PAD_1_DMA0PAD_bit at DMA0PAD.B1;
    const register unsigned short int PAD_0 = 0;
    sbit  PAD_0_bit at DMA0PAD.B0;
    sbit  PAD_0_DMA0PAD_bit at DMA0PAD.B0;

    // DMA0CNT bits
    const register unsigned short int CNT_13 = 13;
    sbit  CNT_13_bit at DMA0CNT.B13;
    sbit  CNT_13_DMA0CNT_bit at DMA0CNT.B13;
    const register unsigned short int CNT_12 = 12;
    sbit  CNT_12_bit at DMA0CNT.B12;
    sbit  CNT_12_DMA0CNT_bit at DMA0CNT.B12;
    const register unsigned short int CNT_11 = 11;
    sbit  CNT_11_bit at DMA0CNT.B11;
    sbit  CNT_11_DMA0CNT_bit at DMA0CNT.B11;
    const register unsigned short int CNT_10 = 10;
    sbit  CNT_10_bit at DMA0CNT.B10;
    sbit  CNT_10_DMA0CNT_bit at DMA0CNT.B10;
    const register unsigned short int CNT_9 = 9;
    sbit  CNT_9_bit at DMA0CNT.B9;
    sbit  CNT_9_DMA0CNT_bit at DMA0CNT.B9;
    const register unsigned short int CNT_8 = 8;
    sbit  CNT_8_bit at DMA0CNT.B8;
    sbit  CNT_8_DMA0CNT_bit at DMA0CNT.B8;
    const register unsigned short int CNT_7 = 7;
    sbit  CNT_7_bit at DMA0CNT.B7;
    sbit  CNT_7_DMA0CNT_bit at DMA0CNT.B7;
    const register unsigned short int CNT_6 = 6;
    sbit  CNT_6_bit at DMA0CNT.B6;
    sbit  CNT_6_DMA0CNT_bit at DMA0CNT.B6;
    const register unsigned short int CNT_5 = 5;
    sbit  CNT_5_bit at DMA0CNT.B5;
    sbit  CNT_5_DMA0CNT_bit at DMA0CNT.B5;
    const register unsigned short int CNT_4 = 4;
    sbit  CNT_4_bit at DMA0CNT.B4;
    sbit  CNT_4_DMA0CNT_bit at DMA0CNT.B4;
    const register unsigned short int CNT_3 = 3;
    sbit  CNT_3_bit at DMA0CNT.B3;
    sbit  CNT_3_DMA0CNT_bit at DMA0CNT.B3;
    const register unsigned short int CNT_2 = 2;
    sbit  CNT_2_bit at DMA0CNT.B2;
    sbit  CNT_2_DMA0CNT_bit at DMA0CNT.B2;
    const register unsigned short int CNT_1 = 1;
    sbit  CNT_1_bit at DMA0CNT.B1;
    sbit  CNT_1_DMA0CNT_bit at DMA0CNT.B1;
    const register unsigned short int CNT_0 = 0;
    sbit  CNT_0_bit at DMA0CNT.B0;
    sbit  CNT_0_DMA0CNT_bit at DMA0CNT.B0;

    // DMA1CON bits
    sbit  CHEN_DMA1CON_bit at DMA1CON.B15;
    sbit  SIZE_DMA1CON_bit at DMA1CON.B14;
    sbit  DIR__DMA1CON_bit at DMA1CON.B13;
    sbit  HALF_DMA1CON_bit at DMA1CON.B12;
    sbit  NULLW_DMA1CON_bit at DMA1CON.B11;
    sbit  AMODE_1_DMA1CON_bit at DMA1CON.B5;
    sbit  AMODE_0_DMA1CON_bit at DMA1CON.B4;
    sbit  MODE_1_DMA1CON_bit at DMA1CON.B1;
    sbit  MODE_0_DMA1CON_bit at DMA1CON.B0;

    // DMA1REQ bits
    sbit  FORCE_DMA1REQ_bit at DMA1REQ.B15;
    sbit  IRQSEL_7_DMA1REQ_bit at DMA1REQ.B7;
    sbit  IRQSEL_6_DMA1REQ_bit at DMA1REQ.B6;
    sbit  IRQSEL_5_DMA1REQ_bit at DMA1REQ.B5;
    sbit  IRQSEL_4_DMA1REQ_bit at DMA1REQ.B4;
    sbit  IRQSEL_3_DMA1REQ_bit at DMA1REQ.B3;
    sbit  IRQSEL_2_DMA1REQ_bit at DMA1REQ.B2;
    sbit  IRQSEL_1_DMA1REQ_bit at DMA1REQ.B1;
    sbit  IRQSEL_0_DMA1REQ_bit at DMA1REQ.B0;

    // DMA1STAL bits
    sbit  STA_15_DMA1STAL_bit at DMA1STAL.B15;
    sbit  STA_14_DMA1STAL_bit at DMA1STAL.B14;
    sbit  STA_13_DMA1STAL_bit at DMA1STAL.B13;
    sbit  STA_12_DMA1STAL_bit at DMA1STAL.B12;
    sbit  STA_11_DMA1STAL_bit at DMA1STAL.B11;
    sbit  STA_10_DMA1STAL_bit at DMA1STAL.B10;
    sbit  STA_9_DMA1STAL_bit at DMA1STAL.B9;
    sbit  STA_8_DMA1STAL_bit at DMA1STAL.B8;
    sbit  STA_7_DMA1STAL_bit at DMA1STAL.B7;
    sbit  STA_6_DMA1STAL_bit at DMA1STAL.B6;
    sbit  STA_5_DMA1STAL_bit at DMA1STAL.B5;
    sbit  STA_4_DMA1STAL_bit at DMA1STAL.B4;
    sbit  STA_3_DMA1STAL_bit at DMA1STAL.B3;
    sbit  STA_2_DMA1STAL_bit at DMA1STAL.B2;
    sbit  STA_1_DMA1STAL_bit at DMA1STAL.B1;
    sbit  STA_0_DMA1STAL_bit at DMA1STAL.B0;

    // DMA1STAH bits
    sbit  STA_7_DMA1STAH_bit at DMA1STAH.B7;
    sbit  STA_6_DMA1STAH_bit at DMA1STAH.B6;
    sbit  STA_5_DMA1STAH_bit at DMA1STAH.B5;
    sbit  STA_4_DMA1STAH_bit at DMA1STAH.B4;
    sbit  STA_3_DMA1STAH_bit at DMA1STAH.B3;
    sbit  STA_2_DMA1STAH_bit at DMA1STAH.B2;
    sbit  STA_1_DMA1STAH_bit at DMA1STAH.B1;
    sbit  STA_0_DMA1STAH_bit at DMA1STAH.B0;

    // DMA1STBL bits
    sbit  STB_15_DMA1STBL_bit at DMA1STBL.B15;
    sbit  STB_14_DMA1STBL_bit at DMA1STBL.B14;
    sbit  STB_13_DMA1STBL_bit at DMA1STBL.B13;
    sbit  STB_12_DMA1STBL_bit at DMA1STBL.B12;
    sbit  STB_11_DMA1STBL_bit at DMA1STBL.B11;
    sbit  STB_10_DMA1STBL_bit at DMA1STBL.B10;
    sbit  STB_9_DMA1STBL_bit at DMA1STBL.B9;
    sbit  STB_8_DMA1STBL_bit at DMA1STBL.B8;
    sbit  STB_7_DMA1STBL_bit at DMA1STBL.B7;
    sbit  STB_6_DMA1STBL_bit at DMA1STBL.B6;
    sbit  STB_5_DMA1STBL_bit at DMA1STBL.B5;
    sbit  STB_4_DMA1STBL_bit at DMA1STBL.B4;
    sbit  STB_3_DMA1STBL_bit at DMA1STBL.B3;
    sbit  STB_2_DMA1STBL_bit at DMA1STBL.B2;
    sbit  STB_1_DMA1STBL_bit at DMA1STBL.B1;
    sbit  STB_0_DMA1STBL_bit at DMA1STBL.B0;

    // DMA1STBH bits
    sbit  STB_7_DMA1STBH_bit at DMA1STBH.B7;
    sbit  STB_6_DMA1STBH_bit at DMA1STBH.B6;
    sbit  STB_5_DMA1STBH_bit at DMA1STBH.B5;
    sbit  STB_4_DMA1STBH_bit at DMA1STBH.B4;
    sbit  STB_3_DMA1STBH_bit at DMA1STBH.B3;
    sbit  STB_2_DMA1STBH_bit at DMA1STBH.B2;
    sbit  STB_1_DMA1STBH_bit at DMA1STBH.B1;
    sbit  STB_0_DMA1STBH_bit at DMA1STBH.B0;

    // DMA1PAD bits
    sbit  PAD_15_DMA1PAD_bit at DMA1PAD.B15;
    sbit  PAD_14_DMA1PAD_bit at DMA1PAD.B14;
    sbit  PAD_13_DMA1PAD_bit at DMA1PAD.B13;
    sbit  PAD_12_DMA1PAD_bit at DMA1PAD.B12;
    sbit  PAD_11_DMA1PAD_bit at DMA1PAD.B11;
    sbit  PAD_10_DMA1PAD_bit at DMA1PAD.B10;
    sbit  PAD_9_DMA1PAD_bit at DMA1PAD.B9;
    sbit  PAD_8_DMA1PAD_bit at DMA1PAD.B8;
    sbit  PAD_7_DMA1PAD_bit at DMA1PAD.B7;
    sbit  PAD_6_DMA1PAD_bit at DMA1PAD.B6;
    sbit  PAD_5_DMA1PAD_bit at DMA1PAD.B5;
    sbit  PAD_4_DMA1PAD_bit at DMA1PAD.B4;
    sbit  PAD_3_DMA1PAD_bit at DMA1PAD.B3;
    sbit  PAD_2_DMA1PAD_bit at DMA1PAD.B2;
    sbit  PAD_1_DMA1PAD_bit at DMA1PAD.B1;
    sbit  PAD_0_DMA1PAD_bit at DMA1PAD.B0;

    // DMA1CNT bits
    sbit  CNT_13_DMA1CNT_bit at DMA1CNT.B13;
    sbit  CNT_12_DMA1CNT_bit at DMA1CNT.B12;
    sbit  CNT_11_DMA1CNT_bit at DMA1CNT.B11;
    sbit  CNT_10_DMA1CNT_bit at DMA1CNT.B10;
    sbit  CNT_9_DMA1CNT_bit at DMA1CNT.B9;
    sbit  CNT_8_DMA1CNT_bit at DMA1CNT.B8;
    sbit  CNT_7_DMA1CNT_bit at DMA1CNT.B7;
    sbit  CNT_6_DMA1CNT_bit at DMA1CNT.B6;
    sbit  CNT_5_DMA1CNT_bit at DMA1CNT.B5;
    sbit  CNT_4_DMA1CNT_bit at DMA1CNT.B4;
    sbit  CNT_3_DMA1CNT_bit at DMA1CNT.B3;
    sbit  CNT_2_DMA1CNT_bit at DMA1CNT.B2;
    sbit  CNT_1_DMA1CNT_bit at DMA1CNT.B1;
    sbit  CNT_0_DMA1CNT_bit at DMA1CNT.B0;

    // DMA2CON bits
    sbit  CHEN_DMA2CON_bit at DMA2CON.B15;
    sbit  SIZE_DMA2CON_bit at DMA2CON.B14;
    sbit  DIR__DMA2CON_bit at DMA2CON.B13;
    sbit  HALF_DMA2CON_bit at DMA2CON.B12;
    sbit  NULLW_DMA2CON_bit at DMA2CON.B11;
    sbit  AMODE_1_DMA2CON_bit at DMA2CON.B5;
    sbit  AMODE_0_DMA2CON_bit at DMA2CON.B4;
    sbit  MODE_1_DMA2CON_bit at DMA2CON.B1;
    sbit  MODE_0_DMA2CON_bit at DMA2CON.B0;

    // DMA2REQ bits
    sbit  FORCE_DMA2REQ_bit at DMA2REQ.B15;
    sbit  IRQSEL_7_DMA2REQ_bit at DMA2REQ.B7;
    sbit  IRQSEL_6_DMA2REQ_bit at DMA2REQ.B6;
    sbit  IRQSEL_5_DMA2REQ_bit at DMA2REQ.B5;
    sbit  IRQSEL_4_DMA2REQ_bit at DMA2REQ.B4;
    sbit  IRQSEL_3_DMA2REQ_bit at DMA2REQ.B3;
    sbit  IRQSEL_2_DMA2REQ_bit at DMA2REQ.B2;
    sbit  IRQSEL_1_DMA2REQ_bit at DMA2REQ.B1;
    sbit  IRQSEL_0_DMA2REQ_bit at DMA2REQ.B0;

    // DMA2STAL bits
    sbit  STA_15_DMA2STAL_bit at DMA2STAL.B15;
    sbit  STA_14_DMA2STAL_bit at DMA2STAL.B14;
    sbit  STA_13_DMA2STAL_bit at DMA2STAL.B13;
    sbit  STA_12_DMA2STAL_bit at DMA2STAL.B12;
    sbit  STA_11_DMA2STAL_bit at DMA2STAL.B11;
    sbit  STA_10_DMA2STAL_bit at DMA2STAL.B10;
    sbit  STA_9_DMA2STAL_bit at DMA2STAL.B9;
    sbit  STA_8_DMA2STAL_bit at DMA2STAL.B8;
    sbit  STA_7_DMA2STAL_bit at DMA2STAL.B7;
    sbit  STA_6_DMA2STAL_bit at DMA2STAL.B6;
    sbit  STA_5_DMA2STAL_bit at DMA2STAL.B5;
    sbit  STA_4_DMA2STAL_bit at DMA2STAL.B4;
    sbit  STA_3_DMA2STAL_bit at DMA2STAL.B3;
    sbit  STA_2_DMA2STAL_bit at DMA2STAL.B2;
    sbit  STA_1_DMA2STAL_bit at DMA2STAL.B1;
    sbit  STA_0_DMA2STAL_bit at DMA2STAL.B0;

    // DMA2STAH bits
    sbit  STA_7_DMA2STAH_bit at DMA2STAH.B7;
    sbit  STA_6_DMA2STAH_bit at DMA2STAH.B6;
    sbit  STA_5_DMA2STAH_bit at DMA2STAH.B5;
    sbit  STA_4_DMA2STAH_bit at DMA2STAH.B4;
    sbit  STA_3_DMA2STAH_bit at DMA2STAH.B3;
    sbit  STA_2_DMA2STAH_bit at DMA2STAH.B2;
    sbit  STA_1_DMA2STAH_bit at DMA2STAH.B1;
    sbit  STA_0_DMA2STAH_bit at DMA2STAH.B0;

    // DMA2STBL bits
    sbit  STB_15_DMA2STBL_bit at DMA2STBL.B15;
    sbit  STB_14_DMA2STBL_bit at DMA2STBL.B14;
    sbit  STB_13_DMA2STBL_bit at DMA2STBL.B13;
    sbit  STB_12_DMA2STBL_bit at DMA2STBL.B12;
    sbit  STB_11_DMA2STBL_bit at DMA2STBL.B11;
    sbit  STB_10_DMA2STBL_bit at DMA2STBL.B10;
    sbit  STB_9_DMA2STBL_bit at DMA2STBL.B9;
    sbit  STB_8_DMA2STBL_bit at DMA2STBL.B8;
    sbit  STB_7_DMA2STBL_bit at DMA2STBL.B7;
    sbit  STB_6_DMA2STBL_bit at DMA2STBL.B6;
    sbit  STB_5_DMA2STBL_bit at DMA2STBL.B5;
    sbit  STB_4_DMA2STBL_bit at DMA2STBL.B4;
    sbit  STB_3_DMA2STBL_bit at DMA2STBL.B3;
    sbit  STB_2_DMA2STBL_bit at DMA2STBL.B2;
    sbit  STB_1_DMA2STBL_bit at DMA2STBL.B1;
    sbit  STB_0_DMA2STBL_bit at DMA2STBL.B0;

    // DMA2STBH bits
    sbit  STB_7_DMA2STBH_bit at DMA2STBH.B7;
    sbit  STB_6_DMA2STBH_bit at DMA2STBH.B6;
    sbit  STB_5_DMA2STBH_bit at DMA2STBH.B5;
    sbit  STB_4_DMA2STBH_bit at DMA2STBH.B4;
    sbit  STB_3_DMA2STBH_bit at DMA2STBH.B3;
    sbit  STB_2_DMA2STBH_bit at DMA2STBH.B2;
    sbit  STB_1_DMA2STBH_bit at DMA2STBH.B1;
    sbit  STB_0_DMA2STBH_bit at DMA2STBH.B0;

    // DMA2PAD bits
    sbit  PAD_15_DMA2PAD_bit at DMA2PAD.B15;
    sbit  PAD_14_DMA2PAD_bit at DMA2PAD.B14;
    sbit  PAD_13_DMA2PAD_bit at DMA2PAD.B13;
    sbit  PAD_12_DMA2PAD_bit at DMA2PAD.B12;
    sbit  PAD_11_DMA2PAD_bit at DMA2PAD.B11;
    sbit  PAD_10_DMA2PAD_bit at DMA2PAD.B10;
    sbit  PAD_9_DMA2PAD_bit at DMA2PAD.B9;
    sbit  PAD_8_DMA2PAD_bit at DMA2PAD.B8;
    sbit  PAD_7_DMA2PAD_bit at DMA2PAD.B7;
    sbit  PAD_6_DMA2PAD_bit at DMA2PAD.B6;
    sbit  PAD_5_DMA2PAD_bit at DMA2PAD.B5;
    sbit  PAD_4_DMA2PAD_bit at DMA2PAD.B4;
    sbit  PAD_3_DMA2PAD_bit at DMA2PAD.B3;
    sbit  PAD_2_DMA2PAD_bit at DMA2PAD.B2;
    sbit  PAD_1_DMA2PAD_bit at DMA2PAD.B1;
    sbit  PAD_0_DMA2PAD_bit at DMA2PAD.B0;

    // DMA2CNT bits
    sbit  CNT_13_DMA2CNT_bit at DMA2CNT.B13;
    sbit  CNT_12_DMA2CNT_bit at DMA2CNT.B12;
    sbit  CNT_11_DMA2CNT_bit at DMA2CNT.B11;
    sbit  CNT_10_DMA2CNT_bit at DMA2CNT.B10;
    sbit  CNT_9_DMA2CNT_bit at DMA2CNT.B9;
    sbit  CNT_8_DMA2CNT_bit at DMA2CNT.B8;
    sbit  CNT_7_DMA2CNT_bit at DMA2CNT.B7;
    sbit  CNT_6_DMA2CNT_bit at DMA2CNT.B6;
    sbit  CNT_5_DMA2CNT_bit at DMA2CNT.B5;
    sbit  CNT_4_DMA2CNT_bit at DMA2CNT.B4;
    sbit  CNT_3_DMA2CNT_bit at DMA2CNT.B3;
    sbit  CNT_2_DMA2CNT_bit at DMA2CNT.B2;
    sbit  CNT_1_DMA2CNT_bit at DMA2CNT.B1;
    sbit  CNT_0_DMA2CNT_bit at DMA2CNT.B0;

    // DMA3CON bits
    sbit  CHEN_DMA3CON_bit at DMA3CON.B15;
    sbit  SIZE_DMA3CON_bit at DMA3CON.B14;
    sbit  DIR__DMA3CON_bit at DMA3CON.B13;
    sbit  HALF_DMA3CON_bit at DMA3CON.B12;
    sbit  NULLW_DMA3CON_bit at DMA3CON.B11;
    sbit  AMODE_1_DMA3CON_bit at DMA3CON.B5;
    sbit  AMODE_0_DMA3CON_bit at DMA3CON.B4;
    sbit  MODE_1_DMA3CON_bit at DMA3CON.B1;
    sbit  MODE_0_DMA3CON_bit at DMA3CON.B0;

    // DMA3REQ bits
    sbit  FORCE_DMA3REQ_bit at DMA3REQ.B15;
    sbit  IRQSEL_7_DMA3REQ_bit at DMA3REQ.B7;
    sbit  IRQSEL_6_DMA3REQ_bit at DMA3REQ.B6;
    sbit  IRQSEL_5_DMA3REQ_bit at DMA3REQ.B5;
    sbit  IRQSEL_4_DMA3REQ_bit at DMA3REQ.B4;
    sbit  IRQSEL_3_DMA3REQ_bit at DMA3REQ.B3;
    sbit  IRQSEL_2_DMA3REQ_bit at DMA3REQ.B2;
    sbit  IRQSEL_1_DMA3REQ_bit at DMA3REQ.B1;
    sbit  IRQSEL_0_DMA3REQ_bit at DMA3REQ.B0;

    // DMA3STAL bits
    sbit  STA_15_DMA3STAL_bit at DMA3STAL.B15;
    sbit  STA_14_DMA3STAL_bit at DMA3STAL.B14;
    sbit  STA_13_DMA3STAL_bit at DMA3STAL.B13;
    sbit  STA_12_DMA3STAL_bit at DMA3STAL.B12;
    sbit  STA_11_DMA3STAL_bit at DMA3STAL.B11;
    sbit  STA_10_DMA3STAL_bit at DMA3STAL.B10;
    sbit  STA_9_DMA3STAL_bit at DMA3STAL.B9;
    sbit  STA_8_DMA3STAL_bit at DMA3STAL.B8;
    sbit  STA_7_DMA3STAL_bit at DMA3STAL.B7;
    sbit  STA_6_DMA3STAL_bit at DMA3STAL.B6;
    sbit  STA_5_DMA3STAL_bit at DMA3STAL.B5;
    sbit  STA_4_DMA3STAL_bit at DMA3STAL.B4;
    sbit  STA_3_DMA3STAL_bit at DMA3STAL.B3;
    sbit  STA_2_DMA3STAL_bit at DMA3STAL.B2;
    sbit  STA_1_DMA3STAL_bit at DMA3STAL.B1;
    sbit  STA_0_DMA3STAL_bit at DMA3STAL.B0;

    // DMA3STAH bits
    sbit  STA_7_DMA3STAH_bit at DMA3STAH.B7;
    sbit  STA_6_DMA3STAH_bit at DMA3STAH.B6;
    sbit  STA_5_DMA3STAH_bit at DMA3STAH.B5;
    sbit  STA_4_DMA3STAH_bit at DMA3STAH.B4;
    sbit  STA_3_DMA3STAH_bit at DMA3STAH.B3;
    sbit  STA_2_DMA3STAH_bit at DMA3STAH.B2;
    sbit  STA_1_DMA3STAH_bit at DMA3STAH.B1;
    sbit  STA_0_DMA3STAH_bit at DMA3STAH.B0;

    // DMA3STBL bits
    sbit  STB_15_DMA3STBL_bit at DMA3STBL.B15;
    sbit  STB_14_DMA3STBL_bit at DMA3STBL.B14;
    sbit  STB_13_DMA3STBL_bit at DMA3STBL.B13;
    sbit  STB_12_DMA3STBL_bit at DMA3STBL.B12;
    sbit  STB_11_DMA3STBL_bit at DMA3STBL.B11;
    sbit  STB_10_DMA3STBL_bit at DMA3STBL.B10;
    sbit  STB_9_DMA3STBL_bit at DMA3STBL.B9;
    sbit  STB_8_DMA3STBL_bit at DMA3STBL.B8;
    sbit  STB_7_DMA3STBL_bit at DMA3STBL.B7;
    sbit  STB_6_DMA3STBL_bit at DMA3STBL.B6;
    sbit  STB_5_DMA3STBL_bit at DMA3STBL.B5;
    sbit  STB_4_DMA3STBL_bit at DMA3STBL.B4;
    sbit  STB_3_DMA3STBL_bit at DMA3STBL.B3;
    sbit  STB_2_DMA3STBL_bit at DMA3STBL.B2;
    sbit  STB_1_DMA3STBL_bit at DMA3STBL.B1;
    sbit  STB_0_DMA3STBL_bit at DMA3STBL.B0;

    // DMA3STBH bits
    sbit  STB_7_DMA3STBH_bit at DMA3STBH.B7;
    sbit  STB_6_DMA3STBH_bit at DMA3STBH.B6;
    sbit  STB_5_DMA3STBH_bit at DMA3STBH.B5;
    sbit  STB_4_DMA3STBH_bit at DMA3STBH.B4;
    sbit  STB_3_DMA3STBH_bit at DMA3STBH.B3;
    sbit  STB_2_DMA3STBH_bit at DMA3STBH.B2;
    sbit  STB_1_DMA3STBH_bit at DMA3STBH.B1;
    sbit  STB_0_DMA3STBH_bit at DMA3STBH.B0;

    // DMA3PAD bits
    sbit  PAD_15_DMA3PAD_bit at DMA3PAD.B15;
    sbit  PAD_14_DMA3PAD_bit at DMA3PAD.B14;
    sbit  PAD_13_DMA3PAD_bit at DMA3PAD.B13;
    sbit  PAD_12_DMA3PAD_bit at DMA3PAD.B12;
    sbit  PAD_11_DMA3PAD_bit at DMA3PAD.B11;
    sbit  PAD_10_DMA3PAD_bit at DMA3PAD.B10;
    sbit  PAD_9_DMA3PAD_bit at DMA3PAD.B9;
    sbit  PAD_8_DMA3PAD_bit at DMA3PAD.B8;
    sbit  PAD_7_DMA3PAD_bit at DMA3PAD.B7;
    sbit  PAD_6_DMA3PAD_bit at DMA3PAD.B6;
    sbit  PAD_5_DMA3PAD_bit at DMA3PAD.B5;
    sbit  PAD_4_DMA3PAD_bit at DMA3PAD.B4;
    sbit  PAD_3_DMA3PAD_bit at DMA3PAD.B3;
    sbit  PAD_2_DMA3PAD_bit at DMA3PAD.B2;
    sbit  PAD_1_DMA3PAD_bit at DMA3PAD.B1;
    sbit  PAD_0_DMA3PAD_bit at DMA3PAD.B0;

    // DMA3CNT bits
    sbit  CNT_13_DMA3CNT_bit at DMA3CNT.B13;
    sbit  CNT_12_DMA3CNT_bit at DMA3CNT.B12;
    sbit  CNT_11_DMA3CNT_bit at DMA3CNT.B11;
    sbit  CNT_10_DMA3CNT_bit at DMA3CNT.B10;
    sbit  CNT_9_DMA3CNT_bit at DMA3CNT.B9;
    sbit  CNT_8_DMA3CNT_bit at DMA3CNT.B8;
    sbit  CNT_7_DMA3CNT_bit at DMA3CNT.B7;
    sbit  CNT_6_DMA3CNT_bit at DMA3CNT.B6;
    sbit  CNT_5_DMA3CNT_bit at DMA3CNT.B5;
    sbit  CNT_4_DMA3CNT_bit at DMA3CNT.B4;
    sbit  CNT_3_DMA3CNT_bit at DMA3CNT.B3;
    sbit  CNT_2_DMA3CNT_bit at DMA3CNT.B2;
    sbit  CNT_1_DMA3CNT_bit at DMA3CNT.B1;
    sbit  CNT_0_DMA3CNT_bit at DMA3CNT.B0;

    // DMAPWC bits
    const register unsigned short int PWCOL3 = 3;
    sbit  PWCOL3_bit at DMAPWC.B3;
    const register unsigned short int PWCOL2 = 2;
    sbit  PWCOL2_bit at DMAPWC.B2;
    const register unsigned short int PWCOL1 = 1;
    sbit  PWCOL1_bit at DMAPWC.B1;
    const register unsigned short int PWCOL0 = 0;
    sbit  PWCOL0_bit at DMAPWC.B0;

    // DMARQC bits
    const register unsigned short int RQCOL3 = 3;
    sbit  RQCOL3_bit at DMARQC.B3;
    const register unsigned short int RQCOL2 = 2;
    sbit  RQCOL2_bit at DMARQC.B2;
    const register unsigned short int RQCOL1 = 1;
    sbit  RQCOL1_bit at DMARQC.B1;
    const register unsigned short int RQCOL0 = 0;
    sbit  RQCOL0_bit at DMARQC.B0;

    // DMAPPS bits
    const register unsigned short int PPST3 = 3;
    sbit  PPST3_bit at DMAPPS.B3;
    const register unsigned short int PPST2 = 2;
    sbit  PPST2_bit at DMAPPS.B2;
    const register unsigned short int PPST1 = 1;
    sbit  PPST1_bit at DMAPPS.B1;
    const register unsigned short int PPST0 = 0;
    sbit  PPST0_bit at DMAPPS.B0;

    // DMALCA bits
    const register unsigned short int LSTCH_3 = 3;
    sbit  LSTCH_3_bit at DMALCA.B3;
    const register unsigned short int LSTCH_2 = 2;
    sbit  LSTCH_2_bit at DMALCA.B2;
    const register unsigned short int LSTCH_1 = 1;
    sbit  LSTCH_1_bit at DMALCA.B1;
    const register unsigned short int LSTCH_0 = 0;
    sbit  LSTCH_0_bit at DMALCA.B0;

    // DSADRL bits
    const register unsigned short int DSADR_15 = 15;
    sbit  DSADR_15_bit at DSADRL.B15;
    const register unsigned short int DSADR_14 = 14;
    sbit  DSADR_14_bit at DSADRL.B14;
    const register unsigned short int DSADR_13 = 13;
    sbit  DSADR_13_bit at DSADRL.B13;
    const register unsigned short int DSADR_12 = 12;
    sbit  DSADR_12_bit at DSADRL.B12;
    const register unsigned short int DSADR_11 = 11;
    sbit  DSADR_11_bit at DSADRL.B11;
    const register unsigned short int DSADR_10 = 10;
    sbit  DSADR_10_bit at DSADRL.B10;
    const register unsigned short int DSADR_9 = 9;
    sbit  DSADR_9_bit at DSADRL.B9;
    const register unsigned short int DSADR_8 = 8;
    sbit  DSADR_8_bit at DSADRL.B8;
    const register unsigned short int DSADR_7 = 7;
    sbit  DSADR_7_bit at DSADRL.B7;
    sbit  DSADR_7_DSADRL_bit at DSADRL.B7;
    const register unsigned short int DSADR_6 = 6;
    sbit  DSADR_6_bit at DSADRL.B6;
    sbit  DSADR_6_DSADRL_bit at DSADRL.B6;
    const register unsigned short int DSADR_5 = 5;
    sbit  DSADR_5_bit at DSADRL.B5;
    sbit  DSADR_5_DSADRL_bit at DSADRL.B5;
    const register unsigned short int DSADR_4 = 4;
    sbit  DSADR_4_bit at DSADRL.B4;
    sbit  DSADR_4_DSADRL_bit at DSADRL.B4;
    const register unsigned short int DSADR_3 = 3;
    sbit  DSADR_3_bit at DSADRL.B3;
    sbit  DSADR_3_DSADRL_bit at DSADRL.B3;
    const register unsigned short int DSADR_2 = 2;
    sbit  DSADR_2_bit at DSADRL.B2;
    sbit  DSADR_2_DSADRL_bit at DSADRL.B2;
    const register unsigned short int DSADR_1 = 1;
    sbit  DSADR_1_bit at DSADRL.B1;
    sbit  DSADR_1_DSADRL_bit at DSADRL.B1;
    const register unsigned short int DSADR_0 = 0;
    sbit  DSADR_0_bit at DSADRL.B0;
    sbit  DSADR_0_DSADRL_bit at DSADRL.B0;

    // DSADRH bits
    sbit  DSADR_7_DSADRH_bit at DSADRH.B7;
    sbit  DSADR_6_DSADRH_bit at DSADRH.B6;
    sbit  DSADR_5_DSADRH_bit at DSADRH.B5;
    sbit  DSADR_4_DSADRH_bit at DSADRH.B4;
    sbit  DSADR_3_DSADRH_bit at DSADRH.B3;
    sbit  DSADR_2_DSADRH_bit at DSADRH.B2;
    sbit  DSADR_1_DSADRH_bit at DSADRH.B1;
    sbit  DSADR_0_DSADRH_bit at DSADRH.B0;

    // TRISA bits
    const register unsigned short int TRISA12 = 12;
    sbit  TRISA12_bit at TRISA.B12;
    const register unsigned short int TRISA11 = 11;
    sbit  TRISA11_bit at TRISA.B11;
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;
    const register unsigned short int TRISA8 = 8;
    sbit  TRISA8_bit at TRISA.B8;
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA4 = 4;
    sbit  TRISA4_bit at TRISA.B4;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;

    // PORTA bits
    const register unsigned short int RA12 = 12;
    sbit  RA12_bit at PORTA.B12;
    const register unsigned short int RA11 = 11;
    sbit  RA11_bit at PORTA.B11;
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;
    const register unsigned short int RA8 = 8;
    sbit  RA8_bit at PORTA.B8;
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA4 = 4;
    sbit  RA4_bit at PORTA.B4;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;

    // LATA bits
    const register unsigned short int LATA12 = 12;
    sbit  LATA12_bit at LATA.B12;
    const register unsigned short int LATA11 = 11;
    sbit  LATA11_bit at LATA.B11;
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;
    const register unsigned short int LATA8 = 8;
    sbit  LATA8_bit at LATA.B8;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;

    // ODCA bits
    const register unsigned short int ODCA12 = 12;
    sbit  ODCA12_bit at ODCA.B12;
    const register unsigned short int ODCA11 = 11;
    sbit  ODCA11_bit at ODCA.B11;
    const register unsigned short int ODCA10 = 10;
    sbit  ODCA10_bit at ODCA.B10;
    const register unsigned short int ODCA9 = 9;
    sbit  ODCA9_bit at ODCA.B9;
    const register unsigned short int ODCA8 = 8;
    sbit  ODCA8_bit at ODCA.B8;
    const register unsigned short int ODCA7 = 7;
    sbit  ODCA7_bit at ODCA.B7;
    const register unsigned short int ODCA4 = 4;
    sbit  ODCA4_bit at ODCA.B4;
    const register unsigned short int ODCA1 = 1;
    sbit  ODCA1_bit at ODCA.B1;
    const register unsigned short int ODCA0 = 0;
    sbit  ODCA0_bit at ODCA.B0;

    // CNENA bits
    const register unsigned short int CNIEA12 = 12;
    sbit  CNIEA12_bit at CNENA.B12;
    const register unsigned short int CNIEA11 = 11;
    sbit  CNIEA11_bit at CNENA.B11;
    const register unsigned short int CNIEA10 = 10;
    sbit  CNIEA10_bit at CNENA.B10;
    const register unsigned short int CNIEA9 = 9;
    sbit  CNIEA9_bit at CNENA.B9;
    const register unsigned short int CNIEA8 = 8;
    sbit  CNIEA8_bit at CNENA.B8;
    const register unsigned short int CNIEA7 = 7;
    sbit  CNIEA7_bit at CNENA.B7;
    const register unsigned short int CNIEA4 = 4;
    sbit  CNIEA4_bit at CNENA.B4;
    const register unsigned short int CNIEA1 = 1;
    sbit  CNIEA1_bit at CNENA.B1;
    const register unsigned short int CNIEA0 = 0;
    sbit  CNIEA0_bit at CNENA.B0;

    // CNPUA bits
    const register unsigned short int CNPUA12 = 12;
    sbit  CNPUA12_bit at CNPUA.B12;
    const register unsigned short int CNPUA11 = 11;
    sbit  CNPUA11_bit at CNPUA.B11;
    const register unsigned short int CNPUA10 = 10;
    sbit  CNPUA10_bit at CNPUA.B10;
    const register unsigned short int CNPUA9 = 9;
    sbit  CNPUA9_bit at CNPUA.B9;
    const register unsigned short int CNPUA8 = 8;
    sbit  CNPUA8_bit at CNPUA.B8;
    const register unsigned short int CNPUA7 = 7;
    sbit  CNPUA7_bit at CNPUA.B7;
    const register unsigned short int CNPUA4 = 4;
    sbit  CNPUA4_bit at CNPUA.B4;
    const register unsigned short int CNPUA1 = 1;
    sbit  CNPUA1_bit at CNPUA.B1;
    const register unsigned short int CNPUA0 = 0;
    sbit  CNPUA0_bit at CNPUA.B0;

    // CNPDA bits
    const register unsigned short int CNPDA12 = 12;
    sbit  CNPDA12_bit at CNPDA.B12;
    const register unsigned short int CNPDA11 = 11;
    sbit  CNPDA11_bit at CNPDA.B11;
    const register unsigned short int CNPDA10 = 10;
    sbit  CNPDA10_bit at CNPDA.B10;
    const register unsigned short int CNPDA9 = 9;
    sbit  CNPDA9_bit at CNPDA.B9;
    const register unsigned short int CNPDA8 = 8;
    sbit  CNPDA8_bit at CNPDA.B8;
    const register unsigned short int CNPDA7 = 7;
    sbit  CNPDA7_bit at CNPDA.B7;
    const register unsigned short int CNPDA4 = 4;
    sbit  CNPDA4_bit at CNPDA.B4;
    const register unsigned short int CNPDA1 = 1;
    sbit  CNPDA1_bit at CNPDA.B1;
    const register unsigned short int CNPDA0 = 0;
    sbit  CNPDA0_bit at CNPDA.B0;

    // ANSELA bits
    const register unsigned short int ANSA12 = 12;
    sbit  ANSA12_bit at ANSELA.B12;
    const register unsigned short int ANSA11 = 11;
    sbit  ANSA11_bit at ANSELA.B11;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;

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

    // ODCB bits
    const register unsigned short int ODCB15 = 15;
    sbit  ODCB15_bit at ODCB.B15;
    const register unsigned short int ODCB14 = 14;
    sbit  ODCB14_bit at ODCB.B14;
    const register unsigned short int ODCB13 = 13;
    sbit  ODCB13_bit at ODCB.B13;
    const register unsigned short int ODCB12 = 12;
    sbit  ODCB12_bit at ODCB.B12;
    const register unsigned short int ODCB11 = 11;
    sbit  ODCB11_bit at ODCB.B11;
    const register unsigned short int ODCB10 = 10;
    sbit  ODCB10_bit at ODCB.B10;
    const register unsigned short int ODCB9 = 9;
    sbit  ODCB9_bit at ODCB.B9;
    const register unsigned short int ODCB8 = 8;
    sbit  ODCB8_bit at ODCB.B8;
    const register unsigned short int ODCB7 = 7;
    sbit  ODCB7_bit at ODCB.B7;
    const register unsigned short int ODCB6 = 6;
    sbit  ODCB6_bit at ODCB.B6;
    const register unsigned short int ODCB5 = 5;
    sbit  ODCB5_bit at ODCB.B5;
    const register unsigned short int ODCB4 = 4;
    sbit  ODCB4_bit at ODCB.B4;
    const register unsigned short int ODCB3 = 3;
    sbit  ODCB3_bit at ODCB.B3;
    const register unsigned short int ODCB2 = 2;
    sbit  ODCB2_bit at ODCB.B2;
    const register unsigned short int ODCB1 = 1;
    sbit  ODCB1_bit at ODCB.B1;
    const register unsigned short int ODCB0 = 0;
    sbit  ODCB0_bit at ODCB.B0;

    // CNENB bits
    const register unsigned short int CNIEB15 = 15;
    sbit  CNIEB15_bit at CNENB.B15;
    const register unsigned short int CNIEB14 = 14;
    sbit  CNIEB14_bit at CNENB.B14;
    const register unsigned short int CNIEB13 = 13;
    sbit  CNIEB13_bit at CNENB.B13;
    const register unsigned short int CNIEB12 = 12;
    sbit  CNIEB12_bit at CNENB.B12;
    const register unsigned short int CNIEB11 = 11;
    sbit  CNIEB11_bit at CNENB.B11;
    const register unsigned short int CNIEB10 = 10;
    sbit  CNIEB10_bit at CNENB.B10;
    const register unsigned short int CNIEB9 = 9;
    sbit  CNIEB9_bit at CNENB.B9;
    const register unsigned short int CNIEB8 = 8;
    sbit  CNIEB8_bit at CNENB.B8;
    const register unsigned short int CNIEB7 = 7;
    sbit  CNIEB7_bit at CNENB.B7;
    const register unsigned short int CNIEB6 = 6;
    sbit  CNIEB6_bit at CNENB.B6;
    const register unsigned short int CNIEB5 = 5;
    sbit  CNIEB5_bit at CNENB.B5;
    const register unsigned short int CNIEB4 = 4;
    sbit  CNIEB4_bit at CNENB.B4;
    const register unsigned short int CNIEB3 = 3;
    sbit  CNIEB3_bit at CNENB.B3;
    const register unsigned short int CNIEB2 = 2;
    sbit  CNIEB2_bit at CNENB.B2;
    const register unsigned short int CNIEB1 = 1;
    sbit  CNIEB1_bit at CNENB.B1;
    const register unsigned short int CNIEB0 = 0;
    sbit  CNIEB0_bit at CNENB.B0;

    // CNPUB bits
    const register unsigned short int CNPUB15 = 15;
    sbit  CNPUB15_bit at CNPUB.B15;
    const register unsigned short int CNPUB14 = 14;
    sbit  CNPUB14_bit at CNPUB.B14;
    const register unsigned short int CNPUB13 = 13;
    sbit  CNPUB13_bit at CNPUB.B13;
    const register unsigned short int CNPUB12 = 12;
    sbit  CNPUB12_bit at CNPUB.B12;
    const register unsigned short int CNPUB11 = 11;
    sbit  CNPUB11_bit at CNPUB.B11;
    const register unsigned short int CNPUB10 = 10;
    sbit  CNPUB10_bit at CNPUB.B10;
    const register unsigned short int CNPUB9 = 9;
    sbit  CNPUB9_bit at CNPUB.B9;
    const register unsigned short int CNPUB8 = 8;
    sbit  CNPUB8_bit at CNPUB.B8;
    const register unsigned short int CNPUB7 = 7;
    sbit  CNPUB7_bit at CNPUB.B7;
    const register unsigned short int CNPUB6 = 6;
    sbit  CNPUB6_bit at CNPUB.B6;
    const register unsigned short int CNPUB5 = 5;
    sbit  CNPUB5_bit at CNPUB.B5;
    const register unsigned short int CNPUB4 = 4;
    sbit  CNPUB4_bit at CNPUB.B4;
    const register unsigned short int CNPUB3 = 3;
    sbit  CNPUB3_bit at CNPUB.B3;
    const register unsigned short int CNPUB2 = 2;
    sbit  CNPUB2_bit at CNPUB.B2;
    const register unsigned short int CNPUB1 = 1;
    sbit  CNPUB1_bit at CNPUB.B1;
    const register unsigned short int CNPUB0 = 0;
    sbit  CNPUB0_bit at CNPUB.B0;

    // CNPDB bits
    const register unsigned short int CNPDB15 = 15;
    sbit  CNPDB15_bit at CNPDB.B15;
    const register unsigned short int CNPDB14 = 14;
    sbit  CNPDB14_bit at CNPDB.B14;
    const register unsigned short int CNPDB13 = 13;
    sbit  CNPDB13_bit at CNPDB.B13;
    const register unsigned short int CNPDB12 = 12;
    sbit  CNPDB12_bit at CNPDB.B12;
    const register unsigned short int CNPDB11 = 11;
    sbit  CNPDB11_bit at CNPDB.B11;
    const register unsigned short int CNPDB10 = 10;
    sbit  CNPDB10_bit at CNPDB.B10;
    const register unsigned short int CNPDB9 = 9;
    sbit  CNPDB9_bit at CNPDB.B9;
    const register unsigned short int CNPDB8 = 8;
    sbit  CNPDB8_bit at CNPDB.B8;
    const register unsigned short int CNPDB7 = 7;
    sbit  CNPDB7_bit at CNPDB.B7;
    const register unsigned short int CNPDB6 = 6;
    sbit  CNPDB6_bit at CNPDB.B6;
    const register unsigned short int CNPDB5 = 5;
    sbit  CNPDB5_bit at CNPDB.B5;
    const register unsigned short int CNPDB4 = 4;
    sbit  CNPDB4_bit at CNPDB.B4;
    const register unsigned short int CNPDB3 = 3;
    sbit  CNPDB3_bit at CNPDB.B3;
    const register unsigned short int CNPDB2 = 2;
    sbit  CNPDB2_bit at CNPDB.B2;
    const register unsigned short int CNPDB1 = 1;
    sbit  CNPDB1_bit at CNPDB.B1;
    const register unsigned short int CNPDB0 = 0;
    sbit  CNPDB0_bit at CNPDB.B0;

    // ANSELB bits
    const register unsigned short int ANSB8 = 8;
    sbit  ANSB8_bit at ANSELB.B8;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSELB.B3;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSELB.B2;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSELB.B1;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSELB.B0;

    // TRISC bits
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC11 = 11;
    sbit  TRISC11_bit at TRISC.B11;
    const register unsigned short int TRISC10 = 10;
    sbit  TRISC10_bit at TRISC.B10;
    const register unsigned short int TRISC9 = 9;
    sbit  TRISC9_bit at TRISC.B9;
    const register unsigned short int TRISC8 = 8;
    sbit  TRISC8_bit at TRISC.B8;
    const register unsigned short int TRISC7 = 7;
    sbit  TRISC7_bit at TRISC.B7;
    const register unsigned short int TRISC6 = 6;
    sbit  TRISC6_bit at TRISC.B6;
    const register unsigned short int TRISC5 = 5;
    sbit  TRISC5_bit at TRISC.B5;
    const register unsigned short int TRISC4 = 4;
    sbit  TRISC4_bit at TRISC.B4;
    const register unsigned short int TRISC3 = 3;
    sbit  TRISC3_bit at TRISC.B3;
    const register unsigned short int TRISC2 = 2;
    sbit  TRISC2_bit at TRISC.B2;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;
    const register unsigned short int TRISC0 = 0;
    sbit  TRISC0_bit at TRISC.B0;

    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC11 = 11;
    sbit  RC11_bit at PORTC.B11;
    const register unsigned short int RC10 = 10;
    sbit  RC10_bit at PORTC.B10;
    const register unsigned short int RC9 = 9;
    sbit  RC9_bit at PORTC.B9;
    const register unsigned short int RC8 = 8;
    sbit  RC8_bit at PORTC.B8;
    const register unsigned short int RC7 = 7;
    sbit  RC7_bit at PORTC.B7;
    const register unsigned short int RC6 = 6;
    sbit  RC6_bit at PORTC.B6;
    const register unsigned short int RC5 = 5;
    sbit  RC5_bit at PORTC.B5;
    const register unsigned short int RC4 = 4;
    sbit  RC4_bit at PORTC.B4;
    const register unsigned short int RC3 = 3;
    sbit  RC3_bit at PORTC.B3;
    const register unsigned short int RC2 = 2;
    sbit  RC2_bit at PORTC.B2;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;
    const register unsigned short int RC0 = 0;
    sbit  RC0_bit at PORTC.B0;

    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC11 = 11;
    sbit  LATC11_bit at LATC.B11;
    const register unsigned short int LATC10 = 10;
    sbit  LATC10_bit at LATC.B10;
    const register unsigned short int LATC9 = 9;
    sbit  LATC9_bit at LATC.B9;
    const register unsigned short int LATC8 = 8;
    sbit  LATC8_bit at LATC.B8;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;
    const register unsigned short int LATC0 = 0;
    sbit  LATC0_bit at LATC.B0;

    // ODCC bits
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;
    const register unsigned short int ODCC13 = 13;
    sbit  ODCC13_bit at ODCC.B13;
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;
    const register unsigned short int ODCC11 = 11;
    sbit  ODCC11_bit at ODCC.B11;
    const register unsigned short int ODCC10 = 10;
    sbit  ODCC10_bit at ODCC.B10;
    const register unsigned short int ODCC9 = 9;
    sbit  ODCC9_bit at ODCC.B9;
    const register unsigned short int ODCC8 = 8;
    sbit  ODCC8_bit at ODCC.B8;
    const register unsigned short int ODCC7 = 7;
    sbit  ODCC7_bit at ODCC.B7;
    const register unsigned short int ODCC6 = 6;
    sbit  ODCC6_bit at ODCC.B6;
    const register unsigned short int ODCC5 = 5;
    sbit  ODCC5_bit at ODCC.B5;
    const register unsigned short int ODCC4 = 4;
    sbit  ODCC4_bit at ODCC.B4;
    const register unsigned short int ODCC3 = 3;
    sbit  ODCC3_bit at ODCC.B3;
    const register unsigned short int ODCC2 = 2;
    sbit  ODCC2_bit at ODCC.B2;
    const register unsigned short int ODCC1 = 1;
    sbit  ODCC1_bit at ODCC.B1;
    const register unsigned short int ODCC0 = 0;
    sbit  ODCC0_bit at ODCC.B0;

    // CNENC bits
    const register unsigned short int CNIEC15 = 15;
    sbit  CNIEC15_bit at CNENC.B15;
    const register unsigned short int CNIEC13 = 13;
    sbit  CNIEC13_bit at CNENC.B13;
    const register unsigned short int CNIEC12 = 12;
    sbit  CNIEC12_bit at CNENC.B12;
    const register unsigned short int CNIEC11 = 11;
    sbit  CNIEC11_bit at CNENC.B11;
    const register unsigned short int CNIEC10 = 10;
    sbit  CNIEC10_bit at CNENC.B10;
    const register unsigned short int CNIEC9 = 9;
    sbit  CNIEC9_bit at CNENC.B9;
    const register unsigned short int CNIEC8 = 8;
    sbit  CNIEC8_bit at CNENC.B8;
    const register unsigned short int CNIEC7 = 7;
    sbit  CNIEC7_bit at CNENC.B7;
    const register unsigned short int CNIEC6 = 6;
    sbit  CNIEC6_bit at CNENC.B6;
    const register unsigned short int CNIEC5 = 5;
    sbit  CNIEC5_bit at CNENC.B5;
    const register unsigned short int CNIEC4 = 4;
    sbit  CNIEC4_bit at CNENC.B4;
    const register unsigned short int CNIEC3 = 3;
    sbit  CNIEC3_bit at CNENC.B3;
    const register unsigned short int CNIEC2 = 2;
    sbit  CNIEC2_bit at CNENC.B2;
    const register unsigned short int CNIEC1 = 1;
    sbit  CNIEC1_bit at CNENC.B1;
    const register unsigned short int CNIEC0 = 0;
    sbit  CNIEC0_bit at CNENC.B0;

    // CNPUC bits
    const register unsigned short int CNPUC15 = 15;
    sbit  CNPUC15_bit at CNPUC.B15;
    const register unsigned short int CNPUC13 = 13;
    sbit  CNPUC13_bit at CNPUC.B13;
    const register unsigned short int CNPUC12 = 12;
    sbit  CNPUC12_bit at CNPUC.B12;
    const register unsigned short int CNPUC11 = 11;
    sbit  CNPUC11_bit at CNPUC.B11;
    const register unsigned short int CNPUC10 = 10;
    sbit  CNPUC10_bit at CNPUC.B10;
    const register unsigned short int CNPUC9 = 9;
    sbit  CNPUC9_bit at CNPUC.B9;
    const register unsigned short int CNPUC8 = 8;
    sbit  CNPUC8_bit at CNPUC.B8;
    const register unsigned short int CNPUC7 = 7;
    sbit  CNPUC7_bit at CNPUC.B7;
    const register unsigned short int CNPUC6 = 6;
    sbit  CNPUC6_bit at CNPUC.B6;
    const register unsigned short int CNPUC5 = 5;
    sbit  CNPUC5_bit at CNPUC.B5;
    const register unsigned short int CNPUC4 = 4;
    sbit  CNPUC4_bit at CNPUC.B4;
    const register unsigned short int CNPUC3 = 3;
    sbit  CNPUC3_bit at CNPUC.B3;
    const register unsigned short int CNPUC2 = 2;
    sbit  CNPUC2_bit at CNPUC.B2;
    const register unsigned short int CNPUC1 = 1;
    sbit  CNPUC1_bit at CNPUC.B1;
    const register unsigned short int CNPUC0 = 0;
    sbit  CNPUC0_bit at CNPUC.B0;

    // CNPDC bits
    const register unsigned short int CNPDC15 = 15;
    sbit  CNPDC15_bit at CNPDC.B15;
    const register unsigned short int CNPDC13 = 13;
    sbit  CNPDC13_bit at CNPDC.B13;
    const register unsigned short int CNPDC12 = 12;
    sbit  CNPDC12_bit at CNPDC.B12;
    const register unsigned short int CNPDC11 = 11;
    sbit  CNPDC11_bit at CNPDC.B11;
    const register unsigned short int CNPDC10 = 10;
    sbit  CNPDC10_bit at CNPDC.B10;
    const register unsigned short int CNPDC9 = 9;
    sbit  CNPDC9_bit at CNPDC.B9;
    const register unsigned short int CNPDC8 = 8;
    sbit  CNPDC8_bit at CNPDC.B8;
    const register unsigned short int CNPDC7 = 7;
    sbit  CNPDC7_bit at CNPDC.B7;
    const register unsigned short int CNPDC6 = 6;
    sbit  CNPDC6_bit at CNPDC.B6;
    const register unsigned short int CNPDC5 = 5;
    sbit  CNPDC5_bit at CNPDC.B5;
    const register unsigned short int CNPDC4 = 4;
    sbit  CNPDC4_bit at CNPDC.B4;
    const register unsigned short int CNPDC3 = 3;
    sbit  CNPDC3_bit at CNPDC.B3;
    const register unsigned short int CNPDC2 = 2;
    sbit  CNPDC2_bit at CNPDC.B2;
    const register unsigned short int CNPDC1 = 1;
    sbit  CNPDC1_bit at CNPDC.B1;
    const register unsigned short int CNPDC0 = 0;
    sbit  CNPDC0_bit at CNPDC.B0;

    // ANSELC bits
    const register unsigned short int ANSC11 = 11;
    sbit  ANSC11_bit at ANSELC.B11;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;

    // TRISD bits
    const register unsigned short int TRISD8 = 8;
    sbit  TRISD8_bit at TRISD.B8;
    const register unsigned short int TRISD6 = 6;
    sbit  TRISD6_bit at TRISD.B6;
    const register unsigned short int TRISD5 = 5;
    sbit  TRISD5_bit at TRISD.B5;

    // PORTD bits
    const register unsigned short int RD8 = 8;
    sbit  RD8_bit at PORTD.B8;
    const register unsigned short int RD6 = 6;
    sbit  RD6_bit at PORTD.B6;
    const register unsigned short int RD5 = 5;
    sbit  RD5_bit at PORTD.B5;

    // LATD bits
    const register unsigned short int LATD8 = 8;
    sbit  LATD8_bit at LATD.B8;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;

    // ODCD bits
    const register unsigned short int ODCD8 = 8;
    sbit  ODCD8_bit at ODCD.B8;
    const register unsigned short int ODCD6 = 6;
    sbit  ODCD6_bit at ODCD.B6;
    const register unsigned short int ODCD5 = 5;
    sbit  ODCD5_bit at ODCD.B5;

    // CNEND bits
    const register unsigned short int CNIED8 = 8;
    sbit  CNIED8_bit at CNEND.B8;
    const register unsigned short int CNIED6 = 6;
    sbit  CNIED6_bit at CNEND.B6;
    const register unsigned short int CNIED5 = 5;
    sbit  CNIED5_bit at CNEND.B5;

    // CNPUD bits
    const register unsigned short int CNPUD8 = 8;
    sbit  CNPUD8_bit at CNPUD.B8;
    const register unsigned short int CNPUD6 = 6;
    sbit  CNPUD6_bit at CNPUD.B6;
    const register unsigned short int CNPUD5 = 5;
    sbit  CNPUD5_bit at CNPUD.B5;

    // CNPDD bits
    const register unsigned short int CNPDD8 = 8;
    sbit  CNPDD8_bit at CNPDD.B8;
    const register unsigned short int CNPDD6 = 6;
    sbit  CNPDD6_bit at CNPDD.B6;
    const register unsigned short int CNPDD5 = 5;
    sbit  CNPDD5_bit at CNPDD.B5;

    // TRISE bits
    const register unsigned short int TRISE15 = 15;
    sbit  TRISE15_bit at TRISE.B15;
    const register unsigned short int TRISE14 = 14;
    sbit  TRISE14_bit at TRISE.B14;
    const register unsigned short int TRISE13 = 13;
    sbit  TRISE13_bit at TRISE.B13;
    const register unsigned short int TRISE12 = 12;
    sbit  TRISE12_bit at TRISE.B12;

    // PORTE bits
    const register unsigned short int RE15 = 15;
    sbit  RE15_bit at PORTE.B15;
    const register unsigned short int RE14 = 14;
    sbit  RE14_bit at PORTE.B14;
    const register unsigned short int RE13 = 13;
    sbit  RE13_bit at PORTE.B13;
    const register unsigned short int RE12 = 12;
    sbit  RE12_bit at PORTE.B12;

    // LATE bits
    const register unsigned short int LATE15 = 15;
    sbit  LATE15_bit at LATE.B15;
    const register unsigned short int LATE14 = 14;
    sbit  LATE14_bit at LATE.B14;
    const register unsigned short int LATE13 = 13;
    sbit  LATE13_bit at LATE.B13;
    const register unsigned short int LATE12 = 12;
    sbit  LATE12_bit at LATE.B12;

    // ODCE bits
    const register unsigned short int ODCE15 = 15;
    sbit  ODCE15_bit at ODCE.B15;
    const register unsigned short int ODCE14 = 14;
    sbit  ODCE14_bit at ODCE.B14;
    const register unsigned short int ODCE13 = 13;
    sbit  ODCE13_bit at ODCE.B13;
    const register unsigned short int ODCE12 = 12;
    sbit  ODCE12_bit at ODCE.B12;

    // CNENE bits
    const register unsigned short int CNIEE15 = 15;
    sbit  CNIEE15_bit at CNENE.B15;
    const register unsigned short int CNIEE14 = 14;
    sbit  CNIEE14_bit at CNENE.B14;
    const register unsigned short int CNIEE13 = 13;
    sbit  CNIEE13_bit at CNENE.B13;
    const register unsigned short int CNIEE12 = 12;
    sbit  CNIEE12_bit at CNENE.B12;

    // CNPUE bits
    const register unsigned short int CNPUE15 = 15;
    sbit  CNPUE15_bit at CNPUE.B15;
    const register unsigned short int CNPUE14 = 14;
    sbit  CNPUE14_bit at CNPUE.B14;
    const register unsigned short int CNPUE13 = 13;
    sbit  CNPUE13_bit at CNPUE.B13;
    const register unsigned short int CNPUE12 = 12;
    sbit  CNPUE12_bit at CNPUE.B12;

    // CNPDE bits
    const register unsigned short int CNPDE15 = 15;
    sbit  CNPDE15_bit at CNPDE.B15;
    const register unsigned short int CNPDE14 = 14;
    sbit  CNPDE14_bit at CNPDE.B14;
    const register unsigned short int CNPDE13 = 13;
    sbit  CNPDE13_bit at CNPDE.B13;
    const register unsigned short int CNPDE12 = 12;
    sbit  CNPDE12_bit at CNPDE.B12;

    // ANSELE bits
    const register unsigned short int ANSE15 = 15;
    sbit  ANSE15_bit at ANSELE.B15;
    const register unsigned short int ANSE14 = 14;
    sbit  ANSE14_bit at ANSELE.B14;
    const register unsigned short int ANSE13 = 13;
    sbit  ANSE13_bit at ANSELE.B13;
    const register unsigned short int ANSE12 = 12;
    sbit  ANSE12_bit at ANSELE.B12;

    // TRISF bits
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // PORTF bits
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // LATF bits
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;

    // ODCF bits
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;

    // CNENF bits
    const register unsigned short int CNIEF1 = 1;
    sbit  CNIEF1_bit at CNENF.B1;
    const register unsigned short int CNIEF0 = 0;
    sbit  CNIEF0_bit at CNENF.B0;

    // CNPUF bits
    const register unsigned short int CNPUF1 = 1;
    sbit  CNPUF1_bit at CNPUF.B1;
    const register unsigned short int CNPUF0 = 0;
    sbit  CNPUF0_bit at CNPUF.B0;

    // CNPDF bits
    const register unsigned short int CNPDF1 = 1;
    sbit  CNPDF1_bit at CNPDF.B1;
    const register unsigned short int CNPDF0 = 0;
    sbit  CNPDF0_bit at CNPDF.B0;

    // TRISG bits
    const register unsigned short int TRISG9 = 9;
    sbit  TRISG9_bit at TRISG.B9;
    const register unsigned short int TRISG8 = 8;
    sbit  TRISG8_bit at TRISG.B8;
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;

    // PORTG bits
    const register unsigned short int RG9 = 9;
    sbit  RG9_bit at PORTG.B9;
    const register unsigned short int RG8 = 8;
    sbit  RG8_bit at PORTG.B8;
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;

    // LATG bits
    const register unsigned short int LATG9 = 9;
    sbit  LATG9_bit at LATG.B9;
    const register unsigned short int LATG8 = 8;
    sbit  LATG8_bit at LATG.B8;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;

    // ODCG bits
    const register unsigned short int ODCG9 = 9;
    sbit  ODCG9_bit at ODCG.B9;
    const register unsigned short int ODCG8 = 8;
    sbit  ODCG8_bit at ODCG.B8;
    const register unsigned short int ODCG7 = 7;
    sbit  ODCG7_bit at ODCG.B7;
    const register unsigned short int ODCG6 = 6;
    sbit  ODCG6_bit at ODCG.B6;

    // CNENG bits
    const register unsigned short int CNIEG9 = 9;
    sbit  CNIEG9_bit at CNENG.B9;
    const register unsigned short int CNIEG8 = 8;
    sbit  CNIEG8_bit at CNENG.B8;
    const register unsigned short int CNIEG7 = 7;
    sbit  CNIEG7_bit at CNENG.B7;
    const register unsigned short int CNIEG6 = 6;
    sbit  CNIEG6_bit at CNENG.B6;

    // CNPUG bits
    const register unsigned short int CNPUG9 = 9;
    sbit  CNPUG9_bit at CNPUG.B9;
    const register unsigned short int CNPUG8 = 8;
    sbit  CNPUG8_bit at CNPUG.B8;
    const register unsigned short int CNPUG7 = 7;
    sbit  CNPUG7_bit at CNPUG.B7;
    const register unsigned short int CNPUG6 = 6;
    sbit  CNPUG6_bit at CNPUG.B6;

    // CNPDG bits
    const register unsigned short int CNPDG9 = 9;
    sbit  CNPDG9_bit at CNPDG.B9;
    const register unsigned short int CNPDG8 = 8;
    sbit  CNPDG8_bit at CNPDG.B8;
    const register unsigned short int CNPDG7 = 7;
    sbit  CNPDG7_bit at CNPDG.B7;
    const register unsigned short int CNPDG6 = 6;
    sbit  CNPDG6_bit at CNPDG.B6;

    // FEXL bits
    const register unsigned short int FEXL_15 = 15;
    sbit  FEXL_15_bit at FEXL.B15;
    const register unsigned short int FEXL_14 = 14;
    sbit  FEXL_14_bit at FEXL.B14;
    const register unsigned short int FEXL_13 = 13;
    sbit  FEXL_13_bit at FEXL.B13;
    const register unsigned short int FEXL_12 = 12;
    sbit  FEXL_12_bit at FEXL.B12;
    const register unsigned short int FEXL_11 = 11;
    sbit  FEXL_11_bit at FEXL.B11;
    const register unsigned short int FEXL_10 = 10;
    sbit  FEXL_10_bit at FEXL.B10;
    const register unsigned short int FEXL_9 = 9;
    sbit  FEXL_9_bit at FEXL.B9;
    const register unsigned short int FEXL_8 = 8;
    sbit  FEXL_8_bit at FEXL.B8;
    const register unsigned short int FEXL_7 = 7;
    sbit  FEXL_7_bit at FEXL.B7;
    const register unsigned short int FEXL_6 = 6;
    sbit  FEXL_6_bit at FEXL.B6;
    const register unsigned short int FEXL_5 = 5;
    sbit  FEXL_5_bit at FEXL.B5;
    const register unsigned short int FEXL_4 = 4;
    sbit  FEXL_4_bit at FEXL.B4;
    const register unsigned short int FEXL_3 = 3;
    sbit  FEXL_3_bit at FEXL.B3;
    const register unsigned short int FEXL_2 = 2;
    sbit  FEXL_2_bit at FEXL.B2;
    const register unsigned short int FEXL_1 = 1;
    sbit  FEXL_1_bit at FEXL.B1;
    const register unsigned short int FEXL_0 = 0;
    sbit  FEXL_0_bit at FEXL.B0;

    // FEXU bits
    const register unsigned short int FEXU_7 = 7;
    sbit  FEXU_7_bit at FEXU.B7;
    const register unsigned short int FEXU_6 = 6;
    sbit  FEXU_6_bit at FEXU.B6;
    const register unsigned short int FEXU_5 = 5;
    sbit  FEXU_5_bit at FEXU.B5;
    const register unsigned short int FEXU_4 = 4;
    sbit  FEXU_4_bit at FEXU.B4;
    const register unsigned short int FEXU_3 = 3;
    sbit  FEXU_3_bit at FEXU.B3;
    const register unsigned short int FEXU_2 = 2;
    sbit  FEXU_2_bit at FEXU.B2;
    const register unsigned short int FEXU_1 = 1;
    sbit  FEXU_1_bit at FEXU.B1;
    const register unsigned short int FEXU_0 = 0;
    sbit  FEXU_0_bit at FEXU.B0;

    // VISI bits
    const register unsigned short int VISI_15 = 15;
    sbit  VISI_15_bit at VISI.B15;
    const register unsigned short int VISI_14 = 14;
    sbit  VISI_14_bit at VISI.B14;
    const register unsigned short int VISI_13 = 13;
    sbit  VISI_13_bit at VISI.B13;
    const register unsigned short int VISI_12 = 12;
    sbit  VISI_12_bit at VISI.B12;
    const register unsigned short int VISI_11 = 11;
    sbit  VISI_11_bit at VISI.B11;
    const register unsigned short int VISI_10 = 10;
    sbit  VISI_10_bit at VISI.B10;
    const register unsigned short int VISI_9 = 9;
    sbit  VISI_9_bit at VISI.B9;
    const register unsigned short int VISI_8 = 8;
    sbit  VISI_8_bit at VISI.B8;
    const register unsigned short int VISI_7 = 7;
    sbit  VISI_7_bit at VISI.B7;
    const register unsigned short int VISI_6 = 6;
    sbit  VISI_6_bit at VISI.B6;
    const register unsigned short int VISI_5 = 5;
    sbit  VISI_5_bit at VISI.B5;
    const register unsigned short int VISI_4 = 4;
    sbit  VISI_4_bit at VISI.B4;
    const register unsigned short int VISI_3 = 3;
    sbit  VISI_3_bit at VISI.B3;
    const register unsigned short int VISI_2 = 2;
    sbit  VISI_2_bit at VISI.B2;
    const register unsigned short int VISI_1 = 1;
    sbit  VISI_1_bit at VISI.B1;
    const register unsigned short int VISI_0 = 0;
    sbit  VISI_0_bit at VISI.B0;

    // DPCL bits
    const register unsigned short int DPCL_15 = 15;
    sbit  DPCL_15_bit at DPCL.B15;
    const register unsigned short int DPCL_14 = 14;
    sbit  DPCL_14_bit at DPCL.B14;
    const register unsigned short int DPCL_13 = 13;
    sbit  DPCL_13_bit at DPCL.B13;
    const register unsigned short int DPCL_12 = 12;
    sbit  DPCL_12_bit at DPCL.B12;
    const register unsigned short int DPCL_11 = 11;
    sbit  DPCL_11_bit at DPCL.B11;
    const register unsigned short int DPCL_10 = 10;
    sbit  DPCL_10_bit at DPCL.B10;
    const register unsigned short int DPCL_9 = 9;
    sbit  DPCL_9_bit at DPCL.B9;
    const register unsigned short int DPCL_8 = 8;
    sbit  DPCL_8_bit at DPCL.B8;
    const register unsigned short int DPCL_7 = 7;
    sbit  DPCL_7_bit at DPCL.B7;
    const register unsigned short int DPCL_6 = 6;
    sbit  DPCL_6_bit at DPCL.B6;
    const register unsigned short int DPCL_5 = 5;
    sbit  DPCL_5_bit at DPCL.B5;
    const register unsigned short int DPCL_4 = 4;
    sbit  DPCL_4_bit at DPCL.B4;
    const register unsigned short int DPCL_3 = 3;
    sbit  DPCL_3_bit at DPCL.B3;
    const register unsigned short int DPCL_2 = 2;
    sbit  DPCL_2_bit at DPCL.B2;
    const register unsigned short int DPCL_1 = 1;
    sbit  DPCL_1_bit at DPCL.B1;
    const register unsigned short int DPCL_0 = 0;
    sbit  DPCL_0_bit at DPCL.B0;

    // DPCU bits
    const register unsigned short int DPCU_7 = 7;
    sbit  DPCU_7_bit at DPCU.B7;
    const register unsigned short int DPCU_6 = 6;
    sbit  DPCU_6_bit at DPCU.B6;
    const register unsigned short int DPCU_5 = 5;
    sbit  DPCU_5_bit at DPCU.B5;
    const register unsigned short int DPCU_4 = 4;
    sbit  DPCU_4_bit at DPCU.B4;
    const register unsigned short int DPCU_3 = 3;
    sbit  DPCU_3_bit at DPCU.B3;
    const register unsigned short int DPCU_2 = 2;
    sbit  DPCU_2_bit at DPCU.B2;
    const register unsigned short int DPCU_1 = 1;
    sbit  DPCU_1_bit at DPCU.B1;
    const register unsigned short int DPCU_0 = 0;
    sbit  DPCU_0_bit at DPCU.B0;

    // _APPO bits
    const register unsigned short int _APPO_15 = 15;
    sbit  _APPO_15_bit at _APPO.B15;
    const register unsigned short int _APPO_14 = 14;
    sbit  _APPO_14_bit at _APPO.B14;
    const register unsigned short int _APPO_13 = 13;
    sbit  _APPO_13_bit at _APPO.B13;
    const register unsigned short int _APPO_12 = 12;
    sbit  _APPO_12_bit at _APPO.B12;
    const register unsigned short int _APPO_11 = 11;
    sbit  _APPO_11_bit at _APPO.B11;
    const register unsigned short int _APPO_10 = 10;
    sbit  _APPO_10_bit at _APPO.B10;
    const register unsigned short int _APPO_9 = 9;
    sbit  _APPO_9_bit at _APPO.B9;
    const register unsigned short int _APPO_8 = 8;
    sbit  _APPO_8_bit at _APPO.B8;
    const register unsigned short int _APPO_7 = 7;
    sbit  _APPO_7_bit at _APPO.B7;
    const register unsigned short int _APPO_6 = 6;
    sbit  _APPO_6_bit at _APPO.B6;
    const register unsigned short int _APPO_5 = 5;
    sbit  _APPO_5_bit at _APPO.B5;
    const register unsigned short int _APPO_4 = 4;
    sbit  _APPO_4_bit at _APPO.B4;
    const register unsigned short int _APPO_3 = 3;
    sbit  _APPO_3_bit at _APPO.B3;
    const register unsigned short int _APPO_2 = 2;
    sbit  _APPO_2_bit at _APPO.B2;
    const register unsigned short int _APPO_1 = 1;
    sbit  _APPO_1_bit at _APPO.B1;
    const register unsigned short int _APPO_0 = 0;
    sbit  _APPO_0_bit at _APPO.B0;

    // _APPIN bits
    const register unsigned short int _APPIN_15 = 15;
    sbit  _APPIN_15_bit at _APPIN.B15;
    const register unsigned short int _APPIN_14 = 14;
    sbit  _APPIN_14_bit at _APPIN.B14;
    const register unsigned short int _APPIN_13 = 13;
    sbit  _APPIN_13_bit at _APPIN.B13;
    const register unsigned short int _APPIN_12 = 12;
    sbit  _APPIN_12_bit at _APPIN.B12;
    const register unsigned short int _APPIN_11 = 11;
    sbit  _APPIN_11_bit at _APPIN.B11;
    const register unsigned short int _APPIN_10 = 10;
    sbit  _APPIN_10_bit at _APPIN.B10;
    const register unsigned short int _APPIN_9 = 9;
    sbit  _APPIN_9_bit at _APPIN.B9;
    const register unsigned short int _APPIN_8 = 8;
    sbit  _APPIN_8_bit at _APPIN.B8;
    const register unsigned short int _APPIN_7 = 7;
    sbit  _APPIN_7_bit at _APPIN.B7;
    const register unsigned short int _APPIN_6 = 6;
    sbit  _APPIN_6_bit at _APPIN.B6;
    const register unsigned short int _APPIN_5 = 5;
    sbit  _APPIN_5_bit at _APPIN.B5;
    const register unsigned short int _APPIN_4 = 4;
    sbit  _APPIN_4_bit at _APPIN.B4;
    const register unsigned short int _APPIN_3 = 3;
    sbit  _APPIN_3_bit at _APPIN.B3;
    const register unsigned short int _APPIN_2 = 2;
    sbit  _APPIN_2_bit at _APPIN.B2;
    const register unsigned short int _APPIN_1 = 1;
    sbit  _APPIN_1_bit at _APPIN.B1;
    const register unsigned short int _APPIN_0 = 0;
    sbit  _APPIN_0_bit at _APPIN.B0;

    // APPS bits
    const register unsigned short int STRFUL = 4;
    sbit  STRFUL_bit at APPS.B4;
    const register unsigned short int APOOV = 3;
    sbit  APOOV_bit at APPS.B3;
    const register unsigned short int APOFUL = 2;
    sbit  APOFUL_bit at APPS.B2;
    const register unsigned short int APIOV = 1;
    sbit  APIOV_bit at APPS.B1;
    const register unsigned short int APIFUL = 0;
    sbit  APIFUL_bit at APPS.B0;

    // STROUTL bits
    const register unsigned short int STROUTL_15 = 15;
    sbit  STROUTL_15_bit at STROUTL.B15;
    const register unsigned short int STROUTL_14 = 14;
    sbit  STROUTL_14_bit at STROUTL.B14;
    const register unsigned short int STROUTL_13 = 13;
    sbit  STROUTL_13_bit at STROUTL.B13;
    const register unsigned short int STROUTL_12 = 12;
    sbit  STROUTL_12_bit at STROUTL.B12;
    const register unsigned short int STROUTL_11 = 11;
    sbit  STROUTL_11_bit at STROUTL.B11;
    const register unsigned short int STROUTL_10 = 10;
    sbit  STROUTL_10_bit at STROUTL.B10;
    const register unsigned short int STROUTL_9 = 9;
    sbit  STROUTL_9_bit at STROUTL.B9;
    const register unsigned short int STROUTL_8 = 8;
    sbit  STROUTL_8_bit at STROUTL.B8;
    const register unsigned short int STROUTL_7 = 7;
    sbit  STROUTL_7_bit at STROUTL.B7;
    const register unsigned short int STROUTL_6 = 6;
    sbit  STROUTL_6_bit at STROUTL.B6;
    const register unsigned short int STROUTL_5 = 5;
    sbit  STROUTL_5_bit at STROUTL.B5;
    const register unsigned short int STROUTL_4 = 4;
    sbit  STROUTL_4_bit at STROUTL.B4;
    const register unsigned short int STROUTL_3 = 3;
    sbit  STROUTL_3_bit at STROUTL.B3;
    const register unsigned short int STROUTL_2 = 2;
    sbit  STROUTL_2_bit at STROUTL.B2;
    const register unsigned short int STROUTL_1 = 1;
    sbit  STROUTL_1_bit at STROUTL.B1;
    const register unsigned short int STROUTL_0 = 0;
    sbit  STROUTL_0_bit at STROUTL.B0;

    // STROUTH bits
    const register unsigned short int STROUTH_15 = 15;
    sbit  STROUTH_15_bit at STROUTH.B15;
    const register unsigned short int STROUTH_14 = 14;
    sbit  STROUTH_14_bit at STROUTH.B14;
    const register unsigned short int STROUTH_13 = 13;
    sbit  STROUTH_13_bit at STROUTH.B13;
    const register unsigned short int STROUTH_12 = 12;
    sbit  STROUTH_12_bit at STROUTH.B12;
    const register unsigned short int STROUTH_11 = 11;
    sbit  STROUTH_11_bit at STROUTH.B11;
    const register unsigned short int STROUTH_10 = 10;
    sbit  STROUTH_10_bit at STROUTH.B10;
    const register unsigned short int STROUTH_9 = 9;
    sbit  STROUTH_9_bit at STROUTH.B9;
    const register unsigned short int STROUTH_8 = 8;
    sbit  STROUTH_8_bit at STROUTH.B8;
    const register unsigned short int STROUTH_7 = 7;
    sbit  STROUTH_7_bit at STROUTH.B7;
    const register unsigned short int STROUTH_6 = 6;
    sbit  STROUTH_6_bit at STROUTH.B6;
    const register unsigned short int STROUTH_5 = 5;
    sbit  STROUTH_5_bit at STROUTH.B5;
    const register unsigned short int STROUTH_4 = 4;
    sbit  STROUTH_4_bit at STROUTH.B4;
    const register unsigned short int STROUTH_3 = 3;
    sbit  STROUTH_3_bit at STROUTH.B3;
    const register unsigned short int STROUTH_2 = 2;
    sbit  STROUTH_2_bit at STROUTH.B2;
    const register unsigned short int STROUTH_1 = 1;
    sbit  STROUTH_1_bit at STROUTH.B1;
    const register unsigned short int STROUTH_0 = 0;
    sbit  STROUTH_0_bit at STROUTH.B0;

    // STROVCNT bits
    const register unsigned short int STROVCNT_15 = 15;
    sbit  STROVCNT_15_bit at STROVCNT.B15;
    const register unsigned short int STROVCNT_14 = 14;
    sbit  STROVCNT_14_bit at STROVCNT.B14;
    const register unsigned short int STROVCNT_13 = 13;
    sbit  STROVCNT_13_bit at STROVCNT.B13;
    const register unsigned short int STROVCNT_12 = 12;
    sbit  STROVCNT_12_bit at STROVCNT.B12;
    const register unsigned short int STROVCNT_11 = 11;
    sbit  STROVCNT_11_bit at STROVCNT.B11;
    const register unsigned short int STROVCNT_10 = 10;
    sbit  STROVCNT_10_bit at STROVCNT.B10;
    const register unsigned short int STROVCNT_9 = 9;
    sbit  STROVCNT_9_bit at STROVCNT.B9;
    const register unsigned short int STROVCNT_8 = 8;
    sbit  STROVCNT_8_bit at STROVCNT.B8;
    const register unsigned short int STROVCNT_7 = 7;
    sbit  STROVCNT_7_bit at STROVCNT.B7;
    const register unsigned short int STROVCNT_6 = 6;
    sbit  STROVCNT_6_bit at STROVCNT.B6;
    const register unsigned short int STROVCNT_5 = 5;
    sbit  STROVCNT_5_bit at STROVCNT.B5;
    const register unsigned short int STROVCNT_4 = 4;
    sbit  STROVCNT_4_bit at STROVCNT.B4;
    const register unsigned short int STROVCNT_3 = 3;
    sbit  STROVCNT_3_bit at STROVCNT.B3;
    const register unsigned short int STROVCNT_2 = 2;
    sbit  STROVCNT_2_bit at STROVCNT.B2;
    const register unsigned short int STROVCNT_1 = 1;
    sbit  STROVCNT_1_bit at STROVCNT.B1;
    const register unsigned short int STROVCNT_0 = 0;
    sbit  STROVCNT_0_bit at STROVCNT.B0;

    // DFTADD bits
    const register unsigned short int DFTADD_15 = 15;
    sbit  DFTADD_15_bit at DFTADD.B15;
    const register unsigned short int DFTADD_14 = 14;
    sbit  DFTADD_14_bit at DFTADD.B14;
    const register unsigned short int DFTADD_13 = 13;
    sbit  DFTADD_13_bit at DFTADD.B13;
    const register unsigned short int DFTADD_12 = 12;
    sbit  DFTADD_12_bit at DFTADD.B12;
    const register unsigned short int DFTADD_11 = 11;
    sbit  DFTADD_11_bit at DFTADD.B11;
    const register unsigned short int DFTADD_10 = 10;
    sbit  DFTADD_10_bit at DFTADD.B10;
    const register unsigned short int DFTADD_9 = 9;
    sbit  DFTADD_9_bit at DFTADD.B9;
    const register unsigned short int DFTADD_8 = 8;
    sbit  DFTADD_8_bit at DFTADD.B8;
    const register unsigned short int DFTADD_7 = 7;
    sbit  DFTADD_7_bit at DFTADD.B7;
    const register unsigned short int DFTADD_6 = 6;
    sbit  DFTADD_6_bit at DFTADD.B6;
    const register unsigned short int DFTADD_5 = 5;
    sbit  DFTADD_5_bit at DFTADD.B5;
    const register unsigned short int DFTADD_4 = 4;
    sbit  DFTADD_4_bit at DFTADD.B4;
    const register unsigned short int DFTADD_3 = 3;
    sbit  DFTADD_3_bit at DFTADD.B3;
    const register unsigned short int DFTADD_2 = 2;
    sbit  DFTADD_2_bit at DFTADD.B2;
    const register unsigned short int DFTADD_1 = 1;
    sbit  DFTADD_1_bit at DFTADD.B1;
    const register unsigned short int DFTADD_0 = 0;
    sbit  DFTADD_0_bit at DFTADD.B0;

    // DFTDATA bits
    const register unsigned short int DFTDATA_15 = 15;
    sbit  DFTDATA_15_bit at DFTDATA.B15;
    const register unsigned short int DFTDATA_14 = 14;
    sbit  DFTDATA_14_bit at DFTDATA.B14;
    const register unsigned short int DFTDATA_13 = 13;
    sbit  DFTDATA_13_bit at DFTDATA.B13;
    const register unsigned short int DFTDATA_12 = 12;
    sbit  DFTDATA_12_bit at DFTDATA.B12;
    const register unsigned short int DFTDATA_11 = 11;
    sbit  DFTDATA_11_bit at DFTDATA.B11;
    const register unsigned short int DFTDATA_10 = 10;
    sbit  DFTDATA_10_bit at DFTDATA.B10;
    const register unsigned short int DFTDATA_9 = 9;
    sbit  DFTDATA_9_bit at DFTDATA.B9;
    const register unsigned short int DFTDATA_8 = 8;
    sbit  DFTDATA_8_bit at DFTDATA.B8;
    const register unsigned short int DFTDATA_7 = 7;
    sbit  DFTDATA_7_bit at DFTDATA.B7;
    const register unsigned short int DFTDATA_6 = 6;
    sbit  DFTDATA_6_bit at DFTDATA.B6;
    const register unsigned short int DFTDATA_5 = 5;
    sbit  DFTDATA_5_bit at DFTDATA.B5;
    const register unsigned short int DFTDATA_4 = 4;
    sbit  DFTDATA_4_bit at DFTDATA.B4;
    const register unsigned short int DFTDATA_3 = 3;
    sbit  DFTDATA_3_bit at DFTDATA.B3;
    const register unsigned short int DFTDATA_2 = 2;
    sbit  DFTDATA_2_bit at DFTDATA.B2;
    const register unsigned short int DFTDATA_1 = 1;
    sbit  DFTDATA_1_bit at DFTDATA.B1;
    const register unsigned short int DFTDATA_0 = 0;
    sbit  DFTDATA_0_bit at DFTDATA.B0;

    // DFTDATA_INC bits
    const register unsigned short int DFTDATA_INC_15 = 15;
    sbit  DFTDATA_INC_15_bit at DFTDATA_INC.B15;
    const register unsigned short int DFTDATA_INC_14 = 14;
    sbit  DFTDATA_INC_14_bit at DFTDATA_INC.B14;
    const register unsigned short int DFTDATA_INC_13 = 13;
    sbit  DFTDATA_INC_13_bit at DFTDATA_INC.B13;
    const register unsigned short int DFTDATA_INC_12 = 12;
    sbit  DFTDATA_INC_12_bit at DFTDATA_INC.B12;
    const register unsigned short int DFTDATA_INC_11 = 11;
    sbit  DFTDATA_INC_11_bit at DFTDATA_INC.B11;
    const register unsigned short int DFTDATA_INC_10 = 10;
    sbit  DFTDATA_INC_10_bit at DFTDATA_INC.B10;
    const register unsigned short int DFTDATA_INC_9 = 9;
    sbit  DFTDATA_INC_9_bit at DFTDATA_INC.B9;
    const register unsigned short int DFTDATA_INC_8 = 8;
    sbit  DFTDATA_INC_8_bit at DFTDATA_INC.B8;
    const register unsigned short int DFTDATA_INC_7 = 7;
    sbit  DFTDATA_INC_7_bit at DFTDATA_INC.B7;
    const register unsigned short int DFTDATA_INC_6 = 6;
    sbit  DFTDATA_INC_6_bit at DFTDATA_INC.B6;
    const register unsigned short int DFTDATA_INC_5 = 5;
    sbit  DFTDATA_INC_5_bit at DFTDATA_INC.B5;
    const register unsigned short int DFTDATA_INC_4 = 4;
    sbit  DFTDATA_INC_4_bit at DFTDATA_INC.B4;
    const register unsigned short int DFTDATA_INC_3 = 3;
    sbit  DFTDATA_INC_3_bit at DFTDATA_INC.B3;
    const register unsigned short int DFTDATA_INC_2 = 2;
    sbit  DFTDATA_INC_2_bit at DFTDATA_INC.B2;
    const register unsigned short int DFTDATA_INC_1 = 1;
    sbit  DFTDATA_INC_1_bit at DFTDATA_INC.B1;
    const register unsigned short int DFTDATA_INC_0 = 0;
    sbit  DFTDATA_INC_0_bit at DFTDATA_INC.B0;

    // JDATAH bits
    const register unsigned short int JDATAH_15 = 15;
    sbit  JDATAH_15_bit at JDATAH.B15;
    const register unsigned short int JDATAH_14 = 14;
    sbit  JDATAH_14_bit at JDATAH.B14;
    const register unsigned short int JDATAH_13 = 13;
    sbit  JDATAH_13_bit at JDATAH.B13;
    const register unsigned short int JDATAH_12 = 12;
    sbit  JDATAH_12_bit at JDATAH.B12;
    const register unsigned short int JDATAH_11 = 11;
    sbit  JDATAH_11_bit at JDATAH.B11;
    const register unsigned short int JDATAH_10 = 10;
    sbit  JDATAH_10_bit at JDATAH.B10;
    const register unsigned short int JDATAH_9 = 9;
    sbit  JDATAH_9_bit at JDATAH.B9;
    const register unsigned short int JDATAH_8 = 8;
    sbit  JDATAH_8_bit at JDATAH.B8;
    const register unsigned short int JDATAH_7 = 7;
    sbit  JDATAH_7_bit at JDATAH.B7;
    const register unsigned short int JDATAH_6 = 6;
    sbit  JDATAH_6_bit at JDATAH.B6;
    const register unsigned short int JDATAH_5 = 5;
    sbit  JDATAH_5_bit at JDATAH.B5;
    const register unsigned short int JDATAH_4 = 4;
    sbit  JDATAH_4_bit at JDATAH.B4;
    const register unsigned short int JDATAH_3 = 3;
    sbit  JDATAH_3_bit at JDATAH.B3;
    const register unsigned short int JDATAH_2 = 2;
    sbit  JDATAH_2_bit at JDATAH.B2;
    const register unsigned short int JDATAH_1 = 1;
    sbit  JDATAH_1_bit at JDATAH.B1;
    const register unsigned short int JDATAH_0 = 0;
    sbit  JDATAH_0_bit at JDATAH.B0;

    // JDATAL bits
    const register unsigned short int JDATAL_15 = 15;
    sbit  JDATAL_15_bit at JDATAL.B15;
    const register unsigned short int JDATAL_14 = 14;
    sbit  JDATAL_14_bit at JDATAL.B14;
    const register unsigned short int JDATAL_13 = 13;
    sbit  JDATAL_13_bit at JDATAL.B13;
    const register unsigned short int JDATAL_12 = 12;
    sbit  JDATAL_12_bit at JDATAL.B12;
    const register unsigned short int JDATAL_11 = 11;
    sbit  JDATAL_11_bit at JDATAL.B11;
    const register unsigned short int JDATAL_10 = 10;
    sbit  JDATAL_10_bit at JDATAL.B10;
    const register unsigned short int JDATAL_9 = 9;
    sbit  JDATAL_9_bit at JDATAL.B9;
    const register unsigned short int JDATAL_8 = 8;
    sbit  JDATAL_8_bit at JDATAL.B8;
    const register unsigned short int JDATAL_7 = 7;
    sbit  JDATAL_7_bit at JDATAL.B7;
    const register unsigned short int JDATAL_6 = 6;
    sbit  JDATAL_6_bit at JDATAL.B6;
    const register unsigned short int JDATAL_5 = 5;
    sbit  JDATAL_5_bit at JDATAL.B5;
    const register unsigned short int JDATAL_4 = 4;
    sbit  JDATAL_4_bit at JDATAL.B4;
    const register unsigned short int JDATAL_3 = 3;
    sbit  JDATAL_3_bit at JDATAL.B3;
    const register unsigned short int JDATAL_2 = 2;
    sbit  JDATAL_2_bit at JDATAL.B2;
    const register unsigned short int JDATAL_1 = 1;
    sbit  JDATAL_1_bit at JDATAL.B1;
    const register unsigned short int JDATAL_0 = 0;
    sbit  JDATAL_0_bit at JDATAL.B0;

    // Start of structures implementation for backward compatibility

// backward compatibility for DSRPAGBITS
    typedef struct tagDSRPAGBITS {
      unsigned DSRPAG:10;
} typeDSRPAGBITS;
sfr volatile typeDSRPAGBITS DSRPAGbits absolute 0x032;

// backward compatibility for DSWPAGBITS
    typedef struct tagDSWPAGBITS {
      unsigned DSWPAG:9;
} typeDSWPAGBITS;
sfr volatile typeDSWPAGBITS DSWPAGbits absolute 0x034;

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
          unsigned SFA:1;
          unsigned IPL3:1;
          unsigned ACCSAT:1;
          unsigned SATDW:1;
          unsigned SATB:1;
          unsigned SATA:1;
          unsigned DL:3;
          unsigned EDT:1;
          unsigned US:2;
          unsigned :1;
          unsigned VAR:1;
        };
        struct {
          unsigned :8;
          unsigned DL0:1;
          unsigned DL1:1;
          unsigned DL2:1;
          unsigned :1;
          unsigned US0:1;
          unsigned US1:1;
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

// backward compatibility for TBLPAGBITS
    typedef struct tagTBLPAGBITS {
      unsigned TBLPAG:8;
} typeTBLPAGBITS;
sfr volatile typeTBLPAGBITS TBLPAGbits absolute 0x054;

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

// backward compatibility for IC1CON1BITS
    typedef struct tagIC1CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC1CON1BITS;
sfr volatile typeIC1CON1BITS IC1CON1bits absolute 0x140;

// backward compatibility for IC1CON2BITS
    typedef struct tagIC1CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC1CON2BITS;
sfr volatile typeIC1CON2BITS IC1CON2bits absolute 0x142;

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x144;
sfr volatile typeIC IC2 absolute 0x14C;
sfr volatile typeIC IC3 absolute 0x154;
sfr volatile typeIC IC4 absolute 0x15C;

// backward compatibility for IC2CON1BITS
    typedef struct tagIC2CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC2CON1BITS;
sfr volatile typeIC2CON1BITS IC2CON1bits absolute 0x148;

// backward compatibility for IC2CON2BITS
    typedef struct tagIC2CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC2CON2BITS;
sfr volatile typeIC2CON2BITS IC2CON2bits absolute 0x14A;

// backward compatibility for IC3CON1BITS
    typedef struct tagIC3CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC3CON1BITS;
sfr volatile typeIC3CON1BITS IC3CON1bits absolute 0x150;

// backward compatibility for IC3CON2BITS
    typedef struct tagIC3CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC3CON2BITS;
sfr volatile typeIC3CON2BITS IC3CON2bits absolute 0x152;

// backward compatibility for IC4CON1BITS
    typedef struct tagIC4CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC4CON1BITS;
sfr volatile typeIC4CON1BITS IC4CON1bits absolute 0x158;

// backward compatibility for IC4CON2BITS
    typedef struct tagIC4CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC4CON2BITS;
sfr volatile typeIC4CON2BITS IC4CON2bits absolute 0x15A;

// backward compatibility for I2C1CONBITS
    typedef struct tagI2C1CONBITS {
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
} typeI2C1CONBITS;
sfr volatile typeI2C1CONBITS I2C1CONbits absolute 0x206;

// backward compatibility for I2C1STATBITS
    typedef struct tagI2C1STATBITS {
      unsigned TBF:1;
      unsigned RBF:1;
      unsigned R_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_A:1;
      unsigned I2COV:1;
      unsigned IWCOL:1;
      unsigned ADD10:1;
      unsigned GCSTAT:1;
      unsigned BCL:1;
      unsigned :3;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
} typeI2C1STATBITS;
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x208;

// backward compatibility for I2C2CONBITS
    typedef struct tagI2C2CONBITS {
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
} typeI2C2CONBITS;
sfr volatile typeI2C2CONBITS I2C2CONbits absolute 0x216;

// backward compatibility for I2C2STATBITS
    typedef struct tagI2C2STATBITS {
      unsigned TBF:1;
      unsigned RBF:1;
      unsigned R_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_A:1;
      unsigned I2COV:1;
      unsigned IWCOL:1;
      unsigned ADD10:1;
      unsigned GCSTAT:1;
      unsigned BCL:1;
      unsigned :3;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
} typeI2C2STATBITS;
sfr volatile typeI2C2STATBITS I2C2STATbits absolute 0x218;

// backward compatibility for UART
    typedef struct tagUART {
            unsigned int uxmode;
            unsigned int uxsta;
            unsigned int uxtxreg;
            unsigned int uxrxreg;
            unsigned int uxbrg;
} typeUART;
sfr volatile typeUART UART1 absolute 0x220;
sfr volatile typeUART UART2 absolute 0x230;

// backward compatibility for U1MODEBITS
    typedef struct tagU1MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned URXINV:1;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned UEN:2;
          unsigned :1;
          unsigned RTSMD:1;
          unsigned IREN:1;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
          unsigned UEN0:1;
          unsigned UEN1:1;
        };
      };
} typeU1MODEBITS;
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x220;

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
          unsigned :1;
          unsigned UTXISEL0:1;
          unsigned UTXINV:1;
          unsigned UTXISEL1:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
          unsigned :6;
          unsigned TXINV:1;
        };
      };
} typeU1STABITS;
sfr volatile typeU1STABITS U1STAbits absolute 0x222;

// backward compatibility for U2MODEBITS
    typedef struct tagU2MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned URXINV:1;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned UEN:2;
          unsigned :1;
          unsigned RTSMD:1;
          unsigned IREN:1;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
          unsigned UEN0:1;
          unsigned UEN1:1;
        };
      };
} typeU2MODEBITS;
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x230;

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
          unsigned :1;
          unsigned UTXISEL0:1;
          unsigned UTXINV:1;
          unsigned UTXISEL1:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
          unsigned :6;
          unsigned TXINV:1;
        };
      };
} typeU2STABITS;
sfr volatile typeU2STABITS U2STAbits absolute 0x232;

// backward compatibility for SPI
    typedef struct tagSPI {
            unsigned int spixstat;
            unsigned int spixcon1;
            unsigned int spixcon2;
            unsigned int unused;
            unsigned int spixbuf;
} typeSPI;
sfr volatile typeSPI SPI1 absolute 0x240;
sfr volatile typeSPI SPI2 absolute 0x260;

// backward compatibility for SPI1STATBITS
    typedef struct tagSPI1STATBITS {
      union {
        struct {
          unsigned SPIRBF:1;
          unsigned SPITBF:1;
          unsigned SISEL:3;
          unsigned SRXMPT:1;
          unsigned SPIROV:1;
          unsigned SRMPT:1;
          unsigned SPIBEC:3;
          unsigned :2;
          unsigned SPISIDL:1;
          unsigned :1;
          unsigned SPIEN:1;
        };
        struct {
          unsigned :2;
          unsigned SISEL0:1;
          unsigned SISEL1:1;
          unsigned SISEL2:1;
          unsigned :3;
          unsigned SPIBEC0:1;
          unsigned SPIBEC1:1;
          unsigned SPIBEC2:1;
        };
      };
} typeSPI1STATBITS;
sfr volatile typeSPI1STATBITS SPI1STATbits absolute 0x240;

// backward compatibility for SPI1CON1BITS
    typedef struct tagSPI1CON1BITS {
      union {
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned DISSCK:1;
        };
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
        };
      };
} typeSPI1CON1BITS;
sfr volatile typeSPI1CON1BITS SPI1CON1bits absolute 0x242;

// backward compatibility for SPI1CON2BITS
    typedef struct tagSPI1CON2BITS {
      unsigned SPIBEN:1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x244;

// backward compatibility for SPI2STATBITS
    typedef struct tagSPI2STATBITS {
      union {
        struct {
          unsigned SPIRBF:1;
          unsigned SPITBF:1;
          unsigned SISEL:3;
          unsigned SRXMPT:1;
          unsigned SPIROV:1;
          unsigned SRMPT:1;
          unsigned SPIBEC:3;
          unsigned :2;
          unsigned SPISIDL:1;
          unsigned :1;
          unsigned SPIEN:1;
        };
        struct {
          unsigned :2;
          unsigned SISEL0:1;
          unsigned SISEL1:1;
          unsigned SISEL2:1;
          unsigned :3;
          unsigned SPIBEC0:1;
          unsigned SPIBEC1:1;
          unsigned SPIBEC2:1;
        };
      };
} typeSPI2STATBITS;
sfr volatile typeSPI2STATBITS SPI2STATbits absolute 0x260;

// backward compatibility for SPI2CON1BITS
    typedef struct tagSPI2CON1BITS {
      union {
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned DISSCK:1;
        };
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
        };
      };
} typeSPI2CON1BITS;
sfr volatile typeSPI2CON1BITS SPI2CON1bits absolute 0x262;

// backward compatibility for SPI2CON2BITS
    typedef struct tagSPI2CON2BITS {
      unsigned SPIBEN:1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

// backward compatibility for AD1CON1BITS
    typedef struct tagAD1CON1BITS {
      union {
        struct {
          unsigned DONE:1;
          unsigned SAMP:1;
          unsigned ASAM:1;
          unsigned SIMSAM:1;
          unsigned SSRCG:1;
          unsigned SSRC:3;
          unsigned FORM:2;
          unsigned AD12B:1;
          unsigned :1;
          unsigned ADDMABM:1;
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
} typeAD1CON1BITS;
sfr volatile typeAD1CON1BITS AD1CON1bits absolute 0x320;

// backward compatibility for AD1CON2BITS
    typedef struct tagAD1CON2BITS {
      union {
        struct {
          unsigned ALTS:1;
          unsigned BUFM:1;
          unsigned SMPI:5;
          unsigned BUFS:1;
          unsigned CHPS:2;
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
          unsigned SMPI4:1;
          unsigned :1;
          unsigned CHPS0:1;
          unsigned CHPS1:1;
          unsigned :3;
          unsigned VCFG0:1;
          unsigned VCFG1:1;
          unsigned VCFG2:1;
        };
      };
} typeAD1CON2BITS;
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x322;

// backward compatibility for AD1CON3BITS
    typedef struct tagAD1CON3BITS {
      union {
        struct {
          unsigned ADCS:8;
          unsigned SAMC:5;
          unsigned :2;
          unsigned ADRC:1;
        };
        struct {
          unsigned ADCS0:1;
          unsigned ADCS1:1;
          unsigned ADCS2:1;
          unsigned ADCS3:1;
          unsigned ADCS4:1;
          unsigned ADCS5:1;
          unsigned ADCS6:1;
          unsigned ADCS7:1;
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
        };
      };
} typeAD1CON3BITS;
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x324;

// backward compatibility for AD1CHS123BITS
    typedef struct tagAD1CHS123BITS {
      union {
        struct {
          unsigned CH123SA:1;
          unsigned CH123NA:2;
          unsigned :5;
          unsigned CH123SB:1;
          unsigned CH123NB:2;
        };
        struct {
          unsigned :1;
          unsigned CH123NA0:1;
          unsigned CH123NA1:1;
          unsigned :6;
          unsigned CH123NB0:1;
          unsigned CH123NB1:1;
        };
      };
} typeAD1CHS123BITS;
sfr volatile typeAD1CHS123BITS AD1CHS123bits absolute 0x326;

// backward compatibility for AD1CHS0BITS
    typedef struct tagAD1CHS0BITS {
      union {
        struct {
          unsigned CH0SA:5;
          unsigned :2;
          unsigned CH0NA:1;
          unsigned CH0SB:5;
          unsigned :2;
          unsigned CH0NB:1;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned CH0SA4:1;
          unsigned :3;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
          unsigned CH0SB4:1;
        };
      };
} typeAD1CHS0BITS;
sfr volatile typeAD1CHS0BITS AD1CHS0bits absolute 0x328;

// backward compatibility for AD1CSSHBITS
    typedef struct tagAD1CSSHBITS {
      unsigned :8;
      unsigned CSS24:1;
      unsigned CSS25:1;
      unsigned CSS26:1;
      unsigned :3;
      unsigned CSS30:1;
      unsigned CSS31:1;
} typeAD1CSSHBITS;
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x32E;

// backward compatibility for AD1CSSLBITS
    typedef struct tagAD1CSSLBITS {
      unsigned CSS0:1;
      unsigned CSS1:1;
      unsigned CSS2:1;
      unsigned CSS3:1;
      unsigned CSS4:1;
      unsigned CSS5:1;
      unsigned CSS6:1;
      unsigned CSS7:1;
      unsigned CSS8:1;
      unsigned CSS9:1;
      unsigned CSS10:1;
      unsigned CSS11:1;
      unsigned CSS12:1;
      unsigned CSS13:1;
      unsigned CSS14:1;
      unsigned CSS15:1;
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x330;

// backward compatibility for AD1CON4BITS
    typedef struct tagAD1CON4BITS {
      union {
        struct {
          unsigned DMABL:3;
          unsigned :5;
          unsigned ADDMAEN:1;
        };
        struct {
          unsigned DMABL0:1;
          unsigned DMABL1:1;
          unsigned DMABL2:1;
        };
      };
} typeAD1CON4BITS;
sfr volatile typeAD1CON4BITS AD1CON4bits absolute 0x332;

// backward compatibility for CTMUCON1BITS
    typedef struct tagCTMUCON1BITS {
      unsigned :8;
      unsigned CTTRIG:1;
      unsigned IDISSEN:1;
      unsigned EDGSEQEN:1;
      unsigned EDGEN:1;
      unsigned TGEN:1;
      unsigned CTMUSIDL:1;
      unsigned :1;
      unsigned CTMUEN:1;
} typeCTMUCON1BITS;
sfr volatile typeCTMUCON1BITS CTMUCON1bits absolute 0x33A;

// backward compatibility for CTMUCON2BITS
    typedef struct tagCTMUCON2BITS {
      union {
        struct {
          unsigned :2;
          unsigned EDG2SEL:4;
          unsigned EDG2POL:1;
          unsigned EDG2MOD:1;
          unsigned EDG1STAT:1;
          unsigned EDG2STAT:1;
          unsigned EDG1SEL:4;
          unsigned EDG1POL:1;
          unsigned EDG1MOD:1;
        };
        struct {
          unsigned :2;
          unsigned EDG2SEL0:1;
          unsigned EDG2SEL1:1;
          unsigned EDG2SEL2:1;
          unsigned EDG2SEL3:1;
          unsigned :4;
          unsigned EDG1SEL0:1;
          unsigned EDG1SEL1:1;
          unsigned EDG1SEL2:1;
          unsigned EDG1SEL3:1;
        };
      };
} typeCTMUCON2BITS;
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x33C;

// backward compatibility for CTMUICONBITS
    typedef struct tagCTMUICONBITS {
      union {
        struct {
          unsigned :8;
          unsigned IRNG:2;
          unsigned ITRIM:6;
        };
        struct {
          unsigned :8;
          unsigned IRNG0:1;
          unsigned IRNG1:1;
          unsigned ITRIM0:1;
          unsigned ITRIM1:1;
          unsigned ITRIM2:1;
          unsigned ITRIM3:1;
          unsigned ITRIM4:1;
          unsigned ITRIM5:1;
        };
      };
} typeCTMUICONBITS;
sfr volatile typeCTMUICONBITS CTMUICONbits absolute 0x33E;

// backward compatibility for C1CTRL1BITS
    typedef struct tagC1CTRL1BITS {
      union {
        struct {
          unsigned WIN:1;
          unsigned :2;
          unsigned CANCAP:1;
          unsigned :1;
          unsigned OPMODE:3;
          unsigned REQOP:3;
          unsigned CANCKS:1;
          unsigned ABAT:1;
          unsigned CSIDL:1;
        };
        struct {
          unsigned :5;
          unsigned OPMODE0:1;
          unsigned OPMODE1:1;
          unsigned OPMODE2:1;
          unsigned REQOP0:1;
          unsigned REQOP1:1;
          unsigned REQOP2:1;
        };
      };
} typeC1CTRL1BITS;
sfr volatile typeC1CTRL1BITS C1CTRL1bits absolute 0x400;

// backward compatibility for C1CTRL2BITS
    typedef struct tagC1CTRL2BITS {
      union {
        struct {
          unsigned DNCNT:5;
        };
        struct {
          unsigned DNCNT0:1;
          unsigned DNCNT1:1;
          unsigned DNCNT2:1;
          unsigned DNCNT3:1;
          unsigned DNCNT4:1;
        };
      };
} typeC1CTRL2BITS;
sfr volatile typeC1CTRL2BITS C1CTRL2bits absolute 0x402;

// backward compatibility for C1VECBITS
    typedef struct tagC1VECBITS {
      union {
        struct {
          unsigned ICODE:7;
          unsigned :1;
          unsigned FILHIT:5;
        };
        struct {
          unsigned ICODE0:1;
          unsigned ICODE1:1;
          unsigned ICODE2:1;
          unsigned ICODE3:1;
          unsigned ICODE4:1;
          unsigned ICODE5:1;
          unsigned ICODE6:1;
          unsigned :1;
          unsigned FILHIT0:1;
          unsigned FILHIT1:1;
          unsigned FILHIT2:1;
          unsigned FILHIT3:1;
          unsigned FILHIT4:1;
        };
      };
} typeC1VECBITS;
sfr volatile typeC1VECBITS C1VECbits absolute 0x404;

// backward compatibility for C1FCTRLBITS
    typedef struct tagC1FCTRLBITS {
      union {
        struct {
          unsigned FSA:5;
          unsigned :8;
          unsigned DMABS:3;
        };
        struct {
          unsigned FSA0:1;
          unsigned FSA1:1;
          unsigned FSA2:1;
          unsigned FSA3:1;
          unsigned FSA4:1;
          unsigned :8;
          unsigned DMABS0:1;
          unsigned DMABS1:1;
          unsigned DMABS2:1;
        };
      };
} typeC1FCTRLBITS;
sfr volatile typeC1FCTRLBITS C1FCTRLbits absolute 0x406;

// backward compatibility for C1FIFOBITS
    typedef struct tagC1FIFOBITS {
      union {
        struct {
          unsigned FNRB:6;
          unsigned :2;
          unsigned FBP:6;
        };
        struct {
          unsigned FNRB0:1;
          unsigned FNRB1:1;
          unsigned FNRB2:1;
          unsigned FNRB3:1;
          unsigned FNRB4:1;
          unsigned FNRB5:1;
          unsigned :2;
          unsigned FBP0:1;
          unsigned FBP1:1;
          unsigned FBP2:1;
          unsigned FBP3:1;
          unsigned FBP4:1;
          unsigned FBP5:1;
        };
      };
} typeC1FIFOBITS;
sfr volatile typeC1FIFOBITS C1FIFObits absolute 0x408;

// backward compatibility for C1INTFBITS
    typedef struct tagC1INTFBITS {
      unsigned TBIF:1;
      unsigned RBIF:1;
      unsigned RBOVIF:1;
      unsigned FIFOIF:1;
      unsigned :1;
      unsigned ERRIF:1;
      unsigned WAKIF:1;
      unsigned IVRIF:1;
      unsigned EWARN:1;
      unsigned RXWAR:1;
      unsigned TXWAR:1;
      unsigned RXBP:1;
      unsigned TXBP:1;
      unsigned TXBO:1;
} typeC1INTFBITS;
sfr volatile typeC1INTFBITS C1INTFbits absolute 0x40A;

// backward compatibility for C1INTEBITS
    typedef struct tagC1INTEBITS {
      unsigned TBIE:1;
      unsigned RBIE:1;
      unsigned RBOVIE:1;
      unsigned FIFOIE:1;
      unsigned :1;
      unsigned ERRIE:1;
      unsigned WAKIE:1;
      unsigned IVRIE:1;
} typeC1INTEBITS;
sfr volatile typeC1INTEBITS C1INTEbits absolute 0x40C;

// backward compatibility for C1ECBITS
    typedef struct tagC1ECBITS {
      unsigned RERRCNT:8;
      unsigned TERRCNT:8;
} typeC1ECBITS;
sfr volatile typeC1ECBITS C1ECbits absolute 0x40E;

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
sfr volatile typeC1CFG1BITS C1CFG1bits absolute 0x410;

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
sfr volatile typeC1CFG2BITS C1CFG2bits absolute 0x412;

// backward compatibility for C1FEN1BITS
    typedef struct tagC1FEN1BITS {
      unsigned FLTEN0:1;
      unsigned FLTEN1:1;
      unsigned FLTEN2:1;
      unsigned FLTEN3:1;
      unsigned FLTEN4:1;
      unsigned FLTEN5:1;
      unsigned FLTEN6:1;
      unsigned FLTEN7:1;
      unsigned FLTEN8:1;
      unsigned FLTEN9:1;
      unsigned FLTEN10:1;
      unsigned FLTEN11:1;
      unsigned FLTEN12:1;
      unsigned FLTEN13:1;
      unsigned FLTEN14:1;
      unsigned FLTEN15:1;
} typeC1FEN1BITS;
sfr volatile typeC1FEN1BITS C1FEN1bits absolute 0x414;

// backward compatibility for C1FMSKSEL1BITS
    typedef struct tagC1FMSKSEL1BITS {
      union {
        struct {
          unsigned F0MSK:2;
          unsigned F1MSK:2;
          unsigned F2MSK:2;
          unsigned F3MSK:2;
          unsigned F4MSK:2;
          unsigned F5MSK:2;
          unsigned F6MSK:2;
          unsigned F7MSK:2;
        };
        struct {
          unsigned F0MSK0:1;
          unsigned F0MSK1:1;
          unsigned F1MSK0:1;
          unsigned F1MSK1:1;
          unsigned F2MSK0:1;
          unsigned F2MSK1:1;
          unsigned F3MSK0:1;
          unsigned F3MSK1:1;
          unsigned F4MSK0:1;
          unsigned F4MSK1:1;
          unsigned F5MSK0:1;
          unsigned F5MSK1:1;
          unsigned F6MSK0:1;
          unsigned F6MSK1:1;
          unsigned F7MSK0:1;
          unsigned F7MSK1:1;
        };
      };
} typeC1FMSKSEL1BITS;
sfr volatile typeC1FMSKSEL1BITS C1FMSKSEL1bits absolute 0x418;

// backward compatibility for C1FMSKSEL2BITS
    typedef struct tagC1FMSKSEL2BITS {
      union {
        struct {
          unsigned F8MSK:2;
          unsigned F9MSK:2;
          unsigned F10MSK:2;
          unsigned F11MSK:2;
          unsigned F12MSK:2;
          unsigned F13MSK:2;
          unsigned F14MSK:2;
          unsigned F15MSK:2;
        };
        struct {
          unsigned F8MSK0:1;
          unsigned F8MSK1:1;
          unsigned F9MSK0:1;
          unsigned F9MSK1:1;
          unsigned F10MSK0:1;
          unsigned F10MSK1:1;
          unsigned F11MSK0:1;
          unsigned F11MSK1:1;
          unsigned F12MSK0:1;
          unsigned F12MSK1:1;
          unsigned F13MSK0:1;
          unsigned F13MSK1:1;
          unsigned F14MSK0:1;
          unsigned F14MSK1:1;
          unsigned F15MSK0:1;
          unsigned F15MSK1:1;
        };
      };
} typeC1FMSKSEL2BITS;
sfr volatile typeC1FMSKSEL2BITS C1FMSKSEL2bits absolute 0x41A;

// backward compatibility for C1BUFPNT1BITS
    typedef struct tagC1BUFPNT1BITS {
      union {
        struct {
          unsigned F0BP:4;
          unsigned F1BP:4;
          unsigned F2BP:4;
          unsigned F3BP:4;
        };
        struct {
          unsigned F0BP0:1;
          unsigned F0BP1:1;
          unsigned F0BP2:1;
          unsigned F0BP3:1;
          unsigned F1BP0:1;
          unsigned F1BP1:1;
          unsigned F1BP2:1;
          unsigned F1BP3:1;
          unsigned F2BP0:1;
          unsigned F2BP1:1;
          unsigned F2BP2:1;
          unsigned F2BP3:1;
          unsigned F3BP0:1;
          unsigned F3BP1:1;
          unsigned F3BP2:1;
          unsigned F3BP3:1;
        };
      };
} typeC1BUFPNT1BITS;
sfr volatile typeC1BUFPNT1BITS C1BUFPNT1bits absolute 0x420;

// backward compatibility for C1RXFUL1BITS
    typedef struct tagC1RXFUL1BITS {
      unsigned RXFUL0:1;
      unsigned RXFUL1:1;
      unsigned RXFUL2:1;
      unsigned RXFUL3:1;
      unsigned RXFUL4:1;
      unsigned RXFUL5:1;
      unsigned RXFUL6:1;
      unsigned RXFUL7:1;
      unsigned RXFUL8:1;
      unsigned RXFUL9:1;
      unsigned RXFUL10:1;
      unsigned RXFUL11:1;
      unsigned RXFUL12:1;
      unsigned RXFUL13:1;
      unsigned RXFUL14:1;
      unsigned RXFUL15:1;
} typeC1RXFUL1BITS;
sfr volatile typeC1RXFUL1BITS C1RXFUL1bits absolute 0x420;

// backward compatibility for C1BUFPNT2BITS
    typedef struct tagC1BUFPNT2BITS {
      union {
        struct {
          unsigned F4BP:4;
          unsigned F5BP:4;
          unsigned F6BP:4;
          unsigned F7BP:4;
        };
        struct {
          unsigned F4BP0:1;
          unsigned F4BP1:1;
          unsigned F4BP2:1;
          unsigned F4BP3:1;
          unsigned F5BP0:1;
          unsigned F5BP1:1;
          unsigned F5BP2:1;
          unsigned F5BP3:1;
          unsigned F6BP0:1;
          unsigned F6BP1:1;
          unsigned F6BP2:1;
          unsigned F6BP3:1;
          unsigned F7BP0:1;
          unsigned F7BP1:1;
          unsigned F7BP2:1;
          unsigned F7BP3:1;
        };
      };
} typeC1BUFPNT2BITS;
sfr volatile typeC1BUFPNT2BITS C1BUFPNT2bits absolute 0x422;

// backward compatibility for C1RXFUL2BITS
    typedef struct tagC1RXFUL2BITS {
      unsigned RXFUL16:1;
      unsigned RXFUL17:1;
      unsigned RXFUL18:1;
      unsigned RXFUL19:1;
      unsigned RXFUL20:1;
      unsigned RXFUL21:1;
      unsigned RXFUL22:1;
      unsigned RXFUL23:1;
      unsigned RXFUL24:1;
      unsigned RXFUL25:1;
      unsigned RXFUL26:1;
      unsigned RXFUL27:1;
      unsigned RXFUL28:1;
      unsigned RXFUL29:1;
      unsigned RXFUL30:1;
      unsigned RXFUL31:1;
} typeC1RXFUL2BITS;
sfr volatile typeC1RXFUL2BITS C1RXFUL2bits absolute 0x422;

// backward compatibility for C1BUFPNT3BITS
    typedef struct tagC1BUFPNT3BITS {
      union {
        struct {
          unsigned F8BP:4;
          unsigned F9BP:4;
          unsigned F10BP:4;
          unsigned F11BP:4;
        };
        struct {
          unsigned F8BP0:1;
          unsigned F8BP1:1;
          unsigned F8BP2:1;
          unsigned F8BP3:1;
          unsigned F9BP0:1;
          unsigned F9BP1:1;
          unsigned F9BP2:1;
          unsigned F9BP3:1;
          unsigned F10BP0:1;
          unsigned F10BP1:1;
          unsigned F10BP2:1;
          unsigned F10BP3:1;
          unsigned F11BP0:1;
          unsigned F11BP1:1;
          unsigned F11BP2:1;
          unsigned F11BP3:1;
        };
      };
} typeC1BUFPNT3BITS;
sfr volatile typeC1BUFPNT3BITS C1BUFPNT3bits absolute 0x424;

// backward compatibility for C1BUFPNT4BITS
    typedef struct tagC1BUFPNT4BITS {
      union {
        struct {
          unsigned F12BP:4;
          unsigned F13BP:4;
          unsigned F14BP:4;
          unsigned F15BP:4;
        };
        struct {
          unsigned F12BP0:1;
          unsigned F12BP1:1;
          unsigned F12BP2:1;
          unsigned F12BP3:1;
          unsigned F13BP0:1;
          unsigned F13BP1:1;
          unsigned F13BP2:1;
          unsigned F13BP3:1;
          unsigned F14BP0:1;
          unsigned F14BP1:1;
          unsigned F14BP2:1;
          unsigned F14BP3:1;
          unsigned F15BP0:1;
          unsigned F15BP1:1;
          unsigned F15BP2:1;
          unsigned F15BP3:1;
        };
      };
} typeC1BUFPNT4BITS;
sfr volatile typeC1BUFPNT4BITS C1BUFPNT4bits absolute 0x426;

// backward compatibility for C1RXOVF1BITS
    typedef struct tagC1RXOVF1BITS {
      unsigned RXOVF0:1;
      unsigned RXOVF1:1;
      unsigned RXOVF2:1;
      unsigned RXOVF3:1;
      unsigned RXOVF4:1;
      unsigned RXOVF5:1;
      unsigned RXOVF6:1;
      unsigned RXOVF7:1;
      unsigned RXOVF8:1;
      unsigned RXOVF9:1;
      unsigned RXOVF10:1;
      unsigned RXOVF11:1;
      unsigned RXOVF12:1;
      unsigned RXOVF13:1;
      unsigned RXOVF14:1;
      unsigned RXOVF15:1;
} typeC1RXOVF1BITS;
sfr volatile typeC1RXOVF1BITS C1RXOVF1bits absolute 0x428;

// backward compatibility for C1RXOVF2BITS
    typedef struct tagC1RXOVF2BITS {
      unsigned RXOVF16:1;
      unsigned RXOVF17:1;
      unsigned RXOVF18:1;
      unsigned RXOVF19:1;
      unsigned RXOVF20:1;
      unsigned RXOVF21:1;
      unsigned RXOVF22:1;
      unsigned RXOVF23:1;
      unsigned RXOVF24:1;
      unsigned RXOVF25:1;
      unsigned RXOVF26:1;
      unsigned RXOVF27:1;
      unsigned RXOVF28:1;
      unsigned RXOVF29:1;
      unsigned RXOVF30:1;
      unsigned RXOVF31:1;
} typeC1RXOVF2BITS;
sfr volatile typeC1RXOVF2BITS C1RXOVF2bits absolute 0x42A;

// backward compatibility for C1RXM0SIDBITS
    typedef struct tagC1RXM0SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM0SIDBITS;
sfr volatile typeC1RXM0SIDBITS C1RXM0SIDbits absolute 0x430;

// backward compatibility for C1TR01CONBITS
    typedef struct tagC1TR01CONBITS {
      union {
        struct {
          unsigned TX0PRI:2;
          unsigned RTREN0:1;
          unsigned TXREQ0:1;
          unsigned TXERR0:1;
          unsigned TXLARB0:1;
          unsigned TXABT0:1;
          unsigned TXEN0:1;
          unsigned TX1PRI:2;
          unsigned RTREN1:1;
          unsigned TXREQ1:1;
          unsigned TXERR1:1;
          unsigned TXLARB1:1;
          unsigned TXABT1:1;
          unsigned TXEN1:1;
        };
        struct {
          unsigned TX0PRI0:1;
          unsigned TX0PRI1:1;
          unsigned :6;
          unsigned TX1PRI0:1;
          unsigned TX1PRI1:1;
        };
      };
} typeC1TR01CONBITS;
sfr volatile typeC1TR01CONBITS C1TR01CONbits absolute 0x430;

// backward compatibility for C1RXM0EIDBITS
    typedef struct tagC1RXM0EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM0EIDBITS;
sfr volatile typeC1RXM0EIDBITS C1RXM0EIDbits absolute 0x432;

// backward compatibility for C1TR23CONBITS
    typedef struct tagC1TR23CONBITS {
      union {
        struct {
          unsigned TX2PRI:2;
          unsigned RTREN2:1;
          unsigned TXREQ2:1;
          unsigned TXERR2:1;
          unsigned TXLARB2:1;
          unsigned TXABT2:1;
          unsigned TXEN2:1;
          unsigned TX3PRI:2;
          unsigned RTREN3:1;
          unsigned TXREQ3:1;
          unsigned TXERR3:1;
          unsigned TXLARB3:1;
          unsigned TXABT3:1;
          unsigned TXEN3:1;
        };
        struct {
          unsigned TX2PRI0:1;
          unsigned TX2PRI1:1;
          unsigned :6;
          unsigned TX3PRI0:1;
          unsigned TX3PRI1:1;
        };
      };
} typeC1TR23CONBITS;
sfr volatile typeC1TR23CONBITS C1TR23CONbits absolute 0x432;

// backward compatibility for C1RXM1SIDBITS
    typedef struct tagC1RXM1SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM1SIDBITS;
sfr volatile typeC1RXM1SIDBITS C1RXM1SIDbits absolute 0x434;

// backward compatibility for C1TR45CONBITS
    typedef struct tagC1TR45CONBITS {
      union {
        struct {
          unsigned TX4PRI:2;
          unsigned RTREN4:1;
          unsigned TXREQ4:1;
          unsigned TXERR4:1;
          unsigned TXLARB4:1;
          unsigned TXABT4:1;
          unsigned TXEN4:1;
          unsigned TX5PRI:2;
          unsigned RTREN5:1;
          unsigned TXREQ5:1;
          unsigned TXERR5:1;
          unsigned TXLARB5:1;
          unsigned TXABT5:1;
          unsigned TXEN5:1;
        };
        struct {
          unsigned TX4PRI0:1;
          unsigned TX4PRI1:1;
          unsigned :6;
          unsigned TX5PRI0:1;
          unsigned TX5PRI1:1;
        };
      };
} typeC1TR45CONBITS;
sfr volatile typeC1TR45CONBITS C1TR45CONbits absolute 0x434;

// backward compatibility for C1RXM1EIDBITS
    typedef struct tagC1RXM1EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM1EIDBITS;
sfr volatile typeC1RXM1EIDBITS C1RXM1EIDbits absolute 0x436;

// backward compatibility for C1TR67CONBITS
    typedef struct tagC1TR67CONBITS {
      union {
        struct {
          unsigned TX6PRI:2;
          unsigned RTREN6:1;
          unsigned TXREQ6:1;
          unsigned TXERR6:1;
          unsigned TXLARB6:1;
          unsigned TXABT6:1;
          unsigned TXEN6:1;
          unsigned TX7PRI:2;
          unsigned RTREN7:1;
          unsigned TXREQ7:1;
          unsigned TXERR7:1;
          unsigned TXLARB7:1;
          unsigned TXABT7:1;
          unsigned TXEN7:1;
        };
        struct {
          unsigned TX6PRI0:1;
          unsigned TX6PRI1:1;
          unsigned :6;
          unsigned TX7PRI0:1;
          unsigned TX7PRI1:1;
        };
      };
} typeC1TR67CONBITS;
sfr volatile typeC1TR67CONBITS C1TR67CONbits absolute 0x436;

// backward compatibility for C1RXM2SIDBITS
    typedef struct tagC1RXM2SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM2SIDBITS;
sfr volatile typeC1RXM2SIDBITS C1RXM2SIDbits absolute 0x438;

// backward compatibility for C1RXM2EIDBITS
    typedef struct tagC1RXM2EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM2EIDBITS;
sfr volatile typeC1RXM2EIDBITS C1RXM2EIDbits absolute 0x43A;

// backward compatibility for C1RXF0SIDBITS
    typedef struct tagC1RXF0SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF0SIDBITS;
sfr volatile typeC1RXF0SIDBITS C1RXF0SIDbits absolute 0x440;

// backward compatibility for C1RXF0EIDBITS
    typedef struct tagC1RXF0EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF0EIDBITS;
sfr volatile typeC1RXF0EIDBITS C1RXF0EIDbits absolute 0x442;

// backward compatibility for C1TXDBITS
    typedef struct tagC1TXDBITS {
      unsigned :16;
      unsigned C1TXD:16;
} typeC1TXDBITS;
sfr volatile typeC1TXDBITS C1TXDbits absolute 0x442;

// backward compatibility for C1RXF1SIDBITS
    typedef struct tagC1RXF1SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF1SIDBITS;
sfr volatile typeC1RXF1SIDBITS C1RXF1SIDbits absolute 0x444;

// backward compatibility for C1RXF1EIDBITS
    typedef struct tagC1RXF1EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF1EIDBITS;
sfr volatile typeC1RXF1EIDBITS C1RXF1EIDbits absolute 0x446;

// backward compatibility for C1RXF2SIDBITS
    typedef struct tagC1RXF2SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF2SIDBITS;
sfr volatile typeC1RXF2SIDBITS C1RXF2SIDbits absolute 0x448;

// backward compatibility for C1RXF2EIDBITS
    typedef struct tagC1RXF2EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF2EIDBITS;
sfr volatile typeC1RXF2EIDBITS C1RXF2EIDbits absolute 0x44A;

// backward compatibility for C1RXF3SIDBITS
    typedef struct tagC1RXF3SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF3SIDBITS;
sfr volatile typeC1RXF3SIDBITS C1RXF3SIDbits absolute 0x44C;

// backward compatibility for C1RXF3EIDBITS
    typedef struct tagC1RXF3EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF3EIDBITS;
sfr volatile typeC1RXF3EIDBITS C1RXF3EIDbits absolute 0x44E;

// backward compatibility for C1RXF4SIDBITS
    typedef struct tagC1RXF4SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF4SIDBITS;
sfr volatile typeC1RXF4SIDBITS C1RXF4SIDbits absolute 0x450;

// backward compatibility for C1RXF4EIDBITS
    typedef struct tagC1RXF4EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF4EIDBITS;
sfr volatile typeC1RXF4EIDBITS C1RXF4EIDbits absolute 0x452;

// backward compatibility for C1RXF5SIDBITS
    typedef struct tagC1RXF5SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF5SIDBITS;
sfr volatile typeC1RXF5SIDBITS C1RXF5SIDbits absolute 0x454;

// backward compatibility for C1RXF5EIDBITS
    typedef struct tagC1RXF5EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF5EIDBITS;
sfr volatile typeC1RXF5EIDBITS C1RXF5EIDbits absolute 0x456;

// backward compatibility for C1RXF6SIDBITS
    typedef struct tagC1RXF6SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF6SIDBITS;
sfr volatile typeC1RXF6SIDBITS C1RXF6SIDbits absolute 0x458;

// backward compatibility for C1RXF6EIDBITS
    typedef struct tagC1RXF6EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF6EIDBITS;
sfr volatile typeC1RXF6EIDBITS C1RXF6EIDbits absolute 0x45A;

// backward compatibility for C1RXF7SIDBITS
    typedef struct tagC1RXF7SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF7SIDBITS;
sfr volatile typeC1RXF7SIDBITS C1RXF7SIDbits absolute 0x45C;

// backward compatibility for C1RXF7EIDBITS
    typedef struct tagC1RXF7EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF7EIDBITS;
sfr volatile typeC1RXF7EIDBITS C1RXF7EIDbits absolute 0x45E;

// backward compatibility for C1RXF8SIDBITS
    typedef struct tagC1RXF8SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF8SIDBITS;
sfr volatile typeC1RXF8SIDBITS C1RXF8SIDbits absolute 0x460;

// backward compatibility for C1RXF8EIDBITS
    typedef struct tagC1RXF8EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF8EIDBITS;
sfr volatile typeC1RXF8EIDBITS C1RXF8EIDbits absolute 0x462;

// backward compatibility for C1RXF9SIDBITS
    typedef struct tagC1RXF9SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF9SIDBITS;
sfr volatile typeC1RXF9SIDBITS C1RXF9SIDbits absolute 0x464;

// backward compatibility for C1RXF9EIDBITS
    typedef struct tagC1RXF9EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF9EIDBITS;
sfr volatile typeC1RXF9EIDBITS C1RXF9EIDbits absolute 0x466;

// backward compatibility for C1RXF10SIDBITS
    typedef struct tagC1RXF10SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF10SIDBITS;
sfr volatile typeC1RXF10SIDBITS C1RXF10SIDbits absolute 0x468;

// backward compatibility for C1RXF10EIDBITS
    typedef struct tagC1RXF10EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF10EIDBITS;
sfr volatile typeC1RXF10EIDBITS C1RXF10EIDbits absolute 0x46A;

// backward compatibility for C1RXF11SIDBITS
    typedef struct tagC1RXF11SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF11SIDBITS;
sfr volatile typeC1RXF11SIDBITS C1RXF11SIDbits absolute 0x46C;

// backward compatibility for C1RXF11EIDBITS
    typedef struct tagC1RXF11EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF11EIDBITS;
sfr volatile typeC1RXF11EIDBITS C1RXF11EIDbits absolute 0x46E;

// backward compatibility for C1RXF12SIDBITS
    typedef struct tagC1RXF12SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF12SIDBITS;
sfr volatile typeC1RXF12SIDBITS C1RXF12SIDbits absolute 0x470;

// backward compatibility for C1RXF12EIDBITS
    typedef struct tagC1RXF12EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF12EIDBITS;
sfr volatile typeC1RXF12EIDBITS C1RXF12EIDbits absolute 0x472;

// backward compatibility for C1RXF13SIDBITS
    typedef struct tagC1RXF13SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF13SIDBITS;
sfr volatile typeC1RXF13SIDBITS C1RXF13SIDbits absolute 0x474;

// backward compatibility for C1RXF13EIDBITS
    typedef struct tagC1RXF13EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF13EIDBITS;
sfr volatile typeC1RXF13EIDBITS C1RXF13EIDbits absolute 0x476;

// backward compatibility for C1RXF14SIDBITS
    typedef struct tagC1RXF14SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF14SIDBITS;
sfr volatile typeC1RXF14SIDBITS C1RXF14SIDbits absolute 0x478;

// backward compatibility for C1RXF14EIDBITS
    typedef struct tagC1RXF14EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF14EIDBITS;
sfr volatile typeC1RXF14EIDBITS C1RXF14EIDbits absolute 0x47A;

// backward compatibility for C1RXF15SIDBITS
    typedef struct tagC1RXF15SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
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
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF15SIDBITS;
sfr volatile typeC1RXF15SIDBITS C1RXF15SIDbits absolute 0x47C;

// backward compatibility for C1RXF15EIDBITS
    typedef struct tagC1RXF15EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
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
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF15EIDBITS;
sfr volatile typeC1RXF15EIDBITS C1RXF15EIDbits absolute 0x47E;

// backward compatibility for CRCCON1BITS
    typedef struct tagCRCCON1BITS {
      union {
        struct {
          unsigned :3;
          unsigned LENDIAN:1;
          unsigned CRCGO:1;
          unsigned CRCISEL:1;
          unsigned CRCMPT:1;
          unsigned CRCFUL:1;
          unsigned VWORD:5;
          unsigned CSIDL:1;
          unsigned :1;
          unsigned CRCEN:1;
        };
        struct {
          unsigned :8;
          unsigned VWORD0:1;
          unsigned VWORD1:1;
          unsigned VWORD2:1;
          unsigned VWORD3:1;
          unsigned VWORD4:1;
        };
      };
} typeCRCCON1BITS;
sfr volatile typeCRCCON1BITS CRCCON1bits absolute 0x640;

// backward compatibility for CRCCON2BITS
    typedef struct tagCRCCON2BITS {
      union {
        struct {
          unsigned PLEN:5;
          unsigned :3;
          unsigned DWIDTH:5;
        };
        struct {
          unsigned PLEN0:1;
          unsigned PLEN1:1;
          unsigned PLEN2:1;
          unsigned PLEN3:1;
          unsigned PLEN4:1;
          unsigned :3;
          unsigned DWIDTH0:1;
          unsigned DWIDTH1:1;
          unsigned DWIDTH2:1;
          unsigned DWIDTH3:1;
          unsigned DWIDTH4:1;
        };
      };
} typeCRCCON2BITS;
sfr volatile typeCRCCON2BITS CRCCON2bits absolute 0x642;

// backward compatibility for CRCXORLBITS
    typedef struct tagCRCXORLBITS {
      unsigned :1;
      unsigned X1:1;
      unsigned X2:1;
      unsigned X3:1;
      unsigned X4:1;
      unsigned X5:1;
      unsigned X6:1;
      unsigned X7:1;
      unsigned X8:1;
      unsigned X9:1;
      unsigned X10:1;
      unsigned X11:1;
      unsigned X12:1;
      unsigned X13:1;
      unsigned X14:1;
      unsigned X15:1;
} typeCRCXORLBITS;
sfr volatile typeCRCXORLBITS CRCXORLbits absolute 0x644;

// backward compatibility for CRCXORHBITS
    typedef struct tagCRCXORHBITS {
      unsigned X16:1;
      unsigned X17:1;
      unsigned X18:1;
      unsigned X19:1;
      unsigned X20:1;
      unsigned X21:1;
      unsigned X22:1;
      unsigned X23:1;
      unsigned X24:1;
      unsigned X25:1;
      unsigned X26:1;
      unsigned X27:1;
      unsigned X28:1;
      unsigned X29:1;
      unsigned X30:1;
      unsigned X31:1;
} typeCRCXORHBITS;
sfr volatile typeCRCXORHBITS CRCXORHbits absolute 0x646;

// backward compatibility for RPOR0BITS
    typedef struct tagRPOR0BITS {
      union {
        struct {
          unsigned RP20R:6;
          unsigned :2;
          unsigned RP35R:6;
        };
        struct {
          unsigned RP20R0:1;
          unsigned RP20R1:1;
          unsigned RP20R2:1;
          unsigned RP20R3:1;
          unsigned RP20R4:1;
          unsigned RP20R5:1;
          unsigned :2;
          unsigned RP35R0:1;
          unsigned RP35R1:1;
          unsigned RP35R2:1;
          unsigned RP35R3:1;
          unsigned RP35R4:1;
          unsigned RP35R5:1;
        };
      };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x680;

// backward compatibility for RPOR1BITS
    typedef struct tagRPOR1BITS {
      union {
        struct {
          unsigned RP36R:6;
          unsigned :2;
          unsigned RP37R:6;
        };
        struct {
          unsigned RP36R0:1;
          unsigned RP36R1:1;
          unsigned RP36R2:1;
          unsigned RP36R3:1;
          unsigned RP36R4:1;
          unsigned RP36R5:1;
          unsigned :2;
          unsigned RP37R0:1;
          unsigned RP37R1:1;
          unsigned RP37R2:1;
          unsigned RP37R3:1;
          unsigned RP37R4:1;
          unsigned RP37R5:1;
        };
      };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x682;

// backward compatibility for RPOR2BITS
    typedef struct tagRPOR2BITS {
      union {
        struct {
          unsigned RP38R:6;
          unsigned :2;
          unsigned RP39R:6;
        };
        struct {
          unsigned RP38R0:1;
          unsigned RP38R1:1;
          unsigned RP38R2:1;
          unsigned RP38R3:1;
          unsigned RP38R4:1;
          unsigned RP38R5:1;
          unsigned :2;
          unsigned RP39R0:1;
          unsigned RP39R1:1;
          unsigned RP39R2:1;
          unsigned RP39R3:1;
          unsigned RP39R4:1;
          unsigned RP39R5:1;
        };
      };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x684;

// backward compatibility for RPOR3BITS
    typedef struct tagRPOR3BITS {
      union {
        struct {
          unsigned RP40R:6;
          unsigned :2;
          unsigned RP41R:6;
        };
        struct {
          unsigned RP40R0:1;
          unsigned RP40R1:1;
          unsigned RP40R2:1;
          unsigned RP40R3:1;
          unsigned RP40R4:1;
          unsigned RP40R5:1;
          unsigned :2;
          unsigned RP41R0:1;
          unsigned RP41R1:1;
          unsigned RP41R2:1;
          unsigned RP41R3:1;
          unsigned RP41R4:1;
          unsigned RP41R5:1;
        };
      };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x686;

// backward compatibility for RPOR4BITS
    typedef struct tagRPOR4BITS {
      union {
        struct {
          unsigned RP42R:6;
          unsigned :2;
          unsigned RP43R:6;
        };
        struct {
          unsigned RP42R0:1;
          unsigned RP42R1:1;
          unsigned RP42R2:1;
          unsigned RP42R3:1;
          unsigned RP42R4:1;
          unsigned RP42R5:1;
          unsigned :2;
          unsigned RP43R0:1;
          unsigned RP43R1:1;
          unsigned RP43R2:1;
          unsigned RP43R3:1;
          unsigned RP43R4:1;
          unsigned RP43R5:1;
        };
      };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x688;

// backward compatibility for RPOR5BITS
    typedef struct tagRPOR5BITS {
      union {
        struct {
          unsigned RP54R:6;
          unsigned :2;
          unsigned RP55R:6;
        };
        struct {
          unsigned RP54R0:1;
          unsigned RP54R1:1;
          unsigned RP54R2:1;
          unsigned RP54R3:1;
          unsigned RP54R4:1;
          unsigned RP54R5:1;
          unsigned :2;
          unsigned RP55R0:1;
          unsigned RP55R1:1;
          unsigned RP55R2:1;
          unsigned RP55R3:1;
          unsigned RP55R4:1;
          unsigned RP55R5:1;
        };
      };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x68A;

// backward compatibility for RPOR6BITS
    typedef struct tagRPOR6BITS {
      union {
        struct {
          unsigned RP56R:6;
          unsigned :2;
          unsigned RP57R:6;
        };
        struct {
          unsigned RP56R0:1;
          unsigned RP56R1:1;
          unsigned RP56R2:1;
          unsigned RP56R3:1;
          unsigned RP56R4:1;
          unsigned RP56R5:1;
          unsigned :2;
          unsigned RP57R0:1;
          unsigned RP57R1:1;
          unsigned RP57R2:1;
          unsigned RP57R3:1;
          unsigned RP57R4:1;
          unsigned RP57R5:1;
        };
      };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x68C;

// backward compatibility for RPOR7BITS
    typedef struct tagRPOR7BITS {
      union {
        struct {
          unsigned :8;
          unsigned RP97R:6;
        };
        struct {
          unsigned :8;
          unsigned RP97R0:1;
          unsigned RP97R1:1;
          unsigned RP97R2:1;
          unsigned RP97R3:1;
          unsigned RP97R4:1;
          unsigned RP97R5:1;
        };
      };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x68E;

// backward compatibility for RPOR8BITS
    typedef struct tagRPOR8BITS {
      union {
        struct {
          unsigned :8;
          unsigned RP118R:6;
        };
        struct {
          unsigned :8;
          unsigned RP118R0:1;
          unsigned RP118R1:1;
          unsigned RP118R2:1;
          unsigned RP118R3:1;
          unsigned RP118R4:1;
          unsigned RP118R5:1;
        };
      };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x690;

// backward compatibility for RPOR9BITS
    typedef struct tagRPOR9BITS {
      union {
        struct {
          unsigned RP120R:6;
        };
        struct {
          unsigned RP120R0:1;
          unsigned RP120R1:1;
          unsigned RP120R2:1;
          unsigned RP120R3:1;
          unsigned RP120R4:1;
          unsigned RP120R5:1;
        };
      };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x692;

// backward compatibility for RPINR0BITS
    typedef struct tagRPINR0BITS {
      union {
        struct {
          unsigned :8;
          unsigned INT1R:7;
        };
        struct {
          unsigned :8;
          unsigned INT1R0:1;
          unsigned INT1R1:1;
          unsigned INT1R2:1;
          unsigned INT1R3:1;
          unsigned INT1R4:1;
          unsigned INT1R5:1;
          unsigned INT1R6:1;
        };
      };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x6A0;

// backward compatibility for RPINR1BITS
    typedef struct tagRPINR1BITS {
      union {
        struct {
          unsigned INT2R:7;
        };
        struct {
          unsigned INT2R0:1;
          unsigned INT2R1:1;
          unsigned INT2R2:1;
          unsigned INT2R3:1;
          unsigned INT2R4:1;
          unsigned INT2R5:1;
          unsigned INT2R6:1;
        };
      };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x6A2;

// backward compatibility for RPINR3BITS
    typedef struct tagRPINR3BITS {
      union {
        struct {
          unsigned T2CKR:7;
        };
        struct {
          unsigned T2CKR0:1;
          unsigned T2CKR1:1;
          unsigned T2CKR2:1;
          unsigned T2CKR3:1;
          unsigned T2CKR4:1;
          unsigned T2CKR5:1;
          unsigned T2CKR6:1;
        };
      };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x6A6;

// backward compatibility for RPINR7BITS
    typedef struct tagRPINR7BITS {
      union {
        struct {
          unsigned IC1R:7;
          unsigned :1;
          unsigned IC2R:7;
        };
        struct {
          unsigned IC1R0:1;
          unsigned IC1R1:1;
          unsigned IC1R2:1;
          unsigned IC1R3:1;
          unsigned IC1R4:1;
          unsigned IC1R5:1;
          unsigned IC1R6:1;
          unsigned :1;
          unsigned IC2R0:1;
          unsigned IC2R1:1;
          unsigned IC2R2:1;
          unsigned IC2R3:1;
          unsigned IC2R4:1;
          unsigned IC2R5:1;
          unsigned IC2R6:1;
        };
      };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x6AE;

// backward compatibility for RPINR8BITS
    typedef struct tagRPINR8BITS {
      union {
        struct {
          unsigned IC3R:7;
          unsigned :1;
          unsigned IC4R:7;
        };
        struct {
          unsigned IC3R0:1;
          unsigned IC3R1:1;
          unsigned IC3R2:1;
          unsigned IC3R3:1;
          unsigned IC3R4:1;
          unsigned IC3R5:1;
          unsigned IC3R6:1;
          unsigned :1;
          unsigned IC4R0:1;
          unsigned IC4R1:1;
          unsigned IC4R2:1;
          unsigned IC4R3:1;
          unsigned IC4R4:1;
          unsigned IC4R5:1;
          unsigned IC4R6:1;
        };
      };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x6B0;

// backward compatibility for RPINR11BITS
    typedef struct tagRPINR11BITS {
      union {
        struct {
          unsigned OCFAR:7;
        };
        struct {
          unsigned OCFAR0:1;
          unsigned OCFAR1:1;
          unsigned OCFAR2:1;
          unsigned OCFAR3:1;
          unsigned OCFAR4:1;
          unsigned OCFAR5:1;
          unsigned OCFAR6:1;
        };
      };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x6B6;

// backward compatibility for RPINR18BITS
    typedef struct tagRPINR18BITS {
      union {
        struct {
          unsigned U1RXR:7;
        };
        struct {
          unsigned U1RXR0:1;
          unsigned U1RXR1:1;
          unsigned U1RXR2:1;
          unsigned U1RXR3:1;
          unsigned U1RXR4:1;
          unsigned U1RXR5:1;
          unsigned U1RXR6:1;
        };
      };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6C4;

// backward compatibility for RPINR19BITS
    typedef struct tagRPINR19BITS {
      union {
        struct {
          unsigned U2RXR:7;
        };
        struct {
          unsigned U2RXR0:1;
          unsigned U2RXR1:1;
          unsigned U2RXR2:1;
          unsigned U2RXR3:1;
          unsigned U2RXR4:1;
          unsigned U2RXR5:1;
          unsigned U2RXR6:1;
        };
      };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6C6;

// backward compatibility for RPINR22BITS
    typedef struct tagRPINR22BITS {
      union {
        struct {
          unsigned SDI2R:7;
          unsigned :1;
          unsigned SCK2R:7;
        };
        struct {
          unsigned SDI2R0:1;
          unsigned SDI2R1:1;
          unsigned SDI2R2:1;
          unsigned SDI2R3:1;
          unsigned SDI2R4:1;
          unsigned SDI2R5:1;
          unsigned SDI2R6:1;
          unsigned :1;
          unsigned SCK2R0:1;
          unsigned SCK2R1:1;
          unsigned SCK2R2:1;
          unsigned SCK2R3:1;
          unsigned SCK2R4:1;
          unsigned SCK2R5:1;
          unsigned SCK2R6:1;
        };
      };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6CC;

// backward compatibility for RPINR23BITS
    typedef struct tagRPINR23BITS {
      union {
        struct {
          unsigned SS2R:7;
        };
        struct {
          unsigned SS2R0:1;
          unsigned SS2R1:1;
          unsigned SS2R2:1;
          unsigned SS2R3:1;
          unsigned SS2R4:1;
          unsigned SS2R5:1;
          unsigned SS2R6:1;
        };
      };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6CE;

// backward compatibility for RPINR26BITS
    typedef struct tagRPINR26BITS {
      union {
        struct {
          unsigned C1RXR:7;
        };
        struct {
          unsigned C1RXR0:1;
          unsigned C1RXR1:1;
          unsigned C1RXR2:1;
          unsigned C1RXR3:1;
          unsigned C1RXR4:1;
          unsigned C1RXR5:1;
          unsigned C1RXR6:1;
        };
      };
} typeRPINR26BITS;
sfr volatile typeRPINR26BITS RPINR26bits absolute 0x6D4;

// backward compatibility for NVMCONBITS
    typedef struct tagNVMCONBITS {
      union {
        struct {
          unsigned NVMOP:4;
          unsigned :8;
          unsigned NVMSIDL:1;
          unsigned WRERR:1;
          unsigned WREN:1;
          unsigned WR:1;
        };
        struct {
          unsigned NVMOP0:1;
          unsigned NVMOP1:1;
          unsigned NVMOP2:1;
          unsigned NVMOP3:1;
        };
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x728;

// backward compatibility for NVMADRUBITS
    typedef struct tagNVMADRUBITS {
      unsigned NVMADRU:8;
} typeNVMADRUBITS;
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x72C;

// backward compatibility for RCONBITS
    typedef struct tagRCONBITS {
      unsigned POR:1;
      unsigned BOR:1;
      unsigned IDLE:1;
      unsigned SLEEP:1;
      unsigned WDTO:1;
      unsigned SWDTEN:1;
      unsigned SWR:1;
      unsigned EXTR:1;
      unsigned VREGS:1;
      unsigned CM:1;
      unsigned :1;
      unsigned VREGSF:1;
      unsigned :2;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned :2;
          unsigned CF:1;
          unsigned :1;
          unsigned LOCK:1;
          unsigned IOLOCK:1;
          unsigned CLKLOCK:1;
          unsigned NOSC:3;
          unsigned :1;
          unsigned COSC:3;
        };
        struct {
          unsigned :8;
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

// backward compatibility for CLKDIVBITS
    typedef struct tagCLKDIVBITS {
      union {
        struct {
          unsigned PLLPRE:5;
          unsigned :1;
          unsigned PLLPOST:2;
          unsigned FRCDIV:3;
          unsigned DOZEN:1;
          unsigned DOZE:3;
          unsigned ROI:1;
        };
        struct {
          unsigned PLLPRE0:1;
          unsigned PLLPRE1:1;
          unsigned PLLPRE2:1;
          unsigned PLLPRE3:1;
          unsigned PLLPRE4:1;
          unsigned :1;
          unsigned PLLPOST0:1;
          unsigned PLLPOST1:1;
          unsigned FRCDIV0:1;
          unsigned FRCDIV1:1;
          unsigned FRCDIV2:1;
          unsigned :1;
          unsigned DOZE0:1;
          unsigned DOZE1:1;
          unsigned DOZE2:1;
        };
      };
} typeCLKDIVBITS;
sfr volatile typeCLKDIVBITS CLKDIVbits absolute 0x744;

// backward compatibility for PLLFBDBITS
    typedef struct tagPLLFBDBITS {
      union {
        struct {
          unsigned PLLDIV:9;
        };
        struct {
          unsigned PLLDIV0:1;
          unsigned PLLDIV1:1;
          unsigned PLLDIV2:1;
          unsigned PLLDIV3:1;
          unsigned PLLDIV4:1;
          unsigned PLLDIV5:1;
          unsigned PLLDIV6:1;
          unsigned PLLDIV7:1;
          unsigned PLLDIV8:1;
        };
      };
} typePLLFBDBITS;
sfr volatile typePLLFBDBITS PLLFBDbits absolute 0x746;

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      union {
        struct {
          unsigned TUN:6;
        };
        struct {
          unsigned TUN0:1;
          unsigned TUN1:1;
          unsigned TUN2:1;
          unsigned TUN3:1;
          unsigned TUN4:1;
          unsigned TUN5:1;
        };
      };
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x748;

// backward compatibility for REFOCONBITS
    typedef struct tagREFOCONBITS {
      union {
        struct {
          unsigned :8;
          unsigned RODIV:4;
          unsigned ROSEL:1;
          unsigned ROSSLP:1;
          unsigned :1;
          unsigned ROON:1;
        };
        struct {
          unsigned :8;
          unsigned RODIV0:1;
          unsigned RODIV1:1;
          unsigned RODIV2:1;
          unsigned RODIV3:1;
        };
      };
} typeREFOCONBITS;
sfr volatile typeREFOCONBITS REFOCONbits absolute 0x74E;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned AD1MD:1;
      unsigned C1MD:1;
      unsigned :1;
      unsigned SPI1MD:1;
      unsigned SPI2MD:1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2C1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
      unsigned T5MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x760;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned :4;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x762;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned :5;
      unsigned CRCMD:1;
      unsigned :2;
      unsigned CMPMD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x764;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      unsigned :2;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x766;

// backward compatibility for PMD7BITS
    typedef struct tagPMD7BITS {
      union {
        struct {
          unsigned :3;
          unsigned PTGMD:1;
          unsigned DMA0MD:1;
        };
        struct {
          unsigned :4;
          unsigned DMA1MD:1;
          unsigned DMA5MD:1;
          unsigned DMA9MD:1;
          unsigned DMA13MD:1;
        };
        struct {
          unsigned :4;
          unsigned DMA2MD:1;
          unsigned DMA6MD:1;
          unsigned DMA10MD:1;
          unsigned DMA14MD:1;
        };
        struct {
          unsigned :4;
          unsigned DMA3MD:1;
          unsigned DMA7MD:1;
          unsigned DMA11MD:1;
        };
      };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x76C;

// backward compatibility for IFS0BITS
    typedef struct tagIFS0BITS {
      unsigned INT0IF:1;
      unsigned IC1IF:1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned DMA0IF:1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1EIF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
      unsigned DMA1IF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x800;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned CMIF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :3;
      unsigned DMA2IF:1;
      unsigned OC3IF:1;
      unsigned OC4IF:1;
      unsigned T4IF:1;
      unsigned T5IF:1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x802;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned SPI2EIF:1;
      unsigned SPI2IF:1;
      unsigned C1RXIF:1;
      unsigned C1IF:1;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x804;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x806;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1EIF:1;
      unsigned U2EIF:1;
      unsigned CRCIF:1;
      unsigned :2;
      unsigned C1TXIF:1;
      unsigned :6;
      unsigned CTMUIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x808;

// backward compatibility for IFS8BITS
    typedef struct tagIFS8BITS {
      unsigned :14;
      unsigned ICDIF:1;
      unsigned JTAGIF:1;
} typeIFS8BITS;
sfr volatile typeIFS8BITS IFS8bits absolute 0x810;

// backward compatibility for IFS9BITS
    typedef struct tagIFS9BITS {
      unsigned :1;
      unsigned PTGSTEPIF:1;
      unsigned PTGWDTIF:1;
      unsigned PTG0IF:1;
      unsigned PTG1IF:1;
      unsigned PTG2IF:1;
      unsigned PTG3IF:1;
} typeIFS9BITS;
sfr volatile typeIFS9BITS IFS9bits absolute 0x812;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned DMA0IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1EIE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
      unsigned DMA1IE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x820;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned CMIE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :3;
      unsigned DMA2IE:1;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x822;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned SPI2EIE:1;
      unsigned SPI2IE:1;
      unsigned C1RXIE:1;
      unsigned C1IE:1;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x824;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x826;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1EIE:1;
      unsigned U2EIE:1;
      unsigned CRCIE:1;
      unsigned :2;
      unsigned C1TXIE:1;
      unsigned :6;
      unsigned CTMUIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x828;

// backward compatibility for IEC8BITS
    typedef struct tagIEC8BITS {
      unsigned :14;
      unsigned ICDIF:1;
      unsigned JTAGIE:1;
} typeIEC8BITS;
sfr volatile typeIEC8BITS IEC8bits absolute 0x830;

// backward compatibility for IEC9BITS
    typedef struct tagIEC9BITS {
      unsigned :1;
      unsigned PTGSTEPIE:1;
      unsigned PTGWDTIE:1;
      unsigned PTG0IE:1;
      unsigned PTG1IE:1;
      unsigned PTG2IE:1;
      unsigned PTG3IE:1;
} typeIEC9BITS;
sfr volatile typeIEC9BITS IEC9bits absolute 0x832;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0x840;

// backward compatibility for IPC1BITS
    typedef struct tagIPC1BITS {
      union {
        struct {
          unsigned DMA0IP:3;
          unsigned :1;
          unsigned IC2IP:3;
          unsigned :1;
          unsigned OC2IP:3;
          unsigned :1;
          unsigned T2IP:3;
        };
        struct {
          unsigned DMA0IP0:1;
          unsigned DMA0IP1:1;
          unsigned DMA0IP2:1;
          unsigned :1;
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
        };
      };
} typeIPC1BITS;
sfr volatile typeIPC1BITS IPC1bits absolute 0x842;

// backward compatibility for IPC2BITS
    typedef struct tagIPC2BITS {
      union {
        struct {
          unsigned T3IP:3;
          unsigned :1;
          unsigned SPI1EIP:3;
          unsigned :1;
          unsigned SPI1IP:3;
          unsigned :1;
          unsigned U1RXIP:3;
        };
        struct {
          unsigned T3IP0:1;
          unsigned T3IP1:1;
          unsigned T3IP2:1;
          unsigned :1;
          unsigned SPI1EIP0:1;
          unsigned SPI1EIP1:1;
          unsigned SPI1EIP2:1;
          unsigned :1;
          unsigned SPI1IP0:1;
          unsigned SPI1IP1:1;
          unsigned SPI1IP2:1;
          unsigned :1;
          unsigned U1RXIP0:1;
          unsigned U1RXIP1:1;
          unsigned U1RXIP2:1;
        };
      };
} typeIPC2BITS;
sfr volatile typeIPC2BITS IPC2bits absolute 0x844;

// backward compatibility for IPC3BITS
    typedef struct tagIPC3BITS {
      union {
        struct {
          unsigned U1TXIP:3;
          unsigned :1;
          unsigned AD1IP:3;
          unsigned :1;
          unsigned DMA1IP:3;
        };
        struct {
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned AD1IP0:1;
          unsigned AD1IP1:1;
          unsigned AD1IP2:1;
          unsigned :1;
          unsigned DMA1IP0:1;
          unsigned DMA1IP1:1;
          unsigned DMA1IP2:1;
          unsigned :1;
          unsigned NVMIP0:1;
          unsigned NVMIP1:1;
          unsigned NVMIP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x846;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned SI2C1IP:3;
          unsigned :1;
          unsigned MI2C1IP:3;
          unsigned :1;
          unsigned CMIP:3;
          unsigned :1;
          unsigned CNIP:3;
        };
        struct {
          unsigned SI2C1IP0:1;
          unsigned SI2C1IP1:1;
          unsigned SI2C1IP2:1;
          unsigned :1;
          unsigned MI2C1IP0:1;
          unsigned MI2C1IP1:1;
          unsigned MI2C1IP2:1;
          unsigned :1;
          unsigned CMIP0:1;
          unsigned CMIP1:1;
          unsigned CMIP2:1;
          unsigned :1;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x848;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned INT1IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x84A;

// backward compatibility for IPC6BITS
    typedef struct tagIPC6BITS {
      union {
        struct {
          unsigned DMA2IP:3;
          unsigned :1;
          unsigned OC3IP:3;
          unsigned :1;
          unsigned OC4IP:3;
          unsigned :1;
          unsigned T4IP:3;
        };
        struct {
          unsigned DMA2IP0:1;
          unsigned DMA2IP1:1;
          unsigned DMA2IP2:1;
          unsigned :1;
          unsigned OC3IP0:1;
          unsigned OC3IP1:1;
          unsigned OC3IP2:1;
          unsigned :1;
          unsigned OC4IP0:1;
          unsigned OC4IP1:1;
          unsigned OC4IP2:1;
          unsigned :1;
          unsigned T4IP0:1;
          unsigned T4IP1:1;
          unsigned T4IP2:1;
        };
      };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0x84C;

// backward compatibility for IPC7BITS
    typedef struct tagIPC7BITS {
      union {
        struct {
          unsigned T5IP:3;
          unsigned :1;
          unsigned INT2IP:3;
          unsigned :1;
          unsigned U2RXIP:3;
          unsigned :1;
          unsigned U2TXIP:3;
        };
        struct {
          unsigned T5IP0:1;
          unsigned T5IP1:1;
          unsigned T5IP2:1;
          unsigned :1;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
          unsigned :1;
          unsigned U2RXIP0:1;
          unsigned U2RXIP1:1;
          unsigned U2RXIP2:1;
          unsigned :1;
          unsigned U2TXIP0:1;
          unsigned U2TXIP1:1;
          unsigned U2TXIP2:1;
        };
      };
} typeIPC7BITS;
sfr volatile typeIPC7BITS IPC7bits absolute 0x84E;

// backward compatibility for IPC8BITS
    typedef struct tagIPC8BITS {
      union {
        struct {
          unsigned SPI2EIP:3;
          unsigned :1;
          unsigned SPI2IP:3;
          unsigned :1;
          unsigned C1RXIP:3;
          unsigned :1;
          unsigned C1IP:3;
        };
        struct {
          unsigned SPI2EIP0:1;
          unsigned SPI2EIP1:1;
          unsigned SPI2EIP2:1;
          unsigned :1;
          unsigned SPI2IP0:1;
          unsigned SPI2IP1:1;
          unsigned SPI2IP2:1;
          unsigned :1;
          unsigned C1RXIP0:1;
          unsigned C1RXIP1:1;
          unsigned C1RXIP2:1;
          unsigned :1;
          unsigned C1IP0:1;
          unsigned C1IP1:1;
          unsigned C1IP2:1;
        };
      };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0x850;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned DMA3IP:3;
          unsigned :1;
          unsigned IC3IP:3;
          unsigned :1;
          unsigned IC4IP:3;
        };
        struct {
          unsigned DMA3IP0:1;
          unsigned DMA3IP1:1;
          unsigned DMA3IP2:1;
          unsigned :1;
          unsigned IC3IP0:1;
          unsigned IC3IP1:1;
          unsigned IC3IP2:1;
          unsigned :1;
          unsigned IC4IP0:1;
          unsigned IC4IP1:1;
          unsigned IC4IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x852;

// backward compatibility for IPC12BITS
    typedef struct tagIPC12BITS {
      union {
        struct {
          unsigned :4;
          unsigned SI2C2IP:3;
          unsigned :1;
          unsigned MI2C2IP:3;
        };
        struct {
          unsigned :4;
          unsigned SI2C2IP0:1;
          unsigned SI2C2IP1:1;
          unsigned SI2C2IP2:1;
          unsigned :1;
          unsigned MI2C2IP0:1;
          unsigned MI2C2IP1:1;
          unsigned MI2C2IP2:1;
        };
      };
} typeIPC12BITS;
sfr volatile typeIPC12BITS IPC12bits absolute 0x858;

// backward compatibility for IPC16BITS
    typedef struct tagIPC16BITS {
      union {
        struct {
          unsigned :4;
          unsigned U1EIP:3;
          unsigned :1;
          unsigned U2EIP:3;
          unsigned :1;
          unsigned CRCIP:3;
        };
        struct {
          unsigned :4;
          unsigned U1EIP0:1;
          unsigned U1EIP1:1;
          unsigned U1EIP2:1;
          unsigned :1;
          unsigned U2EIP0:1;
          unsigned U2EIP1:1;
          unsigned U2EIP2:1;
          unsigned :1;
          unsigned CRCIP0:1;
          unsigned CRCIP1:1;
          unsigned CRCIP2:1;
        };
      };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x860;

// backward compatibility for IPC17BITS
    typedef struct tagIPC17BITS {
      union {
        struct {
          unsigned :8;
          unsigned C1TXIP:3;
        };
        struct {
          unsigned :8;
          unsigned C1TXIP0:1;
          unsigned C1TXIP1:1;
          unsigned C1TXIP2:1;
        };
      };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0x862;

// backward compatibility for IPC19BITS
    typedef struct tagIPC19BITS {
      unsigned :4;
      unsigned CTMUIP:3;
} typeIPC19BITS;
sfr volatile typeIPC19BITS IPC19bits absolute 0x866;

// backward compatibility for IPC35BITS
    typedef struct tagIPC35BITS {
      union {
        struct {
          unsigned :8;
          unsigned ICDIP:3;
          unsigned :1;
          unsigned JTAGIP:3;
        };
        struct {
          unsigned :8;
          unsigned ICDIP0:1;
          unsigned ICDIP1:1;
          unsigned ICDIP2:1;
          unsigned :1;
          unsigned JTAGIP0:1;
          unsigned JTAGIP1:1;
          unsigned JTAGIP2:1;
        };
      };
} typeIPC35BITS;
sfr volatile typeIPC35BITS IPC35bits absolute 0x886;

// backward compatibility for IPC36BITS
    typedef struct tagIPC36BITS {
      unsigned :4;
      unsigned PTGSTEPIP:3;
      unsigned :1;
      unsigned PTGWDTIP:3;
      unsigned :1;
      unsigned PTG0IP:3;
} typeIPC36BITS;
sfr volatile typeIPC36BITS IPC36bits absolute 0x888;

// backward compatibility for IPC37BITS
    typedef struct tagIPC37BITS {
      unsigned PTG1IP:3;
      unsigned :1;
      unsigned PTG2IP:3;
      unsigned :1;
      unsigned PTG3IP:3;
} typeIPC37BITS;
sfr volatile typeIPC37BITS IPC37bits absolute 0x88A;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned DMACERR:1;
      unsigned DIV0ERR:1;
      unsigned SFTACERR:1;
      unsigned COVTE:1;
      unsigned OVBTE:1;
      unsigned OVATE:1;
      unsigned COVBERR:1;
      unsigned COVAERR:1;
      unsigned OVBERR:1;
      unsigned OVAERR:1;
      unsigned NSTDIS:1;
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x8C0;

// backward compatibility for INTCON2BITS
    typedef struct tagINTCON2BITS {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned :10;
      unsigned SWTRAP:1;
      unsigned DISI:1;
      unsigned GIE:1;
} typeINTCON2BITS;
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x8C2;

// backward compatibility for INTCON3BITS
    typedef struct tagINTCON3BITS {
      unsigned :4;
      unsigned DOOVR:1;
      unsigned DAE:1;
} typeINTCON3BITS;
sfr volatile typeINTCON3BITS INTCON3bits absolute 0x8C4;

// backward compatibility for INTCON4BITS
    typedef struct tagINTCON4BITS {
      unsigned SGHT:1;
} typeINTCON4BITS;
sfr volatile typeINTCON4BITS INTCON4bits absolute 0x8C6;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:8;
          unsigned ILR:4;
        };
        struct {
          unsigned VECNUM0:1;
          unsigned VECNUM1:1;
          unsigned VECNUM2:1;
          unsigned VECNUM3:1;
          unsigned VECNUM4:1;
          unsigned VECNUM5:1;
          unsigned VECNUM6:1;
          unsigned VECNUM7:1;
          unsigned ILR0:1;
          unsigned ILR1:1;
          unsigned ILR2:1;
          unsigned ILR3:1;
        };
      };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x8C8;

// backward compatibility for OC1CON1BITS
    typedef struct tagOC1CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned :1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned :1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned :1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
        };
      };
} typeOC1CON1BITS;
sfr volatile typeOC1CON1BITS OC1CON1bits absolute 0x900;

// backward compatibility for OC1CON2BITS
    typedef struct tagOC1CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :9;
          unsigned FLTMODE:1;
        };
      };
} typeOC1CON2BITS;
sfr volatile typeOC1CON2BITS OC1CON2bits absolute 0x902;

// backward compatibility for OC
    typedef struct tagOC {
            unsigned int ocxrs;
            unsigned int ocxr;
            unsigned int ocxcon;
} typeOC;
sfr volatile typeOC OC1 absolute 0x904;
sfr volatile typeOC OC2 absolute 0x90E;
sfr volatile typeOC OC3 absolute 0x918;
sfr volatile typeOC OC4 absolute 0x922;

// backward compatibility for OC2CON1BITS
    typedef struct tagOC2CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned :1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned :1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned :1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
        };
      };
} typeOC2CON1BITS;
sfr volatile typeOC2CON1BITS OC2CON1bits absolute 0x90A;

// backward compatibility for OC2CON2BITS
    typedef struct tagOC2CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :9;
          unsigned FLTMODE:1;
        };
      };
} typeOC2CON2BITS;
sfr volatile typeOC2CON2BITS OC2CON2bits absolute 0x90C;

// backward compatibility for OC3CON1BITS
    typedef struct tagOC3CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned :1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned :1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned :1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
        };
      };
} typeOC3CON1BITS;
sfr volatile typeOC3CON1BITS OC3CON1bits absolute 0x914;

// backward compatibility for OC3CON2BITS
    typedef struct tagOC3CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :9;
          unsigned FLTMODE:1;
        };
      };
} typeOC3CON2BITS;
sfr volatile typeOC3CON2BITS OC3CON2bits absolute 0x916;

// backward compatibility for OC4CON1BITS
    typedef struct tagOC4CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned :1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned :1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned :1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
        };
      };
} typeOC4CON1BITS;
sfr volatile typeOC4CON1BITS OC4CON1bits absolute 0x91E;

// backward compatibility for OC4CON2BITS
    typedef struct tagOC4CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :9;
          unsigned FLTMODE:1;
        };
      };
} typeOC4CON2BITS;
sfr volatile typeOC4CON2BITS OC4CON2bits absolute 0x920;

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned C3OUT:1;
      unsigned C4OUT:1;
      unsigned :4;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned C3EVT:1;
      unsigned C4EVT:1;
      unsigned :3;
      unsigned PSIDL:1;
} typeCMSTATBITS;
sfr volatile typeCMSTATBITS CMSTATbits absolute 0xA80;

// backward compatibility for CVRCONBITS
    typedef struct tagCVRCONBITS {
      union {
        struct {
          unsigned CVR:4;
          unsigned CVRSS:1;
          unsigned CVRR:1;
          unsigned CVROE:1;
          unsigned CVREN:1;
          unsigned :2;
          unsigned VREFSEL:1;
          unsigned :3;
          unsigned CVR2OE:1;
        };
        struct {
          unsigned CVR0:1;
          unsigned CVR1:1;
          unsigned CVR2:1;
          unsigned CVR3:1;
          unsigned :2;
          unsigned CVR1OE:1;
        };
      };
} typeCVRCONBITS;
sfr volatile typeCVRCONBITS CVRCONbits absolute 0xA82;

// backward compatibility for CM1CONBITS
    typedef struct tagCM1CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned OPMODE:1;
          unsigned :2;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM1CONBITS;
sfr volatile typeCM1CONBITS CM1CONbits absolute 0xA84;

// backward compatibility for CM1MSKSRCBITS
    typedef struct tagCM1MSKSRCBITS {
      union {
        struct {
          unsigned SELSRCA:4;
          unsigned SELSRCB:4;
          unsigned SELSRCC:4;
        };
        struct {
          unsigned SELSRCA0:1;
          unsigned SELSRCA1:1;
          unsigned SELSRCA2:1;
          unsigned SELSRCA3:1;
          unsigned SELSRCB0:1;
          unsigned SELSRCB1:1;
          unsigned SELSRCB2:1;
          unsigned SELSRCB3:1;
          unsigned SELSRCC0:1;
          unsigned SELSRCC1:1;
          unsigned SELSRCC2:1;
          unsigned SELSRCC3:1;
        };
      };
} typeCM1MSKSRCBITS;
sfr volatile typeCM1MSKSRCBITS CM1MSKSRCbits absolute 0xA86;

// backward compatibility for CM1MSKCONBITS
    typedef struct tagCM1MSKCONBITS {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
} typeCM1MSKCONBITS;
sfr volatile typeCM1MSKCONBITS CM1MSKCONbits absolute 0xA88;

// backward compatibility for CM1FLTRBITS
    typedef struct tagCM1FLTRBITS {
      union {
        struct {
          unsigned CFDIV:3;
          unsigned CFLTREN:1;
          unsigned CFSEL:3;
        };
        struct {
          unsigned CFDIV0:1;
          unsigned CFDIV1:1;
          unsigned CFDIV2:1;
          unsigned :1;
          unsigned CFSEL0:1;
          unsigned CFSEL1:1;
          unsigned CFSEL2:1;
        };
      };
} typeCM1FLTRBITS;
sfr volatile typeCM1FLTRBITS CM1FLTRbits absolute 0xA8A;

// backward compatibility for CM2CONBITS
    typedef struct tagCM2CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned OPMODE:1;
          unsigned :2;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM2CONBITS;
sfr volatile typeCM2CONBITS CM2CONbits absolute 0xA8C;

// backward compatibility for CM2MSKSRCBITS
    typedef struct tagCM2MSKSRCBITS {
      union {
        struct {
          unsigned SELSRCA:4;
          unsigned SELSRCB:4;
          unsigned SELSRCC:4;
        };
        struct {
          unsigned SELSRCA0:1;
          unsigned SELSRCA1:1;
          unsigned SELSRCA2:1;
          unsigned SELSRCA3:1;
          unsigned SELSRCB0:1;
          unsigned SELSRCB1:1;
          unsigned SELSRCB2:1;
          unsigned SELSRCB3:1;
          unsigned SELSRCC0:1;
          unsigned SELSRCC1:1;
          unsigned SELSRCC2:1;
          unsigned SELSRCC3:1;
        };
      };
} typeCM2MSKSRCBITS;
sfr volatile typeCM2MSKSRCBITS CM2MSKSRCbits absolute 0xA8E;

// backward compatibility for CM2MSKCONBITS
    typedef struct tagCM2MSKCONBITS {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
} typeCM2MSKCONBITS;
sfr volatile typeCM2MSKCONBITS CM2MSKCONbits absolute 0xA90;

// backward compatibility for CM2FLTRBITS
    typedef struct tagCM2FLTRBITS {
      union {
        struct {
          unsigned CFDIV:3;
          unsigned CFLTREN:1;
          unsigned CFSEL:3;
        };
        struct {
          unsigned CFDIV0:1;
          unsigned CFDIV1:1;
          unsigned CFDIV2:1;
          unsigned :1;
          unsigned CFSEL0:1;
          unsigned CFSEL1:1;
          unsigned CFSEL2:1;
        };
      };
} typeCM2FLTRBITS;
sfr volatile typeCM2FLTRBITS CM2FLTRbits absolute 0xA92;

// backward compatibility for CM3CONBITS
    typedef struct tagCM3CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned OPMODE:1;
          unsigned :2;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM3CONBITS;
sfr volatile typeCM3CONBITS CM3CONbits absolute 0xA94;

// backward compatibility for CM3MSKSRCBITS
    typedef struct tagCM3MSKSRCBITS {
      union {
        struct {
          unsigned SELSRCA:4;
          unsigned SELSRCB:4;
          unsigned SELSRCC:4;
        };
        struct {
          unsigned SELSRCA0:1;
          unsigned SELSRCA1:1;
          unsigned SELSRCA2:1;
          unsigned SELSRCA3:1;
          unsigned SELSRCB0:1;
          unsigned SELSRCB1:1;
          unsigned SELSRCB2:1;
          unsigned SELSRCB3:1;
          unsigned SELSRCC0:1;
          unsigned SELSRCC1:1;
          unsigned SELSRCC2:1;
          unsigned SELSRCC3:1;
        };
      };
} typeCM3MSKSRCBITS;
sfr volatile typeCM3MSKSRCBITS CM3MSKSRCbits absolute 0xA96;

// backward compatibility for CM3MSKCONBITS
    typedef struct tagCM3MSKCONBITS {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
} typeCM3MSKCONBITS;
sfr volatile typeCM3MSKCONBITS CM3MSKCONbits absolute 0xA98;

// backward compatibility for CM3FLTRBITS
    typedef struct tagCM3FLTRBITS {
      union {
        struct {
          unsigned CFDIV:3;
          unsigned CFLTREN:1;
          unsigned CFSEL:3;
        };
        struct {
          unsigned CFDIV0:1;
          unsigned CFDIV1:1;
          unsigned CFDIV2:1;
          unsigned :1;
          unsigned CFSEL0:1;
          unsigned CFSEL1:1;
          unsigned CFSEL2:1;
        };
      };
} typeCM3FLTRBITS;
sfr volatile typeCM3FLTRBITS CM3FLTRbits absolute 0xA9A;

// backward compatibility for CM4CONBITS
    typedef struct tagCM4CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned :3;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM4CONBITS;
sfr volatile typeCM4CONBITS CM4CONbits absolute 0xA9C;

// backward compatibility for CM4MSKSRCBITS
    typedef struct tagCM4MSKSRCBITS {
      union {
        struct {
          unsigned SELSRCA:4;
          unsigned SELSRCB:4;
          unsigned SELSRCC:4;
        };
        struct {
          unsigned SELSRCA0:1;
          unsigned SELSRCA1:1;
          unsigned SELSRCA2:1;
          unsigned SELSRCA3:1;
          unsigned SELSRCB0:1;
          unsigned SELSRCB1:1;
          unsigned SELSRCB2:1;
          unsigned SELSRCB3:1;
          unsigned SELSRCC0:1;
          unsigned SELSRCC1:1;
          unsigned SELSRCC2:1;
          unsigned SELSRCC3:1;
        };
      };
} typeCM4MSKSRCBITS;
sfr volatile typeCM4MSKSRCBITS CM4MSKSRCbits absolute 0xA9E;

// backward compatibility for CM4MSKCONBITS
    typedef struct tagCM4MSKCONBITS {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
} typeCM4MSKCONBITS;
sfr volatile typeCM4MSKCONBITS CM4MSKCONbits absolute 0xAA0;

// backward compatibility for CM4FLTRBITS
    typedef struct tagCM4FLTRBITS {
      union {
        struct {
          unsigned CFDIV:3;
          unsigned CFLTREN:1;
          unsigned CFSEL:3;
        };
        struct {
          unsigned CFDIV0:1;
          unsigned CFDIV1:1;
          unsigned CFDIV2:1;
          unsigned :1;
          unsigned CFSEL0:1;
          unsigned CFSEL1:1;
          unsigned CFSEL2:1;
        };
      };
} typeCM4FLTRBITS;
sfr volatile typeCM4FLTRBITS CM4FLTRbits absolute 0xAA2;

// backward compatibility for PTGCSTBITS
    typedef struct tagPTGCSTBITS {
      unsigned PTGITM:2;
      unsigned :4;
      unsigned PTGWTO:1;
      unsigned PTGSTRT:1;
      unsigned PTGIVIS:1;
      unsigned PTGSSEN:1;
      unsigned PTGSWT:1;
      unsigned :1;
      unsigned PTGTOGL:1;
      unsigned PTGSIDL:1;
      unsigned :1;
      unsigned PTGEN:1;
} typePTGCSTBITS;
sfr volatile typePTGCSTBITS PTGCSTbits absolute 0xAC0;

// backward compatibility for PTGCONBITS
    typedef struct tagPTGCONBITS {
      unsigned PTGWDT:3;
      unsigned :1;
      unsigned PTGPWD:4;
      unsigned PTGDIV:5;
      unsigned PTGCLK:3;
} typePTGCONBITS;
sfr volatile typePTGCONBITS PTGCONbits absolute 0xAC2;

// backward compatibility for PTGBTEBITS
    typedef struct tagPTGBTEBITS {
      union {
        struct {
          unsigned OC1TSS:1;
          unsigned OC2TSS:1;
          unsigned OC3TSS:1;
          unsigned OC4TSS:1;
          unsigned OC1CS:1;
          unsigned OC2CS:1;
          unsigned OC3CS:1;
          unsigned OC4CS:1;
          unsigned IC1TSS:1;
          unsigned IC2TSS:1;
          unsigned IC3TSS:1;
          unsigned IC4TSS:1;
          unsigned ADCTS1:1;
          unsigned ADCTS2:1;
          unsigned ADCTS3:1;
          unsigned ADCTS4:1;
        };
        struct {
          unsigned PTGBTE:16;
        };
      };
} typePTGBTEBITS;
sfr volatile typePTGBTEBITS PTGBTEbits absolute 0xAC4;

// backward compatibility for PTGQPTRBITS
    typedef struct tagPTGQPTRBITS {
      unsigned PTGQPTR:5;
} typePTGQPTRBITS;
sfr volatile typePTGQPTRBITS PTGQPTRbits absolute 0xAD6;

// backward compatibility for PTGQUE0BITS
    typedef struct tagPTGQUE0BITS {
      unsigned STEP0:8;
      unsigned STEP1:8;
} typePTGQUE0BITS;
sfr volatile typePTGQUE0BITS PTGQUE0bits absolute 0xAD8;

// backward compatibility for PTGQUE1BITS
    typedef struct tagPTGQUE1BITS {
      unsigned STEP2:8;
      unsigned STEP3:8;
} typePTGQUE1BITS;
sfr volatile typePTGQUE1BITS PTGQUE1bits absolute 0xADA;

// backward compatibility for PTGQUE2BITS
    typedef struct tagPTGQUE2BITS {
      unsigned STEP4:8;
      unsigned STEP5:8;
} typePTGQUE2BITS;
sfr volatile typePTGQUE2BITS PTGQUE2bits absolute 0xADC;

// backward compatibility for PTGQUE3BITS
    typedef struct tagPTGQUE3BITS {
      unsigned STEP6:8;
      unsigned STEP7:8;
} typePTGQUE3BITS;
sfr volatile typePTGQUE3BITS PTGQUE3bits absolute 0xADE;

// backward compatibility for PTGQUE4BITS
    typedef struct tagPTGQUE4BITS {
      unsigned STEP8:8;
      unsigned STEP9:8;
} typePTGQUE4BITS;
sfr volatile typePTGQUE4BITS PTGQUE4bits absolute 0xAE0;

// backward compatibility for PTGQUE5BITS
    typedef struct tagPTGQUE5BITS {
      unsigned STEP10:8;
      unsigned STEP11:8;
} typePTGQUE5BITS;
sfr volatile typePTGQUE5BITS PTGQUE5bits absolute 0xAE2;

// backward compatibility for PTGQUE6BITS
    typedef struct tagPTGQUE6BITS {
      unsigned STEP12:8;
      unsigned STEP13:8;
} typePTGQUE6BITS;
sfr volatile typePTGQUE6BITS PTGQUE6bits absolute 0xAE4;

// backward compatibility for PTGQUE7BITS
    typedef struct tagPTGQUE7BITS {
      unsigned STEP14:8;
      unsigned STEP15:8;
} typePTGQUE7BITS;
sfr volatile typePTGQUE7BITS PTGQUE7bits absolute 0xAE6;

// backward compatibility for DMA0CONBITS
    typedef struct tagDMA0CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA0CONBITS;
sfr volatile typeDMA0CONBITS DMA0CONbits absolute 0xB00;

// backward compatibility for DMA0REQBITS
    typedef struct tagDMA0REQBITS {
      union {
        struct {
          unsigned IRQSEL:8;
          unsigned :7;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
          unsigned IRQSEL7:1;
        };
      };
} typeDMA0REQBITS;
sfr volatile typeDMA0REQBITS DMA0REQbits absolute 0xB02;

// backward compatibility for DMA0STAHBITS
    typedef struct tagDMA0STAHBITS {
      unsigned STA:8;
} typeDMA0STAHBITS;
sfr volatile typeDMA0STAHBITS DMA0STAHbits absolute 0xB06;

// backward compatibility for DMA0STBHBITS
    typedef struct tagDMA0STBHBITS {
      unsigned STB:8;
} typeDMA0STBHBITS;
sfr volatile typeDMA0STBHBITS DMA0STBHbits absolute 0xB0A;

// backward compatibility for DMA0CNTBITS
    typedef struct tagDMA0CNTBITS {
      unsigned CNT:14;
} typeDMA0CNTBITS;
sfr volatile typeDMA0CNTBITS DMA0CNTbits absolute 0xB0E;

// backward compatibility for DMA1CONBITS
    typedef struct tagDMA1CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA1CONBITS;
sfr volatile typeDMA1CONBITS DMA1CONbits absolute 0xB10;

// backward compatibility for DMA1REQBITS
    typedef struct tagDMA1REQBITS {
      union {
        struct {
          unsigned IRQSEL:8;
          unsigned :7;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
          unsigned IRQSEL7:1;
        };
      };
} typeDMA1REQBITS;
sfr volatile typeDMA1REQBITS DMA1REQbits absolute 0xB12;

// backward compatibility for DMA1STAHBITS
    typedef struct tagDMA1STAHBITS {
      unsigned STA:8;
} typeDMA1STAHBITS;
sfr volatile typeDMA1STAHBITS DMA1STAHbits absolute 0xB16;

// backward compatibility for DMA1STBHBITS
    typedef struct tagDMA1STBHBITS {
      unsigned STB:8;
} typeDMA1STBHBITS;
sfr volatile typeDMA1STBHBITS DMA1STBHbits absolute 0xB1A;

// backward compatibility for DMA1CNTBITS
    typedef struct tagDMA1CNTBITS {
      unsigned CNT:14;
} typeDMA1CNTBITS;
sfr volatile typeDMA1CNTBITS DMA1CNTbits absolute 0xB1E;

// backward compatibility for DMA2CONBITS
    typedef struct tagDMA2CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA2CONBITS;
sfr volatile typeDMA2CONBITS DMA2CONbits absolute 0xB20;

// backward compatibility for DMA2REQBITS
    typedef struct tagDMA2REQBITS {
      union {
        struct {
          unsigned IRQSEL:8;
          unsigned :7;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
          unsigned IRQSEL7:1;
        };
      };
} typeDMA2REQBITS;
sfr volatile typeDMA2REQBITS DMA2REQbits absolute 0xB22;

// backward compatibility for DMA2STAHBITS
    typedef struct tagDMA2STAHBITS {
      unsigned STA:8;
} typeDMA2STAHBITS;
sfr volatile typeDMA2STAHBITS DMA2STAHbits absolute 0xB26;

// backward compatibility for DMA2STBHBITS
    typedef struct tagDMA2STBHBITS {
      unsigned STB:8;
} typeDMA2STBHBITS;
sfr volatile typeDMA2STBHBITS DMA2STBHbits absolute 0xB2A;

// backward compatibility for DMA2CNTBITS
    typedef struct tagDMA2CNTBITS {
      unsigned CNT:14;
} typeDMA2CNTBITS;
sfr volatile typeDMA2CNTBITS DMA2CNTbits absolute 0xB2E;

// backward compatibility for DMA3CONBITS
    typedef struct tagDMA3CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA3CONBITS;
sfr volatile typeDMA3CONBITS DMA3CONbits absolute 0xB30;

// backward compatibility for DMA3REQBITS
    typedef struct tagDMA3REQBITS {
      union {
        struct {
          unsigned IRQSEL:8;
          unsigned :7;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
          unsigned IRQSEL7:1;
        };
      };
} typeDMA3REQBITS;
sfr volatile typeDMA3REQBITS DMA3REQbits absolute 0xB32;

// backward compatibility for DMA3STAHBITS
    typedef struct tagDMA3STAHBITS {
      unsigned STA:8;
} typeDMA3STAHBITS;
sfr volatile typeDMA3STAHBITS DMA3STAHbits absolute 0xB36;

// backward compatibility for DMA3STBHBITS
    typedef struct tagDMA3STBHBITS {
      unsigned STB:8;
} typeDMA3STBHBITS;
sfr volatile typeDMA3STBHBITS DMA3STBHbits absolute 0xB3A;

// backward compatibility for DMA3CNTBITS
    typedef struct tagDMA3CNTBITS {
      unsigned CNT:14;
} typeDMA3CNTBITS;
sfr volatile typeDMA3CNTBITS DMA3CNTbits absolute 0xB3E;

// backward compatibility for DMAPWCBITS
    typedef struct tagDMAPWCBITS {
      unsigned PWCOL0:1;
      unsigned PWCOL1:1;
      unsigned PWCOL2:1;
      unsigned PWCOL3:1;
} typeDMAPWCBITS;
sfr volatile typeDMAPWCBITS DMAPWCbits absolute 0xBF0;

// backward compatibility for DMARQCBITS
    typedef struct tagDMARQCBITS {
      unsigned RQCOL0:1;
      unsigned RQCOL1:1;
      unsigned RQCOL2:1;
      unsigned RQCOL3:1;
} typeDMARQCBITS;
sfr volatile typeDMARQCBITS DMARQCbits absolute 0xBF2;

// backward compatibility for DMAPPSBITS
    typedef struct tagDMAPPSBITS {
      unsigned PPST0:1;
      unsigned PPST1:1;
      unsigned PPST2:1;
      unsigned PPST3:1;
} typeDMAPPSBITS;
sfr volatile typeDMAPPSBITS DMAPPSbits absolute 0xBF4;

// backward compatibility for DMALCABITS
    typedef struct tagDMALCABITS {
      union {
        struct {
          unsigned LSTCH:4;
        };
        struct {
          unsigned LSTCH0:1;
          unsigned LSTCH1:1;
          unsigned LSTCH2:1;
          unsigned LSTCH3:1;
        };
      };
} typeDMALCABITS;
sfr volatile typeDMALCABITS DMALCAbits absolute 0xBF6;

// backward compatibility for DSADRHBITS
    typedef struct tagDSADRHBITS {
      unsigned DSADR:8;
} typeDSADRHBITS;
sfr volatile typeDSADRHBITS DSADRHbits absolute 0xBFA;

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned :2;
      unsigned TRISA4:1;
      unsigned :2;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
      unsigned TRISA11:1;
      unsigned TRISA12:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0xE00;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned :2;
      unsigned RA4:1;
      unsigned :2;
      unsigned RA7:1;
      unsigned RA8:1;
      unsigned RA9:1;
      unsigned RA10:1;
      unsigned RA11:1;
      unsigned RA12:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0xE02;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned :2;
      unsigned LATA4:1;
      unsigned :2;
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
      unsigned LATA11:1;
      unsigned LATA12:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0xE04;

// backward compatibility for ODCABITS
    typedef struct tagODCABITS {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned :2;
      unsigned ODCA4:1;
      unsigned :2;
      unsigned ODCA7:1;
      unsigned ODCA8:1;
      unsigned ODCA9:1;
      unsigned ODCA10:1;
      unsigned ODCA11:1;
      unsigned ODCA12:1;
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0xE06;

// backward compatibility for CNENABITS
    typedef struct tagCNENABITS {
      unsigned CNIEA0:1;
      unsigned CNIEA1:1;
      unsigned :2;
      unsigned CNIEA4:1;
      unsigned :2;
      unsigned CNIEA7:1;
      unsigned CNIEA8:1;
      unsigned CNIEA9:1;
      unsigned CNIEA10:1;
      unsigned CNIEA11:1;
      unsigned CNIEA12:1;
} typeCNENABITS;
sfr volatile typeCNENABITS CNENAbits absolute 0xE08;

// backward compatibility for CNPUABITS
    typedef struct tagCNPUABITS {
      unsigned CNPUA0:1;
      unsigned CNPUA1:1;
      unsigned :2;
      unsigned CNPUA4:1;
      unsigned :2;
      unsigned CNPUA7:1;
      unsigned CNPUA8:1;
      unsigned CNPUA9:1;
      unsigned CNPUA10:1;
      unsigned CNPUA11:1;
      unsigned CNPUA12:1;
} typeCNPUABITS;
sfr volatile typeCNPUABITS CNPUAbits absolute 0xE0A;

// backward compatibility for CNPDABITS
    typedef struct tagCNPDABITS {
      unsigned CNPDA0:1;
      unsigned CNPDA1:1;
      unsigned :2;
      unsigned CNPDA4:1;
      unsigned :2;
      unsigned CNPDA7:1;
      unsigned CNPDA8:1;
      unsigned CNPDA9:1;
      unsigned CNPDA10:1;
      unsigned CNPDA11:1;
      unsigned CNPDA12:1;
} typeCNPDABITS;
sfr volatile typeCNPDABITS CNPDAbits absolute 0xE0C;

// backward compatibility for ANSELABITS
    typedef struct tagANSELABITS {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned :2;
      unsigned ANSA4:1;
      unsigned :6;
      unsigned ANSA11:1;
      unsigned ANSA12:1;
} typeANSELABITS;
sfr volatile typeANSELABITS ANSELAbits absolute 0xE0E;

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
sfr volatile typeTRISBBITS TRISBbits absolute 0xE10;

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
sfr volatile typePORTBBITS PORTBbits absolute 0xE12;

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
sfr volatile typeLATBBITS LATBbits absolute 0xE14;

// backward compatibility for ODCBBITS
    typedef struct tagODCBBITS {
      unsigned ODCB0:1;
      unsigned ODCB1:1;
      unsigned ODCB2:1;
      unsigned ODCB3:1;
      unsigned ODCB4:1;
      unsigned ODCB5:1;
      unsigned ODCB6:1;
      unsigned ODCB7:1;
      unsigned ODCB8:1;
      unsigned ODCB9:1;
      unsigned ODCB10:1;
      unsigned ODCB11:1;
      unsigned ODCB12:1;
      unsigned ODCB13:1;
      unsigned ODCB14:1;
      unsigned ODCB15:1;
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0xE16;

// backward compatibility for CNENBBITS
    typedef struct tagCNENBBITS {
      unsigned CNIEB0:1;
      unsigned CNIEB1:1;
      unsigned CNIEB2:1;
      unsigned CNIEB3:1;
      unsigned CNIEB4:1;
      unsigned CNIEB5:1;
      unsigned CNIEB6:1;
      unsigned CNIEB7:1;
      unsigned CNIEB8:1;
      unsigned CNIEB9:1;
      unsigned CNIEB10:1;
      unsigned CNIEB11:1;
      unsigned CNIEB12:1;
      unsigned CNIEB13:1;
      unsigned CNIEB14:1;
      unsigned CNIEB15:1;
} typeCNENBBITS;
sfr volatile typeCNENBBITS CNENBbits absolute 0xE18;

// backward compatibility for CNPUBBITS
    typedef struct tagCNPUBBITS {
      unsigned CNPUB0:1;
      unsigned CNPUB1:1;
      unsigned CNPUB2:1;
      unsigned CNPUB3:1;
      unsigned CNPUB4:1;
      unsigned CNPUB5:1;
      unsigned CNPUB6:1;
      unsigned CNPUB7:1;
      unsigned CNPUB8:1;
      unsigned CNPUB9:1;
      unsigned CNPUB10:1;
      unsigned CNPUB11:1;
      unsigned CNPUB12:1;
      unsigned CNPUB13:1;
      unsigned CNPUB14:1;
      unsigned CNPUB15:1;
} typeCNPUBBITS;
sfr volatile typeCNPUBBITS CNPUBbits absolute 0xE1A;

// backward compatibility for CNPDBBITS
    typedef struct tagCNPDBBITS {
      unsigned CNPDB0:1;
      unsigned CNPDB1:1;
      unsigned CNPDB2:1;
      unsigned CNPDB3:1;
      unsigned CNPDB4:1;
      unsigned CNPDB5:1;
      unsigned CNPDB6:1;
      unsigned CNPDB7:1;
      unsigned CNPDB8:1;
      unsigned CNPDB9:1;
      unsigned CNPDB10:1;
      unsigned CNPDB11:1;
      unsigned CNPDB12:1;
      unsigned CNPDB13:1;
      unsigned CNPDB14:1;
      unsigned CNPDB15:1;
} typeCNPDBBITS;
sfr volatile typeCNPDBBITS CNPDBbits absolute 0xE1C;

// backward compatibility for ANSELBBITS
    typedef struct tagANSELBBITS {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned ANSB3:1;
      unsigned :4;
      unsigned ANSB8:1;
} typeANSELBBITS;
sfr volatile typeANSELBBITS ANSELBbits absolute 0xE1E;

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned TRISC0:1;
      unsigned TRISC1:1;
      unsigned TRISC2:1;
      unsigned TRISC3:1;
      unsigned TRISC4:1;
      unsigned TRISC5:1;
      unsigned TRISC6:1;
      unsigned TRISC7:1;
      unsigned TRISC8:1;
      unsigned TRISC9:1;
      unsigned TRISC10:1;
      unsigned TRISC11:1;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned :1;
      unsigned TRISC15:1;
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0xE20;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
      unsigned RC0:1;
      unsigned RC1:1;
      unsigned RC2:1;
      unsigned RC3:1;
      unsigned RC4:1;
      unsigned RC5:1;
      unsigned RC6:1;
      unsigned RC7:1;
      unsigned RC8:1;
      unsigned RC9:1;
      unsigned RC10:1;
      unsigned RC11:1;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned :1;
      unsigned RC15:1;
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0xE22;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
      unsigned LATC0:1;
      unsigned LATC1:1;
      unsigned LATC2:1;
      unsigned LATC3:1;
      unsigned LATC4:1;
      unsigned LATC5:1;
      unsigned LATC6:1;
      unsigned LATC7:1;
      unsigned LATC8:1;
      unsigned LATC9:1;
      unsigned LATC10:1;
      unsigned LATC11:1;
      unsigned LATC12:1;
      unsigned LATC13:1;
      unsigned :1;
      unsigned LATC15:1;
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0xE24;

// backward compatibility for ODCCBITS
    typedef struct tagODCCBITS {
      unsigned ODCC0:1;
      unsigned ODCC1:1;
      unsigned ODCC2:1;
      unsigned ODCC3:1;
      unsigned ODCC4:1;
      unsigned ODCC5:1;
      unsigned ODCC6:1;
      unsigned ODCC7:1;
      unsigned ODCC8:1;
      unsigned ODCC9:1;
      unsigned ODCC10:1;
      unsigned ODCC11:1;
      unsigned ODCC12:1;
      unsigned ODCC13:1;
      unsigned :1;
      unsigned ODCC15:1;
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0xE26;

// backward compatibility for CNENCBITS
    typedef struct tagCNENCBITS {
      unsigned CNIEC0:1;
      unsigned CNIEC1:1;
      unsigned CNIEC2:1;
      unsigned CNIEC3:1;
      unsigned CNIEC4:1;
      unsigned CNIEC5:1;
      unsigned CNIEC6:1;
      unsigned CNIEC7:1;
      unsigned CNIEC8:1;
      unsigned CNIEC9:1;
      unsigned CNIEC10:1;
      unsigned CNIEC11:1;
      unsigned CNIEC12:1;
      unsigned CNIEC13:1;
      unsigned :1;
      unsigned CNIEC15:1;
} typeCNENCBITS;
sfr volatile typeCNENCBITS CNENCbits absolute 0xE28;

// backward compatibility for CNPUCBITS
    typedef struct tagCNPUCBITS {
      unsigned CNPUC0:1;
      unsigned CNPUC1:1;
      unsigned CNPUC2:1;
      unsigned CNPUC3:1;
      unsigned CNPUC4:1;
      unsigned CNPUC5:1;
      unsigned CNPUC6:1;
      unsigned CNPUC7:1;
      unsigned CNPUC8:1;
      unsigned CNPUC9:1;
      unsigned CNPUC10:1;
      unsigned CNPUC11:1;
      unsigned CNPUC12:1;
      unsigned CNPUC13:1;
      unsigned :1;
      unsigned CNPUC15:1;
} typeCNPUCBITS;
sfr volatile typeCNPUCBITS CNPUCbits absolute 0xE2A;

// backward compatibility for CNPDCBITS
    typedef struct tagCNPDCBITS {
      unsigned CNPDC0:1;
      unsigned CNPDC1:1;
      unsigned CNPDC2:1;
      unsigned CNPDC3:1;
      unsigned CNPDC4:1;
      unsigned CNPDC5:1;
      unsigned CNPDC6:1;
      unsigned CNPDC7:1;
      unsigned CNPDC8:1;
      unsigned CNPDC9:1;
      unsigned CNPDC10:1;
      unsigned CNPDC11:1;
      unsigned CNPDC12:1;
      unsigned CNPDC13:1;
      unsigned :1;
      unsigned CNPDC15:1;
} typeCNPDCBITS;
sfr volatile typeCNPDCBITS CNPDCbits absolute 0xE2C;

// backward compatibility for ANSELCBITS
    typedef struct tagANSELCBITS {
      unsigned ANSC0:1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
      unsigned :8;
      unsigned ANSC11:1;
} typeANSELCBITS;
sfr volatile typeANSELCBITS ANSELCbits absolute 0xE2E;

// backward compatibility for TRISDBITS
    typedef struct tagTRISDBITS {
      unsigned :5;
      unsigned TRISD5:1;
      unsigned TRISD6:1;
      unsigned :1;
      unsigned TRISD8:1;
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0xE30;

// backward compatibility for PORTDBITS
    typedef struct tagPORTDBITS {
      unsigned :5;
      unsigned RD5:1;
      unsigned RD6:1;
      unsigned :1;
      unsigned RD8:1;
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0xE32;

// backward compatibility for LATDBITS
    typedef struct tagLATDBITS {
      unsigned :5;
      unsigned LATD5:1;
      unsigned LATD6:1;
      unsigned :1;
      unsigned LATD8:1;
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0xE34;

// backward compatibility for ODCDBITS
    typedef struct tagODCDBITS {
      unsigned :5;
      unsigned ODCD5:1;
      unsigned ODCD6:1;
      unsigned :1;
      unsigned ODCD8:1;
} typeODCDBITS;
sfr volatile typeODCDBITS ODCDbits absolute 0xE36;

// backward compatibility for CNENDBITS
    typedef struct tagCNENDBITS {
      unsigned :5;
      unsigned CNIED5:1;
      unsigned CNIED6:1;
      unsigned :1;
      unsigned CNIED8:1;
} typeCNENDBITS;
sfr volatile typeCNENDBITS CNENDbits absolute 0xE38;

// backward compatibility for CNPUDBITS
    typedef struct tagCNPUDBITS {
      unsigned :5;
      unsigned CNPUD5:1;
      unsigned CNPUD6:1;
      unsigned :1;
      unsigned CNPUD8:1;
} typeCNPUDBITS;
sfr volatile typeCNPUDBITS CNPUDbits absolute 0xE3A;

// backward compatibility for CNPDDBITS
    typedef struct tagCNPDDBITS {
      unsigned :5;
      unsigned CNPDD5:1;
      unsigned CNPDD6:1;
      unsigned :1;
      unsigned CNPDD8:1;
} typeCNPDDBITS;
sfr volatile typeCNPDDBITS CNPDDbits absolute 0xE3C;

// backward compatibility for TRISEBITS
    typedef struct tagTRISEBITS {
      unsigned :12;
      unsigned TRISE12:1;
      unsigned TRISE13:1;
      unsigned TRISE14:1;
      unsigned TRISE15:1;
} typeTRISEBITS;
sfr volatile typeTRISEBITS TRISEbits absolute 0xE40;

// backward compatibility for PORTEBITS
    typedef struct tagPORTEBITS {
      unsigned :12;
      unsigned RE12:1;
      unsigned RE13:1;
      unsigned RE14:1;
      unsigned RE15:1;
} typePORTEBITS;
sfr volatile typePORTEBITS PORTEbits absolute 0xE42;

// backward compatibility for LATEBITS
    typedef struct tagLATEBITS {
      unsigned :12;
      unsigned LATE12:1;
      unsigned LATE13:1;
      unsigned LATE14:1;
      unsigned LATE15:1;
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0xE44;

// backward compatibility for ODCEBITS
    typedef struct tagODCEBITS {
      unsigned :12;
      unsigned ODCE12:1;
      unsigned ODCE13:1;
      unsigned ODCE14:1;
      unsigned ODCE15:1;
} typeODCEBITS;
sfr volatile typeODCEBITS ODCEbits absolute 0xE46;

// backward compatibility for CNENEBITS
    typedef struct tagCNENEBITS {
      unsigned :12;
      unsigned CNIEE12:1;
      unsigned CNIEE13:1;
      unsigned CNIEE14:1;
      unsigned CNIEE15:1;
} typeCNENEBITS;
sfr volatile typeCNENEBITS CNENEbits absolute 0xE48;

// backward compatibility for CNPUEBITS
    typedef struct tagCNPUEBITS {
      unsigned :12;
      unsigned CNPUE12:1;
      unsigned CNPUE13:1;
      unsigned CNPUE14:1;
      unsigned CNPUE15:1;
} typeCNPUEBITS;
sfr volatile typeCNPUEBITS CNPUEbits absolute 0xE4A;

// backward compatibility for CNPDEBITS
    typedef struct tagCNPDEBITS {
      unsigned :12;
      unsigned CNPDE12:1;
      unsigned CNPDE13:1;
      unsigned CNPDE14:1;
      unsigned CNPDE15:1;
} typeCNPDEBITS;
sfr volatile typeCNPDEBITS CNPDEbits absolute 0xE4C;

// backward compatibility for ANSELEBITS
    typedef struct tagANSELEBITS {
      unsigned :12;
      unsigned ANSE12:1;
      unsigned ANSE13:1;
      unsigned ANSE14:1;
      unsigned ANSE15:1;
} typeANSELEBITS;
sfr volatile typeANSELEBITS ANSELEbits absolute 0xE4E;

// backward compatibility for TRISFBITS
    typedef struct tagTRISFBITS {
      unsigned TRISF0:1;
      unsigned TRISF1:1;
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0xE50;

// backward compatibility for PORTFBITS
    typedef struct tagPORTFBITS {
      unsigned RF0:1;
      unsigned RF1:1;
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0xE52;

// backward compatibility for LATFBITS
    typedef struct tagLATFBITS {
      unsigned LATF0:1;
      unsigned LATF1:1;
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0xE54;

// backward compatibility for ODCFBITS
    typedef struct tagODCFBITS {
      unsigned ODCF0:1;
      unsigned ODCF1:1;
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0xE56;

// backward compatibility for CNENFBITS
    typedef struct tagCNENFBITS {
      unsigned CNIEF0:1;
      unsigned CNIEF1:1;
} typeCNENFBITS;
sfr volatile typeCNENFBITS CNENFbits absolute 0xE58;

// backward compatibility for CNPUFBITS
    typedef struct tagCNPUFBITS {
      unsigned CNPUF0:1;
      unsigned CNPUF1:1;
} typeCNPUFBITS;
sfr volatile typeCNPUFBITS CNPUFbits absolute 0xE5A;

// backward compatibility for CNPDFBITS
    typedef struct tagCNPDFBITS {
      unsigned CNPDF0:1;
      unsigned CNPDF1:1;
} typeCNPDFBITS;
sfr volatile typeCNPDFBITS CNPDFbits absolute 0xE5C;

// backward compatibility for TRISGBITS
    typedef struct tagTRISGBITS {
      unsigned :6;
      unsigned TRISG6:1;
      unsigned TRISG7:1;
      unsigned TRISG8:1;
      unsigned TRISG9:1;
} typeTRISGBITS;
sfr volatile typeTRISGBITS TRISGbits absolute 0xE60;

// backward compatibility for PORTGBITS
    typedef struct tagPORTGBITS {
      unsigned :6;
      unsigned RG6:1;
      unsigned RG7:1;
      unsigned RG8:1;
      unsigned RG9:1;
} typePORTGBITS;
sfr volatile typePORTGBITS PORTGbits absolute 0xE62;

// backward compatibility for LATGBITS
    typedef struct tagLATGBITS {
      unsigned :6;
      unsigned LATG6:1;
      unsigned LATG7:1;
      unsigned LATG8:1;
      unsigned LATG9:1;
} typeLATGBITS;
sfr volatile typeLATGBITS LATGbits absolute 0xE64;

// backward compatibility for ODCGBITS
    typedef struct tagODCGBITS {
      unsigned :6;
      unsigned ODCG6:1;
      unsigned ODCG7:1;
      unsigned ODCG8:1;
      unsigned ODCG9:1;
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0xE66;

// backward compatibility for CNENGBITS
    typedef struct tagCNENGBITS {
      unsigned :6;
      unsigned CNIEG6:1;
      unsigned CNIEG7:1;
      unsigned CNIEG8:1;
      unsigned CNIEG9:1;
} typeCNENGBITS;
sfr volatile typeCNENGBITS CNENGbits absolute 0xE68;

// backward compatibility for CNPUGBITS
    typedef struct tagCNPUGBITS {
      unsigned :6;
      unsigned CNPUG6:1;
      unsigned CNPUG7:1;
      unsigned CNPUG8:1;
      unsigned CNPUG9:1;
} typeCNPUGBITS;
sfr volatile typeCNPUGBITS CNPUGbits absolute 0xE6A;

// backward compatibility for CNPDGBITS
    typedef struct tagCNPDGBITS {
      unsigned :6;
      unsigned CNPDG6:1;
      unsigned CNPDG7:1;
      unsigned CNPDG8:1;
      unsigned CNPDG9:1;
} typeCNPDGBITS;
sfr volatile typeCNPDGBITS CNPDGbits absolute 0xE6C;

// backward compatibility for APPSBITS
    typedef struct tagAPPSBITS {
      unsigned APIFUL:1;
      unsigned APIOV:1;
      unsigned APOFUL:1;
      unsigned APOOV:1;
      unsigned STRFUL:1;
} typeAPPSBITS;
sfr volatile typeAPPSBITS APPSbits absolute 0xFA4;

