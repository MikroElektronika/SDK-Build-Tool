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

// Flash page size in program words
const int __FLASH_PAGE_SIZE = 64;

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
const unsigned int IVT_ADDR_INT0             = 0x0002;
const unsigned int IVT_ADDR_INT1             = 0x0004;
const unsigned int IVT_ADDR_INT2             = 0x0006;
const unsigned int IVT_ADDR_INT3             = 0x0008;
const unsigned int IVT_ADDR_INT4             = 0x000A;
const unsigned int IVT_ADDR_INT5             = 0x000C;
const unsigned int IVT_ADDR_INT6             = 0x000E;
const unsigned int IVT_ADDR_INT7             = 0x0010;
const unsigned int IVT_ADDR_PCINT0           = 0x0012;
const unsigned int IVT_ADDR_PCINT1           = 0x0014;
const unsigned int IVT_ADDR_USB_GEN          = 0x0016;
const unsigned int IVT_ADDR_USB_COM          = 0x0018;
const unsigned int IVT_ADDR_WDT              = 0x001A;
const unsigned int IVT_ADDR_TIMER1_CAPT      = 0x001C;
const unsigned int IVT_ADDR_TIMER1_COMPA     = 0x001E;
const unsigned int IVT_ADDR_TIMER1_COMPB     = 0x0020;
const unsigned int IVT_ADDR_TIMER1_COMPC     = 0x0022;
const unsigned int IVT_ADDR_TIMER1_OVF       = 0x0024;
const unsigned int IVT_ADDR_TIMER0_COMPA     = 0x0026;
const unsigned int IVT_ADDR_TIMER0_COMPB     = 0x0028;
const unsigned int IVT_ADDR_TIMER0_OVF       = 0x002A;
const unsigned int IVT_ADDR_SPI__STC         = 0x002C;
const unsigned int IVT_ADDR_USART1__RX       = 0x002E;
const unsigned int IVT_ADDR_USART1__UDRE     = 0x0030;
const unsigned int IVT_ADDR_USART1__TX       = 0x0032;
const unsigned int IVT_ADDR_ANALOG_COMP      = 0x0034;
const unsigned int IVT_ADDR_EE_READY         = 0x0036;
const unsigned int IVT_ADDR_SPM_READY        = 0x0038;


sfr data unsigned short volatile CLKSTA absolute 0xD2;
    sbit  EXTON_bit at CLKSTA.B0;
    const register unsigned short int EXTON = 0;
    sbit  RCON_bit at CLKSTA.B1;
    const register unsigned short int RCON = 1;

sfr data unsigned short volatile CLKSEL1 absolute 0xD1;
    sbit  EXCKSEL0_bit at CLKSEL1.B0;
    const register unsigned short int EXCKSEL0 = 0;
    sbit  EXCKSEL1_bit at CLKSEL1.B1;
    const register unsigned short int EXCKSEL1 = 1;
    sbit  EXCKSEL2_bit at CLKSEL1.B2;
    const register unsigned short int EXCKSEL2 = 2;
    sbit  EXCKSEL3_bit at CLKSEL1.B3;
    const register unsigned short int EXCKSEL3 = 3;
    sbit  RCCKSEL0_bit at CLKSEL1.B4;
    const register unsigned short int RCCKSEL0 = 4;
    sbit  RCCKSEL1_bit at CLKSEL1.B5;
    const register unsigned short int RCCKSEL1 = 5;
    sbit  RCCKSEL2_bit at CLKSEL1.B6;
    const register unsigned short int RCCKSEL2 = 6;
    sbit  RCCKSEL3_bit at CLKSEL1.B7;
    const register unsigned short int RCCKSEL3 = 7;

sfr data unsigned short volatile CLKSEL0 absolute 0xD0;
    sbit  CLKS_bit at CLKSEL0.B0;
    const register unsigned short int CLKS = 0;
    sbit  EXTE_bit at CLKSEL0.B2;
    const register unsigned short int EXTE = 2;
    sbit  RCE_bit at CLKSEL0.B3;
    const register unsigned short int RCE = 3;
    sbit  EXSUT0_bit at CLKSEL0.B4;
    const register unsigned short int EXSUT0 = 4;
    sbit  EXSUT1_bit at CLKSEL0.B5;
    const register unsigned short int EXSUT1 = 5;
    sbit  RCSUT0_bit at CLKSEL0.B6;
    const register unsigned short int RCSUT0 = 6;
    sbit  RCSUT1_bit at CLKSEL0.B7;
    const register unsigned short int RCSUT1 = 7;

sfr io unsigned short volatile PLLCSR absolute 0x49;
    sbit  PLOCK_bit at PLLCSR.B0;
    const register unsigned short int PLOCK = 0;
    sbit  PLLE_bit at PLLCSR.B1;
    const register unsigned short int PLLE = 1;
    sbit  PLLP0_bit at PLLCSR.B2;
    const register unsigned short int PLLP0 = 2;
    sbit  PLLP1_bit at PLLCSR.B3;
    const register unsigned short int PLLP1 = 3;
    sbit  PLLP2_bit at PLLCSR.B4;
    const register unsigned short int PLLP2 = 4;

sfr data unsigned short volatile TESTPADSTATUS absolute 0xFD;

sfr data unsigned short volatile TESTPADPULL absolute 0xFE;

sfr data unsigned short volatile TESTPADCTRL absolute 0xFF;

sfr data unsigned short volatile PS2CON absolute 0xFA;
    sbit  PS2EN_bit at PS2CON.B0;
    const register unsigned short int PS2EN = 0;

sfr data unsigned short volatile UPOE absolute 0xFB;
    sbit  DMI_bit at UPOE.B0;
    const register unsigned short int DMI = 0;
    sbit  DPI_bit at UPOE.B1;
    const register unsigned short int DPI = 1;
    sbit  DATAI_bit at UPOE.B2;
    const register unsigned short int DATAI = 2;
    sbit  SCKI_bit at UPOE.B3;
    const register unsigned short int SCKI = 3;
    sbit  UPDRV0_bit at UPOE.B4;
    const register unsigned short int UPDRV0 = 4;
    sbit  UPDRV1_bit at UPOE.B5;
    const register unsigned short int UPDRV1 = 5;
    sbit  UPWE0_bit at UPOE.B6;
    const register unsigned short int UPWE0 = 6;
    sbit  UPWE1_bit at UPOE.B7;
    const register unsigned short int UPWE1 = 7;

sfr data unsigned short volatile UEINT absolute 0xF4;
    sbit  EPINT0_bit at UEINT.B0;
    const register unsigned short int EPINT0 = 0;
    sbit  EPINT1_bit at UEINT.B1;
    const register unsigned short int EPINT1 = 1;
    sbit  EPINT2_bit at UEINT.B2;
    const register unsigned short int EPINT2 = 2;
    sbit  EPINT3_bit at UEINT.B3;
    const register unsigned short int EPINT3 = 3;
    sbit  EPINT4_bit at UEINT.B4;
    const register unsigned short int EPINT4 = 4;

sfr data unsigned short volatile UPINT absolute 0xF8;

sfr data unsigned short volatile UPBCHX absolute 0xF7;

sfr data unsigned short volatile UEBCLX absolute 0xF2;
    sbit  BYCT0_bit at UEBCLX.B0;
    const register unsigned short int BYCT0 = 0;
    sbit  BYCT1_bit at UEBCLX.B1;
    const register unsigned short int BYCT1 = 1;
    sbit  BYCT2_bit at UEBCLX.B2;
    const register unsigned short int BYCT2 = 2;
    sbit  BYCT3_bit at UEBCLX.B3;
    const register unsigned short int BYCT3 = 3;
    sbit  BYCT4_bit at UEBCLX.B4;
    const register unsigned short int BYCT4 = 4;
    sbit  BYCT5_bit at UEBCLX.B5;
    const register unsigned short int BYCT5 = 5;
    sbit  BYCT6_bit at UEBCLX.B6;
    const register unsigned short int BYCT6 = 6;
    sbit  BYCT7_bit at UEBCLX.B7;
    const register unsigned short int BYCT7 = 7;

sfr data unsigned short volatile UPBCLX absolute 0xF6;

sfr data unsigned short volatile UEDATX absolute 0xF1;
    sbit  DAT0_bit at UEDATX.B0;
    const register unsigned short int DAT0 = 0;
    sbit  DAT1_bit at UEDATX.B1;
    const register unsigned short int DAT1 = 1;
    sbit  DAT2_bit at UEDATX.B2;
    const register unsigned short int DAT2 = 2;
    sbit  DAT3_bit at UEDATX.B3;
    const register unsigned short int DAT3 = 3;
    sbit  DAT4_bit at UEDATX.B4;
    const register unsigned short int DAT4 = 4;
    sbit  DAT5_bit at UEDATX.B5;
    const register unsigned short int DAT5 = 5;
    sbit  DAT6_bit at UEDATX.B6;
    const register unsigned short int DAT6 = 6;
    sbit  DAT7_bit at UEDATX.B7;
    const register unsigned short int DAT7 = 7;

sfr data unsigned short volatile UPDATX absolute 0xAF;

sfr data unsigned short volatile UEIENX absolute 0xF0;
    sbit  TXINE_bit at UEIENX.B0;
    const register unsigned short int TXINE = 0;
    sbit  STALLEDE_bit at UEIENX.B1;
    const register unsigned short int STALLEDE = 1;
    sbit  RXOUTE_bit at UEIENX.B2;
    const register unsigned short int RXOUTE = 2;
    sbit  RXSTPE_bit at UEIENX.B3;
    const register unsigned short int RXSTPE = 3;
    sbit  NAKOUTE_bit at UEIENX.B4;
    const register unsigned short int NAKOUTE = 4;
    sbit  NAKINE_bit at UEIENX.B6;
    const register unsigned short int NAKINE = 6;
    sbit  FLERRE_bit at UEIENX.B7;
    const register unsigned short int FLERRE = 7;

sfr data unsigned short volatile UPIENX absolute 0xAE;

sfr data unsigned short volatile UESTA1X absolute 0xEF;
    sbit  CURRBK0_bit at UESTA1X.B0;
    const register unsigned short int CURRBK0 = 0;
    sbit  CURRBK1_bit at UESTA1X.B1;
    const register unsigned short int CURRBK1 = 1;
    sbit  CTRLDIR_bit at UESTA1X.B2;
    const register unsigned short int CTRLDIR = 2;

sfr data unsigned short volatile UPCFG2X absolute 0xAD;

sfr data unsigned short volatile UESTA0X absolute 0xEE;
    sbit  NBUSYBK0_bit at UESTA0X.B0;
    const register unsigned short int NBUSYBK0 = 0;
    sbit  NBUSYBK1_bit at UESTA0X.B1;
    const register unsigned short int NBUSYBK1 = 1;
    sbit  DTSEQ0_bit at UESTA0X.B2;
    const register unsigned short int DTSEQ0 = 2;
    sbit  DTSEQ1_bit at UESTA0X.B3;
    const register unsigned short int DTSEQ1 = 3;
    sbit  UNDERFI_bit at UESTA0X.B5;
    const register unsigned short int UNDERFI = 5;
    sbit  OVERFI_bit at UESTA0X.B6;
    const register unsigned short int OVERFI = 6;
    sbit  CFGOK_bit at UESTA0X.B7;
    const register unsigned short int CFGOK = 7;

sfr data unsigned short volatile UPSTAX absolute 0xAC;

sfr data unsigned short volatile UECFG1X absolute 0xED;
    sbit  ALLOC_bit at UECFG1X.B1;
    const register unsigned short int ALLOC = 1;
    sbit  EPBK0_bit at UECFG1X.B2;
    const register unsigned short int EPBK0 = 2;
    sbit  EPBK1_bit at UECFG1X.B3;
    const register unsigned short int EPBK1 = 3;
    sbit  EPSIZE0_bit at UECFG1X.B4;
    const register unsigned short int EPSIZE0 = 4;
    sbit  EPSIZE1_bit at UECFG1X.B5;
    const register unsigned short int EPSIZE1 = 5;
    sbit  EPSIZE2_bit at UECFG1X.B6;
    const register unsigned short int EPSIZE2 = 6;

sfr data unsigned short volatile UPCFG1X absolute 0xAB;

sfr data unsigned short volatile UECFG0X absolute 0xEC;
    sbit  EPDIR_bit at UECFG0X.B0;
    const register unsigned short int EPDIR = 0;
    sbit  EPTYPE0_bit at UECFG0X.B6;
    const register unsigned short int EPTYPE0 = 6;
    sbit  EPTYPE1_bit at UECFG0X.B7;
    const register unsigned short int EPTYPE1 = 7;

sfr data unsigned short volatile UPCFG0X absolute 0xAA;

sfr data unsigned short volatile UECONX absolute 0xEB;
    sbit  EPEN_bit at UECONX.B0;
    const register unsigned short int EPEN = 0;
    sbit  RSTDT_bit at UECONX.B3;
    const register unsigned short int RSTDT = 3;
    sbit  STALLRQC_bit at UECONX.B4;
    const register unsigned short int STALLRQC = 4;
    sbit  STALLRQ_bit at UECONX.B5;
    const register unsigned short int STALLRQ = 5;

sfr data unsigned short volatile UPCONX absolute 0xA9;

sfr data unsigned short volatile UERST absolute 0xEA;
    sbit  EPRST0_bit at UERST.B0;
    const register unsigned short int EPRST0 = 0;
    sbit  EPRST1_bit at UERST.B1;
    const register unsigned short int EPRST1 = 1;
    sbit  EPRST2_bit at UERST.B2;
    const register unsigned short int EPRST2 = 2;
    sbit  EPRST3_bit at UERST.B3;
    const register unsigned short int EPRST3 = 3;
    sbit  EPRST4_bit at UERST.B4;
    const register unsigned short int EPRST4 = 4;

sfr data unsigned short volatile UPRST absolute 0xA8;

sfr data unsigned short volatile UENUM absolute 0xE9;
    sbit  EPNUM0_bit at UENUM.B0;
    const register unsigned short int EPNUM0 = 0;
    sbit  EPNUM1_bit at UENUM.B1;
    const register unsigned short int EPNUM1 = 1;
    sbit  EPNUM2_bit at UENUM.B2;
    const register unsigned short int EPNUM2 = 2;

sfr data unsigned short volatile UPNUM absolute 0xA7;

sfr data unsigned short volatile UEINTX absolute 0xE8;
    sbit  TXINI_bit at UEINTX.B0;
    const register unsigned short int TXINI = 0;
    sbit  STALLEDI_bit at UEINTX.B1;
    const register unsigned short int STALLEDI = 1;
    sbit  RXOUTI_bit at UEINTX.B2;
    const register unsigned short int RXOUTI = 2;
    sbit  RXSTPI_bit at UEINTX.B3;
    const register unsigned short int RXSTPI = 3;
    sbit  NAKOUTI_bit at UEINTX.B4;
    const register unsigned short int NAKOUTI = 4;
    sbit  RWAL_bit at UEINTX.B5;
    const register unsigned short int RWAL = 5;
    sbit  NAKINI_bit at UEINTX.B6;
    const register unsigned short int NAKINI = 6;
    sbit  FIFOCON_bit at UEINTX.B7;
    const register unsigned short int FIFOCON = 7;

sfr data unsigned short volatile UPINTX absolute 0xA6;

sfr data unsigned short volatile UDTST absolute 0xE7;

sfr data unsigned short volatile UPINRQX absolute 0xA5;

sfr data unsigned short volatile UDMFN absolute 0xE6;
    sbit  FNCERR_bit at UDMFN.B4;
    const register unsigned short int FNCERR = 4;

sfr data unsigned short volatile UHFLEN absolute 0xA4;

sfr data unsigned short volatile UDFNUMH absolute 0xE5;
    sbit  FNUM8_bit at UDFNUMH.B0;
    const register unsigned short int FNUM8 = 0;
    sbit  FNUM9_bit at UDFNUMH.B1;
    const register unsigned short int FNUM9 = 1;
    sbit  FNUM10_bit at UDFNUMH.B2;
    const register unsigned short int FNUM10 = 2;

sfr data unsigned short volatile UHFNUMH absolute 0xA3;

sfr data unsigned short volatile UDFNUML absolute 0xE4;
    sbit  FNUM0_bit at UDFNUML.B0;
    const register unsigned short int FNUM0 = 0;
    sbit  FNUM1_bit at UDFNUML.B1;
    const register unsigned short int FNUM1 = 1;
    sbit  FNUM2_bit at UDFNUML.B2;
    const register unsigned short int FNUM2 = 2;
    sbit  FNUM3_bit at UDFNUML.B3;
    const register unsigned short int FNUM3 = 3;
    sbit  FNUM4_bit at UDFNUML.B4;
    const register unsigned short int FNUM4 = 4;
    sbit  FNUM5_bit at UDFNUML.B5;
    const register unsigned short int FNUM5 = 5;
    sbit  FNUM6_bit at UDFNUML.B6;
    const register unsigned short int FNUM6 = 6;
    sbit  FNUM7_bit at UDFNUML.B7;
    const register unsigned short int FNUM7 = 7;

sfr data unsigned short volatile UHFNUML absolute 0xA2;

sfr data unsigned short volatile UDADDR absolute 0xE3;
    sbit  UADD0_bit at UDADDR.B0;
    const register unsigned short int UADD0 = 0;
    sbit  UADD1_bit at UDADDR.B1;
    const register unsigned short int UADD1 = 1;
    sbit  UADD2_bit at UDADDR.B2;
    const register unsigned short int UADD2 = 2;
    sbit  UADD3_bit at UDADDR.B3;
    const register unsigned short int UADD3 = 3;
    sbit  UADD4_bit at UDADDR.B4;
    const register unsigned short int UADD4 = 4;
    sbit  UADD5_bit at UDADDR.B5;
    const register unsigned short int UADD5 = 5;
    sbit  UADD6_bit at UDADDR.B6;
    const register unsigned short int UADD6 = 6;
    sbit  ADDEN_bit at UDADDR.B7;
    const register unsigned short int ADDEN = 7;

sfr data unsigned short volatile UHADDR absolute 0xA1;

sfr data unsigned short volatile UDIEN absolute 0xE2;
    sbit  SUSPE_bit at UDIEN.B0;
    const register unsigned short int SUSPE = 0;
    sbit  SOFE_bit at UDIEN.B2;
    const register unsigned short int SOFE = 2;
    sbit  EORSTE_bit at UDIEN.B3;
    const register unsigned short int EORSTE = 3;
    sbit  WAKEUPE_bit at UDIEN.B4;
    const register unsigned short int WAKEUPE = 4;
    sbit  EORSME_bit at UDIEN.B5;
    const register unsigned short int EORSME = 5;
    sbit  UPRSME_bit at UDIEN.B6;
    const register unsigned short int UPRSME = 6;

sfr data unsigned short volatile UHIEN absolute 0xA0;

sfr data unsigned short volatile UDINT absolute 0xE1;
    sbit  SUSPI_bit at UDINT.B0;
    const register unsigned short int SUSPI = 0;
    sbit  SOFI_bit at UDINT.B2;
    const register unsigned short int SOFI = 2;
    sbit  EORSTI_bit at UDINT.B3;
    const register unsigned short int EORSTI = 3;
    sbit  WAKEUPI_bit at UDINT.B4;
    const register unsigned short int WAKEUPI = 4;
    sbit  EORSMI_bit at UDINT.B5;
    const register unsigned short int EORSMI = 5;
    sbit  UPRSMI_bit at UDINT.B6;
    const register unsigned short int UPRSMI = 6;

sfr data unsigned short volatile UHINT absolute 0x9F;

sfr data unsigned short volatile UDCON absolute 0xE0;
    sbit  DETACH_bit at UDCON.B0;
    const register unsigned short int DETACH = 0;
    sbit  RMWKUP_bit at UDCON.B1;
    const register unsigned short int RMWKUP = 1;
    sbit  RSTCPU_bit at UDCON.B2;
    const register unsigned short int RSTCPU = 2;

sfr data unsigned short volatile UHCON absolute 0x9E;

sfr data unsigned short volatile USBINT absolute 0xDA;

sfr data unsigned short volatile USBCON absolute 0xD8;
    sbit  FRZCLK_bit at USBCON.B5;
    const register unsigned short int FRZCLK = 5;
    sbit  USBE_bit at USBCON.B7;
    const register unsigned short int USBE = 7;

sfr data unsigned short volatile REGCR absolute 0x63;
    sbit  REGDIS_bit at REGCR.B0;
    const register unsigned short int REGDIS = 0;

sfr data unsigned short volatile UDR1 absolute 0xCE;
    sbit  UDR1_0_bit at UDR1.B0;
    const register unsigned short int UDR1_0 = 0;
    sbit  UDR1_1_bit at UDR1.B1;
    const register unsigned short int UDR1_1 = 1;
    sbit  UDR1_2_bit at UDR1.B2;
    const register unsigned short int UDR1_2 = 2;
    sbit  UDR1_3_bit at UDR1.B3;
    const register unsigned short int UDR1_3 = 3;
    sbit  UDR1_4_bit at UDR1.B4;
    const register unsigned short int UDR1_4 = 4;
    sbit  UDR1_5_bit at UDR1.B5;
    const register unsigned short int UDR1_5 = 5;
    sbit  UDR1_6_bit at UDR1.B6;
    const register unsigned short int UDR1_6 = 6;
    sbit  UDR1_7_bit at UDR1.B7;
    const register unsigned short int UDR1_7 = 7;

sfr data unsigned short UBRR1H absolute 0xCD;
    sbit  UBRR1_8_bit at UBRR1H.B0;
    const register unsigned short int UBRR1_8 = 0;
    sbit  UBRR1_9_bit at UBRR1H.B1;
    const register unsigned short int UBRR1_9 = 1;
    sbit  UBRR1_10_bit at UBRR1H.B2;
    const register unsigned short int UBRR1_10 = 2;
    sbit  UBRR1_11_bit at UBRR1H.B3;
    const register unsigned short int UBRR1_11 = 3;

sfr data unsigned short UBRR1L absolute 0xCC;
    sbit  UBRR1_0_bit at UBRR1L.B0;
    const register unsigned short int UBRR1_0 = 0;
    sbit  UBRR1_1_bit at UBRR1L.B1;
    const register unsigned short int UBRR1_1 = 1;
    sbit  UBRR1_2_bit at UBRR1L.B2;
    const register unsigned short int UBRR1_2 = 2;
    sbit  UBRR1_3_bit at UBRR1L.B3;
    const register unsigned short int UBRR1_3 = 3;
    sbit  UBRR1_4_bit at UBRR1L.B4;
    const register unsigned short int UBRR1_4 = 4;
    sbit  UBRR1_5_bit at UBRR1L.B5;
    const register unsigned short int UBRR1_5 = 5;
    sbit  UBRR1_6_bit at UBRR1L.B6;
    const register unsigned short int UBRR1_6 = 6;
    sbit  UBRR1_7_bit at UBRR1L.B7;
    const register unsigned short int UBRR1_7 = 7;

sfr data unsigned short volatile UCSR1D absolute 0xCB;
    sbit  RTSEN_bit at UCSR1D.B0;
    const register unsigned short int RTSEN = 0;
    sbit  CTSEN_bit at UCSR1D.B1;
    const register unsigned short int CTSEN = 1;

sfr data unsigned short volatile UCSR1C absolute 0xCA;
    sbit  UCPOL1_bit at UCSR1C.B0;
    const register unsigned short int UCPOL1 = 0;
    sbit  UCSZ10_bit at UCSR1C.B1;
    const register unsigned short int UCSZ10 = 1;
    sbit  UCSZ11_bit at UCSR1C.B2;
    const register unsigned short int UCSZ11 = 2;
    sbit  USBS1_bit at UCSR1C.B3;
    const register unsigned short int USBS1 = 3;
    sbit  UPM10_bit at UCSR1C.B4;
    const register unsigned short int UPM10 = 4;
    sbit  UPM11_bit at UCSR1C.B5;
    const register unsigned short int UPM11 = 5;
    sbit  UMSEL10_bit at UCSR1C.B6;
    const register unsigned short int UMSEL10 = 6;
    sbit  UMSEL11_bit at UCSR1C.B7;
    const register unsigned short int UMSEL11 = 7;

sfr data unsigned short volatile UCSR1B absolute 0xC9;
    sbit  TXB81_bit at UCSR1B.B0;
    const register unsigned short int TXB81 = 0;
    sbit  RXB81_bit at UCSR1B.B1;
    const register unsigned short int RXB81 = 1;
    sbit  UCSZ12_bit at UCSR1B.B2;
    const register unsigned short int UCSZ12 = 2;
    sbit  TXEN1_bit at UCSR1B.B3;
    const register unsigned short int TXEN1 = 3;
    sbit  RXEN1_bit at UCSR1B.B4;
    const register unsigned short int RXEN1 = 4;
    sbit  UDRIE1_bit at UCSR1B.B5;
    const register unsigned short int UDRIE1 = 5;
    sbit  TXCIE1_bit at UCSR1B.B6;
    const register unsigned short int TXCIE1 = 6;
    sbit  RXCIE1_bit at UCSR1B.B7;
    const register unsigned short int RXCIE1 = 7;

sfr data unsigned short volatile UCSR1A absolute 0xC8;
    sbit  MPCM1_bit at UCSR1A.B0;
    const register unsigned short int MPCM1 = 0;
    sbit  U2X1_bit at UCSR1A.B1;
    const register unsigned short int U2X1 = 1;
    sbit  UPE1_bit at UCSR1A.B2;
    const register unsigned short int UPE1 = 2;
    sbit  DOR1_bit at UCSR1A.B3;
    const register unsigned short int DOR1 = 3;
    sbit  FE1_bit at UCSR1A.B4;
    const register unsigned short int FE1 = 4;
    sbit  UDRE1_bit at UCSR1A.B5;
    const register unsigned short int UDRE1 = 5;
    sbit  TXC1_bit at UCSR1A.B6;
    const register unsigned short int TXC1 = 6;
    sbit  RXC1_bit at UCSR1A.B7;
    const register unsigned short int RXC1 = 7;

sfr data unsigned short volatile ASSR absolute 0xB6;

sfr data unsigned short OCR2B absolute 0xB4;

sfr data unsigned short OCR2A absolute 0xB3;

sfr data unsigned short volatile TCNT2 absolute 0xB2;

sfr data unsigned short TCCR2B absolute 0xB1;

sfr data unsigned short TCCR2A absolute 0xB0;

sfr data unsigned short OCR3CH absolute 0x9D;

sfr data unsigned short OCR3CL absolute 0x9C;

sfr data unsigned short OCR3BH absolute 0x9B;

sfr data unsigned short OCR3BL absolute 0x9A;

sfr data unsigned short OCR3AH absolute 0x99;

sfr data unsigned short OCR3AL absolute 0x98;

sfr data unsigned short volatile ICR3H absolute 0x97;

sfr data unsigned short volatile ICR3L absolute 0x96;

sfr data unsigned short volatile TCNT3H absolute 0x95;

sfr data unsigned short volatile TCNT3L absolute 0x94;

sfr data unsigned short volatile TCCR3C absolute 0x92;

sfr data unsigned short volatile TCCR3B absolute 0x91;

sfr data unsigned short volatile TCCR3A absolute 0x90;

sfr data unsigned short OCR1CH absolute 0x8D;
    sbit  OCR1CH0_bit at OCR1CH.B0;
    const register unsigned short int OCR1CH0 = 0;
    sbit  OCR1CH1_bit at OCR1CH.B1;
    const register unsigned short int OCR1CH1 = 1;
    sbit  OCR1CH2_bit at OCR1CH.B2;
    const register unsigned short int OCR1CH2 = 2;
    sbit  OCR1CH3_bit at OCR1CH.B3;
    const register unsigned short int OCR1CH3 = 3;
    sbit  OCR1CH4_bit at OCR1CH.B4;
    const register unsigned short int OCR1CH4 = 4;
    sbit  OCR1CH5_bit at OCR1CH.B5;
    const register unsigned short int OCR1CH5 = 5;
    sbit  OCR1CH6_bit at OCR1CH.B6;
    const register unsigned short int OCR1CH6 = 6;
    sbit  OCR1CH7_bit at OCR1CH.B7;
    const register unsigned short int OCR1CH7 = 7;

sfr data unsigned short OCR1CL absolute 0x8C;
    sbit  OCR1CL0_bit at OCR1CL.B0;
    const register unsigned short int OCR1CL0 = 0;
    sbit  OCR1CL1_bit at OCR1CL.B1;
    const register unsigned short int OCR1CL1 = 1;
    sbit  OCR1CL2_bit at OCR1CL.B2;
    const register unsigned short int OCR1CL2 = 2;
    sbit  OCR1CL3_bit at OCR1CL.B3;
    const register unsigned short int OCR1CL3 = 3;
    sbit  OCR1CL4_bit at OCR1CL.B4;
    const register unsigned short int OCR1CL4 = 4;
    sbit  OCR1CL5_bit at OCR1CL.B5;
    const register unsigned short int OCR1CL5 = 5;
    sbit  OCR1CL6_bit at OCR1CL.B6;
    const register unsigned short int OCR1CL6 = 6;
    sbit  OCR1CL7_bit at OCR1CL.B7;
    const register unsigned short int OCR1CL7 = 7;

sfr data unsigned short OCR1BH absolute 0x8B;
    sbit  OCR1BH0_bit at OCR1BH.B0;
    const register unsigned short int OCR1BH0 = 0;
    sbit  OCR1BH1_bit at OCR1BH.B1;
    const register unsigned short int OCR1BH1 = 1;
    sbit  OCR1BH2_bit at OCR1BH.B2;
    const register unsigned short int OCR1BH2 = 2;
    sbit  OCR1BH3_bit at OCR1BH.B3;
    const register unsigned short int OCR1BH3 = 3;
    sbit  OCR1BH4_bit at OCR1BH.B4;
    const register unsigned short int OCR1BH4 = 4;
    sbit  OCR1BH5_bit at OCR1BH.B5;
    const register unsigned short int OCR1BH5 = 5;
    sbit  OCR1BH6_bit at OCR1BH.B6;
    const register unsigned short int OCR1BH6 = 6;
    sbit  OCR1BH7_bit at OCR1BH.B7;
    const register unsigned short int OCR1BH7 = 7;

sfr data unsigned short OCR1BL absolute 0x8A;
    sbit  OCR1BL0_bit at OCR1BL.B0;
    const register unsigned short int OCR1BL0 = 0;
    sbit  OCR1BL1_bit at OCR1BL.B1;
    const register unsigned short int OCR1BL1 = 1;
    sbit  OCR1BL2_bit at OCR1BL.B2;
    const register unsigned short int OCR1BL2 = 2;
    sbit  OCR1BL3_bit at OCR1BL.B3;
    const register unsigned short int OCR1BL3 = 3;
    sbit  OCR1BL4_bit at OCR1BL.B4;
    const register unsigned short int OCR1BL4 = 4;
    sbit  OCR1BL5_bit at OCR1BL.B5;
    const register unsigned short int OCR1BL5 = 5;
    sbit  OCR1BL6_bit at OCR1BL.B6;
    const register unsigned short int OCR1BL6 = 6;
    sbit  OCR1BL7_bit at OCR1BL.B7;
    const register unsigned short int OCR1BL7 = 7;

sfr data unsigned short OCR1AH absolute 0x89;
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

sfr data unsigned short OCR1AL absolute 0x88;
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

sfr data unsigned short volatile ICR1H absolute 0x87;
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

sfr data unsigned short volatile ICR1L absolute 0x86;
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

sfr data unsigned short volatile TCNT1H absolute 0x85;
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

sfr data unsigned short volatile TCNT1L absolute 0x84;
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

sfr data unsigned short volatile TCCR1C absolute 0x82;
    sbit  FOC1C_bit at TCCR1C.B5;
    const register unsigned short int FOC1C = 5;
    sbit  FOC1B_bit at TCCR1C.B6;
    const register unsigned short int FOC1B = 6;
    sbit  FOC1A_bit at TCCR1C.B7;
    const register unsigned short int FOC1A = 7;

sfr data unsigned short TCCR1B absolute 0x81;
    sbit  CS10_bit at TCCR1B.B0;
    const register unsigned short int CS10 = 0;
    sbit  CS11_bit at TCCR1B.B1;
    const register unsigned short int CS11 = 1;
    sbit  CS12_bit at TCCR1B.B2;
    const register unsigned short int CS12 = 2;
    sbit  WGM12_bit at TCCR1B.B3;
    const register unsigned short int WGM12 = 3;
    sbit  WGM13_bit at TCCR1B.B4;
    const register unsigned short int WGM13 = 4;
    sbit  ICES1_bit at TCCR1B.B6;
    const register unsigned short int ICES1 = 6;
    sbit  ICNC1_bit at TCCR1B.B7;
    const register unsigned short int ICNC1 = 7;

sfr data unsigned short TCCR1A absolute 0x80;
    sbit  WGM10_bit at TCCR1A.B0;
    const register unsigned short int WGM10 = 0;
    sbit  WGM11_bit at TCCR1A.B1;
    const register unsigned short int WGM11 = 1;
    sbit  COM1C0_bit at TCCR1A.B2;
    const register unsigned short int COM1C0 = 2;
    sbit  COM1C1_bit at TCCR1A.B3;
    const register unsigned short int COM1C1 = 3;
    sbit  COM1B0_bit at TCCR1A.B4;
    const register unsigned short int COM1B0 = 4;
    sbit  COM1B1_bit at TCCR1A.B5;
    const register unsigned short int COM1B1 = 5;
    sbit  COM1A0_bit at TCCR1A.B6;
    const register unsigned short int COM1A0 = 6;
    sbit  COM1A1_bit at TCCR1A.B7;
    const register unsigned short int COM1A1 = 7;

sfr data unsigned short DIDR1 absolute 0x7F;
    sbit  AIN0D_bit at DIDR1.B0;
    const register unsigned short int AIN0D = 0;
    sbit  AIN1D_bit at DIDR1.B1;
    const register unsigned short int AIN1D = 1;

sfr data unsigned short XMCRB absolute 0x75;

sfr data unsigned short XMCRA absolute 0x74;

sfr data unsigned short TIMSK5 absolute 0x73;

sfr data unsigned short TIMSK4 absolute 0x72;

sfr data unsigned short TIMSK3 absolute 0x71;

sfr data unsigned short TIMSK2 absolute 0x70;

sfr data unsigned short TIMSK1 absolute 0x6F;
    sbit  TOIE1_bit at TIMSK1.B0;
    const register unsigned short int TOIE1 = 0;
    sbit  OCIE1A_bit at TIMSK1.B1;
    const register unsigned short int OCIE1A = 1;
    sbit  OCIE1B_bit at TIMSK1.B2;
    const register unsigned short int OCIE1B = 2;
    sbit  OCIE1C_bit at TIMSK1.B3;
    const register unsigned short int OCIE1C = 3;
    sbit  ICIE1_bit at TIMSK1.B5;
    const register unsigned short int ICIE1 = 5;

sfr data unsigned short TIMSK0 absolute 0x6E;
    sbit  TOIE0_bit at TIMSK0.B0;
    const register unsigned short int TOIE0 = 0;
    sbit  OCIE0A_bit at TIMSK0.B1;
    const register unsigned short int OCIE0A = 1;
    sbit  OCIE0B_bit at TIMSK0.B2;
    const register unsigned short int OCIE0B = 2;

sfr data unsigned short PCMSK1 absolute 0x6C;
    sbit  PCINT8_bit at PCMSK1.B0;
    const register unsigned short int PCINT8 = 0;
    sbit  PCINT9_bit at PCMSK1.B1;
    const register unsigned short int PCINT9 = 1;
    sbit  PCINT10_bit at PCMSK1.B2;
    const register unsigned short int PCINT10 = 2;
    sbit  PCINT11_bit at PCMSK1.B3;
    const register unsigned short int PCINT11 = 3;
    sbit  PCINT12_bit at PCMSK1.B4;
    const register unsigned short int PCINT12 = 4;

sfr data unsigned short PCMSK0 absolute 0x6B;
    sbit  PCINT0_bit at PCMSK0.B0;
    const register unsigned short int PCINT0 = 0;
    sbit  PCINT1_bit at PCMSK0.B1;
    const register unsigned short int PCINT1 = 1;
    sbit  PCINT2_bit at PCMSK0.B2;
    const register unsigned short int PCINT2 = 2;
    sbit  PCINT3_bit at PCMSK0.B3;
    const register unsigned short int PCINT3 = 3;
    sbit  PCINT4_bit at PCMSK0.B4;
    const register unsigned short int PCINT4 = 4;
    sbit  PCINT5_bit at PCMSK0.B5;
    const register unsigned short int PCINT5 = 5;
    sbit  PCINT6_bit at PCMSK0.B6;
    const register unsigned short int PCINT6 = 6;
    sbit  PCINT7_bit at PCMSK0.B7;
    const register unsigned short int PCINT7 = 7;

sfr data unsigned short volatile EICRB absolute 0x6A;
    sbit  ISC40_bit at EICRB.B0;
    const register unsigned short int ISC40 = 0;
    sbit  ISC41_bit at EICRB.B1;
    const register unsigned short int ISC41 = 1;
    sbit  ISC50_bit at EICRB.B2;
    const register unsigned short int ISC50 = 2;
    sbit  ISC51_bit at EICRB.B3;
    const register unsigned short int ISC51 = 3;
    sbit  ISC60_bit at EICRB.B4;
    const register unsigned short int ISC60 = 4;
    sbit  ISC61_bit at EICRB.B5;
    const register unsigned short int ISC61 = 5;
    sbit  ISC70_bit at EICRB.B6;
    const register unsigned short int ISC70 = 6;
    sbit  ISC71_bit at EICRB.B7;
    const register unsigned short int ISC71 = 7;

sfr data unsigned short volatile EICRA absolute 0x69;
    sbit  ISC00_bit at EICRA.B0;
    const register unsigned short int ISC00 = 0;
    sbit  ISC01_bit at EICRA.B1;
    const register unsigned short int ISC01 = 1;
    sbit  ISC10_bit at EICRA.B2;
    const register unsigned short int ISC10 = 2;
    sbit  ISC11_bit at EICRA.B3;
    const register unsigned short int ISC11 = 3;
    sbit  ISC20_bit at EICRA.B4;
    const register unsigned short int ISC20 = 4;
    sbit  ISC21_bit at EICRA.B5;
    const register unsigned short int ISC21 = 5;
    sbit  ISC30_bit at EICRA.B6;
    const register unsigned short int ISC30 = 6;
    sbit  ISC31_bit at EICRA.B7;
    const register unsigned short int ISC31 = 7;

sfr data unsigned short PCICR absolute 0x68;
    sbit  PCIE0_bit at PCICR.B0;
    const register unsigned short int PCIE0 = 0;
    sbit  PCIE1_bit at PCICR.B1;
    const register unsigned short int PCIE1 = 1;

sfr data unsigned short OSCCAL absolute 0x66;
    sbit  CAL0_bit at OSCCAL.B0;
    const register unsigned short int CAL0 = 0;
    sbit  CAL1_bit at OSCCAL.B1;
    const register unsigned short int CAL1 = 1;
    sbit  CAL2_bit at OSCCAL.B2;
    const register unsigned short int CAL2 = 2;
    sbit  CAL3_bit at OSCCAL.B3;
    const register unsigned short int CAL3 = 3;
    sbit  CAL4_bit at OSCCAL.B4;
    const register unsigned short int CAL4 = 4;
    sbit  CAL5_bit at OSCCAL.B5;
    const register unsigned short int CAL5 = 5;
    sbit  CAL6_bit at OSCCAL.B6;
    const register unsigned short int CAL6 = 6;
    sbit  CAL7_bit at OSCCAL.B7;
    const register unsigned short int CAL7 = 7;

sfr data unsigned short PRR1 absolute 0x65;
    sbit  PRUSART1_bit at PRR1.B0;
    const register unsigned short int PRUSART1 = 0;
    sbit  PRUSB_bit at PRR1.B7;
    const register unsigned short int PRUSB = 7;

sfr data unsigned short PRR0 absolute 0x64;
    sbit  PRSPI_bit at PRR0.B2;
    const register unsigned short int PRSPI = 2;
    sbit  PRTIM1_bit at PRR0.B3;
    const register unsigned short int PRTIM1 = 3;
    sbit  PRTIM0_bit at PRR0.B5;
    const register unsigned short int PRTIM0 = 5;

sfr data unsigned short volatile CLKPR absolute 0x61;
    sbit  CLKPS0_bit at CLKPR.B0;
    const register unsigned short int CLKPS0 = 0;
    sbit  CLKPS1_bit at CLKPR.B1;
    const register unsigned short int CLKPS1 = 1;
    sbit  CLKPS2_bit at CLKPR.B2;
    const register unsigned short int CLKPS2 = 2;
    sbit  CLKPS3_bit at CLKPR.B3;
    const register unsigned short int CLKPS3 = 3;
    sbit  CLKPCE_bit at CLKPR.B7;
    const register unsigned short int CLKPCE = 7;

sfr data unsigned short volatile WDTCSR absolute 0x60;
    sbit  WDP0_bit at WDTCSR.B0;
    const register unsigned short int WDP0 = 0;
    sbit  WDP1_bit at WDTCSR.B1;
    const register unsigned short int WDP1 = 1;
    sbit  WDP2_bit at WDTCSR.B2;
    const register unsigned short int WDP2 = 2;
    sbit  WDE_bit at WDTCSR.B3;
    const register unsigned short int WDE = 3;
    sbit  WDCE_bit at WDTCSR.B4;
    const register unsigned short int WDCE = 4;
    sbit  WDP3_bit at WDTCSR.B5;
    const register unsigned short int WDP3 = 5;
    sbit  WDIE_bit at WDTCSR.B6;
    const register unsigned short int WDIE = 6;
    sbit  WDIF_bit at WDTCSR.B7;
    const register unsigned short int WDIF = 7;

sfr data unsigned short volatile WDTCKD absolute 0x62;
    sbit  WCLKD0_bit at WDTCKD.B0;
    const register unsigned short int WCLKD0 = 0;
    sbit  WCLKD1_bit at WDTCKD.B1;
    const register unsigned short int WCLKD1 = 1;
    sbit  WDEWIE_bit at WDTCKD.B2;
    const register unsigned short int WDEWIE = 2;
    sbit  WDEWIF_bit at WDTCKD.B3;
    const register unsigned short int WDEWIF = 3;

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

sfr io unsigned short volatile SPH absolute 0x5E;
    sbit  SP8_bit at SPH.B0;
    const register unsigned short int SP8 = 0;
    sbit  SP9_bit at SPH.B1;
    const register unsigned short int SP9 = 1;
    sbit  SP10_bit at SPH.B2;
    const register unsigned short int SP10 = 2;
    sbit  SP11_bit at SPH.B3;
    const register unsigned short int SP11 = 3;
    sbit  SP12_bit at SPH.B4;
    const register unsigned short int SP12 = 4;
    sbit  SP13_bit at SPH.B5;
    const register unsigned short int SP13 = 5;
    sbit  SP14_bit at SPH.B6;
    const register unsigned short int SP14 = 6;
    sbit  SP15_bit at SPH.B7;
    const register unsigned short int SP15 = 7;

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

sfr io unsigned short volatile EIND absolute 0x5C;
    sbit  EIND0_bit at EIND.B0;
    const register unsigned short int EIND0 = 0;

sfr io unsigned short volatile RAMPZ absolute 0x5B;

sfr io unsigned short volatile SPMCSR absolute 0x57;
    sbit  SPMEN_bit at SPMCSR.B0;
    const register unsigned short int SPMEN = 0;
    sbit  PGERS_bit at SPMCSR.B1;
    const register unsigned short int PGERS = 1;
    sbit  PGWRT_bit at SPMCSR.B2;
    const register unsigned short int PGWRT = 2;
    sbit  BLBSET_bit at SPMCSR.B3;
    const register unsigned short int BLBSET = 3;
    sbit  RWWSRE_bit at SPMCSR.B4;
    const register unsigned short int RWWSRE = 4;
    sbit  SIGRD_bit at SPMCSR.B5;
    const register unsigned short int SIGRD = 5;
    sbit  RWWSB_bit at SPMCSR.B6;
    const register unsigned short int RWWSB = 6;
    sbit  SPMIE_bit at SPMCSR.B7;
    const register unsigned short int SPMIE = 7;

sfr io unsigned short volatile DWDR absolute 0x51;
    sbit  DWDR0_bit at DWDR.B0;
    const register unsigned short int DWDR0 = 0;
    sbit  DWDR1_bit at DWDR.B1;
    const register unsigned short int DWDR1 = 1;
    sbit  DWDR2_bit at DWDR.B2;
    const register unsigned short int DWDR2 = 2;
    sbit  DWDR3_bit at DWDR.B3;
    const register unsigned short int DWDR3 = 3;
    sbit  DWDR4_bit at DWDR.B4;
    const register unsigned short int DWDR4 = 4;
    sbit  DWDR5_bit at DWDR.B5;
    const register unsigned short int DWDR5 = 5;
    sbit  DWDR6_bit at DWDR.B6;
    const register unsigned short int DWDR6 = 6;
    sbit  DWDR7_bit at DWDR.B7;
    const register unsigned short int DWDR7 = 7;

sfr io unsigned short volatile MCUCR absolute 0x55;
    sbit  IVCE_bit at MCUCR.B0;
    const register unsigned short int IVCE = 0;
    sbit  IVSEL_bit at MCUCR.B1;
    const register unsigned short int IVSEL = 1;
    sbit  PUD_bit at MCUCR.B4;
    const register unsigned short int PUD = 4;

sfr io unsigned short volatile MCUSR absolute 0x54;
    sbit  PORF_bit at MCUSR.B0;
    const register unsigned short int PORF = 0;
    sbit  EXTRF_bit at MCUSR.B1;
    const register unsigned short int EXTRF = 1;
    sbit  BORF_bit at MCUSR.B2;
    const register unsigned short int BORF = 2;
    sbit  WDRF_bit at MCUSR.B3;
    const register unsigned short int WDRF = 3;
    sbit  USBRF_bit at MCUSR.B5;
    const register unsigned short int USBRF = 5;

sfr io unsigned short SMCR absolute 0x53;
    sbit  SE_bit at SMCR.B0;
    const register unsigned short int SE = 0;
    sbit  SM0_bit at SMCR.B1;
    const register unsigned short int SM0 = 1;
    sbit  SM1_bit at SMCR.B2;
    const register unsigned short int SM1 = 2;
    sbit  SM2_bit at SMCR.B3;
    const register unsigned short int SM2 = 3;

sfr io unsigned short volatile OCDR absolute 0x51;

sfr io unsigned short volatile ACSR absolute 0x50;
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
    sbit  ACBG_bit at ACSR.B6;
    const register unsigned short int ACBG = 6;
    sbit  ACD_bit at ACSR.B7;
    const register unsigned short int ACD = 7;

sfr io unsigned short volatile SPDR absolute 0x4E;
    sbit  SPDR0_bit at SPDR.B0;
    const register unsigned short int SPDR0 = 0;
    sbit  SPDR1_bit at SPDR.B1;
    const register unsigned short int SPDR1 = 1;
    sbit  SPDR2_bit at SPDR.B2;
    const register unsigned short int SPDR2 = 2;
    sbit  SPDR3_bit at SPDR.B3;
    const register unsigned short int SPDR3 = 3;
    sbit  SPDR4_bit at SPDR.B4;
    const register unsigned short int SPDR4 = 4;
    sbit  SPDR5_bit at SPDR.B5;
    const register unsigned short int SPDR5 = 5;
    sbit  SPDR6_bit at SPDR.B6;
    const register unsigned short int SPDR6 = 6;
    sbit  SPDR7_bit at SPDR.B7;
    const register unsigned short int SPDR7 = 7;

sfr io unsigned short volatile SPSR absolute 0x4D;
    sbit  SPI2X_bit at SPSR.B0;
    const register unsigned short int SPI2X = 0;
    sbit  WCOL_bit at SPSR.B6;
    const register unsigned short int WCOL = 6;
    sbit  SPIF_bit at SPSR.B7;
    const register unsigned short int SPIF = 7;

sfr io unsigned short SPCR absolute 0x4C;
    sbit  SPR0_bit at SPCR.B0;
    const register unsigned short int SPR0 = 0;
    sbit  SPR1_bit at SPCR.B1;
    const register unsigned short int SPR1 = 1;
    sbit  CPHA_bit at SPCR.B2;
    const register unsigned short int CPHA = 2;
    sbit  CPOL_bit at SPCR.B3;
    const register unsigned short int CPOL = 3;
    sbit  MSTR_bit at SPCR.B4;
    const register unsigned short int MSTR = 4;
    sbit  DORD_bit at SPCR.B5;
    const register unsigned short int DORD = 5;
    sbit  SPE_bit at SPCR.B6;
    const register unsigned short int SPE = 6;
    sbit  SPIE_bit at SPCR.B7;
    const register unsigned short int SPIE = 7;

sfr io unsigned short volatile GPIOR2 absolute 0x4B;
    sbit  GPIOR20_bit at GPIOR2.B0;
    const register unsigned short int GPIOR20 = 0;
    sbit  GPIOR21_bit at GPIOR2.B1;
    const register unsigned short int GPIOR21 = 1;
    sbit  GPIOR22_bit at GPIOR2.B2;
    const register unsigned short int GPIOR22 = 2;
    sbit  GPIOR23_bit at GPIOR2.B3;
    const register unsigned short int GPIOR23 = 3;
    sbit  GPIOR24_bit at GPIOR2.B4;
    const register unsigned short int GPIOR24 = 4;
    sbit  GPIOR25_bit at GPIOR2.B5;
    const register unsigned short int GPIOR25 = 5;
    sbit  GPIOR26_bit at GPIOR2.B6;
    const register unsigned short int GPIOR26 = 6;
    sbit  GPIOR27_bit at GPIOR2.B7;
    const register unsigned short int GPIOR27 = 7;

sfr io unsigned short volatile GPIOR1 absolute 0x4A;
    sbit  GPIOR10_bit at GPIOR1.B0;
    const register unsigned short int GPIOR10 = 0;
    sbit  GPIOR11_bit at GPIOR1.B1;
    const register unsigned short int GPIOR11 = 1;
    sbit  GPIOR12_bit at GPIOR1.B2;
    const register unsigned short int GPIOR12 = 2;
    sbit  GPIOR13_bit at GPIOR1.B3;
    const register unsigned short int GPIOR13 = 3;
    sbit  GPIOR14_bit at GPIOR1.B4;
    const register unsigned short int GPIOR14 = 4;
    sbit  GPIOR15_bit at GPIOR1.B5;
    const register unsigned short int GPIOR15 = 5;
    sbit  GPIOR16_bit at GPIOR1.B6;
    const register unsigned short int GPIOR16 = 6;
    sbit  GPIOR17_bit at GPIOR1.B7;
    const register unsigned short int GPIOR17 = 7;

sfr io unsigned short OCR0B absolute 0x48;
    sbit  OCR0B_0_bit at OCR0B.B0;
    const register unsigned short int OCR0B_0 = 0;
    sbit  OCR0B_1_bit at OCR0B.B1;
    const register unsigned short int OCR0B_1 = 1;
    sbit  OCR0B_2_bit at OCR0B.B2;
    const register unsigned short int OCR0B_2 = 2;
    sbit  OCR0B_3_bit at OCR0B.B3;
    const register unsigned short int OCR0B_3 = 3;
    sbit  OCR0B_4_bit at OCR0B.B4;
    const register unsigned short int OCR0B_4 = 4;
    sbit  OCR0B_5_bit at OCR0B.B5;
    const register unsigned short int OCR0B_5 = 5;
    sbit  OCR0B_6_bit at OCR0B.B6;
    const register unsigned short int OCR0B_6 = 6;
    sbit  OCR0B_7_bit at OCR0B.B7;
    const register unsigned short int OCR0B_7 = 7;

sfr io unsigned short OCR0A absolute 0x47;
    sbit  OCR0A_0_bit at OCR0A.B0;
    const register unsigned short int OCR0A_0 = 0;
    sbit  OCR0A_1_bit at OCR0A.B1;
    const register unsigned short int OCR0A_1 = 1;
    sbit  OCR0A_2_bit at OCR0A.B2;
    const register unsigned short int OCR0A_2 = 2;
    sbit  OCR0A_3_bit at OCR0A.B3;
    const register unsigned short int OCR0A_3 = 3;
    sbit  OCR0A_4_bit at OCR0A.B4;
    const register unsigned short int OCR0A_4 = 4;
    sbit  OCR0A_5_bit at OCR0A.B5;
    const register unsigned short int OCR0A_5 = 5;
    sbit  OCR0A_6_bit at OCR0A.B6;
    const register unsigned short int OCR0A_6 = 6;
    sbit  OCR0A_7_bit at OCR0A.B7;
    const register unsigned short int OCR0A_7 = 7;

sfr io unsigned short volatile TCNT0 absolute 0x46;
    sbit  TCNT0_0_bit at TCNT0.B0;
    const register unsigned short int TCNT0_0 = 0;
    sbit  TCNT0_1_bit at TCNT0.B1;
    const register unsigned short int TCNT0_1 = 1;
    sbit  TCNT0_2_bit at TCNT0.B2;
    const register unsigned short int TCNT0_2 = 2;
    sbit  TCNT0_3_bit at TCNT0.B3;
    const register unsigned short int TCNT0_3 = 3;
    sbit  TCNT0_4_bit at TCNT0.B4;
    const register unsigned short int TCNT0_4 = 4;
    sbit  TCNT0_5_bit at TCNT0.B5;
    const register unsigned short int TCNT0_5 = 5;
    sbit  TCNT0_6_bit at TCNT0.B6;
    const register unsigned short int TCNT0_6 = 6;
    sbit  TCNT0_7_bit at TCNT0.B7;
    const register unsigned short int TCNT0_7 = 7;

sfr io unsigned short TCCR0B absolute 0x45;
    sbit  CS00_bit at TCCR0B.B0;
    const register unsigned short int CS00 = 0;
    sbit  CS01_bit at TCCR0B.B1;
    const register unsigned short int CS01 = 1;
    sbit  CS02_bit at TCCR0B.B2;
    const register unsigned short int CS02 = 2;
    sbit  WGM02_bit at TCCR0B.B3;
    const register unsigned short int WGM02 = 3;
    sbit  FOC0B_bit at TCCR0B.B6;
    const register unsigned short int FOC0B = 6;
    sbit  FOC0A_bit at TCCR0B.B7;
    const register unsigned short int FOC0A = 7;

sfr io unsigned short TCCR0A absolute 0x44;
    sbit  WGM00_bit at TCCR0A.B0;
    const register unsigned short int WGM00 = 0;
    sbit  WGM01_bit at TCCR0A.B1;
    const register unsigned short int WGM01 = 1;
    sbit  COM0B0_bit at TCCR0A.B4;
    const register unsigned short int COM0B0 = 4;
    sbit  COM0B1_bit at TCCR0A.B5;
    const register unsigned short int COM0B1 = 5;
    sbit  COM0A0_bit at TCCR0A.B6;
    const register unsigned short int COM0A0 = 6;
    sbit  COM0A1_bit at TCCR0A.B7;
    const register unsigned short int COM0A1 = 7;

sfr io unsigned short volatile GTCCR absolute 0x43;
    sbit  PSRSYNC_bit at GTCCR.B0;
    const register unsigned short int PSRSYNC = 0;
    sbit  TSM_bit at GTCCR.B7;
    const register unsigned short int TSM = 7;

sfr io unsigned short EEARH absolute 0x42;
    sbit  EEAR8_bit at EEARH.B0;
    const register unsigned short int EEAR8 = 0;
    sbit  EEAR9_bit at EEARH.B1;
    const register unsigned short int EEAR9 = 1;
    sbit  EEAR10_bit at EEARH.B2;
    const register unsigned short int EEAR10 = 2;
    sbit  EEAR11_bit at EEARH.B3;
    const register unsigned short int EEAR11 = 3;

sfr io unsigned short EEARL absolute 0x41;
    sbit  EEAR0_bit at EEARL.B0;
    const register unsigned short int EEAR0 = 0;
    sbit  EEAR1_bit at EEARL.B1;
    const register unsigned short int EEAR1 = 1;
    sbit  EEAR2_bit at EEARL.B2;
    const register unsigned short int EEAR2 = 2;
    sbit  EEAR3_bit at EEARL.B3;
    const register unsigned short int EEAR3 = 3;
    sbit  EEAR4_bit at EEARL.B4;
    const register unsigned short int EEAR4 = 4;
    sbit  EEAR5_bit at EEARL.B5;
    const register unsigned short int EEAR5 = 5;
    sbit  EEAR6_bit at EEARL.B6;
    const register unsigned short int EEAR6 = 6;
    sbit  EEAR7_bit at EEARL.B7;
    const register unsigned short int EEAR7 = 7;

sfr io unsigned short volatile EEDR absolute 0x40;
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

sfr io unsigned short volatile EECR absolute 0x3F;
    sbit  EERE_bit at EECR.B0;
    const register unsigned short int EERE = 0;
    sbit  EEPE_bit at EECR.B1;
    const register unsigned short int EEPE = 1;
    sbit  EEMPE_bit at EECR.B2;
    const register unsigned short int EEMPE = 2;
    sbit  EERIE_bit at EECR.B3;
    const register unsigned short int EERIE = 3;
    sbit  EEPM0_bit at EECR.B4;
    const register unsigned short int EEPM0 = 4;
    sbit  EEPM1_bit at EECR.B5;
    const register unsigned short int EEPM1 = 5;

sfr io unsigned short volatile GPIOR0 absolute 0x3E;
    sbit  GPIOR00_bit at GPIOR0.B0;
    const register unsigned short int GPIOR00 = 0;
    sbit  GPIOR01_bit at GPIOR0.B1;
    const register unsigned short int GPIOR01 = 1;
    sbit  GPIOR02_bit at GPIOR0.B2;
    const register unsigned short int GPIOR02 = 2;
    sbit  GPIOR03_bit at GPIOR0.B3;
    const register unsigned short int GPIOR03 = 3;
    sbit  GPIOR04_bit at GPIOR0.B4;
    const register unsigned short int GPIOR04 = 4;
    sbit  GPIOR05_bit at GPIOR0.B5;
    const register unsigned short int GPIOR05 = 5;
    sbit  GPIOR06_bit at GPIOR0.B6;
    const register unsigned short int GPIOR06 = 6;
    sbit  GPIOR07_bit at GPIOR0.B7;
    const register unsigned short int GPIOR07 = 7;

sfr io unsigned short EIMSK absolute 0x3D;
    sbit  INT0_bit at EIMSK.B0;
    const register unsigned short int INT0 = 0;
    sbit  INT1_bit at EIMSK.B1;
    const register unsigned short int INT1 = 1;
    sbit  INT2_bit at EIMSK.B2;
    const register unsigned short int INT2 = 2;
    sbit  INT3_bit at EIMSK.B3;
    const register unsigned short int INT3 = 3;
    sbit  INT4_bit at EIMSK.B4;
    const register unsigned short int INT4 = 4;
    sbit  INT5_bit at EIMSK.B5;
    const register unsigned short int INT5 = 5;
    sbit  INT6_bit at EIMSK.B6;
    const register unsigned short int INT6 = 6;
    sbit  INT7_bit at EIMSK.B7;
    const register unsigned short int INT7 = 7;

sfr io unsigned short volatile EIFR absolute 0x3C;
    sbit  INTF0_bit at EIFR.B0;
    const register unsigned short int INTF0 = 0;
    sbit  INTF1_bit at EIFR.B1;
    const register unsigned short int INTF1 = 1;
    sbit  INTF2_bit at EIFR.B2;
    const register unsigned short int INTF2 = 2;
    sbit  INTF3_bit at EIFR.B3;
    const register unsigned short int INTF3 = 3;
    sbit  INTF4_bit at EIFR.B4;
    const register unsigned short int INTF4 = 4;
    sbit  INTF5_bit at EIFR.B5;
    const register unsigned short int INTF5 = 5;
    sbit  INTF6_bit at EIFR.B6;
    const register unsigned short int INTF6 = 6;
    sbit  INTF7_bit at EIFR.B7;
    const register unsigned short int INTF7 = 7;

sfr io unsigned short volatile PCIFR absolute 0x3B;
    sbit  PCIF0_bit at PCIFR.B0;
    const register unsigned short int PCIF0 = 0;
    sbit  PCIF1_bit at PCIFR.B1;
    const register unsigned short int PCIF1 = 1;

sfr io unsigned short volatile TIFR5 absolute 0x3A;

sfr io unsigned short volatile TIFR4 absolute 0x39;

sfr io unsigned short volatile TIFR3 absolute 0x38;

sfr io unsigned short volatile TIFR2 absolute 0x37;

sfr io unsigned short volatile TIFR1 absolute 0x36;
    sbit  TOV1_bit at TIFR1.B0;
    const register unsigned short int TOV1 = 0;
    sbit  OCF1A_bit at TIFR1.B1;
    const register unsigned short int OCF1A = 1;
    sbit  OCF1B_bit at TIFR1.B2;
    const register unsigned short int OCF1B = 2;
    sbit  OCF1C_bit at TIFR1.B3;
    const register unsigned short int OCF1C = 3;
    sbit  ICF1_bit at TIFR1.B5;
    const register unsigned short int ICF1 = 5;

sfr io unsigned short volatile TIFR0 absolute 0x35;
    sbit  TOV0_bit at TIFR0.B0;
    const register unsigned short int TOV0 = 0;
    sbit  OCF0A_bit at TIFR0.B1;
    const register unsigned short int OCF0A = 1;
    sbit  OCF0B_bit at TIFR0.B2;
    const register unsigned short int OCF0B = 2;

sfr io unsigned short PORTD absolute 0x2B;
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
    sbit  PORTD7_bit at PORTD.B7;
    const register unsigned short int PORTD7 = 7;

sfr io unsigned short DDRD absolute 0x2A;
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
    sbit  DDD7_bit at DDRD.B7;
    const register unsigned short int DDD7 = 7;

sfr io unsigned short volatile PIND absolute 0x29;
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
    sbit  PIND7_bit at PIND.B7;
    const register unsigned short int PIND7 = 7;

sfr io unsigned short PORTC absolute 0x28;
    sbit  PORTC0_bit at PORTC.B0;
    const register unsigned short int PORTC0 = 0;
    sbit  PORTC1_bit at PORTC.B1;
    const register unsigned short int PORTC1 = 1;
    sbit  PORTC2_bit at PORTC.B2;
    const register unsigned short int PORTC2 = 2;
    sbit  PORTC4_bit at PORTC.B4;
    const register unsigned short int PORTC4 = 4;
    sbit  PORTC5_bit at PORTC.B5;
    const register unsigned short int PORTC5 = 5;
    sbit  PORTC6_bit at PORTC.B6;
    const register unsigned short int PORTC6 = 6;
    sbit  PORTC7_bit at PORTC.B7;
    const register unsigned short int PORTC7 = 7;

sfr io unsigned short DDRC absolute 0x27;
    sbit  DDC0_bit at DDRC.B0;
    const register unsigned short int DDC0 = 0;
    sbit  DDC1_bit at DDRC.B1;
    const register unsigned short int DDC1 = 1;
    sbit  DDC2_bit at DDRC.B2;
    const register unsigned short int DDC2 = 2;
    sbit  DDC4_bit at DDRC.B4;
    const register unsigned short int DDC4 = 4;
    sbit  DDC5_bit at DDRC.B5;
    const register unsigned short int DDC5 = 5;
    sbit  DDC6_bit at DDRC.B6;
    const register unsigned short int DDC6 = 6;
    sbit  DDC7_bit at DDRC.B7;
    const register unsigned short int DDC7 = 7;

sfr io unsigned short volatile PINC absolute 0x26;
    sbit  PINC0_bit at PINC.B0;
    const register unsigned short int PINC0 = 0;
    sbit  PINC1_bit at PINC.B1;
    const register unsigned short int PINC1 = 1;
    sbit  PINC2_bit at PINC.B2;
    const register unsigned short int PINC2 = 2;
    sbit  PINC4_bit at PINC.B4;
    const register unsigned short int PINC4 = 4;
    sbit  PINC5_bit at PINC.B5;
    const register unsigned short int PINC5 = 5;
    sbit  PINC6_bit at PINC.B6;
    const register unsigned short int PINC6 = 6;
    sbit  PINC7_bit at PINC.B7;
    const register unsigned short int PINC7 = 7;

sfr io unsigned short PORTB absolute 0x25;
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

sfr io unsigned short DDRB absolute 0x24;
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

sfr io unsigned short volatile PINB absolute 0x23;
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