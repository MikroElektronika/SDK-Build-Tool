// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00010000;

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


// Interrupt Vector Table Constants
const unsigned short IVT_ADDR_INT0 = 0x0002;
const unsigned short IVT_ADDR_PCINT0 = 0x0004;
const unsigned short IVT_ADDR_PCINT1 = 0x0006;
const unsigned short IVT_ADDR_TIMER2_COMP = 0x0008;
const unsigned short IVT_ADDR_TIMER2_OVF = 0x000A;
const unsigned short IVT_ADDR_TIMER1_CAPT = 0x000C;
const unsigned short IVT_ADDR_TIMER1_COMPA = 0x000E;
const unsigned short IVT_ADDR_TIMER1_COMPB = 0x0010;
const unsigned short IVT_ADDR_TIMER1_OVF = 0x0012;
const unsigned short IVT_ADDR_TIMER0_COMP = 0x0014;
const unsigned short IVT_ADDR_TIMER0_OVF = 0x0016;
const unsigned short IVT_ADDR_SPI_STC = 0x0018;
const unsigned short IVT_ADDR_USART_RX = 0x001A;
const unsigned short IVT_ADDR_USART_UDRE = 0x001C;
const unsigned short IVT_ADDR_USART0_TX = 0x001E;
const unsigned short IVT_ADDR_USI_START = 0x0020;
const unsigned short IVT_ADDR_USI_OVERFLOW = 0x0022;
const unsigned short IVT_ADDR_ANALOG_COMP = 0x0024;
const unsigned short IVT_ADDR_ADC = 0x0026;
const unsigned short IVT_ADDR_EE_READY = 0x0028;
const unsigned short IVT_ADDR_SPM_READY = 0x002A;
const unsigned short IVT_ADDR_NOT_USED = 0x002C;
const unsigned short IVT_ADDR_PCINT2 = 0x002E;
const unsigned short IVT_ADDR_PCINT3 = 0x0030;

sfr data unsigned char ADMUX                     absolute 0x007C;
    const register unsigned short int REFS0 = 6;
    sbit  REFS0_bit at ADMUX.B6;
    const register unsigned short int REFS1 = 7;
    sbit  REFS1_bit at ADMUX.B7;
    const register unsigned short int ADLAR = 5;
    sbit  ADLAR_bit at ADMUX.B5;
    const register unsigned short int MUX0 = 0;
    sbit  MUX0_bit at ADMUX.B0;
    const register unsigned short int MUX1 = 1;
    sbit  MUX1_bit at ADMUX.B1;
    const register unsigned short int MUX2 = 2;
    sbit  MUX2_bit at ADMUX.B2;
    const register unsigned short int MUX3 = 3;
    sbit  MUX3_bit at ADMUX.B3;
    const register unsigned short int MUX4 = 4;
    sbit  MUX4_bit at ADMUX.B4;

sfr data unsigned char volatile ADCSRA                    absolute 0x007A;
    const register unsigned short int ADEN = 7;
    sbit  ADEN_bit at ADCSRA.B7;
    const register unsigned short int ADSC = 6;
    sbit  ADSC_bit at ADCSRA.B6;
    const register unsigned short int ADATE = 5;
    sbit  ADATE_bit at ADCSRA.B5;
    const register unsigned short int ADIF = 4;
    sbit  ADIF_bit at ADCSRA.B4;
    const register unsigned short int ADIE = 3;
    sbit  ADIE_bit at ADCSRA.B3;
    const register unsigned short int ADPS0 = 0;
    sbit  ADPS0_bit at ADCSRA.B0;
    const register unsigned short int ADPS1 = 1;
    sbit  ADPS1_bit at ADCSRA.B1;
    const register unsigned short int ADPS2 = 2;
    sbit  ADPS2_bit at ADCSRA.B2;

sfr data unsigned int  volatile ADC                       absolute 0x0078;
sfr data unsigned char volatile ADCL                      absolute 0x0078;
sfr data unsigned char volatile ADCH                      absolute 0x0079;
sfr data unsigned char ADCSRB                    absolute 0x007B;
    const register unsigned short int ADTS0 = 0;
    sbit  ADTS0_bit at ADCSRB.B0;
    const register unsigned short int ADTS1 = 1;
    sbit  ADTS1_bit at ADCSRB.B1;
    const register unsigned short int ADTS2 = 2;
    sbit  ADTS2_bit at ADCSRB.B2;

sfr data unsigned char DIDR0                     absolute 0x007E;
    const register unsigned short int ADC7D = 7;
    sbit  ADC7D_bit at DIDR0.B7;
    const register unsigned short int ADC6D = 6;
    sbit  ADC6D_bit at DIDR0.B6;
    const register unsigned short int ADC5D = 5;
    sbit  ADC5D_bit at DIDR0.B5;
    const register unsigned short int ADC4D = 4;
    sbit  ADC4D_bit at DIDR0.B4;
    const register unsigned short int ADC3D = 3;
    sbit  ADC3D_bit at DIDR0.B3;
    const register unsigned short int ADC2D = 2;
    sbit  ADC2D_bit at DIDR0.B2;
    const register unsigned short int ADC1D = 1;
    sbit  ADC1D_bit at DIDR0.B1;
    const register unsigned short int ADC0D = 0;
    sbit  ADC0D_bit at DIDR0.B0;

sfr data unsigned char volatile ADCSRB_AC                 absolute 0x007B;
    const register unsigned short int ACME = 6;
    sbit  ACME_bit at ADCSRB_AC.B6;

sfr io   unsigned char volatile ACSR                      absolute 0x0050;
    const register unsigned short int ACD = 7;
    sbit  ACD_bit at ACSR.B7;
    const register unsigned short int ACBG = 6;
    sbit  ACBG_bit at ACSR.B6;
    const register unsigned short int ACO = 5;
    sbit  ACO_bit at ACSR.B5;
    const register unsigned short int ACI = 4;
    sbit  ACI_bit at ACSR.B4;
    const register unsigned short int ACIE = 3;
    sbit  ACIE_bit at ACSR.B3;
    const register unsigned short int ACIC = 2;
    sbit  ACIC_bit at ACSR.B2;
    const register unsigned short int ACIS0 = 0;
    sbit  ACIS0_bit at ACSR.B0;
    const register unsigned short int ACIS1 = 1;
    sbit  ACIS1_bit at ACSR.B1;

sfr data unsigned char DIDR1                     absolute 0x007F;
    const register unsigned short int AIN1D = 1;
    sbit  AIN1D_bit at DIDR1.B1;
    const register unsigned short int AIN0D = 0;
    sbit  AIN0D_bit at DIDR1.B0;

sfr io   unsigned char SPCR                      absolute 0x004C;
    const register unsigned short int SPIE = 7;
    sbit  SPIE_bit at SPCR.B7;
    const register unsigned short int SPE = 6;
    sbit  SPE_bit at SPCR.B6;
    const register unsigned short int DORD = 5;
    sbit  DORD_bit at SPCR.B5;
    const register unsigned short int MSTR = 4;
    sbit  MSTR_bit at SPCR.B4;
    const register unsigned short int CPOL = 3;
    sbit  CPOL_bit at SPCR.B3;
    const register unsigned short int CPHA = 2;
    sbit  CPHA_bit at SPCR.B2;
    const register unsigned short int SPR0 = 0;
    sbit  SPR0_bit at SPCR.B0;
    const register unsigned short int SPR1 = 1;
    sbit  SPR1_bit at SPCR.B1;

sfr io   unsigned char volatile SPSR                      absolute 0x004D;
    const register unsigned short int SPIF = 7;
    sbit  SPIF_bit at SPSR.B7;
    const register unsigned short int WCOL = 6;
    sbit  WCOL_bit at SPSR.B6;
    const register unsigned short int SPI2X = 0;
    sbit  SPI2X_bit at SPSR.B0;

sfr io   unsigned char volatile SPDR                      absolute 0x004E;
sfr data unsigned char volatile USIDR                     absolute 0x00BA;
sfr data unsigned char volatile USISR                     absolute 0x00B9;
    const register unsigned short int USISIF = 7;
    sbit  USISIF_bit at USISR.B7;
    const register unsigned short int USIOIF = 6;
    sbit  USIOIF_bit at USISR.B6;
    const register unsigned short int USIPF = 5;
    sbit  USIPF_bit at USISR.B5;
    const register unsigned short int USIDC = 4;
    sbit  USIDC_bit at USISR.B4;
    const register unsigned short int USICNT0 = 0;
    sbit  USICNT0_bit at USISR.B0;
    const register unsigned short int USICNT1 = 1;
    sbit  USICNT1_bit at USISR.B1;
    const register unsigned short int USICNT2 = 2;
    sbit  USICNT2_bit at USISR.B2;
    const register unsigned short int USICNT3 = 3;
    sbit  USICNT3_bit at USISR.B3;

sfr data unsigned char volatile USICR                     absolute 0x00B8;
    const register unsigned short int USISIE = 7;
    sbit  USISIE_bit at USICR.B7;
    const register unsigned short int USIOIE = 6;
    sbit  USIOIE_bit at USICR.B6;
    const register unsigned short int USIWM0 = 4;
    sbit  USIWM0_bit at USICR.B4;
    const register unsigned short int USIWM1 = 5;
    sbit  USIWM1_bit at USICR.B5;
    const register unsigned short int USICS0 = 2;
    sbit  USICS0_bit at USICR.B2;
    const register unsigned short int USICS1 = 3;
    sbit  USICS1_bit at USICR.B3;
    const register unsigned short int USICLK = 1;
    sbit  USICLK_bit at USICR.B1;
    const register unsigned short int USITC = 0;
    sbit  USITC_bit at USICR.B0;

sfr data unsigned char volatile UDR0                      absolute 0x00C6;
sfr data unsigned char volatile UCSR0A                    absolute 0x00C0;
    const register unsigned short int RXC0 = 7;
    sbit  RXC0_bit at UCSR0A.B7;
    const register unsigned short int TXC0 = 6;
    sbit  TXC0_bit at UCSR0A.B6;
    const register unsigned short int UDRE0 = 5;
    sbit  UDRE0_bit at UCSR0A.B5;
    const register unsigned short int FE0 = 4;
    sbit  FE0_bit at UCSR0A.B4;
    const register unsigned short int DOR0 = 3;
    sbit  DOR0_bit at UCSR0A.B3;
    const register unsigned short int UPE0 = 2;
    sbit  UPE0_bit at UCSR0A.B2;
    const register unsigned short int U2X0 = 1;
    sbit  U2X0_bit at UCSR0A.B1;
    const register unsigned short int MPCM0 = 0;
    sbit  MPCM0_bit at UCSR0A.B0;

sfr data unsigned char volatile UCSR0B                    absolute 0x00C1;
    const register unsigned short int RXCIE0 = 7;
    sbit  RXCIE0_bit at UCSR0B.B7;
    const register unsigned short int TXCIE0 = 6;
    sbit  TXCIE0_bit at UCSR0B.B6;
    const register unsigned short int UDRIE0 = 5;
    sbit  UDRIE0_bit at UCSR0B.B5;
    const register unsigned short int RXEN0 = 4;
    sbit  RXEN0_bit at UCSR0B.B4;
    const register unsigned short int TXEN0 = 3;
    sbit  TXEN0_bit at UCSR0B.B3;
    const register unsigned short int UCSZ02 = 2;
    sbit  UCSZ02_bit at UCSR0B.B2;
    const register unsigned short int RXB80 = 1;
    sbit  RXB80_bit at UCSR0B.B1;
    const register unsigned short int TXB80 = 0;
    sbit  TXB80_bit at UCSR0B.B0;

sfr data unsigned char volatile UCSR0C                    absolute 0x00C2;
    const register unsigned short int UMSEL0 = 6;
    sbit  UMSEL0_bit at UCSR0C.B6;
    const register unsigned short int UPM00 = 4;
    sbit  UPM00_bit at UCSR0C.B4;
    const register unsigned short int UPM01 = 5;
    sbit  UPM01_bit at UCSR0C.B5;
    const register unsigned short int USBS0 = 3;
    sbit  USBS0_bit at UCSR0C.B3;
    const register unsigned short int UCSZ00 = 1;
    sbit  UCSZ00_bit at UCSR0C.B1;
    const register unsigned short int UCSZ01 = 2;
    sbit  UCSZ01_bit at UCSR0C.B2;
    const register unsigned short int UCPOL0 = 0;
    sbit  UCPOL0_bit at UCSR0C.B0;

sfr data unsigned int  UBRR0                     absolute 0x00C4;
sfr data unsigned char UBRR0L                    absolute 0x00C4;
sfr data unsigned char UBRR0H                    absolute 0x00C5;
sfr io   unsigned char volatile SREG                      absolute 0x005F;
    const register unsigned short int SREG_I = 7;
    sbit  SREG_I_bit at SREG.B7;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_T_bit at SREG.B6;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_H_bit at SREG.B5;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_S_bit at SREG.B4;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_V_bit at SREG.B3;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_N_bit at SREG.B2;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_Z_bit at SREG.B1;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_C_bit at SREG.B0;

sfr io   unsigned int  volatile SP                        absolute 0x005D;
sfr io   unsigned char volatile SPL                       absolute 0x005D;
sfr io   unsigned char volatile MCUCR                     absolute 0x0055;
    const register unsigned short int PUD = 4;
    sbit  PUD_bit at MCUCR.B4;
    const register unsigned short int IVSEL = 1;
    sbit  IVSEL_bit at MCUCR.B1;
    const register unsigned short int IVCE = 0;
    sbit  IVCE_bit at MCUCR.B0;

sfr io   unsigned char volatile MCUSR                     absolute 0x0054;
    const register unsigned short int JTRF = 4;
    sbit  JTRF_bit at MCUSR.B4;
    const register unsigned short int WDRF = 3;
    sbit  WDRF_bit at MCUSR.B3;
    const register unsigned short int BORF = 2;
    sbit  BORF_bit at MCUSR.B2;
    const register unsigned short int EXTRF = 1;
    sbit  EXTRF_bit at MCUSR.B1;
    const register unsigned short int PORF = 0;
    sbit  PORF_bit at MCUSR.B0;

sfr data unsigned char OSCCAL                    absolute 0x0066;
    const register unsigned short int OSCCAL0 = 0;
    sbit  OSCCAL0_bit at OSCCAL.B0;
    const register unsigned short int OSCCAL1 = 1;
    sbit  OSCCAL1_bit at OSCCAL.B1;
    const register unsigned short int OSCCAL2 = 2;
    sbit  OSCCAL2_bit at OSCCAL.B2;
    const register unsigned short int OSCCAL3 = 3;
    sbit  OSCCAL3_bit at OSCCAL.B3;
    const register unsigned short int OSCCAL4 = 4;
    sbit  OSCCAL4_bit at OSCCAL.B4;
    const register unsigned short int OSCCAL5 = 5;
    sbit  OSCCAL5_bit at OSCCAL.B5;
    const register unsigned short int OSCCAL6 = 6;
    sbit  OSCCAL6_bit at OSCCAL.B6;
    const register unsigned short int OSCCAL7 = 7;
    sbit  OSCCAL7_bit at OSCCAL.B7;

sfr data unsigned char volatile CLKPR                     absolute 0x0061;
    const register unsigned short int CLKPCE = 7;
    sbit  CLKPCE_bit at CLKPR.B7;
    const register unsigned short int CLKPS0 = 0;
    sbit  CLKPS0_bit at CLKPR.B0;
    const register unsigned short int CLKPS1 = 1;
    sbit  CLKPS1_bit at CLKPR.B1;
    const register unsigned short int CLKPS2 = 2;
    sbit  CLKPS2_bit at CLKPR.B2;
    const register unsigned short int CLKPS3 = 3;
    sbit  CLKPS3_bit at CLKPR.B3;

sfr data unsigned char volatile PRR                       absolute 0x0064;
    const register unsigned short int PRTIM1 = 3;
    sbit  PRTIM1_bit at PRR.B3;
    const register unsigned short int PRSPI = 2;
    sbit  PRSPI_bit at PRR.B2;
    const register unsigned short int PRUSART0 = 1;
    sbit  PRUSART0_bit at PRR.B1;
    const register unsigned short int PRADC = 0;
    sbit  PRADC_bit at PRR.B0;

sfr io   unsigned char SMCR                      absolute 0x0053;
    const register unsigned short int SM0 = 1;
    sbit  SM0_bit at SMCR.B1;
    const register unsigned short int SM1 = 2;
    sbit  SM1_bit at SMCR.B2;
    const register unsigned short int SM2 = 3;
    sbit  SM2_bit at SMCR.B3;
    const register unsigned short int SE = 0;
    sbit  SE_bit at SMCR.B0;

sfr io   unsigned char volatile GPIOR2                    absolute 0x004B;
sfr io   unsigned char volatile GPIOR1                    absolute 0x004A;
sfr io   unsigned char volatile GPIOR0                    absolute 0x003E;
sfr io   unsigned char volatile OCDR                      absolute 0x0051;
sfr io   unsigned char volatile MCUCR_JTAG                absolute 0x0055;
    const register unsigned short int JTD = 7;
    sbit  JTD_bit at MCUCR_JTAG.B7;

sfr io   unsigned char volatile MCUSR_JTAG                absolute 0x0054;
    sbit  JTRF_MCUSR_JTAG_bit at MCUSR_JTAG.B4;

sfr io   unsigned int  volatile EEAR                      absolute 0x0041;
sfr io   unsigned char volatile EEARL                     absolute 0x0041;
sfr io   unsigned char volatile EEARH                     absolute 0x0042;
sfr io   unsigned char volatile EEDR                      absolute 0x0040;
sfr io   unsigned char volatile EECR                      absolute 0x003F;
    const register unsigned short int EERIE = 3;
    sbit  EERIE_bit at EECR.B3;
    const register unsigned short int EEMWE = 2;
    sbit  EEMWE_bit at EECR.B2;
    const register unsigned short int EEWE = 1;
    sbit  EEWE_bit at EECR.B1;
    const register unsigned short int EERE = 0;
    sbit  EERE_bit at EECR.B0;

sfr io   unsigned char PORTA                     absolute 0x0022;
sfr io   unsigned char DDRA                      absolute 0x0021;
sfr io   unsigned char volatile PINA                      absolute 0x0020;
sfr io   unsigned char PORTB                     absolute 0x0025;
sfr io   unsigned char DDRB                      absolute 0x0024;
sfr io   unsigned char volatile PINB                      absolute 0x0023;
sfr io   unsigned char PORTC                     absolute 0x0028;
sfr io   unsigned char DDRC                      absolute 0x0027;
sfr io   unsigned char volatile PINC                      absolute 0x0026;
sfr io   unsigned char PORTD                     absolute 0x002B;
sfr io   unsigned char DDRD                      absolute 0x002A;
sfr io   unsigned char volatile PIND                      absolute 0x0029;
sfr io   unsigned char PORTE                     absolute 0x002E;
sfr io   unsigned char DDRE                      absolute 0x002D;
sfr io   unsigned char volatile PINE                      absolute 0x002C;
sfr io   unsigned char PORTF                     absolute 0x0031;
sfr io   unsigned char DDRF                      absolute 0x0030;
sfr io   unsigned char volatile PINF                      absolute 0x002F;
sfr io   unsigned char PORTG                     absolute 0x0034;
sfr io   unsigned char DDRG                      absolute 0x0033;
sfr io   unsigned char volatile PING                      absolute 0x0032;
sfr data unsigned char PORTH                     absolute 0x00DA;
sfr data unsigned char DDRH                      absolute 0x00D9;
sfr data unsigned char volatile PINH                      absolute 0x00D8;
sfr data unsigned char PORTJ                     absolute 0x00DD;
sfr data unsigned char DDRJ                      absolute 0x00DC;
sfr data unsigned char volatile PINJ                      absolute 0x00DB;
sfr io   unsigned char TCCR0A                    absolute 0x0044;
    const register unsigned short int FOC0A = 7;
    sbit  FOC0A_bit at TCCR0A.B7;
    const register unsigned short int WGM00 = 6;
    sbit  WGM00_bit at TCCR0A.B6;
    const register unsigned short int COM0A0 = 4;
    sbit  COM0A0_bit at TCCR0A.B4;
    const register unsigned short int COM0A1 = 5;
    sbit  COM0A1_bit at TCCR0A.B5;
    const register unsigned short int WGM01 = 3;
    sbit  WGM01_bit at TCCR0A.B3;
    const register unsigned short int CS00 = 0;
    sbit  CS00_bit at TCCR0A.B0;
    const register unsigned short int CS01 = 1;
    sbit  CS01_bit at TCCR0A.B1;
    const register unsigned short int CS02 = 2;
    sbit  CS02_bit at TCCR0A.B2;

sfr io   unsigned char volatile TCNT0                     absolute 0x0046;
sfr io   unsigned char volatile TCNT0L                    absolute 0x0046;
sfr io   unsigned char volatile TCNT0H                    absolute 0x0047;
sfr io   unsigned char OCR0A                     absolute 0x0047;
sfr data unsigned char TIMSK0                    absolute 0x006E;
    const register unsigned short int OCIE0A = 1;
    sbit  OCIE0A_bit at TIMSK0.B1;
    const register unsigned short int TOIE0 = 0;
    sbit  TOIE0_bit at TIMSK0.B0;

sfr io   unsigned char volatile TIFR0                     absolute 0x0035;
    const register unsigned short int OCF0A = 1;
    sbit  OCF0A_bit at TIFR0.B1;
    const register unsigned short int TOV0 = 0;
    sbit  TOV0_bit at TIFR0.B0;

sfr io   unsigned char volatile GTCCR                     absolute 0x0043;
    const register unsigned short int TSM = 7;
    sbit  TSM_bit at GTCCR.B7;
    const register unsigned short int PSR310 = 0;
    sbit  PSR310_bit at GTCCR.B0;

sfr data unsigned char TCCR2A                    absolute 0x00B0;
    const register unsigned short int FOC2A = 7;
    sbit  FOC2A_bit at TCCR2A.B7;
    const register unsigned short int WGM20 = 6;
    sbit  WGM20_bit at TCCR2A.B6;
    const register unsigned short int COM2A0 = 4;
    sbit  COM2A0_bit at TCCR2A.B4;
    const register unsigned short int COM2A1 = 5;
    sbit  COM2A1_bit at TCCR2A.B5;
    const register unsigned short int WGM21 = 3;
    sbit  WGM21_bit at TCCR2A.B3;
    const register unsigned short int CS20 = 0;
    sbit  CS20_bit at TCCR2A.B0;
    const register unsigned short int CS21 = 1;
    sbit  CS21_bit at TCCR2A.B1;
    const register unsigned short int CS22 = 2;
    sbit  CS22_bit at TCCR2A.B2;

sfr data unsigned char volatile TCNT2                     absolute 0x00B2;
sfr data unsigned char volatile TCNT2L                    absolute 0x00B2;
sfr data unsigned char volatile TCNT2H                    absolute 0x00B3;
sfr data unsigned char OCR2A                     absolute 0x00B3;
sfr data unsigned char OCR2AL                    absolute 0x00B3;
sfr data unsigned char OCR2AH                    absolute 0x00B4;
sfr data unsigned char TIMSK2                    absolute 0x0070;
    const register unsigned short int OCIE2A = 1;
    sbit  OCIE2A_bit at TIMSK2.B1;
    const register unsigned short int TOIE2 = 0;
    sbit  TOIE2_bit at TIMSK2.B0;

sfr io   unsigned char volatile TIFR2                     absolute 0x0037;
    const register unsigned short int OCF2A = 1;
    sbit  OCF2A_bit at TIFR2.B1;
    const register unsigned short int TOV2 = 0;
    sbit  TOV2_bit at TIFR2.B0;

sfr io   unsigned char volatile GTCCR_TC2                 absolute 0x0043;
    const register unsigned short int PSR2 = 1;
    sbit  PSR2_bit at GTCCR_TC2.B1;

sfr data unsigned char volatile ASSR                      absolute 0x00B6;
    const register unsigned short int EXCLK = 4;
    sbit  EXCLK_bit at ASSR.B4;
    const register unsigned short int AS2 = 3;
    sbit  AS2_bit at ASSR.B3;
    const register unsigned short int TCN2UB = 2;
    sbit  TCN2UB_bit at ASSR.B2;
    const register unsigned short int OCR2UB = 1;
    sbit  OCR2UB_bit at ASSR.B1;
    const register unsigned short int TCR2UB = 0;
    sbit  TCR2UB_bit at ASSR.B0;

sfr data unsigned char TCCR1A                    absolute 0x0080;
    const register unsigned short int COM1A0 = 6;
    sbit  COM1A0_bit at TCCR1A.B6;
    const register unsigned short int COM1A1 = 7;
    sbit  COM1A1_bit at TCCR1A.B7;
    const register unsigned short int COM1B0 = 4;
    sbit  COM1B0_bit at TCCR1A.B4;
    const register unsigned short int COM1B1 = 5;
    sbit  COM1B1_bit at TCCR1A.B5;
    const register unsigned short int WGM10 = 0;
    sbit  WGM10_bit at TCCR1A.B0;
    const register unsigned short int WGM11 = 1;
    sbit  WGM11_bit at TCCR1A.B1;

sfr data unsigned char TCCR1B                    absolute 0x0081;
    const register unsigned short int ICNC1 = 7;
    sbit  ICNC1_bit at TCCR1B.B7;
    const register unsigned short int ICES1 = 6;
    sbit  ICES1_bit at TCCR1B.B6;
    sbit  WGM10_TCCR1B_bit at TCCR1B.B3;
    sbit  WGM11_TCCR1B_bit at TCCR1B.B4;
    const register unsigned short int CS10 = 0;
    sbit  CS10_bit at TCCR1B.B0;
    const register unsigned short int CS11 = 1;
    sbit  CS11_bit at TCCR1B.B1;
    const register unsigned short int CS12 = 2;
    sbit  CS12_bit at TCCR1B.B2;

sfr data unsigned char volatile TCCR1C                    absolute 0x0082;
    const register unsigned short int FOC1A = 7;
    sbit  FOC1A_bit at TCCR1C.B7;
    const register unsigned short int FOC1B = 6;
    sbit  FOC1B_bit at TCCR1C.B6;

sfr data unsigned int  volatile TCNT1                     absolute 0x0084;
sfr data unsigned char volatile TCNT1L                    absolute 0x0084;
sfr data unsigned char volatile TCNT1H                    absolute 0x0085;
sfr data unsigned int  volatile OCR1A                     absolute 0x0088;
sfr data unsigned char volatile OCR1AL                    absolute 0x0088;
sfr data unsigned char volatile OCR1AH                    absolute 0x0089;
sfr data unsigned int  volatile OCR1B                     absolute 0x008A;
sfr data unsigned char volatile OCR1BL                    absolute 0x008A;
sfr data unsigned char volatile OCR1BH                    absolute 0x008B;
sfr data unsigned int  volatile ICR1                      absolute 0x0086;
sfr data unsigned char TIMSK1                    absolute 0x006F;
    const register unsigned short int ICIE1 = 5;
    sbit  ICIE1_bit at TIMSK1.B5;
    const register unsigned short int OCIE1B = 2;
    sbit  OCIE1B_bit at TIMSK1.B2;
    const register unsigned short int OCIE1A = 1;
    sbit  OCIE1A_bit at TIMSK1.B1;
    const register unsigned short int TOIE1 = 0;
    sbit  TOIE1_bit at TIMSK1.B0;

sfr io   unsigned char volatile TIFR1                     absolute 0x0036;
    const register unsigned short int ICF1 = 5;
    sbit  ICF1_bit at TIFR1.B5;
    const register unsigned short int OCF1B = 2;
    sbit  OCF1B_bit at TIFR1.B2;
    const register unsigned short int OCF1A = 1;
    sbit  OCF1A_bit at TIFR1.B1;
    const register unsigned short int TOV1 = 0;
    sbit  TOV1_bit at TIFR1.B0;

sfr data unsigned char volatile WDTCR                     absolute 0x0060;
    const register unsigned short int WDCE = 4;
    sbit  WDCE_bit at WDTCR.B4;
    const register unsigned short int WDE = 3;
    sbit  WDE_bit at WDTCR.B3;
    const register unsigned short int WDP0 = 0;
    sbit  WDP0_bit at WDTCR.B0;
    const register unsigned short int WDP1 = 1;
    sbit  WDP1_bit at WDTCR.B1;
    const register unsigned short int WDP2 = 2;
    sbit  WDP2_bit at WDTCR.B2;

sfr io   unsigned char volatile SPMCSR                    absolute 0x0057;
    const register unsigned short int SPMIE = 7;
    sbit  SPMIE_bit at SPMCSR.B7;
    const register unsigned short int RWWSB = 6;
    sbit  RWWSB_bit at SPMCSR.B6;
    const register unsigned short int RWWSRE = 4;
    sbit  RWWSRE_bit at SPMCSR.B4;
    const register unsigned short int BLBSET = 3;
    sbit  BLBSET_bit at SPMCSR.B3;
    const register unsigned short int PGWRT = 2;
    sbit  PGWRT_bit at SPMCSR.B2;
    const register unsigned short int PGERS = 1;
    sbit  PGERS_bit at SPMCSR.B1;
    const register unsigned short int SPMEN = 0;
    sbit  SPMEN_bit at SPMCSR.B0;

sfr data unsigned char volatile EICRA                     absolute 0x0069;
    const register unsigned short int ISC01 = 1;
    sbit  ISC01_bit at EICRA.B1;
    const register unsigned short int ISC00 = 0;
    sbit  ISC00_bit at EICRA.B0;

sfr io   unsigned char EIMSK                     absolute 0x003D;
    const register unsigned short int PCIE0 = 4;
    sbit  PCIE0_bit at EIMSK.B4;
    const register unsigned short int PCIE1 = 5;
    sbit  PCIE1_bit at EIMSK.B5;
    const register unsigned short int PCIE2 = 6;
    sbit  PCIE2_bit at EIMSK.B6;
    const register unsigned short int PCIE3 = 7;
    sbit  PCIE3_bit at EIMSK.B7;
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at EIMSK.B0;

sfr io   unsigned char volatile EIFR                      absolute 0x003C;
    const register unsigned short int PCIF0 = 4;
    sbit  PCIF0_bit at EIFR.B4;
    const register unsigned short int PCIF1 = 5;
    sbit  PCIF1_bit at EIFR.B5;
    const register unsigned short int PCIF2 = 6;
    sbit  PCIF2_bit at EIFR.B6;
    const register unsigned short int PCIF3 = 7;
    sbit  PCIF3_bit at EIFR.B7;
    const register unsigned short int INTF0 = 0;
    sbit  INTF0_bit at EIFR.B0;

sfr data unsigned char volatile PCMSK3                    absolute 0x0073;
sfr data unsigned char PCMSK2                    absolute 0x006D;
sfr data unsigned char PCMSK1                    absolute 0x006C;
sfr data unsigned char PCMSK0                    absolute 0x006B;
sfr io   unsigned char volatile EXTENDED_                 absolute 0x0002;
    const register unsigned short int BODLEVEL0 = 1;
    sbit  BODLEVEL0_bit at EXTENDED_.B1;
    const register unsigned short int BODLEVEL1 = 2;
    sbit  BODLEVEL1_bit at EXTENDED_.B2;
    const register unsigned short int RSTDISBL = 0;
    sbit  RSTDISBL_bit at EXTENDED_.B0;

sfr io   unsigned char volatile HIGH                      absolute 0x0001;
    const register unsigned short int OCDEN = 7;
    sbit  OCDEN_bit at HIGH.B7;
    const register unsigned short int JTAGEN = 6;
    sbit  JTAGEN_bit at HIGH.B6;
    const register unsigned short int SPIEN = 5;
    sbit  SPIEN_bit at HIGH.B5;
    const register unsigned short int WDTON = 4;
    sbit  WDTON_bit at HIGH.B4;
    const register unsigned short int EESAVE = 3;
    sbit  EESAVE_bit at HIGH.B3;
    const register unsigned short int BOOTSZ0 = 1;
    sbit  BOOTSZ0_bit at HIGH.B1;
    const register unsigned short int BOOTSZ1 = 2;
    sbit  BOOTSZ1_bit at HIGH.B2;
    const register unsigned short int BOOTRST = 0;
    sbit  BOOTRST_bit at HIGH.B0;

sfr io   unsigned char volatile LOW                       absolute 0x0000;
    const register unsigned short int CKDIV8 = 7;
    sbit  CKDIV8_bit at LOW.B7;
    const register unsigned short int CKOUT = 6;
    sbit  CKOUT_bit at LOW.B6;
    const register unsigned short int SUT_CKSEL0 = 0;
    sbit  SUT_CKSEL0_bit at LOW.B0;
    const register unsigned short int SUT_CKSEL1 = 1;
    sbit  SUT_CKSEL1_bit at LOW.B1;
    const register unsigned short int SUT_CKSEL2 = 2;
    sbit  SUT_CKSEL2_bit at LOW.B2;
    const register unsigned short int SUT_CKSEL3 = 3;
    sbit  SUT_CKSEL3_bit at LOW.B3;
    const register unsigned short int SUT_CKSEL4 = 4;
    sbit  SUT_CKSEL4_bit at LOW.B4;
    const register unsigned short int SUT_CKSEL5 = 5;
    sbit  SUT_CKSEL5_bit at LOW.B5;

sfr io   unsigned char volatile LOCKBIT                   absolute 0x0000;
    const register unsigned short int LB0 = 0;
    sbit  LB0_bit at LOCKBIT.B0;
    const register unsigned short int LB1 = 1;
    sbit  LB1_bit at LOCKBIT.B1;
    const register unsigned short int BLB00 = 2;
    sbit  BLB00_bit at LOCKBIT.B2;
    const register unsigned short int BLB01 = 3;
    sbit  BLB01_bit at LOCKBIT.B3;
    const register unsigned short int BLB10 = 4;
    sbit  BLB10_bit at LOCKBIT.B4;
    const register unsigned short int BLB11 = 5;
    sbit  BLB11_bit at LOCKBIT.B5;
