// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000800;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

// Addres offset from Output to Input (port) registers
const signed short   OUTPUT_TO_INPUT_OFFSET    =     -2;

// Rx space registers
sfr rx unsigned short R0  absolute 0x00;
sfr rx unsigned short R1  absolute 0x01;
sfr rx unsigned short R2  absolute 0x02;
sfr rx unsigned short R3  absolute 0x03;
sfr rx unsigned short R4  absolute 0x04;
sfr rx unsigned short R5  absolute 0x05;
sfr rx unsigned short R6  absolute 0x06;
sfr rx unsigned short R7  absolute 0x07;
sfr rx unsigned short R8  absolute 0x08;
sfr rx unsigned short R9  absolute 0x09;
sfr rx unsigned short R10 absolute 0x0A;
sfr rx unsigned short R11 absolute 0x0B;
sfr rx unsigned short R12 absolute 0x0C;
sfr rx unsigned short R13 absolute 0x0D;
sfr rx unsigned short R14 absolute 0x0E;
sfr rx unsigned short R15 absolute 0x0F;
sfr rx unsigned short R16 absolute 0x10;
sfr rx unsigned short R17 absolute 0x11;
sfr rx unsigned short R18 absolute 0x12;
sfr rx unsigned short R19 absolute 0x13;
sfr rx unsigned short R20 absolute 0x14;
sfr rx unsigned short R21 absolute 0x15;
sfr rx unsigned short R22 absolute 0x16;
sfr rx unsigned short R23 absolute 0x17;
sfr rx unsigned short R24 absolute 0x18;
sfr rx unsigned short R25 absolute 0x19;
sfr rx unsigned short R26 absolute 0x1A;
sfr rx unsigned short R27 absolute 0x1B;
sfr rx unsigned short R28 absolute 0x1C;
sfr rx unsigned short R29 absolute 0x1D;
sfr rx unsigned short R30 absolute 0x1E;
sfr rx unsigned short R31 absolute 0x1F;

// X, Y and Z registers
sfr rx unsigned short XL absolute 0x1A;
sfr rx unsigned short XH absolute 0x1B;
sfr rx unsigned short YL absolute 0x1C;
sfr rx unsigned short YH absolute 0x1D;
sfr rx unsigned short ZL absolute 0x1E;
sfr rx unsigned short ZH absolute 0x1F;
sfr rx unsigned int   X  absolute 0x1A;
sfr rx unsigned int   Y  absolute 0x1C;
sfr rx unsigned int   Z  absolute 0x1E;

const unsigned int IVT_ADDR_RESET            = 0x0000;
const unsigned int IVT_ADDR_INT0             = 0x0001;
const unsigned int IVT_ADDR_INT1             = 0x0002;
const unsigned int IVT_ADDR_TIMER1_CAPT1     = 0x0003;
const unsigned int IVT_ADDR_TIMER1_COMP1     = 0x0004;
const unsigned int IVT_ADDR_TIMER1_OVF1      = 0x0005;
const unsigned int IVT_ADDR_TIMER0_OVF0      = 0x0006;
const unsigned int IVT_ADDR_UART__RX         = 0x0007;
const unsigned int IVT_ADDR_UART__UDRE       = 0x0008;
const unsigned int IVT_ADDR_UART__TX         = 0x0009;
const unsigned int IVT_ADDR_ANA_COMP         = 0x000A;


sfr io unsigned short volatile SREG absolute 0x5F;
    sbit  SREG_C_bit at SREG.B0;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_Z_bit at SREG.B1;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_N_bit at SREG.B2;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_V_bit at SREG.B3;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_S_bit at SREG.B4;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_H_bit at SREG.B5;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_T_bit at SREG.B6;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_I_bit at SREG.B7;
    const register unsigned short int SREG_I = 7;

sfr io unsigned short volatile SPL absolute 0x5D;
    sbit  SP0_bit at SPL.B0;
    const register unsigned short int SP0 = 0;
    sbit  SP1_bit at SPL.B1;
    const register unsigned short int SP1 = 1;
    sbit  SP2_bit at SPL.B2;
    const register unsigned short int SP2 = 2;
    sbit  SP3_bit at SPL.B3;
    const register unsigned short int SP3 = 3;
    sbit  SP4_bit at SPL.B4;
    const register unsigned short int SP4 = 4;
    sbit  SP5_bit at SPL.B5;
    const register unsigned short int SP5 = 5;
    sbit  SP6_bit at SPL.B6;
    const register unsigned short int SP6 = 6;
    sbit  SP7_bit at SPL.B7;
    const register unsigned short int SP7 = 7;

sfr io unsigned short volatile GIMSK absolute 0x5B;
    sbit  INT0_bit at GIMSK.B6;
    const register unsigned short int INT0 = 6;
    sbit  INT1_bit at GIMSK.B7;
    const register unsigned short int INT1 = 7;

sfr io unsigned short volatile GIFR absolute 0x5A;
    sbit  INTF0_bit at GIFR.B6;
    const register unsigned short int INTF0 = 6;
    sbit  INTF1_bit at GIFR.B7;
    const register unsigned short int INTF1 = 7;

sfr io unsigned short TIMSK absolute 0x59;
    sbit  TOIE0_bit at TIMSK.B1;
    const register unsigned short int TOIE0 = 1;
    sbit  TICIE1_bit at TIMSK.B3;
    const register unsigned short int TICIE1 = 3;
    sbit  OCIE1A_bit at TIMSK.B6;
    const register unsigned short int OCIE1A = 6;
    sbit  TOIE1_bit at TIMSK.B7;
    const register unsigned short int TOIE1 = 7;

sfr io unsigned short volatile TIFR absolute 0x58;
    sbit  TOV0_bit at TIFR.B1;
    const register unsigned short int TOV0 = 1;
    sbit  ICF1_bit at TIFR.B3;
    const register unsigned short int ICF1 = 3;
    sbit  OCF1A_bit at TIFR.B6;
    const register unsigned short int OCF1A = 6;
    sbit  TOV1_bit at TIFR.B7;
    const register unsigned short int TOV1 = 7;

sfr io unsigned short volatile MCUCR absolute 0x55;
    sbit  ISC00_bit at MCUCR.B0;
    const register unsigned short int ISC00 = 0;
    sbit  ISC01_bit at MCUCR.B1;
    const register unsigned short int ISC01 = 1;
    sbit  ISC10_bit at MCUCR.B2;
    const register unsigned short int ISC10 = 2;
    sbit  ISC11_bit at MCUCR.B3;
    const register unsigned short int ISC11 = 3;
    sbit  SM_bit at MCUCR.B4;
    const register unsigned short int SM = 4;
    sbit  SE_bit at MCUCR.B5;
    const register unsigned short int SE = 5;

sfr io unsigned short TCCR0 absolute 0x53;
    sbit  CS00_bit at TCCR0.B0;
    const register unsigned short int CS00 = 0;
    sbit  CS01_bit at TCCR0.B1;
    const register unsigned short int CS01 = 1;
    sbit  CS02_bit at TCCR0.B2;
    const register unsigned short int CS02 = 2;

sfr io unsigned short volatile TCNT0 absolute 0x52;
    sbit  TCNT00_bit at TCNT0.B0;
    const register unsigned short int TCNT00 = 0;
    sbit  TCNT01_bit at TCNT0.B1;
    const register unsigned short int TCNT01 = 1;
    sbit  TCNT02_bit at TCNT0.B2;
    const register unsigned short int TCNT02 = 2;
    sbit  TCNT03_bit at TCNT0.B3;
    const register unsigned short int TCNT03 = 3;
    sbit  TCNT04_bit at TCNT0.B4;
    const register unsigned short int TCNT04 = 4;
    sbit  TCNT05_bit at TCNT0.B5;
    const register unsigned short int TCNT05 = 5;
    sbit  TCNT06_bit at TCNT0.B6;
    const register unsigned short int TCNT06 = 6;
    sbit  TCNT07_bit at TCNT0.B7;
    const register unsigned short int TCNT07 = 7;

sfr io unsigned short TCCR1A absolute 0x4F;
    sbit  PWM10_bit at TCCR1A.B0;
    const register unsigned short int PWM10 = 0;
    sbit  PWM11_bit at TCCR1A.B1;
    const register unsigned short int PWM11 = 1;
    sbit  COM1A0_bit at TCCR1A.B6;
    const register unsigned short int COM1A0 = 6;
    sbit  COM1A1_bit at TCCR1A.B7;
    const register unsigned short int COM1A1 = 7;

sfr io unsigned short TCCR1B absolute 0x4E;
    sbit  CS10_bit at TCCR1B.B0;
    const register unsigned short int CS10 = 0;
    sbit  CS11_bit at TCCR1B.B1;
    const register unsigned short int CS11 = 1;
    sbit  CS12_bit at TCCR1B.B2;
    const register unsigned short int CS12 = 2;
    sbit  CTC1_bit at TCCR1B.B3;
    const register unsigned short int CTC1 = 3;
    sbit  ICES1_bit at TCCR1B.B6;
    const register unsigned short int ICES1 = 6;
    sbit  ICNC1_bit at TCCR1B.B7;
    const register unsigned short int ICNC1 = 7;

sfr io unsigned short volatile TCNT1H absolute 0x4D;
    sbit  TCNT1H0_bit at TCNT1H.B0;
    const register unsigned short int TCNT1H0 = 0;
    sbit  TCNT1H1_bit at TCNT1H.B1;
    const register unsigned short int TCNT1H1 = 1;
    sbit  TCNT1H2_bit at TCNT1H.B2;
    const register unsigned short int TCNT1H2 = 2;
    sbit  TCNT1H3_bit at TCNT1H.B3;
    const register unsigned short int TCNT1H3 = 3;
    sbit  TCNT1H4_bit at TCNT1H.B4;
    const register unsigned short int TCNT1H4 = 4;
    sbit  TCNT1H5_bit at TCNT1H.B5;
    const register unsigned short int TCNT1H5 = 5;
    sbit  TCNT1H6_bit at TCNT1H.B6;
    const register unsigned short int TCNT1H6 = 6;
    sbit  TCNT1H7_bit at TCNT1H.B7;
    const register unsigned short int TCNT1H7 = 7;

sfr io unsigned short volatile TCNT1L absolute 0x4C;
    sbit  TCNT1L0_bit at TCNT1L.B0;
    const register unsigned short int TCNT1L0 = 0;
    sbit  TCNT1L1_bit at TCNT1L.B1;
    const register unsigned short int TCNT1L1 = 1;
    sbit  TCNT1L2_bit at TCNT1L.B2;
    const register unsigned short int TCNT1L2 = 2;
    sbit  TCNT1L3_bit at TCNT1L.B3;
    const register unsigned short int TCNT1L3 = 3;
    sbit  TCNT1L4_bit at TCNT1L.B4;
    const register unsigned short int TCNT1L4 = 4;
    sbit  TCNT1L5_bit at TCNT1L.B5;
    const register unsigned short int TCNT1L5 = 5;
    sbit  TCNT1L6_bit at TCNT1L.B6;
    const register unsigned short int TCNT1L6 = 6;
    sbit  TCNT1L7_bit at TCNT1L.B7;
    const register unsigned short int TCNT1L7 = 7;

sfr io unsigned short OCR1AH absolute 0x4B;
    sbit  OCR1AH0_bit at OCR1AH.B0;
    const register unsigned short int OCR1AH0 = 0;
    sbit  OCR1AH1_bit at OCR1AH.B1;
    const register unsigned short int OCR1AH1 = 1;
    sbit  OCR1AH2_bit at OCR1AH.B2;
    const register unsigned short int OCR1AH2 = 2;
    sbit  OCR1AH3_bit at OCR1AH.B3;
    const register unsigned short int OCR1AH3 = 3;
    sbit  OCR1AH4_bit at OCR1AH.B4;
    const register unsigned short int OCR1AH4 = 4;
    sbit  OCR1AH5_bit at OCR1AH.B5;
    const register unsigned short int OCR1AH5 = 5;
    sbit  OCR1AH6_bit at OCR1AH.B6;
    const register unsigned short int OCR1AH6 = 6;
    sbit  OCR1AH7_bit at OCR1AH.B7;
    const register unsigned short int OCR1AH7 = 7;

sfr io unsigned short OCR1AL absolute 0x4A;
    sbit  OCR1AL0_bit at OCR1AL.B0;
    const register unsigned short int OCR1AL0 = 0;
    sbit  OCR1AL1_bit at OCR1AL.B1;
    const register unsigned short int OCR1AL1 = 1;
    sbit  OCR1AL2_bit at OCR1AL.B2;
    const register unsigned short int OCR1AL2 = 2;
    sbit  OCR1AL3_bit at OCR1AL.B3;
    const register unsigned short int OCR1AL3 = 3;
    sbit  OCR1AL4_bit at OCR1AL.B4;
    const register unsigned short int OCR1AL4 = 4;
    sbit  OCR1AL5_bit at OCR1AL.B5;
    const register unsigned short int OCR1AL5 = 5;
    sbit  OCR1AL6_bit at OCR1AL.B6;
    const register unsigned short int OCR1AL6 = 6;
    sbit  OCR1AL7_bit at OCR1AL.B7;
    const register unsigned short int OCR1AL7 = 7;

sfr io unsigned short volatile ICR1H absolute 0x45;
    sbit  ICR1H0_bit at ICR1H.B0;
    const register unsigned short int ICR1H0 = 0;
    sbit  ICR1H1_bit at ICR1H.B1;
    const register unsigned short int ICR1H1 = 1;
    sbit  ICR1H2_bit at ICR1H.B2;
    const register unsigned short int ICR1H2 = 2;
    sbit  ICR1H3_bit at ICR1H.B3;
    const register unsigned short int ICR1H3 = 3;
    sbit  ICR1H4_bit at ICR1H.B4;
    const register unsigned short int ICR1H4 = 4;
    sbit  ICR1H5_bit at ICR1H.B5;
    const register unsigned short int ICR1H5 = 5;
    sbit  ICR1H6_bit at ICR1H.B6;
    const register unsigned short int ICR1H6 = 6;
    sbit  ICR1H7_bit at ICR1H.B7;
    const register unsigned short int ICR1H7 = 7;

sfr io unsigned short volatile ICR1L absolute 0x44;
    sbit  ICR1L0_bit at ICR1L.B0;
    const register unsigned short int ICR1L0 = 0;
    sbit  ICR1L1_bit at ICR1L.B1;
    const register unsigned short int ICR1L1 = 1;
    sbit  ICR1L2_bit at ICR1L.B2;
    const register unsigned short int ICR1L2 = 2;
    sbit  ICR1L3_bit at ICR1L.B3;
    const register unsigned short int ICR1L3 = 3;
    sbit  ICR1L4_bit at ICR1L.B4;
    const register unsigned short int ICR1L4 = 4;
    sbit  ICR1L5_bit at ICR1L.B5;
    const register unsigned short int ICR1L5 = 5;
    sbit  ICR1L6_bit at ICR1L.B6;
    const register unsigned short int ICR1L6 = 6;
    sbit  ICR1L7_bit at ICR1L.B7;
    const register unsigned short int ICR1L7 = 7;

sfr io unsigned short volatile WDTCR absolute 0x41;
    sbit  WDP0_bit at WDTCR.B0;
    const register unsigned short int WDP0 = 0;
    sbit  WDP1_bit at WDTCR.B1;
    const register unsigned short int WDP1 = 1;
    sbit  WDP2_bit at WDTCR.B2;
    const register unsigned short int WDP2 = 2;
    sbit  WDE_bit at WDTCR.B3;
    const register unsigned short int WDE = 3;
    sbit  WDTOE_bit at WDTCR.B4;
    const register unsigned short int WDTOE = 4;

sfr io unsigned short volatile EEARL absolute 0x3E;
sfr io unsigned short volatile EEAR absolute 0x3E;
    sbit  EEAR0_bit at EEAR.B0;
    const register unsigned short int EEAR0 = 0;
    sbit  EEAR1_bit at EEAR.B1;
    const register unsigned short int EEAR1 = 1;
    sbit  EEAR2_bit at EEAR.B2;
    const register unsigned short int EEAR2 = 2;
    sbit  EEAR3_bit at EEAR.B3;
    const register unsigned short int EEAR3 = 3;
    sbit  EEAR4_bit at EEAR.B4;
    const register unsigned short int EEAR4 = 4;
    sbit  EEAR5_bit at EEAR.B5;
    const register unsigned short int EEAR5 = 5;
    sbit  EEAR6_bit at EEAR.B6;
    const register unsigned short int EEAR6 = 6;

sfr io unsigned short volatile EEDR absolute 0x3D;
    sbit  EEDR0_bit at EEDR.B0;
    const register unsigned short int EEDR0 = 0;
    sbit  EEDR1_bit at EEDR.B1;
    const register unsigned short int EEDR1 = 1;
    sbit  EEDR2_bit at EEDR.B2;
    const register unsigned short int EEDR2 = 2;
    sbit  EEDR3_bit at EEDR.B3;
    const register unsigned short int EEDR3 = 3;
    sbit  EEDR4_bit at EEDR.B4;
    const register unsigned short int EEDR4 = 4;
    sbit  EEDR5_bit at EEDR.B5;
    const register unsigned short int EEDR5 = 5;
    sbit  EEDR6_bit at EEDR.B6;
    const register unsigned short int EEDR6 = 6;
    sbit  EEDR7_bit at EEDR.B7;
    const register unsigned short int EEDR7 = 7;

sfr io unsigned short volatile EECR absolute 0x3C;
    sbit  EERE_bit at EECR.B0;
    const register unsigned short int EERE = 0;
    sbit  EEWE_bit at EECR.B1;
    const register unsigned short int EEWE = 1;
    sbit  EEMWE_bit at EECR.B2;
    const register unsigned short int EEMWE = 2;

sfr io unsigned short PORTB absolute 0x38;
    sbit  PORTB0_bit at PORTB.B0;
    const register unsigned short int PORTB0 = 0;
    sbit  PORTB1_bit at PORTB.B1;
    const register unsigned short int PORTB1 = 1;
    sbit  PORTB2_bit at PORTB.B2;
    const register unsigned short int PORTB2 = 2;
    sbit  PORTB3_bit at PORTB.B3;
    const register unsigned short int PORTB3 = 3;
    sbit  PORTB4_bit at PORTB.B4;
    const register unsigned short int PORTB4 = 4;
    sbit  PORTB5_bit at PORTB.B5;
    const register unsigned short int PORTB5 = 5;
    sbit  PORTB6_bit at PORTB.B6;
    const register unsigned short int PORTB6 = 6;
    sbit  PORTB7_bit at PORTB.B7;
    const register unsigned short int PORTB7 = 7;

sfr io unsigned short DDRB absolute 0x37;
    sbit  DDB0_bit at DDRB.B0;
    const register unsigned short int DDB0 = 0;
    sbit  DDB1_bit at DDRB.B1;
    const register unsigned short int DDB1 = 1;
    sbit  DDB2_bit at DDRB.B2;
    const register unsigned short int DDB2 = 2;
    sbit  DDB3_bit at DDRB.B3;
    const register unsigned short int DDB3 = 3;
    sbit  DDB4_bit at DDRB.B4;
    const register unsigned short int DDB4 = 4;
    sbit  DDB5_bit at DDRB.B5;
    const register unsigned short int DDB5 = 5;
    sbit  DDB6_bit at DDRB.B6;
    const register unsigned short int DDB6 = 6;
    sbit  DDB7_bit at DDRB.B7;
    const register unsigned short int DDB7 = 7;

sfr io unsigned short volatile PINB absolute 0x36;
    sbit  PINB0_bit at PINB.B0;
    const register unsigned short int PINB0 = 0;
    sbit  PINB1_bit at PINB.B1;
    const register unsigned short int PINB1 = 1;
    sbit  PINB2_bit at PINB.B2;
    const register unsigned short int PINB2 = 2;
    sbit  PINB3_bit at PINB.B3;
    const register unsigned short int PINB3 = 3;
    sbit  PINB4_bit at PINB.B4;
    const register unsigned short int PINB4 = 4;
    sbit  PINB5_bit at PINB.B5;
    const register unsigned short int PINB5 = 5;
    sbit  PINB6_bit at PINB.B6;
    const register unsigned short int PINB6 = 6;
    sbit  PINB7_bit at PINB.B7;
    const register unsigned short int PINB7 = 7;

sfr io unsigned short PORTD absolute 0x32;
    sbit  PORTD0_bit at PORTD.B0;
    const register unsigned short int PORTD0 = 0;
    sbit  PORTD1_bit at PORTD.B1;
    const register unsigned short int PORTD1 = 1;
    sbit  PORTD2_bit at PORTD.B2;
    const register unsigned short int PORTD2 = 2;
    sbit  PORTD3_bit at PORTD.B3;
    const register unsigned short int PORTD3 = 3;
    sbit  PORTD4_bit at PORTD.B4;
    const register unsigned short int PORTD4 = 4;
    sbit  PORTD5_bit at PORTD.B5;
    const register unsigned short int PORTD5 = 5;
    sbit  PORTD6_bit at PORTD.B6;
    const register unsigned short int PORTD6 = 6;

sfr io unsigned short DDRD absolute 0x31;
    sbit  DDD0_bit at DDRD.B0;
    const register unsigned short int DDD0 = 0;
    sbit  DDD1_bit at DDRD.B1;
    const register unsigned short int DDD1 = 1;
    sbit  DDD2_bit at DDRD.B2;
    const register unsigned short int DDD2 = 2;
    sbit  DDD3_bit at DDRD.B3;
    const register unsigned short int DDD3 = 3;
    sbit  DDD4_bit at DDRD.B4;
    const register unsigned short int DDD4 = 4;
    sbit  DDD5_bit at DDRD.B5;
    const register unsigned short int DDD5 = 5;
    sbit  DDD6_bit at DDRD.B6;
    const register unsigned short int DDD6 = 6;

sfr io unsigned short volatile PIND absolute 0x30;
    sbit  PIND0_bit at PIND.B0;
    const register unsigned short int PIND0 = 0;
    sbit  PIND1_bit at PIND.B1;
    const register unsigned short int PIND1 = 1;
    sbit  PIND2_bit at PIND.B2;
    const register unsigned short int PIND2 = 2;
    sbit  PIND3_bit at PIND.B3;
    const register unsigned short int PIND3 = 3;
    sbit  PIND4_bit at PIND.B4;
    const register unsigned short int PIND4 = 4;
    sbit  PIND5_bit at PIND.B5;
    const register unsigned short int PIND5 = 5;
    sbit  PIND6_bit at PIND.B6;
    const register unsigned short int PIND6 = 6;

sfr io unsigned short volatile UDR0 absolute 0x2C;
sfr io unsigned short volatile UDR absolute 0x2C;
    sbit  UDR0__bit at UDR.B0;
    const register unsigned short int UDR0_ = 0;
    sbit  UDR1_bit at UDR.B1;
    const register unsigned short int UDR1 = 1;
    sbit  UDR2_bit at UDR.B2;
    const register unsigned short int UDR2 = 2;
    sbit  UDR3_bit at UDR.B3;
    const register unsigned short int UDR3 = 3;
    sbit  UDR4_bit at UDR.B4;
    const register unsigned short int UDR4 = 4;
    sbit  UDR5_bit at UDR.B5;
    const register unsigned short int UDR5 = 5;
    sbit  UDR6_bit at UDR.B6;
    const register unsigned short int UDR6 = 6;
    sbit  UDR7_bit at UDR.B7;
    const register unsigned short int UDR7 = 7;

sfr io unsigned short volatile USR absolute 0x2B;
    sbit  OR__bit at USR.B3;
    const register unsigned short int OR_ = 3;
    sbit  FE_bit at USR.B4;
    const register unsigned short int FE = 4;
    sbit  UDRE0_bit at USR.B5;
    const register unsigned short int UDRE0 = 5;
    sbit  UDRE_bit at USR.B5;
    const register unsigned short int UDRE = 5;
    sbit  TXC0_bit at USR.B6;
    const register unsigned short int TXC0 = 6;
    sbit  TXC_bit at USR.B6;
    const register unsigned short int TXC = 6;
    sbit  RXC0_bit at USR.B7;
    const register unsigned short int RXC0 = 7;
    sbit  RXC_bit at USR.B7;
    const register unsigned short int RXC = 7;

sfr io unsigned short volatile UCSRB absolute 0x2A;
sfr io unsigned short volatile UCR absolute 0x2A;
    sbit  TXB8_bit at UCR.B0;
    const register unsigned short int TXB8 = 0;
    sbit  RXB8_bit at UCR.B1;
    const register unsigned short int RXB8 = 1;
    sbit  CHR9_bit at UCR.B2;
    const register unsigned short int CHR9 = 2;
    sbit  TXEN_bit at UCR.B3;
    const register unsigned short int TXEN = 3;
    sbit  RXEN_bit at UCR.B4;
    const register unsigned short int RXEN = 4;
    sbit  UDRIE_bit at UCR.B5;
    const register unsigned short int UDRIE = 5;
    sbit  TXCIE_bit at UCR.B6;
    const register unsigned short int TXCIE = 6;
    sbit  RXCIE_bit at UCR.B7;
    const register unsigned short int RXCIE = 7;

sfr io unsigned short UBRR absolute 0x29;
    sbit  UBRR0_bit at UBRR.B0;
    const register unsigned short int UBRR0 = 0;
    sbit  UBRR1_bit at UBRR.B1;
    const register unsigned short int UBRR1 = 1;
    sbit  UBRR2_bit at UBRR.B2;
    const register unsigned short int UBRR2 = 2;
    sbit  UBRR3_bit at UBRR.B3;
    const register unsigned short int UBRR3 = 3;
    sbit  UBRR4_bit at UBRR.B4;
    const register unsigned short int UBRR4 = 4;
    sbit  UBRR5_bit at UBRR.B5;
    const register unsigned short int UBRR5 = 5;
    sbit  UBRR6_bit at UBRR.B6;
    const register unsigned short int UBRR6 = 6;
    sbit  UBRR7_bit at UBRR.B7;
    const register unsigned short int UBRR7 = 7;

sfr io unsigned short volatile ACSR absolute 0x28;
    sbit  ACIS0_bit at ACSR.B0;
    const register unsigned short int ACIS0 = 0;
    sbit  ACIS1_bit at ACSR.B1;
    const register unsigned short int ACIS1 = 1;
    sbit  ACIC_bit at ACSR.B2;
    const register unsigned short int ACIC = 2;
    sbit  ACIE_bit at ACSR.B3;
    const register unsigned short int ACIE = 3;
    sbit  ACI_bit at ACSR.B4;
    const register unsigned short int ACI = 4;
    sbit  ACO_bit at ACSR.B5;
    const register unsigned short int ACO = 5;
    sbit  ACD_bit at ACSR.B7;
    const register unsigned short int ACD = 7;