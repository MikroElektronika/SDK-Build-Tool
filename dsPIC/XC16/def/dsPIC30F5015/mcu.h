/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC30F5015 processor header
 *
 * (c) Copyright 1999-2023 Microchip Technology, All rights reserved
 * Part support version 2.10.A(27-Mar-2023)
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when
 *         this file is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef __dsPIC30F5015__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __30F5015_H
#define __30F5015_H

#define __XC16_PART_SUPPORT_VERSION 2010
#define __XC16_PART_SUPPORT_UPDATE 'A'

#define __write_to_IEC(X) \
   ( (void)(X), \
     __builtin_nop() \
   )

#define WREG0 WREG0
extern volatile uint16_t WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG1 WREG1
extern volatile uint16_t WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG2 WREG2
extern volatile uint16_t WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG3 WREG3
extern volatile uint16_t WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG4 WREG4
extern volatile uint16_t WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG5 WREG5
extern volatile uint16_t WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG6 WREG6
extern volatile uint16_t WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG7 WREG7
extern volatile uint16_t WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG8 WREG8
extern volatile uint16_t WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG9 WREG9
extern volatile uint16_t WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG10 WREG10
extern volatile uint16_t WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG11 WREG11
extern volatile uint16_t WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG12 WREG12
extern volatile uint16_t WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG13 WREG13
extern volatile uint16_t WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG14 WREG14
extern volatile uint16_t WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG15 WREG15
extern volatile uint16_t WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define SPLIM SPLIM
extern volatile uint16_t SPLIM __attribute__((__sfr__));
typedef struct tagACC {
    uint16_t L;
    uint16_t H;
    uint16_t U;
} ACC;

/* SFR blocks for each ACC module */
#define ACCA ACCA
extern volatile ACC ACCA __attribute__((__sfr__));

#define ACCAL ACCAL
extern volatile uint16_t ACCAL __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAH ACCAH
extern volatile uint16_t ACCAH __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAU ACCAU
extern volatile uint8_t ACCAU __attribute__((__sfr__,__deprecated__,__unsafe__));

/* SFR blocks for each ACC module */
#define ACCB ACCB
extern volatile ACC ACCB __attribute__((__sfr__));

#define ACCBL ACCBL
extern volatile uint16_t ACCBL __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCBH ACCBH
extern volatile uint16_t ACCBH __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCBU ACCBU
extern volatile uint8_t ACCBU __attribute__((__sfr__,__deprecated__,__unsafe__));
#define PCL PCL
extern volatile uint16_t PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile uint8_t PCH __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile uint8_t TBLPAG __attribute__((__sfr__));
#define PSVPAG PSVPAG
extern volatile uint8_t PSVPAG __attribute__((__sfr__));
#define RCOUNT RCOUNT
extern volatile uint16_t RCOUNT __attribute__((__sfr__));
#define DCOUNT DCOUNT
extern volatile uint16_t DCOUNT __attribute__((__sfr__));
#define DOSTARTL DOSTARTL
extern volatile uint16_t DOSTARTL __attribute__((__sfr__));
#define DOSTARTH DOSTARTH
extern volatile uint16_t DOSTARTH __attribute__((__sfr__));
#define DOENDL DOENDL
extern volatile uint16_t DOENDL __attribute__((__sfr__));
#define DOENDH DOENDH
extern volatile uint16_t DOENDH __attribute__((__sfr__));
#define SR SR
extern volatile uint16_t SR __attribute__((__sfr__));
__extension__ typedef struct tagSRBITS {
  union {
    struct {
      uint16_t C:1;
      uint16_t Z:1;
      uint16_t OV:1;
      uint16_t N:1;
      uint16_t RA:1;
      uint16_t IPL:3;
      uint16_t DC:1;
      uint16_t DA:1;
      uint16_t SAB:1;
      uint16_t OAB:1;
      uint16_t SB:1;
      uint16_t SA:1;
      uint16_t OB:1;
      uint16_t OA:1;
    };
    struct {
      uint16_t :5;
      uint16_t IPL0:1;
      uint16_t IPL1:1;
      uint16_t IPL2:1;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

#define CORCON CORCON
extern volatile uint16_t CORCON __attribute__((__sfr__));
__extension__ typedef struct tagCORCONBITS {
  union {
    struct {
      uint16_t IF:1;
      uint16_t RND:1;
      uint16_t PSV:1;
      uint16_t IPL3:1;
      uint16_t ACCSAT:1;
      uint16_t SATDW:1;
      uint16_t SATB:1;
      uint16_t SATA:1;
      uint16_t DL:3;
      uint16_t EDT:1;
      uint16_t US:1;
    };
    struct {
      uint16_t :8;
      uint16_t DL0:1;
      uint16_t DL1:1;
      uint16_t DL2:1;
    };
  };
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define MODCON MODCON
extern volatile uint16_t MODCON __attribute__((__sfr__));
__extension__ typedef struct tagMODCONBITS {
  union {
    struct {
      uint16_t XWM:4;
      uint16_t YWM:4;
      uint16_t BWM:4;
      uint16_t :2;
      uint16_t YMODEN:1;
      uint16_t XMODEN:1;
    };
    struct {
      uint16_t XWM0:1;
      uint16_t XWM1:1;
      uint16_t XWM2:1;
      uint16_t XWM3:1;
      uint16_t YWM0:1;
      uint16_t YWM1:1;
      uint16_t YWM2:1;
      uint16_t YWM3:1;
      uint16_t BWM0:1;
      uint16_t BWM1:1;
      uint16_t BWM2:1;
      uint16_t BWM3:1;
    };
  };
} MODCONBITS;
extern volatile MODCONBITS MODCONbits __attribute__((__sfr__));

#define XMODSRT XMODSRT
extern volatile uint16_t XMODSRT __attribute__((__sfr__));
#define XMODEND XMODEND
extern volatile uint16_t XMODEND __attribute__((__sfr__));
#define YMODSRT YMODSRT
extern volatile uint16_t YMODSRT __attribute__((__sfr__));
#define YMODEND YMODEND
extern volatile uint16_t YMODEND __attribute__((__sfr__));
#define XBREV XBREV
extern volatile uint16_t XBREV __attribute__((__sfr__));
__extension__ typedef struct tagXBREVBITS {
  union {
    struct {
      uint16_t XB:15;
      uint16_t BREN:1;
    };
    struct {
      uint16_t XB0:1;
      uint16_t XB1:1;
      uint16_t XB2:1;
      uint16_t XB3:1;
      uint16_t XB4:1;
      uint16_t XB5:1;
      uint16_t XB6:1;
      uint16_t XB7:1;
      uint16_t XB8:1;
      uint16_t XB9:1;
      uint16_t XB10:1;
      uint16_t XB11:1;
      uint16_t XB12:1;
      uint16_t XB13:1;
      uint16_t XB14:1;
    };
  };
} XBREVBITS;
extern volatile XBREVBITS XBREVbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile uint16_t DISICNT __attribute__((__sfr__));
typedef struct tagDISICNTBITS {
  uint16_t DISICNT:14;
} DISICNTBITS;
extern volatile DISICNTBITS DISICNTbits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile uint16_t INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  uint16_t :1;
  uint16_t OSCFAIL:1;
  uint16_t STKERR:1;
  uint16_t ADDRERR:1;
  uint16_t MATHERR:1;
  uint16_t :3;
  uint16_t COVTE:1;
  uint16_t OVBTE:1;
  uint16_t OVATE:1;
  uint16_t :4;
  uint16_t NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile uint16_t INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  uint16_t INT0EP:1;
  uint16_t INT1EP:1;
  uint16_t INT2EP:1;
  uint16_t INT3EP:1;
  uint16_t INT4EP:1;
  uint16_t :9;
  uint16_t DISI:1;
  uint16_t ALTIVT:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile uint16_t IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  uint16_t INT0IF:1;
  uint16_t IC1IF:1;
  uint16_t OC1IF:1;
  uint16_t T1IF:1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t ADIF:1;
  uint16_t NVMIF:1;
  uint16_t SI2CIF:1;
  uint16_t MI2CIF:1;
  uint16_t CNIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t INT1IF:1;
  uint16_t :2;
  uint16_t OC3IF:1;
  uint16_t OC4IF:1;
  uint16_t T4IF:1;
  uint16_t T5IF:1;
  uint16_t INT2IF:1;
  uint16_t :2;
  uint16_t SPI2IF:1;
  uint16_t C1IF:1;
  uint16_t IC3IF:1;
  uint16_t IC4IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t :4;
  uint16_t INT3IF:1;
  uint16_t INT4IF:1;
  uint16_t :1;
  uint16_t PWMIF:1;
  uint16_t QEIIF:1;
  uint16_t :2;
  uint16_t FLTAIF:1;
  uint16_t FLTBIF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t IC1IE:1;
  uint16_t OC1IE:1;
  uint16_t T1IE:1;
  uint16_t IC2IE:1;
  uint16_t OC2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t ADIE:1;
  uint16_t NVMIE:1;
  uint16_t SI2CIE:1;
  uint16_t MI2CIE:1;
  uint16_t CNIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t INT1IE:1;
  uint16_t :2;
  uint16_t OC3IE:1;
  uint16_t OC4IE:1;
  uint16_t T4IE:1;
  uint16_t T5IE:1;
  uint16_t INT2IE:1;
  uint16_t :2;
  uint16_t SPI2IE:1;
  uint16_t C1IE:1;
  uint16_t IC3IE:1;
  uint16_t IC4IE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t :4;
  uint16_t INT3IE:1;
  uint16_t INT4IE:1;
  uint16_t :1;
  uint16_t PWMIE:1;
  uint16_t QEIIE:1;
  uint16_t :2;
  uint16_t FLTAIE:1;
  uint16_t FLTBIE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile uint16_t IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      uint16_t INT0IP:3;
      uint16_t :1;
      uint16_t IC1IP:3;
      uint16_t :1;
      uint16_t OC1IP:3;
      uint16_t :1;
      uint16_t T1IP:3;
    };
    struct {
      uint16_t INT0IP0:1;
      uint16_t INT0IP1:1;
      uint16_t INT0IP2:1;
      uint16_t :1;
      uint16_t IC1IP0:1;
      uint16_t IC1IP1:1;
      uint16_t IC1IP2:1;
      uint16_t :1;
      uint16_t OC1IP0:1;
      uint16_t OC1IP1:1;
      uint16_t OC1IP2:1;
      uint16_t :1;
      uint16_t T1IP0:1;
      uint16_t T1IP1:1;
      uint16_t T1IP2:1;
    };
  };
} IPC0BITS;
extern volatile IPC0BITS IPC0bits __attribute__((__sfr__));

#define IPC1 IPC1
extern volatile uint16_t IPC1 __attribute__((__sfr__));
__extension__ typedef struct tagIPC1BITS {
  union {
    struct {
      uint16_t IC2IP:3;
      uint16_t :1;
      uint16_t OC2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
      uint16_t :1;
      uint16_t T3IP:3;
    };
    struct {
      uint16_t IC2IP0:1;
      uint16_t IC2IP1:1;
      uint16_t IC2IP2:1;
      uint16_t :1;
      uint16_t OC2IP0:1;
      uint16_t OC2IP1:1;
      uint16_t OC2IP2:1;
      uint16_t :1;
      uint16_t T2IP0:1;
      uint16_t T2IP1:1;
      uint16_t T2IP2:1;
      uint16_t :1;
      uint16_t T3IP0:1;
      uint16_t T3IP1:1;
      uint16_t T3IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile uint16_t IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      uint16_t SPI1IP:3;
      uint16_t :1;
      uint16_t U1RXIP:3;
      uint16_t :1;
      uint16_t U1TXIP:3;
      uint16_t :1;
      uint16_t ADIP:3;
    };
    struct {
      uint16_t SPI1IP0:1;
      uint16_t SPI1IP1:1;
      uint16_t SPI1IP2:1;
      uint16_t :1;
      uint16_t U1RXIP0:1;
      uint16_t U1RXIP1:1;
      uint16_t U1RXIP2:1;
      uint16_t :1;
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t ADIP0:1;
      uint16_t ADIP1:1;
      uint16_t ADIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile uint16_t IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      uint16_t NVMIP:3;
      uint16_t :1;
      uint16_t SI2CIP:3;
      uint16_t :1;
      uint16_t MI2CIP:3;
      uint16_t :1;
      uint16_t CNIP:3;
    };
    struct {
      uint16_t NVMIP0:1;
      uint16_t NVMIP1:1;
      uint16_t NVMIP2:1;
      uint16_t :1;
      uint16_t SI2CIP0:1;
      uint16_t SI2CIP1:1;
      uint16_t SI2CIP2:1;
      uint16_t :1;
      uint16_t MI2CIP0:1;
      uint16_t MI2CIP1:1;
      uint16_t MI2CIP2:1;
      uint16_t :1;
      uint16_t CNIP0:1;
      uint16_t CNIP1:1;
      uint16_t CNIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile uint16_t IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      uint16_t INT1IP:3;
      uint16_t :9;
      uint16_t OC3IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
      uint16_t :9;
      uint16_t OC3IP0:1;
      uint16_t OC3IP1:1;
      uint16_t OC3IP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

#define IPC5 IPC5
extern volatile uint16_t IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      uint16_t OC4IP:3;
      uint16_t :1;
      uint16_t T4IP:3;
      uint16_t :1;
      uint16_t T5IP:3;
      uint16_t :1;
      uint16_t INT2IP:3;
    };
    struct {
      uint16_t OC4IP0:1;
      uint16_t OC4IP1:1;
      uint16_t OC4IP2:1;
      uint16_t :1;
      uint16_t T4IP0:1;
      uint16_t T4IP1:1;
      uint16_t T4IP2:1;
      uint16_t :1;
      uint16_t T5IP0:1;
      uint16_t T5IP1:1;
      uint16_t T5IP2:1;
      uint16_t :1;
      uint16_t INT2IP0:1;
      uint16_t INT2IP1:1;
      uint16_t INT2IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t SPI2IP:3;
      uint16_t :1;
      uint16_t C1IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t SPI2IP0:1;
      uint16_t SPI2IP1:1;
      uint16_t SPI2IP2:1;
      uint16_t :1;
      uint16_t C1IP0:1;
      uint16_t C1IP1:1;
      uint16_t C1IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t IC3IP:3;
      uint16_t :1;
      uint16_t IC4IP:3;
    };
    struct {
      uint16_t IC3IP0:1;
      uint16_t IC3IP1:1;
      uint16_t IC3IP2:1;
      uint16_t :1;
      uint16_t IC4IP0:1;
      uint16_t IC4IP1:1;
      uint16_t IC4IP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile uint16_t IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      uint16_t INT3IP:3;
      uint16_t :1;
      uint16_t INT4IP:3;
      uint16_t :5;
      uint16_t PWMIP:3;
    };
    struct {
      uint16_t INT3IP0:1;
      uint16_t INT3IP1:1;
      uint16_t INT3IP2:1;
      uint16_t :1;
      uint16_t INT4IP0:1;
      uint16_t INT4IP1:1;
      uint16_t INT4IP2:1;
      uint16_t :5;
      uint16_t PWMIP0:1;
      uint16_t PWMIP1:1;
      uint16_t PWMIP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC10 IPC10
extern volatile uint16_t IPC10 __attribute__((__sfr__));
__extension__ typedef struct tagIPC10BITS {
  union {
    struct {
      uint16_t QEIIP:3;
      uint16_t :9;
      uint16_t FLTAIP:3;
    };
    struct {
      uint16_t QEIIP0:1;
      uint16_t QEIIP1:1;
      uint16_t QEIIP2:1;
      uint16_t :9;
      uint16_t FLTAIP0:1;
      uint16_t FLTAIP1:1;
      uint16_t FLTAIP2:1;
    };
  };
} IPC10BITS;
extern volatile IPC10BITS IPC10bits __attribute__((__sfr__));

#define IPC11 IPC11
extern volatile uint16_t IPC11 __attribute__((__sfr__));
__extension__ typedef struct tagIPC11BITS {
  union {
    struct {
      uint16_t FLTBIP:3;
    };
    struct {
      uint16_t FLTBIP0:1;
      uint16_t FLTBIP1:1;
      uint16_t FLTBIP2:1;
    };
  };
} IPC11BITS;
extern volatile IPC11BITS IPC11bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile uint16_t INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      uint16_t VECNUM:6;
      uint16_t :2;
      uint16_t ILR:4;
      uint16_t :1;
      uint16_t VHOLD:1;
      uint16_t TMODE:1;
      uint16_t IRQTOCPU:1;
    };
    struct {
      uint16_t VECNUM0:1;
      uint16_t VECNUM1:1;
      uint16_t VECNUM2:1;
      uint16_t VECNUM3:1;
      uint16_t VECNUM4:1;
      uint16_t VECNUM5:1;
      uint16_t :2;
      uint16_t ILR0:1;
      uint16_t ILR1:1;
      uint16_t ILR2:1;
      uint16_t ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

#define CNEN1 CNEN1
extern volatile uint16_t CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  uint16_t CN0IE:1;
  uint16_t CN1IE:1;
  uint16_t CN2IE:1;
  uint16_t CN3IE:1;
  uint16_t CN4IE:1;
  uint16_t CN5IE:1;
  uint16_t CN6IE:1;
  uint16_t CN7IE:1;
  uint16_t CN8IE:1;
  uint16_t CN9IE:1;
  uint16_t CN10IE:1;
  uint16_t CN11IE:1;
  uint16_t CN12IE:1;
  uint16_t CN13IE:1;
  uint16_t CN14IE:1;
  uint16_t CN15IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

#define CNEN2 CNEN2
extern volatile uint16_t CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  uint16_t CN16IE:1;
  uint16_t CN17IE:1;
  uint16_t CN18IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

#define CNPU1 CNPU1
extern volatile uint16_t CNPU1 __attribute__((__sfr__));
typedef struct tagCNPU1BITS {
  uint16_t CN0PUE:1;
  uint16_t CN1PUE:1;
  uint16_t CN2PUE:1;
  uint16_t CN3PUE:1;
  uint16_t CN4PUE:1;
  uint16_t CN5PUE:1;
  uint16_t CN6PUE:1;
  uint16_t CN7PUE:1;
  uint16_t CN8PUE:1;
  uint16_t CN9PUE:1;
  uint16_t CN10PUE:1;
  uint16_t CN11PUE:1;
  uint16_t CN12PUE:1;
  uint16_t CN13PUE:1;
  uint16_t CN14PUE:1;
  uint16_t CN15PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define CNPU2 CNPU2
extern volatile uint16_t CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  uint16_t CN16PUE:1;
  uint16_t CN17PUE:1;
  uint16_t CN18PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

#define TMR1 TMR1
extern volatile uint16_t TMR1 __attribute__((__sfr__));
#define PR1 PR1
extern volatile uint16_t PR1 __attribute__((__sfr__));
#define T1CON T1CON
extern volatile uint16_t T1CON __attribute__((__sfr__));
__extension__ typedef struct tagT1CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t TSYNC:1;
      uint16_t :1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile uint16_t TMR2 __attribute__((__sfr__));
#define TMR3HLD TMR3HLD
extern volatile uint16_t TMR3HLD __attribute__((__sfr__));
#define TMR3 TMR3
extern volatile uint16_t TMR3 __attribute__((__sfr__));
#define PR2 PR2
extern volatile uint16_t PR2 __attribute__((__sfr__));
#define PR3 PR3
extern volatile uint16_t PR3 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile uint16_t T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :1;
      uint16_t T32:1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile uint16_t T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :2;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define TMR4 TMR4
extern volatile uint16_t TMR4 __attribute__((__sfr__));
#define TMR5HLD TMR5HLD
extern volatile uint16_t TMR5HLD __attribute__((__sfr__));
#define TMR5 TMR5
extern volatile uint16_t TMR5 __attribute__((__sfr__));
#define PR4 PR4
extern volatile uint16_t PR4 __attribute__((__sfr__));
#define PR5 PR5
extern volatile uint16_t PR5 __attribute__((__sfr__));
#define T4CON T4CON
extern volatile uint16_t T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :1;
      uint16_t T32:1;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

#define T5CON T5CON
extern volatile uint16_t T5CON __attribute__((__sfr__));
__extension__ typedef struct tagT5CONBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t TCS:1;
      uint16_t :2;
      uint16_t TCKPS:2;
      uint16_t TGATE:1;
      uint16_t :6;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
    };
  };
} T5CONBITS;
extern volatile T5CONBITS T5CONbits __attribute__((__sfr__));

#define QEICON QEICON
extern volatile uint16_t QEICON __attribute__((__sfr__));
__extension__ typedef struct tagQEICONBITS {
  union {
    struct {
      uint16_t UPDN_SRC:1;
      uint16_t TQCS:1;
      uint16_t POSRES:1;
      uint16_t TQCKPS0:1;
      uint16_t TQCKPS1:1;
      uint16_t TQGATE:1;
      uint16_t PCDOUT:1;
      uint16_t SWPAB:1;
      uint16_t QEIM0:1;
      uint16_t QEIM1:1;
      uint16_t QEIM2:1;
      uint16_t UPDN:1;
      uint16_t INDX:1;
      uint16_t QEISIDL:1;
      uint16_t :1;
      uint16_t CNTERR:1;
    };
    struct {
      uint16_t :3;
      uint16_t TQCKPS:2;
      uint16_t :3;
      uint16_t QEIM:3;
    };
  };
} QEICONBITS;
extern volatile QEICONBITS QEICONbits __attribute__((__sfr__));

#define DFLTCON DFLTCON
extern volatile uint16_t DFLTCON __attribute__((__sfr__));
__extension__ typedef struct tagDFLTCONBITS {
  union {
    struct {
      uint16_t :4;
      uint16_t QECK0:1;
      uint16_t QECK1:1;
      uint16_t QECK2:1;
      uint16_t QEOUT:1;
      uint16_t CEID:1;
      uint16_t IMV0:1;
      uint16_t IMV1:1;
    };
    struct {
      uint16_t :4;
      uint16_t QECK:3;
      uint16_t :2;
      uint16_t IMV:2;
    };
  };
} DFLTCONBITS;
extern volatile DFLTCONBITS DFLTCONbits __attribute__((__sfr__));

#define POSCNT POSCNT
extern volatile uint16_t POSCNT __attribute__((__sfr__));
#define MAXCNT MAXCNT
extern volatile uint16_t MAXCNT __attribute__((__sfr__));

/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
        uint16_t icxbuf;
        uint16_t icxcon;
} IC, *PIC;


/* SFR blocks for Input Capture modules */
#define IC1 IC1
extern volatile IC IC1 __attribute__((__sfr__));

#define IC1BUF IC1BUF
extern volatile uint16_t IC1BUF __attribute__((__sfr__));
#define IC1CON IC1CON
extern volatile uint16_t IC1CON __attribute__((__sfr__));
__extension__ typedef struct tagIC1CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC1CONBITS;
extern volatile IC1CONBITS IC1CONbits __attribute__((__sfr__));


/* SFR blocks for Input Capture modules */
#define IC2 IC2
extern volatile IC IC2 __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile uint16_t IC2BUF __attribute__((__sfr__));
#define IC2CON IC2CON
extern volatile uint16_t IC2CON __attribute__((__sfr__));
__extension__ typedef struct tagIC2CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC2CONBITS;
extern volatile IC2CONBITS IC2CONbits __attribute__((__sfr__));


/* SFR blocks for Input Capture modules */
#define IC3 IC3
extern volatile IC IC3 __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile uint16_t IC3BUF __attribute__((__sfr__));
#define IC3CON IC3CON
extern volatile uint16_t IC3CON __attribute__((__sfr__));
__extension__ typedef struct tagIC3CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC3CONBITS;
extern volatile IC3CONBITS IC3CONbits __attribute__((__sfr__));


/* SFR blocks for Input Capture modules */
#define IC4 IC4
extern volatile IC IC4 __attribute__((__sfr__));

#define IC4BUF IC4BUF
extern volatile uint16_t IC4BUF __attribute__((__sfr__));
#define IC4CON IC4CON
extern volatile uint16_t IC4CON __attribute__((__sfr__));
__extension__ typedef struct tagIC4CONBITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t ICTMR:1;
      uint16_t :5;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
    };
  };
} IC4CONBITS;
extern volatile IC4CONBITS IC4CONbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
        uint16_t ocxrs;
        uint16_t ocxr;
        uint16_t ocxcon;
} OC, *POC;


/* SFR blocks for Output Compare modules */
#define OC1 OC1
extern volatile OC OC1 __attribute__((__sfr__));

#define OC1RS OC1RS
extern volatile uint16_t OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile uint16_t OC1R __attribute__((__sfr__));
#define OC1CON OC1CON
extern volatile uint16_t OC1CON __attribute__((__sfr__));
__extension__ typedef struct tagOC1CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC1CONBITS;
extern volatile OC1CONBITS OC1CONbits __attribute__((__sfr__));


/* SFR blocks for Output Compare modules */
#define OC2 OC2
extern volatile OC OC2 __attribute__((__sfr__));

#define OC2RS OC2RS
extern volatile uint16_t OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile uint16_t OC2R __attribute__((__sfr__));
#define OC2CON OC2CON
extern volatile uint16_t OC2CON __attribute__((__sfr__));
__extension__ typedef struct tagOC2CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC2CONBITS;
extern volatile OC2CONBITS OC2CONbits __attribute__((__sfr__));


/* SFR blocks for Output Compare modules */
#define OC3 OC3
extern volatile OC OC3 __attribute__((__sfr__));

#define OC3RS OC3RS
extern volatile uint16_t OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile uint16_t OC3R __attribute__((__sfr__));
#define OC3CON OC3CON
extern volatile uint16_t OC3CON __attribute__((__sfr__));
__extension__ typedef struct tagOC3CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC3CONBITS;
extern volatile OC3CONBITS OC3CONbits __attribute__((__sfr__));


/* SFR blocks for Output Compare modules */
#define OC4 OC4
extern volatile OC OC4 __attribute__((__sfr__));

#define OC4RS OC4RS
extern volatile uint16_t OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile uint16_t OC4R __attribute__((__sfr__));
#define OC4CON OC4CON
extern volatile uint16_t OC4CON __attribute__((__sfr__));
__extension__ typedef struct tagOC4CONBITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t OCTSEL:1;
      uint16_t OCFLT:1;
      uint16_t :8;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
    };
  };
} OC4CONBITS;
extern volatile OC4CONBITS OC4CONbits __attribute__((__sfr__));

#define PTCON PTCON
extern volatile uint16_t PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      uint16_t PTMOD:2;
      uint16_t PTCKPS:2;
      uint16_t PTOPS:4;
      uint16_t :5;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t PTMOD0:1;
      uint16_t PTMOD1:1;
      uint16_t PTCKPS0:1;
      uint16_t PTCKPS1:1;
      uint16_t PTOPS0:1;
      uint16_t PTOPS1:1;
      uint16_t PTOPS2:1;
      uint16_t PTOPS3:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define PTMR PTMR
extern volatile uint16_t PTMR __attribute__((__sfr__));
typedef struct tagPTMRBITS {
  uint16_t PTMR:15;
  uint16_t PTDIR:1;
} PTMRBITS;
extern volatile PTMRBITS PTMRbits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile uint16_t PTPER __attribute__((__sfr__));
typedef struct tagPTPERBITS {
  uint16_t PTPER:15;
} PTPERBITS;
extern volatile PTPERBITS PTPERbits __attribute__((__sfr__));

#define SEVTCMP SEVTCMP
extern volatile uint16_t SEVTCMP __attribute__((__sfr__));
typedef struct tagSEVTCMPBITS {
  uint16_t SEVTCMP:15;
  uint16_t SEVTDIR:1;
} SEVTCMPBITS;
extern volatile SEVTCMPBITS SEVTCMPbits __attribute__((__sfr__));

#define PWMCON1 PWMCON1
extern volatile uint16_t PWMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON1BITS {
  union {
    struct {
      uint16_t PEN1L:1;
      uint16_t PEN2L:1;
      uint16_t PEN3L:1;
      uint16_t PEN4L:1;
      uint16_t PEN1H:1;
      uint16_t PEN2H:1;
      uint16_t PEN3H:1;
      uint16_t PEN4H:1;
      uint16_t PTMOD1:1;
      uint16_t PTMOD2:1;
      uint16_t PTMOD3:1;
      uint16_t PTMOD4:1;
    };
    struct {
      uint16_t :8;
      uint16_t PMOD1:1;
      uint16_t PMOD2:1;
      uint16_t PMOD3:1;
      uint16_t PMOD4:1;
    };
  };
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile uint16_t PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      uint16_t UDIS:1;
      uint16_t OSYNC:1;
      uint16_t IUE:1;
      uint16_t :5;
      uint16_t SEVOPS:4;
    };
    struct {
      uint16_t :8;
      uint16_t SEVOPS0:1;
      uint16_t SEVOPS1:1;
      uint16_t SEVOPS2:1;
      uint16_t SEVOPS3:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define DTCON1 DTCON1
extern volatile uint16_t DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagDTCON1BITS {
  union {
    struct {
      uint16_t DTA:6;
      uint16_t DTAPS:2;
      uint16_t DTB:6;
      uint16_t DTBPS:2;
    };
    struct {
      uint16_t DTA0:1;
      uint16_t DTA1:1;
      uint16_t DTA2:1;
      uint16_t DTA3:1;
      uint16_t DTA4:1;
      uint16_t DTA5:1;
      uint16_t DTAPS0:1;
      uint16_t DTAPS1:1;
      uint16_t DTB0:1;
      uint16_t DTB1:1;
      uint16_t DTB2:1;
      uint16_t DTB3:1;
      uint16_t DTB4:1;
      uint16_t DTB5:1;
      uint16_t DTBPS0:1;
      uint16_t DTBPS1:1;
    };
  };
} DTCON1BITS;
extern volatile DTCON1BITS DTCON1bits __attribute__((__sfr__));

#define DTCON2 DTCON2
extern volatile uint16_t DTCON2 __attribute__((__sfr__));
typedef struct tagDTCON2BITS {
  uint16_t DTS1I:1;
  uint16_t DTS1A:1;
  uint16_t DTS2I:1;
  uint16_t DTS2A:1;
  uint16_t DTS3I:1;
  uint16_t DTS3A:1;
  uint16_t DTS4I:1;
  uint16_t DTS4A:1;
} DTCON2BITS;
extern volatile DTCON2BITS DTCON2bits __attribute__((__sfr__));

#define FLTACON FLTACON
extern volatile uint16_t FLTACON __attribute__((__sfr__));
typedef struct tagFLTACONBITS {
  uint16_t FAEN1:1;
  uint16_t FAEN2:1;
  uint16_t FAEN3:1;
  uint16_t FAEN4:1;
  uint16_t :3;
  uint16_t FLTAM:1;
  uint16_t FAOV1L:1;
  uint16_t FAOV1H:1;
  uint16_t FAOV2L:1;
  uint16_t FAOV2H:1;
  uint16_t FAOV3L:1;
  uint16_t FAOV3H:1;
  uint16_t FAOV4L:1;
  uint16_t FAOV4H:1;
} FLTACONBITS;
extern volatile FLTACONBITS FLTACONbits __attribute__((__sfr__));

#define FLTBCON FLTBCON
extern volatile uint16_t FLTBCON __attribute__((__sfr__));
typedef struct tagFLTBCONBITS {
  uint16_t FBEN1:1;
  uint16_t FBEN2:1;
  uint16_t FBEN3:1;
  uint16_t FBEN4:1;
  uint16_t :3;
  uint16_t FLTBM:1;
  uint16_t FBOV1L:1;
  uint16_t FBOV1H:1;
  uint16_t FBOV2L:1;
  uint16_t FBOV2H:1;
  uint16_t FBOV3L:1;
  uint16_t FBOV3H:1;
  uint16_t FBOV4L:1;
  uint16_t FBOV4H:1;
} FLTBCONBITS;
extern volatile FLTBCONBITS FLTBCONbits __attribute__((__sfr__));

#define OVDCON OVDCON
extern volatile uint16_t OVDCON __attribute__((__sfr__));
typedef struct tagOVDCONBITS {
  uint16_t POUT1L:1;
  uint16_t POUT1H:1;
  uint16_t POUT2L:1;
  uint16_t POUT2H:1;
  uint16_t POUT3L:1;
  uint16_t POUT3H:1;
  uint16_t POUT4L:1;
  uint16_t POUT4H:1;
  uint16_t POVD1L:1;
  uint16_t POVD1H:1;
  uint16_t POVD2L:1;
  uint16_t POVD2H:1;
  uint16_t POVD3L:1;
  uint16_t POVD3H:1;
  uint16_t POVD4L:1;
  uint16_t POVD4H:1;
} OVDCONBITS;
extern volatile OVDCONBITS OVDCONbits __attribute__((__sfr__));

#define PDC1 PDC1
extern volatile uint16_t PDC1 __attribute__((__sfr__));
#define PDC2 PDC2
extern volatile uint16_t PDC2 __attribute__((__sfr__));
#define PDC3 PDC3
extern volatile uint16_t PDC3 __attribute__((__sfr__));
#define PDC4 PDC4
extern volatile uint16_t PDC4 __attribute__((__sfr__));
#define I2CRCV I2CRCV
extern volatile uint16_t I2CRCV __attribute__((__sfr__));
__extension__ typedef struct tagI2CRCVBITS {
  union {
    struct {
      uint16_t I2CRCV:8;
    };
    struct {
      uint16_t I2CRCV0:1;
      uint16_t I2CRCV1:1;
      uint16_t I2CRCV2:1;
      uint16_t I2CRCV3:1;
      uint16_t I2CRCV4:1;
      uint16_t I2CRCV5:1;
      uint16_t I2CRCV6:1;
      uint16_t I2CRCV7:1;
    };
  };
} I2CRCVBITS;
extern volatile I2CRCVBITS I2CRCVbits __attribute__((__sfr__));

#define I2CTRN I2CTRN
extern volatile uint16_t I2CTRN __attribute__((__sfr__));
__extension__ typedef struct tagI2CTRNBITS {
  union {
    struct {
      uint16_t I2CTRN:8;
    };
    struct {
      uint16_t I2CTRN0:1;
      uint16_t I2CTRN1:1;
      uint16_t I2CTRN2:1;
      uint16_t I2CTRN3:1;
      uint16_t I2CTRN4:1;
      uint16_t I2CTRN5:1;
      uint16_t I2CTRN6:1;
      uint16_t I2CTRN7:1;
    };
  };
} I2CTRNBITS;
extern volatile I2CTRNBITS I2CTRNbits __attribute__((__sfr__));

#define I2CBRG I2CBRG
extern volatile uint16_t I2CBRG __attribute__((__sfr__));
typedef struct tagI2CBRGBITS {
  uint16_t I2CBRG:9;
} I2CBRGBITS;
extern volatile I2CBRGBITS I2CBRGbits __attribute__((__sfr__));

#define I2CCON I2CCON
extern volatile uint16_t I2CCON __attribute__((__sfr__));
typedef struct tagI2CCONBITS {
  uint16_t SEN:1;
  uint16_t RSEN:1;
  uint16_t PEN:1;
  uint16_t RCEN:1;
  uint16_t ACKEN:1;
  uint16_t ACKDT:1;
  uint16_t STREN:1;
  uint16_t GCEN:1;
  uint16_t SMEN:1;
  uint16_t DISSLW:1;
  uint16_t A10M:1;
  uint16_t IPMIEN:1;
  uint16_t SCLREL:1;
  uint16_t I2CSIDL:1;
  uint16_t :1;
  uint16_t I2CEN:1;
} I2CCONBITS;
extern volatile I2CCONBITS I2CCONbits __attribute__((__sfr__));

#define I2CSTAT I2CSTAT
extern volatile uint16_t I2CSTAT __attribute__((__sfr__));
__extension__ typedef struct tagI2CSTATBITS {
  union {
    struct {
      uint16_t TBF:1;
      uint16_t RBF:1;
      uint16_t R_NOT_W:1;
      uint16_t S:1;
      uint16_t P:1;
      uint16_t D_NOT_A:1;
      uint16_t I2COV:1;
      uint16_t IWCOL:1;
      uint16_t ADD10:1;
      uint16_t GCSTAT:1;
      uint16_t BCL:1;
      uint16_t :3;
      uint16_t TRSTAT:1;
      uint16_t ACKSTAT:1;
    };
    struct {
      uint16_t :2;
      uint16_t R_W:1;
      uint16_t :2;
      uint16_t D_A:1;
    };
  };
} I2CSTATBITS;
extern volatile I2CSTATBITS I2CSTATbits __attribute__((__sfr__));

#define I2CADD I2CADD
extern volatile uint16_t I2CADD __attribute__((__sfr__));
typedef struct tagI2CADDBITS {
  uint16_t I2CADD:10;
} I2CADDBITS;
extern volatile I2CADDBITS I2CADDbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        uint16_t uxmode;
        uint16_t uxsta;
        uint16_t uxtxreg;
        uint16_t uxrxreg;
        uint16_t uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS


/* SFR blocks for each UART module */
#define UART1 UART1
extern volatile UART UART1 __attribute__((__sfr__));

#define U1MODE U1MODE
extern volatile uint16_t U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t :2;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t :2;
      uint16_t ALTIO:1;
      uint16_t :2;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
    };
  };
} U1MODEBITS;
extern volatile U1MODEBITS U1MODEbits __attribute__((__sfr__));

#define U1STA U1STA
extern volatile uint16_t U1STA __attribute__((__sfr__));
__extension__ typedef struct tagU1STABITS {
  union {
    struct {
      uint16_t URXDA:1;
      uint16_t OERR:1;
      uint16_t FERR:1;
      uint16_t PERR:1;
      uint16_t RIDLE:1;
      uint16_t ADDEN:1;
      uint16_t URXISEL:2;
      uint16_t TRMT:1;
      uint16_t UTXBF:1;
      uint16_t UTXEN:1;
      uint16_t UTXBRK:1;
      uint16_t :3;
      uint16_t UTXISEL:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U1STABITS;
extern volatile U1STABITS U1STAbits __attribute__((__sfr__));

#define U1TXREG U1TXREG
extern volatile uint16_t U1TXREG __attribute__((__sfr__));
__extension__ typedef struct tagU1TXREGBITS {
  union {
    struct {
      uint16_t UTXREG0:1;
      uint16_t UTXREG1:1;
      uint16_t UTXREG2:1;
      uint16_t UTXREG3:1;
      uint16_t UTXREG4:1;
      uint16_t UTXREG5:1;
      uint16_t UTXREG6:1;
      uint16_t UTXREG7:1;
      uint16_t UTXREG8:1;
    };
    struct {
      uint16_t :8;
      uint16_t UTX8:1;
    };
  };
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

#define U1RXREG U1RXREG
extern volatile uint16_t U1RXREG __attribute__((__sfr__));
__extension__ typedef struct tagU1RXREGBITS {
  union {
    struct {
      uint16_t URXREG0:1;
      uint16_t URXREG1:1;
      uint16_t URXREG2:1;
      uint16_t URXREG3:1;
      uint16_t URXREG4:1;
      uint16_t URXREG5:1;
      uint16_t URXREG6:1;
      uint16_t URXREG7:1;
      uint16_t URXREG8:1;
    };
    struct {
      uint16_t :8;
      uint16_t URX8:1;
    };
  };
} U1RXREGBITS;
extern volatile U1RXREGBITS U1RXREGbits __attribute__((__sfr__));

#define U1BRG U1BRG
extern volatile uint16_t U1BRG __attribute__((__sfr__));

/* Generic structure of entire SFR area for each SPI module */
typedef struct tagSPI {
        uint16_t spixstat;
        uint16_t spixcon1;
        uint16_t spixcon2;
        uint16_t unused;
        uint16_t spixbuf;
} SPI, *PSPI;

#define SPIxSTATBITS SPI1STATBITS
#define SPIxCONBITS SPI1CONBITS


/* SFR blocks for each SPI module */
#define SPI1 SPI1
extern volatile SPI SPI1 __attribute__((__sfr__));

#define SPI1STAT SPI1STAT
extern volatile uint16_t SPI1STAT __attribute__((__sfr__));
typedef struct tagSPI1STATBITS {
  uint16_t SPIRBF:1;
  uint16_t SPITBF:1;
  uint16_t :4;
  uint16_t SPIROV:1;
  uint16_t :6;
  uint16_t SPISIDL:1;
  uint16_t :1;
  uint16_t SPIEN:1;
} SPI1STATBITS;
extern volatile SPI1STATBITS SPI1STATbits __attribute__((__sfr__));

#define SPI1CON SPI1CON
extern volatile uint16_t SPI1CON __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CONBITS {
  union {
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t :1;
      uint16_t SPIFSD:1;
      uint16_t FRMEN:1;
    };
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
    };
  };
} SPI1CONBITS;
extern volatile SPI1CONBITS SPI1CONbits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile uint16_t SPI1BUF __attribute__((__sfr__));

/* SFR blocks for each SPI module */
#define SPI2 SPI2
extern volatile SPI SPI2 __attribute__((__sfr__));

#define SPI2STAT SPI2STAT
extern volatile uint16_t SPI2STAT __attribute__((__sfr__));
typedef struct tagSPI2STATBITS {
  uint16_t SPIRBF:1;
  uint16_t SPITBF:1;
  uint16_t :4;
  uint16_t SPIROV:1;
  uint16_t :6;
  uint16_t SPISIDL:1;
  uint16_t :1;
  uint16_t SPIEN:1;
} SPI2STATBITS;
extern volatile SPI2STATBITS SPI2STATbits __attribute__((__sfr__));

#define SPI2CON SPI2CON
extern volatile uint16_t SPI2CON __attribute__((__sfr__));
__extension__ typedef struct tagSPI2CONBITS {
  union {
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t :1;
      uint16_t SPIFSD:1;
      uint16_t FRMEN:1;
    };
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
    };
  };
} SPI2CONBITS;
extern volatile SPI2CONBITS SPI2CONbits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile uint16_t SPI2BUF __attribute__((__sfr__));
#define ADCBUF0 ADCBUF0
extern volatile uint16_t ADCBUF0 __attribute__((__sfr__));
#define ADCBUF1 ADCBUF1
extern volatile uint16_t ADCBUF1 __attribute__((__sfr__));
#define ADCBUF2 ADCBUF2
extern volatile uint16_t ADCBUF2 __attribute__((__sfr__));
#define ADCBUF3 ADCBUF3
extern volatile uint16_t ADCBUF3 __attribute__((__sfr__));
#define ADCBUF4 ADCBUF4
extern volatile uint16_t ADCBUF4 __attribute__((__sfr__));
#define ADCBUF5 ADCBUF5
extern volatile uint16_t ADCBUF5 __attribute__((__sfr__));
#define ADCBUF6 ADCBUF6
extern volatile uint16_t ADCBUF6 __attribute__((__sfr__));
#define ADCBUF7 ADCBUF7
extern volatile uint16_t ADCBUF7 __attribute__((__sfr__));
#define ADCBUF8 ADCBUF8
extern volatile uint16_t ADCBUF8 __attribute__((__sfr__));
#define ADCBUF9 ADCBUF9
extern volatile uint16_t ADCBUF9 __attribute__((__sfr__));
#define ADCBUFA ADCBUFA
extern volatile uint16_t ADCBUFA __attribute__((__sfr__));
#define ADCBUFB ADCBUFB
extern volatile uint16_t ADCBUFB __attribute__((__sfr__));
#define ADCBUFC ADCBUFC
extern volatile uint16_t ADCBUFC __attribute__((__sfr__));
#define ADCBUFD ADCBUFD
extern volatile uint16_t ADCBUFD __attribute__((__sfr__));
#define ADCBUFE ADCBUFE
extern volatile uint16_t ADCBUFE __attribute__((__sfr__));
#define ADCBUFF ADCBUFF
extern volatile uint16_t ADCBUFF __attribute__((__sfr__));
#define ADCON1 ADCON1
extern volatile uint16_t ADCON1 __attribute__((__sfr__));
__extension__ typedef struct tagADCON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t SIMSAM:1;
      uint16_t :1;
      uint16_t SSRC:3;
      uint16_t FORM:2;
      uint16_t :3;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t :5;
      uint16_t SSRC0:1;
      uint16_t SSRC1:1;
      uint16_t SSRC2:1;
      uint16_t FORM0:1;
      uint16_t FORM1:1;
    };
  };
} ADCON1BITS;
extern volatile ADCON1BITS ADCON1bits __attribute__((__sfr__));

#define ADCON2 ADCON2
extern volatile uint16_t ADCON2 __attribute__((__sfr__));
__extension__ typedef struct tagADCON2BITS {
  union {
    struct {
      uint16_t ALTS:1;
      uint16_t BUFM:1;
      uint16_t SMPI:4;
      uint16_t :1;
      uint16_t BUFS:1;
      uint16_t CHPS:2;
      uint16_t CSCNA:1;
      uint16_t :2;
      uint16_t VCFG:3;
    };
    struct {
      uint16_t :2;
      uint16_t SMPI0:1;
      uint16_t SMPI1:1;
      uint16_t SMPI2:1;
      uint16_t SMPI3:1;
      uint16_t :2;
      uint16_t CHPS0:1;
      uint16_t CHPS1:1;
      uint16_t :3;
      uint16_t VCFG0:1;
      uint16_t VCFG1:1;
      uint16_t VCFG2:1;
    };
  };
} ADCON2BITS;
extern volatile ADCON2BITS ADCON2bits __attribute__((__sfr__));

#define ADCON3 ADCON3
extern volatile uint16_t ADCON3 __attribute__((__sfr__));
__extension__ typedef struct tagADCON3BITS {
  union {
    struct {
      uint16_t ADCS:6;
      uint16_t :1;
      uint16_t ADRC:1;
      uint16_t SAMC:5;
    };
    struct {
      uint16_t ADCS0:1;
      uint16_t ADCS1:1;
      uint16_t ADCS2:1;
      uint16_t ADCS3:1;
      uint16_t ADCS4:1;
      uint16_t ADCS5:1;
      uint16_t :2;
      uint16_t SAMC0:1;
      uint16_t SAMC1:1;
      uint16_t SAMC2:1;
      uint16_t SAMC3:1;
      uint16_t SAMC4:1;
    };
  };
} ADCON3BITS;
extern volatile ADCON3BITS ADCON3bits __attribute__((__sfr__));

#define ADCHS ADCHS
extern volatile uint16_t ADCHS __attribute__((__sfr__));
__extension__ typedef struct tagADCHSBITS {
  union {
    struct {
      uint16_t CH0SA:4;
      uint16_t CH0NA:1;
      uint16_t CH123SA:1;
      uint16_t CH123NA:2;
      uint16_t CH0SB:4;
      uint16_t CH0NB:1;
      uint16_t CH123SB:1;
      uint16_t CH123NB:2;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t :2;
      uint16_t CH123NA0:1;
      uint16_t CH123NA1:1;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t :2;
      uint16_t CH123NB0:1;
      uint16_t CH123NB1:1;
    };
  };
} ADCHSBITS;
extern volatile ADCHSBITS ADCHSbits __attribute__((__sfr__));

#define ADPCFG ADPCFG
extern volatile uint16_t ADPCFG __attribute__((__sfr__));
typedef struct tagADPCFGBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t PCFG4:1;
  uint16_t PCFG5:1;
  uint16_t PCFG6:1;
  uint16_t PCFG7:1;
  uint16_t PCFG8:1;
  uint16_t PCFG9:1;
  uint16_t PCFG10:1;
  uint16_t PCFG11:1;
  uint16_t PCFG12:1;
  uint16_t PCFG13:1;
  uint16_t PCFG14:1;
  uint16_t PCFG15:1;
} ADPCFGBITS;
extern volatile ADPCFGBITS ADPCFGbits __attribute__((__sfr__));

#define ADCSSL ADCSSL
extern volatile uint16_t ADCSSL __attribute__((__sfr__));
typedef struct tagADCSSLBITS {
  uint16_t CSSL0:1;
  uint16_t CSSL1:1;
  uint16_t CSSL2:1;
  uint16_t CSSL3:1;
  uint16_t CSSL4:1;
  uint16_t CSSL5:1;
  uint16_t CSSL6:1;
  uint16_t CSSL7:1;
  uint16_t CSSL8:1;
  uint16_t CSSL9:1;
  uint16_t CSSL10:1;
  uint16_t CSSL11:1;
  uint16_t CSSL12:1;
  uint16_t CSSL13:1;
  uint16_t CSSL14:1;
  uint16_t CSSL15:1;
} ADCSSLBITS;
extern volatile ADCSSLBITS ADCSSLbits __attribute__((__sfr__));

#define TRISB TRISB
extern volatile uint16_t TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  uint16_t TRISB0:1;
  uint16_t TRISB1:1;
  uint16_t TRISB2:1;
  uint16_t TRISB3:1;
  uint16_t TRISB4:1;
  uint16_t TRISB5:1;
  uint16_t TRISB6:1;
  uint16_t TRISB7:1;
  uint16_t TRISB8:1;
  uint16_t TRISB9:1;
  uint16_t TRISB10:1;
  uint16_t TRISB11:1;
  uint16_t TRISB12:1;
  uint16_t TRISB13:1;
  uint16_t TRISB14:1;
  uint16_t TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

#define PORTB PORTB
extern volatile uint16_t PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  uint16_t RB0:1;
  uint16_t RB1:1;
  uint16_t RB2:1;
  uint16_t RB3:1;
  uint16_t RB4:1;
  uint16_t RB5:1;
  uint16_t RB6:1;
  uint16_t RB7:1;
  uint16_t RB8:1;
  uint16_t RB9:1;
  uint16_t RB10:1;
  uint16_t RB11:1;
  uint16_t RB12:1;
  uint16_t RB13:1;
  uint16_t RB14:1;
  uint16_t RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

#define LATB LATB
extern volatile uint16_t LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  uint16_t LATB0:1;
  uint16_t LATB1:1;
  uint16_t LATB2:1;
  uint16_t LATB3:1;
  uint16_t LATB4:1;
  uint16_t LATB5:1;
  uint16_t LATB6:1;
  uint16_t LATB7:1;
  uint16_t LATB8:1;
  uint16_t LATB9:1;
  uint16_t LATB10:1;
  uint16_t LATB11:1;
  uint16_t LATB12:1;
  uint16_t LATB13:1;
  uint16_t LATB14:1;
  uint16_t LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define TRISC TRISC
extern volatile uint16_t TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  uint16_t :13;
  uint16_t TRISC13:1;
  uint16_t TRISC14:1;
  uint16_t TRISC15:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile uint16_t PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  uint16_t :13;
  uint16_t RC13:1;
  uint16_t RC14:1;
  uint16_t RC15:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile uint16_t LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  uint16_t :13;
  uint16_t LATC13:1;
  uint16_t LATC14:1;
  uint16_t LATC15:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define TRISD TRISD
extern volatile uint16_t TRISD __attribute__((__sfr__));
typedef struct tagTRISDBITS {
  uint16_t TRISD0:1;
  uint16_t TRISD1:1;
  uint16_t TRISD2:1;
  uint16_t TRISD3:1;
  uint16_t TRISD4:1;
  uint16_t TRISD5:1;
  uint16_t TRISD6:1;
  uint16_t TRISD7:1;
  uint16_t TRISD8:1;
  uint16_t TRISD9:1;
  uint16_t TRISD10:1;
  uint16_t TRISD11:1;
} TRISDBITS;
extern volatile TRISDBITS TRISDbits __attribute__((__sfr__));

#define PORTD PORTD
extern volatile uint16_t PORTD __attribute__((__sfr__));
typedef struct tagPORTDBITS {
  uint16_t RD0:1;
  uint16_t RD1:1;
  uint16_t RD2:1;
  uint16_t RD3:1;
  uint16_t RD4:1;
  uint16_t RD5:1;
  uint16_t RD6:1;
  uint16_t RD7:1;
  uint16_t RD8:1;
  uint16_t RD9:1;
  uint16_t RD10:1;
  uint16_t RD11:1;
} PORTDBITS;
extern volatile PORTDBITS PORTDbits __attribute__((__sfr__));

#define LATD LATD
extern volatile uint16_t LATD __attribute__((__sfr__));
typedef struct tagLATDBITS {
  uint16_t LATD0:1;
  uint16_t LATD1:1;
  uint16_t LATD2:1;
  uint16_t LATD3:1;
  uint16_t LATD4:1;
  uint16_t LATD5:1;
  uint16_t LATD6:1;
  uint16_t LATD7:1;
  uint16_t LATD8:1;
  uint16_t LATD9:1;
  uint16_t LATD10:1;
  uint16_t LATD11:1;
} LATDBITS;
extern volatile LATDBITS LATDbits __attribute__((__sfr__));

#define TRISE TRISE
extern volatile uint16_t TRISE __attribute__((__sfr__));
typedef struct tagTRISEBITS {
  uint16_t TRISE0:1;
  uint16_t TRISE1:1;
  uint16_t TRISE2:1;
  uint16_t TRISE3:1;
  uint16_t TRISE4:1;
  uint16_t TRISE5:1;
  uint16_t TRISE6:1;
  uint16_t TRISE7:1;
} TRISEBITS;
extern volatile TRISEBITS TRISEbits __attribute__((__sfr__));

#define PORTE PORTE
extern volatile uint16_t PORTE __attribute__((__sfr__));
typedef struct tagPORTEBITS {
  uint16_t RE0:1;
  uint16_t RE1:1;
  uint16_t RE2:1;
  uint16_t RE3:1;
  uint16_t RE4:1;
  uint16_t RE5:1;
  uint16_t RE6:1;
  uint16_t RE7:1;
} PORTEBITS;
extern volatile PORTEBITS PORTEbits __attribute__((__sfr__));

#define LATE LATE
extern volatile uint16_t LATE __attribute__((__sfr__));
typedef struct tagLATEBITS {
  uint16_t LATE0:1;
  uint16_t LATE1:1;
  uint16_t LATE2:1;
  uint16_t LATE3:1;
  uint16_t LATE4:1;
  uint16_t LATE5:1;
  uint16_t LATE6:1;
  uint16_t LATE7:1;
} LATEBITS;
extern volatile LATEBITS LATEbits __attribute__((__sfr__));

#define TRISF TRISF
extern volatile uint16_t TRISF __attribute__((__sfr__));
typedef struct tagTRISFBITS {
  uint16_t TRISF0:1;
  uint16_t TRISF1:1;
  uint16_t TRISF2:1;
  uint16_t TRISF3:1;
  uint16_t TRISF4:1;
  uint16_t TRISF5:1;
  uint16_t TRISF6:1;
} TRISFBITS;
extern volatile TRISFBITS TRISFbits __attribute__((__sfr__));

#define PORTF PORTF
extern volatile uint16_t PORTF __attribute__((__sfr__));
typedef struct tagPORTFBITS {
  uint16_t RF0:1;
  uint16_t RF1:1;
  uint16_t RF2:1;
  uint16_t RF3:1;
  uint16_t RF4:1;
  uint16_t RF5:1;
  uint16_t RF6:1;
} PORTFBITS;
extern volatile PORTFBITS PORTFbits __attribute__((__sfr__));

#define LATF LATF
extern volatile uint16_t LATF __attribute__((__sfr__));
typedef struct tagLATFBITS {
  uint16_t LATF0:1;
  uint16_t LATF1:1;
  uint16_t LATF2:1;
  uint16_t LATF3:1;
  uint16_t LATF4:1;
  uint16_t LATF5:1;
  uint16_t LATF6:1;
} LATFBITS;
extern volatile LATFBITS LATFbits __attribute__((__sfr__));

#define TRISG TRISG
extern volatile uint16_t TRISG __attribute__((__sfr__));
typedef struct tagTRISGBITS {
  uint16_t :2;
  uint16_t TRISG2:1;
  uint16_t TRISG3:1;
  uint16_t :2;
  uint16_t TRISG6:1;
  uint16_t TRISG7:1;
  uint16_t TRISG8:1;
  uint16_t TRISG9:1;
} TRISGBITS;
extern volatile TRISGBITS TRISGbits __attribute__((__sfr__));

#define PORTG PORTG
extern volatile uint16_t PORTG __attribute__((__sfr__));
typedef struct tagPORTGBITS {
  uint16_t :2;
  uint16_t RG2:1;
  uint16_t RG3:1;
  uint16_t :2;
  uint16_t RG6:1;
  uint16_t RG7:1;
  uint16_t RG8:1;
  uint16_t RG9:1;
} PORTGBITS;
extern volatile PORTGBITS PORTGbits __attribute__((__sfr__));

#define LATG LATG
extern volatile uint16_t LATG __attribute__((__sfr__));
typedef struct tagLATGBITS {
  uint16_t :2;
  uint16_t LATG2:1;
  uint16_t LATG3:1;
  uint16_t :2;
  uint16_t LATG6:1;
  uint16_t LATG7:1;
  uint16_t LATG8:1;
  uint16_t LATG9:1;
} LATGBITS;
extern volatile LATGBITS LATGbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each CAN module */
typedef struct tagCAN {
        uint16_t cxrxf0sid;
        uint16_t cxrxf0eidh;
        uint16_t cxrxf0eidl;
        uint16_t reserved0;
        uint16_t cxrxf1sid;
        uint16_t cxrxf1eidh;
        uint16_t cxrxf1eidl;
        uint16_t reserved1;
        uint16_t cxrxf2sid;
        uint16_t cxrxf2eidh;
        uint16_t cxrxf2eidl;
        uint16_t reserved2;
        uint16_t cxrxf3sid;
        uint16_t cxrxf3eidh;
        uint16_t cxrxf3eidl;
        uint16_t reserved3;
        uint16_t cxrxf4sid;
        uint16_t cxrxf4eidh;
        uint16_t cxrxf4eidl;
        uint16_t reserved4;
        uint16_t cxrxf5sid;
        uint16_t cxrxf5eidh;
        uint16_t cxrxf5eidl;
        uint16_t reserved5;
        uint16_t cxrxm0sid;
        uint16_t cxrxm0eidh;
        uint16_t cxrxm0eidl;
        uint16_t reserved6;
        uint16_t cxrxm1sid;
        uint16_t cxrxm1eidh;
        uint16_t cxrxm1eidl;
        uint16_t reserved7;
        uint16_t cxtx2sid;
        uint16_t cxtx2eid;
        uint16_t cxtx2dlc;
        uint16_t cxtx2b1;
        uint16_t cxtx2b2;
        uint16_t cxtx2b3;
        uint16_t cxtx2b4;
        uint16_t cxtx2con;
        uint16_t cxtx1sid;
        uint16_t cxtx1eid;
        uint16_t cxtx1dlc;
        uint16_t cxtx1b1;
        uint16_t cxtx1b2;
        uint16_t cxtx1b3;
        uint16_t cxtx1b4;
        uint16_t cxtx1con;
        uint16_t cxtx0sid;
        uint16_t cxtx0eid;
        uint16_t cxtx0dlc;
        uint16_t cxtx0b1;
        uint16_t cxtx0b2;
        uint16_t cxtx0b3;
        uint16_t cxtx0b4;
        uint16_t cxtx0con;
        uint16_t cxrx1sid;
        uint16_t cxrx1eid;
        uint16_t cxrx1dlc;
        uint16_t cxrx1b1;
        uint16_t cxrx1b2;
        uint16_t cxrx1b3;
        uint16_t cxrx1b4;
        uint16_t cxrx1con;
        uint16_t cxrx0sid;
        uint16_t cxrx0eid;
        uint16_t cxrx0dlc;
        uint16_t cxrx0b1;
        uint16_t cxrx0b2;
        uint16_t cxrx0b3;
        uint16_t cxrx0b4;
        uint16_t cxrx0con;
        uint16_t cxctrl;
        uint16_t cxcfg1;
        uint16_t cxcfg2;
        uint16_t cxintf;
        uint16_t cxinte;
        uint16_t cxec;
        uint16_t reserved8[50];
} CAN, *PCAN;

/* SFR blocks for each CAN module */
#define CAN1 CAN1
extern volatile CAN CAN1 __attribute__((__sfr__));

#define C1RXF0SID C1RXF0SID
extern volatile uint16_t C1RXF0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF0SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF0SIDBITS;
extern volatile C1RXF0SIDBITS C1RXF0SIDbits __attribute__((__sfr__));

#define C1RXF0EIDH C1RXF0EIDH
extern volatile uint16_t C1RXF0EIDH __attribute__((__sfr__));
typedef struct tagC1RXF0EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF0EIDHBITS;
extern volatile C1RXF0EIDHBITS C1RXF0EIDHbits __attribute__((__sfr__));

#define C1RXF0EIDL C1RXF0EIDL
extern volatile uint16_t C1RXF0EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF0EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF0EIDLBITS;
extern volatile C1RXF0EIDLBITS C1RXF0EIDLbits __attribute__((__sfr__));

#define C1RXF1SID C1RXF1SID
extern volatile uint16_t C1RXF1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF1SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF1SIDBITS;
extern volatile C1RXF1SIDBITS C1RXF1SIDbits __attribute__((__sfr__));

#define C1RXF1EIDH C1RXF1EIDH
extern volatile uint16_t C1RXF1EIDH __attribute__((__sfr__));
typedef struct tagC1RXF1EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF1EIDHBITS;
extern volatile C1RXF1EIDHBITS C1RXF1EIDHbits __attribute__((__sfr__));

#define C1RXF1EIDL C1RXF1EIDL
extern volatile uint16_t C1RXF1EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF1EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF1EIDLBITS;
extern volatile C1RXF1EIDLBITS C1RXF1EIDLbits __attribute__((__sfr__));

#define C1RXF2SID C1RXF2SID
extern volatile uint16_t C1RXF2SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF2SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF2SIDBITS;
extern volatile C1RXF2SIDBITS C1RXF2SIDbits __attribute__((__sfr__));

#define C1RXF2EIDH C1RXF2EIDH
extern volatile uint16_t C1RXF2EIDH __attribute__((__sfr__));
typedef struct tagC1RXF2EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF2EIDHBITS;
extern volatile C1RXF2EIDHBITS C1RXF2EIDHbits __attribute__((__sfr__));

#define C1RXF2EIDL C1RXF2EIDL
extern volatile uint16_t C1RXF2EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF2EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF2EIDLBITS;
extern volatile C1RXF2EIDLBITS C1RXF2EIDLbits __attribute__((__sfr__));

#define C1RXF3SID C1RXF3SID
extern volatile uint16_t C1RXF3SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF3SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF3SIDBITS;
extern volatile C1RXF3SIDBITS C1RXF3SIDbits __attribute__((__sfr__));

#define C1RXF3EIDH C1RXF3EIDH
extern volatile uint16_t C1RXF3EIDH __attribute__((__sfr__));
typedef struct tagC1RXF3EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF3EIDHBITS;
extern volatile C1RXF3EIDHBITS C1RXF3EIDHbits __attribute__((__sfr__));

#define C1RXF3EIDL C1RXF3EIDL
extern volatile uint16_t C1RXF3EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF3EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF3EIDLBITS;
extern volatile C1RXF3EIDLBITS C1RXF3EIDLbits __attribute__((__sfr__));

#define C1RXF4SID C1RXF4SID
extern volatile uint16_t C1RXF4SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF4SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF4SIDBITS;
extern volatile C1RXF4SIDBITS C1RXF4SIDbits __attribute__((__sfr__));

#define C1RXF4EIDH C1RXF4EIDH
extern volatile uint16_t C1RXF4EIDH __attribute__((__sfr__));
typedef struct tagC1RXF4EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF4EIDHBITS;
extern volatile C1RXF4EIDHBITS C1RXF4EIDHbits __attribute__((__sfr__));

#define C1RXF4EIDL C1RXF4EIDL
extern volatile uint16_t C1RXF4EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF4EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF4EIDLBITS;
extern volatile C1RXF4EIDLBITS C1RXF4EIDLbits __attribute__((__sfr__));

#define C1RXF5SID C1RXF5SID
extern volatile uint16_t C1RXF5SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF5SIDBITS {
  union {
    struct {
      uint16_t EXIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXF5SIDBITS;
extern volatile C1RXF5SIDBITS C1RXF5SIDbits __attribute__((__sfr__));

#define C1RXF5EIDH C1RXF5EIDH
extern volatile uint16_t C1RXF5EIDH __attribute__((__sfr__));
typedef struct tagC1RXF5EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXF5EIDHBITS;
extern volatile C1RXF5EIDHBITS C1RXF5EIDHbits __attribute__((__sfr__));

#define C1RXF5EIDL C1RXF5EIDL
extern volatile uint16_t C1RXF5EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXF5EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXF5EIDLBITS;
extern volatile C1RXF5EIDLBITS C1RXF5EIDLbits __attribute__((__sfr__));

#define C1RXM0SID C1RXM0SID
extern volatile uint16_t C1RXM0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0SIDBITS {
  union {
    struct {
      uint16_t MIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXM0SIDBITS;
extern volatile C1RXM0SIDBITS C1RXM0SIDbits __attribute__((__sfr__));

#define C1RXM0EIDH C1RXM0EIDH
extern volatile uint16_t C1RXM0EIDH __attribute__((__sfr__));
typedef struct tagC1RXM0EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXM0EIDHBITS;
extern volatile C1RXM0EIDHBITS C1RXM0EIDHbits __attribute__((__sfr__));

#define C1RXM0EIDL C1RXM0EIDL
extern volatile uint16_t C1RXM0EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXM0EIDLBITS;
extern volatile C1RXM0EIDLBITS C1RXM0EIDLbits __attribute__((__sfr__));

#define C1RXM1SID C1RXM1SID
extern volatile uint16_t C1RXM1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1SIDBITS {
  union {
    struct {
      uint16_t MIDE:1;
      uint16_t :1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RXM1SIDBITS;
extern volatile C1RXM1SIDBITS C1RXM1SIDbits __attribute__((__sfr__));

#define C1RXM1EIDH C1RXM1EIDH
extern volatile uint16_t C1RXM1EIDH __attribute__((__sfr__));
typedef struct tagC1RXM1EIDHBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RXM1EIDHBITS;
extern volatile C1RXM1EIDHBITS C1RXM1EIDHbits __attribute__((__sfr__));

#define C1RXM1EIDL C1RXM1EIDL
extern volatile uint16_t C1RXM1EIDL __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1EIDLBITS {
  union {
    struct {
      uint16_t :10;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1RXM1EIDLBITS;
extern volatile C1RXM1EIDLBITS C1RXM1EIDLbits __attribute__((__sfr__));

#define C1TX2SID C1TX2SID
extern volatile uint16_t C1TX2SID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX2SIDBITS {
  union {
    struct {
      uint16_t TXIDE:1;
      uint16_t SRR:1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t :3;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID5_0:6;
      uint16_t :3;
      uint16_t SID10_6:5;
    };
  };
} C1TX2SIDBITS;
extern volatile C1TX2SIDBITS C1TX2SIDbits __attribute__((__sfr__));

#define C1TX2EID C1TX2EID
extern volatile uint16_t C1TX2EID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX2EIDBITS {
  union {
    struct {
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t :4;
      uint16_t EID14:1;
      uint16_t EID15:1;
      uint16_t EID16:1;
      uint16_t EID17:1;
    };
    struct {
      uint16_t EID13_6:8;
      uint16_t :4;
      uint16_t EID17_14:4;
    };
  };
} C1TX2EIDBITS;
extern volatile C1TX2EIDBITS C1TX2EIDbits __attribute__((__sfr__));

#define C1TX2DLC C1TX2DLC
extern volatile uint16_t C1TX2DLC __attribute__((__sfr__));
__extension__ typedef struct tagC1TX2DLCBITS {
  union {
    struct {
      uint16_t :3;
      uint16_t DLC:4;
      uint16_t TXRB0:1;
      uint16_t TXRB1:1;
      uint16_t TXRTR:1;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
  };
} C1TX2DLCBITS;
extern volatile C1TX2DLCBITS C1TX2DLCbits __attribute__((__sfr__));

#define C1TX2B1 C1TX2B1
extern volatile uint16_t C1TX2B1 __attribute__((__sfr__));
typedef struct tagC1TX2B1BITS {
  uint16_t TXB2D00:1;
  uint16_t TXB2D01:1;
  uint16_t TXB2D02:1;
  uint16_t TXB2D03:1;
  uint16_t TXB2D04:1;
  uint16_t TXB2D05:1;
  uint16_t TXB2D06:1;
  uint16_t TXB2D07:1;
  uint16_t TXB2D10:1;
  uint16_t TXB2D11:1;
  uint16_t TXB2D12:1;
  uint16_t TXB2D13:1;
  uint16_t TXB2D14:1;
  uint16_t TXB2D15:1;
  uint16_t TXB2D16:1;
  uint16_t TXB2D17:1;
} C1TX2B1BITS;
extern volatile C1TX2B1BITS C1TX2B1bits __attribute__((__sfr__));

#define C1TX2B2 C1TX2B2
extern volatile uint16_t C1TX2B2 __attribute__((__sfr__));
typedef struct tagC1TX2B2BITS {
  uint16_t TXB2D20:1;
  uint16_t TXB2D21:1;
  uint16_t TXB2D22:1;
  uint16_t TXB2D23:1;
  uint16_t TXB2D24:1;
  uint16_t TXB2D25:1;
  uint16_t TXB2D26:1;
  uint16_t TXB2D27:1;
  uint16_t TXB2D30:1;
  uint16_t TXB2D31:1;
  uint16_t TXB2D32:1;
  uint16_t TXB2D33:1;
  uint16_t TXB2D34:1;
  uint16_t TXB2D35:1;
  uint16_t TXB2D36:1;
  uint16_t TXB2D37:1;
} C1TX2B2BITS;
extern volatile C1TX2B2BITS C1TX2B2bits __attribute__((__sfr__));

#define C1TX2B3 C1TX2B3
extern volatile uint16_t C1TX2B3 __attribute__((__sfr__));
typedef struct tagC1TX2B3BITS {
  uint16_t TX2B2D40:1;
  uint16_t TX2B2D41:1;
  uint16_t TX2B2D42:1;
  uint16_t TX2B2D43:1;
  uint16_t TX2B2D44:1;
  uint16_t TX2B2D45:1;
  uint16_t TX2B2D46:1;
  uint16_t TX2B2D47:1;
  uint16_t TXB2D50:1;
  uint16_t TXB2D51:1;
  uint16_t TXB2D52:1;
  uint16_t TXB2D53:1;
  uint16_t TXB2D54:1;
  uint16_t TXB2D55:1;
  uint16_t TXB2D56:1;
  uint16_t TXB2D57:1;
} C1TX2B3BITS;
extern volatile C1TX2B3BITS C1TX2B3bits __attribute__((__sfr__));

#define C1TX2B4 C1TX2B4
extern volatile uint16_t C1TX2B4 __attribute__((__sfr__));
typedef struct tagC1TX2B4BITS {
  uint16_t TX2B2D60:1;
  uint16_t TX2B2D61:1;
  uint16_t TX2B2D62:1;
  uint16_t TX2B2D63:1;
  uint16_t TX2B2D64:1;
  uint16_t TX2B2D65:1;
  uint16_t TX2B2D66:1;
  uint16_t TX2B2D67:1;
  uint16_t TX2B2D70:1;
  uint16_t TX2B2D71:1;
  uint16_t TX2B2D72:1;
  uint16_t TX2B2D73:1;
  uint16_t TX2B2D74:1;
  uint16_t TX2B2D75:1;
  uint16_t TX2B2D76:1;
  uint16_t TX2B2D77:1;
} C1TX2B4BITS;
extern volatile C1TX2B4BITS C1TX2B4bits __attribute__((__sfr__));

#define C1TX2CON C1TX2CON
extern volatile uint16_t C1TX2CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TX2CONBITS {
  union {
    struct {
      uint16_t TXPRI:2;
      uint16_t :1;
      uint16_t TXREQ:1;
      uint16_t TXERR:1;
      uint16_t TXLARB:1;
      uint16_t TXABT:1;
    };
    struct {
      uint16_t TXPRI0:1;
      uint16_t TXPRI1:1;
    };
  };
} C1TX2CONBITS;
extern volatile C1TX2CONBITS C1TX2CONbits __attribute__((__sfr__));

#define C1TX1SID C1TX1SID
extern volatile uint16_t C1TX1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX1SIDBITS {
  union {
    struct {
      uint16_t TXIDE:1;
      uint16_t SRR:1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t :3;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID5_0:6;
      uint16_t :3;
      uint16_t SID10_6:5;
    };
  };
} C1TX1SIDBITS;
extern volatile C1TX1SIDBITS C1TX1SIDbits __attribute__((__sfr__));

#define C1TX1EID C1TX1EID
extern volatile uint16_t C1TX1EID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX1EIDBITS {
  union {
    struct {
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t :4;
      uint16_t EID14:1;
      uint16_t EID15:1;
      uint16_t EID16:1;
      uint16_t EID17:1;
    };
    struct {
      uint16_t EID13_6:8;
      uint16_t :4;
      uint16_t EID17_14:4;
    };
  };
} C1TX1EIDBITS;
extern volatile C1TX1EIDBITS C1TX1EIDbits __attribute__((__sfr__));

#define C1TX1DLC C1TX1DLC
extern volatile uint16_t C1TX1DLC __attribute__((__sfr__));
__extension__ typedef struct tagC1TX1DLCBITS {
  union {
    struct {
      uint16_t :3;
      uint16_t DLC:4;
      uint16_t TXRB0:1;
      uint16_t TXRB1:1;
      uint16_t TXRTR:1;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
    struct {
      uint16_t :3;
      uint16_t DLC0:1;
      uint16_t DLC1:1;
      uint16_t DLC2:1;
      uint16_t DLC3:1;
    };
  };
} C1TX1DLCBITS;
extern volatile C1TX1DLCBITS C1TX1DLCbits __attribute__((__sfr__));

#define C1TX1B1 C1TX1B1
extern volatile uint16_t C1TX1B1 __attribute__((__sfr__));
typedef struct tagC1TX1B1BITS {
  uint16_t TXB1D00:1;
  uint16_t TXB1D01:1;
  uint16_t TXB1D02:1;
  uint16_t TXB1D03:1;
  uint16_t TXB1D04:1;
  uint16_t TXB1D05:1;
  uint16_t TXB1D06:1;
  uint16_t TXB1D07:1;
  uint16_t TXB1D10:1;
  uint16_t TXB1D11:1;
  uint16_t TXB1D12:1;
  uint16_t TXB1D13:1;
  uint16_t TXB1D14:1;
  uint16_t TXB1D15:1;
  uint16_t TXB1D16:1;
  uint16_t TXB1D17:1;
} C1TX1B1BITS;
extern volatile C1TX1B1BITS C1TX1B1bits __attribute__((__sfr__));

#define C1TX1B2 C1TX1B2
extern volatile uint16_t C1TX1B2 __attribute__((__sfr__));
typedef struct tagC1TX1B2BITS {
  uint16_t TXB1D20:1;
  uint16_t TXB1D21:1;
  uint16_t TXB1D22:1;
  uint16_t TXB1D23:1;
  uint16_t TXB1D24:1;
  uint16_t TXB1D25:1;
  uint16_t TXB1D26:1;
  uint16_t TXB1D27:1;
  uint16_t TXB1D30:1;
  uint16_t TXB1D31:1;
  uint16_t TXB1D32:1;
  uint16_t TXB1D33:1;
  uint16_t TXB1D34:1;
  uint16_t TXB1D35:1;
  uint16_t TXB1D36:1;
  uint16_t TXB1D37:1;
} C1TX1B2BITS;
extern volatile C1TX1B2BITS C1TX1B2bits __attribute__((__sfr__));

#define C1TX1B3 C1TX1B3
extern volatile uint16_t C1TX1B3 __attribute__((__sfr__));
typedef struct tagC1TX1B3BITS {
  uint16_t TXB1D40:1;
  uint16_t TXB1D41:1;
  uint16_t TXB1D42:1;
  uint16_t TXB1D43:1;
  uint16_t TXB1D44:1;
  uint16_t TXB1D45:1;
  uint16_t TXB1D46:1;
  uint16_t TXB1D47:1;
  uint16_t TXB1D50:1;
  uint16_t TXB1D51:1;
  uint16_t TXB1D52:1;
  uint16_t TXB1D53:1;
  uint16_t TXB1D54:1;
  uint16_t TXB1D55:1;
  uint16_t TXB1D56:1;
  uint16_t TXB1D57:1;
} C1TX1B3BITS;
extern volatile C1TX1B3BITS C1TX1B3bits __attribute__((__sfr__));

#define C1TX1B4 C1TX1B4
extern volatile uint16_t C1TX1B4 __attribute__((__sfr__));
typedef struct tagC1TX1B4BITS {
  uint16_t TXB1D60:1;
  uint16_t TXB1D61:1;
  uint16_t TXB1D62:1;
  uint16_t TXB1D63:1;
  uint16_t TXB1D64:1;
  uint16_t TXB1D65:1;
  uint16_t TXB1D66:1;
  uint16_t TXB1D67:1;
  uint16_t TXB1D70:1;
  uint16_t TXB1D71:1;
  uint16_t TXB1D72:1;
  uint16_t TXB1D73:1;
  uint16_t TXB1D74:1;
  uint16_t TXB1D75:1;
  uint16_t TXB1D76:1;
  uint16_t TXB1D77:1;
} C1TX1B4BITS;
extern volatile C1TX1B4BITS C1TX1B4bits __attribute__((__sfr__));

#define C1TX1CON C1TX1CON
extern volatile uint16_t C1TX1CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TX1CONBITS {
  union {
    struct {
      uint16_t TXPRI:2;
      uint16_t :1;
      uint16_t TXREQ:1;
      uint16_t TXERR:1;
      uint16_t TXLARB:1;
      uint16_t TXABT:1;
    };
    struct {
      uint16_t TXPRI0:1;
      uint16_t TXPRI1:1;
    };
  };
} C1TX1CONBITS;
extern volatile C1TX1CONBITS C1TX1CONbits __attribute__((__sfr__));

#define C1TX0SID C1TX0SID
extern volatile uint16_t C1TX0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX0SIDBITS {
  union {
    struct {
      uint16_t TXIDE:1;
      uint16_t SRR:1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t :3;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID5_0:6;
      uint16_t :3;
      uint16_t SID10_6:5;
    };
  };
} C1TX0SIDBITS;
extern volatile C1TX0SIDBITS C1TX0SIDbits __attribute__((__sfr__));

#define C1TX0EID C1TX0EID
extern volatile uint16_t C1TX0EID __attribute__((__sfr__));
__extension__ typedef struct tagC1TX0EIDBITS {
  union {
    struct {
      uint16_t EID6:1;
      uint16_t EID7:1;
      uint16_t EID8:1;
      uint16_t EID9:1;
      uint16_t EID10:1;
      uint16_t EID11:1;
      uint16_t EID12:1;
      uint16_t EID13:1;
      uint16_t :4;
      uint16_t EID14:1;
      uint16_t EID15:1;
      uint16_t EID16:1;
      uint16_t EID17:1;
    };
    struct {
      uint16_t EID13_6:8;
      uint16_t :4;
      uint16_t EID17_14:4;
    };
  };
} C1TX0EIDBITS;
extern volatile C1TX0EIDBITS C1TX0EIDbits __attribute__((__sfr__));

#define C1TX0DLC C1TX0DLC
extern volatile uint16_t C1TX0DLC __attribute__((__sfr__));
__extension__ typedef struct tagC1TX0DLCBITS {
  union {
    struct {
      uint16_t :3;
      uint16_t DLC:4;
      uint16_t TXRB0:1;
      uint16_t TXRB1:1;
      uint16_t TXRTR:1;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
    struct {
      uint16_t :3;
      uint16_t DLC0:1;
      uint16_t DLC1:1;
      uint16_t DLC2:1;
      uint16_t DLC3:1;
    };
  };
} C1TX0DLCBITS;
extern volatile C1TX0DLCBITS C1TX0DLCbits __attribute__((__sfr__));

#define C1TX0B1 C1TX0B1
extern volatile uint16_t C1TX0B1 __attribute__((__sfr__));
typedef struct tagC1TX0B1BITS {
  uint16_t TXB0D00:1;
  uint16_t TXB0D01:1;
  uint16_t TXB0D02:1;
  uint16_t TXB0D03:1;
  uint16_t TXB0D04:1;
  uint16_t TXB0D05:1;
  uint16_t TXB0D06:1;
  uint16_t TXB0D07:1;
  uint16_t TXB0D10:1;
  uint16_t TXB0D11:1;
  uint16_t TXB0D12:1;
  uint16_t TXB0D13:1;
  uint16_t TXB0D14:1;
  uint16_t TXB0D15:1;
  uint16_t TXB0D16:1;
  uint16_t TXB0D17:1;
} C1TX0B1BITS;
extern volatile C1TX0B1BITS C1TX0B1bits __attribute__((__sfr__));

#define C1TX0B2 C1TX0B2
extern volatile uint16_t C1TX0B2 __attribute__((__sfr__));
typedef struct tagC1TX0B2BITS {
  uint16_t TXB0D20:1;
  uint16_t TXB0D21:1;
  uint16_t TXB0D22:1;
  uint16_t TXB0D23:1;
  uint16_t TXB0D24:1;
  uint16_t TXB0D25:1;
  uint16_t TXB0D26:1;
  uint16_t TXB0D27:1;
  uint16_t TXB0D30:1;
  uint16_t TXB0D31:1;
  uint16_t TXB0D32:1;
  uint16_t TXB0D33:1;
  uint16_t TXB0D34:1;
  uint16_t TXB0D35:1;
  uint16_t TXB0D36:1;
  uint16_t TXB0D37:1;
} C1TX0B2BITS;
extern volatile C1TX0B2BITS C1TX0B2bits __attribute__((__sfr__));

#define C1TX0B3 C1TX0B3
extern volatile uint16_t C1TX0B3 __attribute__((__sfr__));
typedef struct tagC1TX0B3BITS {
  uint16_t TXB0D40:1;
  uint16_t TXB0D41:1;
  uint16_t TXB0D42:1;
  uint16_t TXB0D43:1;
  uint16_t TXB0D44:1;
  uint16_t TXB0D45:1;
  uint16_t TXB0D46:1;
  uint16_t TXB0D47:1;
  uint16_t TXB0D50:1;
  uint16_t TXB0D51:1;
  uint16_t TXB0D52:1;
  uint16_t TXB0D53:1;
  uint16_t TXB0D54:1;
  uint16_t TXB0D55:1;
  uint16_t TXB0D56:1;
  uint16_t TXB0D57:1;
} C1TX0B3BITS;
extern volatile C1TX0B3BITS C1TX0B3bits __attribute__((__sfr__));

#define C1TX0B4 C1TX0B4
extern volatile uint16_t C1TX0B4 __attribute__((__sfr__));
typedef struct tagC1TX0B4BITS {
  uint16_t TXB0D60:1;
  uint16_t TXB0D61:1;
  uint16_t TXB0D62:1;
  uint16_t TXB0D63:1;
  uint16_t TXB0D64:1;
  uint16_t TXB0D65:1;
  uint16_t TXB0D66:1;
  uint16_t TXB0D67:1;
  uint16_t TXB0D70:1;
  uint16_t TXB0D71:1;
  uint16_t TXB0D72:1;
  uint16_t TXB0D73:1;
  uint16_t TXB0D74:1;
  uint16_t TXB0D75:1;
  uint16_t TXB0D76:1;
  uint16_t TXB0D77:1;
} C1TX0B4BITS;
extern volatile C1TX0B4BITS C1TX0B4bits __attribute__((__sfr__));

#define C1TX0CON C1TX0CON
extern volatile uint16_t C1TX0CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TX0CONBITS {
  union {
    struct {
      uint16_t TXPRI:2;
      uint16_t :1;
      uint16_t TXREQ:1;
      uint16_t TXERR:1;
      uint16_t TXLARB:1;
      uint16_t TXABT:1;
    };
    struct {
      uint16_t TXPRI0:1;
      uint16_t TXPRI1:1;
    };
  };
} C1TX0CONBITS;
extern volatile C1TX0CONBITS C1TX0CONbits __attribute__((__sfr__));

#define C1RX1SID C1RX1SID
extern volatile uint16_t C1RX1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RX1SIDBITS {
  union {
    struct {
      uint16_t RXIDE:1;
      uint16_t SRR:1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RX1SIDBITS;
extern volatile C1RX1SIDBITS C1RX1SIDbits __attribute__((__sfr__));

#define C1RX1EID C1RX1EID
extern volatile uint16_t C1RX1EID __attribute__((__sfr__));
typedef struct tagC1RX1EIDBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RX1EIDBITS;
extern volatile C1RX1EIDBITS C1RX1EIDbits __attribute__((__sfr__));

#define C1RX1DLC C1RX1DLC
extern volatile uint16_t C1RX1DLC __attribute__((__sfr__));
__extension__ typedef struct tagC1RX1DLCBITS {
  union {
    struct {
      uint16_t DLC:4;
      uint16_t RXRB0:1;
      uint16_t :3;
      uint16_t RXRB1:1;
      uint16_t RXRTR:1;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
    struct {
      uint16_t DLC0:1;
      uint16_t DLC1:1;
      uint16_t DLC2:1;
      uint16_t DLC3:1;
    };
  };
} C1RX1DLCBITS;
extern volatile C1RX1DLCBITS C1RX1DLCbits __attribute__((__sfr__));

#define C1RX1B1 C1RX1B1
extern volatile uint16_t C1RX1B1 __attribute__((__sfr__));
typedef struct tagC1RX1B1BITS {
  uint16_t TXB1D00:1;
  uint16_t TXB1D01:1;
  uint16_t TXB1D02:1;
  uint16_t TXB1D03:1;
  uint16_t TXB1D04:1;
  uint16_t TXB1D05:1;
  uint16_t TXB1D06:1;
  uint16_t TXB1D07:1;
  uint16_t TXB1D10:1;
  uint16_t TXB1D11:1;
  uint16_t TXB1D12:1;
  uint16_t TXB1D13:1;
  uint16_t TXB1D14:1;
  uint16_t TXB1D15:1;
  uint16_t TXB1D16:1;
  uint16_t TXB1D17:1;
} C1RX1B1BITS;
extern volatile C1RX1B1BITS C1RX1B1bits __attribute__((__sfr__));

#define C1RX1B2 C1RX1B2
extern volatile uint16_t C1RX1B2 __attribute__((__sfr__));
typedef struct tagC1RX1B2BITS {
  uint16_t TXB1D20:1;
  uint16_t TXB1D21:1;
  uint16_t TXB1D22:1;
  uint16_t TXB1D23:1;
  uint16_t TXB1D24:1;
  uint16_t TXB1D25:1;
  uint16_t TXB1D26:1;
  uint16_t TXB1D27:1;
  uint16_t TXB1D30:1;
  uint16_t TXB1D31:1;
  uint16_t TXB1D32:1;
  uint16_t TXB1D33:1;
  uint16_t TXB1D34:1;
  uint16_t TXB1D35:1;
  uint16_t TXB1D36:1;
  uint16_t TXB1D37:1;
} C1RX1B2BITS;
extern volatile C1RX1B2BITS C1RX1B2bits __attribute__((__sfr__));

#define C1RX1B3 C1RX1B3
extern volatile uint16_t C1RX1B3 __attribute__((__sfr__));
typedef struct tagC1RX1B3BITS {
  uint16_t TXB1D40:1;
  uint16_t TXB1D41:1;
  uint16_t TXB1D42:1;
  uint16_t TXB1D43:1;
  uint16_t TXB1D44:1;
  uint16_t TXB1D45:1;
  uint16_t TXB1D46:1;
  uint16_t TXB1D47:1;
  uint16_t TXB1D50:1;
  uint16_t TXB1D51:1;
  uint16_t TXB1D52:1;
  uint16_t TXB1D53:1;
  uint16_t TXB1D54:1;
  uint16_t TXB1D55:1;
  uint16_t TXB1D56:1;
  uint16_t TXB1D57:1;
} C1RX1B3BITS;
extern volatile C1RX1B3BITS C1RX1B3bits __attribute__((__sfr__));

#define C1RX1B4 C1RX1B4
extern volatile uint16_t C1RX1B4 __attribute__((__sfr__));
typedef struct tagC1RX1B4BITS {
  uint16_t TXB1D60:1;
  uint16_t TXB1D61:1;
  uint16_t TXB1D62:1;
  uint16_t TXB1D63:1;
  uint16_t TXB1D64:1;
  uint16_t TXB1D65:1;
  uint16_t TXB1D66:1;
  uint16_t TXB1D67:1;
  uint16_t TXB1D70:1;
  uint16_t TXB1D71:1;
  uint16_t TXB1D72:1;
  uint16_t TXB1D73:1;
  uint16_t TXB1D74:1;
  uint16_t TXB1D75:1;
  uint16_t TXB1D76:1;
  uint16_t TXB1D77:1;
} C1RX1B4BITS;
extern volatile C1RX1B4BITS C1RX1B4bits __attribute__((__sfr__));

#define C1RX1CON C1RX1CON
extern volatile uint16_t C1RX1CON __attribute__((__sfr__));
__extension__ typedef struct tagC1RX1CONBITS {
  union {
    struct {
      uint16_t FILHIT:3;
      uint16_t RXRTRRO:1;
      uint16_t :3;
      uint16_t RXFUL:1;
    };
    struct {
      uint16_t FILHIT0:1;
      uint16_t FILHIT1:1;
      uint16_t FILHIT2:1;
    };
  };
} C1RX1CONBITS;
extern volatile C1RX1CONBITS C1RX1CONbits __attribute__((__sfr__));

#define C1RX0SID C1RX0SID
extern volatile uint16_t C1RX0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RX0SIDBITS {
  union {
    struct {
      uint16_t RXIDE:1;
      uint16_t SRR:1;
      uint16_t SID0:1;
      uint16_t SID1:1;
      uint16_t SID2:1;
      uint16_t SID3:1;
      uint16_t SID4:1;
      uint16_t SID5:1;
      uint16_t SID6:1;
      uint16_t SID7:1;
      uint16_t SID8:1;
      uint16_t SID9:1;
      uint16_t SID10:1;
    };
    struct {
      uint16_t :2;
      uint16_t SID:11;
    };
  };
} C1RX0SIDBITS;
extern volatile C1RX0SIDBITS C1RX0SIDbits __attribute__((__sfr__));

#define C1RX0EID C1RX0EID
extern volatile uint16_t C1RX0EID __attribute__((__sfr__));
typedef struct tagC1RX0EIDBITS {
  uint16_t EID6:1;
  uint16_t EID7:1;
  uint16_t EID8:1;
  uint16_t EID9:1;
  uint16_t EID10:1;
  uint16_t EID11:1;
  uint16_t EID12:1;
  uint16_t EID13:1;
  uint16_t EID14:1;
  uint16_t EID15:1;
  uint16_t EID16:1;
  uint16_t EID17:1;
} C1RX0EIDBITS;
extern volatile C1RX0EIDBITS C1RX0EIDbits __attribute__((__sfr__));

#define C1RX0DLC C1RX0DLC
extern volatile uint16_t C1RX0DLC __attribute__((__sfr__));
__extension__ typedef struct tagC1RX0DLCBITS {
  union {
    struct {
      uint16_t DLC:4;
      uint16_t RXRB0:1;
      uint16_t :3;
      uint16_t RXRB1:1;
      uint16_t RXRTR:1;
      uint16_t EID0:1;
      uint16_t EID1:1;
      uint16_t EID2:1;
      uint16_t EID3:1;
      uint16_t EID4:1;
      uint16_t EID5:1;
    };
    struct {
      uint16_t :10;
      uint16_t EID5_0:6;
    };
    struct {
      uint16_t DLC0:1;
      uint16_t DLC1:1;
      uint16_t DLC2:1;
      uint16_t DLC3:1;
    };
  };
} C1RX0DLCBITS;
extern volatile C1RX0DLCBITS C1RX0DLCbits __attribute__((__sfr__));

#define C1RX0B1 C1RX0B1
extern volatile uint16_t C1RX0B1 __attribute__((__sfr__));
typedef struct tagC1RX0B1BITS {
  uint16_t TXB0D00:1;
  uint16_t TXB0D01:1;
  uint16_t TXB0D02:1;
  uint16_t TXB0D03:1;
  uint16_t TXB0D04:1;
  uint16_t TXB0D05:1;
  uint16_t TXB0D06:1;
  uint16_t TXB0D07:1;
  uint16_t TXB0D10:1;
  uint16_t TXB0D11:1;
  uint16_t TXB0D12:1;
  uint16_t TXB0D13:1;
  uint16_t TXB0D14:1;
  uint16_t TXB0D15:1;
  uint16_t TXB0D16:1;
  uint16_t TXB0D17:1;
} C1RX0B1BITS;
extern volatile C1RX0B1BITS C1RX0B1bits __attribute__((__sfr__));

#define C1RX0B2 C1RX0B2
extern volatile uint16_t C1RX0B2 __attribute__((__sfr__));
typedef struct tagC1RX0B2BITS {
  uint16_t TXB0D20:1;
  uint16_t TXB0D21:1;
  uint16_t TXB0D22:1;
  uint16_t TXB0D23:1;
  uint16_t TXB0D24:1;
  uint16_t TXB0D25:1;
  uint16_t TXB0D26:1;
  uint16_t TXB0D27:1;
  uint16_t TXB0D30:1;
  uint16_t TXB0D31:1;
  uint16_t TXB0D32:1;
  uint16_t TXB0D33:1;
  uint16_t TXB0D34:1;
  uint16_t TXB0D35:1;
  uint16_t TXB0D36:1;
  uint16_t TXB0D37:1;
} C1RX0B2BITS;
extern volatile C1RX0B2BITS C1RX0B2bits __attribute__((__sfr__));

#define C1RX0B3 C1RX0B3
extern volatile uint16_t C1RX0B3 __attribute__((__sfr__));
typedef struct tagC1RX0B3BITS {
  uint16_t TXB0D40:1;
  uint16_t TXB0D41:1;
  uint16_t TXB0D42:1;
  uint16_t TXB0D43:1;
  uint16_t TXB0D44:1;
  uint16_t TXB0D45:1;
  uint16_t TXB0D46:1;
  uint16_t TXB0D47:1;
  uint16_t TXB0D50:1;
  uint16_t TXB0D51:1;
  uint16_t TXB0D52:1;
  uint16_t TXB0D53:1;
  uint16_t TXB0D54:1;
  uint16_t TXB0D55:1;
  uint16_t TXB0D56:1;
  uint16_t TXB0D57:1;
} C1RX0B3BITS;
extern volatile C1RX0B3BITS C1RX0B3bits __attribute__((__sfr__));

#define C1RX0B4 C1RX0B4
extern volatile uint16_t C1RX0B4 __attribute__((__sfr__));
typedef struct tagC1RX0B4BITS {
  uint16_t TXB0D60:1;
  uint16_t TXB0D61:1;
  uint16_t TXB0D62:1;
  uint16_t TXB0D63:1;
  uint16_t TXB0D64:1;
  uint16_t TXB0D65:1;
  uint16_t TXB0D66:1;
  uint16_t TXB0D67:1;
  uint16_t TXB0D70:1;
  uint16_t TXB0D71:1;
  uint16_t TXB0D72:1;
  uint16_t TXB0D73:1;
  uint16_t TXB0D74:1;
  uint16_t TXB0D75:1;
  uint16_t TXB0D76:1;
  uint16_t TXB0D77:1;
} C1RX0B4BITS;
extern volatile C1RX0B4BITS C1RX0B4bits __attribute__((__sfr__));

#define C1RX0CON C1RX0CON
extern volatile uint16_t C1RX0CON __attribute__((__sfr__));
__extension__ typedef struct tagC1RX0CONBITS {
  union {
    struct {
      uint16_t FILHIT0:1;
      uint16_t JTOFF:1;
      uint16_t DBEN:1;
      uint16_t RXRTRRO:1;
      uint16_t :3;
      uint16_t RXFUL:1;
    };
    struct {
      uint16_t FILHIT:1;
      uint16_t :1;
      uint16_t RXB0DBEN:1;
    };
  };
} C1RX0CONBITS;
extern volatile C1RX0CONBITS C1RX0CONbits __attribute__((__sfr__));

#define C1CTRL C1CTRL
extern volatile uint16_t C1CTRL __attribute__((__sfr__));
__extension__ typedef struct tagC1CTRLBITS {
  union {
    struct {
      uint16_t :1;
      uint16_t ICODE:3;
      uint16_t :1;
      uint16_t OPMODE:3;
      uint16_t REQOP:3;
      uint16_t CANCKS:1;
      uint16_t ABAT:1;
      uint16_t CANSIDL:1;
      uint16_t CANFRZ:1;
      uint16_t CANCAP:1;
    };
    struct {
      uint16_t :1;
      uint16_t ICODE0:1;
      uint16_t ICODE1:1;
      uint16_t ICODE2:1;
      uint16_t :1;
      uint16_t OPMODE0:1;
      uint16_t OPMODE1:1;
      uint16_t OPMODE2:1;
      uint16_t REQOP0:1;
      uint16_t REQOP1:1;
      uint16_t REQOP2:1;
      uint16_t :2;
      uint16_t CSIDL:1;
    };
  };
} C1CTRLBITS;
extern volatile C1CTRLBITS C1CTRLbits __attribute__((__sfr__));

#define C1CFG1 C1CFG1
extern volatile uint16_t C1CFG1 __attribute__((__sfr__));
typedef struct tagC1CFG1BITS {
  uint16_t BRP:6;
  uint16_t SJW:2;
} C1CFG1BITS;
extern volatile C1CFG1BITS C1CFG1bits __attribute__((__sfr__));

#define C1CFG2 C1CFG2
extern volatile uint16_t C1CFG2 __attribute__((__sfr__));
__extension__ typedef struct tagC1CFG2BITS {
  union {
    struct {
      uint16_t PRSEG:3;
      uint16_t SEG1PH:3;
      uint16_t SAM:1;
      uint16_t SEG2PHTS:1;
      uint16_t SEG2PH:3;
      uint16_t :3;
      uint16_t WAKFIL:1;
    };
    struct {
      uint16_t PRSEG0:1;
      uint16_t PRSEG1:1;
      uint16_t PRSEG2:1;
      uint16_t SEG1PH0:1;
      uint16_t SEG1PH1:1;
      uint16_t SEG1PH2:1;
      uint16_t :2;
      uint16_t SEG2PH0:1;
      uint16_t SEG2PH1:1;
      uint16_t SEG2PH2:1;
    };
  };
} C1CFG2BITS;
extern volatile C1CFG2BITS C1CFG2bits __attribute__((__sfr__));

#define C1INTF C1INTF
extern volatile uint16_t C1INTF __attribute__((__sfr__));
__extension__ typedef struct tagC1INTFBITS {
  union {
    struct {
      uint16_t RXB0IF:1;
      uint16_t RXB1IF:1;
      uint16_t TXB0IF:1;
      uint16_t TXB1IF:1;
      uint16_t TXB2IF:1;
      uint16_t ERRIF:1;
      uint16_t WAKIF:1;
      uint16_t IRXIF:1;
      uint16_t EWARN:1;
      uint16_t RXWARN:1;
      uint16_t TXWARN:1;
      uint16_t RXBP:1;
      uint16_t TXBP:1;
      uint16_t TXBO:1;
      uint16_t RXB1OVFL:1;
      uint16_t RXB0OVFL:1;
    };
    struct {
      uint16_t RX0IF:1;
      uint16_t RX1IF:1;
      uint16_t TX0IF:1;
      uint16_t TX1IF:1;
      uint16_t TX2IF:1;
      uint16_t :2;
      uint16_t IVRIF:1;
      uint16_t :1;
      uint16_t RXWAR:1;
      uint16_t TXWAR:1;
      uint16_t RXEP:1;
      uint16_t TXEP:1;
      uint16_t :1;
      uint16_t RX1OVR:1;
      uint16_t RX0OVR:1;
    };
  };
} C1INTFBITS;
extern volatile C1INTFBITS C1INTFbits __attribute__((__sfr__));

#define C1INTE C1INTE
extern volatile uint16_t C1INTE __attribute__((__sfr__));
__extension__ typedef struct tagC1INTEBITS {
  union {
    struct {
      uint16_t RXB0IE:1;
      uint16_t RXB1IE:1;
      uint16_t TXB0IE:1;
      uint16_t TXB1IE:1;
      uint16_t TXB2IE:1;
      uint16_t ERRIE:1;
      uint16_t WAKIE:1;
      uint16_t IRXIE:1;
    };
    struct {
      uint16_t RX0IE:1;
      uint16_t RX1IE:1;
      uint16_t TX0IE:1;
      uint16_t TX1IE:1;
      uint16_t TX2IE:1;
      uint16_t :2;
      uint16_t IVRIE:1;
    };
  };
} C1INTEBITS;
extern volatile C1INTEBITS C1INTEbits __attribute__((__sfr__));

#define C1EC C1EC
extern volatile uint16_t C1EC __attribute__((__sfr__));
typedef struct tagC1ECBITS {
  uint16_t REC0:1;
  uint16_t REC1:1;
  uint16_t REC2:1;
  uint16_t REC3:1;
  uint16_t REC4:1;
  uint16_t REC5:1;
  uint16_t REC6:1;
  uint16_t REC7:1;
  uint16_t TEC0:1;
  uint16_t TEC1:1;
  uint16_t TEC2:1;
  uint16_t TEC3:1;
  uint16_t TEC4:1;
  uint16_t TEC5:1;
  uint16_t TEC6:1;
  uint16_t TEC7:1;
} C1ECBITS;
extern volatile C1ECBITS C1ECbits __attribute__((__sfr__));

#define C1RERRCNT C1RERRCNT
extern volatile uint8_t C1RERRCNT __attribute__((__sfr__));
#define C1TERRCNT C1TERRCNT
extern volatile uint8_t C1TERRCNT __attribute__((__sfr__));
#define RCON RCON
extern volatile uint16_t RCON __attribute__((__sfr__));
typedef struct tagRCONBITS {
  uint16_t POR:1;
  uint16_t BOR:1;
  uint16_t IDLE:1;
  uint16_t SLEEP:1;
  uint16_t WDTO:1;
  uint16_t SWDTEN:1;
  uint16_t SWR:1;
  uint16_t EXTR:1;
  uint16_t :5;
  uint16_t BGST:1;
  uint16_t IOPUWR:1;
  uint16_t TRAPR:1;
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile uint16_t OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      uint16_t OSWEN:1;
      uint16_t LPOSCEN:1;
      uint16_t :1;
      uint16_t CF:1;
      uint16_t :1;
      uint16_t LOCK:1;
      uint16_t POST:2;
      uint16_t NOSC:3;
      uint16_t :1;
      uint16_t COSC:3;
    };
    struct {
      uint16_t :6;
      uint16_t POST0:1;
      uint16_t POST1:1;
      uint16_t NOSC0:1;
      uint16_t NOSC1:1;
      uint16_t NOSC2:1;
      uint16_t :1;
      uint16_t COSC0:1;
      uint16_t COSC1:1;
      uint16_t COSC2:1;
    };
  };
} OSCCONBITS;
extern volatile OSCCONBITS OSCCONbits __attribute__((__sfr__));

#define OSCCONL OSCCONL
extern volatile uint8_t OSCCONL __attribute__((__sfr__));
#define OSCCONH OSCCONH
extern volatile uint8_t OSCCONH __attribute__((__sfr__));
#define OSCTUN OSCTUN
extern volatile uint16_t OSCTUN __attribute__((__sfr__));
typedef struct tagOSCTUNBITS {
  uint16_t TUN0:1;
  uint16_t TUN1:1;
  uint16_t TUN2:1;
  uint16_t TUN3:1;
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile uint16_t NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      uint16_t PROGOP:7;
      uint16_t :1;
      uint16_t TWRI:1;
      uint16_t :4;
      uint16_t WRERR:1;
      uint16_t WREN:1;
      uint16_t WR:1;
    };
    struct {
      uint16_t PROGOP0:1;
      uint16_t PROGOP1:1;
      uint16_t PROGOP2:1;
      uint16_t PROGOP3:1;
      uint16_t PROGOP4:1;
      uint16_t PROGOP5:1;
      uint16_t PROGOP6:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMADR NVMADR
extern volatile uint16_t NVMADR __attribute__((__sfr__));
#define NVMADRU NVMADRU
extern volatile uint16_t NVMADRU __attribute__((__sfr__));
typedef struct tagNVMADRUBITS {
  uint16_t NVMADR:8;
} NVMADRUBITS;
extern volatile NVMADRUBITS NVMADRUbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADCMD:1;
  uint16_t C1MD:1;
  uint16_t :1;
  uint16_t SPI1MD:1;
  uint16_t SPI2MD:1;
  uint16_t U1MD:1;
  uint16_t :1;
  uint16_t I2CMD:1;
  uint16_t :1;
  uint16_t PWMMD:1;
  uint16_t QEIMD:1;
  uint16_t T1MD:1;
  uint16_t T2MD:1;
  uint16_t T3MD:1;
  uint16_t T4MD:1;
  uint16_t T5MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile uint16_t PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  uint16_t OC1MD:1;
  uint16_t OC2MD:1;
  uint16_t OC3MD:1;
  uint16_t OC4MD:1;
  uint16_t :4;
  uint16_t IC1MD:1;
  uint16_t IC2MD:1;
  uint16_t IC3MD:1;
  uint16_t IC4MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _DA SRbits.DA
#define _SAB SRbits.SAB
#define _OAB SRbits.OAB
#define _SB SRbits.SB
#define _SA SRbits.SA
#define _OB SRbits.OB
#define _OA SRbits.OA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IF CORCONbits.IF
#define _RND CORCONbits.RND
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3
#define _ACCSAT CORCONbits.ACCSAT
#define _SATDW CORCONbits.SATDW
#define _SATB CORCONbits.SATB
#define _SATA CORCONbits.SATA
#define _DL CORCONbits.DL
#define _EDT CORCONbits.EDT
#define _US CORCONbits.US
#define _DL0 CORCONbits.DL0
#define _DL1 CORCONbits.DL1
#define _DL2 CORCONbits.DL2

/* MODCON */
#define _XWM MODCONbits.XWM
#define _YWM MODCONbits.YWM
#define _BWM MODCONbits.BWM
#define _YMODEN MODCONbits.YMODEN
#define _XMODEN MODCONbits.XMODEN
#define _XWM0 MODCONbits.XWM0
#define _XWM1 MODCONbits.XWM1
#define _XWM2 MODCONbits.XWM2
#define _XWM3 MODCONbits.XWM3
#define _YWM0 MODCONbits.YWM0
#define _YWM1 MODCONbits.YWM1
#define _YWM2 MODCONbits.YWM2
#define _YWM3 MODCONbits.YWM3
#define _BWM0 MODCONbits.BWM0
#define _BWM1 MODCONbits.BWM1
#define _BWM2 MODCONbits.BWM2
#define _BWM3 MODCONbits.BWM3

/* XBREV */
#define _XB XBREVbits.XB
#define _BREN XBREVbits.BREN
#define _XB0 XBREVbits.XB0
#define _XB1 XBREVbits.XB1
#define _XB2 XBREVbits.XB2
#define _XB3 XBREVbits.XB3
#define _XB4 XBREVbits.XB4
#define _XB5 XBREVbits.XB5
#define _XB6 XBREVbits.XB6
#define _XB7 XBREVbits.XB7
#define _XB8 XBREVbits.XB8
#define _XB9 XBREVbits.XB9
#define _XB10 XBREVbits.XB10
#define _XB11 XBREVbits.XB11
#define _XB12 XBREVbits.XB12
#define _XB13 XBREVbits.XB13
#define _XB14 XBREVbits.XB14

/* DISICNT */
#define _DISICNT DISICNTbits.DISICNT

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT3EP INTCON2bits.INT3EP
#define _INT4EP INTCON2bits.INT4EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _ADIF IFS0bits.ADIF
#define _NVMIF IFS0bits.NVMIF
#define _SI2CIF IFS0bits.SI2CIF
#define _MI2CIF IFS0bits.MI2CIF
#define _CNIF IFS0bits.CNIF

/* IFS1 */
#define _INT1IF IFS1bits.INT1IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _SPI2IF IFS1bits.SPI2IF
#define _C1IF IFS1bits.C1IF
#define _IC3IF IFS1bits.IC3IF
#define _IC4IF IFS1bits.IC4IF

/* IFS2 */
#define _INT3IF IFS2bits.INT3IF
#define _INT4IF IFS2bits.INT4IF
#define _PWMIF IFS2bits.PWMIF
#define _QEIIF IFS2bits.QEIIF
#define _FLTAIF IFS2bits.FLTAIF
#define _FLTBIF IFS2bits.FLTBIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _ADIE IEC0bits.ADIE
#define _NVMIE IEC0bits.NVMIE
#define _SI2CIE IEC0bits.SI2CIE
#define _MI2CIE IEC0bits.MI2CIE
#define _CNIE IEC0bits.CNIE

/* IEC1 */
#define _INT1IE IEC1bits.INT1IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _SPI2IE IEC1bits.SPI2IE
#define _C1IE IEC1bits.C1IE
#define _IC3IE IEC1bits.IC3IE
#define _IC4IE IEC1bits.IC4IE

/* IEC2 */
#define _INT3IE IEC2bits.INT3IE
#define _INT4IE IEC2bits.INT4IE
#define _PWMIE IEC2bits.PWMIE
#define _QEIIE IEC2bits.QEIIE
#define _FLTAIE IEC2bits.FLTAIE
#define _FLTBIE IEC2bits.FLTBIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _IC1IP IPC0bits.IC1IP
#define _OC1IP IPC0bits.OC1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _IC1IP0 IPC0bits.IC1IP0
#define _IC1IP1 IPC0bits.IC1IP1
#define _IC1IP2 IPC0bits.IC1IP2
#define _OC1IP0 IPC0bits.OC1IP0
#define _OC1IP1 IPC0bits.OC1IP1
#define _OC1IP2 IPC0bits.OC1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _T3IP IPC1bits.T3IP
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2
#define _T3IP0 IPC1bits.T3IP0
#define _T3IP1 IPC1bits.T3IP1
#define _T3IP2 IPC1bits.T3IP2

/* IPC2 */
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _U1TXIP IPC2bits.U1TXIP
#define _ADIP IPC2bits.ADIP
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2
#define _U1TXIP0 IPC2bits.U1TXIP0
#define _U1TXIP1 IPC2bits.U1TXIP1
#define _U1TXIP2 IPC2bits.U1TXIP2
#define _ADIP0 IPC2bits.ADIP0
#define _ADIP1 IPC2bits.ADIP1
#define _ADIP2 IPC2bits.ADIP2

/* IPC3 */
#define _NVMIP IPC3bits.NVMIP
#define _SI2CIP IPC3bits.SI2CIP
#define _MI2CIP IPC3bits.MI2CIP
#define _CNIP IPC3bits.CNIP
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2
#define _SI2CIP0 IPC3bits.SI2CIP0
#define _SI2CIP1 IPC3bits.SI2CIP1
#define _SI2CIP2 IPC3bits.SI2CIP2
#define _MI2CIP0 IPC3bits.MI2CIP0
#define _MI2CIP1 IPC3bits.MI2CIP1
#define _MI2CIP2 IPC3bits.MI2CIP2
#define _CNIP0 IPC3bits.CNIP0
#define _CNIP1 IPC3bits.CNIP1
#define _CNIP2 IPC3bits.CNIP2

/* IPC4 */
#define _INT1IP IPC4bits.INT1IP
#define _OC3IP IPC4bits.OC3IP
#define _INT1IP0 IPC4bits.INT1IP0
#define _INT1IP1 IPC4bits.INT1IP1
#define _INT1IP2 IPC4bits.INT1IP2
#define _OC3IP0 IPC4bits.OC3IP0
#define _OC3IP1 IPC4bits.OC3IP1
#define _OC3IP2 IPC4bits.OC3IP2

/* IPC5 */
#define _OC4IP IPC5bits.OC4IP
#define _T4IP IPC5bits.T4IP
#define _T5IP IPC5bits.T5IP
#define _INT2IP IPC5bits.INT2IP
#define _OC4IP0 IPC5bits.OC4IP0
#define _OC4IP1 IPC5bits.OC4IP1
#define _OC4IP2 IPC5bits.OC4IP2
#define _T4IP0 IPC5bits.T4IP0
#define _T4IP1 IPC5bits.T4IP1
#define _T4IP2 IPC5bits.T4IP2
#define _T5IP0 IPC5bits.T5IP0
#define _T5IP1 IPC5bits.T5IP1
#define _T5IP2 IPC5bits.T5IP2
#define _INT2IP0 IPC5bits.INT2IP0
#define _INT2IP1 IPC5bits.INT2IP1
#define _INT2IP2 IPC5bits.INT2IP2

/* IPC6 */
#define _SPI2IP IPC6bits.SPI2IP
#define _C1IP IPC6bits.C1IP
#define _SPI2IP0 IPC6bits.SPI2IP0
#define _SPI2IP1 IPC6bits.SPI2IP1
#define _SPI2IP2 IPC6bits.SPI2IP2
#define _C1IP0 IPC6bits.C1IP0
#define _C1IP1 IPC6bits.C1IP1
#define _C1IP2 IPC6bits.C1IP2

/* IPC7 */
#define _IC3IP IPC7bits.IC3IP
#define _IC4IP IPC7bits.IC4IP
#define _IC3IP0 IPC7bits.IC3IP0
#define _IC3IP1 IPC7bits.IC3IP1
#define _IC3IP2 IPC7bits.IC3IP2
#define _IC4IP0 IPC7bits.IC4IP0
#define _IC4IP1 IPC7bits.IC4IP1
#define _IC4IP2 IPC7bits.IC4IP2

/* IPC9 */
#define _INT3IP IPC9bits.INT3IP
#define _INT4IP IPC9bits.INT4IP
#define _PWMIP IPC9bits.PWMIP
#define _INT3IP0 IPC9bits.INT3IP0
#define _INT3IP1 IPC9bits.INT3IP1
#define _INT3IP2 IPC9bits.INT3IP2
#define _INT4IP0 IPC9bits.INT4IP0
#define _INT4IP1 IPC9bits.INT4IP1
#define _INT4IP2 IPC9bits.INT4IP2
#define _PWMIP0 IPC9bits.PWMIP0
#define _PWMIP1 IPC9bits.PWMIP1
#define _PWMIP2 IPC9bits.PWMIP2

/* IPC10 */
#define _QEIIP IPC10bits.QEIIP
#define _FLTAIP IPC10bits.FLTAIP
#define _QEIIP0 IPC10bits.QEIIP0
#define _QEIIP1 IPC10bits.QEIIP1
#define _QEIIP2 IPC10bits.QEIIP2
#define _FLTAIP0 IPC10bits.FLTAIP0
#define _FLTAIP1 IPC10bits.FLTAIP1
#define _FLTAIP2 IPC10bits.FLTAIP2

/* IPC11 */
#define _FLTBIP IPC11bits.FLTBIP
#define _FLTBIP0 IPC11bits.FLTBIP0
#define _FLTBIP1 IPC11bits.FLTBIP1
#define _FLTBIP2 IPC11bits.FLTBIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VHOLD INTTREGbits.VHOLD
#define _TMODE INTTREGbits.TMODE
#define _IRQTOCPU INTTREGbits.IRQTOCPU
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN9IE CNEN1bits.CN9IE
#define _CN10IE CNEN1bits.CN10IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN17IE CNEN2bits.CN17IE
#define _CN18IE CNEN2bits.CN18IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN9PUE CNPU1bits.CN9PUE
#define _CN10PUE CNPU1bits.CN10PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN17PUE CNPU2bits.CN17PUE
#define _CN18PUE CNPU2bits.CN18PUE

/* T1CON */
#define _TCS T1CONbits.TCS
#define _TSYNC T1CONbits.TSYNC
#define _TCKPS T1CONbits.TCKPS
#define _TGATE T1CONbits.TGATE
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1

/* T2CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T3CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T4CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T5CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* QEICON */
#define _UPDN_SRC QEICONbits.UPDN_SRC
#define _TQCS QEICONbits.TQCS
#define _POSRES QEICONbits.POSRES
#define _TQCKPS0 QEICONbits.TQCKPS0
#define _TQCKPS1 QEICONbits.TQCKPS1
#define _TQGATE QEICONbits.TQGATE
#define _PCDOUT QEICONbits.PCDOUT
#define _SWPAB QEICONbits.SWPAB
#define _QEIM0 QEICONbits.QEIM0
#define _QEIM1 QEICONbits.QEIM1
#define _QEIM2 QEICONbits.QEIM2
#define _UPDN QEICONbits.UPDN
#define _INDX QEICONbits.INDX
#define _QEISIDL QEICONbits.QEISIDL
#define _CNTERR QEICONbits.CNTERR
#define _TQCKPS QEICONbits.TQCKPS
#define _QEIM QEICONbits.QEIM

/* DFLTCON */
#define _QECK0 DFLTCONbits.QECK0
#define _QECK1 DFLTCONbits.QECK1
#define _QECK2 DFLTCONbits.QECK2
#define _QEOUT DFLTCONbits.QEOUT
#define _CEID DFLTCONbits.CEID
#define _IMV0 DFLTCONbits.IMV0
#define _IMV1 DFLTCONbits.IMV1
#define _QECK DFLTCONbits.QECK
#define _IMV DFLTCONbits.IMV

/* IC1CON */
#define _ICM IC1CONbits.ICM
#define _ICBNE IC1CONbits.ICBNE
#define _ICOV IC1CONbits.ICOV
#define _ICI IC1CONbits.ICI
#define _ICTMR IC1CONbits.ICTMR
#define _ICSIDL IC1CONbits.ICSIDL
#define _ICM0 IC1CONbits.ICM0
#define _ICM1 IC1CONbits.ICM1
#define _ICM2 IC1CONbits.ICM2
#define _ICI0 IC1CONbits.ICI0
#define _ICI1 IC1CONbits.ICI1

/* IC2CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* IC3CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* IC4CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* OC1CON */
#define _OCM OC1CONbits.OCM
#define _OCTSEL OC1CONbits.OCTSEL
#define _OCFLT OC1CONbits.OCFLT
#define _OCSIDL OC1CONbits.OCSIDL
#define _OCM0 OC1CONbits.OCM0
#define _OCM1 OC1CONbits.OCM1
#define _OCM2 OC1CONbits.OCM2

/* OC2CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC3CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC4CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* PTCON */
#define _PTMOD PTCONbits.PTMOD
#define _PTCKPS PTCONbits.PTCKPS
#define _PTOPS PTCONbits.PTOPS
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
#define _PTMOD0 PTCONbits.PTMOD0
/* Bitname _PTMOD1 cannot be defined because it is used by more than one SFR */
#define _PTCKPS0 PTCONbits.PTCKPS0
#define _PTCKPS1 PTCONbits.PTCKPS1
#define _PTOPS0 PTCONbits.PTOPS0
#define _PTOPS1 PTCONbits.PTOPS1
#define _PTOPS2 PTCONbits.PTOPS2
#define _PTOPS3 PTCONbits.PTOPS3

/* PTMR */
#define _PTMR PTMRbits.PTMR
#define _PTDIR PTMRbits.PTDIR

/* PTPER */
#define _PTPER PTPERbits.PTPER

/* SEVTCMP */
#define _SEVTCMP SEVTCMPbits.SEVTCMP
#define _SEVTDIR SEVTCMPbits.SEVTDIR

/* PWMCON1 */
#define _PEN1L PWMCON1bits.PEN1L
#define _PEN2L PWMCON1bits.PEN2L
#define _PEN3L PWMCON1bits.PEN3L
#define _PEN4L PWMCON1bits.PEN4L
#define _PEN1H PWMCON1bits.PEN1H
#define _PEN2H PWMCON1bits.PEN2H
#define _PEN3H PWMCON1bits.PEN3H
#define _PEN4H PWMCON1bits.PEN4H
/* Bitname _PTMOD1 cannot be defined because it is used by more than one SFR */
#define _PTMOD2 PWMCON1bits.PTMOD2
#define _PTMOD3 PWMCON1bits.PTMOD3
#define _PTMOD4 PWMCON1bits.PTMOD4
#define _PMOD1 PWMCON1bits.PMOD1
#define _PMOD2 PWMCON1bits.PMOD2
#define _PMOD3 PWMCON1bits.PMOD3
#define _PMOD4 PWMCON1bits.PMOD4

/* PWMCON2 */
#define _UDIS PWMCON2bits.UDIS
#define _OSYNC PWMCON2bits.OSYNC
#define _IUE PWMCON2bits.IUE
#define _SEVOPS PWMCON2bits.SEVOPS
#define _SEVOPS0 PWMCON2bits.SEVOPS0
#define _SEVOPS1 PWMCON2bits.SEVOPS1
#define _SEVOPS2 PWMCON2bits.SEVOPS2
#define _SEVOPS3 PWMCON2bits.SEVOPS3

/* DTCON1 */
#define _DTA DTCON1bits.DTA
#define _DTAPS DTCON1bits.DTAPS
#define _DTB DTCON1bits.DTB
#define _DTBPS DTCON1bits.DTBPS
#define _DTA0 DTCON1bits.DTA0
#define _DTA1 DTCON1bits.DTA1
#define _DTA2 DTCON1bits.DTA2
#define _DTA3 DTCON1bits.DTA3
#define _DTA4 DTCON1bits.DTA4
#define _DTA5 DTCON1bits.DTA5
#define _DTAPS0 DTCON1bits.DTAPS0
#define _DTAPS1 DTCON1bits.DTAPS1
#define _DTB0 DTCON1bits.DTB0
#define _DTB1 DTCON1bits.DTB1
#define _DTB2 DTCON1bits.DTB2
#define _DTB3 DTCON1bits.DTB3
#define _DTB4 DTCON1bits.DTB4
#define _DTB5 DTCON1bits.DTB5
#define _DTBPS0 DTCON1bits.DTBPS0
#define _DTBPS1 DTCON1bits.DTBPS1

/* DTCON2 */
#define _DTS1I DTCON2bits.DTS1I
#define _DTS1A DTCON2bits.DTS1A
#define _DTS2I DTCON2bits.DTS2I
#define _DTS2A DTCON2bits.DTS2A
#define _DTS3I DTCON2bits.DTS3I
#define _DTS3A DTCON2bits.DTS3A
#define _DTS4I DTCON2bits.DTS4I
#define _DTS4A DTCON2bits.DTS4A

/* FLTACON */
#define _FAEN1 FLTACONbits.FAEN1
#define _FAEN2 FLTACONbits.FAEN2
#define _FAEN3 FLTACONbits.FAEN3
#define _FAEN4 FLTACONbits.FAEN4
#define _FLTAM FLTACONbits.FLTAM
#define _FAOV1L FLTACONbits.FAOV1L
#define _FAOV1H FLTACONbits.FAOV1H
#define _FAOV2L FLTACONbits.FAOV2L
#define _FAOV2H FLTACONbits.FAOV2H
#define _FAOV3L FLTACONbits.FAOV3L
#define _FAOV3H FLTACONbits.FAOV3H
#define _FAOV4L FLTACONbits.FAOV4L
#define _FAOV4H FLTACONbits.FAOV4H

/* FLTBCON */
#define _FBEN1 FLTBCONbits.FBEN1
#define _FBEN2 FLTBCONbits.FBEN2
#define _FBEN3 FLTBCONbits.FBEN3
#define _FBEN4 FLTBCONbits.FBEN4
#define _FLTBM FLTBCONbits.FLTBM
#define _FBOV1L FLTBCONbits.FBOV1L
#define _FBOV1H FLTBCONbits.FBOV1H
#define _FBOV2L FLTBCONbits.FBOV2L
#define _FBOV2H FLTBCONbits.FBOV2H
#define _FBOV3L FLTBCONbits.FBOV3L
#define _FBOV3H FLTBCONbits.FBOV3H
#define _FBOV4L FLTBCONbits.FBOV4L
#define _FBOV4H FLTBCONbits.FBOV4H

/* OVDCON */
#define _POUT1L OVDCONbits.POUT1L
#define _POUT1H OVDCONbits.POUT1H
#define _POUT2L OVDCONbits.POUT2L
#define _POUT2H OVDCONbits.POUT2H
#define _POUT3L OVDCONbits.POUT3L
#define _POUT3H OVDCONbits.POUT3H
#define _POUT4L OVDCONbits.POUT4L
#define _POUT4H OVDCONbits.POUT4H
#define _POVD1L OVDCONbits.POVD1L
#define _POVD1H OVDCONbits.POVD1H
#define _POVD2L OVDCONbits.POVD2L
#define _POVD2H OVDCONbits.POVD2H
#define _POVD3L OVDCONbits.POVD3L
#define _POVD3H OVDCONbits.POVD3H
#define _POVD4L OVDCONbits.POVD4L
#define _POVD4H OVDCONbits.POVD4H

/* I2CRCV */
#define _I2CRCV I2CRCVbits.I2CRCV
#define _I2CRCV0 I2CRCVbits.I2CRCV0
#define _I2CRCV1 I2CRCVbits.I2CRCV1
#define _I2CRCV2 I2CRCVbits.I2CRCV2
#define _I2CRCV3 I2CRCVbits.I2CRCV3
#define _I2CRCV4 I2CRCVbits.I2CRCV4
#define _I2CRCV5 I2CRCVbits.I2CRCV5
#define _I2CRCV6 I2CRCVbits.I2CRCV6
#define _I2CRCV7 I2CRCVbits.I2CRCV7

/* I2CTRN */
#define _I2CTRN I2CTRNbits.I2CTRN
#define _I2CTRN0 I2CTRNbits.I2CTRN0
#define _I2CTRN1 I2CTRNbits.I2CTRN1
#define _I2CTRN2 I2CTRNbits.I2CTRN2
#define _I2CTRN3 I2CTRNbits.I2CTRN3
#define _I2CTRN4 I2CTRNbits.I2CTRN4
#define _I2CTRN5 I2CTRNbits.I2CTRN5
#define _I2CTRN6 I2CTRNbits.I2CTRN6
#define _I2CTRN7 I2CTRNbits.I2CTRN7

/* I2CBRG */
#define _I2CBRG I2CBRGbits.I2CBRG

/* I2CCON */
#define _SEN I2CCONbits.SEN
#define _RSEN I2CCONbits.RSEN
#define _PEN I2CCONbits.PEN
#define _RCEN I2CCONbits.RCEN
#define _ACKEN I2CCONbits.ACKEN
#define _ACKDT I2CCONbits.ACKDT
#define _STREN I2CCONbits.STREN
#define _GCEN I2CCONbits.GCEN
#define _SMEN I2CCONbits.SMEN
#define _DISSLW I2CCONbits.DISSLW
#define _A10M I2CCONbits.A10M
#define _IPMIEN I2CCONbits.IPMIEN
#define _SCLREL I2CCONbits.SCLREL
#define _I2CSIDL I2CCONbits.I2CSIDL
#define _I2CEN I2CCONbits.I2CEN

/* I2CSTAT */
#define _TBF I2CSTATbits.TBF
#define _RBF I2CSTATbits.RBF
#define _R_NOT_W I2CSTATbits.R_NOT_W
#define _S I2CSTATbits.S
#define _P I2CSTATbits.P
#define _D_NOT_A I2CSTATbits.D_NOT_A
#define _I2COV I2CSTATbits.I2COV
#define _IWCOL I2CSTATbits.IWCOL
#define _ADD10 I2CSTATbits.ADD10
#define _GCSTAT I2CSTATbits.GCSTAT
#define _BCL I2CSTATbits.BCL
#define _TRSTAT I2CSTATbits.TRSTAT
#define _ACKSTAT I2CSTATbits.ACKSTAT
#define _R_W I2CSTATbits.R_W
#define _D_A I2CSTATbits.D_A

/* I2CADD */
#define _I2CADD I2CADDbits.I2CADD

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _ABAUD U1MODEbits.ABAUD
#define _LPBACK U1MODEbits.LPBACK
#define _WAKE U1MODEbits.WAKE
#define _ALTIO U1MODEbits.ALTIO
#define _USIDL U1MODEbits.USIDL
#define _UARTEN U1MODEbits.UARTEN
#define _PDSEL0 U1MODEbits.PDSEL0
#define _PDSEL1 U1MODEbits.PDSEL1

/* U1STA */
#define _URXDA U1STAbits.URXDA
#define _OERR U1STAbits.OERR
#define _FERR U1STAbits.FERR
#define _PERR U1STAbits.PERR
#define _RIDLE U1STAbits.RIDLE
#define _ADDEN U1STAbits.ADDEN
#define _URXISEL U1STAbits.URXISEL
#define _TRMT U1STAbits.TRMT
#define _UTXBF U1STAbits.UTXBF
#define _UTXEN U1STAbits.UTXEN
#define _UTXBRK U1STAbits.UTXBRK
#define _UTXISEL U1STAbits.UTXISEL
#define _URXISEL0 U1STAbits.URXISEL0
#define _URXISEL1 U1STAbits.URXISEL1

/* U1TXREG */
#define _UTXREG0 U1TXREGbits.UTXREG0
#define _UTXREG1 U1TXREGbits.UTXREG1
#define _UTXREG2 U1TXREGbits.UTXREG2
#define _UTXREG3 U1TXREGbits.UTXREG3
#define _UTXREG4 U1TXREGbits.UTXREG4
#define _UTXREG5 U1TXREGbits.UTXREG5
#define _UTXREG6 U1TXREGbits.UTXREG6
#define _UTXREG7 U1TXREGbits.UTXREG7
#define _UTXREG8 U1TXREGbits.UTXREG8
#define _UTX8 U1TXREGbits.UTX8

/* U1RXREG */
#define _URXREG0 U1RXREGbits.URXREG0
#define _URXREG1 U1RXREGbits.URXREG1
#define _URXREG2 U1RXREGbits.URXREG2
#define _URXREG3 U1RXREGbits.URXREG3
#define _URXREG4 U1RXREGbits.URXREG4
#define _URXREG5 U1RXREGbits.URXREG5
#define _URXREG6 U1RXREGbits.URXREG6
#define _URXREG7 U1RXREGbits.URXREG7
#define _URXREG8 U1RXREGbits.URXREG8
#define _URX8 U1RXREGbits.URX8

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SPIROV SPI1STATbits.SPIROV
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN

/* SPI1CON */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */

/* SPI2CON */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */

/* ADCON1 */
#define _DONE ADCON1bits.DONE
#define _SAMP ADCON1bits.SAMP
#define _ASAM ADCON1bits.ASAM
#define _SIMSAM ADCON1bits.SIMSAM
#define _SSRC ADCON1bits.SSRC
#define _FORM ADCON1bits.FORM
#define _ADSIDL ADCON1bits.ADSIDL
#define _ADON ADCON1bits.ADON
#define _SSRC0 ADCON1bits.SSRC0
#define _SSRC1 ADCON1bits.SSRC1
#define _SSRC2 ADCON1bits.SSRC2
#define _FORM0 ADCON1bits.FORM0
#define _FORM1 ADCON1bits.FORM1

/* ADCON2 */
#define _ALTS ADCON2bits.ALTS
#define _BUFM ADCON2bits.BUFM
#define _SMPI ADCON2bits.SMPI
#define _BUFS ADCON2bits.BUFS
#define _CHPS ADCON2bits.CHPS
#define _CSCNA ADCON2bits.CSCNA
#define _VCFG ADCON2bits.VCFG
#define _SMPI0 ADCON2bits.SMPI0
#define _SMPI1 ADCON2bits.SMPI1
#define _SMPI2 ADCON2bits.SMPI2
#define _SMPI3 ADCON2bits.SMPI3
#define _CHPS0 ADCON2bits.CHPS0
#define _CHPS1 ADCON2bits.CHPS1
#define _VCFG0 ADCON2bits.VCFG0
#define _VCFG1 ADCON2bits.VCFG1
#define _VCFG2 ADCON2bits.VCFG2

/* ADCON3 */
#define _ADCS ADCON3bits.ADCS
#define _ADRC ADCON3bits.ADRC
#define _SAMC ADCON3bits.SAMC
#define _ADCS0 ADCON3bits.ADCS0
#define _ADCS1 ADCON3bits.ADCS1
#define _ADCS2 ADCON3bits.ADCS2
#define _ADCS3 ADCON3bits.ADCS3
#define _ADCS4 ADCON3bits.ADCS4
#define _ADCS5 ADCON3bits.ADCS5
#define _SAMC0 ADCON3bits.SAMC0
#define _SAMC1 ADCON3bits.SAMC1
#define _SAMC2 ADCON3bits.SAMC2
#define _SAMC3 ADCON3bits.SAMC3
#define _SAMC4 ADCON3bits.SAMC4

/* ADCHS */
#define _CH0SA ADCHSbits.CH0SA
#define _CH0NA ADCHSbits.CH0NA
#define _CH123SA ADCHSbits.CH123SA
#define _CH123NA ADCHSbits.CH123NA
#define _CH0SB ADCHSbits.CH0SB
#define _CH0NB ADCHSbits.CH0NB
#define _CH123SB ADCHSbits.CH123SB
#define _CH123NB ADCHSbits.CH123NB
#define _CH0SA0 ADCHSbits.CH0SA0
#define _CH0SA1 ADCHSbits.CH0SA1
#define _CH0SA2 ADCHSbits.CH0SA2
#define _CH0SA3 ADCHSbits.CH0SA3
#define _CH123NA0 ADCHSbits.CH123NA0
#define _CH123NA1 ADCHSbits.CH123NA1
#define _CH0SB0 ADCHSbits.CH0SB0
#define _CH0SB1 ADCHSbits.CH0SB1
#define _CH0SB2 ADCHSbits.CH0SB2
#define _CH0SB3 ADCHSbits.CH0SB3
#define _CH123NB0 ADCHSbits.CH123NB0
#define _CH123NB1 ADCHSbits.CH123NB1

/* ADPCFG */
#define _PCFG0 ADPCFGbits.PCFG0
#define _PCFG1 ADPCFGbits.PCFG1
#define _PCFG2 ADPCFGbits.PCFG2
#define _PCFG3 ADPCFGbits.PCFG3
#define _PCFG4 ADPCFGbits.PCFG4
#define _PCFG5 ADPCFGbits.PCFG5
#define _PCFG6 ADPCFGbits.PCFG6
#define _PCFG7 ADPCFGbits.PCFG7
#define _PCFG8 ADPCFGbits.PCFG8
#define _PCFG9 ADPCFGbits.PCFG9
#define _PCFG10 ADPCFGbits.PCFG10
#define _PCFG11 ADPCFGbits.PCFG11
#define _PCFG12 ADPCFGbits.PCFG12
#define _PCFG13 ADPCFGbits.PCFG13
#define _PCFG14 ADPCFGbits.PCFG14
#define _PCFG15 ADPCFGbits.PCFG15

/* ADCSSL */
#define _CSSL0 ADCSSLbits.CSSL0
#define _CSSL1 ADCSSLbits.CSSL1
#define _CSSL2 ADCSSLbits.CSSL2
#define _CSSL3 ADCSSLbits.CSSL3
#define _CSSL4 ADCSSLbits.CSSL4
#define _CSSL5 ADCSSLbits.CSSL5
#define _CSSL6 ADCSSLbits.CSSL6
#define _CSSL7 ADCSSLbits.CSSL7
#define _CSSL8 ADCSSLbits.CSSL8
#define _CSSL9 ADCSSLbits.CSSL9
#define _CSSL10 ADCSSLbits.CSSL10
#define _CSSL11 ADCSSLbits.CSSL11
#define _CSSL12 ADCSSLbits.CSSL12
#define _CSSL13 ADCSSLbits.CSSL13
#define _CSSL14 ADCSSLbits.CSSL14
#define _CSSL15 ADCSSLbits.CSSL15

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* TRISC */
#define _TRISC13 TRISCbits.TRISC13
#define _TRISC14 TRISCbits.TRISC14
#define _TRISC15 TRISCbits.TRISC15

/* PORTC */
#define _RC13 PORTCbits.RC13
#define _RC14 PORTCbits.RC14
#define _RC15 PORTCbits.RC15

/* LATC */
#define _LATC13 LATCbits.LATC13
#define _LATC14 LATCbits.LATC14
#define _LATC15 LATCbits.LATC15

/* TRISD */
#define _TRISD0 TRISDbits.TRISD0
#define _TRISD1 TRISDbits.TRISD1
#define _TRISD2 TRISDbits.TRISD2
#define _TRISD3 TRISDbits.TRISD3
#define _TRISD4 TRISDbits.TRISD4
#define _TRISD5 TRISDbits.TRISD5
#define _TRISD6 TRISDbits.TRISD6
#define _TRISD7 TRISDbits.TRISD7
#define _TRISD8 TRISDbits.TRISD8
#define _TRISD9 TRISDbits.TRISD9
#define _TRISD10 TRISDbits.TRISD10
#define _TRISD11 TRISDbits.TRISD11

/* PORTD */
#define _RD0 PORTDbits.RD0
#define _RD1 PORTDbits.RD1
#define _RD2 PORTDbits.RD2
#define _RD3 PORTDbits.RD3
#define _RD4 PORTDbits.RD4
#define _RD5 PORTDbits.RD5
#define _RD6 PORTDbits.RD6
#define _RD7 PORTDbits.RD7
#define _RD8 PORTDbits.RD8
#define _RD9 PORTDbits.RD9
#define _RD10 PORTDbits.RD10
#define _RD11 PORTDbits.RD11

/* LATD */
#define _LATD0 LATDbits.LATD0
#define _LATD1 LATDbits.LATD1
#define _LATD2 LATDbits.LATD2
#define _LATD3 LATDbits.LATD3
#define _LATD4 LATDbits.LATD4
#define _LATD5 LATDbits.LATD5
#define _LATD6 LATDbits.LATD6
#define _LATD7 LATDbits.LATD7
#define _LATD8 LATDbits.LATD8
#define _LATD9 LATDbits.LATD9
#define _LATD10 LATDbits.LATD10
#define _LATD11 LATDbits.LATD11

/* TRISE */
#define _TRISE0 TRISEbits.TRISE0
#define _TRISE1 TRISEbits.TRISE1
#define _TRISE2 TRISEbits.TRISE2
#define _TRISE3 TRISEbits.TRISE3
#define _TRISE4 TRISEbits.TRISE4
#define _TRISE5 TRISEbits.TRISE5
#define _TRISE6 TRISEbits.TRISE6
#define _TRISE7 TRISEbits.TRISE7

/* PORTE */
#define _RE0 PORTEbits.RE0
#define _RE1 PORTEbits.RE1
#define _RE2 PORTEbits.RE2
#define _RE3 PORTEbits.RE3
#define _RE4 PORTEbits.RE4
#define _RE5 PORTEbits.RE5
#define _RE6 PORTEbits.RE6
#define _RE7 PORTEbits.RE7

/* LATE */
#define _LATE0 LATEbits.LATE0
#define _LATE1 LATEbits.LATE1
#define _LATE2 LATEbits.LATE2
#define _LATE3 LATEbits.LATE3
#define _LATE4 LATEbits.LATE4
#define _LATE5 LATEbits.LATE5
#define _LATE6 LATEbits.LATE6
#define _LATE7 LATEbits.LATE7

/* TRISF */
#define _TRISF0 TRISFbits.TRISF0
#define _TRISF1 TRISFbits.TRISF1
#define _TRISF2 TRISFbits.TRISF2
#define _TRISF3 TRISFbits.TRISF3
#define _TRISF4 TRISFbits.TRISF4
#define _TRISF5 TRISFbits.TRISF5
#define _TRISF6 TRISFbits.TRISF6

/* PORTF */
#define _RF0 PORTFbits.RF0
#define _RF1 PORTFbits.RF1
#define _RF2 PORTFbits.RF2
#define _RF3 PORTFbits.RF3
#define _RF4 PORTFbits.RF4
#define _RF5 PORTFbits.RF5
#define _RF6 PORTFbits.RF6

/* LATF */
#define _LATF0 LATFbits.LATF0
#define _LATF1 LATFbits.LATF1
#define _LATF2 LATFbits.LATF2
#define _LATF3 LATFbits.LATF3
#define _LATF4 LATFbits.LATF4
#define _LATF5 LATFbits.LATF5
#define _LATF6 LATFbits.LATF6

/* TRISG */
#define _TRISG2 TRISGbits.TRISG2
#define _TRISG3 TRISGbits.TRISG3
#define _TRISG6 TRISGbits.TRISG6
#define _TRISG7 TRISGbits.TRISG7
#define _TRISG8 TRISGbits.TRISG8
#define _TRISG9 TRISGbits.TRISG9

/* PORTG */
#define _RG2 PORTGbits.RG2
#define _RG3 PORTGbits.RG3
#define _RG6 PORTGbits.RG6
#define _RG7 PORTGbits.RG7
#define _RG8 PORTGbits.RG8
#define _RG9 PORTGbits.RG9

/* LATG */
#define _LATG2 LATGbits.LATG2
#define _LATG3 LATGbits.LATG3
#define _LATG6 LATGbits.LATG6
#define _LATG7 LATGbits.LATG7
#define _LATG8 LATGbits.LATG8
#define _LATG9 LATGbits.LATG9

/* C1RXF0SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF0EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF0EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXF1SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF1EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF1EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXF2SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF2EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF2EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXF3SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF3EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF3EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXF4SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF4EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF4EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXF5SID */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXF5EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXF5EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXM0SID */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXM0EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXM0EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1RXM1SID */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXM1EIDH */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RXM1EIDL */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1TX2SID */
/* Bitname _TXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SRR cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10_6 cannot be defined because it is used by more than one SFR */

/* C1TX2EID */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13_6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17_14 cannot be defined because it is used by more than one SFR */

/* C1TX2DLC */
/* Bitname _DLC cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB1 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRTR cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */

/* C1TX2B1 */
#define _TXB2D00 C1TX2B1bits.TXB2D00
#define _TXB2D01 C1TX2B1bits.TXB2D01
#define _TXB2D02 C1TX2B1bits.TXB2D02
#define _TXB2D03 C1TX2B1bits.TXB2D03
#define _TXB2D04 C1TX2B1bits.TXB2D04
#define _TXB2D05 C1TX2B1bits.TXB2D05
#define _TXB2D06 C1TX2B1bits.TXB2D06
#define _TXB2D07 C1TX2B1bits.TXB2D07
#define _TXB2D10 C1TX2B1bits.TXB2D10
#define _TXB2D11 C1TX2B1bits.TXB2D11
#define _TXB2D12 C1TX2B1bits.TXB2D12
#define _TXB2D13 C1TX2B1bits.TXB2D13
#define _TXB2D14 C1TX2B1bits.TXB2D14
#define _TXB2D15 C1TX2B1bits.TXB2D15
#define _TXB2D16 C1TX2B1bits.TXB2D16
#define _TXB2D17 C1TX2B1bits.TXB2D17

/* C1TX2B2 */
#define _TXB2D20 C1TX2B2bits.TXB2D20
#define _TXB2D21 C1TX2B2bits.TXB2D21
#define _TXB2D22 C1TX2B2bits.TXB2D22
#define _TXB2D23 C1TX2B2bits.TXB2D23
#define _TXB2D24 C1TX2B2bits.TXB2D24
#define _TXB2D25 C1TX2B2bits.TXB2D25
#define _TXB2D26 C1TX2B2bits.TXB2D26
#define _TXB2D27 C1TX2B2bits.TXB2D27
#define _TXB2D30 C1TX2B2bits.TXB2D30
#define _TXB2D31 C1TX2B2bits.TXB2D31
#define _TXB2D32 C1TX2B2bits.TXB2D32
#define _TXB2D33 C1TX2B2bits.TXB2D33
#define _TXB2D34 C1TX2B2bits.TXB2D34
#define _TXB2D35 C1TX2B2bits.TXB2D35
#define _TXB2D36 C1TX2B2bits.TXB2D36
#define _TXB2D37 C1TX2B2bits.TXB2D37

/* C1TX2B3 */
#define _TX2B2D40 C1TX2B3bits.TX2B2D40
#define _TX2B2D41 C1TX2B3bits.TX2B2D41
#define _TX2B2D42 C1TX2B3bits.TX2B2D42
#define _TX2B2D43 C1TX2B3bits.TX2B2D43
#define _TX2B2D44 C1TX2B3bits.TX2B2D44
#define _TX2B2D45 C1TX2B3bits.TX2B2D45
#define _TX2B2D46 C1TX2B3bits.TX2B2D46
#define _TX2B2D47 C1TX2B3bits.TX2B2D47
#define _TXB2D50 C1TX2B3bits.TXB2D50
#define _TXB2D51 C1TX2B3bits.TXB2D51
#define _TXB2D52 C1TX2B3bits.TXB2D52
#define _TXB2D53 C1TX2B3bits.TXB2D53
#define _TXB2D54 C1TX2B3bits.TXB2D54
#define _TXB2D55 C1TX2B3bits.TXB2D55
#define _TXB2D56 C1TX2B3bits.TXB2D56
#define _TXB2D57 C1TX2B3bits.TXB2D57

/* C1TX2B4 */
#define _TX2B2D60 C1TX2B4bits.TX2B2D60
#define _TX2B2D61 C1TX2B4bits.TX2B2D61
#define _TX2B2D62 C1TX2B4bits.TX2B2D62
#define _TX2B2D63 C1TX2B4bits.TX2B2D63
#define _TX2B2D64 C1TX2B4bits.TX2B2D64
#define _TX2B2D65 C1TX2B4bits.TX2B2D65
#define _TX2B2D66 C1TX2B4bits.TX2B2D66
#define _TX2B2D67 C1TX2B4bits.TX2B2D67
#define _TX2B2D70 C1TX2B4bits.TX2B2D70
#define _TX2B2D71 C1TX2B4bits.TX2B2D71
#define _TX2B2D72 C1TX2B4bits.TX2B2D72
#define _TX2B2D73 C1TX2B4bits.TX2B2D73
#define _TX2B2D74 C1TX2B4bits.TX2B2D74
#define _TX2B2D75 C1TX2B4bits.TX2B2D75
#define _TX2B2D76 C1TX2B4bits.TX2B2D76
#define _TX2B2D77 C1TX2B4bits.TX2B2D77

/* C1TX2CON */
/* Bitname _TXPRI cannot be defined because it is used by more than one SFR */
/* Bitname _TXREQ cannot be defined because it is used by more than one SFR */
/* Bitname _TXERR cannot be defined because it is used by more than one SFR */
/* Bitname _TXLARB cannot be defined because it is used by more than one SFR */
/* Bitname _TXABT cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI1 cannot be defined because it is used by more than one SFR */

/* C1TX1SID */
/* Bitname _TXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SRR cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10_6 cannot be defined because it is used by more than one SFR */

/* C1TX1EID */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13_6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17_14 cannot be defined because it is used by more than one SFR */

/* C1TX1DLC */
/* Bitname _DLC cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB1 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRTR cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC1 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC2 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC3 cannot be defined because it is used by more than one SFR */

/* C1TX1B1 */
/* Bitname _TXB1D00 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D01 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D02 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D03 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D04 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D05 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D06 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D07 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D10 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D11 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D12 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D13 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D14 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D15 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D16 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D17 cannot be defined because it is used by more than one SFR */

/* C1TX1B2 */
/* Bitname _TXB1D20 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D21 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D22 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D23 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D24 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D25 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D26 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D27 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D30 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D31 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D32 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D33 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D34 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D35 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D36 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D37 cannot be defined because it is used by more than one SFR */

/* C1TX1B3 */
/* Bitname _TXB1D40 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D41 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D42 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D43 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D44 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D45 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D46 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D47 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D50 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D51 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D52 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D53 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D54 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D55 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D56 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D57 cannot be defined because it is used by more than one SFR */

/* C1TX1B4 */
/* Bitname _TXB1D60 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D61 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D62 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D63 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D64 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D65 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D66 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D67 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D70 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D71 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D72 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D73 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D74 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D75 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D76 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D77 cannot be defined because it is used by more than one SFR */

/* C1TX1CON */
/* Bitname _TXPRI cannot be defined because it is used by more than one SFR */
/* Bitname _TXREQ cannot be defined because it is used by more than one SFR */
/* Bitname _TXERR cannot be defined because it is used by more than one SFR */
/* Bitname _TXLARB cannot be defined because it is used by more than one SFR */
/* Bitname _TXABT cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI1 cannot be defined because it is used by more than one SFR */

/* C1TX0SID */
/* Bitname _TXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SRR cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10_6 cannot be defined because it is used by more than one SFR */

/* C1TX0EID */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13_6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17_14 cannot be defined because it is used by more than one SFR */

/* C1TX0DLC */
/* Bitname _DLC cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRB1 cannot be defined because it is used by more than one SFR */
/* Bitname _TXRTR cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC1 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC2 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC3 cannot be defined because it is used by more than one SFR */

/* C1TX0B1 */
/* Bitname _TXB0D00 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D01 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D02 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D03 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D04 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D05 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D06 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D07 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D10 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D11 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D12 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D13 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D14 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D15 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D16 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D17 cannot be defined because it is used by more than one SFR */

/* C1TX0B2 */
/* Bitname _TXB0D20 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D21 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D22 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D23 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D24 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D25 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D26 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D27 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D30 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D31 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D32 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D33 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D34 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D35 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D36 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D37 cannot be defined because it is used by more than one SFR */

/* C1TX0B3 */
/* Bitname _TXB0D40 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D41 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D42 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D43 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D44 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D45 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D46 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D47 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D50 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D51 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D52 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D53 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D54 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D55 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D56 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D57 cannot be defined because it is used by more than one SFR */

/* C1TX0B4 */
/* Bitname _TXB0D60 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D61 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D62 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D63 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D64 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D65 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D66 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D67 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D70 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D71 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D72 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D73 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D74 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D75 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D76 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D77 cannot be defined because it is used by more than one SFR */

/* C1TX0CON */
/* Bitname _TXPRI cannot be defined because it is used by more than one SFR */
/* Bitname _TXREQ cannot be defined because it is used by more than one SFR */
/* Bitname _TXERR cannot be defined because it is used by more than one SFR */
/* Bitname _TXLARB cannot be defined because it is used by more than one SFR */
/* Bitname _TXABT cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI0 cannot be defined because it is used by more than one SFR */
/* Bitname _TXPRI1 cannot be defined because it is used by more than one SFR */

/* C1RX1SID */
/* Bitname _RXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SRR cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RX1EID */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RX1DLC */
/* Bitname _DLC cannot be defined because it is used by more than one SFR */
/* Bitname _RXRB0 cannot be defined because it is used by more than one SFR */
/* Bitname _RXRB1 cannot be defined because it is used by more than one SFR */
/* Bitname _RXRTR cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC1 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC2 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC3 cannot be defined because it is used by more than one SFR */

/* C1RX1B1 */
/* Bitname _TXB1D00 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D01 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D02 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D03 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D04 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D05 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D06 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D07 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D10 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D11 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D12 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D13 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D14 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D15 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D16 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D17 cannot be defined because it is used by more than one SFR */

/* C1RX1B2 */
/* Bitname _TXB1D20 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D21 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D22 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D23 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D24 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D25 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D26 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D27 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D30 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D31 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D32 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D33 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D34 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D35 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D36 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D37 cannot be defined because it is used by more than one SFR */

/* C1RX1B3 */
/* Bitname _TXB1D40 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D41 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D42 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D43 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D44 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D45 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D46 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D47 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D50 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D51 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D52 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D53 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D54 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D55 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D56 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D57 cannot be defined because it is used by more than one SFR */

/* C1RX1B4 */
/* Bitname _TXB1D60 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D61 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D62 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D63 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D64 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D65 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D66 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D67 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D70 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D71 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D72 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D73 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D74 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D75 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D76 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB1D77 cannot be defined because it is used by more than one SFR */

/* C1RX1CON */
/* Bitname _FILHIT cannot be defined because it is used by more than one SFR */
/* Bitname _RXRTRRO cannot be defined because it is used by more than one SFR */
/* Bitname _RXFUL cannot be defined because it is used by more than one SFR */
/* Bitname _FILHIT0 cannot be defined because it is used by more than one SFR */
#define _FILHIT1 C1RX1CONbits.FILHIT1
#define _FILHIT2 C1RX1CONbits.FILHIT2

/* C1RX0SID */
/* Bitname _RXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SRR cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RX0EID */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */

/* C1RX0DLC */
/* Bitname _DLC cannot be defined because it is used by more than one SFR */
/* Bitname _RXRB0 cannot be defined because it is used by more than one SFR */
/* Bitname _RXRB1 cannot be defined because it is used by more than one SFR */
/* Bitname _RXRTR cannot be defined because it is used by more than one SFR */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5_0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC1 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC2 cannot be defined because it is used by more than one SFR */
/* Bitname _DLC3 cannot be defined because it is used by more than one SFR */

/* C1RX0B1 */
/* Bitname _TXB0D00 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D01 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D02 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D03 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D04 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D05 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D06 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D07 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D10 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D11 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D12 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D13 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D14 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D15 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D16 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D17 cannot be defined because it is used by more than one SFR */

/* C1RX0B2 */
/* Bitname _TXB0D20 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D21 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D22 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D23 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D24 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D25 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D26 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D27 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D30 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D31 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D32 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D33 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D34 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D35 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D36 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D37 cannot be defined because it is used by more than one SFR */

/* C1RX0B3 */
/* Bitname _TXB0D40 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D41 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D42 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D43 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D44 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D45 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D46 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D47 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D50 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D51 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D52 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D53 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D54 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D55 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D56 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D57 cannot be defined because it is used by more than one SFR */

/* C1RX0B4 */
/* Bitname _TXB0D60 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D61 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D62 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D63 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D64 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D65 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D66 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D67 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D70 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D71 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D72 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D73 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D74 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D75 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D76 cannot be defined because it is used by more than one SFR */
/* Bitname _TXB0D77 cannot be defined because it is used by more than one SFR */

/* C1RX0CON */
/* Bitname _FILHIT0 cannot be defined because it is used by more than one SFR */
#define _JTOFF C1RX0CONbits.JTOFF
#define _DBEN C1RX0CONbits.DBEN
/* Bitname _RXRTRRO cannot be defined because it is used by more than one SFR */
/* Bitname _RXFUL cannot be defined because it is used by more than one SFR */
/* Bitname _FILHIT cannot be defined because it is used by more than one SFR */
#define _RXB0DBEN C1RX0CONbits.RXB0DBEN

/* C1CTRL */
#define _ICODE C1CTRLbits.ICODE
#define _OPMODE C1CTRLbits.OPMODE
#define _REQOP C1CTRLbits.REQOP
#define _CANCKS C1CTRLbits.CANCKS
#define _ABAT C1CTRLbits.ABAT
#define _CANSIDL C1CTRLbits.CANSIDL
#define _CANFRZ C1CTRLbits.CANFRZ
#define _CANCAP C1CTRLbits.CANCAP
#define _ICODE0 C1CTRLbits.ICODE0
#define _ICODE1 C1CTRLbits.ICODE1
#define _ICODE2 C1CTRLbits.ICODE2
#define _OPMODE0 C1CTRLbits.OPMODE0
#define _OPMODE1 C1CTRLbits.OPMODE1
#define _OPMODE2 C1CTRLbits.OPMODE2
#define _REQOP0 C1CTRLbits.REQOP0
#define _REQOP1 C1CTRLbits.REQOP1
#define _REQOP2 C1CTRLbits.REQOP2
#define _CSIDL C1CTRLbits.CSIDL

/* C1CFG1 */
#define _BRP C1CFG1bits.BRP
#define _SJW C1CFG1bits.SJW

/* C1CFG2 */
#define _PRSEG C1CFG2bits.PRSEG
#define _SEG1PH C1CFG2bits.SEG1PH
#define _SAM C1CFG2bits.SAM
#define _SEG2PHTS C1CFG2bits.SEG2PHTS
#define _SEG2PH C1CFG2bits.SEG2PH
#define _WAKFIL C1CFG2bits.WAKFIL
#define _PRSEG0 C1CFG2bits.PRSEG0
#define _PRSEG1 C1CFG2bits.PRSEG1
#define _PRSEG2 C1CFG2bits.PRSEG2
#define _SEG1PH0 C1CFG2bits.SEG1PH0
#define _SEG1PH1 C1CFG2bits.SEG1PH1
#define _SEG1PH2 C1CFG2bits.SEG1PH2
#define _SEG2PH0 C1CFG2bits.SEG2PH0
#define _SEG2PH1 C1CFG2bits.SEG2PH1
#define _SEG2PH2 C1CFG2bits.SEG2PH2

/* C1INTF */
#define _RXB0IF C1INTFbits.RXB0IF
#define _RXB1IF C1INTFbits.RXB1IF
#define _TXB0IF C1INTFbits.TXB0IF
#define _TXB1IF C1INTFbits.TXB1IF
#define _TXB2IF C1INTFbits.TXB2IF
#define _ERRIF C1INTFbits.ERRIF
#define _WAKIF C1INTFbits.WAKIF
#define _IRXIF C1INTFbits.IRXIF
#define _EWARN C1INTFbits.EWARN
#define _RXWARN C1INTFbits.RXWARN
#define _TXWARN C1INTFbits.TXWARN
#define _RXBP C1INTFbits.RXBP
#define _TXBP C1INTFbits.TXBP
#define _TXBO C1INTFbits.TXBO
#define _RXB1OVFL C1INTFbits.RXB1OVFL
#define _RXB0OVFL C1INTFbits.RXB0OVFL
#define _RX0IF C1INTFbits.RX0IF
#define _RX1IF C1INTFbits.RX1IF
#define _TX0IF C1INTFbits.TX0IF
#define _TX1IF C1INTFbits.TX1IF
#define _TX2IF C1INTFbits.TX2IF
#define _IVRIF C1INTFbits.IVRIF
#define _RXWAR C1INTFbits.RXWAR
#define _TXWAR C1INTFbits.TXWAR
#define _RXEP C1INTFbits.RXEP
#define _TXEP C1INTFbits.TXEP
#define _RX1OVR C1INTFbits.RX1OVR
#define _RX0OVR C1INTFbits.RX0OVR

/* C1INTE */
#define _RXB0IE C1INTEbits.RXB0IE
#define _RXB1IE C1INTEbits.RXB1IE
#define _TXB0IE C1INTEbits.TXB0IE
#define _TXB1IE C1INTEbits.TXB1IE
#define _TXB2IE C1INTEbits.TXB2IE
#define _ERRIE C1INTEbits.ERRIE
#define _WAKIE C1INTEbits.WAKIE
#define _IRXIE C1INTEbits.IRXIE
#define _RX0IE C1INTEbits.RX0IE
#define _RX1IE C1INTEbits.RX1IE
#define _TX0IE C1INTEbits.TX0IE
#define _TX1IE C1INTEbits.TX1IE
#define _TX2IE C1INTEbits.TX2IE
#define _IVRIE C1INTEbits.IVRIE

/* C1EC */
#define _REC0 C1ECbits.REC0
#define _REC1 C1ECbits.REC1
#define _REC2 C1ECbits.REC2
#define _REC3 C1ECbits.REC3
#define _REC4 C1ECbits.REC4
#define _REC5 C1ECbits.REC5
#define _REC6 C1ECbits.REC6
#define _REC7 C1ECbits.REC7
#define _TEC0 C1ECbits.TEC0
#define _TEC1 C1ECbits.TEC1
#define _TEC2 C1ECbits.TEC2
#define _TEC3 C1ECbits.TEC3
#define _TEC4 C1ECbits.TEC4
#define _TEC5 C1ECbits.TEC5
#define _TEC6 C1ECbits.TEC6
#define _TEC7 C1ECbits.TEC7

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _BGST RCONbits.BGST
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _POST OSCCONbits.POST
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _POST0 OSCCONbits.POST0
#define _POST1 OSCCONbits.POST1
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* OSCTUN */
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3

/* NVMCON */
#define _PROGOP NVMCONbits.PROGOP
#define _TWRI NVMCONbits.TWRI
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _PROGOP0 NVMCONbits.PROGOP0
#define _PROGOP1 NVMCONbits.PROGOP1
#define _PROGOP2 NVMCONbits.PROGOP2
#define _PROGOP3 NVMCONbits.PROGOP3
#define _PROGOP4 NVMCONbits.PROGOP4
#define _PROGOP5 NVMCONbits.PROGOP5
#define _PROGOP6 NVMCONbits.PROGOP6

/* NVMADRU */
#define _NVMADR NVMADRUbits.NVMADR

/* PMD1 */
#define _ADCMD PMD1bits.ADCMD
#define _C1MD PMD1bits.C1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _I2CMD PMD1bits.I2CMD
#define _PWMMD PMD1bits.PWMMD
#define _QEIMD PMD1bits.QEIMD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _T5MD PMD1bits.T5MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _OC3MD PMD2bits.OC3MD
#define _OC4MD PMD2bits.OC4MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD


/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array in X memory */
/* that is aligned to a 32 byte address:                      */
/*                                                            */
/* int _XBSS(32) xbuf[16];                                    */
/*                                                            */
#define _XBSS(N)    __attribute__((space(xmemory),aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),aligned(N)))
/*                                                            */
/* To declare an initialized array in data EEPROM without     */
/* special alignment:                                         */
/*                                                            */
/* int _EEDATA(2) table1[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};   */
/*                                                            */
#define _EEDATA(N)   __attribute__((space(eedata),aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int _PERSISTENT var1,var2;                                 */
/*                                                            */
#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void _ISR _T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void _ISRFAST _SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET_CPU_IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET_CPU_IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET_AND_SAVE_CPU_IPL(save_to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save_to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* uint16_t old_ipl;                                      */
/*                                                            */
/* SET_AND_SAVE_CPU_IPL(old_ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE_CPU_IPL(saved_to)     */
/*                                                            */
/* RESTORE_CPU_IPL(old_ipl);                                  */

#define SET_CPU_IPL(ipl) {       \
  uint16_t DISI_save;        \
                                 \
  DISI_save = DISICNT;           \
  asm volatile ("disi #0x3FFF"); \
  SRbits.IPL = ipl;              \
  DISICNT = DISI_save;           \
} (void) 0

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)

#define _SR_C_POSITION                           0x00000000
#define _SR_C_MASK                               0x00000001
#define _SR_C_LENGTH                             0x00000001

#define _SR_Z_POSITION                           0x00000001
#define _SR_Z_MASK                               0x00000002
#define _SR_Z_LENGTH                             0x00000001

#define _SR_OV_POSITION                          0x00000002
#define _SR_OV_MASK                              0x00000004
#define _SR_OV_LENGTH                            0x00000001

#define _SR_N_POSITION                           0x00000003
#define _SR_N_MASK                               0x00000008
#define _SR_N_LENGTH                             0x00000001

#define _SR_RA_POSITION                          0x00000004
#define _SR_RA_MASK                              0x00000010
#define _SR_RA_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_DA_POSITION                          0x00000009
#define _SR_DA_MASK                              0x00000200
#define _SR_DA_LENGTH                            0x00000001

#define _SR_SAB_POSITION                         0x0000000A
#define _SR_SAB_MASK                             0x00000400
#define _SR_SAB_LENGTH                           0x00000001

#define _SR_OAB_POSITION                         0x0000000B
#define _SR_OAB_MASK                             0x00000800
#define _SR_OAB_LENGTH                           0x00000001

#define _SR_SB_POSITION                          0x0000000C
#define _SR_SB_MASK                              0x00001000
#define _SR_SB_LENGTH                            0x00000001

#define _SR_SA_POSITION                          0x0000000D
#define _SR_SA_MASK                              0x00002000
#define _SR_SA_LENGTH                            0x00000001

#define _SR_OB_POSITION                          0x0000000E
#define _SR_OB_MASK                              0x00004000
#define _SR_OB_LENGTH                            0x00000001

#define _SR_OA_POSITION                          0x0000000F
#define _SR_OA_MASK                              0x00008000
#define _SR_OA_LENGTH                            0x00000001

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_IF_POSITION                      0x00000000
#define _CORCON_IF_MASK                          0x00000001
#define _CORCON_IF_LENGTH                        0x00000001

#define _CORCON_RND_POSITION                     0x00000001
#define _CORCON_RND_MASK                         0x00000002
#define _CORCON_RND_LENGTH                       0x00000001

#define _CORCON_PSV_POSITION                     0x00000002
#define _CORCON_PSV_MASK                         0x00000004
#define _CORCON_PSV_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CORCON_ACCSAT_POSITION                  0x00000004
#define _CORCON_ACCSAT_MASK                      0x00000010
#define _CORCON_ACCSAT_LENGTH                    0x00000001

#define _CORCON_SATDW_POSITION                   0x00000005
#define _CORCON_SATDW_MASK                       0x00000020
#define _CORCON_SATDW_LENGTH                     0x00000001

#define _CORCON_SATB_POSITION                    0x00000006
#define _CORCON_SATB_MASK                        0x00000040
#define _CORCON_SATB_LENGTH                      0x00000001

#define _CORCON_SATA_POSITION                    0x00000007
#define _CORCON_SATA_MASK                        0x00000080
#define _CORCON_SATA_LENGTH                      0x00000001

#define _CORCON_DL_POSITION                      0x00000008
#define _CORCON_DL_MASK                          0x00000700
#define _CORCON_DL_LENGTH                        0x00000003

#define _CORCON_EDT_POSITION                     0x0000000B
#define _CORCON_EDT_MASK                         0x00000800
#define _CORCON_EDT_LENGTH                       0x00000001

#define _CORCON_US_POSITION                      0x0000000C
#define _CORCON_US_MASK                          0x00001000
#define _CORCON_US_LENGTH                        0x00000001

#define _CORCON_DL0_POSITION                     0x00000008
#define _CORCON_DL0_MASK                         0x00000100
#define _CORCON_DL0_LENGTH                       0x00000001

#define _CORCON_DL1_POSITION                     0x00000009
#define _CORCON_DL1_MASK                         0x00000200
#define _CORCON_DL1_LENGTH                       0x00000001

#define _CORCON_DL2_POSITION                     0x0000000A
#define _CORCON_DL2_MASK                         0x00000400
#define _CORCON_DL2_LENGTH                       0x00000001

#define _MODCON_XWM_POSITION                     0x00000000
#define _MODCON_XWM_MASK                         0x0000000F
#define _MODCON_XWM_LENGTH                       0x00000004

#define _MODCON_YWM_POSITION                     0x00000004
#define _MODCON_YWM_MASK                         0x000000F0
#define _MODCON_YWM_LENGTH                       0x00000004

#define _MODCON_BWM_POSITION                     0x00000008
#define _MODCON_BWM_MASK                         0x00000F00
#define _MODCON_BWM_LENGTH                       0x00000004

#define _MODCON_YMODEN_POSITION                  0x0000000E
#define _MODCON_YMODEN_MASK                      0x00004000
#define _MODCON_YMODEN_LENGTH                    0x00000001

#define _MODCON_XMODEN_POSITION                  0x0000000F
#define _MODCON_XMODEN_MASK                      0x00008000
#define _MODCON_XMODEN_LENGTH                    0x00000001

#define _MODCON_XWM0_POSITION                    0x00000000
#define _MODCON_XWM0_MASK                        0x00000001
#define _MODCON_XWM0_LENGTH                      0x00000001

#define _MODCON_XWM1_POSITION                    0x00000001
#define _MODCON_XWM1_MASK                        0x00000002
#define _MODCON_XWM1_LENGTH                      0x00000001

#define _MODCON_XWM2_POSITION                    0x00000002
#define _MODCON_XWM2_MASK                        0x00000004
#define _MODCON_XWM2_LENGTH                      0x00000001

#define _MODCON_XWM3_POSITION                    0x00000003
#define _MODCON_XWM3_MASK                        0x00000008
#define _MODCON_XWM3_LENGTH                      0x00000001

#define _MODCON_YWM0_POSITION                    0x00000004
#define _MODCON_YWM0_MASK                        0x00000010
#define _MODCON_YWM0_LENGTH                      0x00000001

#define _MODCON_YWM1_POSITION                    0x00000005
#define _MODCON_YWM1_MASK                        0x00000020
#define _MODCON_YWM1_LENGTH                      0x00000001

#define _MODCON_YWM2_POSITION                    0x00000006
#define _MODCON_YWM2_MASK                        0x00000040
#define _MODCON_YWM2_LENGTH                      0x00000001

#define _MODCON_YWM3_POSITION                    0x00000007
#define _MODCON_YWM3_MASK                        0x00000080
#define _MODCON_YWM3_LENGTH                      0x00000001

#define _MODCON_BWM0_POSITION                    0x00000008
#define _MODCON_BWM0_MASK                        0x00000100
#define _MODCON_BWM0_LENGTH                      0x00000001

#define _MODCON_BWM1_POSITION                    0x00000009
#define _MODCON_BWM1_MASK                        0x00000200
#define _MODCON_BWM1_LENGTH                      0x00000001

#define _MODCON_BWM2_POSITION                    0x0000000A
#define _MODCON_BWM2_MASK                        0x00000400
#define _MODCON_BWM2_LENGTH                      0x00000001

#define _MODCON_BWM3_POSITION                    0x0000000B
#define _MODCON_BWM3_MASK                        0x00000800
#define _MODCON_BWM3_LENGTH                      0x00000001

#define _XBREV_XB_POSITION                       0x00000000
#define _XBREV_XB_MASK                           0x00007FFF
#define _XBREV_XB_LENGTH                         0x0000000F

#define _XBREV_BREN_POSITION                     0x0000000F
#define _XBREV_BREN_MASK                         0x00008000
#define _XBREV_BREN_LENGTH                       0x00000001

#define _XBREV_XB0_POSITION                      0x00000000
#define _XBREV_XB0_MASK                          0x00000001
#define _XBREV_XB0_LENGTH                        0x00000001

#define _XBREV_XB1_POSITION                      0x00000001
#define _XBREV_XB1_MASK                          0x00000002
#define _XBREV_XB1_LENGTH                        0x00000001

#define _XBREV_XB2_POSITION                      0x00000002
#define _XBREV_XB2_MASK                          0x00000004
#define _XBREV_XB2_LENGTH                        0x00000001

#define _XBREV_XB3_POSITION                      0x00000003
#define _XBREV_XB3_MASK                          0x00000008
#define _XBREV_XB3_LENGTH                        0x00000001

#define _XBREV_XB4_POSITION                      0x00000004
#define _XBREV_XB4_MASK                          0x00000010
#define _XBREV_XB4_LENGTH                        0x00000001

#define _XBREV_XB5_POSITION                      0x00000005
#define _XBREV_XB5_MASK                          0x00000020
#define _XBREV_XB5_LENGTH                        0x00000001

#define _XBREV_XB6_POSITION                      0x00000006
#define _XBREV_XB6_MASK                          0x00000040
#define _XBREV_XB6_LENGTH                        0x00000001

#define _XBREV_XB7_POSITION                      0x00000007
#define _XBREV_XB7_MASK                          0x00000080
#define _XBREV_XB7_LENGTH                        0x00000001

#define _XBREV_XB8_POSITION                      0x00000008
#define _XBREV_XB8_MASK                          0x00000100
#define _XBREV_XB8_LENGTH                        0x00000001

#define _XBREV_XB9_POSITION                      0x00000009
#define _XBREV_XB9_MASK                          0x00000200
#define _XBREV_XB9_LENGTH                        0x00000001

#define _XBREV_XB10_POSITION                     0x0000000A
#define _XBREV_XB10_MASK                         0x00000400
#define _XBREV_XB10_LENGTH                       0x00000001

#define _XBREV_XB11_POSITION                     0x0000000B
#define _XBREV_XB11_MASK                         0x00000800
#define _XBREV_XB11_LENGTH                       0x00000001

#define _XBREV_XB12_POSITION                     0x0000000C
#define _XBREV_XB12_MASK                         0x00001000
#define _XBREV_XB12_LENGTH                       0x00000001

#define _XBREV_XB13_POSITION                     0x0000000D
#define _XBREV_XB13_MASK                         0x00002000
#define _XBREV_XB13_LENGTH                       0x00000001

#define _XBREV_XB14_POSITION                     0x0000000E
#define _XBREV_XB14_MASK                         0x00004000
#define _XBREV_XB14_LENGTH                       0x00000001

#define _DISICNT_DISICNT_POSITION                0x00000000
#define _DISICNT_DISICNT_MASK                    0x00003FFF
#define _DISICNT_DISICNT_LENGTH                  0x0000000E

#define _INTCON1_OSCFAIL_POSITION                0x00000001
#define _INTCON1_OSCFAIL_MASK                    0x00000002
#define _INTCON1_OSCFAIL_LENGTH                  0x00000001

#define _INTCON1_STKERR_POSITION                 0x00000002
#define _INTCON1_STKERR_MASK                     0x00000004
#define _INTCON1_STKERR_LENGTH                   0x00000001

#define _INTCON1_ADDRERR_POSITION                0x00000003
#define _INTCON1_ADDRERR_MASK                    0x00000008
#define _INTCON1_ADDRERR_LENGTH                  0x00000001

#define _INTCON1_MATHERR_POSITION                0x00000004
#define _INTCON1_MATHERR_MASK                    0x00000010
#define _INTCON1_MATHERR_LENGTH                  0x00000001

#define _INTCON1_COVTE_POSITION                  0x00000008
#define _INTCON1_COVTE_MASK                      0x00000100
#define _INTCON1_COVTE_LENGTH                    0x00000001

#define _INTCON1_OVBTE_POSITION                  0x00000009
#define _INTCON1_OVBTE_MASK                      0x00000200
#define _INTCON1_OVBTE_LENGTH                    0x00000001

#define _INTCON1_OVATE_POSITION                  0x0000000A
#define _INTCON1_OVATE_MASK                      0x00000400
#define _INTCON1_OVATE_LENGTH                    0x00000001

#define _INTCON1_NSTDIS_POSITION                 0x0000000F
#define _INTCON1_NSTDIS_MASK                     0x00008000
#define _INTCON1_NSTDIS_LENGTH                   0x00000001

#define _INTCON2_INT0EP_POSITION                 0x00000000
#define _INTCON2_INT0EP_MASK                     0x00000001
#define _INTCON2_INT0EP_LENGTH                   0x00000001

#define _INTCON2_INT1EP_POSITION                 0x00000001
#define _INTCON2_INT1EP_MASK                     0x00000002
#define _INTCON2_INT1EP_LENGTH                   0x00000001

#define _INTCON2_INT2EP_POSITION                 0x00000002
#define _INTCON2_INT2EP_MASK                     0x00000004
#define _INTCON2_INT2EP_LENGTH                   0x00000001

#define _INTCON2_INT3EP_POSITION                 0x00000003
#define _INTCON2_INT3EP_MASK                     0x00000008
#define _INTCON2_INT3EP_LENGTH                   0x00000001

#define _INTCON2_INT4EP_POSITION                 0x00000004
#define _INTCON2_INT4EP_MASK                     0x00000010
#define _INTCON2_INT4EP_LENGTH                   0x00000001

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_ALTIVT_POSITION                 0x0000000F
#define _INTCON2_ALTIVT_MASK                     0x00008000
#define _INTCON2_ALTIVT_LENGTH                   0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000000
#define _IFS0_INT0IF_MASK                        0x00000001
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000001
#define _IFS0_IC1IF_MASK                         0x00000002
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000002
#define _IFS0_OC1IF_MASK                         0x00000004
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000004
#define _IFS0_IC2IF_MASK                         0x00000010
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x00000005
#define _IFS0_OC2IF_MASK                         0x00000020
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_T2IF_POSITION                      0x00000006
#define _IFS0_T2IF_MASK                          0x00000040
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000007
#define _IFS0_T3IF_MASK                          0x00000080
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_SPI1IF_POSITION                    0x00000008
#define _IFS0_SPI1IF_MASK                        0x00000100
#define _IFS0_SPI1IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x00000009
#define _IFS0_U1RXIF_MASK                        0x00000200
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000A
#define _IFS0_U1TXIF_MASK                        0x00000400
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_ADIF_POSITION                      0x0000000B
#define _IFS0_ADIF_MASK                          0x00000800
#define _IFS0_ADIF_LENGTH                        0x00000001

#define _IFS0_NVMIF_POSITION                     0x0000000C
#define _IFS0_NVMIF_MASK                         0x00001000
#define _IFS0_NVMIF_LENGTH                       0x00000001

#define _IFS0_SI2CIF_POSITION                    0x0000000D
#define _IFS0_SI2CIF_MASK                        0x00002000
#define _IFS0_SI2CIF_LENGTH                      0x00000001

#define _IFS0_MI2CIF_POSITION                    0x0000000E
#define _IFS0_MI2CIF_MASK                        0x00004000
#define _IFS0_MI2CIF_LENGTH                      0x00000001

#define _IFS0_CNIF_POSITION                      0x0000000F
#define _IFS0_CNIF_MASK                          0x00008000
#define _IFS0_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000000
#define _IFS1_INT1IF_MASK                        0x00000001
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_OC3IF_POSITION                     0x00000003
#define _IFS1_OC3IF_MASK                         0x00000008
#define _IFS1_OC3IF_LENGTH                       0x00000001

#define _IFS1_OC4IF_POSITION                     0x00000004
#define _IFS1_OC4IF_MASK                         0x00000010
#define _IFS1_OC4IF_LENGTH                       0x00000001

#define _IFS1_T4IF_POSITION                      0x00000005
#define _IFS1_T4IF_MASK                          0x00000020
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_T5IF_POSITION                      0x00000006
#define _IFS1_T5IF_MASK                          0x00000040
#define _IFS1_T5IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x00000007
#define _IFS1_INT2IF_MASK                        0x00000080
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_SPI2IF_POSITION                    0x0000000A
#define _IFS1_SPI2IF_MASK                        0x00000400
#define _IFS1_SPI2IF_LENGTH                      0x00000001

#define _IFS1_C1IF_POSITION                      0x0000000B
#define _IFS1_C1IF_MASK                          0x00000800
#define _IFS1_C1IF_LENGTH                        0x00000001

#define _IFS1_IC3IF_POSITION                     0x0000000C
#define _IFS1_IC3IF_MASK                         0x00001000
#define _IFS1_IC3IF_LENGTH                       0x00000001

#define _IFS1_IC4IF_POSITION                     0x0000000D
#define _IFS1_IC4IF_MASK                         0x00002000
#define _IFS1_IC4IF_LENGTH                       0x00000001

#define _IFS2_INT3IF_POSITION                    0x00000004
#define _IFS2_INT3IF_MASK                        0x00000010
#define _IFS2_INT3IF_LENGTH                      0x00000001

#define _IFS2_INT4IF_POSITION                    0x00000005
#define _IFS2_INT4IF_MASK                        0x00000020
#define _IFS2_INT4IF_LENGTH                      0x00000001

#define _IFS2_PWMIF_POSITION                     0x00000007
#define _IFS2_PWMIF_MASK                         0x00000080
#define _IFS2_PWMIF_LENGTH                       0x00000001

#define _IFS2_QEIIF_POSITION                     0x00000008
#define _IFS2_QEIIF_MASK                         0x00000100
#define _IFS2_QEIIF_LENGTH                       0x00000001

#define _IFS2_FLTAIF_POSITION                    0x0000000B
#define _IFS2_FLTAIF_MASK                        0x00000800
#define _IFS2_FLTAIF_LENGTH                      0x00000001

#define _IFS2_FLTBIF_POSITION                    0x0000000C
#define _IFS2_FLTBIF_MASK                        0x00001000
#define _IFS2_FLTBIF_LENGTH                      0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000001
#define _IEC0_IC1IE_MASK                         0x00000002
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000002
#define _IEC0_OC1IE_MASK                         0x00000004
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000004
#define _IEC0_IC2IE_MASK                         0x00000010
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x00000005
#define _IEC0_OC2IE_MASK                         0x00000020
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_T2IE_POSITION                      0x00000006
#define _IEC0_T2IE_MASK                          0x00000040
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000007
#define _IEC0_T3IE_MASK                          0x00000080
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_SPI1IE_POSITION                    0x00000008
#define _IEC0_SPI1IE_MASK                        0x00000100
#define _IEC0_SPI1IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x00000009
#define _IEC0_U1RXIE_MASK                        0x00000200
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000A
#define _IEC0_U1TXIE_MASK                        0x00000400
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_ADIE_POSITION                      0x0000000B
#define _IEC0_ADIE_MASK                          0x00000800
#define _IEC0_ADIE_LENGTH                        0x00000001

#define _IEC0_NVMIE_POSITION                     0x0000000C
#define _IEC0_NVMIE_MASK                         0x00001000
#define _IEC0_NVMIE_LENGTH                       0x00000001

#define _IEC0_SI2CIE_POSITION                    0x0000000D
#define _IEC0_SI2CIE_MASK                        0x00002000
#define _IEC0_SI2CIE_LENGTH                      0x00000001

#define _IEC0_MI2CIE_POSITION                    0x0000000E
#define _IEC0_MI2CIE_MASK                        0x00004000
#define _IEC0_MI2CIE_LENGTH                      0x00000001

#define _IEC0_CNIE_POSITION                      0x0000000F
#define _IEC0_CNIE_MASK                          0x00008000
#define _IEC0_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000000
#define _IEC1_INT1IE_MASK                        0x00000001
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_OC3IE_POSITION                     0x00000003
#define _IEC1_OC3IE_MASK                         0x00000008
#define _IEC1_OC3IE_LENGTH                       0x00000001

#define _IEC1_OC4IE_POSITION                     0x00000004
#define _IEC1_OC4IE_MASK                         0x00000010
#define _IEC1_OC4IE_LENGTH                       0x00000001

#define _IEC1_T4IE_POSITION                      0x00000005
#define _IEC1_T4IE_MASK                          0x00000020
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_T5IE_POSITION                      0x00000006
#define _IEC1_T5IE_MASK                          0x00000040
#define _IEC1_T5IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x00000007
#define _IEC1_INT2IE_MASK                        0x00000080
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_SPI2IE_POSITION                    0x0000000A
#define _IEC1_SPI2IE_MASK                        0x00000400
#define _IEC1_SPI2IE_LENGTH                      0x00000001

#define _IEC1_C1IE_POSITION                      0x0000000B
#define _IEC1_C1IE_MASK                          0x00000800
#define _IEC1_C1IE_LENGTH                        0x00000001

#define _IEC1_IC3IE_POSITION                     0x0000000C
#define _IEC1_IC3IE_MASK                         0x00001000
#define _IEC1_IC3IE_LENGTH                       0x00000001

#define _IEC1_IC4IE_POSITION                     0x0000000D
#define _IEC1_IC4IE_MASK                         0x00002000
#define _IEC1_IC4IE_LENGTH                       0x00000001

#define _IEC2_INT3IE_POSITION                    0x00000004
#define _IEC2_INT3IE_MASK                        0x00000010
#define _IEC2_INT3IE_LENGTH                      0x00000001

#define _IEC2_INT4IE_POSITION                    0x00000005
#define _IEC2_INT4IE_MASK                        0x00000020
#define _IEC2_INT4IE_LENGTH                      0x00000001

#define _IEC2_PWMIE_POSITION                     0x00000007
#define _IEC2_PWMIE_MASK                         0x00000080
#define _IEC2_PWMIE_LENGTH                       0x00000001

#define _IEC2_QEIIE_POSITION                     0x00000008
#define _IEC2_QEIIE_MASK                         0x00000100
#define _IEC2_QEIIE_LENGTH                       0x00000001

#define _IEC2_FLTAIE_POSITION                    0x0000000B
#define _IEC2_FLTAIE_MASK                        0x00000800
#define _IEC2_FLTAIE_LENGTH                      0x00000001

#define _IEC2_FLTBIE_POSITION                    0x0000000C
#define _IEC2_FLTBIE_MASK                        0x00001000
#define _IEC2_FLTBIE_LENGTH                      0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_IC1IP_POSITION                     0x00000004
#define _IPC0_IC1IP_MASK                         0x00000070
#define _IPC0_IC1IP_LENGTH                       0x00000003

#define _IPC0_OC1IP_POSITION                     0x00000008
#define _IPC0_OC1IP_MASK                         0x00000700
#define _IPC0_OC1IP_LENGTH                       0x00000003

#define _IPC0_T1IP_POSITION                      0x0000000C
#define _IPC0_T1IP_MASK                          0x00007000
#define _IPC0_T1IP_LENGTH                        0x00000003

#define _IPC0_INT0IP0_POSITION                   0x00000000
#define _IPC0_INT0IP0_MASK                       0x00000001
#define _IPC0_INT0IP0_LENGTH                     0x00000001

#define _IPC0_INT0IP1_POSITION                   0x00000001
#define _IPC0_INT0IP1_MASK                       0x00000002
#define _IPC0_INT0IP1_LENGTH                     0x00000001

#define _IPC0_INT0IP2_POSITION                   0x00000002
#define _IPC0_INT0IP2_MASK                       0x00000004
#define _IPC0_INT0IP2_LENGTH                     0x00000001

#define _IPC0_IC1IP0_POSITION                    0x00000004
#define _IPC0_IC1IP0_MASK                        0x00000010
#define _IPC0_IC1IP0_LENGTH                      0x00000001

#define _IPC0_IC1IP1_POSITION                    0x00000005
#define _IPC0_IC1IP1_MASK                        0x00000020
#define _IPC0_IC1IP1_LENGTH                      0x00000001

#define _IPC0_IC1IP2_POSITION                    0x00000006
#define _IPC0_IC1IP2_MASK                        0x00000040
#define _IPC0_IC1IP2_LENGTH                      0x00000001

#define _IPC0_OC1IP0_POSITION                    0x00000008
#define _IPC0_OC1IP0_MASK                        0x00000100
#define _IPC0_OC1IP0_LENGTH                      0x00000001

#define _IPC0_OC1IP1_POSITION                    0x00000009
#define _IPC0_OC1IP1_MASK                        0x00000200
#define _IPC0_OC1IP1_LENGTH                      0x00000001

#define _IPC0_OC1IP2_POSITION                    0x0000000A
#define _IPC0_OC1IP2_MASK                        0x00000400
#define _IPC0_OC1IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_IC2IP_POSITION                     0x00000000
#define _IPC1_IC2IP_MASK                         0x00000007
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000004
#define _IPC1_OC2IP_MASK                         0x00000070
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x00000008
#define _IPC1_T2IP_MASK                          0x00000700
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_T3IP_POSITION                      0x0000000C
#define _IPC1_T3IP_MASK                          0x00007000
#define _IPC1_T3IP_LENGTH                        0x00000003

#define _IPC1_IC2IP0_POSITION                    0x00000000
#define _IPC1_IC2IP0_MASK                        0x00000001
#define _IPC1_IC2IP0_LENGTH                      0x00000001

#define _IPC1_IC2IP1_POSITION                    0x00000001
#define _IPC1_IC2IP1_MASK                        0x00000002
#define _IPC1_IC2IP1_LENGTH                      0x00000001

#define _IPC1_IC2IP2_POSITION                    0x00000002
#define _IPC1_IC2IP2_MASK                        0x00000004
#define _IPC1_IC2IP2_LENGTH                      0x00000001

#define _IPC1_OC2IP0_POSITION                    0x00000004
#define _IPC1_OC2IP0_MASK                        0x00000010
#define _IPC1_OC2IP0_LENGTH                      0x00000001

#define _IPC1_OC2IP1_POSITION                    0x00000005
#define _IPC1_OC2IP1_MASK                        0x00000020
#define _IPC1_OC2IP1_LENGTH                      0x00000001

#define _IPC1_OC2IP2_POSITION                    0x00000006
#define _IPC1_OC2IP2_MASK                        0x00000040
#define _IPC1_OC2IP2_LENGTH                      0x00000001

#define _IPC1_T2IP0_POSITION                     0x00000008
#define _IPC1_T2IP0_MASK                         0x00000100
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x00000009
#define _IPC1_T2IP1_MASK                         0x00000200
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000A
#define _IPC1_T2IP2_MASK                         0x00000400
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC1_T3IP0_POSITION                     0x0000000C
#define _IPC1_T3IP0_MASK                         0x00001000
#define _IPC1_T3IP0_LENGTH                       0x00000001

#define _IPC1_T3IP1_POSITION                     0x0000000D
#define _IPC1_T3IP1_MASK                         0x00002000
#define _IPC1_T3IP1_LENGTH                       0x00000001

#define _IPC1_T3IP2_POSITION                     0x0000000E
#define _IPC1_T3IP2_MASK                         0x00004000
#define _IPC1_T3IP2_LENGTH                       0x00000001

#define _IPC2_SPI1IP_POSITION                    0x00000000
#define _IPC2_SPI1IP_MASK                        0x00000007
#define _IPC2_SPI1IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x00000004
#define _IPC2_U1RXIP_MASK                        0x00000070
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_U1TXIP_POSITION                    0x00000008
#define _IPC2_U1TXIP_MASK                        0x00000700
#define _IPC2_U1TXIP_LENGTH                      0x00000003

#define _IPC2_ADIP_POSITION                      0x0000000C
#define _IPC2_ADIP_MASK                          0x00007000
#define _IPC2_ADIP_LENGTH                        0x00000003

#define _IPC2_SPI1IP0_POSITION                   0x00000000
#define _IPC2_SPI1IP0_MASK                       0x00000001
#define _IPC2_SPI1IP0_LENGTH                     0x00000001

#define _IPC2_SPI1IP1_POSITION                   0x00000001
#define _IPC2_SPI1IP1_MASK                       0x00000002
#define _IPC2_SPI1IP1_LENGTH                     0x00000001

#define _IPC2_SPI1IP2_POSITION                   0x00000002
#define _IPC2_SPI1IP2_MASK                       0x00000004
#define _IPC2_SPI1IP2_LENGTH                     0x00000001

#define _IPC2_U1RXIP0_POSITION                   0x00000004
#define _IPC2_U1RXIP0_MASK                       0x00000010
#define _IPC2_U1RXIP0_LENGTH                     0x00000001

#define _IPC2_U1RXIP1_POSITION                   0x00000005
#define _IPC2_U1RXIP1_MASK                       0x00000020
#define _IPC2_U1RXIP1_LENGTH                     0x00000001

#define _IPC2_U1RXIP2_POSITION                   0x00000006
#define _IPC2_U1RXIP2_MASK                       0x00000040
#define _IPC2_U1RXIP2_LENGTH                     0x00000001

#define _IPC2_U1TXIP0_POSITION                   0x00000008
#define _IPC2_U1TXIP0_MASK                       0x00000100
#define _IPC2_U1TXIP0_LENGTH                     0x00000001

#define _IPC2_U1TXIP1_POSITION                   0x00000009
#define _IPC2_U1TXIP1_MASK                       0x00000200
#define _IPC2_U1TXIP1_LENGTH                     0x00000001

#define _IPC2_U1TXIP2_POSITION                   0x0000000A
#define _IPC2_U1TXIP2_MASK                       0x00000400
#define _IPC2_U1TXIP2_LENGTH                     0x00000001

#define _IPC2_ADIP0_POSITION                     0x0000000C
#define _IPC2_ADIP0_MASK                         0x00001000
#define _IPC2_ADIP0_LENGTH                       0x00000001

#define _IPC2_ADIP1_POSITION                     0x0000000D
#define _IPC2_ADIP1_MASK                         0x00002000
#define _IPC2_ADIP1_LENGTH                       0x00000001

#define _IPC2_ADIP2_POSITION                     0x0000000E
#define _IPC2_ADIP2_MASK                         0x00004000
#define _IPC2_ADIP2_LENGTH                       0x00000001

#define _IPC3_NVMIP_POSITION                     0x00000000
#define _IPC3_NVMIP_MASK                         0x00000007
#define _IPC3_NVMIP_LENGTH                       0x00000003

#define _IPC3_SI2CIP_POSITION                    0x00000004
#define _IPC3_SI2CIP_MASK                        0x00000070
#define _IPC3_SI2CIP_LENGTH                      0x00000003

#define _IPC3_MI2CIP_POSITION                    0x00000008
#define _IPC3_MI2CIP_MASK                        0x00000700
#define _IPC3_MI2CIP_LENGTH                      0x00000003

#define _IPC3_CNIP_POSITION                      0x0000000C
#define _IPC3_CNIP_MASK                          0x00007000
#define _IPC3_CNIP_LENGTH                        0x00000003

#define _IPC3_NVMIP0_POSITION                    0x00000000
#define _IPC3_NVMIP0_MASK                        0x00000001
#define _IPC3_NVMIP0_LENGTH                      0x00000001

#define _IPC3_NVMIP1_POSITION                    0x00000001
#define _IPC3_NVMIP1_MASK                        0x00000002
#define _IPC3_NVMIP1_LENGTH                      0x00000001

#define _IPC3_NVMIP2_POSITION                    0x00000002
#define _IPC3_NVMIP2_MASK                        0x00000004
#define _IPC3_NVMIP2_LENGTH                      0x00000001

#define _IPC3_SI2CIP0_POSITION                   0x00000004
#define _IPC3_SI2CIP0_MASK                       0x00000010
#define _IPC3_SI2CIP0_LENGTH                     0x00000001

#define _IPC3_SI2CIP1_POSITION                   0x00000005
#define _IPC3_SI2CIP1_MASK                       0x00000020
#define _IPC3_SI2CIP1_LENGTH                     0x00000001

#define _IPC3_SI2CIP2_POSITION                   0x00000006
#define _IPC3_SI2CIP2_MASK                       0x00000040
#define _IPC3_SI2CIP2_LENGTH                     0x00000001

#define _IPC3_MI2CIP0_POSITION                   0x00000008
#define _IPC3_MI2CIP0_MASK                       0x00000100
#define _IPC3_MI2CIP0_LENGTH                     0x00000001

#define _IPC3_MI2CIP1_POSITION                   0x00000009
#define _IPC3_MI2CIP1_MASK                       0x00000200
#define _IPC3_MI2CIP1_LENGTH                     0x00000001

#define _IPC3_MI2CIP2_POSITION                   0x0000000A
#define _IPC3_MI2CIP2_MASK                       0x00000400
#define _IPC3_MI2CIP2_LENGTH                     0x00000001

#define _IPC3_CNIP0_POSITION                     0x0000000C
#define _IPC3_CNIP0_MASK                         0x00001000
#define _IPC3_CNIP0_LENGTH                       0x00000001

#define _IPC3_CNIP1_POSITION                     0x0000000D
#define _IPC3_CNIP1_MASK                         0x00002000
#define _IPC3_CNIP1_LENGTH                       0x00000001

#define _IPC3_CNIP2_POSITION                     0x0000000E
#define _IPC3_CNIP2_MASK                         0x00004000
#define _IPC3_CNIP2_LENGTH                       0x00000001

#define _IPC4_INT1IP_POSITION                    0x00000000
#define _IPC4_INT1IP_MASK                        0x00000007
#define _IPC4_INT1IP_LENGTH                      0x00000003

#define _IPC4_OC3IP_POSITION                     0x0000000C
#define _IPC4_OC3IP_MASK                         0x00007000
#define _IPC4_OC3IP_LENGTH                       0x00000003

#define _IPC4_INT1IP0_POSITION                   0x00000000
#define _IPC4_INT1IP0_MASK                       0x00000001
#define _IPC4_INT1IP0_LENGTH                     0x00000001

#define _IPC4_INT1IP1_POSITION                   0x00000001
#define _IPC4_INT1IP1_MASK                       0x00000002
#define _IPC4_INT1IP1_LENGTH                     0x00000001

#define _IPC4_INT1IP2_POSITION                   0x00000002
#define _IPC4_INT1IP2_MASK                       0x00000004
#define _IPC4_INT1IP2_LENGTH                     0x00000001

#define _IPC4_OC3IP0_POSITION                    0x0000000C
#define _IPC4_OC3IP0_MASK                        0x00001000
#define _IPC4_OC3IP0_LENGTH                      0x00000001

#define _IPC4_OC3IP1_POSITION                    0x0000000D
#define _IPC4_OC3IP1_MASK                        0x00002000
#define _IPC4_OC3IP1_LENGTH                      0x00000001

#define _IPC4_OC3IP2_POSITION                    0x0000000E
#define _IPC4_OC3IP2_MASK                        0x00004000
#define _IPC4_OC3IP2_LENGTH                      0x00000001

#define _IPC5_OC4IP_POSITION                     0x00000000
#define _IPC5_OC4IP_MASK                         0x00000007
#define _IPC5_OC4IP_LENGTH                       0x00000003

#define _IPC5_T4IP_POSITION                      0x00000004
#define _IPC5_T4IP_MASK                          0x00000070
#define _IPC5_T4IP_LENGTH                        0x00000003

#define _IPC5_T5IP_POSITION                      0x00000008
#define _IPC5_T5IP_MASK                          0x00000700
#define _IPC5_T5IP_LENGTH                        0x00000003

#define _IPC5_INT2IP_POSITION                    0x0000000C
#define _IPC5_INT2IP_MASK                        0x00007000
#define _IPC5_INT2IP_LENGTH                      0x00000003

#define _IPC5_OC4IP0_POSITION                    0x00000000
#define _IPC5_OC4IP0_MASK                        0x00000001
#define _IPC5_OC4IP0_LENGTH                      0x00000001

#define _IPC5_OC4IP1_POSITION                    0x00000001
#define _IPC5_OC4IP1_MASK                        0x00000002
#define _IPC5_OC4IP1_LENGTH                      0x00000001

#define _IPC5_OC4IP2_POSITION                    0x00000002
#define _IPC5_OC4IP2_MASK                        0x00000004
#define _IPC5_OC4IP2_LENGTH                      0x00000001

#define _IPC5_T4IP0_POSITION                     0x00000004
#define _IPC5_T4IP0_MASK                         0x00000010
#define _IPC5_T4IP0_LENGTH                       0x00000001

#define _IPC5_T4IP1_POSITION                     0x00000005
#define _IPC5_T4IP1_MASK                         0x00000020
#define _IPC5_T4IP1_LENGTH                       0x00000001

#define _IPC5_T4IP2_POSITION                     0x00000006
#define _IPC5_T4IP2_MASK                         0x00000040
#define _IPC5_T4IP2_LENGTH                       0x00000001

#define _IPC5_T5IP0_POSITION                     0x00000008
#define _IPC5_T5IP0_MASK                         0x00000100
#define _IPC5_T5IP0_LENGTH                       0x00000001

#define _IPC5_T5IP1_POSITION                     0x00000009
#define _IPC5_T5IP1_MASK                         0x00000200
#define _IPC5_T5IP1_LENGTH                       0x00000001

#define _IPC5_T5IP2_POSITION                     0x0000000A
#define _IPC5_T5IP2_MASK                         0x00000400
#define _IPC5_T5IP2_LENGTH                       0x00000001

#define _IPC5_INT2IP0_POSITION                   0x0000000C
#define _IPC5_INT2IP0_MASK                       0x00001000
#define _IPC5_INT2IP0_LENGTH                     0x00000001

#define _IPC5_INT2IP1_POSITION                   0x0000000D
#define _IPC5_INT2IP1_MASK                       0x00002000
#define _IPC5_INT2IP1_LENGTH                     0x00000001

#define _IPC5_INT2IP2_POSITION                   0x0000000E
#define _IPC5_INT2IP2_MASK                       0x00004000
#define _IPC5_INT2IP2_LENGTH                     0x00000001

#define _IPC6_SPI2IP_POSITION                    0x00000008
#define _IPC6_SPI2IP_MASK                        0x00000700
#define _IPC6_SPI2IP_LENGTH                      0x00000003

#define _IPC6_C1IP_POSITION                      0x0000000C
#define _IPC6_C1IP_MASK                          0x00007000
#define _IPC6_C1IP_LENGTH                        0x00000003

#define _IPC6_SPI2IP0_POSITION                   0x00000008
#define _IPC6_SPI2IP0_MASK                       0x00000100
#define _IPC6_SPI2IP0_LENGTH                     0x00000001

#define _IPC6_SPI2IP1_POSITION                   0x00000009
#define _IPC6_SPI2IP1_MASK                       0x00000200
#define _IPC6_SPI2IP1_LENGTH                     0x00000001

#define _IPC6_SPI2IP2_POSITION                   0x0000000A
#define _IPC6_SPI2IP2_MASK                       0x00000400
#define _IPC6_SPI2IP2_LENGTH                     0x00000001

#define _IPC6_C1IP0_POSITION                     0x0000000C
#define _IPC6_C1IP0_MASK                         0x00001000
#define _IPC6_C1IP0_LENGTH                       0x00000001

#define _IPC6_C1IP1_POSITION                     0x0000000D
#define _IPC6_C1IP1_MASK                         0x00002000
#define _IPC6_C1IP1_LENGTH                       0x00000001

#define _IPC6_C1IP2_POSITION                     0x0000000E
#define _IPC6_C1IP2_MASK                         0x00004000
#define _IPC6_C1IP2_LENGTH                       0x00000001

#define _IPC7_IC3IP_POSITION                     0x00000000
#define _IPC7_IC3IP_MASK                         0x00000007
#define _IPC7_IC3IP_LENGTH                       0x00000003

#define _IPC7_IC4IP_POSITION                     0x00000004
#define _IPC7_IC4IP_MASK                         0x00000070
#define _IPC7_IC4IP_LENGTH                       0x00000003

#define _IPC7_IC3IP0_POSITION                    0x00000000
#define _IPC7_IC3IP0_MASK                        0x00000001
#define _IPC7_IC3IP0_LENGTH                      0x00000001

#define _IPC7_IC3IP1_POSITION                    0x00000001
#define _IPC7_IC3IP1_MASK                        0x00000002
#define _IPC7_IC3IP1_LENGTH                      0x00000001

#define _IPC7_IC3IP2_POSITION                    0x00000002
#define _IPC7_IC3IP2_MASK                        0x00000004
#define _IPC7_IC3IP2_LENGTH                      0x00000001

#define _IPC7_IC4IP0_POSITION                    0x00000004
#define _IPC7_IC4IP0_MASK                        0x00000010
#define _IPC7_IC4IP0_LENGTH                      0x00000001

#define _IPC7_IC4IP1_POSITION                    0x00000005
#define _IPC7_IC4IP1_MASK                        0x00000020
#define _IPC7_IC4IP1_LENGTH                      0x00000001

#define _IPC7_IC4IP2_POSITION                    0x00000006
#define _IPC7_IC4IP2_MASK                        0x00000040
#define _IPC7_IC4IP2_LENGTH                      0x00000001

#define _IPC9_INT3IP_POSITION                    0x00000000
#define _IPC9_INT3IP_MASK                        0x00000007
#define _IPC9_INT3IP_LENGTH                      0x00000003

#define _IPC9_INT4IP_POSITION                    0x00000004
#define _IPC9_INT4IP_MASK                        0x00000070
#define _IPC9_INT4IP_LENGTH                      0x00000003

#define _IPC9_PWMIP_POSITION                     0x0000000C
#define _IPC9_PWMIP_MASK                         0x00007000
#define _IPC9_PWMIP_LENGTH                       0x00000003

#define _IPC9_INT3IP0_POSITION                   0x00000000
#define _IPC9_INT3IP0_MASK                       0x00000001
#define _IPC9_INT3IP0_LENGTH                     0x00000001

#define _IPC9_INT3IP1_POSITION                   0x00000001
#define _IPC9_INT3IP1_MASK                       0x00000002
#define _IPC9_INT3IP1_LENGTH                     0x00000001

#define _IPC9_INT3IP2_POSITION                   0x00000002
#define _IPC9_INT3IP2_MASK                       0x00000004
#define _IPC9_INT3IP2_LENGTH                     0x00000001

#define _IPC9_INT4IP0_POSITION                   0x00000004
#define _IPC9_INT4IP0_MASK                       0x00000010
#define _IPC9_INT4IP0_LENGTH                     0x00000001

#define _IPC9_INT4IP1_POSITION                   0x00000005
#define _IPC9_INT4IP1_MASK                       0x00000020
#define _IPC9_INT4IP1_LENGTH                     0x00000001

#define _IPC9_INT4IP2_POSITION                   0x00000006
#define _IPC9_INT4IP2_MASK                       0x00000040
#define _IPC9_INT4IP2_LENGTH                     0x00000001

#define _IPC9_PWMIP0_POSITION                    0x0000000C
#define _IPC9_PWMIP0_MASK                        0x00001000
#define _IPC9_PWMIP0_LENGTH                      0x00000001

#define _IPC9_PWMIP1_POSITION                    0x0000000D
#define _IPC9_PWMIP1_MASK                        0x00002000
#define _IPC9_PWMIP1_LENGTH                      0x00000001

#define _IPC9_PWMIP2_POSITION                    0x0000000E
#define _IPC9_PWMIP2_MASK                        0x00004000
#define _IPC9_PWMIP2_LENGTH                      0x00000001

#define _IPC10_QEIIP_POSITION                    0x00000000
#define _IPC10_QEIIP_MASK                        0x00000007
#define _IPC10_QEIIP_LENGTH                      0x00000003

#define _IPC10_FLTAIP_POSITION                   0x0000000C
#define _IPC10_FLTAIP_MASK                       0x00007000
#define _IPC10_FLTAIP_LENGTH                     0x00000003

#define _IPC10_QEIIP0_POSITION                   0x00000000
#define _IPC10_QEIIP0_MASK                       0x00000001
#define _IPC10_QEIIP0_LENGTH                     0x00000001

#define _IPC10_QEIIP1_POSITION                   0x00000001
#define _IPC10_QEIIP1_MASK                       0x00000002
#define _IPC10_QEIIP1_LENGTH                     0x00000001

#define _IPC10_QEIIP2_POSITION                   0x00000002
#define _IPC10_QEIIP2_MASK                       0x00000004
#define _IPC10_QEIIP2_LENGTH                     0x00000001

#define _IPC10_FLTAIP0_POSITION                  0x0000000C
#define _IPC10_FLTAIP0_MASK                      0x00001000
#define _IPC10_FLTAIP0_LENGTH                    0x00000001

#define _IPC10_FLTAIP1_POSITION                  0x0000000D
#define _IPC10_FLTAIP1_MASK                      0x00002000
#define _IPC10_FLTAIP1_LENGTH                    0x00000001

#define _IPC10_FLTAIP2_POSITION                  0x0000000E
#define _IPC10_FLTAIP2_MASK                      0x00004000
#define _IPC10_FLTAIP2_LENGTH                    0x00000001

#define _IPC11_FLTBIP_POSITION                   0x00000000
#define _IPC11_FLTBIP_MASK                       0x00000007
#define _IPC11_FLTBIP_LENGTH                     0x00000003

#define _IPC11_FLTBIP0_POSITION                  0x00000000
#define _IPC11_FLTBIP0_MASK                      0x00000001
#define _IPC11_FLTBIP0_LENGTH                    0x00000001

#define _IPC11_FLTBIP1_POSITION                  0x00000001
#define _IPC11_FLTBIP1_MASK                      0x00000002
#define _IPC11_FLTBIP1_LENGTH                    0x00000001

#define _IPC11_FLTBIP2_POSITION                  0x00000002
#define _IPC11_FLTBIP2_MASK                      0x00000004
#define _IPC11_FLTBIP2_LENGTH                    0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000003F
#define _INTTREG_VECNUM_LENGTH                   0x00000006

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VHOLD_POSITION                  0x0000000D
#define _INTTREG_VHOLD_MASK                      0x00002000
#define _INTTREG_VHOLD_LENGTH                    0x00000001

#define _INTTREG_TMODE_POSITION                  0x0000000E
#define _INTTREG_TMODE_MASK                      0x00004000
#define _INTTREG_TMODE_LENGTH                    0x00000001

#define _INTTREG_IRQTOCPU_POSITION               0x0000000F
#define _INTTREG_IRQTOCPU_MASK                   0x00008000
#define _INTTREG_IRQTOCPU_LENGTH                 0x00000001

#define _INTTREG_VECNUM0_POSITION                0x00000000
#define _INTTREG_VECNUM0_MASK                    0x00000001
#define _INTTREG_VECNUM0_LENGTH                  0x00000001

#define _INTTREG_VECNUM1_POSITION                0x00000001
#define _INTTREG_VECNUM1_MASK                    0x00000002
#define _INTTREG_VECNUM1_LENGTH                  0x00000001

#define _INTTREG_VECNUM2_POSITION                0x00000002
#define _INTTREG_VECNUM2_MASK                    0x00000004
#define _INTTREG_VECNUM2_LENGTH                  0x00000001

#define _INTTREG_VECNUM3_POSITION                0x00000003
#define _INTTREG_VECNUM3_MASK                    0x00000008
#define _INTTREG_VECNUM3_LENGTH                  0x00000001

#define _INTTREG_VECNUM4_POSITION                0x00000004
#define _INTTREG_VECNUM4_MASK                    0x00000010
#define _INTTREG_VECNUM4_LENGTH                  0x00000001

#define _INTTREG_VECNUM5_POSITION                0x00000005
#define _INTTREG_VECNUM5_MASK                    0x00000020
#define _INTTREG_VECNUM5_LENGTH                  0x00000001

#define _INTTREG_ILR0_POSITION                   0x00000008
#define _INTTREG_ILR0_MASK                       0x00000100
#define _INTTREG_ILR0_LENGTH                     0x00000001

#define _INTTREG_ILR1_POSITION                   0x00000009
#define _INTTREG_ILR1_MASK                       0x00000200
#define _INTTREG_ILR1_LENGTH                     0x00000001

#define _INTTREG_ILR2_POSITION                   0x0000000A
#define _INTTREG_ILR2_MASK                       0x00000400
#define _INTTREG_ILR2_LENGTH                     0x00000001

#define _INTTREG_ILR3_POSITION                   0x0000000B
#define _INTTREG_ILR3_MASK                       0x00000800
#define _INTTREG_ILR3_LENGTH                     0x00000001

#define _CNEN1_CN0IE_POSITION                    0x00000000
#define _CNEN1_CN0IE_MASK                        0x00000001
#define _CNEN1_CN0IE_LENGTH                      0x00000001

#define _CNEN1_CN1IE_POSITION                    0x00000001
#define _CNEN1_CN1IE_MASK                        0x00000002
#define _CNEN1_CN1IE_LENGTH                      0x00000001

#define _CNEN1_CN2IE_POSITION                    0x00000002
#define _CNEN1_CN2IE_MASK                        0x00000004
#define _CNEN1_CN2IE_LENGTH                      0x00000001

#define _CNEN1_CN3IE_POSITION                    0x00000003
#define _CNEN1_CN3IE_MASK                        0x00000008
#define _CNEN1_CN3IE_LENGTH                      0x00000001

#define _CNEN1_CN4IE_POSITION                    0x00000004
#define _CNEN1_CN4IE_MASK                        0x00000010
#define _CNEN1_CN4IE_LENGTH                      0x00000001

#define _CNEN1_CN5IE_POSITION                    0x00000005
#define _CNEN1_CN5IE_MASK                        0x00000020
#define _CNEN1_CN5IE_LENGTH                      0x00000001

#define _CNEN1_CN6IE_POSITION                    0x00000006
#define _CNEN1_CN6IE_MASK                        0x00000040
#define _CNEN1_CN6IE_LENGTH                      0x00000001

#define _CNEN1_CN7IE_POSITION                    0x00000007
#define _CNEN1_CN7IE_MASK                        0x00000080
#define _CNEN1_CN7IE_LENGTH                      0x00000001

#define _CNEN1_CN8IE_POSITION                    0x00000008
#define _CNEN1_CN8IE_MASK                        0x00000100
#define _CNEN1_CN8IE_LENGTH                      0x00000001

#define _CNEN1_CN9IE_POSITION                    0x00000009
#define _CNEN1_CN9IE_MASK                        0x00000200
#define _CNEN1_CN9IE_LENGTH                      0x00000001

#define _CNEN1_CN10IE_POSITION                   0x0000000A
#define _CNEN1_CN10IE_MASK                       0x00000400
#define _CNEN1_CN10IE_LENGTH                     0x00000001

#define _CNEN1_CN11IE_POSITION                   0x0000000B
#define _CNEN1_CN11IE_MASK                       0x00000800
#define _CNEN1_CN11IE_LENGTH                     0x00000001

#define _CNEN1_CN12IE_POSITION                   0x0000000C
#define _CNEN1_CN12IE_MASK                       0x00001000
#define _CNEN1_CN12IE_LENGTH                     0x00000001

#define _CNEN1_CN13IE_POSITION                   0x0000000D
#define _CNEN1_CN13IE_MASK                       0x00002000
#define _CNEN1_CN13IE_LENGTH                     0x00000001

#define _CNEN1_CN14IE_POSITION                   0x0000000E
#define _CNEN1_CN14IE_MASK                       0x00004000
#define _CNEN1_CN14IE_LENGTH                     0x00000001

#define _CNEN1_CN15IE_POSITION                   0x0000000F
#define _CNEN1_CN15IE_MASK                       0x00008000
#define _CNEN1_CN15IE_LENGTH                     0x00000001

#define _CNEN2_CN16IE_POSITION                   0x00000000
#define _CNEN2_CN16IE_MASK                       0x00000001
#define _CNEN2_CN16IE_LENGTH                     0x00000001

#define _CNEN2_CN17IE_POSITION                   0x00000001
#define _CNEN2_CN17IE_MASK                       0x00000002
#define _CNEN2_CN17IE_LENGTH                     0x00000001

#define _CNEN2_CN18IE_POSITION                   0x00000002
#define _CNEN2_CN18IE_MASK                       0x00000004
#define _CNEN2_CN18IE_LENGTH                     0x00000001

#define _CNPU1_CN0PUE_POSITION                   0x00000000
#define _CNPU1_CN0PUE_MASK                       0x00000001
#define _CNPU1_CN0PUE_LENGTH                     0x00000001

#define _CNPU1_CN1PUE_POSITION                   0x00000001
#define _CNPU1_CN1PUE_MASK                       0x00000002
#define _CNPU1_CN1PUE_LENGTH                     0x00000001

#define _CNPU1_CN2PUE_POSITION                   0x00000002
#define _CNPU1_CN2PUE_MASK                       0x00000004
#define _CNPU1_CN2PUE_LENGTH                     0x00000001

#define _CNPU1_CN3PUE_POSITION                   0x00000003
#define _CNPU1_CN3PUE_MASK                       0x00000008
#define _CNPU1_CN3PUE_LENGTH                     0x00000001

#define _CNPU1_CN4PUE_POSITION                   0x00000004
#define _CNPU1_CN4PUE_MASK                       0x00000010
#define _CNPU1_CN4PUE_LENGTH                     0x00000001

#define _CNPU1_CN5PUE_POSITION                   0x00000005
#define _CNPU1_CN5PUE_MASK                       0x00000020
#define _CNPU1_CN5PUE_LENGTH                     0x00000001

#define _CNPU1_CN6PUE_POSITION                   0x00000006
#define _CNPU1_CN6PUE_MASK                       0x00000040
#define _CNPU1_CN6PUE_LENGTH                     0x00000001

#define _CNPU1_CN7PUE_POSITION                   0x00000007
#define _CNPU1_CN7PUE_MASK                       0x00000080
#define _CNPU1_CN7PUE_LENGTH                     0x00000001

#define _CNPU1_CN8PUE_POSITION                   0x00000008
#define _CNPU1_CN8PUE_MASK                       0x00000100
#define _CNPU1_CN8PUE_LENGTH                     0x00000001

#define _CNPU1_CN9PUE_POSITION                   0x00000009
#define _CNPU1_CN9PUE_MASK                       0x00000200
#define _CNPU1_CN9PUE_LENGTH                     0x00000001

#define _CNPU1_CN10PUE_POSITION                  0x0000000A
#define _CNPU1_CN10PUE_MASK                      0x00000400
#define _CNPU1_CN10PUE_LENGTH                    0x00000001

#define _CNPU1_CN11PUE_POSITION                  0x0000000B
#define _CNPU1_CN11PUE_MASK                      0x00000800
#define _CNPU1_CN11PUE_LENGTH                    0x00000001

#define _CNPU1_CN12PUE_POSITION                  0x0000000C
#define _CNPU1_CN12PUE_MASK                      0x00001000
#define _CNPU1_CN12PUE_LENGTH                    0x00000001

#define _CNPU1_CN13PUE_POSITION                  0x0000000D
#define _CNPU1_CN13PUE_MASK                      0x00002000
#define _CNPU1_CN13PUE_LENGTH                    0x00000001

#define _CNPU1_CN14PUE_POSITION                  0x0000000E
#define _CNPU1_CN14PUE_MASK                      0x00004000
#define _CNPU1_CN14PUE_LENGTH                    0x00000001

#define _CNPU1_CN15PUE_POSITION                  0x0000000F
#define _CNPU1_CN15PUE_MASK                      0x00008000
#define _CNPU1_CN15PUE_LENGTH                    0x00000001

#define _CNPU2_CN16PUE_POSITION                  0x00000000
#define _CNPU2_CN16PUE_MASK                      0x00000001
#define _CNPU2_CN16PUE_LENGTH                    0x00000001

#define _CNPU2_CN17PUE_POSITION                  0x00000001
#define _CNPU2_CN17PUE_MASK                      0x00000002
#define _CNPU2_CN17PUE_LENGTH                    0x00000001

#define _CNPU2_CN18PUE_POSITION                  0x00000002
#define _CNPU2_CN18PUE_MASK                      0x00000004
#define _CNPU2_CN18PUE_LENGTH                    0x00000001

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000006
#define _T1CON_TGATE_MASK                        0x00000040
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000030
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TGATE_POSITION                    0x00000006
#define _T2CON_TGATE_MASK                        0x00000040
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TGATE_POSITION                    0x00000006
#define _T3CON_TGATE_MASK                        0x00000040
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000030
#define _T4CON_TCKPS_LENGTH                      0x00000002

#define _T4CON_TGATE_POSITION                    0x00000006
#define _T4CON_TGATE_MASK                        0x00000040
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000030
#define _T5CON_TCKPS_LENGTH                      0x00000002

#define _T5CON_TGATE_POSITION                    0x00000006
#define _T5CON_TGATE_MASK                        0x00000040
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _QEICON_UPDN_SRC_POSITION                0x00000000
#define _QEICON_UPDN_SRC_MASK                    0x00000001
#define _QEICON_UPDN_SRC_LENGTH                  0x00000001

#define _QEICON_TQCS_POSITION                    0x00000001
#define _QEICON_TQCS_MASK                        0x00000002
#define _QEICON_TQCS_LENGTH                      0x00000001

#define _QEICON_POSRES_POSITION                  0x00000002
#define _QEICON_POSRES_MASK                      0x00000004
#define _QEICON_POSRES_LENGTH                    0x00000001

#define _QEICON_TQCKPS0_POSITION                 0x00000003
#define _QEICON_TQCKPS0_MASK                     0x00000008
#define _QEICON_TQCKPS0_LENGTH                   0x00000001

#define _QEICON_TQCKPS1_POSITION                 0x00000004
#define _QEICON_TQCKPS1_MASK                     0x00000010
#define _QEICON_TQCKPS1_LENGTH                   0x00000001

#define _QEICON_TQGATE_POSITION                  0x00000005
#define _QEICON_TQGATE_MASK                      0x00000020
#define _QEICON_TQGATE_LENGTH                    0x00000001

#define _QEICON_PCDOUT_POSITION                  0x00000006
#define _QEICON_PCDOUT_MASK                      0x00000040
#define _QEICON_PCDOUT_LENGTH                    0x00000001

#define _QEICON_SWPAB_POSITION                   0x00000007
#define _QEICON_SWPAB_MASK                       0x00000080
#define _QEICON_SWPAB_LENGTH                     0x00000001

#define _QEICON_QEIM0_POSITION                   0x00000008
#define _QEICON_QEIM0_MASK                       0x00000100
#define _QEICON_QEIM0_LENGTH                     0x00000001

#define _QEICON_QEIM1_POSITION                   0x00000009
#define _QEICON_QEIM1_MASK                       0x00000200
#define _QEICON_QEIM1_LENGTH                     0x00000001

#define _QEICON_QEIM2_POSITION                   0x0000000A
#define _QEICON_QEIM2_MASK                       0x00000400
#define _QEICON_QEIM2_LENGTH                     0x00000001

#define _QEICON_UPDN_POSITION                    0x0000000B
#define _QEICON_UPDN_MASK                        0x00000800
#define _QEICON_UPDN_LENGTH                      0x00000001

#define _QEICON_INDX_POSITION                    0x0000000C
#define _QEICON_INDX_MASK                        0x00001000
#define _QEICON_INDX_LENGTH                      0x00000001

#define _QEICON_QEISIDL_POSITION                 0x0000000D
#define _QEICON_QEISIDL_MASK                     0x00002000
#define _QEICON_QEISIDL_LENGTH                   0x00000001

#define _QEICON_CNTERR_POSITION                  0x0000000F
#define _QEICON_CNTERR_MASK                      0x00008000
#define _QEICON_CNTERR_LENGTH                    0x00000001

#define _QEICON_TQCKPS_POSITION                  0x00000003
#define _QEICON_TQCKPS_MASK                      0x00000018
#define _QEICON_TQCKPS_LENGTH                    0x00000002

#define _QEICON_QEIM_POSITION                    0x00000008
#define _QEICON_QEIM_MASK                        0x00000700
#define _QEICON_QEIM_LENGTH                      0x00000003

#define _DFLTCON_QECK0_POSITION                  0x00000004
#define _DFLTCON_QECK0_MASK                      0x00000010
#define _DFLTCON_QECK0_LENGTH                    0x00000001

#define _DFLTCON_QECK1_POSITION                  0x00000005
#define _DFLTCON_QECK1_MASK                      0x00000020
#define _DFLTCON_QECK1_LENGTH                    0x00000001

#define _DFLTCON_QECK2_POSITION                  0x00000006
#define _DFLTCON_QECK2_MASK                      0x00000040
#define _DFLTCON_QECK2_LENGTH                    0x00000001

#define _DFLTCON_QEOUT_POSITION                  0x00000007
#define _DFLTCON_QEOUT_MASK                      0x00000080
#define _DFLTCON_QEOUT_LENGTH                    0x00000001

#define _DFLTCON_CEID_POSITION                   0x00000008
#define _DFLTCON_CEID_MASK                       0x00000100
#define _DFLTCON_CEID_LENGTH                     0x00000001

#define _DFLTCON_IMV0_POSITION                   0x00000009
#define _DFLTCON_IMV0_MASK                       0x00000200
#define _DFLTCON_IMV0_LENGTH                     0x00000001

#define _DFLTCON_IMV1_POSITION                   0x0000000A
#define _DFLTCON_IMV1_MASK                       0x00000400
#define _DFLTCON_IMV1_LENGTH                     0x00000001

#define _DFLTCON_QECK_POSITION                   0x00000004
#define _DFLTCON_QECK_MASK                       0x00000070
#define _DFLTCON_QECK_LENGTH                     0x00000003

#define _DFLTCON_IMV_POSITION                    0x00000009
#define _DFLTCON_IMV_MASK                        0x00000600
#define _DFLTCON_IMV_LENGTH                      0x00000002

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC3CON_ICM_POSITION                     0x00000000
#define _IC3CON_ICM_MASK                         0x00000007
#define _IC3CON_ICM_LENGTH                       0x00000003

#define _IC3CON_ICBNE_POSITION                   0x00000003
#define _IC3CON_ICBNE_MASK                       0x00000008
#define _IC3CON_ICBNE_LENGTH                     0x00000001

#define _IC3CON_ICOV_POSITION                    0x00000004
#define _IC3CON_ICOV_MASK                        0x00000010
#define _IC3CON_ICOV_LENGTH                      0x00000001

#define _IC3CON_ICI_POSITION                     0x00000005
#define _IC3CON_ICI_MASK                         0x00000060
#define _IC3CON_ICI_LENGTH                       0x00000002

#define _IC3CON_ICTMR_POSITION                   0x00000007
#define _IC3CON_ICTMR_MASK                       0x00000080
#define _IC3CON_ICTMR_LENGTH                     0x00000001

#define _IC3CON_ICSIDL_POSITION                  0x0000000D
#define _IC3CON_ICSIDL_MASK                      0x00002000
#define _IC3CON_ICSIDL_LENGTH                    0x00000001

#define _IC3CON_ICM0_POSITION                    0x00000000
#define _IC3CON_ICM0_MASK                        0x00000001
#define _IC3CON_ICM0_LENGTH                      0x00000001

#define _IC3CON_ICM1_POSITION                    0x00000001
#define _IC3CON_ICM1_MASK                        0x00000002
#define _IC3CON_ICM1_LENGTH                      0x00000001

#define _IC3CON_ICM2_POSITION                    0x00000002
#define _IC3CON_ICM2_MASK                        0x00000004
#define _IC3CON_ICM2_LENGTH                      0x00000001

#define _IC3CON_ICI0_POSITION                    0x00000005
#define _IC3CON_ICI0_MASK                        0x00000020
#define _IC3CON_ICI0_LENGTH                      0x00000001

#define _IC3CON_ICI1_POSITION                    0x00000006
#define _IC3CON_ICI1_MASK                        0x00000040
#define _IC3CON_ICI1_LENGTH                      0x00000001

#define _IC4CON_ICM_POSITION                     0x00000000
#define _IC4CON_ICM_MASK                         0x00000007
#define _IC4CON_ICM_LENGTH                       0x00000003

#define _IC4CON_ICBNE_POSITION                   0x00000003
#define _IC4CON_ICBNE_MASK                       0x00000008
#define _IC4CON_ICBNE_LENGTH                     0x00000001

#define _IC4CON_ICOV_POSITION                    0x00000004
#define _IC4CON_ICOV_MASK                        0x00000010
#define _IC4CON_ICOV_LENGTH                      0x00000001

#define _IC4CON_ICI_POSITION                     0x00000005
#define _IC4CON_ICI_MASK                         0x00000060
#define _IC4CON_ICI_LENGTH                       0x00000002

#define _IC4CON_ICTMR_POSITION                   0x00000007
#define _IC4CON_ICTMR_MASK                       0x00000080
#define _IC4CON_ICTMR_LENGTH                     0x00000001

#define _IC4CON_ICSIDL_POSITION                  0x0000000D
#define _IC4CON_ICSIDL_MASK                      0x00002000
#define _IC4CON_ICSIDL_LENGTH                    0x00000001

#define _IC4CON_ICM0_POSITION                    0x00000000
#define _IC4CON_ICM0_MASK                        0x00000001
#define _IC4CON_ICM0_LENGTH                      0x00000001

#define _IC4CON_ICM1_POSITION                    0x00000001
#define _IC4CON_ICM1_MASK                        0x00000002
#define _IC4CON_ICM1_LENGTH                      0x00000001

#define _IC4CON_ICM2_POSITION                    0x00000002
#define _IC4CON_ICM2_MASK                        0x00000004
#define _IC4CON_ICM2_LENGTH                      0x00000001

#define _IC4CON_ICI0_POSITION                    0x00000005
#define _IC4CON_ICI0_MASK                        0x00000020
#define _IC4CON_ICI0_LENGTH                      0x00000001

#define _IC4CON_ICI1_POSITION                    0x00000006
#define _IC4CON_ICI1_MASK                        0x00000040
#define _IC4CON_ICI1_LENGTH                      0x00000001

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _PTCON_PTMOD_POSITION                    0x00000000
#define _PTCON_PTMOD_MASK                        0x00000003
#define _PTCON_PTMOD_LENGTH                      0x00000002

#define _PTCON_PTCKPS_POSITION                   0x00000002
#define _PTCON_PTCKPS_MASK                       0x0000000C
#define _PTCON_PTCKPS_LENGTH                     0x00000002

#define _PTCON_PTOPS_POSITION                    0x00000004
#define _PTCON_PTOPS_MASK                        0x000000F0
#define _PTCON_PTOPS_LENGTH                      0x00000004

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_PTMOD0_POSITION                   0x00000000
#define _PTCON_PTMOD0_MASK                       0x00000001
#define _PTCON_PTMOD0_LENGTH                     0x00000001

#define _PTCON_PTMOD1_POSITION                   0x00000001
#define _PTCON_PTMOD1_MASK                       0x00000002
#define _PTCON_PTMOD1_LENGTH                     0x00000001

#define _PTCON_PTCKPS0_POSITION                  0x00000002
#define _PTCON_PTCKPS0_MASK                      0x00000004
#define _PTCON_PTCKPS0_LENGTH                    0x00000001

#define _PTCON_PTCKPS1_POSITION                  0x00000003
#define _PTCON_PTCKPS1_MASK                      0x00000008
#define _PTCON_PTCKPS1_LENGTH                    0x00000001

#define _PTCON_PTOPS0_POSITION                   0x00000004
#define _PTCON_PTOPS0_MASK                       0x00000010
#define _PTCON_PTOPS0_LENGTH                     0x00000001

#define _PTCON_PTOPS1_POSITION                   0x00000005
#define _PTCON_PTOPS1_MASK                       0x00000020
#define _PTCON_PTOPS1_LENGTH                     0x00000001

#define _PTCON_PTOPS2_POSITION                   0x00000006
#define _PTCON_PTOPS2_MASK                       0x00000040
#define _PTCON_PTOPS2_LENGTH                     0x00000001

#define _PTCON_PTOPS3_POSITION                   0x00000007
#define _PTCON_PTOPS3_MASK                       0x00000080
#define _PTCON_PTOPS3_LENGTH                     0x00000001

#define _PTMR_PTMR_POSITION                      0x00000000
#define _PTMR_PTMR_MASK                          0x00007FFF
#define _PTMR_PTMR_LENGTH                        0x0000000F

#define _PTMR_PTDIR_POSITION                     0x0000000F
#define _PTMR_PTDIR_MASK                         0x00008000
#define _PTMR_PTDIR_LENGTH                       0x00000001

#define _PTPER_PTPER_POSITION                    0x00000000
#define _PTPER_PTPER_MASK                        0x00007FFF
#define _PTPER_PTPER_LENGTH                      0x0000000F

#define _SEVTCMP_SEVTCMP_POSITION                0x00000000
#define _SEVTCMP_SEVTCMP_MASK                    0x00007FFF
#define _SEVTCMP_SEVTCMP_LENGTH                  0x0000000F

#define _SEVTCMP_SEVTDIR_POSITION                0x0000000F
#define _SEVTCMP_SEVTDIR_MASK                    0x00008000
#define _SEVTCMP_SEVTDIR_LENGTH                  0x00000001

#define _PWMCON1_PEN1L_POSITION                  0x00000000
#define _PWMCON1_PEN1L_MASK                      0x00000001
#define _PWMCON1_PEN1L_LENGTH                    0x00000001

#define _PWMCON1_PEN2L_POSITION                  0x00000001
#define _PWMCON1_PEN2L_MASK                      0x00000002
#define _PWMCON1_PEN2L_LENGTH                    0x00000001

#define _PWMCON1_PEN3L_POSITION                  0x00000002
#define _PWMCON1_PEN3L_MASK                      0x00000004
#define _PWMCON1_PEN3L_LENGTH                    0x00000001

#define _PWMCON1_PEN4L_POSITION                  0x00000003
#define _PWMCON1_PEN4L_MASK                      0x00000008
#define _PWMCON1_PEN4L_LENGTH                    0x00000001

#define _PWMCON1_PEN1H_POSITION                  0x00000004
#define _PWMCON1_PEN1H_MASK                      0x00000010
#define _PWMCON1_PEN1H_LENGTH                    0x00000001

#define _PWMCON1_PEN2H_POSITION                  0x00000005
#define _PWMCON1_PEN2H_MASK                      0x00000020
#define _PWMCON1_PEN2H_LENGTH                    0x00000001

#define _PWMCON1_PEN3H_POSITION                  0x00000006
#define _PWMCON1_PEN3H_MASK                      0x00000040
#define _PWMCON1_PEN3H_LENGTH                    0x00000001

#define _PWMCON1_PEN4H_POSITION                  0x00000007
#define _PWMCON1_PEN4H_MASK                      0x00000080
#define _PWMCON1_PEN4H_LENGTH                    0x00000001

#define _PWMCON1_PTMOD1_POSITION                 0x00000008
#define _PWMCON1_PTMOD1_MASK                     0x00000100
#define _PWMCON1_PTMOD1_LENGTH                   0x00000001

#define _PWMCON1_PTMOD2_POSITION                 0x00000009
#define _PWMCON1_PTMOD2_MASK                     0x00000200
#define _PWMCON1_PTMOD2_LENGTH                   0x00000001

#define _PWMCON1_PTMOD3_POSITION                 0x0000000A
#define _PWMCON1_PTMOD3_MASK                     0x00000400
#define _PWMCON1_PTMOD3_LENGTH                   0x00000001

#define _PWMCON1_PTMOD4_POSITION                 0x0000000B
#define _PWMCON1_PTMOD4_MASK                     0x00000800
#define _PWMCON1_PTMOD4_LENGTH                   0x00000001

#define _PWMCON1_PMOD1_POSITION                  0x00000008
#define _PWMCON1_PMOD1_MASK                      0x00000100
#define _PWMCON1_PMOD1_LENGTH                    0x00000001

#define _PWMCON1_PMOD2_POSITION                  0x00000009
#define _PWMCON1_PMOD2_MASK                      0x00000200
#define _PWMCON1_PMOD2_LENGTH                    0x00000001

#define _PWMCON1_PMOD3_POSITION                  0x0000000A
#define _PWMCON1_PMOD3_MASK                      0x00000400
#define _PWMCON1_PMOD3_LENGTH                    0x00000001

#define _PWMCON1_PMOD4_POSITION                  0x0000000B
#define _PWMCON1_PMOD4_MASK                      0x00000800
#define _PWMCON1_PMOD4_LENGTH                    0x00000001

#define _PWMCON2_UDIS_POSITION                   0x00000000
#define _PWMCON2_UDIS_MASK                       0x00000001
#define _PWMCON2_UDIS_LENGTH                     0x00000001

#define _PWMCON2_OSYNC_POSITION                  0x00000001
#define _PWMCON2_OSYNC_MASK                      0x00000002
#define _PWMCON2_OSYNC_LENGTH                    0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000002
#define _PWMCON2_IUE_MASK                        0x00000004
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_SEVOPS_POSITION                 0x00000008
#define _PWMCON2_SEVOPS_MASK                     0x00000F00
#define _PWMCON2_SEVOPS_LENGTH                   0x00000004

#define _PWMCON2_SEVOPS0_POSITION                0x00000008
#define _PWMCON2_SEVOPS0_MASK                    0x00000100
#define _PWMCON2_SEVOPS0_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS1_POSITION                0x00000009
#define _PWMCON2_SEVOPS1_MASK                    0x00000200
#define _PWMCON2_SEVOPS1_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS2_POSITION                0x0000000A
#define _PWMCON2_SEVOPS2_MASK                    0x00000400
#define _PWMCON2_SEVOPS2_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS3_POSITION                0x0000000B
#define _PWMCON2_SEVOPS3_MASK                    0x00000800
#define _PWMCON2_SEVOPS3_LENGTH                  0x00000001

#define _DTCON1_DTA_POSITION                     0x00000000
#define _DTCON1_DTA_MASK                         0x0000003F
#define _DTCON1_DTA_LENGTH                       0x00000006

#define _DTCON1_DTAPS_POSITION                   0x00000006
#define _DTCON1_DTAPS_MASK                       0x000000C0
#define _DTCON1_DTAPS_LENGTH                     0x00000002

#define _DTCON1_DTB_POSITION                     0x00000008
#define _DTCON1_DTB_MASK                         0x00003F00
#define _DTCON1_DTB_LENGTH                       0x00000006

#define _DTCON1_DTBPS_POSITION                   0x0000000E
#define _DTCON1_DTBPS_MASK                       0x0000C000
#define _DTCON1_DTBPS_LENGTH                     0x00000002

#define _DTCON1_DTA0_POSITION                    0x00000000
#define _DTCON1_DTA0_MASK                        0x00000001
#define _DTCON1_DTA0_LENGTH                      0x00000001

#define _DTCON1_DTA1_POSITION                    0x00000001
#define _DTCON1_DTA1_MASK                        0x00000002
#define _DTCON1_DTA1_LENGTH                      0x00000001

#define _DTCON1_DTA2_POSITION                    0x00000002
#define _DTCON1_DTA2_MASK                        0x00000004
#define _DTCON1_DTA2_LENGTH                      0x00000001

#define _DTCON1_DTA3_POSITION                    0x00000003
#define _DTCON1_DTA3_MASK                        0x00000008
#define _DTCON1_DTA3_LENGTH                      0x00000001

#define _DTCON1_DTA4_POSITION                    0x00000004
#define _DTCON1_DTA4_MASK                        0x00000010
#define _DTCON1_DTA4_LENGTH                      0x00000001

#define _DTCON1_DTA5_POSITION                    0x00000005
#define _DTCON1_DTA5_MASK                        0x00000020
#define _DTCON1_DTA5_LENGTH                      0x00000001

#define _DTCON1_DTAPS0_POSITION                  0x00000006
#define _DTCON1_DTAPS0_MASK                      0x00000040
#define _DTCON1_DTAPS0_LENGTH                    0x00000001

#define _DTCON1_DTAPS1_POSITION                  0x00000007
#define _DTCON1_DTAPS1_MASK                      0x00000080
#define _DTCON1_DTAPS1_LENGTH                    0x00000001

#define _DTCON1_DTB0_POSITION                    0x00000008
#define _DTCON1_DTB0_MASK                        0x00000100
#define _DTCON1_DTB0_LENGTH                      0x00000001

#define _DTCON1_DTB1_POSITION                    0x00000009
#define _DTCON1_DTB1_MASK                        0x00000200
#define _DTCON1_DTB1_LENGTH                      0x00000001

#define _DTCON1_DTB2_POSITION                    0x0000000A
#define _DTCON1_DTB2_MASK                        0x00000400
#define _DTCON1_DTB2_LENGTH                      0x00000001

#define _DTCON1_DTB3_POSITION                    0x0000000B
#define _DTCON1_DTB3_MASK                        0x00000800
#define _DTCON1_DTB3_LENGTH                      0x00000001

#define _DTCON1_DTB4_POSITION                    0x0000000C
#define _DTCON1_DTB4_MASK                        0x00001000
#define _DTCON1_DTB4_LENGTH                      0x00000001

#define _DTCON1_DTB5_POSITION                    0x0000000D
#define _DTCON1_DTB5_MASK                        0x00002000
#define _DTCON1_DTB5_LENGTH                      0x00000001

#define _DTCON1_DTBPS0_POSITION                  0x0000000E
#define _DTCON1_DTBPS0_MASK                      0x00004000
#define _DTCON1_DTBPS0_LENGTH                    0x00000001

#define _DTCON1_DTBPS1_POSITION                  0x0000000F
#define _DTCON1_DTBPS1_MASK                      0x00008000
#define _DTCON1_DTBPS1_LENGTH                    0x00000001

#define _DTCON2_DTS1I_POSITION                   0x00000000
#define _DTCON2_DTS1I_MASK                       0x00000001
#define _DTCON2_DTS1I_LENGTH                     0x00000001

#define _DTCON2_DTS1A_POSITION                   0x00000001
#define _DTCON2_DTS1A_MASK                       0x00000002
#define _DTCON2_DTS1A_LENGTH                     0x00000001

#define _DTCON2_DTS2I_POSITION                   0x00000002
#define _DTCON2_DTS2I_MASK                       0x00000004
#define _DTCON2_DTS2I_LENGTH                     0x00000001

#define _DTCON2_DTS2A_POSITION                   0x00000003
#define _DTCON2_DTS2A_MASK                       0x00000008
#define _DTCON2_DTS2A_LENGTH                     0x00000001

#define _DTCON2_DTS3I_POSITION                   0x00000004
#define _DTCON2_DTS3I_MASK                       0x00000010
#define _DTCON2_DTS3I_LENGTH                     0x00000001

#define _DTCON2_DTS3A_POSITION                   0x00000005
#define _DTCON2_DTS3A_MASK                       0x00000020
#define _DTCON2_DTS3A_LENGTH                     0x00000001

#define _DTCON2_DTS4I_POSITION                   0x00000006
#define _DTCON2_DTS4I_MASK                       0x00000040
#define _DTCON2_DTS4I_LENGTH                     0x00000001

#define _DTCON2_DTS4A_POSITION                   0x00000007
#define _DTCON2_DTS4A_MASK                       0x00000080
#define _DTCON2_DTS4A_LENGTH                     0x00000001

#define _FLTACON_FAEN1_POSITION                  0x00000000
#define _FLTACON_FAEN1_MASK                      0x00000001
#define _FLTACON_FAEN1_LENGTH                    0x00000001

#define _FLTACON_FAEN2_POSITION                  0x00000001
#define _FLTACON_FAEN2_MASK                      0x00000002
#define _FLTACON_FAEN2_LENGTH                    0x00000001

#define _FLTACON_FAEN3_POSITION                  0x00000002
#define _FLTACON_FAEN3_MASK                      0x00000004
#define _FLTACON_FAEN3_LENGTH                    0x00000001

#define _FLTACON_FAEN4_POSITION                  0x00000003
#define _FLTACON_FAEN4_MASK                      0x00000008
#define _FLTACON_FAEN4_LENGTH                    0x00000001

#define _FLTACON_FLTAM_POSITION                  0x00000007
#define _FLTACON_FLTAM_MASK                      0x00000080
#define _FLTACON_FLTAM_LENGTH                    0x00000001

#define _FLTACON_FAOV1L_POSITION                 0x00000008
#define _FLTACON_FAOV1L_MASK                     0x00000100
#define _FLTACON_FAOV1L_LENGTH                   0x00000001

#define _FLTACON_FAOV1H_POSITION                 0x00000009
#define _FLTACON_FAOV1H_MASK                     0x00000200
#define _FLTACON_FAOV1H_LENGTH                   0x00000001

#define _FLTACON_FAOV2L_POSITION                 0x0000000A
#define _FLTACON_FAOV2L_MASK                     0x00000400
#define _FLTACON_FAOV2L_LENGTH                   0x00000001

#define _FLTACON_FAOV2H_POSITION                 0x0000000B
#define _FLTACON_FAOV2H_MASK                     0x00000800
#define _FLTACON_FAOV2H_LENGTH                   0x00000001

#define _FLTACON_FAOV3L_POSITION                 0x0000000C
#define _FLTACON_FAOV3L_MASK                     0x00001000
#define _FLTACON_FAOV3L_LENGTH                   0x00000001

#define _FLTACON_FAOV3H_POSITION                 0x0000000D
#define _FLTACON_FAOV3H_MASK                     0x00002000
#define _FLTACON_FAOV3H_LENGTH                   0x00000001

#define _FLTACON_FAOV4L_POSITION                 0x0000000E
#define _FLTACON_FAOV4L_MASK                     0x00004000
#define _FLTACON_FAOV4L_LENGTH                   0x00000001

#define _FLTACON_FAOV4H_POSITION                 0x0000000F
#define _FLTACON_FAOV4H_MASK                     0x00008000
#define _FLTACON_FAOV4H_LENGTH                   0x00000001

#define _FLTBCON_FBEN1_POSITION                  0x00000000
#define _FLTBCON_FBEN1_MASK                      0x00000001
#define _FLTBCON_FBEN1_LENGTH                    0x00000001

#define _FLTBCON_FBEN2_POSITION                  0x00000001
#define _FLTBCON_FBEN2_MASK                      0x00000002
#define _FLTBCON_FBEN2_LENGTH                    0x00000001

#define _FLTBCON_FBEN3_POSITION                  0x00000002
#define _FLTBCON_FBEN3_MASK                      0x00000004
#define _FLTBCON_FBEN3_LENGTH                    0x00000001

#define _FLTBCON_FBEN4_POSITION                  0x00000003
#define _FLTBCON_FBEN4_MASK                      0x00000008
#define _FLTBCON_FBEN4_LENGTH                    0x00000001

#define _FLTBCON_FLTBM_POSITION                  0x00000007
#define _FLTBCON_FLTBM_MASK                      0x00000080
#define _FLTBCON_FLTBM_LENGTH                    0x00000001

#define _FLTBCON_FBOV1L_POSITION                 0x00000008
#define _FLTBCON_FBOV1L_MASK                     0x00000100
#define _FLTBCON_FBOV1L_LENGTH                   0x00000001

#define _FLTBCON_FBOV1H_POSITION                 0x00000009
#define _FLTBCON_FBOV1H_MASK                     0x00000200
#define _FLTBCON_FBOV1H_LENGTH                   0x00000001

#define _FLTBCON_FBOV2L_POSITION                 0x0000000A
#define _FLTBCON_FBOV2L_MASK                     0x00000400
#define _FLTBCON_FBOV2L_LENGTH                   0x00000001

#define _FLTBCON_FBOV2H_POSITION                 0x0000000B
#define _FLTBCON_FBOV2H_MASK                     0x00000800
#define _FLTBCON_FBOV2H_LENGTH                   0x00000001

#define _FLTBCON_FBOV3L_POSITION                 0x0000000C
#define _FLTBCON_FBOV3L_MASK                     0x00001000
#define _FLTBCON_FBOV3L_LENGTH                   0x00000001

#define _FLTBCON_FBOV3H_POSITION                 0x0000000D
#define _FLTBCON_FBOV3H_MASK                     0x00002000
#define _FLTBCON_FBOV3H_LENGTH                   0x00000001

#define _FLTBCON_FBOV4L_POSITION                 0x0000000E
#define _FLTBCON_FBOV4L_MASK                     0x00004000
#define _FLTBCON_FBOV4L_LENGTH                   0x00000001

#define _FLTBCON_FBOV4H_POSITION                 0x0000000F
#define _FLTBCON_FBOV4H_MASK                     0x00008000
#define _FLTBCON_FBOV4H_LENGTH                   0x00000001

#define _OVDCON_POUT1L_POSITION                  0x00000000
#define _OVDCON_POUT1L_MASK                      0x00000001
#define _OVDCON_POUT1L_LENGTH                    0x00000001

#define _OVDCON_POUT1H_POSITION                  0x00000001
#define _OVDCON_POUT1H_MASK                      0x00000002
#define _OVDCON_POUT1H_LENGTH                    0x00000001

#define _OVDCON_POUT2L_POSITION                  0x00000002
#define _OVDCON_POUT2L_MASK                      0x00000004
#define _OVDCON_POUT2L_LENGTH                    0x00000001

#define _OVDCON_POUT2H_POSITION                  0x00000003
#define _OVDCON_POUT2H_MASK                      0x00000008
#define _OVDCON_POUT2H_LENGTH                    0x00000001

#define _OVDCON_POUT3L_POSITION                  0x00000004
#define _OVDCON_POUT3L_MASK                      0x00000010
#define _OVDCON_POUT3L_LENGTH                    0x00000001

#define _OVDCON_POUT3H_POSITION                  0x00000005
#define _OVDCON_POUT3H_MASK                      0x00000020
#define _OVDCON_POUT3H_LENGTH                    0x00000001

#define _OVDCON_POUT4L_POSITION                  0x00000006
#define _OVDCON_POUT4L_MASK                      0x00000040
#define _OVDCON_POUT4L_LENGTH                    0x00000001

#define _OVDCON_POUT4H_POSITION                  0x00000007
#define _OVDCON_POUT4H_MASK                      0x00000080
#define _OVDCON_POUT4H_LENGTH                    0x00000001

#define _OVDCON_POVD1L_POSITION                  0x00000008
#define _OVDCON_POVD1L_MASK                      0x00000100
#define _OVDCON_POVD1L_LENGTH                    0x00000001

#define _OVDCON_POVD1H_POSITION                  0x00000009
#define _OVDCON_POVD1H_MASK                      0x00000200
#define _OVDCON_POVD1H_LENGTH                    0x00000001

#define _OVDCON_POVD2L_POSITION                  0x0000000A
#define _OVDCON_POVD2L_MASK                      0x00000400
#define _OVDCON_POVD2L_LENGTH                    0x00000001

#define _OVDCON_POVD2H_POSITION                  0x0000000B
#define _OVDCON_POVD2H_MASK                      0x00000800
#define _OVDCON_POVD2H_LENGTH                    0x00000001

#define _OVDCON_POVD3L_POSITION                  0x0000000C
#define _OVDCON_POVD3L_MASK                      0x00001000
#define _OVDCON_POVD3L_LENGTH                    0x00000001

#define _OVDCON_POVD3H_POSITION                  0x0000000D
#define _OVDCON_POVD3H_MASK                      0x00002000
#define _OVDCON_POVD3H_LENGTH                    0x00000001

#define _OVDCON_POVD4L_POSITION                  0x0000000E
#define _OVDCON_POVD4L_MASK                      0x00004000
#define _OVDCON_POVD4L_LENGTH                    0x00000001

#define _OVDCON_POVD4H_POSITION                  0x0000000F
#define _OVDCON_POVD4H_MASK                      0x00008000
#define _OVDCON_POVD4H_LENGTH                    0x00000001

#define _I2CRCV_I2CRCV_POSITION                  0x00000000
#define _I2CRCV_I2CRCV_MASK                      0x000000FF
#define _I2CRCV_I2CRCV_LENGTH                    0x00000008

#define _I2CRCV_I2CRCV0_POSITION                 0x00000000
#define _I2CRCV_I2CRCV0_MASK                     0x00000001
#define _I2CRCV_I2CRCV0_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV1_POSITION                 0x00000001
#define _I2CRCV_I2CRCV1_MASK                     0x00000002
#define _I2CRCV_I2CRCV1_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV2_POSITION                 0x00000002
#define _I2CRCV_I2CRCV2_MASK                     0x00000004
#define _I2CRCV_I2CRCV2_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV3_POSITION                 0x00000003
#define _I2CRCV_I2CRCV3_MASK                     0x00000008
#define _I2CRCV_I2CRCV3_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV4_POSITION                 0x00000004
#define _I2CRCV_I2CRCV4_MASK                     0x00000010
#define _I2CRCV_I2CRCV4_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV5_POSITION                 0x00000005
#define _I2CRCV_I2CRCV5_MASK                     0x00000020
#define _I2CRCV_I2CRCV5_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV6_POSITION                 0x00000006
#define _I2CRCV_I2CRCV6_MASK                     0x00000040
#define _I2CRCV_I2CRCV6_LENGTH                   0x00000001

#define _I2CRCV_I2CRCV7_POSITION                 0x00000007
#define _I2CRCV_I2CRCV7_MASK                     0x00000080
#define _I2CRCV_I2CRCV7_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN_POSITION                  0x00000000
#define _I2CTRN_I2CTRN_MASK                      0x000000FF
#define _I2CTRN_I2CTRN_LENGTH                    0x00000008

#define _I2CTRN_I2CTRN0_POSITION                 0x00000000
#define _I2CTRN_I2CTRN0_MASK                     0x00000001
#define _I2CTRN_I2CTRN0_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN1_POSITION                 0x00000001
#define _I2CTRN_I2CTRN1_MASK                     0x00000002
#define _I2CTRN_I2CTRN1_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN2_POSITION                 0x00000002
#define _I2CTRN_I2CTRN2_MASK                     0x00000004
#define _I2CTRN_I2CTRN2_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN3_POSITION                 0x00000003
#define _I2CTRN_I2CTRN3_MASK                     0x00000008
#define _I2CTRN_I2CTRN3_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN4_POSITION                 0x00000004
#define _I2CTRN_I2CTRN4_MASK                     0x00000010
#define _I2CTRN_I2CTRN4_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN5_POSITION                 0x00000005
#define _I2CTRN_I2CTRN5_MASK                     0x00000020
#define _I2CTRN_I2CTRN5_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN6_POSITION                 0x00000006
#define _I2CTRN_I2CTRN6_MASK                     0x00000040
#define _I2CTRN_I2CTRN6_LENGTH                   0x00000001

#define _I2CTRN_I2CTRN7_POSITION                 0x00000007
#define _I2CTRN_I2CTRN7_MASK                     0x00000080
#define _I2CTRN_I2CTRN7_LENGTH                   0x00000001

#define _I2CBRG_I2CBRG_POSITION                  0x00000000
#define _I2CBRG_I2CBRG_MASK                      0x000001FF
#define _I2CBRG_I2CBRG_LENGTH                    0x00000009

#define _I2CCON_SEN_POSITION                     0x00000000
#define _I2CCON_SEN_MASK                         0x00000001
#define _I2CCON_SEN_LENGTH                       0x00000001

#define _I2CCON_RSEN_POSITION                    0x00000001
#define _I2CCON_RSEN_MASK                        0x00000002
#define _I2CCON_RSEN_LENGTH                      0x00000001

#define _I2CCON_PEN_POSITION                     0x00000002
#define _I2CCON_PEN_MASK                         0x00000004
#define _I2CCON_PEN_LENGTH                       0x00000001

#define _I2CCON_RCEN_POSITION                    0x00000003
#define _I2CCON_RCEN_MASK                        0x00000008
#define _I2CCON_RCEN_LENGTH                      0x00000001

#define _I2CCON_ACKEN_POSITION                   0x00000004
#define _I2CCON_ACKEN_MASK                       0x00000010
#define _I2CCON_ACKEN_LENGTH                     0x00000001

#define _I2CCON_ACKDT_POSITION                   0x00000005
#define _I2CCON_ACKDT_MASK                       0x00000020
#define _I2CCON_ACKDT_LENGTH                     0x00000001

#define _I2CCON_STREN_POSITION                   0x00000006
#define _I2CCON_STREN_MASK                       0x00000040
#define _I2CCON_STREN_LENGTH                     0x00000001

#define _I2CCON_GCEN_POSITION                    0x00000007
#define _I2CCON_GCEN_MASK                        0x00000080
#define _I2CCON_GCEN_LENGTH                      0x00000001

#define _I2CCON_SMEN_POSITION                    0x00000008
#define _I2CCON_SMEN_MASK                        0x00000100
#define _I2CCON_SMEN_LENGTH                      0x00000001

#define _I2CCON_DISSLW_POSITION                  0x00000009
#define _I2CCON_DISSLW_MASK                      0x00000200
#define _I2CCON_DISSLW_LENGTH                    0x00000001

#define _I2CCON_A10M_POSITION                    0x0000000A
#define _I2CCON_A10M_MASK                        0x00000400
#define _I2CCON_A10M_LENGTH                      0x00000001

#define _I2CCON_IPMIEN_POSITION                  0x0000000B
#define _I2CCON_IPMIEN_MASK                      0x00000800
#define _I2CCON_IPMIEN_LENGTH                    0x00000001

#define _I2CCON_SCLREL_POSITION                  0x0000000C
#define _I2CCON_SCLREL_MASK                      0x00001000
#define _I2CCON_SCLREL_LENGTH                    0x00000001

#define _I2CCON_I2CSIDL_POSITION                 0x0000000D
#define _I2CCON_I2CSIDL_MASK                     0x00002000
#define _I2CCON_I2CSIDL_LENGTH                   0x00000001

#define _I2CCON_I2CEN_POSITION                   0x0000000F
#define _I2CCON_I2CEN_MASK                       0x00008000
#define _I2CCON_I2CEN_LENGTH                     0x00000001

#define _I2CSTAT_TBF_POSITION                    0x00000000
#define _I2CSTAT_TBF_MASK                        0x00000001
#define _I2CSTAT_TBF_LENGTH                      0x00000001

#define _I2CSTAT_RBF_POSITION                    0x00000001
#define _I2CSTAT_RBF_MASK                        0x00000002
#define _I2CSTAT_RBF_LENGTH                      0x00000001

#define _I2CSTAT_R_NOT_W_POSITION                0x00000002
#define _I2CSTAT_R_NOT_W_MASK                    0x00000004
#define _I2CSTAT_R_NOT_W_LENGTH                  0x00000001

#define _I2CSTAT_S_POSITION                      0x00000003
#define _I2CSTAT_S_MASK                          0x00000008
#define _I2CSTAT_S_LENGTH                        0x00000001

#define _I2CSTAT_P_POSITION                      0x00000004
#define _I2CSTAT_P_MASK                          0x00000010
#define _I2CSTAT_P_LENGTH                        0x00000001

#define _I2CSTAT_D_NOT_A_POSITION                0x00000005
#define _I2CSTAT_D_NOT_A_MASK                    0x00000020
#define _I2CSTAT_D_NOT_A_LENGTH                  0x00000001

#define _I2CSTAT_I2COV_POSITION                  0x00000006
#define _I2CSTAT_I2COV_MASK                      0x00000040
#define _I2CSTAT_I2COV_LENGTH                    0x00000001

#define _I2CSTAT_IWCOL_POSITION                  0x00000007
#define _I2CSTAT_IWCOL_MASK                      0x00000080
#define _I2CSTAT_IWCOL_LENGTH                    0x00000001

#define _I2CSTAT_ADD10_POSITION                  0x00000008
#define _I2CSTAT_ADD10_MASK                      0x00000100
#define _I2CSTAT_ADD10_LENGTH                    0x00000001

#define _I2CSTAT_GCSTAT_POSITION                 0x00000009
#define _I2CSTAT_GCSTAT_MASK                     0x00000200
#define _I2CSTAT_GCSTAT_LENGTH                   0x00000001

#define _I2CSTAT_BCL_POSITION                    0x0000000A
#define _I2CSTAT_BCL_MASK                        0x00000400
#define _I2CSTAT_BCL_LENGTH                      0x00000001

#define _I2CSTAT_TRSTAT_POSITION                 0x0000000E
#define _I2CSTAT_TRSTAT_MASK                     0x00004000
#define _I2CSTAT_TRSTAT_LENGTH                   0x00000001

#define _I2CSTAT_ACKSTAT_POSITION                0x0000000F
#define _I2CSTAT_ACKSTAT_MASK                    0x00008000
#define _I2CSTAT_ACKSTAT_LENGTH                  0x00000001

#define _I2CSTAT_R_W_POSITION                    0x00000002
#define _I2CSTAT_R_W_MASK                        0x00000004
#define _I2CSTAT_R_W_LENGTH                      0x00000001

#define _I2CSTAT_D_A_POSITION                    0x00000005
#define _I2CSTAT_D_A_MASK                        0x00000020
#define _I2CSTAT_D_A_LENGTH                      0x00000001

#define _I2CADD_I2CADD_POSITION                  0x00000000
#define _I2CADD_I2CADD_MASK                      0x000003FF
#define _I2CADD_I2CADD_LENGTH                    0x0000000A

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_ALTIO_POSITION                   0x0000000A
#define _U1MODE_ALTIO_MASK                       0x00000400
#define _U1MODE_ALTIO_LENGTH                     0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000F
#define _U1STA_UTXISEL_MASK                      0x00008000
#define _U1STA_UTXISEL_LENGTH                    0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1TXREG_UTXREG0_POSITION                0x00000000
#define _U1TXREG_UTXREG0_MASK                    0x00000001
#define _U1TXREG_UTXREG0_LENGTH                  0x00000001

#define _U1TXREG_UTXREG1_POSITION                0x00000001
#define _U1TXREG_UTXREG1_MASK                    0x00000002
#define _U1TXREG_UTXREG1_LENGTH                  0x00000001

#define _U1TXREG_UTXREG2_POSITION                0x00000002
#define _U1TXREG_UTXREG2_MASK                    0x00000004
#define _U1TXREG_UTXREG2_LENGTH                  0x00000001

#define _U1TXREG_UTXREG3_POSITION                0x00000003
#define _U1TXREG_UTXREG3_MASK                    0x00000008
#define _U1TXREG_UTXREG3_LENGTH                  0x00000001

#define _U1TXREG_UTXREG4_POSITION                0x00000004
#define _U1TXREG_UTXREG4_MASK                    0x00000010
#define _U1TXREG_UTXREG4_LENGTH                  0x00000001

#define _U1TXREG_UTXREG5_POSITION                0x00000005
#define _U1TXREG_UTXREG5_MASK                    0x00000020
#define _U1TXREG_UTXREG5_LENGTH                  0x00000001

#define _U1TXREG_UTXREG6_POSITION                0x00000006
#define _U1TXREG_UTXREG6_MASK                    0x00000040
#define _U1TXREG_UTXREG6_LENGTH                  0x00000001

#define _U1TXREG_UTXREG7_POSITION                0x00000007
#define _U1TXREG_UTXREG7_MASK                    0x00000080
#define _U1TXREG_UTXREG7_LENGTH                  0x00000001

#define _U1TXREG_UTXREG8_POSITION                0x00000008
#define _U1TXREG_UTXREG8_MASK                    0x00000100
#define _U1TXREG_UTXREG8_LENGTH                  0x00000001

#define _U1TXREG_UTX8_POSITION                   0x00000008
#define _U1TXREG_UTX8_MASK                       0x00000100
#define _U1TXREG_UTX8_LENGTH                     0x00000001

#define _U1RXREG_URXREG0_POSITION                0x00000000
#define _U1RXREG_URXREG0_MASK                    0x00000001
#define _U1RXREG_URXREG0_LENGTH                  0x00000001

#define _U1RXREG_URXREG1_POSITION                0x00000001
#define _U1RXREG_URXREG1_MASK                    0x00000002
#define _U1RXREG_URXREG1_LENGTH                  0x00000001

#define _U1RXREG_URXREG2_POSITION                0x00000002
#define _U1RXREG_URXREG2_MASK                    0x00000004
#define _U1RXREG_URXREG2_LENGTH                  0x00000001

#define _U1RXREG_URXREG3_POSITION                0x00000003
#define _U1RXREG_URXREG3_MASK                    0x00000008
#define _U1RXREG_URXREG3_LENGTH                  0x00000001

#define _U1RXREG_URXREG4_POSITION                0x00000004
#define _U1RXREG_URXREG4_MASK                    0x00000010
#define _U1RXREG_URXREG4_LENGTH                  0x00000001

#define _U1RXREG_URXREG5_POSITION                0x00000005
#define _U1RXREG_URXREG5_MASK                    0x00000020
#define _U1RXREG_URXREG5_LENGTH                  0x00000001

#define _U1RXREG_URXREG6_POSITION                0x00000006
#define _U1RXREG_URXREG6_MASK                    0x00000040
#define _U1RXREG_URXREG6_LENGTH                  0x00000001

#define _U1RXREG_URXREG7_POSITION                0x00000007
#define _U1RXREG_URXREG7_MASK                    0x00000080
#define _U1RXREG_URXREG7_LENGTH                  0x00000001

#define _U1RXREG_URXREG8_POSITION                0x00000008
#define _U1RXREG_URXREG8_MASK                    0x00000100
#define _U1RXREG_URXREG8_LENGTH                  0x00000001

#define _U1RXREG_URX8_POSITION                   0x00000008
#define _U1RXREG_URX8_MASK                       0x00000100
#define _U1RXREG_URX8_LENGTH                     0x00000001

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1CON_PPRE0_POSITION                  0x00000000
#define _SPI1CON_PPRE0_MASK                      0x00000001
#define _SPI1CON_PPRE0_LENGTH                    0x00000001

#define _SPI1CON_PPRE1_POSITION                  0x00000001
#define _SPI1CON_PPRE1_MASK                      0x00000002
#define _SPI1CON_PPRE1_LENGTH                    0x00000001

#define _SPI1CON_SPRE0_POSITION                  0x00000002
#define _SPI1CON_SPRE0_MASK                      0x00000004
#define _SPI1CON_SPRE0_LENGTH                    0x00000001

#define _SPI1CON_SPRE1_POSITION                  0x00000003
#define _SPI1CON_SPRE1_MASK                      0x00000008
#define _SPI1CON_SPRE1_LENGTH                    0x00000001

#define _SPI1CON_SPRE2_POSITION                  0x00000004
#define _SPI1CON_SPRE2_MASK                      0x00000010
#define _SPI1CON_SPRE2_LENGTH                    0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000B
#define _SPI1CON_DISSDO_MASK                     0x00000800
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SPIFSD_POSITION                 0x0000000D
#define _SPI1CON_SPIFSD_MASK                     0x00002000
#define _SPI1CON_SPIFSD_LENGTH                   0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000000E
#define _SPI1CON_FRMEN_MASK                      0x00004000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_PPRE_POSITION                   0x00000000
#define _SPI1CON_PPRE_MASK                       0x00000003
#define _SPI1CON_PPRE_LENGTH                     0x00000002

#define _SPI1CON_SPRE_POSITION                   0x00000002
#define _SPI1CON_SPRE_MASK                       0x0000001C
#define _SPI1CON_SPRE_LENGTH                     0x00000003

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2CON_PPRE0_POSITION                  0x00000000
#define _SPI2CON_PPRE0_MASK                      0x00000001
#define _SPI2CON_PPRE0_LENGTH                    0x00000001

#define _SPI2CON_PPRE1_POSITION                  0x00000001
#define _SPI2CON_PPRE1_MASK                      0x00000002
#define _SPI2CON_PPRE1_LENGTH                    0x00000001

#define _SPI2CON_SPRE0_POSITION                  0x00000002
#define _SPI2CON_SPRE0_MASK                      0x00000004
#define _SPI2CON_SPRE0_LENGTH                    0x00000001

#define _SPI2CON_SPRE1_POSITION                  0x00000003
#define _SPI2CON_SPRE1_MASK                      0x00000008
#define _SPI2CON_SPRE1_LENGTH                    0x00000001

#define _SPI2CON_SPRE2_POSITION                  0x00000004
#define _SPI2CON_SPRE2_MASK                      0x00000010
#define _SPI2CON_SPRE2_LENGTH                    0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000B
#define _SPI2CON_DISSDO_MASK                     0x00000800
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SPIFSD_POSITION                 0x0000000D
#define _SPI2CON_SPIFSD_MASK                     0x00002000
#define _SPI2CON_SPIFSD_LENGTH                   0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000000E
#define _SPI2CON_FRMEN_MASK                      0x00004000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_PPRE_POSITION                   0x00000000
#define _SPI2CON_PPRE_MASK                       0x00000003
#define _SPI2CON_PPRE_LENGTH                     0x00000002

#define _SPI2CON_SPRE_POSITION                   0x00000002
#define _SPI2CON_SPRE_MASK                       0x0000001C
#define _SPI2CON_SPRE_LENGTH                     0x00000003

#define _ADCON1_DONE_POSITION                    0x00000000
#define _ADCON1_DONE_MASK                        0x00000001
#define _ADCON1_DONE_LENGTH                      0x00000001

#define _ADCON1_SAMP_POSITION                    0x00000001
#define _ADCON1_SAMP_MASK                        0x00000002
#define _ADCON1_SAMP_LENGTH                      0x00000001

#define _ADCON1_ASAM_POSITION                    0x00000002
#define _ADCON1_ASAM_MASK                        0x00000004
#define _ADCON1_ASAM_LENGTH                      0x00000001

#define _ADCON1_SIMSAM_POSITION                  0x00000003
#define _ADCON1_SIMSAM_MASK                      0x00000008
#define _ADCON1_SIMSAM_LENGTH                    0x00000001

#define _ADCON1_SSRC_POSITION                    0x00000005
#define _ADCON1_SSRC_MASK                        0x000000E0
#define _ADCON1_SSRC_LENGTH                      0x00000003

#define _ADCON1_FORM_POSITION                    0x00000008
#define _ADCON1_FORM_MASK                        0x00000300
#define _ADCON1_FORM_LENGTH                      0x00000002

#define _ADCON1_ADSIDL_POSITION                  0x0000000D
#define _ADCON1_ADSIDL_MASK                      0x00002000
#define _ADCON1_ADSIDL_LENGTH                    0x00000001

#define _ADCON1_ADON_POSITION                    0x0000000F
#define _ADCON1_ADON_MASK                        0x00008000
#define _ADCON1_ADON_LENGTH                      0x00000001

#define _ADCON1_SSRC0_POSITION                   0x00000005
#define _ADCON1_SSRC0_MASK                       0x00000020
#define _ADCON1_SSRC0_LENGTH                     0x00000001

#define _ADCON1_SSRC1_POSITION                   0x00000006
#define _ADCON1_SSRC1_MASK                       0x00000040
#define _ADCON1_SSRC1_LENGTH                     0x00000001

#define _ADCON1_SSRC2_POSITION                   0x00000007
#define _ADCON1_SSRC2_MASK                       0x00000080
#define _ADCON1_SSRC2_LENGTH                     0x00000001

#define _ADCON1_FORM0_POSITION                   0x00000008
#define _ADCON1_FORM0_MASK                       0x00000100
#define _ADCON1_FORM0_LENGTH                     0x00000001

#define _ADCON1_FORM1_POSITION                   0x00000009
#define _ADCON1_FORM1_MASK                       0x00000200
#define _ADCON1_FORM1_LENGTH                     0x00000001

#define _ADCON2_ALTS_POSITION                    0x00000000
#define _ADCON2_ALTS_MASK                        0x00000001
#define _ADCON2_ALTS_LENGTH                      0x00000001

#define _ADCON2_BUFM_POSITION                    0x00000001
#define _ADCON2_BUFM_MASK                        0x00000002
#define _ADCON2_BUFM_LENGTH                      0x00000001

#define _ADCON2_SMPI_POSITION                    0x00000002
#define _ADCON2_SMPI_MASK                        0x0000003C
#define _ADCON2_SMPI_LENGTH                      0x00000004

#define _ADCON2_BUFS_POSITION                    0x00000007
#define _ADCON2_BUFS_MASK                        0x00000080
#define _ADCON2_BUFS_LENGTH                      0x00000001

#define _ADCON2_CHPS_POSITION                    0x00000008
#define _ADCON2_CHPS_MASK                        0x00000300
#define _ADCON2_CHPS_LENGTH                      0x00000002

#define _ADCON2_CSCNA_POSITION                   0x0000000A
#define _ADCON2_CSCNA_MASK                       0x00000400
#define _ADCON2_CSCNA_LENGTH                     0x00000001

#define _ADCON2_VCFG_POSITION                    0x0000000D
#define _ADCON2_VCFG_MASK                        0x0000E000
#define _ADCON2_VCFG_LENGTH                      0x00000003

#define _ADCON2_SMPI0_POSITION                   0x00000002
#define _ADCON2_SMPI0_MASK                       0x00000004
#define _ADCON2_SMPI0_LENGTH                     0x00000001

#define _ADCON2_SMPI1_POSITION                   0x00000003
#define _ADCON2_SMPI1_MASK                       0x00000008
#define _ADCON2_SMPI1_LENGTH                     0x00000001

#define _ADCON2_SMPI2_POSITION                   0x00000004
#define _ADCON2_SMPI2_MASK                       0x00000010
#define _ADCON2_SMPI2_LENGTH                     0x00000001

#define _ADCON2_SMPI3_POSITION                   0x00000005
#define _ADCON2_SMPI3_MASK                       0x00000020
#define _ADCON2_SMPI3_LENGTH                     0x00000001

#define _ADCON2_CHPS0_POSITION                   0x00000008
#define _ADCON2_CHPS0_MASK                       0x00000100
#define _ADCON2_CHPS0_LENGTH                     0x00000001

#define _ADCON2_CHPS1_POSITION                   0x00000009
#define _ADCON2_CHPS1_MASK                       0x00000200
#define _ADCON2_CHPS1_LENGTH                     0x00000001

#define _ADCON2_VCFG0_POSITION                   0x0000000D
#define _ADCON2_VCFG0_MASK                       0x00002000
#define _ADCON2_VCFG0_LENGTH                     0x00000001

#define _ADCON2_VCFG1_POSITION                   0x0000000E
#define _ADCON2_VCFG1_MASK                       0x00004000
#define _ADCON2_VCFG1_LENGTH                     0x00000001

#define _ADCON2_VCFG2_POSITION                   0x0000000F
#define _ADCON2_VCFG2_MASK                       0x00008000
#define _ADCON2_VCFG2_LENGTH                     0x00000001

#define _ADCON3_ADCS_POSITION                    0x00000000
#define _ADCON3_ADCS_MASK                        0x0000003F
#define _ADCON3_ADCS_LENGTH                      0x00000006

#define _ADCON3_ADRC_POSITION                    0x00000007
#define _ADCON3_ADRC_MASK                        0x00000080
#define _ADCON3_ADRC_LENGTH                      0x00000001

#define _ADCON3_SAMC_POSITION                    0x00000008
#define _ADCON3_SAMC_MASK                        0x00001F00
#define _ADCON3_SAMC_LENGTH                      0x00000005

#define _ADCON3_ADCS0_POSITION                   0x00000000
#define _ADCON3_ADCS0_MASK                       0x00000001
#define _ADCON3_ADCS0_LENGTH                     0x00000001

#define _ADCON3_ADCS1_POSITION                   0x00000001
#define _ADCON3_ADCS1_MASK                       0x00000002
#define _ADCON3_ADCS1_LENGTH                     0x00000001

#define _ADCON3_ADCS2_POSITION                   0x00000002
#define _ADCON3_ADCS2_MASK                       0x00000004
#define _ADCON3_ADCS2_LENGTH                     0x00000001

#define _ADCON3_ADCS3_POSITION                   0x00000003
#define _ADCON3_ADCS3_MASK                       0x00000008
#define _ADCON3_ADCS3_LENGTH                     0x00000001

#define _ADCON3_ADCS4_POSITION                   0x00000004
#define _ADCON3_ADCS4_MASK                       0x00000010
#define _ADCON3_ADCS4_LENGTH                     0x00000001

#define _ADCON3_ADCS5_POSITION                   0x00000005
#define _ADCON3_ADCS5_MASK                       0x00000020
#define _ADCON3_ADCS5_LENGTH                     0x00000001

#define _ADCON3_SAMC0_POSITION                   0x00000008
#define _ADCON3_SAMC0_MASK                       0x00000100
#define _ADCON3_SAMC0_LENGTH                     0x00000001

#define _ADCON3_SAMC1_POSITION                   0x00000009
#define _ADCON3_SAMC1_MASK                       0x00000200
#define _ADCON3_SAMC1_LENGTH                     0x00000001

#define _ADCON3_SAMC2_POSITION                   0x0000000A
#define _ADCON3_SAMC2_MASK                       0x00000400
#define _ADCON3_SAMC2_LENGTH                     0x00000001

#define _ADCON3_SAMC3_POSITION                   0x0000000B
#define _ADCON3_SAMC3_MASK                       0x00000800
#define _ADCON3_SAMC3_LENGTH                     0x00000001

#define _ADCON3_SAMC4_POSITION                   0x0000000C
#define _ADCON3_SAMC4_MASK                       0x00001000
#define _ADCON3_SAMC4_LENGTH                     0x00000001

#define _ADCHS_CH0SA_POSITION                    0x00000000
#define _ADCHS_CH0SA_MASK                        0x0000000F
#define _ADCHS_CH0SA_LENGTH                      0x00000004

#define _ADCHS_CH0NA_POSITION                    0x00000004
#define _ADCHS_CH0NA_MASK                        0x00000010
#define _ADCHS_CH0NA_LENGTH                      0x00000001

#define _ADCHS_CH123SA_POSITION                  0x00000005
#define _ADCHS_CH123SA_MASK                      0x00000020
#define _ADCHS_CH123SA_LENGTH                    0x00000001

#define _ADCHS_CH123NA_POSITION                  0x00000006
#define _ADCHS_CH123NA_MASK                      0x000000C0
#define _ADCHS_CH123NA_LENGTH                    0x00000002

#define _ADCHS_CH0SB_POSITION                    0x00000008
#define _ADCHS_CH0SB_MASK                        0x00000F00
#define _ADCHS_CH0SB_LENGTH                      0x00000004

#define _ADCHS_CH0NB_POSITION                    0x0000000C
#define _ADCHS_CH0NB_MASK                        0x00001000
#define _ADCHS_CH0NB_LENGTH                      0x00000001

#define _ADCHS_CH123SB_POSITION                  0x0000000D
#define _ADCHS_CH123SB_MASK                      0x00002000
#define _ADCHS_CH123SB_LENGTH                    0x00000001

#define _ADCHS_CH123NB_POSITION                  0x0000000E
#define _ADCHS_CH123NB_MASK                      0x0000C000
#define _ADCHS_CH123NB_LENGTH                    0x00000002

#define _ADCHS_CH0SA0_POSITION                   0x00000000
#define _ADCHS_CH0SA0_MASK                       0x00000001
#define _ADCHS_CH0SA0_LENGTH                     0x00000001

#define _ADCHS_CH0SA1_POSITION                   0x00000001
#define _ADCHS_CH0SA1_MASK                       0x00000002
#define _ADCHS_CH0SA1_LENGTH                     0x00000001

#define _ADCHS_CH0SA2_POSITION                   0x00000002
#define _ADCHS_CH0SA2_MASK                       0x00000004
#define _ADCHS_CH0SA2_LENGTH                     0x00000001

#define _ADCHS_CH0SA3_POSITION                   0x00000003
#define _ADCHS_CH0SA3_MASK                       0x00000008
#define _ADCHS_CH0SA3_LENGTH                     0x00000001

#define _ADCHS_CH123NA0_POSITION                 0x00000006
#define _ADCHS_CH123NA0_MASK                     0x00000040
#define _ADCHS_CH123NA0_LENGTH                   0x00000001

#define _ADCHS_CH123NA1_POSITION                 0x00000007
#define _ADCHS_CH123NA1_MASK                     0x00000080
#define _ADCHS_CH123NA1_LENGTH                   0x00000001

#define _ADCHS_CH0SB0_POSITION                   0x00000008
#define _ADCHS_CH0SB0_MASK                       0x00000100
#define _ADCHS_CH0SB0_LENGTH                     0x00000001

#define _ADCHS_CH0SB1_POSITION                   0x00000009
#define _ADCHS_CH0SB1_MASK                       0x00000200
#define _ADCHS_CH0SB1_LENGTH                     0x00000001

#define _ADCHS_CH0SB2_POSITION                   0x0000000A
#define _ADCHS_CH0SB2_MASK                       0x00000400
#define _ADCHS_CH0SB2_LENGTH                     0x00000001

#define _ADCHS_CH0SB3_POSITION                   0x0000000B
#define _ADCHS_CH0SB3_MASK                       0x00000800
#define _ADCHS_CH0SB3_LENGTH                     0x00000001

#define _ADCHS_CH123NB0_POSITION                 0x0000000E
#define _ADCHS_CH123NB0_MASK                     0x00004000
#define _ADCHS_CH123NB0_LENGTH                   0x00000001

#define _ADCHS_CH123NB1_POSITION                 0x0000000F
#define _ADCHS_CH123NB1_MASK                     0x00008000
#define _ADCHS_CH123NB1_LENGTH                   0x00000001

#define _ADPCFG_PCFG0_POSITION                   0x00000000
#define _ADPCFG_PCFG0_MASK                       0x00000001
#define _ADPCFG_PCFG0_LENGTH                     0x00000001

#define _ADPCFG_PCFG1_POSITION                   0x00000001
#define _ADPCFG_PCFG1_MASK                       0x00000002
#define _ADPCFG_PCFG1_LENGTH                     0x00000001

#define _ADPCFG_PCFG2_POSITION                   0x00000002
#define _ADPCFG_PCFG2_MASK                       0x00000004
#define _ADPCFG_PCFG2_LENGTH                     0x00000001

#define _ADPCFG_PCFG3_POSITION                   0x00000003
#define _ADPCFG_PCFG3_MASK                       0x00000008
#define _ADPCFG_PCFG3_LENGTH                     0x00000001

#define _ADPCFG_PCFG4_POSITION                   0x00000004
#define _ADPCFG_PCFG4_MASK                       0x00000010
#define _ADPCFG_PCFG4_LENGTH                     0x00000001

#define _ADPCFG_PCFG5_POSITION                   0x00000005
#define _ADPCFG_PCFG5_MASK                       0x00000020
#define _ADPCFG_PCFG5_LENGTH                     0x00000001

#define _ADPCFG_PCFG6_POSITION                   0x00000006
#define _ADPCFG_PCFG6_MASK                       0x00000040
#define _ADPCFG_PCFG6_LENGTH                     0x00000001

#define _ADPCFG_PCFG7_POSITION                   0x00000007
#define _ADPCFG_PCFG7_MASK                       0x00000080
#define _ADPCFG_PCFG7_LENGTH                     0x00000001

#define _ADPCFG_PCFG8_POSITION                   0x00000008
#define _ADPCFG_PCFG8_MASK                       0x00000100
#define _ADPCFG_PCFG8_LENGTH                     0x00000001

#define _ADPCFG_PCFG9_POSITION                   0x00000009
#define _ADPCFG_PCFG9_MASK                       0x00000200
#define _ADPCFG_PCFG9_LENGTH                     0x00000001

#define _ADPCFG_PCFG10_POSITION                  0x0000000A
#define _ADPCFG_PCFG10_MASK                      0x00000400
#define _ADPCFG_PCFG10_LENGTH                    0x00000001

#define _ADPCFG_PCFG11_POSITION                  0x0000000B
#define _ADPCFG_PCFG11_MASK                      0x00000800
#define _ADPCFG_PCFG11_LENGTH                    0x00000001

#define _ADPCFG_PCFG12_POSITION                  0x0000000C
#define _ADPCFG_PCFG12_MASK                      0x00001000
#define _ADPCFG_PCFG12_LENGTH                    0x00000001

#define _ADPCFG_PCFG13_POSITION                  0x0000000D
#define _ADPCFG_PCFG13_MASK                      0x00002000
#define _ADPCFG_PCFG13_LENGTH                    0x00000001

#define _ADPCFG_PCFG14_POSITION                  0x0000000E
#define _ADPCFG_PCFG14_MASK                      0x00004000
#define _ADPCFG_PCFG14_LENGTH                    0x00000001

#define _ADPCFG_PCFG15_POSITION                  0x0000000F
#define _ADPCFG_PCFG15_MASK                      0x00008000
#define _ADPCFG_PCFG15_LENGTH                    0x00000001

#define _ADCSSL_CSSL0_POSITION                   0x00000000
#define _ADCSSL_CSSL0_MASK                       0x00000001
#define _ADCSSL_CSSL0_LENGTH                     0x00000001

#define _ADCSSL_CSSL1_POSITION                   0x00000001
#define _ADCSSL_CSSL1_MASK                       0x00000002
#define _ADCSSL_CSSL1_LENGTH                     0x00000001

#define _ADCSSL_CSSL2_POSITION                   0x00000002
#define _ADCSSL_CSSL2_MASK                       0x00000004
#define _ADCSSL_CSSL2_LENGTH                     0x00000001

#define _ADCSSL_CSSL3_POSITION                   0x00000003
#define _ADCSSL_CSSL3_MASK                       0x00000008
#define _ADCSSL_CSSL3_LENGTH                     0x00000001

#define _ADCSSL_CSSL4_POSITION                   0x00000004
#define _ADCSSL_CSSL4_MASK                       0x00000010
#define _ADCSSL_CSSL4_LENGTH                     0x00000001

#define _ADCSSL_CSSL5_POSITION                   0x00000005
#define _ADCSSL_CSSL5_MASK                       0x00000020
#define _ADCSSL_CSSL5_LENGTH                     0x00000001

#define _ADCSSL_CSSL6_POSITION                   0x00000006
#define _ADCSSL_CSSL6_MASK                       0x00000040
#define _ADCSSL_CSSL6_LENGTH                     0x00000001

#define _ADCSSL_CSSL7_POSITION                   0x00000007
#define _ADCSSL_CSSL7_MASK                       0x00000080
#define _ADCSSL_CSSL7_LENGTH                     0x00000001

#define _ADCSSL_CSSL8_POSITION                   0x00000008
#define _ADCSSL_CSSL8_MASK                       0x00000100
#define _ADCSSL_CSSL8_LENGTH                     0x00000001

#define _ADCSSL_CSSL9_POSITION                   0x00000009
#define _ADCSSL_CSSL9_MASK                       0x00000200
#define _ADCSSL_CSSL9_LENGTH                     0x00000001

#define _ADCSSL_CSSL10_POSITION                  0x0000000A
#define _ADCSSL_CSSL10_MASK                      0x00000400
#define _ADCSSL_CSSL10_LENGTH                    0x00000001

#define _ADCSSL_CSSL11_POSITION                  0x0000000B
#define _ADCSSL_CSSL11_MASK                      0x00000800
#define _ADCSSL_CSSL11_LENGTH                    0x00000001

#define _ADCSSL_CSSL12_POSITION                  0x0000000C
#define _ADCSSL_CSSL12_MASK                      0x00001000
#define _ADCSSL_CSSL12_LENGTH                    0x00000001

#define _ADCSSL_CSSL13_POSITION                  0x0000000D
#define _ADCSSL_CSSL13_MASK                      0x00002000
#define _ADCSSL_CSSL13_LENGTH                    0x00000001

#define _ADCSSL_CSSL14_POSITION                  0x0000000E
#define _ADCSSL_CSSL14_MASK                      0x00004000
#define _ADCSSL_CSSL14_LENGTH                    0x00000001

#define _ADCSSL_CSSL15_POSITION                  0x0000000F
#define _ADCSSL_CSSL15_MASK                      0x00008000
#define _ADCSSL_CSSL15_LENGTH                    0x00000001

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _TRISD_TRISD0_POSITION                   0x00000000
#define _TRISD_TRISD0_MASK                       0x00000001
#define _TRISD_TRISD0_LENGTH                     0x00000001

#define _TRISD_TRISD1_POSITION                   0x00000001
#define _TRISD_TRISD1_MASK                       0x00000002
#define _TRISD_TRISD1_LENGTH                     0x00000001

#define _TRISD_TRISD2_POSITION                   0x00000002
#define _TRISD_TRISD2_MASK                       0x00000004
#define _TRISD_TRISD2_LENGTH                     0x00000001

#define _TRISD_TRISD3_POSITION                   0x00000003
#define _TRISD_TRISD3_MASK                       0x00000008
#define _TRISD_TRISD3_LENGTH                     0x00000001

#define _TRISD_TRISD4_POSITION                   0x00000004
#define _TRISD_TRISD4_MASK                       0x00000010
#define _TRISD_TRISD4_LENGTH                     0x00000001

#define _TRISD_TRISD5_POSITION                   0x00000005
#define _TRISD_TRISD5_MASK                       0x00000020
#define _TRISD_TRISD5_LENGTH                     0x00000001

#define _TRISD_TRISD6_POSITION                   0x00000006
#define _TRISD_TRISD6_MASK                       0x00000040
#define _TRISD_TRISD6_LENGTH                     0x00000001

#define _TRISD_TRISD7_POSITION                   0x00000007
#define _TRISD_TRISD7_MASK                       0x00000080
#define _TRISD_TRISD7_LENGTH                     0x00000001

#define _TRISD_TRISD8_POSITION                   0x00000008
#define _TRISD_TRISD8_MASK                       0x00000100
#define _TRISD_TRISD8_LENGTH                     0x00000001

#define _TRISD_TRISD9_POSITION                   0x00000009
#define _TRISD_TRISD9_MASK                       0x00000200
#define _TRISD_TRISD9_LENGTH                     0x00000001

#define _TRISD_TRISD10_POSITION                  0x0000000A
#define _TRISD_TRISD10_MASK                      0x00000400
#define _TRISD_TRISD10_LENGTH                    0x00000001

#define _TRISD_TRISD11_POSITION                  0x0000000B
#define _TRISD_TRISD11_MASK                      0x00000800
#define _TRISD_TRISD11_LENGTH                    0x00000001

#define _PORTD_RD0_POSITION                      0x00000000
#define _PORTD_RD0_MASK                          0x00000001
#define _PORTD_RD0_LENGTH                        0x00000001

#define _PORTD_RD1_POSITION                      0x00000001
#define _PORTD_RD1_MASK                          0x00000002
#define _PORTD_RD1_LENGTH                        0x00000001

#define _PORTD_RD2_POSITION                      0x00000002
#define _PORTD_RD2_MASK                          0x00000004
#define _PORTD_RD2_LENGTH                        0x00000001

#define _PORTD_RD3_POSITION                      0x00000003
#define _PORTD_RD3_MASK                          0x00000008
#define _PORTD_RD3_LENGTH                        0x00000001

#define _PORTD_RD4_POSITION                      0x00000004
#define _PORTD_RD4_MASK                          0x00000010
#define _PORTD_RD4_LENGTH                        0x00000001

#define _PORTD_RD5_POSITION                      0x00000005
#define _PORTD_RD5_MASK                          0x00000020
#define _PORTD_RD5_LENGTH                        0x00000001

#define _PORTD_RD6_POSITION                      0x00000006
#define _PORTD_RD6_MASK                          0x00000040
#define _PORTD_RD6_LENGTH                        0x00000001

#define _PORTD_RD7_POSITION                      0x00000007
#define _PORTD_RD7_MASK                          0x00000080
#define _PORTD_RD7_LENGTH                        0x00000001

#define _PORTD_RD8_POSITION                      0x00000008
#define _PORTD_RD8_MASK                          0x00000100
#define _PORTD_RD8_LENGTH                        0x00000001

#define _PORTD_RD9_POSITION                      0x00000009
#define _PORTD_RD9_MASK                          0x00000200
#define _PORTD_RD9_LENGTH                        0x00000001

#define _PORTD_RD10_POSITION                     0x0000000A
#define _PORTD_RD10_MASK                         0x00000400
#define _PORTD_RD10_LENGTH                       0x00000001

#define _PORTD_RD11_POSITION                     0x0000000B
#define _PORTD_RD11_MASK                         0x00000800
#define _PORTD_RD11_LENGTH                       0x00000001

#define _LATD_LATD0_POSITION                     0x00000000
#define _LATD_LATD0_MASK                         0x00000001
#define _LATD_LATD0_LENGTH                       0x00000001

#define _LATD_LATD1_POSITION                     0x00000001
#define _LATD_LATD1_MASK                         0x00000002
#define _LATD_LATD1_LENGTH                       0x00000001

#define _LATD_LATD2_POSITION                     0x00000002
#define _LATD_LATD2_MASK                         0x00000004
#define _LATD_LATD2_LENGTH                       0x00000001

#define _LATD_LATD3_POSITION                     0x00000003
#define _LATD_LATD3_MASK                         0x00000008
#define _LATD_LATD3_LENGTH                       0x00000001

#define _LATD_LATD4_POSITION                     0x00000004
#define _LATD_LATD4_MASK                         0x00000010
#define _LATD_LATD4_LENGTH                       0x00000001

#define _LATD_LATD5_POSITION                     0x00000005
#define _LATD_LATD5_MASK                         0x00000020
#define _LATD_LATD5_LENGTH                       0x00000001

#define _LATD_LATD6_POSITION                     0x00000006
#define _LATD_LATD6_MASK                         0x00000040
#define _LATD_LATD6_LENGTH                       0x00000001

#define _LATD_LATD7_POSITION                     0x00000007
#define _LATD_LATD7_MASK                         0x00000080
#define _LATD_LATD7_LENGTH                       0x00000001

#define _LATD_LATD8_POSITION                     0x00000008
#define _LATD_LATD8_MASK                         0x00000100
#define _LATD_LATD8_LENGTH                       0x00000001

#define _LATD_LATD9_POSITION                     0x00000009
#define _LATD_LATD9_MASK                         0x00000200
#define _LATD_LATD9_LENGTH                       0x00000001

#define _LATD_LATD10_POSITION                    0x0000000A
#define _LATD_LATD10_MASK                        0x00000400
#define _LATD_LATD10_LENGTH                      0x00000001

#define _LATD_LATD11_POSITION                    0x0000000B
#define _LATD_LATD11_MASK                        0x00000800
#define _LATD_LATD11_LENGTH                      0x00000001

#define _TRISE_TRISE0_POSITION                   0x00000000
#define _TRISE_TRISE0_MASK                       0x00000001
#define _TRISE_TRISE0_LENGTH                     0x00000001

#define _TRISE_TRISE1_POSITION                   0x00000001
#define _TRISE_TRISE1_MASK                       0x00000002
#define _TRISE_TRISE1_LENGTH                     0x00000001

#define _TRISE_TRISE2_POSITION                   0x00000002
#define _TRISE_TRISE2_MASK                       0x00000004
#define _TRISE_TRISE2_LENGTH                     0x00000001

#define _TRISE_TRISE3_POSITION                   0x00000003
#define _TRISE_TRISE3_MASK                       0x00000008
#define _TRISE_TRISE3_LENGTH                     0x00000001

#define _TRISE_TRISE4_POSITION                   0x00000004
#define _TRISE_TRISE4_MASK                       0x00000010
#define _TRISE_TRISE4_LENGTH                     0x00000001

#define _TRISE_TRISE5_POSITION                   0x00000005
#define _TRISE_TRISE5_MASK                       0x00000020
#define _TRISE_TRISE5_LENGTH                     0x00000001

#define _TRISE_TRISE6_POSITION                   0x00000006
#define _TRISE_TRISE6_MASK                       0x00000040
#define _TRISE_TRISE6_LENGTH                     0x00000001

#define _TRISE_TRISE7_POSITION                   0x00000007
#define _TRISE_TRISE7_MASK                       0x00000080
#define _TRISE_TRISE7_LENGTH                     0x00000001

#define _PORTE_RE0_POSITION                      0x00000000
#define _PORTE_RE0_MASK                          0x00000001
#define _PORTE_RE0_LENGTH                        0x00000001

#define _PORTE_RE1_POSITION                      0x00000001
#define _PORTE_RE1_MASK                          0x00000002
#define _PORTE_RE1_LENGTH                        0x00000001

#define _PORTE_RE2_POSITION                      0x00000002
#define _PORTE_RE2_MASK                          0x00000004
#define _PORTE_RE2_LENGTH                        0x00000001

#define _PORTE_RE3_POSITION                      0x00000003
#define _PORTE_RE3_MASK                          0x00000008
#define _PORTE_RE3_LENGTH                        0x00000001

#define _PORTE_RE4_POSITION                      0x00000004
#define _PORTE_RE4_MASK                          0x00000010
#define _PORTE_RE4_LENGTH                        0x00000001

#define _PORTE_RE5_POSITION                      0x00000005
#define _PORTE_RE5_MASK                          0x00000020
#define _PORTE_RE5_LENGTH                        0x00000001

#define _PORTE_RE6_POSITION                      0x00000006
#define _PORTE_RE6_MASK                          0x00000040
#define _PORTE_RE6_LENGTH                        0x00000001

#define _PORTE_RE7_POSITION                      0x00000007
#define _PORTE_RE7_MASK                          0x00000080
#define _PORTE_RE7_LENGTH                        0x00000001

#define _LATE_LATE0_POSITION                     0x00000000
#define _LATE_LATE0_MASK                         0x00000001
#define _LATE_LATE0_LENGTH                       0x00000001

#define _LATE_LATE1_POSITION                     0x00000001
#define _LATE_LATE1_MASK                         0x00000002
#define _LATE_LATE1_LENGTH                       0x00000001

#define _LATE_LATE2_POSITION                     0x00000002
#define _LATE_LATE2_MASK                         0x00000004
#define _LATE_LATE2_LENGTH                       0x00000001

#define _LATE_LATE3_POSITION                     0x00000003
#define _LATE_LATE3_MASK                         0x00000008
#define _LATE_LATE3_LENGTH                       0x00000001

#define _LATE_LATE4_POSITION                     0x00000004
#define _LATE_LATE4_MASK                         0x00000010
#define _LATE_LATE4_LENGTH                       0x00000001

#define _LATE_LATE5_POSITION                     0x00000005
#define _LATE_LATE5_MASK                         0x00000020
#define _LATE_LATE5_LENGTH                       0x00000001

#define _LATE_LATE6_POSITION                     0x00000006
#define _LATE_LATE6_MASK                         0x00000040
#define _LATE_LATE6_LENGTH                       0x00000001

#define _LATE_LATE7_POSITION                     0x00000007
#define _LATE_LATE7_MASK                         0x00000080
#define _LATE_LATE7_LENGTH                       0x00000001

#define _TRISF_TRISF0_POSITION                   0x00000000
#define _TRISF_TRISF0_MASK                       0x00000001
#define _TRISF_TRISF0_LENGTH                     0x00000001

#define _TRISF_TRISF1_POSITION                   0x00000001
#define _TRISF_TRISF1_MASK                       0x00000002
#define _TRISF_TRISF1_LENGTH                     0x00000001

#define _TRISF_TRISF2_POSITION                   0x00000002
#define _TRISF_TRISF2_MASK                       0x00000004
#define _TRISF_TRISF2_LENGTH                     0x00000001

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF6_POSITION                   0x00000006
#define _TRISF_TRISF6_MASK                       0x00000040
#define _TRISF_TRISF6_LENGTH                     0x00000001

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF2_POSITION                      0x00000002
#define _PORTF_RF2_MASK                          0x00000004
#define _PORTF_RF2_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF6_POSITION                      0x00000006
#define _PORTF_RF6_MASK                          0x00000040
#define _PORTF_RF6_LENGTH                        0x00000001

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF2_POSITION                     0x00000002
#define _LATF_LATF2_MASK                         0x00000004
#define _LATF_LATF2_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF6_POSITION                     0x00000006
#define _LATF_LATF6_MASK                         0x00000040
#define _LATF_LATF6_LENGTH                       0x00000001

#define _TRISG_TRISG2_POSITION                   0x00000002
#define _TRISG_TRISG2_MASK                       0x00000004
#define _TRISG_TRISG2_LENGTH                     0x00000001

#define _TRISG_TRISG3_POSITION                   0x00000003
#define _TRISG_TRISG3_MASK                       0x00000008
#define _TRISG_TRISG3_LENGTH                     0x00000001

#define _TRISG_TRISG6_POSITION                   0x00000006
#define _TRISG_TRISG6_MASK                       0x00000040
#define _TRISG_TRISG6_LENGTH                     0x00000001

#define _TRISG_TRISG7_POSITION                   0x00000007
#define _TRISG_TRISG7_MASK                       0x00000080
#define _TRISG_TRISG7_LENGTH                     0x00000001

#define _TRISG_TRISG8_POSITION                   0x00000008
#define _TRISG_TRISG8_MASK                       0x00000100
#define _TRISG_TRISG8_LENGTH                     0x00000001

#define _TRISG_TRISG9_POSITION                   0x00000009
#define _TRISG_TRISG9_MASK                       0x00000200
#define _TRISG_TRISG9_LENGTH                     0x00000001

#define _PORTG_RG2_POSITION                      0x00000002
#define _PORTG_RG2_MASK                          0x00000004
#define _PORTG_RG2_LENGTH                        0x00000001

#define _PORTG_RG3_POSITION                      0x00000003
#define _PORTG_RG3_MASK                          0x00000008
#define _PORTG_RG3_LENGTH                        0x00000001

#define _PORTG_RG6_POSITION                      0x00000006
#define _PORTG_RG6_MASK                          0x00000040
#define _PORTG_RG6_LENGTH                        0x00000001

#define _PORTG_RG7_POSITION                      0x00000007
#define _PORTG_RG7_MASK                          0x00000080
#define _PORTG_RG7_LENGTH                        0x00000001

#define _PORTG_RG8_POSITION                      0x00000008
#define _PORTG_RG8_MASK                          0x00000100
#define _PORTG_RG8_LENGTH                        0x00000001

#define _PORTG_RG9_POSITION                      0x00000009
#define _PORTG_RG9_MASK                          0x00000200
#define _PORTG_RG9_LENGTH                        0x00000001

#define _LATG_LATG2_POSITION                     0x00000002
#define _LATG_LATG2_MASK                         0x00000004
#define _LATG_LATG2_LENGTH                       0x00000001

#define _LATG_LATG3_POSITION                     0x00000003
#define _LATG_LATG3_MASK                         0x00000008
#define _LATG_LATG3_LENGTH                       0x00000001

#define _LATG_LATG6_POSITION                     0x00000006
#define _LATG_LATG6_MASK                         0x00000040
#define _LATG_LATG6_LENGTH                       0x00000001

#define _LATG_LATG7_POSITION                     0x00000007
#define _LATG_LATG7_MASK                         0x00000080
#define _LATG_LATG7_LENGTH                       0x00000001

#define _LATG_LATG8_POSITION                     0x00000008
#define _LATG_LATG8_MASK                         0x00000100
#define _LATG_LATG8_LENGTH                       0x00000001

#define _LATG_LATG9_POSITION                     0x00000009
#define _LATG_LATG9_MASK                         0x00000200
#define _LATG_LATG9_LENGTH                       0x00000001

#define _C1RXF0SID_EXIDE_POSITION                0x00000000
#define _C1RXF0SID_EXIDE_MASK                    0x00000001
#define _C1RXF0SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF0SID_SID0_POSITION                 0x00000002
#define _C1RXF0SID_SID0_MASK                     0x00000004
#define _C1RXF0SID_SID0_LENGTH                   0x00000001

#define _C1RXF0SID_SID1_POSITION                 0x00000003
#define _C1RXF0SID_SID1_MASK                     0x00000008
#define _C1RXF0SID_SID1_LENGTH                   0x00000001

#define _C1RXF0SID_SID2_POSITION                 0x00000004
#define _C1RXF0SID_SID2_MASK                     0x00000010
#define _C1RXF0SID_SID2_LENGTH                   0x00000001

#define _C1RXF0SID_SID3_POSITION                 0x00000005
#define _C1RXF0SID_SID3_MASK                     0x00000020
#define _C1RXF0SID_SID3_LENGTH                   0x00000001

#define _C1RXF0SID_SID4_POSITION                 0x00000006
#define _C1RXF0SID_SID4_MASK                     0x00000040
#define _C1RXF0SID_SID4_LENGTH                   0x00000001

#define _C1RXF0SID_SID5_POSITION                 0x00000007
#define _C1RXF0SID_SID5_MASK                     0x00000080
#define _C1RXF0SID_SID5_LENGTH                   0x00000001

#define _C1RXF0SID_SID6_POSITION                 0x00000008
#define _C1RXF0SID_SID6_MASK                     0x00000100
#define _C1RXF0SID_SID6_LENGTH                   0x00000001

#define _C1RXF0SID_SID7_POSITION                 0x00000009
#define _C1RXF0SID_SID7_MASK                     0x00000200
#define _C1RXF0SID_SID7_LENGTH                   0x00000001

#define _C1RXF0SID_SID8_POSITION                 0x0000000A
#define _C1RXF0SID_SID8_MASK                     0x00000400
#define _C1RXF0SID_SID8_LENGTH                   0x00000001

#define _C1RXF0SID_SID9_POSITION                 0x0000000B
#define _C1RXF0SID_SID9_MASK                     0x00000800
#define _C1RXF0SID_SID9_LENGTH                   0x00000001

#define _C1RXF0SID_SID10_POSITION                0x0000000C
#define _C1RXF0SID_SID10_MASK                    0x00001000
#define _C1RXF0SID_SID10_LENGTH                  0x00000001

#define _C1RXF0SID_SID_POSITION                  0x00000002
#define _C1RXF0SID_SID_MASK                      0x00001FFC
#define _C1RXF0SID_SID_LENGTH                    0x0000000B

#define _C1RXF0EIDH_EID6_POSITION                0x00000000
#define _C1RXF0EIDH_EID6_MASK                    0x00000001
#define _C1RXF0EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF0EIDH_EID7_POSITION                0x00000001
#define _C1RXF0EIDH_EID7_MASK                    0x00000002
#define _C1RXF0EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF0EIDH_EID8_POSITION                0x00000002
#define _C1RXF0EIDH_EID8_MASK                    0x00000004
#define _C1RXF0EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF0EIDH_EID9_POSITION                0x00000003
#define _C1RXF0EIDH_EID9_MASK                    0x00000008
#define _C1RXF0EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF0EIDH_EID10_POSITION               0x00000004
#define _C1RXF0EIDH_EID10_MASK                   0x00000010
#define _C1RXF0EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID11_POSITION               0x00000005
#define _C1RXF0EIDH_EID11_MASK                   0x00000020
#define _C1RXF0EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID12_POSITION               0x00000006
#define _C1RXF0EIDH_EID12_MASK                   0x00000040
#define _C1RXF0EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID13_POSITION               0x00000007
#define _C1RXF0EIDH_EID13_MASK                   0x00000080
#define _C1RXF0EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID14_POSITION               0x00000008
#define _C1RXF0EIDH_EID14_MASK                   0x00000100
#define _C1RXF0EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID15_POSITION               0x00000009
#define _C1RXF0EIDH_EID15_MASK                   0x00000200
#define _C1RXF0EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID16_POSITION               0x0000000A
#define _C1RXF0EIDH_EID16_MASK                   0x00000400
#define _C1RXF0EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF0EIDH_EID17_POSITION               0x0000000B
#define _C1RXF0EIDH_EID17_MASK                   0x00000800
#define _C1RXF0EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF0EIDL_EID0_POSITION                0x0000000A
#define _C1RXF0EIDL_EID0_MASK                    0x00000400
#define _C1RXF0EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID1_POSITION                0x0000000B
#define _C1RXF0EIDL_EID1_MASK                    0x00000800
#define _C1RXF0EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID2_POSITION                0x0000000C
#define _C1RXF0EIDL_EID2_MASK                    0x00001000
#define _C1RXF0EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID3_POSITION                0x0000000D
#define _C1RXF0EIDL_EID3_MASK                    0x00002000
#define _C1RXF0EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID4_POSITION                0x0000000E
#define _C1RXF0EIDL_EID4_MASK                    0x00004000
#define _C1RXF0EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID5_POSITION                0x0000000F
#define _C1RXF0EIDL_EID5_MASK                    0x00008000
#define _C1RXF0EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF0EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF0EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF0EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXF1SID_EXIDE_POSITION                0x00000000
#define _C1RXF1SID_EXIDE_MASK                    0x00000001
#define _C1RXF1SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF1SID_SID0_POSITION                 0x00000002
#define _C1RXF1SID_SID0_MASK                     0x00000004
#define _C1RXF1SID_SID0_LENGTH                   0x00000001

#define _C1RXF1SID_SID1_POSITION                 0x00000003
#define _C1RXF1SID_SID1_MASK                     0x00000008
#define _C1RXF1SID_SID1_LENGTH                   0x00000001

#define _C1RXF1SID_SID2_POSITION                 0x00000004
#define _C1RXF1SID_SID2_MASK                     0x00000010
#define _C1RXF1SID_SID2_LENGTH                   0x00000001

#define _C1RXF1SID_SID3_POSITION                 0x00000005
#define _C1RXF1SID_SID3_MASK                     0x00000020
#define _C1RXF1SID_SID3_LENGTH                   0x00000001

#define _C1RXF1SID_SID4_POSITION                 0x00000006
#define _C1RXF1SID_SID4_MASK                     0x00000040
#define _C1RXF1SID_SID4_LENGTH                   0x00000001

#define _C1RXF1SID_SID5_POSITION                 0x00000007
#define _C1RXF1SID_SID5_MASK                     0x00000080
#define _C1RXF1SID_SID5_LENGTH                   0x00000001

#define _C1RXF1SID_SID6_POSITION                 0x00000008
#define _C1RXF1SID_SID6_MASK                     0x00000100
#define _C1RXF1SID_SID6_LENGTH                   0x00000001

#define _C1RXF1SID_SID7_POSITION                 0x00000009
#define _C1RXF1SID_SID7_MASK                     0x00000200
#define _C1RXF1SID_SID7_LENGTH                   0x00000001

#define _C1RXF1SID_SID8_POSITION                 0x0000000A
#define _C1RXF1SID_SID8_MASK                     0x00000400
#define _C1RXF1SID_SID8_LENGTH                   0x00000001

#define _C1RXF1SID_SID9_POSITION                 0x0000000B
#define _C1RXF1SID_SID9_MASK                     0x00000800
#define _C1RXF1SID_SID9_LENGTH                   0x00000001

#define _C1RXF1SID_SID10_POSITION                0x0000000C
#define _C1RXF1SID_SID10_MASK                    0x00001000
#define _C1RXF1SID_SID10_LENGTH                  0x00000001

#define _C1RXF1SID_SID_POSITION                  0x00000002
#define _C1RXF1SID_SID_MASK                      0x00001FFC
#define _C1RXF1SID_SID_LENGTH                    0x0000000B

#define _C1RXF1EIDH_EID6_POSITION                0x00000000
#define _C1RXF1EIDH_EID6_MASK                    0x00000001
#define _C1RXF1EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF1EIDH_EID7_POSITION                0x00000001
#define _C1RXF1EIDH_EID7_MASK                    0x00000002
#define _C1RXF1EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF1EIDH_EID8_POSITION                0x00000002
#define _C1RXF1EIDH_EID8_MASK                    0x00000004
#define _C1RXF1EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF1EIDH_EID9_POSITION                0x00000003
#define _C1RXF1EIDH_EID9_MASK                    0x00000008
#define _C1RXF1EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF1EIDH_EID10_POSITION               0x00000004
#define _C1RXF1EIDH_EID10_MASK                   0x00000010
#define _C1RXF1EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID11_POSITION               0x00000005
#define _C1RXF1EIDH_EID11_MASK                   0x00000020
#define _C1RXF1EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID12_POSITION               0x00000006
#define _C1RXF1EIDH_EID12_MASK                   0x00000040
#define _C1RXF1EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID13_POSITION               0x00000007
#define _C1RXF1EIDH_EID13_MASK                   0x00000080
#define _C1RXF1EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID14_POSITION               0x00000008
#define _C1RXF1EIDH_EID14_MASK                   0x00000100
#define _C1RXF1EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID15_POSITION               0x00000009
#define _C1RXF1EIDH_EID15_MASK                   0x00000200
#define _C1RXF1EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID16_POSITION               0x0000000A
#define _C1RXF1EIDH_EID16_MASK                   0x00000400
#define _C1RXF1EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF1EIDH_EID17_POSITION               0x0000000B
#define _C1RXF1EIDH_EID17_MASK                   0x00000800
#define _C1RXF1EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF1EIDL_EID0_POSITION                0x0000000A
#define _C1RXF1EIDL_EID0_MASK                    0x00000400
#define _C1RXF1EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID1_POSITION                0x0000000B
#define _C1RXF1EIDL_EID1_MASK                    0x00000800
#define _C1RXF1EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID2_POSITION                0x0000000C
#define _C1RXF1EIDL_EID2_MASK                    0x00001000
#define _C1RXF1EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID3_POSITION                0x0000000D
#define _C1RXF1EIDL_EID3_MASK                    0x00002000
#define _C1RXF1EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID4_POSITION                0x0000000E
#define _C1RXF1EIDL_EID4_MASK                    0x00004000
#define _C1RXF1EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID5_POSITION                0x0000000F
#define _C1RXF1EIDL_EID5_MASK                    0x00008000
#define _C1RXF1EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF1EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF1EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF1EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXF2SID_EXIDE_POSITION                0x00000000
#define _C1RXF2SID_EXIDE_MASK                    0x00000001
#define _C1RXF2SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF2SID_SID0_POSITION                 0x00000002
#define _C1RXF2SID_SID0_MASK                     0x00000004
#define _C1RXF2SID_SID0_LENGTH                   0x00000001

#define _C1RXF2SID_SID1_POSITION                 0x00000003
#define _C1RXF2SID_SID1_MASK                     0x00000008
#define _C1RXF2SID_SID1_LENGTH                   0x00000001

#define _C1RXF2SID_SID2_POSITION                 0x00000004
#define _C1RXF2SID_SID2_MASK                     0x00000010
#define _C1RXF2SID_SID2_LENGTH                   0x00000001

#define _C1RXF2SID_SID3_POSITION                 0x00000005
#define _C1RXF2SID_SID3_MASK                     0x00000020
#define _C1RXF2SID_SID3_LENGTH                   0x00000001

#define _C1RXF2SID_SID4_POSITION                 0x00000006
#define _C1RXF2SID_SID4_MASK                     0x00000040
#define _C1RXF2SID_SID4_LENGTH                   0x00000001

#define _C1RXF2SID_SID5_POSITION                 0x00000007
#define _C1RXF2SID_SID5_MASK                     0x00000080
#define _C1RXF2SID_SID5_LENGTH                   0x00000001

#define _C1RXF2SID_SID6_POSITION                 0x00000008
#define _C1RXF2SID_SID6_MASK                     0x00000100
#define _C1RXF2SID_SID6_LENGTH                   0x00000001

#define _C1RXF2SID_SID7_POSITION                 0x00000009
#define _C1RXF2SID_SID7_MASK                     0x00000200
#define _C1RXF2SID_SID7_LENGTH                   0x00000001

#define _C1RXF2SID_SID8_POSITION                 0x0000000A
#define _C1RXF2SID_SID8_MASK                     0x00000400
#define _C1RXF2SID_SID8_LENGTH                   0x00000001

#define _C1RXF2SID_SID9_POSITION                 0x0000000B
#define _C1RXF2SID_SID9_MASK                     0x00000800
#define _C1RXF2SID_SID9_LENGTH                   0x00000001

#define _C1RXF2SID_SID10_POSITION                0x0000000C
#define _C1RXF2SID_SID10_MASK                    0x00001000
#define _C1RXF2SID_SID10_LENGTH                  0x00000001

#define _C1RXF2SID_SID_POSITION                  0x00000002
#define _C1RXF2SID_SID_MASK                      0x00001FFC
#define _C1RXF2SID_SID_LENGTH                    0x0000000B

#define _C1RXF2EIDH_EID6_POSITION                0x00000000
#define _C1RXF2EIDH_EID6_MASK                    0x00000001
#define _C1RXF2EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF2EIDH_EID7_POSITION                0x00000001
#define _C1RXF2EIDH_EID7_MASK                    0x00000002
#define _C1RXF2EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF2EIDH_EID8_POSITION                0x00000002
#define _C1RXF2EIDH_EID8_MASK                    0x00000004
#define _C1RXF2EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF2EIDH_EID9_POSITION                0x00000003
#define _C1RXF2EIDH_EID9_MASK                    0x00000008
#define _C1RXF2EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF2EIDH_EID10_POSITION               0x00000004
#define _C1RXF2EIDH_EID10_MASK                   0x00000010
#define _C1RXF2EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID11_POSITION               0x00000005
#define _C1RXF2EIDH_EID11_MASK                   0x00000020
#define _C1RXF2EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID12_POSITION               0x00000006
#define _C1RXF2EIDH_EID12_MASK                   0x00000040
#define _C1RXF2EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID13_POSITION               0x00000007
#define _C1RXF2EIDH_EID13_MASK                   0x00000080
#define _C1RXF2EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID14_POSITION               0x00000008
#define _C1RXF2EIDH_EID14_MASK                   0x00000100
#define _C1RXF2EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID15_POSITION               0x00000009
#define _C1RXF2EIDH_EID15_MASK                   0x00000200
#define _C1RXF2EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID16_POSITION               0x0000000A
#define _C1RXF2EIDH_EID16_MASK                   0x00000400
#define _C1RXF2EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF2EIDH_EID17_POSITION               0x0000000B
#define _C1RXF2EIDH_EID17_MASK                   0x00000800
#define _C1RXF2EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF2EIDL_EID0_POSITION                0x0000000A
#define _C1RXF2EIDL_EID0_MASK                    0x00000400
#define _C1RXF2EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID1_POSITION                0x0000000B
#define _C1RXF2EIDL_EID1_MASK                    0x00000800
#define _C1RXF2EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID2_POSITION                0x0000000C
#define _C1RXF2EIDL_EID2_MASK                    0x00001000
#define _C1RXF2EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID3_POSITION                0x0000000D
#define _C1RXF2EIDL_EID3_MASK                    0x00002000
#define _C1RXF2EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID4_POSITION                0x0000000E
#define _C1RXF2EIDL_EID4_MASK                    0x00004000
#define _C1RXF2EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID5_POSITION                0x0000000F
#define _C1RXF2EIDL_EID5_MASK                    0x00008000
#define _C1RXF2EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF2EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF2EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF2EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXF3SID_EXIDE_POSITION                0x00000000
#define _C1RXF3SID_EXIDE_MASK                    0x00000001
#define _C1RXF3SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF3SID_SID0_POSITION                 0x00000002
#define _C1RXF3SID_SID0_MASK                     0x00000004
#define _C1RXF3SID_SID0_LENGTH                   0x00000001

#define _C1RXF3SID_SID1_POSITION                 0x00000003
#define _C1RXF3SID_SID1_MASK                     0x00000008
#define _C1RXF3SID_SID1_LENGTH                   0x00000001

#define _C1RXF3SID_SID2_POSITION                 0x00000004
#define _C1RXF3SID_SID2_MASK                     0x00000010
#define _C1RXF3SID_SID2_LENGTH                   0x00000001

#define _C1RXF3SID_SID3_POSITION                 0x00000005
#define _C1RXF3SID_SID3_MASK                     0x00000020
#define _C1RXF3SID_SID3_LENGTH                   0x00000001

#define _C1RXF3SID_SID4_POSITION                 0x00000006
#define _C1RXF3SID_SID4_MASK                     0x00000040
#define _C1RXF3SID_SID4_LENGTH                   0x00000001

#define _C1RXF3SID_SID5_POSITION                 0x00000007
#define _C1RXF3SID_SID5_MASK                     0x00000080
#define _C1RXF3SID_SID5_LENGTH                   0x00000001

#define _C1RXF3SID_SID6_POSITION                 0x00000008
#define _C1RXF3SID_SID6_MASK                     0x00000100
#define _C1RXF3SID_SID6_LENGTH                   0x00000001

#define _C1RXF3SID_SID7_POSITION                 0x00000009
#define _C1RXF3SID_SID7_MASK                     0x00000200
#define _C1RXF3SID_SID7_LENGTH                   0x00000001

#define _C1RXF3SID_SID8_POSITION                 0x0000000A
#define _C1RXF3SID_SID8_MASK                     0x00000400
#define _C1RXF3SID_SID8_LENGTH                   0x00000001

#define _C1RXF3SID_SID9_POSITION                 0x0000000B
#define _C1RXF3SID_SID9_MASK                     0x00000800
#define _C1RXF3SID_SID9_LENGTH                   0x00000001

#define _C1RXF3SID_SID10_POSITION                0x0000000C
#define _C1RXF3SID_SID10_MASK                    0x00001000
#define _C1RXF3SID_SID10_LENGTH                  0x00000001

#define _C1RXF3SID_SID_POSITION                  0x00000002
#define _C1RXF3SID_SID_MASK                      0x00001FFC
#define _C1RXF3SID_SID_LENGTH                    0x0000000B

#define _C1RXF3EIDH_EID6_POSITION                0x00000000
#define _C1RXF3EIDH_EID6_MASK                    0x00000001
#define _C1RXF3EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF3EIDH_EID7_POSITION                0x00000001
#define _C1RXF3EIDH_EID7_MASK                    0x00000002
#define _C1RXF3EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF3EIDH_EID8_POSITION                0x00000002
#define _C1RXF3EIDH_EID8_MASK                    0x00000004
#define _C1RXF3EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF3EIDH_EID9_POSITION                0x00000003
#define _C1RXF3EIDH_EID9_MASK                    0x00000008
#define _C1RXF3EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF3EIDH_EID10_POSITION               0x00000004
#define _C1RXF3EIDH_EID10_MASK                   0x00000010
#define _C1RXF3EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID11_POSITION               0x00000005
#define _C1RXF3EIDH_EID11_MASK                   0x00000020
#define _C1RXF3EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID12_POSITION               0x00000006
#define _C1RXF3EIDH_EID12_MASK                   0x00000040
#define _C1RXF3EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID13_POSITION               0x00000007
#define _C1RXF3EIDH_EID13_MASK                   0x00000080
#define _C1RXF3EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID14_POSITION               0x00000008
#define _C1RXF3EIDH_EID14_MASK                   0x00000100
#define _C1RXF3EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID15_POSITION               0x00000009
#define _C1RXF3EIDH_EID15_MASK                   0x00000200
#define _C1RXF3EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID16_POSITION               0x0000000A
#define _C1RXF3EIDH_EID16_MASK                   0x00000400
#define _C1RXF3EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF3EIDH_EID17_POSITION               0x0000000B
#define _C1RXF3EIDH_EID17_MASK                   0x00000800
#define _C1RXF3EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF3EIDL_EID0_POSITION                0x0000000A
#define _C1RXF3EIDL_EID0_MASK                    0x00000400
#define _C1RXF3EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID1_POSITION                0x0000000B
#define _C1RXF3EIDL_EID1_MASK                    0x00000800
#define _C1RXF3EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID2_POSITION                0x0000000C
#define _C1RXF3EIDL_EID2_MASK                    0x00001000
#define _C1RXF3EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID3_POSITION                0x0000000D
#define _C1RXF3EIDL_EID3_MASK                    0x00002000
#define _C1RXF3EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID4_POSITION                0x0000000E
#define _C1RXF3EIDL_EID4_MASK                    0x00004000
#define _C1RXF3EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID5_POSITION                0x0000000F
#define _C1RXF3EIDL_EID5_MASK                    0x00008000
#define _C1RXF3EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF3EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF3EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF3EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXF4SID_EXIDE_POSITION                0x00000000
#define _C1RXF4SID_EXIDE_MASK                    0x00000001
#define _C1RXF4SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF4SID_SID0_POSITION                 0x00000002
#define _C1RXF4SID_SID0_MASK                     0x00000004
#define _C1RXF4SID_SID0_LENGTH                   0x00000001

#define _C1RXF4SID_SID1_POSITION                 0x00000003
#define _C1RXF4SID_SID1_MASK                     0x00000008
#define _C1RXF4SID_SID1_LENGTH                   0x00000001

#define _C1RXF4SID_SID2_POSITION                 0x00000004
#define _C1RXF4SID_SID2_MASK                     0x00000010
#define _C1RXF4SID_SID2_LENGTH                   0x00000001

#define _C1RXF4SID_SID3_POSITION                 0x00000005
#define _C1RXF4SID_SID3_MASK                     0x00000020
#define _C1RXF4SID_SID3_LENGTH                   0x00000001

#define _C1RXF4SID_SID4_POSITION                 0x00000006
#define _C1RXF4SID_SID4_MASK                     0x00000040
#define _C1RXF4SID_SID4_LENGTH                   0x00000001

#define _C1RXF4SID_SID5_POSITION                 0x00000007
#define _C1RXF4SID_SID5_MASK                     0x00000080
#define _C1RXF4SID_SID5_LENGTH                   0x00000001

#define _C1RXF4SID_SID6_POSITION                 0x00000008
#define _C1RXF4SID_SID6_MASK                     0x00000100
#define _C1RXF4SID_SID6_LENGTH                   0x00000001

#define _C1RXF4SID_SID7_POSITION                 0x00000009
#define _C1RXF4SID_SID7_MASK                     0x00000200
#define _C1RXF4SID_SID7_LENGTH                   0x00000001

#define _C1RXF4SID_SID8_POSITION                 0x0000000A
#define _C1RXF4SID_SID8_MASK                     0x00000400
#define _C1RXF4SID_SID8_LENGTH                   0x00000001

#define _C1RXF4SID_SID9_POSITION                 0x0000000B
#define _C1RXF4SID_SID9_MASK                     0x00000800
#define _C1RXF4SID_SID9_LENGTH                   0x00000001

#define _C1RXF4SID_SID10_POSITION                0x0000000C
#define _C1RXF4SID_SID10_MASK                    0x00001000
#define _C1RXF4SID_SID10_LENGTH                  0x00000001

#define _C1RXF4SID_SID_POSITION                  0x00000002
#define _C1RXF4SID_SID_MASK                      0x00001FFC
#define _C1RXF4SID_SID_LENGTH                    0x0000000B

#define _C1RXF4EIDH_EID6_POSITION                0x00000000
#define _C1RXF4EIDH_EID6_MASK                    0x00000001
#define _C1RXF4EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF4EIDH_EID7_POSITION                0x00000001
#define _C1RXF4EIDH_EID7_MASK                    0x00000002
#define _C1RXF4EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF4EIDH_EID8_POSITION                0x00000002
#define _C1RXF4EIDH_EID8_MASK                    0x00000004
#define _C1RXF4EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF4EIDH_EID9_POSITION                0x00000003
#define _C1RXF4EIDH_EID9_MASK                    0x00000008
#define _C1RXF4EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF4EIDH_EID10_POSITION               0x00000004
#define _C1RXF4EIDH_EID10_MASK                   0x00000010
#define _C1RXF4EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID11_POSITION               0x00000005
#define _C1RXF4EIDH_EID11_MASK                   0x00000020
#define _C1RXF4EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID12_POSITION               0x00000006
#define _C1RXF4EIDH_EID12_MASK                   0x00000040
#define _C1RXF4EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID13_POSITION               0x00000007
#define _C1RXF4EIDH_EID13_MASK                   0x00000080
#define _C1RXF4EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID14_POSITION               0x00000008
#define _C1RXF4EIDH_EID14_MASK                   0x00000100
#define _C1RXF4EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID15_POSITION               0x00000009
#define _C1RXF4EIDH_EID15_MASK                   0x00000200
#define _C1RXF4EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID16_POSITION               0x0000000A
#define _C1RXF4EIDH_EID16_MASK                   0x00000400
#define _C1RXF4EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF4EIDH_EID17_POSITION               0x0000000B
#define _C1RXF4EIDH_EID17_MASK                   0x00000800
#define _C1RXF4EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF4EIDL_EID0_POSITION                0x0000000A
#define _C1RXF4EIDL_EID0_MASK                    0x00000400
#define _C1RXF4EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID1_POSITION                0x0000000B
#define _C1RXF4EIDL_EID1_MASK                    0x00000800
#define _C1RXF4EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID2_POSITION                0x0000000C
#define _C1RXF4EIDL_EID2_MASK                    0x00001000
#define _C1RXF4EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID3_POSITION                0x0000000D
#define _C1RXF4EIDL_EID3_MASK                    0x00002000
#define _C1RXF4EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID4_POSITION                0x0000000E
#define _C1RXF4EIDL_EID4_MASK                    0x00004000
#define _C1RXF4EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID5_POSITION                0x0000000F
#define _C1RXF4EIDL_EID5_MASK                    0x00008000
#define _C1RXF4EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF4EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF4EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF4EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXF5SID_EXIDE_POSITION                0x00000000
#define _C1RXF5SID_EXIDE_MASK                    0x00000001
#define _C1RXF5SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF5SID_SID0_POSITION                 0x00000002
#define _C1RXF5SID_SID0_MASK                     0x00000004
#define _C1RXF5SID_SID0_LENGTH                   0x00000001

#define _C1RXF5SID_SID1_POSITION                 0x00000003
#define _C1RXF5SID_SID1_MASK                     0x00000008
#define _C1RXF5SID_SID1_LENGTH                   0x00000001

#define _C1RXF5SID_SID2_POSITION                 0x00000004
#define _C1RXF5SID_SID2_MASK                     0x00000010
#define _C1RXF5SID_SID2_LENGTH                   0x00000001

#define _C1RXF5SID_SID3_POSITION                 0x00000005
#define _C1RXF5SID_SID3_MASK                     0x00000020
#define _C1RXF5SID_SID3_LENGTH                   0x00000001

#define _C1RXF5SID_SID4_POSITION                 0x00000006
#define _C1RXF5SID_SID4_MASK                     0x00000040
#define _C1RXF5SID_SID4_LENGTH                   0x00000001

#define _C1RXF5SID_SID5_POSITION                 0x00000007
#define _C1RXF5SID_SID5_MASK                     0x00000080
#define _C1RXF5SID_SID5_LENGTH                   0x00000001

#define _C1RXF5SID_SID6_POSITION                 0x00000008
#define _C1RXF5SID_SID6_MASK                     0x00000100
#define _C1RXF5SID_SID6_LENGTH                   0x00000001

#define _C1RXF5SID_SID7_POSITION                 0x00000009
#define _C1RXF5SID_SID7_MASK                     0x00000200
#define _C1RXF5SID_SID7_LENGTH                   0x00000001

#define _C1RXF5SID_SID8_POSITION                 0x0000000A
#define _C1RXF5SID_SID8_MASK                     0x00000400
#define _C1RXF5SID_SID8_LENGTH                   0x00000001

#define _C1RXF5SID_SID9_POSITION                 0x0000000B
#define _C1RXF5SID_SID9_MASK                     0x00000800
#define _C1RXF5SID_SID9_LENGTH                   0x00000001

#define _C1RXF5SID_SID10_POSITION                0x0000000C
#define _C1RXF5SID_SID10_MASK                    0x00001000
#define _C1RXF5SID_SID10_LENGTH                  0x00000001

#define _C1RXF5SID_SID_POSITION                  0x00000002
#define _C1RXF5SID_SID_MASK                      0x00001FFC
#define _C1RXF5SID_SID_LENGTH                    0x0000000B

#define _C1RXF5EIDH_EID6_POSITION                0x00000000
#define _C1RXF5EIDH_EID6_MASK                    0x00000001
#define _C1RXF5EIDH_EID6_LENGTH                  0x00000001

#define _C1RXF5EIDH_EID7_POSITION                0x00000001
#define _C1RXF5EIDH_EID7_MASK                    0x00000002
#define _C1RXF5EIDH_EID7_LENGTH                  0x00000001

#define _C1RXF5EIDH_EID8_POSITION                0x00000002
#define _C1RXF5EIDH_EID8_MASK                    0x00000004
#define _C1RXF5EIDH_EID8_LENGTH                  0x00000001

#define _C1RXF5EIDH_EID9_POSITION                0x00000003
#define _C1RXF5EIDH_EID9_MASK                    0x00000008
#define _C1RXF5EIDH_EID9_LENGTH                  0x00000001

#define _C1RXF5EIDH_EID10_POSITION               0x00000004
#define _C1RXF5EIDH_EID10_MASK                   0x00000010
#define _C1RXF5EIDH_EID10_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID11_POSITION               0x00000005
#define _C1RXF5EIDH_EID11_MASK                   0x00000020
#define _C1RXF5EIDH_EID11_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID12_POSITION               0x00000006
#define _C1RXF5EIDH_EID12_MASK                   0x00000040
#define _C1RXF5EIDH_EID12_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID13_POSITION               0x00000007
#define _C1RXF5EIDH_EID13_MASK                   0x00000080
#define _C1RXF5EIDH_EID13_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID14_POSITION               0x00000008
#define _C1RXF5EIDH_EID14_MASK                   0x00000100
#define _C1RXF5EIDH_EID14_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID15_POSITION               0x00000009
#define _C1RXF5EIDH_EID15_MASK                   0x00000200
#define _C1RXF5EIDH_EID15_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID16_POSITION               0x0000000A
#define _C1RXF5EIDH_EID16_MASK                   0x00000400
#define _C1RXF5EIDH_EID16_LENGTH                 0x00000001

#define _C1RXF5EIDH_EID17_POSITION               0x0000000B
#define _C1RXF5EIDH_EID17_MASK                   0x00000800
#define _C1RXF5EIDH_EID17_LENGTH                 0x00000001

#define _C1RXF5EIDL_EID0_POSITION                0x0000000A
#define _C1RXF5EIDL_EID0_MASK                    0x00000400
#define _C1RXF5EIDL_EID0_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID1_POSITION                0x0000000B
#define _C1RXF5EIDL_EID1_MASK                    0x00000800
#define _C1RXF5EIDL_EID1_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID2_POSITION                0x0000000C
#define _C1RXF5EIDL_EID2_MASK                    0x00001000
#define _C1RXF5EIDL_EID2_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID3_POSITION                0x0000000D
#define _C1RXF5EIDL_EID3_MASK                    0x00002000
#define _C1RXF5EIDL_EID3_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID4_POSITION                0x0000000E
#define _C1RXF5EIDL_EID4_MASK                    0x00004000
#define _C1RXF5EIDL_EID4_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID5_POSITION                0x0000000F
#define _C1RXF5EIDL_EID5_MASK                    0x00008000
#define _C1RXF5EIDL_EID5_LENGTH                  0x00000001

#define _C1RXF5EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXF5EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXF5EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXM0SID_MIDE_POSITION                 0x00000000
#define _C1RXM0SID_MIDE_MASK                     0x00000001
#define _C1RXM0SID_MIDE_LENGTH                   0x00000001

#define _C1RXM0SID_SID0_POSITION                 0x00000002
#define _C1RXM0SID_SID0_MASK                     0x00000004
#define _C1RXM0SID_SID0_LENGTH                   0x00000001

#define _C1RXM0SID_SID1_POSITION                 0x00000003
#define _C1RXM0SID_SID1_MASK                     0x00000008
#define _C1RXM0SID_SID1_LENGTH                   0x00000001

#define _C1RXM0SID_SID2_POSITION                 0x00000004
#define _C1RXM0SID_SID2_MASK                     0x00000010
#define _C1RXM0SID_SID2_LENGTH                   0x00000001

#define _C1RXM0SID_SID3_POSITION                 0x00000005
#define _C1RXM0SID_SID3_MASK                     0x00000020
#define _C1RXM0SID_SID3_LENGTH                   0x00000001

#define _C1RXM0SID_SID4_POSITION                 0x00000006
#define _C1RXM0SID_SID4_MASK                     0x00000040
#define _C1RXM0SID_SID4_LENGTH                   0x00000001

#define _C1RXM0SID_SID5_POSITION                 0x00000007
#define _C1RXM0SID_SID5_MASK                     0x00000080
#define _C1RXM0SID_SID5_LENGTH                   0x00000001

#define _C1RXM0SID_SID6_POSITION                 0x00000008
#define _C1RXM0SID_SID6_MASK                     0x00000100
#define _C1RXM0SID_SID6_LENGTH                   0x00000001

#define _C1RXM0SID_SID7_POSITION                 0x00000009
#define _C1RXM0SID_SID7_MASK                     0x00000200
#define _C1RXM0SID_SID7_LENGTH                   0x00000001

#define _C1RXM0SID_SID8_POSITION                 0x0000000A
#define _C1RXM0SID_SID8_MASK                     0x00000400
#define _C1RXM0SID_SID8_LENGTH                   0x00000001

#define _C1RXM0SID_SID9_POSITION                 0x0000000B
#define _C1RXM0SID_SID9_MASK                     0x00000800
#define _C1RXM0SID_SID9_LENGTH                   0x00000001

#define _C1RXM0SID_SID10_POSITION                0x0000000C
#define _C1RXM0SID_SID10_MASK                    0x00001000
#define _C1RXM0SID_SID10_LENGTH                  0x00000001

#define _C1RXM0SID_SID_POSITION                  0x00000002
#define _C1RXM0SID_SID_MASK                      0x00001FFC
#define _C1RXM0SID_SID_LENGTH                    0x0000000B

#define _C1RXM0EIDH_EID6_POSITION                0x00000000
#define _C1RXM0EIDH_EID6_MASK                    0x00000001
#define _C1RXM0EIDH_EID6_LENGTH                  0x00000001

#define _C1RXM0EIDH_EID7_POSITION                0x00000001
#define _C1RXM0EIDH_EID7_MASK                    0x00000002
#define _C1RXM0EIDH_EID7_LENGTH                  0x00000001

#define _C1RXM0EIDH_EID8_POSITION                0x00000002
#define _C1RXM0EIDH_EID8_MASK                    0x00000004
#define _C1RXM0EIDH_EID8_LENGTH                  0x00000001

#define _C1RXM0EIDH_EID9_POSITION                0x00000003
#define _C1RXM0EIDH_EID9_MASK                    0x00000008
#define _C1RXM0EIDH_EID9_LENGTH                  0x00000001

#define _C1RXM0EIDH_EID10_POSITION               0x00000004
#define _C1RXM0EIDH_EID10_MASK                   0x00000010
#define _C1RXM0EIDH_EID10_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID11_POSITION               0x00000005
#define _C1RXM0EIDH_EID11_MASK                   0x00000020
#define _C1RXM0EIDH_EID11_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID12_POSITION               0x00000006
#define _C1RXM0EIDH_EID12_MASK                   0x00000040
#define _C1RXM0EIDH_EID12_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID13_POSITION               0x00000007
#define _C1RXM0EIDH_EID13_MASK                   0x00000080
#define _C1RXM0EIDH_EID13_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID14_POSITION               0x00000008
#define _C1RXM0EIDH_EID14_MASK                   0x00000100
#define _C1RXM0EIDH_EID14_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID15_POSITION               0x00000009
#define _C1RXM0EIDH_EID15_MASK                   0x00000200
#define _C1RXM0EIDH_EID15_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID16_POSITION               0x0000000A
#define _C1RXM0EIDH_EID16_MASK                   0x00000400
#define _C1RXM0EIDH_EID16_LENGTH                 0x00000001

#define _C1RXM0EIDH_EID17_POSITION               0x0000000B
#define _C1RXM0EIDH_EID17_MASK                   0x00000800
#define _C1RXM0EIDH_EID17_LENGTH                 0x00000001

#define _C1RXM0EIDL_EID0_POSITION                0x0000000A
#define _C1RXM0EIDL_EID0_MASK                    0x00000400
#define _C1RXM0EIDL_EID0_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID1_POSITION                0x0000000B
#define _C1RXM0EIDL_EID1_MASK                    0x00000800
#define _C1RXM0EIDL_EID1_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID2_POSITION                0x0000000C
#define _C1RXM0EIDL_EID2_MASK                    0x00001000
#define _C1RXM0EIDL_EID2_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID3_POSITION                0x0000000D
#define _C1RXM0EIDL_EID3_MASK                    0x00002000
#define _C1RXM0EIDL_EID3_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID4_POSITION                0x0000000E
#define _C1RXM0EIDL_EID4_MASK                    0x00004000
#define _C1RXM0EIDL_EID4_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID5_POSITION                0x0000000F
#define _C1RXM0EIDL_EID5_MASK                    0x00008000
#define _C1RXM0EIDL_EID5_LENGTH                  0x00000001

#define _C1RXM0EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXM0EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXM0EIDL_EID5_0_LENGTH                0x00000006

#define _C1RXM1SID_MIDE_POSITION                 0x00000000
#define _C1RXM1SID_MIDE_MASK                     0x00000001
#define _C1RXM1SID_MIDE_LENGTH                   0x00000001

#define _C1RXM1SID_SID0_POSITION                 0x00000002
#define _C1RXM1SID_SID0_MASK                     0x00000004
#define _C1RXM1SID_SID0_LENGTH                   0x00000001

#define _C1RXM1SID_SID1_POSITION                 0x00000003
#define _C1RXM1SID_SID1_MASK                     0x00000008
#define _C1RXM1SID_SID1_LENGTH                   0x00000001

#define _C1RXM1SID_SID2_POSITION                 0x00000004
#define _C1RXM1SID_SID2_MASK                     0x00000010
#define _C1RXM1SID_SID2_LENGTH                   0x00000001

#define _C1RXM1SID_SID3_POSITION                 0x00000005
#define _C1RXM1SID_SID3_MASK                     0x00000020
#define _C1RXM1SID_SID3_LENGTH                   0x00000001

#define _C1RXM1SID_SID4_POSITION                 0x00000006
#define _C1RXM1SID_SID4_MASK                     0x00000040
#define _C1RXM1SID_SID4_LENGTH                   0x00000001

#define _C1RXM1SID_SID5_POSITION                 0x00000007
#define _C1RXM1SID_SID5_MASK                     0x00000080
#define _C1RXM1SID_SID5_LENGTH                   0x00000001

#define _C1RXM1SID_SID6_POSITION                 0x00000008
#define _C1RXM1SID_SID6_MASK                     0x00000100
#define _C1RXM1SID_SID6_LENGTH                   0x00000001

#define _C1RXM1SID_SID7_POSITION                 0x00000009
#define _C1RXM1SID_SID7_MASK                     0x00000200
#define _C1RXM1SID_SID7_LENGTH                   0x00000001

#define _C1RXM1SID_SID8_POSITION                 0x0000000A
#define _C1RXM1SID_SID8_MASK                     0x00000400
#define _C1RXM1SID_SID8_LENGTH                   0x00000001

#define _C1RXM1SID_SID9_POSITION                 0x0000000B
#define _C1RXM1SID_SID9_MASK                     0x00000800
#define _C1RXM1SID_SID9_LENGTH                   0x00000001

#define _C1RXM1SID_SID10_POSITION                0x0000000C
#define _C1RXM1SID_SID10_MASK                    0x00001000
#define _C1RXM1SID_SID10_LENGTH                  0x00000001

#define _C1RXM1SID_SID_POSITION                  0x00000002
#define _C1RXM1SID_SID_MASK                      0x00001FFC
#define _C1RXM1SID_SID_LENGTH                    0x0000000B

#define _C1RXM1EIDH_EID6_POSITION                0x00000000
#define _C1RXM1EIDH_EID6_MASK                    0x00000001
#define _C1RXM1EIDH_EID6_LENGTH                  0x00000001

#define _C1RXM1EIDH_EID7_POSITION                0x00000001
#define _C1RXM1EIDH_EID7_MASK                    0x00000002
#define _C1RXM1EIDH_EID7_LENGTH                  0x00000001

#define _C1RXM1EIDH_EID8_POSITION                0x00000002
#define _C1RXM1EIDH_EID8_MASK                    0x00000004
#define _C1RXM1EIDH_EID8_LENGTH                  0x00000001

#define _C1RXM1EIDH_EID9_POSITION                0x00000003
#define _C1RXM1EIDH_EID9_MASK                    0x00000008
#define _C1RXM1EIDH_EID9_LENGTH                  0x00000001

#define _C1RXM1EIDH_EID10_POSITION               0x00000004
#define _C1RXM1EIDH_EID10_MASK                   0x00000010
#define _C1RXM1EIDH_EID10_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID11_POSITION               0x00000005
#define _C1RXM1EIDH_EID11_MASK                   0x00000020
#define _C1RXM1EIDH_EID11_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID12_POSITION               0x00000006
#define _C1RXM1EIDH_EID12_MASK                   0x00000040
#define _C1RXM1EIDH_EID12_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID13_POSITION               0x00000007
#define _C1RXM1EIDH_EID13_MASK                   0x00000080
#define _C1RXM1EIDH_EID13_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID14_POSITION               0x00000008
#define _C1RXM1EIDH_EID14_MASK                   0x00000100
#define _C1RXM1EIDH_EID14_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID15_POSITION               0x00000009
#define _C1RXM1EIDH_EID15_MASK                   0x00000200
#define _C1RXM1EIDH_EID15_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID16_POSITION               0x0000000A
#define _C1RXM1EIDH_EID16_MASK                   0x00000400
#define _C1RXM1EIDH_EID16_LENGTH                 0x00000001

#define _C1RXM1EIDH_EID17_POSITION               0x0000000B
#define _C1RXM1EIDH_EID17_MASK                   0x00000800
#define _C1RXM1EIDH_EID17_LENGTH                 0x00000001

#define _C1RXM1EIDL_EID0_POSITION                0x0000000A
#define _C1RXM1EIDL_EID0_MASK                    0x00000400
#define _C1RXM1EIDL_EID0_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID1_POSITION                0x0000000B
#define _C1RXM1EIDL_EID1_MASK                    0x00000800
#define _C1RXM1EIDL_EID1_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID2_POSITION                0x0000000C
#define _C1RXM1EIDL_EID2_MASK                    0x00001000
#define _C1RXM1EIDL_EID2_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID3_POSITION                0x0000000D
#define _C1RXM1EIDL_EID3_MASK                    0x00002000
#define _C1RXM1EIDL_EID3_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID4_POSITION                0x0000000E
#define _C1RXM1EIDL_EID4_MASK                    0x00004000
#define _C1RXM1EIDL_EID4_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID5_POSITION                0x0000000F
#define _C1RXM1EIDL_EID5_MASK                    0x00008000
#define _C1RXM1EIDL_EID5_LENGTH                  0x00000001

#define _C1RXM1EIDL_EID5_0_POSITION              0x0000000A
#define _C1RXM1EIDL_EID5_0_MASK                  0x0000FC00
#define _C1RXM1EIDL_EID5_0_LENGTH                0x00000006

#define _C1TX2SID_TXIDE_POSITION                 0x00000000
#define _C1TX2SID_TXIDE_MASK                     0x00000001
#define _C1TX2SID_TXIDE_LENGTH                   0x00000001

#define _C1TX2SID_SRR_POSITION                   0x00000001
#define _C1TX2SID_SRR_MASK                       0x00000002
#define _C1TX2SID_SRR_LENGTH                     0x00000001

#define _C1TX2SID_SID0_POSITION                  0x00000002
#define _C1TX2SID_SID0_MASK                      0x00000004
#define _C1TX2SID_SID0_LENGTH                    0x00000001

#define _C1TX2SID_SID1_POSITION                  0x00000003
#define _C1TX2SID_SID1_MASK                      0x00000008
#define _C1TX2SID_SID1_LENGTH                    0x00000001

#define _C1TX2SID_SID2_POSITION                  0x00000004
#define _C1TX2SID_SID2_MASK                      0x00000010
#define _C1TX2SID_SID2_LENGTH                    0x00000001

#define _C1TX2SID_SID3_POSITION                  0x00000005
#define _C1TX2SID_SID3_MASK                      0x00000020
#define _C1TX2SID_SID3_LENGTH                    0x00000001

#define _C1TX2SID_SID4_POSITION                  0x00000006
#define _C1TX2SID_SID4_MASK                      0x00000040
#define _C1TX2SID_SID4_LENGTH                    0x00000001

#define _C1TX2SID_SID5_POSITION                  0x00000007
#define _C1TX2SID_SID5_MASK                      0x00000080
#define _C1TX2SID_SID5_LENGTH                    0x00000001

#define _C1TX2SID_SID6_POSITION                  0x0000000B
#define _C1TX2SID_SID6_MASK                      0x00000800
#define _C1TX2SID_SID6_LENGTH                    0x00000001

#define _C1TX2SID_SID7_POSITION                  0x0000000C
#define _C1TX2SID_SID7_MASK                      0x00001000
#define _C1TX2SID_SID7_LENGTH                    0x00000001

#define _C1TX2SID_SID8_POSITION                  0x0000000D
#define _C1TX2SID_SID8_MASK                      0x00002000
#define _C1TX2SID_SID8_LENGTH                    0x00000001

#define _C1TX2SID_SID9_POSITION                  0x0000000E
#define _C1TX2SID_SID9_MASK                      0x00004000
#define _C1TX2SID_SID9_LENGTH                    0x00000001

#define _C1TX2SID_SID10_POSITION                 0x0000000F
#define _C1TX2SID_SID10_MASK                     0x00008000
#define _C1TX2SID_SID10_LENGTH                   0x00000001

#define _C1TX2SID_SID5_0_POSITION                0x00000002
#define _C1TX2SID_SID5_0_MASK                    0x000000FC
#define _C1TX2SID_SID5_0_LENGTH                  0x00000006

#define _C1TX2SID_SID10_6_POSITION               0x0000000B
#define _C1TX2SID_SID10_6_MASK                   0x0000F800
#define _C1TX2SID_SID10_6_LENGTH                 0x00000005

#define _C1TX2EID_EID6_POSITION                  0x00000000
#define _C1TX2EID_EID6_MASK                      0x00000001
#define _C1TX2EID_EID6_LENGTH                    0x00000001

#define _C1TX2EID_EID7_POSITION                  0x00000001
#define _C1TX2EID_EID7_MASK                      0x00000002
#define _C1TX2EID_EID7_LENGTH                    0x00000001

#define _C1TX2EID_EID8_POSITION                  0x00000002
#define _C1TX2EID_EID8_MASK                      0x00000004
#define _C1TX2EID_EID8_LENGTH                    0x00000001

#define _C1TX2EID_EID9_POSITION                  0x00000003
#define _C1TX2EID_EID9_MASK                      0x00000008
#define _C1TX2EID_EID9_LENGTH                    0x00000001

#define _C1TX2EID_EID10_POSITION                 0x00000004
#define _C1TX2EID_EID10_MASK                     0x00000010
#define _C1TX2EID_EID10_LENGTH                   0x00000001

#define _C1TX2EID_EID11_POSITION                 0x00000005
#define _C1TX2EID_EID11_MASK                     0x00000020
#define _C1TX2EID_EID11_LENGTH                   0x00000001

#define _C1TX2EID_EID12_POSITION                 0x00000006
#define _C1TX2EID_EID12_MASK                     0x00000040
#define _C1TX2EID_EID12_LENGTH                   0x00000001

#define _C1TX2EID_EID13_POSITION                 0x00000007
#define _C1TX2EID_EID13_MASK                     0x00000080
#define _C1TX2EID_EID13_LENGTH                   0x00000001

#define _C1TX2EID_EID14_POSITION                 0x0000000C
#define _C1TX2EID_EID14_MASK                     0x00001000
#define _C1TX2EID_EID14_LENGTH                   0x00000001

#define _C1TX2EID_EID15_POSITION                 0x0000000D
#define _C1TX2EID_EID15_MASK                     0x00002000
#define _C1TX2EID_EID15_LENGTH                   0x00000001

#define _C1TX2EID_EID16_POSITION                 0x0000000E
#define _C1TX2EID_EID16_MASK                     0x00004000
#define _C1TX2EID_EID16_LENGTH                   0x00000001

#define _C1TX2EID_EID17_POSITION                 0x0000000F
#define _C1TX2EID_EID17_MASK                     0x00008000
#define _C1TX2EID_EID17_LENGTH                   0x00000001

#define _C1TX2EID_EID13_6_POSITION               0x00000000
#define _C1TX2EID_EID13_6_MASK                   0x000000FF
#define _C1TX2EID_EID13_6_LENGTH                 0x00000008

#define _C1TX2EID_EID17_14_POSITION              0x0000000C
#define _C1TX2EID_EID17_14_MASK                  0x0000F000
#define _C1TX2EID_EID17_14_LENGTH                0x00000004

#define _C1TX2DLC_DLC_POSITION                   0x00000003
#define _C1TX2DLC_DLC_MASK                       0x00000078
#define _C1TX2DLC_DLC_LENGTH                     0x00000004

#define _C1TX2DLC_TXRB0_POSITION                 0x00000007
#define _C1TX2DLC_TXRB0_MASK                     0x00000080
#define _C1TX2DLC_TXRB0_LENGTH                   0x00000001

#define _C1TX2DLC_TXRB1_POSITION                 0x00000008
#define _C1TX2DLC_TXRB1_MASK                     0x00000100
#define _C1TX2DLC_TXRB1_LENGTH                   0x00000001

#define _C1TX2DLC_TXRTR_POSITION                 0x00000009
#define _C1TX2DLC_TXRTR_MASK                     0x00000200
#define _C1TX2DLC_TXRTR_LENGTH                   0x00000001

#define _C1TX2DLC_EID0_POSITION                  0x0000000A
#define _C1TX2DLC_EID0_MASK                      0x00000400
#define _C1TX2DLC_EID0_LENGTH                    0x00000001

#define _C1TX2DLC_EID1_POSITION                  0x0000000B
#define _C1TX2DLC_EID1_MASK                      0x00000800
#define _C1TX2DLC_EID1_LENGTH                    0x00000001

#define _C1TX2DLC_EID2_POSITION                  0x0000000C
#define _C1TX2DLC_EID2_MASK                      0x00001000
#define _C1TX2DLC_EID2_LENGTH                    0x00000001

#define _C1TX2DLC_EID3_POSITION                  0x0000000D
#define _C1TX2DLC_EID3_MASK                      0x00002000
#define _C1TX2DLC_EID3_LENGTH                    0x00000001

#define _C1TX2DLC_EID4_POSITION                  0x0000000E
#define _C1TX2DLC_EID4_MASK                      0x00004000
#define _C1TX2DLC_EID4_LENGTH                    0x00000001

#define _C1TX2DLC_EID5_POSITION                  0x0000000F
#define _C1TX2DLC_EID5_MASK                      0x00008000
#define _C1TX2DLC_EID5_LENGTH                    0x00000001

#define _C1TX2DLC_EID5_0_POSITION                0x0000000A
#define _C1TX2DLC_EID5_0_MASK                    0x0000FC00
#define _C1TX2DLC_EID5_0_LENGTH                  0x00000006

#define _C1TX2B1_TXB2D00_POSITION                0x00000000
#define _C1TX2B1_TXB2D00_MASK                    0x00000001
#define _C1TX2B1_TXB2D00_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D01_POSITION                0x00000001
#define _C1TX2B1_TXB2D01_MASK                    0x00000002
#define _C1TX2B1_TXB2D01_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D02_POSITION                0x00000002
#define _C1TX2B1_TXB2D02_MASK                    0x00000004
#define _C1TX2B1_TXB2D02_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D03_POSITION                0x00000003
#define _C1TX2B1_TXB2D03_MASK                    0x00000008
#define _C1TX2B1_TXB2D03_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D04_POSITION                0x00000004
#define _C1TX2B1_TXB2D04_MASK                    0x00000010
#define _C1TX2B1_TXB2D04_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D05_POSITION                0x00000005
#define _C1TX2B1_TXB2D05_MASK                    0x00000020
#define _C1TX2B1_TXB2D05_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D06_POSITION                0x00000006
#define _C1TX2B1_TXB2D06_MASK                    0x00000040
#define _C1TX2B1_TXB2D06_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D07_POSITION                0x00000007
#define _C1TX2B1_TXB2D07_MASK                    0x00000080
#define _C1TX2B1_TXB2D07_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D10_POSITION                0x00000008
#define _C1TX2B1_TXB2D10_MASK                    0x00000100
#define _C1TX2B1_TXB2D10_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D11_POSITION                0x00000009
#define _C1TX2B1_TXB2D11_MASK                    0x00000200
#define _C1TX2B1_TXB2D11_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D12_POSITION                0x0000000A
#define _C1TX2B1_TXB2D12_MASK                    0x00000400
#define _C1TX2B1_TXB2D12_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D13_POSITION                0x0000000B
#define _C1TX2B1_TXB2D13_MASK                    0x00000800
#define _C1TX2B1_TXB2D13_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D14_POSITION                0x0000000C
#define _C1TX2B1_TXB2D14_MASK                    0x00001000
#define _C1TX2B1_TXB2D14_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D15_POSITION                0x0000000D
#define _C1TX2B1_TXB2D15_MASK                    0x00002000
#define _C1TX2B1_TXB2D15_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D16_POSITION                0x0000000E
#define _C1TX2B1_TXB2D16_MASK                    0x00004000
#define _C1TX2B1_TXB2D16_LENGTH                  0x00000001

#define _C1TX2B1_TXB2D17_POSITION                0x0000000F
#define _C1TX2B1_TXB2D17_MASK                    0x00008000
#define _C1TX2B1_TXB2D17_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D20_POSITION                0x00000000
#define _C1TX2B2_TXB2D20_MASK                    0x00000001
#define _C1TX2B2_TXB2D20_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D21_POSITION                0x00000001
#define _C1TX2B2_TXB2D21_MASK                    0x00000002
#define _C1TX2B2_TXB2D21_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D22_POSITION                0x00000002
#define _C1TX2B2_TXB2D22_MASK                    0x00000004
#define _C1TX2B2_TXB2D22_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D23_POSITION                0x00000003
#define _C1TX2B2_TXB2D23_MASK                    0x00000008
#define _C1TX2B2_TXB2D23_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D24_POSITION                0x00000004
#define _C1TX2B2_TXB2D24_MASK                    0x00000010
#define _C1TX2B2_TXB2D24_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D25_POSITION                0x00000005
#define _C1TX2B2_TXB2D25_MASK                    0x00000020
#define _C1TX2B2_TXB2D25_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D26_POSITION                0x00000006
#define _C1TX2B2_TXB2D26_MASK                    0x00000040
#define _C1TX2B2_TXB2D26_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D27_POSITION                0x00000007
#define _C1TX2B2_TXB2D27_MASK                    0x00000080
#define _C1TX2B2_TXB2D27_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D30_POSITION                0x00000008
#define _C1TX2B2_TXB2D30_MASK                    0x00000100
#define _C1TX2B2_TXB2D30_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D31_POSITION                0x00000009
#define _C1TX2B2_TXB2D31_MASK                    0x00000200
#define _C1TX2B2_TXB2D31_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D32_POSITION                0x0000000A
#define _C1TX2B2_TXB2D32_MASK                    0x00000400
#define _C1TX2B2_TXB2D32_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D33_POSITION                0x0000000B
#define _C1TX2B2_TXB2D33_MASK                    0x00000800
#define _C1TX2B2_TXB2D33_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D34_POSITION                0x0000000C
#define _C1TX2B2_TXB2D34_MASK                    0x00001000
#define _C1TX2B2_TXB2D34_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D35_POSITION                0x0000000D
#define _C1TX2B2_TXB2D35_MASK                    0x00002000
#define _C1TX2B2_TXB2D35_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D36_POSITION                0x0000000E
#define _C1TX2B2_TXB2D36_MASK                    0x00004000
#define _C1TX2B2_TXB2D36_LENGTH                  0x00000001

#define _C1TX2B2_TXB2D37_POSITION                0x0000000F
#define _C1TX2B2_TXB2D37_MASK                    0x00008000
#define _C1TX2B2_TXB2D37_LENGTH                  0x00000001

#define _C1TX2B3_TX2B2D40_POSITION               0x00000000
#define _C1TX2B3_TX2B2D40_MASK                   0x00000001
#define _C1TX2B3_TX2B2D40_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D41_POSITION               0x00000001
#define _C1TX2B3_TX2B2D41_MASK                   0x00000002
#define _C1TX2B3_TX2B2D41_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D42_POSITION               0x00000002
#define _C1TX2B3_TX2B2D42_MASK                   0x00000004
#define _C1TX2B3_TX2B2D42_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D43_POSITION               0x00000003
#define _C1TX2B3_TX2B2D43_MASK                   0x00000008
#define _C1TX2B3_TX2B2D43_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D44_POSITION               0x00000004
#define _C1TX2B3_TX2B2D44_MASK                   0x00000010
#define _C1TX2B3_TX2B2D44_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D45_POSITION               0x00000005
#define _C1TX2B3_TX2B2D45_MASK                   0x00000020
#define _C1TX2B3_TX2B2D45_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D46_POSITION               0x00000006
#define _C1TX2B3_TX2B2D46_MASK                   0x00000040
#define _C1TX2B3_TX2B2D46_LENGTH                 0x00000001

#define _C1TX2B3_TX2B2D47_POSITION               0x00000007
#define _C1TX2B3_TX2B2D47_MASK                   0x00000080
#define _C1TX2B3_TX2B2D47_LENGTH                 0x00000001

#define _C1TX2B3_TXB2D50_POSITION                0x00000008
#define _C1TX2B3_TXB2D50_MASK                    0x00000100
#define _C1TX2B3_TXB2D50_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D51_POSITION                0x00000009
#define _C1TX2B3_TXB2D51_MASK                    0x00000200
#define _C1TX2B3_TXB2D51_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D52_POSITION                0x0000000A
#define _C1TX2B3_TXB2D52_MASK                    0x00000400
#define _C1TX2B3_TXB2D52_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D53_POSITION                0x0000000B
#define _C1TX2B3_TXB2D53_MASK                    0x00000800
#define _C1TX2B3_TXB2D53_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D54_POSITION                0x0000000C
#define _C1TX2B3_TXB2D54_MASK                    0x00001000
#define _C1TX2B3_TXB2D54_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D55_POSITION                0x0000000D
#define _C1TX2B3_TXB2D55_MASK                    0x00002000
#define _C1TX2B3_TXB2D55_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D56_POSITION                0x0000000E
#define _C1TX2B3_TXB2D56_MASK                    0x00004000
#define _C1TX2B3_TXB2D56_LENGTH                  0x00000001

#define _C1TX2B3_TXB2D57_POSITION                0x0000000F
#define _C1TX2B3_TXB2D57_MASK                    0x00008000
#define _C1TX2B3_TXB2D57_LENGTH                  0x00000001

#define _C1TX2B4_TX2B2D60_POSITION               0x00000000
#define _C1TX2B4_TX2B2D60_MASK                   0x00000001
#define _C1TX2B4_TX2B2D60_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D61_POSITION               0x00000001
#define _C1TX2B4_TX2B2D61_MASK                   0x00000002
#define _C1TX2B4_TX2B2D61_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D62_POSITION               0x00000002
#define _C1TX2B4_TX2B2D62_MASK                   0x00000004
#define _C1TX2B4_TX2B2D62_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D63_POSITION               0x00000003
#define _C1TX2B4_TX2B2D63_MASK                   0x00000008
#define _C1TX2B4_TX2B2D63_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D64_POSITION               0x00000004
#define _C1TX2B4_TX2B2D64_MASK                   0x00000010
#define _C1TX2B4_TX2B2D64_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D65_POSITION               0x00000005
#define _C1TX2B4_TX2B2D65_MASK                   0x00000020
#define _C1TX2B4_TX2B2D65_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D66_POSITION               0x00000006
#define _C1TX2B4_TX2B2D66_MASK                   0x00000040
#define _C1TX2B4_TX2B2D66_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D67_POSITION               0x00000007
#define _C1TX2B4_TX2B2D67_MASK                   0x00000080
#define _C1TX2B4_TX2B2D67_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D70_POSITION               0x00000008
#define _C1TX2B4_TX2B2D70_MASK                   0x00000100
#define _C1TX2B4_TX2B2D70_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D71_POSITION               0x00000009
#define _C1TX2B4_TX2B2D71_MASK                   0x00000200
#define _C1TX2B4_TX2B2D71_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D72_POSITION               0x0000000A
#define _C1TX2B4_TX2B2D72_MASK                   0x00000400
#define _C1TX2B4_TX2B2D72_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D73_POSITION               0x0000000B
#define _C1TX2B4_TX2B2D73_MASK                   0x00000800
#define _C1TX2B4_TX2B2D73_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D74_POSITION               0x0000000C
#define _C1TX2B4_TX2B2D74_MASK                   0x00001000
#define _C1TX2B4_TX2B2D74_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D75_POSITION               0x0000000D
#define _C1TX2B4_TX2B2D75_MASK                   0x00002000
#define _C1TX2B4_TX2B2D75_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D76_POSITION               0x0000000E
#define _C1TX2B4_TX2B2D76_MASK                   0x00004000
#define _C1TX2B4_TX2B2D76_LENGTH                 0x00000001

#define _C1TX2B4_TX2B2D77_POSITION               0x0000000F
#define _C1TX2B4_TX2B2D77_MASK                   0x00008000
#define _C1TX2B4_TX2B2D77_LENGTH                 0x00000001

#define _C1TX2CON_TXPRI_POSITION                 0x00000000
#define _C1TX2CON_TXPRI_MASK                     0x00000003
#define _C1TX2CON_TXPRI_LENGTH                   0x00000002

#define _C1TX2CON_TXREQ_POSITION                 0x00000003
#define _C1TX2CON_TXREQ_MASK                     0x00000008
#define _C1TX2CON_TXREQ_LENGTH                   0x00000001

#define _C1TX2CON_TXERR_POSITION                 0x00000004
#define _C1TX2CON_TXERR_MASK                     0x00000010
#define _C1TX2CON_TXERR_LENGTH                   0x00000001

#define _C1TX2CON_TXLARB_POSITION                0x00000005
#define _C1TX2CON_TXLARB_MASK                    0x00000020
#define _C1TX2CON_TXLARB_LENGTH                  0x00000001

#define _C1TX2CON_TXABT_POSITION                 0x00000006
#define _C1TX2CON_TXABT_MASK                     0x00000040
#define _C1TX2CON_TXABT_LENGTH                   0x00000001

#define _C1TX2CON_TXPRI0_POSITION                0x00000000
#define _C1TX2CON_TXPRI0_MASK                    0x00000001
#define _C1TX2CON_TXPRI0_LENGTH                  0x00000001

#define _C1TX2CON_TXPRI1_POSITION                0x00000001
#define _C1TX2CON_TXPRI1_MASK                    0x00000002
#define _C1TX2CON_TXPRI1_LENGTH                  0x00000001

#define _C1TX1SID_TXIDE_POSITION                 0x00000000
#define _C1TX1SID_TXIDE_MASK                     0x00000001
#define _C1TX1SID_TXIDE_LENGTH                   0x00000001

#define _C1TX1SID_SRR_POSITION                   0x00000001
#define _C1TX1SID_SRR_MASK                       0x00000002
#define _C1TX1SID_SRR_LENGTH                     0x00000001

#define _C1TX1SID_SID0_POSITION                  0x00000002
#define _C1TX1SID_SID0_MASK                      0x00000004
#define _C1TX1SID_SID0_LENGTH                    0x00000001

#define _C1TX1SID_SID1_POSITION                  0x00000003
#define _C1TX1SID_SID1_MASK                      0x00000008
#define _C1TX1SID_SID1_LENGTH                    0x00000001

#define _C1TX1SID_SID2_POSITION                  0x00000004
#define _C1TX1SID_SID2_MASK                      0x00000010
#define _C1TX1SID_SID2_LENGTH                    0x00000001

#define _C1TX1SID_SID3_POSITION                  0x00000005
#define _C1TX1SID_SID3_MASK                      0x00000020
#define _C1TX1SID_SID3_LENGTH                    0x00000001

#define _C1TX1SID_SID4_POSITION                  0x00000006
#define _C1TX1SID_SID4_MASK                      0x00000040
#define _C1TX1SID_SID4_LENGTH                    0x00000001

#define _C1TX1SID_SID5_POSITION                  0x00000007
#define _C1TX1SID_SID5_MASK                      0x00000080
#define _C1TX1SID_SID5_LENGTH                    0x00000001

#define _C1TX1SID_SID6_POSITION                  0x0000000B
#define _C1TX1SID_SID6_MASK                      0x00000800
#define _C1TX1SID_SID6_LENGTH                    0x00000001

#define _C1TX1SID_SID7_POSITION                  0x0000000C
#define _C1TX1SID_SID7_MASK                      0x00001000
#define _C1TX1SID_SID7_LENGTH                    0x00000001

#define _C1TX1SID_SID8_POSITION                  0x0000000D
#define _C1TX1SID_SID8_MASK                      0x00002000
#define _C1TX1SID_SID8_LENGTH                    0x00000001

#define _C1TX1SID_SID9_POSITION                  0x0000000E
#define _C1TX1SID_SID9_MASK                      0x00004000
#define _C1TX1SID_SID9_LENGTH                    0x00000001

#define _C1TX1SID_SID10_POSITION                 0x0000000F
#define _C1TX1SID_SID10_MASK                     0x00008000
#define _C1TX1SID_SID10_LENGTH                   0x00000001

#define _C1TX1SID_SID5_0_POSITION                0x00000002
#define _C1TX1SID_SID5_0_MASK                    0x000000FC
#define _C1TX1SID_SID5_0_LENGTH                  0x00000006

#define _C1TX1SID_SID10_6_POSITION               0x0000000B
#define _C1TX1SID_SID10_6_MASK                   0x0000F800
#define _C1TX1SID_SID10_6_LENGTH                 0x00000005

#define _C1TX1EID_EID6_POSITION                  0x00000000
#define _C1TX1EID_EID6_MASK                      0x00000001
#define _C1TX1EID_EID6_LENGTH                    0x00000001

#define _C1TX1EID_EID7_POSITION                  0x00000001
#define _C1TX1EID_EID7_MASK                      0x00000002
#define _C1TX1EID_EID7_LENGTH                    0x00000001

#define _C1TX1EID_EID8_POSITION                  0x00000002
#define _C1TX1EID_EID8_MASK                      0x00000004
#define _C1TX1EID_EID8_LENGTH                    0x00000001

#define _C1TX1EID_EID9_POSITION                  0x00000003
#define _C1TX1EID_EID9_MASK                      0x00000008
#define _C1TX1EID_EID9_LENGTH                    0x00000001

#define _C1TX1EID_EID10_POSITION                 0x00000004
#define _C1TX1EID_EID10_MASK                     0x00000010
#define _C1TX1EID_EID10_LENGTH                   0x00000001

#define _C1TX1EID_EID11_POSITION                 0x00000005
#define _C1TX1EID_EID11_MASK                     0x00000020
#define _C1TX1EID_EID11_LENGTH                   0x00000001

#define _C1TX1EID_EID12_POSITION                 0x00000006
#define _C1TX1EID_EID12_MASK                     0x00000040
#define _C1TX1EID_EID12_LENGTH                   0x00000001

#define _C1TX1EID_EID13_POSITION                 0x00000007
#define _C1TX1EID_EID13_MASK                     0x00000080
#define _C1TX1EID_EID13_LENGTH                   0x00000001

#define _C1TX1EID_EID14_POSITION                 0x0000000C
#define _C1TX1EID_EID14_MASK                     0x00001000
#define _C1TX1EID_EID14_LENGTH                   0x00000001

#define _C1TX1EID_EID15_POSITION                 0x0000000D
#define _C1TX1EID_EID15_MASK                     0x00002000
#define _C1TX1EID_EID15_LENGTH                   0x00000001

#define _C1TX1EID_EID16_POSITION                 0x0000000E
#define _C1TX1EID_EID16_MASK                     0x00004000
#define _C1TX1EID_EID16_LENGTH                   0x00000001

#define _C1TX1EID_EID17_POSITION                 0x0000000F
#define _C1TX1EID_EID17_MASK                     0x00008000
#define _C1TX1EID_EID17_LENGTH                   0x00000001

#define _C1TX1EID_EID13_6_POSITION               0x00000000
#define _C1TX1EID_EID13_6_MASK                   0x000000FF
#define _C1TX1EID_EID13_6_LENGTH                 0x00000008

#define _C1TX1EID_EID17_14_POSITION              0x0000000C
#define _C1TX1EID_EID17_14_MASK                  0x0000F000
#define _C1TX1EID_EID17_14_LENGTH                0x00000004

#define _C1TX1DLC_DLC_POSITION                   0x00000003
#define _C1TX1DLC_DLC_MASK                       0x00000078
#define _C1TX1DLC_DLC_LENGTH                     0x00000004

#define _C1TX1DLC_TXRB0_POSITION                 0x00000007
#define _C1TX1DLC_TXRB0_MASK                     0x00000080
#define _C1TX1DLC_TXRB0_LENGTH                   0x00000001

#define _C1TX1DLC_TXRB1_POSITION                 0x00000008
#define _C1TX1DLC_TXRB1_MASK                     0x00000100
#define _C1TX1DLC_TXRB1_LENGTH                   0x00000001

#define _C1TX1DLC_TXRTR_POSITION                 0x00000009
#define _C1TX1DLC_TXRTR_MASK                     0x00000200
#define _C1TX1DLC_TXRTR_LENGTH                   0x00000001

#define _C1TX1DLC_EID0_POSITION                  0x0000000A
#define _C1TX1DLC_EID0_MASK                      0x00000400
#define _C1TX1DLC_EID0_LENGTH                    0x00000001

#define _C1TX1DLC_EID1_POSITION                  0x0000000B
#define _C1TX1DLC_EID1_MASK                      0x00000800
#define _C1TX1DLC_EID1_LENGTH                    0x00000001

#define _C1TX1DLC_EID2_POSITION                  0x0000000C
#define _C1TX1DLC_EID2_MASK                      0x00001000
#define _C1TX1DLC_EID2_LENGTH                    0x00000001

#define _C1TX1DLC_EID3_POSITION                  0x0000000D
#define _C1TX1DLC_EID3_MASK                      0x00002000
#define _C1TX1DLC_EID3_LENGTH                    0x00000001

#define _C1TX1DLC_EID4_POSITION                  0x0000000E
#define _C1TX1DLC_EID4_MASK                      0x00004000
#define _C1TX1DLC_EID4_LENGTH                    0x00000001

#define _C1TX1DLC_EID5_POSITION                  0x0000000F
#define _C1TX1DLC_EID5_MASK                      0x00008000
#define _C1TX1DLC_EID5_LENGTH                    0x00000001

#define _C1TX1DLC_EID5_0_POSITION                0x0000000A
#define _C1TX1DLC_EID5_0_MASK                    0x0000FC00
#define _C1TX1DLC_EID5_0_LENGTH                  0x00000006

#define _C1TX1DLC_DLC0_POSITION                  0x00000003
#define _C1TX1DLC_DLC0_MASK                      0x00000008
#define _C1TX1DLC_DLC0_LENGTH                    0x00000001

#define _C1TX1DLC_DLC1_POSITION                  0x00000004
#define _C1TX1DLC_DLC1_MASK                      0x00000010
#define _C1TX1DLC_DLC1_LENGTH                    0x00000001

#define _C1TX1DLC_DLC2_POSITION                  0x00000005
#define _C1TX1DLC_DLC2_MASK                      0x00000020
#define _C1TX1DLC_DLC2_LENGTH                    0x00000001

#define _C1TX1DLC_DLC3_POSITION                  0x00000006
#define _C1TX1DLC_DLC3_MASK                      0x00000040
#define _C1TX1DLC_DLC3_LENGTH                    0x00000001

#define _C1TX1B1_TXB1D00_POSITION                0x00000000
#define _C1TX1B1_TXB1D00_MASK                    0x00000001
#define _C1TX1B1_TXB1D00_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D01_POSITION                0x00000001
#define _C1TX1B1_TXB1D01_MASK                    0x00000002
#define _C1TX1B1_TXB1D01_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D02_POSITION                0x00000002
#define _C1TX1B1_TXB1D02_MASK                    0x00000004
#define _C1TX1B1_TXB1D02_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D03_POSITION                0x00000003
#define _C1TX1B1_TXB1D03_MASK                    0x00000008
#define _C1TX1B1_TXB1D03_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D04_POSITION                0x00000004
#define _C1TX1B1_TXB1D04_MASK                    0x00000010
#define _C1TX1B1_TXB1D04_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D05_POSITION                0x00000005
#define _C1TX1B1_TXB1D05_MASK                    0x00000020
#define _C1TX1B1_TXB1D05_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D06_POSITION                0x00000006
#define _C1TX1B1_TXB1D06_MASK                    0x00000040
#define _C1TX1B1_TXB1D06_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D07_POSITION                0x00000007
#define _C1TX1B1_TXB1D07_MASK                    0x00000080
#define _C1TX1B1_TXB1D07_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D10_POSITION                0x00000008
#define _C1TX1B1_TXB1D10_MASK                    0x00000100
#define _C1TX1B1_TXB1D10_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D11_POSITION                0x00000009
#define _C1TX1B1_TXB1D11_MASK                    0x00000200
#define _C1TX1B1_TXB1D11_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D12_POSITION                0x0000000A
#define _C1TX1B1_TXB1D12_MASK                    0x00000400
#define _C1TX1B1_TXB1D12_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D13_POSITION                0x0000000B
#define _C1TX1B1_TXB1D13_MASK                    0x00000800
#define _C1TX1B1_TXB1D13_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D14_POSITION                0x0000000C
#define _C1TX1B1_TXB1D14_MASK                    0x00001000
#define _C1TX1B1_TXB1D14_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D15_POSITION                0x0000000D
#define _C1TX1B1_TXB1D15_MASK                    0x00002000
#define _C1TX1B1_TXB1D15_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D16_POSITION                0x0000000E
#define _C1TX1B1_TXB1D16_MASK                    0x00004000
#define _C1TX1B1_TXB1D16_LENGTH                  0x00000001

#define _C1TX1B1_TXB1D17_POSITION                0x0000000F
#define _C1TX1B1_TXB1D17_MASK                    0x00008000
#define _C1TX1B1_TXB1D17_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D20_POSITION                0x00000000
#define _C1TX1B2_TXB1D20_MASK                    0x00000001
#define _C1TX1B2_TXB1D20_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D21_POSITION                0x00000001
#define _C1TX1B2_TXB1D21_MASK                    0x00000002
#define _C1TX1B2_TXB1D21_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D22_POSITION                0x00000002
#define _C1TX1B2_TXB1D22_MASK                    0x00000004
#define _C1TX1B2_TXB1D22_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D23_POSITION                0x00000003
#define _C1TX1B2_TXB1D23_MASK                    0x00000008
#define _C1TX1B2_TXB1D23_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D24_POSITION                0x00000004
#define _C1TX1B2_TXB1D24_MASK                    0x00000010
#define _C1TX1B2_TXB1D24_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D25_POSITION                0x00000005
#define _C1TX1B2_TXB1D25_MASK                    0x00000020
#define _C1TX1B2_TXB1D25_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D26_POSITION                0x00000006
#define _C1TX1B2_TXB1D26_MASK                    0x00000040
#define _C1TX1B2_TXB1D26_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D27_POSITION                0x00000007
#define _C1TX1B2_TXB1D27_MASK                    0x00000080
#define _C1TX1B2_TXB1D27_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D30_POSITION                0x00000008
#define _C1TX1B2_TXB1D30_MASK                    0x00000100
#define _C1TX1B2_TXB1D30_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D31_POSITION                0x00000009
#define _C1TX1B2_TXB1D31_MASK                    0x00000200
#define _C1TX1B2_TXB1D31_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D32_POSITION                0x0000000A
#define _C1TX1B2_TXB1D32_MASK                    0x00000400
#define _C1TX1B2_TXB1D32_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D33_POSITION                0x0000000B
#define _C1TX1B2_TXB1D33_MASK                    0x00000800
#define _C1TX1B2_TXB1D33_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D34_POSITION                0x0000000C
#define _C1TX1B2_TXB1D34_MASK                    0x00001000
#define _C1TX1B2_TXB1D34_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D35_POSITION                0x0000000D
#define _C1TX1B2_TXB1D35_MASK                    0x00002000
#define _C1TX1B2_TXB1D35_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D36_POSITION                0x0000000E
#define _C1TX1B2_TXB1D36_MASK                    0x00004000
#define _C1TX1B2_TXB1D36_LENGTH                  0x00000001

#define _C1TX1B2_TXB1D37_POSITION                0x0000000F
#define _C1TX1B2_TXB1D37_MASK                    0x00008000
#define _C1TX1B2_TXB1D37_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D40_POSITION                0x00000000
#define _C1TX1B3_TXB1D40_MASK                    0x00000001
#define _C1TX1B3_TXB1D40_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D41_POSITION                0x00000001
#define _C1TX1B3_TXB1D41_MASK                    0x00000002
#define _C1TX1B3_TXB1D41_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D42_POSITION                0x00000002
#define _C1TX1B3_TXB1D42_MASK                    0x00000004
#define _C1TX1B3_TXB1D42_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D43_POSITION                0x00000003
#define _C1TX1B3_TXB1D43_MASK                    0x00000008
#define _C1TX1B3_TXB1D43_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D44_POSITION                0x00000004
#define _C1TX1B3_TXB1D44_MASK                    0x00000010
#define _C1TX1B3_TXB1D44_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D45_POSITION                0x00000005
#define _C1TX1B3_TXB1D45_MASK                    0x00000020
#define _C1TX1B3_TXB1D45_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D46_POSITION                0x00000006
#define _C1TX1B3_TXB1D46_MASK                    0x00000040
#define _C1TX1B3_TXB1D46_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D47_POSITION                0x00000007
#define _C1TX1B3_TXB1D47_MASK                    0x00000080
#define _C1TX1B3_TXB1D47_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D50_POSITION                0x00000008
#define _C1TX1B3_TXB1D50_MASK                    0x00000100
#define _C1TX1B3_TXB1D50_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D51_POSITION                0x00000009
#define _C1TX1B3_TXB1D51_MASK                    0x00000200
#define _C1TX1B3_TXB1D51_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D52_POSITION                0x0000000A
#define _C1TX1B3_TXB1D52_MASK                    0x00000400
#define _C1TX1B3_TXB1D52_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D53_POSITION                0x0000000B
#define _C1TX1B3_TXB1D53_MASK                    0x00000800
#define _C1TX1B3_TXB1D53_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D54_POSITION                0x0000000C
#define _C1TX1B3_TXB1D54_MASK                    0x00001000
#define _C1TX1B3_TXB1D54_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D55_POSITION                0x0000000D
#define _C1TX1B3_TXB1D55_MASK                    0x00002000
#define _C1TX1B3_TXB1D55_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D56_POSITION                0x0000000E
#define _C1TX1B3_TXB1D56_MASK                    0x00004000
#define _C1TX1B3_TXB1D56_LENGTH                  0x00000001

#define _C1TX1B3_TXB1D57_POSITION                0x0000000F
#define _C1TX1B3_TXB1D57_MASK                    0x00008000
#define _C1TX1B3_TXB1D57_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D60_POSITION                0x00000000
#define _C1TX1B4_TXB1D60_MASK                    0x00000001
#define _C1TX1B4_TXB1D60_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D61_POSITION                0x00000001
#define _C1TX1B4_TXB1D61_MASK                    0x00000002
#define _C1TX1B4_TXB1D61_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D62_POSITION                0x00000002
#define _C1TX1B4_TXB1D62_MASK                    0x00000004
#define _C1TX1B4_TXB1D62_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D63_POSITION                0x00000003
#define _C1TX1B4_TXB1D63_MASK                    0x00000008
#define _C1TX1B4_TXB1D63_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D64_POSITION                0x00000004
#define _C1TX1B4_TXB1D64_MASK                    0x00000010
#define _C1TX1B4_TXB1D64_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D65_POSITION                0x00000005
#define _C1TX1B4_TXB1D65_MASK                    0x00000020
#define _C1TX1B4_TXB1D65_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D66_POSITION                0x00000006
#define _C1TX1B4_TXB1D66_MASK                    0x00000040
#define _C1TX1B4_TXB1D66_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D67_POSITION                0x00000007
#define _C1TX1B4_TXB1D67_MASK                    0x00000080
#define _C1TX1B4_TXB1D67_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D70_POSITION                0x00000008
#define _C1TX1B4_TXB1D70_MASK                    0x00000100
#define _C1TX1B4_TXB1D70_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D71_POSITION                0x00000009
#define _C1TX1B4_TXB1D71_MASK                    0x00000200
#define _C1TX1B4_TXB1D71_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D72_POSITION                0x0000000A
#define _C1TX1B4_TXB1D72_MASK                    0x00000400
#define _C1TX1B4_TXB1D72_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D73_POSITION                0x0000000B
#define _C1TX1B4_TXB1D73_MASK                    0x00000800
#define _C1TX1B4_TXB1D73_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D74_POSITION                0x0000000C
#define _C1TX1B4_TXB1D74_MASK                    0x00001000
#define _C1TX1B4_TXB1D74_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D75_POSITION                0x0000000D
#define _C1TX1B4_TXB1D75_MASK                    0x00002000
#define _C1TX1B4_TXB1D75_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D76_POSITION                0x0000000E
#define _C1TX1B4_TXB1D76_MASK                    0x00004000
#define _C1TX1B4_TXB1D76_LENGTH                  0x00000001

#define _C1TX1B4_TXB1D77_POSITION                0x0000000F
#define _C1TX1B4_TXB1D77_MASK                    0x00008000
#define _C1TX1B4_TXB1D77_LENGTH                  0x00000001

#define _C1TX1CON_TXPRI_POSITION                 0x00000000
#define _C1TX1CON_TXPRI_MASK                     0x00000003
#define _C1TX1CON_TXPRI_LENGTH                   0x00000002

#define _C1TX1CON_TXREQ_POSITION                 0x00000003
#define _C1TX1CON_TXREQ_MASK                     0x00000008
#define _C1TX1CON_TXREQ_LENGTH                   0x00000001

#define _C1TX1CON_TXERR_POSITION                 0x00000004
#define _C1TX1CON_TXERR_MASK                     0x00000010
#define _C1TX1CON_TXERR_LENGTH                   0x00000001

#define _C1TX1CON_TXLARB_POSITION                0x00000005
#define _C1TX1CON_TXLARB_MASK                    0x00000020
#define _C1TX1CON_TXLARB_LENGTH                  0x00000001

#define _C1TX1CON_TXABT_POSITION                 0x00000006
#define _C1TX1CON_TXABT_MASK                     0x00000040
#define _C1TX1CON_TXABT_LENGTH                   0x00000001

#define _C1TX1CON_TXPRI0_POSITION                0x00000000
#define _C1TX1CON_TXPRI0_MASK                    0x00000001
#define _C1TX1CON_TXPRI0_LENGTH                  0x00000001

#define _C1TX1CON_TXPRI1_POSITION                0x00000001
#define _C1TX1CON_TXPRI1_MASK                    0x00000002
#define _C1TX1CON_TXPRI1_LENGTH                  0x00000001

#define _C1TX0SID_TXIDE_POSITION                 0x00000000
#define _C1TX0SID_TXIDE_MASK                     0x00000001
#define _C1TX0SID_TXIDE_LENGTH                   0x00000001

#define _C1TX0SID_SRR_POSITION                   0x00000001
#define _C1TX0SID_SRR_MASK                       0x00000002
#define _C1TX0SID_SRR_LENGTH                     0x00000001

#define _C1TX0SID_SID0_POSITION                  0x00000002
#define _C1TX0SID_SID0_MASK                      0x00000004
#define _C1TX0SID_SID0_LENGTH                    0x00000001

#define _C1TX0SID_SID1_POSITION                  0x00000003
#define _C1TX0SID_SID1_MASK                      0x00000008
#define _C1TX0SID_SID1_LENGTH                    0x00000001

#define _C1TX0SID_SID2_POSITION                  0x00000004
#define _C1TX0SID_SID2_MASK                      0x00000010
#define _C1TX0SID_SID2_LENGTH                    0x00000001

#define _C1TX0SID_SID3_POSITION                  0x00000005
#define _C1TX0SID_SID3_MASK                      0x00000020
#define _C1TX0SID_SID3_LENGTH                    0x00000001

#define _C1TX0SID_SID4_POSITION                  0x00000006
#define _C1TX0SID_SID4_MASK                      0x00000040
#define _C1TX0SID_SID4_LENGTH                    0x00000001

#define _C1TX0SID_SID5_POSITION                  0x00000007
#define _C1TX0SID_SID5_MASK                      0x00000080
#define _C1TX0SID_SID5_LENGTH                    0x00000001

#define _C1TX0SID_SID6_POSITION                  0x0000000B
#define _C1TX0SID_SID6_MASK                      0x00000800
#define _C1TX0SID_SID6_LENGTH                    0x00000001

#define _C1TX0SID_SID7_POSITION                  0x0000000C
#define _C1TX0SID_SID7_MASK                      0x00001000
#define _C1TX0SID_SID7_LENGTH                    0x00000001

#define _C1TX0SID_SID8_POSITION                  0x0000000D
#define _C1TX0SID_SID8_MASK                      0x00002000
#define _C1TX0SID_SID8_LENGTH                    0x00000001

#define _C1TX0SID_SID9_POSITION                  0x0000000E
#define _C1TX0SID_SID9_MASK                      0x00004000
#define _C1TX0SID_SID9_LENGTH                    0x00000001

#define _C1TX0SID_SID10_POSITION                 0x0000000F
#define _C1TX0SID_SID10_MASK                     0x00008000
#define _C1TX0SID_SID10_LENGTH                   0x00000001

#define _C1TX0SID_SID5_0_POSITION                0x00000002
#define _C1TX0SID_SID5_0_MASK                    0x000000FC
#define _C1TX0SID_SID5_0_LENGTH                  0x00000006

#define _C1TX0SID_SID10_6_POSITION               0x0000000B
#define _C1TX0SID_SID10_6_MASK                   0x0000F800
#define _C1TX0SID_SID10_6_LENGTH                 0x00000005

#define _C1TX0EID_EID6_POSITION                  0x00000000
#define _C1TX0EID_EID6_MASK                      0x00000001
#define _C1TX0EID_EID6_LENGTH                    0x00000001

#define _C1TX0EID_EID7_POSITION                  0x00000001
#define _C1TX0EID_EID7_MASK                      0x00000002
#define _C1TX0EID_EID7_LENGTH                    0x00000001

#define _C1TX0EID_EID8_POSITION                  0x00000002
#define _C1TX0EID_EID8_MASK                      0x00000004
#define _C1TX0EID_EID8_LENGTH                    0x00000001

#define _C1TX0EID_EID9_POSITION                  0x00000003
#define _C1TX0EID_EID9_MASK                      0x00000008
#define _C1TX0EID_EID9_LENGTH                    0x00000001

#define _C1TX0EID_EID10_POSITION                 0x00000004
#define _C1TX0EID_EID10_MASK                     0x00000010
#define _C1TX0EID_EID10_LENGTH                   0x00000001

#define _C1TX0EID_EID11_POSITION                 0x00000005
#define _C1TX0EID_EID11_MASK                     0x00000020
#define _C1TX0EID_EID11_LENGTH                   0x00000001

#define _C1TX0EID_EID12_POSITION                 0x00000006
#define _C1TX0EID_EID12_MASK                     0x00000040
#define _C1TX0EID_EID12_LENGTH                   0x00000001

#define _C1TX0EID_EID13_POSITION                 0x00000007
#define _C1TX0EID_EID13_MASK                     0x00000080
#define _C1TX0EID_EID13_LENGTH                   0x00000001

#define _C1TX0EID_EID14_POSITION                 0x0000000C
#define _C1TX0EID_EID14_MASK                     0x00001000
#define _C1TX0EID_EID14_LENGTH                   0x00000001

#define _C1TX0EID_EID15_POSITION                 0x0000000D
#define _C1TX0EID_EID15_MASK                     0x00002000
#define _C1TX0EID_EID15_LENGTH                   0x00000001

#define _C1TX0EID_EID16_POSITION                 0x0000000E
#define _C1TX0EID_EID16_MASK                     0x00004000
#define _C1TX0EID_EID16_LENGTH                   0x00000001

#define _C1TX0EID_EID17_POSITION                 0x0000000F
#define _C1TX0EID_EID17_MASK                     0x00008000
#define _C1TX0EID_EID17_LENGTH                   0x00000001

#define _C1TX0EID_EID13_6_POSITION               0x00000000
#define _C1TX0EID_EID13_6_MASK                   0x000000FF
#define _C1TX0EID_EID13_6_LENGTH                 0x00000008

#define _C1TX0EID_EID17_14_POSITION              0x0000000C
#define _C1TX0EID_EID17_14_MASK                  0x0000F000
#define _C1TX0EID_EID17_14_LENGTH                0x00000004

#define _C1TX0DLC_DLC_POSITION                   0x00000003
#define _C1TX0DLC_DLC_MASK                       0x00000078
#define _C1TX0DLC_DLC_LENGTH                     0x00000004

#define _C1TX0DLC_TXRB0_POSITION                 0x00000007
#define _C1TX0DLC_TXRB0_MASK                     0x00000080
#define _C1TX0DLC_TXRB0_LENGTH                   0x00000001

#define _C1TX0DLC_TXRB1_POSITION                 0x00000008
#define _C1TX0DLC_TXRB1_MASK                     0x00000100
#define _C1TX0DLC_TXRB1_LENGTH                   0x00000001

#define _C1TX0DLC_TXRTR_POSITION                 0x00000009
#define _C1TX0DLC_TXRTR_MASK                     0x00000200
#define _C1TX0DLC_TXRTR_LENGTH                   0x00000001

#define _C1TX0DLC_EID0_POSITION                  0x0000000A
#define _C1TX0DLC_EID0_MASK                      0x00000400
#define _C1TX0DLC_EID0_LENGTH                    0x00000001

#define _C1TX0DLC_EID1_POSITION                  0x0000000B
#define _C1TX0DLC_EID1_MASK                      0x00000800
#define _C1TX0DLC_EID1_LENGTH                    0x00000001

#define _C1TX0DLC_EID2_POSITION                  0x0000000C
#define _C1TX0DLC_EID2_MASK                      0x00001000
#define _C1TX0DLC_EID2_LENGTH                    0x00000001

#define _C1TX0DLC_EID3_POSITION                  0x0000000D
#define _C1TX0DLC_EID3_MASK                      0x00002000
#define _C1TX0DLC_EID3_LENGTH                    0x00000001

#define _C1TX0DLC_EID4_POSITION                  0x0000000E
#define _C1TX0DLC_EID4_MASK                      0x00004000
#define _C1TX0DLC_EID4_LENGTH                    0x00000001

#define _C1TX0DLC_EID5_POSITION                  0x0000000F
#define _C1TX0DLC_EID5_MASK                      0x00008000
#define _C1TX0DLC_EID5_LENGTH                    0x00000001

#define _C1TX0DLC_EID5_0_POSITION                0x0000000A
#define _C1TX0DLC_EID5_0_MASK                    0x0000FC00
#define _C1TX0DLC_EID5_0_LENGTH                  0x00000006

#define _C1TX0DLC_DLC0_POSITION                  0x00000003
#define _C1TX0DLC_DLC0_MASK                      0x00000008
#define _C1TX0DLC_DLC0_LENGTH                    0x00000001

#define _C1TX0DLC_DLC1_POSITION                  0x00000004
#define _C1TX0DLC_DLC1_MASK                      0x00000010
#define _C1TX0DLC_DLC1_LENGTH                    0x00000001

#define _C1TX0DLC_DLC2_POSITION                  0x00000005
#define _C1TX0DLC_DLC2_MASK                      0x00000020
#define _C1TX0DLC_DLC2_LENGTH                    0x00000001

#define _C1TX0DLC_DLC3_POSITION                  0x00000006
#define _C1TX0DLC_DLC3_MASK                      0x00000040
#define _C1TX0DLC_DLC3_LENGTH                    0x00000001

#define _C1TX0B1_TXB0D00_POSITION                0x00000000
#define _C1TX0B1_TXB0D00_MASK                    0x00000001
#define _C1TX0B1_TXB0D00_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D01_POSITION                0x00000001
#define _C1TX0B1_TXB0D01_MASK                    0x00000002
#define _C1TX0B1_TXB0D01_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D02_POSITION                0x00000002
#define _C1TX0B1_TXB0D02_MASK                    0x00000004
#define _C1TX0B1_TXB0D02_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D03_POSITION                0x00000003
#define _C1TX0B1_TXB0D03_MASK                    0x00000008
#define _C1TX0B1_TXB0D03_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D04_POSITION                0x00000004
#define _C1TX0B1_TXB0D04_MASK                    0x00000010
#define _C1TX0B1_TXB0D04_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D05_POSITION                0x00000005
#define _C1TX0B1_TXB0D05_MASK                    0x00000020
#define _C1TX0B1_TXB0D05_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D06_POSITION                0x00000006
#define _C1TX0B1_TXB0D06_MASK                    0x00000040
#define _C1TX0B1_TXB0D06_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D07_POSITION                0x00000007
#define _C1TX0B1_TXB0D07_MASK                    0x00000080
#define _C1TX0B1_TXB0D07_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D10_POSITION                0x00000008
#define _C1TX0B1_TXB0D10_MASK                    0x00000100
#define _C1TX0B1_TXB0D10_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D11_POSITION                0x00000009
#define _C1TX0B1_TXB0D11_MASK                    0x00000200
#define _C1TX0B1_TXB0D11_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D12_POSITION                0x0000000A
#define _C1TX0B1_TXB0D12_MASK                    0x00000400
#define _C1TX0B1_TXB0D12_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D13_POSITION                0x0000000B
#define _C1TX0B1_TXB0D13_MASK                    0x00000800
#define _C1TX0B1_TXB0D13_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D14_POSITION                0x0000000C
#define _C1TX0B1_TXB0D14_MASK                    0x00001000
#define _C1TX0B1_TXB0D14_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D15_POSITION                0x0000000D
#define _C1TX0B1_TXB0D15_MASK                    0x00002000
#define _C1TX0B1_TXB0D15_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D16_POSITION                0x0000000E
#define _C1TX0B1_TXB0D16_MASK                    0x00004000
#define _C1TX0B1_TXB0D16_LENGTH                  0x00000001

#define _C1TX0B1_TXB0D17_POSITION                0x0000000F
#define _C1TX0B1_TXB0D17_MASK                    0x00008000
#define _C1TX0B1_TXB0D17_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D20_POSITION                0x00000000
#define _C1TX0B2_TXB0D20_MASK                    0x00000001
#define _C1TX0B2_TXB0D20_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D21_POSITION                0x00000001
#define _C1TX0B2_TXB0D21_MASK                    0x00000002
#define _C1TX0B2_TXB0D21_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D22_POSITION                0x00000002
#define _C1TX0B2_TXB0D22_MASK                    0x00000004
#define _C1TX0B2_TXB0D22_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D23_POSITION                0x00000003
#define _C1TX0B2_TXB0D23_MASK                    0x00000008
#define _C1TX0B2_TXB0D23_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D24_POSITION                0x00000004
#define _C1TX0B2_TXB0D24_MASK                    0x00000010
#define _C1TX0B2_TXB0D24_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D25_POSITION                0x00000005
#define _C1TX0B2_TXB0D25_MASK                    0x00000020
#define _C1TX0B2_TXB0D25_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D26_POSITION                0x00000006
#define _C1TX0B2_TXB0D26_MASK                    0x00000040
#define _C1TX0B2_TXB0D26_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D27_POSITION                0x00000007
#define _C1TX0B2_TXB0D27_MASK                    0x00000080
#define _C1TX0B2_TXB0D27_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D30_POSITION                0x00000008
#define _C1TX0B2_TXB0D30_MASK                    0x00000100
#define _C1TX0B2_TXB0D30_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D31_POSITION                0x00000009
#define _C1TX0B2_TXB0D31_MASK                    0x00000200
#define _C1TX0B2_TXB0D31_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D32_POSITION                0x0000000A
#define _C1TX0B2_TXB0D32_MASK                    0x00000400
#define _C1TX0B2_TXB0D32_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D33_POSITION                0x0000000B
#define _C1TX0B2_TXB0D33_MASK                    0x00000800
#define _C1TX0B2_TXB0D33_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D34_POSITION                0x0000000C
#define _C1TX0B2_TXB0D34_MASK                    0x00001000
#define _C1TX0B2_TXB0D34_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D35_POSITION                0x0000000D
#define _C1TX0B2_TXB0D35_MASK                    0x00002000
#define _C1TX0B2_TXB0D35_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D36_POSITION                0x0000000E
#define _C1TX0B2_TXB0D36_MASK                    0x00004000
#define _C1TX0B2_TXB0D36_LENGTH                  0x00000001

#define _C1TX0B2_TXB0D37_POSITION                0x0000000F
#define _C1TX0B2_TXB0D37_MASK                    0x00008000
#define _C1TX0B2_TXB0D37_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D40_POSITION                0x00000000
#define _C1TX0B3_TXB0D40_MASK                    0x00000001
#define _C1TX0B3_TXB0D40_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D41_POSITION                0x00000001
#define _C1TX0B3_TXB0D41_MASK                    0x00000002
#define _C1TX0B3_TXB0D41_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D42_POSITION                0x00000002
#define _C1TX0B3_TXB0D42_MASK                    0x00000004
#define _C1TX0B3_TXB0D42_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D43_POSITION                0x00000003
#define _C1TX0B3_TXB0D43_MASK                    0x00000008
#define _C1TX0B3_TXB0D43_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D44_POSITION                0x00000004
#define _C1TX0B3_TXB0D44_MASK                    0x00000010
#define _C1TX0B3_TXB0D44_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D45_POSITION                0x00000005
#define _C1TX0B3_TXB0D45_MASK                    0x00000020
#define _C1TX0B3_TXB0D45_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D46_POSITION                0x00000006
#define _C1TX0B3_TXB0D46_MASK                    0x00000040
#define _C1TX0B3_TXB0D46_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D47_POSITION                0x00000007
#define _C1TX0B3_TXB0D47_MASK                    0x00000080
#define _C1TX0B3_TXB0D47_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D50_POSITION                0x00000008
#define _C1TX0B3_TXB0D50_MASK                    0x00000100
#define _C1TX0B3_TXB0D50_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D51_POSITION                0x00000009
#define _C1TX0B3_TXB0D51_MASK                    0x00000200
#define _C1TX0B3_TXB0D51_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D52_POSITION                0x0000000A
#define _C1TX0B3_TXB0D52_MASK                    0x00000400
#define _C1TX0B3_TXB0D52_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D53_POSITION                0x0000000B
#define _C1TX0B3_TXB0D53_MASK                    0x00000800
#define _C1TX0B3_TXB0D53_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D54_POSITION                0x0000000C
#define _C1TX0B3_TXB0D54_MASK                    0x00001000
#define _C1TX0B3_TXB0D54_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D55_POSITION                0x0000000D
#define _C1TX0B3_TXB0D55_MASK                    0x00002000
#define _C1TX0B3_TXB0D55_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D56_POSITION                0x0000000E
#define _C1TX0B3_TXB0D56_MASK                    0x00004000
#define _C1TX0B3_TXB0D56_LENGTH                  0x00000001

#define _C1TX0B3_TXB0D57_POSITION                0x0000000F
#define _C1TX0B3_TXB0D57_MASK                    0x00008000
#define _C1TX0B3_TXB0D57_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D60_POSITION                0x00000000
#define _C1TX0B4_TXB0D60_MASK                    0x00000001
#define _C1TX0B4_TXB0D60_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D61_POSITION                0x00000001
#define _C1TX0B4_TXB0D61_MASK                    0x00000002
#define _C1TX0B4_TXB0D61_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D62_POSITION                0x00000002
#define _C1TX0B4_TXB0D62_MASK                    0x00000004
#define _C1TX0B4_TXB0D62_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D63_POSITION                0x00000003
#define _C1TX0B4_TXB0D63_MASK                    0x00000008
#define _C1TX0B4_TXB0D63_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D64_POSITION                0x00000004
#define _C1TX0B4_TXB0D64_MASK                    0x00000010
#define _C1TX0B4_TXB0D64_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D65_POSITION                0x00000005
#define _C1TX0B4_TXB0D65_MASK                    0x00000020
#define _C1TX0B4_TXB0D65_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D66_POSITION                0x00000006
#define _C1TX0B4_TXB0D66_MASK                    0x00000040
#define _C1TX0B4_TXB0D66_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D67_POSITION                0x00000007
#define _C1TX0B4_TXB0D67_MASK                    0x00000080
#define _C1TX0B4_TXB0D67_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D70_POSITION                0x00000008
#define _C1TX0B4_TXB0D70_MASK                    0x00000100
#define _C1TX0B4_TXB0D70_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D71_POSITION                0x00000009
#define _C1TX0B4_TXB0D71_MASK                    0x00000200
#define _C1TX0B4_TXB0D71_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D72_POSITION                0x0000000A
#define _C1TX0B4_TXB0D72_MASK                    0x00000400
#define _C1TX0B4_TXB0D72_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D73_POSITION                0x0000000B
#define _C1TX0B4_TXB0D73_MASK                    0x00000800
#define _C1TX0B4_TXB0D73_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D74_POSITION                0x0000000C
#define _C1TX0B4_TXB0D74_MASK                    0x00001000
#define _C1TX0B4_TXB0D74_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D75_POSITION                0x0000000D
#define _C1TX0B4_TXB0D75_MASK                    0x00002000
#define _C1TX0B4_TXB0D75_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D76_POSITION                0x0000000E
#define _C1TX0B4_TXB0D76_MASK                    0x00004000
#define _C1TX0B4_TXB0D76_LENGTH                  0x00000001

#define _C1TX0B4_TXB0D77_POSITION                0x0000000F
#define _C1TX0B4_TXB0D77_MASK                    0x00008000
#define _C1TX0B4_TXB0D77_LENGTH                  0x00000001

#define _C1TX0CON_TXPRI_POSITION                 0x00000000
#define _C1TX0CON_TXPRI_MASK                     0x00000003
#define _C1TX0CON_TXPRI_LENGTH                   0x00000002

#define _C1TX0CON_TXREQ_POSITION                 0x00000003
#define _C1TX0CON_TXREQ_MASK                     0x00000008
#define _C1TX0CON_TXREQ_LENGTH                   0x00000001

#define _C1TX0CON_TXERR_POSITION                 0x00000004
#define _C1TX0CON_TXERR_MASK                     0x00000010
#define _C1TX0CON_TXERR_LENGTH                   0x00000001

#define _C1TX0CON_TXLARB_POSITION                0x00000005
#define _C1TX0CON_TXLARB_MASK                    0x00000020
#define _C1TX0CON_TXLARB_LENGTH                  0x00000001

#define _C1TX0CON_TXABT_POSITION                 0x00000006
#define _C1TX0CON_TXABT_MASK                     0x00000040
#define _C1TX0CON_TXABT_LENGTH                   0x00000001

#define _C1TX0CON_TXPRI0_POSITION                0x00000000
#define _C1TX0CON_TXPRI0_MASK                    0x00000001
#define _C1TX0CON_TXPRI0_LENGTH                  0x00000001

#define _C1TX0CON_TXPRI1_POSITION                0x00000001
#define _C1TX0CON_TXPRI1_MASK                    0x00000002
#define _C1TX0CON_TXPRI1_LENGTH                  0x00000001

#define _C1RX1SID_RXIDE_POSITION                 0x00000000
#define _C1RX1SID_RXIDE_MASK                     0x00000001
#define _C1RX1SID_RXIDE_LENGTH                   0x00000001

#define _C1RX1SID_SRR_POSITION                   0x00000001
#define _C1RX1SID_SRR_MASK                       0x00000002
#define _C1RX1SID_SRR_LENGTH                     0x00000001

#define _C1RX1SID_SID0_POSITION                  0x00000002
#define _C1RX1SID_SID0_MASK                      0x00000004
#define _C1RX1SID_SID0_LENGTH                    0x00000001

#define _C1RX1SID_SID1_POSITION                  0x00000003
#define _C1RX1SID_SID1_MASK                      0x00000008
#define _C1RX1SID_SID1_LENGTH                    0x00000001

#define _C1RX1SID_SID2_POSITION                  0x00000004
#define _C1RX1SID_SID2_MASK                      0x00000010
#define _C1RX1SID_SID2_LENGTH                    0x00000001

#define _C1RX1SID_SID3_POSITION                  0x00000005
#define _C1RX1SID_SID3_MASK                      0x00000020
#define _C1RX1SID_SID3_LENGTH                    0x00000001

#define _C1RX1SID_SID4_POSITION                  0x00000006
#define _C1RX1SID_SID4_MASK                      0x00000040
#define _C1RX1SID_SID4_LENGTH                    0x00000001

#define _C1RX1SID_SID5_POSITION                  0x00000007
#define _C1RX1SID_SID5_MASK                      0x00000080
#define _C1RX1SID_SID5_LENGTH                    0x00000001

#define _C1RX1SID_SID6_POSITION                  0x00000008
#define _C1RX1SID_SID6_MASK                      0x00000100
#define _C1RX1SID_SID6_LENGTH                    0x00000001

#define _C1RX1SID_SID7_POSITION                  0x00000009
#define _C1RX1SID_SID7_MASK                      0x00000200
#define _C1RX1SID_SID7_LENGTH                    0x00000001

#define _C1RX1SID_SID8_POSITION                  0x0000000A
#define _C1RX1SID_SID8_MASK                      0x00000400
#define _C1RX1SID_SID8_LENGTH                    0x00000001

#define _C1RX1SID_SID9_POSITION                  0x0000000B
#define _C1RX1SID_SID9_MASK                      0x00000800
#define _C1RX1SID_SID9_LENGTH                    0x00000001

#define _C1RX1SID_SID10_POSITION                 0x0000000C
#define _C1RX1SID_SID10_MASK                     0x00001000
#define _C1RX1SID_SID10_LENGTH                   0x00000001

#define _C1RX1SID_SID_POSITION                   0x00000002
#define _C1RX1SID_SID_MASK                       0x00001FFC
#define _C1RX1SID_SID_LENGTH                     0x0000000B

#define _C1RX1EID_EID6_POSITION                  0x00000000
#define _C1RX1EID_EID6_MASK                      0x00000001
#define _C1RX1EID_EID6_LENGTH                    0x00000001

#define _C1RX1EID_EID7_POSITION                  0x00000001
#define _C1RX1EID_EID7_MASK                      0x00000002
#define _C1RX1EID_EID7_LENGTH                    0x00000001

#define _C1RX1EID_EID8_POSITION                  0x00000002
#define _C1RX1EID_EID8_MASK                      0x00000004
#define _C1RX1EID_EID8_LENGTH                    0x00000001

#define _C1RX1EID_EID9_POSITION                  0x00000003
#define _C1RX1EID_EID9_MASK                      0x00000008
#define _C1RX1EID_EID9_LENGTH                    0x00000001

#define _C1RX1EID_EID10_POSITION                 0x00000004
#define _C1RX1EID_EID10_MASK                     0x00000010
#define _C1RX1EID_EID10_LENGTH                   0x00000001

#define _C1RX1EID_EID11_POSITION                 0x00000005
#define _C1RX1EID_EID11_MASK                     0x00000020
#define _C1RX1EID_EID11_LENGTH                   0x00000001

#define _C1RX1EID_EID12_POSITION                 0x00000006
#define _C1RX1EID_EID12_MASK                     0x00000040
#define _C1RX1EID_EID12_LENGTH                   0x00000001

#define _C1RX1EID_EID13_POSITION                 0x00000007
#define _C1RX1EID_EID13_MASK                     0x00000080
#define _C1RX1EID_EID13_LENGTH                   0x00000001

#define _C1RX1EID_EID14_POSITION                 0x00000008
#define _C1RX1EID_EID14_MASK                     0x00000100
#define _C1RX1EID_EID14_LENGTH                   0x00000001

#define _C1RX1EID_EID15_POSITION                 0x00000009
#define _C1RX1EID_EID15_MASK                     0x00000200
#define _C1RX1EID_EID15_LENGTH                   0x00000001

#define _C1RX1EID_EID16_POSITION                 0x0000000A
#define _C1RX1EID_EID16_MASK                     0x00000400
#define _C1RX1EID_EID16_LENGTH                   0x00000001

#define _C1RX1EID_EID17_POSITION                 0x0000000B
#define _C1RX1EID_EID17_MASK                     0x00000800
#define _C1RX1EID_EID17_LENGTH                   0x00000001

#define _C1RX1DLC_DLC_POSITION                   0x00000000
#define _C1RX1DLC_DLC_MASK                       0x0000000F
#define _C1RX1DLC_DLC_LENGTH                     0x00000004

#define _C1RX1DLC_RXRB0_POSITION                 0x00000004
#define _C1RX1DLC_RXRB0_MASK                     0x00000010
#define _C1RX1DLC_RXRB0_LENGTH                   0x00000001

#define _C1RX1DLC_RXRB1_POSITION                 0x00000008
#define _C1RX1DLC_RXRB1_MASK                     0x00000100
#define _C1RX1DLC_RXRB1_LENGTH                   0x00000001

#define _C1RX1DLC_RXRTR_POSITION                 0x00000009
#define _C1RX1DLC_RXRTR_MASK                     0x00000200
#define _C1RX1DLC_RXRTR_LENGTH                   0x00000001

#define _C1RX1DLC_EID0_POSITION                  0x0000000A
#define _C1RX1DLC_EID0_MASK                      0x00000400
#define _C1RX1DLC_EID0_LENGTH                    0x00000001

#define _C1RX1DLC_EID1_POSITION                  0x0000000B
#define _C1RX1DLC_EID1_MASK                      0x00000800
#define _C1RX1DLC_EID1_LENGTH                    0x00000001

#define _C1RX1DLC_EID2_POSITION                  0x0000000C
#define _C1RX1DLC_EID2_MASK                      0x00001000
#define _C1RX1DLC_EID2_LENGTH                    0x00000001

#define _C1RX1DLC_EID3_POSITION                  0x0000000D
#define _C1RX1DLC_EID3_MASK                      0x00002000
#define _C1RX1DLC_EID3_LENGTH                    0x00000001

#define _C1RX1DLC_EID4_POSITION                  0x0000000E
#define _C1RX1DLC_EID4_MASK                      0x00004000
#define _C1RX1DLC_EID4_LENGTH                    0x00000001

#define _C1RX1DLC_EID5_POSITION                  0x0000000F
#define _C1RX1DLC_EID5_MASK                      0x00008000
#define _C1RX1DLC_EID5_LENGTH                    0x00000001

#define _C1RX1DLC_EID5_0_POSITION                0x0000000A
#define _C1RX1DLC_EID5_0_MASK                    0x0000FC00
#define _C1RX1DLC_EID5_0_LENGTH                  0x00000006

#define _C1RX1DLC_DLC0_POSITION                  0x00000000
#define _C1RX1DLC_DLC0_MASK                      0x00000001
#define _C1RX1DLC_DLC0_LENGTH                    0x00000001

#define _C1RX1DLC_DLC1_POSITION                  0x00000001
#define _C1RX1DLC_DLC1_MASK                      0x00000002
#define _C1RX1DLC_DLC1_LENGTH                    0x00000001

#define _C1RX1DLC_DLC2_POSITION                  0x00000002
#define _C1RX1DLC_DLC2_MASK                      0x00000004
#define _C1RX1DLC_DLC2_LENGTH                    0x00000001

#define _C1RX1DLC_DLC3_POSITION                  0x00000003
#define _C1RX1DLC_DLC3_MASK                      0x00000008
#define _C1RX1DLC_DLC3_LENGTH                    0x00000001

#define _C1RX1B1_TXB1D00_POSITION                0x00000000
#define _C1RX1B1_TXB1D00_MASK                    0x00000001
#define _C1RX1B1_TXB1D00_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D01_POSITION                0x00000001
#define _C1RX1B1_TXB1D01_MASK                    0x00000002
#define _C1RX1B1_TXB1D01_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D02_POSITION                0x00000002
#define _C1RX1B1_TXB1D02_MASK                    0x00000004
#define _C1RX1B1_TXB1D02_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D03_POSITION                0x00000003
#define _C1RX1B1_TXB1D03_MASK                    0x00000008
#define _C1RX1B1_TXB1D03_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D04_POSITION                0x00000004
#define _C1RX1B1_TXB1D04_MASK                    0x00000010
#define _C1RX1B1_TXB1D04_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D05_POSITION                0x00000005
#define _C1RX1B1_TXB1D05_MASK                    0x00000020
#define _C1RX1B1_TXB1D05_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D06_POSITION                0x00000006
#define _C1RX1B1_TXB1D06_MASK                    0x00000040
#define _C1RX1B1_TXB1D06_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D07_POSITION                0x00000007
#define _C1RX1B1_TXB1D07_MASK                    0x00000080
#define _C1RX1B1_TXB1D07_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D10_POSITION                0x00000008
#define _C1RX1B1_TXB1D10_MASK                    0x00000100
#define _C1RX1B1_TXB1D10_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D11_POSITION                0x00000009
#define _C1RX1B1_TXB1D11_MASK                    0x00000200
#define _C1RX1B1_TXB1D11_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D12_POSITION                0x0000000A
#define _C1RX1B1_TXB1D12_MASK                    0x00000400
#define _C1RX1B1_TXB1D12_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D13_POSITION                0x0000000B
#define _C1RX1B1_TXB1D13_MASK                    0x00000800
#define _C1RX1B1_TXB1D13_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D14_POSITION                0x0000000C
#define _C1RX1B1_TXB1D14_MASK                    0x00001000
#define _C1RX1B1_TXB1D14_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D15_POSITION                0x0000000D
#define _C1RX1B1_TXB1D15_MASK                    0x00002000
#define _C1RX1B1_TXB1D15_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D16_POSITION                0x0000000E
#define _C1RX1B1_TXB1D16_MASK                    0x00004000
#define _C1RX1B1_TXB1D16_LENGTH                  0x00000001

#define _C1RX1B1_TXB1D17_POSITION                0x0000000F
#define _C1RX1B1_TXB1D17_MASK                    0x00008000
#define _C1RX1B1_TXB1D17_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D20_POSITION                0x00000000
#define _C1RX1B2_TXB1D20_MASK                    0x00000001
#define _C1RX1B2_TXB1D20_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D21_POSITION                0x00000001
#define _C1RX1B2_TXB1D21_MASK                    0x00000002
#define _C1RX1B2_TXB1D21_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D22_POSITION                0x00000002
#define _C1RX1B2_TXB1D22_MASK                    0x00000004
#define _C1RX1B2_TXB1D22_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D23_POSITION                0x00000003
#define _C1RX1B2_TXB1D23_MASK                    0x00000008
#define _C1RX1B2_TXB1D23_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D24_POSITION                0x00000004
#define _C1RX1B2_TXB1D24_MASK                    0x00000010
#define _C1RX1B2_TXB1D24_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D25_POSITION                0x00000005
#define _C1RX1B2_TXB1D25_MASK                    0x00000020
#define _C1RX1B2_TXB1D25_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D26_POSITION                0x00000006
#define _C1RX1B2_TXB1D26_MASK                    0x00000040
#define _C1RX1B2_TXB1D26_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D27_POSITION                0x00000007
#define _C1RX1B2_TXB1D27_MASK                    0x00000080
#define _C1RX1B2_TXB1D27_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D30_POSITION                0x00000008
#define _C1RX1B2_TXB1D30_MASK                    0x00000100
#define _C1RX1B2_TXB1D30_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D31_POSITION                0x00000009
#define _C1RX1B2_TXB1D31_MASK                    0x00000200
#define _C1RX1B2_TXB1D31_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D32_POSITION                0x0000000A
#define _C1RX1B2_TXB1D32_MASK                    0x00000400
#define _C1RX1B2_TXB1D32_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D33_POSITION                0x0000000B
#define _C1RX1B2_TXB1D33_MASK                    0x00000800
#define _C1RX1B2_TXB1D33_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D34_POSITION                0x0000000C
#define _C1RX1B2_TXB1D34_MASK                    0x00001000
#define _C1RX1B2_TXB1D34_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D35_POSITION                0x0000000D
#define _C1RX1B2_TXB1D35_MASK                    0x00002000
#define _C1RX1B2_TXB1D35_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D36_POSITION                0x0000000E
#define _C1RX1B2_TXB1D36_MASK                    0x00004000
#define _C1RX1B2_TXB1D36_LENGTH                  0x00000001

#define _C1RX1B2_TXB1D37_POSITION                0x0000000F
#define _C1RX1B2_TXB1D37_MASK                    0x00008000
#define _C1RX1B2_TXB1D37_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D40_POSITION                0x00000000
#define _C1RX1B3_TXB1D40_MASK                    0x00000001
#define _C1RX1B3_TXB1D40_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D41_POSITION                0x00000001
#define _C1RX1B3_TXB1D41_MASK                    0x00000002
#define _C1RX1B3_TXB1D41_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D42_POSITION                0x00000002
#define _C1RX1B3_TXB1D42_MASK                    0x00000004
#define _C1RX1B3_TXB1D42_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D43_POSITION                0x00000003
#define _C1RX1B3_TXB1D43_MASK                    0x00000008
#define _C1RX1B3_TXB1D43_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D44_POSITION                0x00000004
#define _C1RX1B3_TXB1D44_MASK                    0x00000010
#define _C1RX1B3_TXB1D44_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D45_POSITION                0x00000005
#define _C1RX1B3_TXB1D45_MASK                    0x00000020
#define _C1RX1B3_TXB1D45_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D46_POSITION                0x00000006
#define _C1RX1B3_TXB1D46_MASK                    0x00000040
#define _C1RX1B3_TXB1D46_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D47_POSITION                0x00000007
#define _C1RX1B3_TXB1D47_MASK                    0x00000080
#define _C1RX1B3_TXB1D47_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D50_POSITION                0x00000008
#define _C1RX1B3_TXB1D50_MASK                    0x00000100
#define _C1RX1B3_TXB1D50_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D51_POSITION                0x00000009
#define _C1RX1B3_TXB1D51_MASK                    0x00000200
#define _C1RX1B3_TXB1D51_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D52_POSITION                0x0000000A
#define _C1RX1B3_TXB1D52_MASK                    0x00000400
#define _C1RX1B3_TXB1D52_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D53_POSITION                0x0000000B
#define _C1RX1B3_TXB1D53_MASK                    0x00000800
#define _C1RX1B3_TXB1D53_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D54_POSITION                0x0000000C
#define _C1RX1B3_TXB1D54_MASK                    0x00001000
#define _C1RX1B3_TXB1D54_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D55_POSITION                0x0000000D
#define _C1RX1B3_TXB1D55_MASK                    0x00002000
#define _C1RX1B3_TXB1D55_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D56_POSITION                0x0000000E
#define _C1RX1B3_TXB1D56_MASK                    0x00004000
#define _C1RX1B3_TXB1D56_LENGTH                  0x00000001

#define _C1RX1B3_TXB1D57_POSITION                0x0000000F
#define _C1RX1B3_TXB1D57_MASK                    0x00008000
#define _C1RX1B3_TXB1D57_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D60_POSITION                0x00000000
#define _C1RX1B4_TXB1D60_MASK                    0x00000001
#define _C1RX1B4_TXB1D60_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D61_POSITION                0x00000001
#define _C1RX1B4_TXB1D61_MASK                    0x00000002
#define _C1RX1B4_TXB1D61_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D62_POSITION                0x00000002
#define _C1RX1B4_TXB1D62_MASK                    0x00000004
#define _C1RX1B4_TXB1D62_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D63_POSITION                0x00000003
#define _C1RX1B4_TXB1D63_MASK                    0x00000008
#define _C1RX1B4_TXB1D63_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D64_POSITION                0x00000004
#define _C1RX1B4_TXB1D64_MASK                    0x00000010
#define _C1RX1B4_TXB1D64_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D65_POSITION                0x00000005
#define _C1RX1B4_TXB1D65_MASK                    0x00000020
#define _C1RX1B4_TXB1D65_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D66_POSITION                0x00000006
#define _C1RX1B4_TXB1D66_MASK                    0x00000040
#define _C1RX1B4_TXB1D66_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D67_POSITION                0x00000007
#define _C1RX1B4_TXB1D67_MASK                    0x00000080
#define _C1RX1B4_TXB1D67_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D70_POSITION                0x00000008
#define _C1RX1B4_TXB1D70_MASK                    0x00000100
#define _C1RX1B4_TXB1D70_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D71_POSITION                0x00000009
#define _C1RX1B4_TXB1D71_MASK                    0x00000200
#define _C1RX1B4_TXB1D71_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D72_POSITION                0x0000000A
#define _C1RX1B4_TXB1D72_MASK                    0x00000400
#define _C1RX1B4_TXB1D72_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D73_POSITION                0x0000000B
#define _C1RX1B4_TXB1D73_MASK                    0x00000800
#define _C1RX1B4_TXB1D73_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D74_POSITION                0x0000000C
#define _C1RX1B4_TXB1D74_MASK                    0x00001000
#define _C1RX1B4_TXB1D74_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D75_POSITION                0x0000000D
#define _C1RX1B4_TXB1D75_MASK                    0x00002000
#define _C1RX1B4_TXB1D75_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D76_POSITION                0x0000000E
#define _C1RX1B4_TXB1D76_MASK                    0x00004000
#define _C1RX1B4_TXB1D76_LENGTH                  0x00000001

#define _C1RX1B4_TXB1D77_POSITION                0x0000000F
#define _C1RX1B4_TXB1D77_MASK                    0x00008000
#define _C1RX1B4_TXB1D77_LENGTH                  0x00000001

#define _C1RX1CON_FILHIT_POSITION                0x00000000
#define _C1RX1CON_FILHIT_MASK                    0x00000007
#define _C1RX1CON_FILHIT_LENGTH                  0x00000003

#define _C1RX1CON_RXRTRRO_POSITION               0x00000003
#define _C1RX1CON_RXRTRRO_MASK                   0x00000008
#define _C1RX1CON_RXRTRRO_LENGTH                 0x00000001

#define _C1RX1CON_RXFUL_POSITION                 0x00000007
#define _C1RX1CON_RXFUL_MASK                     0x00000080
#define _C1RX1CON_RXFUL_LENGTH                   0x00000001

#define _C1RX1CON_FILHIT0_POSITION               0x00000000
#define _C1RX1CON_FILHIT0_MASK                   0x00000001
#define _C1RX1CON_FILHIT0_LENGTH                 0x00000001

#define _C1RX1CON_FILHIT1_POSITION               0x00000001
#define _C1RX1CON_FILHIT1_MASK                   0x00000002
#define _C1RX1CON_FILHIT1_LENGTH                 0x00000001

#define _C1RX1CON_FILHIT2_POSITION               0x00000002
#define _C1RX1CON_FILHIT2_MASK                   0x00000004
#define _C1RX1CON_FILHIT2_LENGTH                 0x00000001

#define _C1RX0SID_RXIDE_POSITION                 0x00000000
#define _C1RX0SID_RXIDE_MASK                     0x00000001
#define _C1RX0SID_RXIDE_LENGTH                   0x00000001

#define _C1RX0SID_SRR_POSITION                   0x00000001
#define _C1RX0SID_SRR_MASK                       0x00000002
#define _C1RX0SID_SRR_LENGTH                     0x00000001

#define _C1RX0SID_SID0_POSITION                  0x00000002
#define _C1RX0SID_SID0_MASK                      0x00000004
#define _C1RX0SID_SID0_LENGTH                    0x00000001

#define _C1RX0SID_SID1_POSITION                  0x00000003
#define _C1RX0SID_SID1_MASK                      0x00000008
#define _C1RX0SID_SID1_LENGTH                    0x00000001

#define _C1RX0SID_SID2_POSITION                  0x00000004
#define _C1RX0SID_SID2_MASK                      0x00000010
#define _C1RX0SID_SID2_LENGTH                    0x00000001

#define _C1RX0SID_SID3_POSITION                  0x00000005
#define _C1RX0SID_SID3_MASK                      0x00000020
#define _C1RX0SID_SID3_LENGTH                    0x00000001

#define _C1RX0SID_SID4_POSITION                  0x00000006
#define _C1RX0SID_SID4_MASK                      0x00000040
#define _C1RX0SID_SID4_LENGTH                    0x00000001

#define _C1RX0SID_SID5_POSITION                  0x00000007
#define _C1RX0SID_SID5_MASK                      0x00000080
#define _C1RX0SID_SID5_LENGTH                    0x00000001

#define _C1RX0SID_SID6_POSITION                  0x00000008
#define _C1RX0SID_SID6_MASK                      0x00000100
#define _C1RX0SID_SID6_LENGTH                    0x00000001

#define _C1RX0SID_SID7_POSITION                  0x00000009
#define _C1RX0SID_SID7_MASK                      0x00000200
#define _C1RX0SID_SID7_LENGTH                    0x00000001

#define _C1RX0SID_SID8_POSITION                  0x0000000A
#define _C1RX0SID_SID8_MASK                      0x00000400
#define _C1RX0SID_SID8_LENGTH                    0x00000001

#define _C1RX0SID_SID9_POSITION                  0x0000000B
#define _C1RX0SID_SID9_MASK                      0x00000800
#define _C1RX0SID_SID9_LENGTH                    0x00000001

#define _C1RX0SID_SID10_POSITION                 0x0000000C
#define _C1RX0SID_SID10_MASK                     0x00001000
#define _C1RX0SID_SID10_LENGTH                   0x00000001

#define _C1RX0SID_SID_POSITION                   0x00000002
#define _C1RX0SID_SID_MASK                       0x00001FFC
#define _C1RX0SID_SID_LENGTH                     0x0000000B

#define _C1RX0EID_EID6_POSITION                  0x00000000
#define _C1RX0EID_EID6_MASK                      0x00000001
#define _C1RX0EID_EID6_LENGTH                    0x00000001

#define _C1RX0EID_EID7_POSITION                  0x00000001
#define _C1RX0EID_EID7_MASK                      0x00000002
#define _C1RX0EID_EID7_LENGTH                    0x00000001

#define _C1RX0EID_EID8_POSITION                  0x00000002
#define _C1RX0EID_EID8_MASK                      0x00000004
#define _C1RX0EID_EID8_LENGTH                    0x00000001

#define _C1RX0EID_EID9_POSITION                  0x00000003
#define _C1RX0EID_EID9_MASK                      0x00000008
#define _C1RX0EID_EID9_LENGTH                    0x00000001

#define _C1RX0EID_EID10_POSITION                 0x00000004
#define _C1RX0EID_EID10_MASK                     0x00000010
#define _C1RX0EID_EID10_LENGTH                   0x00000001

#define _C1RX0EID_EID11_POSITION                 0x00000005
#define _C1RX0EID_EID11_MASK                     0x00000020
#define _C1RX0EID_EID11_LENGTH                   0x00000001

#define _C1RX0EID_EID12_POSITION                 0x00000006
#define _C1RX0EID_EID12_MASK                     0x00000040
#define _C1RX0EID_EID12_LENGTH                   0x00000001

#define _C1RX0EID_EID13_POSITION                 0x00000007
#define _C1RX0EID_EID13_MASK                     0x00000080
#define _C1RX0EID_EID13_LENGTH                   0x00000001

#define _C1RX0EID_EID14_POSITION                 0x00000008
#define _C1RX0EID_EID14_MASK                     0x00000100
#define _C1RX0EID_EID14_LENGTH                   0x00000001

#define _C1RX0EID_EID15_POSITION                 0x00000009
#define _C1RX0EID_EID15_MASK                     0x00000200
#define _C1RX0EID_EID15_LENGTH                   0x00000001

#define _C1RX0EID_EID16_POSITION                 0x0000000A
#define _C1RX0EID_EID16_MASK                     0x00000400
#define _C1RX0EID_EID16_LENGTH                   0x00000001

#define _C1RX0EID_EID17_POSITION                 0x0000000B
#define _C1RX0EID_EID17_MASK                     0x00000800
#define _C1RX0EID_EID17_LENGTH                   0x00000001

#define _C1RX0DLC_DLC_POSITION                   0x00000000
#define _C1RX0DLC_DLC_MASK                       0x0000000F
#define _C1RX0DLC_DLC_LENGTH                     0x00000004

#define _C1RX0DLC_RXRB0_POSITION                 0x00000004
#define _C1RX0DLC_RXRB0_MASK                     0x00000010
#define _C1RX0DLC_RXRB0_LENGTH                   0x00000001

#define _C1RX0DLC_RXRB1_POSITION                 0x00000008
#define _C1RX0DLC_RXRB1_MASK                     0x00000100
#define _C1RX0DLC_RXRB1_LENGTH                   0x00000001

#define _C1RX0DLC_RXRTR_POSITION                 0x00000009
#define _C1RX0DLC_RXRTR_MASK                     0x00000200
#define _C1RX0DLC_RXRTR_LENGTH                   0x00000001

#define _C1RX0DLC_EID0_POSITION                  0x0000000A
#define _C1RX0DLC_EID0_MASK                      0x00000400
#define _C1RX0DLC_EID0_LENGTH                    0x00000001

#define _C1RX0DLC_EID1_POSITION                  0x0000000B
#define _C1RX0DLC_EID1_MASK                      0x00000800
#define _C1RX0DLC_EID1_LENGTH                    0x00000001

#define _C1RX0DLC_EID2_POSITION                  0x0000000C
#define _C1RX0DLC_EID2_MASK                      0x00001000
#define _C1RX0DLC_EID2_LENGTH                    0x00000001

#define _C1RX0DLC_EID3_POSITION                  0x0000000D
#define _C1RX0DLC_EID3_MASK                      0x00002000
#define _C1RX0DLC_EID3_LENGTH                    0x00000001

#define _C1RX0DLC_EID4_POSITION                  0x0000000E
#define _C1RX0DLC_EID4_MASK                      0x00004000
#define _C1RX0DLC_EID4_LENGTH                    0x00000001

#define _C1RX0DLC_EID5_POSITION                  0x0000000F
#define _C1RX0DLC_EID5_MASK                      0x00008000
#define _C1RX0DLC_EID5_LENGTH                    0x00000001

#define _C1RX0DLC_EID5_0_POSITION                0x0000000A
#define _C1RX0DLC_EID5_0_MASK                    0x0000FC00
#define _C1RX0DLC_EID5_0_LENGTH                  0x00000006

#define _C1RX0DLC_DLC0_POSITION                  0x00000000
#define _C1RX0DLC_DLC0_MASK                      0x00000001
#define _C1RX0DLC_DLC0_LENGTH                    0x00000001

#define _C1RX0DLC_DLC1_POSITION                  0x00000001
#define _C1RX0DLC_DLC1_MASK                      0x00000002
#define _C1RX0DLC_DLC1_LENGTH                    0x00000001

#define _C1RX0DLC_DLC2_POSITION                  0x00000002
#define _C1RX0DLC_DLC2_MASK                      0x00000004
#define _C1RX0DLC_DLC2_LENGTH                    0x00000001

#define _C1RX0DLC_DLC3_POSITION                  0x00000003
#define _C1RX0DLC_DLC3_MASK                      0x00000008
#define _C1RX0DLC_DLC3_LENGTH                    0x00000001

#define _C1RX0B1_TXB0D00_POSITION                0x00000000
#define _C1RX0B1_TXB0D00_MASK                    0x00000001
#define _C1RX0B1_TXB0D00_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D01_POSITION                0x00000001
#define _C1RX0B1_TXB0D01_MASK                    0x00000002
#define _C1RX0B1_TXB0D01_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D02_POSITION                0x00000002
#define _C1RX0B1_TXB0D02_MASK                    0x00000004
#define _C1RX0B1_TXB0D02_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D03_POSITION                0x00000003
#define _C1RX0B1_TXB0D03_MASK                    0x00000008
#define _C1RX0B1_TXB0D03_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D04_POSITION                0x00000004
#define _C1RX0B1_TXB0D04_MASK                    0x00000010
#define _C1RX0B1_TXB0D04_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D05_POSITION                0x00000005
#define _C1RX0B1_TXB0D05_MASK                    0x00000020
#define _C1RX0B1_TXB0D05_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D06_POSITION                0x00000006
#define _C1RX0B1_TXB0D06_MASK                    0x00000040
#define _C1RX0B1_TXB0D06_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D07_POSITION                0x00000007
#define _C1RX0B1_TXB0D07_MASK                    0x00000080
#define _C1RX0B1_TXB0D07_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D10_POSITION                0x00000008
#define _C1RX0B1_TXB0D10_MASK                    0x00000100
#define _C1RX0B1_TXB0D10_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D11_POSITION                0x00000009
#define _C1RX0B1_TXB0D11_MASK                    0x00000200
#define _C1RX0B1_TXB0D11_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D12_POSITION                0x0000000A
#define _C1RX0B1_TXB0D12_MASK                    0x00000400
#define _C1RX0B1_TXB0D12_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D13_POSITION                0x0000000B
#define _C1RX0B1_TXB0D13_MASK                    0x00000800
#define _C1RX0B1_TXB0D13_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D14_POSITION                0x0000000C
#define _C1RX0B1_TXB0D14_MASK                    0x00001000
#define _C1RX0B1_TXB0D14_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D15_POSITION                0x0000000D
#define _C1RX0B1_TXB0D15_MASK                    0x00002000
#define _C1RX0B1_TXB0D15_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D16_POSITION                0x0000000E
#define _C1RX0B1_TXB0D16_MASK                    0x00004000
#define _C1RX0B1_TXB0D16_LENGTH                  0x00000001

#define _C1RX0B1_TXB0D17_POSITION                0x0000000F
#define _C1RX0B1_TXB0D17_MASK                    0x00008000
#define _C1RX0B1_TXB0D17_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D20_POSITION                0x00000000
#define _C1RX0B2_TXB0D20_MASK                    0x00000001
#define _C1RX0B2_TXB0D20_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D21_POSITION                0x00000001
#define _C1RX0B2_TXB0D21_MASK                    0x00000002
#define _C1RX0B2_TXB0D21_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D22_POSITION                0x00000002
#define _C1RX0B2_TXB0D22_MASK                    0x00000004
#define _C1RX0B2_TXB0D22_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D23_POSITION                0x00000003
#define _C1RX0B2_TXB0D23_MASK                    0x00000008
#define _C1RX0B2_TXB0D23_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D24_POSITION                0x00000004
#define _C1RX0B2_TXB0D24_MASK                    0x00000010
#define _C1RX0B2_TXB0D24_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D25_POSITION                0x00000005
#define _C1RX0B2_TXB0D25_MASK                    0x00000020
#define _C1RX0B2_TXB0D25_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D26_POSITION                0x00000006
#define _C1RX0B2_TXB0D26_MASK                    0x00000040
#define _C1RX0B2_TXB0D26_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D27_POSITION                0x00000007
#define _C1RX0B2_TXB0D27_MASK                    0x00000080
#define _C1RX0B2_TXB0D27_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D30_POSITION                0x00000008
#define _C1RX0B2_TXB0D30_MASK                    0x00000100
#define _C1RX0B2_TXB0D30_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D31_POSITION                0x00000009
#define _C1RX0B2_TXB0D31_MASK                    0x00000200
#define _C1RX0B2_TXB0D31_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D32_POSITION                0x0000000A
#define _C1RX0B2_TXB0D32_MASK                    0x00000400
#define _C1RX0B2_TXB0D32_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D33_POSITION                0x0000000B
#define _C1RX0B2_TXB0D33_MASK                    0x00000800
#define _C1RX0B2_TXB0D33_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D34_POSITION                0x0000000C
#define _C1RX0B2_TXB0D34_MASK                    0x00001000
#define _C1RX0B2_TXB0D34_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D35_POSITION                0x0000000D
#define _C1RX0B2_TXB0D35_MASK                    0x00002000
#define _C1RX0B2_TXB0D35_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D36_POSITION                0x0000000E
#define _C1RX0B2_TXB0D36_MASK                    0x00004000
#define _C1RX0B2_TXB0D36_LENGTH                  0x00000001

#define _C1RX0B2_TXB0D37_POSITION                0x0000000F
#define _C1RX0B2_TXB0D37_MASK                    0x00008000
#define _C1RX0B2_TXB0D37_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D40_POSITION                0x00000000
#define _C1RX0B3_TXB0D40_MASK                    0x00000001
#define _C1RX0B3_TXB0D40_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D41_POSITION                0x00000001
#define _C1RX0B3_TXB0D41_MASK                    0x00000002
#define _C1RX0B3_TXB0D41_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D42_POSITION                0x00000002
#define _C1RX0B3_TXB0D42_MASK                    0x00000004
#define _C1RX0B3_TXB0D42_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D43_POSITION                0x00000003
#define _C1RX0B3_TXB0D43_MASK                    0x00000008
#define _C1RX0B3_TXB0D43_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D44_POSITION                0x00000004
#define _C1RX0B3_TXB0D44_MASK                    0x00000010
#define _C1RX0B3_TXB0D44_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D45_POSITION                0x00000005
#define _C1RX0B3_TXB0D45_MASK                    0x00000020
#define _C1RX0B3_TXB0D45_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D46_POSITION                0x00000006
#define _C1RX0B3_TXB0D46_MASK                    0x00000040
#define _C1RX0B3_TXB0D46_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D47_POSITION                0x00000007
#define _C1RX0B3_TXB0D47_MASK                    0x00000080
#define _C1RX0B3_TXB0D47_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D50_POSITION                0x00000008
#define _C1RX0B3_TXB0D50_MASK                    0x00000100
#define _C1RX0B3_TXB0D50_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D51_POSITION                0x00000009
#define _C1RX0B3_TXB0D51_MASK                    0x00000200
#define _C1RX0B3_TXB0D51_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D52_POSITION                0x0000000A
#define _C1RX0B3_TXB0D52_MASK                    0x00000400
#define _C1RX0B3_TXB0D52_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D53_POSITION                0x0000000B
#define _C1RX0B3_TXB0D53_MASK                    0x00000800
#define _C1RX0B3_TXB0D53_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D54_POSITION                0x0000000C
#define _C1RX0B3_TXB0D54_MASK                    0x00001000
#define _C1RX0B3_TXB0D54_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D55_POSITION                0x0000000D
#define _C1RX0B3_TXB0D55_MASK                    0x00002000
#define _C1RX0B3_TXB0D55_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D56_POSITION                0x0000000E
#define _C1RX0B3_TXB0D56_MASK                    0x00004000
#define _C1RX0B3_TXB0D56_LENGTH                  0x00000001

#define _C1RX0B3_TXB0D57_POSITION                0x0000000F
#define _C1RX0B3_TXB0D57_MASK                    0x00008000
#define _C1RX0B3_TXB0D57_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D60_POSITION                0x00000000
#define _C1RX0B4_TXB0D60_MASK                    0x00000001
#define _C1RX0B4_TXB0D60_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D61_POSITION                0x00000001
#define _C1RX0B4_TXB0D61_MASK                    0x00000002
#define _C1RX0B4_TXB0D61_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D62_POSITION                0x00000002
#define _C1RX0B4_TXB0D62_MASK                    0x00000004
#define _C1RX0B4_TXB0D62_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D63_POSITION                0x00000003
#define _C1RX0B4_TXB0D63_MASK                    0x00000008
#define _C1RX0B4_TXB0D63_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D64_POSITION                0x00000004
#define _C1RX0B4_TXB0D64_MASK                    0x00000010
#define _C1RX0B4_TXB0D64_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D65_POSITION                0x00000005
#define _C1RX0B4_TXB0D65_MASK                    0x00000020
#define _C1RX0B4_TXB0D65_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D66_POSITION                0x00000006
#define _C1RX0B4_TXB0D66_MASK                    0x00000040
#define _C1RX0B4_TXB0D66_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D67_POSITION                0x00000007
#define _C1RX0B4_TXB0D67_MASK                    0x00000080
#define _C1RX0B4_TXB0D67_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D70_POSITION                0x00000008
#define _C1RX0B4_TXB0D70_MASK                    0x00000100
#define _C1RX0B4_TXB0D70_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D71_POSITION                0x00000009
#define _C1RX0B4_TXB0D71_MASK                    0x00000200
#define _C1RX0B4_TXB0D71_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D72_POSITION                0x0000000A
#define _C1RX0B4_TXB0D72_MASK                    0x00000400
#define _C1RX0B4_TXB0D72_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D73_POSITION                0x0000000B
#define _C1RX0B4_TXB0D73_MASK                    0x00000800
#define _C1RX0B4_TXB0D73_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D74_POSITION                0x0000000C
#define _C1RX0B4_TXB0D74_MASK                    0x00001000
#define _C1RX0B4_TXB0D74_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D75_POSITION                0x0000000D
#define _C1RX0B4_TXB0D75_MASK                    0x00002000
#define _C1RX0B4_TXB0D75_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D76_POSITION                0x0000000E
#define _C1RX0B4_TXB0D76_MASK                    0x00004000
#define _C1RX0B4_TXB0D76_LENGTH                  0x00000001

#define _C1RX0B4_TXB0D77_POSITION                0x0000000F
#define _C1RX0B4_TXB0D77_MASK                    0x00008000
#define _C1RX0B4_TXB0D77_LENGTH                  0x00000001

#define _C1RX0CON_FILHIT0_POSITION               0x00000000
#define _C1RX0CON_FILHIT0_MASK                   0x00000001
#define _C1RX0CON_FILHIT0_LENGTH                 0x00000001

#define _C1RX0CON_JTOFF_POSITION                 0x00000001
#define _C1RX0CON_JTOFF_MASK                     0x00000002
#define _C1RX0CON_JTOFF_LENGTH                   0x00000001

#define _C1RX0CON_DBEN_POSITION                  0x00000002
#define _C1RX0CON_DBEN_MASK                      0x00000004
#define _C1RX0CON_DBEN_LENGTH                    0x00000001

#define _C1RX0CON_RXRTRRO_POSITION               0x00000003
#define _C1RX0CON_RXRTRRO_MASK                   0x00000008
#define _C1RX0CON_RXRTRRO_LENGTH                 0x00000001

#define _C1RX0CON_RXFUL_POSITION                 0x00000007
#define _C1RX0CON_RXFUL_MASK                     0x00000080
#define _C1RX0CON_RXFUL_LENGTH                   0x00000001

#define _C1RX0CON_FILHIT_POSITION                0x00000000
#define _C1RX0CON_FILHIT_MASK                    0x00000001
#define _C1RX0CON_FILHIT_LENGTH                  0x00000001

#define _C1RX0CON_RXB0DBEN_POSITION              0x00000002
#define _C1RX0CON_RXB0DBEN_MASK                  0x00000004
#define _C1RX0CON_RXB0DBEN_LENGTH                0x00000001

#define _C1CTRL_ICODE_POSITION                   0x00000001
#define _C1CTRL_ICODE_MASK                       0x0000000E
#define _C1CTRL_ICODE_LENGTH                     0x00000003

#define _C1CTRL_OPMODE_POSITION                  0x00000005
#define _C1CTRL_OPMODE_MASK                      0x000000E0
#define _C1CTRL_OPMODE_LENGTH                    0x00000003

#define _C1CTRL_REQOP_POSITION                   0x00000008
#define _C1CTRL_REQOP_MASK                       0x00000700
#define _C1CTRL_REQOP_LENGTH                     0x00000003

#define _C1CTRL_CANCKS_POSITION                  0x0000000B
#define _C1CTRL_CANCKS_MASK                      0x00000800
#define _C1CTRL_CANCKS_LENGTH                    0x00000001

#define _C1CTRL_ABAT_POSITION                    0x0000000C
#define _C1CTRL_ABAT_MASK                        0x00001000
#define _C1CTRL_ABAT_LENGTH                      0x00000001

#define _C1CTRL_CANSIDL_POSITION                 0x0000000D
#define _C1CTRL_CANSIDL_MASK                     0x00002000
#define _C1CTRL_CANSIDL_LENGTH                   0x00000001

#define _C1CTRL_CANFRZ_POSITION                  0x0000000E
#define _C1CTRL_CANFRZ_MASK                      0x00004000
#define _C1CTRL_CANFRZ_LENGTH                    0x00000001

#define _C1CTRL_CANCAP_POSITION                  0x0000000F
#define _C1CTRL_CANCAP_MASK                      0x00008000
#define _C1CTRL_CANCAP_LENGTH                    0x00000001

#define _C1CTRL_ICODE0_POSITION                  0x00000001
#define _C1CTRL_ICODE0_MASK                      0x00000002
#define _C1CTRL_ICODE0_LENGTH                    0x00000001

#define _C1CTRL_ICODE1_POSITION                  0x00000002
#define _C1CTRL_ICODE1_MASK                      0x00000004
#define _C1CTRL_ICODE1_LENGTH                    0x00000001

#define _C1CTRL_ICODE2_POSITION                  0x00000003
#define _C1CTRL_ICODE2_MASK                      0x00000008
#define _C1CTRL_ICODE2_LENGTH                    0x00000001

#define _C1CTRL_OPMODE0_POSITION                 0x00000005
#define _C1CTRL_OPMODE0_MASK                     0x00000020
#define _C1CTRL_OPMODE0_LENGTH                   0x00000001

#define _C1CTRL_OPMODE1_POSITION                 0x00000006
#define _C1CTRL_OPMODE1_MASK                     0x00000040
#define _C1CTRL_OPMODE1_LENGTH                   0x00000001

#define _C1CTRL_OPMODE2_POSITION                 0x00000007
#define _C1CTRL_OPMODE2_MASK                     0x00000080
#define _C1CTRL_OPMODE2_LENGTH                   0x00000001

#define _C1CTRL_REQOP0_POSITION                  0x00000008
#define _C1CTRL_REQOP0_MASK                      0x00000100
#define _C1CTRL_REQOP0_LENGTH                    0x00000001

#define _C1CTRL_REQOP1_POSITION                  0x00000009
#define _C1CTRL_REQOP1_MASK                      0x00000200
#define _C1CTRL_REQOP1_LENGTH                    0x00000001

#define _C1CTRL_REQOP2_POSITION                  0x0000000A
#define _C1CTRL_REQOP2_MASK                      0x00000400
#define _C1CTRL_REQOP2_LENGTH                    0x00000001

#define _C1CTRL_CSIDL_POSITION                   0x0000000D
#define _C1CTRL_CSIDL_MASK                       0x00002000
#define _C1CTRL_CSIDL_LENGTH                     0x00000001

#define _C1CFG1_BRP_POSITION                     0x00000000
#define _C1CFG1_BRP_MASK                         0x0000003F
#define _C1CFG1_BRP_LENGTH                       0x00000006

#define _C1CFG1_SJW_POSITION                     0x00000006
#define _C1CFG1_SJW_MASK                         0x000000C0
#define _C1CFG1_SJW_LENGTH                       0x00000002

#define _C1CFG2_PRSEG_POSITION                   0x00000000
#define _C1CFG2_PRSEG_MASK                       0x00000007
#define _C1CFG2_PRSEG_LENGTH                     0x00000003

#define _C1CFG2_SEG1PH_POSITION                  0x00000003
#define _C1CFG2_SEG1PH_MASK                      0x00000038
#define _C1CFG2_SEG1PH_LENGTH                    0x00000003

#define _C1CFG2_SAM_POSITION                     0x00000006
#define _C1CFG2_SAM_MASK                         0x00000040
#define _C1CFG2_SAM_LENGTH                       0x00000001

#define _C1CFG2_SEG2PHTS_POSITION                0x00000007
#define _C1CFG2_SEG2PHTS_MASK                    0x00000080
#define _C1CFG2_SEG2PHTS_LENGTH                  0x00000001

#define _C1CFG2_SEG2PH_POSITION                  0x00000008
#define _C1CFG2_SEG2PH_MASK                      0x00000700
#define _C1CFG2_SEG2PH_LENGTH                    0x00000003

#define _C1CFG2_WAKFIL_POSITION                  0x0000000E
#define _C1CFG2_WAKFIL_MASK                      0x00004000
#define _C1CFG2_WAKFIL_LENGTH                    0x00000001

#define _C1CFG2_PRSEG0_POSITION                  0x00000000
#define _C1CFG2_PRSEG0_MASK                      0x00000001
#define _C1CFG2_PRSEG0_LENGTH                    0x00000001

#define _C1CFG2_PRSEG1_POSITION                  0x00000001
#define _C1CFG2_PRSEG1_MASK                      0x00000002
#define _C1CFG2_PRSEG1_LENGTH                    0x00000001

#define _C1CFG2_PRSEG2_POSITION                  0x00000002
#define _C1CFG2_PRSEG2_MASK                      0x00000004
#define _C1CFG2_PRSEG2_LENGTH                    0x00000001

#define _C1CFG2_SEG1PH0_POSITION                 0x00000003
#define _C1CFG2_SEG1PH0_MASK                     0x00000008
#define _C1CFG2_SEG1PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH1_POSITION                 0x00000004
#define _C1CFG2_SEG1PH1_MASK                     0x00000010
#define _C1CFG2_SEG1PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH2_POSITION                 0x00000005
#define _C1CFG2_SEG1PH2_MASK                     0x00000020
#define _C1CFG2_SEG1PH2_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH0_POSITION                 0x00000008
#define _C1CFG2_SEG2PH0_MASK                     0x00000100
#define _C1CFG2_SEG2PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH1_POSITION                 0x00000009
#define _C1CFG2_SEG2PH1_MASK                     0x00000200
#define _C1CFG2_SEG2PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH2_POSITION                 0x0000000A
#define _C1CFG2_SEG2PH2_MASK                     0x00000400
#define _C1CFG2_SEG2PH2_LENGTH                   0x00000001

#define _C1INTF_RXB0IF_POSITION                  0x00000000
#define _C1INTF_RXB0IF_MASK                      0x00000001
#define _C1INTF_RXB0IF_LENGTH                    0x00000001

#define _C1INTF_RXB1IF_POSITION                  0x00000001
#define _C1INTF_RXB1IF_MASK                      0x00000002
#define _C1INTF_RXB1IF_LENGTH                    0x00000001

#define _C1INTF_TXB0IF_POSITION                  0x00000002
#define _C1INTF_TXB0IF_MASK                      0x00000004
#define _C1INTF_TXB0IF_LENGTH                    0x00000001

#define _C1INTF_TXB1IF_POSITION                  0x00000003
#define _C1INTF_TXB1IF_MASK                      0x00000008
#define _C1INTF_TXB1IF_LENGTH                    0x00000001

#define _C1INTF_TXB2IF_POSITION                  0x00000004
#define _C1INTF_TXB2IF_MASK                      0x00000010
#define _C1INTF_TXB2IF_LENGTH                    0x00000001

#define _C1INTF_ERRIF_POSITION                   0x00000005
#define _C1INTF_ERRIF_MASK                       0x00000020
#define _C1INTF_ERRIF_LENGTH                     0x00000001

#define _C1INTF_WAKIF_POSITION                   0x00000006
#define _C1INTF_WAKIF_MASK                       0x00000040
#define _C1INTF_WAKIF_LENGTH                     0x00000001

#define _C1INTF_IRXIF_POSITION                   0x00000007
#define _C1INTF_IRXIF_MASK                       0x00000080
#define _C1INTF_IRXIF_LENGTH                     0x00000001

#define _C1INTF_EWARN_POSITION                   0x00000008
#define _C1INTF_EWARN_MASK                       0x00000100
#define _C1INTF_EWARN_LENGTH                     0x00000001

#define _C1INTF_RXWARN_POSITION                  0x00000009
#define _C1INTF_RXWARN_MASK                      0x00000200
#define _C1INTF_RXWARN_LENGTH                    0x00000001

#define _C1INTF_TXWARN_POSITION                  0x0000000A
#define _C1INTF_TXWARN_MASK                      0x00000400
#define _C1INTF_TXWARN_LENGTH                    0x00000001

#define _C1INTF_RXBP_POSITION                    0x0000000B
#define _C1INTF_RXBP_MASK                        0x00000800
#define _C1INTF_RXBP_LENGTH                      0x00000001

#define _C1INTF_TXBP_POSITION                    0x0000000C
#define _C1INTF_TXBP_MASK                        0x00001000
#define _C1INTF_TXBP_LENGTH                      0x00000001

#define _C1INTF_TXBO_POSITION                    0x0000000D
#define _C1INTF_TXBO_MASK                        0x00002000
#define _C1INTF_TXBO_LENGTH                      0x00000001

#define _C1INTF_RXB1OVFL_POSITION                0x0000000E
#define _C1INTF_RXB1OVFL_MASK                    0x00004000
#define _C1INTF_RXB1OVFL_LENGTH                  0x00000001

#define _C1INTF_RXB0OVFL_POSITION                0x0000000F
#define _C1INTF_RXB0OVFL_MASK                    0x00008000
#define _C1INTF_RXB0OVFL_LENGTH                  0x00000001

#define _C1INTF_RX0IF_POSITION                   0x00000000
#define _C1INTF_RX0IF_MASK                       0x00000001
#define _C1INTF_RX0IF_LENGTH                     0x00000001

#define _C1INTF_RX1IF_POSITION                   0x00000001
#define _C1INTF_RX1IF_MASK                       0x00000002
#define _C1INTF_RX1IF_LENGTH                     0x00000001

#define _C1INTF_TX0IF_POSITION                   0x00000002
#define _C1INTF_TX0IF_MASK                       0x00000004
#define _C1INTF_TX0IF_LENGTH                     0x00000001

#define _C1INTF_TX1IF_POSITION                   0x00000003
#define _C1INTF_TX1IF_MASK                       0x00000008
#define _C1INTF_TX1IF_LENGTH                     0x00000001

#define _C1INTF_TX2IF_POSITION                   0x00000004
#define _C1INTF_TX2IF_MASK                       0x00000010
#define _C1INTF_TX2IF_LENGTH                     0x00000001

#define _C1INTF_IVRIF_POSITION                   0x00000007
#define _C1INTF_IVRIF_MASK                       0x00000080
#define _C1INTF_IVRIF_LENGTH                     0x00000001

#define _C1INTF_RXWAR_POSITION                   0x00000009
#define _C1INTF_RXWAR_MASK                       0x00000200
#define _C1INTF_RXWAR_LENGTH                     0x00000001

#define _C1INTF_TXWAR_POSITION                   0x0000000A
#define _C1INTF_TXWAR_MASK                       0x00000400
#define _C1INTF_TXWAR_LENGTH                     0x00000001

#define _C1INTF_RXEP_POSITION                    0x0000000B
#define _C1INTF_RXEP_MASK                        0x00000800
#define _C1INTF_RXEP_LENGTH                      0x00000001

#define _C1INTF_TXEP_POSITION                    0x0000000C
#define _C1INTF_TXEP_MASK                        0x00001000
#define _C1INTF_TXEP_LENGTH                      0x00000001

#define _C1INTF_RX1OVR_POSITION                  0x0000000E
#define _C1INTF_RX1OVR_MASK                      0x00004000
#define _C1INTF_RX1OVR_LENGTH                    0x00000001

#define _C1INTF_RX0OVR_POSITION                  0x0000000F
#define _C1INTF_RX0OVR_MASK                      0x00008000
#define _C1INTF_RX0OVR_LENGTH                    0x00000001

#define _C1INTE_RXB0IE_POSITION                  0x00000000
#define _C1INTE_RXB0IE_MASK                      0x00000001
#define _C1INTE_RXB0IE_LENGTH                    0x00000001

#define _C1INTE_RXB1IE_POSITION                  0x00000001
#define _C1INTE_RXB1IE_MASK                      0x00000002
#define _C1INTE_RXB1IE_LENGTH                    0x00000001

#define _C1INTE_TXB0IE_POSITION                  0x00000002
#define _C1INTE_TXB0IE_MASK                      0x00000004
#define _C1INTE_TXB0IE_LENGTH                    0x00000001

#define _C1INTE_TXB1IE_POSITION                  0x00000003
#define _C1INTE_TXB1IE_MASK                      0x00000008
#define _C1INTE_TXB1IE_LENGTH                    0x00000001

#define _C1INTE_TXB2IE_POSITION                  0x00000004
#define _C1INTE_TXB2IE_MASK                      0x00000010
#define _C1INTE_TXB2IE_LENGTH                    0x00000001

#define _C1INTE_ERRIE_POSITION                   0x00000005
#define _C1INTE_ERRIE_MASK                       0x00000020
#define _C1INTE_ERRIE_LENGTH                     0x00000001

#define _C1INTE_WAKIE_POSITION                   0x00000006
#define _C1INTE_WAKIE_MASK                       0x00000040
#define _C1INTE_WAKIE_LENGTH                     0x00000001

#define _C1INTE_IRXIE_POSITION                   0x00000007
#define _C1INTE_IRXIE_MASK                       0x00000080
#define _C1INTE_IRXIE_LENGTH                     0x00000001

#define _C1INTE_RX0IE_POSITION                   0x00000000
#define _C1INTE_RX0IE_MASK                       0x00000001
#define _C1INTE_RX0IE_LENGTH                     0x00000001

#define _C1INTE_RX1IE_POSITION                   0x00000001
#define _C1INTE_RX1IE_MASK                       0x00000002
#define _C1INTE_RX1IE_LENGTH                     0x00000001

#define _C1INTE_TX0IE_POSITION                   0x00000002
#define _C1INTE_TX0IE_MASK                       0x00000004
#define _C1INTE_TX0IE_LENGTH                     0x00000001

#define _C1INTE_TX1IE_POSITION                   0x00000003
#define _C1INTE_TX1IE_MASK                       0x00000008
#define _C1INTE_TX1IE_LENGTH                     0x00000001

#define _C1INTE_TX2IE_POSITION                   0x00000004
#define _C1INTE_TX2IE_MASK                       0x00000010
#define _C1INTE_TX2IE_LENGTH                     0x00000001

#define _C1INTE_IVRIE_POSITION                   0x00000007
#define _C1INTE_IVRIE_MASK                       0x00000080
#define _C1INTE_IVRIE_LENGTH                     0x00000001

#define _C1EC_REC0_POSITION                      0x00000000
#define _C1EC_REC0_MASK                          0x00000001
#define _C1EC_REC0_LENGTH                        0x00000001

#define _C1EC_REC1_POSITION                      0x00000001
#define _C1EC_REC1_MASK                          0x00000002
#define _C1EC_REC1_LENGTH                        0x00000001

#define _C1EC_REC2_POSITION                      0x00000002
#define _C1EC_REC2_MASK                          0x00000004
#define _C1EC_REC2_LENGTH                        0x00000001

#define _C1EC_REC3_POSITION                      0x00000003
#define _C1EC_REC3_MASK                          0x00000008
#define _C1EC_REC3_LENGTH                        0x00000001

#define _C1EC_REC4_POSITION                      0x00000004
#define _C1EC_REC4_MASK                          0x00000010
#define _C1EC_REC4_LENGTH                        0x00000001

#define _C1EC_REC5_POSITION                      0x00000005
#define _C1EC_REC5_MASK                          0x00000020
#define _C1EC_REC5_LENGTH                        0x00000001

#define _C1EC_REC6_POSITION                      0x00000006
#define _C1EC_REC6_MASK                          0x00000040
#define _C1EC_REC6_LENGTH                        0x00000001

#define _C1EC_REC7_POSITION                      0x00000007
#define _C1EC_REC7_MASK                          0x00000080
#define _C1EC_REC7_LENGTH                        0x00000001

#define _C1EC_TEC0_POSITION                      0x00000008
#define _C1EC_TEC0_MASK                          0x00000100
#define _C1EC_TEC0_LENGTH                        0x00000001

#define _C1EC_TEC1_POSITION                      0x00000009
#define _C1EC_TEC1_MASK                          0x00000200
#define _C1EC_TEC1_LENGTH                        0x00000001

#define _C1EC_TEC2_POSITION                      0x0000000A
#define _C1EC_TEC2_MASK                          0x00000400
#define _C1EC_TEC2_LENGTH                        0x00000001

#define _C1EC_TEC3_POSITION                      0x0000000B
#define _C1EC_TEC3_MASK                          0x00000800
#define _C1EC_TEC3_LENGTH                        0x00000001

#define _C1EC_TEC4_POSITION                      0x0000000C
#define _C1EC_TEC4_MASK                          0x00001000
#define _C1EC_TEC4_LENGTH                        0x00000001

#define _C1EC_TEC5_POSITION                      0x0000000D
#define _C1EC_TEC5_MASK                          0x00002000
#define _C1EC_TEC5_LENGTH                        0x00000001

#define _C1EC_TEC6_POSITION                      0x0000000E
#define _C1EC_TEC6_MASK                          0x00004000
#define _C1EC_TEC6_LENGTH                        0x00000001

#define _C1EC_TEC7_POSITION                      0x0000000F
#define _C1EC_TEC7_MASK                          0x00008000
#define _C1EC_TEC7_LENGTH                        0x00000001

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWDTEN_POSITION                    0x00000005
#define _RCON_SWDTEN_MASK                        0x00000020
#define _RCON_SWDTEN_LENGTH                      0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_BGST_POSITION                      0x0000000D
#define _RCON_BGST_MASK                          0x00002000
#define _RCON_BGST_LENGTH                        0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_POST_POSITION                    0x00000006
#define _OSCCON_POST_MASK                        0x000000C0
#define _OSCCON_POST_LENGTH                      0x00000002

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_POST0_POSITION                   0x00000006
#define _OSCCON_POST0_MASK                       0x00000040
#define _OSCCON_POST0_LENGTH                     0x00000001

#define _OSCCON_POST1_POSITION                   0x00000007
#define _OSCCON_POST1_MASK                       0x00000080
#define _OSCCON_POST1_LENGTH                     0x00000001

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000007F
#define _NVMCON_PROGOP_LENGTH                    0x00000007

#define _NVMCON_TWRI_POSITION                    0x00000008
#define _NVMCON_TWRI_MASK                        0x00000100
#define _NVMCON_TWRI_LENGTH                      0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_PROGOP0_POSITION                 0x00000000
#define _NVMCON_PROGOP0_MASK                     0x00000001
#define _NVMCON_PROGOP0_LENGTH                   0x00000001

#define _NVMCON_PROGOP1_POSITION                 0x00000001
#define _NVMCON_PROGOP1_MASK                     0x00000002
#define _NVMCON_PROGOP1_LENGTH                   0x00000001

#define _NVMCON_PROGOP2_POSITION                 0x00000002
#define _NVMCON_PROGOP2_MASK                     0x00000004
#define _NVMCON_PROGOP2_LENGTH                   0x00000001

#define _NVMCON_PROGOP3_POSITION                 0x00000003
#define _NVMCON_PROGOP3_MASK                     0x00000008
#define _NVMCON_PROGOP3_LENGTH                   0x00000001

#define _NVMCON_PROGOP4_POSITION                 0x00000004
#define _NVMCON_PROGOP4_MASK                     0x00000010
#define _NVMCON_PROGOP4_LENGTH                   0x00000001

#define _NVMCON_PROGOP5_POSITION                 0x00000005
#define _NVMCON_PROGOP5_MASK                     0x00000020
#define _NVMCON_PROGOP5_LENGTH                   0x00000001

#define _NVMCON_PROGOP6_POSITION                 0x00000006
#define _NVMCON_PROGOP6_MASK                     0x00000040
#define _NVMCON_PROGOP6_LENGTH                   0x00000001

#define _NVMADRU_NVMADR_POSITION                 0x00000000
#define _NVMADRU_NVMADR_MASK                     0x000000FF
#define _NVMADRU_NVMADR_LENGTH                   0x00000008

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_C1MD_POSITION                      0x00000001
#define _PMD1_C1MD_MASK                          0x00000002
#define _PMD1_C1MD_LENGTH                        0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_SPI2MD_POSITION                    0x00000004
#define _PMD1_SPI2MD_MASK                        0x00000010
#define _PMD1_SPI2MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_I2CMD_POSITION                     0x00000007
#define _PMD1_I2CMD_MASK                         0x00000080
#define _PMD1_I2CMD_LENGTH                       0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_QEIMD_POSITION                     0x0000000A
#define _PMD1_QEIMD_MASK                         0x00000400
#define _PMD1_QEIMD_LENGTH                       0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD1_T4MD_POSITION                      0x0000000E
#define _PMD1_T4MD_MASK                          0x00004000
#define _PMD1_T4MD_LENGTH                        0x00000001

#define _PMD1_T5MD_POSITION                      0x0000000F
#define _PMD1_T5MD_MASK                          0x00008000
#define _PMD1_T5MD_LENGTH                        0x00000001

#define _PMD2_OC1MD_POSITION                     0x00000000
#define _PMD2_OC1MD_MASK                         0x00000001
#define _PMD2_OC1MD_LENGTH                       0x00000001

#define _PMD2_OC2MD_POSITION                     0x00000001
#define _PMD2_OC2MD_MASK                         0x00000002
#define _PMD2_OC2MD_LENGTH                       0x00000001

#define _PMD2_OC3MD_POSITION                     0x00000002
#define _PMD2_OC3MD_MASK                         0x00000004
#define _PMD2_OC3MD_LENGTH                       0x00000001

#define _PMD2_OC4MD_POSITION                     0x00000003
#define _PMD2_OC4MD_MASK                         0x00000008
#define _PMD2_OC4MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD2_IC2MD_POSITION                     0x00000009
#define _PMD2_IC2MD_MASK                         0x00000200
#define _PMD2_IC2MD_LENGTH                       0x00000001

#define _PMD2_IC3MD_POSITION                     0x0000000A
#define _PMD2_IC3MD_MASK                         0x00000400
#define _PMD2_IC3MD_LENGTH                       0x00000001

#define _PMD2_IC4MD_POSITION                     0x0000000B
#define _PMD2_IC4MD_MASK                         0x00000800
#define _PMD2_IC4MD_LENGTH                       0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FUID0 (0x8005c0)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID0;
#define _FUID0(x) __attribute__((address(0x8005c0),deprecated_definition("consider migrating to #pragma config"),section("__FUID0.sec"),space(prog))) __prog__ uint16_t _FUID0 = (x);

/*
** Only one invocation of FUID0 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID0.
** Multiple options may be combined, as shown:
**
** _FUID0( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID1 (0x8005c2)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID1;
#define _FUID1(x) __attribute__((address(0x8005c2),deprecated_definition("consider migrating to #pragma config"),section("__FUID1.sec"),space(prog))) __prog__ uint16_t _FUID1 = (x);

/*
** Only one invocation of FUID1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID1.
** Multiple options may be combined, as shown:
**
** _FUID1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID2 (0x8005c4)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID2;
#define _FUID2(x) __attribute__((address(0x8005c4),deprecated_definition("consider migrating to #pragma config"),section("__FUID2.sec"),space(prog))) __prog__ uint16_t _FUID2 = (x);

/*
** Only one invocation of FUID2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID2.
** Multiple options may be combined, as shown:
**
** _FUID2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID3 (0x8005c6)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FUID3;
#define _FUID3(x) __attribute__((address(0x8005c6),deprecated_definition("consider migrating to #pragma config"),section("__FUID3.sec"),space(prog))) __prog__ uint16_t _FUID3 = (x);

/*
** Only one invocation of FUID3 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID3.
** Multiple options may be combined, as shown:
**
** _FUID3( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FOSC (0xf80000)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FOSC;
#define _FOSC(x) __attribute__((address(0xf80000),deprecated_definition("consider migrating to #pragma config"),section("__FOSC.sec"),space(prog))) __prog__ uint16_t _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator:
**     LP                   Low-Power 32KHz Osc (No change to Primary Osc Mode bits)
**     FRC                  Internal Fast RC (No change to Primary Osc Mode bits)
**     LPRC                 Internal Low-Power RC (No change to Primary Osc Mode bits)
**     XTL                  XTL
**     HS                   HS
**     XT                   XT
**     ERCIO                ERCIO
**     ERC                  ERC
**     EC                   EC
**     ECIO                 ECIO
**     FRC_PLL4             FRC w/PLL 4x
**     FRC_PLL16            FRC w/PLL 16x
**     XT_PLL4              XT w/PLL 4x
**     XT_PLL8              XT w/PLL 8x
**     XT_PLL16             XT w/PLL 16x
**     FRC_PLL8             FRC w/PLL 8x
**     ECIO_PLL4            ECIO w/PLL 4x
**     ECIO_PLL8            ECIO w/PLL 8x
**     ECIO_PLL16           ECIO w/PLL 16x
**     HS2_PLL4             HS2 w/PLL 4x
**     HS2_PLL8             HS2 w/PLL 8x
**     HS2_PLL16            HS2 w/PLL 16x
**     HS3_PLL4             HS3 w/PLL 4x
**     HS3_PLL8             HS3 w/PLL 8x
**     HS3_PLL16            HS3 w/PLL 16x
**
**   Clock Switching and Monitor:
**     CSW_FSCM_ON          Sw Enabled, Mon Enabled
**     CSW_ON_FSCM_OFF      Sw Enabled, Mon Disabled
**     CSW_FSCM_OFF         Sw Disabled, Mon Disabled
**
*/

#define LP                   0xC000
#define FRC                  0xC100
#define LPRC                 0xC200
#define XTL                  0xC300
#define HS                   0xC302
#define XT                   0xC304
#define ERCIO                0xC308
#define ERC                  0xC309
#define EC                   0xC30B
#define ECIO                 0xC30C
#define FRC_PLL4             0xC701
#define FRC_PLL16            0xC703
#define XT_PLL4              0xC705
#define XT_PLL8              0xC706
#define XT_PLL16             0xC707
#define FRC_PLL8             0xC70A
#define ECIO_PLL4            0xC70D
#define ECIO_PLL8            0xC70E
#define ECIO_PLL16           0xC70F
#define HS2_PLL4             0xC711
#define HS2_PLL8             0xC712
#define HS2_PLL16            0xC713
#define HS3_PLL4             0xC715
#define HS3_PLL8             0xC716
#define HS3_PLL16            0xC717

#define CSW_FSCM_ON          0x071F
#define CSW_ON_FSCM_OFF      0x471F
#define CSW_FSCM_OFF         0x871F

/* Register FWDT (0xf80002)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FWDT;
#define _FWDT(x) __attribute__((address(0xf80002),deprecated_definition("consider migrating to #pragma config"),section("__FWDT.sec"),space(prog))) __prog__ uint16_t _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   WDT Prescaler B:
**     WDTPSB_1             1:1
**     WDTPSB_2             1:2
**     WDTPSB_3             1:3
**     WDTPSB_4             1:4
**     WDTPSB_5             1:5
**     WDTPSB_6             1:6
**     WDTPSB_7             1:7
**     WDTPSB_8             1:8
**     WDTPSB_9             1:9
**     WDTPSB_10            1:10
**     WDTPSB_11            1:11
**     WDTPSB_12            1:12
**     WDTPSB_13            1:13
**     WDTPSB_14            1:14
**     WDTPSB_15            1:15
**     WDTPSB_16            1:16
**
**   WDT Prescaler A:
**     WDTPSA_1             1:1
**     WDTPSA_8             1:8
**     WDTPSA_64            1:64
**     WDTPSA_512           1:512
**
**   Watchdog Timer:
**     WDT_OFF              Disabled
**     WDT_ON               Enabled
**
*/

#define WDTPSB_1             0x8030
#define WDTPSB_2             0x8031
#define WDTPSB_3             0x8032
#define WDTPSB_4             0x8033
#define WDTPSB_5             0x8034
#define WDTPSB_6             0x8035
#define WDTPSB_7             0x8036
#define WDTPSB_8             0x8037
#define WDTPSB_9             0x8038
#define WDTPSB_10            0x8039
#define WDTPSB_11            0x803A
#define WDTPSB_12            0x803B
#define WDTPSB_13            0x803C
#define WDTPSB_14            0x803D
#define WDTPSB_15            0x803E
#define WDTPSB_16            0x803F

#define WDTPSA_1             0x800F
#define WDTPSA_8             0x801F
#define WDTPSA_64            0x802F
#define WDTPSA_512           0x803F

#define WDT_OFF              0x003F
#define WDT_ON               0x803F

/* Register FBORPOR (0xf80004)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FBORPOR;
#define _FBORPOR(x) __attribute__((address(0xf80004),deprecated_definition("consider migrating to #pragma config"),section("__FBORPOR.sec"),space(prog))) __prog__ uint16_t _FBORPOR = (x);

/*
** Only one invocation of FBORPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBORPOR.
** Multiple options may be combined, as shown:
**
** _FBORPOR( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   POR Timer Value:
**     PWRT_OFF             Timer Disabled
**     PWRT_4               4ms
**     PWRT_16              16ms
**     PWRT_64              64ms
**
**   Brown Out Voltage:
**     BORV45               4.5V
**     BORV42               4.2V
**     BORV27               2.7V
**     BORV20               Reserved
**
**   PBOR Enable:
**     PBOR_OFF             Disabled
**     PBOR_ON              Enabled
**
**   Low-side PWM Output Polarity:
**     PWMxL_ACT_LO         Active Low
**     PWMxL_ACT_HI         Active High
**
**   High-side PWM Output Polarity:
**     PWMxH_ACT_LO         Active Low
**     PWMxH_ACT_HI         Active High
**
**   PWM Output Pin Reset:
**     RST_PWMPIN           Control with HPOL/LPOL bits
**     RST_IOPIN            Control with PORT/TRIS regs
**
**   Master Clear Enable:
**     MCLR_DIS             Disabled
**     MCLR_EN              Enabled
**
*/

#define PWRT_OFF             0x87B0
#define PWRT_4               0x87B1
#define PWRT_16              0x87B2
#define PWRT_64              0x87B3

#define BORV45               0x8783
#define BORV42               0x8793
#define BORV27               0x87A3
#define BORV20               0x87B3

#define PBOR_OFF             0x8733
#define PBOR_ON              0x87B3

#define PWMxL_ACT_LO         0x86B3
#define PWMxL_ACT_HI         0x87B3

#define PWMxH_ACT_LO         0x85B3
#define PWMxH_ACT_HI         0x87B3

#define RST_PWMPIN           0x83B3
#define RST_IOPIN            0x87B3

#define MCLR_DIS             0x07B3
#define MCLR_EN              0x87B3

/* Register RESERVED1 (0xf80006)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _RESERVED1;
#define _RESERVED1(x) __attribute__((address(0xf80006),deprecated_definition("consider migrating to #pragma config"),section("__RESERVED1.sec"),space(prog))) __prog__ uint16_t _RESERVED1 = (x);

/*
** Only one invocation of RESERVED1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set RESERVED1.
** Multiple options may be combined, as shown:
**
** _RESERVED1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register RESERVED2 (0xf80008)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _RESERVED2;
#define _RESERVED2(x) __attribute__((address(0xf80008),deprecated_definition("consider migrating to #pragma config"),section("__RESERVED2.sec"),space(prog))) __prog__ uint16_t _RESERVED2 = (x);

/*
** Only one invocation of RESERVED2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set RESERVED2.
** Multiple options may be combined, as shown:
**
** _RESERVED2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register FGS (0xf8000a)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FGS;
#define _FGS(x) __attribute__((address(0xf8000a),deprecated_definition("consider migrating to #pragma config"),section("__FGS.sec"),space(prog))) __prog__ uint16_t _FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** _FGS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   General Code Segment Write Protect:
**     GWRP_ON              Enabled
**     GWRP_OFF             Disabled
**
**   General Segment Code Protection:
**     GCP_CODE_PROT_ON     Enabled
**     GCP_CODE_PROT_OFF    Disabled
**
*/

#define GWRP_ON              0x0006
#define GWRP_OFF             0x0007

#define GCP_CODE_PROT_ON     0x0001
#define GCP_CODE_PROT_OFF    0x0007

/* Register FICD (0xf8000c)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FICD;
#define _FICD(x) __attribute__((address(0xf8000c),deprecated_definition("consider migrating to #pragma config"),section("__FICD.sec"),space(prog))) __prog__ uint16_t _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Comm Channel Select:
**     ICS_PGD3             Use EMUC3 and EMUD3
**     PGD3                 Use EMUC3 and EMUD3
**     ICS_PGD2             Use EMUC2 and EMUD2
**     PGD2                 Use EMUC2 and EMUD2
**     ICS_PGD1             Use EMUC1 and EMUD1
**     PGD1                 Use EMUC1 and EMUD1
**     ICS_PGD              Use PGC/EMUC and PGD/EMUD
**     PGD                  Use PGC/EMUC and PGD/EMUD
**
*/

#define ICS_PGD3             0xC000
#define PGD3                 0xC000
#define ICS_PGD2             0xC001
#define PGD2                 0xC001
#define ICS_PGD1             0xC002
#define PGD1                 0xC002
#define ICS_PGD              0xC003
#define PGD                  0xC003



/*
 * Memory Segments Sizes
 */

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0x7c

#define ___RESERVED_BASE 0x80
#define ___RESERVED_LENGTH 0x4

#define __AIVT_BASE 0x84
#define __AIVT_LENGTH 0x7c

#define __PROGRAM_BASE 0x100
#define __PROGRAM_LENGTH 0xaf00

#define __EEDATA_BASE 0x7ffc00
#define __EEDATA_LENGTH 0x400

#define __FUID0_BASE 0x8005c0
#define __FUID0_LENGTH 0x2

#define __FUID1_BASE 0x8005c2
#define __FUID1_LENGTH 0x2

#define __FUID2_BASE 0x8005c4
#define __FUID2_LENGTH 0x2

#define __FUID3_BASE 0x8005c6
#define __FUID3_LENGTH 0x2

#define __FOSC_BASE 0xf80000
#define __FOSC_LENGTH 0x2

#define __FWDT_BASE 0xf80002
#define __FWDT_LENGTH 0x2

#define __FBORPOR_BASE 0xf80004
#define __FBORPOR_LENGTH 0x2

#define __RESERVED1_BASE 0xf80006
#define __RESERVED1_LENGTH 0x2

#define __RESERVED2_BASE 0xf80008
#define __RESERVED2_LENGTH 0x2

#define __FGS_BASE 0xf8000a
#define __FGS_LENGTH 0x2

#define __FICD_BASE 0xf8000c
#define __FICD_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800

#define __YDATA_BASE 0xc00
#define __YDATA_LENGTH 0xc00
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800

#define __YDATA_BASE 0xc00
#define __YDATA_LENGTH 0xc00
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x800

#define __YDATA_BASE 0xc00
#define __YDATA_LENGTH 0xc00


#endif
