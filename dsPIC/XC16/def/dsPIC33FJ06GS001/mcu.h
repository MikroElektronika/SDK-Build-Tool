/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33FJ06GS001 processor header
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

#ifndef __dsPIC33FJ06GS001__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __33FJ06GS001_H
#define __33FJ06GS001_H

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
#define ACCAL ACCAL
extern volatile uint16_t ACCAL __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAH ACCAH
extern volatile uint16_t ACCAH __attribute__((__sfr__,__deprecated__,__unsafe__));
#define ACCAU ACCAU
extern volatile uint8_t ACCAU __attribute__((__sfr__,__deprecated__,__unsafe__));
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
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

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
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile uint16_t INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  uint16_t :1;
  uint16_t OSCFAIL:1;
  uint16_t STKERR:1;
  uint16_t ADDRERR:1;
  uint16_t MATHERR:1;
  uint16_t :1;
  uint16_t DIV0ERR:1;
  uint16_t SFTACERR:1;
  uint16_t COVTE:1;
  uint16_t OVBTE:1;
  uint16_t OVATE:1;
  uint16_t COVBERR:1;
  uint16_t COVAERR:1;
  uint16_t OVBERR:1;
  uint16_t OVAERR:1;
  uint16_t NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile uint16_t INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  uint16_t INT0EP:1;
  uint16_t INT1EP:1;
  uint16_t INT2EP:1;
  uint16_t :11;
  uint16_t DISI:1;
  uint16_t ALTIVT:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile uint16_t IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  uint16_t INT0IF:1;
  uint16_t :2;
  uint16_t T1IF:1;
  uint16_t :3;
  uint16_t T2IF:1;
  uint16_t :5;
  uint16_t ADIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t SI2C1IF:1;
  uint16_t MI2C1IF:1;
  uint16_t AC1IF:1;
  uint16_t CNIF:1;
  uint16_t INT1IF:1;
  uint16_t :8;
  uint16_t INT2IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :9;
  uint16_t PSEMIF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile uint16_t IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  uint16_t JTAGIF:1;
  uint16_t :13;
  uint16_t PWM1IF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile uint16_t IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  uint16_t :1;
  uint16_t PWM4IF:1;
  uint16_t :5;
  uint16_t AC2IF:1;
  uint16_t :6;
  uint16_t ADCP0IF:1;
  uint16_t ADCP1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS7 IFS7
extern volatile uint16_t IFS7 __attribute__((__sfr__));
typedef struct tagIFS7BITS {
  uint16_t :1;
  uint16_t ADCP3IF:1;
  uint16_t :2;
  uint16_t ADCP6IF:1;
} IFS7BITS;
extern volatile IFS7BITS IFS7bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t :2;
  uint16_t T1IE:1;
  uint16_t :3;
  uint16_t T2IE:1;
  uint16_t :5;
  uint16_t ADIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t SI2C1IE:1;
  uint16_t MI2C1IE:1;
  uint16_t AC1IE:1;
  uint16_t CNIE:1;
  uint16_t INT1IE:1;
  uint16_t :8;
  uint16_t INT2IE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :9;
  uint16_t PSEMIE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile uint16_t IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  uint16_t JTAGIE:1;
  uint16_t :13;
  uint16_t PWM1IE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile uint16_t IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  uint16_t :1;
  uint16_t PWM4IE:1;
  uint16_t :5;
  uint16_t AC2IE:1;
  uint16_t :6;
  uint16_t ADCP0IE:1;
  uint16_t ADCP1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC7 IEC7
extern volatile uint16_t IEC7 __attribute__((__sfr__));
typedef struct tagIEC7BITS {
  uint16_t :1;
  uint16_t ADCP3IE:1;
  uint16_t :2;
  uint16_t ADCP6IE:1;
} IEC7BITS;
extern volatile IEC7BITS IEC7bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile uint16_t IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      uint16_t INT0IP:3;
      uint16_t :9;
      uint16_t T1IP:3;
    };
    struct {
      uint16_t INT0IP0:1;
      uint16_t INT0IP1:1;
      uint16_t INT0IP2:1;
      uint16_t :9;
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
      uint16_t :12;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t :12;
      uint16_t T2IP0:1;
      uint16_t T2IP1:1;
      uint16_t T2IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile uint16_t IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ADIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t ADIP0:1;
      uint16_t ADIP1:1;
      uint16_t ADIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile uint16_t IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      uint16_t SI2C1IP:3;
      uint16_t :1;
      uint16_t MI2C1IP:3;
      uint16_t :1;
      uint16_t AC1IP:3;
      uint16_t :1;
      uint16_t CNIP:3;
    };
    struct {
      uint16_t SI2C1IP0:1;
      uint16_t SI2C1IP1:1;
      uint16_t SI2C1IP2:1;
      uint16_t :1;
      uint16_t MI2C1IP0:1;
      uint16_t MI2C1IP1:1;
      uint16_t MI2C1IP2:1;
      uint16_t :1;
      uint16_t AC1IP0:1;
      uint16_t AC1IP1:1;
      uint16_t AC1IP2:1;
      uint16_t :1;
      uint16_t CNIP0:1;
      uint16_t CNIP1:1;
      uint16_t CNIP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

#define IPC5 IPC5
extern volatile uint16_t IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      uint16_t INT1IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t INT2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t INT2IP0:1;
      uint16_t INT2IP1:1;
      uint16_t INT2IP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile uint16_t IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PSEMIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PSEMIP0:1;
      uint16_t PSEMIP1:1;
      uint16_t PSEMIP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC20 IPC20
extern volatile uint16_t IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      uint16_t JTAGIP:3;
    };
    struct {
      uint16_t JTAGIP0:1;
      uint16_t JTAGIP1:1;
      uint16_t JTAGIP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

#define IPC23 IPC23
extern volatile uint16_t IPC23 __attribute__((__sfr__));
__extension__ typedef struct tagIPC23BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t PWM1IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t PWM1IP0:1;
      uint16_t PWM1IP1:1;
      uint16_t PWM1IP2:1;
    };
  };
} IPC23BITS;
extern volatile IPC23BITS IPC23bits __attribute__((__sfr__));

#define IPC24 IPC24
extern volatile uint16_t IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PWM4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PWM4IP0:1;
      uint16_t PWM4IP1:1;
      uint16_t PWM4IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile uint16_t IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      uint16_t :12;
      uint16_t AC2IP:3;
    };
    struct {
      uint16_t :12;
      uint16_t AC2IP0:1;
      uint16_t AC2IP1:1;
      uint16_t AC2IP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

#define IPC27 IPC27
extern volatile uint16_t IPC27 __attribute__((__sfr__));
__extension__ typedef struct tagIPC27BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t ADCP0IP:3;
      uint16_t :1;
      uint16_t ADCP1IP:3;
    };
    struct {
      uint16_t :8;
      uint16_t ADCP0IP0:1;
      uint16_t ADCP0IP1:1;
      uint16_t ADCP0IP2:1;
      uint16_t :1;
      uint16_t ADCP1IP0:1;
      uint16_t ADCP1IP1:1;
      uint16_t ADCP1IP2:1;
    };
  };
} IPC27BITS;
extern volatile IPC27BITS IPC27bits __attribute__((__sfr__));

#define IPC28 IPC28
extern volatile uint16_t IPC28 __attribute__((__sfr__));
__extension__ typedef struct tagIPC28BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ADCP3IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t ADCP3IP0:1;
      uint16_t ADCP3IP1:1;
      uint16_t ADCP3IP2:1;
    };
  };
} IPC28BITS;
extern volatile IPC28BITS IPC28bits __attribute__((__sfr__));

#define IPC29 IPC29
extern volatile uint16_t IPC29 __attribute__((__sfr__));
__extension__ typedef struct tagIPC29BITS {
  union {
    struct {
      uint16_t ADCP6IP:3;
    };
    struct {
      uint16_t ADCP6IP0:1;
      uint16_t ADCP6IP1:1;
      uint16_t ADCP6IP2:1;
    };
  };
} IPC29BITS;
extern volatile IPC29BITS IPC29bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile uint16_t INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      uint16_t VECNUM:7;
      uint16_t :1;
      uint16_t ILR:4;
    };
    struct {
      uint16_t VECNUM0:1;
      uint16_t VECNUM1:1;
      uint16_t VECNUM2:1;
      uint16_t VECNUM3:1;
      uint16_t VECNUM4:1;
      uint16_t VECNUM5:1;
      uint16_t VECNUM6:1;
      uint16_t :1;
      uint16_t ILR0:1;
      uint16_t ILR1:1;
      uint16_t ILR2:1;
      uint16_t ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

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
#define PR2 PR2
extern volatile uint16_t PR2 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile uint16_t T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
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
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define I2C1RCV I2C1RCV
extern volatile uint16_t I2C1RCV __attribute__((__sfr__));
#define I2CRCV I2CRCV
extern volatile uint16_t I2CRCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile uint16_t I2C1TRN __attribute__((__sfr__));
#define I2CTRN I2CTRN
extern volatile uint16_t I2CTRN __attribute__((__sfr__));
#define I2C1BRG I2C1BRG
extern volatile uint16_t I2C1BRG __attribute__((__sfr__));
#define I2C1CON I2C1CON
extern volatile uint16_t I2C1CON __attribute__((__sfr__));
typedef struct tagI2C1CONBITS {
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
} I2C1CONBITS;
extern volatile I2C1CONBITS I2C1CONbits __attribute__((__sfr__));

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

#define I2C1STAT I2C1STAT
extern volatile uint16_t I2C1STAT __attribute__((__sfr__));
typedef struct tagI2C1STATBITS {
  uint16_t TBF:1;
  uint16_t RBF:1;
  uint16_t R_W:1;
  uint16_t S:1;
  uint16_t P:1;
  uint16_t D_A:1;
  uint16_t I2COV:1;
  uint16_t IWCOL:1;
  uint16_t ADD10:1;
  uint16_t GCSTAT:1;
  uint16_t BCL:1;
  uint16_t :3;
  uint16_t TRSTAT:1;
  uint16_t ACKSTAT:1;
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2CSTAT I2CSTAT
extern volatile uint16_t I2CSTAT __attribute__((__sfr__));
typedef struct tagI2CSTATBITS {
  uint16_t TBF:1;
  uint16_t RBF:1;
  uint16_t R_W:1;
  uint16_t S:1;
  uint16_t P:1;
  uint16_t D_A:1;
  uint16_t I2COV:1;
  uint16_t IWCOL:1;
  uint16_t ADD10:1;
  uint16_t GCSTAT:1;
  uint16_t BCL:1;
  uint16_t :3;
  uint16_t TRSTAT:1;
  uint16_t ACKSTAT:1;
} I2CSTATBITS;
extern volatile I2CSTATBITS I2CSTATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile uint16_t I2C1ADD __attribute__((__sfr__));
#define I2CADD I2CADD
extern volatile uint16_t I2CADD __attribute__((__sfr__));
#define I2C1MSK I2C1MSK
extern volatile uint16_t I2C1MSK __attribute__((__sfr__));
#define TRISA TRISA
extern volatile uint16_t TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  uint16_t TRISA0:1;
  uint16_t TRISA1:1;
  uint16_t TRISA2:1;
  uint16_t TRISA3:1;
  uint16_t TRISA4:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

#define PORTA PORTA
extern volatile uint16_t PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  uint16_t RA0:1;
  uint16_t RA1:1;
  uint16_t RA2:1;
  uint16_t RA3:1;
  uint16_t RA4:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

#define LATA LATA
extern volatile uint16_t LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  uint16_t LATA0:1;
  uint16_t LATA1:1;
  uint16_t LATA2:1;
  uint16_t LATA3:1;
  uint16_t LATA4:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile uint16_t ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  uint16_t :3;
  uint16_t ODCA3:1;
  uint16_t ODCA4:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

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
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define ODCB ODCB
extern volatile uint16_t ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  uint16_t :6;
  uint16_t ODCB6:1;
  uint16_t ODCB7:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define ADCON ADCON
extern volatile uint16_t ADCON __attribute__((__sfr__));
__extension__ typedef struct tagADCONBITS {
  union {
    struct {
      uint16_t ADCS:3;
      uint16_t :1;
      uint16_t ASYNCSAMP:1;
      uint16_t SEQSAMP:1;
      uint16_t ORDER:1;
      uint16_t EIE:1;
      uint16_t FORM:1;
      uint16_t :1;
      uint16_t GSWTRG:1;
      uint16_t :1;
      uint16_t SLOWCLK:1;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t ADCS0:1;
      uint16_t ADCS1:1;
      uint16_t ADCS2:1;
    };
  };
} ADCONBITS;
extern volatile ADCONBITS ADCONbits __attribute__((__sfr__));

#define ADPCFG ADPCFG
extern volatile uint16_t ADPCFG __attribute__((__sfr__));
typedef struct tagADPCFGBITS {
  uint16_t PCFG0:1;
  uint16_t PCFG1:1;
  uint16_t PCFG2:1;
  uint16_t PCFG3:1;
  uint16_t :2;
  uint16_t PCFG6:1;
  uint16_t PCFG7:1;
} ADPCFGBITS;
extern volatile ADPCFGBITS ADPCFGbits __attribute__((__sfr__));

#define ADSTAT ADSTAT
extern volatile uint16_t ADSTAT __attribute__((__sfr__));
typedef struct tagADSTATBITS {
  uint16_t P0RDY:1;
  uint16_t P1RDY:1;
  uint16_t :1;
  uint16_t P3RDY:1;
  uint16_t :2;
  uint16_t P6RDY:1;
} ADSTATBITS;
extern volatile ADSTATBITS ADSTATbits __attribute__((__sfr__));

#define ADBASE ADBASE
extern volatile uint16_t ADBASE __attribute__((__sfr__));
#define ADCPC0 ADCPC0
extern volatile uint16_t ADCPC0 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC0BITS {
  union {
    struct {
      uint16_t TRGSRC0:5;
      uint16_t SWTRG0:1;
      uint16_t PEND0:1;
      uint16_t IRQEN0:1;
      uint16_t TRGSRC1:5;
      uint16_t SWTRG1:1;
      uint16_t PEND1:1;
      uint16_t IRQEN1:1;
    };
    struct {
      uint16_t TRGSRC00:1;
      uint16_t TRGSRC01:1;
      uint16_t TRGSRC02:1;
      uint16_t TRGSRC03:1;
      uint16_t TRGSRC04:1;
      uint16_t :3;
      uint16_t TRGSRC10:1;
      uint16_t TRGSRC11:1;
      uint16_t TRGSRC12:1;
      uint16_t TRGSRC13:1;
      uint16_t TRGSRC14:1;
    };
  };
} ADCPC0BITS;
extern volatile ADCPC0BITS ADCPC0bits __attribute__((__sfr__));

#define ADCPC1 ADCPC1
extern volatile uint16_t ADCPC1 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC1BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t TRGSRC3:5;
      uint16_t SWTRG3:1;
      uint16_t PEND3:1;
      uint16_t IRQEN3:1;
    };
    struct {
      uint16_t :8;
      uint16_t TRGSRC30:1;
      uint16_t TRGSRC31:1;
      uint16_t TRGSRC32:1;
      uint16_t TRGSRC33:1;
      uint16_t TRGSRC34:1;
    };
  };
} ADCPC1BITS;
extern volatile ADCPC1BITS ADCPC1bits __attribute__((__sfr__));

#define ADCPC3 ADCPC3
extern volatile uint16_t ADCPC3 __attribute__((__sfr__));
__extension__ typedef struct tagADCPC3BITS {
  union {
    struct {
      uint16_t TRGSRC6:5;
      uint16_t SWTRG6:1;
      uint16_t PEND6:1;
      uint16_t IRQEN6:1;
    };
    struct {
      uint16_t TRGSRC60:1;
      uint16_t TRGSRC61:1;
      uint16_t TRGSRC62:1;
      uint16_t TRGSRC63:1;
      uint16_t TRGSRC64:1;
    };
  };
} ADCPC3BITS;
extern volatile ADCPC3BITS ADCPC3bits __attribute__((__sfr__));

#define ADCBUF0 ADCBUF0
extern volatile uint16_t ADCBUF0 __attribute__((__sfr__));
#define ADCBUF1 ADCBUF1
extern volatile uint16_t ADCBUF1 __attribute__((__sfr__));
#define ADCBUF2 ADCBUF2
extern volatile uint16_t ADCBUF2 __attribute__((__sfr__));
#define ADCBUF3 ADCBUF3
extern volatile uint16_t ADCBUF3 __attribute__((__sfr__));
#define ADCBUF6 ADCBUF6
extern volatile uint16_t ADCBUF6 __attribute__((__sfr__));
#define ADCBUF7 ADCBUF7
extern volatile uint16_t ADCBUF7 __attribute__((__sfr__));
#define ADCBUF12 ADCBUF12
extern volatile uint16_t ADCBUF12 __attribute__((__sfr__));
#define ADCBUF13 ADCBUF13
extern volatile uint16_t ADCBUF13 __attribute__((__sfr__));
#define PTCON PTCON
extern volatile uint16_t PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      uint16_t SEVTPS:4;
      uint16_t SYNCSRC:2;
      uint16_t :1;
      uint16_t SYNCEN:1;
      uint16_t SYNCOEN:1;
      uint16_t SYNCPOL:1;
      uint16_t EIPU:1;
      uint16_t SEIEN:1;
      uint16_t SESTAT:1;
      uint16_t PTSIDL:1;
      uint16_t :1;
      uint16_t PTEN:1;
    };
    struct {
      uint16_t SEVTPS0:1;
      uint16_t SEVTPS1:1;
      uint16_t SEVTPS2:1;
      uint16_t SEVTPS3:1;
      uint16_t SYNCSRC0:1;
      uint16_t SYNCSRC1:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define PTCON2 PTCON2
extern volatile uint16_t PTCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPTCON2BITS {
  union {
    struct {
      uint16_t PCLKDIV:3;
    };
    struct {
      uint16_t PCLKDIV0:1;
      uint16_t PCLKDIV1:1;
      uint16_t PCLKDIV2:1;
    };
  };
} PTCON2BITS;
extern volatile PTCON2BITS PTCON2bits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile uint16_t PTPER __attribute__((__sfr__));
#define SEVTCMP SEVTCMP
extern volatile uint16_t SEVTCMP __attribute__((__sfr__));
#define MDC MDC
extern volatile uint16_t MDC __attribute__((__sfr__));
#define CHOP CHOP
extern volatile uint16_t CHOP __attribute__((__sfr__));
__extension__ typedef struct tagCHOPBITS {
  union {
    struct {
      uint16_t :3;
      uint16_t CHOPCLK:7;
      uint16_t :5;
      uint16_t CHPCLKEN:1;
    };
    struct {
      uint16_t :3;
      uint16_t CHOPCLK0:1;
      uint16_t CHOPCLK1:1;
      uint16_t CHOPCLK2:1;
      uint16_t CHOPCLK3:1;
      uint16_t CHOPCLK4:1;
      uint16_t CHOPCLK5:1;
      uint16_t CHOPCLK6:1;
    };
  };
} CHOPBITS;
extern volatile CHOPBITS CHOPbits __attribute__((__sfr__));

#define PWMCON1 PWMCON1
extern volatile uint16_t PWMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON1BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t :3;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define IOCON1 IOCON1
extern volatile uint16_t IOCON1 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON1BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON1BITS;
extern volatile IOCON1BITS IOCON1bits __attribute__((__sfr__));

#define FCLCON1 FCLCON1
extern volatile uint16_t FCLCON1 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON1BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON1BITS;
extern volatile FCLCON1BITS FCLCON1bits __attribute__((__sfr__));

#define PDC1 PDC1
extern volatile uint16_t PDC1 __attribute__((__sfr__));
#define PHASE1 PHASE1
extern volatile uint16_t PHASE1 __attribute__((__sfr__));
#define DTR1 DTR1
extern volatile uint16_t DTR1 __attribute__((__sfr__));
#define ALTDTR1 ALTDTR1
extern volatile uint16_t ALTDTR1 __attribute__((__sfr__));
#define SDC1 SDC1
extern volatile uint16_t SDC1 __attribute__((__sfr__));
#define SPHASE1 SPHASE1
extern volatile uint16_t SPHASE1 __attribute__((__sfr__));
#define TRIG1 TRIG1
extern volatile uint16_t TRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG1BITS;
extern volatile TRIG1BITS TRIG1bits __attribute__((__sfr__));

#define TRGCON1 TRGCON1
extern volatile uint16_t TRGCON1 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON1BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON1BITS;
extern volatile TRGCON1BITS TRGCON1bits __attribute__((__sfr__));

#define STRIG1 STRIG1
extern volatile uint16_t STRIG1 __attribute__((__sfr__));
typedef struct tagSTRIG1BITS {
  uint16_t :3;
  uint16_t STRGCMP0:1;
  uint16_t STRGCMP1:1;
  uint16_t STRGCMP2:1;
  uint16_t STRGCMP3:1;
  uint16_t STRGCMP4:1;
  uint16_t STRGCMP5:1;
  uint16_t STRGCMP6:1;
  uint16_t STRGCMP7:1;
  uint16_t STRGCMP8:1;
  uint16_t STRGCMP9:1;
  uint16_t STRGCMP10:1;
  uint16_t STRGCMP11:1;
  uint16_t STRGCMP12:1;
} STRIG1BITS;
extern volatile STRIG1BITS STRIG1bits __attribute__((__sfr__));

#define PWMCAP1 PWMCAP1
extern volatile uint16_t PWMCAP1 __attribute__((__sfr__));
typedef struct tagPWMCAP1BITS {
  uint16_t :3;
  uint16_t PWMCAP10:1;
  uint16_t PWMCAP11:1;
  uint16_t PWMCAP12:1;
  uint16_t PWMCAP13:1;
  uint16_t PWMCAP14:1;
  uint16_t PWMCAP15:1;
  uint16_t PWMCAP16:1;
  uint16_t PWMCAP17:1;
  uint16_t PWMCAP18:1;
  uint16_t PWMCAP19:1;
  uint16_t PWMCAP110:1;
  uint16_t PWMCAP111:1;
  uint16_t PWMCAP112:1;
} PWMCAP1BITS;
extern volatile PWMCAP1BITS PWMCAP1bits __attribute__((__sfr__));

#define LEBCON1 LEBCON1
extern volatile uint16_t LEBCON1 __attribute__((__sfr__));
__extension__ typedef struct tagLEBCON1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:7;
      uint16_t CLLEBEN:1;
      uint16_t FLTLEBEN:1;
      uint16_t PLF:1;
      uint16_t PLR:1;
      uint16_t PHF:1;
      uint16_t PHR:1;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
    };
  };
} LEBCON1BITS;
extern volatile LEBCON1BITS LEBCON1bits __attribute__((__sfr__));

#define AUXCON1 AUXCON1
extern volatile uint16_t AUXCON1 __attribute__((__sfr__));
typedef struct tagAUXCON1BITS {
  uint16_t CHOPLEN:1;
  uint16_t CHOPHEN:1;
  uint16_t CHOPSEL:4;
  uint16_t :8;
  uint16_t HRDDIS:1;
  uint16_t HRPDIS:1;
} AUXCON1BITS;
extern volatile AUXCON1BITS AUXCON1bits __attribute__((__sfr__));

#define PWMCON4 PWMCON4
extern volatile uint16_t PWMCON4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON4BITS {
  union {
    struct {
      uint16_t IUE:1;
      uint16_t XPRES:1;
      uint16_t CAM:1;
      uint16_t :3;
      uint16_t DTC:2;
      uint16_t MDCS:1;
      uint16_t ITB:1;
      uint16_t TRGIEN:1;
      uint16_t CLIEN:1;
      uint16_t FLTIEN:1;
      uint16_t TRGSTAT:1;
      uint16_t CLSTAT:1;
      uint16_t FLTSTAT:1;
    };
    struct {
      uint16_t :6;
      uint16_t DTC0:1;
      uint16_t DTC1:1;
    };
  };
} PWMCON4BITS;
extern volatile PWMCON4BITS PWMCON4bits __attribute__((__sfr__));

#define IOCON4 IOCON4
extern volatile uint16_t IOCON4 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON4BITS {
  union {
    struct {
      uint16_t OSYNC:1;
      uint16_t SWAP:1;
      uint16_t CLDAT:2;
      uint16_t FLTDAT:2;
      uint16_t OVRDAT:2;
      uint16_t OVRENL:1;
      uint16_t OVRENH:1;
      uint16_t PMOD:2;
      uint16_t POLL:1;
      uint16_t POLH:1;
      uint16_t PENL:1;
      uint16_t PENH:1;
    };
    struct {
      uint16_t :2;
      uint16_t CLDAT0:1;
      uint16_t CLDAT1:1;
      uint16_t FLTDAT0:1;
      uint16_t FLTDAT1:1;
      uint16_t OVRDAT0:1;
      uint16_t OVRDAT1:1;
      uint16_t :2;
      uint16_t PMOD0:1;
      uint16_t PMOD1:1;
    };
  };
} IOCON4BITS;
extern volatile IOCON4BITS IOCON4bits __attribute__((__sfr__));

#define FCLCON4 FCLCON4
extern volatile uint16_t FCLCON4 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON4BITS {
  union {
    struct {
      uint16_t FLTMOD:2;
      uint16_t FLTPOL:1;
      uint16_t FLTSRC:5;
      uint16_t CLMOD:1;
      uint16_t CLPOL:1;
      uint16_t CLSRC:5;
      uint16_t IFLTMOD:1;
    };
    struct {
      uint16_t FLTMOD0:1;
      uint16_t FLTMOD1:1;
      uint16_t :1;
      uint16_t FLTSRC0:1;
      uint16_t FLTSRC1:1;
      uint16_t FLTSRC2:1;
      uint16_t FLTSRC3:1;
      uint16_t FLTSRC4:1;
      uint16_t :2;
      uint16_t CLSRC0:1;
      uint16_t CLSRC1:1;
      uint16_t CLSRC2:1;
      uint16_t CLSRC3:1;
      uint16_t CLSRC4:1;
    };
  };
} FCLCON4BITS;
extern volatile FCLCON4BITS FCLCON4bits __attribute__((__sfr__));

#define PDC4 PDC4
extern volatile uint16_t PDC4 __attribute__((__sfr__));
#define PHASE4 PHASE4
extern volatile uint16_t PHASE4 __attribute__((__sfr__));
#define DTR4 DTR4
extern volatile uint16_t DTR4 __attribute__((__sfr__));
#define ALTDTR4 ALTDTR4
extern volatile uint16_t ALTDTR4 __attribute__((__sfr__));
#define SDC4 SDC4
extern volatile uint16_t SDC4 __attribute__((__sfr__));
#define SPHASE4 SPHASE4
extern volatile uint16_t SPHASE4 __attribute__((__sfr__));
#define TRIG4 TRIG4
extern volatile uint16_t TRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG4BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t TRGCMP:13;
    };
    struct {
      uint16_t :3;
      uint16_t TRGCMP0:1;
      uint16_t TRGCMP1:1;
      uint16_t TRGCMP2:1;
      uint16_t TRGCMP3:1;
      uint16_t TRGCMP4:1;
      uint16_t TRGCMP5:1;
      uint16_t TRGCMP6:1;
      uint16_t TRGCMP7:1;
      uint16_t TRGCMP8:1;
      uint16_t TRGCMP9:1;
      uint16_t TRGCMP10:1;
      uint16_t TRGCMP11:1;
      uint16_t TRGCMP12:1;
    };
  };
} TRIG4BITS;
extern volatile TRIG4BITS TRIG4bits __attribute__((__sfr__));

#define TRGCON4 TRGCON4
extern volatile uint16_t TRGCON4 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON4BITS {
  union {
    struct {
      uint16_t TRGSTRT:6;
      uint16_t :1;
      uint16_t DTM:1;
      uint16_t :4;
      uint16_t TRGDIV:4;
    };
    struct {
      uint16_t TRGSTRT0:1;
      uint16_t TRGSTRT1:1;
      uint16_t TRGSTRT2:1;
      uint16_t TRGSTRT3:1;
      uint16_t TRGSTRT4:1;
      uint16_t TRGSTRT5:1;
      uint16_t :6;
      uint16_t TRGDIV0:1;
      uint16_t TRGDIV1:1;
      uint16_t TRGDIV2:1;
      uint16_t TRGDIV3:1;
    };
  };
} TRGCON4BITS;
extern volatile TRGCON4BITS TRGCON4bits __attribute__((__sfr__));

#define STRIG4 STRIG4
extern volatile uint16_t STRIG4 __attribute__((__sfr__));
typedef struct tagSTRIG4BITS {
  uint16_t :3;
  uint16_t STRGCMP0:1;
  uint16_t STRGCMP1:1;
  uint16_t STRGCMP2:1;
  uint16_t STRGCMP3:1;
  uint16_t STRGCMP4:1;
  uint16_t STRGCMP5:1;
  uint16_t STRGCMP6:1;
  uint16_t STRGCMP7:1;
  uint16_t STRGCMP8:1;
  uint16_t STRGCMP9:1;
  uint16_t STRGCMP10:1;
  uint16_t STRGCMP11:1;
  uint16_t STRGCMP12:1;
} STRIG4BITS;
extern volatile STRIG4BITS STRIG4bits __attribute__((__sfr__));

#define PWMCAP4 PWMCAP4
extern volatile uint16_t PWMCAP4 __attribute__((__sfr__));
#define LEBCON4 LEBCON4
extern volatile uint16_t LEBCON4 __attribute__((__sfr__));
__extension__ typedef struct tagLEBCON4BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LEB:7;
      uint16_t CLLEBEN:1;
      uint16_t FLTLEBEN:1;
      uint16_t PLF:1;
      uint16_t PLR:1;
      uint16_t PHF:1;
      uint16_t PHR:1;
    };
    struct {
      uint16_t :3;
      uint16_t LEB0:1;
      uint16_t LEB1:1;
      uint16_t LEB2:1;
      uint16_t LEB3:1;
      uint16_t LEB4:1;
      uint16_t LEB5:1;
      uint16_t LEB6:1;
    };
  };
} LEBCON4BITS;
extern volatile LEBCON4BITS LEBCON4bits __attribute__((__sfr__));

#define AUXCON4 AUXCON4
extern volatile uint16_t AUXCON4 __attribute__((__sfr__));
typedef struct tagAUXCON4BITS {
  uint16_t CHOPLEN:1;
  uint16_t CHOPHEN:1;
  uint16_t CHOPSEL:4;
  uint16_t :8;
  uint16_t HRDDIS:1;
  uint16_t HRPDIS:1;
} AUXCON4BITS;
extern volatile AUXCON4BITS AUXCON4bits __attribute__((__sfr__));

#define CMPCON1 CMPCON1
extern volatile uint16_t CMPCON1 __attribute__((__sfr__));
typedef struct tagCMPCON1BITS {
  uint16_t RANGE:1;
  uint16_t CMPPOL:1;
  uint16_t HGAIN:1;
  uint16_t CMPSTAT:1;
  uint16_t HYSPOL:1;
  uint16_t EXTREF:1;
  uint16_t INSEL:2;
  uint16_t DACOE:1;
  uint16_t FCLKSEL:1;
  uint16_t FLTREN:1;
  uint16_t HYSSEL:2;
  uint16_t CMPSIDL:1;
  uint16_t :1;
  uint16_t CMPON:1;
} CMPCON1BITS;
extern volatile CMPCON1BITS CMPCON1bits __attribute__((__sfr__));

#define CMPDAC1 CMPDAC1
extern volatile uint16_t CMPDAC1 __attribute__((__sfr__));
typedef struct tagCMPDAC1BITS {
  uint16_t CMREF:10;
} CMPDAC1BITS;
extern volatile CMPDAC1BITS CMPDAC1bits __attribute__((__sfr__));

#define CMPCON2 CMPCON2
extern volatile uint16_t CMPCON2 __attribute__((__sfr__));
typedef struct tagCMPCON2BITS {
  uint16_t RANGE:1;
  uint16_t CMPPOL:1;
  uint16_t HGAIN:1;
  uint16_t CMPSTAT:1;
  uint16_t HYSPOL:1;
  uint16_t EXTREF:1;
  uint16_t INSEL:2;
  uint16_t DACOE:1;
  uint16_t FCLKSEL:1;
  uint16_t FLTREN:1;
  uint16_t HYSSEL:2;
  uint16_t CMPSIDL:1;
  uint16_t :1;
  uint16_t CMPON:1;
} CMPCON2BITS;
extern volatile CMPCON2BITS CMPCON2bits __attribute__((__sfr__));

#define CMPDAC2 CMPDAC2
extern volatile uint16_t CMPDAC2 __attribute__((__sfr__));
typedef struct tagCMPDAC2BITS {
  uint16_t CMREF:10;
} CMPDAC2BITS;
extern volatile CMPDAC2BITS CMPDAC2bits __attribute__((__sfr__));

#define RPINR0 RPINR0
extern volatile uint16_t RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t INT1R:6;
    };
    struct {
      uint16_t :8;
      uint16_t INT1R0:1;
      uint16_t INT1R1:1;
      uint16_t INT1R2:1;
      uint16_t INT1R3:1;
      uint16_t INT1R4:1;
      uint16_t INT1R5:1;
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile uint16_t RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      uint16_t INT2R:6;
    };
    struct {
      uint16_t INT2R0:1;
      uint16_t INT2R1:1;
      uint16_t INT2R2:1;
      uint16_t INT2R3:1;
      uint16_t INT2R4:1;
      uint16_t INT2R5:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR2 RPINR2
extern volatile uint16_t RPINR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR2BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t T1CKR:6;
    };
    struct {
      uint16_t :8;
      uint16_t T1CKR0:1;
      uint16_t T1CKR1:1;
      uint16_t T1CKR2:1;
      uint16_t T1CKR3:1;
      uint16_t T1CKR4:1;
      uint16_t T1CKR5:1;
    };
  };
} RPINR2BITS;
extern volatile RPINR2BITS RPINR2bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile uint16_t RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      uint16_t T2CKR:6;
    };
    struct {
      uint16_t T2CKR0:1;
      uint16_t T2CKR1:1;
      uint16_t T2CKR2:1;
      uint16_t T2CKR3:1;
      uint16_t T2CKR4:1;
      uint16_t T2CKR5:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR29 RPINR29
extern volatile uint16_t RPINR29 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR29BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t FLT1R:6;
    };
    struct {
      uint16_t :8;
      uint16_t FLT1R0:1;
      uint16_t FLT1R1:1;
      uint16_t FLT1R2:1;
      uint16_t FLT1R3:1;
      uint16_t FLT1R4:1;
      uint16_t FLT1R5:1;
    };
  };
} RPINR29BITS;
extern volatile RPINR29BITS RPINR29bits __attribute__((__sfr__));

#define RPINR30 RPINR30
extern volatile uint16_t RPINR30 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR30BITS {
  union {
    struct {
      uint16_t FLT2R:6;
      uint16_t :2;
      uint16_t FLT3R:6;
    };
    struct {
      uint16_t FLT2R0:1;
      uint16_t FLT2R1:1;
      uint16_t FLT2R2:1;
      uint16_t FLT2R3:1;
      uint16_t FLT2R4:1;
      uint16_t FLT2R5:1;
      uint16_t :2;
      uint16_t FLT3R0:1;
      uint16_t FLT3R1:1;
      uint16_t FLT3R2:1;
      uint16_t FLT3R3:1;
      uint16_t FLT3R4:1;
      uint16_t FLT3R5:1;
    };
  };
} RPINR30BITS;
extern volatile RPINR30BITS RPINR30bits __attribute__((__sfr__));

#define RPINR31 RPINR31
extern volatile uint16_t RPINR31 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR31BITS {
  union {
    struct {
      uint16_t FLT4R:6;
      uint16_t :2;
      uint16_t FLT5R:6;
    };
    struct {
      uint16_t FLT4R0:1;
      uint16_t FLT4R1:1;
      uint16_t FLT4R2:1;
      uint16_t FLT4R3:1;
      uint16_t FLT4R4:1;
      uint16_t FLT4R5:1;
      uint16_t :2;
      uint16_t FLT5R0:1;
      uint16_t FLT5R1:1;
      uint16_t FLT5R2:1;
      uint16_t FLT5R3:1;
      uint16_t FLT5R4:1;
      uint16_t FLT5R5:1;
    };
  };
} RPINR31BITS;
extern volatile RPINR31BITS RPINR31bits __attribute__((__sfr__));

#define RPINR32 RPINR32
extern volatile uint16_t RPINR32 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR32BITS {
  union {
    struct {
      uint16_t FLT6R:6;
      uint16_t :2;
      uint16_t FLT7R:6;
    };
    struct {
      uint16_t FLT6R0:1;
      uint16_t FLT6R1:1;
      uint16_t FLT6R2:1;
      uint16_t FLT6R3:1;
      uint16_t FLT6R4:1;
      uint16_t FLT6R5:1;
      uint16_t :2;
      uint16_t FLT7R0:1;
      uint16_t FLT7R1:1;
      uint16_t FLT7R2:1;
      uint16_t FLT7R3:1;
      uint16_t FLT7R4:1;
      uint16_t FLT7R5:1;
    };
  };
} RPINR32BITS;
extern volatile RPINR32BITS RPINR32bits __attribute__((__sfr__));

#define RPINR33 RPINR33
extern volatile uint16_t RPINR33 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR33BITS {
  union {
    struct {
      uint16_t FLT8R:6;
      uint16_t :2;
      uint16_t SYNCI1R:6;
    };
    struct {
      uint16_t FLT8R0:1;
      uint16_t FLT8R1:1;
      uint16_t FLT8R2:1;
      uint16_t FLT8R3:1;
      uint16_t FLT8R4:1;
      uint16_t FLT8R5:1;
      uint16_t :2;
      uint16_t SYNCI1R0:1;
      uint16_t SYNCI1R1:1;
      uint16_t SYNCI1R2:1;
      uint16_t SYNCI1R3:1;
      uint16_t SYNCI1R4:1;
      uint16_t SYNCI1R5:1;
    };
  };
} RPINR33BITS;
extern volatile RPINR33BITS RPINR33bits __attribute__((__sfr__));

#define RPINR34 RPINR34
extern volatile uint16_t RPINR34 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR34BITS {
  union {
    struct {
      uint16_t SYNCI2R:6;
    };
    struct {
      uint16_t SYNCI2R0:1;
      uint16_t SYNCI2R1:1;
      uint16_t SYNCI2R2:1;
      uint16_t SYNCI2R3:1;
      uint16_t SYNCI2R4:1;
      uint16_t SYNCI2R5:1;
    };
  };
} RPINR34BITS;
extern volatile RPINR34BITS RPINR34bits __attribute__((__sfr__));

#define RPOR0 RPOR0
extern volatile uint16_t RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      uint16_t RP0R:6;
      uint16_t :2;
      uint16_t RP1R:6;
    };
    struct {
      uint16_t RP0R0:1;
      uint16_t RP0R1:1;
      uint16_t RP0R2:1;
      uint16_t RP0R3:1;
      uint16_t RP0R4:1;
      uint16_t RP0R5:1;
      uint16_t :2;
      uint16_t RP1R0:1;
      uint16_t RP1R1:1;
      uint16_t RP1R2:1;
      uint16_t RP1R3:1;
      uint16_t RP1R4:1;
      uint16_t RP1R5:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR1 RPOR1
extern volatile uint16_t RPOR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR1BITS {
  union {
    struct {
      uint16_t RP2R:6;
      uint16_t :2;
      uint16_t RP3R:6;
    };
    struct {
      uint16_t RP2R0:1;
      uint16_t RP2R1:1;
      uint16_t RP2R2:1;
      uint16_t RP2R3:1;
      uint16_t RP2R4:1;
      uint16_t RP2R5:1;
      uint16_t :2;
      uint16_t RP3R0:1;
      uint16_t RP3R1:1;
      uint16_t RP3R2:1;
      uint16_t RP3R3:1;
      uint16_t RP3R4:1;
      uint16_t RP3R5:1;
    };
  };
} RPOR1BITS;
extern volatile RPOR1BITS RPOR1bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile uint16_t RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
  union {
    struct {
      uint16_t RP4R:6;
      uint16_t :2;
      uint16_t RP5R:6;
    };
    struct {
      uint16_t RP4R0:1;
      uint16_t RP4R1:1;
      uint16_t RP4R2:1;
      uint16_t RP4R3:1;
      uint16_t RP4R4:1;
      uint16_t RP4R5:1;
      uint16_t :2;
      uint16_t RP5R0:1;
      uint16_t RP5R1:1;
      uint16_t RP5R2:1;
      uint16_t RP5R3:1;
      uint16_t RP5R4:1;
      uint16_t RP5R5:1;
    };
  };
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile uint16_t RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
  union {
    struct {
      uint16_t RP6R:6;
      uint16_t :2;
      uint16_t RP7R:6;
    };
    struct {
      uint16_t RP6R0:1;
      uint16_t RP6R1:1;
      uint16_t RP6R2:1;
      uint16_t RP6R3:1;
      uint16_t RP6R4:1;
      uint16_t RP6R5:1;
      uint16_t :2;
      uint16_t RP7R0:1;
      uint16_t RP7R1:1;
      uint16_t RP7R2:1;
      uint16_t RP7R3:1;
      uint16_t RP7R4:1;
      uint16_t RP7R5:1;
    };
  };
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR16 RPOR16
extern volatile uint16_t RPOR16 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR16BITS {
  union {
    struct {
      uint16_t RP32R:6;
      uint16_t :2;
      uint16_t RP33R:6;
    };
    struct {
      uint16_t RP32R0:1;
      uint16_t RP32R1:1;
      uint16_t RP32R2:1;
      uint16_t RP32R3:1;
      uint16_t RP32R4:1;
      uint16_t RP32R5:1;
      uint16_t :2;
      uint16_t RP33R0:1;
      uint16_t RP33R1:1;
      uint16_t RP33R2:1;
      uint16_t RP33R3:1;
      uint16_t RP33R4:1;
      uint16_t RP33R5:1;
    };
  };
} RPOR16BITS;
extern volatile RPOR16BITS RPOR16bits __attribute__((__sfr__));

#define RPOR17 RPOR17
extern volatile uint16_t RPOR17 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR17BITS {
  union {
    struct {
      uint16_t RP34R:6;
      uint16_t :2;
      uint16_t RP35R:6;
    };
    struct {
      uint16_t RP34R0:1;
      uint16_t RP34R1:1;
      uint16_t RP34R2:1;
      uint16_t RP34R3:1;
      uint16_t RP34R4:1;
      uint16_t RP34R5:1;
      uint16_t :2;
      uint16_t RP35R0:1;
      uint16_t RP35R1:1;
      uint16_t RP35R2:1;
      uint16_t RP35R3:1;
      uint16_t RP35R4:1;
      uint16_t RP35R5:1;
    };
  };
} RPOR17BITS;
extern volatile RPOR17BITS RPOR17bits __attribute__((__sfr__));

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
  uint16_t VREGS:1;
  uint16_t CM:1;
  uint16_t :4;
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
      uint16_t :2;
      uint16_t CF:1;
      uint16_t :1;
      uint16_t LOCK:1;
      uint16_t IOLOCK:1;
      uint16_t CLKLOCK:1;
      uint16_t NOSC:3;
      uint16_t :1;
      uint16_t COSC:3;
    };
    struct {
      uint16_t :8;
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
#define CLKDIV CLKDIV
extern volatile uint16_t CLKDIV __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIVBITS {
  union {
    struct {
      uint16_t PLLPRE:5;
      uint16_t :1;
      uint16_t PLLPOST:2;
      uint16_t FRCDIV:3;
      uint16_t DOZEN:1;
      uint16_t DOZE:3;
      uint16_t ROI:1;
    };
    struct {
      uint16_t PLLPRE0:1;
      uint16_t PLLPRE1:1;
      uint16_t PLLPRE2:1;
      uint16_t PLLPRE3:1;
      uint16_t PLLPRE4:1;
      uint16_t :1;
      uint16_t PLLPOST0:1;
      uint16_t PLLPOST1:1;
      uint16_t FRCDIV0:1;
      uint16_t FRCDIV1:1;
      uint16_t FRCDIV2:1;
      uint16_t :1;
      uint16_t DOZE0:1;
      uint16_t DOZE1:1;
      uint16_t DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

#define PLLFBD PLLFBD
extern volatile uint16_t PLLFBD __attribute__((__sfr__));
__extension__ typedef struct tagPLLFBDBITS {
  union {
    struct {
      uint16_t PLLDIV:9;
    };
    struct {
      uint16_t PLLDIV0:1;
      uint16_t PLLDIV1:1;
      uint16_t PLLDIV2:1;
      uint16_t PLLDIV3:1;
      uint16_t PLLDIV4:1;
      uint16_t PLLDIV5:1;
      uint16_t PLLDIV6:1;
      uint16_t PLLDIV7:1;
      uint16_t PLLDIV8:1;
    };
  };
} PLLFBDBITS;
extern volatile PLLFBDBITS PLLFBDbits __attribute__((__sfr__));

#define OSCTUN OSCTUN
extern volatile uint16_t OSCTUN __attribute__((__sfr__));
__extension__ typedef struct tagOSCTUNBITS {
  union {
    struct {
      uint16_t TUN:6;
    };
    struct {
      uint16_t TUN0:1;
      uint16_t TUN1:1;
      uint16_t TUN2:1;
      uint16_t TUN3:1;
      uint16_t TUN4:1;
      uint16_t TUN5:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define LFSR LFSR
extern volatile uint16_t LFSR __attribute__((__sfr__));
typedef struct tagLFSRBITS {
  uint16_t LFSR:15;
} LFSRBITS;
extern volatile LFSRBITS LFSRbits __attribute__((__sfr__));

#define REFOCON REFOCON
extern volatile uint16_t REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RODIV:4;
      uint16_t ROSEL:1;
      uint16_t ROSIDL:1;
      uint16_t :1;
      uint16_t ROON:1;
    };
    struct {
      uint16_t :8;
      uint16_t RODIV0:1;
      uint16_t RODIV1:1;
      uint16_t RODIV2:1;
      uint16_t RODIV3:1;
      uint16_t :1;
      uint16_t ROSSLP:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define ACLKCON ACLKCON
extern volatile uint16_t ACLKCON __attribute__((__sfr__));
__extension__ typedef struct tagACLKCONBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t FRCSEL:1;
      uint16_t ASRCSEL:1;
      uint16_t APSTSCLR:3;
      uint16_t :2;
      uint16_t SELACLK:1;
      uint16_t APLLCK:1;
      uint16_t ENAPLL:1;
    };
    struct {
      uint16_t :8;
      uint16_t APSTSCLR0:1;
      uint16_t APSTSCLR1:1;
      uint16_t APSTSCLR2:1;
    };
  };
} ACLKCONBITS;
extern volatile ACLKCONBITS ACLKCONbits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile uint16_t NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      uint16_t NVMOP:4;
      uint16_t :2;
      uint16_t ERASE:1;
      uint16_t :6;
      uint16_t WRERR:1;
      uint16_t WREN:1;
      uint16_t WR:1;
    };
    struct {
      uint16_t NVMOP0:1;
      uint16_t NVMOP1:1;
      uint16_t NVMOP2:1;
      uint16_t NVMOP3:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADCMD:1;
  uint16_t :6;
  uint16_t I2C1MD:1;
  uint16_t :1;
  uint16_t PWMMD:1;
  uint16_t :1;
  uint16_t T1MD:1;
  uint16_t T2MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  uint16_t :10;
  uint16_t CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t :3;
  uint16_t REFOMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile uint16_t PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  uint16_t :8;
  uint16_t PWM1MD:1;
  uint16_t :2;
  uint16_t PWM4MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD7 PMD7
extern volatile uint16_t PMD7 __attribute__((__sfr__));
typedef struct tagPMD7BITS {
  uint16_t :8;
  uint16_t CMPMD1:1;
  uint16_t CMPMD2:1;
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));



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

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _SFTACERR INTCON1bits.SFTACERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _COVBERR INTCON1bits.COVBERR
#define _COVAERR INTCON1bits.COVAERR
#define _OVBERR INTCON1bits.OVBERR
#define _OVAERR INTCON1bits.OVAERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _T1IF IFS0bits.T1IF
#define _T2IF IFS0bits.T2IF
#define _ADIF IFS0bits.ADIF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _AC1IF IFS1bits.AC1IF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _INT2IF IFS1bits.INT2IF

/* IFS3 */
#define _PSEMIF IFS3bits.PSEMIF

/* IFS5 */
#define _JTAGIF IFS5bits.JTAGIF
#define _PWM1IF IFS5bits.PWM1IF

/* IFS6 */
#define _PWM4IF IFS6bits.PWM4IF
#define _AC2IF IFS6bits.AC2IF
#define _ADCP0IF IFS6bits.ADCP0IF
#define _ADCP1IF IFS6bits.ADCP1IF

/* IFS7 */
#define _ADCP3IF IFS7bits.ADCP3IF
#define _ADCP6IF IFS7bits.ADCP6IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _T1IE IEC0bits.T1IE
#define _T2IE IEC0bits.T2IE
#define _ADIE IEC0bits.ADIE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _AC1IE IEC1bits.AC1IE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _INT2IE IEC1bits.INT2IE

/* IEC3 */
#define _PSEMIE IEC3bits.PSEMIE

/* IEC5 */
#define _JTAGIE IEC5bits.JTAGIE
#define _PWM1IE IEC5bits.PWM1IE

/* IEC6 */
#define _PWM4IE IEC6bits.PWM4IE
#define _AC2IE IEC6bits.AC2IE
#define _ADCP0IE IEC6bits.ADCP0IE
#define _ADCP1IE IEC6bits.ADCP1IE

/* IEC7 */
#define _ADCP3IE IEC7bits.ADCP3IE
#define _ADCP6IE IEC7bits.ADCP6IE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _T2IP IPC1bits.T2IP
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC3 */
#define _ADIP IPC3bits.ADIP
#define _ADIP0 IPC3bits.ADIP0
#define _ADIP1 IPC3bits.ADIP1
#define _ADIP2 IPC3bits.ADIP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _AC1IP IPC4bits.AC1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _AC1IP0 IPC4bits.AC1IP0
#define _AC1IP1 IPC4bits.AC1IP1
#define _AC1IP2 IPC4bits.AC1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2

/* IPC14 */
#define _PSEMIP IPC14bits.PSEMIP
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2

/* IPC20 */
#define _JTAGIP IPC20bits.JTAGIP
#define _JTAGIP0 IPC20bits.JTAGIP0
#define _JTAGIP1 IPC20bits.JTAGIP1
#define _JTAGIP2 IPC20bits.JTAGIP2

/* IPC23 */
#define _PWM1IP IPC23bits.PWM1IP
#define _PWM1IP0 IPC23bits.PWM1IP0
#define _PWM1IP1 IPC23bits.PWM1IP1
#define _PWM1IP2 IPC23bits.PWM1IP2

/* IPC24 */
#define _PWM4IP IPC24bits.PWM4IP
#define _PWM4IP0 IPC24bits.PWM4IP0
#define _PWM4IP1 IPC24bits.PWM4IP1
#define _PWM4IP2 IPC24bits.PWM4IP2

/* IPC25 */
#define _AC2IP IPC25bits.AC2IP
#define _AC2IP0 IPC25bits.AC2IP0
#define _AC2IP1 IPC25bits.AC2IP1
#define _AC2IP2 IPC25bits.AC2IP2

/* IPC27 */
#define _ADCP0IP IPC27bits.ADCP0IP
#define _ADCP1IP IPC27bits.ADCP1IP
#define _ADCP0IP0 IPC27bits.ADCP0IP0
#define _ADCP0IP1 IPC27bits.ADCP0IP1
#define _ADCP0IP2 IPC27bits.ADCP0IP2
#define _ADCP1IP0 IPC27bits.ADCP1IP0
#define _ADCP1IP1 IPC27bits.ADCP1IP1
#define _ADCP1IP2 IPC27bits.ADCP1IP2

/* IPC28 */
#define _ADCP3IP IPC28bits.ADCP3IP
#define _ADCP3IP0 IPC28bits.ADCP3IP0
#define _ADCP3IP1 IPC28bits.ADCP3IP1
#define _ADCP3IP2 IPC28bits.ADCP3IP2

/* IPC29 */
#define _ADCP6IP IPC29bits.ADCP6IP
#define _ADCP6IP0 IPC29bits.ADCP6IP0
#define _ADCP6IP1 IPC29bits.ADCP6IP1
#define _ADCP6IP2 IPC29bits.ADCP6IP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

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
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* I2C1CON */
#define _SEN I2C1CONbits.SEN
#define _RSEN I2C1CONbits.RSEN
#define _PEN I2C1CONbits.PEN
#define _RCEN I2C1CONbits.RCEN
#define _ACKEN I2C1CONbits.ACKEN
#define _ACKDT I2C1CONbits.ACKDT
#define _STREN I2C1CONbits.STREN
#define _GCEN I2C1CONbits.GCEN
#define _SMEN I2C1CONbits.SMEN
#define _DISSLW I2C1CONbits.DISSLW
#define _A10M I2C1CONbits.A10M
#define _IPMIEN I2C1CONbits.IPMIEN
#define _SCLREL I2C1CONbits.SCLREL
#define _I2CSIDL I2C1CONbits.I2CSIDL
#define _I2CEN I2C1CONbits.I2CEN

/* I2C1STAT */
#define _TBF I2C1STATbits.TBF
#define _RBF I2C1STATbits.RBF
#define _R_W I2C1STATbits.R_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_A I2C1STATbits.D_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
#define _BCL I2C1STATbits.BCL
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4

/* ODCA */
#define _ODCA3 ODCAbits.ODCA3
#define _ODCA4 ODCAbits.ODCA4

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7

/* ODCB */
#define _ODCB6 ODCBbits.ODCB6
#define _ODCB7 ODCBbits.ODCB7

/* ADCON */
#define _ADCS ADCONbits.ADCS
#define _ASYNCSAMP ADCONbits.ASYNCSAMP
#define _SEQSAMP ADCONbits.SEQSAMP
#define _ORDER ADCONbits.ORDER
#define _EIE ADCONbits.EIE
#define _FORM ADCONbits.FORM
#define _GSWTRG ADCONbits.GSWTRG
#define _SLOWCLK ADCONbits.SLOWCLK
#define _ADSIDL ADCONbits.ADSIDL
#define _ADON ADCONbits.ADON
#define _ADCS0 ADCONbits.ADCS0
#define _ADCS1 ADCONbits.ADCS1
#define _ADCS2 ADCONbits.ADCS2

/* ADPCFG */
#define _PCFG0 ADPCFGbits.PCFG0
#define _PCFG1 ADPCFGbits.PCFG1
#define _PCFG2 ADPCFGbits.PCFG2
#define _PCFG3 ADPCFGbits.PCFG3
#define _PCFG6 ADPCFGbits.PCFG6
#define _PCFG7 ADPCFGbits.PCFG7

/* ADSTAT */
#define _P0RDY ADSTATbits.P0RDY
#define _P1RDY ADSTATbits.P1RDY
#define _P3RDY ADSTATbits.P3RDY
#define _P6RDY ADSTATbits.P6RDY

/* ADCPC0 */
#define _TRGSRC0 ADCPC0bits.TRGSRC0
#define _SWTRG0 ADCPC0bits.SWTRG0
#define _PEND0 ADCPC0bits.PEND0
#define _IRQEN0 ADCPC0bits.IRQEN0
#define _TRGSRC1 ADCPC0bits.TRGSRC1
#define _SWTRG1 ADCPC0bits.SWTRG1
#define _PEND1 ADCPC0bits.PEND1
#define _IRQEN1 ADCPC0bits.IRQEN1
#define _TRGSRC00 ADCPC0bits.TRGSRC00
#define _TRGSRC01 ADCPC0bits.TRGSRC01
#define _TRGSRC02 ADCPC0bits.TRGSRC02
#define _TRGSRC03 ADCPC0bits.TRGSRC03
#define _TRGSRC04 ADCPC0bits.TRGSRC04
#define _TRGSRC10 ADCPC0bits.TRGSRC10
#define _TRGSRC11 ADCPC0bits.TRGSRC11
#define _TRGSRC12 ADCPC0bits.TRGSRC12
#define _TRGSRC13 ADCPC0bits.TRGSRC13
#define _TRGSRC14 ADCPC0bits.TRGSRC14

/* ADCPC1 */
#define _TRGSRC3 ADCPC1bits.TRGSRC3
#define _SWTRG3 ADCPC1bits.SWTRG3
#define _PEND3 ADCPC1bits.PEND3
#define _IRQEN3 ADCPC1bits.IRQEN3
#define _TRGSRC30 ADCPC1bits.TRGSRC30
#define _TRGSRC31 ADCPC1bits.TRGSRC31
#define _TRGSRC32 ADCPC1bits.TRGSRC32
#define _TRGSRC33 ADCPC1bits.TRGSRC33
#define _TRGSRC34 ADCPC1bits.TRGSRC34

/* ADCPC3 */
#define _TRGSRC6 ADCPC3bits.TRGSRC6
#define _SWTRG6 ADCPC3bits.SWTRG6
#define _PEND6 ADCPC3bits.PEND6
#define _IRQEN6 ADCPC3bits.IRQEN6
#define _TRGSRC60 ADCPC3bits.TRGSRC60
#define _TRGSRC61 ADCPC3bits.TRGSRC61
#define _TRGSRC62 ADCPC3bits.TRGSRC62
#define _TRGSRC63 ADCPC3bits.TRGSRC63
#define _TRGSRC64 ADCPC3bits.TRGSRC64

/* PTCON */
#define _SEVTPS PTCONbits.SEVTPS
#define _SYNCSRC PTCONbits.SYNCSRC
#define _SYNCEN PTCONbits.SYNCEN
#define _SYNCOEN PTCONbits.SYNCOEN
#define _SYNCPOL PTCONbits.SYNCPOL
#define _EIPU PTCONbits.EIPU
#define _SEIEN PTCONbits.SEIEN
#define _SESTAT PTCONbits.SESTAT
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
#define _SEVTPS0 PTCONbits.SEVTPS0
#define _SEVTPS1 PTCONbits.SEVTPS1
#define _SEVTPS2 PTCONbits.SEVTPS2
#define _SEVTPS3 PTCONbits.SEVTPS3
#define _SYNCSRC0 PTCONbits.SYNCSRC0
#define _SYNCSRC1 PTCONbits.SYNCSRC1

/* PTCON2 */
#define _PCLKDIV PTCON2bits.PCLKDIV
#define _PCLKDIV0 PTCON2bits.PCLKDIV0
#define _PCLKDIV1 PTCON2bits.PCLKDIV1
#define _PCLKDIV2 PTCON2bits.PCLKDIV2

/* CHOP */
#define _CHOPCLK CHOPbits.CHOPCLK
#define _CHPCLKEN CHOPbits.CHPCLKEN
#define _CHOPCLK0 CHOPbits.CHOPCLK0
#define _CHOPCLK1 CHOPbits.CHOPCLK1
#define _CHOPCLK2 CHOPbits.CHOPCLK2
#define _CHOPCLK3 CHOPbits.CHOPCLK3
#define _CHOPCLK4 CHOPbits.CHOPCLK4
#define _CHOPCLK5 CHOPbits.CHOPCLK5
#define _CHOPCLK6 CHOPbits.CHOPCLK6

/* PWMCON1 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON1 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON1 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG1 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON1 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG1 */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP1 */
#define _PWMCAP10 PWMCAP1bits.PWMCAP10
#define _PWMCAP11 PWMCAP1bits.PWMCAP11
#define _PWMCAP12 PWMCAP1bits.PWMCAP12
#define _PWMCAP13 PWMCAP1bits.PWMCAP13
#define _PWMCAP14 PWMCAP1bits.PWMCAP14
#define _PWMCAP15 PWMCAP1bits.PWMCAP15
#define _PWMCAP16 PWMCAP1bits.PWMCAP16
#define _PWMCAP17 PWMCAP1bits.PWMCAP17
#define _PWMCAP18 PWMCAP1bits.PWMCAP18
#define _PWMCAP19 PWMCAP1bits.PWMCAP19
#define _PWMCAP110 PWMCAP1bits.PWMCAP110
#define _PWMCAP111 PWMCAP1bits.PWMCAP111
#define _PWMCAP112 PWMCAP1bits.PWMCAP112

/* LEBCON1 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */

/* AUXCON1 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */

/* PWMCON4 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON4 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON4 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG4 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON4 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG4 */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* LEBCON4 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */

/* AUXCON4 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */

/* CMPCON1 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _HGAIN cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */

/* CMPDAC1 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */

/* CMPCON2 */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _HGAIN cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */

/* CMPDAC2 */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4
#define _INT1R5 RPINR0bits.INT1R5

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4
#define _INT2R5 RPINR1bits.INT2R5

/* RPINR2 */
#define _T1CKR RPINR2bits.T1CKR
#define _T1CKR0 RPINR2bits.T1CKR0
#define _T1CKR1 RPINR2bits.T1CKR1
#define _T1CKR2 RPINR2bits.T1CKR2
#define _T1CKR3 RPINR2bits.T1CKR3
#define _T1CKR4 RPINR2bits.T1CKR4
#define _T1CKR5 RPINR2bits.T1CKR5

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T2CKR5 RPINR3bits.T2CKR5

/* RPINR29 */
#define _FLT1R RPINR29bits.FLT1R
#define _FLT1R0 RPINR29bits.FLT1R0
#define _FLT1R1 RPINR29bits.FLT1R1
#define _FLT1R2 RPINR29bits.FLT1R2
#define _FLT1R3 RPINR29bits.FLT1R3
#define _FLT1R4 RPINR29bits.FLT1R4
#define _FLT1R5 RPINR29bits.FLT1R5

/* RPINR30 */
#define _FLT2R RPINR30bits.FLT2R
#define _FLT3R RPINR30bits.FLT3R
#define _FLT2R0 RPINR30bits.FLT2R0
#define _FLT2R1 RPINR30bits.FLT2R1
#define _FLT2R2 RPINR30bits.FLT2R2
#define _FLT2R3 RPINR30bits.FLT2R3
#define _FLT2R4 RPINR30bits.FLT2R4
#define _FLT2R5 RPINR30bits.FLT2R5
#define _FLT3R0 RPINR30bits.FLT3R0
#define _FLT3R1 RPINR30bits.FLT3R1
#define _FLT3R2 RPINR30bits.FLT3R2
#define _FLT3R3 RPINR30bits.FLT3R3
#define _FLT3R4 RPINR30bits.FLT3R4
#define _FLT3R5 RPINR30bits.FLT3R5

/* RPINR31 */
#define _FLT4R RPINR31bits.FLT4R
#define _FLT5R RPINR31bits.FLT5R
#define _FLT4R0 RPINR31bits.FLT4R0
#define _FLT4R1 RPINR31bits.FLT4R1
#define _FLT4R2 RPINR31bits.FLT4R2
#define _FLT4R3 RPINR31bits.FLT4R3
#define _FLT4R4 RPINR31bits.FLT4R4
#define _FLT4R5 RPINR31bits.FLT4R5
#define _FLT5R0 RPINR31bits.FLT5R0
#define _FLT5R1 RPINR31bits.FLT5R1
#define _FLT5R2 RPINR31bits.FLT5R2
#define _FLT5R3 RPINR31bits.FLT5R3
#define _FLT5R4 RPINR31bits.FLT5R4
#define _FLT5R5 RPINR31bits.FLT5R5

/* RPINR32 */
#define _FLT6R RPINR32bits.FLT6R
#define _FLT7R RPINR32bits.FLT7R
#define _FLT6R0 RPINR32bits.FLT6R0
#define _FLT6R1 RPINR32bits.FLT6R1
#define _FLT6R2 RPINR32bits.FLT6R2
#define _FLT6R3 RPINR32bits.FLT6R3
#define _FLT6R4 RPINR32bits.FLT6R4
#define _FLT6R5 RPINR32bits.FLT6R5
#define _FLT7R0 RPINR32bits.FLT7R0
#define _FLT7R1 RPINR32bits.FLT7R1
#define _FLT7R2 RPINR32bits.FLT7R2
#define _FLT7R3 RPINR32bits.FLT7R3
#define _FLT7R4 RPINR32bits.FLT7R4
#define _FLT7R5 RPINR32bits.FLT7R5

/* RPINR33 */
#define _FLT8R RPINR33bits.FLT8R
#define _SYNCI1R RPINR33bits.SYNCI1R
#define _FLT8R0 RPINR33bits.FLT8R0
#define _FLT8R1 RPINR33bits.FLT8R1
#define _FLT8R2 RPINR33bits.FLT8R2
#define _FLT8R3 RPINR33bits.FLT8R3
#define _FLT8R4 RPINR33bits.FLT8R4
#define _FLT8R5 RPINR33bits.FLT8R5
#define _SYNCI1R0 RPINR33bits.SYNCI1R0
#define _SYNCI1R1 RPINR33bits.SYNCI1R1
#define _SYNCI1R2 RPINR33bits.SYNCI1R2
#define _SYNCI1R3 RPINR33bits.SYNCI1R3
#define _SYNCI1R4 RPINR33bits.SYNCI1R4
#define _SYNCI1R5 RPINR33bits.SYNCI1R5

/* RPINR34 */
#define _SYNCI2R RPINR34bits.SYNCI2R
#define _SYNCI2R0 RPINR34bits.SYNCI2R0
#define _SYNCI2R1 RPINR34bits.SYNCI2R1
#define _SYNCI2R2 RPINR34bits.SYNCI2R2
#define _SYNCI2R3 RPINR34bits.SYNCI2R3
#define _SYNCI2R4 RPINR34bits.SYNCI2R4
#define _SYNCI2R5 RPINR34bits.SYNCI2R5

/* RPOR0 */
#define _RP0R RPOR0bits.RP0R
#define _RP1R RPOR0bits.RP1R
#define _RP0R0 RPOR0bits.RP0R0
#define _RP0R1 RPOR0bits.RP0R1
#define _RP0R2 RPOR0bits.RP0R2
#define _RP0R3 RPOR0bits.RP0R3
#define _RP0R4 RPOR0bits.RP0R4
#define _RP0R5 RPOR0bits.RP0R5
#define _RP1R0 RPOR0bits.RP1R0
#define _RP1R1 RPOR0bits.RP1R1
#define _RP1R2 RPOR0bits.RP1R2
#define _RP1R3 RPOR0bits.RP1R3
#define _RP1R4 RPOR0bits.RP1R4
#define _RP1R5 RPOR0bits.RP1R5

/* RPOR1 */
#define _RP2R RPOR1bits.RP2R
#define _RP3R RPOR1bits.RP3R
#define _RP2R0 RPOR1bits.RP2R0
#define _RP2R1 RPOR1bits.RP2R1
#define _RP2R2 RPOR1bits.RP2R2
#define _RP2R3 RPOR1bits.RP2R3
#define _RP2R4 RPOR1bits.RP2R4
#define _RP2R5 RPOR1bits.RP2R5
#define _RP3R0 RPOR1bits.RP3R0
#define _RP3R1 RPOR1bits.RP3R1
#define _RP3R2 RPOR1bits.RP3R2
#define _RP3R3 RPOR1bits.RP3R3
#define _RP3R4 RPOR1bits.RP3R4
#define _RP3R5 RPOR1bits.RP3R5

/* RPOR2 */
#define _RP4R RPOR2bits.RP4R
#define _RP5R RPOR2bits.RP5R
#define _RP4R0 RPOR2bits.RP4R0
#define _RP4R1 RPOR2bits.RP4R1
#define _RP4R2 RPOR2bits.RP4R2
#define _RP4R3 RPOR2bits.RP4R3
#define _RP4R4 RPOR2bits.RP4R4
#define _RP4R5 RPOR2bits.RP4R5
#define _RP5R0 RPOR2bits.RP5R0
#define _RP5R1 RPOR2bits.RP5R1
#define _RP5R2 RPOR2bits.RP5R2
#define _RP5R3 RPOR2bits.RP5R3
#define _RP5R4 RPOR2bits.RP5R4
#define _RP5R5 RPOR2bits.RP5R5

/* RPOR3 */
#define _RP6R RPOR3bits.RP6R
#define _RP7R RPOR3bits.RP7R
#define _RP6R0 RPOR3bits.RP6R0
#define _RP6R1 RPOR3bits.RP6R1
#define _RP6R2 RPOR3bits.RP6R2
#define _RP6R3 RPOR3bits.RP6R3
#define _RP6R4 RPOR3bits.RP6R4
#define _RP6R5 RPOR3bits.RP6R5
#define _RP7R0 RPOR3bits.RP7R0
#define _RP7R1 RPOR3bits.RP7R1
#define _RP7R2 RPOR3bits.RP7R2
#define _RP7R3 RPOR3bits.RP7R3
#define _RP7R4 RPOR3bits.RP7R4
#define _RP7R5 RPOR3bits.RP7R5

/* RPOR16 */
#define _RP32R RPOR16bits.RP32R
#define _RP33R RPOR16bits.RP33R
#define _RP32R0 RPOR16bits.RP32R0
#define _RP32R1 RPOR16bits.RP32R1
#define _RP32R2 RPOR16bits.RP32R2
#define _RP32R3 RPOR16bits.RP32R3
#define _RP32R4 RPOR16bits.RP32R4
#define _RP32R5 RPOR16bits.RP32R5
#define _RP33R0 RPOR16bits.RP33R0
#define _RP33R1 RPOR16bits.RP33R1
#define _RP33R2 RPOR16bits.RP33R2
#define _RP33R3 RPOR16bits.RP33R3
#define _RP33R4 RPOR16bits.RP33R4
#define _RP33R5 RPOR16bits.RP33R5

/* RPOR17 */
#define _RP34R RPOR17bits.RP34R
#define _RP35R RPOR17bits.RP35R
#define _RP34R0 RPOR17bits.RP34R0
#define _RP34R1 RPOR17bits.RP34R1
#define _RP34R2 RPOR17bits.RP34R2
#define _RP34R3 RPOR17bits.RP34R3
#define _RP34R4 RPOR17bits.RP34R4
#define _RP34R5 RPOR17bits.RP34R5
#define _RP35R0 RPOR17bits.RP35R0
#define _RP35R1 RPOR17bits.RP35R1
#define _RP35R2 RPOR17bits.RP35R2
#define _RP35R3 RPOR17bits.RP35R3
#define _RP35R4 RPOR17bits.RP35R4
#define _RP35R5 RPOR17bits.RP35R5

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _VREGS RCONbits.VREGS
#define _CM RCONbits.CM
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _IOLOCK OSCCONbits.IOLOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _PLLPRE CLKDIVbits.PLLPRE
#define _PLLPOST CLKDIVbits.PLLPOST
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _PLLPRE0 CLKDIVbits.PLLPRE0
#define _PLLPRE1 CLKDIVbits.PLLPRE1
#define _PLLPRE2 CLKDIVbits.PLLPRE2
#define _PLLPRE3 CLKDIVbits.PLLPRE3
#define _PLLPRE4 CLKDIVbits.PLLPRE4
#define _PLLPOST0 CLKDIVbits.PLLPOST0
#define _PLLPOST1 CLKDIVbits.PLLPOST1
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define _PLLDIV PLLFBDbits.PLLDIV
#define _PLLDIV0 PLLFBDbits.PLLDIV0
#define _PLLDIV1 PLLFBDbits.PLLDIV1
#define _PLLDIV2 PLLFBDbits.PLLDIV2
#define _PLLDIV3 PLLFBDbits.PLLDIV3
#define _PLLDIV4 PLLFBDbits.PLLDIV4
#define _PLLDIV5 PLLFBDbits.PLLDIV5
#define _PLLDIV6 PLLFBDbits.PLLDIV6
#define _PLLDIV7 PLLFBDbits.PLLDIV7
#define _PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* LFSR */
#define _LFSR LFSRbits.LFSR

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSIDL REFOCONbits.ROSIDL
#define _ROON REFOCONbits.ROON
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROSSLP REFOCONbits.ROSSLP

/* ACLKCON */
#define _FRCSEL ACLKCONbits.FRCSEL
#define _ASRCSEL ACLKCONbits.ASRCSEL
#define _APSTSCLR ACLKCONbits.APSTSCLR
#define _SELACLK ACLKCONbits.SELACLK
#define _APLLCK ACLKCONbits.APLLCK
#define _ENAPLL ACLKCONbits.ENAPLL
#define _APSTSCLR0 ACLKCONbits.APSTSCLR0
#define _APSTSCLR1 ACLKCONbits.APSTSCLR1
#define _APSTSCLR2 ACLKCONbits.APSTSCLR2

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* PMD1 */
#define _ADCMD PMD1bits.ADCMD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD

/* PMD3 */
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _REFOMD PMD4bits.REFOMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM4MD PMD6bits.PWM4MD

/* PMD7 */
#define _CMPMD1 PMD7bits.CMPMD1
#define _CMPMD2 PMD7bits.CMPMD2


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
  SRbits.IPL = ipl;              \
  __builtin_nop();               \
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

#define _INTCON1_DIV0ERR_POSITION                0x00000006
#define _INTCON1_DIV0ERR_MASK                    0x00000040
#define _INTCON1_DIV0ERR_LENGTH                  0x00000001

#define _INTCON1_SFTACERR_POSITION               0x00000007
#define _INTCON1_SFTACERR_MASK                   0x00000080
#define _INTCON1_SFTACERR_LENGTH                 0x00000001

#define _INTCON1_COVTE_POSITION                  0x00000008
#define _INTCON1_COVTE_MASK                      0x00000100
#define _INTCON1_COVTE_LENGTH                    0x00000001

#define _INTCON1_OVBTE_POSITION                  0x00000009
#define _INTCON1_OVBTE_MASK                      0x00000200
#define _INTCON1_OVBTE_LENGTH                    0x00000001

#define _INTCON1_OVATE_POSITION                  0x0000000A
#define _INTCON1_OVATE_MASK                      0x00000400
#define _INTCON1_OVATE_LENGTH                    0x00000001

#define _INTCON1_COVBERR_POSITION                0x0000000B
#define _INTCON1_COVBERR_MASK                    0x00000800
#define _INTCON1_COVBERR_LENGTH                  0x00000001

#define _INTCON1_COVAERR_POSITION                0x0000000C
#define _INTCON1_COVAERR_MASK                    0x00001000
#define _INTCON1_COVAERR_LENGTH                  0x00000001

#define _INTCON1_OVBERR_POSITION                 0x0000000D
#define _INTCON1_OVBERR_MASK                     0x00002000
#define _INTCON1_OVBERR_LENGTH                   0x00000001

#define _INTCON1_OVAERR_POSITION                 0x0000000E
#define _INTCON1_OVAERR_MASK                     0x00004000
#define _INTCON1_OVAERR_LENGTH                   0x00000001

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

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_ALTIVT_POSITION                 0x0000000F
#define _INTCON2_ALTIVT_MASK                     0x00008000
#define _INTCON2_ALTIVT_LENGTH                   0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000000
#define _IFS0_INT0IF_MASK                        0x00000001
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_ADIF_POSITION                      0x0000000D
#define _IFS0_ADIF_MASK                          0x00002000
#define _IFS0_ADIF_LENGTH                        0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_AC1IF_POSITION                     0x00000002
#define _IFS1_AC1IF_MASK                         0x00000004
#define _IFS1_AC1IF_LENGTH                       0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS3_PSEMIF_POSITION                    0x00000009
#define _IFS3_PSEMIF_MASK                        0x00000200
#define _IFS3_PSEMIF_LENGTH                      0x00000001

#define _IFS5_JTAGIF_POSITION                    0x00000000
#define _IFS5_JTAGIF_MASK                        0x00000001
#define _IFS5_JTAGIF_LENGTH                      0x00000001

#define _IFS5_PWM1IF_POSITION                    0x0000000E
#define _IFS5_PWM1IF_MASK                        0x00004000
#define _IFS5_PWM1IF_LENGTH                      0x00000001

#define _IFS6_PWM4IF_POSITION                    0x00000001
#define _IFS6_PWM4IF_MASK                        0x00000002
#define _IFS6_PWM4IF_LENGTH                      0x00000001

#define _IFS6_AC2IF_POSITION                     0x00000007
#define _IFS6_AC2IF_MASK                         0x00000080
#define _IFS6_AC2IF_LENGTH                       0x00000001

#define _IFS6_ADCP0IF_POSITION                   0x0000000E
#define _IFS6_ADCP0IF_MASK                       0x00004000
#define _IFS6_ADCP0IF_LENGTH                     0x00000001

#define _IFS6_ADCP1IF_POSITION                   0x0000000F
#define _IFS6_ADCP1IF_MASK                       0x00008000
#define _IFS6_ADCP1IF_LENGTH                     0x00000001

#define _IFS7_ADCP3IF_POSITION                   0x00000001
#define _IFS7_ADCP3IF_MASK                       0x00000002
#define _IFS7_ADCP3IF_LENGTH                     0x00000001

#define _IFS7_ADCP6IF_POSITION                   0x00000004
#define _IFS7_ADCP6IF_MASK                       0x00000010
#define _IFS7_ADCP6IF_LENGTH                     0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_ADIE_POSITION                      0x0000000D
#define _IEC0_ADIE_MASK                          0x00002000
#define _IEC0_ADIE_LENGTH                        0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_AC1IE_POSITION                     0x00000002
#define _IEC1_AC1IE_MASK                         0x00000004
#define _IEC1_AC1IE_LENGTH                       0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC3_PSEMIE_POSITION                    0x00000009
#define _IEC3_PSEMIE_MASK                        0x00000200
#define _IEC3_PSEMIE_LENGTH                      0x00000001

#define _IEC5_JTAGIE_POSITION                    0x00000000
#define _IEC5_JTAGIE_MASK                        0x00000001
#define _IEC5_JTAGIE_LENGTH                      0x00000001

#define _IEC5_PWM1IE_POSITION                    0x0000000E
#define _IEC5_PWM1IE_MASK                        0x00004000
#define _IEC5_PWM1IE_LENGTH                      0x00000001

#define _IEC6_PWM4IE_POSITION                    0x00000001
#define _IEC6_PWM4IE_MASK                        0x00000002
#define _IEC6_PWM4IE_LENGTH                      0x00000001

#define _IEC6_AC2IE_POSITION                     0x00000007
#define _IEC6_AC2IE_MASK                         0x00000080
#define _IEC6_AC2IE_LENGTH                       0x00000001

#define _IEC6_ADCP0IE_POSITION                   0x0000000E
#define _IEC6_ADCP0IE_MASK                       0x00004000
#define _IEC6_ADCP0IE_LENGTH                     0x00000001

#define _IEC6_ADCP1IE_POSITION                   0x0000000F
#define _IEC6_ADCP1IE_MASK                       0x00008000
#define _IEC6_ADCP1IE_LENGTH                     0x00000001

#define _IEC7_ADCP3IE_POSITION                   0x00000001
#define _IEC7_ADCP3IE_MASK                       0x00000002
#define _IEC7_ADCP3IE_LENGTH                     0x00000001

#define _IEC7_ADCP6IE_POSITION                   0x00000004
#define _IEC7_ADCP6IE_MASK                       0x00000010
#define _IEC7_ADCP6IE_LENGTH                     0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

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

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_T2IP0_POSITION                     0x0000000C
#define _IPC1_T2IP0_MASK                         0x00001000
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x0000000D
#define _IPC1_T2IP1_MASK                         0x00002000
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000E
#define _IPC1_T2IP2_MASK                         0x00004000
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC3_ADIP_POSITION                      0x00000004
#define _IPC3_ADIP_MASK                          0x00000070
#define _IPC3_ADIP_LENGTH                        0x00000003

#define _IPC3_ADIP0_POSITION                     0x00000004
#define _IPC3_ADIP0_MASK                         0x00000010
#define _IPC3_ADIP0_LENGTH                       0x00000001

#define _IPC3_ADIP1_POSITION                     0x00000005
#define _IPC3_ADIP1_MASK                         0x00000020
#define _IPC3_ADIP1_LENGTH                       0x00000001

#define _IPC3_ADIP2_POSITION                     0x00000006
#define _IPC3_ADIP2_MASK                         0x00000040
#define _IPC3_ADIP2_LENGTH                       0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_AC1IP_POSITION                     0x00000008
#define _IPC4_AC1IP_MASK                         0x00000700
#define _IPC4_AC1IP_LENGTH                       0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SI2C1IP0_POSITION                  0x00000000
#define _IPC4_SI2C1IP0_MASK                      0x00000001
#define _IPC4_SI2C1IP0_LENGTH                    0x00000001

#define _IPC4_SI2C1IP1_POSITION                  0x00000001
#define _IPC4_SI2C1IP1_MASK                      0x00000002
#define _IPC4_SI2C1IP1_LENGTH                    0x00000001

#define _IPC4_SI2C1IP2_POSITION                  0x00000002
#define _IPC4_SI2C1IP2_MASK                      0x00000004
#define _IPC4_SI2C1IP2_LENGTH                    0x00000001

#define _IPC4_MI2C1IP0_POSITION                  0x00000004
#define _IPC4_MI2C1IP0_MASK                      0x00000010
#define _IPC4_MI2C1IP0_LENGTH                    0x00000001

#define _IPC4_MI2C1IP1_POSITION                  0x00000005
#define _IPC4_MI2C1IP1_MASK                      0x00000020
#define _IPC4_MI2C1IP1_LENGTH                    0x00000001

#define _IPC4_MI2C1IP2_POSITION                  0x00000006
#define _IPC4_MI2C1IP2_MASK                      0x00000040
#define _IPC4_MI2C1IP2_LENGTH                    0x00000001

#define _IPC4_AC1IP0_POSITION                    0x00000008
#define _IPC4_AC1IP0_MASK                        0x00000100
#define _IPC4_AC1IP0_LENGTH                      0x00000001

#define _IPC4_AC1IP1_POSITION                    0x00000009
#define _IPC4_AC1IP1_MASK                        0x00000200
#define _IPC4_AC1IP1_LENGTH                      0x00000001

#define _IPC4_AC1IP2_POSITION                    0x0000000A
#define _IPC4_AC1IP2_MASK                        0x00000400
#define _IPC4_AC1IP2_LENGTH                      0x00000001

#define _IPC4_CNIP0_POSITION                     0x0000000C
#define _IPC4_CNIP0_MASK                         0x00001000
#define _IPC4_CNIP0_LENGTH                       0x00000001

#define _IPC4_CNIP1_POSITION                     0x0000000D
#define _IPC4_CNIP1_MASK                         0x00002000
#define _IPC4_CNIP1_LENGTH                       0x00000001

#define _IPC4_CNIP2_POSITION                     0x0000000E
#define _IPC4_CNIP2_MASK                         0x00004000
#define _IPC4_CNIP2_LENGTH                       0x00000001

#define _IPC5_INT1IP_POSITION                    0x00000000
#define _IPC5_INT1IP_MASK                        0x00000007
#define _IPC5_INT1IP_LENGTH                      0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC14_PSEMIP_POSITION                   0x00000004
#define _IPC14_PSEMIP_MASK                       0x00000070
#define _IPC14_PSEMIP_LENGTH                     0x00000003

#define _IPC14_PSEMIP0_POSITION                  0x00000004
#define _IPC14_PSEMIP0_MASK                      0x00000010
#define _IPC14_PSEMIP0_LENGTH                    0x00000001

#define _IPC14_PSEMIP1_POSITION                  0x00000005
#define _IPC14_PSEMIP1_MASK                      0x00000020
#define _IPC14_PSEMIP1_LENGTH                    0x00000001

#define _IPC14_PSEMIP2_POSITION                  0x00000006
#define _IPC14_PSEMIP2_MASK                      0x00000040
#define _IPC14_PSEMIP2_LENGTH                    0x00000001

#define _IPC20_JTAGIP_POSITION                   0x00000000
#define _IPC20_JTAGIP_MASK                       0x00000007
#define _IPC20_JTAGIP_LENGTH                     0x00000003

#define _IPC20_JTAGIP0_POSITION                  0x00000000
#define _IPC20_JTAGIP0_MASK                      0x00000001
#define _IPC20_JTAGIP0_LENGTH                    0x00000001

#define _IPC20_JTAGIP1_POSITION                  0x00000001
#define _IPC20_JTAGIP1_MASK                      0x00000002
#define _IPC20_JTAGIP1_LENGTH                    0x00000001

#define _IPC20_JTAGIP2_POSITION                  0x00000002
#define _IPC20_JTAGIP2_MASK                      0x00000004
#define _IPC20_JTAGIP2_LENGTH                    0x00000001

#define _IPC23_PWM1IP_POSITION                   0x00000008
#define _IPC23_PWM1IP_MASK                       0x00000700
#define _IPC23_PWM1IP_LENGTH                     0x00000003

#define _IPC23_PWM1IP0_POSITION                  0x00000008
#define _IPC23_PWM1IP0_MASK                      0x00000100
#define _IPC23_PWM1IP0_LENGTH                    0x00000001

#define _IPC23_PWM1IP1_POSITION                  0x00000009
#define _IPC23_PWM1IP1_MASK                      0x00000200
#define _IPC23_PWM1IP1_LENGTH                    0x00000001

#define _IPC23_PWM1IP2_POSITION                  0x0000000A
#define _IPC23_PWM1IP2_MASK                      0x00000400
#define _IPC23_PWM1IP2_LENGTH                    0x00000001

#define _IPC24_PWM4IP_POSITION                   0x00000004
#define _IPC24_PWM4IP_MASK                       0x00000070
#define _IPC24_PWM4IP_LENGTH                     0x00000003

#define _IPC24_PWM4IP0_POSITION                  0x00000004
#define _IPC24_PWM4IP0_MASK                      0x00000010
#define _IPC24_PWM4IP0_LENGTH                    0x00000001

#define _IPC24_PWM4IP1_POSITION                  0x00000005
#define _IPC24_PWM4IP1_MASK                      0x00000020
#define _IPC24_PWM4IP1_LENGTH                    0x00000001

#define _IPC24_PWM4IP2_POSITION                  0x00000006
#define _IPC24_PWM4IP2_MASK                      0x00000040
#define _IPC24_PWM4IP2_LENGTH                    0x00000001

#define _IPC25_AC2IP_POSITION                    0x0000000C
#define _IPC25_AC2IP_MASK                        0x00007000
#define _IPC25_AC2IP_LENGTH                      0x00000003

#define _IPC25_AC2IP0_POSITION                   0x0000000C
#define _IPC25_AC2IP0_MASK                       0x00001000
#define _IPC25_AC2IP0_LENGTH                     0x00000001

#define _IPC25_AC2IP1_POSITION                   0x0000000D
#define _IPC25_AC2IP1_MASK                       0x00002000
#define _IPC25_AC2IP1_LENGTH                     0x00000001

#define _IPC25_AC2IP2_POSITION                   0x0000000E
#define _IPC25_AC2IP2_MASK                       0x00004000
#define _IPC25_AC2IP2_LENGTH                     0x00000001

#define _IPC27_ADCP0IP_POSITION                  0x00000008
#define _IPC27_ADCP0IP_MASK                      0x00000700
#define _IPC27_ADCP0IP_LENGTH                    0x00000003

#define _IPC27_ADCP1IP_POSITION                  0x0000000C
#define _IPC27_ADCP1IP_MASK                      0x00007000
#define _IPC27_ADCP1IP_LENGTH                    0x00000003

#define _IPC27_ADCP0IP0_POSITION                 0x00000008
#define _IPC27_ADCP0IP0_MASK                     0x00000100
#define _IPC27_ADCP0IP0_LENGTH                   0x00000001

#define _IPC27_ADCP0IP1_POSITION                 0x00000009
#define _IPC27_ADCP0IP1_MASK                     0x00000200
#define _IPC27_ADCP0IP1_LENGTH                   0x00000001

#define _IPC27_ADCP0IP2_POSITION                 0x0000000A
#define _IPC27_ADCP0IP2_MASK                     0x00000400
#define _IPC27_ADCP0IP2_LENGTH                   0x00000001

#define _IPC27_ADCP1IP0_POSITION                 0x0000000C
#define _IPC27_ADCP1IP0_MASK                     0x00001000
#define _IPC27_ADCP1IP0_LENGTH                   0x00000001

#define _IPC27_ADCP1IP1_POSITION                 0x0000000D
#define _IPC27_ADCP1IP1_MASK                     0x00002000
#define _IPC27_ADCP1IP1_LENGTH                   0x00000001

#define _IPC27_ADCP1IP2_POSITION                 0x0000000E
#define _IPC27_ADCP1IP2_MASK                     0x00004000
#define _IPC27_ADCP1IP2_LENGTH                   0x00000001

#define _IPC28_ADCP3IP_POSITION                  0x00000004
#define _IPC28_ADCP3IP_MASK                      0x00000070
#define _IPC28_ADCP3IP_LENGTH                    0x00000003

#define _IPC28_ADCP3IP0_POSITION                 0x00000004
#define _IPC28_ADCP3IP0_MASK                     0x00000010
#define _IPC28_ADCP3IP0_LENGTH                   0x00000001

#define _IPC28_ADCP3IP1_POSITION                 0x00000005
#define _IPC28_ADCP3IP1_MASK                     0x00000020
#define _IPC28_ADCP3IP1_LENGTH                   0x00000001

#define _IPC28_ADCP3IP2_POSITION                 0x00000006
#define _IPC28_ADCP3IP2_MASK                     0x00000040
#define _IPC28_ADCP3IP2_LENGTH                   0x00000001

#define _IPC29_ADCP6IP_POSITION                  0x00000000
#define _IPC29_ADCP6IP_MASK                      0x00000007
#define _IPC29_ADCP6IP_LENGTH                    0x00000003

#define _IPC29_ADCP6IP0_POSITION                 0x00000000
#define _IPC29_ADCP6IP0_MASK                     0x00000001
#define _IPC29_ADCP6IP0_LENGTH                   0x00000001

#define _IPC29_ADCP6IP1_POSITION                 0x00000001
#define _IPC29_ADCP6IP1_MASK                     0x00000002
#define _IPC29_ADCP6IP1_LENGTH                   0x00000001

#define _IPC29_ADCP6IP2_POSITION                 0x00000002
#define _IPC29_ADCP6IP2_MASK                     0x00000004
#define _IPC29_ADCP6IP2_LENGTH                   0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

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

#define _INTTREG_VECNUM6_POSITION                0x00000006
#define _INTTREG_VECNUM6_MASK                    0x00000040
#define _INTTREG_VECNUM6_LENGTH                  0x00000001

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

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

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

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2CSTAT_TBF_POSITION                    0x00000000
#define _I2CSTAT_TBF_MASK                        0x00000001
#define _I2CSTAT_TBF_LENGTH                      0x00000001

#define _I2CSTAT_RBF_POSITION                    0x00000001
#define _I2CSTAT_RBF_MASK                        0x00000002
#define _I2CSTAT_RBF_LENGTH                      0x00000001

#define _I2CSTAT_R_W_POSITION                    0x00000002
#define _I2CSTAT_R_W_MASK                        0x00000004
#define _I2CSTAT_R_W_LENGTH                      0x00000001

#define _I2CSTAT_S_POSITION                      0x00000003
#define _I2CSTAT_S_MASK                          0x00000008
#define _I2CSTAT_S_LENGTH                        0x00000001

#define _I2CSTAT_P_POSITION                      0x00000004
#define _I2CSTAT_P_MASK                          0x00000010
#define _I2CSTAT_P_LENGTH                        0x00000001

#define _I2CSTAT_D_A_POSITION                    0x00000005
#define _I2CSTAT_D_A_MASK                        0x00000020
#define _I2CSTAT_D_A_LENGTH                      0x00000001

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

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

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

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ADCON_ADCS_POSITION                     0x00000000
#define _ADCON_ADCS_MASK                         0x00000007
#define _ADCON_ADCS_LENGTH                       0x00000003

#define _ADCON_ASYNCSAMP_POSITION                0x00000004
#define _ADCON_ASYNCSAMP_MASK                    0x00000010
#define _ADCON_ASYNCSAMP_LENGTH                  0x00000001

#define _ADCON_SEQSAMP_POSITION                  0x00000005
#define _ADCON_SEQSAMP_MASK                      0x00000020
#define _ADCON_SEQSAMP_LENGTH                    0x00000001

#define _ADCON_ORDER_POSITION                    0x00000006
#define _ADCON_ORDER_MASK                        0x00000040
#define _ADCON_ORDER_LENGTH                      0x00000001

#define _ADCON_EIE_POSITION                      0x00000007
#define _ADCON_EIE_MASK                          0x00000080
#define _ADCON_EIE_LENGTH                        0x00000001

#define _ADCON_FORM_POSITION                     0x00000008
#define _ADCON_FORM_MASK                         0x00000100
#define _ADCON_FORM_LENGTH                       0x00000001

#define _ADCON_GSWTRG_POSITION                   0x0000000A
#define _ADCON_GSWTRG_MASK                       0x00000400
#define _ADCON_GSWTRG_LENGTH                     0x00000001

#define _ADCON_SLOWCLK_POSITION                  0x0000000C
#define _ADCON_SLOWCLK_MASK                      0x00001000
#define _ADCON_SLOWCLK_LENGTH                    0x00000001

#define _ADCON_ADSIDL_POSITION                   0x0000000D
#define _ADCON_ADSIDL_MASK                       0x00002000
#define _ADCON_ADSIDL_LENGTH                     0x00000001

#define _ADCON_ADON_POSITION                     0x0000000F
#define _ADCON_ADON_MASK                         0x00008000
#define _ADCON_ADON_LENGTH                       0x00000001

#define _ADCON_ADCS0_POSITION                    0x00000000
#define _ADCON_ADCS0_MASK                        0x00000001
#define _ADCON_ADCS0_LENGTH                      0x00000001

#define _ADCON_ADCS1_POSITION                    0x00000001
#define _ADCON_ADCS1_MASK                        0x00000002
#define _ADCON_ADCS1_LENGTH                      0x00000001

#define _ADCON_ADCS2_POSITION                    0x00000002
#define _ADCON_ADCS2_MASK                        0x00000004
#define _ADCON_ADCS2_LENGTH                      0x00000001

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

#define _ADPCFG_PCFG6_POSITION                   0x00000006
#define _ADPCFG_PCFG6_MASK                       0x00000040
#define _ADPCFG_PCFG6_LENGTH                     0x00000001

#define _ADPCFG_PCFG7_POSITION                   0x00000007
#define _ADPCFG_PCFG7_MASK                       0x00000080
#define _ADPCFG_PCFG7_LENGTH                     0x00000001

#define _ADSTAT_P0RDY_POSITION                   0x00000000
#define _ADSTAT_P0RDY_MASK                       0x00000001
#define _ADSTAT_P0RDY_LENGTH                     0x00000001

#define _ADSTAT_P1RDY_POSITION                   0x00000001
#define _ADSTAT_P1RDY_MASK                       0x00000002
#define _ADSTAT_P1RDY_LENGTH                     0x00000001

#define _ADSTAT_P3RDY_POSITION                   0x00000003
#define _ADSTAT_P3RDY_MASK                       0x00000008
#define _ADSTAT_P3RDY_LENGTH                     0x00000001

#define _ADSTAT_P6RDY_POSITION                   0x00000006
#define _ADSTAT_P6RDY_MASK                       0x00000040
#define _ADSTAT_P6RDY_LENGTH                     0x00000001

#define _ADCPC0_TRGSRC0_POSITION                 0x00000000
#define _ADCPC0_TRGSRC0_MASK                     0x0000001F
#define _ADCPC0_TRGSRC0_LENGTH                   0x00000005

#define _ADCPC0_SWTRG0_POSITION                  0x00000005
#define _ADCPC0_SWTRG0_MASK                      0x00000020
#define _ADCPC0_SWTRG0_LENGTH                    0x00000001

#define _ADCPC0_PEND0_POSITION                   0x00000006
#define _ADCPC0_PEND0_MASK                       0x00000040
#define _ADCPC0_PEND0_LENGTH                     0x00000001

#define _ADCPC0_IRQEN0_POSITION                  0x00000007
#define _ADCPC0_IRQEN0_MASK                      0x00000080
#define _ADCPC0_IRQEN0_LENGTH                    0x00000001

#define _ADCPC0_TRGSRC1_POSITION                 0x00000008
#define _ADCPC0_TRGSRC1_MASK                     0x00001F00
#define _ADCPC0_TRGSRC1_LENGTH                   0x00000005

#define _ADCPC0_SWTRG1_POSITION                  0x0000000D
#define _ADCPC0_SWTRG1_MASK                      0x00002000
#define _ADCPC0_SWTRG1_LENGTH                    0x00000001

#define _ADCPC0_PEND1_POSITION                   0x0000000E
#define _ADCPC0_PEND1_MASK                       0x00004000
#define _ADCPC0_PEND1_LENGTH                     0x00000001

#define _ADCPC0_IRQEN1_POSITION                  0x0000000F
#define _ADCPC0_IRQEN1_MASK                      0x00008000
#define _ADCPC0_IRQEN1_LENGTH                    0x00000001

#define _ADCPC0_TRGSRC00_POSITION                0x00000000
#define _ADCPC0_TRGSRC00_MASK                    0x00000001
#define _ADCPC0_TRGSRC00_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC01_POSITION                0x00000001
#define _ADCPC0_TRGSRC01_MASK                    0x00000002
#define _ADCPC0_TRGSRC01_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC02_POSITION                0x00000002
#define _ADCPC0_TRGSRC02_MASK                    0x00000004
#define _ADCPC0_TRGSRC02_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC03_POSITION                0x00000003
#define _ADCPC0_TRGSRC03_MASK                    0x00000008
#define _ADCPC0_TRGSRC03_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC04_POSITION                0x00000004
#define _ADCPC0_TRGSRC04_MASK                    0x00000010
#define _ADCPC0_TRGSRC04_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC10_POSITION                0x00000008
#define _ADCPC0_TRGSRC10_MASK                    0x00000100
#define _ADCPC0_TRGSRC10_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC11_POSITION                0x00000009
#define _ADCPC0_TRGSRC11_MASK                    0x00000200
#define _ADCPC0_TRGSRC11_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC12_POSITION                0x0000000A
#define _ADCPC0_TRGSRC12_MASK                    0x00000400
#define _ADCPC0_TRGSRC12_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC13_POSITION                0x0000000B
#define _ADCPC0_TRGSRC13_MASK                    0x00000800
#define _ADCPC0_TRGSRC13_LENGTH                  0x00000001

#define _ADCPC0_TRGSRC14_POSITION                0x0000000C
#define _ADCPC0_TRGSRC14_MASK                    0x00001000
#define _ADCPC0_TRGSRC14_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC3_POSITION                 0x00000008
#define _ADCPC1_TRGSRC3_MASK                     0x00001F00
#define _ADCPC1_TRGSRC3_LENGTH                   0x00000005

#define _ADCPC1_SWTRG3_POSITION                  0x0000000D
#define _ADCPC1_SWTRG3_MASK                      0x00002000
#define _ADCPC1_SWTRG3_LENGTH                    0x00000001

#define _ADCPC1_PEND3_POSITION                   0x0000000E
#define _ADCPC1_PEND3_MASK                       0x00004000
#define _ADCPC1_PEND3_LENGTH                     0x00000001

#define _ADCPC1_IRQEN3_POSITION                  0x0000000F
#define _ADCPC1_IRQEN3_MASK                      0x00008000
#define _ADCPC1_IRQEN3_LENGTH                    0x00000001

#define _ADCPC1_TRGSRC30_POSITION                0x00000008
#define _ADCPC1_TRGSRC30_MASK                    0x00000100
#define _ADCPC1_TRGSRC30_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC31_POSITION                0x00000009
#define _ADCPC1_TRGSRC31_MASK                    0x00000200
#define _ADCPC1_TRGSRC31_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC32_POSITION                0x0000000A
#define _ADCPC1_TRGSRC32_MASK                    0x00000400
#define _ADCPC1_TRGSRC32_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC33_POSITION                0x0000000B
#define _ADCPC1_TRGSRC33_MASK                    0x00000800
#define _ADCPC1_TRGSRC33_LENGTH                  0x00000001

#define _ADCPC1_TRGSRC34_POSITION                0x0000000C
#define _ADCPC1_TRGSRC34_MASK                    0x00001000
#define _ADCPC1_TRGSRC34_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC6_POSITION                 0x00000000
#define _ADCPC3_TRGSRC6_MASK                     0x0000001F
#define _ADCPC3_TRGSRC6_LENGTH                   0x00000005

#define _ADCPC3_SWTRG6_POSITION                  0x00000005
#define _ADCPC3_SWTRG6_MASK                      0x00000020
#define _ADCPC3_SWTRG6_LENGTH                    0x00000001

#define _ADCPC3_PEND6_POSITION                   0x00000006
#define _ADCPC3_PEND6_MASK                       0x00000040
#define _ADCPC3_PEND6_LENGTH                     0x00000001

#define _ADCPC3_IRQEN6_POSITION                  0x00000007
#define _ADCPC3_IRQEN6_MASK                      0x00000080
#define _ADCPC3_IRQEN6_LENGTH                    0x00000001

#define _ADCPC3_TRGSRC60_POSITION                0x00000000
#define _ADCPC3_TRGSRC60_MASK                    0x00000001
#define _ADCPC3_TRGSRC60_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC61_POSITION                0x00000001
#define _ADCPC3_TRGSRC61_MASK                    0x00000002
#define _ADCPC3_TRGSRC61_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC62_POSITION                0x00000002
#define _ADCPC3_TRGSRC62_MASK                    0x00000004
#define _ADCPC3_TRGSRC62_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC63_POSITION                0x00000003
#define _ADCPC3_TRGSRC63_MASK                    0x00000008
#define _ADCPC3_TRGSRC63_LENGTH                  0x00000001

#define _ADCPC3_TRGSRC64_POSITION                0x00000004
#define _ADCPC3_TRGSRC64_MASK                    0x00000010
#define _ADCPC3_TRGSRC64_LENGTH                  0x00000001

#define _PTCON_SEVTPS_POSITION                   0x00000000
#define _PTCON_SEVTPS_MASK                       0x0000000F
#define _PTCON_SEVTPS_LENGTH                     0x00000004

#define _PTCON_SYNCSRC_POSITION                  0x00000004
#define _PTCON_SYNCSRC_MASK                      0x00000030
#define _PTCON_SYNCSRC_LENGTH                    0x00000002

#define _PTCON_SYNCEN_POSITION                   0x00000007
#define _PTCON_SYNCEN_MASK                       0x00000080
#define _PTCON_SYNCEN_LENGTH                     0x00000001

#define _PTCON_SYNCOEN_POSITION                  0x00000008
#define _PTCON_SYNCOEN_MASK                      0x00000100
#define _PTCON_SYNCOEN_LENGTH                    0x00000001

#define _PTCON_SYNCPOL_POSITION                  0x00000009
#define _PTCON_SYNCPOL_MASK                      0x00000200
#define _PTCON_SYNCPOL_LENGTH                    0x00000001

#define _PTCON_EIPU_POSITION                     0x0000000A
#define _PTCON_EIPU_MASK                         0x00000400
#define _PTCON_EIPU_LENGTH                       0x00000001

#define _PTCON_SEIEN_POSITION                    0x0000000B
#define _PTCON_SEIEN_MASK                        0x00000800
#define _PTCON_SEIEN_LENGTH                      0x00000001

#define _PTCON_SESTAT_POSITION                   0x0000000C
#define _PTCON_SESTAT_MASK                       0x00001000
#define _PTCON_SESTAT_LENGTH                     0x00000001

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_SEVTPS0_POSITION                  0x00000000
#define _PTCON_SEVTPS0_MASK                      0x00000001
#define _PTCON_SEVTPS0_LENGTH                    0x00000001

#define _PTCON_SEVTPS1_POSITION                  0x00000001
#define _PTCON_SEVTPS1_MASK                      0x00000002
#define _PTCON_SEVTPS1_LENGTH                    0x00000001

#define _PTCON_SEVTPS2_POSITION                  0x00000002
#define _PTCON_SEVTPS2_MASK                      0x00000004
#define _PTCON_SEVTPS2_LENGTH                    0x00000001

#define _PTCON_SEVTPS3_POSITION                  0x00000003
#define _PTCON_SEVTPS3_MASK                      0x00000008
#define _PTCON_SEVTPS3_LENGTH                    0x00000001

#define _PTCON_SYNCSRC0_POSITION                 0x00000004
#define _PTCON_SYNCSRC0_MASK                     0x00000010
#define _PTCON_SYNCSRC0_LENGTH                   0x00000001

#define _PTCON_SYNCSRC1_POSITION                 0x00000005
#define _PTCON_SYNCSRC1_MASK                     0x00000020
#define _PTCON_SYNCSRC1_LENGTH                   0x00000001

#define _PTCON2_PCLKDIV_POSITION                 0x00000000
#define _PTCON2_PCLKDIV_MASK                     0x00000007
#define _PTCON2_PCLKDIV_LENGTH                   0x00000003

#define _PTCON2_PCLKDIV0_POSITION                0x00000000
#define _PTCON2_PCLKDIV0_MASK                    0x00000001
#define _PTCON2_PCLKDIV0_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV1_POSITION                0x00000001
#define _PTCON2_PCLKDIV1_MASK                    0x00000002
#define _PTCON2_PCLKDIV1_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV2_POSITION                0x00000002
#define _PTCON2_PCLKDIV2_MASK                    0x00000004
#define _PTCON2_PCLKDIV2_LENGTH                  0x00000001

#define _CHOP_CHOPCLK_POSITION                   0x00000003
#define _CHOP_CHOPCLK_MASK                       0x000003F8
#define _CHOP_CHOPCLK_LENGTH                     0x00000007

#define _CHOP_CHPCLKEN_POSITION                  0x0000000F
#define _CHOP_CHPCLKEN_MASK                      0x00008000
#define _CHOP_CHPCLKEN_LENGTH                    0x00000001

#define _CHOP_CHOPCLK0_POSITION                  0x00000003
#define _CHOP_CHOPCLK0_MASK                      0x00000008
#define _CHOP_CHOPCLK0_LENGTH                    0x00000001

#define _CHOP_CHOPCLK1_POSITION                  0x00000004
#define _CHOP_CHOPCLK1_MASK                      0x00000010
#define _CHOP_CHOPCLK1_LENGTH                    0x00000001

#define _CHOP_CHOPCLK2_POSITION                  0x00000005
#define _CHOP_CHOPCLK2_MASK                      0x00000020
#define _CHOP_CHOPCLK2_LENGTH                    0x00000001

#define _CHOP_CHOPCLK3_POSITION                  0x00000006
#define _CHOP_CHOPCLK3_MASK                      0x00000040
#define _CHOP_CHOPCLK3_LENGTH                    0x00000001

#define _CHOP_CHOPCLK4_POSITION                  0x00000007
#define _CHOP_CHOPCLK4_MASK                      0x00000080
#define _CHOP_CHOPCLK4_LENGTH                    0x00000001

#define _CHOP_CHOPCLK5_POSITION                  0x00000008
#define _CHOP_CHOPCLK5_MASK                      0x00000100
#define _CHOP_CHOPCLK5_LENGTH                    0x00000001

#define _CHOP_CHOPCLK6_POSITION                  0x00000009
#define _CHOP_CHOPCLK6_MASK                      0x00000200
#define _CHOP_CHOPCLK6_LENGTH                    0x00000001

#define _PWMCON1_IUE_POSITION                    0x00000000
#define _PWMCON1_IUE_MASK                        0x00000001
#define _PWMCON1_IUE_LENGTH                      0x00000001

#define _PWMCON1_XPRES_POSITION                  0x00000001
#define _PWMCON1_XPRES_MASK                      0x00000002
#define _PWMCON1_XPRES_LENGTH                    0x00000001

#define _PWMCON1_CAM_POSITION                    0x00000002
#define _PWMCON1_CAM_MASK                        0x00000004
#define _PWMCON1_CAM_LENGTH                      0x00000001

#define _PWMCON1_DTC_POSITION                    0x00000006
#define _PWMCON1_DTC_MASK                        0x000000C0
#define _PWMCON1_DTC_LENGTH                      0x00000002

#define _PWMCON1_MDCS_POSITION                   0x00000008
#define _PWMCON1_MDCS_MASK                       0x00000100
#define _PWMCON1_MDCS_LENGTH                     0x00000001

#define _PWMCON1_ITB_POSITION                    0x00000009
#define _PWMCON1_ITB_MASK                        0x00000200
#define _PWMCON1_ITB_LENGTH                      0x00000001

#define _PWMCON1_TRGIEN_POSITION                 0x0000000A
#define _PWMCON1_TRGIEN_MASK                     0x00000400
#define _PWMCON1_TRGIEN_LENGTH                   0x00000001

#define _PWMCON1_CLIEN_POSITION                  0x0000000B
#define _PWMCON1_CLIEN_MASK                      0x00000800
#define _PWMCON1_CLIEN_LENGTH                    0x00000001

#define _PWMCON1_FLTIEN_POSITION                 0x0000000C
#define _PWMCON1_FLTIEN_MASK                     0x00001000
#define _PWMCON1_FLTIEN_LENGTH                   0x00000001

#define _PWMCON1_TRGSTAT_POSITION                0x0000000D
#define _PWMCON1_TRGSTAT_MASK                    0x00002000
#define _PWMCON1_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON1_CLSTAT_POSITION                 0x0000000E
#define _PWMCON1_CLSTAT_MASK                     0x00004000
#define _PWMCON1_CLSTAT_LENGTH                   0x00000001

#define _PWMCON1_FLTSTAT_POSITION                0x0000000F
#define _PWMCON1_FLTSTAT_MASK                    0x00008000
#define _PWMCON1_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON1_DTC0_POSITION                   0x00000006
#define _PWMCON1_DTC0_MASK                       0x00000040
#define _PWMCON1_DTC0_LENGTH                     0x00000001

#define _PWMCON1_DTC1_POSITION                   0x00000007
#define _PWMCON1_DTC1_MASK                       0x00000080
#define _PWMCON1_DTC1_LENGTH                     0x00000001

#define _IOCON1_OSYNC_POSITION                   0x00000000
#define _IOCON1_OSYNC_MASK                       0x00000001
#define _IOCON1_OSYNC_LENGTH                     0x00000001

#define _IOCON1_SWAP_POSITION                    0x00000001
#define _IOCON1_SWAP_MASK                        0x00000002
#define _IOCON1_SWAP_LENGTH                      0x00000001

#define _IOCON1_CLDAT_POSITION                   0x00000002
#define _IOCON1_CLDAT_MASK                       0x0000000C
#define _IOCON1_CLDAT_LENGTH                     0x00000002

#define _IOCON1_FLTDAT_POSITION                  0x00000004
#define _IOCON1_FLTDAT_MASK                      0x00000030
#define _IOCON1_FLTDAT_LENGTH                    0x00000002

#define _IOCON1_OVRDAT_POSITION                  0x00000006
#define _IOCON1_OVRDAT_MASK                      0x000000C0
#define _IOCON1_OVRDAT_LENGTH                    0x00000002

#define _IOCON1_OVRENL_POSITION                  0x00000008
#define _IOCON1_OVRENL_MASK                      0x00000100
#define _IOCON1_OVRENL_LENGTH                    0x00000001

#define _IOCON1_OVRENH_POSITION                  0x00000009
#define _IOCON1_OVRENH_MASK                      0x00000200
#define _IOCON1_OVRENH_LENGTH                    0x00000001

#define _IOCON1_PMOD_POSITION                    0x0000000A
#define _IOCON1_PMOD_MASK                        0x00000C00
#define _IOCON1_PMOD_LENGTH                      0x00000002

#define _IOCON1_POLL_POSITION                    0x0000000C
#define _IOCON1_POLL_MASK                        0x00001000
#define _IOCON1_POLL_LENGTH                      0x00000001

#define _IOCON1_POLH_POSITION                    0x0000000D
#define _IOCON1_POLH_MASK                        0x00002000
#define _IOCON1_POLH_LENGTH                      0x00000001

#define _IOCON1_PENL_POSITION                    0x0000000E
#define _IOCON1_PENL_MASK                        0x00004000
#define _IOCON1_PENL_LENGTH                      0x00000001

#define _IOCON1_PENH_POSITION                    0x0000000F
#define _IOCON1_PENH_MASK                        0x00008000
#define _IOCON1_PENH_LENGTH                      0x00000001

#define _IOCON1_CLDAT0_POSITION                  0x00000002
#define _IOCON1_CLDAT0_MASK                      0x00000004
#define _IOCON1_CLDAT0_LENGTH                    0x00000001

#define _IOCON1_CLDAT1_POSITION                  0x00000003
#define _IOCON1_CLDAT1_MASK                      0x00000008
#define _IOCON1_CLDAT1_LENGTH                    0x00000001

#define _IOCON1_FLTDAT0_POSITION                 0x00000004
#define _IOCON1_FLTDAT0_MASK                     0x00000010
#define _IOCON1_FLTDAT0_LENGTH                   0x00000001

#define _IOCON1_FLTDAT1_POSITION                 0x00000005
#define _IOCON1_FLTDAT1_MASK                     0x00000020
#define _IOCON1_FLTDAT1_LENGTH                   0x00000001

#define _IOCON1_OVRDAT0_POSITION                 0x00000006
#define _IOCON1_OVRDAT0_MASK                     0x00000040
#define _IOCON1_OVRDAT0_LENGTH                   0x00000001

#define _IOCON1_OVRDAT1_POSITION                 0x00000007
#define _IOCON1_OVRDAT1_MASK                     0x00000080
#define _IOCON1_OVRDAT1_LENGTH                   0x00000001

#define _IOCON1_PMOD0_POSITION                   0x0000000A
#define _IOCON1_PMOD0_MASK                       0x00000400
#define _IOCON1_PMOD0_LENGTH                     0x00000001

#define _IOCON1_PMOD1_POSITION                   0x0000000B
#define _IOCON1_PMOD1_MASK                       0x00000800
#define _IOCON1_PMOD1_LENGTH                     0x00000001

#define _FCLCON1_FLTMOD_POSITION                 0x00000000
#define _FCLCON1_FLTMOD_MASK                     0x00000003
#define _FCLCON1_FLTMOD_LENGTH                   0x00000002

#define _FCLCON1_FLTPOL_POSITION                 0x00000002
#define _FCLCON1_FLTPOL_MASK                     0x00000004
#define _FCLCON1_FLTPOL_LENGTH                   0x00000001

#define _FCLCON1_FLTSRC_POSITION                 0x00000003
#define _FCLCON1_FLTSRC_MASK                     0x000000F8
#define _FCLCON1_FLTSRC_LENGTH                   0x00000005

#define _FCLCON1_CLMOD_POSITION                  0x00000008
#define _FCLCON1_CLMOD_MASK                      0x00000100
#define _FCLCON1_CLMOD_LENGTH                    0x00000001

#define _FCLCON1_CLPOL_POSITION                  0x00000009
#define _FCLCON1_CLPOL_MASK                      0x00000200
#define _FCLCON1_CLPOL_LENGTH                    0x00000001

#define _FCLCON1_CLSRC_POSITION                  0x0000000A
#define _FCLCON1_CLSRC_MASK                      0x00007C00
#define _FCLCON1_CLSRC_LENGTH                    0x00000005

#define _FCLCON1_IFLTMOD_POSITION                0x0000000F
#define _FCLCON1_IFLTMOD_MASK                    0x00008000
#define _FCLCON1_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD0_POSITION                0x00000000
#define _FCLCON1_FLTMOD0_MASK                    0x00000001
#define _FCLCON1_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD1_POSITION                0x00000001
#define _FCLCON1_FLTMOD1_MASK                    0x00000002
#define _FCLCON1_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC0_POSITION                0x00000003
#define _FCLCON1_FLTSRC0_MASK                    0x00000008
#define _FCLCON1_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC1_POSITION                0x00000004
#define _FCLCON1_FLTSRC1_MASK                    0x00000010
#define _FCLCON1_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC2_POSITION                0x00000005
#define _FCLCON1_FLTSRC2_MASK                    0x00000020
#define _FCLCON1_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC3_POSITION                0x00000006
#define _FCLCON1_FLTSRC3_MASK                    0x00000040
#define _FCLCON1_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC4_POSITION                0x00000007
#define _FCLCON1_FLTSRC4_MASK                    0x00000080
#define _FCLCON1_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON1_CLSRC0_POSITION                 0x0000000A
#define _FCLCON1_CLSRC0_MASK                     0x00000400
#define _FCLCON1_CLSRC0_LENGTH                   0x00000001

#define _FCLCON1_CLSRC1_POSITION                 0x0000000B
#define _FCLCON1_CLSRC1_MASK                     0x00000800
#define _FCLCON1_CLSRC1_LENGTH                   0x00000001

#define _FCLCON1_CLSRC2_POSITION                 0x0000000C
#define _FCLCON1_CLSRC2_MASK                     0x00001000
#define _FCLCON1_CLSRC2_LENGTH                   0x00000001

#define _FCLCON1_CLSRC3_POSITION                 0x0000000D
#define _FCLCON1_CLSRC3_MASK                     0x00002000
#define _FCLCON1_CLSRC3_LENGTH                   0x00000001

#define _FCLCON1_CLSRC4_POSITION                 0x0000000E
#define _FCLCON1_CLSRC4_MASK                     0x00004000
#define _FCLCON1_CLSRC4_LENGTH                   0x00000001

#define _TRIG1_TRGCMP_POSITION                   0x00000003
#define _TRIG1_TRGCMP_MASK                       0x0000FFF8
#define _TRIG1_TRGCMP_LENGTH                     0x0000000D

#define _TRIG1_TRGCMP0_POSITION                  0x00000003
#define _TRIG1_TRGCMP0_MASK                      0x00000008
#define _TRIG1_TRGCMP0_LENGTH                    0x00000001

#define _TRIG1_TRGCMP1_POSITION                  0x00000004
#define _TRIG1_TRGCMP1_MASK                      0x00000010
#define _TRIG1_TRGCMP1_LENGTH                    0x00000001

#define _TRIG1_TRGCMP2_POSITION                  0x00000005
#define _TRIG1_TRGCMP2_MASK                      0x00000020
#define _TRIG1_TRGCMP2_LENGTH                    0x00000001

#define _TRIG1_TRGCMP3_POSITION                  0x00000006
#define _TRIG1_TRGCMP3_MASK                      0x00000040
#define _TRIG1_TRGCMP3_LENGTH                    0x00000001

#define _TRIG1_TRGCMP4_POSITION                  0x00000007
#define _TRIG1_TRGCMP4_MASK                      0x00000080
#define _TRIG1_TRGCMP4_LENGTH                    0x00000001

#define _TRIG1_TRGCMP5_POSITION                  0x00000008
#define _TRIG1_TRGCMP5_MASK                      0x00000100
#define _TRIG1_TRGCMP5_LENGTH                    0x00000001

#define _TRIG1_TRGCMP6_POSITION                  0x00000009
#define _TRIG1_TRGCMP6_MASK                      0x00000200
#define _TRIG1_TRGCMP6_LENGTH                    0x00000001

#define _TRIG1_TRGCMP7_POSITION                  0x0000000A
#define _TRIG1_TRGCMP7_MASK                      0x00000400
#define _TRIG1_TRGCMP7_LENGTH                    0x00000001

#define _TRIG1_TRGCMP8_POSITION                  0x0000000B
#define _TRIG1_TRGCMP8_MASK                      0x00000800
#define _TRIG1_TRGCMP8_LENGTH                    0x00000001

#define _TRIG1_TRGCMP9_POSITION                  0x0000000C
#define _TRIG1_TRGCMP9_MASK                      0x00001000
#define _TRIG1_TRGCMP9_LENGTH                    0x00000001

#define _TRIG1_TRGCMP10_POSITION                 0x0000000D
#define _TRIG1_TRGCMP10_MASK                     0x00002000
#define _TRIG1_TRGCMP10_LENGTH                   0x00000001

#define _TRIG1_TRGCMP11_POSITION                 0x0000000E
#define _TRIG1_TRGCMP11_MASK                     0x00004000
#define _TRIG1_TRGCMP11_LENGTH                   0x00000001

#define _TRIG1_TRGCMP12_POSITION                 0x0000000F
#define _TRIG1_TRGCMP12_MASK                     0x00008000
#define _TRIG1_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON1_TRGSTRT_POSITION                0x00000000
#define _TRGCON1_TRGSTRT_MASK                    0x0000003F
#define _TRGCON1_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON1_DTM_POSITION                    0x00000007
#define _TRGCON1_DTM_MASK                        0x00000080
#define _TRGCON1_DTM_LENGTH                      0x00000001

#define _TRGCON1_TRGDIV_POSITION                 0x0000000C
#define _TRGCON1_TRGDIV_MASK                     0x0000F000
#define _TRGCON1_TRGDIV_LENGTH                   0x00000004

#define _TRGCON1_TRGSTRT0_POSITION               0x00000000
#define _TRGCON1_TRGSTRT0_MASK                   0x00000001
#define _TRGCON1_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT1_POSITION               0x00000001
#define _TRGCON1_TRGSTRT1_MASK                   0x00000002
#define _TRGCON1_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT2_POSITION               0x00000002
#define _TRGCON1_TRGSTRT2_MASK                   0x00000004
#define _TRGCON1_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT3_POSITION               0x00000003
#define _TRGCON1_TRGSTRT3_MASK                   0x00000008
#define _TRGCON1_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT4_POSITION               0x00000004
#define _TRGCON1_TRGSTRT4_MASK                   0x00000010
#define _TRGCON1_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT5_POSITION               0x00000005
#define _TRGCON1_TRGSTRT5_MASK                   0x00000020
#define _TRGCON1_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON1_TRGDIV0_POSITION                0x0000000C
#define _TRGCON1_TRGDIV0_MASK                    0x00001000
#define _TRGCON1_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV1_POSITION                0x0000000D
#define _TRGCON1_TRGDIV1_MASK                    0x00002000
#define _TRGCON1_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV2_POSITION                0x0000000E
#define _TRGCON1_TRGDIV2_MASK                    0x00004000
#define _TRGCON1_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV3_POSITION                0x0000000F
#define _TRGCON1_TRGDIV3_MASK                    0x00008000
#define _TRGCON1_TRGDIV3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP0_POSITION                0x00000003
#define _STRIG1_STRGCMP0_MASK                    0x00000008
#define _STRIG1_STRGCMP0_LENGTH                  0x00000001

#define _STRIG1_STRGCMP1_POSITION                0x00000004
#define _STRIG1_STRGCMP1_MASK                    0x00000010
#define _STRIG1_STRGCMP1_LENGTH                  0x00000001

#define _STRIG1_STRGCMP2_POSITION                0x00000005
#define _STRIG1_STRGCMP2_MASK                    0x00000020
#define _STRIG1_STRGCMP2_LENGTH                  0x00000001

#define _STRIG1_STRGCMP3_POSITION                0x00000006
#define _STRIG1_STRGCMP3_MASK                    0x00000040
#define _STRIG1_STRGCMP3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP4_POSITION                0x00000007
#define _STRIG1_STRGCMP4_MASK                    0x00000080
#define _STRIG1_STRGCMP4_LENGTH                  0x00000001

#define _STRIG1_STRGCMP5_POSITION                0x00000008
#define _STRIG1_STRGCMP5_MASK                    0x00000100
#define _STRIG1_STRGCMP5_LENGTH                  0x00000001

#define _STRIG1_STRGCMP6_POSITION                0x00000009
#define _STRIG1_STRGCMP6_MASK                    0x00000200
#define _STRIG1_STRGCMP6_LENGTH                  0x00000001

#define _STRIG1_STRGCMP7_POSITION                0x0000000A
#define _STRIG1_STRGCMP7_MASK                    0x00000400
#define _STRIG1_STRGCMP7_LENGTH                  0x00000001

#define _STRIG1_STRGCMP8_POSITION                0x0000000B
#define _STRIG1_STRGCMP8_MASK                    0x00000800
#define _STRIG1_STRGCMP8_LENGTH                  0x00000001

#define _STRIG1_STRGCMP9_POSITION                0x0000000C
#define _STRIG1_STRGCMP9_MASK                    0x00001000
#define _STRIG1_STRGCMP9_LENGTH                  0x00000001

#define _STRIG1_STRGCMP10_POSITION               0x0000000D
#define _STRIG1_STRGCMP10_MASK                   0x00002000
#define _STRIG1_STRGCMP10_LENGTH                 0x00000001

#define _STRIG1_STRGCMP11_POSITION               0x0000000E
#define _STRIG1_STRGCMP11_MASK                   0x00004000
#define _STRIG1_STRGCMP11_LENGTH                 0x00000001

#define _STRIG1_STRGCMP12_POSITION               0x0000000F
#define _STRIG1_STRGCMP12_MASK                   0x00008000
#define _STRIG1_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP10_POSITION               0x00000003
#define _PWMCAP1_PWMCAP10_MASK                   0x00000008
#define _PWMCAP1_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP11_POSITION               0x00000004
#define _PWMCAP1_PWMCAP11_MASK                   0x00000010
#define _PWMCAP1_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP12_POSITION               0x00000005
#define _PWMCAP1_PWMCAP12_MASK                   0x00000020
#define _PWMCAP1_PWMCAP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP13_POSITION               0x00000006
#define _PWMCAP1_PWMCAP13_MASK                   0x00000040
#define _PWMCAP1_PWMCAP13_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP14_POSITION               0x00000007
#define _PWMCAP1_PWMCAP14_MASK                   0x00000080
#define _PWMCAP1_PWMCAP14_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP15_POSITION               0x00000008
#define _PWMCAP1_PWMCAP15_MASK                   0x00000100
#define _PWMCAP1_PWMCAP15_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP16_POSITION               0x00000009
#define _PWMCAP1_PWMCAP16_MASK                   0x00000200
#define _PWMCAP1_PWMCAP16_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP17_POSITION               0x0000000A
#define _PWMCAP1_PWMCAP17_MASK                   0x00000400
#define _PWMCAP1_PWMCAP17_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP18_POSITION               0x0000000B
#define _PWMCAP1_PWMCAP18_MASK                   0x00000800
#define _PWMCAP1_PWMCAP18_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP19_POSITION               0x0000000C
#define _PWMCAP1_PWMCAP19_MASK                   0x00001000
#define _PWMCAP1_PWMCAP19_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP110_POSITION              0x0000000D
#define _PWMCAP1_PWMCAP110_MASK                  0x00002000
#define _PWMCAP1_PWMCAP110_LENGTH                0x00000001

#define _PWMCAP1_PWMCAP111_POSITION              0x0000000E
#define _PWMCAP1_PWMCAP111_MASK                  0x00004000
#define _PWMCAP1_PWMCAP111_LENGTH                0x00000001

#define _PWMCAP1_PWMCAP112_POSITION              0x0000000F
#define _PWMCAP1_PWMCAP112_MASK                  0x00008000
#define _PWMCAP1_PWMCAP112_LENGTH                0x00000001

#define _LEBCON1_LEB_POSITION                    0x00000003
#define _LEBCON1_LEB_MASK                        0x000003F8
#define _LEBCON1_LEB_LENGTH                      0x00000007

#define _LEBCON1_CLLEBEN_POSITION                0x0000000A
#define _LEBCON1_CLLEBEN_MASK                    0x00000400
#define _LEBCON1_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON1_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON1_FLTLEBEN_MASK                   0x00000800
#define _LEBCON1_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON1_PLF_POSITION                    0x0000000C
#define _LEBCON1_PLF_MASK                        0x00001000
#define _LEBCON1_PLF_LENGTH                      0x00000001

#define _LEBCON1_PLR_POSITION                    0x0000000D
#define _LEBCON1_PLR_MASK                        0x00002000
#define _LEBCON1_PLR_LENGTH                      0x00000001

#define _LEBCON1_PHF_POSITION                    0x0000000E
#define _LEBCON1_PHF_MASK                        0x00004000
#define _LEBCON1_PHF_LENGTH                      0x00000001

#define _LEBCON1_PHR_POSITION                    0x0000000F
#define _LEBCON1_PHR_MASK                        0x00008000
#define _LEBCON1_PHR_LENGTH                      0x00000001

#define _LEBCON1_LEB0_POSITION                   0x00000003
#define _LEBCON1_LEB0_MASK                       0x00000008
#define _LEBCON1_LEB0_LENGTH                     0x00000001

#define _LEBCON1_LEB1_POSITION                   0x00000004
#define _LEBCON1_LEB1_MASK                       0x00000010
#define _LEBCON1_LEB1_LENGTH                     0x00000001

#define _LEBCON1_LEB2_POSITION                   0x00000005
#define _LEBCON1_LEB2_MASK                       0x00000020
#define _LEBCON1_LEB2_LENGTH                     0x00000001

#define _LEBCON1_LEB3_POSITION                   0x00000006
#define _LEBCON1_LEB3_MASK                       0x00000040
#define _LEBCON1_LEB3_LENGTH                     0x00000001

#define _LEBCON1_LEB4_POSITION                   0x00000007
#define _LEBCON1_LEB4_MASK                       0x00000080
#define _LEBCON1_LEB4_LENGTH                     0x00000001

#define _LEBCON1_LEB5_POSITION                   0x00000008
#define _LEBCON1_LEB5_MASK                       0x00000100
#define _LEBCON1_LEB5_LENGTH                     0x00000001

#define _LEBCON1_LEB6_POSITION                   0x00000009
#define _LEBCON1_LEB6_MASK                       0x00000200
#define _LEBCON1_LEB6_LENGTH                     0x00000001

#define _AUXCON1_CHOPLEN_POSITION                0x00000000
#define _AUXCON1_CHOPLEN_MASK                    0x00000001
#define _AUXCON1_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPHEN_POSITION                0x00000001
#define _AUXCON1_CHOPHEN_MASK                    0x00000002
#define _AUXCON1_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPSEL_POSITION                0x00000002
#define _AUXCON1_CHOPSEL_MASK                    0x0000003C
#define _AUXCON1_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON1_HRDDIS_POSITION                 0x0000000E
#define _AUXCON1_HRDDIS_MASK                     0x00004000
#define _AUXCON1_HRDDIS_LENGTH                   0x00000001

#define _AUXCON1_HRPDIS_POSITION                 0x0000000F
#define _AUXCON1_HRPDIS_MASK                     0x00008000
#define _AUXCON1_HRPDIS_LENGTH                   0x00000001

#define _PWMCON4_IUE_POSITION                    0x00000000
#define _PWMCON4_IUE_MASK                        0x00000001
#define _PWMCON4_IUE_LENGTH                      0x00000001

#define _PWMCON4_XPRES_POSITION                  0x00000001
#define _PWMCON4_XPRES_MASK                      0x00000002
#define _PWMCON4_XPRES_LENGTH                    0x00000001

#define _PWMCON4_CAM_POSITION                    0x00000002
#define _PWMCON4_CAM_MASK                        0x00000004
#define _PWMCON4_CAM_LENGTH                      0x00000001

#define _PWMCON4_DTC_POSITION                    0x00000006
#define _PWMCON4_DTC_MASK                        0x000000C0
#define _PWMCON4_DTC_LENGTH                      0x00000002

#define _PWMCON4_MDCS_POSITION                   0x00000008
#define _PWMCON4_MDCS_MASK                       0x00000100
#define _PWMCON4_MDCS_LENGTH                     0x00000001

#define _PWMCON4_ITB_POSITION                    0x00000009
#define _PWMCON4_ITB_MASK                        0x00000200
#define _PWMCON4_ITB_LENGTH                      0x00000001

#define _PWMCON4_TRGIEN_POSITION                 0x0000000A
#define _PWMCON4_TRGIEN_MASK                     0x00000400
#define _PWMCON4_TRGIEN_LENGTH                   0x00000001

#define _PWMCON4_CLIEN_POSITION                  0x0000000B
#define _PWMCON4_CLIEN_MASK                      0x00000800
#define _PWMCON4_CLIEN_LENGTH                    0x00000001

#define _PWMCON4_FLTIEN_POSITION                 0x0000000C
#define _PWMCON4_FLTIEN_MASK                     0x00001000
#define _PWMCON4_FLTIEN_LENGTH                   0x00000001

#define _PWMCON4_TRGSTAT_POSITION                0x0000000D
#define _PWMCON4_TRGSTAT_MASK                    0x00002000
#define _PWMCON4_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON4_CLSTAT_POSITION                 0x0000000E
#define _PWMCON4_CLSTAT_MASK                     0x00004000
#define _PWMCON4_CLSTAT_LENGTH                   0x00000001

#define _PWMCON4_FLTSTAT_POSITION                0x0000000F
#define _PWMCON4_FLTSTAT_MASK                    0x00008000
#define _PWMCON4_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON4_DTC0_POSITION                   0x00000006
#define _PWMCON4_DTC0_MASK                       0x00000040
#define _PWMCON4_DTC0_LENGTH                     0x00000001

#define _PWMCON4_DTC1_POSITION                   0x00000007
#define _PWMCON4_DTC1_MASK                       0x00000080
#define _PWMCON4_DTC1_LENGTH                     0x00000001

#define _IOCON4_OSYNC_POSITION                   0x00000000
#define _IOCON4_OSYNC_MASK                       0x00000001
#define _IOCON4_OSYNC_LENGTH                     0x00000001

#define _IOCON4_SWAP_POSITION                    0x00000001
#define _IOCON4_SWAP_MASK                        0x00000002
#define _IOCON4_SWAP_LENGTH                      0x00000001

#define _IOCON4_CLDAT_POSITION                   0x00000002
#define _IOCON4_CLDAT_MASK                       0x0000000C
#define _IOCON4_CLDAT_LENGTH                     0x00000002

#define _IOCON4_FLTDAT_POSITION                  0x00000004
#define _IOCON4_FLTDAT_MASK                      0x00000030
#define _IOCON4_FLTDAT_LENGTH                    0x00000002

#define _IOCON4_OVRDAT_POSITION                  0x00000006
#define _IOCON4_OVRDAT_MASK                      0x000000C0
#define _IOCON4_OVRDAT_LENGTH                    0x00000002

#define _IOCON4_OVRENL_POSITION                  0x00000008
#define _IOCON4_OVRENL_MASK                      0x00000100
#define _IOCON4_OVRENL_LENGTH                    0x00000001

#define _IOCON4_OVRENH_POSITION                  0x00000009
#define _IOCON4_OVRENH_MASK                      0x00000200
#define _IOCON4_OVRENH_LENGTH                    0x00000001

#define _IOCON4_PMOD_POSITION                    0x0000000A
#define _IOCON4_PMOD_MASK                        0x00000C00
#define _IOCON4_PMOD_LENGTH                      0x00000002

#define _IOCON4_POLL_POSITION                    0x0000000C
#define _IOCON4_POLL_MASK                        0x00001000
#define _IOCON4_POLL_LENGTH                      0x00000001

#define _IOCON4_POLH_POSITION                    0x0000000D
#define _IOCON4_POLH_MASK                        0x00002000
#define _IOCON4_POLH_LENGTH                      0x00000001

#define _IOCON4_PENL_POSITION                    0x0000000E
#define _IOCON4_PENL_MASK                        0x00004000
#define _IOCON4_PENL_LENGTH                      0x00000001

#define _IOCON4_PENH_POSITION                    0x0000000F
#define _IOCON4_PENH_MASK                        0x00008000
#define _IOCON4_PENH_LENGTH                      0x00000001

#define _IOCON4_CLDAT0_POSITION                  0x00000002
#define _IOCON4_CLDAT0_MASK                      0x00000004
#define _IOCON4_CLDAT0_LENGTH                    0x00000001

#define _IOCON4_CLDAT1_POSITION                  0x00000003
#define _IOCON4_CLDAT1_MASK                      0x00000008
#define _IOCON4_CLDAT1_LENGTH                    0x00000001

#define _IOCON4_FLTDAT0_POSITION                 0x00000004
#define _IOCON4_FLTDAT0_MASK                     0x00000010
#define _IOCON4_FLTDAT0_LENGTH                   0x00000001

#define _IOCON4_FLTDAT1_POSITION                 0x00000005
#define _IOCON4_FLTDAT1_MASK                     0x00000020
#define _IOCON4_FLTDAT1_LENGTH                   0x00000001

#define _IOCON4_OVRDAT0_POSITION                 0x00000006
#define _IOCON4_OVRDAT0_MASK                     0x00000040
#define _IOCON4_OVRDAT0_LENGTH                   0x00000001

#define _IOCON4_OVRDAT1_POSITION                 0x00000007
#define _IOCON4_OVRDAT1_MASK                     0x00000080
#define _IOCON4_OVRDAT1_LENGTH                   0x00000001

#define _IOCON4_PMOD0_POSITION                   0x0000000A
#define _IOCON4_PMOD0_MASK                       0x00000400
#define _IOCON4_PMOD0_LENGTH                     0x00000001

#define _IOCON4_PMOD1_POSITION                   0x0000000B
#define _IOCON4_PMOD1_MASK                       0x00000800
#define _IOCON4_PMOD1_LENGTH                     0x00000001

#define _FCLCON4_FLTMOD_POSITION                 0x00000000
#define _FCLCON4_FLTMOD_MASK                     0x00000003
#define _FCLCON4_FLTMOD_LENGTH                   0x00000002

#define _FCLCON4_FLTPOL_POSITION                 0x00000002
#define _FCLCON4_FLTPOL_MASK                     0x00000004
#define _FCLCON4_FLTPOL_LENGTH                   0x00000001

#define _FCLCON4_FLTSRC_POSITION                 0x00000003
#define _FCLCON4_FLTSRC_MASK                     0x000000F8
#define _FCLCON4_FLTSRC_LENGTH                   0x00000005

#define _FCLCON4_CLMOD_POSITION                  0x00000008
#define _FCLCON4_CLMOD_MASK                      0x00000100
#define _FCLCON4_CLMOD_LENGTH                    0x00000001

#define _FCLCON4_CLPOL_POSITION                  0x00000009
#define _FCLCON4_CLPOL_MASK                      0x00000200
#define _FCLCON4_CLPOL_LENGTH                    0x00000001

#define _FCLCON4_CLSRC_POSITION                  0x0000000A
#define _FCLCON4_CLSRC_MASK                      0x00007C00
#define _FCLCON4_CLSRC_LENGTH                    0x00000005

#define _FCLCON4_IFLTMOD_POSITION                0x0000000F
#define _FCLCON4_IFLTMOD_MASK                    0x00008000
#define _FCLCON4_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD0_POSITION                0x00000000
#define _FCLCON4_FLTMOD0_MASK                    0x00000001
#define _FCLCON4_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD1_POSITION                0x00000001
#define _FCLCON4_FLTMOD1_MASK                    0x00000002
#define _FCLCON4_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC0_POSITION                0x00000003
#define _FCLCON4_FLTSRC0_MASK                    0x00000008
#define _FCLCON4_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC1_POSITION                0x00000004
#define _FCLCON4_FLTSRC1_MASK                    0x00000010
#define _FCLCON4_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC2_POSITION                0x00000005
#define _FCLCON4_FLTSRC2_MASK                    0x00000020
#define _FCLCON4_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC3_POSITION                0x00000006
#define _FCLCON4_FLTSRC3_MASK                    0x00000040
#define _FCLCON4_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC4_POSITION                0x00000007
#define _FCLCON4_FLTSRC4_MASK                    0x00000080
#define _FCLCON4_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON4_CLSRC0_POSITION                 0x0000000A
#define _FCLCON4_CLSRC0_MASK                     0x00000400
#define _FCLCON4_CLSRC0_LENGTH                   0x00000001

#define _FCLCON4_CLSRC1_POSITION                 0x0000000B
#define _FCLCON4_CLSRC1_MASK                     0x00000800
#define _FCLCON4_CLSRC1_LENGTH                   0x00000001

#define _FCLCON4_CLSRC2_POSITION                 0x0000000C
#define _FCLCON4_CLSRC2_MASK                     0x00001000
#define _FCLCON4_CLSRC2_LENGTH                   0x00000001

#define _FCLCON4_CLSRC3_POSITION                 0x0000000D
#define _FCLCON4_CLSRC3_MASK                     0x00002000
#define _FCLCON4_CLSRC3_LENGTH                   0x00000001

#define _FCLCON4_CLSRC4_POSITION                 0x0000000E
#define _FCLCON4_CLSRC4_MASK                     0x00004000
#define _FCLCON4_CLSRC4_LENGTH                   0x00000001

#define _TRIG4_TRGCMP_POSITION                   0x00000003
#define _TRIG4_TRGCMP_MASK                       0x0000FFF8
#define _TRIG4_TRGCMP_LENGTH                     0x0000000D

#define _TRIG4_TRGCMP0_POSITION                  0x00000003
#define _TRIG4_TRGCMP0_MASK                      0x00000008
#define _TRIG4_TRGCMP0_LENGTH                    0x00000001

#define _TRIG4_TRGCMP1_POSITION                  0x00000004
#define _TRIG4_TRGCMP1_MASK                      0x00000010
#define _TRIG4_TRGCMP1_LENGTH                    0x00000001

#define _TRIG4_TRGCMP2_POSITION                  0x00000005
#define _TRIG4_TRGCMP2_MASK                      0x00000020
#define _TRIG4_TRGCMP2_LENGTH                    0x00000001

#define _TRIG4_TRGCMP3_POSITION                  0x00000006
#define _TRIG4_TRGCMP3_MASK                      0x00000040
#define _TRIG4_TRGCMP3_LENGTH                    0x00000001

#define _TRIG4_TRGCMP4_POSITION                  0x00000007
#define _TRIG4_TRGCMP4_MASK                      0x00000080
#define _TRIG4_TRGCMP4_LENGTH                    0x00000001

#define _TRIG4_TRGCMP5_POSITION                  0x00000008
#define _TRIG4_TRGCMP5_MASK                      0x00000100
#define _TRIG4_TRGCMP5_LENGTH                    0x00000001

#define _TRIG4_TRGCMP6_POSITION                  0x00000009
#define _TRIG4_TRGCMP6_MASK                      0x00000200
#define _TRIG4_TRGCMP6_LENGTH                    0x00000001

#define _TRIG4_TRGCMP7_POSITION                  0x0000000A
#define _TRIG4_TRGCMP7_MASK                      0x00000400
#define _TRIG4_TRGCMP7_LENGTH                    0x00000001

#define _TRIG4_TRGCMP8_POSITION                  0x0000000B
#define _TRIG4_TRGCMP8_MASK                      0x00000800
#define _TRIG4_TRGCMP8_LENGTH                    0x00000001

#define _TRIG4_TRGCMP9_POSITION                  0x0000000C
#define _TRIG4_TRGCMP9_MASK                      0x00001000
#define _TRIG4_TRGCMP9_LENGTH                    0x00000001

#define _TRIG4_TRGCMP10_POSITION                 0x0000000D
#define _TRIG4_TRGCMP10_MASK                     0x00002000
#define _TRIG4_TRGCMP10_LENGTH                   0x00000001

#define _TRIG4_TRGCMP11_POSITION                 0x0000000E
#define _TRIG4_TRGCMP11_MASK                     0x00004000
#define _TRIG4_TRGCMP11_LENGTH                   0x00000001

#define _TRIG4_TRGCMP12_POSITION                 0x0000000F
#define _TRIG4_TRGCMP12_MASK                     0x00008000
#define _TRIG4_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON4_TRGSTRT_POSITION                0x00000000
#define _TRGCON4_TRGSTRT_MASK                    0x0000003F
#define _TRGCON4_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON4_DTM_POSITION                    0x00000007
#define _TRGCON4_DTM_MASK                        0x00000080
#define _TRGCON4_DTM_LENGTH                      0x00000001

#define _TRGCON4_TRGDIV_POSITION                 0x0000000C
#define _TRGCON4_TRGDIV_MASK                     0x0000F000
#define _TRGCON4_TRGDIV_LENGTH                   0x00000004

#define _TRGCON4_TRGSTRT0_POSITION               0x00000000
#define _TRGCON4_TRGSTRT0_MASK                   0x00000001
#define _TRGCON4_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT1_POSITION               0x00000001
#define _TRGCON4_TRGSTRT1_MASK                   0x00000002
#define _TRGCON4_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT2_POSITION               0x00000002
#define _TRGCON4_TRGSTRT2_MASK                   0x00000004
#define _TRGCON4_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT3_POSITION               0x00000003
#define _TRGCON4_TRGSTRT3_MASK                   0x00000008
#define _TRGCON4_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT4_POSITION               0x00000004
#define _TRGCON4_TRGSTRT4_MASK                   0x00000010
#define _TRGCON4_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT5_POSITION               0x00000005
#define _TRGCON4_TRGSTRT5_MASK                   0x00000020
#define _TRGCON4_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON4_TRGDIV0_POSITION                0x0000000C
#define _TRGCON4_TRGDIV0_MASK                    0x00001000
#define _TRGCON4_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV1_POSITION                0x0000000D
#define _TRGCON4_TRGDIV1_MASK                    0x00002000
#define _TRGCON4_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV2_POSITION                0x0000000E
#define _TRGCON4_TRGDIV2_MASK                    0x00004000
#define _TRGCON4_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV3_POSITION                0x0000000F
#define _TRGCON4_TRGDIV3_MASK                    0x00008000
#define _TRGCON4_TRGDIV3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP0_POSITION                0x00000003
#define _STRIG4_STRGCMP0_MASK                    0x00000008
#define _STRIG4_STRGCMP0_LENGTH                  0x00000001

#define _STRIG4_STRGCMP1_POSITION                0x00000004
#define _STRIG4_STRGCMP1_MASK                    0x00000010
#define _STRIG4_STRGCMP1_LENGTH                  0x00000001

#define _STRIG4_STRGCMP2_POSITION                0x00000005
#define _STRIG4_STRGCMP2_MASK                    0x00000020
#define _STRIG4_STRGCMP2_LENGTH                  0x00000001

#define _STRIG4_STRGCMP3_POSITION                0x00000006
#define _STRIG4_STRGCMP3_MASK                    0x00000040
#define _STRIG4_STRGCMP3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP4_POSITION                0x00000007
#define _STRIG4_STRGCMP4_MASK                    0x00000080
#define _STRIG4_STRGCMP4_LENGTH                  0x00000001

#define _STRIG4_STRGCMP5_POSITION                0x00000008
#define _STRIG4_STRGCMP5_MASK                    0x00000100
#define _STRIG4_STRGCMP5_LENGTH                  0x00000001

#define _STRIG4_STRGCMP6_POSITION                0x00000009
#define _STRIG4_STRGCMP6_MASK                    0x00000200
#define _STRIG4_STRGCMP6_LENGTH                  0x00000001

#define _STRIG4_STRGCMP7_POSITION                0x0000000A
#define _STRIG4_STRGCMP7_MASK                    0x00000400
#define _STRIG4_STRGCMP7_LENGTH                  0x00000001

#define _STRIG4_STRGCMP8_POSITION                0x0000000B
#define _STRIG4_STRGCMP8_MASK                    0x00000800
#define _STRIG4_STRGCMP8_LENGTH                  0x00000001

#define _STRIG4_STRGCMP9_POSITION                0x0000000C
#define _STRIG4_STRGCMP9_MASK                    0x00001000
#define _STRIG4_STRGCMP9_LENGTH                  0x00000001

#define _STRIG4_STRGCMP10_POSITION               0x0000000D
#define _STRIG4_STRGCMP10_MASK                   0x00002000
#define _STRIG4_STRGCMP10_LENGTH                 0x00000001

#define _STRIG4_STRGCMP11_POSITION               0x0000000E
#define _STRIG4_STRGCMP11_MASK                   0x00004000
#define _STRIG4_STRGCMP11_LENGTH                 0x00000001

#define _STRIG4_STRGCMP12_POSITION               0x0000000F
#define _STRIG4_STRGCMP12_MASK                   0x00008000
#define _STRIG4_STRGCMP12_LENGTH                 0x00000001

#define _LEBCON4_LEB_POSITION                    0x00000003
#define _LEBCON4_LEB_MASK                        0x000003F8
#define _LEBCON4_LEB_LENGTH                      0x00000007

#define _LEBCON4_CLLEBEN_POSITION                0x0000000A
#define _LEBCON4_CLLEBEN_MASK                    0x00000400
#define _LEBCON4_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON4_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON4_FLTLEBEN_MASK                   0x00000800
#define _LEBCON4_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON4_PLF_POSITION                    0x0000000C
#define _LEBCON4_PLF_MASK                        0x00001000
#define _LEBCON4_PLF_LENGTH                      0x00000001

#define _LEBCON4_PLR_POSITION                    0x0000000D
#define _LEBCON4_PLR_MASK                        0x00002000
#define _LEBCON4_PLR_LENGTH                      0x00000001

#define _LEBCON4_PHF_POSITION                    0x0000000E
#define _LEBCON4_PHF_MASK                        0x00004000
#define _LEBCON4_PHF_LENGTH                      0x00000001

#define _LEBCON4_PHR_POSITION                    0x0000000F
#define _LEBCON4_PHR_MASK                        0x00008000
#define _LEBCON4_PHR_LENGTH                      0x00000001

#define _LEBCON4_LEB0_POSITION                   0x00000003
#define _LEBCON4_LEB0_MASK                       0x00000008
#define _LEBCON4_LEB0_LENGTH                     0x00000001

#define _LEBCON4_LEB1_POSITION                   0x00000004
#define _LEBCON4_LEB1_MASK                       0x00000010
#define _LEBCON4_LEB1_LENGTH                     0x00000001

#define _LEBCON4_LEB2_POSITION                   0x00000005
#define _LEBCON4_LEB2_MASK                       0x00000020
#define _LEBCON4_LEB2_LENGTH                     0x00000001

#define _LEBCON4_LEB3_POSITION                   0x00000006
#define _LEBCON4_LEB3_MASK                       0x00000040
#define _LEBCON4_LEB3_LENGTH                     0x00000001

#define _LEBCON4_LEB4_POSITION                   0x00000007
#define _LEBCON4_LEB4_MASK                       0x00000080
#define _LEBCON4_LEB4_LENGTH                     0x00000001

#define _LEBCON4_LEB5_POSITION                   0x00000008
#define _LEBCON4_LEB5_MASK                       0x00000100
#define _LEBCON4_LEB5_LENGTH                     0x00000001

#define _LEBCON4_LEB6_POSITION                   0x00000009
#define _LEBCON4_LEB6_MASK                       0x00000200
#define _LEBCON4_LEB6_LENGTH                     0x00000001

#define _AUXCON4_CHOPLEN_POSITION                0x00000000
#define _AUXCON4_CHOPLEN_MASK                    0x00000001
#define _AUXCON4_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPHEN_POSITION                0x00000001
#define _AUXCON4_CHOPHEN_MASK                    0x00000002
#define _AUXCON4_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPSEL_POSITION                0x00000002
#define _AUXCON4_CHOPSEL_MASK                    0x0000003C
#define _AUXCON4_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON4_HRDDIS_POSITION                 0x0000000E
#define _AUXCON4_HRDDIS_MASK                     0x00004000
#define _AUXCON4_HRDDIS_LENGTH                   0x00000001

#define _AUXCON4_HRPDIS_POSITION                 0x0000000F
#define _AUXCON4_HRPDIS_MASK                     0x00008000
#define _AUXCON4_HRPDIS_LENGTH                   0x00000001

#define _CMPCON1_RANGE_POSITION                  0x00000000
#define _CMPCON1_RANGE_MASK                      0x00000001
#define _CMPCON1_RANGE_LENGTH                    0x00000001

#define _CMPCON1_CMPPOL_POSITION                 0x00000001
#define _CMPCON1_CMPPOL_MASK                     0x00000002
#define _CMPCON1_CMPPOL_LENGTH                   0x00000001

#define _CMPCON1_HGAIN_POSITION                  0x00000002
#define _CMPCON1_HGAIN_MASK                      0x00000004
#define _CMPCON1_HGAIN_LENGTH                    0x00000001

#define _CMPCON1_CMPSTAT_POSITION                0x00000003
#define _CMPCON1_CMPSTAT_MASK                    0x00000008
#define _CMPCON1_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON1_HYSPOL_POSITION                 0x00000004
#define _CMPCON1_HYSPOL_MASK                     0x00000010
#define _CMPCON1_HYSPOL_LENGTH                   0x00000001

#define _CMPCON1_EXTREF_POSITION                 0x00000005
#define _CMPCON1_EXTREF_MASK                     0x00000020
#define _CMPCON1_EXTREF_LENGTH                   0x00000001

#define _CMPCON1_INSEL_POSITION                  0x00000006
#define _CMPCON1_INSEL_MASK                      0x000000C0
#define _CMPCON1_INSEL_LENGTH                    0x00000002

#define _CMPCON1_DACOE_POSITION                  0x00000008
#define _CMPCON1_DACOE_MASK                      0x00000100
#define _CMPCON1_DACOE_LENGTH                    0x00000001

#define _CMPCON1_FCLKSEL_POSITION                0x00000009
#define _CMPCON1_FCLKSEL_MASK                    0x00000200
#define _CMPCON1_FCLKSEL_LENGTH                  0x00000001

#define _CMPCON1_FLTREN_POSITION                 0x0000000A
#define _CMPCON1_FLTREN_MASK                     0x00000400
#define _CMPCON1_FLTREN_LENGTH                   0x00000001

#define _CMPCON1_HYSSEL_POSITION                 0x0000000B
#define _CMPCON1_HYSSEL_MASK                     0x00001800
#define _CMPCON1_HYSSEL_LENGTH                   0x00000002

#define _CMPCON1_CMPSIDL_POSITION                0x0000000D
#define _CMPCON1_CMPSIDL_MASK                    0x00002000
#define _CMPCON1_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON1_CMPON_POSITION                  0x0000000F
#define _CMPCON1_CMPON_MASK                      0x00008000
#define _CMPCON1_CMPON_LENGTH                    0x00000001

#define _CMPDAC1_CMREF_POSITION                  0x00000000
#define _CMPDAC1_CMREF_MASK                      0x000003FF
#define _CMPDAC1_CMREF_LENGTH                    0x0000000A

#define _CMPCON2_RANGE_POSITION                  0x00000000
#define _CMPCON2_RANGE_MASK                      0x00000001
#define _CMPCON2_RANGE_LENGTH                    0x00000001

#define _CMPCON2_CMPPOL_POSITION                 0x00000001
#define _CMPCON2_CMPPOL_MASK                     0x00000002
#define _CMPCON2_CMPPOL_LENGTH                   0x00000001

#define _CMPCON2_HGAIN_POSITION                  0x00000002
#define _CMPCON2_HGAIN_MASK                      0x00000004
#define _CMPCON2_HGAIN_LENGTH                    0x00000001

#define _CMPCON2_CMPSTAT_POSITION                0x00000003
#define _CMPCON2_CMPSTAT_MASK                    0x00000008
#define _CMPCON2_CMPSTAT_LENGTH                  0x00000001

#define _CMPCON2_HYSPOL_POSITION                 0x00000004
#define _CMPCON2_HYSPOL_MASK                     0x00000010
#define _CMPCON2_HYSPOL_LENGTH                   0x00000001

#define _CMPCON2_EXTREF_POSITION                 0x00000005
#define _CMPCON2_EXTREF_MASK                     0x00000020
#define _CMPCON2_EXTREF_LENGTH                   0x00000001

#define _CMPCON2_INSEL_POSITION                  0x00000006
#define _CMPCON2_INSEL_MASK                      0x000000C0
#define _CMPCON2_INSEL_LENGTH                    0x00000002

#define _CMPCON2_DACOE_POSITION                  0x00000008
#define _CMPCON2_DACOE_MASK                      0x00000100
#define _CMPCON2_DACOE_LENGTH                    0x00000001

#define _CMPCON2_FCLKSEL_POSITION                0x00000009
#define _CMPCON2_FCLKSEL_MASK                    0x00000200
#define _CMPCON2_FCLKSEL_LENGTH                  0x00000001

#define _CMPCON2_FLTREN_POSITION                 0x0000000A
#define _CMPCON2_FLTREN_MASK                     0x00000400
#define _CMPCON2_FLTREN_LENGTH                   0x00000001

#define _CMPCON2_HYSSEL_POSITION                 0x0000000B
#define _CMPCON2_HYSSEL_MASK                     0x00001800
#define _CMPCON2_HYSSEL_LENGTH                   0x00000002

#define _CMPCON2_CMPSIDL_POSITION                0x0000000D
#define _CMPCON2_CMPSIDL_MASK                    0x00002000
#define _CMPCON2_CMPSIDL_LENGTH                  0x00000001

#define _CMPCON2_CMPON_POSITION                  0x0000000F
#define _CMPCON2_CMPON_MASK                      0x00008000
#define _CMPCON2_CMPON_LENGTH                    0x00000001

#define _CMPDAC2_CMREF_POSITION                  0x00000000
#define _CMPDAC2_CMREF_MASK                      0x000003FF
#define _CMPDAC2_CMREF_LENGTH                    0x0000000A

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x00003F00
#define _RPINR0_INT1R_LENGTH                     0x00000006

#define _RPINR0_INT1R0_POSITION                  0x00000008
#define _RPINR0_INT1R0_MASK                      0x00000100
#define _RPINR0_INT1R0_LENGTH                    0x00000001

#define _RPINR0_INT1R1_POSITION                  0x00000009
#define _RPINR0_INT1R1_MASK                      0x00000200
#define _RPINR0_INT1R1_LENGTH                    0x00000001

#define _RPINR0_INT1R2_POSITION                  0x0000000A
#define _RPINR0_INT1R2_MASK                      0x00000400
#define _RPINR0_INT1R2_LENGTH                    0x00000001

#define _RPINR0_INT1R3_POSITION                  0x0000000B
#define _RPINR0_INT1R3_MASK                      0x00000800
#define _RPINR0_INT1R3_LENGTH                    0x00000001

#define _RPINR0_INT1R4_POSITION                  0x0000000C
#define _RPINR0_INT1R4_MASK                      0x00001000
#define _RPINR0_INT1R4_LENGTH                    0x00000001

#define _RPINR0_INT1R5_POSITION                  0x0000000D
#define _RPINR0_INT1R5_MASK                      0x00002000
#define _RPINR0_INT1R5_LENGTH                    0x00000001

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x0000003F
#define _RPINR1_INT2R_LENGTH                     0x00000006

#define _RPINR1_INT2R0_POSITION                  0x00000000
#define _RPINR1_INT2R0_MASK                      0x00000001
#define _RPINR1_INT2R0_LENGTH                    0x00000001

#define _RPINR1_INT2R1_POSITION                  0x00000001
#define _RPINR1_INT2R1_MASK                      0x00000002
#define _RPINR1_INT2R1_LENGTH                    0x00000001

#define _RPINR1_INT2R2_POSITION                  0x00000002
#define _RPINR1_INT2R2_MASK                      0x00000004
#define _RPINR1_INT2R2_LENGTH                    0x00000001

#define _RPINR1_INT2R3_POSITION                  0x00000003
#define _RPINR1_INT2R3_MASK                      0x00000008
#define _RPINR1_INT2R3_LENGTH                    0x00000001

#define _RPINR1_INT2R4_POSITION                  0x00000004
#define _RPINR1_INT2R4_MASK                      0x00000010
#define _RPINR1_INT2R4_LENGTH                    0x00000001

#define _RPINR1_INT2R5_POSITION                  0x00000005
#define _RPINR1_INT2R5_MASK                      0x00000020
#define _RPINR1_INT2R5_LENGTH                    0x00000001

#define _RPINR2_T1CKR_POSITION                   0x00000008
#define _RPINR2_T1CKR_MASK                       0x00003F00
#define _RPINR2_T1CKR_LENGTH                     0x00000006

#define _RPINR2_T1CKR0_POSITION                  0x00000008
#define _RPINR2_T1CKR0_MASK                      0x00000100
#define _RPINR2_T1CKR0_LENGTH                    0x00000001

#define _RPINR2_T1CKR1_POSITION                  0x00000009
#define _RPINR2_T1CKR1_MASK                      0x00000200
#define _RPINR2_T1CKR1_LENGTH                    0x00000001

#define _RPINR2_T1CKR2_POSITION                  0x0000000A
#define _RPINR2_T1CKR2_MASK                      0x00000400
#define _RPINR2_T1CKR2_LENGTH                    0x00000001

#define _RPINR2_T1CKR3_POSITION                  0x0000000B
#define _RPINR2_T1CKR3_MASK                      0x00000800
#define _RPINR2_T1CKR3_LENGTH                    0x00000001

#define _RPINR2_T1CKR4_POSITION                  0x0000000C
#define _RPINR2_T1CKR4_MASK                      0x00001000
#define _RPINR2_T1CKR4_LENGTH                    0x00000001

#define _RPINR2_T1CKR5_POSITION                  0x0000000D
#define _RPINR2_T1CKR5_MASK                      0x00002000
#define _RPINR2_T1CKR5_LENGTH                    0x00000001

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x0000003F
#define _RPINR3_T2CKR_LENGTH                     0x00000006

#define _RPINR3_T2CKR0_POSITION                  0x00000000
#define _RPINR3_T2CKR0_MASK                      0x00000001
#define _RPINR3_T2CKR0_LENGTH                    0x00000001

#define _RPINR3_T2CKR1_POSITION                  0x00000001
#define _RPINR3_T2CKR1_MASK                      0x00000002
#define _RPINR3_T2CKR1_LENGTH                    0x00000001

#define _RPINR3_T2CKR2_POSITION                  0x00000002
#define _RPINR3_T2CKR2_MASK                      0x00000004
#define _RPINR3_T2CKR2_LENGTH                    0x00000001

#define _RPINR3_T2CKR3_POSITION                  0x00000003
#define _RPINR3_T2CKR3_MASK                      0x00000008
#define _RPINR3_T2CKR3_LENGTH                    0x00000001

#define _RPINR3_T2CKR4_POSITION                  0x00000004
#define _RPINR3_T2CKR4_MASK                      0x00000010
#define _RPINR3_T2CKR4_LENGTH                    0x00000001

#define _RPINR3_T2CKR5_POSITION                  0x00000005
#define _RPINR3_T2CKR5_MASK                      0x00000020
#define _RPINR3_T2CKR5_LENGTH                    0x00000001

#define _RPINR29_FLT1R_POSITION                  0x00000008
#define _RPINR29_FLT1R_MASK                      0x00003F00
#define _RPINR29_FLT1R_LENGTH                    0x00000006

#define _RPINR29_FLT1R0_POSITION                 0x00000008
#define _RPINR29_FLT1R0_MASK                     0x00000100
#define _RPINR29_FLT1R0_LENGTH                   0x00000001

#define _RPINR29_FLT1R1_POSITION                 0x00000009
#define _RPINR29_FLT1R1_MASK                     0x00000200
#define _RPINR29_FLT1R1_LENGTH                   0x00000001

#define _RPINR29_FLT1R2_POSITION                 0x0000000A
#define _RPINR29_FLT1R2_MASK                     0x00000400
#define _RPINR29_FLT1R2_LENGTH                   0x00000001

#define _RPINR29_FLT1R3_POSITION                 0x0000000B
#define _RPINR29_FLT1R3_MASK                     0x00000800
#define _RPINR29_FLT1R3_LENGTH                   0x00000001

#define _RPINR29_FLT1R4_POSITION                 0x0000000C
#define _RPINR29_FLT1R4_MASK                     0x00001000
#define _RPINR29_FLT1R4_LENGTH                   0x00000001

#define _RPINR29_FLT1R5_POSITION                 0x0000000D
#define _RPINR29_FLT1R5_MASK                     0x00002000
#define _RPINR29_FLT1R5_LENGTH                   0x00000001

#define _RPINR30_FLT2R_POSITION                  0x00000000
#define _RPINR30_FLT2R_MASK                      0x0000003F
#define _RPINR30_FLT2R_LENGTH                    0x00000006

#define _RPINR30_FLT3R_POSITION                  0x00000008
#define _RPINR30_FLT3R_MASK                      0x00003F00
#define _RPINR30_FLT3R_LENGTH                    0x00000006

#define _RPINR30_FLT2R0_POSITION                 0x00000000
#define _RPINR30_FLT2R0_MASK                     0x00000001
#define _RPINR30_FLT2R0_LENGTH                   0x00000001

#define _RPINR30_FLT2R1_POSITION                 0x00000001
#define _RPINR30_FLT2R1_MASK                     0x00000002
#define _RPINR30_FLT2R1_LENGTH                   0x00000001

#define _RPINR30_FLT2R2_POSITION                 0x00000002
#define _RPINR30_FLT2R2_MASK                     0x00000004
#define _RPINR30_FLT2R2_LENGTH                   0x00000001

#define _RPINR30_FLT2R3_POSITION                 0x00000003
#define _RPINR30_FLT2R3_MASK                     0x00000008
#define _RPINR30_FLT2R3_LENGTH                   0x00000001

#define _RPINR30_FLT2R4_POSITION                 0x00000004
#define _RPINR30_FLT2R4_MASK                     0x00000010
#define _RPINR30_FLT2R4_LENGTH                   0x00000001

#define _RPINR30_FLT2R5_POSITION                 0x00000005
#define _RPINR30_FLT2R5_MASK                     0x00000020
#define _RPINR30_FLT2R5_LENGTH                   0x00000001

#define _RPINR30_FLT3R0_POSITION                 0x00000008
#define _RPINR30_FLT3R0_MASK                     0x00000100
#define _RPINR30_FLT3R0_LENGTH                   0x00000001

#define _RPINR30_FLT3R1_POSITION                 0x00000009
#define _RPINR30_FLT3R1_MASK                     0x00000200
#define _RPINR30_FLT3R1_LENGTH                   0x00000001

#define _RPINR30_FLT3R2_POSITION                 0x0000000A
#define _RPINR30_FLT3R2_MASK                     0x00000400
#define _RPINR30_FLT3R2_LENGTH                   0x00000001

#define _RPINR30_FLT3R3_POSITION                 0x0000000B
#define _RPINR30_FLT3R3_MASK                     0x00000800
#define _RPINR30_FLT3R3_LENGTH                   0x00000001

#define _RPINR30_FLT3R4_POSITION                 0x0000000C
#define _RPINR30_FLT3R4_MASK                     0x00001000
#define _RPINR30_FLT3R4_LENGTH                   0x00000001

#define _RPINR30_FLT3R5_POSITION                 0x0000000D
#define _RPINR30_FLT3R5_MASK                     0x00002000
#define _RPINR30_FLT3R5_LENGTH                   0x00000001

#define _RPINR31_FLT4R_POSITION                  0x00000000
#define _RPINR31_FLT4R_MASK                      0x0000003F
#define _RPINR31_FLT4R_LENGTH                    0x00000006

#define _RPINR31_FLT5R_POSITION                  0x00000008
#define _RPINR31_FLT5R_MASK                      0x00003F00
#define _RPINR31_FLT5R_LENGTH                    0x00000006

#define _RPINR31_FLT4R0_POSITION                 0x00000000
#define _RPINR31_FLT4R0_MASK                     0x00000001
#define _RPINR31_FLT4R0_LENGTH                   0x00000001

#define _RPINR31_FLT4R1_POSITION                 0x00000001
#define _RPINR31_FLT4R1_MASK                     0x00000002
#define _RPINR31_FLT4R1_LENGTH                   0x00000001

#define _RPINR31_FLT4R2_POSITION                 0x00000002
#define _RPINR31_FLT4R2_MASK                     0x00000004
#define _RPINR31_FLT4R2_LENGTH                   0x00000001

#define _RPINR31_FLT4R3_POSITION                 0x00000003
#define _RPINR31_FLT4R3_MASK                     0x00000008
#define _RPINR31_FLT4R3_LENGTH                   0x00000001

#define _RPINR31_FLT4R4_POSITION                 0x00000004
#define _RPINR31_FLT4R4_MASK                     0x00000010
#define _RPINR31_FLT4R4_LENGTH                   0x00000001

#define _RPINR31_FLT4R5_POSITION                 0x00000005
#define _RPINR31_FLT4R5_MASK                     0x00000020
#define _RPINR31_FLT4R5_LENGTH                   0x00000001

#define _RPINR31_FLT5R0_POSITION                 0x00000008
#define _RPINR31_FLT5R0_MASK                     0x00000100
#define _RPINR31_FLT5R0_LENGTH                   0x00000001

#define _RPINR31_FLT5R1_POSITION                 0x00000009
#define _RPINR31_FLT5R1_MASK                     0x00000200
#define _RPINR31_FLT5R1_LENGTH                   0x00000001

#define _RPINR31_FLT5R2_POSITION                 0x0000000A
#define _RPINR31_FLT5R2_MASK                     0x00000400
#define _RPINR31_FLT5R2_LENGTH                   0x00000001

#define _RPINR31_FLT5R3_POSITION                 0x0000000B
#define _RPINR31_FLT5R3_MASK                     0x00000800
#define _RPINR31_FLT5R3_LENGTH                   0x00000001

#define _RPINR31_FLT5R4_POSITION                 0x0000000C
#define _RPINR31_FLT5R4_MASK                     0x00001000
#define _RPINR31_FLT5R4_LENGTH                   0x00000001

#define _RPINR31_FLT5R5_POSITION                 0x0000000D
#define _RPINR31_FLT5R5_MASK                     0x00002000
#define _RPINR31_FLT5R5_LENGTH                   0x00000001

#define _RPINR32_FLT6R_POSITION                  0x00000000
#define _RPINR32_FLT6R_MASK                      0x0000003F
#define _RPINR32_FLT6R_LENGTH                    0x00000006

#define _RPINR32_FLT7R_POSITION                  0x00000008
#define _RPINR32_FLT7R_MASK                      0x00003F00
#define _RPINR32_FLT7R_LENGTH                    0x00000006

#define _RPINR32_FLT6R0_POSITION                 0x00000000
#define _RPINR32_FLT6R0_MASK                     0x00000001
#define _RPINR32_FLT6R0_LENGTH                   0x00000001

#define _RPINR32_FLT6R1_POSITION                 0x00000001
#define _RPINR32_FLT6R1_MASK                     0x00000002
#define _RPINR32_FLT6R1_LENGTH                   0x00000001

#define _RPINR32_FLT6R2_POSITION                 0x00000002
#define _RPINR32_FLT6R2_MASK                     0x00000004
#define _RPINR32_FLT6R2_LENGTH                   0x00000001

#define _RPINR32_FLT6R3_POSITION                 0x00000003
#define _RPINR32_FLT6R3_MASK                     0x00000008
#define _RPINR32_FLT6R3_LENGTH                   0x00000001

#define _RPINR32_FLT6R4_POSITION                 0x00000004
#define _RPINR32_FLT6R4_MASK                     0x00000010
#define _RPINR32_FLT6R4_LENGTH                   0x00000001

#define _RPINR32_FLT6R5_POSITION                 0x00000005
#define _RPINR32_FLT6R5_MASK                     0x00000020
#define _RPINR32_FLT6R5_LENGTH                   0x00000001

#define _RPINR32_FLT7R0_POSITION                 0x00000008
#define _RPINR32_FLT7R0_MASK                     0x00000100
#define _RPINR32_FLT7R0_LENGTH                   0x00000001

#define _RPINR32_FLT7R1_POSITION                 0x00000009
#define _RPINR32_FLT7R1_MASK                     0x00000200
#define _RPINR32_FLT7R1_LENGTH                   0x00000001

#define _RPINR32_FLT7R2_POSITION                 0x0000000A
#define _RPINR32_FLT7R2_MASK                     0x00000400
#define _RPINR32_FLT7R2_LENGTH                   0x00000001

#define _RPINR32_FLT7R3_POSITION                 0x0000000B
#define _RPINR32_FLT7R3_MASK                     0x00000800
#define _RPINR32_FLT7R3_LENGTH                   0x00000001

#define _RPINR32_FLT7R4_POSITION                 0x0000000C
#define _RPINR32_FLT7R4_MASK                     0x00001000
#define _RPINR32_FLT7R4_LENGTH                   0x00000001

#define _RPINR32_FLT7R5_POSITION                 0x0000000D
#define _RPINR32_FLT7R5_MASK                     0x00002000
#define _RPINR32_FLT7R5_LENGTH                   0x00000001

#define _RPINR33_FLT8R_POSITION                  0x00000000
#define _RPINR33_FLT8R_MASK                      0x0000003F
#define _RPINR33_FLT8R_LENGTH                    0x00000006

#define _RPINR33_SYNCI1R_POSITION                0x00000008
#define _RPINR33_SYNCI1R_MASK                    0x00003F00
#define _RPINR33_SYNCI1R_LENGTH                  0x00000006

#define _RPINR33_FLT8R0_POSITION                 0x00000000
#define _RPINR33_FLT8R0_MASK                     0x00000001
#define _RPINR33_FLT8R0_LENGTH                   0x00000001

#define _RPINR33_FLT8R1_POSITION                 0x00000001
#define _RPINR33_FLT8R1_MASK                     0x00000002
#define _RPINR33_FLT8R1_LENGTH                   0x00000001

#define _RPINR33_FLT8R2_POSITION                 0x00000002
#define _RPINR33_FLT8R2_MASK                     0x00000004
#define _RPINR33_FLT8R2_LENGTH                   0x00000001

#define _RPINR33_FLT8R3_POSITION                 0x00000003
#define _RPINR33_FLT8R3_MASK                     0x00000008
#define _RPINR33_FLT8R3_LENGTH                   0x00000001

#define _RPINR33_FLT8R4_POSITION                 0x00000004
#define _RPINR33_FLT8R4_MASK                     0x00000010
#define _RPINR33_FLT8R4_LENGTH                   0x00000001

#define _RPINR33_FLT8R5_POSITION                 0x00000005
#define _RPINR33_FLT8R5_MASK                     0x00000020
#define _RPINR33_FLT8R5_LENGTH                   0x00000001

#define _RPINR33_SYNCI1R0_POSITION               0x00000008
#define _RPINR33_SYNCI1R0_MASK                   0x00000100
#define _RPINR33_SYNCI1R0_LENGTH                 0x00000001

#define _RPINR33_SYNCI1R1_POSITION               0x00000009
#define _RPINR33_SYNCI1R1_MASK                   0x00000200
#define _RPINR33_SYNCI1R1_LENGTH                 0x00000001

#define _RPINR33_SYNCI1R2_POSITION               0x0000000A
#define _RPINR33_SYNCI1R2_MASK                   0x00000400
#define _RPINR33_SYNCI1R2_LENGTH                 0x00000001

#define _RPINR33_SYNCI1R3_POSITION               0x0000000B
#define _RPINR33_SYNCI1R3_MASK                   0x00000800
#define _RPINR33_SYNCI1R3_LENGTH                 0x00000001

#define _RPINR33_SYNCI1R4_POSITION               0x0000000C
#define _RPINR33_SYNCI1R4_MASK                   0x00001000
#define _RPINR33_SYNCI1R4_LENGTH                 0x00000001

#define _RPINR33_SYNCI1R5_POSITION               0x0000000D
#define _RPINR33_SYNCI1R5_MASK                   0x00002000
#define _RPINR33_SYNCI1R5_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R_POSITION                0x00000000
#define _RPINR34_SYNCI2R_MASK                    0x0000003F
#define _RPINR34_SYNCI2R_LENGTH                  0x00000006

#define _RPINR34_SYNCI2R0_POSITION               0x00000000
#define _RPINR34_SYNCI2R0_MASK                   0x00000001
#define _RPINR34_SYNCI2R0_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R1_POSITION               0x00000001
#define _RPINR34_SYNCI2R1_MASK                   0x00000002
#define _RPINR34_SYNCI2R1_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R2_POSITION               0x00000002
#define _RPINR34_SYNCI2R2_MASK                   0x00000004
#define _RPINR34_SYNCI2R2_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R3_POSITION               0x00000003
#define _RPINR34_SYNCI2R3_MASK                   0x00000008
#define _RPINR34_SYNCI2R3_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R4_POSITION               0x00000004
#define _RPINR34_SYNCI2R4_MASK                   0x00000010
#define _RPINR34_SYNCI2R4_LENGTH                 0x00000001

#define _RPINR34_SYNCI2R5_POSITION               0x00000005
#define _RPINR34_SYNCI2R5_MASK                   0x00000020
#define _RPINR34_SYNCI2R5_LENGTH                 0x00000001

#define _RPOR0_RP0R_POSITION                     0x00000000
#define _RPOR0_RP0R_MASK                         0x0000003F
#define _RPOR0_RP0R_LENGTH                       0x00000006

#define _RPOR0_RP1R_POSITION                     0x00000008
#define _RPOR0_RP1R_MASK                         0x00003F00
#define _RPOR0_RP1R_LENGTH                       0x00000006

#define _RPOR0_RP0R0_POSITION                    0x00000000
#define _RPOR0_RP0R0_MASK                        0x00000001
#define _RPOR0_RP0R0_LENGTH                      0x00000001

#define _RPOR0_RP0R1_POSITION                    0x00000001
#define _RPOR0_RP0R1_MASK                        0x00000002
#define _RPOR0_RP0R1_LENGTH                      0x00000001

#define _RPOR0_RP0R2_POSITION                    0x00000002
#define _RPOR0_RP0R2_MASK                        0x00000004
#define _RPOR0_RP0R2_LENGTH                      0x00000001

#define _RPOR0_RP0R3_POSITION                    0x00000003
#define _RPOR0_RP0R3_MASK                        0x00000008
#define _RPOR0_RP0R3_LENGTH                      0x00000001

#define _RPOR0_RP0R4_POSITION                    0x00000004
#define _RPOR0_RP0R4_MASK                        0x00000010
#define _RPOR0_RP0R4_LENGTH                      0x00000001

#define _RPOR0_RP0R5_POSITION                    0x00000005
#define _RPOR0_RP0R5_MASK                        0x00000020
#define _RPOR0_RP0R5_LENGTH                      0x00000001

#define _RPOR0_RP1R0_POSITION                    0x00000008
#define _RPOR0_RP1R0_MASK                        0x00000100
#define _RPOR0_RP1R0_LENGTH                      0x00000001

#define _RPOR0_RP1R1_POSITION                    0x00000009
#define _RPOR0_RP1R1_MASK                        0x00000200
#define _RPOR0_RP1R1_LENGTH                      0x00000001

#define _RPOR0_RP1R2_POSITION                    0x0000000A
#define _RPOR0_RP1R2_MASK                        0x00000400
#define _RPOR0_RP1R2_LENGTH                      0x00000001

#define _RPOR0_RP1R3_POSITION                    0x0000000B
#define _RPOR0_RP1R3_MASK                        0x00000800
#define _RPOR0_RP1R3_LENGTH                      0x00000001

#define _RPOR0_RP1R4_POSITION                    0x0000000C
#define _RPOR0_RP1R4_MASK                        0x00001000
#define _RPOR0_RP1R4_LENGTH                      0x00000001

#define _RPOR0_RP1R5_POSITION                    0x0000000D
#define _RPOR0_RP1R5_MASK                        0x00002000
#define _RPOR0_RP1R5_LENGTH                      0x00000001

#define _RPOR1_RP2R_POSITION                     0x00000000
#define _RPOR1_RP2R_MASK                         0x0000003F
#define _RPOR1_RP2R_LENGTH                       0x00000006

#define _RPOR1_RP3R_POSITION                     0x00000008
#define _RPOR1_RP3R_MASK                         0x00003F00
#define _RPOR1_RP3R_LENGTH                       0x00000006

#define _RPOR1_RP2R0_POSITION                    0x00000000
#define _RPOR1_RP2R0_MASK                        0x00000001
#define _RPOR1_RP2R0_LENGTH                      0x00000001

#define _RPOR1_RP2R1_POSITION                    0x00000001
#define _RPOR1_RP2R1_MASK                        0x00000002
#define _RPOR1_RP2R1_LENGTH                      0x00000001

#define _RPOR1_RP2R2_POSITION                    0x00000002
#define _RPOR1_RP2R2_MASK                        0x00000004
#define _RPOR1_RP2R2_LENGTH                      0x00000001

#define _RPOR1_RP2R3_POSITION                    0x00000003
#define _RPOR1_RP2R3_MASK                        0x00000008
#define _RPOR1_RP2R3_LENGTH                      0x00000001

#define _RPOR1_RP2R4_POSITION                    0x00000004
#define _RPOR1_RP2R4_MASK                        0x00000010
#define _RPOR1_RP2R4_LENGTH                      0x00000001

#define _RPOR1_RP2R5_POSITION                    0x00000005
#define _RPOR1_RP2R5_MASK                        0x00000020
#define _RPOR1_RP2R5_LENGTH                      0x00000001

#define _RPOR1_RP3R0_POSITION                    0x00000008
#define _RPOR1_RP3R0_MASK                        0x00000100
#define _RPOR1_RP3R0_LENGTH                      0x00000001

#define _RPOR1_RP3R1_POSITION                    0x00000009
#define _RPOR1_RP3R1_MASK                        0x00000200
#define _RPOR1_RP3R1_LENGTH                      0x00000001

#define _RPOR1_RP3R2_POSITION                    0x0000000A
#define _RPOR1_RP3R2_MASK                        0x00000400
#define _RPOR1_RP3R2_LENGTH                      0x00000001

#define _RPOR1_RP3R3_POSITION                    0x0000000B
#define _RPOR1_RP3R3_MASK                        0x00000800
#define _RPOR1_RP3R3_LENGTH                      0x00000001

#define _RPOR1_RP3R4_POSITION                    0x0000000C
#define _RPOR1_RP3R4_MASK                        0x00001000
#define _RPOR1_RP3R4_LENGTH                      0x00000001

#define _RPOR1_RP3R5_POSITION                    0x0000000D
#define _RPOR1_RP3R5_MASK                        0x00002000
#define _RPOR1_RP3R5_LENGTH                      0x00000001

#define _RPOR2_RP4R_POSITION                     0x00000000
#define _RPOR2_RP4R_MASK                         0x0000003F
#define _RPOR2_RP4R_LENGTH                       0x00000006

#define _RPOR2_RP5R_POSITION                     0x00000008
#define _RPOR2_RP5R_MASK                         0x00003F00
#define _RPOR2_RP5R_LENGTH                       0x00000006

#define _RPOR2_RP4R0_POSITION                    0x00000000
#define _RPOR2_RP4R0_MASK                        0x00000001
#define _RPOR2_RP4R0_LENGTH                      0x00000001

#define _RPOR2_RP4R1_POSITION                    0x00000001
#define _RPOR2_RP4R1_MASK                        0x00000002
#define _RPOR2_RP4R1_LENGTH                      0x00000001

#define _RPOR2_RP4R2_POSITION                    0x00000002
#define _RPOR2_RP4R2_MASK                        0x00000004
#define _RPOR2_RP4R2_LENGTH                      0x00000001

#define _RPOR2_RP4R3_POSITION                    0x00000003
#define _RPOR2_RP4R3_MASK                        0x00000008
#define _RPOR2_RP4R3_LENGTH                      0x00000001

#define _RPOR2_RP4R4_POSITION                    0x00000004
#define _RPOR2_RP4R4_MASK                        0x00000010
#define _RPOR2_RP4R4_LENGTH                      0x00000001

#define _RPOR2_RP4R5_POSITION                    0x00000005
#define _RPOR2_RP4R5_MASK                        0x00000020
#define _RPOR2_RP4R5_LENGTH                      0x00000001

#define _RPOR2_RP5R0_POSITION                    0x00000008
#define _RPOR2_RP5R0_MASK                        0x00000100
#define _RPOR2_RP5R0_LENGTH                      0x00000001

#define _RPOR2_RP5R1_POSITION                    0x00000009
#define _RPOR2_RP5R1_MASK                        0x00000200
#define _RPOR2_RP5R1_LENGTH                      0x00000001

#define _RPOR2_RP5R2_POSITION                    0x0000000A
#define _RPOR2_RP5R2_MASK                        0x00000400
#define _RPOR2_RP5R2_LENGTH                      0x00000001

#define _RPOR2_RP5R3_POSITION                    0x0000000B
#define _RPOR2_RP5R3_MASK                        0x00000800
#define _RPOR2_RP5R3_LENGTH                      0x00000001

#define _RPOR2_RP5R4_POSITION                    0x0000000C
#define _RPOR2_RP5R4_MASK                        0x00001000
#define _RPOR2_RP5R4_LENGTH                      0x00000001

#define _RPOR2_RP5R5_POSITION                    0x0000000D
#define _RPOR2_RP5R5_MASK                        0x00002000
#define _RPOR2_RP5R5_LENGTH                      0x00000001

#define _RPOR3_RP6R_POSITION                     0x00000000
#define _RPOR3_RP6R_MASK                         0x0000003F
#define _RPOR3_RP6R_LENGTH                       0x00000006

#define _RPOR3_RP7R_POSITION                     0x00000008
#define _RPOR3_RP7R_MASK                         0x00003F00
#define _RPOR3_RP7R_LENGTH                       0x00000006

#define _RPOR3_RP6R0_POSITION                    0x00000000
#define _RPOR3_RP6R0_MASK                        0x00000001
#define _RPOR3_RP6R0_LENGTH                      0x00000001

#define _RPOR3_RP6R1_POSITION                    0x00000001
#define _RPOR3_RP6R1_MASK                        0x00000002
#define _RPOR3_RP6R1_LENGTH                      0x00000001

#define _RPOR3_RP6R2_POSITION                    0x00000002
#define _RPOR3_RP6R2_MASK                        0x00000004
#define _RPOR3_RP6R2_LENGTH                      0x00000001

#define _RPOR3_RP6R3_POSITION                    0x00000003
#define _RPOR3_RP6R3_MASK                        0x00000008
#define _RPOR3_RP6R3_LENGTH                      0x00000001

#define _RPOR3_RP6R4_POSITION                    0x00000004
#define _RPOR3_RP6R4_MASK                        0x00000010
#define _RPOR3_RP6R4_LENGTH                      0x00000001

#define _RPOR3_RP6R5_POSITION                    0x00000005
#define _RPOR3_RP6R5_MASK                        0x00000020
#define _RPOR3_RP6R5_LENGTH                      0x00000001

#define _RPOR3_RP7R0_POSITION                    0x00000008
#define _RPOR3_RP7R0_MASK                        0x00000100
#define _RPOR3_RP7R0_LENGTH                      0x00000001

#define _RPOR3_RP7R1_POSITION                    0x00000009
#define _RPOR3_RP7R1_MASK                        0x00000200
#define _RPOR3_RP7R1_LENGTH                      0x00000001

#define _RPOR3_RP7R2_POSITION                    0x0000000A
#define _RPOR3_RP7R2_MASK                        0x00000400
#define _RPOR3_RP7R2_LENGTH                      0x00000001

#define _RPOR3_RP7R3_POSITION                    0x0000000B
#define _RPOR3_RP7R3_MASK                        0x00000800
#define _RPOR3_RP7R3_LENGTH                      0x00000001

#define _RPOR3_RP7R4_POSITION                    0x0000000C
#define _RPOR3_RP7R4_MASK                        0x00001000
#define _RPOR3_RP7R4_LENGTH                      0x00000001

#define _RPOR3_RP7R5_POSITION                    0x0000000D
#define _RPOR3_RP7R5_MASK                        0x00002000
#define _RPOR3_RP7R5_LENGTH                      0x00000001

#define _RPOR16_RP32R_POSITION                   0x00000000
#define _RPOR16_RP32R_MASK                       0x0000003F
#define _RPOR16_RP32R_LENGTH                     0x00000006

#define _RPOR16_RP33R_POSITION                   0x00000008
#define _RPOR16_RP33R_MASK                       0x00003F00
#define _RPOR16_RP33R_LENGTH                     0x00000006

#define _RPOR16_RP32R0_POSITION                  0x00000000
#define _RPOR16_RP32R0_MASK                      0x00000001
#define _RPOR16_RP32R0_LENGTH                    0x00000001

#define _RPOR16_RP32R1_POSITION                  0x00000001
#define _RPOR16_RP32R1_MASK                      0x00000002
#define _RPOR16_RP32R1_LENGTH                    0x00000001

#define _RPOR16_RP32R2_POSITION                  0x00000002
#define _RPOR16_RP32R2_MASK                      0x00000004
#define _RPOR16_RP32R2_LENGTH                    0x00000001

#define _RPOR16_RP32R3_POSITION                  0x00000003
#define _RPOR16_RP32R3_MASK                      0x00000008
#define _RPOR16_RP32R3_LENGTH                    0x00000001

#define _RPOR16_RP32R4_POSITION                  0x00000004
#define _RPOR16_RP32R4_MASK                      0x00000010
#define _RPOR16_RP32R4_LENGTH                    0x00000001

#define _RPOR16_RP32R5_POSITION                  0x00000005
#define _RPOR16_RP32R5_MASK                      0x00000020
#define _RPOR16_RP32R5_LENGTH                    0x00000001

#define _RPOR16_RP33R0_POSITION                  0x00000008
#define _RPOR16_RP33R0_MASK                      0x00000100
#define _RPOR16_RP33R0_LENGTH                    0x00000001

#define _RPOR16_RP33R1_POSITION                  0x00000009
#define _RPOR16_RP33R1_MASK                      0x00000200
#define _RPOR16_RP33R1_LENGTH                    0x00000001

#define _RPOR16_RP33R2_POSITION                  0x0000000A
#define _RPOR16_RP33R2_MASK                      0x00000400
#define _RPOR16_RP33R2_LENGTH                    0x00000001

#define _RPOR16_RP33R3_POSITION                  0x0000000B
#define _RPOR16_RP33R3_MASK                      0x00000800
#define _RPOR16_RP33R3_LENGTH                    0x00000001

#define _RPOR16_RP33R4_POSITION                  0x0000000C
#define _RPOR16_RP33R4_MASK                      0x00001000
#define _RPOR16_RP33R4_LENGTH                    0x00000001

#define _RPOR16_RP33R5_POSITION                  0x0000000D
#define _RPOR16_RP33R5_MASK                      0x00002000
#define _RPOR16_RP33R5_LENGTH                    0x00000001

#define _RPOR17_RP34R_POSITION                   0x00000000
#define _RPOR17_RP34R_MASK                       0x0000003F
#define _RPOR17_RP34R_LENGTH                     0x00000006

#define _RPOR17_RP35R_POSITION                   0x00000008
#define _RPOR17_RP35R_MASK                       0x00003F00
#define _RPOR17_RP35R_LENGTH                     0x00000006

#define _RPOR17_RP34R0_POSITION                  0x00000000
#define _RPOR17_RP34R0_MASK                      0x00000001
#define _RPOR17_RP34R0_LENGTH                    0x00000001

#define _RPOR17_RP34R1_POSITION                  0x00000001
#define _RPOR17_RP34R1_MASK                      0x00000002
#define _RPOR17_RP34R1_LENGTH                    0x00000001

#define _RPOR17_RP34R2_POSITION                  0x00000002
#define _RPOR17_RP34R2_MASK                      0x00000004
#define _RPOR17_RP34R2_LENGTH                    0x00000001

#define _RPOR17_RP34R3_POSITION                  0x00000003
#define _RPOR17_RP34R3_MASK                      0x00000008
#define _RPOR17_RP34R3_LENGTH                    0x00000001

#define _RPOR17_RP34R4_POSITION                  0x00000004
#define _RPOR17_RP34R4_MASK                      0x00000010
#define _RPOR17_RP34R4_LENGTH                    0x00000001

#define _RPOR17_RP34R5_POSITION                  0x00000005
#define _RPOR17_RP34R5_MASK                      0x00000020
#define _RPOR17_RP34R5_LENGTH                    0x00000001

#define _RPOR17_RP35R0_POSITION                  0x00000008
#define _RPOR17_RP35R0_MASK                      0x00000100
#define _RPOR17_RP35R0_LENGTH                    0x00000001

#define _RPOR17_RP35R1_POSITION                  0x00000009
#define _RPOR17_RP35R1_MASK                      0x00000200
#define _RPOR17_RP35R1_LENGTH                    0x00000001

#define _RPOR17_RP35R2_POSITION                  0x0000000A
#define _RPOR17_RP35R2_MASK                      0x00000400
#define _RPOR17_RP35R2_LENGTH                    0x00000001

#define _RPOR17_RP35R3_POSITION                  0x0000000B
#define _RPOR17_RP35R3_MASK                      0x00000800
#define _RPOR17_RP35R3_LENGTH                    0x00000001

#define _RPOR17_RP35R4_POSITION                  0x0000000C
#define _RPOR17_RP35R4_MASK                      0x00001000
#define _RPOR17_RP35R4_LENGTH                    0x00000001

#define _RPOR17_RP35R5_POSITION                  0x0000000D
#define _RPOR17_RP35R5_MASK                      0x00002000
#define _RPOR17_RP35R5_LENGTH                    0x00000001

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

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_IOLOCK_POSITION                  0x00000006
#define _OSCCON_IOLOCK_MASK                      0x00000040
#define _OSCCON_IOLOCK_LENGTH                    0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

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

#define _CLKDIV_PLLPRE_POSITION                  0x00000000
#define _CLKDIV_PLLPRE_MASK                      0x0000001F
#define _CLKDIV_PLLPRE_LENGTH                    0x00000005

#define _CLKDIV_PLLPOST_POSITION                 0x00000006
#define _CLKDIV_PLLPOST_MASK                     0x000000C0
#define _CLKDIV_PLLPOST_LENGTH                   0x00000002

#define _CLKDIV_FRCDIV_POSITION                  0x00000008
#define _CLKDIV_FRCDIV_MASK                      0x00000700
#define _CLKDIV_FRCDIV_LENGTH                    0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_PLLPRE0_POSITION                 0x00000000
#define _CLKDIV_PLLPRE0_MASK                     0x00000001
#define _CLKDIV_PLLPRE0_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE1_POSITION                 0x00000001
#define _CLKDIV_PLLPRE1_MASK                     0x00000002
#define _CLKDIV_PLLPRE1_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE2_POSITION                 0x00000002
#define _CLKDIV_PLLPRE2_MASK                     0x00000004
#define _CLKDIV_PLLPRE2_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE3_POSITION                 0x00000003
#define _CLKDIV_PLLPRE3_MASK                     0x00000008
#define _CLKDIV_PLLPRE3_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE4_POSITION                 0x00000004
#define _CLKDIV_PLLPRE4_MASK                     0x00000010
#define _CLKDIV_PLLPRE4_LENGTH                   0x00000001

#define _CLKDIV_PLLPOST0_POSITION                0x00000006
#define _CLKDIV_PLLPOST0_MASK                    0x00000040
#define _CLKDIV_PLLPOST0_LENGTH                  0x00000001

#define _CLKDIV_PLLPOST1_POSITION                0x00000007
#define _CLKDIV_PLLPOST1_MASK                    0x00000080
#define _CLKDIV_PLLPOST1_LENGTH                  0x00000001

#define _CLKDIV_FRCDIV0_POSITION                 0x00000008
#define _CLKDIV_FRCDIV0_MASK                     0x00000100
#define _CLKDIV_FRCDIV0_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV1_POSITION                 0x00000009
#define _CLKDIV_FRCDIV1_MASK                     0x00000200
#define _CLKDIV_FRCDIV1_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV2_POSITION                 0x0000000A
#define _CLKDIV_FRCDIV2_MASK                     0x00000400
#define _CLKDIV_FRCDIV2_LENGTH                   0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

#define _PLLFBD_PLLDIV_POSITION                  0x00000000
#define _PLLFBD_PLLDIV_MASK                      0x000001FF
#define _PLLFBD_PLLDIV_LENGTH                    0x00000009

#define _PLLFBD_PLLDIV0_POSITION                 0x00000000
#define _PLLFBD_PLLDIV0_MASK                     0x00000001
#define _PLLFBD_PLLDIV0_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV1_POSITION                 0x00000001
#define _PLLFBD_PLLDIV1_MASK                     0x00000002
#define _PLLFBD_PLLDIV1_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV2_POSITION                 0x00000002
#define _PLLFBD_PLLDIV2_MASK                     0x00000004
#define _PLLFBD_PLLDIV2_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV3_POSITION                 0x00000003
#define _PLLFBD_PLLDIV3_MASK                     0x00000008
#define _PLLFBD_PLLDIV3_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV4_POSITION                 0x00000004
#define _PLLFBD_PLLDIV4_MASK                     0x00000010
#define _PLLFBD_PLLDIV4_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV5_POSITION                 0x00000005
#define _PLLFBD_PLLDIV5_MASK                     0x00000020
#define _PLLFBD_PLLDIV5_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV6_POSITION                 0x00000006
#define _PLLFBD_PLLDIV6_MASK                     0x00000040
#define _PLLFBD_PLLDIV6_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV7_POSITION                 0x00000007
#define _PLLFBD_PLLDIV7_MASK                     0x00000080
#define _PLLFBD_PLLDIV7_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV8_POSITION                 0x00000008
#define _PLLFBD_PLLDIV8_MASK                     0x00000100
#define _PLLFBD_PLLDIV8_LENGTH                   0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

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

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _LFSR_LFSR_POSITION                      0x00000000
#define _LFSR_LFSR_MASK                          0x00007FFF
#define _LFSR_LFSR_LENGTH                        0x0000000F

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSIDL_POSITION                 0x0000000D
#define _REFOCON_ROSIDL_MASK                     0x00002000
#define _REFOCON_ROSIDL_LENGTH                   0x00000001

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _REFOCON_RODIV0_POSITION                 0x00000008
#define _REFOCON_RODIV0_MASK                     0x00000100
#define _REFOCON_RODIV0_LENGTH                   0x00000001

#define _REFOCON_RODIV1_POSITION                 0x00000009
#define _REFOCON_RODIV1_MASK                     0x00000200
#define _REFOCON_RODIV1_LENGTH                   0x00000001

#define _REFOCON_RODIV2_POSITION                 0x0000000A
#define _REFOCON_RODIV2_MASK                     0x00000400
#define _REFOCON_RODIV2_LENGTH                   0x00000001

#define _REFOCON_RODIV3_POSITION                 0x0000000B
#define _REFOCON_RODIV3_MASK                     0x00000800
#define _REFOCON_RODIV3_LENGTH                   0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _ACLKCON_FRCSEL_POSITION                 0x00000006
#define _ACLKCON_FRCSEL_MASK                     0x00000040
#define _ACLKCON_FRCSEL_LENGTH                   0x00000001

#define _ACLKCON_ASRCSEL_POSITION                0x00000007
#define _ACLKCON_ASRCSEL_MASK                    0x00000080
#define _ACLKCON_ASRCSEL_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR_POSITION               0x00000008
#define _ACLKCON_APSTSCLR_MASK                   0x00000700
#define _ACLKCON_APSTSCLR_LENGTH                 0x00000003

#define _ACLKCON_SELACLK_POSITION                0x0000000D
#define _ACLKCON_SELACLK_MASK                    0x00002000
#define _ACLKCON_SELACLK_LENGTH                  0x00000001

#define _ACLKCON_APLLCK_POSITION                 0x0000000E
#define _ACLKCON_APLLCK_MASK                     0x00004000
#define _ACLKCON_APLLCK_LENGTH                   0x00000001

#define _ACLKCON_ENAPLL_POSITION                 0x0000000F
#define _ACLKCON_ENAPLL_MASK                     0x00008000
#define _ACLKCON_ENAPLL_LENGTH                   0x00000001

#define _ACLKCON_APSTSCLR0_POSITION              0x00000008
#define _ACLKCON_APSTSCLR0_MASK                  0x00000100
#define _ACLKCON_APSTSCLR0_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR1_POSITION              0x00000009
#define _ACLKCON_APSTSCLR1_MASK                  0x00000200
#define _ACLKCON_APSTSCLR1_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR2_POSITION              0x0000000A
#define _ACLKCON_APSTSCLR2_MASK                  0x00000400
#define _ACLKCON_APSTSCLR2_LENGTH                0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_ERASE_POSITION                   0x00000006
#define _NVMCON_ERASE_MASK                       0x00000040
#define _NVMCON_ERASE_LENGTH                     0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD6_PWM1MD_POSITION                    0x00000008
#define _PMD6_PWM1MD_MASK                        0x00000100
#define _PMD6_PWM1MD_LENGTH                      0x00000001

#define _PMD6_PWM4MD_POSITION                    0x0000000B
#define _PMD6_PWM4MD_MASK                        0x00000800
#define _PMD6_PWM4MD_LENGTH                      0x00000001

#define _PMD7_CMPMD1_POSITION                    0x00000008
#define _PMD7_CMPMD1_MASK                        0x00000100
#define _PMD7_CMPMD1_LENGTH                      0x00000001

#define _PMD7_CMPMD2_POSITION                    0x00000009
#define _PMD7_CMPMD2_MASK                        0x00000200
#define _PMD7_CMPMD2_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FICD (0xff0)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FICD;
#define _FICD(x) __attribute__((address(0xff0),deprecated_definition("consider migrating to #pragma config"),section("__FICD.sec"),space(prog))) __prog__ uint16_t _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   ICD Communication Channel Select bits:
**     ICS_NONE             Reserved, do not use
**     ICS_PGD3             Communicate on PGEC3 and PGED3
**     ICS_PGD2             Communicate on PGEC2 and PGED2
**     ICS_PGD1             Communicate on PGEC1 and PGED1
**
**   JTAG Enable bit:
**     JTAGEN_OFF           JTAG is disabled
**     JTAGEN_ON            JTAG is enabled
**
*/

#define ICS_NONE             0x00B0
#define ICS_PGD3             0x00B1
#define ICS_PGD2             0x00B2
#define ICS_PGD1             0x00B3

#define JTAGEN_OFF           0x0093
#define JTAGEN_ON            0x00B3

/* Register FWDT (0xff4)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FWDT;
#define _FWDT(x) __attribute__((address(0xff4),deprecated_definition("consider migrating to #pragma config"),section("__FWDT.sec"),space(prog))) __prog__ uint16_t _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler bits:
**     WDTPOST_PS1          1:1
**     WDTPOST_PS2          1:2
**     WDTPOST_PS4          1:4
**     WDTPOST_PS8          1:8
**     WDTPOST_PS16         1:16
**     WDTPOST_PS32         1:32
**     WDTPOST_PS64         1:64
**     WDTPOST_PS128        1:128
**     WDTPOST_PS256        1:256
**     WDTPOST_PS512        1:512
**     WDTPOST_PS1024       1:1,024
**     WDTPOST_PS2048       1:2,048
**     WDTPOST_PS4096       1:4,096
**     WDTPOST_PS8192       1:8,192
**     WDTPOST_PS16384      1:16,384
**     WDTPOST_PS32768      1:32,768
**
**   Watchdog Timer Prescaler bit:
**     WDTPRE_PR32          1:32
**     WDTPRE_PR128         1:128
**
**   PLL Lock Enable bit:
**     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal.
**     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid.
**
**   Watchdog Timer Enable bit:
**     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
**     FWDTEN_ON            Watchdog timer always enabled
**
*/

#define WDTPOST_PS1          0x00B0
#define WDTPOST_PS2          0x00B1
#define WDTPOST_PS4          0x00B2
#define WDTPOST_PS8          0x00B3
#define WDTPOST_PS16         0x00B4
#define WDTPOST_PS32         0x00B5
#define WDTPOST_PS64         0x00B6
#define WDTPOST_PS128        0x00B7
#define WDTPOST_PS256        0x00B8
#define WDTPOST_PS512        0x00B9
#define WDTPOST_PS1024       0x00BA
#define WDTPOST_PS2048       0x00BB
#define WDTPOST_PS4096       0x00BC
#define WDTPOST_PS8192       0x00BD
#define WDTPOST_PS16384      0x00BE
#define WDTPOST_PS32768      0x00BF

#define WDTPRE_PR32          0x00AF
#define WDTPRE_PR128         0x00BF

#define PLLKEN_OFF           0x009F
#define PLLKEN_ON            0x00BF

#define FWDTEN_OFF           0x003F
#define FWDTEN_ON            0x00BF

/* Register FOSC (0xff6)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FOSC;
#define _FOSC(x) __attribute__((address(0xff6),deprecated_definition("consider migrating to #pragma config"),section("__FOSC.sec"),space(prog))) __prog__ uint16_t _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Mode Select bits:
**     POSCMD_EC            EC (External Clock) Mode
**     POSCMD_XT            XT Crystal Oscillator Mode
**     POSCMD_HS            HS Crystal Oscillator Mode
**     POSCMD_NONE          Primary Oscillator disabled
**
**   OSC2 Pin Function bit:
**     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
**     OSCIOFNC_OFF         OSC2 is clock output
**
**   Peripheral pin select configuration:
**     IOL1WAY_OFF          Allow multiple reconfigurations
**     IOL1WAY_ON           Allow only one reconfiguration
**
**   Clock Switching Mode bits:
**     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
**
*/

#define POSCMD_EC            0x00E4
#define POSCMD_XT            0x00E5
#define POSCMD_HS            0x00E6
#define POSCMD_NONE          0x00E7

#define OSCIOFNC_ON          0x00E3
#define OSCIOFNC_OFF         0x00E7

#define IOL1WAY_OFF          0x00C7
#define IOL1WAY_ON           0x00E7

#define FCKSM_CSECME         0x0027
#define FCKSM_CSECMD         0x0067
#define FCKSM_CSDCMD         0x00A7

/* Register FOSCSEL (0xff8)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FOSCSEL;
#define _FOSCSEL(x) __attribute__((address(0xff8),deprecated_definition("consider migrating to #pragma config"),section("__FOSCSEL.sec"),space(prog))) __prog__ uint16_t _FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** _FOSCSEL( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator Source Selection:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
**
**   Two-speed Oscillator Start-up Enable bit:
**     IESO_OFF             Start up with user-selected oscillator source
**     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
**
*/

#define FNOSC_FRC            0x0080
#define FNOSC_FRCPLL         0x0081
#define FNOSC_PRI            0x0082
#define FNOSC_PRIPLL         0x0083
#define FNOSC_LPRC           0x0085
#define FNOSC_FRCDIVN        0x0087

#define IESO_OFF             0x0007
#define IESO_ON              0x0087

/* Register FGS (0xffa)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _FGS;
#define _FGS(x) __attribute__((address(0xffa),deprecated_definition("consider migrating to #pragma config"),section("__FGS.sec"),space(prog))) __prog__ uint16_t _FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** _FGS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   General Segment Write-Protect bit:
**     GWRP_ON              General Segment is write protected
**     GWRP_OFF             General Segment may be written
**
**   General Segment Code-Protect bit:
**     GCP_ON               General Segment Code protection Enabled
**     GCP_OFF              General Segment Code protect is Disabled
**
*/

#define GWRP_ON              0x0002
#define GWRP_OFF             0x0003

#define GCP_ON               0x0001
#define GCP_OFF              0x0003



/*
 * Memory Segments Sizes
 */

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0xfc

#define ___RESERVED_BASE 0x100
#define ___RESERVED_LENGTH 0x4

#define __AIVT_BASE 0x104
#define __AIVT_LENGTH 0xfc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0xdf0

#define __FICD_BASE 0xff0
#define __FICD_LENGTH 0x2

#define __FWDT_BASE 0xff4
#define __FWDT_LENGTH 0x2

#define __FOSC_BASE 0xff6
#define __FOSC_LENGTH 0x2

#define __FOSCSEL_BASE 0xff8
#define __FOSCSEL_LENGTH 0x2

#define __FGS_BASE 0xffa
#define __FGS_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x100

#define __YDATA_BASE 0x880
#define __YDATA_LENGTH 0x880
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x100

#define __YDATA_BASE 0x880
#define __YDATA_LENGTH 0x880
#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x100

#define __YDATA_BASE 0x880
#define __YDATA_LENGTH 0x880

/*
 * PPS Remapping Pin Names
 */

#define _RPOUT_U1TX 3
#define _RPOUT_U1RTS 4
#define _RPOUT_SDO1 7
#define _RPOUT_SCK1 8
#define _RPOUT_SS1 9
#define _RPOUT_OC1 18
#define _RPOUT_SYNCO1 37
#define _RPOUT_REFCLKO 38
#define _RPOUT_ACMP1 39
#define _RPOUT_ACMP2 40
#define _RPOUT_PWM4H 44
#define _RPOUT_PWM4L 45

#endif