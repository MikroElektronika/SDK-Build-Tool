// Definition file for P33FJ128GP206

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
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0062;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_OC7INTERRUPT         = 0x006A;
const unsigned IVT_ADDR_OC8INTERRUPT         = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_DMA4INTERRUPT        = 0x0070;
const unsigned IVT_ADDR_T6INTERRUPT          = 0x0072;
const unsigned IVT_ADDR_T7INTERRUPT          = 0x0074;
const unsigned IVT_ADDR_SI2C2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MI2C2INTERRUPT       = 0x0078;
const unsigned IVT_ADDR_T8INTERRUPT          = 0x007A;
const unsigned IVT_ADDR_T9INTERRUPT          = 0x007C;
const unsigned IVT_ADDR_INT3INTERRUPT        = 0x007E;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x0080;
const unsigned IVT_ADDR_INTERRUPT55          = 0x0082;
const unsigned IVT_ADDR_INTERRUPT56          = 0x0084;
const unsigned IVT_ADDR_INTERRUPT57          = 0x0086;
const unsigned IVT_ADDR_INTERRUPT58          = 0x0088;
const unsigned IVT_ADDR_DCIERRINTERRUPT      = 0x008A;
const unsigned IVT_ADDR_DCIINTERRUPT         = 0x008C;
const unsigned IVT_ADDR_DMA5INTERRUPT        = 0x008E;
const unsigned IVT_ADDR_RTCCINTERRUPT        = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_CRCINTERRUPT         = 0x009A;
const unsigned IVT_ADDR_DMA6INTERRUPT        = 0x009C;
const unsigned IVT_ADDR_DMA7INTERRUPT        = 0x009E;
const unsigned IVT_ADDR_INTERRUPT70          = 0x00A0;
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
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0158;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x015A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x015C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x015E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0160;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x0162;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x0164;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0166;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0168;
const unsigned AIVT_ADDR_ALTOC7INTERRUPT      = 0x016A;
const unsigned AIVT_ADDR_ALTOC8INTERRUPT      = 0x016C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x016E;
const unsigned AIVT_ADDR_ALTDMA4INTERRUPT     = 0x0170;
const unsigned AIVT_ADDR_ALTT6INTERRUPT       = 0x0172;
const unsigned AIVT_ADDR_ALTT7INTERRUPT       = 0x0174;
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0176;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0178;
const unsigned AIVT_ADDR_ALTT8INTERRUPT       = 0x017A;
const unsigned AIVT_ADDR_ALTT9INTERRUPT       = 0x017C;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x017E;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x0180;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0182;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0184;
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0186;
const unsigned AIVT_ADDR_ALTINTERRUPT58       = 0x0188;
const unsigned AIVT_ADDR_ALTDCIERRINTERRUPT   = 0x018A;
const unsigned AIVT_ADDR_ALTDCIINTERRUPT      = 0x018C;
const unsigned AIVT_ADDR_ALTDMA5INTERRUPT     = 0x018E;
const unsigned AIVT_ADDR_ALTRTCCINTERRUPT     = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0198;
const unsigned AIVT_ADDR_ALTCRCINTERRUPT      = 0x019A;
const unsigned AIVT_ADDR_ALTDMA6INTERRUPT     = 0x019C;
const unsigned AIVT_ADDR_ALTDMA7INTERRUPT     = 0x019E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x01A0;
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
sfr unsigned int          IPC10            absolute 0x00B8;
sfr unsigned int          IPC11            absolute 0x00BA;
sfr unsigned int          IPC12            absolute 0x00BC;
sfr unsigned int          IPC13            absolute 0x00BE;
sfr unsigned int          IPC14            absolute 0x00C0;
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
sfr unsigned int volatile TMR6             absolute 0x0122;
sfr unsigned int volatile TMR7HLD          absolute 0x0124;
sfr unsigned int volatile TMR7             absolute 0x0126;
sfr unsigned int volatile PR6              absolute 0x0128;
sfr unsigned int volatile PR7              absolute 0x012A;
sfr unsigned int volatile T6CON            absolute 0x012C;
sfr unsigned int volatile T7CON            absolute 0x012E;
sfr unsigned int volatile TMR8             absolute 0x0130;
sfr unsigned int volatile TMR9HLD          absolute 0x0132;
sfr unsigned int volatile TMR9             absolute 0x0134;
sfr unsigned int volatile PR8              absolute 0x0136;
sfr unsigned int volatile PR9              absolute 0x0138;
sfr unsigned int volatile T8CON            absolute 0x013A;
sfr unsigned int volatile T9CON            absolute 0x013C;
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
sfr unsigned int volatile DCICON1          absolute 0x0280;
sfr unsigned int volatile DCICON2          absolute 0x0282;
sfr unsigned int volatile DCICON3          absolute 0x0284;
sfr unsigned int volatile DCISTAT          absolute 0x0286;
sfr unsigned int volatile TSCON            absolute 0x0288;
sfr unsigned int volatile RSCON            absolute 0x028C;
sfr unsigned int volatile RXBUF0           absolute 0x0290;
sfr unsigned int volatile RXBUF1           absolute 0x0292;
sfr unsigned int volatile RXBUF2           absolute 0x0294;
sfr unsigned int volatile RXBUF3           absolute 0x0296;
sfr unsigned int volatile TXBUF0           absolute 0x0298;
sfr unsigned int volatile TXBUF1           absolute 0x029A;
sfr unsigned int volatile TXBUF2           absolute 0x029C;
sfr unsigned int volatile TXBUF3           absolute 0x029E;
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
sfr unsigned int volatile ADC1BUF0         absolute 0x0300;
sfr unsigned int volatile ADCBUF0          absolute 0x0300;
sfr unsigned int volatile AD1CON1          absolute 0x0320;
sfr unsigned int volatile AD1CON2          absolute 0x0322;
sfr unsigned int volatile AD1CON3          absolute 0x0324;
sfr unsigned int          AD1CHS123        absolute 0x0326;
sfr unsigned int          AD1CHS0          absolute 0x0328;
sfr unsigned int          AD1PCFGH         absolute 0x032A;
sfr unsigned int          AD1PCFGL         absolute 0x032C;
sfr unsigned int volatile ADPCFG           absolute 0x032C;
sfr unsigned int          AD1CSSH          absolute 0x032E;
sfr unsigned int          AD1CSSL          absolute 0x0330;
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
sfr unsigned int volatile ODCD             absolute 0x06D2;
sfr unsigned int volatile ODCF             absolute 0x06DE;
sfr unsigned int volatile ODCG             absolute 0x06E4;
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
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int T6IF = 15;
    sbit  T6IF_bit at IFS2.B15;
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;
    const register unsigned short int OC8IF = 12;
    sbit  OC8IF_bit at IFS2.B12;
    const register unsigned short int OC7IF = 11;
    sbit  OC7IF_bit at IFS2.B11;
    const register unsigned short int OC6IF = 10;
    sbit  OC6IF_bit at IFS2.B10;
    const register unsigned short int OC5IF = 9;
    sbit  OC5IF_bit at IFS2.B9;
    const register unsigned short int IC6IF = 8;
    sbit  IC6IF_bit at IFS2.B8;
    const register unsigned short int IC5IF = 7;
    sbit  IC5IF_bit at IFS2.B7;
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int SPI2EIF = 0;
    sbit  SPI2EIF_bit at IFS2.B0;

    // IFS3 bits
    const register unsigned short int DMA5IF = 13;
    sbit  DMA5IF_bit at IFS3.B13;
    const register unsigned short int DCIIF = 12;
    sbit  DCIIF_bit at IFS3.B12;
    const register unsigned short int DCIEIF = 11;
    sbit  DCIEIF_bit at IFS3.B11;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int T9IF = 4;
    sbit  T9IF_bit at IFS3.B4;
    const register unsigned short int T8IF = 3;
    sbit  T8IF_bit at IFS3.B3;
    const register unsigned short int T7IF = 0;
    sbit  T7IF_bit at IFS3.B0;

    // IFS4 bits
    const register unsigned short int DMA7IF = 5;
    sbit  DMA7IF_bit at IFS4.B5;
    const register unsigned short int DMA6IF = 4;
    sbit  DMA6IF_bit at IFS4.B4;
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
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int T6IE = 15;
    sbit  T6IE_bit at IEC2.B15;
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;
    const register unsigned short int OC8IE = 12;
    sbit  OC8IE_bit at IEC2.B12;
    const register unsigned short int OC7IE = 11;
    sbit  OC7IE_bit at IEC2.B11;
    const register unsigned short int OC6IE = 10;
    sbit  OC6IE_bit at IEC2.B10;
    const register unsigned short int OC5IE = 9;
    sbit  OC5IE_bit at IEC2.B9;
    const register unsigned short int IC6IE = 8;
    sbit  IC6IE_bit at IEC2.B8;
    const register unsigned short int IC5IE = 7;
    sbit  IC5IE_bit at IEC2.B7;
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int SPI2EIE = 0;
    sbit  SPI2EIE_bit at IEC2.B0;

    // IEC3 bits
    const register unsigned short int DMA5IE = 13;
    sbit  DMA5IE_bit at IEC3.B13;
    const register unsigned short int DCIIE = 12;
    sbit  DCIIE_bit at IEC3.B12;
    const register unsigned short int DCIEIE = 11;
    sbit  DCIEIE_bit at IEC3.B11;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int T9IE = 4;
    sbit  T9IE_bit at IEC3.B4;
    const register unsigned short int T8IE = 3;
    sbit  T8IE_bit at IEC3.B3;
    const register unsigned short int T7IE = 0;
    sbit  T7IE_bit at IEC3.B0;

    // IEC4 bits
    const register unsigned short int DMA7IE = 5;
    sbit  DMA7IE_bit at IEC4.B5;
    const register unsigned short int DMA6IE = 4;
    sbit  DMA6IE_bit at IEC4.B4;
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
    const register unsigned short int IC5IP_2 = 14;
    sbit  IC5IP_2_bit at IPC9.B14;
    const register unsigned short int IC5IP_1 = 13;
    sbit  IC5IP_1_bit at IPC9.B13;
    const register unsigned short int IC5IP_0 = 12;
    sbit  IC5IP_0_bit at IPC9.B12;
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

    // IPC10 bits
    const register unsigned short int OC7IP_2 = 14;
    sbit  OC7IP_2_bit at IPC10.B14;
    const register unsigned short int OC7IP_1 = 13;
    sbit  OC7IP_1_bit at IPC10.B13;
    const register unsigned short int OC7IP_0 = 12;
    sbit  OC7IP_0_bit at IPC10.B12;
    const register unsigned short int OC6IP_2 = 10;
    sbit  OC6IP_2_bit at IPC10.B10;
    const register unsigned short int OC6IP_1 = 9;
    sbit  OC6IP_1_bit at IPC10.B9;
    const register unsigned short int OC6IP_0 = 8;
    sbit  OC6IP_0_bit at IPC10.B8;
    const register unsigned short int OC5IP_2 = 6;
    sbit  OC5IP_2_bit at IPC10.B6;
    const register unsigned short int OC5IP_1 = 5;
    sbit  OC5IP_1_bit at IPC10.B5;
    const register unsigned short int OC5IP_0 = 4;
    sbit  OC5IP_0_bit at IPC10.B4;
    const register unsigned short int IC6IP_2 = 2;
    sbit  IC6IP_2_bit at IPC10.B2;
    const register unsigned short int IC6IP_1 = 1;
    sbit  IC6IP_1_bit at IPC10.B1;
    const register unsigned short int IC6IP_0 = 0;
    sbit  IC6IP_0_bit at IPC10.B0;

    // IPC11 bits
    const register unsigned short int T6IP_2 = 14;
    sbit  T6IP_2_bit at IPC11.B14;
    const register unsigned short int T6IP_1 = 13;
    sbit  T6IP_1_bit at IPC11.B13;
    const register unsigned short int T6IP_0 = 12;
    sbit  T6IP_0_bit at IPC11.B12;
    const register unsigned short int DMA4IP_2 = 10;
    sbit  DMA4IP_2_bit at IPC11.B10;
    const register unsigned short int DMA4IP_1 = 9;
    sbit  DMA4IP_1_bit at IPC11.B9;
    const register unsigned short int DMA4IP_0 = 8;
    sbit  DMA4IP_0_bit at IPC11.B8;
    const register unsigned short int OC8IP_2 = 2;
    sbit  OC8IP_2_bit at IPC11.B2;
    const register unsigned short int OC8IP_1 = 1;
    sbit  OC8IP_1_bit at IPC11.B1;
    const register unsigned short int OC8IP_0 = 0;
    sbit  OC8IP_0_bit at IPC11.B0;

    // IPC12 bits
    const register unsigned short int T8IP_2 = 14;
    sbit  T8IP_2_bit at IPC12.B14;
    const register unsigned short int T8IP_1 = 13;
    sbit  T8IP_1_bit at IPC12.B13;
    const register unsigned short int T8IP_0 = 12;
    sbit  T8IP_0_bit at IPC12.B12;
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
    const register unsigned short int T7IP_2 = 2;
    sbit  T7IP_2_bit at IPC12.B2;
    const register unsigned short int T7IP_1 = 1;
    sbit  T7IP_1_bit at IPC12.B1;
    const register unsigned short int T7IP_0 = 0;
    sbit  T7IP_0_bit at IPC12.B0;

    // IPC13 bits
    const register unsigned short int INT4IP_2 = 10;
    sbit  INT4IP_2_bit at IPC13.B10;
    const register unsigned short int INT4IP_1 = 9;
    sbit  INT4IP_1_bit at IPC13.B9;
    const register unsigned short int INT4IP_0 = 8;
    sbit  INT4IP_0_bit at IPC13.B8;
    const register unsigned short int INT3IP_2 = 6;
    sbit  INT3IP_2_bit at IPC13.B6;
    const register unsigned short int INT3IP_1 = 5;
    sbit  INT3IP_1_bit at IPC13.B5;
    const register unsigned short int INT3IP_0 = 4;
    sbit  INT3IP_0_bit at IPC13.B4;
    const register unsigned short int T9IP_2 = 2;
    sbit  T9IP_2_bit at IPC13.B2;
    const register unsigned short int T9IP_1 = 1;
    sbit  T9IP_1_bit at IPC13.B1;
    const register unsigned short int T9IP_0 = 0;
    sbit  T9IP_0_bit at IPC13.B0;

    // IPC14 bits
    const register unsigned short int DCIEIP_2 = 14;
    sbit  DCIEIP_2_bit at IPC14.B14;
    const register unsigned short int DCIEIP_1 = 13;
    sbit  DCIEIP_1_bit at IPC14.B13;
    const register unsigned short int DCIEIP_0 = 12;
    sbit  DCIEIP_0_bit at IPC14.B12;

    // IPC15 bits
    const register unsigned short int DMA5IP_2 = 6;
    sbit  DMA5IP_2_bit at IPC15.B6;
    const register unsigned short int DMA5IP_1 = 5;
    sbit  DMA5IP_1_bit at IPC15.B5;
    const register unsigned short int DMA5IP_0 = 4;
    sbit  DMA5IP_0_bit at IPC15.B4;
    const register unsigned short int DCIIP_2 = 2;
    sbit  DCIIP_2_bit at IPC15.B2;
    const register unsigned short int DCIIP_1 = 1;
    sbit  DCIIP_1_bit at IPC15.B1;
    const register unsigned short int DCIIP_0 = 0;
    sbit  DCIIP_0_bit at IPC15.B0;

    // IPC16 bits
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

    // TMR6 bits
    const register unsigned short int TMR6_15 = 15;
    sbit  TMR6_15_bit at TMR6.B15;
    const register unsigned short int TMR6_14 = 14;
    sbit  TMR6_14_bit at TMR6.B14;
    const register unsigned short int TMR6_13 = 13;
    sbit  TMR6_13_bit at TMR6.B13;
    const register unsigned short int TMR6_12 = 12;
    sbit  TMR6_12_bit at TMR6.B12;
    const register unsigned short int TMR6_11 = 11;
    sbit  TMR6_11_bit at TMR6.B11;
    const register unsigned short int TMR6_10 = 10;
    sbit  TMR6_10_bit at TMR6.B10;
    const register unsigned short int TMR6_9 = 9;
    sbit  TMR6_9_bit at TMR6.B9;
    const register unsigned short int TMR6_8 = 8;
    sbit  TMR6_8_bit at TMR6.B8;
    const register unsigned short int TMR6_7 = 7;
    sbit  TMR6_7_bit at TMR6.B7;
    const register unsigned short int TMR6_6 = 6;
    sbit  TMR6_6_bit at TMR6.B6;
    const register unsigned short int TMR6_5 = 5;
    sbit  TMR6_5_bit at TMR6.B5;
    const register unsigned short int TMR6_4 = 4;
    sbit  TMR6_4_bit at TMR6.B4;
    const register unsigned short int TMR6_3 = 3;
    sbit  TMR6_3_bit at TMR6.B3;
    const register unsigned short int TMR6_2 = 2;
    sbit  TMR6_2_bit at TMR6.B2;
    const register unsigned short int TMR6_1 = 1;
    sbit  TMR6_1_bit at TMR6.B1;
    const register unsigned short int TMR6_0 = 0;
    sbit  TMR6_0_bit at TMR6.B0;

    // TMR7HLD bits
    const register unsigned short int TMR7HLD_15 = 15;
    sbit  TMR7HLD_15_bit at TMR7HLD.B15;
    const register unsigned short int TMR7HLD_14 = 14;
    sbit  TMR7HLD_14_bit at TMR7HLD.B14;
    const register unsigned short int TMR7HLD_13 = 13;
    sbit  TMR7HLD_13_bit at TMR7HLD.B13;
    const register unsigned short int TMR7HLD_12 = 12;
    sbit  TMR7HLD_12_bit at TMR7HLD.B12;
    const register unsigned short int TMR7HLD_11 = 11;
    sbit  TMR7HLD_11_bit at TMR7HLD.B11;
    const register unsigned short int TMR7HLD_10 = 10;
    sbit  TMR7HLD_10_bit at TMR7HLD.B10;
    const register unsigned short int TMR7HLD_9 = 9;
    sbit  TMR7HLD_9_bit at TMR7HLD.B9;
    const register unsigned short int TMR7HLD_8 = 8;
    sbit  TMR7HLD_8_bit at TMR7HLD.B8;
    const register unsigned short int TMR7HLD_7 = 7;
    sbit  TMR7HLD_7_bit at TMR7HLD.B7;
    const register unsigned short int TMR7HLD_6 = 6;
    sbit  TMR7HLD_6_bit at TMR7HLD.B6;
    const register unsigned short int TMR7HLD_5 = 5;
    sbit  TMR7HLD_5_bit at TMR7HLD.B5;
    const register unsigned short int TMR7HLD_4 = 4;
    sbit  TMR7HLD_4_bit at TMR7HLD.B4;
    const register unsigned short int TMR7HLD_3 = 3;
    sbit  TMR7HLD_3_bit at TMR7HLD.B3;
    const register unsigned short int TMR7HLD_2 = 2;
    sbit  TMR7HLD_2_bit at TMR7HLD.B2;
    const register unsigned short int TMR7HLD_1 = 1;
    sbit  TMR7HLD_1_bit at TMR7HLD.B1;
    const register unsigned short int TMR7HLD_0 = 0;
    sbit  TMR7HLD_0_bit at TMR7HLD.B0;

    // TMR7 bits
    const register unsigned short int TMR7_15 = 15;
    sbit  TMR7_15_bit at TMR7.B15;
    const register unsigned short int TMR7_14 = 14;
    sbit  TMR7_14_bit at TMR7.B14;
    const register unsigned short int TMR7_13 = 13;
    sbit  TMR7_13_bit at TMR7.B13;
    const register unsigned short int TMR7_12 = 12;
    sbit  TMR7_12_bit at TMR7.B12;
    const register unsigned short int TMR7_11 = 11;
    sbit  TMR7_11_bit at TMR7.B11;
    const register unsigned short int TMR7_10 = 10;
    sbit  TMR7_10_bit at TMR7.B10;
    const register unsigned short int TMR7_9 = 9;
    sbit  TMR7_9_bit at TMR7.B9;
    const register unsigned short int TMR7_8 = 8;
    sbit  TMR7_8_bit at TMR7.B8;
    const register unsigned short int TMR7_7 = 7;
    sbit  TMR7_7_bit at TMR7.B7;
    const register unsigned short int TMR7_6 = 6;
    sbit  TMR7_6_bit at TMR7.B6;
    const register unsigned short int TMR7_5 = 5;
    sbit  TMR7_5_bit at TMR7.B5;
    const register unsigned short int TMR7_4 = 4;
    sbit  TMR7_4_bit at TMR7.B4;
    const register unsigned short int TMR7_3 = 3;
    sbit  TMR7_3_bit at TMR7.B3;
    const register unsigned short int TMR7_2 = 2;
    sbit  TMR7_2_bit at TMR7.B2;
    const register unsigned short int TMR7_1 = 1;
    sbit  TMR7_1_bit at TMR7.B1;
    const register unsigned short int TMR7_0 = 0;
    sbit  TMR7_0_bit at TMR7.B0;

    // PR6 bits
    const register unsigned short int PR6_15 = 15;
    sbit  PR6_15_bit at PR6.B15;
    const register unsigned short int PR6_14 = 14;
    sbit  PR6_14_bit at PR6.B14;
    const register unsigned short int PR6_13 = 13;
    sbit  PR6_13_bit at PR6.B13;
    const register unsigned short int PR6_12 = 12;
    sbit  PR6_12_bit at PR6.B12;
    const register unsigned short int PR6_11 = 11;
    sbit  PR6_11_bit at PR6.B11;
    const register unsigned short int PR6_10 = 10;
    sbit  PR6_10_bit at PR6.B10;
    const register unsigned short int PR6_9 = 9;
    sbit  PR6_9_bit at PR6.B9;
    const register unsigned short int PR6_8 = 8;
    sbit  PR6_8_bit at PR6.B8;
    const register unsigned short int PR6_7 = 7;
    sbit  PR6_7_bit at PR6.B7;
    const register unsigned short int PR6_6 = 6;
    sbit  PR6_6_bit at PR6.B6;
    const register unsigned short int PR6_5 = 5;
    sbit  PR6_5_bit at PR6.B5;
    const register unsigned short int PR6_4 = 4;
    sbit  PR6_4_bit at PR6.B4;
    const register unsigned short int PR6_3 = 3;
    sbit  PR6_3_bit at PR6.B3;
    const register unsigned short int PR6_2 = 2;
    sbit  PR6_2_bit at PR6.B2;
    const register unsigned short int PR6_1 = 1;
    sbit  PR6_1_bit at PR6.B1;
    const register unsigned short int PR6_0 = 0;
    sbit  PR6_0_bit at PR6.B0;

    // PR7 bits
    const register unsigned short int PR7_15 = 15;
    sbit  PR7_15_bit at PR7.B15;
    const register unsigned short int PR7_14 = 14;
    sbit  PR7_14_bit at PR7.B14;
    const register unsigned short int PR7_13 = 13;
    sbit  PR7_13_bit at PR7.B13;
    const register unsigned short int PR7_12 = 12;
    sbit  PR7_12_bit at PR7.B12;
    const register unsigned short int PR7_11 = 11;
    sbit  PR7_11_bit at PR7.B11;
    const register unsigned short int PR7_10 = 10;
    sbit  PR7_10_bit at PR7.B10;
    const register unsigned short int PR7_9 = 9;
    sbit  PR7_9_bit at PR7.B9;
    const register unsigned short int PR7_8 = 8;
    sbit  PR7_8_bit at PR7.B8;
    const register unsigned short int PR7_7 = 7;
    sbit  PR7_7_bit at PR7.B7;
    const register unsigned short int PR7_6 = 6;
    sbit  PR7_6_bit at PR7.B6;
    const register unsigned short int PR7_5 = 5;
    sbit  PR7_5_bit at PR7.B5;
    const register unsigned short int PR7_4 = 4;
    sbit  PR7_4_bit at PR7.B4;
    const register unsigned short int PR7_3 = 3;
    sbit  PR7_3_bit at PR7.B3;
    const register unsigned short int PR7_2 = 2;
    sbit  PR7_2_bit at PR7.B2;
    const register unsigned short int PR7_1 = 1;
    sbit  PR7_1_bit at PR7.B1;
    const register unsigned short int PR7_0 = 0;
    sbit  PR7_0_bit at PR7.B0;

    // T6CON bits
    sbit  TON_T6CON_bit at T6CON.B15;
    sbit  TSIDL_T6CON_bit at T6CON.B13;
    sbit  TGATE_T6CON_bit at T6CON.B6;
    sbit  TCKPS_1_T6CON_bit at T6CON.B5;
    sbit  TCKPS_0_T6CON_bit at T6CON.B4;
    sbit  T32_T6CON_bit at T6CON.B3;
    sbit  TCS_T6CON_bit at T6CON.B1;

    // T7CON bits
    sbit  TON_T7CON_bit at T7CON.B15;
    sbit  TSIDL_T7CON_bit at T7CON.B13;
    sbit  TGATE_T7CON_bit at T7CON.B6;
    sbit  TCKPS_1_T7CON_bit at T7CON.B5;
    sbit  TCKPS_0_T7CON_bit at T7CON.B4;
    sbit  TCS_T7CON_bit at T7CON.B1;

    // TMR8 bits
    const register unsigned short int TMR8_15 = 15;
    sbit  TMR8_15_bit at TMR8.B15;
    const register unsigned short int TMR8_14 = 14;
    sbit  TMR8_14_bit at TMR8.B14;
    const register unsigned short int TMR8_13 = 13;
    sbit  TMR8_13_bit at TMR8.B13;
    const register unsigned short int TMR8_12 = 12;
    sbit  TMR8_12_bit at TMR8.B12;
    const register unsigned short int TMR8_11 = 11;
    sbit  TMR8_11_bit at TMR8.B11;
    const register unsigned short int TMR8_10 = 10;
    sbit  TMR8_10_bit at TMR8.B10;
    const register unsigned short int TMR8_9 = 9;
    sbit  TMR8_9_bit at TMR8.B9;
    const register unsigned short int TMR8_8 = 8;
    sbit  TMR8_8_bit at TMR8.B8;
    const register unsigned short int TMR8_7 = 7;
    sbit  TMR8_7_bit at TMR8.B7;
    const register unsigned short int TMR8_6 = 6;
    sbit  TMR8_6_bit at TMR8.B6;
    const register unsigned short int TMR8_5 = 5;
    sbit  TMR8_5_bit at TMR8.B5;
    const register unsigned short int TMR8_4 = 4;
    sbit  TMR8_4_bit at TMR8.B4;
    const register unsigned short int TMR8_3 = 3;
    sbit  TMR8_3_bit at TMR8.B3;
    const register unsigned short int TMR8_2 = 2;
    sbit  TMR8_2_bit at TMR8.B2;
    const register unsigned short int TMR8_1 = 1;
    sbit  TMR8_1_bit at TMR8.B1;
    const register unsigned short int TMR8_0 = 0;
    sbit  TMR8_0_bit at TMR8.B0;

    // TMR9HLD bits
    const register unsigned short int TMR9HLD_15 = 15;
    sbit  TMR9HLD_15_bit at TMR9HLD.B15;
    const register unsigned short int TMR9HLD_14 = 14;
    sbit  TMR9HLD_14_bit at TMR9HLD.B14;
    const register unsigned short int TMR9HLD_13 = 13;
    sbit  TMR9HLD_13_bit at TMR9HLD.B13;
    const register unsigned short int TMR9HLD_12 = 12;
    sbit  TMR9HLD_12_bit at TMR9HLD.B12;
    const register unsigned short int TMR9HLD_11 = 11;
    sbit  TMR9HLD_11_bit at TMR9HLD.B11;
    const register unsigned short int TMR9HLD_10 = 10;
    sbit  TMR9HLD_10_bit at TMR9HLD.B10;
    const register unsigned short int TMR9HLD_9 = 9;
    sbit  TMR9HLD_9_bit at TMR9HLD.B9;
    const register unsigned short int TMR9HLD_8 = 8;
    sbit  TMR9HLD_8_bit at TMR9HLD.B8;
    const register unsigned short int TMR9HLD_7 = 7;
    sbit  TMR9HLD_7_bit at TMR9HLD.B7;
    const register unsigned short int TMR9HLD_6 = 6;
    sbit  TMR9HLD_6_bit at TMR9HLD.B6;
    const register unsigned short int TMR9HLD_5 = 5;
    sbit  TMR9HLD_5_bit at TMR9HLD.B5;
    const register unsigned short int TMR9HLD_4 = 4;
    sbit  TMR9HLD_4_bit at TMR9HLD.B4;
    const register unsigned short int TMR9HLD_3 = 3;
    sbit  TMR9HLD_3_bit at TMR9HLD.B3;
    const register unsigned short int TMR9HLD_2 = 2;
    sbit  TMR9HLD_2_bit at TMR9HLD.B2;
    const register unsigned short int TMR9HLD_1 = 1;
    sbit  TMR9HLD_1_bit at TMR9HLD.B1;
    const register unsigned short int TMR9HLD_0 = 0;
    sbit  TMR9HLD_0_bit at TMR9HLD.B0;

    // TMR9 bits
    const register unsigned short int TMR9_15 = 15;
    sbit  TMR9_15_bit at TMR9.B15;
    const register unsigned short int TMR9_14 = 14;
    sbit  TMR9_14_bit at TMR9.B14;
    const register unsigned short int TMR9_13 = 13;
    sbit  TMR9_13_bit at TMR9.B13;
    const register unsigned short int TMR9_12 = 12;
    sbit  TMR9_12_bit at TMR9.B12;
    const register unsigned short int TMR9_11 = 11;
    sbit  TMR9_11_bit at TMR9.B11;
    const register unsigned short int TMR9_10 = 10;
    sbit  TMR9_10_bit at TMR9.B10;
    const register unsigned short int TMR9_9 = 9;
    sbit  TMR9_9_bit at TMR9.B9;
    const register unsigned short int TMR9_8 = 8;
    sbit  TMR9_8_bit at TMR9.B8;
    const register unsigned short int TMR9_7 = 7;
    sbit  TMR9_7_bit at TMR9.B7;
    const register unsigned short int TMR9_6 = 6;
    sbit  TMR9_6_bit at TMR9.B6;
    const register unsigned short int TMR9_5 = 5;
    sbit  TMR9_5_bit at TMR9.B5;
    const register unsigned short int TMR9_4 = 4;
    sbit  TMR9_4_bit at TMR9.B4;
    const register unsigned short int TMR9_3 = 3;
    sbit  TMR9_3_bit at TMR9.B3;
    const register unsigned short int TMR9_2 = 2;
    sbit  TMR9_2_bit at TMR9.B2;
    const register unsigned short int TMR9_1 = 1;
    sbit  TMR9_1_bit at TMR9.B1;
    const register unsigned short int TMR9_0 = 0;
    sbit  TMR9_0_bit at TMR9.B0;

    // PR8 bits
    const register unsigned short int PR8_15 = 15;
    sbit  PR8_15_bit at PR8.B15;
    const register unsigned short int PR8_14 = 14;
    sbit  PR8_14_bit at PR8.B14;
    const register unsigned short int PR8_13 = 13;
    sbit  PR8_13_bit at PR8.B13;
    const register unsigned short int PR8_12 = 12;
    sbit  PR8_12_bit at PR8.B12;
    const register unsigned short int PR8_11 = 11;
    sbit  PR8_11_bit at PR8.B11;
    const register unsigned short int PR8_10 = 10;
    sbit  PR8_10_bit at PR8.B10;
    const register unsigned short int PR8_9 = 9;
    sbit  PR8_9_bit at PR8.B9;
    const register unsigned short int PR8_8 = 8;
    sbit  PR8_8_bit at PR8.B8;
    const register unsigned short int PR8_7 = 7;
    sbit  PR8_7_bit at PR8.B7;
    const register unsigned short int PR8_6 = 6;
    sbit  PR8_6_bit at PR8.B6;
    const register unsigned short int PR8_5 = 5;
    sbit  PR8_5_bit at PR8.B5;
    const register unsigned short int PR8_4 = 4;
    sbit  PR8_4_bit at PR8.B4;
    const register unsigned short int PR8_3 = 3;
    sbit  PR8_3_bit at PR8.B3;
    const register unsigned short int PR8_2 = 2;
    sbit  PR8_2_bit at PR8.B2;
    const register unsigned short int PR8_1 = 1;
    sbit  PR8_1_bit at PR8.B1;
    const register unsigned short int PR8_0 = 0;
    sbit  PR8_0_bit at PR8.B0;

    // PR9 bits
    const register unsigned short int PR9_15 = 15;
    sbit  PR9_15_bit at PR9.B15;
    const register unsigned short int PR9_14 = 14;
    sbit  PR9_14_bit at PR9.B14;
    const register unsigned short int PR9_13 = 13;
    sbit  PR9_13_bit at PR9.B13;
    const register unsigned short int PR9_12 = 12;
    sbit  PR9_12_bit at PR9.B12;
    const register unsigned short int PR9_11 = 11;
    sbit  PR9_11_bit at PR9.B11;
    const register unsigned short int PR9_10 = 10;
    sbit  PR9_10_bit at PR9.B10;
    const register unsigned short int PR9_9 = 9;
    sbit  PR9_9_bit at PR9.B9;
    const register unsigned short int PR9_8 = 8;
    sbit  PR9_8_bit at PR9.B8;
    const register unsigned short int PR9_7 = 7;
    sbit  PR9_7_bit at PR9.B7;
    const register unsigned short int PR9_6 = 6;
    sbit  PR9_6_bit at PR9.B6;
    const register unsigned short int PR9_5 = 5;
    sbit  PR9_5_bit at PR9.B5;
    const register unsigned short int PR9_4 = 4;
    sbit  PR9_4_bit at PR9.B4;
    const register unsigned short int PR9_3 = 3;
    sbit  PR9_3_bit at PR9.B3;
    const register unsigned short int PR9_2 = 2;
    sbit  PR9_2_bit at PR9.B2;
    const register unsigned short int PR9_1 = 1;
    sbit  PR9_1_bit at PR9.B1;
    const register unsigned short int PR9_0 = 0;
    sbit  PR9_0_bit at PR9.B0;

    // T8CON bits
    sbit  TON_T8CON_bit at T8CON.B15;
    sbit  TSIDL_T8CON_bit at T8CON.B13;
    sbit  TGATE_T8CON_bit at T8CON.B6;
    sbit  TCKPS_1_T8CON_bit at T8CON.B5;
    sbit  TCKPS_0_T8CON_bit at T8CON.B4;
    sbit  T32_T8CON_bit at T8CON.B3;
    sbit  TCS_T8CON_bit at T8CON.B1;

    // T9CON bits
    sbit  TON_T9CON_bit at T9CON.B15;
    sbit  TSIDL_T9CON_bit at T9CON.B13;
    sbit  TGATE_T9CON_bit at T9CON.B6;
    sbit  TCKPS_1_T9CON_bit at T9CON.B5;
    sbit  TCKPS_0_T9CON_bit at T9CON.B4;
    sbit  TCS_T9CON_bit at T9CON.B1;

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
    const register unsigned short int TX_8 = 8;
    sbit  TX_8_bit at U1TXREG.B8;
    const register unsigned short int TX_7 = 7;
    sbit  TX_7_bit at U1TXREG.B7;
    const register unsigned short int TX_6 = 6;
    sbit  TX_6_bit at U1TXREG.B6;
    const register unsigned short int TX_5 = 5;
    sbit  TX_5_bit at U1TXREG.B5;
    const register unsigned short int TX_4 = 4;
    sbit  TX_4_bit at U1TXREG.B4;
    const register unsigned short int TX_3 = 3;
    sbit  TX_3_bit at U1TXREG.B3;
    const register unsigned short int TX_2 = 2;
    sbit  TX_2_bit at U1TXREG.B2;
    const register unsigned short int TX_1 = 1;
    sbit  TX_1_bit at U1TXREG.B1;
    const register unsigned short int TX_0 = 0;
    sbit  TX_0_bit at U1TXREG.B0;

    // U1RXREG bits
    const register unsigned short int RX_8 = 8;
    sbit  RX_8_bit at U1RXREG.B8;
    const register unsigned short int RX_7 = 7;
    sbit  RX_7_bit at U1RXREG.B7;
    const register unsigned short int RX_6 = 6;
    sbit  RX_6_bit at U1RXREG.B6;
    const register unsigned short int RX_5 = 5;
    sbit  RX_5_bit at U1RXREG.B5;
    const register unsigned short int RX_4 = 4;
    sbit  RX_4_bit at U1RXREG.B4;
    const register unsigned short int RX_3 = 3;
    sbit  RX_3_bit at U1RXREG.B3;
    const register unsigned short int RX_2 = 2;
    sbit  RX_2_bit at U1RXREG.B2;
    const register unsigned short int RX_1 = 1;
    sbit  RX_1_bit at U1RXREG.B1;
    const register unsigned short int RX_0 = 0;
    sbit  RX_0_bit at U1RXREG.B0;

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

    // DCICON1 bits
    const register unsigned short int DCIEN = 15;
    sbit  DCIEN_bit at DCICON1.B15;
    const register unsigned short int DCISIDL = 13;
    sbit  DCISIDL_bit at DCICON1.B13;
    const register unsigned short int DLOOP = 11;
    sbit  DLOOP_bit at DCICON1.B11;
    const register unsigned short int CSCKD = 10;
    sbit  CSCKD_bit at DCICON1.B10;
    const register unsigned short int CSCKE = 9;
    sbit  CSCKE_bit at DCICON1.B9;
    const register unsigned short int COFSD = 8;
    sbit  COFSD_bit at DCICON1.B8;
    const register unsigned short int UNFM = 7;
    sbit  UNFM_bit at DCICON1.B7;
    const register unsigned short int CSDOM = 6;
    sbit  CSDOM_bit at DCICON1.B6;
    const register unsigned short int DJST = 5;
    sbit  DJST_bit at DCICON1.B5;
    const register unsigned short int COFSM_1 = 1;
    sbit  COFSM_1_bit at DCICON1.B1;
    const register unsigned short int COFSM_0 = 0;
    sbit  COFSM_0_bit at DCICON1.B0;

    // DCICON2 bits
    const register unsigned short int BLEN_1 = 11;
    sbit  BLEN_1_bit at DCICON2.B11;
    const register unsigned short int BLEN_0 = 10;
    sbit  BLEN_0_bit at DCICON2.B10;
    const register unsigned short int COFSG_3 = 8;
    sbit  COFSG_3_bit at DCICON2.B8;
    const register unsigned short int COFSG_2 = 7;
    sbit  COFSG_2_bit at DCICON2.B7;
    const register unsigned short int COFSG_1 = 6;
    sbit  COFSG_1_bit at DCICON2.B6;
    const register unsigned short int COFSG_0 = 5;
    sbit  COFSG_0_bit at DCICON2.B5;
    const register unsigned short int WS_3 = 3;
    sbit  WS_3_bit at DCICON2.B3;
    const register unsigned short int WS_2 = 2;
    sbit  WS_2_bit at DCICON2.B2;
    const register unsigned short int WS_1 = 1;
    sbit  WS_1_bit at DCICON2.B1;
    const register unsigned short int WS_0 = 0;
    sbit  WS_0_bit at DCICON2.B0;

    // DCICON3 bits
    const register unsigned short int BCG_11 = 11;
    sbit  BCG_11_bit at DCICON3.B11;
    const register unsigned short int BCG_10 = 10;
    sbit  BCG_10_bit at DCICON3.B10;
    const register unsigned short int BCG_9 = 9;
    sbit  BCG_9_bit at DCICON3.B9;
    const register unsigned short int BCG_8 = 8;
    sbit  BCG_8_bit at DCICON3.B8;
    const register unsigned short int BCG_7 = 7;
    sbit  BCG_7_bit at DCICON3.B7;
    const register unsigned short int BCG_6 = 6;
    sbit  BCG_6_bit at DCICON3.B6;
    const register unsigned short int BCG_5 = 5;
    sbit  BCG_5_bit at DCICON3.B5;
    const register unsigned short int BCG_4 = 4;
    sbit  BCG_4_bit at DCICON3.B4;
    const register unsigned short int BCG_3 = 3;
    sbit  BCG_3_bit at DCICON3.B3;
    const register unsigned short int BCG_2 = 2;
    sbit  BCG_2_bit at DCICON3.B2;
    const register unsigned short int BCG_1 = 1;
    sbit  BCG_1_bit at DCICON3.B1;
    const register unsigned short int BCG_0 = 0;
    sbit  BCG_0_bit at DCICON3.B0;

    // DCISTAT bits
    const register unsigned short int SLOT_3 = 11;
    sbit  SLOT_3_bit at DCISTAT.B11;
    const register unsigned short int SLOT_2 = 10;
    sbit  SLOT_2_bit at DCISTAT.B10;
    const register unsigned short int SLOT_1 = 9;
    sbit  SLOT_1_bit at DCISTAT.B9;
    const register unsigned short int SLOT_0 = 8;
    sbit  SLOT_0_bit at DCISTAT.B8;
    const register unsigned short int ROV = 3;
    sbit  ROV_bit at DCISTAT.B3;
    const register unsigned short int RFUL = 2;
    sbit  RFUL_bit at DCISTAT.B2;
    const register unsigned short int TUNF = 1;
    sbit  TUNF_bit at DCISTAT.B1;
    const register unsigned short int TMPTY = 0;
    sbit  TMPTY_bit at DCISTAT.B0;

    // TSCON bits
    const register unsigned short int TSE15 = 15;
    sbit  TSE15_bit at TSCON.B15;
    const register unsigned short int TSE14 = 14;
    sbit  TSE14_bit at TSCON.B14;
    const register unsigned short int TSE13 = 13;
    sbit  TSE13_bit at TSCON.B13;
    const register unsigned short int TSE12 = 12;
    sbit  TSE12_bit at TSCON.B12;
    const register unsigned short int TSE11 = 11;
    sbit  TSE11_bit at TSCON.B11;
    const register unsigned short int TSE10 = 10;
    sbit  TSE10_bit at TSCON.B10;
    const register unsigned short int TSE9 = 9;
    sbit  TSE9_bit at TSCON.B9;
    const register unsigned short int TSE8 = 8;
    sbit  TSE8_bit at TSCON.B8;
    const register unsigned short int TSE7 = 7;
    sbit  TSE7_bit at TSCON.B7;
    const register unsigned short int TSE6 = 6;
    sbit  TSE6_bit at TSCON.B6;
    const register unsigned short int TSE5 = 5;
    sbit  TSE5_bit at TSCON.B5;
    const register unsigned short int TSE4 = 4;
    sbit  TSE4_bit at TSCON.B4;
    const register unsigned short int TSE3 = 3;
    sbit  TSE3_bit at TSCON.B3;
    const register unsigned short int TSE2 = 2;
    sbit  TSE2_bit at TSCON.B2;
    const register unsigned short int TSE1 = 1;
    sbit  TSE1_bit at TSCON.B1;
    const register unsigned short int TSE0 = 0;
    sbit  TSE0_bit at TSCON.B0;

    // RSCON bits
    const register unsigned short int RSE15 = 15;
    sbit  RSE15_bit at RSCON.B15;
    const register unsigned short int RSE14 = 14;
    sbit  RSE14_bit at RSCON.B14;
    const register unsigned short int RSE13 = 13;
    sbit  RSE13_bit at RSCON.B13;
    const register unsigned short int RSE12 = 12;
    sbit  RSE12_bit at RSCON.B12;
    const register unsigned short int RSE11 = 11;
    sbit  RSE11_bit at RSCON.B11;
    const register unsigned short int RSE10 = 10;
    sbit  RSE10_bit at RSCON.B10;
    const register unsigned short int RSE9 = 9;
    sbit  RSE9_bit at RSCON.B9;
    const register unsigned short int RSE8 = 8;
    sbit  RSE8_bit at RSCON.B8;
    const register unsigned short int RSE7 = 7;
    sbit  RSE7_bit at RSCON.B7;
    const register unsigned short int RSE6 = 6;
    sbit  RSE6_bit at RSCON.B6;
    const register unsigned short int RSE5 = 5;
    sbit  RSE5_bit at RSCON.B5;
    const register unsigned short int RSE4 = 4;
    sbit  RSE4_bit at RSCON.B4;
    const register unsigned short int RSE3 = 3;
    sbit  RSE3_bit at RSCON.B3;
    const register unsigned short int RSE2 = 2;
    sbit  RSE2_bit at RSCON.B2;
    const register unsigned short int RSE1 = 1;
    sbit  RSE1_bit at RSCON.B1;
    const register unsigned short int RSE0 = 0;
    sbit  RSE0_bit at RSCON.B0;

    // RXBUF0 bits
    const register unsigned short int RXBUF0_15 = 15;
    sbit  RXBUF0_15_bit at RXBUF0.B15;
    const register unsigned short int RXBUF0_14 = 14;
    sbit  RXBUF0_14_bit at RXBUF0.B14;
    const register unsigned short int RXBUF0_13 = 13;
    sbit  RXBUF0_13_bit at RXBUF0.B13;
    const register unsigned short int RXBUF0_12 = 12;
    sbit  RXBUF0_12_bit at RXBUF0.B12;
    const register unsigned short int RXBUF0_11 = 11;
    sbit  RXBUF0_11_bit at RXBUF0.B11;
    const register unsigned short int RXBUF0_10 = 10;
    sbit  RXBUF0_10_bit at RXBUF0.B10;
    const register unsigned short int RXBUF0_9 = 9;
    sbit  RXBUF0_9_bit at RXBUF0.B9;
    const register unsigned short int RXBUF0_8 = 8;
    sbit  RXBUF0_8_bit at RXBUF0.B8;
    const register unsigned short int RXBUF0_7 = 7;
    sbit  RXBUF0_7_bit at RXBUF0.B7;
    const register unsigned short int RXBUF0_6 = 6;
    sbit  RXBUF0_6_bit at RXBUF0.B6;
    const register unsigned short int RXBUF0_5 = 5;
    sbit  RXBUF0_5_bit at RXBUF0.B5;
    const register unsigned short int RXBUF0_4 = 4;
    sbit  RXBUF0_4_bit at RXBUF0.B4;
    const register unsigned short int RXBUF0_3 = 3;
    sbit  RXBUF0_3_bit at RXBUF0.B3;
    const register unsigned short int RXBUF0_2 = 2;
    sbit  RXBUF0_2_bit at RXBUF0.B2;
    const register unsigned short int RXBUF0_1 = 1;
    sbit  RXBUF0_1_bit at RXBUF0.B1;
    const register unsigned short int RXBUF0_0 = 0;
    sbit  RXBUF0_0_bit at RXBUF0.B0;

    // RXBUF1 bits
    const register unsigned short int RXBUF1_15 = 15;
    sbit  RXBUF1_15_bit at RXBUF1.B15;
    const register unsigned short int RXBUF1_14 = 14;
    sbit  RXBUF1_14_bit at RXBUF1.B14;
    const register unsigned short int RXBUF1_13 = 13;
    sbit  RXBUF1_13_bit at RXBUF1.B13;
    const register unsigned short int RXBUF1_12 = 12;
    sbit  RXBUF1_12_bit at RXBUF1.B12;
    const register unsigned short int RXBUF1_11 = 11;
    sbit  RXBUF1_11_bit at RXBUF1.B11;
    const register unsigned short int RXBUF1_10 = 10;
    sbit  RXBUF1_10_bit at RXBUF1.B10;
    const register unsigned short int RXBUF1_9 = 9;
    sbit  RXBUF1_9_bit at RXBUF1.B9;
    const register unsigned short int RXBUF1_8 = 8;
    sbit  RXBUF1_8_bit at RXBUF1.B8;
    const register unsigned short int RXBUF1_7 = 7;
    sbit  RXBUF1_7_bit at RXBUF1.B7;
    const register unsigned short int RXBUF1_6 = 6;
    sbit  RXBUF1_6_bit at RXBUF1.B6;
    const register unsigned short int RXBUF1_5 = 5;
    sbit  RXBUF1_5_bit at RXBUF1.B5;
    const register unsigned short int RXBUF1_4 = 4;
    sbit  RXBUF1_4_bit at RXBUF1.B4;
    const register unsigned short int RXBUF1_3 = 3;
    sbit  RXBUF1_3_bit at RXBUF1.B3;
    const register unsigned short int RXBUF1_2 = 2;
    sbit  RXBUF1_2_bit at RXBUF1.B2;
    const register unsigned short int RXBUF1_1 = 1;
    sbit  RXBUF1_1_bit at RXBUF1.B1;
    const register unsigned short int RXBUF1_0 = 0;
    sbit  RXBUF1_0_bit at RXBUF1.B0;

    // RXBUF2 bits
    const register unsigned short int RXBUF2_15 = 15;
    sbit  RXBUF2_15_bit at RXBUF2.B15;
    const register unsigned short int RXBUF2_14 = 14;
    sbit  RXBUF2_14_bit at RXBUF2.B14;
    const register unsigned short int RXBUF2_13 = 13;
    sbit  RXBUF2_13_bit at RXBUF2.B13;
    const register unsigned short int RXBUF2_12 = 12;
    sbit  RXBUF2_12_bit at RXBUF2.B12;
    const register unsigned short int RXBUF2_11 = 11;
    sbit  RXBUF2_11_bit at RXBUF2.B11;
    const register unsigned short int RXBUF2_10 = 10;
    sbit  RXBUF2_10_bit at RXBUF2.B10;
    const register unsigned short int RXBUF2_9 = 9;
    sbit  RXBUF2_9_bit at RXBUF2.B9;
    const register unsigned short int RXBUF2_8 = 8;
    sbit  RXBUF2_8_bit at RXBUF2.B8;
    const register unsigned short int RXBUF2_7 = 7;
    sbit  RXBUF2_7_bit at RXBUF2.B7;
    const register unsigned short int RXBUF2_6 = 6;
    sbit  RXBUF2_6_bit at RXBUF2.B6;
    const register unsigned short int RXBUF2_5 = 5;
    sbit  RXBUF2_5_bit at RXBUF2.B5;
    const register unsigned short int RXBUF2_4 = 4;
    sbit  RXBUF2_4_bit at RXBUF2.B4;
    const register unsigned short int RXBUF2_3 = 3;
    sbit  RXBUF2_3_bit at RXBUF2.B3;
    const register unsigned short int RXBUF2_2 = 2;
    sbit  RXBUF2_2_bit at RXBUF2.B2;
    const register unsigned short int RXBUF2_1 = 1;
    sbit  RXBUF2_1_bit at RXBUF2.B1;
    const register unsigned short int RXBUF2_0 = 0;
    sbit  RXBUF2_0_bit at RXBUF2.B0;

    // RXBUF3 bits
    const register unsigned short int RXBUF3_15 = 15;
    sbit  RXBUF3_15_bit at RXBUF3.B15;
    const register unsigned short int RXBUF3_14 = 14;
    sbit  RXBUF3_14_bit at RXBUF3.B14;
    const register unsigned short int RXBUF3_13 = 13;
    sbit  RXBUF3_13_bit at RXBUF3.B13;
    const register unsigned short int RXBUF3_12 = 12;
    sbit  RXBUF3_12_bit at RXBUF3.B12;
    const register unsigned short int RXBUF3_11 = 11;
    sbit  RXBUF3_11_bit at RXBUF3.B11;
    const register unsigned short int RXBUF3_10 = 10;
    sbit  RXBUF3_10_bit at RXBUF3.B10;
    const register unsigned short int RXBUF3_9 = 9;
    sbit  RXBUF3_9_bit at RXBUF3.B9;
    const register unsigned short int RXBUF3_8 = 8;
    sbit  RXBUF3_8_bit at RXBUF3.B8;
    const register unsigned short int RXBUF3_7 = 7;
    sbit  RXBUF3_7_bit at RXBUF3.B7;
    const register unsigned short int RXBUF3_6 = 6;
    sbit  RXBUF3_6_bit at RXBUF3.B6;
    const register unsigned short int RXBUF3_5 = 5;
    sbit  RXBUF3_5_bit at RXBUF3.B5;
    const register unsigned short int RXBUF3_4 = 4;
    sbit  RXBUF3_4_bit at RXBUF3.B4;
    const register unsigned short int RXBUF3_3 = 3;
    sbit  RXBUF3_3_bit at RXBUF3.B3;
    const register unsigned short int RXBUF3_2 = 2;
    sbit  RXBUF3_2_bit at RXBUF3.B2;
    const register unsigned short int RXBUF3_1 = 1;
    sbit  RXBUF3_1_bit at RXBUF3.B1;
    const register unsigned short int RXBUF3_0 = 0;
    sbit  RXBUF3_0_bit at RXBUF3.B0;

    // TXBUF0 bits
    const register unsigned short int TXBUF0_15 = 15;
    sbit  TXBUF0_15_bit at TXBUF0.B15;
    const register unsigned short int TXBUF0_14 = 14;
    sbit  TXBUF0_14_bit at TXBUF0.B14;
    const register unsigned short int TXBUF0_13 = 13;
    sbit  TXBUF0_13_bit at TXBUF0.B13;
    const register unsigned short int TXBUF0_12 = 12;
    sbit  TXBUF0_12_bit at TXBUF0.B12;
    const register unsigned short int TXBUF0_11 = 11;
    sbit  TXBUF0_11_bit at TXBUF0.B11;
    const register unsigned short int TXBUF0_10 = 10;
    sbit  TXBUF0_10_bit at TXBUF0.B10;
    const register unsigned short int TXBUF0_9 = 9;
    sbit  TXBUF0_9_bit at TXBUF0.B9;
    const register unsigned short int TXBUF0_8 = 8;
    sbit  TXBUF0_8_bit at TXBUF0.B8;
    const register unsigned short int TXBUF0_7 = 7;
    sbit  TXBUF0_7_bit at TXBUF0.B7;
    const register unsigned short int TXBUF0_6 = 6;
    sbit  TXBUF0_6_bit at TXBUF0.B6;
    const register unsigned short int TXBUF0_5 = 5;
    sbit  TXBUF0_5_bit at TXBUF0.B5;
    const register unsigned short int TXBUF0_4 = 4;
    sbit  TXBUF0_4_bit at TXBUF0.B4;
    const register unsigned short int TXBUF0_3 = 3;
    sbit  TXBUF0_3_bit at TXBUF0.B3;
    const register unsigned short int TXBUF0_2 = 2;
    sbit  TXBUF0_2_bit at TXBUF0.B2;
    const register unsigned short int TXBUF0_1 = 1;
    sbit  TXBUF0_1_bit at TXBUF0.B1;
    const register unsigned short int TXBUF0_0 = 0;
    sbit  TXBUF0_0_bit at TXBUF0.B0;

    // TXBUF1 bits
    const register unsigned short int TXBUF1_15 = 15;
    sbit  TXBUF1_15_bit at TXBUF1.B15;
    const register unsigned short int TXBUF1_14 = 14;
    sbit  TXBUF1_14_bit at TXBUF1.B14;
    const register unsigned short int TXBUF1_13 = 13;
    sbit  TXBUF1_13_bit at TXBUF1.B13;
    const register unsigned short int TXBUF1_12 = 12;
    sbit  TXBUF1_12_bit at TXBUF1.B12;
    const register unsigned short int TXBUF1_11 = 11;
    sbit  TXBUF1_11_bit at TXBUF1.B11;
    const register unsigned short int TXBUF1_10 = 10;
    sbit  TXBUF1_10_bit at TXBUF1.B10;
    const register unsigned short int TXBUF1_9 = 9;
    sbit  TXBUF1_9_bit at TXBUF1.B9;
    const register unsigned short int TXBUF1_8 = 8;
    sbit  TXBUF1_8_bit at TXBUF1.B8;
    const register unsigned short int TXBUF1_7 = 7;
    sbit  TXBUF1_7_bit at TXBUF1.B7;
    const register unsigned short int TXBUF1_6 = 6;
    sbit  TXBUF1_6_bit at TXBUF1.B6;
    const register unsigned short int TXBUF1_5 = 5;
    sbit  TXBUF1_5_bit at TXBUF1.B5;
    const register unsigned short int TXBUF1_4 = 4;
    sbit  TXBUF1_4_bit at TXBUF1.B4;
    const register unsigned short int TXBUF1_3 = 3;
    sbit  TXBUF1_3_bit at TXBUF1.B3;
    const register unsigned short int TXBUF1_2 = 2;
    sbit  TXBUF1_2_bit at TXBUF1.B2;
    const register unsigned short int TXBUF1_1 = 1;
    sbit  TXBUF1_1_bit at TXBUF1.B1;
    const register unsigned short int TXBUF1_0 = 0;
    sbit  TXBUF1_0_bit at TXBUF1.B0;

    // TXBUF2 bits
    const register unsigned short int TXBUF2_15 = 15;
    sbit  TXBUF2_15_bit at TXBUF2.B15;
    const register unsigned short int TXBUF2_14 = 14;
    sbit  TXBUF2_14_bit at TXBUF2.B14;
    const register unsigned short int TXBUF2_13 = 13;
    sbit  TXBUF2_13_bit at TXBUF2.B13;
    const register unsigned short int TXBUF2_12 = 12;
    sbit  TXBUF2_12_bit at TXBUF2.B12;
    const register unsigned short int TXBUF2_11 = 11;
    sbit  TXBUF2_11_bit at TXBUF2.B11;
    const register unsigned short int TXBUF2_10 = 10;
    sbit  TXBUF2_10_bit at TXBUF2.B10;
    const register unsigned short int TXBUF2_9 = 9;
    sbit  TXBUF2_9_bit at TXBUF2.B9;
    const register unsigned short int TXBUF2_8 = 8;
    sbit  TXBUF2_8_bit at TXBUF2.B8;
    const register unsigned short int TXBUF2_7 = 7;
    sbit  TXBUF2_7_bit at TXBUF2.B7;
    const register unsigned short int TXBUF2_6 = 6;
    sbit  TXBUF2_6_bit at TXBUF2.B6;
    const register unsigned short int TXBUF2_5 = 5;
    sbit  TXBUF2_5_bit at TXBUF2.B5;
    const register unsigned short int TXBUF2_4 = 4;
    sbit  TXBUF2_4_bit at TXBUF2.B4;
    const register unsigned short int TXBUF2_3 = 3;
    sbit  TXBUF2_3_bit at TXBUF2.B3;
    const register unsigned short int TXBUF2_2 = 2;
    sbit  TXBUF2_2_bit at TXBUF2.B2;
    const register unsigned short int TXBUF2_1 = 1;
    sbit  TXBUF2_1_bit at TXBUF2.B1;
    const register unsigned short int TXBUF2_0 = 0;
    sbit  TXBUF2_0_bit at TXBUF2.B0;

    // TXBUF3 bits
    const register unsigned short int TXBUF3_15 = 15;
    sbit  TXBUF3_15_bit at TXBUF3.B15;
    const register unsigned short int TXBUF3_14 = 14;
    sbit  TXBUF3_14_bit at TXBUF3.B14;
    const register unsigned short int TXBUF3_13 = 13;
    sbit  TXBUF3_13_bit at TXBUF3.B13;
    const register unsigned short int TXBUF3_12 = 12;
    sbit  TXBUF3_12_bit at TXBUF3.B12;
    const register unsigned short int TXBUF3_11 = 11;
    sbit  TXBUF3_11_bit at TXBUF3.B11;
    const register unsigned short int TXBUF3_10 = 10;
    sbit  TXBUF3_10_bit at TXBUF3.B10;
    const register unsigned short int TXBUF3_9 = 9;
    sbit  TXBUF3_9_bit at TXBUF3.B9;
    const register unsigned short int TXBUF3_8 = 8;
    sbit  TXBUF3_8_bit at TXBUF3.B8;
    const register unsigned short int TXBUF3_7 = 7;
    sbit  TXBUF3_7_bit at TXBUF3.B7;
    const register unsigned short int TXBUF3_6 = 6;
    sbit  TXBUF3_6_bit at TXBUF3.B6;
    const register unsigned short int TXBUF3_5 = 5;
    sbit  TXBUF3_5_bit at TXBUF3.B5;
    const register unsigned short int TXBUF3_4 = 4;
    sbit  TXBUF3_4_bit at TXBUF3.B4;
    const register unsigned short int TXBUF3_3 = 3;
    sbit  TXBUF3_3_bit at TXBUF3.B3;
    const register unsigned short int TXBUF3_2 = 2;
    sbit  TXBUF3_2_bit at TXBUF3.B2;
    const register unsigned short int TXBUF3_1 = 1;
    sbit  TXBUF3_1_bit at TXBUF3.B1;
    const register unsigned short int TXBUF3_0 = 0;
    sbit  TXBUF3_0_bit at TXBUF3.B0;

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
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
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
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
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
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
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

    // ADC1BUF0 bits
    const register unsigned short int ADCBUF0_11 = 11;
    sbit  ADCBUF0_11_bit at ADC1BUF0.B11;
    const register unsigned short int ADCBUF0_10 = 10;
    sbit  ADCBUF0_10_bit at ADC1BUF0.B10;
    const register unsigned short int ADCBUF0_9 = 9;
    sbit  ADCBUF0_9_bit at ADC1BUF0.B9;
    const register unsigned short int ADCBUF0_8 = 8;
    sbit  ADCBUF0_8_bit at ADC1BUF0.B8;
    const register unsigned short int ADCBUF0_7 = 7;
    sbit  ADCBUF0_7_bit at ADC1BUF0.B7;
    const register unsigned short int ADCBUF0_6 = 6;
    sbit  ADCBUF0_6_bit at ADC1BUF0.B6;
    const register unsigned short int ADCBUF0_5 = 5;
    sbit  ADCBUF0_5_bit at ADC1BUF0.B5;
    const register unsigned short int ADCBUF0_4 = 4;
    sbit  ADCBUF0_4_bit at ADC1BUF0.B4;
    const register unsigned short int ADCBUF0_3 = 3;
    sbit  ADCBUF0_3_bit at ADC1BUF0.B3;
    const register unsigned short int ADCBUF0_2 = 2;
    sbit  ADCBUF0_2_bit at ADC1BUF0.B2;
    const register unsigned short int ADCBUF0_1 = 1;
    sbit  ADCBUF0_1_bit at ADC1BUF0.B1;
    const register unsigned short int ADCBUF0_0 = 0;
    sbit  ADCBUF0_0_bit at ADC1BUF0.B0;

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

    // AD1PCFGH bits
    const register unsigned short int PCFG17 = 1;
    sbit  PCFG17_bit at AD1PCFGH.B1;
    const register unsigned short int PCFG16 = 0;
    sbit  PCFG16_bit at AD1PCFGH.B0;

    // AD1PCFGL bits
    const register unsigned short int PCFG_15 = 15;
    sbit  PCFG_15_bit at AD1PCFGL.B15;
    const register unsigned short int PCFG_14 = 14;
    sbit  PCFG_14_bit at AD1PCFGL.B14;
    const register unsigned short int PCFG_13 = 13;
    sbit  PCFG_13_bit at AD1PCFGL.B13;
    const register unsigned short int PCFG_12 = 12;
    sbit  PCFG_12_bit at AD1PCFGL.B12;
    const register unsigned short int PCFG_11 = 11;
    sbit  PCFG_11_bit at AD1PCFGL.B11;
    const register unsigned short int PCFG_10 = 10;
    sbit  PCFG_10_bit at AD1PCFGL.B10;
    const register unsigned short int PCFG_9 = 9;
    sbit  PCFG_9_bit at AD1PCFGL.B9;
    const register unsigned short int PCFG_8 = 8;
    sbit  PCFG_8_bit at AD1PCFGL.B8;
    const register unsigned short int PCFG_7 = 7;
    sbit  PCFG_7_bit at AD1PCFGL.B7;
    const register unsigned short int PCFG_6 = 6;
    sbit  PCFG_6_bit at AD1PCFGL.B6;
    const register unsigned short int PCFG_5 = 5;
    sbit  PCFG_5_bit at AD1PCFGL.B5;
    const register unsigned short int PCFG_4 = 4;
    sbit  PCFG_4_bit at AD1PCFGL.B4;
    const register unsigned short int PCFG_3 = 3;
    sbit  PCFG_3_bit at AD1PCFGL.B3;
    const register unsigned short int PCFG_2 = 2;
    sbit  PCFG_2_bit at AD1PCFGL.B2;
    const register unsigned short int PCFG_1 = 1;
    sbit  PCFG_1_bit at AD1PCFGL.B1;
    const register unsigned short int PCFG_0 = 0;
    sbit  PCFG_0_bit at AD1PCFGL.B0;

    // AD1CSSH bits
    const register unsigned short int CSS17 = 1;
    sbit  CSS17_bit at AD1CSSH.B1;
    const register unsigned short int CSS16 = 0;
    sbit  CSS16_bit at AD1CSSH.B0;

    // AD1CSSL bits
    const register unsigned short int CSSL_15 = 15;
    sbit  CSSL_15_bit at AD1CSSL.B15;
    const register unsigned short int CSSL_14 = 14;
    sbit  CSSL_14_bit at AD1CSSL.B14;
    const register unsigned short int CSSL_13 = 13;
    sbit  CSSL_13_bit at AD1CSSL.B13;
    const register unsigned short int CSSL_12 = 12;
    sbit  CSSL_12_bit at AD1CSSL.B12;
    const register unsigned short int CSSL_11 = 11;
    sbit  CSSL_11_bit at AD1CSSL.B11;
    const register unsigned short int CSSL_10 = 10;
    sbit  CSSL_10_bit at AD1CSSL.B10;
    const register unsigned short int CSSL_9 = 9;
    sbit  CSSL_9_bit at AD1CSSL.B9;
    const register unsigned short int CSSL_8 = 8;
    sbit  CSSL_8_bit at AD1CSSL.B8;
    const register unsigned short int CSSL_7 = 7;
    sbit  CSSL_7_bit at AD1CSSL.B7;
    const register unsigned short int CSSL_6 = 6;
    sbit  CSSL_6_bit at AD1CSSL.B6;
    const register unsigned short int CSSL_5 = 5;
    sbit  CSSL_5_bit at AD1CSSL.B5;
    const register unsigned short int CSSL_4 = 4;
    sbit  CSSL_4_bit at AD1CSSL.B4;
    const register unsigned short int CSSL_3 = 3;
    sbit  CSSL_3_bit at AD1CSSL.B3;
    const register unsigned short int CSSL_2 = 2;
    sbit  CSSL_2_bit at AD1CSSL.B2;
    const register unsigned short int CSSL_1 = 1;
    sbit  CSSL_1_bit at AD1CSSL.B1;
    const register unsigned short int CSSL_0 = 0;
    sbit  CSSL_0_bit at AD1CSSL.B0;

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
    const register unsigned short int PWCOL7 = 15;
    sbit  PWCOL7_bit at DMACS0.B15;
    const register unsigned short int PWCOL6 = 14;
    sbit  PWCOL6_bit at DMACS0.B14;
    const register unsigned short int PWCOL5 = 13;
    sbit  PWCOL5_bit at DMACS0.B13;
    const register unsigned short int PWCOL4 = 12;
    sbit  PWCOL4_bit at DMACS0.B12;
    const register unsigned short int PWCOL3 = 11;
    sbit  PWCOL3_bit at DMACS0.B11;
    const register unsigned short int PWCOL2 = 10;
    sbit  PWCOL2_bit at DMACS0.B10;
    const register unsigned short int PWCOL1 = 9;
    sbit  PWCOL1_bit at DMACS0.B9;
    const register unsigned short int PWCOL0 = 8;
    sbit  PWCOL0_bit at DMACS0.B8;
    const register unsigned short int XWCOL7 = 7;
    sbit  XWCOL7_bit at DMACS0.B7;
    const register unsigned short int XWCOL6 = 6;
    sbit  XWCOL6_bit at DMACS0.B6;
    const register unsigned short int XWCOL5 = 5;
    sbit  XWCOL5_bit at DMACS0.B5;
    const register unsigned short int XWCOL4 = 4;
    sbit  XWCOL4_bit at DMACS0.B4;
    const register unsigned short int XWCOL3 = 3;
    sbit  XWCOL3_bit at DMACS0.B3;
    const register unsigned short int XWCOL2 = 2;
    sbit  XWCOL2_bit at DMACS0.B2;
    const register unsigned short int XWCOL1 = 1;
    sbit  XWCOL1_bit at DMACS0.B1;
    const register unsigned short int XWCOL0 = 0;
    sbit  XWCOL0_bit at DMACS0.B0;

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

    // ODCD bits
    const register unsigned short int ODCD11 = 11;
    sbit  ODCD11_bit at ODCD.B11;
    const register unsigned short int ODCD10 = 10;
    sbit  ODCD10_bit at ODCD.B10;
    const register unsigned short int ODCD9 = 9;
    sbit  ODCD9_bit at ODCD.B9;
    const register unsigned short int ODCD8 = 8;
    sbit  ODCD8_bit at ODCD.B8;
    const register unsigned short int ODCD7 = 7;
    sbit  ODCD7_bit at ODCD.B7;
    const register unsigned short int ODCD6 = 6;
    sbit  ODCD6_bit at ODCD.B6;
    const register unsigned short int ODCD5 = 5;
    sbit  ODCD5_bit at ODCD.B5;
    const register unsigned short int ODCD4 = 4;
    sbit  ODCD4_bit at ODCD.B4;
    const register unsigned short int ODCD3 = 3;
    sbit  ODCD3_bit at ODCD.B3;
    const register unsigned short int ODCD2 = 2;
    sbit  ODCD2_bit at ODCD.B2;
    const register unsigned short int ODCD1 = 1;
    sbit  ODCD1_bit at ODCD.B1;
    const register unsigned short int ODCD0 = 0;
    sbit  ODCD0_bit at ODCD.B0;

    // ODCF bits
    const register unsigned short int ODCF6 = 6;
    sbit  ODCF6_bit at ODCF.B6;
    const register unsigned short int ODCF5 = 5;
    sbit  ODCF5_bit at ODCF.B5;
    const register unsigned short int ODCF4 = 4;
    sbit  ODCF4_bit at ODCF.B4;
    const register unsigned short int ODCF3 = 3;
    sbit  ODCF3_bit at ODCF.B3;
    const register unsigned short int ODCF2 = 2;
    sbit  ODCF2_bit at ODCF.B2;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;

    // ODCG bits
    const register unsigned short int ODCG15 = 15;
    sbit  ODCG15_bit at ODCG.B15;
    const register unsigned short int ODCG14 = 14;
    sbit  ODCG14_bit at ODCG.B14;
    const register unsigned short int ODCG13 = 13;
    sbit  ODCG13_bit at ODCG.B13;
    const register unsigned short int ODCG12 = 12;
    sbit  ODCG12_bit at ODCG.B12;
    const register unsigned short int ODCG9 = 9;
    sbit  ODCG9_bit at ODCG.B9;
    const register unsigned short int ODCG8 = 8;
    sbit  ODCG8_bit at ODCG.B8;
    const register unsigned short int ODCG7 = 7;
    sbit  ODCG7_bit at ODCG.B7;
    const register unsigned short int ODCG6 = 6;
    sbit  ODCG6_bit at ODCG.B6;
    const register unsigned short int ODCG3 = 3;
    sbit  ODCG3_bit at ODCG.B3;
    const register unsigned short int ODCG2 = 2;
    sbit  ODCG2_bit at ODCG.B2;
    const register unsigned short int ODCG1 = 1;
    sbit  ODCG1_bit at ODCG.B1;
    const register unsigned short int ODCG0 = 0;
    sbit  ODCG0_bit at ODCG.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
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
    const register unsigned short int DCIMD = 8;
    sbit  DCIMD_bit at PMD1.B8;
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
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;

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

    // PMD3 bits
    const register unsigned short int T9MD = 15;
    sbit  T9MD_bit at PMD3.B15;
    const register unsigned short int T8MD = 14;
    sbit  T8MD_bit at PMD3.B14;
    const register unsigned short int T7MD = 13;
    sbit  T7MD_bit at PMD3.B13;
    const register unsigned short int T6MD = 12;
    sbit  T6MD_bit at PMD3.B12;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;

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
          unsigned :1;
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
      unsigned :2;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
      unsigned IC5IF:1;
      unsigned IC6IF:1;
      unsigned OC5IF:1;
      unsigned OC6IF:1;
      unsigned OC7IF:1;
      unsigned OC8IF:1;
      unsigned :1;
      unsigned DMA4IF:1;
      unsigned T6IF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned T7IF:1;
      unsigned :2;
      unsigned T8IF:1;
      unsigned T9IF:1;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned :4;
      unsigned DCIEIF:1;
      unsigned DCIIF:1;
      unsigned DMA5IF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1EIF:1;
      unsigned U2EIF:1;
      unsigned :1;
      unsigned DMA6IF:1;
      unsigned DMA7IF:1;
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
          unsigned :1;
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
      unsigned :2;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
      unsigned IC5IE:1;
      unsigned IC6IE:1;
      unsigned OC5IE:1;
      unsigned OC6IE:1;
      unsigned OC7IE:1;
      unsigned OC8IE:1;
      unsigned :1;
      unsigned DMA4IE:1;
      unsigned T6IE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned T7IE:1;
      unsigned :2;
      unsigned T8IE:1;
      unsigned T9IE:1;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned :4;
      unsigned DCIEIE:1;
      unsigned DCIIE:1;
      unsigned DMA5IE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1EIE:1;
      unsigned U2EIE:1;
      unsigned :1;
      unsigned DMA6IE:1;
      unsigned DMA7IE:1;
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
          unsigned :5;
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
          unsigned :5;
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
        };
        struct {
          unsigned SPI2EIP0:1;
          unsigned SPI2EIP1:1;
          unsigned SPI2EIP2:1;
          unsigned :1;
          unsigned SPI2IP0:1;
          unsigned SPI2IP1:1;
          unsigned SPI2IP2:1;
        };
      };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0x0B4;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned DMA3IP:3;
          unsigned :1;
          unsigned IC3IP:3;
          unsigned :1;
          unsigned IC4IP:3;
          unsigned :1;
          unsigned IC5IP:3;
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
          unsigned :1;
          unsigned IC5IP0:1;
          unsigned IC5IP1:1;
          unsigned IC5IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

// backward compatibility for IPC10BITS
    typedef struct tagIPC10BITS {
      union {
        struct {
          unsigned IC6IP:3;
          unsigned :1;
          unsigned OC5IP:3;
          unsigned :1;
          unsigned OC6IP:3;
          unsigned :1;
          unsigned OC7IP:3;
        };
        struct {
          unsigned IC6IP0:1;
          unsigned IC6IP1:1;
          unsigned IC6IP2:1;
          unsigned :1;
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
        };
      };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0x0B8;

// backward compatibility for IPC11BITS
    typedef struct tagIPC11BITS {
      union {
        struct {
          unsigned OC8IP:3;
          unsigned :5;
          unsigned DMA4IP:3;
          unsigned :1;
          unsigned T6IP:3;
        };
        struct {
          unsigned OC8IP0:1;
          unsigned OC8IP1:1;
          unsigned OC8IP2:1;
          unsigned :5;
          unsigned DMA4IP0:1;
          unsigned DMA4IP1:1;
          unsigned DMA4IP2:1;
          unsigned :1;
          unsigned T6IP0:1;
          unsigned T6IP1:1;
          unsigned T6IP2:1;
        };
      };
} typeIPC11BITS;
sfr volatile typeIPC11BITS IPC11bits absolute 0x0BA;

// backward compatibility for IPC12BITS
    typedef struct tagIPC12BITS {
      union {
        struct {
          unsigned T7IP:3;
          unsigned :1;
          unsigned SI2C2IP:3;
          unsigned :1;
          unsigned MI2C2IP:3;
          unsigned :1;
          unsigned T8IP:3;
        };
        struct {
          unsigned T7IP0:1;
          unsigned T7IP1:1;
          unsigned T7IP2:1;
          unsigned :1;
          unsigned SI2C2IP0:1;
          unsigned SI2C2IP1:1;
          unsigned SI2C2IP2:1;
          unsigned :1;
          unsigned MI2C2IP0:1;
          unsigned MI2C2IP1:1;
          unsigned MI2C2IP2:1;
          unsigned :1;
          unsigned T8IP0:1;
          unsigned T8IP1:1;
          unsigned T8IP2:1;
        };
      };
} typeIPC12BITS;
sfr volatile typeIPC12BITS IPC12bits absolute 0x0BC;

// backward compatibility for IPC13BITS
    typedef struct tagIPC13BITS {
      union {
        struct {
          unsigned T9IP:3;
          unsigned :1;
          unsigned INT3IP:3;
          unsigned :1;
          unsigned INT4IP:3;
        };
        struct {
          unsigned T9IP0:1;
          unsigned T9IP1:1;
          unsigned T9IP2:1;
          unsigned :1;
          unsigned INT3IP0:1;
          unsigned INT3IP1:1;
          unsigned INT3IP2:1;
          unsigned :1;
          unsigned INT4IP0:1;
          unsigned INT4IP1:1;
          unsigned INT4IP2:1;
        };
      };
} typeIPC13BITS;
sfr volatile typeIPC13BITS IPC13bits absolute 0x0BE;

// backward compatibility for IPC14BITS
    typedef struct tagIPC14BITS {
      union {
        struct {
          unsigned :12;
          unsigned DCIEIP:3;
        };
        struct {
          unsigned :12;
          unsigned DCIEIP0:1;
          unsigned DCIEIP1:1;
          unsigned DCIEIP2:1;
        };
      };
} typeIPC14BITS;
sfr volatile typeIPC14BITS IPC14bits absolute 0x0C0;

// backward compatibility for IPC15BITS
    typedef struct tagIPC15BITS {
      union {
        struct {
          unsigned DCIIP:3;
          unsigned :1;
          unsigned DMA5IP:3;
        };
        struct {
          unsigned DCIIP0:1;
          unsigned DCIIP1:1;
          unsigned DCIIP2:1;
          unsigned :1;
          unsigned DMA5IP0:1;
          unsigned DMA5IP1:1;
          unsigned DMA5IP2:1;
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
        };
        struct {
          unsigned DMA6IP0:1;
          unsigned DMA6IP1:1;
          unsigned DMA6IP2:1;
          unsigned :1;
          unsigned DMA7IP0:1;
          unsigned DMA7IP1:1;
          unsigned DMA7IP2:1;
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

// backward compatibility for T6CONBITS
    typedef struct tagT6CONBITS {
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
} typeT6CONBITS;
sfr volatile typeT6CONBITS T6CONbits absolute 0x12C;

// backward compatibility for T7CONBITS
    typedef struct tagT7CONBITS {
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
} typeT7CONBITS;
sfr volatile typeT7CONBITS T7CONbits absolute 0x12E;

// backward compatibility for T8CONBITS
    typedef struct tagT8CONBITS {
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
} typeT8CONBITS;
sfr volatile typeT8CONBITS T8CONbits absolute 0x13A;

// backward compatibility for T9CONBITS
    typedef struct tagT9CONBITS {
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
} typeT9CONBITS;
sfr volatile typeT9CONBITS T9CONbits absolute 0x13C;

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
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
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

// backward compatibility for DCICON1BITS
    typedef struct tagDCICON1BITS {
      union {
        struct {
          unsigned COFSM:2;
          unsigned :3;
          unsigned DJST:1;
          unsigned CSDOM:1;
          unsigned UNFM:1;
          unsigned COFSD:1;
          unsigned CSCKE:1;
          unsigned CSCKD:1;
          unsigned DLOOP:1;
          unsigned :1;
          unsigned DCISIDL:1;
          unsigned :1;
          unsigned DCIEN:1;
        };
        struct {
          unsigned COFSM0:1;
          unsigned COFSM1:1;
        };
      };
} typeDCICON1BITS;
sfr volatile typeDCICON1BITS DCICON1bits absolute 0x280;

// backward compatibility for DCICON2BITS
    typedef struct tagDCICON2BITS {
      union {
        struct {
          unsigned WS:4;
          unsigned :1;
          unsigned COFSG:4;
          unsigned :1;
          unsigned BLEN:2;
        };
        struct {
          unsigned WS0:1;
          unsigned WS1:1;
          unsigned WS2:1;
          unsigned WS3:1;
          unsigned :1;
          unsigned COFSG0:1;
          unsigned COFSG1:1;
          unsigned COFSG2:1;
          unsigned COFSG3:1;
          unsigned :1;
          unsigned BLEN0:1;
          unsigned BLEN1:1;
        };
      };
} typeDCICON2BITS;
sfr volatile typeDCICON2BITS DCICON2bits absolute 0x282;

// backward compatibility for DCICON3BITS
    typedef struct tagDCICON3BITS {
      unsigned BCG:12;
} typeDCICON3BITS;
sfr volatile typeDCICON3BITS DCICON3bits absolute 0x284;

// backward compatibility for DCISTATBITS
    typedef struct tagDCISTATBITS {
      union {
        struct {
          unsigned TMPTY:1;
          unsigned TUNF:1;
          unsigned RFUL:1;
          unsigned ROV:1;
          unsigned :4;
          unsigned SLOT:4;
        };
        struct {
          unsigned :8;
          unsigned SLOT0:1;
          unsigned SLOT1:1;
          unsigned SLOT2:1;
          unsigned SLOT3:1;
        };
      };
} typeDCISTATBITS;
sfr volatile typeDCISTATBITS DCISTATbits absolute 0x286;

// backward compatibility for TSCONBITS
    typedef struct tagTSCONBITS {
      unsigned TSE0:1;
      unsigned TSE1:1;
      unsigned TSE2:1;
      unsigned TSE3:1;
      unsigned TSE4:1;
      unsigned TSE5:1;
      unsigned TSE6:1;
      unsigned TSE7:1;
      unsigned TSE8:1;
      unsigned TSE9:1;
      unsigned TSE10:1;
      unsigned TSE11:1;
      unsigned TSE12:1;
      unsigned TSE13:1;
      unsigned TSE14:1;
      unsigned TSE15:1;
} typeTSCONBITS;
sfr volatile typeTSCONBITS TSCONbits absolute 0x288;

// backward compatibility for RSCONBITS
    typedef struct tagRSCONBITS {
      unsigned RSE0:1;
      unsigned RSE1:1;
      unsigned RSE2:1;
      unsigned RSE3:1;
      unsigned RSE4:1;
      unsigned RSE5:1;
      unsigned RSE6:1;
      unsigned RSE7:1;
      unsigned RSE8:1;
      unsigned RSE9:1;
      unsigned RSE10:1;
      unsigned RSE11:1;
      unsigned RSE12:1;
      unsigned RSE13:1;
      unsigned RSE14:1;
      unsigned RSE15:1;
} typeRSCONBITS;
sfr volatile typeRSCONBITS RSCONbits absolute 0x28C;

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
      unsigned :9;
      unsigned TRISC12:1;
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
      unsigned :9;
      unsigned RC12:1;
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
      unsigned :9;
      unsigned LATC12:1;
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

// backward compatibility for AD1PCFGHBITS
    typedef struct tagAD1PCFGHBITS {
      unsigned PCFG16:1;
      unsigned PCFG17:1;
} typeAD1PCFGHBITS;
sfr volatile typeAD1PCFGHBITS AD1PCFGHbits absolute 0x32A;

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
      unsigned PCFG13:1;
      unsigned PCFG14:1;
      unsigned PCFG15:1;
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
      unsigned PCFG13:1;
      unsigned PCFG14:1;
      unsigned PCFG15:1;
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x32C;

// backward compatibility for AD1CSSHBITS
    typedef struct tagAD1CSSHBITS {
      unsigned CSS16:1;
      unsigned CSS17:1;
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
        struct {
          unsigned XWCOL:8;
          unsigned PWCOL:8;
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

// backward compatibility for ODCDBITS
    typedef struct tagODCDBITS {
      unsigned ODCD0:1;
      unsigned ODCD1:1;
      unsigned ODCD2:1;
      unsigned ODCD3:1;
      unsigned ODCD4:1;
      unsigned ODCD5:1;
      unsigned ODCD6:1;
      unsigned ODCD7:1;
      unsigned ODCD8:1;
      unsigned ODCD9:1;
      unsigned ODCD10:1;
      unsigned ODCD11:1;
} typeODCDBITS;
sfr volatile typeODCDBITS ODCDbits absolute 0x6D2;

// backward compatibility for ODCFBITS
    typedef struct tagODCFBITS {
      unsigned ODCF0:1;
      unsigned ODCF1:1;
      unsigned ODCF2:1;
      unsigned ODCF3:1;
      unsigned ODCF4:1;
      unsigned ODCF5:1;
      unsigned ODCF6:1;
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0x6DE;

// backward compatibility for ODCGBITS
    typedef struct tagODCGBITS {
      unsigned ODCG0:1;
      unsigned ODCG1:1;
      unsigned ODCG2:1;
      unsigned ODCG3:1;
      unsigned :2;
      unsigned ODCG6:1;
      unsigned ODCG7:1;
      unsigned ODCG8:1;
      unsigned ODCG9:1;
      unsigned :2;
      unsigned ODCG12:1;
      unsigned ODCG13:1;
      unsigned ODCG14:1;
      unsigned ODCG15:1;
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0x6E4;

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
      unsigned :5;
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
          unsigned :1;
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
      unsigned :2;
      unsigned SPI1MD:1;
      unsigned SPI2MD:1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2C1MD:1;
      unsigned DCIMD:1;
      unsigned :2;
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

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned :10;
      unsigned T6MD:1;
      unsigned T7MD:1;
      unsigned T8MD:1;
      unsigned T9MD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

