// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00002000;

// Working space registers
rx unsigned short R0  absolute 0x0070;
rx unsigned short R1  absolute 0x0071;
rx unsigned short R2  absolute 0x0072;
rx unsigned short R3  absolute 0x0073;
rx unsigned short R4  absolute 0x0074;
rx unsigned short R5  absolute 0x0075;
rx unsigned short R6  absolute 0x0076;
rx unsigned short R7  absolute 0x0077;
rx unsigned short R8  absolute 0x0078;
rx unsigned short R9  absolute 0x0079;
rx unsigned short R10 absolute 0x007A;
rx unsigned short R11 absolute 0x007B;
rx unsigned short R12 absolute 0x007C;
rx unsigned short R13 absolute 0x007D;
rx unsigned short R14 absolute 0x007E;
rx unsigned short R15 absolute 0x007F;

const register unsigned short int W = 0;
const register unsigned short int F = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     128;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile INDF0            absolute 0x0000;
sfr unsigned short volatile INDF1            absolute 0x0001;
sfr unsigned short volatile PCL              absolute 0x0002;
sfr unsigned short volatile STATUS           absolute 0x0003;
sfr unsigned int            FSR0             absolute 0x0004;
sfr unsigned short          FSR0L            absolute 0x0004;
register unsigned short     *FSR0PTR         absolute 0x0004;
sfr unsigned short          FSR0H            absolute 0x0005;
sfr unsigned int            FSR1             absolute 0x0006;
sfr unsigned short          FSR1L            absolute 0x0006;
register unsigned short     *FSR1PTR         absolute 0x0006;
sfr unsigned short          FSR1H            absolute 0x0007;
sfr unsigned short          BSR              absolute 0x0008;
sfr unsigned short volatile WREG             absolute 0x0009;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x0011;
sfr unsigned short volatile PIR2             absolute 0x0012;
sfr unsigned short volatile PIR3             absolute 0x0013;
sfr unsigned short volatile PIR4             absolute 0x0014;
sfr unsigned short volatile TMR0             absolute 0x0015;
sfr unsigned short volatile TMR1L            absolute 0x0016;
sfr unsigned short volatile TMR1H            absolute 0x0017;
sfr unsigned short volatile T1CON            absolute 0x0018;
sfr unsigned short volatile T1GCON           absolute 0x0019;
sfr unsigned short volatile TMR2             absolute 0x001A;
sfr unsigned short volatile PR2              absolute 0x001B;
sfr unsigned short volatile T2CON            absolute 0x001C;
sfr unsigned short volatile CPSCON0          absolute 0x001E;
sfr unsigned short volatile CPSCON1          absolute 0x001F;
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
sfr unsigned short volatile PIE3             absolute 0x0093;
sfr unsigned short volatile PIE4             absolute 0x0094;
sfr unsigned short volatile OPTION_REG       absolute 0x0095;
sfr unsigned short volatile PCON             absolute 0x0096;
sfr unsigned short          WDTCON           absolute 0x0097;
sfr unsigned short volatile OSCTUNE          absolute 0x0098;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile LATB             absolute 0x010D;
sfr unsigned short volatile LATC             absolute 0x010E;
sfr unsigned short volatile LATD             absolute 0x010F;
sfr unsigned short volatile LATE             absolute 0x0110;
sfr unsigned short volatile CM1CON0          absolute 0x0111;
sfr unsigned short volatile CM1CON1          absolute 0x0112;
sfr unsigned short volatile CM2CON0          absolute 0x0113;
sfr unsigned short volatile CM2CON1          absolute 0x0114;
sfr unsigned short volatile CMOUT            absolute 0x0115;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short volatile DACCON0          absolute 0x0118;
sfr unsigned short volatile DACCON1          absolute 0x0119;
sfr unsigned short volatile SRCON0           absolute 0x011A;
sfr unsigned short volatile SRCON1           absolute 0x011B;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile CM3CON0          absolute 0x011E;
sfr unsigned short volatile CM3CON1          absolute 0x011F;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELE           absolute 0x0190;
sfr unsigned int   volatile EEADR            absolute 0x0191;
sfr unsigned short volatile EEADRL           absolute 0x0191;
sfr unsigned short volatile EEADRH           absolute 0x0192;
sfr unsigned int   volatile EEDAT            absolute 0x0193;
sfr unsigned short volatile EEDATL           absolute 0x0193;
sfr unsigned short volatile EEDATH           absolute 0x0194;
sfr unsigned short volatile EECON1           absolute 0x0195;
sfr unsigned short volatile EECON2           absolute 0x0196;
sfr unsigned short volatile RC1REG           absolute 0x0199;
sfr unsigned short volatile RCREG            absolute 0x0199;
sfr unsigned short volatile TX1REG           absolute 0x019A;
sfr unsigned short volatile TXREG            absolute 0x019A;
sfr unsigned short volatile SP1BRGL          absolute 0x019B;
sfr unsigned short          SPBRG            absolute 0x019B;
sfr unsigned short volatile SPBRGL           absolute 0x019B;
sfr unsigned short volatile SP1BRGH          absolute 0x019C;
sfr unsigned short          SPBRGH           absolute 0x019C;
sfr unsigned short volatile RC1STA           absolute 0x019D;
sfr unsigned short volatile RCSTA            absolute 0x019D;
sfr unsigned short volatile TX1STA           absolute 0x019E;
sfr unsigned short volatile TXSTA            absolute 0x019E;
sfr unsigned short volatile BAUDCON          absolute 0x019F;
sfr unsigned short volatile BAUD1CON         absolute 0x019F;
sfr unsigned short          WPUB             absolute 0x020D;
sfr unsigned short volatile SSP1BUF          absolute 0x0211;
sfr unsigned short volatile SSPBUF           absolute 0x0211;
sfr unsigned short volatile SSP1ADD          absolute 0x0212;
sfr unsigned short volatile SSPADD           absolute 0x0212;
sfr unsigned short volatile SSP1MSK          absolute 0x0213;
sfr unsigned short volatile SSPMSK           absolute 0x0213;
sfr unsigned short volatile SSP1STAT         absolute 0x0214;
sfr unsigned short volatile SSPSTAT          absolute 0x0214;
sfr unsigned short volatile SSP1CON1         absolute 0x0215;
sfr unsigned short volatile SSPCON           absolute 0x0215;
sfr unsigned short volatile SSPCON1          absolute 0x0215;
sfr unsigned short volatile SSP1CON2         absolute 0x0216;
sfr unsigned short volatile SSPCON2          absolute 0x0216;
sfr unsigned short volatile SSP1CON3         absolute 0x0217;
sfr unsigned short volatile SSPCON3          absolute 0x0217;
sfr unsigned short volatile SSP2BUF          absolute 0x0219;
sfr unsigned short volatile SSP2ADD          absolute 0x021A;
sfr unsigned short volatile SSP2MSK          absolute 0x021B;
sfr unsigned short volatile SSP2STAT         absolute 0x021C;
sfr unsigned short volatile SSP2CON1         absolute 0x021D;
sfr unsigned short volatile SSP2CON2         absolute 0x021E;
sfr unsigned short volatile SSP2CON3         absolute 0x021F;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short          PWM1CON          absolute 0x0294;
sfr unsigned short volatile CCP1AS           absolute 0x0295;
sfr unsigned short volatile ECCP1AS          absolute 0x0295;
sfr unsigned short volatile PSTR1CON         absolute 0x0296;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short          PWM2CON          absolute 0x029B;
sfr unsigned short volatile CCP2AS           absolute 0x029C;
sfr unsigned short volatile ECCP2AS          absolute 0x029C;
sfr unsigned short volatile PSTR2CON         absolute 0x029D;
sfr unsigned short volatile CCPTMRS0         absolute 0x029E;
sfr unsigned short volatile CCPTMRS1         absolute 0x029F;
sfr unsigned short volatile CCP3CON          absolute 0x0313;
sfr unsigned short          PWM3CON          absolute 0x0314;
sfr unsigned short volatile CCP3AS           absolute 0x0315;
sfr unsigned short volatile ECCP3AS          absolute 0x0315;
sfr unsigned short volatile PSTR3CON         absolute 0x0316;
sfr unsigned short volatile CCP4CON          absolute 0x031A;
sfr unsigned short volatile CCP5CON          absolute 0x031E;
sfr unsigned short volatile LATF             absolute 0x038C;
sfr unsigned short volatile LATG             absolute 0x038D;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile ANSELF           absolute 0x040C;
sfr unsigned short volatile ANSELG           absolute 0x040D;
sfr unsigned short volatile TMR4             absolute 0x0415;
sfr unsigned short volatile PR4              absolute 0x0416;
sfr unsigned short volatile T4CON            absolute 0x0417;
sfr unsigned short volatile TMR6             absolute 0x041C;
sfr unsigned short volatile PR6              absolute 0x041D;
sfr unsigned short volatile T6CON            absolute 0x041E;
sfr unsigned short volatile WPUG             absolute 0x048D;
sfr unsigned short volatile RC2REG           absolute 0x0491;
sfr unsigned short volatile TX2REG           absolute 0x0492;
sfr unsigned short volatile SP2BRGL          absolute 0x0493;
sfr unsigned short          SPBRG2           absolute 0x0493;
sfr unsigned short volatile SPBRGH2          absolute 0x0494;
sfr unsigned short volatile SP2BRGH          absolute 0x0494;
sfr unsigned short volatile RC2STA           absolute 0x0495;
sfr unsigned short volatile TXSTA2           absolute 0x0496;
sfr unsigned short volatile TX2STA           absolute 0x0496;
sfr unsigned short volatile BAUDCON2         absolute 0x0497;
sfr unsigned short volatile BAUD2CON         absolute 0x0497;
sfr unsigned short volatile LCDCON           absolute 0x0791;
sfr unsigned short volatile LCDPS            absolute 0x0792;
sfr unsigned short volatile LCDREF           absolute 0x0793;
sfr unsigned short volatile LCDCST           absolute 0x0794;
sfr unsigned short volatile LCDRL            absolute 0x0795;
sfr unsigned short volatile LCDSE0           absolute 0x0798;
sfr unsigned short volatile LCDSE1           absolute 0x0799;
sfr unsigned short volatile LCDSE2           absolute 0x079A;
sfr unsigned short volatile LCDSE3           absolute 0x079B;
sfr unsigned short volatile LCDSE4           absolute 0x079C;
sfr unsigned short volatile LCDSE5           absolute 0x079D;
sfr unsigned short volatile LCDDATA0         absolute 0x07A0;
sfr unsigned short volatile LCDDATA1         absolute 0x07A1;
sfr unsigned short volatile LCDDATA2         absolute 0x07A2;
sfr unsigned short volatile LCDDATA3         absolute 0x07A3;
sfr unsigned short volatile LCDDATA4         absolute 0x07A4;
sfr unsigned short volatile LCDDATA5         absolute 0x07A5;
sfr unsigned short volatile LCDDATA6         absolute 0x07A6;
sfr unsigned short volatile LCDDATA7         absolute 0x07A7;
sfr unsigned short volatile LCDDATA8         absolute 0x07A8;
sfr unsigned short volatile LCDDATA9         absolute 0x07A9;
sfr unsigned short volatile LCDDATA10        absolute 0x07AA;
sfr unsigned short volatile LCDDATA11        absolute 0x07AB;
sfr unsigned short volatile LCDDATA12        absolute 0x07AC;
sfr unsigned short volatile LCDDATA13        absolute 0x07AD;
sfr unsigned short volatile LCDDATA14        absolute 0x07AE;
sfr unsigned short volatile LCDDATA15        absolute 0x07AF;
sfr unsigned short volatile LCDDATA16        absolute 0x07B0;
sfr unsigned short volatile LCDDATA17        absolute 0x07B1;
sfr unsigned short volatile LCDDATA18        absolute 0x07B2;
sfr unsigned short volatile LCDDATA19        absolute 0x07B3;
sfr unsigned short volatile LCDDATA20        absolute 0x07B4;
sfr unsigned short volatile LCDDATA21        absolute 0x07B5;
sfr unsigned short volatile LCDDATA22        absolute 0x07B6;
sfr unsigned short volatile LCDDATA23        absolute 0x07B7;
sfr unsigned short volatile STATUS_SHAD      absolute 0x0FE4;
sfr unsigned short volatile WREG_SHAD        absolute 0x0FE5;
sfr unsigned short volatile BSR_SHAD         absolute 0x0FE6;
sfr unsigned short volatile PCLATH_SHAD      absolute 0x0FE7;
sfr unsigned short volatile FSR0L_SHAD       absolute 0x0FE8;
sfr unsigned short volatile FSR0H_SHAD       absolute 0x0FE9;
sfr unsigned short volatile FSR1L_SHAD       absolute 0x0FEA;
sfr unsigned short volatile FSR1H_SHAD       absolute 0x0FEB;
sfr unsigned short volatile STKPTR           absolute 0x0FED;
sfr unsigned short volatile PORTA            absolute 0x000C;
sfr unsigned short volatile PORTB            absolute 0x000D;
sfr unsigned short volatile PORTC            absolute 0x000E;
sfr unsigned short volatile PORTD            absolute 0x000F;
sfr unsigned short volatile PORTE            absolute 0x0010;
sfr unsigned short volatile TRISA            absolute 0x008C;
sfr unsigned short volatile TRISB            absolute 0x008D;
sfr unsigned short volatile TRISC            absolute 0x008E;
sfr unsigned short volatile TRISD            absolute 0x008F;
sfr unsigned short volatile TRISE            absolute 0x0090;
sfr unsigned short volatile PORTF            absolute 0x028C;
sfr unsigned short volatile PORTG            absolute 0x028D;
sfr unsigned short volatile CCPR2L           absolute 0x0298;
sfr unsigned short volatile CCPR2H           absolute 0x0299;
sfr unsigned short volatile TRISF            absolute 0x030C;
sfr unsigned short volatile TRISG            absolute 0x030D;
sfr unsigned short volatile CCPR3L           absolute 0x0311;
sfr unsigned short volatile CCPR3H           absolute 0x0312;
sfr unsigned short volatile CCPR4L           absolute 0x0318;
sfr unsigned short volatile CCPR4H           absolute 0x0319;
sfr unsigned short volatile CCPR5L           absolute 0x031C;
sfr unsigned short volatile CCPR5H           absolute 0x031D;
sfr unsigned short volatile TOSL             absolute 0x0FEE;
sfr unsigned short volatile TOSH             absolute 0x0FEF;

    // STATUS bits
    const register unsigned short int C = 0;
    sbit  C_bit at STATUS.B0;
    const register unsigned short int DC = 1;
    sbit  DC_bit at STATUS.B1;
    const register unsigned short int Z = 2;
    sbit  Z_bit at STATUS.B2;
    const register unsigned short int NOT_PD = 3;
    sbit  NOT_PD_bit at STATUS.B3;
    const register unsigned short int NOT_TO = 4;
    sbit  NOT_TO_bit at STATUS.B4;

    // BSR bits
    const register unsigned short int BSR0 = 0;
    sbit  BSR0_bit at BSR.B0;
    const register unsigned short int BSR1 = 1;
    sbit  BSR1_bit at BSR.B1;
    const register unsigned short int BSR2 = 2;
    sbit  BSR2_bit at BSR.B2;
    const register unsigned short int BSR3 = 3;
    sbit  BSR3_bit at BSR.B3;
    const register unsigned short int BSR4 = 4;
    sbit  BSR4_bit at BSR.B4;

    // INTCON bits
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
    const register unsigned short int INTE = 4;
    sbit  INTE_bit at INTCON.B4;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;

    // Alternative bit function
    const register unsigned short int AN0 = 0;
    sbit  AN0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int AN1 = 1;
    sbit  AN1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int AN2 = 2;
    sbit  AN2_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int AN3 = 3;
    sbit  AN3_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CPS0 = 0;
    sbit  CPS0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int CPS1 = 1;
    sbit  CPS1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int CPS2 = 2;
    sbit  CPS2_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int CPS3 = 3;
    sbit  CPS3_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int CPS4 = 5;
    sbit  CPS4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int SEG33 = 0;
    sbit  SEG33_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int SEG18 = 1;
    sbit  SEG18_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int SEG34 = 2;
    sbit  SEG34_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int SEG35 = 3;
    sbit  SEG35_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int SEG14 = 4;
    sbit  SEG14_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int SEG15 = 5;
    sbit  SEG15_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int SEG36 = 6;
    sbit  SEG36_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int SEG37 = 7;
    sbit  SEG37_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CLKOUT = 6;
    sbit  CLKOUT_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKIN = 7;
    sbit  CLKIN_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int SEG30 = 0;
    sbit  SEG30_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SEG8 = 1;
    sbit  SEG8_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SEG9 = 2;
    sbit  SEG9_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int SEG10 = 3;
    sbit  SEG10_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int SEG11 = 4;
    sbit  SEG11_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int SEG29 = 5;
    sbit  SEG29_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int SEG38 = 6;
    sbit  SEG38_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int SEG39 = 7;
    sbit  SEG39_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int SRI = 0;
    sbit  SRI_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int T1G = 5;
    sbit  T1G_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int FLT0 = 0;
    sbit  FLT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SEG40 = 0;
    sbit  SEG40_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int SEG32 = 1;
    sbit  SEG32_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int SEG13 = 2;
    sbit  SEG13_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SEG17 = 3;
    sbit  SEG17_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SEG16 = 4;
    sbit  SEG16_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SEG12 = 5;
    sbit  SEG12_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int SEG27 = 6;
    sbit  SEG27_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int SEG28 = 7;
    sbit  SEG28_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int SCK1 = 3;
    sbit  SCK1_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDI1 = 4;
    sbit  SDI1_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SDO1 = 5;
    sbit  SDO1_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX1 = 6;
    sbit  TX1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX1 = 7;
    sbit  RX1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCL1 = 3;
    sbit  SCL1_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA1 = 4;
    sbit  SDA1_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK1 = 6;
    sbit  CK1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int DT1 = 7;
    sbit  DT1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int P2A_PORTC = 1;
    sbit  P2A_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int P1A = 2;
    sbit  P1A_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SEG0 = 0;
    sbit  SEG0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int SEG1 = 1;
    sbit  SEG1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int SEG2 = 2;
    sbit  SEG2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int SEG3 = 3;
    sbit  SEG3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int SEG4 = 4;
    sbit  SEG4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SEG5 = 5;
    sbit  SEG5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SEG6 = 6;
    sbit  SEG6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SEG7 = 7;
    sbit  SEG7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int P2D = 0;
    sbit  P2D_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int P2C = 1;
    sbit  P2C_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int P2B = 2;
    sbit  P2B_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int P3C = 3;
    sbit  P3C_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int P3B = 4;
    sbit  P3B_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int P1C = 5;
    sbit  P1C_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int P1B = 6;
    sbit  P1B_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SDO2 = 4;
    sbit  SDO2_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SDI2 = 5;
    sbit  SDI2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCK2 = 6;
    sbit  SCK2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int NOT_SS2 = 7;
    sbit  NOT_SS2_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int SDA2 = 5;
    sbit  SDA2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCL2 = 6;
    sbit  SCL2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int VLCD1 = 0;
    sbit  VLCD1_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int VLCD2 = 1;
    sbit  VLCD2_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int VLCD3 = 2;
    sbit  VLCD3_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int COM0 = 3;
    sbit  COM0_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int COM1 = 4;
    sbit  COM1_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int COM2 = 5;
    sbit  COM2_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int COM3 = 6;
    sbit  COM3_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int SEG31 = 7;

    // Alternative bit function
    sbit  SEG31_bit at PORTE.B7;

    // Alternative bit function
    sbit  P2D_PORTE_bit at PORTE.B0;

    // Alternative bit function
    sbit  P2C_PORTE_bit at PORTE.B1;

    // Alternative bit function
    sbit  P2B_PORTE_bit at PORTE.B2;

    // Alternative bit function
    sbit  P3C_PORTE_bit at PORTE.B3;

    // Alternative bit function
    sbit  P3B_PORTE_bit at PORTE.B4;

    // Alternative bit function
    sbit  P1C_PORTE_bit at PORTE.B5;
    sbit  P1B_PORTE_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int P2A_PORTE = 7;
    sbit  P2A_PORTE_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int CCP2_PORTE = 7;
    sbit  CCP2_PORTE_bit at PORTE.B7;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at PIR1.B2;
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int C3IF = 1;
    sbit  C3IF_bit at PIR2.B1;
    const register unsigned short int LCDIF = 2;
    sbit  LCDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at PIR2.B6;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // PIR3 bits
    const register unsigned short int TMR4IF = 1;
    sbit  TMR4IF_bit at PIR3.B1;
    const register unsigned short int TMR6IF = 3;
    sbit  TMR6IF_bit at PIR3.B3;
    const register unsigned short int CCP3IF = 4;
    sbit  CCP3IF_bit at PIR3.B4;
    const register unsigned short int CCP4IF = 5;
    sbit  CCP4IF_bit at PIR3.B5;
    const register unsigned short int CCP5IF = 6;
    sbit  CCP5IF_bit at PIR3.B6;

    // PIR4 bits
    const register unsigned short int SSP2IF = 0;
    sbit  SSP2IF_bit at PIR4.B0;
    const register unsigned short int BCL2IF = 1;
    sbit  BCL2IF_bit at PIR4.B1;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR4.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR4.B5;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMR1CS0 = 6;
    sbit  TMR1CS0_bit at T1CON.B6;
    const register unsigned short int TMR1CS1 = 7;
    sbit  TMR1CS1_bit at T1CON.B7;

    // T1GCON bits
    const register unsigned short int T1GSS0 = 0;
    sbit  T1GSS0_bit at T1GCON.B0;
    const register unsigned short int T1GSS1 = 1;
    sbit  T1GSS1_bit at T1GCON.B1;
    const register unsigned short int T1GVAL = 2;
    sbit  T1GVAL_bit at T1GCON.B2;
    const register unsigned short int T1GGO_NOT_DONE = 3;
    sbit  T1GGO_NOT_DONE_bit at T1GCON.B3;
    const register unsigned short int T1GSPM = 4;
    sbit  T1GSPM_bit at T1GCON.B4;
    const register unsigned short int T1GTM = 5;
    sbit  T1GTM_bit at T1GCON.B5;
    const register unsigned short int T1GPOL = 6;
    sbit  T1GPOL_bit at T1GCON.B6;
    const register unsigned short int TMR1GE = 7;
    sbit  TMR1GE_bit at T1GCON.B7;
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;

    // T2CON bits
    const register unsigned short int T2CKPS0 = 0;
    sbit  T2CKPS0_bit at T2CON.B0;
    const register unsigned short int T2CKPS1 = 1;
    sbit  T2CKPS1_bit at T2CON.B1;
    const register unsigned short int TMR2ON = 2;
    sbit  TMR2ON_bit at T2CON.B2;
    const register unsigned short int T2OUTPS0 = 3;
    sbit  T2OUTPS0_bit at T2CON.B3;
    const register unsigned short int T2OUTPS1 = 4;
    sbit  T2OUTPS1_bit at T2CON.B4;
    const register unsigned short int T2OUTPS2 = 5;
    sbit  T2OUTPS2_bit at T2CON.B5;
    const register unsigned short int T2OUTPS3 = 6;
    sbit  T2OUTPS3_bit at T2CON.B6;

    // CPSCON0 bits
    const register unsigned short int T0XCS = 0;
    sbit  T0XCS_bit at CPSCON0.B0;
    const register unsigned short int CPSOUT = 1;
    sbit  CPSOUT_bit at CPSCON0.B1;
    const register unsigned short int CPSRNG0 = 2;
    sbit  CPSRNG0_bit at CPSCON0.B2;
    const register unsigned short int CPSRNG1 = 3;
    sbit  CPSRNG1_bit at CPSCON0.B3;
    const register unsigned short int CPSRM = 6;
    sbit  CPSRM_bit at CPSCON0.B6;
    const register unsigned short int CPSON = 7;
    sbit  CPSON_bit at CPSCON0.B7;

    // CPSCON1 bits
    const register unsigned short int CPSCH0 = 0;
    sbit  CPSCH0_bit at CPSCON1.B0;
    const register unsigned short int CPSCH1 = 1;
    sbit  CPSCH1_bit at CPSCON1.B1;
    const register unsigned short int CPSCH2 = 2;
    sbit  CPSCH2_bit at CPSCON1.B2;
    const register unsigned short int CPSCH3 = 3;
    sbit  CPSCH3_bit at CPSCON1.B3;
    const register unsigned short int CPSCH4 = 4;
    sbit  CPSCH4_bit at CPSCON1.B4;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int C3IE = 1;
    sbit  C3IE_bit at PIE2.B1;
    const register unsigned short int LCDIE = 2;
    sbit  LCDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at PIE2.B6;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // PIE3 bits
    const register unsigned short int TMR4IE = 1;
    sbit  TMR4IE_bit at PIE3.B1;
    const register unsigned short int TMR6IE = 3;
    sbit  TMR6IE_bit at PIE3.B3;
    const register unsigned short int CCP3IE = 4;
    sbit  CCP3IE_bit at PIE3.B4;
    const register unsigned short int CCP4IE = 5;
    sbit  CCP4IE_bit at PIE3.B5;
    const register unsigned short int CCP5IE = 6;
    sbit  CCP5IE_bit at PIE3.B6;

    // PIE4 bits
    const register unsigned short int SSP2IE = 0;
    sbit  SSP2IE_bit at PIE4.B0;
    const register unsigned short int BCL2IE = 1;
    sbit  BCL2IE_bit at PIE4.B1;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE4.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE4.B5;

    // OPTION_REG bits
    const register unsigned short int PS0 = 0;
    sbit  PS0_bit at OPTION_REG.B0;
    const register unsigned short int PS1 = 1;
    sbit  PS1_bit at OPTION_REG.B1;
    const register unsigned short int PS2 = 2;
    sbit  PS2_bit at OPTION_REG.B2;
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at OPTION_REG.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at OPTION_REG.B5;
    const register unsigned short int INTEDG = 6;
    sbit  INTEDG_bit at OPTION_REG.B6;
    const register unsigned short int NOT_WPUEN = 7;
    sbit  NOT_WPUEN_bit at OPTION_REG.B7;
    const register unsigned short int TMR0SE = 4;
    sbit  TMR0SE_bit at OPTION_REG.B4;
    const register unsigned short int TMR0CS = 5;
    sbit  TMR0CS_bit at OPTION_REG.B5;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_RI = 2;
    sbit  NOT_RI_bit at PCON.B2;
    const register unsigned short int NOT_RMCLR = 3;
    sbit  NOT_RMCLR_bit at PCON.B3;
    const register unsigned short int STKUNF = 6;
    sbit  STKUNF_bit at PCON.B6;
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at PCON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int WDTPS0 = 1;
    sbit  WDTPS0_bit at WDTCON.B1;
    const register unsigned short int WDTPS1 = 2;
    sbit  WDTPS1_bit at WDTCON.B2;
    const register unsigned short int WDTPS2 = 3;
    sbit  WDTPS2_bit at WDTCON.B3;
    const register unsigned short int WDTPS3 = 4;
    sbit  WDTPS3_bit at WDTCON.B4;
    const register unsigned short int WDTPS4 = 5;
    sbit  WDTPS4_bit at WDTCON.B5;

    // OSCTUNE bits
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUNE.B0;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUNE.B1;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUNE.B2;
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUNE.B3;
    const register unsigned short int TUN4 = 4;
    sbit  TUN4_bit at OSCTUNE.B4;
    const register unsigned short int TUN5 = 5;
    sbit  TUN5_bit at OSCTUNE.B5;

    // OSCCON bits
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IRCF0 = 3;
    sbit  IRCF0_bit at OSCCON.B3;
    const register unsigned short int IRCF1 = 4;
    sbit  IRCF1_bit at OSCCON.B4;
    const register unsigned short int IRCF2 = 5;
    sbit  IRCF2_bit at OSCCON.B5;
    const register unsigned short int IRCF3 = 6;
    sbit  IRCF3_bit at OSCCON.B6;
    const register unsigned short int SPLLEN = 7;
    sbit  SPLLEN_bit at OSCCON.B7;

    // OSCSTAT bits
    const register unsigned short int HFIOFS = 0;
    sbit  HFIOFS_bit at OSCSTAT.B0;
    const register unsigned short int LFIOFR = 1;
    sbit  LFIOFR_bit at OSCSTAT.B1;
    const register unsigned short int MFIOFR = 2;
    sbit  MFIOFR_bit at OSCSTAT.B2;
    const register unsigned short int HFIOFL = 3;
    sbit  HFIOFL_bit at OSCSTAT.B3;
    const register unsigned short int HFIOFR = 4;
    sbit  HFIOFR_bit at OSCSTAT.B4;
    const register unsigned short int OSTS = 5;
    sbit  OSTS_bit at OSCSTAT.B5;
    const register unsigned short int PLLR = 6;
    sbit  PLLR_bit at OSCSTAT.B6;
    const register unsigned short int T1OSCR = 7;
    sbit  T1OSCR_bit at OSCSTAT.B7;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int CHS4 = 6;
    sbit  CHS4_bit at ADCON0.B6;
    const register unsigned short int ADGO = 1;
    sbit  ADGO_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

    // ADCON1 bits
    const register unsigned short int ADPREF0 = 0;
    sbit  ADPREF0_bit at ADCON1.B0;
    const register unsigned short int ADPREF1 = 1;
    sbit  ADPREF1_bit at ADCON1.B1;
    const register unsigned short int ADNREF = 2;
    sbit  ADNREF_bit at ADCON1.B2;
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;
    const register unsigned short int LATA6 = 6;
    sbit  LATA6_bit at LATA.B6;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;

    // LATB bits
    const register unsigned short int LATB0 = 0;
    sbit  LATB0_bit at LATB.B0;
    const register unsigned short int LATB1 = 1;
    sbit  LATB1_bit at LATB.B1;
    const register unsigned short int LATB2 = 2;
    sbit  LATB2_bit at LATB.B2;
    const register unsigned short int LATB3 = 3;
    sbit  LATB3_bit at LATB.B3;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
    const register unsigned short int LATB5 = 5;
    sbit  LATB5_bit at LATB.B5;
    const register unsigned short int LATB6 = 6;
    sbit  LATB6_bit at LATB.B6;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;

    // LATC bits
    const register unsigned short int LATC0 = 0;
    sbit  LATC0_bit at LATC.B0;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;

    // LATD bits
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD4 = 4;
    sbit  LATD4_bit at LATD.B4;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD7 = 7;
    sbit  LATD7_bit at LATD.B7;

    // LATE bits
    const register unsigned short int LATE0 = 0;
    sbit  LATE0_bit at LATE.B0;
    const register unsigned short int LATE1 = 1;
    sbit  LATE1_bit at LATE.B1;
    const register unsigned short int LATE2 = 2;
    sbit  LATE2_bit at LATE.B2;
    const register unsigned short int LATE3 = 3;
    sbit  LATE3_bit at LATE.B3;
    const register unsigned short int LATE4 = 4;
    sbit  LATE4_bit at LATE.B4;
    const register unsigned short int LATE5 = 5;
    sbit  LATE5_bit at LATE.B5;
    const register unsigned short int LATE6 = 6;
    sbit  LATE6_bit at LATE.B6;
    const register unsigned short int LATE7 = 7;
    sbit  LATE7_bit at LATE.B7;

    // CM1CON0 bits
    const register unsigned short int C1SYNC = 0;
    sbit  C1SYNC_bit at CM1CON0.B0;
    const register unsigned short int C1HYS = 1;
    sbit  C1HYS_bit at CM1CON0.B1;
    const register unsigned short int C1SP = 2;
    sbit  C1SP_bit at CM1CON0.B2;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at CM1CON0.B4;
    const register unsigned short int C1OE = 5;
    sbit  C1OE_bit at CM1CON0.B5;
    const register unsigned short int C1OUT_CM1CON0 = 6;
    sbit  C1OUT_CM1CON0_bit at CM1CON0.B6;
    const register unsigned short int C1ON = 7;
    sbit  C1ON_bit at CM1CON0.B7;

    // CM1CON1 bits
    const register unsigned short int C1NCH0 = 0;
    sbit  C1NCH0_bit at CM1CON1.B0;
    const register unsigned short int C1NCH1 = 1;
    sbit  C1NCH1_bit at CM1CON1.B1;
    const register unsigned short int C1PCH0 = 4;
    sbit  C1PCH0_bit at CM1CON1.B4;
    const register unsigned short int C1PCH1 = 5;
    sbit  C1PCH1_bit at CM1CON1.B5;
    const register unsigned short int C1INTN = 6;
    sbit  C1INTN_bit at CM1CON1.B6;
    const register unsigned short int C1INTP = 7;
    sbit  C1INTP_bit at CM1CON1.B7;

    // CM2CON0 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM2CON0.B0;
    const register unsigned short int C2HYS = 1;
    sbit  C2HYS_bit at CM2CON0.B1;
    const register unsigned short int C2SP = 2;
    sbit  C2SP_bit at CM2CON0.B2;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at CM2CON0.B4;
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at CM2CON0.B5;
    const register unsigned short int C2OUT_CM2CON0 = 6;
    sbit  C2OUT_CM2CON0_bit at CM2CON0.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at CM2CON0.B7;

    // CM2CON1 bits
    const register unsigned short int C2NCH0 = 0;
    sbit  C2NCH0_bit at CM2CON1.B0;
    const register unsigned short int C2NCH1 = 1;
    sbit  C2NCH1_bit at CM2CON1.B1;
    const register unsigned short int C2PCH0 = 4;
    sbit  C2PCH0_bit at CM2CON1.B4;
    const register unsigned short int C2PCH1 = 5;
    sbit  C2PCH1_bit at CM2CON1.B5;
    const register unsigned short int C2INTN = 6;
    sbit  C2INTN_bit at CM2CON1.B6;
    const register unsigned short int C2INTP = 7;
    sbit  C2INTP_bit at CM2CON1.B7;

    // CMOUT bits
    const register unsigned short int MC1OUT = 0;
    sbit  MC1OUT_bit at CMOUT.B0;
    const register unsigned short int MC2OUT = 1;
    sbit  MC2OUT_bit at CMOUT.B1;
    const register unsigned short int MC3OUT = 2;
    sbit  MC3OUT_bit at CMOUT.B2;

    // BORCON bits
    const register unsigned short int BORRDY = 0;
    sbit  BORRDY_bit at BORCON.B0;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // FVRCON bits
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

    // DACCON0 bits
    const register unsigned short int DACNSS = 0;
    sbit  DACNSS_bit at DACCON0.B0;
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DACCON0.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at DACCON0.B3;
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at DACCON0.B5;
    const register unsigned short int DACLPS = 6;
    sbit  DACLPS_bit at DACCON0.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DACCON0.B7;

    // DACCON1 bits
    const register unsigned short int DACR0 = 0;
    sbit  DACR0_bit at DACCON1.B0;
    const register unsigned short int DACR1 = 1;
    sbit  DACR1_bit at DACCON1.B1;
    const register unsigned short int DACR2 = 2;
    sbit  DACR2_bit at DACCON1.B2;
    const register unsigned short int DACR3 = 3;
    sbit  DACR3_bit at DACCON1.B3;
    const register unsigned short int DACR4 = 4;
    sbit  DACR4_bit at DACCON1.B4;

    // SRCON0 bits
    const register unsigned short int SRPR = 0;
    sbit  SRPR_bit at SRCON0.B0;
    const register unsigned short int SRPS = 1;
    sbit  SRPS_bit at SRCON0.B1;
    const register unsigned short int SRNQEN = 2;
    sbit  SRNQEN_bit at SRCON0.B2;
    const register unsigned short int SRQEN = 3;
    sbit  SRQEN_bit at SRCON0.B3;
    const register unsigned short int SRCLK0 = 4;
    sbit  SRCLK0_bit at SRCON0.B4;
    const register unsigned short int SRCLK1 = 5;
    sbit  SRCLK1_bit at SRCON0.B5;
    const register unsigned short int SRCLK2 = 6;
    sbit  SRCLK2_bit at SRCON0.B6;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_bit at SRCON0.B7;

    // SRCON1 bits
    const register unsigned short int SRRC1E = 0;
    sbit  SRRC1E_bit at SRCON1.B0;
    const register unsigned short int SRRC2E = 1;
    sbit  SRRC2E_bit at SRCON1.B1;
    const register unsigned short int SRRCKE = 2;
    sbit  SRRCKE_bit at SRCON1.B2;
    const register unsigned short int SRRPE = 3;
    sbit  SRRPE_bit at SRCON1.B3;
    const register unsigned short int SRSC1E = 4;
    sbit  SRSC1E_bit at SRCON1.B4;
    const register unsigned short int SRSC2E = 5;
    sbit  SRSC2E_bit at SRCON1.B5;
    const register unsigned short int SRSCKE = 6;
    sbit  SRSCKE_bit at SRCON1.B6;
    const register unsigned short int SRSPE = 7;
    sbit  SRSPE_bit at SRCON1.B7;

    // APFCON bits
    const register unsigned short int P1BSEL = 0;
    sbit  P1BSEL_bit at APFCON.B0;
    const register unsigned short int P1CSEL = 1;
    sbit  P1CSEL_bit at APFCON.B1;
    const register unsigned short int CCP2SEL = 2;
    sbit  CCP2SEL_bit at APFCON.B2;
    const register unsigned short int P2BSEL = 3;
    sbit  P2BSEL_bit at APFCON.B3;
    const register unsigned short int P2CSEL = 4;
    sbit  P2CSEL_bit at APFCON.B4;
    const register unsigned short int P2DSEL = 5;
    sbit  P2DSEL_bit at APFCON.B5;
    const register unsigned short int P3BSEL = 6;
    sbit  P3BSEL_bit at APFCON.B6;
    const register unsigned short int P3CSEL = 7;
    sbit  P3CSEL_bit at APFCON.B7;

    // CM3CON0 bits
    const register unsigned short int C3SYNC = 0;
    sbit  C3SYNC_bit at CM3CON0.B0;
    const register unsigned short int C3HYS = 1;
    sbit  C3HYS_bit at CM3CON0.B1;
    const register unsigned short int C3SP = 2;
    sbit  C3SP_bit at CM3CON0.B2;
    const register unsigned short int C3POL = 4;
    sbit  C3POL_bit at CM3CON0.B4;
    const register unsigned short int C3OE = 5;
    sbit  C3OE_bit at CM3CON0.B5;
    const register unsigned short int C3OUT_CM3CON0 = 6;
    sbit  C3OUT_CM3CON0_bit at CM3CON0.B6;
    const register unsigned short int C3ON = 7;
    sbit  C3ON_bit at CM3CON0.B7;

    // CM3CON1 bits
    const register unsigned short int C3NCH0 = 0;
    sbit  C3NCH0_bit at CM3CON1.B0;
    const register unsigned short int C3NCH1 = 1;
    sbit  C3NCH1_bit at CM3CON1.B1;
    const register unsigned short int C3PCH0 = 4;
    sbit  C3PCH0_bit at CM3CON1.B4;
    const register unsigned short int C3PCH1 = 5;
    sbit  C3PCH1_bit at CM3CON1.B5;
    const register unsigned short int C3INTN = 6;
    sbit  C3INTN_bit at CM3CON1.B6;
    const register unsigned short int C3INTP = 7;
    sbit  C3INTP_bit at CM3CON1.B7;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSELA.B3;
    const register unsigned short int ANSA5 = 5;
    sbit  ANSA5_bit at ANSELA.B5;

    // ANSELE bits
    const register unsigned short int ANSE0 = 0;
    sbit  ANSE0_bit at ANSELE.B0;
    const register unsigned short int ANSE1 = 1;
    sbit  ANSE1_bit at ANSELE.B1;
    const register unsigned short int ANSE2 = 2;
    sbit  ANSE2_bit at ANSELE.B2;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int LWLO = 5;
    sbit  LWLO_bit at EECON1.B5;
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at EECON1.B6;
    const register unsigned short int EEPGD = 7;
    sbit  EEPGD_bit at EECON1.B7;

    // RC1STA, RCSTA bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RC1STA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RC1STA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RC1STA.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RC1STA.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RC1STA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RC1STA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RC1STA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RC1STA.B7;

    // TX1STA, TXSTA bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TX1STA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TX1STA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TX1STA.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TX1STA.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TX1STA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TX1STA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TX1STA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TX1STA.B7;

    // BAUD1CON bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUD1CON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUD1CON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUD1CON.B3;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUD1CON.B4;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUD1CON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUD1CON.B7;

    // WPUB bits
    const register unsigned short int WPUB0 = 0;
    sbit  WPUB0_bit at WPUB.B0;
    const register unsigned short int WPUB1 = 1;
    sbit  WPUB1_bit at WPUB.B1;
    const register unsigned short int WPUB2 = 2;
    sbit  WPUB2_bit at WPUB.B2;
    const register unsigned short int WPUB3 = 3;
    sbit  WPUB3_bit at WPUB.B3;
    const register unsigned short int WPUB4 = 4;
    sbit  WPUB4_bit at WPUB.B4;
    const register unsigned short int WPUB5 = 5;
    sbit  WPUB5_bit at WPUB.B5;
    const register unsigned short int WPUB6 = 6;
    sbit  WPUB6_bit at WPUB.B6;
    const register unsigned short int WPUB7 = 7;
    sbit  WPUB7_bit at WPUB.B7;

    // SSP1STAT, SSPSTAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP1STAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP1STAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSP1STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP1STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP1STAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSP1STAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP1STAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP1STAT.B7;

    // SSP1CON1, SSPCON, SSPCON1 bits
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP1CON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP1CON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP1CON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP1CON1.B3;
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON1.B7;

    // SSP1CON2, SSPCON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP1CON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP1CON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP1CON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP1CON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP1CON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP1CON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP1CON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP1CON2.B7;

    // SSP1CON3, SSPCON3 bits
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP1CON3.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP1CON3.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP1CON3.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP1CON3.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP1CON3.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP1CON3.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP1CON3.B6;
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP1CON3.B7;

    // SSP2STAT bits
    sbit  BF_SSP2STAT_bit at SSP2STAT.B0;
    sbit  UA_SSP2STAT_bit at SSP2STAT.B1;
    sbit  R_NOT_W_SSP2STAT_bit at SSP2STAT.B2;
    sbit  S_SSP2STAT_bit at SSP2STAT.B3;
    sbit  P_SSP2STAT_bit at SSP2STAT.B4;
    sbit  D_NOT_A_SSP2STAT_bit at SSP2STAT.B5;
    sbit  CKE_SSP2STAT_bit at SSP2STAT.B6;
    sbit  SMP_SSP2STAT_bit at SSP2STAT.B7;

    // SSP2CON1 bits
    sbit  SSPM0_SSP2CON1_bit at SSP2CON1.B0;
    sbit  SSPM1_SSP2CON1_bit at SSP2CON1.B1;
    sbit  SSPM2_SSP2CON1_bit at SSP2CON1.B2;
    sbit  SSPM3_SSP2CON1_bit at SSP2CON1.B3;
    sbit  CKP_SSP2CON1_bit at SSP2CON1.B4;
    sbit  SSPEN_SSP2CON1_bit at SSP2CON1.B5;
    sbit  SSPOV_SSP2CON1_bit at SSP2CON1.B6;
    sbit  WCOL_SSP2CON1_bit at SSP2CON1.B7;

    // SSP2CON2 bits
    sbit  SEN_SSP2CON2_bit at SSP2CON2.B0;
    sbit  RSEN_SSP2CON2_bit at SSP2CON2.B1;
    sbit  PEN_SSP2CON2_bit at SSP2CON2.B2;
    sbit  RCEN_SSP2CON2_bit at SSP2CON2.B3;
    sbit  ACKEN_SSP2CON2_bit at SSP2CON2.B4;
    sbit  ACKDT_SSP2CON2_bit at SSP2CON2.B5;
    sbit  ACKSTAT_SSP2CON2_bit at SSP2CON2.B6;
    sbit  GCEN_SSP2CON2_bit at SSP2CON2.B7;

    // SSP2CON3 bits
    sbit  DHEN_SSP2CON3_bit at SSP2CON3.B0;
    sbit  AHEN_SSP2CON3_bit at SSP2CON3.B1;
    sbit  SBCDE_SSP2CON3_bit at SSP2CON3.B2;
    sbit  SDAHT_SSP2CON3_bit at SSP2CON3.B3;
    sbit  BOEN_SSP2CON3_bit at SSP2CON3.B4;
    sbit  SCIE_SSP2CON3_bit at SSP2CON3.B5;
    sbit  PCIE_SSP2CON3_bit at SSP2CON3.B6;
    sbit  ACKTIM_SSP2CON3_bit at SSP2CON3.B7;

    // Alternative bit function
    const register unsigned short int AN16 = 0;
    sbit  AN16_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int AN8 = 3;
    sbit  AN8_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int AN9 = 4;
    sbit  AN9_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int AN10 = 5;
    sbit  AN10_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int AN11 = 6;
    sbit  AN11_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int AN5 = 7;
    sbit  AN5_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int SEG41 = 0;
    sbit  SEG41_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int SEG19 = 1;
    sbit  SEG19_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int SEG20 = 2;
    sbit  SEG20_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int SEG21 = 3;
    sbit  SEG21_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int SEG22 = 4;
    sbit  SEG22_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int SEG23 = 5;
    sbit  SEG23_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int SEG24 = 6;
    sbit  SEG24_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SEG25 = 7;
    sbit  SEG25_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int CPS16 = 0;
    sbit  CPS16_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int CPS6 = 1;
    sbit  CPS6_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int CPS7 = 2;
    sbit  CPS7_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int CPS8 = 3;
    sbit  CPS8_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int CPS9 = 4;
    sbit  CPS9_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int CPS10 = 5;
    sbit  CPS10_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int CPS11 = 6;
    sbit  CPS11_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int CPS5 = 7;
    sbit  CPS5_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C1IN0N = 0;
    sbit  C1IN0N_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int C2OUT_PORTF = 1;
    sbit  C2OUT_PORTF_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int C1OUT_PORTF = 2;
    sbit  C1OUT_PORTF_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int C1IN2N = 3;
    sbit  C1IN2N_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int C2INP = 4;
    sbit  C2INP_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int C1IN1N = 5;
    sbit  C1IN1N_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C1INP = 6;
    sbit  C1INP_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int C1IN3N = 7;
    sbit  C1IN3N_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C2IN0N = 0;
    sbit  C2IN0N_bit at PORTF.B0;

    // Alternative bit function
    const register unsigned short int SRNQ = 1;
    sbit  SRNQ_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int SRQ = 2;
    sbit  SRQ_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int C2IN2N = 3;
    sbit  C2IN2N_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int C2IN1N = 5;
    sbit  C2IN1N_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C2IN3N = 7;
    sbit  C2IN3N_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C3IN2N = 3;
    sbit  C3IN2N_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int DACOUT = 5;
    sbit  DACOUT_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C3IN3N = 7;
    sbit  C3IN3N_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int AN15 = 1;
    sbit  AN15_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int AN14 = 2;
    sbit  AN14_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int AN13 = 3;
    sbit  AN13_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int AN12 = 4;
    sbit  AN12_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int NOT_MCLR = 5;
    sbit  NOT_MCLR_bit at PORTG.B5;

    // Alternative bit function
    const register unsigned short int SEG42 = 0;
    sbit  SEG42_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int SEG43 = 1;
    sbit  SEG43_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int SEG44 = 2;
    sbit  SEG44_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int SEG45 = 3;
    sbit  SEG45_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int SEG26 = 4;
    sbit  SEG26_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int CPS15 = 1;
    sbit  CPS15_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int CPS14 = 2;
    sbit  CPS14_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int CPS13 = 3;
    sbit  CPS13_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int CPS12 = 4;
    sbit  CPS12_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int C3OUT_PORTG = 1;
    sbit  C3OUT_PORTG_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int C3INP = 2;
    sbit  C3INP_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int C3IN0N = 3;
    sbit  C3IN0N_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int C3IN1N = 4;
    sbit  C3IN1N_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int CCP3 = 0;
    sbit  CCP3_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int TX2 = 1;
    sbit  TX2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int RX2 = 2;
    sbit  RX2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int CCP4 = 3;
    sbit  CCP4_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int CCP5 = 4;
    sbit  CCP5_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int P3A = 0;
    sbit  P3A_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int CK2 = 1;
    sbit  CK2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int P3D = 3;
    sbit  P3D_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int P1D = 4;
    sbit  P1D_bit at PORTG.B4;

    // CCP1CON bits
    const register unsigned short int CCP1M0 = 0;
    sbit  CCP1M0_bit at CCP1CON.B0;
    const register unsigned short int CCP1M1 = 1;
    sbit  CCP1M1_bit at CCP1CON.B1;
    const register unsigned short int CCP1M2 = 2;
    sbit  CCP1M2_bit at CCP1CON.B2;
    const register unsigned short int CCP1M3 = 3;
    sbit  CCP1M3_bit at CCP1CON.B3;
    const register unsigned short int DC1B0 = 4;
    sbit  DC1B0_bit at CCP1CON.B4;
    const register unsigned short int DC1B1 = 5;
    sbit  DC1B1_bit at CCP1CON.B5;
    const register unsigned short int P1M0 = 6;
    sbit  P1M0_bit at CCP1CON.B6;
    const register unsigned short int P1M1 = 7;
    sbit  P1M1_bit at CCP1CON.B7;

    // PWM1CON bits
    const register unsigned short int P1DC0 = 0;
    sbit  P1DC0_bit at PWM1CON.B0;
    const register unsigned short int P1DC1 = 1;
    sbit  P1DC1_bit at PWM1CON.B1;
    const register unsigned short int P1DC2 = 2;
    sbit  P1DC2_bit at PWM1CON.B2;
    const register unsigned short int P1DC3 = 3;
    sbit  P1DC3_bit at PWM1CON.B3;
    const register unsigned short int P1DC4 = 4;
    sbit  P1DC4_bit at PWM1CON.B4;
    const register unsigned short int P1DC5 = 5;
    sbit  P1DC5_bit at PWM1CON.B5;
    const register unsigned short int P1DC6 = 6;
    sbit  P1DC6_bit at PWM1CON.B6;
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at PWM1CON.B7;

    // CCP1AS, ECCP1AS bits
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at CCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at CCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at CCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at CCP1AS.B3;
    const register unsigned short int CCP1AS0 = 4;
    sbit  CCP1AS0_bit at CCP1AS.B4;
    const register unsigned short int CCP1AS1 = 5;
    sbit  CCP1AS1_bit at CCP1AS.B5;
    const register unsigned short int CCP1AS2 = 6;
    sbit  CCP1AS2_bit at CCP1AS.B6;
    const register unsigned short int CCP1ASE = 7;
    sbit  CCP1ASE_bit at CCP1AS.B7;

    // PSTR1CON bits
    const register unsigned short int STR1A = 0;
    sbit  STR1A_bit at PSTR1CON.B0;
    const register unsigned short int STR1B = 1;
    sbit  STR1B_bit at PSTR1CON.B1;
    const register unsigned short int STR1C = 2;
    sbit  STR1C_bit at PSTR1CON.B2;
    const register unsigned short int STR1D = 3;
    sbit  STR1D_bit at PSTR1CON.B3;
    const register unsigned short int STR1SYNC = 4;
    sbit  STR1SYNC_bit at PSTR1CON.B4;

    // CCP2CON bits
    const register unsigned short int CCP2M0 = 0;
    sbit  CCP2M0_bit at CCP2CON.B0;
    const register unsigned short int CCP2M1 = 1;
    sbit  CCP2M1_bit at CCP2CON.B1;
    const register unsigned short int CCP2M2 = 2;
    sbit  CCP2M2_bit at CCP2CON.B2;
    const register unsigned short int CCP2M3 = 3;
    sbit  CCP2M3_bit at CCP2CON.B3;
    const register unsigned short int DC2B0 = 4;
    sbit  DC2B0_bit at CCP2CON.B4;
    const register unsigned short int DC2B1 = 5;
    sbit  DC2B1_bit at CCP2CON.B5;
    const register unsigned short int P2M0 = 6;
    sbit  P2M0_bit at CCP2CON.B6;
    const register unsigned short int P2M1 = 7;
    sbit  P2M1_bit at CCP2CON.B7;

    // PWM2CON bits
    const register unsigned short int P2DC0 = 0;
    sbit  P2DC0_bit at PWM2CON.B0;
    const register unsigned short int P2DC1 = 1;
    sbit  P2DC1_bit at PWM2CON.B1;
    const register unsigned short int P2DC2 = 2;
    sbit  P2DC2_bit at PWM2CON.B2;
    const register unsigned short int P2DC3 = 3;
    sbit  P2DC3_bit at PWM2CON.B3;
    const register unsigned short int P2DC4 = 4;
    sbit  P2DC4_bit at PWM2CON.B4;
    const register unsigned short int P2DC5 = 5;
    sbit  P2DC5_bit at PWM2CON.B5;
    const register unsigned short int P2DC6 = 6;
    sbit  P2DC6_bit at PWM2CON.B6;
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at PWM2CON.B7;

    // CCP2AS, ECCP2AS bits
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at CCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at CCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at CCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at CCP2AS.B3;
    const register unsigned short int CCP2AS0 = 4;
    sbit  CCP2AS0_bit at CCP2AS.B4;
    const register unsigned short int CCP2AS1 = 5;
    sbit  CCP2AS1_bit at CCP2AS.B5;
    const register unsigned short int CCP2AS2 = 6;
    sbit  CCP2AS2_bit at CCP2AS.B6;
    const register unsigned short int CCP2ASE = 7;
    sbit  CCP2ASE_bit at CCP2AS.B7;

    // PSTR2CON bits
    const register unsigned short int STR2A = 0;
    sbit  STR2A_bit at PSTR2CON.B0;
    const register unsigned short int STR2B = 1;
    sbit  STR2B_bit at PSTR2CON.B1;
    const register unsigned short int STR2C = 2;
    sbit  STR2C_bit at PSTR2CON.B2;
    const register unsigned short int STR2D = 3;
    sbit  STR2D_bit at PSTR2CON.B3;
    const register unsigned short int STR2SYNC = 4;
    sbit  STR2SYNC_bit at PSTR2CON.B4;

    // CCPTMRS0 bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS0.B1;
    const register unsigned short int C2TSEL0 = 2;
    sbit  C2TSEL0_bit at CCPTMRS0.B2;
    const register unsigned short int C2TSEL1 = 3;
    sbit  C2TSEL1_bit at CCPTMRS0.B3;
    const register unsigned short int C3TSEL0 = 4;
    sbit  C3TSEL0_bit at CCPTMRS0.B4;
    const register unsigned short int C3TSEL1 = 5;
    sbit  C3TSEL1_bit at CCPTMRS0.B5;
    const register unsigned short int C4TSEL0 = 6;
    sbit  C4TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C4TSEL1 = 7;
    sbit  C4TSEL1_bit at CCPTMRS0.B7;

    // CCPTMRS1 bits
    const register unsigned short int C5TSEL0 = 0;
    sbit  C5TSEL0_bit at CCPTMRS1.B0;
    const register unsigned short int C5TSEL1 = 1;
    sbit  C5TSEL1_bit at CCPTMRS1.B1;

    // CCP3CON bits
    const register unsigned short int CCP3M0 = 0;
    sbit  CCP3M0_bit at CCP3CON.B0;
    const register unsigned short int CCP3M1 = 1;
    sbit  CCP3M1_bit at CCP3CON.B1;
    const register unsigned short int CCP3M2 = 2;
    sbit  CCP3M2_bit at CCP3CON.B2;
    const register unsigned short int CCP3M3 = 3;
    sbit  CCP3M3_bit at CCP3CON.B3;
    const register unsigned short int DC3B0 = 4;
    sbit  DC3B0_bit at CCP3CON.B4;
    const register unsigned short int DC3B1 = 5;
    sbit  DC3B1_bit at CCP3CON.B5;
    const register unsigned short int P3M0 = 6;
    sbit  P3M0_bit at CCP3CON.B6;
    const register unsigned short int P3M1 = 7;
    sbit  P3M1_bit at CCP3CON.B7;

    // PWM3CON bits
    const register unsigned short int P3DC0 = 0;
    sbit  P3DC0_bit at PWM3CON.B0;
    const register unsigned short int P3DC1 = 1;
    sbit  P3DC1_bit at PWM3CON.B1;
    const register unsigned short int P3DC2 = 2;
    sbit  P3DC2_bit at PWM3CON.B2;
    const register unsigned short int P3DC3 = 3;
    sbit  P3DC3_bit at PWM3CON.B3;
    const register unsigned short int P3DC4 = 4;
    sbit  P3DC4_bit at PWM3CON.B4;
    const register unsigned short int P3DC5 = 5;
    sbit  P3DC5_bit at PWM3CON.B5;
    const register unsigned short int P3DC6 = 6;
    sbit  P3DC6_bit at PWM3CON.B6;
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at PWM3CON.B7;

    // CCP3AS, ECCP3AS bits
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at CCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at CCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at CCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at CCP3AS.B3;
    const register unsigned short int CCP3AS0 = 4;
    sbit  CCP3AS0_bit at CCP3AS.B4;
    const register unsigned short int CCP3AS1 = 5;
    sbit  CCP3AS1_bit at CCP3AS.B5;
    const register unsigned short int CCP3AS2 = 6;
    sbit  CCP3AS2_bit at CCP3AS.B6;
    const register unsigned short int CCP3ASE = 7;
    sbit  CCP3ASE_bit at CCP3AS.B7;

    // PSTR3CON bits
    const register unsigned short int STR3A = 0;
    sbit  STR3A_bit at PSTR3CON.B0;
    const register unsigned short int STR3B = 1;
    sbit  STR3B_bit at PSTR3CON.B1;
    const register unsigned short int STR3C = 2;
    sbit  STR3C_bit at PSTR3CON.B2;
    const register unsigned short int STR3D = 3;
    sbit  STR3D_bit at PSTR3CON.B3;
    const register unsigned short int STR3SYNC = 4;
    sbit  STR3SYNC_bit at PSTR3CON.B4;

    // CCP4CON bits
    const register unsigned short int CCP4M0 = 0;
    sbit  CCP4M0_bit at CCP4CON.B0;
    const register unsigned short int CCP4M1 = 1;
    sbit  CCP4M1_bit at CCP4CON.B1;
    const register unsigned short int CCP4M2 = 2;
    sbit  CCP4M2_bit at CCP4CON.B2;
    const register unsigned short int CCP4M3 = 3;
    sbit  CCP4M3_bit at CCP4CON.B3;
    const register unsigned short int DC4B0 = 4;
    sbit  DC4B0_bit at CCP4CON.B4;
    const register unsigned short int DC4B1 = 5;
    sbit  DC4B1_bit at CCP4CON.B5;

    // CCP5CON bits
    const register unsigned short int CCP5M0 = 0;
    sbit  CCP5M0_bit at CCP5CON.B0;
    const register unsigned short int CCP5M1 = 1;
    sbit  CCP5M1_bit at CCP5CON.B1;
    const register unsigned short int CCP5M2 = 2;
    sbit  CCP5M2_bit at CCP5CON.B2;
    const register unsigned short int CCP5M3 = 3;
    sbit  CCP5M3_bit at CCP5CON.B3;
    const register unsigned short int DC5B0 = 4;
    sbit  DC5B0_bit at CCP5CON.B4;
    const register unsigned short int DC5B1 = 5;
    sbit  DC5B1_bit at CCP5CON.B5;

    // LATF bits
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF2 = 2;
    sbit  LATF2_bit at LATF.B2;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;
    const register unsigned short int LATF7 = 7;
    sbit  LATF7_bit at LATF.B7;

    // LATG bits
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG4 = 4;
    sbit  LATG4_bit at LATG.B4;
    const register unsigned short int LATG5 = 5;
    sbit  LATG5_bit at LATG.B5;

    // IOCBP bits
    const register unsigned short int IOCBP0 = 0;
    sbit  IOCBP0_bit at IOCBP.B0;
    const register unsigned short int IOCBP1 = 1;
    sbit  IOCBP1_bit at IOCBP.B1;
    const register unsigned short int IOCBP2 = 2;
    sbit  IOCBP2_bit at IOCBP.B2;
    const register unsigned short int IOCBP3 = 3;
    sbit  IOCBP3_bit at IOCBP.B3;
    const register unsigned short int IOCBP4 = 4;
    sbit  IOCBP4_bit at IOCBP.B4;
    const register unsigned short int IOCBP5 = 5;
    sbit  IOCBP5_bit at IOCBP.B5;
    const register unsigned short int IOCBP6 = 6;
    sbit  IOCBP6_bit at IOCBP.B6;
    const register unsigned short int IOCBP7 = 7;
    sbit  IOCBP7_bit at IOCBP.B7;

    // IOCBN bits
    const register unsigned short int IOCBN0 = 0;
    sbit  IOCBN0_bit at IOCBN.B0;
    const register unsigned short int IOCBN1 = 1;
    sbit  IOCBN1_bit at IOCBN.B1;
    const register unsigned short int IOCBN2 = 2;
    sbit  IOCBN2_bit at IOCBN.B2;
    const register unsigned short int IOCBN3 = 3;
    sbit  IOCBN3_bit at IOCBN.B3;
    const register unsigned short int IOCBN4 = 4;
    sbit  IOCBN4_bit at IOCBN.B4;
    const register unsigned short int IOCBN5 = 5;
    sbit  IOCBN5_bit at IOCBN.B5;
    const register unsigned short int IOCBN6 = 6;
    sbit  IOCBN6_bit at IOCBN.B6;
    const register unsigned short int IOCBN7 = 7;
    sbit  IOCBN7_bit at IOCBN.B7;

    // IOCBF bits
    const register unsigned short int IOCBF0 = 0;
    sbit  IOCBF0_bit at IOCBF.B0;
    const register unsigned short int IOCBF1 = 1;
    sbit  IOCBF1_bit at IOCBF.B1;
    const register unsigned short int IOCBF2 = 2;
    sbit  IOCBF2_bit at IOCBF.B2;
    const register unsigned short int IOCBF3 = 3;
    sbit  IOCBF3_bit at IOCBF.B3;
    const register unsigned short int IOCBF4 = 4;
    sbit  IOCBF4_bit at IOCBF.B4;
    const register unsigned short int IOCBF5 = 5;
    sbit  IOCBF5_bit at IOCBF.B5;
    const register unsigned short int IOCBF6 = 6;
    sbit  IOCBF6_bit at IOCBF.B6;
    const register unsigned short int IOCBF7 = 7;
    sbit  IOCBF7_bit at IOCBF.B7;

    // ANSELF bits
    const register unsigned short int ANSF0 = 0;
    sbit  ANSF0_bit at ANSELF.B0;
    const register unsigned short int ANSF1 = 1;
    sbit  ANSF1_bit at ANSELF.B1;
    const register unsigned short int ANSF2 = 2;
    sbit  ANSF2_bit at ANSELF.B2;
    const register unsigned short int ANSF3 = 3;
    sbit  ANSF3_bit at ANSELF.B3;
    const register unsigned short int ANSF4 = 4;
    sbit  ANSF4_bit at ANSELF.B4;
    const register unsigned short int ANSF5 = 5;
    sbit  ANSF5_bit at ANSELF.B5;
    const register unsigned short int ANSF6 = 6;
    sbit  ANSF6_bit at ANSELF.B6;
    const register unsigned short int ANSF7 = 7;
    sbit  ANSF7_bit at ANSELF.B7;

    // ANSELG bits
    const register unsigned short int ANSG1 = 1;
    sbit  ANSG1_bit at ANSELG.B1;
    const register unsigned short int ANSG2 = 2;
    sbit  ANSG2_bit at ANSELG.B2;
    const register unsigned short int ANSG3 = 3;
    sbit  ANSG3_bit at ANSELG.B3;
    const register unsigned short int ANSG4 = 4;
    sbit  ANSG4_bit at ANSELG.B4;

    // T4CON bits
    const register unsigned short int T4CKPS0 = 0;
    sbit  T4CKPS0_bit at T4CON.B0;
    const register unsigned short int T4CKPS1 = 1;
    sbit  T4CKPS1_bit at T4CON.B1;
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4CON.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4CON.B6;

    // T6CON bits
    const register unsigned short int T6CKPS0 = 0;
    sbit  T6CKPS0_bit at T6CON.B0;
    const register unsigned short int T6CKPS1 = 1;
    sbit  T6CKPS1_bit at T6CON.B1;
    const register unsigned short int TMR6ON = 2;
    sbit  TMR6ON_bit at T6CON.B2;
    const register unsigned short int T6OUTPS0 = 3;
    sbit  T6OUTPS0_bit at T6CON.B3;
    const register unsigned short int T6OUTPS1 = 4;
    sbit  T6OUTPS1_bit at T6CON.B4;
    const register unsigned short int T6OUTPS2 = 5;
    sbit  T6OUTPS2_bit at T6CON.B5;
    const register unsigned short int T6OUTPS3 = 6;
    sbit  T6OUTPS3_bit at T6CON.B6;

    // WPUG bits
    const register unsigned short int WPUG5 = 5;
    sbit  WPUG5_bit at WPUG.B5;

    // RC2STA bits
    sbit  RX9D_RC2STA_bit at RC2STA.B0;
    sbit  OERR_RC2STA_bit at RC2STA.B1;
    sbit  FERR_RC2STA_bit at RC2STA.B2;
    sbit  ADDEN_RC2STA_bit at RC2STA.B3;
    sbit  CREN_RC2STA_bit at RC2STA.B4;
    sbit  SREN_RC2STA_bit at RC2STA.B5;
    sbit  RX9_RC2STA_bit at RC2STA.B6;
    sbit  SPEN_RC2STA_bit at RC2STA.B7;

    // TX2STA bits
    sbit  TX9D_TX2STA_bit at TX2STA.B0;
    sbit  TRMT_TX2STA_bit at TX2STA.B1;
    sbit  BRGH_TX2STA_bit at TX2STA.B2;
    sbit  SENDB_TX2STA_bit at TX2STA.B3;
    sbit  SYNC_TX2STA_bit at TX2STA.B4;
    sbit  TXEN_TX2STA_bit at TX2STA.B5;
    sbit  TX9_TX2STA_bit at TX2STA.B6;
    sbit  CSRC_TX2STA_bit at TX2STA.B7;

    // BAUD2CON bits
    sbit  ABDEN_BAUD2CON_bit at BAUD2CON.B0;
    sbit  WUE_BAUD2CON_bit at BAUD2CON.B1;
    sbit  BRG16_BAUD2CON_bit at BAUD2CON.B3;
    sbit  SCKP_BAUD2CON_bit at BAUD2CON.B4;
    sbit  RCIDL_BAUD2CON_bit at BAUD2CON.B6;
    sbit  ABDOVF_BAUD2CON_bit at BAUD2CON.B7;

    // LCDCON bits
    const register unsigned short int LMUX0 = 0;
    sbit  LMUX0_bit at LCDCON.B0;
    const register unsigned short int LMUX1 = 1;
    sbit  LMUX1_bit at LCDCON.B1;
    const register unsigned short int CS0 = 2;
    sbit  CS0_bit at LCDCON.B2;
    const register unsigned short int CS1 = 3;
    sbit  CS1_bit at LCDCON.B3;
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int LCDEN = 7;
    sbit  LCDEN_bit at LCDCON.B7;

    // LCDPS bits
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;

    // LCDREF bits
    const register unsigned short int VLCD1PE = 1;
    sbit  VLCD1PE_bit at LCDREF.B1;
    const register unsigned short int VLCD2PE = 2;
    sbit  VLCD2PE_bit at LCDREF.B2;
    const register unsigned short int VLCD3PE = 3;
    sbit  VLCD3PE_bit at LCDREF.B3;
    const register unsigned short int LCDIRI = 5;
    sbit  LCDIRI_bit at LCDREF.B5;
    const register unsigned short int LCDIRS = 6;
    sbit  LCDIRS_bit at LCDREF.B6;
    const register unsigned short int LCDIRE = 7;
    sbit  LCDIRE_bit at LCDREF.B7;

    // LCDCST bits
    const register unsigned short int LCDCST0 = 0;
    sbit  LCDCST0_bit at LCDCST.B0;
    const register unsigned short int LCDCST1 = 1;
    sbit  LCDCST1_bit at LCDCST.B1;
    const register unsigned short int LCDCST2 = 2;
    sbit  LCDCST2_bit at LCDCST.B2;

    // LCDRL bits
    const register unsigned short int LRLAT0 = 0;
    sbit  LRLAT0_bit at LCDRL.B0;
    const register unsigned short int LRLAT1 = 1;
    sbit  LRLAT1_bit at LCDRL.B1;
    const register unsigned short int LRLAT2 = 2;
    sbit  LRLAT2_bit at LCDRL.B2;
    const register unsigned short int LRLBP0 = 4;
    sbit  LRLBP0_bit at LCDRL.B4;
    const register unsigned short int LRLBP1 = 5;
    sbit  LRLBP1_bit at LCDRL.B5;
    const register unsigned short int LRLAP0 = 6;
    sbit  LRLAP0_bit at LCDRL.B6;
    const register unsigned short int LRLAP1 = 7;
    sbit  LRLAP1_bit at LCDRL.B7;

    // LCDSE0 bits
    const register unsigned short int SE0 = 0;
    sbit  SE0_bit at LCDSE0.B0;
    const register unsigned short int SE1 = 1;
    sbit  SE1_bit at LCDSE0.B1;
    const register unsigned short int SE2 = 2;
    sbit  SE2_bit at LCDSE0.B2;
    const register unsigned short int SE3 = 3;
    sbit  SE3_bit at LCDSE0.B3;
    const register unsigned short int SE4 = 4;
    sbit  SE4_bit at LCDSE0.B4;
    const register unsigned short int SE5 = 5;
    sbit  SE5_bit at LCDSE0.B5;
    const register unsigned short int SE6 = 6;
    sbit  SE6_bit at LCDSE0.B6;
    const register unsigned short int SE7 = 7;
    sbit  SE7_bit at LCDSE0.B7;

    // LCDSE1 bits
    const register unsigned short int SE8 = 0;
    sbit  SE8_bit at LCDSE1.B0;
    const register unsigned short int SE9 = 1;
    sbit  SE9_bit at LCDSE1.B1;
    const register unsigned short int SE10 = 2;
    sbit  SE10_bit at LCDSE1.B2;
    const register unsigned short int SE11 = 3;
    sbit  SE11_bit at LCDSE1.B3;
    const register unsigned short int SE12 = 4;
    sbit  SE12_bit at LCDSE1.B4;
    const register unsigned short int SE13 = 5;
    sbit  SE13_bit at LCDSE1.B5;
    const register unsigned short int SE14 = 6;
    sbit  SE14_bit at LCDSE1.B6;
    const register unsigned short int SE15 = 7;
    sbit  SE15_bit at LCDSE1.B7;

    // LCDSE2 bits
    const register unsigned short int SE16 = 0;
    sbit  SE16_bit at LCDSE2.B0;
    const register unsigned short int SE17 = 1;
    sbit  SE17_bit at LCDSE2.B1;
    const register unsigned short int SE18 = 2;
    sbit  SE18_bit at LCDSE2.B2;
    const register unsigned short int SE19 = 3;
    sbit  SE19_bit at LCDSE2.B3;
    const register unsigned short int SE20 = 4;
    sbit  SE20_bit at LCDSE2.B4;
    const register unsigned short int SE21 = 5;
    sbit  SE21_bit at LCDSE2.B5;
    const register unsigned short int SE22 = 6;
    sbit  SE22_bit at LCDSE2.B6;
    const register unsigned short int SE23 = 7;
    sbit  SE23_bit at LCDSE2.B7;

    // LCDSE3 bits
    const register unsigned short int SE24 = 0;
    sbit  SE24_bit at LCDSE3.B0;
    const register unsigned short int SE25 = 1;
    sbit  SE25_bit at LCDSE3.B1;
    const register unsigned short int SE26 = 2;
    sbit  SE26_bit at LCDSE3.B2;
    const register unsigned short int SE27 = 3;
    sbit  SE27_bit at LCDSE3.B3;
    const register unsigned short int SE28 = 4;
    sbit  SE28_bit at LCDSE3.B4;
    const register unsigned short int SE29 = 5;
    sbit  SE29_bit at LCDSE3.B5;
    const register unsigned short int SE30 = 6;
    sbit  SE30_bit at LCDSE3.B6;
    const register unsigned short int SE31 = 7;
    sbit  SE31_bit at LCDSE3.B7;

    // LCDSE4 bits
    const register unsigned short int SE32 = 0;
    sbit  SE32_bit at LCDSE4.B0;
    const register unsigned short int SE33 = 1;
    sbit  SE33_bit at LCDSE4.B1;
    const register unsigned short int SE34 = 2;
    sbit  SE34_bit at LCDSE4.B2;
    const register unsigned short int SE35 = 3;
    sbit  SE35_bit at LCDSE4.B3;
    const register unsigned short int SE36 = 4;
    sbit  SE36_bit at LCDSE4.B4;
    const register unsigned short int SE37 = 5;
    sbit  SE37_bit at LCDSE4.B5;
    const register unsigned short int SE38 = 6;
    sbit  SE38_bit at LCDSE4.B6;
    const register unsigned short int SE39 = 7;
    sbit  SE39_bit at LCDSE4.B7;

    // LCDSE5 bits
    const register unsigned short int SE40 = 0;
    sbit  SE40_bit at LCDSE5.B0;
    const register unsigned short int SE41 = 1;
    sbit  SE41_bit at LCDSE5.B1;
    const register unsigned short int SE42 = 2;
    sbit  SE42_bit at LCDSE5.B2;
    const register unsigned short int SE43 = 3;
    sbit  SE43_bit at LCDSE5.B3;
    const register unsigned short int SE44 = 4;
    sbit  SE44_bit at LCDSE5.B4;
    const register unsigned short int SE45 = 5;
    sbit  SE45_bit at LCDSE5.B5;

    // LCDDATA0 bits
    const register unsigned short int SEG0COM0 = 0;
    sbit  SEG0COM0_bit at LCDDATA0.B0;
    const register unsigned short int SEG1COM0 = 1;
    sbit  SEG1COM0_bit at LCDDATA0.B1;
    const register unsigned short int SEG2COM0 = 2;
    sbit  SEG2COM0_bit at LCDDATA0.B2;
    const register unsigned short int SEG3COM0 = 3;
    sbit  SEG3COM0_bit at LCDDATA0.B3;
    const register unsigned short int SEG4COM0 = 4;
    sbit  SEG4COM0_bit at LCDDATA0.B4;
    const register unsigned short int SEG5COM0 = 5;
    sbit  SEG5COM0_bit at LCDDATA0.B5;
    const register unsigned short int SEG6COM0 = 6;
    sbit  SEG6COM0_bit at LCDDATA0.B6;
    const register unsigned short int SEG7COM0 = 7;
    sbit  SEG7COM0_bit at LCDDATA0.B7;

    // LCDDATA1 bits
    const register unsigned short int SEG8COM0 = 0;
    sbit  SEG8COM0_bit at LCDDATA1.B0;
    const register unsigned short int SEG9COM0 = 1;
    sbit  SEG9COM0_bit at LCDDATA1.B1;
    const register unsigned short int SEG10COM0 = 2;
    sbit  SEG10COM0_bit at LCDDATA1.B2;
    const register unsigned short int SEG11COM0 = 3;
    sbit  SEG11COM0_bit at LCDDATA1.B3;
    const register unsigned short int SEG12COM0 = 4;
    sbit  SEG12COM0_bit at LCDDATA1.B4;
    const register unsigned short int SEG13COM0 = 5;
    sbit  SEG13COM0_bit at LCDDATA1.B5;
    const register unsigned short int SEG14COM0 = 6;
    sbit  SEG14COM0_bit at LCDDATA1.B6;
    const register unsigned short int SEG15COM0 = 7;
    sbit  SEG15COM0_bit at LCDDATA1.B7;

    // LCDDATA2 bits
    const register unsigned short int SEG16COM0 = 0;
    sbit  SEG16COM0_bit at LCDDATA2.B0;
    const register unsigned short int SEG17COM0 = 1;
    sbit  SEG17COM0_bit at LCDDATA2.B1;
    const register unsigned short int SEG18COM0 = 2;
    sbit  SEG18COM0_bit at LCDDATA2.B2;
    const register unsigned short int SEG19COM0 = 3;
    sbit  SEG19COM0_bit at LCDDATA2.B3;
    const register unsigned short int SEG20COM0 = 4;
    sbit  SEG20COM0_bit at LCDDATA2.B4;
    const register unsigned short int SEG21COM0 = 5;
    sbit  SEG21COM0_bit at LCDDATA2.B5;
    const register unsigned short int SEG22COM0 = 6;
    sbit  SEG22COM0_bit at LCDDATA2.B6;
    const register unsigned short int SEG23COM0 = 7;
    sbit  SEG23COM0_bit at LCDDATA2.B7;

    // LCDDATA3 bits
    const register unsigned short int SEG0COM1 = 0;
    sbit  SEG0COM1_bit at LCDDATA3.B0;
    const register unsigned short int SEG1COM1 = 1;
    sbit  SEG1COM1_bit at LCDDATA3.B1;
    const register unsigned short int SEG2COM1 = 2;
    sbit  SEG2COM1_bit at LCDDATA3.B2;
    const register unsigned short int SEG3COM1 = 3;
    sbit  SEG3COM1_bit at LCDDATA3.B3;
    const register unsigned short int SEG4COM1 = 4;
    sbit  SEG4COM1_bit at LCDDATA3.B4;
    const register unsigned short int SEG5COM1 = 5;
    sbit  SEG5COM1_bit at LCDDATA3.B5;
    const register unsigned short int SEG6COM1 = 6;
    sbit  SEG6COM1_bit at LCDDATA3.B6;
    const register unsigned short int SEG7COM1 = 7;
    sbit  SEG7COM1_bit at LCDDATA3.B7;

    // LCDDATA4 bits
    const register unsigned short int SEG8COM1 = 0;
    sbit  SEG8COM1_bit at LCDDATA4.B0;
    const register unsigned short int SEG9COM1 = 1;
    sbit  SEG9COM1_bit at LCDDATA4.B1;
    const register unsigned short int SEG10COM1 = 2;
    sbit  SEG10COM1_bit at LCDDATA4.B2;
    const register unsigned short int SEG11COM1 = 3;
    sbit  SEG11COM1_bit at LCDDATA4.B3;
    const register unsigned short int SEG12COM1 = 4;
    sbit  SEG12COM1_bit at LCDDATA4.B4;
    const register unsigned short int SEG13COM1 = 5;
    sbit  SEG13COM1_bit at LCDDATA4.B5;
    const register unsigned short int SEG14COM1 = 6;
    sbit  SEG14COM1_bit at LCDDATA4.B6;
    const register unsigned short int SEG15COM1 = 7;
    sbit  SEG15COM1_bit at LCDDATA4.B7;

    // LCDDATA5 bits
    const register unsigned short int SEG16COM1 = 0;
    sbit  SEG16COM1_bit at LCDDATA5.B0;
    const register unsigned short int SEG17COM1 = 1;
    sbit  SEG17COM1_bit at LCDDATA5.B1;
    const register unsigned short int SEG18COM1 = 2;
    sbit  SEG18COM1_bit at LCDDATA5.B2;
    const register unsigned short int SEG19COM1 = 3;
    sbit  SEG19COM1_bit at LCDDATA5.B3;
    const register unsigned short int SEG20COM1 = 4;
    sbit  SEG20COM1_bit at LCDDATA5.B4;
    const register unsigned short int SEG21COM1 = 5;
    sbit  SEG21COM1_bit at LCDDATA5.B5;
    const register unsigned short int SEG22COM1 = 6;
    sbit  SEG22COM1_bit at LCDDATA5.B6;
    const register unsigned short int SEG23COM1 = 7;
    sbit  SEG23COM1_bit at LCDDATA5.B7;

    // LCDDATA6 bits
    const register unsigned short int SEG0COM2 = 0;
    sbit  SEG0COM2_bit at LCDDATA6.B0;
    const register unsigned short int SEG1COM2 = 1;
    sbit  SEG1COM2_bit at LCDDATA6.B1;
    const register unsigned short int SEG2COM2 = 2;
    sbit  SEG2COM2_bit at LCDDATA6.B2;
    const register unsigned short int SEG3COM2 = 3;
    sbit  SEG3COM2_bit at LCDDATA6.B3;
    const register unsigned short int SEG4COM2 = 4;
    sbit  SEG4COM2_bit at LCDDATA6.B4;
    const register unsigned short int SEG5COM2 = 5;
    sbit  SEG5COM2_bit at LCDDATA6.B5;
    const register unsigned short int SEG6COM2 = 6;
    sbit  SEG6COM2_bit at LCDDATA6.B6;
    const register unsigned short int SEG7COM2 = 7;
    sbit  SEG7COM2_bit at LCDDATA6.B7;

    // LCDDATA7 bits
    const register unsigned short int SEG8COM2 = 0;
    sbit  SEG8COM2_bit at LCDDATA7.B0;
    const register unsigned short int SEG9COM2 = 1;
    sbit  SEG9COM2_bit at LCDDATA7.B1;
    const register unsigned short int SEG10COM2 = 2;
    sbit  SEG10COM2_bit at LCDDATA7.B2;
    const register unsigned short int SEG11COM2 = 3;
    sbit  SEG11COM2_bit at LCDDATA7.B3;
    const register unsigned short int SEG12COM2 = 4;
    sbit  SEG12COM2_bit at LCDDATA7.B4;
    const register unsigned short int SEG13COM2 = 5;
    sbit  SEG13COM2_bit at LCDDATA7.B5;
    const register unsigned short int SEG14COM2 = 6;
    sbit  SEG14COM2_bit at LCDDATA7.B6;
    const register unsigned short int SEG15COM2 = 7;
    sbit  SEG15COM2_bit at LCDDATA7.B7;

    // LCDDATA8 bits
    const register unsigned short int SEG16COM2 = 0;
    sbit  SEG16COM2_bit at LCDDATA8.B0;
    const register unsigned short int SEG17COM2 = 1;
    sbit  SEG17COM2_bit at LCDDATA8.B1;
    const register unsigned short int SEG18COM2 = 2;
    sbit  SEG18COM2_bit at LCDDATA8.B2;
    const register unsigned short int SEG19COM2 = 3;
    sbit  SEG19COM2_bit at LCDDATA8.B3;
    const register unsigned short int SEG20COM2 = 4;
    sbit  SEG20COM2_bit at LCDDATA8.B4;
    const register unsigned short int SEG21COM2 = 5;
    sbit  SEG21COM2_bit at LCDDATA8.B5;
    const register unsigned short int SEG22COM2 = 6;
    sbit  SEG22COM2_bit at LCDDATA8.B6;
    const register unsigned short int SEG23COM2 = 7;
    sbit  SEG23COM2_bit at LCDDATA8.B7;

    // LCDDATA9 bits
    const register unsigned short int SEG0COM3 = 0;
    sbit  SEG0COM3_bit at LCDDATA9.B0;
    const register unsigned short int SEG1COM3 = 1;
    sbit  SEG1COM3_bit at LCDDATA9.B1;
    const register unsigned short int SEG2COM3 = 2;
    sbit  SEG2COM3_bit at LCDDATA9.B2;
    const register unsigned short int SEG3COM3 = 3;
    sbit  SEG3COM3_bit at LCDDATA9.B3;
    const register unsigned short int SEG4COM3 = 4;
    sbit  SEG4COM3_bit at LCDDATA9.B4;
    const register unsigned short int SEG5COM3 = 5;
    sbit  SEG5COM3_bit at LCDDATA9.B5;
    const register unsigned short int SEG6COM3 = 6;
    sbit  SEG6COM3_bit at LCDDATA9.B6;
    const register unsigned short int SEG7COM3 = 7;
    sbit  SEG7COM3_bit at LCDDATA9.B7;

    // LCDDATA10 bits
    const register unsigned short int SEG8COM3 = 0;
    sbit  SEG8COM3_bit at LCDDATA10.B0;
    const register unsigned short int SEG9COM3 = 1;
    sbit  SEG9COM3_bit at LCDDATA10.B1;
    const register unsigned short int SEG10COM3 = 2;
    sbit  SEG10COM3_bit at LCDDATA10.B2;
    const register unsigned short int SEG11COM3 = 3;
    sbit  SEG11COM3_bit at LCDDATA10.B3;
    const register unsigned short int SEG12COM3 = 4;
    sbit  SEG12COM3_bit at LCDDATA10.B4;
    const register unsigned short int SEG13COM3 = 5;
    sbit  SEG13COM3_bit at LCDDATA10.B5;
    const register unsigned short int SEG14COM3 = 6;
    sbit  SEG14COM3_bit at LCDDATA10.B6;
    const register unsigned short int SEG15COM3 = 7;
    sbit  SEG15COM3_bit at LCDDATA10.B7;

    // LCDDATA11 bits
    const register unsigned short int SEG16COM3 = 0;
    sbit  SEG16COM3_bit at LCDDATA11.B0;
    const register unsigned short int SEG17COM3 = 1;
    sbit  SEG17COM3_bit at LCDDATA11.B1;
    const register unsigned short int SEG18COM3 = 2;
    sbit  SEG18COM3_bit at LCDDATA11.B2;
    const register unsigned short int SEG19COM3 = 3;
    sbit  SEG19COM3_bit at LCDDATA11.B3;
    const register unsigned short int SEG20COM3 = 4;
    sbit  SEG20COM3_bit at LCDDATA11.B4;
    const register unsigned short int SEG21COM3 = 5;
    sbit  SEG21COM3_bit at LCDDATA11.B5;
    const register unsigned short int SEG22COM3 = 6;
    sbit  SEG22COM3_bit at LCDDATA11.B6;
    const register unsigned short int SEG23COM3 = 7;
    sbit  SEG23COM3_bit at LCDDATA11.B7;

    // LCDDATA12 bits
    const register unsigned short int SEG24COM0 = 0;
    sbit  SEG24COM0_bit at LCDDATA12.B0;
    const register unsigned short int SEG25COM0 = 1;
    sbit  SEG25COM0_bit at LCDDATA12.B1;
    const register unsigned short int SEG26COM0 = 2;
    sbit  SEG26COM0_bit at LCDDATA12.B2;
    const register unsigned short int SEG27COM0 = 3;
    sbit  SEG27COM0_bit at LCDDATA12.B3;
    const register unsigned short int SEG28COM0 = 4;
    sbit  SEG28COM0_bit at LCDDATA12.B4;
    const register unsigned short int SEG29COM0 = 5;
    sbit  SEG29COM0_bit at LCDDATA12.B5;
    const register unsigned short int SEG30COM0 = 6;
    sbit  SEG30COM0_bit at LCDDATA12.B6;
    const register unsigned short int SEG31COM0 = 7;
    sbit  SEG31COM0_bit at LCDDATA12.B7;

    // LCDDATA13 bits
    const register unsigned short int SEG32COM0 = 0;
    sbit  SEG32COM0_bit at LCDDATA13.B0;
    const register unsigned short int SEG33COM0 = 1;
    sbit  SEG33COM0_bit at LCDDATA13.B1;
    const register unsigned short int SEG34COM0 = 2;
    sbit  SEG34COM0_bit at LCDDATA13.B2;
    const register unsigned short int SEG35COM0 = 3;
    sbit  SEG35COM0_bit at LCDDATA13.B3;
    const register unsigned short int SEG36COM0 = 4;
    sbit  SEG36COM0_bit at LCDDATA13.B4;
    const register unsigned short int SEG37COM0 = 5;
    sbit  SEG37COM0_bit at LCDDATA13.B5;
    const register unsigned short int SEG38COM0 = 6;
    sbit  SEG38COM0_bit at LCDDATA13.B6;
    const register unsigned short int SEG39COM0 = 7;
    sbit  SEG39COM0_bit at LCDDATA13.B7;

    // LCDDATA14 bits
    const register unsigned short int SEG40COM0 = 0;
    sbit  SEG40COM0_bit at LCDDATA14.B0;
    const register unsigned short int SEG41COM0 = 1;
    sbit  SEG41COM0_bit at LCDDATA14.B1;
    const register unsigned short int SEG42COM0 = 2;
    sbit  SEG42COM0_bit at LCDDATA14.B2;
    const register unsigned short int SEG43COM0 = 3;
    sbit  SEG43COM0_bit at LCDDATA14.B3;
    const register unsigned short int SEG44COM0 = 4;
    sbit  SEG44COM0_bit at LCDDATA14.B4;
    const register unsigned short int SEG45COM0 = 5;
    sbit  SEG45COM0_bit at LCDDATA14.B5;

    // LCDDATA15 bits
    const register unsigned short int SEG24COM1 = 0;
    sbit  SEG24COM1_bit at LCDDATA15.B0;
    const register unsigned short int SEG25COM1 = 1;
    sbit  SEG25COM1_bit at LCDDATA15.B1;
    const register unsigned short int SEG26COM1 = 2;
    sbit  SEG26COM1_bit at LCDDATA15.B2;
    const register unsigned short int SEG27COM1 = 3;
    sbit  SEG27COM1_bit at LCDDATA15.B3;
    const register unsigned short int SEG28COM1 = 4;
    sbit  SEG28COM1_bit at LCDDATA15.B4;
    const register unsigned short int SEG29COM1 = 5;
    sbit  SEG29COM1_bit at LCDDATA15.B5;
    const register unsigned short int SEG30COM1 = 6;
    sbit  SEG30COM1_bit at LCDDATA15.B6;
    const register unsigned short int SEG31COM1 = 7;
    sbit  SEG31COM1_bit at LCDDATA15.B7;

    // LCDDATA16 bits
    const register unsigned short int SEG32COM1 = 0;
    sbit  SEG32COM1_bit at LCDDATA16.B0;
    const register unsigned short int SEG33COM1 = 1;
    sbit  SEG33COM1_bit at LCDDATA16.B1;
    const register unsigned short int SEG34COM1 = 2;
    sbit  SEG34COM1_bit at LCDDATA16.B2;
    const register unsigned short int SEG35COM1 = 3;
    sbit  SEG35COM1_bit at LCDDATA16.B3;
    const register unsigned short int SEG36COM1 = 4;
    sbit  SEG36COM1_bit at LCDDATA16.B4;
    const register unsigned short int SEG37COM1 = 5;
    sbit  SEG37COM1_bit at LCDDATA16.B5;
    const register unsigned short int SEG38COM1 = 6;
    sbit  SEG38COM1_bit at LCDDATA16.B6;
    const register unsigned short int SEG39COM1 = 7;
    sbit  SEG39COM1_bit at LCDDATA16.B7;

    // LCDDATA17 bits
    const register unsigned short int SEG40COM1 = 0;
    sbit  SEG40COM1_bit at LCDDATA17.B0;
    const register unsigned short int SEG41COM1 = 1;
    sbit  SEG41COM1_bit at LCDDATA17.B1;
    const register unsigned short int SEG42COM1 = 2;
    sbit  SEG42COM1_bit at LCDDATA17.B2;
    const register unsigned short int SEG43COM1 = 3;
    sbit  SEG43COM1_bit at LCDDATA17.B3;
    const register unsigned short int SEG44COM1 = 4;
    sbit  SEG44COM1_bit at LCDDATA17.B4;
    const register unsigned short int SEG45COM1 = 5;
    sbit  SEG45COM1_bit at LCDDATA17.B5;

    // LCDDATA18 bits
    const register unsigned short int SEG24COM2 = 0;
    sbit  SEG24COM2_bit at LCDDATA18.B0;
    const register unsigned short int SEG25COM2 = 1;
    sbit  SEG25COM2_bit at LCDDATA18.B1;
    const register unsigned short int SEG26COM2 = 2;
    sbit  SEG26COM2_bit at LCDDATA18.B2;
    const register unsigned short int SEG27COM2 = 3;
    sbit  SEG27COM2_bit at LCDDATA18.B3;
    const register unsigned short int SEG28COM2 = 4;
    sbit  SEG28COM2_bit at LCDDATA18.B4;
    const register unsigned short int SEG29COM2 = 5;
    sbit  SEG29COM2_bit at LCDDATA18.B5;
    const register unsigned short int SEG30COM2 = 6;
    sbit  SEG30COM2_bit at LCDDATA18.B6;
    const register unsigned short int SEG31COM2 = 7;
    sbit  SEG31COM2_bit at LCDDATA18.B7;

    // LCDDATA19 bits
    const register unsigned short int SEG32COM2 = 0;
    sbit  SEG32COM2_bit at LCDDATA19.B0;
    const register unsigned short int SEG33COM2 = 1;
    sbit  SEG33COM2_bit at LCDDATA19.B1;
    const register unsigned short int SEG34COM2 = 2;
    sbit  SEG34COM2_bit at LCDDATA19.B2;
    const register unsigned short int SEG35COM2 = 3;
    sbit  SEG35COM2_bit at LCDDATA19.B3;
    const register unsigned short int SEG36COM2 = 4;
    sbit  SEG36COM2_bit at LCDDATA19.B4;
    const register unsigned short int SEG37COM2 = 5;
    sbit  SEG37COM2_bit at LCDDATA19.B5;
    const register unsigned short int SEG38COM2 = 6;
    sbit  SEG38COM2_bit at LCDDATA19.B6;
    const register unsigned short int SEG39COM2 = 7;
    sbit  SEG39COM2_bit at LCDDATA19.B7;

    // LCDDATA20 bits
    const register unsigned short int SEG40COM2 = 0;
    sbit  SEG40COM2_bit at LCDDATA20.B0;
    const register unsigned short int SEG41COM2 = 1;
    sbit  SEG41COM2_bit at LCDDATA20.B1;
    const register unsigned short int SEG42COM2 = 2;
    sbit  SEG42COM2_bit at LCDDATA20.B2;
    const register unsigned short int SEG43COM2 = 3;
    sbit  SEG43COM2_bit at LCDDATA20.B3;
    const register unsigned short int SEG44COM2 = 4;
    sbit  SEG44COM2_bit at LCDDATA20.B4;
    const register unsigned short int SEG45COM2 = 5;
    sbit  SEG45COM2_bit at LCDDATA20.B5;

    // LCDDATA21 bits
    const register unsigned short int SEG24COM3 = 0;
    sbit  SEG24COM3_bit at LCDDATA21.B0;
    const register unsigned short int SEG25COM3 = 1;
    sbit  SEG25COM3_bit at LCDDATA21.B1;
    const register unsigned short int SEG26COM3 = 2;
    sbit  SEG26COM3_bit at LCDDATA21.B2;
    const register unsigned short int SEG27COM3 = 3;
    sbit  SEG27COM3_bit at LCDDATA21.B3;
    const register unsigned short int SEG28COM3 = 4;
    sbit  SEG28COM3_bit at LCDDATA21.B4;
    const register unsigned short int SEG29COM3 = 5;
    sbit  SEG29COM3_bit at LCDDATA21.B5;
    const register unsigned short int SEG30COM3 = 6;
    sbit  SEG30COM3_bit at LCDDATA21.B6;
    const register unsigned short int SEG31COM3 = 7;
    sbit  SEG31COM3_bit at LCDDATA21.B7;

    // LCDDATA22 bits
    const register unsigned short int SEG32COM3 = 0;
    sbit  SEG32COM3_bit at LCDDATA22.B0;
    const register unsigned short int SEG33COM3 = 1;
    sbit  SEG33COM3_bit at LCDDATA22.B1;
    const register unsigned short int SEG34COM3 = 2;
    sbit  SEG34COM3_bit at LCDDATA22.B2;
    const register unsigned short int SEG35COM3 = 3;
    sbit  SEG35COM3_bit at LCDDATA22.B3;
    const register unsigned short int SEG36COM3 = 4;
    sbit  SEG36COM3_bit at LCDDATA22.B4;
    const register unsigned short int SEG37COM3 = 5;
    sbit  SEG37COM3_bit at LCDDATA22.B5;
    const register unsigned short int SEG38COM3 = 6;
    sbit  SEG38COM3_bit at LCDDATA22.B6;
    const register unsigned short int SEG39COM3 = 7;
    sbit  SEG39COM3_bit at LCDDATA22.B7;

    // LCDDATA23 bits
    const register unsigned short int SEG40COM3 = 0;
    sbit  SEG40COM3_bit at LCDDATA23.B0;
    const register unsigned short int SEG41COM3 = 1;
    sbit  SEG41COM3_bit at LCDDATA23.B1;
    const register unsigned short int SEG42COM3 = 2;
    sbit  SEG42COM3_bit at LCDDATA23.B2;
    const register unsigned short int SEG43COM3 = 3;
    sbit  SEG43COM3_bit at LCDDATA23.B3;
    const register unsigned short int SEG44COM3 = 4;
    sbit  SEG44COM3_bit at LCDDATA23.B4;
    const register unsigned short int SEG45COM3 = 5;
    sbit  SEG45COM3_bit at LCDDATA23.B5;

    // STATUS_SHAD bits
    const register unsigned short int C_SHAD = 0;
    sbit  C_SHAD_bit at STATUS_SHAD.B0;
    const register unsigned short int DC_SHAD = 1;
    sbit  DC_SHAD_bit at STATUS_SHAD.B1;
    const register unsigned short int Z_SHAD = 2;
    sbit  Z_SHAD_bit at STATUS_SHAD.B2;

    // PORTA bits
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA6 = 6;
    sbit  RA6_bit at PORTA.B6;
    const register unsigned short int RA5 = 5;
    sbit  RA5_bit at PORTA.B5;
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

    // PORTB bits
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

    // PORTC bits
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

    // PORTD bits
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

    // PORTE bits
    const register unsigned short int RE7 = 7;
    sbit  RE7_bit at PORTE.B7;
    const register unsigned short int RE6 = 6;
    sbit  RE6_bit at PORTE.B6;
    const register unsigned short int RE5 = 5;
    sbit  RE5_bit at PORTE.B5;
    const register unsigned short int RE4 = 4;
    sbit  RE4_bit at PORTE.B4;
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;

    // TRISA bits
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA6 = 6;
    sbit  TRISA6_bit at TRISA.B6;
    const register unsigned short int TRISA5 = 5;
    sbit  TRISA5_bit at TRISA.B5;
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

    // TRISB bits
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

    // TRISC bits
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

    // TRISD bits
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

    // TRISE bits
    const register unsigned short int TRISE7 = 7;
    sbit  TRISE7_bit at TRISE.B7;
    const register unsigned short int TRISE6 = 6;
    sbit  TRISE6_bit at TRISE.B6;
    const register unsigned short int TRISE5 = 5;
    sbit  TRISE5_bit at TRISE.B5;
    const register unsigned short int TRISE4 = 4;
    sbit  TRISE4_bit at TRISE.B4;
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at TRISE.B3;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

    // PORTF bits
    const register unsigned short int RF7 = 7;
    sbit  RF7_bit at PORTF.B7;
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

    // PORTG bits
    const register unsigned short int RG5 = 5;
    sbit  RG5_bit at PORTG.B5;
    const register unsigned short int RG4 = 4;
    sbit  RG4_bit at PORTG.B4;
    const register unsigned short int RG3 = 3;
    sbit  RG3_bit at PORTG.B3;
    const register unsigned short int RG2 = 2;
    sbit  RG2_bit at PORTG.B2;
    const register unsigned short int RG1 = 1;
    sbit  RG1_bit at PORTG.B1;
    const register unsigned short int RG0 = 0;
    sbit  RG0_bit at PORTG.B0;

    // TRISF bits
    const register unsigned short int TRISF7 = 7;
    sbit  TRISF7_bit at TRISF.B7;
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

    // TRISG bits
    const register unsigned short int TRISG5 = 5;
    sbit  TRISG5_bit at TRISG.B5;
    const register unsigned short int TRISG4 = 4;
    sbit  TRISG4_bit at TRISG.B4;
    const register unsigned short int TRISG3 = 3;
    sbit  TRISG3_bit at TRISG.B3;
    const register unsigned short int TRISG2 = 2;
    sbit  TRISG2_bit at TRISG.B2;
    const register unsigned short int TRISG1 = 1;
    sbit  TRISG1_bit at TRISG.B1;
    const register unsigned short int TRISG0 = 0;
    sbit  TRISG0_bit at TRISG.B0;