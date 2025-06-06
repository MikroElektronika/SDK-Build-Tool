// Definition file for P24HJ128GP504

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

const unsigned long __FLASH_SIZE = 0x00020400;
const unsigned long __XRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const unsigned long __YRAM_RAM_SIZE = 0x000007FF;
const unsigned long __YRAM_RAM_START = 0x1800;
const unsigned long __DMA_RAM_SIZE = 0x000007FF;
const unsigned long __DMA_RAM_START = 0x2000;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_RESERVEDTRAP0        = 0x0004;
const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0006;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_DMACERROR            = 0x000E;
const unsigned IVT_ADDR_RESERVEDTRAP6        = 0x0010;
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
const unsigned IVT_ADDR_ADC1INTERRUPT        = 0x002E;
const unsigned IVT_ADDR_DMA1INTERRUPT        = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_CMPINTERRUPT         = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_IC7INTERRUPT         = 0x0040;
const unsigned IVT_ADDR_IC8INTERRUPT         = 0x0042;
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
const unsigned IVT_ADDR_INTERRUPT37          = 0x005E;
const unsigned IVT_ADDR_INTERRUPT38          = 0x0060;
const unsigned IVT_ADDR_INTERRUPT39          = 0x0062;
const unsigned IVT_ADDR_INTERRUPT40          = 0x0064;
const unsigned IVT_ADDR_INTERRUPT41          = 0x0066;
const unsigned IVT_ADDR_INTERRUPT42          = 0x0068;
const unsigned IVT_ADDR_INTERRUPT43          = 0x006A;
const unsigned IVT_ADDR_INTERRUPT44          = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_DMA4INTERRUPT        = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_INTERRUPT49          = 0x0076;
const unsigned IVT_ADDR_INTERRUPT50          = 0x0078;
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
const unsigned IVT_ADDR_DMA5INTERRUPT        = 0x008E;
const unsigned IVT_ADDR_RTCCINTERRUPT        = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_CRCINTERRUPT         = 0x009A;
const unsigned IVT_ADDR_DMA6INTERRUPT        = 0x009C;
const unsigned IVT_ADDR_DMA7INTERRUPT        = 0x009E;
const unsigned IVT_ADDR_C1TXREQINTERRUPT     = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_INTERRUPT72          = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_INTERRUPT77          = 0x00AE;
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

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0104;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0106;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0108;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x010A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x010C;
const unsigned AIVT_ADDR_ALTDMACERROR         = 0x010E;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP6     = 0x0110;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0112;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0114;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0116;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0118;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x011A;
const unsigned AIVT_ADDR_ALTDMA0INTERRUPT     = 0x011C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x011E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0124;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x012E;
const unsigned AIVT_ADDR_ALTDMA1INTERRUPT     = 0x0130;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x0132;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0136;
const unsigned AIVT_ADDR_ALTCMPINTERRUPT      = 0x0138;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x013A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x013C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x013E;
const unsigned AIVT_ADDR_ALTIC7INTERRUPT      = 0x0140;
const unsigned AIVT_ADDR_ALTIC8INTERRUPT      = 0x0142;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0144;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0146;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x0148;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x014A;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x014C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x014E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0150;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0152;
const unsigned AIVT_ADDR_ALTSPI2ERRINTERRUPT  = 0x0154;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0156;
const unsigned AIVT_ADDR_ALTC1RXRDYINTERRUPT  = 0x0158;
const unsigned AIVT_ADDR_ALTC1INTERRUPT       = 0x015A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x015C;
const unsigned AIVT_ADDR_ALTINTERRUPT37       = 0x015E;
const unsigned AIVT_ADDR_ALTINTERRUPT38       = 0x0160;
const unsigned AIVT_ADDR_ALTINTERRUPT39       = 0x0162;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x0164;
const unsigned AIVT_ADDR_ALTINTERRUPT41       = 0x0166;
const unsigned AIVT_ADDR_ALTINTERRUPT42       = 0x0168;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x016A;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x016C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x016E;
const unsigned AIVT_ADDR_ALTDMA4INTERRUPT     = 0x0170;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x0172;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x0174;
const unsigned AIVT_ADDR_ALTINTERRUPT49       = 0x0176;
const unsigned AIVT_ADDR_ALTINTERRUPT50       = 0x0178;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x017A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x017C;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x017E;
const unsigned AIVT_ADDR_ALTINTERRUPT54       = 0x0180;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0182;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0184;
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0186;
const unsigned AIVT_ADDR_ALTINTERRUPT58       = 0x0188;
const unsigned AIVT_ADDR_ALTINTERRUPT59       = 0x018A;
const unsigned AIVT_ADDR_ALTINTERRUPT60       = 0x018C;
const unsigned AIVT_ADDR_ALTDMA5INTERRUPT     = 0x018E;
const unsigned AIVT_ADDR_ALTRTCCINTERRUPT     = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0198;
const unsigned AIVT_ADDR_ALTCRCINTERRUPT      = 0x019A;
const unsigned AIVT_ADDR_ALTDMA6INTERRUPT     = 0x019C;
const unsigned AIVT_ADDR_ALTDMA7INTERRUPT     = 0x019E;
const unsigned AIVT_ADDR_ALTC1TXREQINTERRUPT  = 0x01A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x01A2;
const unsigned AIVT_ADDR_ALTINTERRUPT72       = 0x01A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTINTERRUPT77       = 0x01AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x01B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x01B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x01B4;
const unsigned AIVT_ADDR_ALTINTERRUPT81       = 0x01B6;
const unsigned AIVT_ADDR_ALTINTERRUPT82       = 0x01B8;
const unsigned AIVT_ADDR_ALTINTERRUPT83       = 0x01BA;
const unsigned AIVT_ADDR_ALTINTERRUPT84       = 0x01BC;
const unsigned AIVT_ADDR_ALTINTERRUPT85       = 0x01BE;
const unsigned AIVT_ADDR_ALTINTERRUPT86       = 0x01C0;
const unsigned AIVT_ADDR_ALTINTERRUPT87       = 0x01C2;
const unsigned AIVT_ADDR_ALTINTERRUPT88       = 0x01C4;
const unsigned AIVT_ADDR_ALTINTERRUPT89       = 0x01C6;
const unsigned AIVT_ADDR_ALTINTERRUPT90       = 0x01C8;
const unsigned AIVT_ADDR_ALTINTERRUPT91       = 0x01CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x01CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x01CE;
const unsigned AIVT_ADDR_ALTINTERRUPT94       = 0x01D0;
const unsigned AIVT_ADDR_ALTINTERRUPT95       = 0x01D2;
const unsigned AIVT_ADDR_ALTINTERRUPT96       = 0x01D4;
const unsigned AIVT_ADDR_ALTINTERRUPT97       = 0x01D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x01D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x01DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x01DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x01DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x01E0;
const unsigned AIVT_ADDR_ALTINTERRUPT103      = 0x01E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x01E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x01E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x01E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x01EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x01EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x01EE;
const unsigned AIVT_ADDR_ALTINTERRUPT110      = 0x01F0;
const unsigned AIVT_ADDR_ALTINTERRUPT111      = 0x01F2;
const unsigned AIVT_ADDR_ALTINTERRUPT112      = 0x01F4;
const unsigned AIVT_ADDR_ALTINTERRUPT113      = 0x01F6;
const unsigned AIVT_ADDR_ALTINTERRUPT114      = 0x01F8;
const unsigned AIVT_ADDR_ALTINTERRUPT115      = 0x01FA;
const unsigned AIVT_ADDR_ALTINTERRUPT116      = 0x01FC;
const unsigned AIVT_ADDR_ALTINTERRUPT117      = 0x01FE;

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

const register unsigned int DMA_START_ADDRESS = 0x2000;

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
sfr unsigned int volatile PCL              absolute 0x002E;
sfr unsigned int volatile PCH              absolute 0x0030;
sfr unsigned int volatile TBLPAG           absolute 0x0032;
sfr unsigned int volatile PSVPAG           absolute 0x0034;
sfr unsigned int volatile RCOUNT           absolute 0x0036;
sfr unsigned int volatile SR               absolute 0x0042;
sfr unsigned int volatile CORCON           absolute 0x0044;
sfr unsigned int volatile DISICNT          absolute 0x0052;
sfr unsigned int volatile CNEN1            absolute 0x0060;
sfr unsigned int volatile CNEN2            absolute 0x0062;
sfr unsigned int volatile CNPU1            absolute 0x0068;
sfr unsigned int volatile CNPU2            absolute 0x006A;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int volatile IFS3             absolute 0x008A;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC2             absolute 0x0098;
sfr unsigned int          IEC3             absolute 0x009A;
sfr unsigned int          IEC4             absolute 0x009C;
sfr unsigned int          IPC0             absolute 0x00A4;
sfr unsigned int          IPC1             absolute 0x00A6;
sfr unsigned int          IPC2             absolute 0x00A8;
sfr unsigned int          IPC3             absolute 0x00AA;
sfr unsigned int          IPC4             absolute 0x00AC;
sfr unsigned int          IPC5             absolute 0x00AE;
sfr unsigned int          IPC6             absolute 0x00B0;
sfr unsigned int          IPC7             absolute 0x00B2;
sfr unsigned int          IPC8             absolute 0x00B4;
sfr unsigned int          IPC9             absolute 0x00B6;
sfr unsigned int          IPC11            absolute 0x00BA;
sfr unsigned int          IPC15            absolute 0x00C2;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC17            absolute 0x00C6;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
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
sfr unsigned int volatile I2C1RCV          absolute 0x0200;
sfr unsigned int volatile I2CRCV           absolute 0x0200;
sfr unsigned int volatile I2C1TRN          absolute 0x0202;
sfr unsigned int volatile I2CTRN           absolute 0x0202;
sfr unsigned int          I2C1BRG          absolute 0x0204;
sfr unsigned int volatile I2C1CON          absolute 0x0206;
sfr unsigned int volatile I2CCON           absolute 0x0206;
sfr unsigned int volatile I2C1STAT         absolute 0x0208;
sfr unsigned int volatile I2CSTAT          absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int volatile I2CADD           absolute 0x020A;
sfr unsigned int volatile I2C1MSK          absolute 0x020C;
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
sfr unsigned int volatile TRISA            absolute 0x02C0;
sfr unsigned int volatile PORTA            absolute 0x02C2;
sfr unsigned int volatile LATA             absolute 0x02C4;
sfr unsigned int volatile ODCA             absolute 0x02C6;
sfr unsigned int volatile TRISB            absolute 0x02C8;
sfr unsigned int volatile PORTB            absolute 0x02CA;
sfr unsigned int volatile LATB             absolute 0x02CC;
sfr unsigned int volatile ODCB             absolute 0x02CE;
sfr unsigned int volatile TRISC            absolute 0x02D0;
sfr unsigned int volatile PORTC            absolute 0x02D2;
sfr unsigned int volatile LATC             absolute 0x02D4;
sfr unsigned int volatile ODCC             absolute 0x02D6;
sfr unsigned int          PADCFG1          absolute 0x02FC;
sfr unsigned int volatile ADC1BUF0         absolute 0x0300;
sfr unsigned int volatile ADCBUF0          absolute 0x0300;
sfr unsigned int volatile AD1CON1          absolute 0x0320;
sfr unsigned int volatile ADCON1           absolute 0x0320;
sfr unsigned int volatile AD1CON2          absolute 0x0322;
sfr unsigned int volatile ADCON2           absolute 0x0322;
sfr unsigned int volatile AD1CON3          absolute 0x0324;
sfr unsigned int volatile ADCON3           absolute 0x0324;
sfr unsigned int          AD1CHS123        absolute 0x0326;
sfr unsigned int          AD1CHS0          absolute 0x0328;
sfr unsigned int          AD1PCFGL         absolute 0x032C;
sfr unsigned int volatile ADPCFG           absolute 0x032C;
sfr unsigned int          AD1CSSL          absolute 0x0330;
sfr unsigned int          ADCSSL           absolute 0x0330;
sfr unsigned int          AD1CON4          absolute 0x0332;
sfr unsigned int          DMA0CON          absolute 0x0380;
sfr unsigned int volatile DMA0REQ          absolute 0x0382;
sfr unsigned int volatile DMA0STA          absolute 0x0384;
sfr unsigned int volatile DMA0STB          absolute 0x0386;
sfr unsigned int volatile DMA0PAD          absolute 0x0388;
sfr unsigned int volatile DMA0CNT          absolute 0x038A;
sfr unsigned int          DMA1CON          absolute 0x038C;
sfr unsigned int volatile DMA1REQ          absolute 0x038E;
sfr unsigned int volatile DMA1STA          absolute 0x0390;
sfr unsigned int volatile DMA1STB          absolute 0x0392;
sfr unsigned int volatile DMA1PAD          absolute 0x0394;
sfr unsigned int volatile DMA1CNT          absolute 0x0396;
sfr unsigned int          DMA2CON          absolute 0x0398;
sfr unsigned int volatile DMA2REQ          absolute 0x039A;
sfr unsigned int volatile DMA2STA          absolute 0x039C;
sfr unsigned int volatile DMA2STB          absolute 0x039E;
sfr unsigned int volatile DMA2PAD          absolute 0x03A0;
sfr unsigned int volatile DMA2CNT          absolute 0x03A2;
sfr unsigned int          DMA3CON          absolute 0x03A4;
sfr unsigned int volatile DMA3REQ          absolute 0x03A6;
sfr unsigned int volatile DMA3STA          absolute 0x03A8;
sfr unsigned int volatile DMA3STB          absolute 0x03AA;
sfr unsigned int volatile DMA3PAD          absolute 0x03AC;
sfr unsigned int volatile DMA3CNT          absolute 0x03AE;
sfr unsigned int          DMA4CON          absolute 0x03B0;
sfr unsigned int volatile DMA4REQ          absolute 0x03B2;
sfr unsigned int volatile DMA4STA          absolute 0x03B4;
sfr unsigned int volatile DMA4STB          absolute 0x03B6;
sfr unsigned int volatile DMA4PAD          absolute 0x03B8;
sfr unsigned int volatile DMA4CNT          absolute 0x03BA;
sfr unsigned int          DMA5CON          absolute 0x03BC;
sfr unsigned int volatile DMA5REQ          absolute 0x03BE;
sfr unsigned int volatile DMA5STA          absolute 0x03C0;
sfr unsigned int volatile DMA5STB          absolute 0x03C2;
sfr unsigned int volatile DMA5PAD          absolute 0x03C4;
sfr unsigned int volatile DMA5CNT          absolute 0x03C6;
sfr unsigned int          DMA6CON          absolute 0x03C8;
sfr unsigned int volatile DMA6REQ          absolute 0x03CA;
sfr unsigned int volatile DMA6STA          absolute 0x03CC;
sfr unsigned int volatile DMA6STB          absolute 0x03CE;
sfr unsigned int volatile DMA6PAD          absolute 0x03D0;
sfr unsigned int volatile DMA6CNT          absolute 0x03D2;
sfr unsigned int          DMA7CON          absolute 0x03D4;
sfr unsigned int volatile DMA7REQ          absolute 0x03D6;
sfr unsigned int volatile DMA7STA          absolute 0x03D8;
sfr unsigned int volatile DMA7STB          absolute 0x03DA;
sfr unsigned int volatile DMA7PAD          absolute 0x03DC;
sfr unsigned int volatile DMA7CNT          absolute 0x03DE;
sfr unsigned int volatile DMACS0           absolute 0x03E0;
sfr unsigned int volatile DMACS1           absolute 0x03E2;
sfr unsigned int volatile DSADR            absolute 0x03E4;
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
sfr unsigned int          PMCON            absolute 0x0600;
sfr unsigned int volatile PMMODE           absolute 0x0602;
sfr unsigned int volatile PMADDR           absolute 0x0604;
sfr unsigned int volatile PMDOUT1          absolute 0x0604;
sfr unsigned int volatile PMDOUT2          absolute 0x0606;
sfr unsigned int volatile PMDIN1           absolute 0x0608;
sfr unsigned int volatile PMDIN2           absolute 0x060A;
sfr unsigned int volatile PMAEN            absolute 0x060C;
sfr unsigned int volatile PMSTAT           absolute 0x060E;
sfr unsigned int volatile ALRMVAL          absolute 0x0620;
sfr unsigned int volatile ALCFGRPT         absolute 0x0622;
sfr unsigned int volatile RTCVAL           absolute 0x0624;
sfr unsigned int volatile RCFGCAL          absolute 0x0626;
sfr unsigned int volatile CMCON            absolute 0x0630;
sfr unsigned int          CVRCON           absolute 0x0632;
sfr unsigned int volatile CRCCON           absolute 0x0640;
sfr unsigned int          CRCXOR           absolute 0x0642;
sfr unsigned int volatile CRCDAT           absolute 0x0644;
sfr unsigned int volatile CRCWDAT          absolute 0x0646;
sfr unsigned int          RPINR0           absolute 0x0680;
sfr unsigned int          RPINR1           absolute 0x0682;
sfr unsigned int          RPINR3           absolute 0x0686;
sfr unsigned int          RPINR4           absolute 0x0688;
sfr unsigned int          RPINR7           absolute 0x068E;
sfr unsigned int          RPINR10          absolute 0x0694;
sfr unsigned int          RPINR11          absolute 0x0696;
sfr unsigned int          RPINR18          absolute 0x06A4;
sfr unsigned int          RPINR19          absolute 0x06A6;
sfr unsigned int          RPINR20          absolute 0x06A8;
sfr unsigned int          RPINR21          absolute 0x06AA;
sfr unsigned int          RPINR22          absolute 0x06AC;
sfr unsigned int          RPINR23          absolute 0x06AE;
sfr unsigned int          RPINR26          absolute 0x06B4;
sfr unsigned int          RPOR0            absolute 0x06C0;
sfr unsigned int          RPOR1            absolute 0x06C2;
sfr unsigned int          RPOR2            absolute 0x06C4;
sfr unsigned int          RPOR3            absolute 0x06C6;
sfr unsigned int          RPOR4            absolute 0x06C8;
sfr unsigned int          RPOR5            absolute 0x06CA;
sfr unsigned int          RPOR6            absolute 0x06CC;
sfr unsigned int          RPOR7            absolute 0x06CE;
sfr unsigned int          RPOR8            absolute 0x06D0;
sfr unsigned int          RPOR9            absolute 0x06D2;
sfr unsigned int          RPOR10           absolute 0x06D4;
sfr unsigned int          RPOR11           absolute 0x06D6;
sfr unsigned int          RPOR12           absolute 0x06D8;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile PLLFBD           absolute 0x0746;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int volatile BSRAM            absolute 0x0750;
sfr unsigned int volatile SSRAM            absolute 0x0752;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;

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

    // SR bits
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
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;
    const register unsigned short int PSV = 2;
    sbit  PSV_bit at CORCON.B2;

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
    const register unsigned short int CN30IE = 14;
    sbit  CN30IE_bit at CNEN2.B14;
    const register unsigned short int CN29IE = 13;
    sbit  CN29IE_bit at CNEN2.B13;
    const register unsigned short int CN28IE = 12;
    sbit  CN28IE_bit at CNEN2.B12;
    const register unsigned short int CN27IE = 11;
    sbit  CN27IE_bit at CNEN2.B11;
    const register unsigned short int CN26IE = 10;
    sbit  CN26IE_bit at CNEN2.B10;
    const register unsigned short int CN25IE = 9;
    sbit  CN25IE_bit at CNEN2.B9;
    const register unsigned short int CN24IE = 8;
    sbit  CN24IE_bit at CNEN2.B8;
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN21IE = 5;
    sbit  CN21IE_bit at CNEN2.B5;
    const register unsigned short int CN20IE = 4;
    sbit  CN20IE_bit at CNEN2.B4;
    const register unsigned short int CN19IE = 3;
    sbit  CN19IE_bit at CNEN2.B3;
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
    const register unsigned short int CN30PUE = 14;
    sbit  CN30PUE_bit at CNPU2.B14;
    const register unsigned short int CN29PUE = 13;
    sbit  CN29PUE_bit at CNPU2.B13;
    const register unsigned short int CN28PUE = 12;
    sbit  CN28PUE_bit at CNPU2.B12;
    const register unsigned short int CN27PUE = 11;
    sbit  CN27PUE_bit at CNPU2.B11;
    const register unsigned short int CN26PUE = 10;
    sbit  CN26PUE_bit at CNPU2.B10;
    const register unsigned short int CN25PUE = 9;
    sbit  CN25PUE_bit at CNPU2.B9;
    const register unsigned short int CN24PUE = 8;
    sbit  CN24PUE_bit at CNPU2.B8;
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN21PUE = 5;
    sbit  CN21PUE_bit at CNPU2.B5;
    const register unsigned short int CN20PUE = 4;
    sbit  CN20PUE_bit at CNPU2.B4;
    const register unsigned short int CN19PUE = 3;
    sbit  CN19PUE_bit at CNPU2.B3;
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
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
    const register unsigned short int ALTIVT = 15;
    sbit  ALTIVT_bit at INTCON2.B15;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;

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
    const register unsigned short int IC8IF = 7;
    sbit  IC8IF_bit at IFS1.B7;
    const register unsigned short int IC7IF = 6;
    sbit  IC7IF_bit at IFS1.B6;
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
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;
    const register unsigned short int PMPIF = 13;
    sbit  PMPIF_bit at IFS2.B13;
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
    const register unsigned short int RTCIF = 14;
    sbit  RTCIF_bit at IFS3.B14;
    const register unsigned short int DMA5IF = 13;
    sbit  DMA5IF_bit at IFS3.B13;

    // IFS4 bits
    const register unsigned short int C1TXIF = 6;
    sbit  C1TXIF_bit at IFS4.B6;
    const register unsigned short int DMA7IF = 5;
    sbit  DMA7IF_bit at IFS4.B5;
    const register unsigned short int DMA6IF = 4;
    sbit  DMA6IF_bit at IFS4.B4;
    const register unsigned short int CRCIF = 3;
    sbit  CRCIF_bit at IFS4.B3;
    const register unsigned short int U2EIF = 2;
    sbit  U2EIF_bit at IFS4.B2;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;

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
    const register unsigned short int IC8IE = 7;
    sbit  IC8IE_bit at IEC1.B7;
    const register unsigned short int IC7IE = 6;
    sbit  IC7IE_bit at IEC1.B6;
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
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;
    const register unsigned short int PMPIE = 13;
    sbit  PMPIE_bit at IEC2.B13;
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
    const register unsigned short int RTCIE = 14;
    sbit  RTCIE_bit at IEC3.B14;
    const register unsigned short int DMA5IE = 13;
    sbit  DMA5IE_bit at IEC3.B13;

    // IEC4 bits
    const register unsigned short int C1TXIE = 6;
    sbit  C1TXIE_bit at IEC4.B6;
    const register unsigned short int DMA7IE = 5;
    sbit  DMA7IE_bit at IEC4.B5;
    const register unsigned short int DMA6IE = 4;
    sbit  DMA6IE_bit at IEC4.B4;
    const register unsigned short int CRCIE = 3;
    sbit  CRCIE_bit at IEC4.B3;
    const register unsigned short int U2EIE = 2;
    sbit  U2EIE_bit at IEC4.B2;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;

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
    const register unsigned short int IC8IP_2 = 14;
    sbit  IC8IP_2_bit at IPC5.B14;
    const register unsigned short int IC8IP_1 = 13;
    sbit  IC8IP_1_bit at IPC5.B13;
    const register unsigned short int IC8IP_0 = 12;
    sbit  IC8IP_0_bit at IPC5.B12;
    const register unsigned short int IC7IP_2 = 10;
    sbit  IC7IP_2_bit at IPC5.B10;
    const register unsigned short int IC7IP_1 = 9;
    sbit  IC7IP_1_bit at IPC5.B9;
    const register unsigned short int IC7IP_0 = 8;
    sbit  IC7IP_0_bit at IPC5.B8;
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
    const register unsigned short int DMA3IP_2 = 2;
    sbit  DMA3IP_2_bit at IPC9.B2;
    const register unsigned short int DMA3IP_1 = 1;
    sbit  DMA3IP_1_bit at IPC9.B1;
    const register unsigned short int DMA3IP_0 = 0;
    sbit  DMA3IP_0_bit at IPC9.B0;

    // IPC11 bits
    const register unsigned short int DMA4IP_2 = 10;
    sbit  DMA4IP_2_bit at IPC11.B10;
    const register unsigned short int DMA4IP_1 = 9;
    sbit  DMA4IP_1_bit at IPC11.B9;
    const register unsigned short int DMA4IP_0 = 8;
    sbit  DMA4IP_0_bit at IPC11.B8;
    const register unsigned short int PMPIP_2 = 6;
    sbit  PMPIP_2_bit at IPC11.B6;
    const register unsigned short int PMPIP_1 = 5;
    sbit  PMPIP_1_bit at IPC11.B5;
    const register unsigned short int PMPIP_0 = 4;
    sbit  PMPIP_0_bit at IPC11.B4;

    // IPC15 bits
    const register unsigned short int RTCIP_2 = 10;
    sbit  RTCIP_2_bit at IPC15.B10;
    const register unsigned short int RTCIP_1 = 9;
    sbit  RTCIP_1_bit at IPC15.B9;
    const register unsigned short int RTCIP_0 = 8;
    sbit  RTCIP_0_bit at IPC15.B8;
    const register unsigned short int DMA5IP_2 = 6;
    sbit  DMA5IP_2_bit at IPC15.B6;
    const register unsigned short int DMA5IP_1 = 5;
    sbit  DMA5IP_1_bit at IPC15.B5;
    const register unsigned short int DMA5IP_0 = 4;
    sbit  DMA5IP_0_bit at IPC15.B4;

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
    const register unsigned short int DMA7IP_2 = 6;
    sbit  DMA7IP_2_bit at IPC17.B6;
    const register unsigned short int DMA7IP_1 = 5;
    sbit  DMA7IP_1_bit at IPC17.B5;
    const register unsigned short int DMA7IP_0 = 4;
    sbit  DMA7IP_0_bit at IPC17.B4;
    const register unsigned short int DMA6IP_2 = 2;
    sbit  DMA6IP_2_bit at IPC17.B2;
    const register unsigned short int DMA6IP_1 = 1;
    sbit  DMA6IP_1_bit at IPC17.B1;
    const register unsigned short int DMA6IP_0 = 0;
    sbit  DMA6IP_0_bit at IPC17.B0;

    // INTTREG bits
    const register unsigned short int ILR_3 = 11;
    sbit  ILR_3_bit at INTTREG.B11;
    const register unsigned short int ILR_2 = 10;
    sbit  ILR_2_bit at INTTREG.B10;
    const register unsigned short int ILR_1 = 9;
    sbit  ILR_1_bit at INTTREG.B9;
    const register unsigned short int ILR_0 = 8;
    sbit  ILR_0_bit at INTTREG.B8;
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

    // I2C1RCV bits
    const register unsigned short int I2C1RCV_7 = 7;
    sbit  I2C1RCV_7_bit at I2C1RCV.B7;
    const register unsigned short int I2C1RCV_6 = 6;
    sbit  I2C1RCV_6_bit at I2C1RCV.B6;
    const register unsigned short int I2C1RCV_5 = 5;
    sbit  I2C1RCV_5_bit at I2C1RCV.B5;
    const register unsigned short int I2C1RCV_4 = 4;
    sbit  I2C1RCV_4_bit at I2C1RCV.B4;
    const register unsigned short int I2C1RCV_3 = 3;
    sbit  I2C1RCV_3_bit at I2C1RCV.B3;
    const register unsigned short int I2C1RCV_2 = 2;
    sbit  I2C1RCV_2_bit at I2C1RCV.B2;
    const register unsigned short int I2C1RCV_1 = 1;
    sbit  I2C1RCV_1_bit at I2C1RCV.B1;
    const register unsigned short int I2C1RCV_0 = 0;
    sbit  I2C1RCV_0_bit at I2C1RCV.B0;

    // I2C1TRN bits
    const register unsigned short int I2C1TRN_7 = 7;
    sbit  I2C1TRN_7_bit at I2C1TRN.B7;
    const register unsigned short int I2C1TRN_6 = 6;
    sbit  I2C1TRN_6_bit at I2C1TRN.B6;
    const register unsigned short int I2C1TRN_5 = 5;
    sbit  I2C1TRN_5_bit at I2C1TRN.B5;
    const register unsigned short int I2C1TRN_4 = 4;
    sbit  I2C1TRN_4_bit at I2C1TRN.B4;
    const register unsigned short int I2C1TRN_3 = 3;
    sbit  I2C1TRN_3_bit at I2C1TRN.B3;
    const register unsigned short int I2C1TRN_2 = 2;
    sbit  I2C1TRN_2_bit at I2C1TRN.B2;
    const register unsigned short int I2C1TRN_1 = 1;
    sbit  I2C1TRN_1_bit at I2C1TRN.B1;
    const register unsigned short int I2C1TRN_0 = 0;
    sbit  I2C1TRN_0_bit at I2C1TRN.B0;

    // I2C1BRG bits
    const register unsigned short int I2C1BRG_8 = 8;
    sbit  I2C1BRG_8_bit at I2C1BRG.B8;
    const register unsigned short int I2C1BRG_7 = 7;
    sbit  I2C1BRG_7_bit at I2C1BRG.B7;
    const register unsigned short int I2C1BRG_6 = 6;
    sbit  I2C1BRG_6_bit at I2C1BRG.B6;
    const register unsigned short int I2C1BRG_5 = 5;
    sbit  I2C1BRG_5_bit at I2C1BRG.B5;
    const register unsigned short int I2C1BRG_4 = 4;
    sbit  I2C1BRG_4_bit at I2C1BRG.B4;
    const register unsigned short int I2C1BRG_3 = 3;
    sbit  I2C1BRG_3_bit at I2C1BRG.B3;
    const register unsigned short int I2C1BRG_2 = 2;
    sbit  I2C1BRG_2_bit at I2C1BRG.B2;
    const register unsigned short int I2C1BRG_1 = 1;
    sbit  I2C1BRG_1_bit at I2C1BRG.B1;
    const register unsigned short int I2C1BRG_0 = 0;
    sbit  I2C1BRG_0_bit at I2C1BRG.B0;

    // I2C1CON bits
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2C1CON.B15;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2C1CON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON.B0;

    // I2C1STAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;

    // I2C1ADD bits
    const register unsigned short int I2C1ADD_9 = 9;
    sbit  I2C1ADD_9_bit at I2C1ADD.B9;
    const register unsigned short int I2C1ADD_8 = 8;
    sbit  I2C1ADD_8_bit at I2C1ADD.B8;
    const register unsigned short int I2C1ADD_7 = 7;
    sbit  I2C1ADD_7_bit at I2C1ADD.B7;
    const register unsigned short int I2C1ADD_6 = 6;
    sbit  I2C1ADD_6_bit at I2C1ADD.B6;
    const register unsigned short int I2C1ADD_5 = 5;
    sbit  I2C1ADD_5_bit at I2C1ADD.B5;
    const register unsigned short int I2C1ADD_4 = 4;
    sbit  I2C1ADD_4_bit at I2C1ADD.B4;
    const register unsigned short int I2C1ADD_3 = 3;
    sbit  I2C1ADD_3_bit at I2C1ADD.B3;
    const register unsigned short int I2C1ADD_2 = 2;
    sbit  I2C1ADD_2_bit at I2C1ADD.B2;
    const register unsigned short int I2C1ADD_1 = 1;
    sbit  I2C1ADD_1_bit at I2C1ADD.B1;
    const register unsigned short int I2C1ADD_0 = 0;
    sbit  I2C1ADD_0_bit at I2C1ADD.B0;

    // I2C1MSK bits
    const register unsigned short int AMSK_9 = 9;
    sbit  AMSK_9_bit at I2C1MSK.B9;
    const register unsigned short int AMSK_8 = 8;
    sbit  AMSK_8_bit at I2C1MSK.B8;
    const register unsigned short int AMSK_7 = 7;
    sbit  AMSK_7_bit at I2C1MSK.B7;
    const register unsigned short int AMSK_6 = 6;
    sbit  AMSK_6_bit at I2C1MSK.B6;
    const register unsigned short int AMSK_5 = 5;
    sbit  AMSK_5_bit at I2C1MSK.B5;
    const register unsigned short int AMSK_4 = 4;
    sbit  AMSK_4_bit at I2C1MSK.B4;
    const register unsigned short int AMSK_3 = 3;
    sbit  AMSK_3_bit at I2C1MSK.B3;
    const register unsigned short int AMSK_2 = 2;
    sbit  AMSK_2_bit at I2C1MSK.B2;
    const register unsigned short int AMSK_1 = 1;
    sbit  AMSK_1_bit at I2C1MSK.B1;
    const register unsigned short int AMSK_0 = 0;
    sbit  AMSK_0_bit at I2C1MSK.B0;

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
    const register unsigned short int UTXREG8 = 8;
    sbit  UTXREG8_bit at U1TXREG.B8;
    sbit  UTXREG8_U1TXREG_bit at U1TXREG.B8;
    const register unsigned short int UTXREG7 = 7;
    sbit  UTXREG7_bit at U1TXREG.B7;
    sbit  UTXREG7_U1TXREG_bit at U1TXREG.B7;
    const register unsigned short int UTXREG6 = 6;
    sbit  UTXREG6_bit at U1TXREG.B6;
    sbit  UTXREG6_U1TXREG_bit at U1TXREG.B6;
    const register unsigned short int UTXREG5 = 5;
    sbit  UTXREG5_bit at U1TXREG.B5;
    sbit  UTXREG5_U1TXREG_bit at U1TXREG.B5;
    const register unsigned short int UTXREG4 = 4;
    sbit  UTXREG4_bit at U1TXREG.B4;
    sbit  UTXREG4_U1TXREG_bit at U1TXREG.B4;
    const register unsigned short int UTXREG3 = 3;
    sbit  UTXREG3_bit at U1TXREG.B3;
    sbit  UTXREG3_U1TXREG_bit at U1TXREG.B3;
    const register unsigned short int UTXREG2 = 2;
    sbit  UTXREG2_bit at U1TXREG.B2;
    sbit  UTXREG2_U1TXREG_bit at U1TXREG.B2;
    const register unsigned short int UTXREG1 = 1;
    sbit  UTXREG1_bit at U1TXREG.B1;
    sbit  UTXREG1_U1TXREG_bit at U1TXREG.B1;
    const register unsigned short int UTXREG0 = 0;
    sbit  UTXREG0_bit at U1TXREG.B0;
    sbit  UTXREG0_U1TXREG_bit at U1TXREG.B0;

    // U1RXREG bits
    const register unsigned short int URXREG8 = 8;
    sbit  URXREG8_bit at U1RXREG.B8;
    sbit  URXREG8_U1RXREG_bit at U1RXREG.B8;
    const register unsigned short int URXREG7 = 7;
    sbit  URXREG7_bit at U1RXREG.B7;
    sbit  URXREG7_U1RXREG_bit at U1RXREG.B7;
    const register unsigned short int URXREG6 = 6;
    sbit  URXREG6_bit at U1RXREG.B6;
    sbit  URXREG6_U1RXREG_bit at U1RXREG.B6;
    const register unsigned short int URXREG5 = 5;
    sbit  URXREG5_bit at U1RXREG.B5;
    sbit  URXREG5_U1RXREG_bit at U1RXREG.B5;
    const register unsigned short int URXREG4 = 4;
    sbit  URXREG4_bit at U1RXREG.B4;
    sbit  URXREG4_U1RXREG_bit at U1RXREG.B4;
    const register unsigned short int URXREG3 = 3;
    sbit  URXREG3_bit at U1RXREG.B3;
    sbit  URXREG3_U1RXREG_bit at U1RXREG.B3;
    const register unsigned short int URXREG2 = 2;
    sbit  URXREG2_bit at U1RXREG.B2;
    sbit  URXREG2_U1RXREG_bit at U1RXREG.B2;
    const register unsigned short int URXREG1 = 1;
    sbit  URXREG1_bit at U1RXREG.B1;
    sbit  URXREG1_U1RXREG_bit at U1RXREG.B1;
    const register unsigned short int URXREG0 = 0;
    sbit  URXREG0_bit at U1RXREG.B0;
    sbit  URXREG0_U1RXREG_bit at U1RXREG.B0;

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
    sbit  UTXREG8_U2TXREG_bit at U2TXREG.B8;
    sbit  UTXREG7_U2TXREG_bit at U2TXREG.B7;
    sbit  UTXREG6_U2TXREG_bit at U2TXREG.B6;
    sbit  UTXREG5_U2TXREG_bit at U2TXREG.B5;
    sbit  UTXREG4_U2TXREG_bit at U2TXREG.B4;
    sbit  UTXREG3_U2TXREG_bit at U2TXREG.B3;
    sbit  UTXREG2_U2TXREG_bit at U2TXREG.B2;
    sbit  UTXREG1_U2TXREG_bit at U2TXREG.B1;
    sbit  UTXREG0_U2TXREG_bit at U2TXREG.B0;

    // U2RXREG bits
    sbit  URXREG8_U2RXREG_bit at U2RXREG.B8;
    sbit  URXREG7_U2RXREG_bit at U2RXREG.B7;
    sbit  URXREG6_U2RXREG_bit at U2RXREG.B6;
    sbit  URXREG5_U2RXREG_bit at U2RXREG.B5;
    sbit  URXREG4_U2RXREG_bit at U2RXREG.B4;
    sbit  URXREG3_U2RXREG_bit at U2RXREG.B3;
    sbit  URXREG2_U2RXREG_bit at U2RXREG.B2;
    sbit  URXREG1_U2RXREG_bit at U2RXREG.B1;
    sbit  URXREG0_U2RXREG_bit at U2RXREG.B0;

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
    const register unsigned short int BUFELM_2 = 10;
    sbit  BUFELM_2_bit at SPI2STAT.B10;
    const register unsigned short int BUFELM_1 = 9;
    sbit  BUFELM_1_bit at SPI2STAT.B9;
    const register unsigned short int BUFELM_0 = 8;
    sbit  BUFELM_0_bit at SPI2STAT.B8;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
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

    // TRISA bits
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
    const register unsigned short int TRISA3 = 3;
    sbit  TRISA3_bit at TRISA.B3;
    const register unsigned short int TRISA2 = 2;
    sbit  TRISA2_bit at TRISA.B2;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;

    // PORTA bits
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
    const register unsigned short int RA3 = 3;
    sbit  RA3_bit at PORTA.B3;
    const register unsigned short int RA2 = 2;
    sbit  RA2_bit at PORTA.B2;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;

    // LATA bits
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
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;

    // ODCA bits
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
    const register unsigned short int ODCA3 = 3;
    sbit  ODCA3_bit at ODCA.B3;
    const register unsigned short int ODCA2 = 2;
    sbit  ODCA2_bit at ODCA.B2;
    const register unsigned short int ODCA1 = 1;
    sbit  ODCA1_bit at ODCA.B1;
    const register unsigned short int ODCA0 = 0;
    sbit  ODCA0_bit at ODCA.B0;

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

    // TRISC bits
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

    // PADCFG1 bits
    const register unsigned short int RTSECSEL = 1;
    sbit  RTSECSEL_bit at PADCFG1.B1;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCFG1.B0;

    // ADC1BUF0 bits
    const register unsigned short int ADCBUF0_15 = 15;
    sbit  ADCBUF0_15_bit at ADC1BUF0.B15;
    sbit  ADCBUF0_15_ADC1BUF0_bit at ADC1BUF0.B15;
    sbit  ADCBUF0_15_ADCBUF0_bit at ADCBUF0.B15;
    const register unsigned short int ADCBUF0_14 = 14;
    sbit  ADCBUF0_14_bit at ADC1BUF0.B14;
    sbit  ADCBUF0_14_ADC1BUF0_bit at ADC1BUF0.B14;
    sbit  ADCBUF0_14_ADCBUF0_bit at ADCBUF0.B14;
    const register unsigned short int ADCBUF0_13 = 13;
    sbit  ADCBUF0_13_bit at ADC1BUF0.B13;
    sbit  ADCBUF0_13_ADC1BUF0_bit at ADC1BUF0.B13;
    sbit  ADCBUF0_13_ADCBUF0_bit at ADCBUF0.B13;
    const register unsigned short int ADCBUF0_12 = 12;
    sbit  ADCBUF0_12_bit at ADC1BUF0.B12;
    sbit  ADCBUF0_12_ADC1BUF0_bit at ADC1BUF0.B12;
    sbit  ADCBUF0_12_ADCBUF0_bit at ADCBUF0.B12;
    const register unsigned short int ADCBUF0_11 = 11;
    sbit  ADCBUF0_11_bit at ADC1BUF0.B11;
    sbit  ADCBUF0_11_ADC1BUF0_bit at ADC1BUF0.B11;
    sbit  ADCBUF0_11_ADCBUF0_bit at ADCBUF0.B11;
    const register unsigned short int ADCBUF0_10 = 10;
    sbit  ADCBUF0_10_bit at ADC1BUF0.B10;
    sbit  ADCBUF0_10_ADC1BUF0_bit at ADC1BUF0.B10;
    sbit  ADCBUF0_10_ADCBUF0_bit at ADCBUF0.B10;
    const register unsigned short int ADCBUF0_9 = 9;
    sbit  ADCBUF0_9_bit at ADC1BUF0.B9;
    sbit  ADCBUF0_9_ADC1BUF0_bit at ADC1BUF0.B9;
    sbit  ADCBUF0_9_ADCBUF0_bit at ADCBUF0.B9;
    const register unsigned short int ADCBUF0_8 = 8;
    sbit  ADCBUF0_8_bit at ADC1BUF0.B8;
    sbit  ADCBUF0_8_ADC1BUF0_bit at ADC1BUF0.B8;
    sbit  ADCBUF0_8_ADCBUF0_bit at ADCBUF0.B8;
    const register unsigned short int ADCBUF0_7 = 7;
    sbit  ADCBUF0_7_bit at ADC1BUF0.B7;
    sbit  ADCBUF0_7_ADC1BUF0_bit at ADC1BUF0.B7;
    sbit  ADCBUF0_7_ADCBUF0_bit at ADCBUF0.B7;
    const register unsigned short int ADCBUF0_6 = 6;
    sbit  ADCBUF0_6_bit at ADC1BUF0.B6;
    sbit  ADCBUF0_6_ADC1BUF0_bit at ADC1BUF0.B6;
    sbit  ADCBUF0_6_ADCBUF0_bit at ADCBUF0.B6;
    const register unsigned short int ADCBUF0_5 = 5;
    sbit  ADCBUF0_5_bit at ADC1BUF0.B5;
    sbit  ADCBUF0_5_ADC1BUF0_bit at ADC1BUF0.B5;
    sbit  ADCBUF0_5_ADCBUF0_bit at ADCBUF0.B5;
    const register unsigned short int ADCBUF0_4 = 4;
    sbit  ADCBUF0_4_bit at ADC1BUF0.B4;
    sbit  ADCBUF0_4_ADC1BUF0_bit at ADC1BUF0.B4;
    sbit  ADCBUF0_4_ADCBUF0_bit at ADCBUF0.B4;
    const register unsigned short int ADCBUF0_3 = 3;
    sbit  ADCBUF0_3_bit at ADC1BUF0.B3;
    sbit  ADCBUF0_3_ADC1BUF0_bit at ADC1BUF0.B3;
    sbit  ADCBUF0_3_ADCBUF0_bit at ADCBUF0.B3;
    const register unsigned short int ADCBUF0_2 = 2;
    sbit  ADCBUF0_2_bit at ADC1BUF0.B2;
    sbit  ADCBUF0_2_ADC1BUF0_bit at ADC1BUF0.B2;
    sbit  ADCBUF0_2_ADCBUF0_bit at ADCBUF0.B2;
    const register unsigned short int ADCBUF0_1 = 1;
    sbit  ADCBUF0_1_bit at ADC1BUF0.B1;
    sbit  ADCBUF0_1_ADC1BUF0_bit at ADC1BUF0.B1;
    sbit  ADCBUF0_1_ADCBUF0_bit at ADCBUF0.B1;
    const register unsigned short int ADCBUF0_0 = 0;
    sbit  ADCBUF0_0_bit at ADC1BUF0.B0;
    sbit  ADCBUF0_0_ADC1BUF0_bit at ADC1BUF0.B0;
    sbit  ADCBUF0_0_ADCBUF0_bit at ADCBUF0.B0;

    // AD1CON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;
    sbit  ADON_AD1CON1_bit at AD1CON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    sbit  ADSIDL_AD1CON1_bit at AD1CON1.B13;
    const register unsigned short int ADDMABM = 12;
    sbit  ADDMABM_bit at AD1CON1.B12;
    sbit  ADDMABM_AD1CON1_bit at AD1CON1.B12;
    const register unsigned short int AD12B = 10;
    sbit  AD12B_bit at AD1CON1.B10;
    sbit  AD12B_AD1CON1_bit at AD1CON1.B10;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at AD1CON1.B9;
    sbit  FORM_1_AD1CON1_bit at AD1CON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at AD1CON1.B8;
    sbit  FORM_0_AD1CON1_bit at AD1CON1.B8;
    const register unsigned short int SSRC_2 = 7;
    sbit  SSRC_2_bit at AD1CON1.B7;
    sbit  SSRC_2_AD1CON1_bit at AD1CON1.B7;
    const register unsigned short int SSRC_1 = 6;
    sbit  SSRC_1_bit at AD1CON1.B6;
    sbit  SSRC_1_AD1CON1_bit at AD1CON1.B6;
    const register unsigned short int SSRC_0 = 5;
    sbit  SSRC_0_bit at AD1CON1.B5;
    sbit  SSRC_0_AD1CON1_bit at AD1CON1.B5;
    const register unsigned short int SIMSAM = 3;
    sbit  SIMSAM_bit at AD1CON1.B3;
    sbit  SIMSAM_AD1CON1_bit at AD1CON1.B3;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    sbit  ASAM_AD1CON1_bit at AD1CON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    sbit  SAMP_AD1CON1_bit at AD1CON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;
    sbit  DONE_AD1CON1_bit at AD1CON1.B0;

    // AD1CON2 bits
    const register unsigned short int VCFG_2 = 15;
    sbit  VCFG_2_bit at AD1CON2.B15;
    sbit  VCFG_2_AD1CON2_bit at AD1CON2.B15;
    sbit  VCFG_2_ADCON2_bit at ADCON2.B15;
    const register unsigned short int VCFG_1 = 14;
    sbit  VCFG_1_bit at AD1CON2.B14;
    sbit  VCFG_1_AD1CON2_bit at AD1CON2.B14;
    sbit  VCFG_1_ADCON2_bit at ADCON2.B14;
    const register unsigned short int VCFG_0 = 13;
    sbit  VCFG_0_bit at AD1CON2.B13;
    sbit  VCFG_0_AD1CON2_bit at AD1CON2.B13;
    sbit  VCFG_0_ADCON2_bit at ADCON2.B13;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    sbit  CSCNA_AD1CON2_bit at AD1CON2.B10;
    sbit  CSCNA_ADCON2_bit at ADCON2.B10;
    const register unsigned short int CHPS_1 = 9;
    sbit  CHPS_1_bit at AD1CON2.B9;
    sbit  CHPS_1_AD1CON2_bit at AD1CON2.B9;
    sbit  CHPS_1_ADCON2_bit at ADCON2.B9;
    const register unsigned short int CHPS_0 = 8;
    sbit  CHPS_0_bit at AD1CON2.B8;
    sbit  CHPS_0_AD1CON2_bit at AD1CON2.B8;
    sbit  CHPS_0_ADCON2_bit at ADCON2.B8;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    sbit  BUFS_AD1CON2_bit at AD1CON2.B7;
    sbit  BUFS_ADCON2_bit at ADCON2.B7;
    const register unsigned short int SMPI_3 = 5;
    sbit  SMPI_3_bit at AD1CON2.B5;
    sbit  SMPI_3_AD1CON2_bit at AD1CON2.B5;
    sbit  SMPI_3_ADCON2_bit at ADCON2.B5;
    const register unsigned short int SMPI_2 = 4;
    sbit  SMPI_2_bit at AD1CON2.B4;
    sbit  SMPI_2_AD1CON2_bit at AD1CON2.B4;
    sbit  SMPI_2_ADCON2_bit at ADCON2.B4;
    const register unsigned short int SMPI_1 = 3;
    sbit  SMPI_1_bit at AD1CON2.B3;
    sbit  SMPI_1_AD1CON2_bit at AD1CON2.B3;
    sbit  SMPI_1_ADCON2_bit at ADCON2.B3;
    const register unsigned short int SMPI_0 = 2;
    sbit  SMPI_0_bit at AD1CON2.B2;
    sbit  SMPI_0_AD1CON2_bit at AD1CON2.B2;
    sbit  SMPI_0_ADCON2_bit at ADCON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at AD1CON2.B1;
    sbit  BUFM_AD1CON2_bit at AD1CON2.B1;
    sbit  BUFM_ADCON2_bit at ADCON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at AD1CON2.B0;
    sbit  ALTS_AD1CON2_bit at AD1CON2.B0;
    sbit  ALTS_ADCON2_bit at ADCON2.B0;

    // AD1CON3 bits
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;
    sbit  ADRC_AD1CON3_bit at AD1CON3.B15;
    sbit  ADRC_ADCON3_bit at ADCON3.B15;
    const register unsigned short int SAMC_4 = 12;
    sbit  SAMC_4_bit at AD1CON3.B12;
    sbit  SAMC_4_AD1CON3_bit at AD1CON3.B12;
    sbit  SAMC_4_ADCON3_bit at ADCON3.B12;
    const register unsigned short int SAMC_3 = 11;
    sbit  SAMC_3_bit at AD1CON3.B11;
    sbit  SAMC_3_AD1CON3_bit at AD1CON3.B11;
    sbit  SAMC_3_ADCON3_bit at ADCON3.B11;
    const register unsigned short int SAMC_2 = 10;
    sbit  SAMC_2_bit at AD1CON3.B10;
    sbit  SAMC_2_AD1CON3_bit at AD1CON3.B10;
    sbit  SAMC_2_ADCON3_bit at ADCON3.B10;
    const register unsigned short int SAMC_1 = 9;
    sbit  SAMC_1_bit at AD1CON3.B9;
    sbit  SAMC_1_AD1CON3_bit at AD1CON3.B9;
    sbit  SAMC_1_ADCON3_bit at ADCON3.B9;
    const register unsigned short int SAMC_0 = 8;
    sbit  SAMC_0_bit at AD1CON3.B8;
    sbit  SAMC_0_AD1CON3_bit at AD1CON3.B8;
    sbit  SAMC_0_ADCON3_bit at ADCON3.B8;
    const register unsigned short int ADCS_7 = 7;
    sbit  ADCS_7_bit at AD1CON3.B7;
    sbit  ADCS_7_AD1CON3_bit at AD1CON3.B7;
    sbit  ADCS_7_ADCON3_bit at ADCON3.B7;
    const register unsigned short int ADCS_6 = 6;
    sbit  ADCS_6_bit at AD1CON3.B6;
    sbit  ADCS_6_AD1CON3_bit at AD1CON3.B6;
    sbit  ADCS_6_ADCON3_bit at ADCON3.B6;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at AD1CON3.B5;
    sbit  ADCS_5_AD1CON3_bit at AD1CON3.B5;
    sbit  ADCS_5_ADCON3_bit at ADCON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at AD1CON3.B4;
    sbit  ADCS_4_AD1CON3_bit at AD1CON3.B4;
    sbit  ADCS_4_ADCON3_bit at ADCON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at AD1CON3.B3;
    sbit  ADCS_3_AD1CON3_bit at AD1CON3.B3;
    sbit  ADCS_3_ADCON3_bit at ADCON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at AD1CON3.B2;
    sbit  ADCS_2_AD1CON3_bit at AD1CON3.B2;
    sbit  ADCS_2_ADCON3_bit at ADCON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at AD1CON3.B1;
    sbit  ADCS_1_AD1CON3_bit at AD1CON3.B1;
    sbit  ADCS_1_ADCON3_bit at ADCON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at AD1CON3.B0;
    sbit  ADCS_0_AD1CON3_bit at AD1CON3.B0;
    sbit  ADCS_0_ADCON3_bit at ADCON3.B0;

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

    // AD1PCFGL bits
    const register unsigned short int PCFG12 = 12;
    sbit  PCFG12_bit at AD1PCFGL.B12;
    const register unsigned short int PCFG11 = 11;
    sbit  PCFG11_bit at AD1PCFGL.B11;
    const register unsigned short int PCFG10 = 10;
    sbit  PCFG10_bit at AD1PCFGL.B10;
    const register unsigned short int PCFG9 = 9;
    sbit  PCFG9_bit at AD1PCFGL.B9;
    const register unsigned short int PCFG8 = 8;
    sbit  PCFG8_bit at AD1PCFGL.B8;
    const register unsigned short int PCFG7 = 7;
    sbit  PCFG7_bit at AD1PCFGL.B7;
    const register unsigned short int PCFG6 = 6;
    sbit  PCFG6_bit at AD1PCFGL.B6;
    const register unsigned short int PCFG5 = 5;
    sbit  PCFG5_bit at AD1PCFGL.B5;
    const register unsigned short int PCFG4 = 4;
    sbit  PCFG4_bit at AD1PCFGL.B4;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at AD1PCFGL.B3;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at AD1PCFGL.B2;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at AD1PCFGL.B1;
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at AD1PCFGL.B0;

    // AD1CSSL bits
    const register unsigned short int CSS12 = 12;
    sbit  CSS12_bit at AD1CSSL.B12;
    sbit  CSS12_AD1CSSL_bit at AD1CSSL.B12;
    sbit  CSS12_ADCSSL_bit at ADCSSL.B12;
    const register unsigned short int CSS11 = 11;
    sbit  CSS11_bit at AD1CSSL.B11;
    sbit  CSS11_AD1CSSL_bit at AD1CSSL.B11;
    sbit  CSS11_ADCSSL_bit at ADCSSL.B11;
    const register unsigned short int CSS10 = 10;
    sbit  CSS10_bit at AD1CSSL.B10;
    sbit  CSS10_AD1CSSL_bit at AD1CSSL.B10;
    sbit  CSS10_ADCSSL_bit at ADCSSL.B10;
    const register unsigned short int CSS9 = 9;
    sbit  CSS9_bit at AD1CSSL.B9;
    sbit  CSS9_AD1CSSL_bit at AD1CSSL.B9;
    sbit  CSS9_ADCSSL_bit at ADCSSL.B9;
    const register unsigned short int CSS8 = 8;
    sbit  CSS8_bit at AD1CSSL.B8;
    sbit  CSS8_AD1CSSL_bit at AD1CSSL.B8;
    sbit  CSS8_ADCSSL_bit at ADCSSL.B8;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at AD1CSSL.B7;
    sbit  CSS7_AD1CSSL_bit at AD1CSSL.B7;
    sbit  CSS7_ADCSSL_bit at ADCSSL.B7;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at AD1CSSL.B6;
    sbit  CSS6_AD1CSSL_bit at AD1CSSL.B6;
    sbit  CSS6_ADCSSL_bit at ADCSSL.B6;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at AD1CSSL.B5;
    sbit  CSS5_AD1CSSL_bit at AD1CSSL.B5;
    sbit  CSS5_ADCSSL_bit at ADCSSL.B5;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at AD1CSSL.B4;
    sbit  CSS4_AD1CSSL_bit at AD1CSSL.B4;
    sbit  CSS4_ADCSSL_bit at ADCSSL.B4;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at AD1CSSL.B3;
    sbit  CSS3_AD1CSSL_bit at AD1CSSL.B3;
    sbit  CSS3_ADCSSL_bit at ADCSSL.B3;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at AD1CSSL.B2;
    sbit  CSS2_AD1CSSL_bit at AD1CSSL.B2;
    sbit  CSS2_ADCSSL_bit at ADCSSL.B2;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at AD1CSSL.B1;
    sbit  CSS1_AD1CSSL_bit at AD1CSSL.B1;
    sbit  CSS1_ADCSSL_bit at ADCSSL.B1;
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at AD1CSSL.B0;
    sbit  CSS0_AD1CSSL_bit at AD1CSSL.B0;
    sbit  CSS0_ADCSSL_bit at ADCSSL.B0;

    // AD1CON4 bits
    const register unsigned short int DMABL_2 = 2;
    sbit  DMABL_2_bit at AD1CON4.B2;
    const register unsigned short int DMABL_1 = 1;
    sbit  DMABL_1_bit at AD1CON4.B1;
    const register unsigned short int DMABL_0 = 0;
    sbit  DMABL_0_bit at AD1CON4.B0;

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

    // DMA0STA bits
    const register unsigned short int STA_15 = 15;
    sbit  STA_15_bit at DMA0STA.B15;
    sbit  STA_15_DMA0STA_bit at DMA0STA.B15;
    const register unsigned short int STA_14 = 14;
    sbit  STA_14_bit at DMA0STA.B14;
    sbit  STA_14_DMA0STA_bit at DMA0STA.B14;
    const register unsigned short int STA_13 = 13;
    sbit  STA_13_bit at DMA0STA.B13;
    sbit  STA_13_DMA0STA_bit at DMA0STA.B13;
    const register unsigned short int STA_12 = 12;
    sbit  STA_12_bit at DMA0STA.B12;
    sbit  STA_12_DMA0STA_bit at DMA0STA.B12;
    const register unsigned short int STA_11 = 11;
    sbit  STA_11_bit at DMA0STA.B11;
    sbit  STA_11_DMA0STA_bit at DMA0STA.B11;
    const register unsigned short int STA_10 = 10;
    sbit  STA_10_bit at DMA0STA.B10;
    sbit  STA_10_DMA0STA_bit at DMA0STA.B10;
    const register unsigned short int STA_9 = 9;
    sbit  STA_9_bit at DMA0STA.B9;
    sbit  STA_9_DMA0STA_bit at DMA0STA.B9;
    const register unsigned short int STA_8 = 8;
    sbit  STA_8_bit at DMA0STA.B8;
    sbit  STA_8_DMA0STA_bit at DMA0STA.B8;
    const register unsigned short int STA_7 = 7;
    sbit  STA_7_bit at DMA0STA.B7;
    sbit  STA_7_DMA0STA_bit at DMA0STA.B7;
    const register unsigned short int STA_6 = 6;
    sbit  STA_6_bit at DMA0STA.B6;
    sbit  STA_6_DMA0STA_bit at DMA0STA.B6;
    const register unsigned short int STA_5 = 5;
    sbit  STA_5_bit at DMA0STA.B5;
    sbit  STA_5_DMA0STA_bit at DMA0STA.B5;
    const register unsigned short int STA_4 = 4;
    sbit  STA_4_bit at DMA0STA.B4;
    sbit  STA_4_DMA0STA_bit at DMA0STA.B4;
    const register unsigned short int STA_3 = 3;
    sbit  STA_3_bit at DMA0STA.B3;
    sbit  STA_3_DMA0STA_bit at DMA0STA.B3;
    const register unsigned short int STA_2 = 2;
    sbit  STA_2_bit at DMA0STA.B2;
    sbit  STA_2_DMA0STA_bit at DMA0STA.B2;
    const register unsigned short int STA_1 = 1;
    sbit  STA_1_bit at DMA0STA.B1;
    sbit  STA_1_DMA0STA_bit at DMA0STA.B1;
    const register unsigned short int STA_0 = 0;
    sbit  STA_0_bit at DMA0STA.B0;
    sbit  STA_0_DMA0STA_bit at DMA0STA.B0;

    // DMA0STB bits
    const register unsigned short int STB_15 = 15;
    sbit  STB_15_bit at DMA0STB.B15;
    sbit  STB_15_DMA0STB_bit at DMA0STB.B15;
    const register unsigned short int STB_14 = 14;
    sbit  STB_14_bit at DMA0STB.B14;
    sbit  STB_14_DMA0STB_bit at DMA0STB.B14;
    const register unsigned short int STB_13 = 13;
    sbit  STB_13_bit at DMA0STB.B13;
    sbit  STB_13_DMA0STB_bit at DMA0STB.B13;
    const register unsigned short int STB_12 = 12;
    sbit  STB_12_bit at DMA0STB.B12;
    sbit  STB_12_DMA0STB_bit at DMA0STB.B12;
    const register unsigned short int STB_11 = 11;
    sbit  STB_11_bit at DMA0STB.B11;
    sbit  STB_11_DMA0STB_bit at DMA0STB.B11;
    const register unsigned short int STB_10 = 10;
    sbit  STB_10_bit at DMA0STB.B10;
    sbit  STB_10_DMA0STB_bit at DMA0STB.B10;
    const register unsigned short int STB_9 = 9;
    sbit  STB_9_bit at DMA0STB.B9;
    sbit  STB_9_DMA0STB_bit at DMA0STB.B9;
    const register unsigned short int STB_8 = 8;
    sbit  STB_8_bit at DMA0STB.B8;
    sbit  STB_8_DMA0STB_bit at DMA0STB.B8;
    const register unsigned short int STB_7 = 7;
    sbit  STB_7_bit at DMA0STB.B7;
    sbit  STB_7_DMA0STB_bit at DMA0STB.B7;
    const register unsigned short int STB_6 = 6;
    sbit  STB_6_bit at DMA0STB.B6;
    sbit  STB_6_DMA0STB_bit at DMA0STB.B6;
    const register unsigned short int STB_5 = 5;
    sbit  STB_5_bit at DMA0STB.B5;
    sbit  STB_5_DMA0STB_bit at DMA0STB.B5;
    const register unsigned short int STB_4 = 4;
    sbit  STB_4_bit at DMA0STB.B4;
    sbit  STB_4_DMA0STB_bit at DMA0STB.B4;
    const register unsigned short int STB_3 = 3;
    sbit  STB_3_bit at DMA0STB.B3;
    sbit  STB_3_DMA0STB_bit at DMA0STB.B3;
    const register unsigned short int STB_2 = 2;
    sbit  STB_2_bit at DMA0STB.B2;
    sbit  STB_2_DMA0STB_bit at DMA0STB.B2;
    const register unsigned short int STB_1 = 1;
    sbit  STB_1_bit at DMA0STB.B1;
    sbit  STB_1_DMA0STB_bit at DMA0STB.B1;
    const register unsigned short int STB_0 = 0;
    sbit  STB_0_bit at DMA0STB.B0;
    sbit  STB_0_DMA0STB_bit at DMA0STB.B0;

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
    const register unsigned short int CNT_15 = 15;
    sbit  CNT_15_bit at DMA0CNT.B15;
    sbit  CNT_15_DMA0CNT_bit at DMA0CNT.B15;
    const register unsigned short int CNT_14 = 14;
    sbit  CNT_14_bit at DMA0CNT.B14;
    sbit  CNT_14_DMA0CNT_bit at DMA0CNT.B14;
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
    sbit  IRQSEL_6_DMA1REQ_bit at DMA1REQ.B6;
    sbit  IRQSEL_5_DMA1REQ_bit at DMA1REQ.B5;
    sbit  IRQSEL_4_DMA1REQ_bit at DMA1REQ.B4;
    sbit  IRQSEL_3_DMA1REQ_bit at DMA1REQ.B3;
    sbit  IRQSEL_2_DMA1REQ_bit at DMA1REQ.B2;
    sbit  IRQSEL_1_DMA1REQ_bit at DMA1REQ.B1;
    sbit  IRQSEL_0_DMA1REQ_bit at DMA1REQ.B0;

    // DMA1STA bits
    sbit  STA_15_DMA1STA_bit at DMA1STA.B15;
    sbit  STA_14_DMA1STA_bit at DMA1STA.B14;
    sbit  STA_13_DMA1STA_bit at DMA1STA.B13;
    sbit  STA_12_DMA1STA_bit at DMA1STA.B12;
    sbit  STA_11_DMA1STA_bit at DMA1STA.B11;
    sbit  STA_10_DMA1STA_bit at DMA1STA.B10;
    sbit  STA_9_DMA1STA_bit at DMA1STA.B9;
    sbit  STA_8_DMA1STA_bit at DMA1STA.B8;
    sbit  STA_7_DMA1STA_bit at DMA1STA.B7;
    sbit  STA_6_DMA1STA_bit at DMA1STA.B6;
    sbit  STA_5_DMA1STA_bit at DMA1STA.B5;
    sbit  STA_4_DMA1STA_bit at DMA1STA.B4;
    sbit  STA_3_DMA1STA_bit at DMA1STA.B3;
    sbit  STA_2_DMA1STA_bit at DMA1STA.B2;
    sbit  STA_1_DMA1STA_bit at DMA1STA.B1;
    sbit  STA_0_DMA1STA_bit at DMA1STA.B0;

    // DMA1STB bits
    sbit  STB_15_DMA1STB_bit at DMA1STB.B15;
    sbit  STB_14_DMA1STB_bit at DMA1STB.B14;
    sbit  STB_13_DMA1STB_bit at DMA1STB.B13;
    sbit  STB_12_DMA1STB_bit at DMA1STB.B12;
    sbit  STB_11_DMA1STB_bit at DMA1STB.B11;
    sbit  STB_10_DMA1STB_bit at DMA1STB.B10;
    sbit  STB_9_DMA1STB_bit at DMA1STB.B9;
    sbit  STB_8_DMA1STB_bit at DMA1STB.B8;
    sbit  STB_7_DMA1STB_bit at DMA1STB.B7;
    sbit  STB_6_DMA1STB_bit at DMA1STB.B6;
    sbit  STB_5_DMA1STB_bit at DMA1STB.B5;
    sbit  STB_4_DMA1STB_bit at DMA1STB.B4;
    sbit  STB_3_DMA1STB_bit at DMA1STB.B3;
    sbit  STB_2_DMA1STB_bit at DMA1STB.B2;
    sbit  STB_1_DMA1STB_bit at DMA1STB.B1;
    sbit  STB_0_DMA1STB_bit at DMA1STB.B0;

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
    sbit  CNT_15_DMA1CNT_bit at DMA1CNT.B15;
    sbit  CNT_14_DMA1CNT_bit at DMA1CNT.B14;
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
    sbit  IRQSEL_6_DMA2REQ_bit at DMA2REQ.B6;
    sbit  IRQSEL_5_DMA2REQ_bit at DMA2REQ.B5;
    sbit  IRQSEL_4_DMA2REQ_bit at DMA2REQ.B4;
    sbit  IRQSEL_3_DMA2REQ_bit at DMA2REQ.B3;
    sbit  IRQSEL_2_DMA2REQ_bit at DMA2REQ.B2;
    sbit  IRQSEL_1_DMA2REQ_bit at DMA2REQ.B1;
    sbit  IRQSEL_0_DMA2REQ_bit at DMA2REQ.B0;

    // DMA2STA bits
    sbit  STA_15_DMA2STA_bit at DMA2STA.B15;
    sbit  STA_14_DMA2STA_bit at DMA2STA.B14;
    sbit  STA_13_DMA2STA_bit at DMA2STA.B13;
    sbit  STA_12_DMA2STA_bit at DMA2STA.B12;
    sbit  STA_11_DMA2STA_bit at DMA2STA.B11;
    sbit  STA_10_DMA2STA_bit at DMA2STA.B10;
    sbit  STA_9_DMA2STA_bit at DMA2STA.B9;
    sbit  STA_8_DMA2STA_bit at DMA2STA.B8;
    sbit  STA_7_DMA2STA_bit at DMA2STA.B7;
    sbit  STA_6_DMA2STA_bit at DMA2STA.B6;
    sbit  STA_5_DMA2STA_bit at DMA2STA.B5;
    sbit  STA_4_DMA2STA_bit at DMA2STA.B4;
    sbit  STA_3_DMA2STA_bit at DMA2STA.B3;
    sbit  STA_2_DMA2STA_bit at DMA2STA.B2;
    sbit  STA_1_DMA2STA_bit at DMA2STA.B1;
    sbit  STA_0_DMA2STA_bit at DMA2STA.B0;

    // DMA2STB bits
    sbit  STB_15_DMA2STB_bit at DMA2STB.B15;
    sbit  STB_14_DMA2STB_bit at DMA2STB.B14;
    sbit  STB_13_DMA2STB_bit at DMA2STB.B13;
    sbit  STB_12_DMA2STB_bit at DMA2STB.B12;
    sbit  STB_11_DMA2STB_bit at DMA2STB.B11;
    sbit  STB_10_DMA2STB_bit at DMA2STB.B10;
    sbit  STB_9_DMA2STB_bit at DMA2STB.B9;
    sbit  STB_8_DMA2STB_bit at DMA2STB.B8;
    sbit  STB_7_DMA2STB_bit at DMA2STB.B7;
    sbit  STB_6_DMA2STB_bit at DMA2STB.B6;
    sbit  STB_5_DMA2STB_bit at DMA2STB.B5;
    sbit  STB_4_DMA2STB_bit at DMA2STB.B4;
    sbit  STB_3_DMA2STB_bit at DMA2STB.B3;
    sbit  STB_2_DMA2STB_bit at DMA2STB.B2;
    sbit  STB_1_DMA2STB_bit at DMA2STB.B1;
    sbit  STB_0_DMA2STB_bit at DMA2STB.B0;

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
    sbit  CNT_15_DMA2CNT_bit at DMA2CNT.B15;
    sbit  CNT_14_DMA2CNT_bit at DMA2CNT.B14;
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
    sbit  IRQSEL_6_DMA3REQ_bit at DMA3REQ.B6;
    sbit  IRQSEL_5_DMA3REQ_bit at DMA3REQ.B5;
    sbit  IRQSEL_4_DMA3REQ_bit at DMA3REQ.B4;
    sbit  IRQSEL_3_DMA3REQ_bit at DMA3REQ.B3;
    sbit  IRQSEL_2_DMA3REQ_bit at DMA3REQ.B2;
    sbit  IRQSEL_1_DMA3REQ_bit at DMA3REQ.B1;
    sbit  IRQSEL_0_DMA3REQ_bit at DMA3REQ.B0;

    // DMA3STA bits
    sbit  STA_15_DMA3STA_bit at DMA3STA.B15;
    sbit  STA_14_DMA3STA_bit at DMA3STA.B14;
    sbit  STA_13_DMA3STA_bit at DMA3STA.B13;
    sbit  STA_12_DMA3STA_bit at DMA3STA.B12;
    sbit  STA_11_DMA3STA_bit at DMA3STA.B11;
    sbit  STA_10_DMA3STA_bit at DMA3STA.B10;
    sbit  STA_9_DMA3STA_bit at DMA3STA.B9;
    sbit  STA_8_DMA3STA_bit at DMA3STA.B8;
    sbit  STA_7_DMA3STA_bit at DMA3STA.B7;
    sbit  STA_6_DMA3STA_bit at DMA3STA.B6;
    sbit  STA_5_DMA3STA_bit at DMA3STA.B5;
    sbit  STA_4_DMA3STA_bit at DMA3STA.B4;
    sbit  STA_3_DMA3STA_bit at DMA3STA.B3;
    sbit  STA_2_DMA3STA_bit at DMA3STA.B2;
    sbit  STA_1_DMA3STA_bit at DMA3STA.B1;
    sbit  STA_0_DMA3STA_bit at DMA3STA.B0;

    // DMA3STB bits
    sbit  STB_15_DMA3STB_bit at DMA3STB.B15;
    sbit  STB_14_DMA3STB_bit at DMA3STB.B14;
    sbit  STB_13_DMA3STB_bit at DMA3STB.B13;
    sbit  STB_12_DMA3STB_bit at DMA3STB.B12;
    sbit  STB_11_DMA3STB_bit at DMA3STB.B11;
    sbit  STB_10_DMA3STB_bit at DMA3STB.B10;
    sbit  STB_9_DMA3STB_bit at DMA3STB.B9;
    sbit  STB_8_DMA3STB_bit at DMA3STB.B8;
    sbit  STB_7_DMA3STB_bit at DMA3STB.B7;
    sbit  STB_6_DMA3STB_bit at DMA3STB.B6;
    sbit  STB_5_DMA3STB_bit at DMA3STB.B5;
    sbit  STB_4_DMA3STB_bit at DMA3STB.B4;
    sbit  STB_3_DMA3STB_bit at DMA3STB.B3;
    sbit  STB_2_DMA3STB_bit at DMA3STB.B2;
    sbit  STB_1_DMA3STB_bit at DMA3STB.B1;
    sbit  STB_0_DMA3STB_bit at DMA3STB.B0;

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
    sbit  CNT_15_DMA3CNT_bit at DMA3CNT.B15;
    sbit  CNT_14_DMA3CNT_bit at DMA3CNT.B14;
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

    // DMA4CON bits
    sbit  CHEN_DMA4CON_bit at DMA4CON.B15;
    sbit  SIZE_DMA4CON_bit at DMA4CON.B14;
    sbit  DIR__DMA4CON_bit at DMA4CON.B13;
    sbit  HALF_DMA4CON_bit at DMA4CON.B12;
    sbit  NULLW_DMA4CON_bit at DMA4CON.B11;
    sbit  AMODE_1_DMA4CON_bit at DMA4CON.B5;
    sbit  AMODE_0_DMA4CON_bit at DMA4CON.B4;
    sbit  MODE_1_DMA4CON_bit at DMA4CON.B1;
    sbit  MODE_0_DMA4CON_bit at DMA4CON.B0;

    // DMA4REQ bits
    sbit  FORCE_DMA4REQ_bit at DMA4REQ.B15;
    sbit  IRQSEL_6_DMA4REQ_bit at DMA4REQ.B6;
    sbit  IRQSEL_5_DMA4REQ_bit at DMA4REQ.B5;
    sbit  IRQSEL_4_DMA4REQ_bit at DMA4REQ.B4;
    sbit  IRQSEL_3_DMA4REQ_bit at DMA4REQ.B3;
    sbit  IRQSEL_2_DMA4REQ_bit at DMA4REQ.B2;
    sbit  IRQSEL_1_DMA4REQ_bit at DMA4REQ.B1;
    sbit  IRQSEL_0_DMA4REQ_bit at DMA4REQ.B0;

    // DMA4STA bits
    sbit  STA_15_DMA4STA_bit at DMA4STA.B15;
    sbit  STA_14_DMA4STA_bit at DMA4STA.B14;
    sbit  STA_13_DMA4STA_bit at DMA4STA.B13;
    sbit  STA_12_DMA4STA_bit at DMA4STA.B12;
    sbit  STA_11_DMA4STA_bit at DMA4STA.B11;
    sbit  STA_10_DMA4STA_bit at DMA4STA.B10;
    sbit  STA_9_DMA4STA_bit at DMA4STA.B9;
    sbit  STA_8_DMA4STA_bit at DMA4STA.B8;
    sbit  STA_7_DMA4STA_bit at DMA4STA.B7;
    sbit  STA_6_DMA4STA_bit at DMA4STA.B6;
    sbit  STA_5_DMA4STA_bit at DMA4STA.B5;
    sbit  STA_4_DMA4STA_bit at DMA4STA.B4;
    sbit  STA_3_DMA4STA_bit at DMA4STA.B3;
    sbit  STA_2_DMA4STA_bit at DMA4STA.B2;
    sbit  STA_1_DMA4STA_bit at DMA4STA.B1;
    sbit  STA_0_DMA4STA_bit at DMA4STA.B0;

    // DMA4STB bits
    sbit  STB_15_DMA4STB_bit at DMA4STB.B15;
    sbit  STB_14_DMA4STB_bit at DMA4STB.B14;
    sbit  STB_13_DMA4STB_bit at DMA4STB.B13;
    sbit  STB_12_DMA4STB_bit at DMA4STB.B12;
    sbit  STB_11_DMA4STB_bit at DMA4STB.B11;
    sbit  STB_10_DMA4STB_bit at DMA4STB.B10;
    sbit  STB_9_DMA4STB_bit at DMA4STB.B9;
    sbit  STB_8_DMA4STB_bit at DMA4STB.B8;
    sbit  STB_7_DMA4STB_bit at DMA4STB.B7;
    sbit  STB_6_DMA4STB_bit at DMA4STB.B6;
    sbit  STB_5_DMA4STB_bit at DMA4STB.B5;
    sbit  STB_4_DMA4STB_bit at DMA4STB.B4;
    sbit  STB_3_DMA4STB_bit at DMA4STB.B3;
    sbit  STB_2_DMA4STB_bit at DMA4STB.B2;
    sbit  STB_1_DMA4STB_bit at DMA4STB.B1;
    sbit  STB_0_DMA4STB_bit at DMA4STB.B0;

    // DMA4PAD bits
    sbit  PAD_15_DMA4PAD_bit at DMA4PAD.B15;
    sbit  PAD_14_DMA4PAD_bit at DMA4PAD.B14;
    sbit  PAD_13_DMA4PAD_bit at DMA4PAD.B13;
    sbit  PAD_12_DMA4PAD_bit at DMA4PAD.B12;
    sbit  PAD_11_DMA4PAD_bit at DMA4PAD.B11;
    sbit  PAD_10_DMA4PAD_bit at DMA4PAD.B10;
    sbit  PAD_9_DMA4PAD_bit at DMA4PAD.B9;
    sbit  PAD_8_DMA4PAD_bit at DMA4PAD.B8;
    sbit  PAD_7_DMA4PAD_bit at DMA4PAD.B7;
    sbit  PAD_6_DMA4PAD_bit at DMA4PAD.B6;
    sbit  PAD_5_DMA4PAD_bit at DMA4PAD.B5;
    sbit  PAD_4_DMA4PAD_bit at DMA4PAD.B4;
    sbit  PAD_3_DMA4PAD_bit at DMA4PAD.B3;
    sbit  PAD_2_DMA4PAD_bit at DMA4PAD.B2;
    sbit  PAD_1_DMA4PAD_bit at DMA4PAD.B1;
    sbit  PAD_0_DMA4PAD_bit at DMA4PAD.B0;

    // DMA4CNT bits
    sbit  CNT_15_DMA4CNT_bit at DMA4CNT.B15;
    sbit  CNT_14_DMA4CNT_bit at DMA4CNT.B14;
    sbit  CNT_13_DMA4CNT_bit at DMA4CNT.B13;
    sbit  CNT_12_DMA4CNT_bit at DMA4CNT.B12;
    sbit  CNT_11_DMA4CNT_bit at DMA4CNT.B11;
    sbit  CNT_10_DMA4CNT_bit at DMA4CNT.B10;
    sbit  CNT_9_DMA4CNT_bit at DMA4CNT.B9;
    sbit  CNT_8_DMA4CNT_bit at DMA4CNT.B8;
    sbit  CNT_7_DMA4CNT_bit at DMA4CNT.B7;
    sbit  CNT_6_DMA4CNT_bit at DMA4CNT.B6;
    sbit  CNT_5_DMA4CNT_bit at DMA4CNT.B5;
    sbit  CNT_4_DMA4CNT_bit at DMA4CNT.B4;
    sbit  CNT_3_DMA4CNT_bit at DMA4CNT.B3;
    sbit  CNT_2_DMA4CNT_bit at DMA4CNT.B2;
    sbit  CNT_1_DMA4CNT_bit at DMA4CNT.B1;
    sbit  CNT_0_DMA4CNT_bit at DMA4CNT.B0;

    // DMA5CON bits
    sbit  CHEN_DMA5CON_bit at DMA5CON.B15;
    sbit  SIZE_DMA5CON_bit at DMA5CON.B14;
    sbit  DIR__DMA5CON_bit at DMA5CON.B13;
    sbit  HALF_DMA5CON_bit at DMA5CON.B12;
    sbit  NULLW_DMA5CON_bit at DMA5CON.B11;
    sbit  AMODE_1_DMA5CON_bit at DMA5CON.B5;
    sbit  AMODE_0_DMA5CON_bit at DMA5CON.B4;
    sbit  MODE_1_DMA5CON_bit at DMA5CON.B1;
    sbit  MODE_0_DMA5CON_bit at DMA5CON.B0;

    // DMA5REQ bits
    sbit  FORCE_DMA5REQ_bit at DMA5REQ.B15;
    sbit  IRQSEL_6_DMA5REQ_bit at DMA5REQ.B6;
    sbit  IRQSEL_5_DMA5REQ_bit at DMA5REQ.B5;
    sbit  IRQSEL_4_DMA5REQ_bit at DMA5REQ.B4;
    sbit  IRQSEL_3_DMA5REQ_bit at DMA5REQ.B3;
    sbit  IRQSEL_2_DMA5REQ_bit at DMA5REQ.B2;
    sbit  IRQSEL_1_DMA5REQ_bit at DMA5REQ.B1;
    sbit  IRQSEL_0_DMA5REQ_bit at DMA5REQ.B0;

    // DMA5STA bits
    sbit  STA_15_DMA5STA_bit at DMA5STA.B15;
    sbit  STA_14_DMA5STA_bit at DMA5STA.B14;
    sbit  STA_13_DMA5STA_bit at DMA5STA.B13;
    sbit  STA_12_DMA5STA_bit at DMA5STA.B12;
    sbit  STA_11_DMA5STA_bit at DMA5STA.B11;
    sbit  STA_10_DMA5STA_bit at DMA5STA.B10;
    sbit  STA_9_DMA5STA_bit at DMA5STA.B9;
    sbit  STA_8_DMA5STA_bit at DMA5STA.B8;
    sbit  STA_7_DMA5STA_bit at DMA5STA.B7;
    sbit  STA_6_DMA5STA_bit at DMA5STA.B6;
    sbit  STA_5_DMA5STA_bit at DMA5STA.B5;
    sbit  STA_4_DMA5STA_bit at DMA5STA.B4;
    sbit  STA_3_DMA5STA_bit at DMA5STA.B3;
    sbit  STA_2_DMA5STA_bit at DMA5STA.B2;
    sbit  STA_1_DMA5STA_bit at DMA5STA.B1;
    sbit  STA_0_DMA5STA_bit at DMA5STA.B0;

    // DMA5STB bits
    sbit  STB_15_DMA5STB_bit at DMA5STB.B15;
    sbit  STB_14_DMA5STB_bit at DMA5STB.B14;
    sbit  STB_13_DMA5STB_bit at DMA5STB.B13;
    sbit  STB_12_DMA5STB_bit at DMA5STB.B12;
    sbit  STB_11_DMA5STB_bit at DMA5STB.B11;
    sbit  STB_10_DMA5STB_bit at DMA5STB.B10;
    sbit  STB_9_DMA5STB_bit at DMA5STB.B9;
    sbit  STB_8_DMA5STB_bit at DMA5STB.B8;
    sbit  STB_7_DMA5STB_bit at DMA5STB.B7;
    sbit  STB_6_DMA5STB_bit at DMA5STB.B6;
    sbit  STB_5_DMA5STB_bit at DMA5STB.B5;
    sbit  STB_4_DMA5STB_bit at DMA5STB.B4;
    sbit  STB_3_DMA5STB_bit at DMA5STB.B3;
    sbit  STB_2_DMA5STB_bit at DMA5STB.B2;
    sbit  STB_1_DMA5STB_bit at DMA5STB.B1;
    sbit  STB_0_DMA5STB_bit at DMA5STB.B0;

    // DMA5PAD bits
    sbit  PAD_15_DMA5PAD_bit at DMA5PAD.B15;
    sbit  PAD_14_DMA5PAD_bit at DMA5PAD.B14;
    sbit  PAD_13_DMA5PAD_bit at DMA5PAD.B13;
    sbit  PAD_12_DMA5PAD_bit at DMA5PAD.B12;
    sbit  PAD_11_DMA5PAD_bit at DMA5PAD.B11;
    sbit  PAD_10_DMA5PAD_bit at DMA5PAD.B10;
    sbit  PAD_9_DMA5PAD_bit at DMA5PAD.B9;
    sbit  PAD_8_DMA5PAD_bit at DMA5PAD.B8;
    sbit  PAD_7_DMA5PAD_bit at DMA5PAD.B7;
    sbit  PAD_6_DMA5PAD_bit at DMA5PAD.B6;
    sbit  PAD_5_DMA5PAD_bit at DMA5PAD.B5;
    sbit  PAD_4_DMA5PAD_bit at DMA5PAD.B4;
    sbit  PAD_3_DMA5PAD_bit at DMA5PAD.B3;
    sbit  PAD_2_DMA5PAD_bit at DMA5PAD.B2;
    sbit  PAD_1_DMA5PAD_bit at DMA5PAD.B1;
    sbit  PAD_0_DMA5PAD_bit at DMA5PAD.B0;

    // DMA5CNT bits
    sbit  CNT_15_DMA5CNT_bit at DMA5CNT.B15;
    sbit  CNT_14_DMA5CNT_bit at DMA5CNT.B14;
    sbit  CNT_13_DMA5CNT_bit at DMA5CNT.B13;
    sbit  CNT_12_DMA5CNT_bit at DMA5CNT.B12;
    sbit  CNT_11_DMA5CNT_bit at DMA5CNT.B11;
    sbit  CNT_10_DMA5CNT_bit at DMA5CNT.B10;
    sbit  CNT_9_DMA5CNT_bit at DMA5CNT.B9;
    sbit  CNT_8_DMA5CNT_bit at DMA5CNT.B8;
    sbit  CNT_7_DMA5CNT_bit at DMA5CNT.B7;
    sbit  CNT_6_DMA5CNT_bit at DMA5CNT.B6;
    sbit  CNT_5_DMA5CNT_bit at DMA5CNT.B5;
    sbit  CNT_4_DMA5CNT_bit at DMA5CNT.B4;
    sbit  CNT_3_DMA5CNT_bit at DMA5CNT.B3;
    sbit  CNT_2_DMA5CNT_bit at DMA5CNT.B2;
    sbit  CNT_1_DMA5CNT_bit at DMA5CNT.B1;
    sbit  CNT_0_DMA5CNT_bit at DMA5CNT.B0;

    // DMA6CON bits
    sbit  CHEN_DMA6CON_bit at DMA6CON.B15;
    sbit  SIZE_DMA6CON_bit at DMA6CON.B14;
    sbit  DIR__DMA6CON_bit at DMA6CON.B13;
    sbit  HALF_DMA6CON_bit at DMA6CON.B12;
    sbit  NULLW_DMA6CON_bit at DMA6CON.B11;
    sbit  AMODE_1_DMA6CON_bit at DMA6CON.B5;
    sbit  AMODE_0_DMA6CON_bit at DMA6CON.B4;
    sbit  MODE_1_DMA6CON_bit at DMA6CON.B1;
    sbit  MODE_0_DMA6CON_bit at DMA6CON.B0;

    // DMA6REQ bits
    sbit  FORCE_DMA6REQ_bit at DMA6REQ.B15;
    sbit  IRQSEL_6_DMA6REQ_bit at DMA6REQ.B6;
    sbit  IRQSEL_5_DMA6REQ_bit at DMA6REQ.B5;
    sbit  IRQSEL_4_DMA6REQ_bit at DMA6REQ.B4;
    sbit  IRQSEL_3_DMA6REQ_bit at DMA6REQ.B3;
    sbit  IRQSEL_2_DMA6REQ_bit at DMA6REQ.B2;
    sbit  IRQSEL_1_DMA6REQ_bit at DMA6REQ.B1;
    sbit  IRQSEL_0_DMA6REQ_bit at DMA6REQ.B0;

    // DMA6STA bits
    sbit  STA_15_DMA6STA_bit at DMA6STA.B15;
    sbit  STA_14_DMA6STA_bit at DMA6STA.B14;
    sbit  STA_13_DMA6STA_bit at DMA6STA.B13;
    sbit  STA_12_DMA6STA_bit at DMA6STA.B12;
    sbit  STA_11_DMA6STA_bit at DMA6STA.B11;
    sbit  STA_10_DMA6STA_bit at DMA6STA.B10;
    sbit  STA_9_DMA6STA_bit at DMA6STA.B9;
    sbit  STA_8_DMA6STA_bit at DMA6STA.B8;
    sbit  STA_7_DMA6STA_bit at DMA6STA.B7;
    sbit  STA_6_DMA6STA_bit at DMA6STA.B6;
    sbit  STA_5_DMA6STA_bit at DMA6STA.B5;
    sbit  STA_4_DMA6STA_bit at DMA6STA.B4;
    sbit  STA_3_DMA6STA_bit at DMA6STA.B3;
    sbit  STA_2_DMA6STA_bit at DMA6STA.B2;
    sbit  STA_1_DMA6STA_bit at DMA6STA.B1;
    sbit  STA_0_DMA6STA_bit at DMA6STA.B0;

    // DMA6STB bits
    sbit  STB_15_DMA6STB_bit at DMA6STB.B15;
    sbit  STB_14_DMA6STB_bit at DMA6STB.B14;
    sbit  STB_13_DMA6STB_bit at DMA6STB.B13;
    sbit  STB_12_DMA6STB_bit at DMA6STB.B12;
    sbit  STB_11_DMA6STB_bit at DMA6STB.B11;
    sbit  STB_10_DMA6STB_bit at DMA6STB.B10;
    sbit  STB_9_DMA6STB_bit at DMA6STB.B9;
    sbit  STB_8_DMA6STB_bit at DMA6STB.B8;
    sbit  STB_7_DMA6STB_bit at DMA6STB.B7;
    sbit  STB_6_DMA6STB_bit at DMA6STB.B6;
    sbit  STB_5_DMA6STB_bit at DMA6STB.B5;
    sbit  STB_4_DMA6STB_bit at DMA6STB.B4;
    sbit  STB_3_DMA6STB_bit at DMA6STB.B3;
    sbit  STB_2_DMA6STB_bit at DMA6STB.B2;
    sbit  STB_1_DMA6STB_bit at DMA6STB.B1;
    sbit  STB_0_DMA6STB_bit at DMA6STB.B0;

    // DMA6PAD bits
    sbit  PAD_15_DMA6PAD_bit at DMA6PAD.B15;
    sbit  PAD_14_DMA6PAD_bit at DMA6PAD.B14;
    sbit  PAD_13_DMA6PAD_bit at DMA6PAD.B13;
    sbit  PAD_12_DMA6PAD_bit at DMA6PAD.B12;
    sbit  PAD_11_DMA6PAD_bit at DMA6PAD.B11;
    sbit  PAD_10_DMA6PAD_bit at DMA6PAD.B10;
    sbit  PAD_9_DMA6PAD_bit at DMA6PAD.B9;
    sbit  PAD_8_DMA6PAD_bit at DMA6PAD.B8;
    sbit  PAD_7_DMA6PAD_bit at DMA6PAD.B7;
    sbit  PAD_6_DMA6PAD_bit at DMA6PAD.B6;
    sbit  PAD_5_DMA6PAD_bit at DMA6PAD.B5;
    sbit  PAD_4_DMA6PAD_bit at DMA6PAD.B4;
    sbit  PAD_3_DMA6PAD_bit at DMA6PAD.B3;
    sbit  PAD_2_DMA6PAD_bit at DMA6PAD.B2;
    sbit  PAD_1_DMA6PAD_bit at DMA6PAD.B1;
    sbit  PAD_0_DMA6PAD_bit at DMA6PAD.B0;

    // DMA6CNT bits
    sbit  CNT_15_DMA6CNT_bit at DMA6CNT.B15;
    sbit  CNT_14_DMA6CNT_bit at DMA6CNT.B14;
    sbit  CNT_13_DMA6CNT_bit at DMA6CNT.B13;
    sbit  CNT_12_DMA6CNT_bit at DMA6CNT.B12;
    sbit  CNT_11_DMA6CNT_bit at DMA6CNT.B11;
    sbit  CNT_10_DMA6CNT_bit at DMA6CNT.B10;
    sbit  CNT_9_DMA6CNT_bit at DMA6CNT.B9;
    sbit  CNT_8_DMA6CNT_bit at DMA6CNT.B8;
    sbit  CNT_7_DMA6CNT_bit at DMA6CNT.B7;
    sbit  CNT_6_DMA6CNT_bit at DMA6CNT.B6;
    sbit  CNT_5_DMA6CNT_bit at DMA6CNT.B5;
    sbit  CNT_4_DMA6CNT_bit at DMA6CNT.B4;
    sbit  CNT_3_DMA6CNT_bit at DMA6CNT.B3;
    sbit  CNT_2_DMA6CNT_bit at DMA6CNT.B2;
    sbit  CNT_1_DMA6CNT_bit at DMA6CNT.B1;
    sbit  CNT_0_DMA6CNT_bit at DMA6CNT.B0;

    // DMA7CON bits
    sbit  CHEN_DMA7CON_bit at DMA7CON.B15;
    sbit  SIZE_DMA7CON_bit at DMA7CON.B14;
    sbit  DIR__DMA7CON_bit at DMA7CON.B13;
    sbit  HALF_DMA7CON_bit at DMA7CON.B12;
    sbit  NULLW_DMA7CON_bit at DMA7CON.B11;
    sbit  AMODE_1_DMA7CON_bit at DMA7CON.B5;
    sbit  AMODE_0_DMA7CON_bit at DMA7CON.B4;
    sbit  MODE_1_DMA7CON_bit at DMA7CON.B1;
    sbit  MODE_0_DMA7CON_bit at DMA7CON.B0;

    // DMA7REQ bits
    sbit  FORCE_DMA7REQ_bit at DMA7REQ.B15;
    sbit  IRQSEL_6_DMA7REQ_bit at DMA7REQ.B6;
    sbit  IRQSEL_5_DMA7REQ_bit at DMA7REQ.B5;
    sbit  IRQSEL_4_DMA7REQ_bit at DMA7REQ.B4;
    sbit  IRQSEL_3_DMA7REQ_bit at DMA7REQ.B3;
    sbit  IRQSEL_2_DMA7REQ_bit at DMA7REQ.B2;
    sbit  IRQSEL_1_DMA7REQ_bit at DMA7REQ.B1;
    sbit  IRQSEL_0_DMA7REQ_bit at DMA7REQ.B0;

    // DMA7STA bits
    sbit  STA_15_DMA7STA_bit at DMA7STA.B15;
    sbit  STA_14_DMA7STA_bit at DMA7STA.B14;
    sbit  STA_13_DMA7STA_bit at DMA7STA.B13;
    sbit  STA_12_DMA7STA_bit at DMA7STA.B12;
    sbit  STA_11_DMA7STA_bit at DMA7STA.B11;
    sbit  STA_10_DMA7STA_bit at DMA7STA.B10;
    sbit  STA_9_DMA7STA_bit at DMA7STA.B9;
    sbit  STA_8_DMA7STA_bit at DMA7STA.B8;
    sbit  STA_7_DMA7STA_bit at DMA7STA.B7;
    sbit  STA_6_DMA7STA_bit at DMA7STA.B6;
    sbit  STA_5_DMA7STA_bit at DMA7STA.B5;
    sbit  STA_4_DMA7STA_bit at DMA7STA.B4;
    sbit  STA_3_DMA7STA_bit at DMA7STA.B3;
    sbit  STA_2_DMA7STA_bit at DMA7STA.B2;
    sbit  STA_1_DMA7STA_bit at DMA7STA.B1;
    sbit  STA_0_DMA7STA_bit at DMA7STA.B0;

    // DMA7STB bits
    sbit  STB_15_DMA7STB_bit at DMA7STB.B15;
    sbit  STB_14_DMA7STB_bit at DMA7STB.B14;
    sbit  STB_13_DMA7STB_bit at DMA7STB.B13;
    sbit  STB_12_DMA7STB_bit at DMA7STB.B12;
    sbit  STB_11_DMA7STB_bit at DMA7STB.B11;
    sbit  STB_10_DMA7STB_bit at DMA7STB.B10;
    sbit  STB_9_DMA7STB_bit at DMA7STB.B9;
    sbit  STB_8_DMA7STB_bit at DMA7STB.B8;
    sbit  STB_7_DMA7STB_bit at DMA7STB.B7;
    sbit  STB_6_DMA7STB_bit at DMA7STB.B6;
    sbit  STB_5_DMA7STB_bit at DMA7STB.B5;
    sbit  STB_4_DMA7STB_bit at DMA7STB.B4;
    sbit  STB_3_DMA7STB_bit at DMA7STB.B3;
    sbit  STB_2_DMA7STB_bit at DMA7STB.B2;
    sbit  STB_1_DMA7STB_bit at DMA7STB.B1;
    sbit  STB_0_DMA7STB_bit at DMA7STB.B0;

    // DMA7PAD bits
    sbit  PAD_15_DMA7PAD_bit at DMA7PAD.B15;
    sbit  PAD_14_DMA7PAD_bit at DMA7PAD.B14;
    sbit  PAD_13_DMA7PAD_bit at DMA7PAD.B13;
    sbit  PAD_12_DMA7PAD_bit at DMA7PAD.B12;
    sbit  PAD_11_DMA7PAD_bit at DMA7PAD.B11;
    sbit  PAD_10_DMA7PAD_bit at DMA7PAD.B10;
    sbit  PAD_9_DMA7PAD_bit at DMA7PAD.B9;
    sbit  PAD_8_DMA7PAD_bit at DMA7PAD.B8;
    sbit  PAD_7_DMA7PAD_bit at DMA7PAD.B7;
    sbit  PAD_6_DMA7PAD_bit at DMA7PAD.B6;
    sbit  PAD_5_DMA7PAD_bit at DMA7PAD.B5;
    sbit  PAD_4_DMA7PAD_bit at DMA7PAD.B4;
    sbit  PAD_3_DMA7PAD_bit at DMA7PAD.B3;
    sbit  PAD_2_DMA7PAD_bit at DMA7PAD.B2;
    sbit  PAD_1_DMA7PAD_bit at DMA7PAD.B1;
    sbit  PAD_0_DMA7PAD_bit at DMA7PAD.B0;

    // DMA7CNT bits
    sbit  CNT_15_DMA7CNT_bit at DMA7CNT.B15;
    sbit  CNT_14_DMA7CNT_bit at DMA7CNT.B14;
    sbit  CNT_13_DMA7CNT_bit at DMA7CNT.B13;
    sbit  CNT_12_DMA7CNT_bit at DMA7CNT.B12;
    sbit  CNT_11_DMA7CNT_bit at DMA7CNT.B11;
    sbit  CNT_10_DMA7CNT_bit at DMA7CNT.B10;
    sbit  CNT_9_DMA7CNT_bit at DMA7CNT.B9;
    sbit  CNT_8_DMA7CNT_bit at DMA7CNT.B8;
    sbit  CNT_7_DMA7CNT_bit at DMA7CNT.B7;
    sbit  CNT_6_DMA7CNT_bit at DMA7CNT.B6;
    sbit  CNT_5_DMA7CNT_bit at DMA7CNT.B5;
    sbit  CNT_4_DMA7CNT_bit at DMA7CNT.B4;
    sbit  CNT_3_DMA7CNT_bit at DMA7CNT.B3;
    sbit  CNT_2_DMA7CNT_bit at DMA7CNT.B2;
    sbit  CNT_1_DMA7CNT_bit at DMA7CNT.B1;
    sbit  CNT_0_DMA7CNT_bit at DMA7CNT.B0;

    // DMACS0 bits
    const register unsigned short int PWCOL_7 = 15;
    sbit  PWCOL_7_bit at DMACS0.B15;
    const register unsigned short int PWCOL_6 = 14;
    sbit  PWCOL_6_bit at DMACS0.B14;
    const register unsigned short int PWCOL_5 = 13;
    sbit  PWCOL_5_bit at DMACS0.B13;
    const register unsigned short int PWCOL_4 = 12;
    sbit  PWCOL_4_bit at DMACS0.B12;
    const register unsigned short int PWCOL_3 = 11;
    sbit  PWCOL_3_bit at DMACS0.B11;
    const register unsigned short int PWCOL_2 = 10;
    sbit  PWCOL_2_bit at DMACS0.B10;
    const register unsigned short int PWCOL_1 = 9;
    sbit  PWCOL_1_bit at DMACS0.B9;
    const register unsigned short int PWCOL_0 = 8;
    sbit  PWCOL_0_bit at DMACS0.B8;
    const register unsigned short int XWCOL_7 = 7;
    sbit  XWCOL_7_bit at DMACS0.B7;
    const register unsigned short int XWCOL_6 = 6;
    sbit  XWCOL_6_bit at DMACS0.B6;
    const register unsigned short int XWCOL_5 = 5;
    sbit  XWCOL_5_bit at DMACS0.B5;
    const register unsigned short int XWCOL_4 = 4;
    sbit  XWCOL_4_bit at DMACS0.B4;
    const register unsigned short int XWCOL_3 = 3;
    sbit  XWCOL_3_bit at DMACS0.B3;
    const register unsigned short int XWCOL_2 = 2;
    sbit  XWCOL_2_bit at DMACS0.B2;
    const register unsigned short int XWCOL_1 = 1;
    sbit  XWCOL_1_bit at DMACS0.B1;
    const register unsigned short int XWCOL_0 = 0;
    sbit  XWCOL_0_bit at DMACS0.B0;

    // DMACS1 bits
    const register unsigned short int LSTCH_3 = 11;
    sbit  LSTCH_3_bit at DMACS1.B11;
    const register unsigned short int LSTCH_2 = 10;
    sbit  LSTCH_2_bit at DMACS1.B10;
    const register unsigned short int LSTCH_1 = 9;
    sbit  LSTCH_1_bit at DMACS1.B9;
    const register unsigned short int LSTCH_0 = 8;
    sbit  LSTCH_0_bit at DMACS1.B8;
    const register unsigned short int PPST7 = 7;
    sbit  PPST7_bit at DMACS1.B7;
    const register unsigned short int PPST6 = 6;
    sbit  PPST6_bit at DMACS1.B6;
    const register unsigned short int PPST5 = 5;
    sbit  PPST5_bit at DMACS1.B5;
    const register unsigned short int PPST4 = 4;
    sbit  PPST4_bit at DMACS1.B4;
    const register unsigned short int PPST3 = 3;
    sbit  PPST3_bit at DMACS1.B3;
    const register unsigned short int PPST2 = 2;
    sbit  PPST2_bit at DMACS1.B2;
    const register unsigned short int PPST1 = 1;
    sbit  PPST1_bit at DMACS1.B1;
    const register unsigned short int PPST0 = 0;
    sbit  PPST0_bit at DMACS1.B0;

    // DSADR bits
    const register unsigned short int DSADR_15 = 15;
    sbit  DSADR_15_bit at DSADR.B15;
    const register unsigned short int DSADR_14 = 14;
    sbit  DSADR_14_bit at DSADR.B14;
    const register unsigned short int DSADR_13 = 13;
    sbit  DSADR_13_bit at DSADR.B13;
    const register unsigned short int DSADR_12 = 12;
    sbit  DSADR_12_bit at DSADR.B12;
    const register unsigned short int DSADR_11 = 11;
    sbit  DSADR_11_bit at DSADR.B11;
    const register unsigned short int DSADR_10 = 10;
    sbit  DSADR_10_bit at DSADR.B10;
    const register unsigned short int DSADR_9 = 9;
    sbit  DSADR_9_bit at DSADR.B9;
    const register unsigned short int DSADR_8 = 8;
    sbit  DSADR_8_bit at DSADR.B8;
    const register unsigned short int DSADR_7 = 7;
    sbit  DSADR_7_bit at DSADR.B7;
    const register unsigned short int DSADR_6 = 6;
    sbit  DSADR_6_bit at DSADR.B6;
    const register unsigned short int DSADR_5 = 5;
    sbit  DSADR_5_bit at DSADR.B5;
    const register unsigned short int DSADR_4 = 4;
    sbit  DSADR_4_bit at DSADR.B4;
    const register unsigned short int DSADR_3 = 3;
    sbit  DSADR_3_bit at DSADR.B3;
    const register unsigned short int DSADR_2 = 2;
    sbit  DSADR_2_bit at DSADR.B2;
    const register unsigned short int DSADR_1 = 1;
    sbit  DSADR_1_bit at DSADR.B1;
    const register unsigned short int DSADR_0 = 0;
    sbit  DSADR_0_bit at DSADR.B0;

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
    const register unsigned short int FLTEN_15 = 15;
    sbit  FLTEN_15_bit at C1FEN1.B15;
    const register unsigned short int FLTEN_14 = 14;
    sbit  FLTEN_14_bit at C1FEN1.B14;
    const register unsigned short int FLTEN_13 = 13;
    sbit  FLTEN_13_bit at C1FEN1.B13;
    const register unsigned short int FLTEN_12 = 12;
    sbit  FLTEN_12_bit at C1FEN1.B12;
    const register unsigned short int FLTEN_11 = 11;
    sbit  FLTEN_11_bit at C1FEN1.B11;
    const register unsigned short int FLTEN_10 = 10;
    sbit  FLTEN_10_bit at C1FEN1.B10;
    const register unsigned short int FLTEN_9 = 9;
    sbit  FLTEN_9_bit at C1FEN1.B9;
    const register unsigned short int FLTEN_8 = 8;
    sbit  FLTEN_8_bit at C1FEN1.B8;
    const register unsigned short int FLTEN_7 = 7;
    sbit  FLTEN_7_bit at C1FEN1.B7;
    const register unsigned short int FLTEN_6 = 6;
    sbit  FLTEN_6_bit at C1FEN1.B6;
    const register unsigned short int FLTEN_5 = 5;
    sbit  FLTEN_5_bit at C1FEN1.B5;
    const register unsigned short int FLTEN_4 = 4;
    sbit  FLTEN_4_bit at C1FEN1.B4;
    const register unsigned short int FLTEN_3 = 3;
    sbit  FLTEN_3_bit at C1FEN1.B3;
    const register unsigned short int FLTEN_2 = 2;
    sbit  FLTEN_2_bit at C1FEN1.B2;
    const register unsigned short int FLTEN_1 = 1;
    sbit  FLTEN_1_bit at C1FEN1.B1;
    const register unsigned short int FLTEN_0 = 0;
    sbit  FLTEN_0_bit at C1FEN1.B0;

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
    const register unsigned short int SID9 = 14;
    sbit  SID9_bit at C1RXM2SID.B14;
    const register unsigned short int SID8 = 13;
    sbit  SID8_bit at C1RXM2SID.B13;
    const register unsigned short int SID7 = 12;
    sbit  SID7_bit at C1RXM2SID.B12;
    const register unsigned short int SID6 = 11;
    sbit  SID6_bit at C1RXM2SID.B11;
    const register unsigned short int SID5 = 10;
    sbit  SID5_bit at C1RXM2SID.B10;
    const register unsigned short int SID4 = 9;
    sbit  SID4_bit at C1RXM2SID.B9;
    const register unsigned short int SID3 = 8;
    sbit  SID3_bit at C1RXM2SID.B8;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at C1RXM2SID.B7;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at C1RXM2SID.B6;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at C1RXM2SID.B5;
    const register unsigned short int MIDE = 3;
    sbit  MIDE_bit at C1RXM2SID.B3;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at C1RXM2SID.B1;
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at C1RXM2SID.B0;

    // C1RXM2EID bits
    const register unsigned short int EID15 = 15;
    sbit  EID15_bit at C1RXM2EID.B15;
    const register unsigned short int EID14 = 14;
    sbit  EID14_bit at C1RXM2EID.B14;
    const register unsigned short int EID13 = 13;
    sbit  EID13_bit at C1RXM2EID.B13;
    const register unsigned short int EID12 = 12;
    sbit  EID12_bit at C1RXM2EID.B12;
    const register unsigned short int EID11 = 11;
    sbit  EID11_bit at C1RXM2EID.B11;
    const register unsigned short int EID10 = 10;
    sbit  EID10_bit at C1RXM2EID.B10;
    const register unsigned short int EID9 = 9;
    sbit  EID9_bit at C1RXM2EID.B9;
    const register unsigned short int EID8 = 8;
    sbit  EID8_bit at C1RXM2EID.B8;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at C1RXM2EID.B7;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at C1RXM2EID.B6;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at C1RXM2EID.B5;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at C1RXM2EID.B4;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at C1RXM2EID.B3;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at C1RXM2EID.B2;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at C1RXM2EID.B1;
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at C1RXM2EID.B0;

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
    const register unsigned short int C1TXD_14 = 15;
    sbit  C1TXD_14_bit at C1TXD.B15;
    const register unsigned short int C1TXD_13 = 14;
    sbit  C1TXD_13_bit at C1TXD.B14;
    const register unsigned short int C1TXD_12 = 13;
    sbit  C1TXD_12_bit at C1TXD.B13;
    const register unsigned short int C1TXD_11 = 12;
    sbit  C1TXD_11_bit at C1TXD.B12;
    const register unsigned short int C1TXD_10 = 11;
    sbit  C1TXD_10_bit at C1TXD.B11;
    const register unsigned short int C1TXD_9 = 10;
    sbit  C1TXD_9_bit at C1TXD.B10;
    const register unsigned short int C1TXD_8 = 9;
    sbit  C1TXD_8_bit at C1TXD.B9;
    const register unsigned short int C1TXD_7 = 8;
    sbit  C1TXD_7_bit at C1TXD.B8;
    const register unsigned short int C1TXD_6 = 7;
    sbit  C1TXD_6_bit at C1TXD.B7;
    const register unsigned short int C1TXD_5 = 6;
    sbit  C1TXD_5_bit at C1TXD.B6;
    const register unsigned short int C1TXD_4 = 5;
    sbit  C1TXD_4_bit at C1TXD.B5;
    const register unsigned short int C1TXD_3 = 4;
    sbit  C1TXD_3_bit at C1TXD.B4;
    const register unsigned short int C1TXD_2 = 3;
    sbit  C1TXD_2_bit at C1TXD.B3;
    const register unsigned short int C1TXD_1 = 2;
    sbit  C1TXD_1_bit at C1TXD.B2;
    const register unsigned short int C1TXD_0 = 1;
    sbit  C1TXD_0_bit at C1TXD.B1;

    // C1RXF1SID bits
    const register unsigned short int SID_10 = 15;
    sbit  SID_10_bit at C1RXF1SID.B15;
    sbit  SID_10_C1RXF1SID_bit at C1RXF1SID.B15;
    const register unsigned short int SID_9 = 14;
    sbit  SID_9_bit at C1RXF1SID.B14;
    sbit  SID_9_C1RXF1SID_bit at C1RXF1SID.B14;
    const register unsigned short int SID_8 = 13;
    sbit  SID_8_bit at C1RXF1SID.B13;
    sbit  SID_8_C1RXF1SID_bit at C1RXF1SID.B13;
    const register unsigned short int SID_7 = 12;
    sbit  SID_7_bit at C1RXF1SID.B12;
    sbit  SID_7_C1RXF1SID_bit at C1RXF1SID.B12;
    const register unsigned short int SID_6 = 11;
    sbit  SID_6_bit at C1RXF1SID.B11;
    sbit  SID_6_C1RXF1SID_bit at C1RXF1SID.B11;
    const register unsigned short int SID_5 = 10;
    sbit  SID_5_bit at C1RXF1SID.B10;
    sbit  SID_5_C1RXF1SID_bit at C1RXF1SID.B10;
    const register unsigned short int SID_4 = 9;
    sbit  SID_4_bit at C1RXF1SID.B9;
    sbit  SID_4_C1RXF1SID_bit at C1RXF1SID.B9;
    const register unsigned short int SID_3 = 8;
    sbit  SID_3_bit at C1RXF1SID.B8;
    sbit  SID_3_C1RXF1SID_bit at C1RXF1SID.B8;
    const register unsigned short int SID_2 = 7;
    sbit  SID_2_bit at C1RXF1SID.B7;
    sbit  SID_2_C1RXF1SID_bit at C1RXF1SID.B7;
    const register unsigned short int SID_1 = 6;
    sbit  SID_1_bit at C1RXF1SID.B6;
    sbit  SID_1_C1RXF1SID_bit at C1RXF1SID.B6;
    const register unsigned short int SID_0 = 5;
    sbit  SID_0_bit at C1RXF1SID.B5;
    sbit  SID_0_C1RXF1SID_bit at C1RXF1SID.B5;
    const register unsigned short int EXIDE = 3;
    sbit  EXIDE_bit at C1RXF1SID.B3;
    sbit  EXIDE_C1RXF1SID_bit at C1RXF1SID.B3;
    const register unsigned short int EID_1 = 1;
    sbit  EID_1_bit at C1RXF1SID.B1;
    sbit  EID_1_C1RXF1SID_bit at C1RXF1SID.B1;
    const register unsigned short int EID_0 = 0;
    sbit  EID_0_bit at C1RXF1SID.B0;
    sbit  EID_0_C1RXF1SID_bit at C1RXF1SID.B0;

    // C1RXF1EID bits
    const register unsigned short int EID_15 = 15;
    sbit  EID_15_bit at C1RXF1EID.B15;
    sbit  EID_15_C1RXF1EID_bit at C1RXF1EID.B15;
    const register unsigned short int EID_14 = 14;
    sbit  EID_14_bit at C1RXF1EID.B14;
    sbit  EID_14_C1RXF1EID_bit at C1RXF1EID.B14;
    const register unsigned short int EID_13 = 13;
    sbit  EID_13_bit at C1RXF1EID.B13;
    sbit  EID_13_C1RXF1EID_bit at C1RXF1EID.B13;
    const register unsigned short int EID_12 = 12;
    sbit  EID_12_bit at C1RXF1EID.B12;
    sbit  EID_12_C1RXF1EID_bit at C1RXF1EID.B12;
    const register unsigned short int EID_11 = 11;
    sbit  EID_11_bit at C1RXF1EID.B11;
    sbit  EID_11_C1RXF1EID_bit at C1RXF1EID.B11;
    const register unsigned short int EID_10 = 10;
    sbit  EID_10_bit at C1RXF1EID.B10;
    sbit  EID_10_C1RXF1EID_bit at C1RXF1EID.B10;
    const register unsigned short int EID_9 = 9;
    sbit  EID_9_bit at C1RXF1EID.B9;
    sbit  EID_9_C1RXF1EID_bit at C1RXF1EID.B9;
    const register unsigned short int EID_8 = 8;
    sbit  EID_8_bit at C1RXF1EID.B8;
    sbit  EID_8_C1RXF1EID_bit at C1RXF1EID.B8;
    const register unsigned short int EID_7 = 7;
    sbit  EID_7_bit at C1RXF1EID.B7;
    sbit  EID_7_C1RXF1EID_bit at C1RXF1EID.B7;
    const register unsigned short int EID_6 = 6;
    sbit  EID_6_bit at C1RXF1EID.B6;
    sbit  EID_6_C1RXF1EID_bit at C1RXF1EID.B6;
    const register unsigned short int EID_5 = 5;
    sbit  EID_5_bit at C1RXF1EID.B5;
    sbit  EID_5_C1RXF1EID_bit at C1RXF1EID.B5;
    const register unsigned short int EID_4 = 4;
    sbit  EID_4_bit at C1RXF1EID.B4;
    sbit  EID_4_C1RXF1EID_bit at C1RXF1EID.B4;
    const register unsigned short int EID_3 = 3;
    sbit  EID_3_bit at C1RXF1EID.B3;
    sbit  EID_3_C1RXF1EID_bit at C1RXF1EID.B3;
    const register unsigned short int EID_2 = 2;
    sbit  EID_2_bit at C1RXF1EID.B2;
    sbit  EID_2_C1RXF1EID_bit at C1RXF1EID.B2;
    sbit  EID_1_C1RXF1EID_bit at C1RXF1EID.B1;
    sbit  EID_0_C1RXF1EID_bit at C1RXF1EID.B0;

    // C1RXF2SID bits
    sbit  SID_10_C1RXF2SID_bit at C1RXF2SID.B15;
    sbit  SID_9_C1RXF2SID_bit at C1RXF2SID.B14;
    sbit  SID_8_C1RXF2SID_bit at C1RXF2SID.B13;
    sbit  SID_7_C1RXF2SID_bit at C1RXF2SID.B12;
    sbit  SID_6_C1RXF2SID_bit at C1RXF2SID.B11;
    sbit  SID_5_C1RXF2SID_bit at C1RXF2SID.B10;
    sbit  SID_4_C1RXF2SID_bit at C1RXF2SID.B9;
    sbit  SID_3_C1RXF2SID_bit at C1RXF2SID.B8;
    sbit  SID_2_C1RXF2SID_bit at C1RXF2SID.B7;
    sbit  SID_1_C1RXF2SID_bit at C1RXF2SID.B6;
    sbit  SID_0_C1RXF2SID_bit at C1RXF2SID.B5;
    sbit  EXIDE_C1RXF2SID_bit at C1RXF2SID.B3;
    sbit  EID_1_C1RXF2SID_bit at C1RXF2SID.B1;
    sbit  EID_0_C1RXF2SID_bit at C1RXF2SID.B0;

    // C1RXF2EID bits
    sbit  EID_15_C1RXF2EID_bit at C1RXF2EID.B15;
    sbit  EID_14_C1RXF2EID_bit at C1RXF2EID.B14;
    sbit  EID_13_C1RXF2EID_bit at C1RXF2EID.B13;
    sbit  EID_12_C1RXF2EID_bit at C1RXF2EID.B12;
    sbit  EID_11_C1RXF2EID_bit at C1RXF2EID.B11;
    sbit  EID_10_C1RXF2EID_bit at C1RXF2EID.B10;
    sbit  EID_9_C1RXF2EID_bit at C1RXF2EID.B9;
    sbit  EID_8_C1RXF2EID_bit at C1RXF2EID.B8;
    sbit  EID_7_C1RXF2EID_bit at C1RXF2EID.B7;
    sbit  EID_6_C1RXF2EID_bit at C1RXF2EID.B6;
    sbit  EID_5_C1RXF2EID_bit at C1RXF2EID.B5;
    sbit  EID_4_C1RXF2EID_bit at C1RXF2EID.B4;
    sbit  EID_3_C1RXF2EID_bit at C1RXF2EID.B3;
    sbit  EID_2_C1RXF2EID_bit at C1RXF2EID.B2;
    sbit  EID_1_C1RXF2EID_bit at C1RXF2EID.B1;
    sbit  EID_0_C1RXF2EID_bit at C1RXF2EID.B0;

    // C1RXF3SID bits
    sbit  SID_10_C1RXF3SID_bit at C1RXF3SID.B15;
    sbit  SID_9_C1RXF3SID_bit at C1RXF3SID.B14;
    sbit  SID_8_C1RXF3SID_bit at C1RXF3SID.B13;
    sbit  SID_7_C1RXF3SID_bit at C1RXF3SID.B12;
    sbit  SID_6_C1RXF3SID_bit at C1RXF3SID.B11;
    sbit  SID_5_C1RXF3SID_bit at C1RXF3SID.B10;
    sbit  SID_4_C1RXF3SID_bit at C1RXF3SID.B9;
    sbit  SID_3_C1RXF3SID_bit at C1RXF3SID.B8;
    sbit  SID_2_C1RXF3SID_bit at C1RXF3SID.B7;
    sbit  SID_1_C1RXF3SID_bit at C1RXF3SID.B6;
    sbit  SID_0_C1RXF3SID_bit at C1RXF3SID.B5;
    sbit  EXIDE_C1RXF3SID_bit at C1RXF3SID.B3;
    sbit  EID_1_C1RXF3SID_bit at C1RXF3SID.B1;
    sbit  EID_0_C1RXF3SID_bit at C1RXF3SID.B0;

    // C1RXF3EID bits
    sbit  EID_15_C1RXF3EID_bit at C1RXF3EID.B15;
    sbit  EID_14_C1RXF3EID_bit at C1RXF3EID.B14;
    sbit  EID_13_C1RXF3EID_bit at C1RXF3EID.B13;
    sbit  EID_12_C1RXF3EID_bit at C1RXF3EID.B12;
    sbit  EID_11_C1RXF3EID_bit at C1RXF3EID.B11;
    sbit  EID_10_C1RXF3EID_bit at C1RXF3EID.B10;
    sbit  EID_9_C1RXF3EID_bit at C1RXF3EID.B9;
    sbit  EID_8_C1RXF3EID_bit at C1RXF3EID.B8;
    sbit  EID_7_C1RXF3EID_bit at C1RXF3EID.B7;
    sbit  EID_6_C1RXF3EID_bit at C1RXF3EID.B6;
    sbit  EID_5_C1RXF3EID_bit at C1RXF3EID.B5;
    sbit  EID_4_C1RXF3EID_bit at C1RXF3EID.B4;
    sbit  EID_3_C1RXF3EID_bit at C1RXF3EID.B3;
    sbit  EID_2_C1RXF3EID_bit at C1RXF3EID.B2;
    sbit  EID_1_C1RXF3EID_bit at C1RXF3EID.B1;
    sbit  EID_0_C1RXF3EID_bit at C1RXF3EID.B0;

    // C1RXF4SID bits
    sbit  SID_10_C1RXF4SID_bit at C1RXF4SID.B15;
    sbit  SID_9_C1RXF4SID_bit at C1RXF4SID.B14;
    sbit  SID_8_C1RXF4SID_bit at C1RXF4SID.B13;
    sbit  SID_7_C1RXF4SID_bit at C1RXF4SID.B12;
    sbit  SID_6_C1RXF4SID_bit at C1RXF4SID.B11;
    sbit  SID_5_C1RXF4SID_bit at C1RXF4SID.B10;
    sbit  SID_4_C1RXF4SID_bit at C1RXF4SID.B9;
    sbit  SID_3_C1RXF4SID_bit at C1RXF4SID.B8;
    sbit  SID_2_C1RXF4SID_bit at C1RXF4SID.B7;
    sbit  SID_1_C1RXF4SID_bit at C1RXF4SID.B6;
    sbit  SID_0_C1RXF4SID_bit at C1RXF4SID.B5;
    sbit  EXIDE_C1RXF4SID_bit at C1RXF4SID.B3;
    sbit  EID_1_C1RXF4SID_bit at C1RXF4SID.B1;
    sbit  EID_0_C1RXF4SID_bit at C1RXF4SID.B0;

    // C1RXF4EID bits
    sbit  EID_15_C1RXF4EID_bit at C1RXF4EID.B15;
    sbit  EID_14_C1RXF4EID_bit at C1RXF4EID.B14;
    sbit  EID_13_C1RXF4EID_bit at C1RXF4EID.B13;
    sbit  EID_12_C1RXF4EID_bit at C1RXF4EID.B12;
    sbit  EID_11_C1RXF4EID_bit at C1RXF4EID.B11;
    sbit  EID_10_C1RXF4EID_bit at C1RXF4EID.B10;
    sbit  EID_9_C1RXF4EID_bit at C1RXF4EID.B9;
    sbit  EID_8_C1RXF4EID_bit at C1RXF4EID.B8;
    sbit  EID_7_C1RXF4EID_bit at C1RXF4EID.B7;
    sbit  EID_6_C1RXF4EID_bit at C1RXF4EID.B6;
    sbit  EID_5_C1RXF4EID_bit at C1RXF4EID.B5;
    sbit  EID_4_C1RXF4EID_bit at C1RXF4EID.B4;
    sbit  EID_3_C1RXF4EID_bit at C1RXF4EID.B3;
    sbit  EID_2_C1RXF4EID_bit at C1RXF4EID.B2;
    sbit  EID_1_C1RXF4EID_bit at C1RXF4EID.B1;
    sbit  EID_0_C1RXF4EID_bit at C1RXF4EID.B0;

    // C1RXF5SID bits
    sbit  SID_10_C1RXF5SID_bit at C1RXF5SID.B15;
    sbit  SID_9_C1RXF5SID_bit at C1RXF5SID.B14;
    sbit  SID_8_C1RXF5SID_bit at C1RXF5SID.B13;
    sbit  SID_7_C1RXF5SID_bit at C1RXF5SID.B12;
    sbit  SID_6_C1RXF5SID_bit at C1RXF5SID.B11;
    sbit  SID_5_C1RXF5SID_bit at C1RXF5SID.B10;
    sbit  SID_4_C1RXF5SID_bit at C1RXF5SID.B9;
    sbit  SID_3_C1RXF5SID_bit at C1RXF5SID.B8;
    sbit  SID_2_C1RXF5SID_bit at C1RXF5SID.B7;
    sbit  SID_1_C1RXF5SID_bit at C1RXF5SID.B6;
    sbit  SID_0_C1RXF5SID_bit at C1RXF5SID.B5;
    sbit  EXIDE_C1RXF5SID_bit at C1RXF5SID.B3;
    sbit  EID_1_C1RXF5SID_bit at C1RXF5SID.B1;
    sbit  EID_0_C1RXF5SID_bit at C1RXF5SID.B0;

    // C1RXF5EID bits
    sbit  EID_15_C1RXF5EID_bit at C1RXF5EID.B15;
    sbit  EID_14_C1RXF5EID_bit at C1RXF5EID.B14;
    sbit  EID_13_C1RXF5EID_bit at C1RXF5EID.B13;
    sbit  EID_12_C1RXF5EID_bit at C1RXF5EID.B12;
    sbit  EID_11_C1RXF5EID_bit at C1RXF5EID.B11;
    sbit  EID_10_C1RXF5EID_bit at C1RXF5EID.B10;
    sbit  EID_9_C1RXF5EID_bit at C1RXF5EID.B9;
    sbit  EID_8_C1RXF5EID_bit at C1RXF5EID.B8;
    sbit  EID_7_C1RXF5EID_bit at C1RXF5EID.B7;
    sbit  EID_6_C1RXF5EID_bit at C1RXF5EID.B6;
    sbit  EID_5_C1RXF5EID_bit at C1RXF5EID.B5;
    sbit  EID_4_C1RXF5EID_bit at C1RXF5EID.B4;
    sbit  EID_3_C1RXF5EID_bit at C1RXF5EID.B3;
    sbit  EID_2_C1RXF5EID_bit at C1RXF5EID.B2;
    sbit  EID_1_C1RXF5EID_bit at C1RXF5EID.B1;
    sbit  EID_0_C1RXF5EID_bit at C1RXF5EID.B0;

    // C1RXF6SID bits
    sbit  SID_10_C1RXF6SID_bit at C1RXF6SID.B15;
    sbit  SID_9_C1RXF6SID_bit at C1RXF6SID.B14;
    sbit  SID_8_C1RXF6SID_bit at C1RXF6SID.B13;
    sbit  SID_7_C1RXF6SID_bit at C1RXF6SID.B12;
    sbit  SID_6_C1RXF6SID_bit at C1RXF6SID.B11;
    sbit  SID_5_C1RXF6SID_bit at C1RXF6SID.B10;
    sbit  SID_4_C1RXF6SID_bit at C1RXF6SID.B9;
    sbit  SID_3_C1RXF6SID_bit at C1RXF6SID.B8;
    sbit  SID_2_C1RXF6SID_bit at C1RXF6SID.B7;
    sbit  SID_1_C1RXF6SID_bit at C1RXF6SID.B6;
    sbit  SID_0_C1RXF6SID_bit at C1RXF6SID.B5;
    sbit  EXIDE_C1RXF6SID_bit at C1RXF6SID.B3;
    sbit  EID_1_C1RXF6SID_bit at C1RXF6SID.B1;
    sbit  EID_0_C1RXF6SID_bit at C1RXF6SID.B0;

    // C1RXF6EID bits
    sbit  EID_15_C1RXF6EID_bit at C1RXF6EID.B15;
    sbit  EID_14_C1RXF6EID_bit at C1RXF6EID.B14;
    sbit  EID_13_C1RXF6EID_bit at C1RXF6EID.B13;
    sbit  EID_12_C1RXF6EID_bit at C1RXF6EID.B12;
    sbit  EID_11_C1RXF6EID_bit at C1RXF6EID.B11;
    sbit  EID_10_C1RXF6EID_bit at C1RXF6EID.B10;
    sbit  EID_9_C1RXF6EID_bit at C1RXF6EID.B9;
    sbit  EID_8_C1RXF6EID_bit at C1RXF6EID.B8;
    sbit  EID_7_C1RXF6EID_bit at C1RXF6EID.B7;
    sbit  EID_6_C1RXF6EID_bit at C1RXF6EID.B6;
    sbit  EID_5_C1RXF6EID_bit at C1RXF6EID.B5;
    sbit  EID_4_C1RXF6EID_bit at C1RXF6EID.B4;
    sbit  EID_3_C1RXF6EID_bit at C1RXF6EID.B3;
    sbit  EID_2_C1RXF6EID_bit at C1RXF6EID.B2;
    sbit  EID_1_C1RXF6EID_bit at C1RXF6EID.B1;
    sbit  EID_0_C1RXF6EID_bit at C1RXF6EID.B0;

    // C1RXF7SID bits
    sbit  SID_10_C1RXF7SID_bit at C1RXF7SID.B15;
    sbit  SID_9_C1RXF7SID_bit at C1RXF7SID.B14;
    sbit  SID_8_C1RXF7SID_bit at C1RXF7SID.B13;
    sbit  SID_7_C1RXF7SID_bit at C1RXF7SID.B12;
    sbit  SID_6_C1RXF7SID_bit at C1RXF7SID.B11;
    sbit  SID_5_C1RXF7SID_bit at C1RXF7SID.B10;
    sbit  SID_4_C1RXF7SID_bit at C1RXF7SID.B9;
    sbit  SID_3_C1RXF7SID_bit at C1RXF7SID.B8;
    sbit  SID_2_C1RXF7SID_bit at C1RXF7SID.B7;
    sbit  SID_1_C1RXF7SID_bit at C1RXF7SID.B6;
    sbit  SID_0_C1RXF7SID_bit at C1RXF7SID.B5;
    sbit  EXIDE_C1RXF7SID_bit at C1RXF7SID.B3;
    sbit  EID_1_C1RXF7SID_bit at C1RXF7SID.B1;
    sbit  EID_0_C1RXF7SID_bit at C1RXF7SID.B0;

    // C1RXF7EID bits
    sbit  EID_15_C1RXF7EID_bit at C1RXF7EID.B15;
    sbit  EID_14_C1RXF7EID_bit at C1RXF7EID.B14;
    sbit  EID_13_C1RXF7EID_bit at C1RXF7EID.B13;
    sbit  EID_12_C1RXF7EID_bit at C1RXF7EID.B12;
    sbit  EID_11_C1RXF7EID_bit at C1RXF7EID.B11;
    sbit  EID_10_C1RXF7EID_bit at C1RXF7EID.B10;
    sbit  EID_9_C1RXF7EID_bit at C1RXF7EID.B9;
    sbit  EID_8_C1RXF7EID_bit at C1RXF7EID.B8;
    sbit  EID_7_C1RXF7EID_bit at C1RXF7EID.B7;
    sbit  EID_6_C1RXF7EID_bit at C1RXF7EID.B6;
    sbit  EID_5_C1RXF7EID_bit at C1RXF7EID.B5;
    sbit  EID_4_C1RXF7EID_bit at C1RXF7EID.B4;
    sbit  EID_3_C1RXF7EID_bit at C1RXF7EID.B3;
    sbit  EID_2_C1RXF7EID_bit at C1RXF7EID.B2;
    sbit  EID_1_C1RXF7EID_bit at C1RXF7EID.B1;
    sbit  EID_0_C1RXF7EID_bit at C1RXF7EID.B0;

    // C1RXF8SID bits
    sbit  SID_10_C1RXF8SID_bit at C1RXF8SID.B15;
    sbit  SID_9_C1RXF8SID_bit at C1RXF8SID.B14;
    sbit  SID_8_C1RXF8SID_bit at C1RXF8SID.B13;
    sbit  SID_7_C1RXF8SID_bit at C1RXF8SID.B12;
    sbit  SID_6_C1RXF8SID_bit at C1RXF8SID.B11;
    sbit  SID_5_C1RXF8SID_bit at C1RXF8SID.B10;
    sbit  SID_4_C1RXF8SID_bit at C1RXF8SID.B9;
    sbit  SID_3_C1RXF8SID_bit at C1RXF8SID.B8;
    sbit  SID_2_C1RXF8SID_bit at C1RXF8SID.B7;
    sbit  SID_1_C1RXF8SID_bit at C1RXF8SID.B6;
    sbit  SID_0_C1RXF8SID_bit at C1RXF8SID.B5;
    sbit  EXIDE_C1RXF8SID_bit at C1RXF8SID.B3;
    sbit  EID_1_C1RXF8SID_bit at C1RXF8SID.B1;
    sbit  EID_0_C1RXF8SID_bit at C1RXF8SID.B0;

    // C1RXF8EID bits
    sbit  EID_15_C1RXF8EID_bit at C1RXF8EID.B15;
    sbit  EID_14_C1RXF8EID_bit at C1RXF8EID.B14;
    sbit  EID_13_C1RXF8EID_bit at C1RXF8EID.B13;
    sbit  EID_12_C1RXF8EID_bit at C1RXF8EID.B12;
    sbit  EID_11_C1RXF8EID_bit at C1RXF8EID.B11;
    sbit  EID_10_C1RXF8EID_bit at C1RXF8EID.B10;
    sbit  EID_9_C1RXF8EID_bit at C1RXF8EID.B9;
    sbit  EID_8_C1RXF8EID_bit at C1RXF8EID.B8;
    sbit  EID_7_C1RXF8EID_bit at C1RXF8EID.B7;
    sbit  EID_6_C1RXF8EID_bit at C1RXF8EID.B6;
    sbit  EID_5_C1RXF8EID_bit at C1RXF8EID.B5;
    sbit  EID_4_C1RXF8EID_bit at C1RXF8EID.B4;
    sbit  EID_3_C1RXF8EID_bit at C1RXF8EID.B3;
    sbit  EID_2_C1RXF8EID_bit at C1RXF8EID.B2;
    sbit  EID_1_C1RXF8EID_bit at C1RXF8EID.B1;
    sbit  EID_0_C1RXF8EID_bit at C1RXF8EID.B0;

    // C1RXF9SID bits
    sbit  SID_10_C1RXF9SID_bit at C1RXF9SID.B15;
    sbit  SID_9_C1RXF9SID_bit at C1RXF9SID.B14;
    sbit  SID_8_C1RXF9SID_bit at C1RXF9SID.B13;
    sbit  SID_7_C1RXF9SID_bit at C1RXF9SID.B12;
    sbit  SID_6_C1RXF9SID_bit at C1RXF9SID.B11;
    sbit  SID_5_C1RXF9SID_bit at C1RXF9SID.B10;
    sbit  SID_4_C1RXF9SID_bit at C1RXF9SID.B9;
    sbit  SID_3_C1RXF9SID_bit at C1RXF9SID.B8;
    sbit  SID_2_C1RXF9SID_bit at C1RXF9SID.B7;
    sbit  SID_1_C1RXF9SID_bit at C1RXF9SID.B6;
    sbit  SID_0_C1RXF9SID_bit at C1RXF9SID.B5;
    sbit  EXIDE_C1RXF9SID_bit at C1RXF9SID.B3;
    sbit  EID_1_C1RXF9SID_bit at C1RXF9SID.B1;
    sbit  EID_0_C1RXF9SID_bit at C1RXF9SID.B0;

    // C1RXF9EID bits
    sbit  EID_15_C1RXF9EID_bit at C1RXF9EID.B15;
    sbit  EID_14_C1RXF9EID_bit at C1RXF9EID.B14;
    sbit  EID_13_C1RXF9EID_bit at C1RXF9EID.B13;
    sbit  EID_12_C1RXF9EID_bit at C1RXF9EID.B12;
    sbit  EID_11_C1RXF9EID_bit at C1RXF9EID.B11;
    sbit  EID_10_C1RXF9EID_bit at C1RXF9EID.B10;
    sbit  EID_9_C1RXF9EID_bit at C1RXF9EID.B9;
    sbit  EID_8_C1RXF9EID_bit at C1RXF9EID.B8;
    sbit  EID_7_C1RXF9EID_bit at C1RXF9EID.B7;
    sbit  EID_6_C1RXF9EID_bit at C1RXF9EID.B6;
    sbit  EID_5_C1RXF9EID_bit at C1RXF9EID.B5;
    sbit  EID_4_C1RXF9EID_bit at C1RXF9EID.B4;
    sbit  EID_3_C1RXF9EID_bit at C1RXF9EID.B3;
    sbit  EID_2_C1RXF9EID_bit at C1RXF9EID.B2;
    sbit  EID_1_C1RXF9EID_bit at C1RXF9EID.B1;
    sbit  EID_0_C1RXF9EID_bit at C1RXF9EID.B0;

    // C1RXF10SID bits
    sbit  SID_10_C1RXF10SID_bit at C1RXF10SID.B15;
    sbit  SID_9_C1RXF10SID_bit at C1RXF10SID.B14;
    sbit  SID_8_C1RXF10SID_bit at C1RXF10SID.B13;
    sbit  SID_7_C1RXF10SID_bit at C1RXF10SID.B12;
    sbit  SID_6_C1RXF10SID_bit at C1RXF10SID.B11;
    sbit  SID_5_C1RXF10SID_bit at C1RXF10SID.B10;
    sbit  SID_4_C1RXF10SID_bit at C1RXF10SID.B9;
    sbit  SID_3_C1RXF10SID_bit at C1RXF10SID.B8;
    sbit  SID_2_C1RXF10SID_bit at C1RXF10SID.B7;
    sbit  SID_1_C1RXF10SID_bit at C1RXF10SID.B6;
    sbit  SID_0_C1RXF10SID_bit at C1RXF10SID.B5;
    sbit  EXIDE_C1RXF10SID_bit at C1RXF10SID.B3;
    sbit  EID_1_C1RXF10SID_bit at C1RXF10SID.B1;
    sbit  EID_0_C1RXF10SID_bit at C1RXF10SID.B0;

    // C1RXF10EID bits
    sbit  EID_15_C1RXF10EID_bit at C1RXF10EID.B15;
    sbit  EID_14_C1RXF10EID_bit at C1RXF10EID.B14;
    sbit  EID_13_C1RXF10EID_bit at C1RXF10EID.B13;
    sbit  EID_12_C1RXF10EID_bit at C1RXF10EID.B12;
    sbit  EID_11_C1RXF10EID_bit at C1RXF10EID.B11;
    sbit  EID_10_C1RXF10EID_bit at C1RXF10EID.B10;
    sbit  EID_9_C1RXF10EID_bit at C1RXF10EID.B9;
    sbit  EID_8_C1RXF10EID_bit at C1RXF10EID.B8;
    sbit  EID_7_C1RXF10EID_bit at C1RXF10EID.B7;
    sbit  EID_6_C1RXF10EID_bit at C1RXF10EID.B6;
    sbit  EID_5_C1RXF10EID_bit at C1RXF10EID.B5;
    sbit  EID_4_C1RXF10EID_bit at C1RXF10EID.B4;
    sbit  EID_3_C1RXF10EID_bit at C1RXF10EID.B3;
    sbit  EID_2_C1RXF10EID_bit at C1RXF10EID.B2;
    sbit  EID_1_C1RXF10EID_bit at C1RXF10EID.B1;
    sbit  EID_0_C1RXF10EID_bit at C1RXF10EID.B0;

    // C1RXF11SID bits
    sbit  SID_10_C1RXF11SID_bit at C1RXF11SID.B15;
    sbit  SID_9_C1RXF11SID_bit at C1RXF11SID.B14;
    sbit  SID_8_C1RXF11SID_bit at C1RXF11SID.B13;
    sbit  SID_7_C1RXF11SID_bit at C1RXF11SID.B12;
    sbit  SID_6_C1RXF11SID_bit at C1RXF11SID.B11;
    sbit  SID_5_C1RXF11SID_bit at C1RXF11SID.B10;
    sbit  SID_4_C1RXF11SID_bit at C1RXF11SID.B9;
    sbit  SID_3_C1RXF11SID_bit at C1RXF11SID.B8;
    sbit  SID_2_C1RXF11SID_bit at C1RXF11SID.B7;
    sbit  SID_1_C1RXF11SID_bit at C1RXF11SID.B6;
    sbit  SID_0_C1RXF11SID_bit at C1RXF11SID.B5;
    sbit  EXIDE_C1RXF11SID_bit at C1RXF11SID.B3;
    sbit  EID_1_C1RXF11SID_bit at C1RXF11SID.B1;
    sbit  EID_0_C1RXF11SID_bit at C1RXF11SID.B0;

    // C1RXF11EID bits
    sbit  EID_15_C1RXF11EID_bit at C1RXF11EID.B15;
    sbit  EID_14_C1RXF11EID_bit at C1RXF11EID.B14;
    sbit  EID_13_C1RXF11EID_bit at C1RXF11EID.B13;
    sbit  EID_12_C1RXF11EID_bit at C1RXF11EID.B12;
    sbit  EID_11_C1RXF11EID_bit at C1RXF11EID.B11;
    sbit  EID_10_C1RXF11EID_bit at C1RXF11EID.B10;
    sbit  EID_9_C1RXF11EID_bit at C1RXF11EID.B9;
    sbit  EID_8_C1RXF11EID_bit at C1RXF11EID.B8;
    sbit  EID_7_C1RXF11EID_bit at C1RXF11EID.B7;
    sbit  EID_6_C1RXF11EID_bit at C1RXF11EID.B6;
    sbit  EID_5_C1RXF11EID_bit at C1RXF11EID.B5;
    sbit  EID_4_C1RXF11EID_bit at C1RXF11EID.B4;
    sbit  EID_3_C1RXF11EID_bit at C1RXF11EID.B3;
    sbit  EID_2_C1RXF11EID_bit at C1RXF11EID.B2;
    sbit  EID_1_C1RXF11EID_bit at C1RXF11EID.B1;
    sbit  EID_0_C1RXF11EID_bit at C1RXF11EID.B0;

    // C1RXF12SID bits
    sbit  SID_10_C1RXF12SID_bit at C1RXF12SID.B15;
    sbit  SID_9_C1RXF12SID_bit at C1RXF12SID.B14;
    sbit  SID_8_C1RXF12SID_bit at C1RXF12SID.B13;
    sbit  SID_7_C1RXF12SID_bit at C1RXF12SID.B12;
    sbit  SID_6_C1RXF12SID_bit at C1RXF12SID.B11;
    sbit  SID_5_C1RXF12SID_bit at C1RXF12SID.B10;
    sbit  SID_4_C1RXF12SID_bit at C1RXF12SID.B9;
    sbit  SID_3_C1RXF12SID_bit at C1RXF12SID.B8;
    sbit  SID_2_C1RXF12SID_bit at C1RXF12SID.B7;
    sbit  SID_1_C1RXF12SID_bit at C1RXF12SID.B6;
    sbit  SID_0_C1RXF12SID_bit at C1RXF12SID.B5;
    sbit  EXIDE_C1RXF12SID_bit at C1RXF12SID.B3;
    sbit  EID_1_C1RXF12SID_bit at C1RXF12SID.B1;
    sbit  EID_0_C1RXF12SID_bit at C1RXF12SID.B0;

    // C1RXF12EID bits
    sbit  EID_15_C1RXF12EID_bit at C1RXF12EID.B15;
    sbit  EID_14_C1RXF12EID_bit at C1RXF12EID.B14;
    sbit  EID_13_C1RXF12EID_bit at C1RXF12EID.B13;
    sbit  EID_12_C1RXF12EID_bit at C1RXF12EID.B12;
    sbit  EID_11_C1RXF12EID_bit at C1RXF12EID.B11;
    sbit  EID_10_C1RXF12EID_bit at C1RXF12EID.B10;
    sbit  EID_9_C1RXF12EID_bit at C1RXF12EID.B9;
    sbit  EID_8_C1RXF12EID_bit at C1RXF12EID.B8;
    sbit  EID_7_C1RXF12EID_bit at C1RXF12EID.B7;
    sbit  EID_6_C1RXF12EID_bit at C1RXF12EID.B6;
    sbit  EID_5_C1RXF12EID_bit at C1RXF12EID.B5;
    sbit  EID_4_C1RXF12EID_bit at C1RXF12EID.B4;
    sbit  EID_3_C1RXF12EID_bit at C1RXF12EID.B3;
    sbit  EID_2_C1RXF12EID_bit at C1RXF12EID.B2;
    sbit  EID_1_C1RXF12EID_bit at C1RXF12EID.B1;
    sbit  EID_0_C1RXF12EID_bit at C1RXF12EID.B0;

    // C1RXF13SID bits
    sbit  SID_10_C1RXF13SID_bit at C1RXF13SID.B15;
    sbit  SID_9_C1RXF13SID_bit at C1RXF13SID.B14;
    sbit  SID_8_C1RXF13SID_bit at C1RXF13SID.B13;
    sbit  SID_7_C1RXF13SID_bit at C1RXF13SID.B12;
    sbit  SID_6_C1RXF13SID_bit at C1RXF13SID.B11;
    sbit  SID_5_C1RXF13SID_bit at C1RXF13SID.B10;
    sbit  SID_4_C1RXF13SID_bit at C1RXF13SID.B9;
    sbit  SID_3_C1RXF13SID_bit at C1RXF13SID.B8;
    sbit  SID_2_C1RXF13SID_bit at C1RXF13SID.B7;
    sbit  SID_1_C1RXF13SID_bit at C1RXF13SID.B6;
    sbit  SID_0_C1RXF13SID_bit at C1RXF13SID.B5;
    sbit  EXIDE_C1RXF13SID_bit at C1RXF13SID.B3;
    sbit  EID_1_C1RXF13SID_bit at C1RXF13SID.B1;
    sbit  EID_0_C1RXF13SID_bit at C1RXF13SID.B0;

    // C1RXF13EID bits
    sbit  EID_15_C1RXF13EID_bit at C1RXF13EID.B15;
    sbit  EID_14_C1RXF13EID_bit at C1RXF13EID.B14;
    sbit  EID_13_C1RXF13EID_bit at C1RXF13EID.B13;
    sbit  EID_12_C1RXF13EID_bit at C1RXF13EID.B12;
    sbit  EID_11_C1RXF13EID_bit at C1RXF13EID.B11;
    sbit  EID_10_C1RXF13EID_bit at C1RXF13EID.B10;
    sbit  EID_9_C1RXF13EID_bit at C1RXF13EID.B9;
    sbit  EID_8_C1RXF13EID_bit at C1RXF13EID.B8;
    sbit  EID_7_C1RXF13EID_bit at C1RXF13EID.B7;
    sbit  EID_6_C1RXF13EID_bit at C1RXF13EID.B6;
    sbit  EID_5_C1RXF13EID_bit at C1RXF13EID.B5;
    sbit  EID_4_C1RXF13EID_bit at C1RXF13EID.B4;
    sbit  EID_3_C1RXF13EID_bit at C1RXF13EID.B3;
    sbit  EID_2_C1RXF13EID_bit at C1RXF13EID.B2;
    sbit  EID_1_C1RXF13EID_bit at C1RXF13EID.B1;
    sbit  EID_0_C1RXF13EID_bit at C1RXF13EID.B0;

    // C1RXF14SID bits
    sbit  SID_10_C1RXF14SID_bit at C1RXF14SID.B15;
    sbit  SID_9_C1RXF14SID_bit at C1RXF14SID.B14;
    sbit  SID_8_C1RXF14SID_bit at C1RXF14SID.B13;
    sbit  SID_7_C1RXF14SID_bit at C1RXF14SID.B12;
    sbit  SID_6_C1RXF14SID_bit at C1RXF14SID.B11;
    sbit  SID_5_C1RXF14SID_bit at C1RXF14SID.B10;
    sbit  SID_4_C1RXF14SID_bit at C1RXF14SID.B9;
    sbit  SID_3_C1RXF14SID_bit at C1RXF14SID.B8;
    sbit  SID_2_C1RXF14SID_bit at C1RXF14SID.B7;
    sbit  SID_1_C1RXF14SID_bit at C1RXF14SID.B6;
    sbit  SID_0_C1RXF14SID_bit at C1RXF14SID.B5;
    sbit  EXIDE_C1RXF14SID_bit at C1RXF14SID.B3;
    sbit  EID_1_C1RXF14SID_bit at C1RXF14SID.B1;
    sbit  EID_0_C1RXF14SID_bit at C1RXF14SID.B0;

    // C1RXF14EID bits
    sbit  EID_15_C1RXF14EID_bit at C1RXF14EID.B15;
    sbit  EID_14_C1RXF14EID_bit at C1RXF14EID.B14;
    sbit  EID_13_C1RXF14EID_bit at C1RXF14EID.B13;
    sbit  EID_12_C1RXF14EID_bit at C1RXF14EID.B12;
    sbit  EID_11_C1RXF14EID_bit at C1RXF14EID.B11;
    sbit  EID_10_C1RXF14EID_bit at C1RXF14EID.B10;
    sbit  EID_9_C1RXF14EID_bit at C1RXF14EID.B9;
    sbit  EID_8_C1RXF14EID_bit at C1RXF14EID.B8;
    sbit  EID_7_C1RXF14EID_bit at C1RXF14EID.B7;
    sbit  EID_6_C1RXF14EID_bit at C1RXF14EID.B6;
    sbit  EID_5_C1RXF14EID_bit at C1RXF14EID.B5;
    sbit  EID_4_C1RXF14EID_bit at C1RXF14EID.B4;
    sbit  EID_3_C1RXF14EID_bit at C1RXF14EID.B3;
    sbit  EID_2_C1RXF14EID_bit at C1RXF14EID.B2;
    sbit  EID_1_C1RXF14EID_bit at C1RXF14EID.B1;
    sbit  EID_0_C1RXF14EID_bit at C1RXF14EID.B0;

    // C1RXF15SID bits
    sbit  SID_10_C1RXF15SID_bit at C1RXF15SID.B15;
    sbit  SID_9_C1RXF15SID_bit at C1RXF15SID.B14;
    sbit  SID_8_C1RXF15SID_bit at C1RXF15SID.B13;
    sbit  SID_7_C1RXF15SID_bit at C1RXF15SID.B12;
    sbit  SID_6_C1RXF15SID_bit at C1RXF15SID.B11;
    sbit  SID_5_C1RXF15SID_bit at C1RXF15SID.B10;
    sbit  SID_4_C1RXF15SID_bit at C1RXF15SID.B9;
    sbit  SID_3_C1RXF15SID_bit at C1RXF15SID.B8;
    sbit  SID_2_C1RXF15SID_bit at C1RXF15SID.B7;
    sbit  SID_1_C1RXF15SID_bit at C1RXF15SID.B6;
    sbit  SID_0_C1RXF15SID_bit at C1RXF15SID.B5;
    sbit  EXIDE_C1RXF15SID_bit at C1RXF15SID.B3;
    sbit  EID_1_C1RXF15SID_bit at C1RXF15SID.B1;
    sbit  EID_0_C1RXF15SID_bit at C1RXF15SID.B0;

    // C1RXF15EID bits
    sbit  EID_15_C1RXF15EID_bit at C1RXF15EID.B15;
    sbit  EID_14_C1RXF15EID_bit at C1RXF15EID.B14;
    sbit  EID_13_C1RXF15EID_bit at C1RXF15EID.B13;
    sbit  EID_12_C1RXF15EID_bit at C1RXF15EID.B12;
    sbit  EID_11_C1RXF15EID_bit at C1RXF15EID.B11;
    sbit  EID_10_C1RXF15EID_bit at C1RXF15EID.B10;
    sbit  EID_9_C1RXF15EID_bit at C1RXF15EID.B9;
    sbit  EID_8_C1RXF15EID_bit at C1RXF15EID.B8;
    sbit  EID_7_C1RXF15EID_bit at C1RXF15EID.B7;
    sbit  EID_6_C1RXF15EID_bit at C1RXF15EID.B6;
    sbit  EID_5_C1RXF15EID_bit at C1RXF15EID.B5;
    sbit  EID_4_C1RXF15EID_bit at C1RXF15EID.B4;
    sbit  EID_3_C1RXF15EID_bit at C1RXF15EID.B3;
    sbit  EID_2_C1RXF15EID_bit at C1RXF15EID.B2;
    sbit  EID_1_C1RXF15EID_bit at C1RXF15EID.B1;
    sbit  EID_0_C1RXF15EID_bit at C1RXF15EID.B0;

    // PMCON bits
    const register unsigned short int PMPEN = 15;
    sbit  PMPEN_bit at PMCON.B15;
    const register unsigned short int PSIDL = 13;
    sbit  PSIDL_bit at PMCON.B13;
    const register unsigned short int ADRMUX_1 = 12;
    sbit  ADRMUX_1_bit at PMCON.B12;
    const register unsigned short int ADRMUX_0 = 11;
    sbit  ADRMUX_0_bit at PMCON.B11;
    const register unsigned short int PTBEEN = 10;
    sbit  PTBEEN_bit at PMCON.B10;
    const register unsigned short int PTWREN = 9;
    sbit  PTWREN_bit at PMCON.B9;
    const register unsigned short int PTRDEN = 8;
    sbit  PTRDEN_bit at PMCON.B8;
    const register unsigned short int CSF_1 = 7;
    sbit  CSF_1_bit at PMCON.B7;
    const register unsigned short int CSF_0 = 6;
    sbit  CSF_0_bit at PMCON.B6;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON.B5;
    const register unsigned short int CS1P = 3;
    sbit  CS1P_bit at PMCON.B3;
    const register unsigned short int BEP = 2;
    sbit  BEP_bit at PMCON.B2;
    const register unsigned short int WRSP = 1;
    sbit  WRSP_bit at PMCON.B1;
    const register unsigned short int RDSP = 0;
    sbit  RDSP_bit at PMCON.B0;

    // PMMODE bits
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMMODE.B15;
    const register unsigned short int IRQM_1 = 14;
    sbit  IRQM_1_bit at PMMODE.B14;
    const register unsigned short int IRQM_0 = 13;
    sbit  IRQM_0_bit at PMMODE.B13;
    const register unsigned short int INCM_1 = 12;
    sbit  INCM_1_bit at PMMODE.B12;
    const register unsigned short int INCM_0 = 11;
    sbit  INCM_0_bit at PMMODE.B11;
    sbit  MODE16_PMMODE_bit at PMMODE.B10;
    sbit  MODE_1_PMMODE_bit at PMMODE.B9;
    sbit  MODE_0_PMMODE_bit at PMMODE.B8;
    const register unsigned short int WAITB_1 = 7;
    sbit  WAITB_1_bit at PMMODE.B7;
    const register unsigned short int WAITB_0 = 6;
    sbit  WAITB_0_bit at PMMODE.B6;
    const register unsigned short int WAITM_3 = 5;
    sbit  WAITM_3_bit at PMMODE.B5;
    const register unsigned short int WAITM_2 = 4;
    sbit  WAITM_2_bit at PMMODE.B4;
    const register unsigned short int WAITM_1 = 3;
    sbit  WAITM_1_bit at PMMODE.B3;
    const register unsigned short int WAITM_0 = 2;
    sbit  WAITM_0_bit at PMMODE.B2;
    const register unsigned short int WAITE_1 = 1;
    sbit  WAITE_1_bit at PMMODE.B1;
    const register unsigned short int WAITE_0 = 0;
    sbit  WAITE_0_bit at PMMODE.B0;

    // PMADDR bits
    const register unsigned short int ADDR15 = 15;
    sbit  ADDR15_bit at PMADDR.B15;
    const register unsigned short int CS1 = 14;
    sbit  CS1_bit at PMADDR.B14;
    const register unsigned short int ADDR_13 = 13;
    sbit  ADDR_13_bit at PMADDR.B13;
    const register unsigned short int ADDR_12 = 12;
    sbit  ADDR_12_bit at PMADDR.B12;
    const register unsigned short int ADDR_11 = 11;
    sbit  ADDR_11_bit at PMADDR.B11;
    const register unsigned short int ADDR_10 = 10;
    sbit  ADDR_10_bit at PMADDR.B10;
    const register unsigned short int ADDR_9 = 9;
    sbit  ADDR_9_bit at PMADDR.B9;
    const register unsigned short int ADDR_8 = 8;
    sbit  ADDR_8_bit at PMADDR.B8;
    const register unsigned short int ADDR_7 = 7;
    sbit  ADDR_7_bit at PMADDR.B7;
    const register unsigned short int ADDR_6 = 6;
    sbit  ADDR_6_bit at PMADDR.B6;
    const register unsigned short int ADDR_5 = 5;
    sbit  ADDR_5_bit at PMADDR.B5;
    const register unsigned short int ADDR_4 = 4;
    sbit  ADDR_4_bit at PMADDR.B4;
    const register unsigned short int ADDR_3 = 3;
    sbit  ADDR_3_bit at PMADDR.B3;
    const register unsigned short int ADDR_2 = 2;
    sbit  ADDR_2_bit at PMADDR.B2;
    const register unsigned short int ADDR_1 = 1;
    sbit  ADDR_1_bit at PMADDR.B1;
    const register unsigned short int ADDR_0 = 0;
    sbit  ADDR_0_bit at PMADDR.B0;

    // PMDOUT2 bits
    const register unsigned short int DATA_15 = 15;
    sbit  DATA_15_bit at PMDOUT2.B15;
    sbit  DATA_15_PMDOUT2_bit at PMDOUT2.B15;
    const register unsigned short int DATA_14 = 14;
    sbit  DATA_14_bit at PMDOUT2.B14;
    sbit  DATA_14_PMDOUT2_bit at PMDOUT2.B14;
    const register unsigned short int DATA_13 = 13;
    sbit  DATA_13_bit at PMDOUT2.B13;
    sbit  DATA_13_PMDOUT2_bit at PMDOUT2.B13;
    const register unsigned short int DATA_12 = 12;
    sbit  DATA_12_bit at PMDOUT2.B12;
    sbit  DATA_12_PMDOUT2_bit at PMDOUT2.B12;
    const register unsigned short int DATA_11 = 11;
    sbit  DATA_11_bit at PMDOUT2.B11;
    sbit  DATA_11_PMDOUT2_bit at PMDOUT2.B11;
    const register unsigned short int DATA_10 = 10;
    sbit  DATA_10_bit at PMDOUT2.B10;
    sbit  DATA_10_PMDOUT2_bit at PMDOUT2.B10;
    const register unsigned short int DATA_9 = 9;
    sbit  DATA_9_bit at PMDOUT2.B9;
    sbit  DATA_9_PMDOUT2_bit at PMDOUT2.B9;
    const register unsigned short int DATA_8 = 8;
    sbit  DATA_8_bit at PMDOUT2.B8;
    sbit  DATA_8_PMDOUT2_bit at PMDOUT2.B8;
    const register unsigned short int DATA_7 = 7;
    sbit  DATA_7_bit at PMDOUT2.B7;
    sbit  DATA_7_PMDOUT2_bit at PMDOUT2.B7;
    const register unsigned short int DATA_6 = 6;
    sbit  DATA_6_bit at PMDOUT2.B6;
    sbit  DATA_6_PMDOUT2_bit at PMDOUT2.B6;
    const register unsigned short int DATA_5 = 5;
    sbit  DATA_5_bit at PMDOUT2.B5;
    sbit  DATA_5_PMDOUT2_bit at PMDOUT2.B5;
    const register unsigned short int DATA_4 = 4;
    sbit  DATA_4_bit at PMDOUT2.B4;
    sbit  DATA_4_PMDOUT2_bit at PMDOUT2.B4;
    const register unsigned short int DATA_3 = 3;
    sbit  DATA_3_bit at PMDOUT2.B3;
    sbit  DATA_3_PMDOUT2_bit at PMDOUT2.B3;
    const register unsigned short int DATA_2 = 2;
    sbit  DATA_2_bit at PMDOUT2.B2;
    sbit  DATA_2_PMDOUT2_bit at PMDOUT2.B2;
    const register unsigned short int DATA_1 = 1;
    sbit  DATA_1_bit at PMDOUT2.B1;
    sbit  DATA_1_PMDOUT2_bit at PMDOUT2.B1;
    const register unsigned short int DATA_0 = 0;
    sbit  DATA_0_bit at PMDOUT2.B0;
    sbit  DATA_0_PMDOUT2_bit at PMDOUT2.B0;

    // PMDIN1 bits
    sbit  DATA_15_PMDIN1_bit at PMDIN1.B15;
    sbit  DATA_14_PMDIN1_bit at PMDIN1.B14;
    sbit  DATA_13_PMDIN1_bit at PMDIN1.B13;
    sbit  DATA_12_PMDIN1_bit at PMDIN1.B12;
    sbit  DATA_11_PMDIN1_bit at PMDIN1.B11;
    sbit  DATA_10_PMDIN1_bit at PMDIN1.B10;
    sbit  DATA_9_PMDIN1_bit at PMDIN1.B9;
    sbit  DATA_8_PMDIN1_bit at PMDIN1.B8;
    sbit  DATA_7_PMDIN1_bit at PMDIN1.B7;
    sbit  DATA_6_PMDIN1_bit at PMDIN1.B6;
    sbit  DATA_5_PMDIN1_bit at PMDIN1.B5;
    sbit  DATA_4_PMDIN1_bit at PMDIN1.B4;
    sbit  DATA_3_PMDIN1_bit at PMDIN1.B3;
    sbit  DATA_2_PMDIN1_bit at PMDIN1.B2;
    sbit  DATA_1_PMDIN1_bit at PMDIN1.B1;
    sbit  DATA_0_PMDIN1_bit at PMDIN1.B0;

    // PMDIN2 bits
    const register unsigned short int PTEN_15 = 15;
    sbit  PTEN_15_bit at PMDIN2.B15;
    const register unsigned short int PTEN_14 = 14;
    sbit  PTEN_14_bit at PMDIN2.B14;
    const register unsigned short int PTEN_13 = 13;
    sbit  PTEN_13_bit at PMDIN2.B13;
    const register unsigned short int PTEN_12 = 12;
    sbit  PTEN_12_bit at PMDIN2.B12;
    const register unsigned short int PTEN_11 = 11;
    sbit  PTEN_11_bit at PMDIN2.B11;
    const register unsigned short int PTEN_10 = 10;
    sbit  PTEN_10_bit at PMDIN2.B10;
    sbit  PTEN_10_PMDIN2_bit at PMDIN2.B10;
    const register unsigned short int PTEN_9 = 9;
    sbit  PTEN_9_bit at PMDIN2.B9;
    sbit  PTEN_9_PMDIN2_bit at PMDIN2.B9;
    const register unsigned short int PTEN_8 = 8;
    sbit  PTEN_8_bit at PMDIN2.B8;
    sbit  PTEN_8_PMDIN2_bit at PMDIN2.B8;
    const register unsigned short int PTEN_7 = 7;
    sbit  PTEN_7_bit at PMDIN2.B7;
    sbit  PTEN_7_PMDIN2_bit at PMDIN2.B7;
    const register unsigned short int PTEN_6 = 6;
    sbit  PTEN_6_bit at PMDIN2.B6;
    sbit  PTEN_6_PMDIN2_bit at PMDIN2.B6;
    const register unsigned short int PTEN_5 = 5;
    sbit  PTEN_5_bit at PMDIN2.B5;
    sbit  PTEN_5_PMDIN2_bit at PMDIN2.B5;
    const register unsigned short int PTEN_4 = 4;
    sbit  PTEN_4_bit at PMDIN2.B4;
    sbit  PTEN_4_PMDIN2_bit at PMDIN2.B4;
    const register unsigned short int PTEN_3 = 3;
    sbit  PTEN_3_bit at PMDIN2.B3;
    sbit  PTEN_3_PMDIN2_bit at PMDIN2.B3;
    const register unsigned short int PTEN_2 = 2;
    sbit  PTEN_2_bit at PMDIN2.B2;
    sbit  PTEN_2_PMDIN2_bit at PMDIN2.B2;
    const register unsigned short int PTEN_1 = 1;
    sbit  PTEN_1_bit at PMDIN2.B1;
    sbit  PTEN_1_PMDIN2_bit at PMDIN2.B1;
    const register unsigned short int PTEN_0 = 0;
    sbit  PTEN_0_bit at PMDIN2.B0;
    sbit  PTEN_0_PMDIN2_bit at PMDIN2.B0;

    // PMAEN bits
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMAEN.B14;
    sbit  PTEN_10_PMAEN_bit at PMAEN.B10;
    sbit  PTEN_9_PMAEN_bit at PMAEN.B9;
    sbit  PTEN_8_PMAEN_bit at PMAEN.B8;
    sbit  PTEN_7_PMAEN_bit at PMAEN.B7;
    sbit  PTEN_6_PMAEN_bit at PMAEN.B6;
    sbit  PTEN_5_PMAEN_bit at PMAEN.B5;
    sbit  PTEN_4_PMAEN_bit at PMAEN.B4;
    sbit  PTEN_3_PMAEN_bit at PMAEN.B3;
    sbit  PTEN_2_PMAEN_bit at PMAEN.B2;
    sbit  PTEN_1_PMAEN_bit at PMAEN.B1;
    sbit  PTEN_0_PMAEN_bit at PMAEN.B0;

    // PMSTAT bits
    const register unsigned short int IBF = 15;
    sbit  IBF_bit at PMSTAT.B15;
    const register unsigned short int IBOV = 14;
    sbit  IBOV_bit at PMSTAT.B14;
    const register unsigned short int IB3F = 11;
    sbit  IB3F_bit at PMSTAT.B11;
    const register unsigned short int IB2F = 10;
    sbit  IB2F_bit at PMSTAT.B10;
    const register unsigned short int IB1F = 9;
    sbit  IB1F_bit at PMSTAT.B9;
    const register unsigned short int IB0F = 8;
    sbit  IB0F_bit at PMSTAT.B8;
    const register unsigned short int OBE = 7;
    sbit  OBE_bit at PMSTAT.B7;
    const register unsigned short int OBUF = 6;
    sbit  OBUF_bit at PMSTAT.B6;
    const register unsigned short int OB3E = 3;
    sbit  OB3E_bit at PMSTAT.B3;
    const register unsigned short int OB2E = 2;
    sbit  OB2E_bit at PMSTAT.B2;
    const register unsigned short int OB1E = 1;
    sbit  OB1E_bit at PMSTAT.B1;
    const register unsigned short int OB0E = 0;
    sbit  OB0E_bit at PMSTAT.B0;

    // ALRMVAL bits
    const register unsigned short int ALRMVAL_15 = 15;
    sbit  ALRMVAL_15_bit at ALRMVAL.B15;
    const register unsigned short int ALRMVAL_14 = 14;
    sbit  ALRMVAL_14_bit at ALRMVAL.B14;
    const register unsigned short int ALRMVAL_13 = 13;
    sbit  ALRMVAL_13_bit at ALRMVAL.B13;
    const register unsigned short int ALRMVAL_12 = 12;
    sbit  ALRMVAL_12_bit at ALRMVAL.B12;
    const register unsigned short int ALRMVAL_11 = 11;
    sbit  ALRMVAL_11_bit at ALRMVAL.B11;
    const register unsigned short int ALRMVAL_10 = 10;
    sbit  ALRMVAL_10_bit at ALRMVAL.B10;
    const register unsigned short int ALRMVAL_9 = 9;
    sbit  ALRMVAL_9_bit at ALRMVAL.B9;
    const register unsigned short int ALRMVAL_8 = 8;
    sbit  ALRMVAL_8_bit at ALRMVAL.B8;
    const register unsigned short int ALRMVAL_7 = 7;
    sbit  ALRMVAL_7_bit at ALRMVAL.B7;
    const register unsigned short int ALRMVAL_6 = 6;
    sbit  ALRMVAL_6_bit at ALRMVAL.B6;
    const register unsigned short int ALRMVAL_5 = 5;
    sbit  ALRMVAL_5_bit at ALRMVAL.B5;
    const register unsigned short int ALRMVAL_4 = 4;
    sbit  ALRMVAL_4_bit at ALRMVAL.B4;
    const register unsigned short int ALRMVAL_3 = 3;
    sbit  ALRMVAL_3_bit at ALRMVAL.B3;
    const register unsigned short int ALRMVAL_2 = 2;
    sbit  ALRMVAL_2_bit at ALRMVAL.B2;
    const register unsigned short int ALRMVAL_1 = 1;
    sbit  ALRMVAL_1_bit at ALRMVAL.B1;
    const register unsigned short int ALRMVAL_0 = 0;
    sbit  ALRMVAL_0_bit at ALRMVAL.B0;

    // ALCFGRPT bits
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at ALCFGRPT.B15;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at ALCFGRPT.B14;
    const register unsigned short int AMASK_3 = 13;
    sbit  AMASK_3_bit at ALCFGRPT.B13;
    const register unsigned short int AMASK_2 = 12;
    sbit  AMASK_2_bit at ALCFGRPT.B12;
    const register unsigned short int AMASK_1 = 11;
    sbit  AMASK_1_bit at ALCFGRPT.B11;
    const register unsigned short int AMASK_0 = 10;
    sbit  AMASK_0_bit at ALCFGRPT.B10;
    const register unsigned short int ALRMPTR_1 = 9;
    sbit  ALRMPTR_1_bit at ALCFGRPT.B9;
    const register unsigned short int ALRMPTR_0 = 8;
    sbit  ALRMPTR_0_bit at ALCFGRPT.B8;
    const register unsigned short int ARPT_7 = 7;
    sbit  ARPT_7_bit at ALCFGRPT.B7;
    const register unsigned short int ARPT_6 = 6;
    sbit  ARPT_6_bit at ALCFGRPT.B6;
    const register unsigned short int ARPT_5 = 5;
    sbit  ARPT_5_bit at ALCFGRPT.B5;
    const register unsigned short int ARPT_4 = 4;
    sbit  ARPT_4_bit at ALCFGRPT.B4;
    const register unsigned short int ARPT_3 = 3;
    sbit  ARPT_3_bit at ALCFGRPT.B3;
    const register unsigned short int ARPT_2 = 2;
    sbit  ARPT_2_bit at ALCFGRPT.B2;
    const register unsigned short int ARPT_1 = 1;
    sbit  ARPT_1_bit at ALCFGRPT.B1;
    const register unsigned short int ARPT_0 = 0;
    sbit  ARPT_0_bit at ALCFGRPT.B0;

    // RTCVAL bits
    const register unsigned short int RTCVAL_15 = 15;
    sbit  RTCVAL_15_bit at RTCVAL.B15;
    const register unsigned short int RTCVAL_14 = 14;
    sbit  RTCVAL_14_bit at RTCVAL.B14;
    const register unsigned short int RTCVAL_13 = 13;
    sbit  RTCVAL_13_bit at RTCVAL.B13;
    const register unsigned short int RTCVAL_12 = 12;
    sbit  RTCVAL_12_bit at RTCVAL.B12;
    const register unsigned short int RTCVAL_11 = 11;
    sbit  RTCVAL_11_bit at RTCVAL.B11;
    const register unsigned short int RTCVAL_10 = 10;
    sbit  RTCVAL_10_bit at RTCVAL.B10;
    const register unsigned short int RTCVAL_9 = 9;
    sbit  RTCVAL_9_bit at RTCVAL.B9;
    const register unsigned short int RTCVAL_8 = 8;
    sbit  RTCVAL_8_bit at RTCVAL.B8;
    const register unsigned short int RTCVAL_7 = 7;
    sbit  RTCVAL_7_bit at RTCVAL.B7;
    const register unsigned short int RTCVAL_6 = 6;
    sbit  RTCVAL_6_bit at RTCVAL.B6;
    const register unsigned short int RTCVAL_5 = 5;
    sbit  RTCVAL_5_bit at RTCVAL.B5;
    const register unsigned short int RTCVAL_4 = 4;
    sbit  RTCVAL_4_bit at RTCVAL.B4;
    const register unsigned short int RTCVAL_3 = 3;
    sbit  RTCVAL_3_bit at RTCVAL.B3;
    const register unsigned short int RTCVAL_2 = 2;
    sbit  RTCVAL_2_bit at RTCVAL.B2;
    const register unsigned short int RTCVAL_1 = 1;
    sbit  RTCVAL_1_bit at RTCVAL.B1;
    const register unsigned short int RTCVAL_0 = 0;
    sbit  RTCVAL_0_bit at RTCVAL.B0;

    // RCFGCAL bits
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCFGCAL.B15;
    const register unsigned short int RTCWREN = 13;
    sbit  RTCWREN_bit at RCFGCAL.B13;
    const register unsigned short int RTCSYNC = 12;
    sbit  RTCSYNC_bit at RCFGCAL.B12;
    const register unsigned short int HALFSEC = 11;
    sbit  HALFSEC_bit at RCFGCAL.B11;
    const register unsigned short int RTCOE = 10;
    sbit  RTCOE_bit at RCFGCAL.B10;
    const register unsigned short int RTCPTR_1 = 9;
    sbit  RTCPTR_1_bit at RCFGCAL.B9;
    const register unsigned short int RTCPTR_0 = 8;
    sbit  RTCPTR_0_bit at RCFGCAL.B8;
    const register unsigned short int CAL_7 = 7;
    sbit  CAL_7_bit at RCFGCAL.B7;
    const register unsigned short int CAL_6 = 6;
    sbit  CAL_6_bit at RCFGCAL.B6;
    const register unsigned short int CAL_5 = 5;
    sbit  CAL_5_bit at RCFGCAL.B5;
    const register unsigned short int CAL_4 = 4;
    sbit  CAL_4_bit at RCFGCAL.B4;
    const register unsigned short int CAL_3 = 3;
    sbit  CAL_3_bit at RCFGCAL.B3;
    const register unsigned short int CAL_2 = 2;
    sbit  CAL_2_bit at RCFGCAL.B2;
    const register unsigned short int CAL_1 = 1;
    sbit  CAL_1_bit at RCFGCAL.B1;
    const register unsigned short int CAL_0 = 0;
    sbit  CAL_0_bit at RCFGCAL.B0;

    // CMCON bits
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMCON.B15;
    const register unsigned short int C2EVT = 13;
    sbit  C2EVT_bit at CMCON.B13;
    const register unsigned short int C1EVT = 12;
    sbit  C1EVT_bit at CMCON.B12;
    const register unsigned short int C2EN = 11;
    sbit  C2EN_bit at CMCON.B11;
    const register unsigned short int C1EN = 10;
    sbit  C1EN_bit at CMCON.B10;
    const register unsigned short int C2OUTEN = 9;
    sbit  C2OUTEN_bit at CMCON.B9;
    const register unsigned short int C1OUTEN = 8;
    sbit  C1OUTEN_bit at CMCON.B8;
    const register unsigned short int C2OUT = 7;
    sbit  C2OUT_bit at CMCON.B7;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CMCON.B6;
    const register unsigned short int C2INV = 5;
    sbit  C2INV_bit at CMCON.B5;
    const register unsigned short int C1INV = 4;
    sbit  C1INV_bit at CMCON.B4;
    const register unsigned short int C2NEG = 3;
    sbit  C2NEG_bit at CMCON.B3;
    const register unsigned short int C2POS = 2;
    sbit  C2POS_bit at CMCON.B2;
    const register unsigned short int C1NEG = 1;
    sbit  C1NEG_bit at CMCON.B1;
    const register unsigned short int C1POS = 0;
    sbit  C1POS_bit at CMCON.B0;

    // CVRCON bits
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

    // CRCCON bits
    sbit  CSIDL_CRCCON_bit at CRCCON.B13;
    const register unsigned short int VWORD_4 = 12;
    sbit  VWORD_4_bit at CRCCON.B12;
    const register unsigned short int VWORD_3 = 11;
    sbit  VWORD_3_bit at CRCCON.B11;
    const register unsigned short int VWORD_2 = 10;
    sbit  VWORD_2_bit at CRCCON.B10;
    const register unsigned short int VWORD_1 = 9;
    sbit  VWORD_1_bit at CRCCON.B9;
    const register unsigned short int VWORD_0 = 8;
    sbit  VWORD_0_bit at CRCCON.B8;
    const register unsigned short int CRCFUL = 7;
    sbit  CRCFUL_bit at CRCCON.B7;
    const register unsigned short int CRCMPT = 6;
    sbit  CRCMPT_bit at CRCCON.B6;
    const register unsigned short int CRCGO = 4;
    sbit  CRCGO_bit at CRCCON.B4;
    const register unsigned short int PLEN_3 = 3;
    sbit  PLEN_3_bit at CRCCON.B3;
    const register unsigned short int PLEN_2 = 2;
    sbit  PLEN_2_bit at CRCCON.B2;
    const register unsigned short int PLEN_1 = 1;
    sbit  PLEN_1_bit at CRCCON.B1;
    const register unsigned short int PLEN_0 = 0;
    sbit  PLEN_0_bit at CRCCON.B0;

    // CRCXOR bits
    const register unsigned short int CRCXOR_15 = 15;
    sbit  CRCXOR_15_bit at CRCXOR.B15;
    const register unsigned short int CRCXOR_14 = 14;
    sbit  CRCXOR_14_bit at CRCXOR.B14;
    const register unsigned short int CRCXOR_13 = 13;
    sbit  CRCXOR_13_bit at CRCXOR.B13;
    const register unsigned short int CRCXOR_12 = 12;
    sbit  CRCXOR_12_bit at CRCXOR.B12;
    const register unsigned short int CRCXOR_11 = 11;
    sbit  CRCXOR_11_bit at CRCXOR.B11;
    const register unsigned short int CRCXOR_10 = 10;
    sbit  CRCXOR_10_bit at CRCXOR.B10;
    const register unsigned short int CRCXOR_9 = 9;
    sbit  CRCXOR_9_bit at CRCXOR.B9;
    const register unsigned short int CRCXOR_8 = 8;
    sbit  CRCXOR_8_bit at CRCXOR.B8;
    const register unsigned short int CRCXOR_7 = 7;
    sbit  CRCXOR_7_bit at CRCXOR.B7;
    const register unsigned short int CRCXOR_6 = 6;
    sbit  CRCXOR_6_bit at CRCXOR.B6;
    const register unsigned short int CRCXOR_5 = 5;
    sbit  CRCXOR_5_bit at CRCXOR.B5;
    const register unsigned short int CRCXOR_4 = 4;
    sbit  CRCXOR_4_bit at CRCXOR.B4;
    const register unsigned short int CRCXOR_3 = 3;
    sbit  CRCXOR_3_bit at CRCXOR.B3;
    const register unsigned short int CRCXOR_2 = 2;
    sbit  CRCXOR_2_bit at CRCXOR.B2;
    const register unsigned short int CRCXOR_1 = 1;
    sbit  CRCXOR_1_bit at CRCXOR.B1;
    const register unsigned short int CRCXOR_0 = 0;
    sbit  CRCXOR_0_bit at CRCXOR.B0;

    // CRCDAT bits
    const register unsigned short int CRCDAT_15 = 15;
    sbit  CRCDAT_15_bit at CRCDAT.B15;
    const register unsigned short int CRCDAT_14 = 14;
    sbit  CRCDAT_14_bit at CRCDAT.B14;
    const register unsigned short int CRCDAT_13 = 13;
    sbit  CRCDAT_13_bit at CRCDAT.B13;
    const register unsigned short int CRCDAT_12 = 12;
    sbit  CRCDAT_12_bit at CRCDAT.B12;
    const register unsigned short int CRCDAT_11 = 11;
    sbit  CRCDAT_11_bit at CRCDAT.B11;
    const register unsigned short int CRCDAT_10 = 10;
    sbit  CRCDAT_10_bit at CRCDAT.B10;
    const register unsigned short int CRCDAT_9 = 9;
    sbit  CRCDAT_9_bit at CRCDAT.B9;
    const register unsigned short int CRCDAT_8 = 8;
    sbit  CRCDAT_8_bit at CRCDAT.B8;
    const register unsigned short int CRCDAT_7 = 7;
    sbit  CRCDAT_7_bit at CRCDAT.B7;
    const register unsigned short int CRCDAT_6 = 6;
    sbit  CRCDAT_6_bit at CRCDAT.B6;
    const register unsigned short int CRCDAT_5 = 5;
    sbit  CRCDAT_5_bit at CRCDAT.B5;
    const register unsigned short int CRCDAT_4 = 4;
    sbit  CRCDAT_4_bit at CRCDAT.B4;
    const register unsigned short int CRCDAT_3 = 3;
    sbit  CRCDAT_3_bit at CRCDAT.B3;
    const register unsigned short int CRCDAT_2 = 2;
    sbit  CRCDAT_2_bit at CRCDAT.B2;
    const register unsigned short int CRCDAT_1 = 1;
    sbit  CRCDAT_1_bit at CRCDAT.B1;
    const register unsigned short int CRCDAT_0 = 0;
    sbit  CRCDAT_0_bit at CRCDAT.B0;

    // CRCWDAT bits
    const register unsigned short int CRCWDAT_15 = 15;
    sbit  CRCWDAT_15_bit at CRCWDAT.B15;
    const register unsigned short int CRCWDAT_14 = 14;
    sbit  CRCWDAT_14_bit at CRCWDAT.B14;
    const register unsigned short int CRCWDAT_13 = 13;
    sbit  CRCWDAT_13_bit at CRCWDAT.B13;
    const register unsigned short int CRCWDAT_12 = 12;
    sbit  CRCWDAT_12_bit at CRCWDAT.B12;
    const register unsigned short int CRCWDAT_11 = 11;
    sbit  CRCWDAT_11_bit at CRCWDAT.B11;
    const register unsigned short int CRCWDAT_10 = 10;
    sbit  CRCWDAT_10_bit at CRCWDAT.B10;
    const register unsigned short int CRCWDAT_9 = 9;
    sbit  CRCWDAT_9_bit at CRCWDAT.B9;
    const register unsigned short int CRCWDAT_8 = 8;
    sbit  CRCWDAT_8_bit at CRCWDAT.B8;
    const register unsigned short int CRCWDAT_7 = 7;
    sbit  CRCWDAT_7_bit at CRCWDAT.B7;
    const register unsigned short int CRCWDAT_6 = 6;
    sbit  CRCWDAT_6_bit at CRCWDAT.B6;
    const register unsigned short int CRCWDAT_5 = 5;
    sbit  CRCWDAT_5_bit at CRCWDAT.B5;
    const register unsigned short int CRCWDAT_4 = 4;
    sbit  CRCWDAT_4_bit at CRCWDAT.B4;
    const register unsigned short int CRCWDAT_3 = 3;
    sbit  CRCWDAT_3_bit at CRCWDAT.B3;
    const register unsigned short int CRCWDAT_2 = 2;
    sbit  CRCWDAT_2_bit at CRCWDAT.B2;
    const register unsigned short int CRCWDAT_1 = 1;
    sbit  CRCWDAT_1_bit at CRCWDAT.B1;
    const register unsigned short int CRCWDAT_0 = 0;
    sbit  CRCWDAT_0_bit at CRCWDAT.B0;

    // RPINR0 bits
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
    const register unsigned short int T3CKR_4 = 12;
    sbit  T3CKR_4_bit at RPINR3.B12;
    const register unsigned short int T3CKR_3 = 11;
    sbit  T3CKR_3_bit at RPINR3.B11;
    const register unsigned short int T3CKR_2 = 10;
    sbit  T3CKR_2_bit at RPINR3.B10;
    const register unsigned short int T3CKR_1 = 9;
    sbit  T3CKR_1_bit at RPINR3.B9;
    const register unsigned short int T3CKR_0 = 8;
    sbit  T3CKR_0_bit at RPINR3.B8;
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

    // RPINR4 bits
    const register unsigned short int T5CKR_4 = 12;
    sbit  T5CKR_4_bit at RPINR4.B12;
    const register unsigned short int T5CKR_3 = 11;
    sbit  T5CKR_3_bit at RPINR4.B11;
    const register unsigned short int T5CKR_2 = 10;
    sbit  T5CKR_2_bit at RPINR4.B10;
    const register unsigned short int T5CKR_1 = 9;
    sbit  T5CKR_1_bit at RPINR4.B9;
    const register unsigned short int T5CKR_0 = 8;
    sbit  T5CKR_0_bit at RPINR4.B8;
    const register unsigned short int T4CKR_4 = 4;
    sbit  T4CKR_4_bit at RPINR4.B4;
    const register unsigned short int T4CKR_3 = 3;
    sbit  T4CKR_3_bit at RPINR4.B3;
    const register unsigned short int T4CKR_2 = 2;
    sbit  T4CKR_2_bit at RPINR4.B2;
    const register unsigned short int T4CKR_1 = 1;
    sbit  T4CKR_1_bit at RPINR4.B1;
    const register unsigned short int T4CKR_0 = 0;
    sbit  T4CKR_0_bit at RPINR4.B0;

    // RPINR7 bits
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

    // RPINR10 bits
    const register unsigned short int IC8R_4 = 12;
    sbit  IC8R_4_bit at RPINR10.B12;
    const register unsigned short int IC8R_3 = 11;
    sbit  IC8R_3_bit at RPINR10.B11;
    const register unsigned short int IC8R_2 = 10;
    sbit  IC8R_2_bit at RPINR10.B10;
    const register unsigned short int IC8R_1 = 9;
    sbit  IC8R_1_bit at RPINR10.B9;
    const register unsigned short int IC8R_0 = 8;
    sbit  IC8R_0_bit at RPINR10.B8;
    const register unsigned short int IC7R_4 = 4;
    sbit  IC7R_4_bit at RPINR10.B4;
    const register unsigned short int IC7R_3 = 3;
    sbit  IC7R_3_bit at RPINR10.B3;
    const register unsigned short int IC7R_2 = 2;
    sbit  IC7R_2_bit at RPINR10.B2;
    const register unsigned short int IC7R_1 = 1;
    sbit  IC7R_1_bit at RPINR10.B1;
    const register unsigned short int IC7R_0 = 0;
    sbit  IC7R_0_bit at RPINR10.B0;

    // RPINR11 bits
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
    const register unsigned short int U1CTSR_4 = 12;
    sbit  U1CTSR_4_bit at RPINR18.B12;
    const register unsigned short int U1CTSR_3 = 11;
    sbit  U1CTSR_3_bit at RPINR18.B11;
    const register unsigned short int U1CTSR_2 = 10;
    sbit  U1CTSR_2_bit at RPINR18.B10;
    const register unsigned short int U1CTSR_1 = 9;
    sbit  U1CTSR_1_bit at RPINR18.B9;
    const register unsigned short int U1CTSR_0 = 8;
    sbit  U1CTSR_0_bit at RPINR18.B8;
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
    const register unsigned short int U2CTSR_4 = 12;
    sbit  U2CTSR_4_bit at RPINR19.B12;
    const register unsigned short int U2CTSR_3 = 11;
    sbit  U2CTSR_3_bit at RPINR19.B11;
    const register unsigned short int U2CTSR_2 = 10;
    sbit  U2CTSR_2_bit at RPINR19.B10;
    const register unsigned short int U2CTSR_1 = 9;
    sbit  U2CTSR_1_bit at RPINR19.B9;
    const register unsigned short int U2CTSR_0 = 8;
    sbit  U2CTSR_0_bit at RPINR19.B8;
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

    // RPINR20 bits
    const register unsigned short int SCK1R_4 = 12;
    sbit  SCK1R_4_bit at RPINR20.B12;
    const register unsigned short int SCK1R_3 = 11;
    sbit  SCK1R_3_bit at RPINR20.B11;
    const register unsigned short int SCK1R_2 = 10;
    sbit  SCK1R_2_bit at RPINR20.B10;
    const register unsigned short int SCK1R_1 = 9;
    sbit  SCK1R_1_bit at RPINR20.B9;
    const register unsigned short int SCK1R_0 = 8;
    sbit  SCK1R_0_bit at RPINR20.B8;
    const register unsigned short int SDI1R_4 = 4;
    sbit  SDI1R_4_bit at RPINR20.B4;
    const register unsigned short int SDI1R_3 = 3;
    sbit  SDI1R_3_bit at RPINR20.B3;
    const register unsigned short int SDI1R_2 = 2;
    sbit  SDI1R_2_bit at RPINR20.B2;
    const register unsigned short int SDI1R_1 = 1;
    sbit  SDI1R_1_bit at RPINR20.B1;
    const register unsigned short int SDI1R_0 = 0;
    sbit  SDI1R_0_bit at RPINR20.B0;

    // RPINR21 bits
    const register unsigned short int SS1R_4 = 4;
    sbit  SS1R_4_bit at RPINR21.B4;
    const register unsigned short int SS1R_3 = 3;
    sbit  SS1R_3_bit at RPINR21.B3;
    const register unsigned short int SS1R_2 = 2;
    sbit  SS1R_2_bit at RPINR21.B2;
    const register unsigned short int SS1R_1 = 1;
    sbit  SS1R_1_bit at RPINR21.B1;
    const register unsigned short int SS1R_0 = 0;
    sbit  SS1R_0_bit at RPINR21.B0;

    // RPINR22 bits
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

    // RPOR0 bits
    const register unsigned short int RP1R_4 = 12;
    sbit  RP1R_4_bit at RPOR0.B12;
    const register unsigned short int RP1R_3 = 11;
    sbit  RP1R_3_bit at RPOR0.B11;
    const register unsigned short int RP1R_2 = 10;
    sbit  RP1R_2_bit at RPOR0.B10;
    const register unsigned short int RP1R_1 = 9;
    sbit  RP1R_1_bit at RPOR0.B9;
    const register unsigned short int RP1R_0 = 8;
    sbit  RP1R_0_bit at RPOR0.B8;
    const register unsigned short int RP0R_4 = 4;
    sbit  RP0R_4_bit at RPOR0.B4;
    const register unsigned short int RP0R_3 = 3;
    sbit  RP0R_3_bit at RPOR0.B3;
    const register unsigned short int RP0R_2 = 2;
    sbit  RP0R_2_bit at RPOR0.B2;
    const register unsigned short int RP0R_1 = 1;
    sbit  RP0R_1_bit at RPOR0.B1;
    const register unsigned short int RP0R_0 = 0;
    sbit  RP0R_0_bit at RPOR0.B0;

    // RPOR1 bits
    const register unsigned short int RP3R_4 = 12;
    sbit  RP3R_4_bit at RPOR1.B12;
    const register unsigned short int RP3R_3 = 11;
    sbit  RP3R_3_bit at RPOR1.B11;
    const register unsigned short int RP3R_2 = 10;
    sbit  RP3R_2_bit at RPOR1.B10;
    const register unsigned short int RP3R_1 = 9;
    sbit  RP3R_1_bit at RPOR1.B9;
    const register unsigned short int RP3R_0 = 8;
    sbit  RP3R_0_bit at RPOR1.B8;
    const register unsigned short int RP2R_4 = 4;
    sbit  RP2R_4_bit at RPOR1.B4;
    const register unsigned short int RP2R_3 = 3;
    sbit  RP2R_3_bit at RPOR1.B3;
    const register unsigned short int RP2R_2 = 2;
    sbit  RP2R_2_bit at RPOR1.B2;
    const register unsigned short int RP2R_1 = 1;
    sbit  RP2R_1_bit at RPOR1.B1;
    const register unsigned short int RP2R_0 = 0;
    sbit  RP2R_0_bit at RPOR1.B0;

    // RPOR2 bits
    const register unsigned short int RP5R_4 = 12;
    sbit  RP5R_4_bit at RPOR2.B12;
    const register unsigned short int RP5R_3 = 11;
    sbit  RP5R_3_bit at RPOR2.B11;
    const register unsigned short int RP5R_2 = 10;
    sbit  RP5R_2_bit at RPOR2.B10;
    const register unsigned short int RP5R_1 = 9;
    sbit  RP5R_1_bit at RPOR2.B9;
    const register unsigned short int RP5R_0 = 8;
    sbit  RP5R_0_bit at RPOR2.B8;
    const register unsigned short int RP4R_4 = 4;
    sbit  RP4R_4_bit at RPOR2.B4;
    const register unsigned short int RP4R_3 = 3;
    sbit  RP4R_3_bit at RPOR2.B3;
    const register unsigned short int RP4R_2 = 2;
    sbit  RP4R_2_bit at RPOR2.B2;
    const register unsigned short int RP4R_1 = 1;
    sbit  RP4R_1_bit at RPOR2.B1;
    const register unsigned short int RP4R_0 = 0;
    sbit  RP4R_0_bit at RPOR2.B0;

    // RPOR3 bits
    const register unsigned short int RP7R_4 = 12;
    sbit  RP7R_4_bit at RPOR3.B12;
    const register unsigned short int RP7R_3 = 11;
    sbit  RP7R_3_bit at RPOR3.B11;
    const register unsigned short int RP7R_2 = 10;
    sbit  RP7R_2_bit at RPOR3.B10;
    const register unsigned short int RP7R_1 = 9;
    sbit  RP7R_1_bit at RPOR3.B9;
    const register unsigned short int RP7R_0 = 8;
    sbit  RP7R_0_bit at RPOR3.B8;
    const register unsigned short int RP6R_4 = 4;
    sbit  RP6R_4_bit at RPOR3.B4;
    const register unsigned short int RP6R_3 = 3;
    sbit  RP6R_3_bit at RPOR3.B3;
    const register unsigned short int RP6R_2 = 2;
    sbit  RP6R_2_bit at RPOR3.B2;
    const register unsigned short int RP6R_1 = 1;
    sbit  RP6R_1_bit at RPOR3.B1;
    const register unsigned short int RP6R_0 = 0;
    sbit  RP6R_0_bit at RPOR3.B0;

    // RPOR4 bits
    const register unsigned short int RP9R_4 = 12;
    sbit  RP9R_4_bit at RPOR4.B12;
    const register unsigned short int RP9R_3 = 11;
    sbit  RP9R_3_bit at RPOR4.B11;
    const register unsigned short int RP9R_2 = 10;
    sbit  RP9R_2_bit at RPOR4.B10;
    const register unsigned short int RP9R_1 = 9;
    sbit  RP9R_1_bit at RPOR4.B9;
    const register unsigned short int RP9R_0 = 8;
    sbit  RP9R_0_bit at RPOR4.B8;
    const register unsigned short int RP8R_4 = 4;
    sbit  RP8R_4_bit at RPOR4.B4;
    const register unsigned short int RP8R_3 = 3;
    sbit  RP8R_3_bit at RPOR4.B3;
    const register unsigned short int RP8R_2 = 2;
    sbit  RP8R_2_bit at RPOR4.B2;
    const register unsigned short int RP8R_1 = 1;
    sbit  RP8R_1_bit at RPOR4.B1;
    const register unsigned short int RP8R_0 = 0;
    sbit  RP8R_0_bit at RPOR4.B0;

    // RPOR5 bits
    const register unsigned short int RP11R_4 = 12;
    sbit  RP11R_4_bit at RPOR5.B12;
    const register unsigned short int RP11R_3 = 11;
    sbit  RP11R_3_bit at RPOR5.B11;
    const register unsigned short int RP11R_2 = 10;
    sbit  RP11R_2_bit at RPOR5.B10;
    const register unsigned short int RP11R_1 = 9;
    sbit  RP11R_1_bit at RPOR5.B9;
    const register unsigned short int RP11R_0 = 8;
    sbit  RP11R_0_bit at RPOR5.B8;
    const register unsigned short int RP10R_4 = 4;
    sbit  RP10R_4_bit at RPOR5.B4;
    const register unsigned short int RP10R_3 = 3;
    sbit  RP10R_3_bit at RPOR5.B3;
    const register unsigned short int RP10R_2 = 2;
    sbit  RP10R_2_bit at RPOR5.B2;
    const register unsigned short int RP10R_1 = 1;
    sbit  RP10R_1_bit at RPOR5.B1;
    const register unsigned short int RP10R_0 = 0;
    sbit  RP10R_0_bit at RPOR5.B0;

    // RPOR6 bits
    const register unsigned short int RP13R_4 = 12;
    sbit  RP13R_4_bit at RPOR6.B12;
    const register unsigned short int RP13R_3 = 11;
    sbit  RP13R_3_bit at RPOR6.B11;
    const register unsigned short int RP13R_2 = 10;
    sbit  RP13R_2_bit at RPOR6.B10;
    const register unsigned short int RP13R_1 = 9;
    sbit  RP13R_1_bit at RPOR6.B9;
    const register unsigned short int RP13R_0 = 8;
    sbit  RP13R_0_bit at RPOR6.B8;
    const register unsigned short int RP12R_4 = 4;
    sbit  RP12R_4_bit at RPOR6.B4;
    const register unsigned short int RP12R_3 = 3;
    sbit  RP12R_3_bit at RPOR6.B3;
    const register unsigned short int RP12R_2 = 2;
    sbit  RP12R_2_bit at RPOR6.B2;
    const register unsigned short int RP12R_1 = 1;
    sbit  RP12R_1_bit at RPOR6.B1;
    const register unsigned short int RP12R_0 = 0;
    sbit  RP12R_0_bit at RPOR6.B0;

    // RPOR7 bits
    const register unsigned short int RP15R_4 = 12;
    sbit  RP15R_4_bit at RPOR7.B12;
    const register unsigned short int RP15R_3 = 11;
    sbit  RP15R_3_bit at RPOR7.B11;
    const register unsigned short int RP15R_2 = 10;
    sbit  RP15R_2_bit at RPOR7.B10;
    const register unsigned short int RP15R_1 = 9;
    sbit  RP15R_1_bit at RPOR7.B9;
    const register unsigned short int RP15R_0 = 8;
    sbit  RP15R_0_bit at RPOR7.B8;
    const register unsigned short int RP14R_4 = 4;
    sbit  RP14R_4_bit at RPOR7.B4;
    const register unsigned short int RP14R_3 = 3;
    sbit  RP14R_3_bit at RPOR7.B3;
    const register unsigned short int RP14R_2 = 2;
    sbit  RP14R_2_bit at RPOR7.B2;
    const register unsigned short int RP14R_1 = 1;
    sbit  RP14R_1_bit at RPOR7.B1;
    const register unsigned short int RP14R_0 = 0;
    sbit  RP14R_0_bit at RPOR7.B0;

    // RPOR8 bits
    const register unsigned short int RP17R_4 = 12;
    sbit  RP17R_4_bit at RPOR8.B12;
    const register unsigned short int RP17R_3 = 11;
    sbit  RP17R_3_bit at RPOR8.B11;
    const register unsigned short int RP17R_2 = 10;
    sbit  RP17R_2_bit at RPOR8.B10;
    const register unsigned short int RP17R_1 = 9;
    sbit  RP17R_1_bit at RPOR8.B9;
    const register unsigned short int RP17R_0 = 8;
    sbit  RP17R_0_bit at RPOR8.B8;
    const register unsigned short int RP16R_4 = 4;
    sbit  RP16R_4_bit at RPOR8.B4;
    const register unsigned short int RP16R_3 = 3;
    sbit  RP16R_3_bit at RPOR8.B3;
    const register unsigned short int RP16R_2 = 2;
    sbit  RP16R_2_bit at RPOR8.B2;
    const register unsigned short int RP16R_1 = 1;
    sbit  RP16R_1_bit at RPOR8.B1;
    const register unsigned short int RP16R_0 = 0;
    sbit  RP16R_0_bit at RPOR8.B0;

    // RPOR9 bits
    const register unsigned short int RP19R_4 = 12;
    sbit  RP19R_4_bit at RPOR9.B12;
    const register unsigned short int RP19R_3 = 11;
    sbit  RP19R_3_bit at RPOR9.B11;
    const register unsigned short int RP19R_2 = 10;
    sbit  RP19R_2_bit at RPOR9.B10;
    const register unsigned short int RP19R_1 = 9;
    sbit  RP19R_1_bit at RPOR9.B9;
    const register unsigned short int RP19R_0 = 8;
    sbit  RP19R_0_bit at RPOR9.B8;
    const register unsigned short int RP18R_4 = 4;
    sbit  RP18R_4_bit at RPOR9.B4;
    const register unsigned short int RP18R_3 = 3;
    sbit  RP18R_3_bit at RPOR9.B3;
    const register unsigned short int RP18R_2 = 2;
    sbit  RP18R_2_bit at RPOR9.B2;
    const register unsigned short int RP18R_1 = 1;
    sbit  RP18R_1_bit at RPOR9.B1;
    const register unsigned short int RP18R_0 = 0;
    sbit  RP18R_0_bit at RPOR9.B0;

    // RPOR10 bits
    const register unsigned short int RP21R_4 = 12;
    sbit  RP21R_4_bit at RPOR10.B12;
    const register unsigned short int RP21R_3 = 11;
    sbit  RP21R_3_bit at RPOR10.B11;
    const register unsigned short int RP21R_2 = 10;
    sbit  RP21R_2_bit at RPOR10.B10;
    const register unsigned short int RP21R_1 = 9;
    sbit  RP21R_1_bit at RPOR10.B9;
    const register unsigned short int RP21R_0 = 8;
    sbit  RP21R_0_bit at RPOR10.B8;
    const register unsigned short int RP20R_4 = 4;
    sbit  RP20R_4_bit at RPOR10.B4;
    const register unsigned short int RP20R_3 = 3;
    sbit  RP20R_3_bit at RPOR10.B3;
    const register unsigned short int RP20R_2 = 2;
    sbit  RP20R_2_bit at RPOR10.B2;
    const register unsigned short int RP20R_1 = 1;
    sbit  RP20R_1_bit at RPOR10.B1;
    const register unsigned short int RP20R_0 = 0;
    sbit  RP20R_0_bit at RPOR10.B0;

    // RPOR11 bits
    const register unsigned short int RP23R_4 = 12;
    sbit  RP23R_4_bit at RPOR11.B12;
    const register unsigned short int RP23R_3 = 11;
    sbit  RP23R_3_bit at RPOR11.B11;
    const register unsigned short int RP23R_2 = 10;
    sbit  RP23R_2_bit at RPOR11.B10;
    const register unsigned short int RP23R_1 = 9;
    sbit  RP23R_1_bit at RPOR11.B9;
    const register unsigned short int RP23R_0 = 8;
    sbit  RP23R_0_bit at RPOR11.B8;
    const register unsigned short int RP22R_4 = 4;
    sbit  RP22R_4_bit at RPOR11.B4;
    const register unsigned short int RP22R_3 = 3;
    sbit  RP22R_3_bit at RPOR11.B3;
    const register unsigned short int RP22R_2 = 2;
    sbit  RP22R_2_bit at RPOR11.B2;
    const register unsigned short int RP22R_1 = 1;
    sbit  RP22R_1_bit at RPOR11.B1;
    const register unsigned short int RP22R_0 = 0;
    sbit  RP22R_0_bit at RPOR11.B0;

    // RPOR12 bits
    const register unsigned short int RP25R_4 = 12;
    sbit  RP25R_4_bit at RPOR12.B12;
    const register unsigned short int RP25R_3 = 11;
    sbit  RP25R_3_bit at RPOR12.B11;
    const register unsigned short int RP25R_2 = 10;
    sbit  RP25R_2_bit at RPOR12.B10;
    const register unsigned short int RP25R_1 = 9;
    sbit  RP25R_1_bit at RPOR12.B9;
    const register unsigned short int RP25R_0 = 8;
    sbit  RP25R_0_bit at RPOR12.B8;
    const register unsigned short int RP24R_4 = 4;
    sbit  RP24R_4_bit at RPOR12.B4;
    const register unsigned short int RP24R_3 = 3;
    sbit  RP24R_3_bit at RPOR12.B3;
    const register unsigned short int RP24R_2 = 2;
    sbit  RP24R_2_bit at RPOR12.B2;
    const register unsigned short int RP24R_1 = 1;
    sbit  RP24R_1_bit at RPOR12.B1;
    const register unsigned short int RP24R_0 = 0;
    sbit  RP24R_0_bit at RPOR12.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
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
    const register unsigned short int COSCG_2 = 14;
    sbit  COSCG_2_bit at OSCCON.B14;
    const register unsigned short int COSCG_1 = 13;
    sbit  COSCG_1_bit at OSCCON.B13;
    const register unsigned short int COSCG_0 = 12;
    sbit  COSCG_0_bit at OSCCON.B12;
    const register unsigned short int NOSCG_2 = 10;
    sbit  NOSCG_2_bit at OSCCON.B10;
    const register unsigned short int NOSCG_1 = 9;
    sbit  NOSCG_1_bit at OSCCON.B9;
    const register unsigned short int NOSCG_0 = 8;
    sbit  NOSCG_0_bit at OSCCON.B8;
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON.B7;
    const register unsigned short int IOLOCK = 6;
    sbit  IOLOCK_bit at OSCCON.B6;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int LPOSCEN = 1;
    sbit  LPOSCEN_bit at OSCCON.B1;
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
    const register unsigned short int ERASE_ = 6;
    sbit  ERASE_bit at NVMCON.B6;
    const register unsigned short int NVMOP_3 = 3;
    sbit  NVMOP_3_bit at NVMCON.B3;
    const register unsigned short int NVMOP_2 = 2;
    sbit  NVMOP_2_bit at NVMCON.B2;
    const register unsigned short int NVMOP_1 = 1;
    sbit  NVMOP_1_bit at NVMCON.B1;
    const register unsigned short int NVMOP_0 = 0;
    sbit  NVMOP_0_bit at NVMCON.B0;

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
    const register unsigned short int C1MD = 1;
    sbit  C1MD_bit at PMD1.B1;
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC8MD = 15;
    sbit  IC8MD_bit at PMD2.B15;
    const register unsigned short int IC7MD = 14;
    sbit  IC7MD_bit at PMD2.B14;
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
    const register unsigned short int RTCCMD = 9;
    sbit  RTCCMD_bit at PMD3.B9;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;

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
      unsigned :2;
      unsigned PSV:1;
      unsigned IPL3:1;
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x044;

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
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x060;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned CN16IE:1;
      unsigned CN17IE:1;
      unsigned CN18IE:1;
      unsigned CN19IE:1;
      unsigned CN20IE:1;
      unsigned CN21IE:1;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
      unsigned CN24IE:1;
      unsigned CN25IE:1;
      unsigned CN26IE:1;
      unsigned CN27IE:1;
      unsigned CN28IE:1;
      unsigned CN29IE:1;
      unsigned CN30IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x062;

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
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x068;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned CN16PUE:1;
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
      unsigned CN19PUE:1;
      unsigned CN20PUE:1;
      unsigned CN21PUE:1;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
      unsigned CN24PUE:1;
      unsigned CN25PUE:1;
      unsigned CN26PUE:1;
      unsigned CN27PUE:1;
      unsigned CN28PUE:1;
      unsigned CN29PUE:1;
      unsigned CN30PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x06A;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned DMACERR:1;
      unsigned DIV0ERR:1;
      unsigned :8;
      unsigned NSTDIS:1;
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x080;

// backward compatibility for INTCON2BITS
    typedef struct tagINTCON2BITS {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned :11;
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
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      union {
        struct {
          unsigned SI2C1IF:1;
          unsigned MI2C1IF:1;
          unsigned CMIF:1;
          unsigned CNIF:1;
          unsigned INT1IF:1;
          unsigned :1;
          unsigned IC7IF:1;
          unsigned IC8IF:1;
          unsigned DMA2IF:1;
          unsigned OC3IF:1;
          unsigned OC4IF:1;
          unsigned T4IF:1;
          unsigned T5IF:1;
          unsigned INT2IF:1;
          unsigned U2RXIF:1;
          unsigned U2TXIF:1;
        };
        struct {
          unsigned SI2CIF:1;
        };
      };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned SPI2EIF:1;
      unsigned SPI2IF:1;
      unsigned C1RXIF:1;
      unsigned C1IF:1;
      unsigned DMA3IF:1;
      unsigned :8;
      unsigned PMPIF:1;
      unsigned DMA4IF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :13;
      unsigned DMA5IF:1;
      unsigned RTCIF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1EIF:1;
      unsigned U2EIF:1;
      unsigned CRCIF:1;
      unsigned DMA6IF:1;
      unsigned DMA7IF:1;
      unsigned C1TXIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

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
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      union {
        struct {
          unsigned SI2C1IE:1;
          unsigned MI2C1IE:1;
          unsigned CMIE:1;
          unsigned CNIE:1;
          unsigned INT1IE:1;
          unsigned :1;
          unsigned IC7IE:1;
          unsigned IC8IE:1;
          unsigned DMA2IE:1;
          unsigned OC3IE:1;
          unsigned OC4IE:1;
          unsigned T4IE:1;
          unsigned T5IE:1;
          unsigned INT2IE:1;
          unsigned U2RXIE:1;
          unsigned U2TXIE:1;
        };
        struct {
          unsigned SI2CIE:1;
        };
      };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned SPI2EIE:1;
      unsigned SPI2IE:1;
      unsigned C1RXIE:1;
      unsigned C1IE:1;
      unsigned DMA3IE:1;
      unsigned :8;
      unsigned PMPIE:1;
      unsigned DMA4IE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :13;
      unsigned DMA5IE:1;
      unsigned RTCIE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1EIE:1;
      unsigned U2EIE:1;
      unsigned CRCIE:1;
      unsigned DMA6IE:1;
      unsigned DMA7IE:1;
      unsigned C1TXIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0x0A4;

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
sfr volatile typeIPC1BITS IPC1bits absolute 0x0A6;

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
sfr volatile typeIPC2BITS IPC2bits absolute 0x0A8;

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
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x0AA;

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
sfr volatile typeIPC4BITS IPC4bits absolute 0x0AC;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned INT1IP:3;
          unsigned :5;
          unsigned IC7IP:3;
          unsigned :1;
          unsigned IC8IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
          unsigned :5;
          unsigned IC7IP0:1;
          unsigned IC7IP1:1;
          unsigned IC7IP2:1;
          unsigned :1;
          unsigned IC8IP0:1;
          unsigned IC8IP1:1;
          unsigned IC8IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x0AE;

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
sfr volatile typeIPC6BITS IPC6bits absolute 0x0B0;

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
sfr volatile typeIPC7BITS IPC7bits absolute 0x0B2;

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
sfr volatile typeIPC8BITS IPC8bits absolute 0x0B4;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned DMA3IP:3;
        };
        struct {
          unsigned DMA3IP0:1;
          unsigned DMA3IP1:1;
          unsigned DMA3IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

// backward compatibility for IPC11BITS
    typedef struct tagIPC11BITS {
      union {
        struct {
          unsigned :4;
          unsigned PMPIP:3;
          unsigned :1;
          unsigned DMA4IP:3;
        };
        struct {
          unsigned :4;
          unsigned PMPIP0:1;
          unsigned PMPIP1:1;
          unsigned PMPIP2:1;
          unsigned :1;
          unsigned DMA4IP0:1;
          unsigned DMA4IP1:1;
          unsigned DMA4IP2:1;
        };
      };
} typeIPC11BITS;
sfr volatile typeIPC11BITS IPC11bits absolute 0x0BA;

// backward compatibility for IPC15BITS
    typedef struct tagIPC15BITS {
      union {
        struct {
          unsigned :4;
          unsigned DMA5IP:3;
          unsigned :1;
          unsigned RTCIP:3;
        };
        struct {
          unsigned :4;
          unsigned DMA5IP0:1;
          unsigned DMA5IP1:1;
          unsigned DMA5IP2:1;
          unsigned :1;
          unsigned RTCIP0:1;
          unsigned RTCIP1:1;
          unsigned RTCIP2:1;
        };
      };
} typeIPC15BITS;
sfr volatile typeIPC15BITS IPC15bits absolute 0x0C2;

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
sfr volatile typeIPC16BITS IPC16bits absolute 0x0C4;

// backward compatibility for IPC17BITS
    typedef struct tagIPC17BITS {
      union {
        struct {
          unsigned DMA6IP:3;
          unsigned :1;
          unsigned DMA7IP:3;
          unsigned :1;
          unsigned C1TXIP:3;
        };
        struct {
          unsigned DMA6IP0:1;
          unsigned DMA6IP1:1;
          unsigned DMA6IP2:1;
          unsigned :1;
          unsigned DMA7IP0:1;
          unsigned DMA7IP1:1;
          unsigned DMA7IP2:1;
          unsigned :1;
          unsigned C1TXIP0:1;
          unsigned C1TXIP1:1;
          unsigned C1TXIP2:1;
        };
      };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0x0C6;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:7;
          unsigned :1;
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
          unsigned :1;
          unsigned ILR0:1;
          unsigned ILR1:1;
          unsigned ILR2:1;
          unsigned ILR3:1;
        };
      };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x0E0;

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
sfr volatile typeIC IC7 absolute 0x158;
sfr volatile typeIC IC8 absolute 0x15C;

// backward compatibility for IC1CONBITS
    typedef struct tagIC1CONBITS {
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

// backward compatibility for I2CSTATBITS
    typedef struct tagI2CSTATBITS {
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
} typeI2CSTATBITS;
sfr volatile typeI2CSTATBITS I2CSTATbits absolute 0x208;

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
          unsigned :5;
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
        };
      };
} typeU1STABITS;
sfr volatile typeU1STABITS U1STAbits absolute 0x222;

// backward compatibility for U1TXREGBITS
    typedef struct tagU1TXREGBITS {
      unsigned UTXREG0:1;
      unsigned UTXREG1:1;
      unsigned UTXREG2:1;
      unsigned UTXREG3:1;
      unsigned UTXREG4:1;
      unsigned UTXREG5:1;
      unsigned UTXREG6:1;
      unsigned UTXREG7:1;
      unsigned UTXREG8:1;
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x224;

// backward compatibility for U1RXREGBITS
    typedef struct tagU1RXREGBITS {
      unsigned URXREG0:1;
      unsigned URXREG1:1;
      unsigned URXREG2:1;
      unsigned URXREG3:1;
      unsigned URXREG4:1;
      unsigned URXREG5:1;
      unsigned URXREG6:1;
      unsigned URXREG7:1;
      unsigned URXREG8:1;
} typeU1RXREGBITS;
sfr volatile typeU1RXREGBITS U1RXREGbits absolute 0x226;

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
          unsigned :5;
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
        };
      };
} typeU2STABITS;
sfr volatile typeU2STABITS U2STAbits absolute 0x232;

// backward compatibility for U2TXREGBITS
    typedef struct tagU2TXREGBITS {
      unsigned UTXREG0:1;
      unsigned UTXREG1:1;
      unsigned UTXREG2:1;
      unsigned UTXREG3:1;
      unsigned UTXREG4:1;
      unsigned UTXREG5:1;
      unsigned UTXREG6:1;
      unsigned UTXREG7:1;
      unsigned UTXREG8:1;
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x234;

// backward compatibility for U2RXREGBITS
    typedef struct tagU2RXREGBITS {
      unsigned URXREG0:1;
      unsigned URXREG1:1;
      unsigned URXREG2:1;
      unsigned URXREG3:1;
      unsigned URXREG4:1;
      unsigned URXREG5:1;
      unsigned URXREG6:1;
      unsigned URXREG7:1;
      unsigned URXREG8:1;
} typeU2RXREGBITS;
sfr volatile typeU2RXREGBITS U2RXREGbits absolute 0x236;

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
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
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
      unsigned :1;
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
          unsigned :4;
          unsigned SPIROV:1;
          unsigned :1;
          unsigned BUFELM:3;
          unsigned :2;
          unsigned SPISIDL:1;
          unsigned :1;
          unsigned SPIEN:1;
        };
        struct {
          unsigned :8;
          unsigned BUFELM0:1;
          unsigned BUFELM1:1;
          unsigned BUFELM2:1;
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
      unsigned :1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
      unsigned :2;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x2C0;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
      unsigned :2;
      unsigned RA7:1;
      unsigned RA8:1;
      unsigned RA9:1;
      unsigned RA10:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x2C2;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
      unsigned :2;
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x2C4;

// backward compatibility for ODCABITS
    typedef struct tagODCABITS {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned ODCA2:1;
      unsigned ODCA3:1;
      unsigned ODCA4:1;
      unsigned :2;
      unsigned ODCA7:1;
      unsigned ODCA8:1;
      unsigned ODCA9:1;
      unsigned ODCA10:1;
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x2C6;

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
sfr volatile typeTRISBBITS TRISBbits absolute 0x2C8;

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
sfr volatile typePORTBBITS PORTBbits absolute 0x2CA;

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
sfr volatile typeLATBBITS LATBbits absolute 0x2CC;

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
sfr volatile typeODCBBITS ODCBbits absolute 0x2CE;

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
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2D0;

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
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2D2;

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
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D4;

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
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x2D6;

// backward compatibility for PADCFG1BITS
    typedef struct tagPADCFG1BITS {
      unsigned PMPTTL:1;
      unsigned RTSECSEL:1;
} typePADCFG1BITS;
sfr volatile typePADCFG1BITS PADCFG1bits absolute 0x2FC;

// backward compatibility for AD1CON1BITS
    typedef struct tagAD1CON1BITS {
      union {
        struct {
          unsigned DONE:1;
          unsigned SAMP:1;
          unsigned ASAM:1;
          unsigned SIMSAM:1;
          unsigned :1;
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
          unsigned SMPI:4;
          unsigned :1;
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
          unsigned :2;
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

// backward compatibility for AD1PCFGLBITS
    typedef struct tagAD1PCFGLBITS {
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
} typeAD1PCFGLBITS;
sfr volatile typeAD1PCFGLBITS AD1PCFGLbits absolute 0x32C;

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
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x32C;

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
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x330;

// backward compatibility for AD1CON4BITS
    typedef struct tagAD1CON4BITS {
      union {
        struct {
          unsigned DMABL:3;
        };
        struct {
          unsigned DMABL0:1;
          unsigned DMABL1:1;
          unsigned DMABL2:1;
        };
      };
} typeAD1CON4BITS;
sfr volatile typeAD1CON4BITS AD1CON4bits absolute 0x332;

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
sfr volatile typeDMA0CONBITS DMA0CONbits absolute 0x380;

// backward compatibility for DMA0REQBITS
    typedef struct tagDMA0REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA0REQBITS;
sfr volatile typeDMA0REQBITS DMA0REQbits absolute 0x382;

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
sfr volatile typeDMA1CONBITS DMA1CONbits absolute 0x38C;

// backward compatibility for DMA1REQBITS
    typedef struct tagDMA1REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA1REQBITS;
sfr volatile typeDMA1REQBITS DMA1REQbits absolute 0x38E;

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
sfr volatile typeDMA2CONBITS DMA2CONbits absolute 0x398;

// backward compatibility for DMA2REQBITS
    typedef struct tagDMA2REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA2REQBITS;
sfr volatile typeDMA2REQBITS DMA2REQbits absolute 0x39A;

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
sfr volatile typeDMA3CONBITS DMA3CONbits absolute 0x3A4;

// backward compatibility for DMA3REQBITS
    typedef struct tagDMA3REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA3REQBITS;
sfr volatile typeDMA3REQBITS DMA3REQbits absolute 0x3A6;

// backward compatibility for DMA4CONBITS
    typedef struct tagDMA4CONBITS {
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
} typeDMA4CONBITS;
sfr volatile typeDMA4CONBITS DMA4CONbits absolute 0x3B0;

// backward compatibility for DMA4REQBITS
    typedef struct tagDMA4REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA4REQBITS;
sfr volatile typeDMA4REQBITS DMA4REQbits absolute 0x3B2;

// backward compatibility for DMA5CONBITS
    typedef struct tagDMA5CONBITS {
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
} typeDMA5CONBITS;
sfr volatile typeDMA5CONBITS DMA5CONbits absolute 0x3BC;

// backward compatibility for DMA5REQBITS
    typedef struct tagDMA5REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA5REQBITS;
sfr volatile typeDMA5REQBITS DMA5REQbits absolute 0x3BE;

// backward compatibility for DMA6CONBITS
    typedef struct tagDMA6CONBITS {
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
} typeDMA6CONBITS;
sfr volatile typeDMA6CONBITS DMA6CONbits absolute 0x3C8;

// backward compatibility for DMA6REQBITS
    typedef struct tagDMA6REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA6REQBITS;
sfr volatile typeDMA6REQBITS DMA6REQbits absolute 0x3CA;

// backward compatibility for DMA7CONBITS
    typedef struct tagDMA7CONBITS {
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
} typeDMA7CONBITS;
sfr volatile typeDMA7CONBITS DMA7CONbits absolute 0x3D4;

// backward compatibility for DMA7REQBITS
    typedef struct tagDMA7REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
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
        };
      };
} typeDMA7REQBITS;
sfr volatile typeDMA7REQBITS DMA7REQbits absolute 0x3D6;

// backward compatibility for DMACS0BITS
    typedef struct tagDMACS0BITS {
      union {
        struct {
          unsigned XWCOL:8;
          unsigned PWCOL:8;
        };
        struct {
          unsigned XWCOL0:1;
          unsigned XWCOL1:1;
          unsigned XWCOL2:1;
          unsigned XWCOL3:1;
          unsigned XWCOL4:1;
          unsigned XWCOL5:1;
          unsigned XWCOL6:1;
          unsigned XWCOL7:1;
          unsigned PWCOL0:1;
          unsigned PWCOL1:1;
          unsigned PWCOL2:1;
          unsigned PWCOL3:1;
          unsigned PWCOL4:1;
          unsigned PWCOL5:1;
          unsigned PWCOL6:1;
          unsigned PWCOL7:1;
        };
      };
} typeDMACS0BITS;
sfr volatile typeDMACS0BITS DMACS0bits absolute 0x3E0;

// backward compatibility for DMACS1BITS
    typedef struct tagDMACS1BITS {
      union {
        struct {
          unsigned PPST0:1;
          unsigned PPST1:1;
          unsigned PPST2:1;
          unsigned PPST3:1;
          unsigned PPST4:1;
          unsigned PPST5:1;
          unsigned PPST6:1;
          unsigned PPST7:1;
          unsigned LSTCH:4;
        };
        struct {
          unsigned PPST:8;
          unsigned LSTCH0:1;
          unsigned LSTCH1:1;
          unsigned LSTCH2:1;
          unsigned LSTCH3:1;
        };
      };
} typeDMACS1BITS;
sfr volatile typeDMACS1BITS DMACS1bits absolute 0x3E2;

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
      union {
        struct {
          unsigned RERRCNT:8;
          unsigned TERRCNT:8;
        };
        struct {
          unsigned RERRCNT0:1;
          unsigned RERRCNT1:1;
          unsigned RERRCNT2:1;
          unsigned RERRCNT3:1;
          unsigned RERRCNT4:1;
          unsigned RERRCNT5:1;
          unsigned RERRCNT6:1;
          unsigned RERRCNT7:1;
          unsigned TERRCNT0:1;
          unsigned TERRCNT1:1;
          unsigned TERRCNT2:1;
          unsigned TERRCNT3:1;
          unsigned TERRCNT4:1;
          unsigned TERRCNT5:1;
          unsigned TERRCNT6:1;
          unsigned TERRCNT7:1;
        };
      };
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
      union {
        struct {
          unsigned FLTEN:16;
        };
        struct {
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
        };
      };
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
          unsigned :5;
          unsigned SID:11;
        };
      };
} typeC1RXF0SIDBITS;
sfr volatile typeC1RXF0SIDBITS C1RXF0SIDbits absolute 0x440;

// backward compatibility for C1RXF0EIDBITS
    typedef struct tagC1RXF0EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF0EIDBITS;
sfr volatile typeC1RXF0EIDBITS C1RXF0EIDbits absolute 0x442;

// backward compatibility for C1RXF1SIDBITS
    typedef struct tagC1RXF1SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF1SIDBITS;
sfr volatile typeC1RXF1SIDBITS C1RXF1SIDbits absolute 0x444;

// backward compatibility for C1RXF1EIDBITS
    typedef struct tagC1RXF1EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF1EIDBITS;
sfr volatile typeC1RXF1EIDBITS C1RXF1EIDbits absolute 0x446;

// backward compatibility for C1RXF2SIDBITS
    typedef struct tagC1RXF2SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF2SIDBITS;
sfr volatile typeC1RXF2SIDBITS C1RXF2SIDbits absolute 0x448;

// backward compatibility for C1RXF2EIDBITS
    typedef struct tagC1RXF2EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF2EIDBITS;
sfr volatile typeC1RXF2EIDBITS C1RXF2EIDbits absolute 0x44A;

// backward compatibility for C1RXF3SIDBITS
    typedef struct tagC1RXF3SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF3SIDBITS;
sfr volatile typeC1RXF3SIDBITS C1RXF3SIDbits absolute 0x44C;

// backward compatibility for C1RXF3EIDBITS
    typedef struct tagC1RXF3EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF3EIDBITS;
sfr volatile typeC1RXF3EIDBITS C1RXF3EIDbits absolute 0x44E;

// backward compatibility for C1RXF4SIDBITS
    typedef struct tagC1RXF4SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF4SIDBITS;
sfr volatile typeC1RXF4SIDBITS C1RXF4SIDbits absolute 0x450;

// backward compatibility for C1RXF4EIDBITS
    typedef struct tagC1RXF4EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF4EIDBITS;
sfr volatile typeC1RXF4EIDBITS C1RXF4EIDbits absolute 0x452;

// backward compatibility for C1RXF5SIDBITS
    typedef struct tagC1RXF5SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF5SIDBITS;
sfr volatile typeC1RXF5SIDBITS C1RXF5SIDbits absolute 0x454;

// backward compatibility for C1RXF5EIDBITS
    typedef struct tagC1RXF5EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF5EIDBITS;
sfr volatile typeC1RXF5EIDBITS C1RXF5EIDbits absolute 0x456;

// backward compatibility for C1RXF6SIDBITS
    typedef struct tagC1RXF6SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF6SIDBITS;
sfr volatile typeC1RXF6SIDBITS C1RXF6SIDbits absolute 0x458;

// backward compatibility for C1RXF6EIDBITS
    typedef struct tagC1RXF6EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF6EIDBITS;
sfr volatile typeC1RXF6EIDBITS C1RXF6EIDbits absolute 0x45A;

// backward compatibility for C1RXF7SIDBITS
    typedef struct tagC1RXF7SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF7SIDBITS;
sfr volatile typeC1RXF7SIDBITS C1RXF7SIDbits absolute 0x45C;

// backward compatibility for C1RXF7EIDBITS
    typedef struct tagC1RXF7EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF7EIDBITS;
sfr volatile typeC1RXF7EIDBITS C1RXF7EIDbits absolute 0x45E;

// backward compatibility for C1RXF8SIDBITS
    typedef struct tagC1RXF8SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF8SIDBITS;
sfr volatile typeC1RXF8SIDBITS C1RXF8SIDbits absolute 0x460;

// backward compatibility for C1RXF8EIDBITS
    typedef struct tagC1RXF8EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF8EIDBITS;
sfr volatile typeC1RXF8EIDBITS C1RXF8EIDbits absolute 0x462;

// backward compatibility for C1RXF9SIDBITS
    typedef struct tagC1RXF9SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF9SIDBITS;
sfr volatile typeC1RXF9SIDBITS C1RXF9SIDbits absolute 0x464;

// backward compatibility for C1RXF9EIDBITS
    typedef struct tagC1RXF9EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF9EIDBITS;
sfr volatile typeC1RXF9EIDBITS C1RXF9EIDbits absolute 0x466;

// backward compatibility for C1RXF10SIDBITS
    typedef struct tagC1RXF10SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF10SIDBITS;
sfr volatile typeC1RXF10SIDBITS C1RXF10SIDbits absolute 0x468;

// backward compatibility for C1RXF10EIDBITS
    typedef struct tagC1RXF10EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF10EIDBITS;
sfr volatile typeC1RXF10EIDBITS C1RXF10EIDbits absolute 0x46A;

// backward compatibility for C1RXF11SIDBITS
    typedef struct tagC1RXF11SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF11SIDBITS;
sfr volatile typeC1RXF11SIDBITS C1RXF11SIDbits absolute 0x46C;

// backward compatibility for C1RXF11EIDBITS
    typedef struct tagC1RXF11EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF11EIDBITS;
sfr volatile typeC1RXF11EIDBITS C1RXF11EIDbits absolute 0x46E;

// backward compatibility for C1RXF12SIDBITS
    typedef struct tagC1RXF12SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF12SIDBITS;
sfr volatile typeC1RXF12SIDBITS C1RXF12SIDbits absolute 0x470;

// backward compatibility for C1RXF12EIDBITS
    typedef struct tagC1RXF12EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF12EIDBITS;
sfr volatile typeC1RXF12EIDBITS C1RXF12EIDbits absolute 0x472;

// backward compatibility for C1RXF13SIDBITS
    typedef struct tagC1RXF13SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF13SIDBITS;
sfr volatile typeC1RXF13SIDBITS C1RXF13SIDbits absolute 0x474;

// backward compatibility for C1RXF13EIDBITS
    typedef struct tagC1RXF13EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF13EIDBITS;
sfr volatile typeC1RXF13EIDBITS C1RXF13EIDbits absolute 0x476;

// backward compatibility for C1RXF14SIDBITS
    typedef struct tagC1RXF14SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF14SIDBITS;
sfr volatile typeC1RXF14SIDBITS C1RXF14SIDbits absolute 0x478;

// backward compatibility for C1RXF14EIDBITS
    typedef struct tagC1RXF14EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF14EIDBITS;
sfr volatile typeC1RXF14EIDBITS C1RXF14EIDbits absolute 0x47A;

// backward compatibility for C1RXF15SIDBITS
    typedef struct tagC1RXF15SIDBITS {
      union {
        struct {
          unsigned EID:2;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID:11;
        };
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :3;
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
      };
} typeC1RXF15SIDBITS;
sfr volatile typeC1RXF15SIDBITS C1RXF15SIDbits absolute 0x47C;

// backward compatibility for C1RXF15EIDBITS
    typedef struct tagC1RXF15EIDBITS {
      union {
        struct {
          unsigned EID:16;
        };
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
      };
} typeC1RXF15EIDBITS;
sfr volatile typeC1RXF15EIDBITS C1RXF15EIDbits absolute 0x47E;

// backward compatibility for PMCONBITS
    typedef struct tagPMCONBITS {
      union {
        struct {
          unsigned RDSP:1;
          unsigned WRSP:1;
          unsigned BEP:1;
          unsigned CS1P:1;
          unsigned :1;
          unsigned ALP:1;
          unsigned CSF:2;
          unsigned PTRDEN:1;
          unsigned PTWREN:1;
          unsigned PTBEEN:1;
          unsigned ADRMUX:2;
          unsigned PSIDL:1;
          unsigned :1;
          unsigned PMPEN:1;
        };
        struct {
          unsigned :6;
          unsigned CSF0:1;
          unsigned CSF1:1;
          unsigned :3;
          unsigned ADRMUX0:1;
          unsigned ADRMUX1:1;
        };
      };
} typePMCONBITS;
sfr volatile typePMCONBITS PMCONbits absolute 0x600;

// backward compatibility for PMMODEBITS
    typedef struct tagPMMODEBITS {
      union {
        struct {
          unsigned WAITE:2;
          unsigned WAITM:4;
          unsigned WAITB:2;
          unsigned MODE:2;
          unsigned MODE16:1;
          unsigned INCM:2;
          unsigned IRQM:2;
          unsigned BUSY:1;
        };
        struct {
          unsigned WAITE0:1;
          unsigned WAITE1:1;
          unsigned WAITM0:1;
          unsigned WAITM1:1;
          unsigned WAITM2:1;
          unsigned WAITM3:1;
          unsigned WAITB0:1;
          unsigned WAITB1:1;
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :1;
          unsigned INCM0:1;
          unsigned INCM1:1;
          unsigned IRQM0:1;
          unsigned IRQM1:1;
        };
      };
} typePMMODEBITS;
sfr volatile typePMMODEBITS PMMODEbits absolute 0x602;

// backward compatibility for PMADDRBITS
    typedef struct tagPMADDRBITS {
      union {
        struct {
          unsigned ADDR:14;
          unsigned CS1:1;
          unsigned ADDR15:1;
        };
        struct {
          unsigned ADDR0:1;
          unsigned ADDR1:1;
          unsigned ADDR2:1;
          unsigned ADDR3:1;
          unsigned ADDR4:1;
          unsigned ADDR5:1;
          unsigned ADDR6:1;
          unsigned ADDR7:1;
          unsigned ADDR8:1;
          unsigned ADDR9:1;
          unsigned ADDR10:1;
          unsigned ADDR11:1;
          unsigned ADDR12:1;
          unsigned ADDR13:1;
        };
      };
} typePMADDRBITS;
sfr volatile typePMADDRBITS PMADDRbits absolute 0x604;

// backward compatibility for PMAENBITS
    typedef struct tagPMAENBITS {
      union {
        struct {
          unsigned PTEN:11;
          unsigned :3;
          unsigned PTEN14:1;
        };
        struct {
          unsigned PTEN0:1;
          unsigned PTEN1:1;
          unsigned PTEN2:1;
          unsigned PTEN3:1;
          unsigned PTEN4:1;
          unsigned PTEN5:1;
          unsigned PTEN6:1;
          unsigned PTEN7:1;
          unsigned PTEN8:1;
          unsigned PTEN9:1;
          unsigned PTEN10:1;
        };
      };
} typePMAENBITS;
sfr volatile typePMAENBITS PMAENbits absolute 0x60C;

// backward compatibility for PMSTATBITS
    typedef struct tagPMSTATBITS {
      unsigned OB0E:1;
      unsigned OB1E:1;
      unsigned OB2E:1;
      unsigned OB3E:1;
      unsigned :2;
      unsigned OBUF:1;
      unsigned OBE:1;
      unsigned IB0F:1;
      unsigned IB1F:1;
      unsigned IB2F:1;
      unsigned IB3F:1;
      unsigned :2;
      unsigned IBOV:1;
      unsigned IBF:1;
} typePMSTATBITS;
sfr volatile typePMSTATBITS PMSTATbits absolute 0x60E;

// backward compatibility for ALCFGRPTBITS
    typedef struct tagALCFGRPTBITS {
      union {
        struct {
          unsigned ARPT:8;
          unsigned ALRMPTR:2;
          unsigned AMASK:4;
          unsigned CHIME:1;
          unsigned ALRMEN:1;
        };
        struct {
          unsigned ARPT0:1;
          unsigned ARPT1:1;
          unsigned ARPT2:1;
          unsigned ARPT3:1;
          unsigned ARPT4:1;
          unsigned ARPT5:1;
          unsigned ARPT6:1;
          unsigned ARPT7:1;
          unsigned ALRMPTR0:1;
          unsigned ALRMPTR1:1;
          unsigned AMASK0:1;
          unsigned AMASK1:1;
          unsigned AMASK2:1;
          unsigned AMASK3:1;
        };
      };
} typeALCFGRPTBITS;
sfr volatile typeALCFGRPTBITS ALCFGRPTbits absolute 0x622;

// backward compatibility for RCFGCALBITS
    typedef struct tagRCFGCALBITS {
      union {
        struct {
          unsigned CAL:8;
          unsigned RTCPTR:2;
          unsigned RTCOE:1;
          unsigned HALFSEC:1;
          unsigned RTCSYNC:1;
          unsigned RTCWREN:1;
          unsigned :1;
          unsigned RTCEN:1;
        };
        struct {
          unsigned CAL0:1;
          unsigned CAL1:1;
          unsigned CAL2:1;
          unsigned CAL3:1;
          unsigned CAL4:1;
          unsigned CAL5:1;
          unsigned CAL6:1;
          unsigned CAL7:1;
          unsigned RTCPTR0:1;
          unsigned RTCPTR1:1;
        };
      };
} typeRCFGCALBITS;
sfr volatile typeRCFGCALBITS RCFGCALbits absolute 0x626;

// backward compatibility for CMCONBITS
    typedef struct tagCMCONBITS {
      unsigned C1POS:1;
      unsigned C1NEG:1;
      unsigned C2POS:1;
      unsigned C2NEG:1;
      unsigned C1INV:1;
      unsigned C2INV:1;
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned C1OUTEN:1;
      unsigned C2OUTEN:1;
      unsigned C1EN:1;
      unsigned C2EN:1;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned :1;
      unsigned CMIDL:1;
} typeCMCONBITS;
sfr volatile typeCMCONBITS CMCONbits absolute 0x630;

// backward compatibility for CVRCONBITS
    typedef struct tagCVRCONBITS {
      union {
        struct {
          unsigned CVR:4;
          unsigned CVRSS:1;
          unsigned CVRR:1;
          unsigned CVROE:1;
          unsigned CVREN:1;
        };
        struct {
          unsigned CVR0:1;
          unsigned CVR1:1;
          unsigned CVR2:1;
          unsigned CVR3:1;
        };
      };
} typeCVRCONBITS;
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x632;

// backward compatibility for CRCCONBITS
    typedef struct tagCRCCONBITS {
      union {
        struct {
          unsigned PLEN:4;
          unsigned CRCGO:1;
          unsigned :1;
          unsigned CRCMPT:1;
          unsigned CRCFUL:1;
          unsigned VWORD:5;
          unsigned CSIDL:1;
        };
        struct {
          unsigned PLEN0:1;
          unsigned PLEN1:1;
          unsigned PLEN2:1;
          unsigned PLEN3:1;
          unsigned :4;
          unsigned VWORD0:1;
          unsigned VWORD1:1;
          unsigned VWORD2:1;
          unsigned VWORD3:1;
          unsigned VWORD4:1;
        };
      };
} typeCRCCONBITS;
sfr volatile typeCRCCONBITS CRCCONbits absolute 0x640;

// backward compatibility for RPINR0BITS
    typedef struct tagRPINR0BITS {
      union {
        struct {
          unsigned :8;
          unsigned INT1R:5;
        };
        struct {
          unsigned :8;
          unsigned INT1R0:1;
          unsigned INT1R1:1;
          unsigned INT1R2:1;
          unsigned INT1R3:1;
          unsigned INT1R4:1;
        };
      };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x680;

// backward compatibility for RPINR1BITS
    typedef struct tagRPINR1BITS {
      union {
        struct {
          unsigned INT2R:5;
        };
        struct {
          unsigned INT2R0:1;
          unsigned INT2R1:1;
          unsigned INT2R2:1;
          unsigned INT2R3:1;
          unsigned INT2R4:1;
        };
      };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x682;

// backward compatibility for RPINR3BITS
    typedef struct tagRPINR3BITS {
      union {
        struct {
          unsigned T2CKR:5;
          unsigned :3;
          unsigned T3CKR:5;
        };
        struct {
          unsigned T2CKR0:1;
          unsigned T2CKR1:1;
          unsigned T2CKR2:1;
          unsigned T2CKR3:1;
          unsigned T2CKR4:1;
          unsigned :3;
          unsigned T3CKR0:1;
          unsigned T3CKR1:1;
          unsigned T3CKR2:1;
          unsigned T3CKR3:1;
          unsigned T3CKR4:1;
        };
      };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x686;

// backward compatibility for RPINR4BITS
    typedef struct tagRPINR4BITS {
      union {
        struct {
          unsigned T4CKR:5;
          unsigned :3;
          unsigned T5CKR:5;
        };
        struct {
          unsigned T4CKR0:1;
          unsigned T4CKR1:1;
          unsigned T4CKR2:1;
          unsigned T4CKR3:1;
          unsigned T4CKR4:1;
          unsigned :3;
          unsigned T5CKR0:1;
          unsigned T5CKR1:1;
          unsigned T5CKR2:1;
          unsigned T5CKR3:1;
          unsigned T5CKR4:1;
        };
      };
} typeRPINR4BITS;
sfr volatile typeRPINR4BITS RPINR4bits absolute 0x688;

// backward compatibility for RPINR7BITS
    typedef struct tagRPINR7BITS {
      union {
        struct {
          unsigned IC1R:5;
          unsigned :3;
          unsigned IC2R:5;
        };
        struct {
          unsigned IC1R0:1;
          unsigned IC1R1:1;
          unsigned IC1R2:1;
          unsigned IC1R3:1;
          unsigned IC1R4:1;
          unsigned :3;
          unsigned IC2R0:1;
          unsigned IC2R1:1;
          unsigned IC2R2:1;
          unsigned IC2R3:1;
          unsigned IC2R4:1;
        };
      };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x68E;

// backward compatibility for RPINR10BITS
    typedef struct tagRPINR10BITS {
      union {
        struct {
          unsigned IC7R:5;
          unsigned :3;
          unsigned IC8R:5;
        };
        struct {
          unsigned IC7R0:1;
          unsigned IC7R1:1;
          unsigned IC7R2:1;
          unsigned IC7R3:1;
          unsigned IC7R4:1;
          unsigned :3;
          unsigned IC8R0:1;
          unsigned IC8R1:1;
          unsigned IC8R2:1;
          unsigned IC8R3:1;
          unsigned IC8R4:1;
        };
      };
} typeRPINR10BITS;
sfr volatile typeRPINR10BITS RPINR10bits absolute 0x694;

// backward compatibility for RPINR11BITS
    typedef struct tagRPINR11BITS {
      union {
        struct {
          unsigned OCFAR:5;
        };
        struct {
          unsigned OCFAR0:1;
          unsigned OCFAR1:1;
          unsigned OCFAR2:1;
          unsigned OCFAR3:1;
          unsigned OCFAR4:1;
        };
      };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x696;

// backward compatibility for RPINR18BITS
    typedef struct tagRPINR18BITS {
      union {
        struct {
          unsigned U1RXR:5;
          unsigned :3;
          unsigned U1CTSR:5;
        };
        struct {
          unsigned U1RXR0:1;
          unsigned U1RXR1:1;
          unsigned U1RXR2:1;
          unsigned U1RXR3:1;
          unsigned U1RXR4:1;
          unsigned :3;
          unsigned U1CTSR0:1;
          unsigned U1CTSR1:1;
          unsigned U1CTSR2:1;
          unsigned U1CTSR3:1;
          unsigned U1CTSR4:1;
        };
      };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6A4;

// backward compatibility for RPINR19BITS
    typedef struct tagRPINR19BITS {
      union {
        struct {
          unsigned U2RXR:5;
          unsigned :3;
          unsigned U2CTSR:5;
        };
        struct {
          unsigned U2RXR0:1;
          unsigned U2RXR1:1;
          unsigned U2RXR2:1;
          unsigned U2RXR3:1;
          unsigned U2RXR4:1;
          unsigned :3;
          unsigned U2CTSR0:1;
          unsigned U2CTSR1:1;
          unsigned U2CTSR2:1;
          unsigned U2CTSR3:1;
          unsigned U2CTSR4:1;
        };
      };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6A6;

// backward compatibility for RPINR20BITS
    typedef struct tagRPINR20BITS {
      union {
        struct {
          unsigned SDI1R:5;
          unsigned :3;
          unsigned SCK1R:5;
        };
        struct {
          unsigned SDI1R0:1;
          unsigned SDI1R1:1;
          unsigned SDI1R2:1;
          unsigned SDI1R3:1;
          unsigned SDI1R4:1;
          unsigned :3;
          unsigned SCK1R0:1;
          unsigned SCK1R1:1;
          unsigned SCK1R2:1;
          unsigned SCK1R3:1;
          unsigned SCK1R4:1;
        };
      };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x6A8;

// backward compatibility for RPINR21BITS
    typedef struct tagRPINR21BITS {
      union {
        struct {
          unsigned SS1R:5;
        };
        struct {
          unsigned SS1R0:1;
          unsigned SS1R1:1;
          unsigned SS1R2:1;
          unsigned SS1R3:1;
          unsigned SS1R4:1;
        };
      };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6AA;

// backward compatibility for RPINR22BITS
    typedef struct tagRPINR22BITS {
      union {
        struct {
          unsigned SDI2R:5;
          unsigned :3;
          unsigned SCK2R:5;
        };
        struct {
          unsigned SDI2R0:1;
          unsigned SDI2R1:1;
          unsigned SDI2R2:1;
          unsigned SDI2R3:1;
          unsigned SDI2R4:1;
          unsigned :3;
          unsigned SCK2R0:1;
          unsigned SCK2R1:1;
          unsigned SCK2R2:1;
          unsigned SCK2R3:1;
          unsigned SCK2R4:1;
        };
      };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6AC;

// backward compatibility for RPINR23BITS
    typedef struct tagRPINR23BITS {
      union {
        struct {
          unsigned SS2R:5;
        };
        struct {
          unsigned SS2R0:1;
          unsigned SS2R1:1;
          unsigned SS2R2:1;
          unsigned SS2R3:1;
          unsigned SS2R4:1;
        };
      };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6AE;

// backward compatibility for RPINR26BITS
    typedef struct tagRPINR26BITS {
      union {
        struct {
          unsigned C1RXR:5;
        };
        struct {
          unsigned C1RXR0:1;
          unsigned C1RXR1:1;
          unsigned C1RXR2:1;
          unsigned C1RXR3:1;
          unsigned C1RXR4:1;
        };
      };
} typeRPINR26BITS;
sfr volatile typeRPINR26BITS RPINR26bits absolute 0x6B4;

// backward compatibility for RPOR0BITS
    typedef struct tagRPOR0BITS {
      union {
        struct {
          unsigned RP0R:5;
          unsigned :3;
          unsigned RP1R:5;
        };
        struct {
          unsigned RP0R0:1;
          unsigned RP0R1:1;
          unsigned RP0R2:1;
          unsigned RP0R3:1;
          unsigned RP0R4:1;
          unsigned :3;
          unsigned RP1R0:1;
          unsigned RP1R1:1;
          unsigned RP1R2:1;
          unsigned RP1R3:1;
          unsigned RP1R4:1;
        };
      };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x6C0;

// backward compatibility for RPOR1BITS
    typedef struct tagRPOR1BITS {
      union {
        struct {
          unsigned RP2R:5;
          unsigned :3;
          unsigned RP3R:5;
        };
        struct {
          unsigned RP2R0:1;
          unsigned RP2R1:1;
          unsigned RP2R2:1;
          unsigned RP2R3:1;
          unsigned RP2R4:1;
          unsigned :3;
          unsigned RP3R0:1;
          unsigned RP3R1:1;
          unsigned RP3R2:1;
          unsigned RP3R3:1;
          unsigned RP3R4:1;
        };
      };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x6C2;

// backward compatibility for RPOR2BITS
    typedef struct tagRPOR2BITS {
      union {
        struct {
          unsigned RP4R:5;
          unsigned :3;
          unsigned RP5R:5;
        };
        struct {
          unsigned RP4R0:1;
          unsigned RP4R1:1;
          unsigned RP4R2:1;
          unsigned RP4R3:1;
          unsigned RP4R4:1;
          unsigned :3;
          unsigned RP5R0:1;
          unsigned RP5R1:1;
          unsigned RP5R2:1;
          unsigned RP5R3:1;
          unsigned RP5R4:1;
        };
      };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x6C4;

// backward compatibility for RPOR3BITS
    typedef struct tagRPOR3BITS {
      union {
        struct {
          unsigned RP6R:5;
          unsigned :3;
          unsigned RP7R:5;
        };
        struct {
          unsigned RP6R0:1;
          unsigned RP6R1:1;
          unsigned RP6R2:1;
          unsigned RP6R3:1;
          unsigned RP6R4:1;
          unsigned :3;
          unsigned RP7R0:1;
          unsigned RP7R1:1;
          unsigned RP7R2:1;
          unsigned RP7R3:1;
          unsigned RP7R4:1;
        };
      };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x6C6;

// backward compatibility for RPOR4BITS
    typedef struct tagRPOR4BITS {
      union {
        struct {
          unsigned RP8R:5;
          unsigned :3;
          unsigned RP9R:5;
        };
        struct {
          unsigned RP8R0:1;
          unsigned RP8R1:1;
          unsigned RP8R2:1;
          unsigned RP8R3:1;
          unsigned RP8R4:1;
          unsigned :3;
          unsigned RP9R0:1;
          unsigned RP9R1:1;
          unsigned RP9R2:1;
          unsigned RP9R3:1;
          unsigned RP9R4:1;
        };
      };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x6C8;

// backward compatibility for RPOR5BITS
    typedef struct tagRPOR5BITS {
      union {
        struct {
          unsigned RP10R:5;
          unsigned :3;
          unsigned RP11R:5;
        };
        struct {
          unsigned RP10R0:1;
          unsigned RP10R1:1;
          unsigned RP10R2:1;
          unsigned RP10R3:1;
          unsigned RP10R4:1;
          unsigned :3;
          unsigned RP11R0:1;
          unsigned RP11R1:1;
          unsigned RP11R2:1;
          unsigned RP11R3:1;
          unsigned RP11R4:1;
        };
      };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x6CA;

// backward compatibility for RPOR6BITS
    typedef struct tagRPOR6BITS {
      union {
        struct {
          unsigned RP12R:5;
          unsigned :3;
          unsigned RP13R:5;
        };
        struct {
          unsigned RP12R0:1;
          unsigned RP12R1:1;
          unsigned RP12R2:1;
          unsigned RP12R3:1;
          unsigned RP12R4:1;
          unsigned :3;
          unsigned RP13R0:1;
          unsigned RP13R1:1;
          unsigned RP13R2:1;
          unsigned RP13R3:1;
          unsigned RP13R4:1;
        };
      };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x6CC;

// backward compatibility for RPOR7BITS
    typedef struct tagRPOR7BITS {
      union {
        struct {
          unsigned RP14R:5;
          unsigned :3;
          unsigned RP15R:5;
        };
        struct {
          unsigned RP14R0:1;
          unsigned RP14R1:1;
          unsigned RP14R2:1;
          unsigned RP14R3:1;
          unsigned RP14R4:1;
          unsigned :3;
          unsigned RP15R0:1;
          unsigned RP15R1:1;
          unsigned RP15R2:1;
          unsigned RP15R3:1;
          unsigned RP15R4:1;
        };
      };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x6CE;

// backward compatibility for RPOR8BITS
    typedef struct tagRPOR8BITS {
      union {
        struct {
          unsigned RP16R:5;
          unsigned :3;
          unsigned RP17R:5;
        };
        struct {
          unsigned RP16R0:1;
          unsigned RP16R1:1;
          unsigned RP16R2:1;
          unsigned RP16R3:1;
          unsigned RP16R4:1;
          unsigned :3;
          unsigned RP17R0:1;
          unsigned RP17R1:1;
          unsigned RP17R2:1;
          unsigned RP17R3:1;
          unsigned RP17R4:1;
        };
      };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x6D0;

// backward compatibility for RPOR9BITS
    typedef struct tagRPOR9BITS {
      union {
        struct {
          unsigned RP18R:5;
          unsigned :3;
          unsigned RP19R:5;
        };
        struct {
          unsigned RP18R0:1;
          unsigned RP18R1:1;
          unsigned RP18R2:1;
          unsigned RP18R3:1;
          unsigned RP18R4:1;
          unsigned :3;
          unsigned RP19R0:1;
          unsigned RP19R1:1;
          unsigned RP19R2:1;
          unsigned RP19R3:1;
          unsigned RP19R4:1;
        };
      };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x6D2;

// backward compatibility for RPOR10BITS
    typedef struct tagRPOR10BITS {
      union {
        struct {
          unsigned RP20R:5;
          unsigned :3;
          unsigned RP21R:5;
        };
        struct {
          unsigned RP20R0:1;
          unsigned RP20R1:1;
          unsigned RP20R2:1;
          unsigned RP20R3:1;
          unsigned RP20R4:1;
          unsigned :3;
          unsigned RP21R0:1;
          unsigned RP21R1:1;
          unsigned RP21R2:1;
          unsigned RP21R3:1;
          unsigned RP21R4:1;
        };
      };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x6D4;

// backward compatibility for RPOR11BITS
    typedef struct tagRPOR11BITS {
      union {
        struct {
          unsigned RP22R:5;
          unsigned :3;
          unsigned RP23R:5;
        };
        struct {
          unsigned RP22R0:1;
          unsigned RP22R1:1;
          unsigned RP22R2:1;
          unsigned RP22R3:1;
          unsigned RP22R4:1;
          unsigned :3;
          unsigned RP23R0:1;
          unsigned RP23R1:1;
          unsigned RP23R2:1;
          unsigned RP23R3:1;
          unsigned RP23R4:1;
        };
      };
} typeRPOR11BITS;
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x6D6;

// backward compatibility for RPOR12BITS
    typedef struct tagRPOR12BITS {
      union {
        struct {
          unsigned RP24R:5;
          unsigned :3;
          unsigned RP25R:5;
        };
        struct {
          unsigned RP24R0:1;
          unsigned RP24R1:1;
          unsigned RP24R2:1;
          unsigned RP24R3:1;
          unsigned RP24R4:1;
          unsigned :3;
          unsigned RP25R0:1;
          unsigned RP25R1:1;
          unsigned RP25R2:1;
          unsigned RP25R3:1;
          unsigned RP25R4:1;
        };
      };
} typeRPOR12BITS;
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x6D8;

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
      unsigned :4;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
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
          unsigned NVMOP:4;
          unsigned :2;
          unsigned ERASE:1;
          unsigned :6;
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
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

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
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned :4;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned :4;
      unsigned IC7MD:1;
      unsigned IC8MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :7;
      unsigned CRCMD:1;
      unsigned PMPMD:1;
      unsigned RTCCMD:1;
      unsigned CMPMD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

