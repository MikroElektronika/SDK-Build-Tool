/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FJ128GA306 processor header
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

#ifndef __PIC24FJ128GA306__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __24FJ128GA306_H
#define __24FJ128GA306_H

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
#define PCL PCL
extern volatile uint16_t PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile uint8_t PCH __attribute__((__sfr__));
#define DSRPAG DSRPAG
extern volatile uint16_t DSRPAG __attribute__((__sfr__));
#define DSWPAG DSWPAG
extern volatile uint16_t DSWPAG __attribute__((__sfr__));
#define RCOUNT RCOUNT
extern volatile uint16_t RCOUNT __attribute__((__sfr__));
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
typedef struct tagCORCONBITS {
  uint16_t :3;
  uint16_t IPL3:1;
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile uint16_t DISICNT __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile uint16_t TBLPAG __attribute__((__sfr__));
#define CNPD1 CNPD1
extern volatile uint16_t CNPD1 __attribute__((__sfr__));
typedef struct tagCNPD1BITS {
  uint16_t :2;
  uint16_t CN2PDE:1;
  uint16_t CN3PDE:1;
  uint16_t CN4PDE:1;
  uint16_t CN5PDE:1;
  uint16_t CN6PDE:1;
  uint16_t CN7PDE:1;
  uint16_t CN8PDE:1;
  uint16_t CN9PDE:1;
  uint16_t CN10PDE:1;
  uint16_t CN11PDE:1;
  uint16_t CN12PDE:1;
  uint16_t CN13PDE:1;
  uint16_t CN14PDE:1;
  uint16_t CN15PDE:1;
} CNPD1BITS;
extern volatile CNPD1BITS CNPD1bits __attribute__((__sfr__));

#define CNPD2 CNPD2
extern volatile uint16_t CNPD2 __attribute__((__sfr__));
typedef struct tagCNPD2BITS {
  uint16_t CN16PDE:1;
  uint16_t CN17PDE:1;
  uint16_t CN18PDE:1;
  uint16_t :3;
  uint16_t CN22PDE:1;
  uint16_t CN23PDE:1;
  uint16_t CN24PDE:1;
  uint16_t CN25PDE:1;
  uint16_t CN26PDE:1;
  uint16_t CN27PDE:1;
  uint16_t CN28PDE:1;
  uint16_t CN29PDE:1;
  uint16_t CN30PDE:1;
  uint16_t CN31PDE:1;
} CNPD2BITS;
extern volatile CNPD2BITS CNPD2bits __attribute__((__sfr__));

#define CNPD3 CNPD3
extern volatile uint16_t CNPD3 __attribute__((__sfr__));
typedef struct tagCNPD3BITS {
  uint16_t CN32PDE:1;
} CNPD3BITS;
extern volatile CNPD3BITS CNPD3bits __attribute__((__sfr__));

#define CNPD4 CNPD4
extern volatile uint16_t CNPD4 __attribute__((__sfr__));
typedef struct tagCNPD4BITS {
  uint16_t :1;
  uint16_t CN49PDE:1;
  uint16_t CN50PDE:1;
  uint16_t CN51PDE:1;
  uint16_t CN52PDE:1;
  uint16_t CN53PDE:1;
  uint16_t CN54PDE:1;
  uint16_t CN55PDE:1;
  uint16_t CN56PDE:1;
  uint16_t CN57PDE:1;
  uint16_t CN58PDE:1;
  uint16_t CN59PDE:1;
  uint16_t CN60PDE:1;
  uint16_t CN61PDE:1;
  uint16_t CN62PDE:1;
  uint16_t CN63PDE:1;
} CNPD4BITS;
extern volatile CNPD4BITS CNPD4bits __attribute__((__sfr__));

#define CNPD5 CNPD5
extern volatile uint16_t CNPD5 __attribute__((__sfr__));
typedef struct tagCNPD5BITS {
  uint16_t CN64PDE:1;
  uint16_t CN65PDE:1;
  uint16_t :2;
  uint16_t CN68PDE:1;
  uint16_t CN69PDE:1;
  uint16_t CN70PDE:1;
  uint16_t CN71PDE:1;
  uint16_t CN72PDE:1;
  uint16_t CN73PDE:1;
} CNPD5BITS;
extern volatile CNPD5BITS CNPD5bits __attribute__((__sfr__));

#define CNPD6 CNPD6
extern volatile uint16_t CNPD6 __attribute__((__sfr__));
typedef struct tagCNPD6BITS {
  uint16_t :4;
  uint16_t CN84PDE:1;
} CNPD6BITS;
extern volatile CNPD6BITS CNPD6bits __attribute__((__sfr__));

#define CNEN1 CNEN1
extern volatile uint16_t CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  uint16_t :2;
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
  uint16_t :3;
  uint16_t CN22IE:1;
  uint16_t CN23IE:1;
  uint16_t CN24IE:1;
  uint16_t CN25IE:1;
  uint16_t CN26IE:1;
  uint16_t CN27IE:1;
  uint16_t CN28IE:1;
  uint16_t CN29IE:1;
  uint16_t CN30IE:1;
  uint16_t CN31IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

#define CNEN3 CNEN3
extern volatile uint16_t CNEN3 __attribute__((__sfr__));
typedef struct tagCNEN3BITS {
  uint16_t CN32IE:1;
} CNEN3BITS;
extern volatile CNEN3BITS CNEN3bits __attribute__((__sfr__));

#define CNEN4 CNEN4
extern volatile uint16_t CNEN4 __attribute__((__sfr__));
typedef struct tagCNEN4BITS {
  uint16_t :1;
  uint16_t CN49IE:1;
  uint16_t CN50IE:1;
  uint16_t CN51IE:1;
  uint16_t CN52IE:1;
  uint16_t CN53IE:1;
  uint16_t CN54IE:1;
  uint16_t CN55IE:1;
  uint16_t CN56IE:1;
  uint16_t CN57IE:1;
  uint16_t CN58IE:1;
  uint16_t CN59IE:1;
  uint16_t CN60IE:1;
  uint16_t CN61IE:1;
  uint16_t CN62IE:1;
  uint16_t CN63IE:1;
} CNEN4BITS;
extern volatile CNEN4BITS CNEN4bits __attribute__((__sfr__));

#define CNEN5 CNEN5
extern volatile uint16_t CNEN5 __attribute__((__sfr__));
typedef struct tagCNEN5BITS {
  uint16_t CN64IE:1;
  uint16_t CN65IE:1;
  uint16_t :2;
  uint16_t CN68IE:1;
  uint16_t CN69IE:1;
  uint16_t CN70IE:1;
  uint16_t CN71IE:1;
  uint16_t CN72IE:1;
  uint16_t CN73IE:1;
} CNEN5BITS;
extern volatile CNEN5BITS CNEN5bits __attribute__((__sfr__));

#define CNEN6 CNEN6
extern volatile uint16_t CNEN6 __attribute__((__sfr__));
typedef struct tagCNEN6BITS {
  uint16_t :4;
  uint16_t CN84IE:1;
} CNEN6BITS;
extern volatile CNEN6BITS CNEN6bits __attribute__((__sfr__));

#define CNPU1 CNPU1
extern volatile uint16_t CNPU1 __attribute__((__sfr__));
typedef struct tagCNPU1BITS {
  uint16_t :2;
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
  uint16_t :3;
  uint16_t CN22PUE:1;
  uint16_t CN23PUE:1;
  uint16_t CN24PUE:1;
  uint16_t CN25PUE:1;
  uint16_t CN26PUE:1;
  uint16_t CN27PUE:1;
  uint16_t CN28PUE:1;
  uint16_t CN29PUE:1;
  uint16_t CN30PUE:1;
  uint16_t CN31PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

#define CNPU3 CNPU3
extern volatile uint16_t CNPU3 __attribute__((__sfr__));
typedef struct tagCNPU3BITS {
  uint16_t CN32PUE:1;
} CNPU3BITS;
extern volatile CNPU3BITS CNPU3bits __attribute__((__sfr__));

#define CNPU4 CNPU4
extern volatile uint16_t CNPU4 __attribute__((__sfr__));
typedef struct tagCNPU4BITS {
  uint16_t :1;
  uint16_t CN49PUE:1;
  uint16_t CN50PUE:1;
  uint16_t CN51PUE:1;
  uint16_t CN52PUE:1;
  uint16_t CN53PUE:1;
  uint16_t CN54PUE:1;
  uint16_t CN55PUE:1;
  uint16_t CN56PUE:1;
  uint16_t CN57PUE:1;
  uint16_t CN58PUE:1;
  uint16_t CN59PUE:1;
  uint16_t CN60PUE:1;
  uint16_t CN61PUE:1;
  uint16_t CN62PUE:1;
  uint16_t CN63PUE:1;
} CNPU4BITS;
extern volatile CNPU4BITS CNPU4bits __attribute__((__sfr__));

#define CNPU5 CNPU5
extern volatile uint16_t CNPU5 __attribute__((__sfr__));
typedef struct tagCNPU5BITS {
  uint16_t CN64PUE:1;
  uint16_t CN65PUE:1;
  uint16_t :2;
  uint16_t CN68PUE:1;
  uint16_t CN69PUE:1;
  uint16_t CN70PUE:1;
  uint16_t CN71PUE:1;
  uint16_t CN72PUE:1;
  uint16_t CN73PUE:1;
} CNPU5BITS;
extern volatile CNPU5BITS CNPU5bits __attribute__((__sfr__));

#define CNPU6 CNPU6
extern volatile uint16_t CNPU6 __attribute__((__sfr__));
typedef struct tagCNPU6BITS {
  uint16_t :4;
  uint16_t CN84PUE:1;
} CNPU6BITS;
extern volatile CNPU6BITS CNPU6bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile uint16_t INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  uint16_t :1;
  uint16_t OSCFAIL:1;
  uint16_t STKERR:1;
  uint16_t ADDRERR:1;
  uint16_t MATHERR:1;
  uint16_t :10;
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
  uint16_t DMA0IF:1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPF1IF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t AD1IF:1;
  uint16_t DMA1IF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile uint16_t IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  uint16_t SI2C1IF:1;
  uint16_t MI2C1IF:1;
  uint16_t CMIF:1;
  uint16_t CNIF:1;
  uint16_t INT1IF:1;
  uint16_t :1;
  uint16_t IC7IF:1;
  uint16_t :1;
  uint16_t DMA2IF:1;
  uint16_t OC3IF:1;
  uint16_t OC4IF:1;
  uint16_t T4IF:1;
  uint16_t T5IF:1;
  uint16_t INT2IF:1;
  uint16_t U2RXIF:1;
  uint16_t U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile uint16_t IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  uint16_t SPF2IF:1;
  uint16_t SPI2IF:1;
  uint16_t :2;
  uint16_t DMA3IF:1;
  uint16_t IC3IF:1;
  uint16_t IC4IF:1;
  uint16_t IC5IF:1;
  uint16_t IC6IF:1;
  uint16_t OC5IF:1;
  uint16_t OC6IF:1;
  uint16_t OC7IF:1;
  uint16_t :1;
  uint16_t PMPIF:1;
  uint16_t DMA4IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile uint16_t IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  uint16_t :1;
  uint16_t SI2C2IF:1;
  uint16_t MI2C2IF:1;
  uint16_t :2;
  uint16_t INT3IF:1;
  uint16_t INT4IF:1;
  uint16_t :6;
  uint16_t DMA5IF:1;
  uint16_t RTCIF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile uint16_t IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  uint16_t :1;
  uint16_t U1ERIF:1;
  uint16_t U2ERIF:1;
  uint16_t CRCIF:1;
  uint16_t :4;
  uint16_t LVDIF:1;
  uint16_t :4;
  uint16_t CTMUIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile uint16_t IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  uint16_t :1;
  uint16_t U3ERIF:1;
  uint16_t U3RXIF:1;
  uint16_t U3TXIF:1;
  uint16_t :3;
  uint16_t U4ERIF:1;
  uint16_t U4RXIF:1;
  uint16_t U4TXIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile uint16_t IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  uint16_t :4;
  uint16_t LCDIF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS7 IFS7
extern volatile uint16_t IFS7 __attribute__((__sfr__));
typedef struct tagIFS7BITS {
  uint16_t :5;
  uint16_t JTAGIF:1;
} IFS7BITS;
extern volatile IFS7BITS IFS7bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t IC1IE:1;
  uint16_t OC1IE:1;
  uint16_t T1IE:1;
  uint16_t DMA0IE:1;
  uint16_t IC2IE:1;
  uint16_t OC2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
  uint16_t SPF1IE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t AD1IE:1;
  uint16_t DMA1IE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile uint16_t IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  uint16_t SI2C1IE:1;
  uint16_t MI2C1IE:1;
  uint16_t CMIE:1;
  uint16_t CNIE:1;
  uint16_t INT1IE:1;
  uint16_t :1;
  uint16_t IC7IE:1;
  uint16_t :1;
  uint16_t DMA2IE:1;
  uint16_t OC3IE:1;
  uint16_t OC4IE:1;
  uint16_t T4IE:1;
  uint16_t T5IE:1;
  uint16_t INT2IE:1;
  uint16_t U2RXIE:1;
  uint16_t U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile uint16_t IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  uint16_t SPF2IE:1;
  uint16_t SPI2IE:1;
  uint16_t :2;
  uint16_t DMA3IE:1;
  uint16_t IC3IE:1;
  uint16_t IC4IE:1;
  uint16_t IC5IE:1;
  uint16_t IC6IE:1;
  uint16_t OC5IE:1;
  uint16_t OC6IE:1;
  uint16_t OC7IE:1;
  uint16_t :1;
  uint16_t PMPIE:1;
  uint16_t DMA4IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile uint16_t IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  uint16_t :1;
  uint16_t SI2C2IE:1;
  uint16_t MI2C2IE:1;
  uint16_t :2;
  uint16_t INT3IE:1;
  uint16_t INT4IE:1;
  uint16_t :6;
  uint16_t DMA5IE:1;
  uint16_t RTCIE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile uint16_t IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  uint16_t :1;
  uint16_t U1ERIE:1;
  uint16_t U2ERIE:1;
  uint16_t CRCIE:1;
  uint16_t :4;
  uint16_t LVDIE:1;
  uint16_t :4;
  uint16_t CTMUIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile uint16_t IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  uint16_t :1;
  uint16_t U3ERIE:1;
  uint16_t U3RXIE:1;
  uint16_t U3TXIE:1;
  uint16_t :3;
  uint16_t U4ERIE:1;
  uint16_t U4RXIE:1;
  uint16_t U4TXIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile uint16_t IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  uint16_t :4;
  uint16_t LCDIE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC7 IEC7
extern volatile uint16_t IEC7 __attribute__((__sfr__));
typedef struct tagIEC7BITS {
  uint16_t :5;
  uint16_t JTAGIE:1;
} IEC7BITS;
extern volatile IEC7BITS IEC7bits __attribute__((__sfr__));

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
      uint16_t DMA0IP:3;
      uint16_t :1;
      uint16_t IC2IP:3;
      uint16_t :1;
      uint16_t OC2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t DMA0IP0:1;
      uint16_t DMA0IP1:1;
      uint16_t DMA0IP2:1;
      uint16_t :1;
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
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile uint16_t IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      uint16_t T3IP:3;
      uint16_t :1;
      uint16_t SPF1IP:3;
      uint16_t :1;
      uint16_t SPI1IP:3;
      uint16_t :1;
      uint16_t U1RXIP:3;
    };
    struct {
      uint16_t T3IP0:1;
      uint16_t T3IP1:1;
      uint16_t T3IP2:1;
      uint16_t :1;
      uint16_t SPF1IP0:1;
      uint16_t SPF1IP1:1;
      uint16_t SPF1IP2:1;
      uint16_t :1;
      uint16_t SPI1IP0:1;
      uint16_t SPI1IP1:1;
      uint16_t SPI1IP2:1;
      uint16_t :1;
      uint16_t U1RXIP0:1;
      uint16_t U1RXIP1:1;
      uint16_t U1RXIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile uint16_t IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      uint16_t U1TXIP:3;
      uint16_t :1;
      uint16_t AD1IP:3;
      uint16_t :1;
      uint16_t DMA1IP:3;
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t AD1IP0:1;
      uint16_t AD1IP1:1;
      uint16_t AD1IP2:1;
      uint16_t :1;
      uint16_t DMA1IP0:1;
      uint16_t DMA1IP1:1;
      uint16_t DMA1IP2:1;
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
      uint16_t CMIP:3;
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
      uint16_t CMIP0:1;
      uint16_t CMIP1:1;
      uint16_t CMIP2:1;
      uint16_t :1;
      uint16_t CNIP0:1;
      uint16_t CNIP1:1;
      uint16_t CNIP2:1;
    };
    struct {
      uint16_t SI2C1P:3;
      uint16_t :1;
      uint16_t MI2C1P:3;
    };
    struct {
      uint16_t SI2C1P0:1;
      uint16_t SI2C1P1:1;
      uint16_t SI2C1P2:1;
      uint16_t :1;
      uint16_t MI2C1P0:1;
      uint16_t MI2C1P1:1;
      uint16_t MI2C1P2:1;
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
      uint16_t :5;
      uint16_t IC7IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
      uint16_t :5;
      uint16_t IC7IP0:1;
      uint16_t IC7IP1:1;
      uint16_t IC7IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t DMA2IP:3;
      uint16_t :1;
      uint16_t OC3IP:3;
      uint16_t :1;
      uint16_t OC4IP:3;
      uint16_t :1;
      uint16_t T4IP:3;
    };
    struct {
      uint16_t DMA2IP0:1;
      uint16_t DMA2IP1:1;
      uint16_t DMA2IP2:1;
      uint16_t :1;
      uint16_t OC3IP0:1;
      uint16_t OC3IP1:1;
      uint16_t OC3IP2:1;
      uint16_t :1;
      uint16_t OC4IP0:1;
      uint16_t OC4IP1:1;
      uint16_t OC4IP2:1;
      uint16_t :1;
      uint16_t T4IP0:1;
      uint16_t T4IP1:1;
      uint16_t T4IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile uint16_t IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      uint16_t T5IP:3;
      uint16_t :1;
      uint16_t INT2IP:3;
      uint16_t :1;
      uint16_t U2RXIP:3;
      uint16_t :1;
      uint16_t U2TXIP:3;
    };
    struct {
      uint16_t T5IP0:1;
      uint16_t T5IP1:1;
      uint16_t T5IP2:1;
      uint16_t :1;
      uint16_t INT2IP0:1;
      uint16_t INT2IP1:1;
      uint16_t INT2IP2:1;
      uint16_t :1;
      uint16_t U2RXIP0:1;
      uint16_t U2RXIP1:1;
      uint16_t U2RXIP2:1;
      uint16_t :1;
      uint16_t U2TXIP0:1;
      uint16_t U2TXIP1:1;
      uint16_t U2TXIP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC8 IPC8
extern volatile uint16_t IPC8 __attribute__((__sfr__));
__extension__ typedef struct tagIPC8BITS {
  union {
    struct {
      uint16_t SPF2IP:3;
      uint16_t :1;
      uint16_t SPI2IP:3;
    };
    struct {
      uint16_t SPF2IP0:1;
      uint16_t SPF2IP1:1;
      uint16_t SPF2IP2:1;
      uint16_t :1;
      uint16_t SPI2IP0:1;
      uint16_t SPI2IP1:1;
      uint16_t SPI2IP2:1;
    };
  };
} IPC8BITS;
extern volatile IPC8BITS IPC8bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile uint16_t IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      uint16_t DMA3IP:3;
      uint16_t :1;
      uint16_t IC3IP:3;
      uint16_t :1;
      uint16_t IC4IP:3;
      uint16_t :1;
      uint16_t IC5IP:3;
    };
    struct {
      uint16_t DMA3IP0:1;
      uint16_t DMA3IP1:1;
      uint16_t DMA3IP2:1;
      uint16_t :1;
      uint16_t IC3IP0:1;
      uint16_t IC3IP1:1;
      uint16_t IC3IP2:1;
      uint16_t :1;
      uint16_t IC4IP0:1;
      uint16_t IC4IP1:1;
      uint16_t IC4IP2:1;
      uint16_t :1;
      uint16_t IC5IP0:1;
      uint16_t IC5IP1:1;
      uint16_t IC5IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC10 IPC10
extern volatile uint16_t IPC10 __attribute__((__sfr__));
__extension__ typedef struct tagIPC10BITS {
  union {
    struct {
      uint16_t IC6IP:3;
      uint16_t :1;
      uint16_t OC5IP:3;
      uint16_t :1;
      uint16_t OC6IP:3;
      uint16_t :1;
      uint16_t OC7IP:3;
    };
    struct {
      uint16_t IC6IP0:1;
      uint16_t IC6IP1:1;
      uint16_t IC6IP2:1;
      uint16_t :1;
      uint16_t OC5IP0:1;
      uint16_t OC5IP1:1;
      uint16_t OC5IP2:1;
      uint16_t :1;
      uint16_t OC6IP0:1;
      uint16_t OC6IP1:1;
      uint16_t OC6IP2:1;
      uint16_t :1;
      uint16_t OC7IP0:1;
      uint16_t OC7IP1:1;
      uint16_t OC7IP2:1;
    };
  };
} IPC10BITS;
extern volatile IPC10BITS IPC10bits __attribute__((__sfr__));

#define IPC11 IPC11
extern volatile uint16_t IPC11 __attribute__((__sfr__));
__extension__ typedef struct tagIPC11BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t PMPIP:3;
      uint16_t :1;
      uint16_t DMA4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t PMPIP0:1;
      uint16_t PMPIP1:1;
      uint16_t PMPIP2:1;
      uint16_t :1;
      uint16_t DMA4IP0:1;
      uint16_t DMA4IP1:1;
      uint16_t DMA4IP2:1;
    };
  };
} IPC11BITS;
extern volatile IPC11BITS IPC11bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile uint16_t IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t SI2C2IP:3;
      uint16_t :1;
      uint16_t MI2C2IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t SI2C2IP0:1;
      uint16_t SI2C2IP1:1;
      uint16_t SI2C2IP2:1;
      uint16_t :1;
      uint16_t MI2C2IP0:1;
      uint16_t MI2C2IP1:1;
      uint16_t MI2C2IP2:1;
    };
    struct {
      uint16_t :4;
      uint16_t SI2C2P0:1;
      uint16_t SI2C2P1:1;
      uint16_t SI2C2P2:1;
      uint16_t :1;
      uint16_t MI2C2P0:1;
      uint16_t MI2C2P1:1;
      uint16_t MI2C2P2:1;
    };
    struct {
      uint16_t :4;
      uint16_t SI2C2P:3;
      uint16_t :1;
      uint16_t MI2C2P:3;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC13 IPC13
extern volatile uint16_t IPC13 __attribute__((__sfr__));
__extension__ typedef struct tagIPC13BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t INT3IP:3;
      uint16_t :1;
      uint16_t INT4IP:3;
    };
    struct {
      uint16_t :4;
      uint16_t INT3IP0:1;
      uint16_t INT3IP1:1;
      uint16_t INT3IP2:1;
      uint16_t :1;
      uint16_t INT4IP0:1;
      uint16_t INT4IP1:1;
      uint16_t INT4IP2:1;
    };
  };
} IPC13BITS;
extern volatile IPC13BITS IPC13bits __attribute__((__sfr__));

#define IPC15 IPC15
extern volatile uint16_t IPC15 __attribute__((__sfr__));
__extension__ typedef struct tagIPC15BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t DMA5IP:3;
      uint16_t :1;
      uint16_t RTCIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t DMA5IP0:1;
      uint16_t DMA5IP1:1;
      uint16_t DMA5IP2:1;
      uint16_t :1;
      uint16_t RTCIP0:1;
      uint16_t RTCIP1:1;
      uint16_t RTCIP2:1;
    };
  };
} IPC15BITS;
extern volatile IPC15BITS IPC15bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile uint16_t IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t U1ERIP:3;
      uint16_t :1;
      uint16_t U2ERIP:3;
      uint16_t :1;
      uint16_t CRCIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t U1ERIP0:1;
      uint16_t U1ERIP1:1;
      uint16_t U1ERIP2:1;
      uint16_t :1;
      uint16_t U2ERIP0:1;
      uint16_t U2ERIP1:1;
      uint16_t U2ERIP2:1;
      uint16_t :1;
      uint16_t CRCIP0:1;
      uint16_t CRCIP1:1;
      uint16_t CRCIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile uint16_t IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      uint16_t LVDIP:3;
    };
    struct {
      uint16_t LVDIP0:1;
      uint16_t LVDIP1:1;
      uint16_t LVDIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC19 IPC19
extern volatile uint16_t IPC19 __attribute__((__sfr__));
__extension__ typedef struct tagIPC19BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t CTMUIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t CTMUIP0:1;
      uint16_t CTMUIP1:1;
      uint16_t CTMUIP2:1;
    };
  };
} IPC19BITS;
extern volatile IPC19BITS IPC19bits __attribute__((__sfr__));

#define IPC20 IPC20
extern volatile uint16_t IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t U3ERIP:3;
      uint16_t :1;
      uint16_t U3RXIP:3;
      uint16_t :1;
      uint16_t U3TXIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t U3ERIP0:1;
      uint16_t U3ERIP1:1;
      uint16_t U3ERIP2:1;
      uint16_t :1;
      uint16_t U3RXIP0:1;
      uint16_t U3RXIP1:1;
      uint16_t U3RXIP2:1;
      uint16_t :1;
      uint16_t U3TXIP0:1;
      uint16_t U3TXIP1:1;
      uint16_t U3TXIP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

#define IPC21 IPC21
extern volatile uint16_t IPC21 __attribute__((__sfr__));
__extension__ typedef struct tagIPC21BITS {
  union {
    struct {
      uint16_t :12;
      uint16_t U4ERIP:3;
    };
    struct {
      uint16_t :12;
      uint16_t U4ERIP0:1;
      uint16_t U4ERIP1:1;
      uint16_t U4ERIP2:1;
    };
  };
} IPC21BITS;
extern volatile IPC21BITS IPC21bits __attribute__((__sfr__));

#define IPC22 IPC22
extern volatile uint16_t IPC22 __attribute__((__sfr__));
__extension__ typedef struct tagIPC22BITS {
  union {
    struct {
      uint16_t U4RXIP:3;
      uint16_t :1;
      uint16_t U4TXIP:3;
    };
    struct {
      uint16_t U4RXIP0:1;
      uint16_t U4RXIP1:1;
      uint16_t U4RXIP2:1;
      uint16_t :1;
      uint16_t U4TXIP0:1;
      uint16_t U4TXIP1:1;
      uint16_t U4TXIP2:1;
    };
  };
} IPC22BITS;
extern volatile IPC22BITS IPC22bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile uint16_t IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      uint16_t LCDIP:3;
    };
    struct {
      uint16_t LCDIP0:1;
      uint16_t LCDIP1:1;
      uint16_t LCDIP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

#define IPC29 IPC29
extern volatile uint16_t IPC29 __attribute__((__sfr__));
__extension__ typedef struct tagIPC29BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t JTAGIP:3;
    };
    struct {
      uint16_t :4;
      uint16_t JTAGIP0:1;
      uint16_t JTAGIP1:1;
      uint16_t JTAGIP2:1;
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
      uint16_t :1;
      uint16_t VHOLD:1;
      uint16_t :1;
      uint16_t CPUIRQ:1;
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
      uint16_t :1;
      uint16_t TECS:2;
      uint16_t :3;
      uint16_t TSIDL:1;
      uint16_t :1;
      uint16_t TON:1;
    };
    struct {
      uint16_t :4;
      uint16_t TCKPS0:1;
      uint16_t TCKPS1:1;
      uint16_t :2;
      uint16_t TECS0:1;
      uint16_t TECS1:1;
    };
    struct {
      uint16_t :8;
      uint16_t TIECS:2;
    };
    struct {
      uint16_t :8;
      uint16_t T1ECS0:1;
      uint16_t T1ECS1:1;
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
      uint16_t T45:1;
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

#define IC1CON1 IC1CON1
extern volatile uint16_t IC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC1CON1BITS;
extern volatile IC1CON1BITS IC1CON1bits __attribute__((__sfr__));

#define IC1CON2 IC1CON2
extern volatile uint16_t IC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC1CON2BITS;
extern volatile IC1CON2BITS IC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
        uint16_t icxbuf;
        uint16_t icxcon;
} IC, *PIC;

#define IC1 ACC1
extern volatile IC IC1 __attribute__((__sfr__));

#define IC1BUF IC1BUF
extern volatile uint16_t IC1BUF __attribute__((__sfr__));
#define IC1TMR IC1TMR
extern volatile uint16_t IC1TMR __attribute__((__sfr__));
#define IC2CON1 IC2CON1
extern volatile uint16_t IC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC2CON1BITS;
extern volatile IC2CON1BITS IC2CON1bits __attribute__((__sfr__));

#define IC2CON2 IC2CON2
extern volatile uint16_t IC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC2CON2BITS;
extern volatile IC2CON2BITS IC2CON2bits __attribute__((__sfr__));


#define IC2 ACC2
extern volatile IC IC2 __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile uint16_t IC2BUF __attribute__((__sfr__));
#define IC2TMR IC2TMR
extern volatile uint16_t IC2TMR __attribute__((__sfr__));
#define IC3CON1 IC3CON1
extern volatile uint16_t IC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC3CON1BITS;
extern volatile IC3CON1BITS IC3CON1bits __attribute__((__sfr__));

#define IC3CON2 IC3CON2
extern volatile uint16_t IC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC3CON2BITS;
extern volatile IC3CON2BITS IC3CON2bits __attribute__((__sfr__));


#define IC3 ACC3
extern volatile IC IC3 __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile uint16_t IC3BUF __attribute__((__sfr__));
#define IC3TMR IC3TMR
extern volatile uint16_t IC3TMR __attribute__((__sfr__));
#define IC4CON1 IC4CON1
extern volatile uint16_t IC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC4CON1BITS;
extern volatile IC4CON1BITS IC4CON1bits __attribute__((__sfr__));

#define IC4CON2 IC4CON2
extern volatile uint16_t IC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC4CON2BITS;
extern volatile IC4CON2BITS IC4CON2bits __attribute__((__sfr__));


#define IC4 ACC4
extern volatile IC IC4 __attribute__((__sfr__));

#define IC4BUF IC4BUF
extern volatile uint16_t IC4BUF __attribute__((__sfr__));
#define IC4TMR IC4TMR
extern volatile uint16_t IC4TMR __attribute__((__sfr__));
#define IC5CON1 IC5CON1
extern volatile uint16_t IC5CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC5CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC5CON1BITS;
extern volatile IC5CON1BITS IC5CON1bits __attribute__((__sfr__));

#define IC5CON2 IC5CON2
extern volatile uint16_t IC5CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC5CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC5CON2BITS;
extern volatile IC5CON2BITS IC5CON2bits __attribute__((__sfr__));


#define IC5 ACC5
extern volatile IC IC5 __attribute__((__sfr__));

#define IC5BUF IC5BUF
extern volatile uint16_t IC5BUF __attribute__((__sfr__));
#define IC5TMR IC5TMR
extern volatile uint16_t IC5TMR __attribute__((__sfr__));
#define IC6CON1 IC6CON1
extern volatile uint16_t IC6CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC6CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC6CON1BITS;
extern volatile IC6CON1BITS IC6CON1bits __attribute__((__sfr__));

#define IC6CON2 IC6CON2
extern volatile uint16_t IC6CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC6CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC6CON2BITS;
extern volatile IC6CON2BITS IC6CON2bits __attribute__((__sfr__));


#define IC6 ACC6
extern volatile IC IC6 __attribute__((__sfr__));

#define IC6BUF IC6BUF
extern volatile uint16_t IC6BUF __attribute__((__sfr__));
#define IC6TMR IC6TMR
extern volatile uint16_t IC6TMR __attribute__((__sfr__));
#define IC7CON1 IC7CON1
extern volatile uint16_t IC7CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC7CON1BITS {
  union {
    struct {
      uint16_t ICM:3;
      uint16_t ICBNE:1;
      uint16_t ICOV:1;
      uint16_t ICI:2;
      uint16_t :3;
      uint16_t ICTSEL:3;
      uint16_t ICSIDL:1;
    };
    struct {
      uint16_t ICM0:1;
      uint16_t ICM1:1;
      uint16_t ICM2:1;
      uint16_t :2;
      uint16_t ICI0:1;
      uint16_t ICI1:1;
      uint16_t :3;
      uint16_t ICTSEL0:1;
      uint16_t ICTSEL1:1;
      uint16_t ICTSEL2:1;
    };
  };
} IC7CON1BITS;
extern volatile IC7CON1BITS IC7CON1bits __attribute__((__sfr__));

#define IC7CON2 IC7CON2
extern volatile uint16_t IC7CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC7CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t :1;
      uint16_t TRIGSTAT:1;
      uint16_t ICTRIG:1;
      uint16_t IC32:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
    };
  };
} IC7CON2BITS;
extern volatile IC7CON2BITS IC7CON2bits __attribute__((__sfr__));


#define IC7 ACC7
extern volatile IC IC7 __attribute__((__sfr__));

#define IC7BUF IC7BUF
extern volatile uint16_t IC7BUF __attribute__((__sfr__));
#define IC7TMR IC7TMR
extern volatile uint16_t IC7TMR __attribute__((__sfr__));
#define OC1CON1 OC1CON1
extern volatile uint16_t OC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC1CON1BITS;
extern volatile OC1CON1BITS OC1CON1bits __attribute__((__sfr__));

#define OC1CON2 OC1CON2
extern volatile uint16_t OC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC1CON2BITS;
extern volatile OC1CON2BITS OC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
        uint16_t ocxrs;
        uint16_t ocxr;
        uint16_t ocxcon;
} OC, *POC;

#define OC1 OC1
extern volatile OC OC1 __attribute__((__sfr__));

#define OC1RS OC1RS
extern volatile uint16_t OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile uint16_t OC1R __attribute__((__sfr__));
#define OC1TMR OC1TMR
extern volatile uint16_t OC1TMR __attribute__((__sfr__));
#define OC2CON1 OC2CON1
extern volatile uint16_t OC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC2CON1BITS;
extern volatile OC2CON1BITS OC2CON1bits __attribute__((__sfr__));

#define OC2CON2 OC2CON2
extern volatile uint16_t OC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC2CON2BITS;
extern volatile OC2CON2BITS OC2CON2bits __attribute__((__sfr__));


#define OC2RS OC2RS
extern volatile uint16_t OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile uint16_t OC2R __attribute__((__sfr__));
#define OC2TMR OC2TMR
extern volatile uint16_t OC2TMR __attribute__((__sfr__));
#define OC3CON1 OC3CON1
extern volatile uint16_t OC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC3CON1BITS;
extern volatile OC3CON1BITS OC3CON1bits __attribute__((__sfr__));

#define OC3CON2 OC3CON2
extern volatile uint16_t OC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC3CON2BITS;
extern volatile OC3CON2BITS OC3CON2bits __attribute__((__sfr__));


#define OC3RS OC3RS
extern volatile uint16_t OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile uint16_t OC3R __attribute__((__sfr__));
#define OC3TMR OC3TMR
extern volatile uint16_t OC3TMR __attribute__((__sfr__));
#define OC4CON1 OC4CON1
extern volatile uint16_t OC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC4CON1BITS;
extern volatile OC4CON1BITS OC4CON1bits __attribute__((__sfr__));

#define OC4CON2 OC4CON2
extern volatile uint16_t OC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC4CON2BITS;
extern volatile OC4CON2BITS OC4CON2bits __attribute__((__sfr__));


#define OC4RS OC4RS
extern volatile uint16_t OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile uint16_t OC4R __attribute__((__sfr__));
#define OC4TMR OC4TMR
extern volatile uint16_t OC4TMR __attribute__((__sfr__));
#define OC5CON1 OC5CON1
extern volatile uint16_t OC5CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC5CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC5CON1BITS;
extern volatile OC5CON1BITS OC5CON1bits __attribute__((__sfr__));

#define OC5CON2 OC5CON2
extern volatile uint16_t OC5CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC5CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC5CON2BITS;
extern volatile OC5CON2BITS OC5CON2bits __attribute__((__sfr__));


#define OC5RS OC5RS
extern volatile uint16_t OC5RS __attribute__((__sfr__));
#define OC5R OC5R
extern volatile uint16_t OC5R __attribute__((__sfr__));
#define OC5TMR OC5TMR
extern volatile uint16_t OC5TMR __attribute__((__sfr__));
#define OC6CON1 OC6CON1
extern volatile uint16_t OC6CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC6CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC6CON1BITS;
extern volatile OC6CON1BITS OC6CON1bits __attribute__((__sfr__));

#define OC6CON2 OC6CON2
extern volatile uint16_t OC6CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC6CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC6CON2BITS;
extern volatile OC6CON2BITS OC6CON2bits __attribute__((__sfr__));


#define OC6RS OC6RS
extern volatile uint16_t OC6RS __attribute__((__sfr__));
#define OC6R OC6R
extern volatile uint16_t OC6R __attribute__((__sfr__));
#define OC6TMR OC6TMR
extern volatile uint16_t OC6TMR __attribute__((__sfr__));
#define OC7CON1 OC7CON1
extern volatile uint16_t OC7CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC7CON1BITS {
  union {
    struct {
      uint16_t OCM:3;
      uint16_t TRIGMODE:1;
      uint16_t OCFLT:3;
      uint16_t ENFLT:3;
      uint16_t OCTSEL:3;
      uint16_t OCSIDL:1;
    };
    struct {
      uint16_t OCM0:1;
      uint16_t OCM1:1;
      uint16_t OCM2:1;
      uint16_t :1;
      uint16_t OCFLT0:1;
      uint16_t OCFLT1:1;
      uint16_t OCFLT2:1;
      uint16_t ENFLT0:1;
      uint16_t ENFLT1:1;
      uint16_t ENFLT2:1;
      uint16_t OCTSEL0:1;
      uint16_t OCTSEL1:1;
      uint16_t OCTSEL2:1;
    };
  };
} OC7CON1BITS;
extern volatile OC7CON1BITS OC7CON1bits __attribute__((__sfr__));

#define OC7CON2 OC7CON2
extern volatile uint16_t OC7CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC7CON2BITS {
  union {
    struct {
      uint16_t SYNCSEL:5;
      uint16_t OCTRIS:1;
      uint16_t TRIGSTAT:1;
      uint16_t OCTRIG:1;
      uint16_t OC32:1;
      uint16_t DCB:2;
      uint16_t :1;
      uint16_t OCINV:1;
      uint16_t FLTTRIEN:1;
      uint16_t FLTOUT:1;
      uint16_t FLTMD:1;
    };
    struct {
      uint16_t SYNCSEL0:1;
      uint16_t SYNCSEL1:1;
      uint16_t SYNCSEL2:1;
      uint16_t SYNCSEL3:1;
      uint16_t SYNCSEL4:1;
      uint16_t :4;
      uint16_t DCB0:1;
      uint16_t DCB1:1;
      uint16_t :4;
      uint16_t FLTMODE:1;
    };
  };
} OC7CON2BITS;
extern volatile OC7CON2BITS OC7CON2bits __attribute__((__sfr__));


#define OC7RS OC7RS
extern volatile uint16_t OC7RS __attribute__((__sfr__));
#define OC7R OC7R
extern volatile uint16_t OC7R __attribute__((__sfr__));
#define OC7TMR OC7TMR
extern volatile uint16_t OC7TMR __attribute__((__sfr__));
#define I2C1RCV I2C1RCV
extern volatile uint16_t I2C1RCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile uint16_t I2C1TRN __attribute__((__sfr__));
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

#define I2C1STAT I2C1STAT
extern volatile uint16_t I2C1STAT __attribute__((__sfr__));
__extension__ typedef struct tagI2C1STATBITS {
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
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile uint16_t I2C1ADD __attribute__((__sfr__));
#define I2C1MSK I2C1MSK
extern volatile uint16_t I2C1MSK __attribute__((__sfr__));
#define I2C2RCV I2C2RCV
extern volatile uint16_t I2C2RCV __attribute__((__sfr__));
#define I2C2TRN I2C2TRN
extern volatile uint16_t I2C2TRN __attribute__((__sfr__));
#define I2C2BRG I2C2BRG
extern volatile uint16_t I2C2BRG __attribute__((__sfr__));
#define I2C2CON I2C2CON
extern volatile uint16_t I2C2CON __attribute__((__sfr__));
typedef struct tagI2C2CONBITS {
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
} I2C2CONBITS;
extern volatile I2C2CONBITS I2C2CONbits __attribute__((__sfr__));

#define I2C2STAT I2C2STAT
extern volatile uint16_t I2C2STAT __attribute__((__sfr__));
__extension__ typedef struct tagI2C2STATBITS {
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
} I2C2STATBITS;
extern volatile I2C2STATBITS I2C2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile uint16_t I2C2ADD __attribute__((__sfr__));
#define I2C2MSK I2C2MSK
extern volatile uint16_t I2C2MSK __attribute__((__sfr__));

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

#define UART1 UART1
extern volatile UART UART1 __attribute__((__sfr__));

#define U1MODE U1MODE
extern volatile uint16_t U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t RXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
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
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
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
typedef struct tagU1TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

#define U1RXREG U1RXREG
extern volatile uint16_t U1RXREG __attribute__((__sfr__));
typedef struct tagU1RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
} U1RXREGBITS;
extern volatile U1RXREGBITS U1RXREGbits __attribute__((__sfr__));

#define U1BRG U1BRG
extern volatile uint16_t U1BRG __attribute__((__sfr__));

#define UART2 UART2
extern volatile UART UART2 __attribute__((__sfr__));

#define U2MODE U2MODE
extern volatile uint16_t U2MODE __attribute__((__sfr__));
__extension__ typedef struct tagU2MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t RXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
    };
  };
} U2MODEBITS;
extern volatile U2MODEBITS U2MODEbits __attribute__((__sfr__));

#define U2STA U2STA
extern volatile uint16_t U2STA __attribute__((__sfr__));
__extension__ typedef struct tagU2STABITS {
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
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

#define U2TXREG U2TXREG
extern volatile uint16_t U2TXREG __attribute__((__sfr__));
typedef struct tagU2TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U2TXREGBITS;
extern volatile U2TXREGBITS U2TXREGbits __attribute__((__sfr__));

#define U2RXREG U2RXREG
extern volatile uint16_t U2RXREG __attribute__((__sfr__));
typedef struct tagU2RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
} U2RXREGBITS;
extern volatile U2RXREGBITS U2RXREGbits __attribute__((__sfr__));

#define U2BRG U2BRG
extern volatile uint16_t U2BRG __attribute__((__sfr__));

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

#define SPI1 SPI1
extern volatile SPI SPI1 __attribute__((__sfr__));

#define SPI1STAT SPI1STAT
extern volatile uint16_t SPI1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI1STATBITS {
  union {
    struct {
      uint16_t SPIRBF:1;
      uint16_t SPITBF:1;
      uint16_t SISEL:3;
      uint16_t SRXMPT:1;
      uint16_t SPIROV:1;
      uint16_t SRMPT:1;
      uint16_t SPIBEC:3;
      uint16_t :2;
      uint16_t SPISIDL:1;
      uint16_t :1;
      uint16_t SPIEN:1;
    };
    struct {
      uint16_t :2;
      uint16_t SISEL0:1;
      uint16_t SISEL1:1;
      uint16_t SISEL2:1;
      uint16_t :3;
      uint16_t SPIBEC0:1;
      uint16_t SPIBEC1:1;
      uint16_t SPIBEC2:1;
    };
  };
} SPI1STATBITS;
extern volatile SPI1STATBITS SPI1STATbits __attribute__((__sfr__));

#define SPI1CON1 SPI1CON1
extern volatile uint16_t SPI1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CON1BITS {
  union {
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t DISSCK:1;
    };
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
    };
  };
} SPI1CON1BITS;
extern volatile SPI1CON1BITS SPI1CON1bits __attribute__((__sfr__));

#define SPI1CON2 SPI1CON2
extern volatile uint16_t SPI1CON2 __attribute__((__sfr__));
typedef struct tagSPI1CON2BITS {
  uint16_t SPIBEN:1;
  uint16_t SPIFE:1;
  uint16_t :11;
  uint16_t SPIFPOL:1;
  uint16_t SPIFSD:1;
  uint16_t FRMEN:1;
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile uint16_t SPI1BUF __attribute__((__sfr__));

#define UART3 UART3
extern volatile UART UART3 __attribute__((__sfr__));

#define U3MODE U3MODE
extern volatile uint16_t U3MODE __attribute__((__sfr__));
__extension__ typedef struct tagU3MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t RXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
    };
  };
} U3MODEBITS;
extern volatile U3MODEBITS U3MODEbits __attribute__((__sfr__));

#define U3STA U3STA
extern volatile uint16_t U3STA __attribute__((__sfr__));
__extension__ typedef struct tagU3STABITS {
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
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U3STABITS;
extern volatile U3STABITS U3STAbits __attribute__((__sfr__));

#define U3TXREG U3TXREG
extern volatile uint16_t U3TXREG __attribute__((__sfr__));
typedef struct tagU3TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U3TXREGBITS;
extern volatile U3TXREGBITS U3TXREGbits __attribute__((__sfr__));

#define U3RXREG U3RXREG
extern volatile uint16_t U3RXREG __attribute__((__sfr__));
typedef struct tagU3RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
} U3RXREGBITS;
extern volatile U3RXREGBITS U3RXREGbits __attribute__((__sfr__));

#define U3BRG U3BRG
extern volatile uint16_t U3BRG __attribute__((__sfr__));

#define SPI2 SPI2
extern volatile SPI SPI2 __attribute__((__sfr__));

#define SPI2STAT SPI2STAT
extern volatile uint16_t SPI2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI2STATBITS {
  union {
    struct {
      uint16_t SPIRBF:1;
      uint16_t SPITBF:1;
      uint16_t SISEL:3;
      uint16_t SRXMPT:1;
      uint16_t SPIROV:1;
      uint16_t SRMPT:1;
      uint16_t SPIBEC:3;
      uint16_t :2;
      uint16_t SPISIDL:1;
      uint16_t :1;
      uint16_t SPIEN:1;
    };
    struct {
      uint16_t :2;
      uint16_t SISEL0:1;
      uint16_t SISEL1:1;
      uint16_t SISEL2:1;
      uint16_t :3;
      uint16_t SPIBEC0:1;
      uint16_t SPIBEC1:1;
      uint16_t SPIBEC2:1;
    };
  };
} SPI2STATBITS;
extern volatile SPI2STATBITS SPI2STATbits __attribute__((__sfr__));

#define SPI2CON1 SPI2CON1
extern volatile uint16_t SPI2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI2CON1BITS {
  union {
    struct {
      uint16_t PPRE:2;
      uint16_t SPRE:3;
      uint16_t MSTEN:1;
      uint16_t CKP:1;
      uint16_t SSEN:1;
      uint16_t CKE:1;
      uint16_t SMP:1;
      uint16_t MODE16:1;
      uint16_t DISSDO:1;
      uint16_t DISSCK:1;
    };
    struct {
      uint16_t PPRE0:1;
      uint16_t PPRE1:1;
      uint16_t SPRE0:1;
      uint16_t SPRE1:1;
      uint16_t SPRE2:1;
    };
  };
} SPI2CON1BITS;
extern volatile SPI2CON1BITS SPI2CON1bits __attribute__((__sfr__));

#define SPI2CON2 SPI2CON2
extern volatile uint16_t SPI2CON2 __attribute__((__sfr__));
typedef struct tagSPI2CON2BITS {
  uint16_t SPIBEN:1;
  uint16_t SPIFE:1;
  uint16_t :11;
  uint16_t SPIFPOL:1;
  uint16_t SPIFSD:1;
  uint16_t FRMEN:1;
} SPI2CON2BITS;
extern volatile SPI2CON2BITS SPI2CON2bits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile uint16_t SPI2BUF __attribute__((__sfr__));

#define UART4 UART4
extern volatile UART UART4 __attribute__((__sfr__));

#define U4MODE U4MODE
extern volatile uint16_t U4MODE __attribute__((__sfr__));
__extension__ typedef struct tagU4MODEBITS {
  union {
    struct {
      uint16_t STSEL:1;
      uint16_t PDSEL:2;
      uint16_t BRGH:1;
      uint16_t RXINV:1;
      uint16_t ABAUD:1;
      uint16_t LPBACK:1;
      uint16_t WAKE:1;
      uint16_t UEN:2;
      uint16_t :1;
      uint16_t RTSMD:1;
      uint16_t IREN:1;
      uint16_t USIDL:1;
      uint16_t :1;
      uint16_t UARTEN:1;
    };
    struct {
      uint16_t :1;
      uint16_t PDSEL0:1;
      uint16_t PDSEL1:1;
      uint16_t :5;
      uint16_t UEN0:1;
      uint16_t UEN1:1;
    };
  };
} U4MODEBITS;
extern volatile U4MODEBITS U4MODEbits __attribute__((__sfr__));

#define U4STA U4STA
extern volatile uint16_t U4STA __attribute__((__sfr__));
__extension__ typedef struct tagU4STABITS {
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
      uint16_t :1;
      uint16_t UTXISEL0:1;
      uint16_t UTXINV:1;
      uint16_t UTXISEL1:1;
    };
    struct {
      uint16_t :6;
      uint16_t URXISEL0:1;
      uint16_t URXISEL1:1;
    };
  };
} U4STABITS;
extern volatile U4STABITS U4STAbits __attribute__((__sfr__));

#define U4TXREG U4TXREG
extern volatile uint16_t U4TXREG __attribute__((__sfr__));
typedef struct tagU4TXREGBITS {
  uint16_t UTXREG0:1;
  uint16_t UTXREG1:1;
  uint16_t UTXREG2:1;
  uint16_t UTXREG3:1;
  uint16_t UTXREG4:1;
  uint16_t UTXREG5:1;
  uint16_t UTXREG6:1;
  uint16_t UTXREG7:1;
  uint16_t UTXREG8:1;
} U4TXREGBITS;
extern volatile U4TXREGBITS U4TXREGbits __attribute__((__sfr__));

#define U4RXREG U4RXREG
extern volatile uint16_t U4RXREG __attribute__((__sfr__));
typedef struct tagU4RXREGBITS {
  uint16_t URXREG0:1;
  uint16_t URXREG1:1;
  uint16_t URXREG2:1;
  uint16_t URXREG3:1;
  uint16_t URXREG4:1;
  uint16_t URXREG5:1;
  uint16_t URXREG6:1;
  uint16_t URXREG7:1;
  uint16_t URXREG8:1;
} U4RXREGBITS;
extern volatile U4RXREGBITS U4RXREGbits __attribute__((__sfr__));

#define U4BRG U4BRG
extern volatile uint16_t U4BRG __attribute__((__sfr__));
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

#define ODCB ODCB
extern volatile uint16_t ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  uint16_t ODB0:1;
  uint16_t ODB1:1;
  uint16_t ODB2:1;
  uint16_t ODB3:1;
  uint16_t ODB4:1;
  uint16_t ODB5:1;
  uint16_t ODB6:1;
  uint16_t ODB7:1;
  uint16_t ODB8:1;
  uint16_t ODB9:1;
  uint16_t ODB10:1;
  uint16_t ODB11:1;
  uint16_t ODB12:1;
  uint16_t ODB13:1;
  uint16_t ODB14:1;
  uint16_t ODB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define TRISC TRISC
extern volatile uint16_t TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  uint16_t :12;
  uint16_t TRISC12:1;
  uint16_t :2;
  uint16_t TRISC15:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile uint16_t PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  uint16_t :12;
  uint16_t RC12:1;
  uint16_t RC13:1;
  uint16_t RC14:1;
  uint16_t RC15:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile uint16_t LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  uint16_t :12;
  uint16_t LATC12:1;
  uint16_t LATC13:1;
  uint16_t LATC14:1;
  uint16_t LATC15:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define ODCC ODCC
extern volatile uint16_t ODCC __attribute__((__sfr__));
typedef struct tagODCCBITS {
  uint16_t :12;
  uint16_t ODC12:1;
  uint16_t ODC13:1;
  uint16_t ODC14:1;
  uint16_t ODC15:1;
} ODCCBITS;
extern volatile ODCCBITS ODCCbits __attribute__((__sfr__));

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

#define ODCD ODCD
extern volatile uint16_t ODCD __attribute__((__sfr__));
typedef struct tagODCDBITS {
  uint16_t ODD0:1;
  uint16_t ODD1:1;
  uint16_t ODD2:1;
  uint16_t ODD3:1;
  uint16_t ODD4:1;
  uint16_t ODD5:1;
  uint16_t ODD6:1;
  uint16_t ODD7:1;
  uint16_t ODD8:1;
  uint16_t ODD9:1;
  uint16_t ODD10:1;
  uint16_t ODD11:1;
} ODCDBITS;
extern volatile ODCDBITS ODCDbits __attribute__((__sfr__));

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

#define ODCE ODCE
extern volatile uint16_t ODCE __attribute__((__sfr__));
typedef struct tagODCEBITS {
  uint16_t ODE0:1;
  uint16_t ODE1:1;
  uint16_t ODE2:1;
  uint16_t ODE3:1;
  uint16_t ODE4:1;
  uint16_t ODE5:1;
  uint16_t ODE6:1;
  uint16_t ODE7:1;
} ODCEBITS;
extern volatile ODCEBITS ODCEbits __attribute__((__sfr__));

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

#define ODCF ODCF
extern volatile uint16_t ODCF __attribute__((__sfr__));
typedef struct tagODCFBITS {
  uint16_t ODF0:1;
  uint16_t ODF1:1;
  uint16_t ODF2:1;
  uint16_t ODF3:1;
  uint16_t ODF4:1;
  uint16_t ODF5:1;
  uint16_t ODF6:1;
} ODCFBITS;
extern volatile ODCFBITS ODCFbits __attribute__((__sfr__));

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

#define ODCG ODCG
extern volatile uint16_t ODCG __attribute__((__sfr__));
typedef struct tagODCGBITS {
  uint16_t :2;
  uint16_t ODG2:1;
  uint16_t ODG3:1;
  uint16_t :2;
  uint16_t ODG6:1;
  uint16_t ODG7:1;
  uint16_t ODG8:1;
  uint16_t ODG9:1;
} ODCGBITS;
extern volatile ODCGBITS ODCGbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile uint16_t PADCFG1 __attribute__((__sfr__));
typedef struct tagPADCFG1BITS {
  uint16_t PMPTTL:1;
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile uint16_t ADC1BUF0 __attribute__((__sfr__));
#define ADC1BUF1 ADC1BUF1
extern volatile uint16_t ADC1BUF1 __attribute__((__sfr__));
#define ADC1BUF2 ADC1BUF2
extern volatile uint16_t ADC1BUF2 __attribute__((__sfr__));
#define ADC1BUF3 ADC1BUF3
extern volatile uint16_t ADC1BUF3 __attribute__((__sfr__));
#define ADC1BUF4 ADC1BUF4
extern volatile uint16_t ADC1BUF4 __attribute__((__sfr__));
#define ADC1BUF5 ADC1BUF5
extern volatile uint16_t ADC1BUF5 __attribute__((__sfr__));
#define ADC1BUF6 ADC1BUF6
extern volatile uint16_t ADC1BUF6 __attribute__((__sfr__));
#define ADC1BUF7 ADC1BUF7
extern volatile uint16_t ADC1BUF7 __attribute__((__sfr__));
#define ADC1BUF8 ADC1BUF8
extern volatile uint16_t ADC1BUF8 __attribute__((__sfr__));
#define ADC1BUF9 ADC1BUF9
extern volatile uint16_t ADC1BUF9 __attribute__((__sfr__));
#define ADC1BUF10 ADC1BUF10
extern volatile uint16_t ADC1BUF10 __attribute__((__sfr__));
#define ADC1BUF11 ADC1BUF11
extern volatile uint16_t ADC1BUF11 __attribute__((__sfr__));
#define ADC1BUF12 ADC1BUF12
extern volatile uint16_t ADC1BUF12 __attribute__((__sfr__));
#define ADC1BUF13 ADC1BUF13
extern volatile uint16_t ADC1BUF13 __attribute__((__sfr__));
#define ADC1BUF14 ADC1BUF14
extern volatile uint16_t ADC1BUF14 __attribute__((__sfr__));
#define ADC1BUF15 ADC1BUF15
extern volatile uint16_t ADC1BUF15 __attribute__((__sfr__));
#define ADC1BUF24 ADC1BUF24
extern volatile uint16_t ADC1BUF24 __attribute__((__sfr__));
#define ADC1BUF25 ADC1BUF25
extern volatile uint16_t ADC1BUF25 __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile uint16_t AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t :1;
      uint16_t SSRC:4;
      uint16_t FORM:2;
      uint16_t MODE12:1;
      uint16_t DMAEN:1;
      uint16_t DMABM:1;
      uint16_t ADSIDL:1;
      uint16_t :1;
      uint16_t ADON:1;
    };
    struct {
      uint16_t :4;
      uint16_t SSRC0:1;
      uint16_t SSRC1:1;
      uint16_t SSRC2:1;
      uint16_t SSRC3:1;
      uint16_t FORM0:1;
      uint16_t FORM1:1;
    };
  };
} AD1CON1BITS;
extern volatile AD1CON1BITS AD1CON1bits __attribute__((__sfr__));

#define AD1CON2 AD1CON2
extern volatile uint16_t AD1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON2BITS {
  union {
    struct {
      uint16_t ALTS:1;
      uint16_t BUFM:1;
      uint16_t SMPI:5;
      uint16_t BUFS:1;
      uint16_t :2;
      uint16_t CSCNA:1;
      uint16_t BUFREGEN:1;
      uint16_t OFFCAL:1;
      uint16_t NVCFG0:1;
      uint16_t PVCFG:2;
    };
    struct {
      uint16_t :2;
      uint16_t SMPI0:1;
      uint16_t SMPI1:1;
      uint16_t SMPI2:1;
      uint16_t SMPI3:1;
      uint16_t SMPI4:1;
      uint16_t :7;
      uint16_t PCVFG0:1;
      uint16_t PCVFG1:1;
    };
  };
} AD1CON2BITS;
extern volatile AD1CON2BITS AD1CON2bits __attribute__((__sfr__));

#define AD1CON3 AD1CON3
extern volatile uint16_t AD1CON3 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON3BITS {
  union {
    struct {
      uint16_t ADCS:8;
      uint16_t SAMC:5;
      uint16_t PUMPEN:1;
      uint16_t EXTSAM:1;
      uint16_t ADRC:1;
    };
    struct {
      uint16_t ADCS0:1;
      uint16_t ADCS1:1;
      uint16_t ADCS2:1;
      uint16_t ADCS3:1;
      uint16_t ADCS4:1;
      uint16_t ADCS5:1;
      uint16_t ADCS6:1;
      uint16_t ADCS7:1;
      uint16_t SAMC0:1;
      uint16_t SAMC1:1;
      uint16_t SAMC2:1;
      uint16_t SAMC3:1;
      uint16_t SAMC4:1;
    };
  };
} AD1CON3BITS;
extern volatile AD1CON3BITS AD1CON3bits __attribute__((__sfr__));

#define AD1CHS AD1CHS
extern volatile uint16_t AD1CHS __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHSBITS {
  union {
    struct {
      uint16_t CH0SA:5;
      uint16_t CH0NA:3;
      uint16_t CH0SB:5;
      uint16_t CH0NB:3;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t CH0NA0:1;
      uint16_t CH0NA1:1;
      uint16_t CH0NA2:1;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
      uint16_t CH0NB0:1;
      uint16_t CH0NB1:1;
      uint16_t CH0NB2:1;
    };
  };
} AD1CHSBITS;
extern volatile AD1CHSBITS AD1CHSbits __attribute__((__sfr__));

#define AD1CHS0 AD1CHS0
extern volatile uint16_t AD1CHS0 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS0BITS {
  union {
    struct {
      uint16_t CH0SA:5;
      uint16_t CH0NA:3;
      uint16_t CH0SB:5;
      uint16_t CH0NB:3;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t CH0NA0:1;
      uint16_t CH0NA1:1;
      uint16_t CH0NA2:1;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
      uint16_t CH0NB0:1;
      uint16_t CH0NB1:1;
      uint16_t CH0NB2:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile uint16_t AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  uint16_t CSS16:1;
  uint16_t CSS17:1;
  uint16_t CSS18:1;
  uint16_t CSS19:1;
  uint16_t CSS20:1;
  uint16_t CSS21:1;
  uint16_t CSS22:1;
  uint16_t CSS23:1;
  uint16_t CSS24:1;
  uint16_t CSS25:1;
  uint16_t CSS26:1;
  uint16_t CSS27:1;
  uint16_t CSS28:1;
  uint16_t CSS29:1;
  uint16_t CSS30:1;
} AD1CSSHBITS;
extern volatile AD1CSSHBITS AD1CSSHbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  uint16_t CSS0:1;
  uint16_t CSS1:1;
  uint16_t CSS2:1;
  uint16_t CSS3:1;
  uint16_t CSS4:1;
  uint16_t CSS5:1;
  uint16_t CSS6:1;
  uint16_t CSS7:1;
  uint16_t CSS8:1;
  uint16_t CSS9:1;
  uint16_t CSS10:1;
  uint16_t CSS11:1;
  uint16_t CSS12:1;
  uint16_t CSS13:1;
  uint16_t CSS14:1;
  uint16_t CSS15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define AD1CON4 AD1CON4
extern volatile uint16_t AD1CON4 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON4BITS {
  union {
    struct {
      uint16_t DMABL:3;
    };
    struct {
      uint16_t DMABL0:1;
      uint16_t DMABL1:1;
      uint16_t DMABL2:1;
    };
  };
} AD1CON4BITS;
extern volatile AD1CON4BITS AD1CON4bits __attribute__((__sfr__));

#define AD1CON5 AD1CON5
extern volatile uint16_t AD1CON5 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON5BITS {
  union {
    struct {
      uint16_t CM:2;
      uint16_t WM:2;
      uint16_t :4;
      uint16_t ASINT:2;
      uint16_t :2;
      uint16_t BGREQ:1;
      uint16_t CTMREQ:1;
      uint16_t LPEN:1;
      uint16_t ASEN:1;
    };
    struct {
      uint16_t CM0:1;
      uint16_t CM1:1;
      uint16_t WM0:1;
      uint16_t WM1:1;
      uint16_t :4;
      uint16_t ASINT0:1;
      uint16_t ASINT1:1;
    };
  };
} AD1CON5BITS;
extern volatile AD1CON5BITS AD1CON5bits __attribute__((__sfr__));

#define AD1CHITL AD1CHITL
extern volatile uint16_t AD1CHITL __attribute__((__sfr__));
typedef struct tagAD1CHITLBITS {
  uint16_t CHH0:1;
  uint16_t CHH1:1;
  uint16_t CHH2:1;
  uint16_t CHH3:1;
  uint16_t CHH4:1;
  uint16_t CHH5:1;
  uint16_t CHH6:1;
  uint16_t CHH7:1;
  uint16_t CHH8:1;
  uint16_t CHH9:1;
  uint16_t CHH10:1;
  uint16_t CHH11:1;
  uint16_t CHH12:1;
  uint16_t CHH13:1;
  uint16_t CHH14:1;
  uint16_t CHH15:1;
} AD1CHITLBITS;
extern volatile AD1CHITLBITS AD1CHITLbits __attribute__((__sfr__));

#define CTMUCON1 CTMUCON1
extern volatile uint16_t CTMUCON1 __attribute__((__sfr__));
typedef struct tagCTMUCON1BITS {
  uint16_t :8;
  uint16_t CTTRIG:1;
  uint16_t IDISSEN:1;
  uint16_t EDGSEQEN:1;
  uint16_t EDGEN:1;
  uint16_t TGEN:1;
  uint16_t CTMUSIDL:1;
  uint16_t :1;
  uint16_t CTMUEN:1;
} CTMUCON1BITS;
extern volatile CTMUCON1BITS CTMUCON1bits __attribute__((__sfr__));

#define CTMUCON2 CTMUCON2
extern volatile uint16_t CTMUCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2BITS {
  union {
    struct {
      uint16_t :2;
      uint16_t EDG2SEL:4;
      uint16_t EDG2POL:1;
      uint16_t EDG2MOD:1;
      uint16_t EDG1STAT:1;
      uint16_t EDG2STAT:1;
      uint16_t EDG1SEL:4;
      uint16_t EDG1POL:1;
      uint16_t EDG1MOD:1;
    };
    struct {
      uint16_t :2;
      uint16_t EDG2SEL0:1;
      uint16_t EDG2SEL1:1;
      uint16_t EDG2SEL2:1;
      uint16_t EDG2SEL3:1;
      uint16_t :4;
      uint16_t EDG1SEL0:1;
      uint16_t EDG1SEL1:1;
      uint16_t EDG1SEL2:1;
      uint16_t EDG1SEL3:1;
    };
  };
} CTMUCON2BITS;
extern volatile CTMUCON2BITS CTMUCON2bits __attribute__((__sfr__));

#define CTMUICON CTMUICON
extern volatile uint16_t CTMUICON __attribute__((__sfr__));
__extension__ typedef struct tagCTMUICONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t IRNG:2;
      uint16_t ITRIM:6;
    };
    struct {
      uint16_t :8;
      uint16_t IRNG0:1;
      uint16_t IRNG1:1;
      uint16_t ITRIM0:1;
      uint16_t ITRIM1:1;
      uint16_t ITRIM2:1;
      uint16_t ITRIM3:1;
      uint16_t ITRIM4:1;
      uint16_t ITRIM5:1;
    };
  };
} CTMUICONBITS;
extern volatile CTMUICONBITS CTMUICONbits __attribute__((__sfr__));

#define AD1CTMENH AD1CTMENH
extern volatile uint16_t AD1CTMENH __attribute__((__sfr__));
typedef struct tagAD1CTMENHBITS {
  uint16_t CTMEN16:1;
  uint16_t CTMEN17:1;
  uint16_t CTMEN18:1;
  uint16_t CTMEN19:1;
  uint16_t CTMEN20:1;
  uint16_t CTMEN21:1;
  uint16_t CTMEN22:1;
  uint16_t CTMEN23:1;
  uint16_t CTMEN24:1;
  uint16_t CTMEN25:1;
  uint16_t CTMEN26:1;
  uint16_t CTMEN27:1;
  uint16_t CTMEN28:1;
  uint16_t CTMEN29:1;
  uint16_t CTMEN30:1;
  uint16_t CTMEN31:1;
} AD1CTMENHBITS;
extern volatile AD1CTMENHBITS AD1CTMENHbits __attribute__((__sfr__));

#define AD1CTMENL AD1CTMENL
extern volatile uint16_t AD1CTMENL __attribute__((__sfr__));
typedef struct tagAD1CTMENLBITS {
  uint16_t CTMEN0:1;
  uint16_t CTMEN1:1;
  uint16_t CTMEN2:1;
  uint16_t CTMEN3:1;
  uint16_t CTMEN4:1;
  uint16_t CTMEN5:1;
  uint16_t CTMEN6:1;
  uint16_t CTMEN7:1;
  uint16_t CTMEN8:1;
  uint16_t CTMEN9:1;
  uint16_t CTMEN10:1;
  uint16_t CTMEN11:1;
  uint16_t CTMEN12:1;
  uint16_t CTMEN13:1;
  uint16_t CTMEN14:1;
  uint16_t CTMEN15:1;
} AD1CTMENLBITS;
extern volatile AD1CTMENLBITS AD1CTMENLbits __attribute__((__sfr__));

#define AD1DMBUF AD1DMBUF
extern volatile uint16_t AD1DMBUF __attribute__((__sfr__));
#define DMACON DMACON
extern volatile uint16_t DMACON __attribute__((__sfr__));
typedef struct tagDMACONBITS {
  uint16_t PRSSEL:1;
  uint16_t :14;
  uint16_t DMAEN:1;
} DMACONBITS;
extern volatile DMACONBITS DMACONbits __attribute__((__sfr__));

#define DMABUF DMABUF
extern volatile uint16_t DMABUF __attribute__((__sfr__));
#define DMAL DMAL
extern volatile uint16_t DMAL __attribute__((__sfr__));
#define DMAH DMAH
extern volatile uint16_t DMAH __attribute__((__sfr__));
#define DMACH0 DMACH0
extern volatile uint16_t DMACH0 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH0BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH0BITS;
extern volatile DMACH0BITS DMACH0bits __attribute__((__sfr__));

#define DMAINT0 DMAINT0
extern volatile uint16_t DMAINT0 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT0BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT0BITS;
extern volatile DMAINT0BITS DMAINT0bits __attribute__((__sfr__));

#define DMASRC0 DMASRC0
extern volatile uint16_t DMASRC0 __attribute__((__sfr__));
#define DMADST0 DMADST0
extern volatile uint16_t DMADST0 __attribute__((__sfr__));
#define DMACNT0 DMACNT0
extern volatile uint16_t DMACNT0 __attribute__((__sfr__));
#define DMACH1 DMACH1
extern volatile uint16_t DMACH1 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH1BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH1BITS;
extern volatile DMACH1BITS DMACH1bits __attribute__((__sfr__));

#define DMAINT1 DMAINT1
extern volatile uint16_t DMAINT1 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT1BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT1BITS;
extern volatile DMAINT1BITS DMAINT1bits __attribute__((__sfr__));

#define DMASRC1 DMASRC1
extern volatile uint16_t DMASRC1 __attribute__((__sfr__));
#define DMADST1 DMADST1
extern volatile uint16_t DMADST1 __attribute__((__sfr__));
#define DMACNT1 DMACNT1
extern volatile uint16_t DMACNT1 __attribute__((__sfr__));
#define DMACH2 DMACH2
extern volatile uint16_t DMACH2 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH2BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH2BITS;
extern volatile DMACH2BITS DMACH2bits __attribute__((__sfr__));

#define DMAINT2 DMAINT2
extern volatile uint16_t DMAINT2 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT2BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT2BITS;
extern volatile DMAINT2BITS DMAINT2bits __attribute__((__sfr__));

#define DMASRC2 DMASRC2
extern volatile uint16_t DMASRC2 __attribute__((__sfr__));
#define DMADST2 DMADST2
extern volatile uint16_t DMADST2 __attribute__((__sfr__));
#define DMACNT2 DMACNT2
extern volatile uint16_t DMACNT2 __attribute__((__sfr__));
#define DMACH3 DMACH3
extern volatile uint16_t DMACH3 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH3BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH3BITS;
extern volatile DMACH3BITS DMACH3bits __attribute__((__sfr__));

#define DMAINT3 DMAINT3
extern volatile uint16_t DMAINT3 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT3BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT3BITS;
extern volatile DMAINT3BITS DMAINT3bits __attribute__((__sfr__));

#define DMASRC3 DMASRC3
extern volatile uint16_t DMASRC3 __attribute__((__sfr__));
#define DMADST3 DMADST3
extern volatile uint16_t DMADST3 __attribute__((__sfr__));
#define DMACNT3 DMACNT3
extern volatile uint16_t DMACNT3 __attribute__((__sfr__));
#define DMACH4 DMACH4
extern volatile uint16_t DMACH4 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH4BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH4BITS;
extern volatile DMACH4BITS DMACH4bits __attribute__((__sfr__));

#define DMAINT4 DMAINT4
extern volatile uint16_t DMAINT4 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT4BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT4BITS;
extern volatile DMAINT4BITS DMAINT4bits __attribute__((__sfr__));

#define DMASRC4 DMASRC4
extern volatile uint16_t DMASRC4 __attribute__((__sfr__));
#define DMADST4 DMADST4
extern volatile uint16_t DMADST4 __attribute__((__sfr__));
#define DMACNT4 DMACNT4
extern volatile uint16_t DMACNT4 __attribute__((__sfr__));
#define DMACH5 DMACH5
extern volatile uint16_t DMACH5 __attribute__((__sfr__));
__extension__ typedef struct tagDMACH5BITS {
  union {
    struct {
      uint16_t CHEN:1;
      uint16_t BYTE:1;
      uint16_t TRMODE:2;
      uint16_t DAMODE:2;
      uint16_t SAMODE:2;
      uint16_t CHREQ:1;
      uint16_t RELOAD:1;
      uint16_t NULLW:1;
    };
    struct {
      uint16_t :2;
      uint16_t TRMODE0:1;
      uint16_t TRMODE1:1;
      uint16_t DAMODE0:1;
      uint16_t DAMODE1:1;
      uint16_t SAMODE0:1;
      uint16_t SAMODE1:1;
    };
  };
} DMACH5BITS;
extern volatile DMACH5BITS DMACH5bits __attribute__((__sfr__));

#define DMAINT5 DMAINT5
extern volatile uint16_t DMAINT5 __attribute__((__sfr__));
__extension__ typedef struct tagDMAINT5BITS {
  union {
    struct {
      uint16_t HALFEN:1;
      uint16_t :2;
      uint16_t OVRUNIF:1;
      uint16_t HALFIF:1;
      uint16_t DONEIF:1;
      uint16_t LOWIF:1;
      uint16_t HIGHIF:1;
      uint16_t CHSEL:6;
      uint16_t :1;
      uint16_t DBUFWF:1;
    };
    struct {
      uint16_t :8;
      uint16_t CHSEL0:1;
      uint16_t CHSEL1:1;
      uint16_t CHSEL2:1;
      uint16_t CHSEL3:1;
      uint16_t CHSEL4:1;
      uint16_t CHSEL5:1;
    };
  };
} DMAINT5BITS;
extern volatile DMAINT5BITS DMAINT5bits __attribute__((__sfr__));

#define DMASRC5 DMASRC5
extern volatile uint16_t DMASRC5 __attribute__((__sfr__));
#define DMADST5 DMADST5
extern volatile uint16_t DMADST5 __attribute__((__sfr__));
#define DMACNT5 DMACNT5
extern volatile uint16_t DMACNT5 __attribute__((__sfr__));
#define ANCFG ANCFG
extern volatile uint16_t ANCFG __attribute__((__sfr__));
typedef struct tagANCFGBITS {
  uint16_t VBGEN:1;
  uint16_t VBG2EN:1;
  uint16_t VBG6EN:1;
} ANCFGBITS;
extern volatile ANCFGBITS ANCFGbits __attribute__((__sfr__));

#define ANSB ANSB
extern volatile uint16_t ANSB __attribute__((__sfr__));
__extension__ typedef struct tagANSBBITS {
  union {
    struct {
      uint16_t ANSB0:1;
      uint16_t ANSB1:1;
      uint16_t ANSB2:1;
      uint16_t ANSB3:1;
      uint16_t ANSB4:1;
      uint16_t ANSB5:1;
      uint16_t ANSB6:1;
      uint16_t ANSB7:1;
      uint16_t ANSB8:1;
      uint16_t ANSB9:1;
      uint16_t ANSB10:1;
      uint16_t ANSB11:1;
      uint16_t ANSB12:1;
      uint16_t ANSB13:1;
      uint16_t ANSB14:1;
      uint16_t ANSB15:1;
    };
    struct {
      uint16_t ANSELB0:1;
      uint16_t ANSELB1:1;
      uint16_t ANSELB2:1;
      uint16_t ANSELB3:1;
      uint16_t ANSELB4:1;
      uint16_t ANSELB5:1;
      uint16_t ANSELB6:1;
      uint16_t ANSELB7:1;
      uint16_t ANSELB8:1;
      uint16_t ANSELB9:1;
      uint16_t ANSELB10:1;
      uint16_t ANSELB11:1;
      uint16_t ANSELB12:1;
      uint16_t ANSELB13:1;
      uint16_t ANSELB14:1;
      uint16_t ANSELB15:1;
    };
  };
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile uint16_t ANSELB __attribute__((__sfr__));
__extension__ typedef struct tagANSELBBITS {
  union {
    struct {
      uint16_t ANSB0:1;
      uint16_t ANSB1:1;
      uint16_t ANSB2:1;
      uint16_t ANSB3:1;
      uint16_t ANSB4:1;
      uint16_t ANSB5:1;
      uint16_t ANSB6:1;
      uint16_t ANSB7:1;
      uint16_t ANSB8:1;
      uint16_t ANSB9:1;
      uint16_t ANSB10:1;
      uint16_t ANSB11:1;
      uint16_t ANSB12:1;
      uint16_t ANSB13:1;
      uint16_t ANSB14:1;
      uint16_t ANSB15:1;
    };
    struct {
      uint16_t ANSELB0:1;
      uint16_t ANSELB1:1;
      uint16_t ANSELB2:1;
      uint16_t ANSELB3:1;
      uint16_t ANSELB4:1;
      uint16_t ANSELB5:1;
      uint16_t ANSELB6:1;
      uint16_t ANSELB7:1;
      uint16_t ANSELB8:1;
      uint16_t ANSELB9:1;
      uint16_t ANSELB10:1;
      uint16_t ANSELB11:1;
      uint16_t ANSELB12:1;
      uint16_t ANSELB13:1;
      uint16_t ANSELB14:1;
      uint16_t ANSELB15:1;
    };
  };
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define ANSD ANSD
extern volatile uint16_t ANSD __attribute__((__sfr__));
__extension__ typedef struct tagANSDBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t ANSD6:1;
      uint16_t ANSD7:1;
      uint16_t :2;
      uint16_t ANSD10:1;
      uint16_t ANSD11:1;
    };
    struct {
      uint16_t :6;
      uint16_t ANSELD6:1;
      uint16_t ANSELD7:1;
      uint16_t :2;
      uint16_t ANSELD10:1;
      uint16_t ANSELD11:1;
    };
  };
} ANSDBITS;
extern volatile ANSDBITS ANSDbits __attribute__((__sfr__));

#define ANSELD ANSELD
extern volatile uint16_t ANSELD __attribute__((__sfr__));
__extension__ typedef struct tagANSELDBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t ANSD6:1;
      uint16_t ANSD7:1;
      uint16_t :2;
      uint16_t ANSD10:1;
      uint16_t ANSD11:1;
    };
    struct {
      uint16_t :6;
      uint16_t ANSELD6:1;
      uint16_t ANSELD7:1;
      uint16_t :2;
      uint16_t ANSELD10:1;
      uint16_t ANSELD11:1;
    };
  };
} ANSELDBITS;
extern volatile ANSELDBITS ANSELDbits __attribute__((__sfr__));

#define ANSE ANSE
extern volatile uint16_t ANSE __attribute__((__sfr__));
__extension__ typedef struct tagANSEBITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ANSE4:1;
      uint16_t ANSE5:1;
      uint16_t ANSE6:1;
      uint16_t ANSE7:1;
    };
    struct {
      uint16_t :4;
      uint16_t ANSELE4:1;
      uint16_t ANSELE5:1;
      uint16_t ANSELE6:1;
      uint16_t ANSELE7:1;
    };
  };
} ANSEBITS;
extern volatile ANSEBITS ANSEbits __attribute__((__sfr__));

#define ANSELE ANSELE
extern volatile uint16_t ANSELE __attribute__((__sfr__));
__extension__ typedef struct tagANSELEBITS {
  union {
    struct {
      uint16_t :4;
      uint16_t ANSE4:1;
      uint16_t ANSE5:1;
      uint16_t ANSE6:1;
      uint16_t ANSE7:1;
    };
    struct {
      uint16_t :4;
      uint16_t ANSELE4:1;
      uint16_t ANSELE5:1;
      uint16_t ANSELE6:1;
      uint16_t ANSELE7:1;
    };
  };
} ANSELEBITS;
extern volatile ANSELEBITS ANSELEbits __attribute__((__sfr__));

#define ANSELG ANSELG
extern volatile uint16_t ANSELG __attribute__((__sfr__));
__extension__ typedef struct tagANSELGBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t ANSG6:1;
      uint16_t ANSG7:1;
      uint16_t ANSG8:1;
      uint16_t ANSG9:1;
    };
    struct {
      uint16_t :6;
      uint16_t ANSELG6:1;
      uint16_t ANSELG7:1;
      uint16_t ANSELG8:1;
      uint16_t ANSELG9:1;
    };
  };
} ANSELGBITS;
extern volatile ANSELGBITS ANSELGbits __attribute__((__sfr__));

#define ANSG ANSG
extern volatile uint16_t ANSG __attribute__((__sfr__));
__extension__ typedef struct tagANSGBITS {
  union {
    struct {
      uint16_t :6;
      uint16_t ANSG6:1;
      uint16_t ANSG7:1;
      uint16_t ANSG8:1;
      uint16_t ANSG9:1;
    };
    struct {
      uint16_t :6;
      uint16_t ANSELG6:1;
      uint16_t ANSELG7:1;
      uint16_t ANSELG8:1;
      uint16_t ANSELG9:1;
    };
  };
} ANSGBITS;
extern volatile ANSGBITS ANSGbits __attribute__((__sfr__));

#define LCDREG LCDREG
extern volatile uint16_t LCDREG __attribute__((__sfr__));
__extension__ typedef struct tagLCDREGBITS {
  union {
    struct {
      uint16_t CKSEL:2;
      uint16_t MODE13:1;
      uint16_t BIAS:3;
      uint16_t :9;
      uint16_t CPEN:1;
    };
    struct {
      uint16_t CKSEL0:1;
      uint16_t CKSEL1:1;
      uint16_t :1;
      uint16_t BIAS0:1;
      uint16_t BIAS1:1;
      uint16_t BIAS2:1;
    };
  };
} LCDREGBITS;
extern volatile LCDREGBITS LCDREGbits __attribute__((__sfr__));

#define LCDREF LCDREF
extern volatile uint16_t LCDREF __attribute__((__sfr__));
__extension__ typedef struct tagLCDREFBITS {
  union {
    struct {
      uint16_t LRLAT:3;
      uint16_t :1;
      uint16_t LRLBP:2;
      uint16_t LRLAP:2;
      uint16_t VLCD1PE:1;
      uint16_t VLCD2PE:1;
      uint16_t VLCD3PE:1;
      uint16_t LCDCST:3;
      uint16_t :1;
      uint16_t LCDIRE:1;
    };
    struct {
      uint16_t LRLAT0:1;
      uint16_t LRLAT1:1;
      uint16_t LRLAT2:1;
      uint16_t :1;
      uint16_t LRLBP0:1;
      uint16_t LRLBP1:1;
      uint16_t LRLAP0:1;
      uint16_t LRLAP1:1;
      uint16_t :3;
      uint16_t LCDCST0:1;
      uint16_t LCDCST1:1;
      uint16_t LCDCST2:1;
    };
  };
} LCDREFBITS;
extern volatile LCDREFBITS LCDREFbits __attribute__((__sfr__));

#define LCDCON LCDCON
extern volatile uint16_t LCDCON __attribute__((__sfr__));
__extension__ typedef struct tagLCDCONBITS {
  union {
    struct {
      uint16_t LMUX:3;
      uint16_t CS:2;
      uint16_t WERR:1;
      uint16_t SLPEN:1;
      uint16_t :6;
      uint16_t LCDSIDL:1;
      uint16_t :1;
      uint16_t LCDEN:1;
    };
    struct {
      uint16_t LMUX0:1;
      uint16_t LMUX1:1;
      uint16_t LMUX2:1;
      uint16_t CS0:1;
      uint16_t CS1:1;
    };
  };
} LCDCONBITS;
extern volatile LCDCONBITS LCDCONbits __attribute__((__sfr__));

#define LCDPS LCDPS
extern volatile uint16_t LCDPS __attribute__((__sfr__));
__extension__ typedef struct tagLCDPSBITS {
  union {
    struct {
      uint16_t LP:4;
      uint16_t WA:1;
      uint16_t LCDA:1;
      uint16_t BIASMD:1;
      uint16_t WFT:1;
    };
    struct {
      uint16_t LP0:1;
      uint16_t LP1:1;
      uint16_t LP2:1;
      uint16_t LP3:1;
    };
  };
} LCDPSBITS;
extern volatile LCDPSBITS LCDPSbits __attribute__((__sfr__));

#define LCDSE0 LCDSE0
extern volatile uint16_t LCDSE0 __attribute__((__sfr__));
typedef struct tagLCDSE0BITS {
  uint16_t SE00:1;
  uint16_t SE01:1;
  uint16_t SE02:1;
  uint16_t SE03:1;
  uint16_t SE04:1;
  uint16_t SE05:1;
  uint16_t SE06:1;
  uint16_t SE07:1;
  uint16_t SE08:1;
  uint16_t SE09:1;
  uint16_t SE10:1;
  uint16_t SE11:1;
  uint16_t SE12:1;
  uint16_t SE13:1;
  uint16_t SE14:1;
  uint16_t SE15:1;
} LCDSE0BITS;
extern volatile LCDSE0BITS LCDSE0bits __attribute__((__sfr__));

#define LCDSE1 LCDSE1
extern volatile uint16_t LCDSE1 __attribute__((__sfr__));
typedef struct tagLCDSE1BITS {
  uint16_t SE16:1;
  uint16_t SE17:1;
  uint16_t SE18:1;
  uint16_t SE19:1;
  uint16_t SE20:1;
  uint16_t SE21:1;
  uint16_t SE22:1;
  uint16_t SE23:1;
  uint16_t SE24:1;
  uint16_t SE25:1;
  uint16_t SE26:1;
  uint16_t SE27:1;
  uint16_t SE28:1;
  uint16_t SE29:1;
  uint16_t SE30:1;
  uint16_t SE31:1;
} LCDSE1BITS;
extern volatile LCDSE1BITS LCDSE1bits __attribute__((__sfr__));

#define LCDSE2 LCDSE2
extern volatile uint16_t LCDSE2 __attribute__((__sfr__));
typedef struct tagLCDSE2BITS {
  uint16_t :15;
  uint16_t SE47:1;
} LCDSE2BITS;
extern volatile LCDSE2BITS LCDSE2bits __attribute__((__sfr__));

#define LCDSE3 LCDSE3
extern volatile uint16_t LCDSE3 __attribute__((__sfr__));
typedef struct tagLCDSE3BITS {
  uint16_t SE48:1;
} LCDSE3BITS;
extern volatile LCDSE3BITS LCDSE3bits __attribute__((__sfr__));

#define LCDDATA0 LCDDATA0
extern volatile uint16_t LCDDATA0 __attribute__((__sfr__));
typedef struct tagLCDDATA0BITS {
  uint16_t S00C0:1;
  uint16_t S01C0:1;
  uint16_t S02C0:1;
  uint16_t S03C0:1;
  uint16_t S04C0:1;
  uint16_t S05C0:1;
  uint16_t S06C0:1;
  uint16_t S07C0:1;
  uint16_t S08C0:1;
  uint16_t S09C0:1;
  uint16_t S10C0:1;
  uint16_t S11C0:1;
  uint16_t S12C0:1;
  uint16_t S13C0:1;
  uint16_t S14C0:1;
  uint16_t S15C0:1;
} LCDDATA0BITS;
extern volatile LCDDATA0BITS LCDDATA0bits __attribute__((__sfr__));

#define LCDDATA1 LCDDATA1
extern volatile uint16_t LCDDATA1 __attribute__((__sfr__));
typedef struct tagLCDDATA1BITS {
  uint16_t S16C0:1;
  uint16_t S17C0:1;
  uint16_t S18C0:1;
  uint16_t S19C0:1;
  uint16_t S20C0:1;
  uint16_t S21C0:1;
  uint16_t S22C0:1;
  uint16_t S23C0:1;
  uint16_t S24C0:1;
  uint16_t S25C0:1;
  uint16_t S26C0:1;
  uint16_t S27C0:1;
  uint16_t S28C0:1;
  uint16_t S29C0:1;
  uint16_t S30C0:1;
  uint16_t S31C0:1;
} LCDDATA1BITS;
extern volatile LCDDATA1BITS LCDDATA1bits __attribute__((__sfr__));

#define LCDDATA2 LCDDATA2
extern volatile uint16_t LCDDATA2 __attribute__((__sfr__));
typedef struct tagLCDDATA2BITS {
  uint16_t :15;
  uint16_t S47C0:1;
} LCDDATA2BITS;
extern volatile LCDDATA2BITS LCDDATA2bits __attribute__((__sfr__));

#define LCDDATA3 LCDDATA3
extern volatile uint16_t LCDDATA3 __attribute__((__sfr__));
typedef struct tagLCDDATA3BITS {
  uint16_t S48C0:1;
} LCDDATA3BITS;
extern volatile LCDDATA3BITS LCDDATA3bits __attribute__((__sfr__));

#define LCDDATA4 LCDDATA4
extern volatile uint16_t LCDDATA4 __attribute__((__sfr__));
typedef struct tagLCDDATA4BITS {
  uint16_t S00C1:1;
  uint16_t S01C1:1;
  uint16_t S02C1:1;
  uint16_t S03C1:1;
  uint16_t S04C1:1;
  uint16_t S05C1:1;
  uint16_t S06C1:1;
  uint16_t S07C1:1;
  uint16_t S08C1:1;
  uint16_t S09C1:1;
  uint16_t S10C1:1;
  uint16_t S11C1:1;
  uint16_t S12C1:1;
  uint16_t S13C1:1;
  uint16_t S14C1:1;
  uint16_t S15C1:1;
} LCDDATA4BITS;
extern volatile LCDDATA4BITS LCDDATA4bits __attribute__((__sfr__));

#define LCDDATA5 LCDDATA5
extern volatile uint16_t LCDDATA5 __attribute__((__sfr__));
typedef struct tagLCDDATA5BITS {
  uint16_t S16C1:1;
  uint16_t S17C1:1;
  uint16_t S18C1:1;
  uint16_t S19C1:1;
  uint16_t S20C1:1;
  uint16_t S21C1:1;
  uint16_t S22C1:1;
  uint16_t S23C1:1;
  uint16_t S24C1:1;
  uint16_t S25C1:1;
  uint16_t S26C1:1;
  uint16_t S27C1:1;
  uint16_t S28C1:1;
  uint16_t S29C1:1;
  uint16_t S30C1:1;
  uint16_t S31C1:1;
} LCDDATA5BITS;
extern volatile LCDDATA5BITS LCDDATA5bits __attribute__((__sfr__));

#define LCDDATA6 LCDDATA6
extern volatile uint16_t LCDDATA6 __attribute__((__sfr__));
typedef struct tagLCDDATA6BITS {
  uint16_t :15;
  uint16_t S47C1:1;
} LCDDATA6BITS;
extern volatile LCDDATA6BITS LCDDATA6bits __attribute__((__sfr__));

#define LCDDATA7 LCDDATA7
extern volatile uint16_t LCDDATA7 __attribute__((__sfr__));
typedef struct tagLCDDATA7BITS {
  uint16_t S48C1:1;
} LCDDATA7BITS;
extern volatile LCDDATA7BITS LCDDATA7bits __attribute__((__sfr__));

#define LCDDATA8 LCDDATA8
extern volatile uint16_t LCDDATA8 __attribute__((__sfr__));
typedef struct tagLCDDATA8BITS {
  uint16_t S00C2:1;
  uint16_t S01C2:1;
  uint16_t S02C2:1;
  uint16_t S03C2:1;
  uint16_t S04C2:1;
  uint16_t S05C2:1;
  uint16_t S06C2:1;
  uint16_t S07C2:1;
  uint16_t S08C2:1;
  uint16_t S09C2:1;
  uint16_t S10C2:1;
  uint16_t S11C2:1;
  uint16_t S12C2:1;
  uint16_t S13C2:1;
  uint16_t S14C2:1;
  uint16_t S15C2:1;
} LCDDATA8BITS;
extern volatile LCDDATA8BITS LCDDATA8bits __attribute__((__sfr__));

#define LCDDATA9 LCDDATA9
extern volatile uint16_t LCDDATA9 __attribute__((__sfr__));
typedef struct tagLCDDATA9BITS {
  uint16_t S16C2:1;
  uint16_t S17C2:1;
  uint16_t S18C2:1;
  uint16_t S19C2:1;
  uint16_t S20C2:1;
  uint16_t S21C2:1;
  uint16_t S22C2:1;
  uint16_t S23C2:1;
  uint16_t S24C2:1;
  uint16_t S25C2:1;
  uint16_t S26C2:1;
  uint16_t S27C2:1;
  uint16_t S28C2:1;
  uint16_t S29C2:1;
  uint16_t S30C2:1;
  uint16_t S31C2:1;
} LCDDATA9BITS;
extern volatile LCDDATA9BITS LCDDATA9bits __attribute__((__sfr__));

#define LCDDATA10 LCDDATA10
extern volatile uint16_t LCDDATA10 __attribute__((__sfr__));
typedef struct tagLCDDATA10BITS {
  uint16_t :15;
  uint16_t S47C2:1;
} LCDDATA10BITS;
extern volatile LCDDATA10BITS LCDDATA10bits __attribute__((__sfr__));

#define LCDDATA11 LCDDATA11
extern volatile uint16_t LCDDATA11 __attribute__((__sfr__));
typedef struct tagLCDDATA11BITS {
  uint16_t S48C2:1;
} LCDDATA11BITS;
extern volatile LCDDATA11BITS LCDDATA11bits __attribute__((__sfr__));

#define LCDDATA12 LCDDATA12
extern volatile uint16_t LCDDATA12 __attribute__((__sfr__));
typedef struct tagLCDDATA12BITS {
  uint16_t S00C3:1;
  uint16_t S01C3:1;
  uint16_t S02C3:1;
  uint16_t S03C3:1;
  uint16_t S04C3:1;
  uint16_t S05C3:1;
  uint16_t S06C3:1;
  uint16_t S07C3:1;
  uint16_t S08C3:1;
  uint16_t S09C3:1;
  uint16_t S10C3:1;
  uint16_t S11C3:1;
  uint16_t S12C3:1;
  uint16_t S13C3:1;
  uint16_t S14C3:1;
  uint16_t S15C3:1;
} LCDDATA12BITS;
extern volatile LCDDATA12BITS LCDDATA12bits __attribute__((__sfr__));

#define LCDDATA13 LCDDATA13
extern volatile uint16_t LCDDATA13 __attribute__((__sfr__));
typedef struct tagLCDDATA13BITS {
  uint16_t S16C3:1;
  uint16_t S17C3:1;
  uint16_t S18C3:1;
  uint16_t S19C3:1;
  uint16_t S20C3:1;
  uint16_t S21C3:1;
  uint16_t S22C3:1;
  uint16_t S23C3:1;
  uint16_t S24C3:1;
  uint16_t S25C3:1;
  uint16_t S26C3:1;
  uint16_t S27C3:1;
  uint16_t S28C3:1;
  uint16_t S29C3:1;
  uint16_t S30C3:1;
  uint16_t S31C3:1;
} LCDDATA13BITS;
extern volatile LCDDATA13BITS LCDDATA13bits __attribute__((__sfr__));

#define LCDDATA14 LCDDATA14
extern volatile uint16_t LCDDATA14 __attribute__((__sfr__));
typedef struct tagLCDDATA14BITS {
  uint16_t :15;
  uint16_t S47C3:1;
} LCDDATA14BITS;
extern volatile LCDDATA14BITS LCDDATA14bits __attribute__((__sfr__));

#define LCDDATA15 LCDDATA15
extern volatile uint16_t LCDDATA15 __attribute__((__sfr__));
typedef struct tagLCDDATA15BITS {
  uint16_t S48C3:1;
} LCDDATA15BITS;
extern volatile LCDDATA15BITS LCDDATA15bits __attribute__((__sfr__));

#define LCDDATA16 LCDDATA16
extern volatile uint16_t LCDDATA16 __attribute__((__sfr__));
typedef struct tagLCDDATA16BITS {
  uint16_t S00C4:1;
  uint16_t S01C4:1;
  uint16_t S02C4:1;
  uint16_t S03C4:1;
  uint16_t S04C4:1;
  uint16_t S05C4:1;
  uint16_t S06C4:1;
  uint16_t S07C4:1;
  uint16_t S08C4:1;
  uint16_t S09C4:1;
  uint16_t S10C4:1;
  uint16_t S11C4:1;
  uint16_t S12C4:1;
  uint16_t S13C4:1;
  uint16_t S14C4:1;
  uint16_t S15C4:1;
} LCDDATA16BITS;
extern volatile LCDDATA16BITS LCDDATA16bits __attribute__((__sfr__));

#define LCDDATA17 LCDDATA17
extern volatile uint16_t LCDDATA17 __attribute__((__sfr__));
typedef struct tagLCDDATA17BITS {
  uint16_t S16C4:1;
  uint16_t S17C4:1;
  uint16_t S18C4:1;
  uint16_t S19C4:1;
  uint16_t S20C4:1;
  uint16_t S21C4:1;
  uint16_t S22C4:1;
  uint16_t S23C4:1;
  uint16_t S24C4:1;
  uint16_t S25C4:1;
  uint16_t S26C4:1;
  uint16_t S27C4:1;
  uint16_t S28C4:1;
  uint16_t S29C4:1;
  uint16_t S30C4:1;
  uint16_t S31C4:1;
} LCDDATA17BITS;
extern volatile LCDDATA17BITS LCDDATA17bits __attribute__((__sfr__));

#define LCDDATA18 LCDDATA18
extern volatile uint16_t LCDDATA18 __attribute__((__sfr__));
typedef struct tagLCDDATA18BITS {
  uint16_t :15;
  uint16_t S47C4:1;
} LCDDATA18BITS;
extern volatile LCDDATA18BITS LCDDATA18bits __attribute__((__sfr__));

#define LCDDATA19 LCDDATA19
extern volatile uint16_t LCDDATA19 __attribute__((__sfr__));
typedef struct tagLCDDATA19BITS {
  uint16_t S48C4:1;
} LCDDATA19BITS;
extern volatile LCDDATA19BITS LCDDATA19bits __attribute__((__sfr__));

#define LCDDATA20 LCDDATA20
extern volatile uint16_t LCDDATA20 __attribute__((__sfr__));
typedef struct tagLCDDATA20BITS {
  uint16_t S00C5:1;
  uint16_t S01C5:1;
  uint16_t S02C5:1;
  uint16_t S03C5:1;
  uint16_t S04C5:1;
  uint16_t S05C5:1;
  uint16_t S06C5:1;
  uint16_t S07C5:1;
  uint16_t S08C5:1;
  uint16_t S09C5:1;
  uint16_t S10C5:1;
  uint16_t S11C5:1;
  uint16_t S12C5:1;
  uint16_t S13C5:1;
  uint16_t S14C5:1;
  uint16_t S15C5:1;
} LCDDATA20BITS;
extern volatile LCDDATA20BITS LCDDATA20bits __attribute__((__sfr__));

#define LCDDATA21 LCDDATA21
extern volatile uint16_t LCDDATA21 __attribute__((__sfr__));
typedef struct tagLCDDATA21BITS {
  uint16_t S16C5:1;
  uint16_t S17C5:1;
  uint16_t S18C5:1;
  uint16_t S19C5:1;
  uint16_t S20C5:1;
  uint16_t S21C5:1;
  uint16_t S22C5:1;
  uint16_t S23C5:1;
  uint16_t S24C5:1;
  uint16_t S25C5:1;
  uint16_t S26C5:1;
  uint16_t S27C5:1;
  uint16_t S28C5:1;
  uint16_t S29C5:1;
  uint16_t S30C5:1;
  uint16_t S31C5:1;
} LCDDATA21BITS;
extern volatile LCDDATA21BITS LCDDATA21bits __attribute__((__sfr__));

#define LCDDATA22 LCDDATA22
extern volatile uint16_t LCDDATA22 __attribute__((__sfr__));
typedef struct tagLCDDATA22BITS {
  uint16_t :15;
  uint16_t S47C5:1;
} LCDDATA22BITS;
extern volatile LCDDATA22BITS LCDDATA22bits __attribute__((__sfr__));

#define LCDDATA23 LCDDATA23
extern volatile uint16_t LCDDATA23 __attribute__((__sfr__));
typedef struct tagLCDDATA23BITS {
  uint16_t S48C5:1;
} LCDDATA23BITS;
extern volatile LCDDATA23BITS LCDDATA23bits __attribute__((__sfr__));

#define LCDDATA24 LCDDATA24
extern volatile uint16_t LCDDATA24 __attribute__((__sfr__));
typedef struct tagLCDDATA24BITS {
  uint16_t S00C6:1;
  uint16_t S01C6:1;
  uint16_t S02C6:1;
  uint16_t S03C6:1;
  uint16_t S04C6:1;
  uint16_t S05C6:1;
  uint16_t S06C6:1;
  uint16_t S07C6:1;
  uint16_t S08C6:1;
  uint16_t S09C6:1;
  uint16_t S10C6:1;
  uint16_t S11C6:1;
  uint16_t S12C6:1;
  uint16_t S13C6:1;
  uint16_t S14C6:1;
  uint16_t S15C6:1;
} LCDDATA24BITS;
extern volatile LCDDATA24BITS LCDDATA24bits __attribute__((__sfr__));

#define LCDDATA25 LCDDATA25
extern volatile uint16_t LCDDATA25 __attribute__((__sfr__));
typedef struct tagLCDDATA25BITS {
  uint16_t S16C6:1;
  uint16_t S17C6:1;
  uint16_t S18C6:1;
  uint16_t S19C6:1;
  uint16_t S20C6:1;
  uint16_t S21C6:1;
  uint16_t S22C6:1;
  uint16_t S23C6:1;
  uint16_t S24C6:1;
  uint16_t S25C6:1;
  uint16_t S26C6:1;
  uint16_t S27C6:1;
  uint16_t S28C6:1;
  uint16_t S29C6:1;
  uint16_t S30C6:1;
  uint16_t S31C6:1;
} LCDDATA25BITS;
extern volatile LCDDATA25BITS LCDDATA25bits __attribute__((__sfr__));

#define LCDDATA26 LCDDATA26
extern volatile uint16_t LCDDATA26 __attribute__((__sfr__));
typedef struct tagLCDDATA26BITS {
  uint16_t :15;
  uint16_t S47C6:1;
} LCDDATA26BITS;
extern volatile LCDDATA26BITS LCDDATA26bits __attribute__((__sfr__));

#define LCDDATA27 LCDDATA27
extern volatile uint16_t LCDDATA27 __attribute__((__sfr__));
typedef struct tagLCDDATA27BITS {
  uint16_t S48C6:1;
} LCDDATA27BITS;
extern volatile LCDDATA27BITS LCDDATA27bits __attribute__((__sfr__));

#define LCDDATA28 LCDDATA28
extern volatile uint16_t LCDDATA28 __attribute__((__sfr__));
typedef struct tagLCDDATA28BITS {
  uint16_t S00C7:1;
  uint16_t S01C7:1;
  uint16_t S02C7:1;
  uint16_t S03C7:1;
  uint16_t S04C7:1;
  uint16_t S05C7:1;
  uint16_t S06C7:1;
  uint16_t S07C7:1;
  uint16_t S08C7:1;
  uint16_t S09C7:1;
  uint16_t S10C7:1;
  uint16_t S11C7:1;
  uint16_t S12C7:1;
  uint16_t S13C7:1;
  uint16_t S14C7:1;
  uint16_t S15C7:1;
} LCDDATA28BITS;
extern volatile LCDDATA28BITS LCDDATA28bits __attribute__((__sfr__));

#define LCDDATA29 LCDDATA29
extern volatile uint16_t LCDDATA29 __attribute__((__sfr__));
typedef struct tagLCDDATA29BITS {
  uint16_t S16C7:1;
  uint16_t S17C7:1;
  uint16_t S18C7:1;
  uint16_t S19C7:1;
  uint16_t S20C7:1;
  uint16_t S21C7:1;
  uint16_t S22C7:1;
  uint16_t S23C7:1;
  uint16_t S24C7:1;
  uint16_t S25C7:1;
  uint16_t S26C7:1;
  uint16_t S27C7:1;
  uint16_t S28C7:1;
  uint16_t S29C7:1;
  uint16_t S30C7:1;
  uint16_t S31C7:1;
} LCDDATA29BITS;
extern volatile LCDDATA29BITS LCDDATA29bits __attribute__((__sfr__));

#define LCDDATA30 LCDDATA30
extern volatile uint16_t LCDDATA30 __attribute__((__sfr__));
typedef struct tagLCDDATA30BITS {
  uint16_t :15;
  uint16_t S47C7:1;
} LCDDATA30BITS;
extern volatile LCDDATA30BITS LCDDATA30bits __attribute__((__sfr__));

#define LCDDATA31 LCDDATA31
extern volatile uint16_t LCDDATA31 __attribute__((__sfr__));
typedef struct tagLCDDATA31BITS {
  uint16_t S48C7:1;
} LCDDATA31BITS;
extern volatile LCDDATA31BITS LCDDATA31bits __attribute__((__sfr__));

#define PMCON1 PMCON1
extern volatile uint16_t PMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPMCON1BITS {
  union {
    struct {
      uint16_t IRQM:2;
      uint16_t BUSKEEP:1;
      uint16_t :1;
      uint16_t ALMODE:1;
      uint16_t ALP:1;
      uint16_t CSF:2;
      uint16_t MODE:2;
      uint16_t :1;
      uint16_t ADRMUX:2;
      uint16_t PSIDL:1;
      uint16_t :1;
      uint16_t PMPEN:1;
    };
    struct {
      uint16_t IRQM0:1;
      uint16_t IRQM1:1;
      uint16_t :4;
      uint16_t CSF0:1;
      uint16_t CSF1:1;
      uint16_t MODE0:1;
      uint16_t MODE1:1;
      uint16_t :1;
      uint16_t ADRMUX0:1;
      uint16_t ADRMUX1:1;
    };
  };
} PMCON1BITS;
extern volatile PMCON1BITS PMCON1bits __attribute__((__sfr__));

#define PMCON2 PMCON2
extern volatile uint16_t PMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPMCON2BITS {
  union {
    struct {
      uint16_t RADDR:8;
      uint16_t :4;
      uint16_t TIMEOUT:1;
      uint16_t ERROR:1;
      uint16_t :1;
      uint16_t BUSY:1;
    };
    struct {
      uint16_t RADDR16:1;
      uint16_t RADDR17:1;
      uint16_t RADDR18:1;
      uint16_t RADDR19:1;
      uint16_t RADDR20:1;
      uint16_t RADDR21:1;
      uint16_t RADDR22:1;
      uint16_t RADDR23:1;
    };
  };
} PMCON2BITS;
extern volatile PMCON2BITS PMCON2bits __attribute__((__sfr__));

#define PMCON3 PMCON3
extern volatile uint16_t PMCON3 __attribute__((__sfr__));
__extension__ typedef struct tagPMCON3BITS {
  union {
    struct {
      uint16_t PTEN16:1;
      uint16_t PTEN17:1;
      uint16_t PTEN18:1;
      uint16_t PTEN19:1;
      uint16_t PTEN20:1;
      uint16_t PTEN21:1;
      uint16_t PTEN22:1;
      uint16_t :1;
      uint16_t AWAITE:1;
      uint16_t AWAITM:2;
      uint16_t :1;
      uint16_t PTBE0EN:1;
      uint16_t PTBE1EN:1;
      uint16_t PTRDEN:1;
      uint16_t PTWREN:1;
    };
    struct {
      uint16_t :9;
      uint16_t AWAITM0:1;
      uint16_t AWAITM1:1;
    };
  };
} PMCON3BITS;
extern volatile PMCON3BITS PMCON3bits __attribute__((__sfr__));

#define PMCON4 PMCON4
extern volatile uint16_t PMCON4 __attribute__((__sfr__));
typedef struct tagPMCON4BITS {
  uint16_t PTEN0:1;
  uint16_t PTEN1:1;
  uint16_t PTEN2:1;
  uint16_t PTEN3:1;
  uint16_t PTEN4:1;
  uint16_t PTEN5:1;
  uint16_t PTEN6:1;
  uint16_t PTEN7:1;
  uint16_t PTEN8:1;
  uint16_t PTEN9:1;
  uint16_t PTEN10:1;
  uint16_t PTEN11:1;
  uint16_t PTEN12:1;
  uint16_t PTEN13:1;
  uint16_t PTEN14:1;
  uint16_t PTEN15:1;
} PMCON4BITS;
extern volatile PMCON4BITS PMCON4bits __attribute__((__sfr__));

#define PMCS1CF PMCS1CF
extern volatile uint16_t PMCS1CF __attribute__((__sfr__));
__extension__ typedef struct tagPMCS1CFBITS {
  union {
    struct {
      uint16_t :5;
      uint16_t PTSZ:2;
      uint16_t ACKP:1;
      uint16_t SM:1;
      uint16_t RDSP:1;
      uint16_t WRSP:1;
      uint16_t :1;
      uint16_t BEP:1;
      uint16_t CSPTEN:1;
      uint16_t CSP:1;
      uint16_t CSDIS:1;
    };
    struct {
      uint16_t :5;
      uint16_t PTSZ0:1;
      uint16_t PTSZ1:1;
    };
  };
} PMCS1CFBITS;
extern volatile PMCS1CFBITS PMCS1CFbits __attribute__((__sfr__));

#define PMCS1BS PMCS1BS
extern volatile uint16_t PMCS1BS __attribute__((__sfr__));
typedef struct tagPMCS1BSBITS {
  uint16_t :3;
  uint16_t BASE11:1;
  uint16_t :3;
  uint16_t BASE15:1;
  uint16_t BASE16:1;
  uint16_t BASE17:1;
  uint16_t BASE18:1;
  uint16_t BASE19:1;
  uint16_t BASE20:1;
  uint16_t BASE21:1;
  uint16_t BASE22:1;
  uint16_t BASE23:1;
} PMCS1BSBITS;
extern volatile PMCS1BSBITS PMCS1BSbits __attribute__((__sfr__));

#define PMCS1MD PMCS1MD
extern volatile uint16_t PMCS1MD __attribute__((__sfr__));
__extension__ typedef struct tagPMCS1MDBITS {
  union {
    struct {
      uint16_t DWAITE:2;
      uint16_t DWAITM:4;
      uint16_t DWAITB:2;
      uint16_t :3;
      uint16_t AMWAIT:3;
      uint16_t ACKM:2;
    };
    struct {
      uint16_t DWAITE0:1;
      uint16_t DWAITE1:1;
      uint16_t DWAITM0:1;
      uint16_t DWAITM1:1;
      uint16_t DWAITM2:1;
      uint16_t DWAITM3:1;
      uint16_t DWAITB0:1;
      uint16_t DWAITB1:1;
      uint16_t :3;
      uint16_t AMWAIT0:1;
      uint16_t AMWAIT1:1;
      uint16_t AMWAIT2:1;
      uint16_t ACKM0:1;
      uint16_t ACKM1:1;
    };
  };
} PMCS1MDBITS;
extern volatile PMCS1MDBITS PMCS1MDbits __attribute__((__sfr__));

#define PMCS2CF PMCS2CF
extern volatile uint16_t PMCS2CF __attribute__((__sfr__));
__extension__ typedef struct tagPMCS2CFBITS {
  union {
    struct {
      uint16_t :5;
      uint16_t PTSZ:2;
      uint16_t ACKP:1;
      uint16_t SM:1;
      uint16_t RDSP:1;
      uint16_t WRSP:1;
      uint16_t :1;
      uint16_t BEP:1;
      uint16_t CSPTEN:1;
      uint16_t CSP:1;
      uint16_t CSDIS:1;
    };
    struct {
      uint16_t :5;
      uint16_t PTSZ0:1;
      uint16_t PTSZ1:1;
    };
  };
} PMCS2CFBITS;
extern volatile PMCS2CFBITS PMCS2CFbits __attribute__((__sfr__));

#define PMCS2BS PMCS2BS
extern volatile uint16_t PMCS2BS __attribute__((__sfr__));
typedef struct tagPMCS2BSBITS {
  uint16_t :3;
  uint16_t BASE11:1;
  uint16_t :3;
  uint16_t BASE15:1;
  uint16_t BASE16:1;
  uint16_t BASE17:1;
  uint16_t BASE18:1;
  uint16_t BASE19:1;
  uint16_t BASE20:1;
  uint16_t BASE21:1;
  uint16_t BASE22:1;
  uint16_t BASE23:1;
} PMCS2BSBITS;
extern volatile PMCS2BSBITS PMCS2BSbits __attribute__((__sfr__));

#define PMCS2MD PMCS2MD
extern volatile uint16_t PMCS2MD __attribute__((__sfr__));
__extension__ typedef struct tagPMCS2MDBITS {
  union {
    struct {
      uint16_t DWAITE:2;
      uint16_t DWAITM:4;
      uint16_t DWAITB:2;
      uint16_t :3;
      uint16_t AMWAIT:3;
      uint16_t ACKM:2;
    };
    struct {
      uint16_t DWAITE0:1;
      uint16_t DWAITE1:1;
      uint16_t DWAITM0:1;
      uint16_t DWAITM1:1;
      uint16_t DWAITM2:1;
      uint16_t DWAITM3:1;
      uint16_t DWAITB0:1;
      uint16_t DWAITB1:1;
      uint16_t :3;
      uint16_t AMWAIT0:1;
      uint16_t AMWAIT1:1;
      uint16_t AMWAIT2:1;
      uint16_t ACKM0:1;
      uint16_t ACKM1:1;
    };
  };
} PMCS2MDBITS;
extern volatile PMCS2MDBITS PMCS2MDbits __attribute__((__sfr__));

#define PMDOUT1 PMDOUT1
extern volatile uint16_t PMDOUT1 __attribute__((__sfr__));
#define PMDOUT2 PMDOUT2
extern volatile uint16_t PMDOUT2 __attribute__((__sfr__));
#define PMDIN1 PMDIN1
extern volatile uint16_t PMDIN1 __attribute__((__sfr__));
#define PMDIN2 PMDIN2
extern volatile uint16_t PMDIN2 __attribute__((__sfr__));
#define PMSTAT PMSTAT
extern volatile uint16_t PMSTAT __attribute__((__sfr__));
typedef struct tagPMSTATBITS {
  uint16_t OB0E:1;
  uint16_t OB1E:1;
  uint16_t OB2E:1;
  uint16_t OB3E:1;
  uint16_t :2;
  uint16_t OBUF:1;
  uint16_t OBE:1;
  uint16_t IB0F:1;
  uint16_t IB1F:1;
  uint16_t IB2F:1;
  uint16_t IB3F:1;
  uint16_t :2;
  uint16_t IBOV:1;
  uint16_t IBF:1;
} PMSTATBITS;
extern volatile PMSTATBITS PMSTATbits __attribute__((__sfr__));

#define ALRMVAL ALRMVAL
extern volatile uint16_t ALRMVAL __attribute__((__sfr__));
#define ALCFGRPT ALCFGRPT
extern volatile uint16_t ALCFGRPT __attribute__((__sfr__));
__extension__ typedef struct tagALCFGRPTBITS {
  union {
    struct {
      uint16_t ARPT:8;
      uint16_t ALRMPTR:2;
      uint16_t AMASK:4;
      uint16_t CHIME:1;
      uint16_t ALRMEN:1;
    };
    struct {
      uint16_t ARPT0:1;
      uint16_t ARPT1:1;
      uint16_t ARPT2:1;
      uint16_t ARPT3:1;
      uint16_t ARPT4:1;
      uint16_t ARPT5:1;
      uint16_t ARPT6:1;
      uint16_t ARPT7:1;
      uint16_t ALRMPTR0:1;
      uint16_t ALRMPTR1:1;
      uint16_t AMASK0:1;
      uint16_t AMASK1:1;
      uint16_t AMASK2:1;
      uint16_t AMASK3:1;
    };
  };
} ALCFGRPTBITS;
extern volatile ALCFGRPTBITS ALCFGRPTbits __attribute__((__sfr__));

#define RTCVAL RTCVAL
extern volatile uint16_t RTCVAL __attribute__((__sfr__));
#define RCFGCAL RCFGCAL
extern volatile uint16_t RCFGCAL __attribute__((__sfr__));
__extension__ typedef struct tagRCFGCALBITS {
  union {
    struct {
      uint16_t CAL:8;
      uint16_t RTCPTR:2;
      uint16_t RTCOE:1;
      uint16_t HALFSEC:1;
      uint16_t RTCSYNC:1;
      uint16_t RTCWREN:1;
      uint16_t :1;
      uint16_t RTCEN:1;
    };
    struct {
      uint16_t CAL0:1;
      uint16_t CAL1:1;
      uint16_t CAL2:1;
      uint16_t CAL3:1;
      uint16_t CAL4:1;
      uint16_t CAL5:1;
      uint16_t CAL6:1;
      uint16_t CAL7:1;
      uint16_t RTCPTR0:1;
      uint16_t RTCPTR1:1;
    };
  };
} RCFGCALBITS;
extern volatile RCFGCALBITS RCFGCALbits __attribute__((__sfr__));

#define RTCPWC RTCPWC
extern volatile uint16_t RTCPWC __attribute__((__sfr__));
__extension__ typedef struct tagRTCPWCBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RTCOUT:2;
      uint16_t RTCLK:2;
      uint16_t PWSPRE:1;
      uint16_t PWCPRE:1;
      uint16_t PWCPOL:1;
      uint16_t PWCEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t RTCOUT0:1;
      uint16_t RTCOUT1:1;
      uint16_t RTCLK0:1;
      uint16_t RTCLK1:1;
    };
  };
} RTCPWCBITS;
extern volatile RTCPWCBITS RTCPWCbits __attribute__((__sfr__));

#define MDCON MDCON
extern volatile uint16_t MDCON __attribute__((__sfr__));
typedef struct tagMDCONBITS {
  uint16_t MDBIT:1;
  uint16_t :3;
  uint16_t MDOPOL:1;
  uint16_t MDSLR:1;
  uint16_t MDOE:1;
  uint16_t :6;
  uint16_t MDSIDL:1;
  uint16_t :1;
  uint16_t MDEN:1;
} MDCONBITS;
extern volatile MDCONBITS MDCONbits __attribute__((__sfr__));

#define MDSRC MDSRC
extern volatile uint16_t MDSRC __attribute__((__sfr__));
__extension__ typedef struct tagMDSRCBITS {
  union {
    struct {
      uint16_t MS:4;
      uint16_t :3;
      uint16_t SODIS:1;
    };
    struct {
      uint16_t MS0:1;
      uint16_t MS1:1;
      uint16_t MS2:1;
      uint16_t MS3:1;
    };
  };
} MDSRCBITS;
extern volatile MDSRCBITS MDSRCbits __attribute__((__sfr__));

#define MDCAR MDCAR
extern volatile uint16_t MDCAR __attribute__((__sfr__));
__extension__ typedef struct tagMDCARBITS {
  union {
    struct {
      uint16_t CL:4;
      uint16_t :1;
      uint16_t CLSYNC:1;
      uint16_t CLPOL:1;
      uint16_t CLODIS:1;
      uint16_t CH:4;
      uint16_t :1;
      uint16_t CHSYNC:1;
      uint16_t CHPOL:1;
      uint16_t CHODIS:1;
    };
    struct {
      uint16_t CL0:1;
      uint16_t CL1:1;
      uint16_t CL2:1;
      uint16_t CL3:1;
      uint16_t :4;
      uint16_t CH0:1;
      uint16_t CH1:1;
      uint16_t CH2:1;
      uint16_t CH3:1;
    };
  };
} MDCARBITS;
extern volatile MDCARBITS MDCARbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile uint16_t CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  uint16_t C1OUT:1;
  uint16_t C2OUT:1;
  uint16_t C3OUT:1;
  uint16_t :5;
  uint16_t C1EVT:1;
  uint16_t C2EVT:1;
  uint16_t C3EVT:1;
  uint16_t :4;
  uint16_t CMIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile uint16_t CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      uint16_t CVR:4;
      uint16_t CVRSS:1;
      uint16_t CVRR:1;
      uint16_t CVROE:1;
      uint16_t CVREN:1;
      uint16_t CVREFM:2;
      uint16_t CVREFP:1;
    };
    struct {
      uint16_t CVR0:1;
      uint16_t CVR1:1;
      uint16_t CVR2:1;
      uint16_t CVR3:1;
      uint16_t :4;
      uint16_t CVREFM0:1;
      uint16_t CVREFM1:1;
    };
  };
} CVRCONBITS;
extern volatile CVRCONBITS CVRCONbits __attribute__((__sfr__));

#define CM1CON CM1CON
extern volatile uint16_t CM1CON __attribute__((__sfr__));
__extension__ typedef struct tagCM1CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:1;
      uint16_t :1;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :3;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :4;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
      uint16_t :7;
      uint16_t CEN:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

#define CM2CON CM2CON
extern volatile uint16_t CM2CON __attribute__((__sfr__));
__extension__ typedef struct tagCM2CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:1;
      uint16_t :1;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :3;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :4;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
      uint16_t :7;
      uint16_t CEN:1;
    };
  };
} CM2CONBITS;
extern volatile CM2CONBITS CM2CONbits __attribute__((__sfr__));

#define CM3CON CM3CON
extern volatile uint16_t CM3CON __attribute__((__sfr__));
__extension__ typedef struct tagCM3CONBITS {
  union {
    struct {
      uint16_t CCH:2;
      uint16_t :2;
      uint16_t CREF:1;
      uint16_t :1;
      uint16_t EVPOL:2;
      uint16_t COUT:1;
      uint16_t CEVT:1;
      uint16_t :3;
      uint16_t CPOL:1;
      uint16_t COE:1;
      uint16_t CON:1;
    };
    struct {
      uint16_t CCH0:1;
      uint16_t CCH1:1;
      uint16_t :4;
      uint16_t EVPOL0:1;
      uint16_t EVPOL1:1;
      uint16_t :7;
      uint16_t CEN:1;
    };
  };
} CM3CONBITS;
extern volatile CM3CONBITS CM3CONbits __attribute__((__sfr__));

#define CRCCON1 CRCCON1
extern volatile uint16_t CRCCON1 __attribute__((__sfr__));
__extension__ typedef struct tagCRCCON1BITS {
  union {
    struct {
      uint16_t :3;
      uint16_t LENDIAN:1;
      uint16_t CRCGO:1;
      uint16_t CRCISEL:1;
      uint16_t CRCMPT:1;
      uint16_t CRCFUL:1;
      uint16_t VWORD:5;
      uint16_t CSIDL:1;
      uint16_t :1;
      uint16_t CRCEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t VWORD0:1;
      uint16_t VWORD1:1;
      uint16_t VWORD2:1;
      uint16_t VWORD3:1;
      uint16_t VWORD4:1;
    };
  };
} CRCCON1BITS;
extern volatile CRCCON1BITS CRCCON1bits __attribute__((__sfr__));

#define CRCCON2 CRCCON2
extern volatile uint16_t CRCCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCRCCON2BITS {
  union {
    struct {
      uint16_t PLEN:5;
      uint16_t :3;
      uint16_t DWIDTH:5;
    };
    struct {
      uint16_t PLEN0:1;
      uint16_t PLEN1:1;
      uint16_t PLEN2:1;
      uint16_t PLEN3:1;
      uint16_t PLEN4:1;
      uint16_t :3;
      uint16_t DWIDTH0:1;
      uint16_t DWIDTH1:1;
      uint16_t DWIDTH2:1;
      uint16_t DWIDTH3:1;
      uint16_t DWIDTH4:1;
    };
  };
} CRCCON2BITS;
extern volatile CRCCON2BITS CRCCON2bits __attribute__((__sfr__));

#define CRCXORL CRCXORL
extern volatile uint16_t CRCXORL __attribute__((__sfr__));
typedef struct tagCRCXORLBITS {
  uint16_t :1;
  uint16_t X1:1;
  uint16_t X2:1;
  uint16_t X3:1;
  uint16_t X4:1;
  uint16_t X5:1;
  uint16_t X6:1;
  uint16_t X7:1;
  uint16_t X8:1;
  uint16_t X9:1;
  uint16_t X10:1;
  uint16_t X11:1;
  uint16_t X12:1;
  uint16_t X13:1;
  uint16_t X14:1;
  uint16_t X15:1;
} CRCXORLBITS;
extern volatile CRCXORLBITS CRCXORLbits __attribute__((__sfr__));

#define CRCXORH CRCXORH
extern volatile uint16_t CRCXORH __attribute__((__sfr__));
typedef struct tagCRCXORHBITS {
  uint16_t X16:1;
  uint16_t X17:1;
  uint16_t X18:1;
  uint16_t X19:1;
  uint16_t X20:1;
  uint16_t X21:1;
  uint16_t X22:1;
  uint16_t X23:1;
  uint16_t X24:1;
  uint16_t X25:1;
  uint16_t X26:1;
  uint16_t X27:1;
  uint16_t X28:1;
  uint16_t X29:1;
  uint16_t X30:1;
  uint16_t X31:1;
} CRCXORHBITS;
extern volatile CRCXORHBITS CRCXORHbits __attribute__((__sfr__));

#define CRCDAT CRCDAT
extern volatile uint16_t CRCDAT __attribute__((__sfr__));
#define CRCDAT32 CRCDAT32
extern volatile uint32_t CRCDAT32 __attribute__((__sfr__));
#define CRCDAT8 CRCDAT8
extern volatile uint8_t CRCDAT8 __attribute__((__sfr__));
#define CRCDATL CRCDATL
extern volatile uint16_t CRCDATL __attribute__((__sfr__));
#define CRCDATH CRCDATH
extern volatile uint16_t CRCDATH __attribute__((__sfr__));
#define CRCWDATL CRCWDATL
extern volatile uint16_t CRCWDATL __attribute__((__sfr__));
#define CRCWDATH CRCWDATH
extern volatile uint16_t CRCWDATH __attribute__((__sfr__));
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
      uint16_t :2;
      uint16_t INT3R:6;
    };
    struct {
      uint16_t INT2R0:1;
      uint16_t INT2R1:1;
      uint16_t INT2R2:1;
      uint16_t INT2R3:1;
      uint16_t INT2R4:1;
      uint16_t INT2R5:1;
      uint16_t :2;
      uint16_t INT3R0:1;
      uint16_t INT3R1:1;
      uint16_t INT3R2:1;
      uint16_t INT3R3:1;
      uint16_t INT3R4:1;
      uint16_t INT3R5:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR2 RPINR2
extern volatile uint16_t RPINR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR2BITS {
  union {
    struct {
      uint16_t INT4R:6;
    };
    struct {
      uint16_t INT4R0:1;
      uint16_t INT4R1:1;
      uint16_t INT4R2:1;
      uint16_t INT5R3:1;
      uint16_t INT4R4:1;
      uint16_t INT4R5:1;
      uint16_t :2;
      uint16_t OC3R0:1;
      uint16_t OC3R1:1;
      uint16_t OC3R2:1;
      uint16_t OC3R3:1;
      uint16_t OC3R4:1;
      uint16_t OC3R5:1;
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
      uint16_t :2;
      uint16_t T3CKR:6;
    };
    struct {
      uint16_t T2CKR0:1;
      uint16_t T2CKR1:1;
      uint16_t T2CKR2:1;
      uint16_t T2CKR3:1;
      uint16_t T2CKR4:1;
      uint16_t T2CKR5:1;
      uint16_t :2;
      uint16_t T3CKR0:1;
      uint16_t T3CKR1:1;
      uint16_t T3CKR2:1;
      uint16_t T3CKR3:1;
      uint16_t T3CKR4:1;
      uint16_t T3CKR5:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR4 RPINR4
extern volatile uint16_t RPINR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR4BITS {
  union {
    struct {
      uint16_t T4CKR:6;
      uint16_t :2;
      uint16_t T5CKR:6;
    };
    struct {
      uint16_t T4CKR0:1;
      uint16_t T4CKR1:1;
      uint16_t T4CKR2:1;
      uint16_t T4CKR3:1;
      uint16_t T4CKR4:1;
      uint16_t T4CKR5:1;
      uint16_t :2;
      uint16_t T5CKR0:1;
      uint16_t T5CKR1:1;
      uint16_t T5CKR2:1;
      uint16_t T5CKR3:1;
      uint16_t T5CKR4:1;
      uint16_t T5CKR5:1;
    };
  };
} RPINR4BITS;
extern volatile RPINR4BITS RPINR4bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile uint16_t RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      uint16_t IC1R:6;
      uint16_t :2;
      uint16_t IC2R:6;
    };
    struct {
      uint16_t IC1R0:1;
      uint16_t IC1R1:1;
      uint16_t IC1R2:1;
      uint16_t IC1R3:1;
      uint16_t IC1R4:1;
      uint16_t IC1R5:1;
      uint16_t :2;
      uint16_t IC2R0:1;
      uint16_t IC2R1:1;
      uint16_t IC2R2:1;
      uint16_t IC2R3:1;
      uint16_t IC2R4:1;
      uint16_t IC2R5:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR8 RPINR8
extern volatile uint16_t RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      uint16_t IC3R:6;
      uint16_t :2;
      uint16_t IC4R:6;
    };
    struct {
      uint16_t IC3R0:1;
      uint16_t IC3R1:1;
      uint16_t IC3R2:1;
      uint16_t IC3R3:1;
      uint16_t IC3R4:1;
      uint16_t IC3R5:1;
      uint16_t :2;
      uint16_t IC4R0:1;
      uint16_t IC4R1:1;
      uint16_t IC4R2:1;
      uint16_t IC4R3:1;
      uint16_t IC4R4:1;
      uint16_t IC4R5:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR9 RPINR9
extern volatile uint16_t RPINR9 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR9BITS {
  union {
    struct {
      uint16_t IC5R:6;
      uint16_t :2;
      uint16_t IC6R:6;
    };
    struct {
      uint16_t IC5R0:1;
      uint16_t IC5R1:1;
      uint16_t IC5R2:1;
      uint16_t IC5R3:1;
      uint16_t IC5R4:1;
      uint16_t IC5R5:1;
      uint16_t :2;
      uint16_t IC6R0:1;
      uint16_t IC6R1:1;
      uint16_t IC6R2:1;
      uint16_t IC6R3:1;
      uint16_t IC6R4:1;
      uint16_t IC6R5:1;
    };
  };
} RPINR9BITS;
extern volatile RPINR9BITS RPINR9bits __attribute__((__sfr__));

#define RPINR10 RPINR10
extern volatile uint16_t RPINR10 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR10BITS {
  union {
    struct {
      uint16_t IC7R:6;
    };
    struct {
      uint16_t IC7R0:1;
      uint16_t IC7R1:1;
      uint16_t IC7R2:1;
      uint16_t IC7R3:1;
      uint16_t IC7R4:1;
      uint16_t IC7R5:1;
      uint16_t :2;
      uint16_t IC8R0:1;
      uint16_t IC8R1:1;
      uint16_t IC8R2:1;
      uint16_t IC8R3:1;
      uint16_t IC8R4:1;
      uint16_t IC8R5:1;
    };
  };
} RPINR10BITS;
extern volatile RPINR10BITS RPINR10bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile uint16_t RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      uint16_t OCFAR:6;
      uint16_t :2;
      uint16_t OCFBR:6;
    };
    struct {
      uint16_t OCFAR0:1;
      uint16_t OCFAR1:1;
      uint16_t OCFAR2:1;
      uint16_t OCFAR3:1;
      uint16_t OCFAR4:1;
      uint16_t OCFAR5:1;
      uint16_t :2;
      uint16_t OCFBR0:1;
      uint16_t OCFBR1:1;
      uint16_t OCFBR2:1;
      uint16_t OCFBR3:1;
      uint16_t OCFBR4:1;
      uint16_t OCFBR5:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

#define RPINR17 RPINR17
extern volatile uint16_t RPINR17 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR17BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t U3RXR:6;
    };
    struct {
      uint16_t :8;
      uint16_t U3RXR0:1;
      uint16_t U3RXR1:1;
      uint16_t U3RXR2:1;
      uint16_t U3RXR3:1;
      uint16_t U3RXR4:1;
      uint16_t U3RXR5:1;
    };
  };
} RPINR17BITS;
extern volatile RPINR17BITS RPINR17bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile uint16_t RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      uint16_t U1RXR:6;
      uint16_t :2;
      uint16_t U1CTSR:6;
    };
    struct {
      uint16_t U1RXR0:1;
      uint16_t U1RXR1:1;
      uint16_t U1RXR2:1;
      uint16_t U1RXR3:1;
      uint16_t U1RXR4:1;
      uint16_t U1RXR5:1;
      uint16_t :2;
      uint16_t U1CTSR0:1;
      uint16_t U1CTSR1:1;
      uint16_t U1CTSR2:1;
      uint16_t U1CTSR3:1;
      uint16_t U1CTSR4:1;
      uint16_t U1CTSR5:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR19 RPINR19
extern volatile uint16_t RPINR19 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR19BITS {
  union {
    struct {
      uint16_t U2RXR:6;
      uint16_t :2;
      uint16_t U2CTSR:6;
    };
    struct {
      uint16_t U2RXR0:1;
      uint16_t U2RXR1:1;
      uint16_t U2RXR2:1;
      uint16_t U2RXR3:1;
      uint16_t U2RXR4:1;
      uint16_t U2RXR5:1;
      uint16_t :2;
      uint16_t U2CTSR0:1;
      uint16_t U2CTSR1:1;
      uint16_t U2CTSR2:1;
      uint16_t U2CTSR3:1;
      uint16_t U2CTSR4:1;
      uint16_t U2CTSR5:1;
    };
  };
} RPINR19BITS;
extern volatile RPINR19BITS RPINR19bits __attribute__((__sfr__));

#define RPINR20 RPINR20
extern volatile uint16_t RPINR20 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR20BITS {
  union {
    struct {
      uint16_t SDI1R:6;
      uint16_t :2;
      uint16_t SCK1R:6;
    };
    struct {
      uint16_t SDI1R0:1;
      uint16_t SDI1R1:1;
      uint16_t SDI1R2:1;
      uint16_t SDI1R3:1;
      uint16_t SDI1R4:1;
      uint16_t SDI1R5:1;
      uint16_t :2;
      uint16_t SCK1R0:1;
      uint16_t SCK1R1:1;
      uint16_t SCK1R2:1;
      uint16_t SCK1R3:1;
      uint16_t SCK1R4:1;
      uint16_t SCK1R5:1;
    };
  };
} RPINR20BITS;
extern volatile RPINR20BITS RPINR20bits __attribute__((__sfr__));

#define RPINR21 RPINR21
extern volatile uint16_t RPINR21 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR21BITS {
  union {
    struct {
      uint16_t SS1R:6;
      uint16_t :2;
      uint16_t U3CTSR:6;
    };
    struct {
      uint16_t SS1R0:1;
      uint16_t SS1R1:1;
      uint16_t SS1R2:1;
      uint16_t SS1R3:1;
      uint16_t SS1R4:1;
      uint16_t SS1R5:1;
      uint16_t :2;
      uint16_t U3CTSR0:1;
      uint16_t U3CTSR1:1;
      uint16_t U3CTSR2:1;
      uint16_t U3CTSR3:1;
      uint16_t U3CTSR4:1;
      uint16_t U3CTSR5:1;
    };
  };
} RPINR21BITS;
extern volatile RPINR21BITS RPINR21bits __attribute__((__sfr__));

#define RPINR22 RPINR22
extern volatile uint16_t RPINR22 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR22BITS {
  union {
    struct {
      uint16_t SDI2R:6;
      uint16_t :2;
      uint16_t SCK2R:6;
    };
    struct {
      uint16_t SDI2R0:1;
      uint16_t SDI2R1:1;
      uint16_t SDI2R2:1;
      uint16_t SDI2R3:1;
      uint16_t SDI2R4:1;
      uint16_t SDI2R5:1;
      uint16_t :2;
      uint16_t SCK2R0:1;
      uint16_t SCK2R1:1;
      uint16_t SCK2R2:1;
      uint16_t SCK2R3:1;
      uint16_t SCK2R4:1;
      uint16_t SCK2R5:1;
    };
  };
} RPINR22BITS;
extern volatile RPINR22BITS RPINR22bits __attribute__((__sfr__));

#define RPINR23 RPINR23
extern volatile uint16_t RPINR23 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR23BITS {
  union {
    struct {
      uint16_t SS2R:6;
      uint16_t :2;
      uint16_t T1CKR:6;
    };
    struct {
      uint16_t SS2R0:1;
      uint16_t SS2R1:1;
      uint16_t SS2R2:1;
      uint16_t SS2R3:1;
      uint16_t SS2R4:1;
      uint16_t SS2R5:1;
      uint16_t :2;
      uint16_t T1CKR0:1;
      uint16_t T1CKR1:1;
      uint16_t T1CKR2:1;
      uint16_t T1CKR3:1;
      uint16_t T1CKR4:1;
      uint16_t T1CKR5:1;
    };
  };
} RPINR23BITS;
extern volatile RPINR23BITS RPINR23bits __attribute__((__sfr__));

#define RPINR27 RPINR27
extern volatile uint16_t RPINR27 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR27BITS {
  union {
    struct {
      uint16_t U4RXR:6;
      uint16_t :2;
      uint16_t U4CTSR:6;
    };
    struct {
      uint16_t U4RXR0:1;
      uint16_t U4RXR1:1;
      uint16_t U4RXR2:1;
      uint16_t U4RXR3:1;
      uint16_t U4RXR4:1;
      uint16_t U4RXR5:1;
      uint16_t :2;
      uint16_t U4CTSR0:1;
      uint16_t U4CTSR1:1;
      uint16_t U4CTSR2:1;
      uint16_t U4CTSR3:1;
      uint16_t U4CTSR4:1;
      uint16_t U4CTSR5:1;
    };
  };
} RPINR27BITS;
extern volatile RPINR27BITS RPINR27bits __attribute__((__sfr__));

#define RPINR30 RPINR30
extern volatile uint16_t RPINR30 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR30BITS {
  union {
    struct {
      uint16_t MDMIR:6;
    };
    struct {
      uint16_t MDMIR0:1;
      uint16_t MDMIR1:1;
      uint16_t MDMIR2:1;
      uint16_t MDMIR3:1;
      uint16_t MDMIR4:1;
      uint16_t MDMIR5:1;
    };
  };
} RPINR30BITS;
extern volatile RPINR30BITS RPINR30bits __attribute__((__sfr__));

#define RPINR31 RPINR31
extern volatile uint16_t RPINR31 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR31BITS {
  union {
    struct {
      uint16_t MDC1R:6;
      uint16_t :2;
      uint16_t MDC2R:6;
    };
    struct {
      uint16_t MDC1R0:1;
      uint16_t MDC1R1:1;
      uint16_t MDC1R2:1;
      uint16_t MDC1R3:1;
      uint16_t MDC1R4:1;
      uint16_t MDC1R5:1;
      uint16_t :2;
      uint16_t MDC2R0:1;
      uint16_t MDC2R1:1;
      uint16_t MDC2R2:1;
      uint16_t MDC2R3:1;
      uint16_t MDC2R4:1;
      uint16_t MDC2R5:1;
    };
  };
} RPINR31BITS;
extern volatile RPINR31BITS RPINR31bits __attribute__((__sfr__));

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
    };
    struct {
      uint16_t RP4R0:1;
      uint16_t RP4R1:1;
      uint16_t RP4R2:1;
      uint16_t RP4R3:1;
      uint16_t RP4R4:1;
      uint16_t RP4R5:1;
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

#define RPOR4 RPOR4
extern volatile uint16_t RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
  union {
    struct {
      uint16_t RP8R:6;
      uint16_t :2;
      uint16_t RP9R:6;
    };
    struct {
      uint16_t RP8R0:1;
      uint16_t RP8R1:1;
      uint16_t RP8R2:1;
      uint16_t RP8R3:1;
      uint16_t RP8R4:1;
      uint16_t RP8R5:1;
      uint16_t :2;
      uint16_t RP9R0:1;
      uint16_t RP9R1:1;
      uint16_t RP9R2:1;
      uint16_t RP9R3:1;
      uint16_t RP9R4:1;
      uint16_t RP9R5:1;
    };
  };
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPOR5 RPOR5
extern volatile uint16_t RPOR5 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR5BITS {
  union {
    struct {
      uint16_t RP10R:6;
      uint16_t :2;
      uint16_t RP11R:6;
    };
    struct {
      uint16_t RP10R0:1;
      uint16_t RP10R1:1;
      uint16_t RP10R2:1;
      uint16_t RP10R3:1;
      uint16_t RP10R4:1;
      uint16_t RP10R5:1;
      uint16_t :2;
      uint16_t RP11R0:1;
      uint16_t RP11R1:1;
      uint16_t RP11R2:1;
      uint16_t RP11R3:1;
      uint16_t RP11R4:1;
      uint16_t RP11R5:1;
    };
  };
} RPOR5BITS;
extern volatile RPOR5BITS RPOR5bits __attribute__((__sfr__));

#define RPOR6 RPOR6
extern volatile uint16_t RPOR6 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR6BITS {
  union {
    struct {
      uint16_t RP12R:6;
      uint16_t :2;
      uint16_t RP13R:6;
    };
    struct {
      uint16_t RP12R0:1;
      uint16_t RP12R1:1;
      uint16_t RP12R2:1;
      uint16_t RP12R3:1;
      uint16_t RP12R4:1;
      uint16_t RP12R5:1;
      uint16_t :2;
      uint16_t RP13R0:1;
      uint16_t RP13R1:1;
      uint16_t RP13R2:1;
      uint16_t RP13R3:1;
      uint16_t RP13R4:1;
      uint16_t RP13R5:1;
    };
  };
} RPOR6BITS;
extern volatile RPOR6BITS RPOR6bits __attribute__((__sfr__));

#define RPOR7 RPOR7
extern volatile uint16_t RPOR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR7BITS {
  union {
    struct {
      uint16_t RP14R:6;
    };
    struct {
      uint16_t RP14R0:1;
      uint16_t RP14R1:1;
      uint16_t RP14R2:1;
      uint16_t RP14R3:1;
      uint16_t RP14R4:1;
      uint16_t RP14R5:1;
    };
  };
} RPOR7BITS;
extern volatile RPOR7BITS RPOR7bits __attribute__((__sfr__));

#define RPOR8 RPOR8
extern volatile uint16_t RPOR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR8BITS {
  union {
    struct {
      uint16_t RP16R:6;
      uint16_t :2;
      uint16_t RP17R:6;
    };
    struct {
      uint16_t RP16R0:1;
      uint16_t RP16R1:1;
      uint16_t RP16R2:1;
      uint16_t RP16R3:1;
      uint16_t RP16R4:1;
      uint16_t RP16R5:1;
      uint16_t :2;
      uint16_t RP17R0:1;
      uint16_t RP17R1:1;
      uint16_t RP17R2:1;
      uint16_t RP17R3:1;
      uint16_t RP17R4:1;
      uint16_t RP17R5:1;
    };
  };
} RPOR8BITS;
extern volatile RPOR8BITS RPOR8bits __attribute__((__sfr__));

#define RPOR9 RPOR9
extern volatile uint16_t RPOR9 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR9BITS {
  union {
    struct {
      uint16_t RP18R:6;
      uint16_t :2;
      uint16_t RP19R:6;
    };
    struct {
      uint16_t RP18R0:1;
      uint16_t RP18R1:1;
      uint16_t RP18R2:1;
      uint16_t RP18R3:1;
      uint16_t RP18R4:1;
      uint16_t RP18R5:1;
      uint16_t :2;
      uint16_t RP19R0:1;
      uint16_t RP19R1:1;
      uint16_t RP19R2:1;
      uint16_t RP19R3:1;
      uint16_t RP19R4:1;
      uint16_t RP19R5:1;
    };
  };
} RPOR9BITS;
extern volatile RPOR9BITS RPOR9bits __attribute__((__sfr__));

#define RPOR10 RPOR10
extern volatile uint16_t RPOR10 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR10BITS {
  union {
    struct {
      uint16_t RP20R:6;
      uint16_t :2;
      uint16_t RP21R:6;
    };
    struct {
      uint16_t RP20R0:1;
      uint16_t RP20R1:1;
      uint16_t RP20R2:1;
      uint16_t RP20R3:1;
      uint16_t RP20R4:1;
      uint16_t RP20R5:1;
      uint16_t :2;
      uint16_t RP21R0:1;
      uint16_t RP21R1:1;
      uint16_t RP21R2:1;
      uint16_t RP21R3:1;
      uint16_t RP21R4:1;
      uint16_t RP21R5:1;
    };
  };
} RPOR10BITS;
extern volatile RPOR10BITS RPOR10bits __attribute__((__sfr__));

#define RPOR11 RPOR11
extern volatile uint16_t RPOR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR11BITS {
  union {
    struct {
      uint16_t RP22R:6;
      uint16_t :2;
      uint16_t RP23R:6;
    };
    struct {
      uint16_t RP22R0:1;
      uint16_t RP22R1:1;
      uint16_t RP22R2:1;
      uint16_t RP22R3:1;
      uint16_t RP22R4:1;
      uint16_t RP22R5:1;
      uint16_t :2;
      uint16_t RP23R0:1;
      uint16_t RP23R1:1;
      uint16_t RP23R2:1;
      uint16_t RP23R3:1;
      uint16_t RP23R4:1;
      uint16_t RP23R5:1;
    };
  };
} RPOR11BITS;
extern volatile RPOR11BITS RPOR11bits __attribute__((__sfr__));

#define RPOR12 RPOR12
extern volatile uint16_t RPOR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR12BITS {
  union {
    struct {
      uint16_t RP24R:6;
      uint16_t :2;
      uint16_t RP25R:6;
    };
    struct {
      uint16_t RP24R0:1;
      uint16_t RP24R1:1;
      uint16_t RP24R2:1;
      uint16_t RP24R3:1;
      uint16_t RP24R4:1;
      uint16_t RP24R5:1;
      uint16_t :2;
      uint16_t RP25R0:1;
      uint16_t RP25R1:1;
      uint16_t RP25R2:1;
      uint16_t RP25R3:1;
      uint16_t RP25R4:1;
      uint16_t RP25R5:1;
    };
  };
} RPOR12BITS;
extern volatile RPOR12BITS RPOR12bits __attribute__((__sfr__));

#define RPOR13 RPOR13
extern volatile uint16_t RPOR13 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR13BITS {
  union {
    struct {
      uint16_t RP26R:6;
      uint16_t :2;
      uint16_t RP27R:6;
    };
    struct {
      uint16_t RP26R0:1;
      uint16_t RP26R1:1;
      uint16_t RP26R2:1;
      uint16_t RP26R3:1;
      uint16_t RP26R4:1;
      uint16_t RP26R5:1;
      uint16_t :2;
      uint16_t RP27R0:1;
      uint16_t RP27R1:1;
      uint16_t RP27R2:1;
      uint16_t RP27R3:1;
      uint16_t RP27R4:1;
      uint16_t RP27R5:1;
    };
  };
} RPOR13BITS;
extern volatile RPOR13BITS RPOR13bits __attribute__((__sfr__));

#define RPOR14 RPOR14
extern volatile uint16_t RPOR14 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR14BITS {
  union {
    struct {
      uint16_t RP28R:6;
      uint16_t :2;
      uint16_t RP29R:6;
    };
    struct {
      uint16_t RP28R0:1;
      uint16_t RP28R1:1;
      uint16_t RP28R2:1;
      uint16_t RP28R3:1;
      uint16_t RP28R4:1;
      uint16_t RP28R5:1;
      uint16_t :2;
      uint16_t RP29R0:1;
      uint16_t RP29R1:1;
      uint16_t RP29R2:1;
      uint16_t RP29R3:1;
      uint16_t RP29R4:1;
      uint16_t RP29R5:1;
    };
  };
} RPOR14BITS;
extern volatile RPOR14BITS RPOR14bits __attribute__((__sfr__));

#define RPOR15 RPOR15
extern volatile uint16_t RPOR15 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR15BITS {
  union {
    struct {
      uint16_t RP30R:6;
    };
    struct {
      uint16_t RP30R0:1;
      uint16_t RP30R1:1;
      uint16_t RP30R2:1;
      uint16_t RP30R3:1;
      uint16_t RP30R4:1;
      uint16_t RP30R5:1;
    };
  };
} RPOR15BITS;
extern volatile RPOR15BITS RPOR15bits __attribute__((__sfr__));

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
  uint16_t DPSLP:1;
  uint16_t :1;
  uint16_t RETEN:1;
  uint16_t :1;
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
      uint16_t SOSCEN:1;
      uint16_t POSCEN:1;
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
      uint16_t :8;
      uint16_t RCDIV:3;
      uint16_t DOZEN:1;
      uint16_t DOZE:3;
      uint16_t ROI:1;
    };
    struct {
      uint16_t :8;
      uint16_t RCDIV0:1;
      uint16_t RCDIV1:1;
      uint16_t RCDIV2:1;
      uint16_t :1;
      uint16_t DOZE0:1;
      uint16_t DOZE1:1;
      uint16_t DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

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

#define REFOCON REFOCON
extern volatile uint16_t REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      uint16_t :8;
      uint16_t RODIV:4;
      uint16_t ROSEL:1;
      uint16_t ROSSLP:1;
      uint16_t :1;
      uint16_t ROEN:1;
    };
    struct {
      uint16_t :8;
      uint16_t RODIV0:1;
      uint16_t RODIV1:1;
      uint16_t RODIV2:1;
      uint16_t RODIV3:1;
      uint16_t :3;
      uint16_t ROON:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define HLVDCON HLVDCON
extern volatile uint16_t HLVDCON __attribute__((__sfr__));
__extension__ typedef struct tagHLVDCONBITS {
  union {
    struct {
      uint16_t HLVDL:4;
      uint16_t :1;
      uint16_t IRVST:1;
      uint16_t BGVST:1;
      uint16_t VDIR:1;
      uint16_t :5;
      uint16_t LSIDL:1;
      uint16_t :1;
      uint16_t HLVDEN:1;
    };
    struct {
      uint16_t HLVDL0:1;
      uint16_t HLVDL1:1;
      uint16_t HLVDL2:1;
      uint16_t HLVDL3:1;
    };
  };
} HLVDCONBITS;
extern volatile HLVDCONBITS HLVDCONbits __attribute__((__sfr__));

#define DSCON DSCON
extern volatile uint16_t DSCON __attribute__((__sfr__));
typedef struct tagDSCONBITS {
  uint16_t RELEASE:1;
  uint16_t DSBOR:1;
  uint16_t :13;
  uint16_t DSEN:1;
} DSCONBITS;
extern volatile DSCONBITS DSCONbits __attribute__((__sfr__));

#define DSWAKE DSWAKE
extern volatile uint16_t DSWAKE __attribute__((__sfr__));
typedef struct tagDSWAKEBITS {
  uint16_t :2;
  uint16_t DSMCLR:1;
  uint16_t DSRTCC:1;
  uint16_t DSWDT:1;
  uint16_t :2;
  uint16_t DSFLT:1;
  uint16_t DSINT0:1;
} DSWAKEBITS;
extern volatile DSWAKEBITS DSWAKEbits __attribute__((__sfr__));

#define DSGPR0 DSGPR0
extern volatile uint16_t DSGPR0 __attribute__((__sfr__));
#define DSGPR1 DSGPR1
extern volatile uint16_t DSGPR1 __attribute__((__sfr__));
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
    struct {
      uint16_t PROGOP0:1;
      uint16_t PROGOP1:1;
      uint16_t PROGOP2:1;
      uint16_t PROGOP3:1;
    };
    struct {
      uint16_t PROGOP:4;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define RCON2 RCON2
extern volatile uint16_t RCON2 __attribute__((__sfr__));
typedef struct tagRCON2BITS {
  uint16_t VBAT:1;
  uint16_t VBPOR:1;
  uint16_t VDDPOR:1;
  uint16_t VDDBOR:1;
} RCON2BITS;
extern volatile RCON2BITS RCON2bits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile uint16_t NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile uint16_t PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  uint16_t ADC1MD:1;
  uint16_t :2;
  uint16_t SPI1MD:1;
  uint16_t SPI2MD:1;
  uint16_t U1MD:1;
  uint16_t U2MD:1;
  uint16_t I2C1MD:1;
  uint16_t :3;
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
  uint16_t OC5MD:1;
  uint16_t OC6MD:1;
  uint16_t OC7MD:1;
  uint16_t :1;
  uint16_t IC1MD:1;
  uint16_t IC2MD:1;
  uint16_t IC3MD:1;
  uint16_t IC4MD:1;
  uint16_t IC5MD:1;
  uint16_t IC6MD:1;
  uint16_t IC7MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
__extension__ typedef struct tagPMD3BITS {
  union {
    struct {
      uint16_t :1;
      uint16_t I2C2MD:1;
      uint16_t :1;
      uint16_t U3MD:1;
      uint16_t :3;
      uint16_t CRCMD:1;
      uint16_t PMPMD:1;
      uint16_t RTCCMD:1;
      uint16_t CMPMD:1;
      uint16_t TXMMD:1;
    };
    struct {
      uint16_t :7;
      uint16_t CRCPMD:1;
      uint16_t :3;
      uint16_t DSMMD:1;
    };
  };
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t :1;
  uint16_t LVDMD:1;
  uint16_t CTMUMD:1;
  uint16_t REFOMD:1;
  uint16_t :1;
  uint16_t U4MD:1;
  uint16_t UPWMMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile uint16_t PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  uint16_t SPI3MD:1;
  uint16_t :5;
  uint16_t LCDMD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD7 PMD7
extern volatile uint16_t PMD7 __attribute__((__sfr__));
typedef struct tagPMD7BITS {
  uint16_t :4;
  uint16_t DMA0MD:1;
  uint16_t DMA1MD:1;
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
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IPL3 CORCONbits.IPL3

/* CNPD1 */
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN4PDE CNPD1bits.CN4PDE
#define _CN5PDE CNPD1bits.CN5PDE
#define _CN6PDE CNPD1bits.CN6PDE
#define _CN7PDE CNPD1bits.CN7PDE
#define _CN8PDE CNPD1bits.CN8PDE
#define _CN9PDE CNPD1bits.CN9PDE
#define _CN10PDE CNPD1bits.CN10PDE
#define _CN11PDE CNPD1bits.CN11PDE
#define _CN12PDE CNPD1bits.CN12PDE
#define _CN13PDE CNPD1bits.CN13PDE
#define _CN14PDE CNPD1bits.CN14PDE
#define _CN15PDE CNPD1bits.CN15PDE

/* CNPD2 */
#define _CN16PDE CNPD2bits.CN16PDE
#define _CN17PDE CNPD2bits.CN17PDE
#define _CN18PDE CNPD2bits.CN18PDE
#define _CN22PDE CNPD2bits.CN22PDE
#define _CN23PDE CNPD2bits.CN23PDE
#define _CN24PDE CNPD2bits.CN24PDE
#define _CN25PDE CNPD2bits.CN25PDE
#define _CN26PDE CNPD2bits.CN26PDE
#define _CN27PDE CNPD2bits.CN27PDE
#define _CN28PDE CNPD2bits.CN28PDE
#define _CN29PDE CNPD2bits.CN29PDE
#define _CN30PDE CNPD2bits.CN30PDE
#define _CN31PDE CNPD2bits.CN31PDE

/* CNPD3 */
#define _CN32PDE CNPD3bits.CN32PDE

/* CNPD4 */
#define _CN49PDE CNPD4bits.CN49PDE
#define _CN50PDE CNPD4bits.CN50PDE
#define _CN51PDE CNPD4bits.CN51PDE
#define _CN52PDE CNPD4bits.CN52PDE
#define _CN53PDE CNPD4bits.CN53PDE
#define _CN54PDE CNPD4bits.CN54PDE
#define _CN55PDE CNPD4bits.CN55PDE
#define _CN56PDE CNPD4bits.CN56PDE
#define _CN57PDE CNPD4bits.CN57PDE
#define _CN58PDE CNPD4bits.CN58PDE
#define _CN59PDE CNPD4bits.CN59PDE
#define _CN60PDE CNPD4bits.CN60PDE
#define _CN61PDE CNPD4bits.CN61PDE
#define _CN62PDE CNPD4bits.CN62PDE
#define _CN63PDE CNPD4bits.CN63PDE

/* CNPD5 */
#define _CN64PDE CNPD5bits.CN64PDE
#define _CN65PDE CNPD5bits.CN65PDE
#define _CN68PDE CNPD5bits.CN68PDE
#define _CN69PDE CNPD5bits.CN69PDE
#define _CN70PDE CNPD5bits.CN70PDE
#define _CN71PDE CNPD5bits.CN71PDE
#define _CN72PDE CNPD5bits.CN72PDE
#define _CN73PDE CNPD5bits.CN73PDE

/* CNPD6 */
#define _CN84PDE CNPD6bits.CN84PDE

/* CNEN1 */
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
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE
#define _CN24IE CNEN2bits.CN24IE
#define _CN25IE CNEN2bits.CN25IE
#define _CN26IE CNEN2bits.CN26IE
#define _CN27IE CNEN2bits.CN27IE
#define _CN28IE CNEN2bits.CN28IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE
#define _CN31IE CNEN2bits.CN31IE

/* CNEN3 */
#define _CN32IE CNEN3bits.CN32IE

/* CNEN4 */
#define _CN49IE CNEN4bits.CN49IE
#define _CN50IE CNEN4bits.CN50IE
#define _CN51IE CNEN4bits.CN51IE
#define _CN52IE CNEN4bits.CN52IE
#define _CN53IE CNEN4bits.CN53IE
#define _CN54IE CNEN4bits.CN54IE
#define _CN55IE CNEN4bits.CN55IE
#define _CN56IE CNEN4bits.CN56IE
#define _CN57IE CNEN4bits.CN57IE
#define _CN58IE CNEN4bits.CN58IE
#define _CN59IE CNEN4bits.CN59IE
#define _CN60IE CNEN4bits.CN60IE
#define _CN61IE CNEN4bits.CN61IE
#define _CN62IE CNEN4bits.CN62IE
#define _CN63IE CNEN4bits.CN63IE

/* CNEN5 */
#define _CN64IE CNEN5bits.CN64IE
#define _CN65IE CNEN5bits.CN65IE
#define _CN68IE CNEN5bits.CN68IE
#define _CN69IE CNEN5bits.CN69IE
#define _CN70IE CNEN5bits.CN70IE
#define _CN71IE CNEN5bits.CN71IE
#define _CN72IE CNEN5bits.CN72IE
#define _CN73IE CNEN5bits.CN73IE

/* CNEN6 */
#define _CN84IE CNEN6bits.CN84IE

/* CNPU1 */
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
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE
#define _CN24PUE CNPU2bits.CN24PUE
#define _CN25PUE CNPU2bits.CN25PUE
#define _CN26PUE CNPU2bits.CN26PUE
#define _CN27PUE CNPU2bits.CN27PUE
#define _CN28PUE CNPU2bits.CN28PUE
#define _CN29PUE CNPU2bits.CN29PUE
#define _CN30PUE CNPU2bits.CN30PUE
#define _CN31PUE CNPU2bits.CN31PUE

/* CNPU3 */
#define _CN32PUE CNPU3bits.CN32PUE

/* CNPU4 */
#define _CN49PUE CNPU4bits.CN49PUE
#define _CN50PUE CNPU4bits.CN50PUE
#define _CN51PUE CNPU4bits.CN51PUE
#define _CN52PUE CNPU4bits.CN52PUE
#define _CN53PUE CNPU4bits.CN53PUE
#define _CN54PUE CNPU4bits.CN54PUE
#define _CN55PUE CNPU4bits.CN55PUE
#define _CN56PUE CNPU4bits.CN56PUE
#define _CN57PUE CNPU4bits.CN57PUE
#define _CN58PUE CNPU4bits.CN58PUE
#define _CN59PUE CNPU4bits.CN59PUE
#define _CN60PUE CNPU4bits.CN60PUE
#define _CN61PUE CNPU4bits.CN61PUE
#define _CN62PUE CNPU4bits.CN62PUE
#define _CN63PUE CNPU4bits.CN63PUE

/* CNPU5 */
#define _CN64PUE CNPU5bits.CN64PUE
#define _CN65PUE CNPU5bits.CN65PUE
#define _CN68PUE CNPU5bits.CN68PUE
#define _CN69PUE CNPU5bits.CN69PUE
#define _CN70PUE CNPU5bits.CN70PUE
#define _CN71PUE CNPU5bits.CN71PUE
#define _CN72PUE CNPU5bits.CN72PUE
#define _CN73PUE CNPU5bits.CN73PUE

/* CNPU6 */
#define _CN84PUE CNPU6bits.CN84PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
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
#define _DMA0IF IFS0bits.DMA0IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPF1IF IFS0bits.SPF1IF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _DMA1IF IFS0bits.DMA1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _IC7IF IFS1bits.IC7IF
#define _DMA2IF IFS1bits.DMA2IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _SPF2IF IFS2bits.SPF2IF
#define _SPI2IF IFS2bits.SPI2IF
#define _DMA3IF IFS2bits.DMA3IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF
#define _IC5IF IFS2bits.IC5IF
#define _IC6IF IFS2bits.IC6IF
#define _OC5IF IFS2bits.OC5IF
#define _OC6IF IFS2bits.OC6IF
#define _OC7IF IFS2bits.OC7IF
#define _PMPIF IFS2bits.PMPIF
#define _DMA4IF IFS2bits.DMA4IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _INT3IF IFS3bits.INT3IF
#define _INT4IF IFS3bits.INT4IF
#define _DMA5IF IFS3bits.DMA5IF
#define _RTCIF IFS3bits.RTCIF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _U2ERIF IFS4bits.U2ERIF
#define _CRCIF IFS4bits.CRCIF
#define _LVDIF IFS4bits.LVDIF
#define _CTMUIF IFS4bits.CTMUIF

/* IFS5 */
#define _U3ERIF IFS5bits.U3ERIF
#define _U3RXIF IFS5bits.U3RXIF
#define _U3TXIF IFS5bits.U3TXIF
#define _U4ERIF IFS5bits.U4ERIF
#define _U4RXIF IFS5bits.U4RXIF
#define _U4TXIF IFS5bits.U4TXIF

/* IFS6 */
#define _LCDIF IFS6bits.LCDIF

/* IFS7 */
#define _JTAGIF IFS7bits.JTAGIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _DMA0IE IEC0bits.DMA0IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPF1IE IEC0bits.SPF1IE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _DMA1IE IEC0bits.DMA1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _IC7IE IEC1bits.IC7IE
#define _DMA2IE IEC1bits.DMA2IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _SPF2IE IEC2bits.SPF2IE
#define _SPI2IE IEC2bits.SPI2IE
#define _DMA3IE IEC2bits.DMA3IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE
#define _IC5IE IEC2bits.IC5IE
#define _IC6IE IEC2bits.IC6IE
#define _OC5IE IEC2bits.OC5IE
#define _OC6IE IEC2bits.OC6IE
#define _OC7IE IEC2bits.OC7IE
#define _PMPIE IEC2bits.PMPIE
#define _DMA4IE IEC2bits.DMA4IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _INT3IE IEC3bits.INT3IE
#define _INT4IE IEC3bits.INT4IE
#define _DMA5IE IEC3bits.DMA5IE
#define _RTCIE IEC3bits.RTCIE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _U2ERIE IEC4bits.U2ERIE
#define _CRCIE IEC4bits.CRCIE
#define _LVDIE IEC4bits.LVDIE
#define _CTMUIE IEC4bits.CTMUIE

/* IEC5 */
#define _U3ERIE IEC5bits.U3ERIE
#define _U3RXIE IEC5bits.U3RXIE
#define _U3TXIE IEC5bits.U3TXIE
#define _U4ERIE IEC5bits.U4ERIE
#define _U4RXIE IEC5bits.U4RXIE
#define _U4TXIE IEC5bits.U4TXIE

/* IEC6 */
#define _LCDIE IEC6bits.LCDIE

/* IEC7 */
#define _JTAGIE IEC7bits.JTAGIE

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
#define _DMA0IP IPC1bits.DMA0IP
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _DMA0IP0 IPC1bits.DMA0IP0
#define _DMA0IP1 IPC1bits.DMA0IP1
#define _DMA0IP2 IPC1bits.DMA0IP2
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _SPF1IP IPC2bits.SPF1IP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPF1IP0 IPC2bits.SPF1IP0
#define _SPF1IP1 IPC2bits.SPF1IP1
#define _SPF1IP2 IPC2bits.SPF1IP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _AD1IP IPC3bits.AD1IP
#define _DMA1IP IPC3bits.DMA1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _DMA1IP0 IPC3bits.DMA1IP0
#define _DMA1IP1 IPC3bits.DMA1IP1
#define _DMA1IP2 IPC3bits.DMA1IP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _CMIP0 IPC4bits.CMIP0
#define _CMIP1 IPC4bits.CMIP1
#define _CMIP2 IPC4bits.CMIP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2
#define _SI2C1P IPC4bits.SI2C1P
#define _MI2C1P IPC4bits.MI2C1P
#define _SI2C1P0 IPC4bits.SI2C1P0
#define _SI2C1P1 IPC4bits.SI2C1P1
#define _SI2C1P2 IPC4bits.SI2C1P2
#define _MI2C1P0 IPC4bits.MI2C1P0
#define _MI2C1P1 IPC4bits.MI2C1P1
#define _MI2C1P2 IPC4bits.MI2C1P2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _IC7IP IPC5bits.IC7IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _IC7IP0 IPC5bits.IC7IP0
#define _IC7IP1 IPC5bits.IC7IP1
#define _IC7IP2 IPC5bits.IC7IP2

/* IPC6 */
#define _DMA2IP IPC6bits.DMA2IP
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _DMA2IP0 IPC6bits.DMA2IP0
#define _DMA2IP1 IPC6bits.DMA2IP1
#define _DMA2IP2 IPC6bits.DMA2IP2
#define _OC3IP0 IPC6bits.OC3IP0
#define _OC3IP1 IPC6bits.OC3IP1
#define _OC3IP2 IPC6bits.OC3IP2
#define _OC4IP0 IPC6bits.OC4IP0
#define _OC4IP1 IPC6bits.OC4IP1
#define _OC4IP2 IPC6bits.OC4IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _T5IP IPC7bits.T5IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _T5IP0 IPC7bits.T5IP0
#define _T5IP1 IPC7bits.T5IP1
#define _T5IP2 IPC7bits.T5IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define _SPF2IP IPC8bits.SPF2IP
#define _SPI2IP IPC8bits.SPI2IP
#define _SPF2IP0 IPC8bits.SPF2IP0
#define _SPF2IP1 IPC8bits.SPF2IP1
#define _SPF2IP2 IPC8bits.SPF2IP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2

/* IPC9 */
#define _DMA3IP IPC9bits.DMA3IP
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC5IP IPC9bits.IC5IP
#define _DMA3IP0 IPC9bits.DMA3IP0
#define _DMA3IP1 IPC9bits.DMA3IP1
#define _DMA3IP2 IPC9bits.DMA3IP2
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2
#define _IC5IP0 IPC9bits.IC5IP0
#define _IC5IP1 IPC9bits.IC5IP1
#define _IC5IP2 IPC9bits.IC5IP2

/* IPC10 */
#define _IC6IP IPC10bits.IC6IP
#define _OC5IP IPC10bits.OC5IP
#define _OC6IP IPC10bits.OC6IP
#define _OC7IP IPC10bits.OC7IP
#define _IC6IP0 IPC10bits.IC6IP0
#define _IC6IP1 IPC10bits.IC6IP1
#define _IC6IP2 IPC10bits.IC6IP2
#define _OC5IP0 IPC10bits.OC5IP0
#define _OC5IP1 IPC10bits.OC5IP1
#define _OC5IP2 IPC10bits.OC5IP2
#define _OC6IP0 IPC10bits.OC6IP0
#define _OC6IP1 IPC10bits.OC6IP1
#define _OC6IP2 IPC10bits.OC6IP2
#define _OC7IP0 IPC10bits.OC7IP0
#define _OC7IP1 IPC10bits.OC7IP1
#define _OC7IP2 IPC10bits.OC7IP2

/* IPC11 */
#define _PMPIP IPC11bits.PMPIP
#define _DMA4IP IPC11bits.DMA4IP
#define _PMPIP0 IPC11bits.PMPIP0
#define _PMPIP1 IPC11bits.PMPIP1
#define _PMPIP2 IPC11bits.PMPIP2
#define _DMA4IP0 IPC11bits.DMA4IP0
#define _DMA4IP1 IPC11bits.DMA4IP1
#define _DMA4IP2 IPC11bits.DMA4IP2

/* IPC12 */
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2
#define _SI2C2P0 IPC12bits.SI2C2P0
#define _SI2C2P1 IPC12bits.SI2C2P1
#define _SI2C2P2 IPC12bits.SI2C2P2
#define _MI2C2P0 IPC12bits.MI2C2P0
#define _MI2C2P1 IPC12bits.MI2C2P1
#define _MI2C2P2 IPC12bits.MI2C2P2
#define _SI2C2P IPC12bits.SI2C2P
#define _MI2C2P IPC12bits.MI2C2P

/* IPC13 */
#define _INT3IP IPC13bits.INT3IP
#define _INT4IP IPC13bits.INT4IP
#define _INT3IP0 IPC13bits.INT3IP0
#define _INT3IP1 IPC13bits.INT3IP1
#define _INT3IP2 IPC13bits.INT3IP2
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2

/* IPC15 */
#define _DMA5IP IPC15bits.DMA5IP
#define _RTCIP IPC15bits.RTCIP
#define _DMA5IP0 IPC15bits.DMA5IP0
#define _DMA5IP1 IPC15bits.DMA5IP1
#define _DMA5IP2 IPC15bits.DMA5IP2
#define _RTCIP0 IPC15bits.RTCIP0
#define _RTCIP1 IPC15bits.RTCIP1
#define _RTCIP2 IPC15bits.RTCIP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U2ERIP IPC16bits.U2ERIP
#define _CRCIP IPC16bits.CRCIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2
#define _U2ERIP0 IPC16bits.U2ERIP0
#define _U2ERIP1 IPC16bits.U2ERIP1
#define _U2ERIP2 IPC16bits.U2ERIP2
#define _CRCIP0 IPC16bits.CRCIP0
#define _CRCIP1 IPC16bits.CRCIP1
#define _CRCIP2 IPC16bits.CRCIP2

/* IPC18 */
#define _LVDIP IPC18bits.LVDIP
#define _LVDIP0 IPC18bits.LVDIP0
#define _LVDIP1 IPC18bits.LVDIP1
#define _LVDIP2 IPC18bits.LVDIP2

/* IPC19 */
#define _CTMUIP IPC19bits.CTMUIP
#define _CTMUIP0 IPC19bits.CTMUIP0
#define _CTMUIP1 IPC19bits.CTMUIP1
#define _CTMUIP2 IPC19bits.CTMUIP2

/* IPC20 */
#define _U3ERIP IPC20bits.U3ERIP
#define _U3RXIP IPC20bits.U3RXIP
#define _U3TXIP IPC20bits.U3TXIP
#define _U3ERIP0 IPC20bits.U3ERIP0
#define _U3ERIP1 IPC20bits.U3ERIP1
#define _U3ERIP2 IPC20bits.U3ERIP2
#define _U3RXIP0 IPC20bits.U3RXIP0
#define _U3RXIP1 IPC20bits.U3RXIP1
#define _U3RXIP2 IPC20bits.U3RXIP2
#define _U3TXIP0 IPC20bits.U3TXIP0
#define _U3TXIP1 IPC20bits.U3TXIP1
#define _U3TXIP2 IPC20bits.U3TXIP2

/* IPC21 */
#define _U4ERIP IPC21bits.U4ERIP
#define _U4ERIP0 IPC21bits.U4ERIP0
#define _U4ERIP1 IPC21bits.U4ERIP1
#define _U4ERIP2 IPC21bits.U4ERIP2

/* IPC22 */
#define _U4RXIP IPC22bits.U4RXIP
#define _U4TXIP IPC22bits.U4TXIP
#define _U4RXIP0 IPC22bits.U4RXIP0
#define _U4RXIP1 IPC22bits.U4RXIP1
#define _U4RXIP2 IPC22bits.U4RXIP2
#define _U4TXIP0 IPC22bits.U4TXIP0
#define _U4TXIP1 IPC22bits.U4TXIP1
#define _U4TXIP2 IPC22bits.U4TXIP2

/* IPC25 */
#define _LCDIP IPC25bits.LCDIP
#define _LCDIP0 IPC25bits.LCDIP0
#define _LCDIP1 IPC25bits.LCDIP1
#define _LCDIP2 IPC25bits.LCDIP2

/* IPC29 */
#define _JTAGIP IPC29bits.JTAGIP
#define _JTAGIP0 IPC29bits.JTAGIP0
#define _JTAGIP1 IPC29bits.JTAGIP1
#define _JTAGIP2 IPC29bits.JTAGIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VHOLD INTTREGbits.VHOLD
#define _CPUIRQ INTTREGbits.CPUIRQ
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
#define _TECS T1CONbits.TECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _TECS0 T1CONbits.TECS0
#define _TECS1 T1CONbits.TECS1
#define _TIECS T1CONbits.TIECS
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1

/* T2CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
#define _T32 T2CONbits.T32
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
#define _T45 T4CONbits.T45
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

/* IC1CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC2CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC3CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC4CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC5CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC5CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC6CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC6CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC7CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC7CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* OC1CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC2CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC3CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC4CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC5CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC5CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC6CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC6CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC7CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */

/* OC7CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

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
#define _R_NOT_W I2C1STATbits.R_NOT_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_NOT_A I2C1STATbits.D_NOT_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
#define _BCL I2C1STATbits.BCL
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT
#define _R_W I2C1STATbits.R_W
#define _D_A I2C1STATbits.D_A

/* I2C2CON */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _IPMIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2STAT */
/* Bitname _TBF cannot be defined because it is used by more than one SFR */
/* Bitname _RBF cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _I2COV cannot be defined because it is used by more than one SFR */
/* Bitname _IWCOL cannot be defined because it is used by more than one SFR */
/* Bitname _ADD10 cannot be defined because it is used by more than one SFR */
/* Bitname _GCSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */

/* U1MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U1STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U1TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U1RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U2TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U2RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SISEL SPI1STATbits.SISEL
#define _SRXMPT SPI1STATbits.SRXMPT
#define _SPIROV SPI1STATbits.SPIROV
#define _SRMPT SPI1STATbits.SRMPT
#define _SPIBEC SPI1STATbits.SPIBEC
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN
#define _SISEL0 SPI1STATbits.SISEL0
#define _SISEL1 SPI1STATbits.SISEL1
#define _SISEL2 SPI1STATbits.SISEL2
#define _SPIBEC0 SPI1STATbits.SPIBEC0
#define _SPIBEC1 SPI1STATbits.SPIBEC1
#define _SPIBEC2 SPI1STATbits.SPIBEC2

/* SPI1CON1 */
#define _PPRE SPI1CON1bits.PPRE
#define _SPRE SPI1CON1bits.SPRE
#define _MSTEN SPI1CON1bits.MSTEN
#define _CKP SPI1CON1bits.CKP
#define _SSEN SPI1CON1bits.SSEN
#define _CKE SPI1CON1bits.CKE
#define _SMP SPI1CON1bits.SMP
#define _MODE16 SPI1CON1bits.MODE16
#define _DISSDO SPI1CON1bits.DISSDO
#define _DISSCK SPI1CON1bits.DISSCK
#define _PPRE0 SPI1CON1bits.PPRE0
#define _PPRE1 SPI1CON1bits.PPRE1
#define _SPRE0 SPI1CON1bits.SPRE0
#define _SPRE1 SPI1CON1bits.SPRE1
#define _SPRE2 SPI1CON1bits.SPRE2

/* SPI1CON2 */
#define _SPIBEN SPI1CON2bits.SPIBEN
#define _SPIFE SPI1CON2bits.SPIFE
#define _SPIFPOL SPI1CON2bits.SPIFPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

/* U3MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U3STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U3TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U3RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL cannot be defined because it is used by more than one SFR */
/* Bitname _SRXMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SRMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC2 cannot be defined because it is used by more than one SFR */

/* SPI2CON1 */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _DISSCK cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */

/* SPI2CON2 */
/* Bitname _SPIBEN cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFE cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

/* U4MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U4STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U4TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U4RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

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

/* ODCB */
#define _ODB0 ODCBbits.ODB0
#define _ODB1 ODCBbits.ODB1
#define _ODB2 ODCBbits.ODB2
#define _ODB3 ODCBbits.ODB3
#define _ODB4 ODCBbits.ODB4
#define _ODB5 ODCBbits.ODB5
#define _ODB6 ODCBbits.ODB6
#define _ODB7 ODCBbits.ODB7
#define _ODB8 ODCBbits.ODB8
#define _ODB9 ODCBbits.ODB9
#define _ODB10 ODCBbits.ODB10
#define _ODB11 ODCBbits.ODB11
#define _ODB12 ODCBbits.ODB12
#define _ODB13 ODCBbits.ODB13
#define _ODB14 ODCBbits.ODB14
#define _ODB15 ODCBbits.ODB15

/* TRISC */
#define _TRISC12 TRISCbits.TRISC12
#define _TRISC15 TRISCbits.TRISC15

/* PORTC */
#define _RC12 PORTCbits.RC12
#define _RC13 PORTCbits.RC13
#define _RC14 PORTCbits.RC14
#define _RC15 PORTCbits.RC15

/* LATC */
#define _LATC12 LATCbits.LATC12
#define _LATC13 LATCbits.LATC13
#define _LATC14 LATCbits.LATC14
#define _LATC15 LATCbits.LATC15

/* ODCC */
#define _ODC12 ODCCbits.ODC12
#define _ODC13 ODCCbits.ODC13
#define _ODC14 ODCCbits.ODC14
#define _ODC15 ODCCbits.ODC15

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

/* ODCD */
#define _ODD0 ODCDbits.ODD0
#define _ODD1 ODCDbits.ODD1
#define _ODD2 ODCDbits.ODD2
#define _ODD3 ODCDbits.ODD3
#define _ODD4 ODCDbits.ODD4
#define _ODD5 ODCDbits.ODD5
#define _ODD6 ODCDbits.ODD6
#define _ODD7 ODCDbits.ODD7
#define _ODD8 ODCDbits.ODD8
#define _ODD9 ODCDbits.ODD9
#define _ODD10 ODCDbits.ODD10
#define _ODD11 ODCDbits.ODD11

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

/* ODCE */
#define _ODE0 ODCEbits.ODE0
#define _ODE1 ODCEbits.ODE1
#define _ODE2 ODCEbits.ODE2
#define _ODE3 ODCEbits.ODE3
#define _ODE4 ODCEbits.ODE4
#define _ODE5 ODCEbits.ODE5
#define _ODE6 ODCEbits.ODE6
#define _ODE7 ODCEbits.ODE7

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

/* ODCF */
#define _ODF0 ODCFbits.ODF0
#define _ODF1 ODCFbits.ODF1
#define _ODF2 ODCFbits.ODF2
#define _ODF3 ODCFbits.ODF3
#define _ODF4 ODCFbits.ODF4
#define _ODF5 ODCFbits.ODF5
#define _ODF6 ODCFbits.ODF6

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

/* ODCG */
#define _ODG2 ODCGbits.ODG2
#define _ODG3 ODCGbits.ODG3
#define _ODG6 ODCGbits.ODG6
#define _ODG7 ODCGbits.ODG7
#define _ODG8 ODCGbits.ODG8
#define _ODG9 ODCGbits.ODG9

/* PADCFG1 */
#define _PMPTTL PADCFG1bits.PMPTTL

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _MODE12 AD1CON1bits.MODE12
/* Bitname _DMAEN cannot be defined because it is used by more than one SFR */
#define _DMABM AD1CON1bits.DMABM
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _SSRC3 AD1CON1bits.SSRC3
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CSCNA AD1CON2bits.CSCNA
#define _BUFREGEN AD1CON2bits.BUFREGEN
#define _OFFCAL AD1CON2bits.OFFCAL
#define _NVCFG0 AD1CON2bits.NVCFG0
#define _PVCFG AD1CON2bits.PVCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _SMPI4 AD1CON2bits.SMPI4
#define _PCVFG0 AD1CON2bits.PCVFG0
#define _PCVFG1 AD1CON2bits.PCVFG1

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
#define _PUMPEN AD1CON3bits.PUMPEN
#define _EXTSAM AD1CON3bits.EXTSAM
#define _ADRC AD1CON3bits.ADRC
#define _ADCS0 AD1CON3bits.ADCS0
#define _ADCS1 AD1CON3bits.ADCS1
#define _ADCS2 AD1CON3bits.ADCS2
#define _ADCS3 AD1CON3bits.ADCS3
#define _ADCS4 AD1CON3bits.ADCS4
#define _ADCS5 AD1CON3bits.ADCS5
#define _ADCS6 AD1CON3bits.ADCS6
#define _ADCS7 AD1CON3bits.ADCS7
#define _SAMC0 AD1CON3bits.SAMC0
#define _SAMC1 AD1CON3bits.SAMC1
#define _SAMC2 AD1CON3bits.SAMC2
#define _SAMC3 AD1CON3bits.SAMC3
#define _SAMC4 AD1CON3bits.SAMC4

/* AD1CHS */
#define _CH0SA AD1CHSbits.CH0SA
#define _CH0NA AD1CHSbits.CH0NA
#define _CH0SB AD1CHSbits.CH0SB
#define _CH0NB AD1CHSbits.CH0NB
#define _CH0SA0 AD1CHSbits.CH0SA0
#define _CH0SA1 AD1CHSbits.CH0SA1
#define _CH0SA2 AD1CHSbits.CH0SA2
#define _CH0SA3 AD1CHSbits.CH0SA3
#define _CH0SA4 AD1CHSbits.CH0SA4
#define _CH0NA0 AD1CHSbits.CH0NA0
#define _CH0NA1 AD1CHSbits.CH0NA1
#define _CH0NA2 AD1CHSbits.CH0NA2
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3
#define _CH0SB4 AD1CHSbits.CH0SB4
#define _CH0NB0 AD1CHSbits.CH0NB0
#define _CH0NB1 AD1CHSbits.CH0NB1
#define _CH0NB2 AD1CHSbits.CH0NB2

/* AD1CSSH */
#define _CSS16 AD1CSSHbits.CSS16
#define _CSS17 AD1CSSHbits.CSS17
#define _CSS18 AD1CSSHbits.CSS18
#define _CSS19 AD1CSSHbits.CSS19
#define _CSS20 AD1CSSHbits.CSS20
#define _CSS21 AD1CSSHbits.CSS21
#define _CSS22 AD1CSSHbits.CSS22
#define _CSS23 AD1CSSHbits.CSS23
#define _CSS24 AD1CSSHbits.CSS24
#define _CSS25 AD1CSSHbits.CSS25
#define _CSS26 AD1CSSHbits.CSS26
#define _CSS27 AD1CSSHbits.CSS27
#define _CSS28 AD1CSSHbits.CSS28
#define _CSS29 AD1CSSHbits.CSS29
#define _CSS30 AD1CSSHbits.CSS30

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3
#define _CSS4 AD1CSSLbits.CSS4
#define _CSS5 AD1CSSLbits.CSS5
#define _CSS6 AD1CSSLbits.CSS6
#define _CSS7 AD1CSSLbits.CSS7
#define _CSS8 AD1CSSLbits.CSS8
#define _CSS9 AD1CSSLbits.CSS9
#define _CSS10 AD1CSSLbits.CSS10
#define _CSS11 AD1CSSLbits.CSS11
#define _CSS12 AD1CSSLbits.CSS12
#define _CSS13 AD1CSSLbits.CSS13
#define _CSS14 AD1CSSLbits.CSS14
#define _CSS15 AD1CSSLbits.CSS15

/* AD1CON4 */
#define _DMABL AD1CON4bits.DMABL
#define _DMABL0 AD1CON4bits.DMABL0
#define _DMABL1 AD1CON4bits.DMABL1
#define _DMABL2 AD1CON4bits.DMABL2

/* AD1CON5 */
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _WM AD1CON5bits.WM
#define _ASINT AD1CON5bits.ASINT
#define _BGREQ AD1CON5bits.BGREQ
#define _CTMREQ AD1CON5bits.CTMREQ
#define _LPEN AD1CON5bits.LPEN
#define _ASEN AD1CON5bits.ASEN
#define _CM0 AD1CON5bits.CM0
#define _CM1 AD1CON5bits.CM1
#define _WM0 AD1CON5bits.WM0
#define _WM1 AD1CON5bits.WM1
#define _ASINT0 AD1CON5bits.ASINT0
#define _ASINT1 AD1CON5bits.ASINT1

/* AD1CHITL */
#define _CHH0 AD1CHITLbits.CHH0
#define _CHH1 AD1CHITLbits.CHH1
#define _CHH2 AD1CHITLbits.CHH2
#define _CHH3 AD1CHITLbits.CHH3
#define _CHH4 AD1CHITLbits.CHH4
#define _CHH5 AD1CHITLbits.CHH5
#define _CHH6 AD1CHITLbits.CHH6
#define _CHH7 AD1CHITLbits.CHH7
#define _CHH8 AD1CHITLbits.CHH8
#define _CHH9 AD1CHITLbits.CHH9
#define _CHH10 AD1CHITLbits.CHH10
#define _CHH11 AD1CHITLbits.CHH11
#define _CHH12 AD1CHITLbits.CHH12
#define _CHH13 AD1CHITLbits.CHH13
#define _CHH14 AD1CHITLbits.CHH14
#define _CHH15 AD1CHITLbits.CHH15

/* CTMUCON1 */
#define _CTTRIG CTMUCON1bits.CTTRIG
#define _IDISSEN CTMUCON1bits.IDISSEN
#define _EDGSEQEN CTMUCON1bits.EDGSEQEN
#define _EDGEN CTMUCON1bits.EDGEN
#define _TGEN CTMUCON1bits.TGEN
#define _CTMUSIDL CTMUCON1bits.CTMUSIDL
#define _CTMUEN CTMUCON1bits.CTMUEN

/* CTMUCON2 */
#define _EDG2SEL CTMUCON2bits.EDG2SEL
#define _EDG2POL CTMUCON2bits.EDG2POL
#define _EDG2MOD CTMUCON2bits.EDG2MOD
#define _EDG1STAT CTMUCON2bits.EDG1STAT
#define _EDG2STAT CTMUCON2bits.EDG2STAT
#define _EDG1SEL CTMUCON2bits.EDG1SEL
#define _EDG1POL CTMUCON2bits.EDG1POL
#define _EDG1MOD CTMUCON2bits.EDG1MOD
#define _EDG2SEL0 CTMUCON2bits.EDG2SEL0
#define _EDG2SEL1 CTMUCON2bits.EDG2SEL1
#define _EDG2SEL2 CTMUCON2bits.EDG2SEL2
#define _EDG2SEL3 CTMUCON2bits.EDG2SEL3
#define _EDG1SEL0 CTMUCON2bits.EDG1SEL0
#define _EDG1SEL1 CTMUCON2bits.EDG1SEL1
#define _EDG1SEL2 CTMUCON2bits.EDG1SEL2
#define _EDG1SEL3 CTMUCON2bits.EDG1SEL3

/* CTMUICON */
#define _IRNG CTMUICONbits.IRNG
#define _ITRIM CTMUICONbits.ITRIM
#define _IRNG0 CTMUICONbits.IRNG0
#define _IRNG1 CTMUICONbits.IRNG1
#define _ITRIM0 CTMUICONbits.ITRIM0
#define _ITRIM1 CTMUICONbits.ITRIM1
#define _ITRIM2 CTMUICONbits.ITRIM2
#define _ITRIM3 CTMUICONbits.ITRIM3
#define _ITRIM4 CTMUICONbits.ITRIM4
#define _ITRIM5 CTMUICONbits.ITRIM5

/* AD1CTMENH */
#define _CTMEN16 AD1CTMENHbits.CTMEN16
#define _CTMEN17 AD1CTMENHbits.CTMEN17
#define _CTMEN18 AD1CTMENHbits.CTMEN18
#define _CTMEN19 AD1CTMENHbits.CTMEN19
#define _CTMEN20 AD1CTMENHbits.CTMEN20
#define _CTMEN21 AD1CTMENHbits.CTMEN21
#define _CTMEN22 AD1CTMENHbits.CTMEN22
#define _CTMEN23 AD1CTMENHbits.CTMEN23
#define _CTMEN24 AD1CTMENHbits.CTMEN24
#define _CTMEN25 AD1CTMENHbits.CTMEN25
#define _CTMEN26 AD1CTMENHbits.CTMEN26
#define _CTMEN27 AD1CTMENHbits.CTMEN27
#define _CTMEN28 AD1CTMENHbits.CTMEN28
#define _CTMEN29 AD1CTMENHbits.CTMEN29
#define _CTMEN30 AD1CTMENHbits.CTMEN30
#define _CTMEN31 AD1CTMENHbits.CTMEN31

/* AD1CTMENL */
#define _CTMEN0 AD1CTMENLbits.CTMEN0
#define _CTMEN1 AD1CTMENLbits.CTMEN1
#define _CTMEN2 AD1CTMENLbits.CTMEN2
#define _CTMEN3 AD1CTMENLbits.CTMEN3
#define _CTMEN4 AD1CTMENLbits.CTMEN4
#define _CTMEN5 AD1CTMENLbits.CTMEN5
#define _CTMEN6 AD1CTMENLbits.CTMEN6
#define _CTMEN7 AD1CTMENLbits.CTMEN7
#define _CTMEN8 AD1CTMENLbits.CTMEN8
#define _CTMEN9 AD1CTMENLbits.CTMEN9
#define _CTMEN10 AD1CTMENLbits.CTMEN10
#define _CTMEN11 AD1CTMENLbits.CTMEN11
#define _CTMEN12 AD1CTMENLbits.CTMEN12
#define _CTMEN13 AD1CTMENLbits.CTMEN13
#define _CTMEN14 AD1CTMENLbits.CTMEN14
#define _CTMEN15 AD1CTMENLbits.CTMEN15

/* DMACON */
#define _PRSSEL DMACONbits.PRSSEL
/* Bitname _DMAEN cannot be defined because it is used by more than one SFR */

/* DMACH0 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT0 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* DMACH1 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT1 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* DMACH2 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT2 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* DMACH3 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT3 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* DMACH4 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT4 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* DMACH5 */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _BYTE cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CHREQ cannot be defined because it is used by more than one SFR */
/* Bitname _RELOAD cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DAMODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMODE1 cannot be defined because it is used by more than one SFR */

/* DMAINT5 */
/* Bitname _HALFEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRUNIF cannot be defined because it is used by more than one SFR */
/* Bitname _HALFIF cannot be defined because it is used by more than one SFR */
/* Bitname _DONEIF cannot be defined because it is used by more than one SFR */
/* Bitname _LOWIF cannot be defined because it is used by more than one SFR */
/* Bitname _HIGHIF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DBUFWF cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHSEL5 cannot be defined because it is used by more than one SFR */

/* ANCFG */
#define _VBGEN ANCFGbits.VBGEN
#define _VBG2EN ANCFGbits.VBG2EN
#define _VBG6EN ANCFGbits.VBG6EN

/* ANSB */
#define _ANSB0 ANSBbits.ANSB0
#define _ANSB1 ANSBbits.ANSB1
#define _ANSB2 ANSBbits.ANSB2
#define _ANSB3 ANSBbits.ANSB3
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB5 ANSBbits.ANSB5
#define _ANSB6 ANSBbits.ANSB6
#define _ANSB7 ANSBbits.ANSB7
#define _ANSB8 ANSBbits.ANSB8
#define _ANSB9 ANSBbits.ANSB9
#define _ANSB10 ANSBbits.ANSB10
#define _ANSB11 ANSBbits.ANSB11
#define _ANSB12 ANSBbits.ANSB12
#define _ANSB13 ANSBbits.ANSB13
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15
#define _ANSELB0 ANSBbits.ANSELB0
#define _ANSELB1 ANSBbits.ANSELB1
#define _ANSELB2 ANSBbits.ANSELB2
#define _ANSELB3 ANSBbits.ANSELB3
#define _ANSELB4 ANSBbits.ANSELB4
#define _ANSELB5 ANSBbits.ANSELB5
#define _ANSELB6 ANSBbits.ANSELB6
#define _ANSELB7 ANSBbits.ANSELB7
#define _ANSELB8 ANSBbits.ANSELB8
#define _ANSELB9 ANSBbits.ANSELB9
#define _ANSELB10 ANSBbits.ANSELB10
#define _ANSELB11 ANSBbits.ANSELB11
#define _ANSELB12 ANSBbits.ANSELB12
#define _ANSELB13 ANSBbits.ANSELB13
#define _ANSELB14 ANSBbits.ANSELB14
#define _ANSELB15 ANSBbits.ANSELB15

/* ANSD */
#define _ANSD6 ANSDbits.ANSD6
#define _ANSD7 ANSDbits.ANSD7
#define _ANSD10 ANSDbits.ANSD10
#define _ANSD11 ANSDbits.ANSD11
#define _ANSELD6 ANSDbits.ANSELD6
#define _ANSELD7 ANSDbits.ANSELD7
#define _ANSELD10 ANSDbits.ANSELD10
#define _ANSELD11 ANSDbits.ANSELD11

/* ANSE */
#define _ANSE4 ANSEbits.ANSE4
#define _ANSE5 ANSEbits.ANSE5
#define _ANSE6 ANSEbits.ANSE6
#define _ANSE7 ANSEbits.ANSE7
#define _ANSELE4 ANSEbits.ANSELE4
#define _ANSELE5 ANSEbits.ANSELE5
#define _ANSELE6 ANSEbits.ANSELE6
#define _ANSELE7 ANSEbits.ANSELE7

/* ANSELG */
#define _ANSG6 ANSELGbits.ANSG6
#define _ANSG7 ANSELGbits.ANSG7
#define _ANSG8 ANSELGbits.ANSG8
#define _ANSG9 ANSELGbits.ANSG9
#define _ANSELG6 ANSELGbits.ANSELG6
#define _ANSELG7 ANSELGbits.ANSELG7
#define _ANSELG8 ANSELGbits.ANSELG8
#define _ANSELG9 ANSELGbits.ANSELG9

/* LCDREG */
#define _CKSEL LCDREGbits.CKSEL
#define _MODE13 LCDREGbits.MODE13
#define _BIAS LCDREGbits.BIAS
#define _CPEN LCDREGbits.CPEN
#define _CKSEL0 LCDREGbits.CKSEL0
#define _CKSEL1 LCDREGbits.CKSEL1
#define _BIAS0 LCDREGbits.BIAS0
#define _BIAS1 LCDREGbits.BIAS1
#define _BIAS2 LCDREGbits.BIAS2

/* LCDREF */
#define _LRLAT LCDREFbits.LRLAT
#define _LRLBP LCDREFbits.LRLBP
#define _LRLAP LCDREFbits.LRLAP
#define _VLCD1PE LCDREFbits.VLCD1PE
#define _VLCD2PE LCDREFbits.VLCD2PE
#define _VLCD3PE LCDREFbits.VLCD3PE
#define _LCDCST LCDREFbits.LCDCST
#define _LCDIRE LCDREFbits.LCDIRE
#define _LRLAT0 LCDREFbits.LRLAT0
#define _LRLAT1 LCDREFbits.LRLAT1
#define _LRLAT2 LCDREFbits.LRLAT2
#define _LRLBP0 LCDREFbits.LRLBP0
#define _LRLBP1 LCDREFbits.LRLBP1
#define _LRLAP0 LCDREFbits.LRLAP0
#define _LRLAP1 LCDREFbits.LRLAP1
#define _LCDCST0 LCDREFbits.LCDCST0
#define _LCDCST1 LCDREFbits.LCDCST1
#define _LCDCST2 LCDREFbits.LCDCST2

/* LCDCON */
#define _LMUX LCDCONbits.LMUX
#define _CS LCDCONbits.CS
#define _WERR LCDCONbits.WERR
#define _SLPEN LCDCONbits.SLPEN
#define _LCDSIDL LCDCONbits.LCDSIDL
#define _LCDEN LCDCONbits.LCDEN
#define _LMUX0 LCDCONbits.LMUX0
#define _LMUX1 LCDCONbits.LMUX1
#define _LMUX2 LCDCONbits.LMUX2
#define _CS0 LCDCONbits.CS0
#define _CS1 LCDCONbits.CS1

/* LCDPS */
#define _LP LCDPSbits.LP
#define _WA LCDPSbits.WA
#define _LCDA LCDPSbits.LCDA
#define _BIASMD LCDPSbits.BIASMD
#define _WFT LCDPSbits.WFT
#define _LP0 LCDPSbits.LP0
#define _LP1 LCDPSbits.LP1
#define _LP2 LCDPSbits.LP2
#define _LP3 LCDPSbits.LP3

/* LCDSE0 */
#define _SE00 LCDSE0bits.SE00
#define _SE01 LCDSE0bits.SE01
#define _SE02 LCDSE0bits.SE02
#define _SE03 LCDSE0bits.SE03
#define _SE04 LCDSE0bits.SE04
#define _SE05 LCDSE0bits.SE05
#define _SE06 LCDSE0bits.SE06
#define _SE07 LCDSE0bits.SE07
#define _SE08 LCDSE0bits.SE08
#define _SE09 LCDSE0bits.SE09
#define _SE10 LCDSE0bits.SE10
#define _SE11 LCDSE0bits.SE11
#define _SE12 LCDSE0bits.SE12
#define _SE13 LCDSE0bits.SE13
#define _SE14 LCDSE0bits.SE14
#define _SE15 LCDSE0bits.SE15

/* LCDSE1 */
#define _SE16 LCDSE1bits.SE16
#define _SE17 LCDSE1bits.SE17
#define _SE18 LCDSE1bits.SE18
#define _SE19 LCDSE1bits.SE19
#define _SE20 LCDSE1bits.SE20
#define _SE21 LCDSE1bits.SE21
#define _SE22 LCDSE1bits.SE22
#define _SE23 LCDSE1bits.SE23
#define _SE24 LCDSE1bits.SE24
#define _SE25 LCDSE1bits.SE25
#define _SE26 LCDSE1bits.SE26
#define _SE27 LCDSE1bits.SE27
#define _SE28 LCDSE1bits.SE28
#define _SE29 LCDSE1bits.SE29
#define _SE30 LCDSE1bits.SE30
#define _SE31 LCDSE1bits.SE31

/* LCDSE2 */
#define _SE47 LCDSE2bits.SE47

/* LCDSE3 */
#define _SE48 LCDSE3bits.SE48

/* LCDDATA0 */
#define _S00C0 LCDDATA0bits.S00C0
#define _S01C0 LCDDATA0bits.S01C0
#define _S02C0 LCDDATA0bits.S02C0
#define _S03C0 LCDDATA0bits.S03C0
#define _S04C0 LCDDATA0bits.S04C0
#define _S05C0 LCDDATA0bits.S05C0
#define _S06C0 LCDDATA0bits.S06C0
#define _S07C0 LCDDATA0bits.S07C0
#define _S08C0 LCDDATA0bits.S08C0
#define _S09C0 LCDDATA0bits.S09C0
#define _S10C0 LCDDATA0bits.S10C0
#define _S11C0 LCDDATA0bits.S11C0
#define _S12C0 LCDDATA0bits.S12C0
#define _S13C0 LCDDATA0bits.S13C0
#define _S14C0 LCDDATA0bits.S14C0
#define _S15C0 LCDDATA0bits.S15C0

/* LCDDATA1 */
#define _S16C0 LCDDATA1bits.S16C0
#define _S17C0 LCDDATA1bits.S17C0
#define _S18C0 LCDDATA1bits.S18C0
#define _S19C0 LCDDATA1bits.S19C0
#define _S20C0 LCDDATA1bits.S20C0
#define _S21C0 LCDDATA1bits.S21C0
#define _S22C0 LCDDATA1bits.S22C0
#define _S23C0 LCDDATA1bits.S23C0
#define _S24C0 LCDDATA1bits.S24C0
#define _S25C0 LCDDATA1bits.S25C0
#define _S26C0 LCDDATA1bits.S26C0
#define _S27C0 LCDDATA1bits.S27C0
#define _S28C0 LCDDATA1bits.S28C0
#define _S29C0 LCDDATA1bits.S29C0
#define _S30C0 LCDDATA1bits.S30C0
#define _S31C0 LCDDATA1bits.S31C0

/* LCDDATA2 */
#define _S47C0 LCDDATA2bits.S47C0

/* LCDDATA3 */
#define _S48C0 LCDDATA3bits.S48C0

/* LCDDATA4 */
#define _S00C1 LCDDATA4bits.S00C1
#define _S01C1 LCDDATA4bits.S01C1
#define _S02C1 LCDDATA4bits.S02C1
#define _S03C1 LCDDATA4bits.S03C1
#define _S04C1 LCDDATA4bits.S04C1
#define _S05C1 LCDDATA4bits.S05C1
#define _S06C1 LCDDATA4bits.S06C1
#define _S07C1 LCDDATA4bits.S07C1
#define _S08C1 LCDDATA4bits.S08C1
#define _S09C1 LCDDATA4bits.S09C1
#define _S10C1 LCDDATA4bits.S10C1
#define _S11C1 LCDDATA4bits.S11C1
#define _S12C1 LCDDATA4bits.S12C1
#define _S13C1 LCDDATA4bits.S13C1
#define _S14C1 LCDDATA4bits.S14C1
#define _S15C1 LCDDATA4bits.S15C1

/* LCDDATA5 */
#define _S16C1 LCDDATA5bits.S16C1
#define _S17C1 LCDDATA5bits.S17C1
#define _S18C1 LCDDATA5bits.S18C1
#define _S19C1 LCDDATA5bits.S19C1
#define _S20C1 LCDDATA5bits.S20C1
#define _S21C1 LCDDATA5bits.S21C1
#define _S22C1 LCDDATA5bits.S22C1
#define _S23C1 LCDDATA5bits.S23C1
#define _S24C1 LCDDATA5bits.S24C1
#define _S25C1 LCDDATA5bits.S25C1
#define _S26C1 LCDDATA5bits.S26C1
#define _S27C1 LCDDATA5bits.S27C1
#define _S28C1 LCDDATA5bits.S28C1
#define _S29C1 LCDDATA5bits.S29C1
#define _S30C1 LCDDATA5bits.S30C1
#define _S31C1 LCDDATA5bits.S31C1

/* LCDDATA6 */
#define _S47C1 LCDDATA6bits.S47C1

/* LCDDATA7 */
#define _S48C1 LCDDATA7bits.S48C1

/* LCDDATA8 */
#define _S00C2 LCDDATA8bits.S00C2
#define _S01C2 LCDDATA8bits.S01C2
#define _S02C2 LCDDATA8bits.S02C2
#define _S03C2 LCDDATA8bits.S03C2
#define _S04C2 LCDDATA8bits.S04C2
#define _S05C2 LCDDATA8bits.S05C2
#define _S06C2 LCDDATA8bits.S06C2
#define _S07C2 LCDDATA8bits.S07C2
#define _S08C2 LCDDATA8bits.S08C2
#define _S09C2 LCDDATA8bits.S09C2
#define _S10C2 LCDDATA8bits.S10C2
#define _S11C2 LCDDATA8bits.S11C2
#define _S12C2 LCDDATA8bits.S12C2
#define _S13C2 LCDDATA8bits.S13C2
#define _S14C2 LCDDATA8bits.S14C2
#define _S15C2 LCDDATA8bits.S15C2

/* LCDDATA9 */
#define _S16C2 LCDDATA9bits.S16C2
#define _S17C2 LCDDATA9bits.S17C2
#define _S18C2 LCDDATA9bits.S18C2
#define _S19C2 LCDDATA9bits.S19C2
#define _S20C2 LCDDATA9bits.S20C2
#define _S21C2 LCDDATA9bits.S21C2
#define _S22C2 LCDDATA9bits.S22C2
#define _S23C2 LCDDATA9bits.S23C2
#define _S24C2 LCDDATA9bits.S24C2
#define _S25C2 LCDDATA9bits.S25C2
#define _S26C2 LCDDATA9bits.S26C2
#define _S27C2 LCDDATA9bits.S27C2
#define _S28C2 LCDDATA9bits.S28C2
#define _S29C2 LCDDATA9bits.S29C2
#define _S30C2 LCDDATA9bits.S30C2
#define _S31C2 LCDDATA9bits.S31C2

/* LCDDATA10 */
#define _S47C2 LCDDATA10bits.S47C2

/* LCDDATA11 */
#define _S48C2 LCDDATA11bits.S48C2

/* LCDDATA12 */
#define _S00C3 LCDDATA12bits.S00C3
#define _S01C3 LCDDATA12bits.S01C3
#define _S02C3 LCDDATA12bits.S02C3
#define _S03C3 LCDDATA12bits.S03C3
#define _S04C3 LCDDATA12bits.S04C3
#define _S05C3 LCDDATA12bits.S05C3
#define _S06C3 LCDDATA12bits.S06C3
#define _S07C3 LCDDATA12bits.S07C3
#define _S08C3 LCDDATA12bits.S08C3
#define _S09C3 LCDDATA12bits.S09C3
#define _S10C3 LCDDATA12bits.S10C3
#define _S11C3 LCDDATA12bits.S11C3
#define _S12C3 LCDDATA12bits.S12C3
#define _S13C3 LCDDATA12bits.S13C3
#define _S14C3 LCDDATA12bits.S14C3
#define _S15C3 LCDDATA12bits.S15C3

/* LCDDATA13 */
#define _S16C3 LCDDATA13bits.S16C3
#define _S17C3 LCDDATA13bits.S17C3
#define _S18C3 LCDDATA13bits.S18C3
#define _S19C3 LCDDATA13bits.S19C3
#define _S20C3 LCDDATA13bits.S20C3
#define _S21C3 LCDDATA13bits.S21C3
#define _S22C3 LCDDATA13bits.S22C3
#define _S23C3 LCDDATA13bits.S23C3
#define _S24C3 LCDDATA13bits.S24C3
#define _S25C3 LCDDATA13bits.S25C3
#define _S26C3 LCDDATA13bits.S26C3
#define _S27C3 LCDDATA13bits.S27C3
#define _S28C3 LCDDATA13bits.S28C3
#define _S29C3 LCDDATA13bits.S29C3
#define _S30C3 LCDDATA13bits.S30C3
#define _S31C3 LCDDATA13bits.S31C3

/* LCDDATA14 */
#define _S47C3 LCDDATA14bits.S47C3

/* LCDDATA15 */
#define _S48C3 LCDDATA15bits.S48C3

/* LCDDATA16 */
#define _S00C4 LCDDATA16bits.S00C4
#define _S01C4 LCDDATA16bits.S01C4
#define _S02C4 LCDDATA16bits.S02C4
#define _S03C4 LCDDATA16bits.S03C4
#define _S04C4 LCDDATA16bits.S04C4
#define _S05C4 LCDDATA16bits.S05C4
#define _S06C4 LCDDATA16bits.S06C4
#define _S07C4 LCDDATA16bits.S07C4
#define _S08C4 LCDDATA16bits.S08C4
#define _S09C4 LCDDATA16bits.S09C4
#define _S10C4 LCDDATA16bits.S10C4
#define _S11C4 LCDDATA16bits.S11C4
#define _S12C4 LCDDATA16bits.S12C4
#define _S13C4 LCDDATA16bits.S13C4
#define _S14C4 LCDDATA16bits.S14C4
#define _S15C4 LCDDATA16bits.S15C4

/* LCDDATA17 */
#define _S16C4 LCDDATA17bits.S16C4
#define _S17C4 LCDDATA17bits.S17C4
#define _S18C4 LCDDATA17bits.S18C4
#define _S19C4 LCDDATA17bits.S19C4
#define _S20C4 LCDDATA17bits.S20C4
#define _S21C4 LCDDATA17bits.S21C4
#define _S22C4 LCDDATA17bits.S22C4
#define _S23C4 LCDDATA17bits.S23C4
#define _S24C4 LCDDATA17bits.S24C4
#define _S25C4 LCDDATA17bits.S25C4
#define _S26C4 LCDDATA17bits.S26C4
#define _S27C4 LCDDATA17bits.S27C4
#define _S28C4 LCDDATA17bits.S28C4
#define _S29C4 LCDDATA17bits.S29C4
#define _S30C4 LCDDATA17bits.S30C4
#define _S31C4 LCDDATA17bits.S31C4

/* LCDDATA18 */
#define _S47C4 LCDDATA18bits.S47C4

/* LCDDATA19 */
#define _S48C4 LCDDATA19bits.S48C4

/* LCDDATA20 */
#define _S00C5 LCDDATA20bits.S00C5
#define _S01C5 LCDDATA20bits.S01C5
#define _S02C5 LCDDATA20bits.S02C5
#define _S03C5 LCDDATA20bits.S03C5
#define _S04C5 LCDDATA20bits.S04C5
#define _S05C5 LCDDATA20bits.S05C5
#define _S06C5 LCDDATA20bits.S06C5
#define _S07C5 LCDDATA20bits.S07C5
#define _S08C5 LCDDATA20bits.S08C5
#define _S09C5 LCDDATA20bits.S09C5
#define _S10C5 LCDDATA20bits.S10C5
#define _S11C5 LCDDATA20bits.S11C5
#define _S12C5 LCDDATA20bits.S12C5
#define _S13C5 LCDDATA20bits.S13C5
#define _S14C5 LCDDATA20bits.S14C5
#define _S15C5 LCDDATA20bits.S15C5

/* LCDDATA21 */
#define _S16C5 LCDDATA21bits.S16C5
#define _S17C5 LCDDATA21bits.S17C5
#define _S18C5 LCDDATA21bits.S18C5
#define _S19C5 LCDDATA21bits.S19C5
#define _S20C5 LCDDATA21bits.S20C5
#define _S21C5 LCDDATA21bits.S21C5
#define _S22C5 LCDDATA21bits.S22C5
#define _S23C5 LCDDATA21bits.S23C5
#define _S24C5 LCDDATA21bits.S24C5
#define _S25C5 LCDDATA21bits.S25C5
#define _S26C5 LCDDATA21bits.S26C5
#define _S27C5 LCDDATA21bits.S27C5
#define _S28C5 LCDDATA21bits.S28C5
#define _S29C5 LCDDATA21bits.S29C5
#define _S30C5 LCDDATA21bits.S30C5
#define _S31C5 LCDDATA21bits.S31C5

/* LCDDATA22 */
#define _S47C5 LCDDATA22bits.S47C5

/* LCDDATA23 */
#define _S48C5 LCDDATA23bits.S48C5

/* LCDDATA24 */
#define _S00C6 LCDDATA24bits.S00C6
#define _S01C6 LCDDATA24bits.S01C6
#define _S02C6 LCDDATA24bits.S02C6
#define _S03C6 LCDDATA24bits.S03C6
#define _S04C6 LCDDATA24bits.S04C6
#define _S05C6 LCDDATA24bits.S05C6
#define _S06C6 LCDDATA24bits.S06C6
#define _S07C6 LCDDATA24bits.S07C6
#define _S08C6 LCDDATA24bits.S08C6
#define _S09C6 LCDDATA24bits.S09C6
#define _S10C6 LCDDATA24bits.S10C6
#define _S11C6 LCDDATA24bits.S11C6
#define _S12C6 LCDDATA24bits.S12C6
#define _S13C6 LCDDATA24bits.S13C6
#define _S14C6 LCDDATA24bits.S14C6
#define _S15C6 LCDDATA24bits.S15C6

/* LCDDATA25 */
#define _S16C6 LCDDATA25bits.S16C6
#define _S17C6 LCDDATA25bits.S17C6
#define _S18C6 LCDDATA25bits.S18C6
#define _S19C6 LCDDATA25bits.S19C6
#define _S20C6 LCDDATA25bits.S20C6
#define _S21C6 LCDDATA25bits.S21C6
#define _S22C6 LCDDATA25bits.S22C6
#define _S23C6 LCDDATA25bits.S23C6
#define _S24C6 LCDDATA25bits.S24C6
#define _S25C6 LCDDATA25bits.S25C6
#define _S26C6 LCDDATA25bits.S26C6
#define _S27C6 LCDDATA25bits.S27C6
#define _S28C6 LCDDATA25bits.S28C6
#define _S29C6 LCDDATA25bits.S29C6
#define _S30C6 LCDDATA25bits.S30C6
#define _S31C6 LCDDATA25bits.S31C6

/* LCDDATA26 */
#define _S47C6 LCDDATA26bits.S47C6

/* LCDDATA27 */
#define _S48C6 LCDDATA27bits.S48C6

/* LCDDATA28 */
#define _S00C7 LCDDATA28bits.S00C7
#define _S01C7 LCDDATA28bits.S01C7
#define _S02C7 LCDDATA28bits.S02C7
#define _S03C7 LCDDATA28bits.S03C7
#define _S04C7 LCDDATA28bits.S04C7
#define _S05C7 LCDDATA28bits.S05C7
#define _S06C7 LCDDATA28bits.S06C7
#define _S07C7 LCDDATA28bits.S07C7
#define _S08C7 LCDDATA28bits.S08C7
#define _S09C7 LCDDATA28bits.S09C7
#define _S10C7 LCDDATA28bits.S10C7
#define _S11C7 LCDDATA28bits.S11C7
#define _S12C7 LCDDATA28bits.S12C7
#define _S13C7 LCDDATA28bits.S13C7
#define _S14C7 LCDDATA28bits.S14C7
#define _S15C7 LCDDATA28bits.S15C7

/* LCDDATA29 */
#define _S16C7 LCDDATA29bits.S16C7
#define _S17C7 LCDDATA29bits.S17C7
#define _S18C7 LCDDATA29bits.S18C7
#define _S19C7 LCDDATA29bits.S19C7
#define _S20C7 LCDDATA29bits.S20C7
#define _S21C7 LCDDATA29bits.S21C7
#define _S22C7 LCDDATA29bits.S22C7
#define _S23C7 LCDDATA29bits.S23C7
#define _S24C7 LCDDATA29bits.S24C7
#define _S25C7 LCDDATA29bits.S25C7
#define _S26C7 LCDDATA29bits.S26C7
#define _S27C7 LCDDATA29bits.S27C7
#define _S28C7 LCDDATA29bits.S28C7
#define _S29C7 LCDDATA29bits.S29C7
#define _S30C7 LCDDATA29bits.S30C7
#define _S31C7 LCDDATA29bits.S31C7

/* LCDDATA30 */
#define _S47C7 LCDDATA30bits.S47C7

/* LCDDATA31 */
#define _S48C7 LCDDATA31bits.S48C7

/* PMCON1 */
#define _IRQM PMCON1bits.IRQM
#define _BUSKEEP PMCON1bits.BUSKEEP
#define _ALMODE PMCON1bits.ALMODE
#define _ALP PMCON1bits.ALP
#define _CSF PMCON1bits.CSF
#define _MODE PMCON1bits.MODE
#define _ADRMUX PMCON1bits.ADRMUX
#define _PSIDL PMCON1bits.PSIDL
#define _PMPEN PMCON1bits.PMPEN
#define _IRQM0 PMCON1bits.IRQM0
#define _IRQM1 PMCON1bits.IRQM1
#define _CSF0 PMCON1bits.CSF0
#define _CSF1 PMCON1bits.CSF1
#define _MODE0 PMCON1bits.MODE0
#define _MODE1 PMCON1bits.MODE1
#define _ADRMUX0 PMCON1bits.ADRMUX0
#define _ADRMUX1 PMCON1bits.ADRMUX1

/* PMCON2 */
#define _RADDR PMCON2bits.RADDR
#define _TIMEOUT PMCON2bits.TIMEOUT
#define _ERROR PMCON2bits.ERROR
#define _BUSY PMCON2bits.BUSY
#define _RADDR16 PMCON2bits.RADDR16
#define _RADDR17 PMCON2bits.RADDR17
#define _RADDR18 PMCON2bits.RADDR18
#define _RADDR19 PMCON2bits.RADDR19
#define _RADDR20 PMCON2bits.RADDR20
#define _RADDR21 PMCON2bits.RADDR21
#define _RADDR22 PMCON2bits.RADDR22
#define _RADDR23 PMCON2bits.RADDR23

/* PMCON3 */
#define _PTEN16 PMCON3bits.PTEN16
#define _PTEN17 PMCON3bits.PTEN17
#define _PTEN18 PMCON3bits.PTEN18
#define _PTEN19 PMCON3bits.PTEN19
#define _PTEN20 PMCON3bits.PTEN20
#define _PTEN21 PMCON3bits.PTEN21
#define _PTEN22 PMCON3bits.PTEN22
#define _AWAITE PMCON3bits.AWAITE
#define _AWAITM PMCON3bits.AWAITM
#define _PTBE0EN PMCON3bits.PTBE0EN
#define _PTBE1EN PMCON3bits.PTBE1EN
#define _PTRDEN PMCON3bits.PTRDEN
#define _PTWREN PMCON3bits.PTWREN
#define _AWAITM0 PMCON3bits.AWAITM0
#define _AWAITM1 PMCON3bits.AWAITM1

/* PMCON4 */
#define _PTEN0 PMCON4bits.PTEN0
#define _PTEN1 PMCON4bits.PTEN1
#define _PTEN2 PMCON4bits.PTEN2
#define _PTEN3 PMCON4bits.PTEN3
#define _PTEN4 PMCON4bits.PTEN4
#define _PTEN5 PMCON4bits.PTEN5
#define _PTEN6 PMCON4bits.PTEN6
#define _PTEN7 PMCON4bits.PTEN7
#define _PTEN8 PMCON4bits.PTEN8
#define _PTEN9 PMCON4bits.PTEN9
#define _PTEN10 PMCON4bits.PTEN10
#define _PTEN11 PMCON4bits.PTEN11
#define _PTEN12 PMCON4bits.PTEN12
#define _PTEN13 PMCON4bits.PTEN13
#define _PTEN14 PMCON4bits.PTEN14
#define _PTEN15 PMCON4bits.PTEN15

/* PMCS1CF */
/* Bitname _PTSZ cannot be defined because it is used by more than one SFR */
/* Bitname _ACKP cannot be defined because it is used by more than one SFR */
/* Bitname _SM cannot be defined because it is used by more than one SFR */
/* Bitname _RDSP cannot be defined because it is used by more than one SFR */
/* Bitname _WRSP cannot be defined because it is used by more than one SFR */
/* Bitname _BEP cannot be defined because it is used by more than one SFR */
/* Bitname _CSPTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CSP cannot be defined because it is used by more than one SFR */
/* Bitname _CSDIS cannot be defined because it is used by more than one SFR */
/* Bitname _PTSZ0 cannot be defined because it is used by more than one SFR */
/* Bitname _PTSZ1 cannot be defined because it is used by more than one SFR */

/* PMCS1BS */
/* Bitname _BASE11 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE15 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE16 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE17 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE18 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE19 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE20 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE21 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE22 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE23 cannot be defined because it is used by more than one SFR */

/* PMCS1MD */
/* Bitname _DWAITE cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM1 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM2 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM1 cannot be defined because it is used by more than one SFR */

/* PMCS2CF */
/* Bitname _PTSZ cannot be defined because it is used by more than one SFR */
/* Bitname _ACKP cannot be defined because it is used by more than one SFR */
/* Bitname _SM cannot be defined because it is used by more than one SFR */
/* Bitname _RDSP cannot be defined because it is used by more than one SFR */
/* Bitname _WRSP cannot be defined because it is used by more than one SFR */
/* Bitname _BEP cannot be defined because it is used by more than one SFR */
/* Bitname _CSPTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CSP cannot be defined because it is used by more than one SFR */
/* Bitname _CSDIS cannot be defined because it is used by more than one SFR */
/* Bitname _PTSZ0 cannot be defined because it is used by more than one SFR */
/* Bitname _PTSZ1 cannot be defined because it is used by more than one SFR */

/* PMCS2BS */
/* Bitname _BASE11 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE15 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE16 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE17 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE18 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE19 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE20 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE21 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE22 cannot be defined because it is used by more than one SFR */
/* Bitname _BASE23 cannot be defined because it is used by more than one SFR */

/* PMCS2MD */
/* Bitname _DWAITE cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITE0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITE1 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM1 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM2 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DWAITB1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMWAIT2 cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ACKM1 cannot be defined because it is used by more than one SFR */

/* PMSTAT */
#define _OB0E PMSTATbits.OB0E
#define _OB1E PMSTATbits.OB1E
#define _OB2E PMSTATbits.OB2E
#define _OB3E PMSTATbits.OB3E
#define _OBUF PMSTATbits.OBUF
#define _OBE PMSTATbits.OBE
#define _IB0F PMSTATbits.IB0F
#define _IB1F PMSTATbits.IB1F
#define _IB2F PMSTATbits.IB2F
#define _IB3F PMSTATbits.IB3F
#define _IBOV PMSTATbits.IBOV
#define _IBF PMSTATbits.IBF

/* ALCFGRPT */
#define _ARPT ALCFGRPTbits.ARPT
#define _ALRMPTR ALCFGRPTbits.ALRMPTR
#define _AMASK ALCFGRPTbits.AMASK
#define _CHIME ALCFGRPTbits.CHIME
#define _ALRMEN ALCFGRPTbits.ALRMEN
#define _ARPT0 ALCFGRPTbits.ARPT0
#define _ARPT1 ALCFGRPTbits.ARPT1
#define _ARPT2 ALCFGRPTbits.ARPT2
#define _ARPT3 ALCFGRPTbits.ARPT3
#define _ARPT4 ALCFGRPTbits.ARPT4
#define _ARPT5 ALCFGRPTbits.ARPT5
#define _ARPT6 ALCFGRPTbits.ARPT6
#define _ARPT7 ALCFGRPTbits.ARPT7
#define _ALRMPTR0 ALCFGRPTbits.ALRMPTR0
#define _ALRMPTR1 ALCFGRPTbits.ALRMPTR1
#define _AMASK0 ALCFGRPTbits.AMASK0
#define _AMASK1 ALCFGRPTbits.AMASK1
#define _AMASK2 ALCFGRPTbits.AMASK2
#define _AMASK3 ALCFGRPTbits.AMASK3

/* RCFGCAL */
#define _CAL RCFGCALbits.CAL
#define _RTCPTR RCFGCALbits.RTCPTR
#define _RTCOE RCFGCALbits.RTCOE
#define _HALFSEC RCFGCALbits.HALFSEC
#define _RTCSYNC RCFGCALbits.RTCSYNC
#define _RTCWREN RCFGCALbits.RTCWREN
#define _RTCEN RCFGCALbits.RTCEN
#define _CAL0 RCFGCALbits.CAL0
#define _CAL1 RCFGCALbits.CAL1
#define _CAL2 RCFGCALbits.CAL2
#define _CAL3 RCFGCALbits.CAL3
#define _CAL4 RCFGCALbits.CAL4
#define _CAL5 RCFGCALbits.CAL5
#define _CAL6 RCFGCALbits.CAL6
#define _CAL7 RCFGCALbits.CAL7
#define _RTCPTR0 RCFGCALbits.RTCPTR0
#define _RTCPTR1 RCFGCALbits.RTCPTR1

/* RTCPWC */
#define _RTCOUT RTCPWCbits.RTCOUT
#define _RTCLK RTCPWCbits.RTCLK
#define _PWSPRE RTCPWCbits.PWSPRE
#define _PWCPRE RTCPWCbits.PWCPRE
#define _PWCPOL RTCPWCbits.PWCPOL
#define _PWCEN RTCPWCbits.PWCEN
#define _RTCOUT0 RTCPWCbits.RTCOUT0
#define _RTCOUT1 RTCPWCbits.RTCOUT1
#define _RTCLK0 RTCPWCbits.RTCLK0
#define _RTCLK1 RTCPWCbits.RTCLK1

/* MDCON */
#define _MDBIT MDCONbits.MDBIT
#define _MDOPOL MDCONbits.MDOPOL
#define _MDSLR MDCONbits.MDSLR
#define _MDOE MDCONbits.MDOE
#define _MDSIDL MDCONbits.MDSIDL
#define _MDEN MDCONbits.MDEN

/* MDSRC */
#define _MS MDSRCbits.MS
#define _SODIS MDSRCbits.SODIS
#define _MS0 MDSRCbits.MS0
#define _MS1 MDSRCbits.MS1
#define _MS2 MDSRCbits.MS2
#define _MS3 MDSRCbits.MS3

/* MDCAR */
#define _CL MDCARbits.CL
#define _CLSYNC MDCARbits.CLSYNC
#define _CLPOL MDCARbits.CLPOL
#define _CLODIS MDCARbits.CLODIS
#define _CH MDCARbits.CH
#define _CHSYNC MDCARbits.CHSYNC
#define _CHPOL MDCARbits.CHPOL
#define _CHODIS MDCARbits.CHODIS
#define _CL0 MDCARbits.CL0
#define _CL1 MDCARbits.CL1
#define _CL2 MDCARbits.CL2
#define _CL3 MDCARbits.CL3
#define _CH0 MDCARbits.CH0
#define _CH1 MDCARbits.CH1
#define _CH2 MDCARbits.CH2
#define _CH3 MDCARbits.CH3

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C3OUT CMSTATbits.C3OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _C3EVT CMSTATbits.C3EVT
#define _CMIDL CMSTATbits.CMIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVRR CVRCONbits.CVRR
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _CVREFM CVRCONbits.CVREFM
#define _CVREFP CVRCONbits.CVREFP
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _CVREFM0 CVRCONbits.CVREFM0
#define _CVREFM1 CVRCONbits.CVREFM1

/* CM1CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM2CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM3CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CRCCON1 */
#define _LENDIAN CRCCON1bits.LENDIAN
#define _CRCGO CRCCON1bits.CRCGO
#define _CRCISEL CRCCON1bits.CRCISEL
#define _CRCMPT CRCCON1bits.CRCMPT
#define _CRCFUL CRCCON1bits.CRCFUL
#define _VWORD CRCCON1bits.VWORD
#define _CSIDL CRCCON1bits.CSIDL
#define _CRCEN CRCCON1bits.CRCEN
#define _VWORD0 CRCCON1bits.VWORD0
#define _VWORD1 CRCCON1bits.VWORD1
#define _VWORD2 CRCCON1bits.VWORD2
#define _VWORD3 CRCCON1bits.VWORD3
#define _VWORD4 CRCCON1bits.VWORD4

/* CRCCON2 */
#define _PLEN CRCCON2bits.PLEN
#define _DWIDTH CRCCON2bits.DWIDTH
#define _PLEN0 CRCCON2bits.PLEN0
#define _PLEN1 CRCCON2bits.PLEN1
#define _PLEN2 CRCCON2bits.PLEN2
#define _PLEN3 CRCCON2bits.PLEN3
#define _PLEN4 CRCCON2bits.PLEN4
#define _DWIDTH0 CRCCON2bits.DWIDTH0
#define _DWIDTH1 CRCCON2bits.DWIDTH1
#define _DWIDTH2 CRCCON2bits.DWIDTH2
#define _DWIDTH3 CRCCON2bits.DWIDTH3
#define _DWIDTH4 CRCCON2bits.DWIDTH4

/* CRCXORL */
#define _X1 CRCXORLbits.X1
#define _X2 CRCXORLbits.X2
#define _X3 CRCXORLbits.X3
#define _X4 CRCXORLbits.X4
#define _X5 CRCXORLbits.X5
#define _X6 CRCXORLbits.X6
#define _X7 CRCXORLbits.X7
#define _X8 CRCXORLbits.X8
#define _X9 CRCXORLbits.X9
#define _X10 CRCXORLbits.X10
#define _X11 CRCXORLbits.X11
#define _X12 CRCXORLbits.X12
#define _X13 CRCXORLbits.X13
#define _X14 CRCXORLbits.X14
#define _X15 CRCXORLbits.X15

/* CRCXORH */
#define _X16 CRCXORHbits.X16
#define _X17 CRCXORHbits.X17
#define _X18 CRCXORHbits.X18
#define _X19 CRCXORHbits.X19
#define _X20 CRCXORHbits.X20
#define _X21 CRCXORHbits.X21
#define _X22 CRCXORHbits.X22
#define _X23 CRCXORHbits.X23
#define _X24 CRCXORHbits.X24
#define _X25 CRCXORHbits.X25
#define _X26 CRCXORHbits.X26
#define _X27 CRCXORHbits.X27
#define _X28 CRCXORHbits.X28
#define _X29 CRCXORHbits.X29
#define _X30 CRCXORHbits.X30
#define _X31 CRCXORHbits.X31

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
#define _INT3R RPINR1bits.INT3R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4
#define _INT2R5 RPINR1bits.INT2R5
#define _INT3R0 RPINR1bits.INT3R0
#define _INT3R1 RPINR1bits.INT3R1
#define _INT3R2 RPINR1bits.INT3R2
#define _INT3R3 RPINR1bits.INT3R3
#define _INT3R4 RPINR1bits.INT3R4
#define _INT3R5 RPINR1bits.INT3R5

/* RPINR2 */
#define _INT4R RPINR2bits.INT4R
#define _INT4R0 RPINR2bits.INT4R0
#define _INT4R1 RPINR2bits.INT4R1
#define _INT4R2 RPINR2bits.INT4R2
#define _INT5R3 RPINR2bits.INT5R3
#define _INT4R4 RPINR2bits.INT4R4
#define _INT4R5 RPINR2bits.INT4R5
#define _OC3R0 RPINR2bits.OC3R0
#define _OC3R1 RPINR2bits.OC3R1
#define _OC3R2 RPINR2bits.OC3R2
#define _OC3R3 RPINR2bits.OC3R3
#define _OC3R4 RPINR2bits.OC3R4
#define _OC3R5 RPINR2bits.OC3R5

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T3CKR RPINR3bits.T3CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T2CKR5 RPINR3bits.T2CKR5
#define _T3CKR0 RPINR3bits.T3CKR0
#define _T3CKR1 RPINR3bits.T3CKR1
#define _T3CKR2 RPINR3bits.T3CKR2
#define _T3CKR3 RPINR3bits.T3CKR3
#define _T3CKR4 RPINR3bits.T3CKR4
#define _T3CKR5 RPINR3bits.T3CKR5

/* RPINR4 */
#define _T4CKR RPINR4bits.T4CKR
#define _T5CKR RPINR4bits.T5CKR
#define _T4CKR0 RPINR4bits.T4CKR0
#define _T4CKR1 RPINR4bits.T4CKR1
#define _T4CKR2 RPINR4bits.T4CKR2
#define _T4CKR3 RPINR4bits.T4CKR3
#define _T4CKR4 RPINR4bits.T4CKR4
#define _T4CKR5 RPINR4bits.T4CKR5
#define _T5CKR0 RPINR4bits.T5CKR0
#define _T5CKR1 RPINR4bits.T5CKR1
#define _T5CKR2 RPINR4bits.T5CKR2
#define _T5CKR3 RPINR4bits.T5CKR3
#define _T5CKR4 RPINR4bits.T5CKR4
#define _T5CKR5 RPINR4bits.T5CKR5

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC1R5 RPINR7bits.IC1R5
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4
#define _IC2R5 RPINR7bits.IC2R5

/* RPINR8 */
#define _IC3R RPINR8bits.IC3R
#define _IC4R RPINR8bits.IC4R
#define _IC3R0 RPINR8bits.IC3R0
#define _IC3R1 RPINR8bits.IC3R1
#define _IC3R2 RPINR8bits.IC3R2
#define _IC3R3 RPINR8bits.IC3R3
#define _IC3R4 RPINR8bits.IC3R4
#define _IC3R5 RPINR8bits.IC3R5
#define _IC4R0 RPINR8bits.IC4R0
#define _IC4R1 RPINR8bits.IC4R1
#define _IC4R2 RPINR8bits.IC4R2
#define _IC4R3 RPINR8bits.IC4R3
#define _IC4R4 RPINR8bits.IC4R4
#define _IC4R5 RPINR8bits.IC4R5

/* RPINR9 */
#define _IC5R RPINR9bits.IC5R
#define _IC6R RPINR9bits.IC6R
#define _IC5R0 RPINR9bits.IC5R0
#define _IC5R1 RPINR9bits.IC5R1
#define _IC5R2 RPINR9bits.IC5R2
#define _IC5R3 RPINR9bits.IC5R3
#define _IC5R4 RPINR9bits.IC5R4
#define _IC5R5 RPINR9bits.IC5R5
#define _IC6R0 RPINR9bits.IC6R0
#define _IC6R1 RPINR9bits.IC6R1
#define _IC6R2 RPINR9bits.IC6R2
#define _IC6R3 RPINR9bits.IC6R3
#define _IC6R4 RPINR9bits.IC6R4
#define _IC6R5 RPINR9bits.IC6R5

/* RPINR10 */
#define _IC7R RPINR10bits.IC7R
#define _IC7R0 RPINR10bits.IC7R0
#define _IC7R1 RPINR10bits.IC7R1
#define _IC7R2 RPINR10bits.IC7R2
#define _IC7R3 RPINR10bits.IC7R3
#define _IC7R4 RPINR10bits.IC7R4
#define _IC7R5 RPINR10bits.IC7R5
#define _IC8R0 RPINR10bits.IC8R0
#define _IC8R1 RPINR10bits.IC8R1
#define _IC8R2 RPINR10bits.IC8R2
#define _IC8R3 RPINR10bits.IC8R3
#define _IC8R4 RPINR10bits.IC8R4
#define _IC8R5 RPINR10bits.IC8R5

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFBR RPINR11bits.OCFBR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4
#define _OCFAR5 RPINR11bits.OCFAR5
#define _OCFBR0 RPINR11bits.OCFBR0
#define _OCFBR1 RPINR11bits.OCFBR1
#define _OCFBR2 RPINR11bits.OCFBR2
#define _OCFBR3 RPINR11bits.OCFBR3
#define _OCFBR4 RPINR11bits.OCFBR4
#define _OCFBR5 RPINR11bits.OCFBR5

/* RPINR17 */
#define _U3RXR RPINR17bits.U3RXR
#define _U3RXR0 RPINR17bits.U3RXR0
#define _U3RXR1 RPINR17bits.U3RXR1
#define _U3RXR2 RPINR17bits.U3RXR2
#define _U3RXR3 RPINR17bits.U3RXR3
#define _U3RXR4 RPINR17bits.U3RXR4
#define _U3RXR5 RPINR17bits.U3RXR5

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1CTSR RPINR18bits.U1CTSR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1RXR5 RPINR18bits.U1RXR5
#define _U1CTSR0 RPINR18bits.U1CTSR0
#define _U1CTSR1 RPINR18bits.U1CTSR1
#define _U1CTSR2 RPINR18bits.U1CTSR2
#define _U1CTSR3 RPINR18bits.U1CTSR3
#define _U1CTSR4 RPINR18bits.U1CTSR4
#define _U1CTSR5 RPINR18bits.U1CTSR5

/* RPINR19 */
#define _U2RXR RPINR19bits.U2RXR
#define _U2CTSR RPINR19bits.U2CTSR
#define _U2RXR0 RPINR19bits.U2RXR0
#define _U2RXR1 RPINR19bits.U2RXR1
#define _U2RXR2 RPINR19bits.U2RXR2
#define _U2RXR3 RPINR19bits.U2RXR3
#define _U2RXR4 RPINR19bits.U2RXR4
#define _U2RXR5 RPINR19bits.U2RXR5
#define _U2CTSR0 RPINR19bits.U2CTSR0
#define _U2CTSR1 RPINR19bits.U2CTSR1
#define _U2CTSR2 RPINR19bits.U2CTSR2
#define _U2CTSR3 RPINR19bits.U2CTSR3
#define _U2CTSR4 RPINR19bits.U2CTSR4
#define _U2CTSR5 RPINR19bits.U2CTSR5

/* RPINR20 */
#define _SDI1R RPINR20bits.SDI1R
#define _SCK1R RPINR20bits.SCK1R
#define _SDI1R0 RPINR20bits.SDI1R0
#define _SDI1R1 RPINR20bits.SDI1R1
#define _SDI1R2 RPINR20bits.SDI1R2
#define _SDI1R3 RPINR20bits.SDI1R3
#define _SDI1R4 RPINR20bits.SDI1R4
#define _SDI1R5 RPINR20bits.SDI1R5
#define _SCK1R0 RPINR20bits.SCK1R0
#define _SCK1R1 RPINR20bits.SCK1R1
#define _SCK1R2 RPINR20bits.SCK1R2
#define _SCK1R3 RPINR20bits.SCK1R3
#define _SCK1R4 RPINR20bits.SCK1R4
#define _SCK1R5 RPINR20bits.SCK1R5

/* RPINR21 */
#define _SS1R RPINR21bits.SS1R
#define _U3CTSR RPINR21bits.U3CTSR
#define _SS1R0 RPINR21bits.SS1R0
#define _SS1R1 RPINR21bits.SS1R1
#define _SS1R2 RPINR21bits.SS1R2
#define _SS1R3 RPINR21bits.SS1R3
#define _SS1R4 RPINR21bits.SS1R4
#define _SS1R5 RPINR21bits.SS1R5
#define _U3CTSR0 RPINR21bits.U3CTSR0
#define _U3CTSR1 RPINR21bits.U3CTSR1
#define _U3CTSR2 RPINR21bits.U3CTSR2
#define _U3CTSR3 RPINR21bits.U3CTSR3
#define _U3CTSR4 RPINR21bits.U3CTSR4
#define _U3CTSR5 RPINR21bits.U3CTSR5

/* RPINR22 */
#define _SDI2R RPINR22bits.SDI2R
#define _SCK2R RPINR22bits.SCK2R
#define _SDI2R0 RPINR22bits.SDI2R0
#define _SDI2R1 RPINR22bits.SDI2R1
#define _SDI2R2 RPINR22bits.SDI2R2
#define _SDI2R3 RPINR22bits.SDI2R3
#define _SDI2R4 RPINR22bits.SDI2R4
#define _SDI2R5 RPINR22bits.SDI2R5
#define _SCK2R0 RPINR22bits.SCK2R0
#define _SCK2R1 RPINR22bits.SCK2R1
#define _SCK2R2 RPINR22bits.SCK2R2
#define _SCK2R3 RPINR22bits.SCK2R3
#define _SCK2R4 RPINR22bits.SCK2R4
#define _SCK2R5 RPINR22bits.SCK2R5

/* RPINR23 */
#define _SS2R RPINR23bits.SS2R
#define _T1CKR RPINR23bits.T1CKR
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4
#define _SS2R5 RPINR23bits.SS2R5
#define _T1CKR0 RPINR23bits.T1CKR0
#define _T1CKR1 RPINR23bits.T1CKR1
#define _T1CKR2 RPINR23bits.T1CKR2
#define _T1CKR3 RPINR23bits.T1CKR3
#define _T1CKR4 RPINR23bits.T1CKR4
#define _T1CKR5 RPINR23bits.T1CKR5

/* RPINR27 */
#define _U4RXR RPINR27bits.U4RXR
#define _U4CTSR RPINR27bits.U4CTSR
#define _U4RXR0 RPINR27bits.U4RXR0
#define _U4RXR1 RPINR27bits.U4RXR1
#define _U4RXR2 RPINR27bits.U4RXR2
#define _U4RXR3 RPINR27bits.U4RXR3
#define _U4RXR4 RPINR27bits.U4RXR4
#define _U4RXR5 RPINR27bits.U4RXR5
#define _U4CTSR0 RPINR27bits.U4CTSR0
#define _U4CTSR1 RPINR27bits.U4CTSR1
#define _U4CTSR2 RPINR27bits.U4CTSR2
#define _U4CTSR3 RPINR27bits.U4CTSR3
#define _U4CTSR4 RPINR27bits.U4CTSR4
#define _U4CTSR5 RPINR27bits.U4CTSR5

/* RPINR30 */
#define _MDMIR RPINR30bits.MDMIR
#define _MDMIR0 RPINR30bits.MDMIR0
#define _MDMIR1 RPINR30bits.MDMIR1
#define _MDMIR2 RPINR30bits.MDMIR2
#define _MDMIR3 RPINR30bits.MDMIR3
#define _MDMIR4 RPINR30bits.MDMIR4
#define _MDMIR5 RPINR30bits.MDMIR5

/* RPINR31 */
#define _MDC1R RPINR31bits.MDC1R
#define _MDC2R RPINR31bits.MDC2R
#define _MDC1R0 RPINR31bits.MDC1R0
#define _MDC1R1 RPINR31bits.MDC1R1
#define _MDC1R2 RPINR31bits.MDC1R2
#define _MDC1R3 RPINR31bits.MDC1R3
#define _MDC1R4 RPINR31bits.MDC1R4
#define _MDC1R5 RPINR31bits.MDC1R5
#define _MDC2R0 RPINR31bits.MDC2R0
#define _MDC2R1 RPINR31bits.MDC2R1
#define _MDC2R2 RPINR31bits.MDC2R2
#define _MDC2R3 RPINR31bits.MDC2R3
#define _MDC2R4 RPINR31bits.MDC2R4
#define _MDC2R5 RPINR31bits.MDC2R5

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
#define _RP4R0 RPOR2bits.RP4R0
#define _RP4R1 RPOR2bits.RP4R1
#define _RP4R2 RPOR2bits.RP4R2
#define _RP4R3 RPOR2bits.RP4R3
#define _RP4R4 RPOR2bits.RP4R4
#define _RP4R5 RPOR2bits.RP4R5

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

/* RPOR4 */
#define _RP8R RPOR4bits.RP8R
#define _RP9R RPOR4bits.RP9R
#define _RP8R0 RPOR4bits.RP8R0
#define _RP8R1 RPOR4bits.RP8R1
#define _RP8R2 RPOR4bits.RP8R2
#define _RP8R3 RPOR4bits.RP8R3
#define _RP8R4 RPOR4bits.RP8R4
#define _RP8R5 RPOR4bits.RP8R5
#define _RP9R0 RPOR4bits.RP9R0
#define _RP9R1 RPOR4bits.RP9R1
#define _RP9R2 RPOR4bits.RP9R2
#define _RP9R3 RPOR4bits.RP9R3
#define _RP9R4 RPOR4bits.RP9R4
#define _RP9R5 RPOR4bits.RP9R5

/* RPOR5 */
#define _RP10R RPOR5bits.RP10R
#define _RP11R RPOR5bits.RP11R
#define _RP10R0 RPOR5bits.RP10R0
#define _RP10R1 RPOR5bits.RP10R1
#define _RP10R2 RPOR5bits.RP10R2
#define _RP10R3 RPOR5bits.RP10R3
#define _RP10R4 RPOR5bits.RP10R4
#define _RP10R5 RPOR5bits.RP10R5
#define _RP11R0 RPOR5bits.RP11R0
#define _RP11R1 RPOR5bits.RP11R1
#define _RP11R2 RPOR5bits.RP11R2
#define _RP11R3 RPOR5bits.RP11R3
#define _RP11R4 RPOR5bits.RP11R4
#define _RP11R5 RPOR5bits.RP11R5

/* RPOR6 */
#define _RP12R RPOR6bits.RP12R
#define _RP13R RPOR6bits.RP13R
#define _RP12R0 RPOR6bits.RP12R0
#define _RP12R1 RPOR6bits.RP12R1
#define _RP12R2 RPOR6bits.RP12R2
#define _RP12R3 RPOR6bits.RP12R3
#define _RP12R4 RPOR6bits.RP12R4
#define _RP12R5 RPOR6bits.RP12R5
#define _RP13R0 RPOR6bits.RP13R0
#define _RP13R1 RPOR6bits.RP13R1
#define _RP13R2 RPOR6bits.RP13R2
#define _RP13R3 RPOR6bits.RP13R3
#define _RP13R4 RPOR6bits.RP13R4
#define _RP13R5 RPOR6bits.RP13R5

/* RPOR7 */
#define _RP14R RPOR7bits.RP14R
#define _RP14R0 RPOR7bits.RP14R0
#define _RP14R1 RPOR7bits.RP14R1
#define _RP14R2 RPOR7bits.RP14R2
#define _RP14R3 RPOR7bits.RP14R3
#define _RP14R4 RPOR7bits.RP14R4
#define _RP14R5 RPOR7bits.RP14R5

/* RPOR8 */
#define _RP16R RPOR8bits.RP16R
#define _RP17R RPOR8bits.RP17R
#define _RP16R0 RPOR8bits.RP16R0
#define _RP16R1 RPOR8bits.RP16R1
#define _RP16R2 RPOR8bits.RP16R2
#define _RP16R3 RPOR8bits.RP16R3
#define _RP16R4 RPOR8bits.RP16R4
#define _RP16R5 RPOR8bits.RP16R5
#define _RP17R0 RPOR8bits.RP17R0
#define _RP17R1 RPOR8bits.RP17R1
#define _RP17R2 RPOR8bits.RP17R2
#define _RP17R3 RPOR8bits.RP17R3
#define _RP17R4 RPOR8bits.RP17R4
#define _RP17R5 RPOR8bits.RP17R5

/* RPOR9 */
#define _RP18R RPOR9bits.RP18R
#define _RP19R RPOR9bits.RP19R
#define _RP18R0 RPOR9bits.RP18R0
#define _RP18R1 RPOR9bits.RP18R1
#define _RP18R2 RPOR9bits.RP18R2
#define _RP18R3 RPOR9bits.RP18R3
#define _RP18R4 RPOR9bits.RP18R4
#define _RP18R5 RPOR9bits.RP18R5
#define _RP19R0 RPOR9bits.RP19R0
#define _RP19R1 RPOR9bits.RP19R1
#define _RP19R2 RPOR9bits.RP19R2
#define _RP19R3 RPOR9bits.RP19R3
#define _RP19R4 RPOR9bits.RP19R4
#define _RP19R5 RPOR9bits.RP19R5

/* RPOR10 */
#define _RP20R RPOR10bits.RP20R
#define _RP21R RPOR10bits.RP21R
#define _RP20R0 RPOR10bits.RP20R0
#define _RP20R1 RPOR10bits.RP20R1
#define _RP20R2 RPOR10bits.RP20R2
#define _RP20R3 RPOR10bits.RP20R3
#define _RP20R4 RPOR10bits.RP20R4
#define _RP20R5 RPOR10bits.RP20R5
#define _RP21R0 RPOR10bits.RP21R0
#define _RP21R1 RPOR10bits.RP21R1
#define _RP21R2 RPOR10bits.RP21R2
#define _RP21R3 RPOR10bits.RP21R3
#define _RP21R4 RPOR10bits.RP21R4
#define _RP21R5 RPOR10bits.RP21R5

/* RPOR11 */
#define _RP22R RPOR11bits.RP22R
#define _RP23R RPOR11bits.RP23R
#define _RP22R0 RPOR11bits.RP22R0
#define _RP22R1 RPOR11bits.RP22R1
#define _RP22R2 RPOR11bits.RP22R2
#define _RP22R3 RPOR11bits.RP22R3
#define _RP22R4 RPOR11bits.RP22R4
#define _RP22R5 RPOR11bits.RP22R5
#define _RP23R0 RPOR11bits.RP23R0
#define _RP23R1 RPOR11bits.RP23R1
#define _RP23R2 RPOR11bits.RP23R2
#define _RP23R3 RPOR11bits.RP23R3
#define _RP23R4 RPOR11bits.RP23R4
#define _RP23R5 RPOR11bits.RP23R5

/* RPOR12 */
#define _RP24R RPOR12bits.RP24R
#define _RP25R RPOR12bits.RP25R
#define _RP24R0 RPOR12bits.RP24R0
#define _RP24R1 RPOR12bits.RP24R1
#define _RP24R2 RPOR12bits.RP24R2
#define _RP24R3 RPOR12bits.RP24R3
#define _RP24R4 RPOR12bits.RP24R4
#define _RP24R5 RPOR12bits.RP24R5
#define _RP25R0 RPOR12bits.RP25R0
#define _RP25R1 RPOR12bits.RP25R1
#define _RP25R2 RPOR12bits.RP25R2
#define _RP25R3 RPOR12bits.RP25R3
#define _RP25R4 RPOR12bits.RP25R4
#define _RP25R5 RPOR12bits.RP25R5

/* RPOR13 */
#define _RP26R RPOR13bits.RP26R
#define _RP27R RPOR13bits.RP27R
#define _RP26R0 RPOR13bits.RP26R0
#define _RP26R1 RPOR13bits.RP26R1
#define _RP26R2 RPOR13bits.RP26R2
#define _RP26R3 RPOR13bits.RP26R3
#define _RP26R4 RPOR13bits.RP26R4
#define _RP26R5 RPOR13bits.RP26R5
#define _RP27R0 RPOR13bits.RP27R0
#define _RP27R1 RPOR13bits.RP27R1
#define _RP27R2 RPOR13bits.RP27R2
#define _RP27R3 RPOR13bits.RP27R3
#define _RP27R4 RPOR13bits.RP27R4
#define _RP27R5 RPOR13bits.RP27R5

/* RPOR14 */
#define _RP28R RPOR14bits.RP28R
#define _RP29R RPOR14bits.RP29R
#define _RP28R0 RPOR14bits.RP28R0
#define _RP28R1 RPOR14bits.RP28R1
#define _RP28R2 RPOR14bits.RP28R2
#define _RP28R3 RPOR14bits.RP28R3
#define _RP28R4 RPOR14bits.RP28R4
#define _RP28R5 RPOR14bits.RP28R5
#define _RP29R0 RPOR14bits.RP29R0
#define _RP29R1 RPOR14bits.RP29R1
#define _RP29R2 RPOR14bits.RP29R2
#define _RP29R3 RPOR14bits.RP29R3
#define _RP29R4 RPOR14bits.RP29R4
#define _RP29R5 RPOR14bits.RP29R5

/* RPOR15 */
#define _RP30R RPOR15bits.RP30R
#define _RP30R0 RPOR15bits.RP30R0
#define _RP30R1 RPOR15bits.RP30R1
#define _RP30R2 RPOR15bits.RP30R2
#define _RP30R3 RPOR15bits.RP30R3
#define _RP30R4 RPOR15bits.RP30R4
#define _RP30R5 RPOR15bits.RP30R5

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
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _DPSLP RCONbits.DPSLP
#define _RETEN RCONbits.RETEN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _SOSCEN OSCCONbits.SOSCEN
#define _POSCEN OSCCONbits.POSCEN
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
#define _RCDIV CLKDIVbits.RCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _RCDIV0 CLKDIVbits.RCDIV0
#define _RCDIV1 CLKDIVbits.RCDIV1
#define _RCDIV2 CLKDIVbits.RCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROEN REFOCONbits.ROEN
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROON REFOCONbits.ROON

/* HLVDCON */
#define _HLVDL HLVDCONbits.HLVDL
#define _IRVST HLVDCONbits.IRVST
#define _BGVST HLVDCONbits.BGVST
#define _VDIR HLVDCONbits.VDIR
#define _LSIDL HLVDCONbits.LSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3

/* DSCON */
#define _RELEASE DSCONbits.RELEASE
#define _DSBOR DSCONbits.DSBOR
#define _DSEN DSCONbits.DSEN

/* DSWAKE */
#define _DSMCLR DSWAKEbits.DSMCLR
#define _DSRTCC DSWAKEbits.DSRTCC
#define _DSWDT DSWAKEbits.DSWDT
#define _DSFLT DSWAKEbits.DSFLT
#define _DSINT0 DSWAKEbits.DSINT0

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
#define _PROGOP0 NVMCONbits.PROGOP0
#define _PROGOP1 NVMCONbits.PROGOP1
#define _PROGOP2 NVMCONbits.PROGOP2
#define _PROGOP3 NVMCONbits.PROGOP3
#define _PROGOP NVMCONbits.PROGOP

/* RCON2 */
#define _VBAT RCON2bits.VBAT
#define _VBPOR RCON2bits.VBPOR
#define _VDDPOR RCON2bits.VDDPOR
#define _VDDBOR RCON2bits.VDDBOR

/* PMD1 */
#define _ADC1MD PMD1bits.ADC1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
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
#define _OC5MD PMD2bits.OC5MD
#define _OC6MD PMD2bits.OC6MD
#define _OC7MD PMD2bits.OC7MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD
#define _IC5MD PMD2bits.IC5MD
#define _IC6MD PMD2bits.IC6MD
#define _IC7MD PMD2bits.IC7MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _U3MD PMD3bits.U3MD
#define _CRCMD PMD3bits.CRCMD
#define _PMPMD PMD3bits.PMPMD
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD
#define _TXMMD PMD3bits.TXMMD
#define _CRCPMD PMD3bits.CRCPMD
#define _DSMMD PMD3bits.DSMMD

/* PMD4 */
#define _LVDMD PMD4bits.LVDMD
#define _CTMUMD PMD4bits.CTMUMD
#define _REFOMD PMD4bits.REFOMD
#define _U4MD PMD4bits.U4MD
#define _UPWMMD PMD4bits.UPWMMD

/* PMD6 */
#define _SPI3MD PMD6bits.SPI3MD
#define _LCDMD PMD6bits.LCDMD

/* PMD7 */
#define _DMA0MD PMD7bits.DMA0MD
#define _DMA1MD PMD7bits.DMA1MD


/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array that is     */
/* aligned to a 32 byte address:                              */
/*                                                            */
/* int _BSS(32) buf[16];                                      */
/*                                                            */
/* To declare an initialized array without special            */
/* alignment:                                                 */
/*                                                            */
/* int _DATA(2) table1[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};     */
/*                                                            */
#define _BSS(N)    __attribute__((aligned(N)))
#define _DATA(N)   __attribute__((aligned(N)))

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

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CNPD1_CN2PDE_POSITION                   0x00000002
#define _CNPD1_CN2PDE_MASK                       0x00000004
#define _CNPD1_CN2PDE_LENGTH                     0x00000001

#define _CNPD1_CN3PDE_POSITION                   0x00000003
#define _CNPD1_CN3PDE_MASK                       0x00000008
#define _CNPD1_CN3PDE_LENGTH                     0x00000001

#define _CNPD1_CN4PDE_POSITION                   0x00000004
#define _CNPD1_CN4PDE_MASK                       0x00000010
#define _CNPD1_CN4PDE_LENGTH                     0x00000001

#define _CNPD1_CN5PDE_POSITION                   0x00000005
#define _CNPD1_CN5PDE_MASK                       0x00000020
#define _CNPD1_CN5PDE_LENGTH                     0x00000001

#define _CNPD1_CN6PDE_POSITION                   0x00000006
#define _CNPD1_CN6PDE_MASK                       0x00000040
#define _CNPD1_CN6PDE_LENGTH                     0x00000001

#define _CNPD1_CN7PDE_POSITION                   0x00000007
#define _CNPD1_CN7PDE_MASK                       0x00000080
#define _CNPD1_CN7PDE_LENGTH                     0x00000001

#define _CNPD1_CN8PDE_POSITION                   0x00000008
#define _CNPD1_CN8PDE_MASK                       0x00000100
#define _CNPD1_CN8PDE_LENGTH                     0x00000001

#define _CNPD1_CN9PDE_POSITION                   0x00000009
#define _CNPD1_CN9PDE_MASK                       0x00000200
#define _CNPD1_CN9PDE_LENGTH                     0x00000001

#define _CNPD1_CN10PDE_POSITION                  0x0000000A
#define _CNPD1_CN10PDE_MASK                      0x00000400
#define _CNPD1_CN10PDE_LENGTH                    0x00000001

#define _CNPD1_CN11PDE_POSITION                  0x0000000B
#define _CNPD1_CN11PDE_MASK                      0x00000800
#define _CNPD1_CN11PDE_LENGTH                    0x00000001

#define _CNPD1_CN12PDE_POSITION                  0x0000000C
#define _CNPD1_CN12PDE_MASK                      0x00001000
#define _CNPD1_CN12PDE_LENGTH                    0x00000001

#define _CNPD1_CN13PDE_POSITION                  0x0000000D
#define _CNPD1_CN13PDE_MASK                      0x00002000
#define _CNPD1_CN13PDE_LENGTH                    0x00000001

#define _CNPD1_CN14PDE_POSITION                  0x0000000E
#define _CNPD1_CN14PDE_MASK                      0x00004000
#define _CNPD1_CN14PDE_LENGTH                    0x00000001

#define _CNPD1_CN15PDE_POSITION                  0x0000000F
#define _CNPD1_CN15PDE_MASK                      0x00008000
#define _CNPD1_CN15PDE_LENGTH                    0x00000001

#define _CNPD2_CN16PDE_POSITION                  0x00000000
#define _CNPD2_CN16PDE_MASK                      0x00000001
#define _CNPD2_CN16PDE_LENGTH                    0x00000001

#define _CNPD2_CN17PDE_POSITION                  0x00000001
#define _CNPD2_CN17PDE_MASK                      0x00000002
#define _CNPD2_CN17PDE_LENGTH                    0x00000001

#define _CNPD2_CN18PDE_POSITION                  0x00000002
#define _CNPD2_CN18PDE_MASK                      0x00000004
#define _CNPD2_CN18PDE_LENGTH                    0x00000001

#define _CNPD2_CN22PDE_POSITION                  0x00000006
#define _CNPD2_CN22PDE_MASK                      0x00000040
#define _CNPD2_CN22PDE_LENGTH                    0x00000001

#define _CNPD2_CN23PDE_POSITION                  0x00000007
#define _CNPD2_CN23PDE_MASK                      0x00000080
#define _CNPD2_CN23PDE_LENGTH                    0x00000001

#define _CNPD2_CN24PDE_POSITION                  0x00000008
#define _CNPD2_CN24PDE_MASK                      0x00000100
#define _CNPD2_CN24PDE_LENGTH                    0x00000001

#define _CNPD2_CN25PDE_POSITION                  0x00000009
#define _CNPD2_CN25PDE_MASK                      0x00000200
#define _CNPD2_CN25PDE_LENGTH                    0x00000001

#define _CNPD2_CN26PDE_POSITION                  0x0000000A
#define _CNPD2_CN26PDE_MASK                      0x00000400
#define _CNPD2_CN26PDE_LENGTH                    0x00000001

#define _CNPD2_CN27PDE_POSITION                  0x0000000B
#define _CNPD2_CN27PDE_MASK                      0x00000800
#define _CNPD2_CN27PDE_LENGTH                    0x00000001

#define _CNPD2_CN28PDE_POSITION                  0x0000000C
#define _CNPD2_CN28PDE_MASK                      0x00001000
#define _CNPD2_CN28PDE_LENGTH                    0x00000001

#define _CNPD2_CN29PDE_POSITION                  0x0000000D
#define _CNPD2_CN29PDE_MASK                      0x00002000
#define _CNPD2_CN29PDE_LENGTH                    0x00000001

#define _CNPD2_CN30PDE_POSITION                  0x0000000E
#define _CNPD2_CN30PDE_MASK                      0x00004000
#define _CNPD2_CN30PDE_LENGTH                    0x00000001

#define _CNPD2_CN31PDE_POSITION                  0x0000000F
#define _CNPD2_CN31PDE_MASK                      0x00008000
#define _CNPD2_CN31PDE_LENGTH                    0x00000001

#define _CNPD3_CN32PDE_POSITION                  0x00000000
#define _CNPD3_CN32PDE_MASK                      0x00000001
#define _CNPD3_CN32PDE_LENGTH                    0x00000001

#define _CNPD4_CN49PDE_POSITION                  0x00000001
#define _CNPD4_CN49PDE_MASK                      0x00000002
#define _CNPD4_CN49PDE_LENGTH                    0x00000001

#define _CNPD4_CN50PDE_POSITION                  0x00000002
#define _CNPD4_CN50PDE_MASK                      0x00000004
#define _CNPD4_CN50PDE_LENGTH                    0x00000001

#define _CNPD4_CN51PDE_POSITION                  0x00000003
#define _CNPD4_CN51PDE_MASK                      0x00000008
#define _CNPD4_CN51PDE_LENGTH                    0x00000001

#define _CNPD4_CN52PDE_POSITION                  0x00000004
#define _CNPD4_CN52PDE_MASK                      0x00000010
#define _CNPD4_CN52PDE_LENGTH                    0x00000001

#define _CNPD4_CN53PDE_POSITION                  0x00000005
#define _CNPD4_CN53PDE_MASK                      0x00000020
#define _CNPD4_CN53PDE_LENGTH                    0x00000001

#define _CNPD4_CN54PDE_POSITION                  0x00000006
#define _CNPD4_CN54PDE_MASK                      0x00000040
#define _CNPD4_CN54PDE_LENGTH                    0x00000001

#define _CNPD4_CN55PDE_POSITION                  0x00000007
#define _CNPD4_CN55PDE_MASK                      0x00000080
#define _CNPD4_CN55PDE_LENGTH                    0x00000001

#define _CNPD4_CN56PDE_POSITION                  0x00000008
#define _CNPD4_CN56PDE_MASK                      0x00000100
#define _CNPD4_CN56PDE_LENGTH                    0x00000001

#define _CNPD4_CN57PDE_POSITION                  0x00000009
#define _CNPD4_CN57PDE_MASK                      0x00000200
#define _CNPD4_CN57PDE_LENGTH                    0x00000001

#define _CNPD4_CN58PDE_POSITION                  0x0000000A
#define _CNPD4_CN58PDE_MASK                      0x00000400
#define _CNPD4_CN58PDE_LENGTH                    0x00000001

#define _CNPD4_CN59PDE_POSITION                  0x0000000B
#define _CNPD4_CN59PDE_MASK                      0x00000800
#define _CNPD4_CN59PDE_LENGTH                    0x00000001

#define _CNPD4_CN60PDE_POSITION                  0x0000000C
#define _CNPD4_CN60PDE_MASK                      0x00001000
#define _CNPD4_CN60PDE_LENGTH                    0x00000001

#define _CNPD4_CN61PDE_POSITION                  0x0000000D
#define _CNPD4_CN61PDE_MASK                      0x00002000
#define _CNPD4_CN61PDE_LENGTH                    0x00000001

#define _CNPD4_CN62PDE_POSITION                  0x0000000E
#define _CNPD4_CN62PDE_MASK                      0x00004000
#define _CNPD4_CN62PDE_LENGTH                    0x00000001

#define _CNPD4_CN63PDE_POSITION                  0x0000000F
#define _CNPD4_CN63PDE_MASK                      0x00008000
#define _CNPD4_CN63PDE_LENGTH                    0x00000001

#define _CNPD5_CN64PDE_POSITION                  0x00000000
#define _CNPD5_CN64PDE_MASK                      0x00000001
#define _CNPD5_CN64PDE_LENGTH                    0x00000001

#define _CNPD5_CN65PDE_POSITION                  0x00000001
#define _CNPD5_CN65PDE_MASK                      0x00000002
#define _CNPD5_CN65PDE_LENGTH                    0x00000001

#define _CNPD5_CN68PDE_POSITION                  0x00000004
#define _CNPD5_CN68PDE_MASK                      0x00000010
#define _CNPD5_CN68PDE_LENGTH                    0x00000001

#define _CNPD5_CN69PDE_POSITION                  0x00000005
#define _CNPD5_CN69PDE_MASK                      0x00000020
#define _CNPD5_CN69PDE_LENGTH                    0x00000001

#define _CNPD5_CN70PDE_POSITION                  0x00000006
#define _CNPD5_CN70PDE_MASK                      0x00000040
#define _CNPD5_CN70PDE_LENGTH                    0x00000001

#define _CNPD5_CN71PDE_POSITION                  0x00000007
#define _CNPD5_CN71PDE_MASK                      0x00000080
#define _CNPD5_CN71PDE_LENGTH                    0x00000001

#define _CNPD5_CN72PDE_POSITION                  0x00000008
#define _CNPD5_CN72PDE_MASK                      0x00000100
#define _CNPD5_CN72PDE_LENGTH                    0x00000001

#define _CNPD5_CN73PDE_POSITION                  0x00000009
#define _CNPD5_CN73PDE_MASK                      0x00000200
#define _CNPD5_CN73PDE_LENGTH                    0x00000001

#define _CNPD6_CN84PDE_POSITION                  0x00000004
#define _CNPD6_CN84PDE_MASK                      0x00000010
#define _CNPD6_CN84PDE_LENGTH                    0x00000001

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

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

#define _CNEN2_CN23IE_POSITION                   0x00000007
#define _CNEN2_CN23IE_MASK                       0x00000080
#define _CNEN2_CN23IE_LENGTH                     0x00000001

#define _CNEN2_CN24IE_POSITION                   0x00000008
#define _CNEN2_CN24IE_MASK                       0x00000100
#define _CNEN2_CN24IE_LENGTH                     0x00000001

#define _CNEN2_CN25IE_POSITION                   0x00000009
#define _CNEN2_CN25IE_MASK                       0x00000200
#define _CNEN2_CN25IE_LENGTH                     0x00000001

#define _CNEN2_CN26IE_POSITION                   0x0000000A
#define _CNEN2_CN26IE_MASK                       0x00000400
#define _CNEN2_CN26IE_LENGTH                     0x00000001

#define _CNEN2_CN27IE_POSITION                   0x0000000B
#define _CNEN2_CN27IE_MASK                       0x00000800
#define _CNEN2_CN27IE_LENGTH                     0x00000001

#define _CNEN2_CN28IE_POSITION                   0x0000000C
#define _CNEN2_CN28IE_MASK                       0x00001000
#define _CNEN2_CN28IE_LENGTH                     0x00000001

#define _CNEN2_CN29IE_POSITION                   0x0000000D
#define _CNEN2_CN29IE_MASK                       0x00002000
#define _CNEN2_CN29IE_LENGTH                     0x00000001

#define _CNEN2_CN30IE_POSITION                   0x0000000E
#define _CNEN2_CN30IE_MASK                       0x00004000
#define _CNEN2_CN30IE_LENGTH                     0x00000001

#define _CNEN2_CN31IE_POSITION                   0x0000000F
#define _CNEN2_CN31IE_MASK                       0x00008000
#define _CNEN2_CN31IE_LENGTH                     0x00000001

#define _CNEN3_CN32IE_POSITION                   0x00000000
#define _CNEN3_CN32IE_MASK                       0x00000001
#define _CNEN3_CN32IE_LENGTH                     0x00000001

#define _CNEN4_CN49IE_POSITION                   0x00000001
#define _CNEN4_CN49IE_MASK                       0x00000002
#define _CNEN4_CN49IE_LENGTH                     0x00000001

#define _CNEN4_CN50IE_POSITION                   0x00000002
#define _CNEN4_CN50IE_MASK                       0x00000004
#define _CNEN4_CN50IE_LENGTH                     0x00000001

#define _CNEN4_CN51IE_POSITION                   0x00000003
#define _CNEN4_CN51IE_MASK                       0x00000008
#define _CNEN4_CN51IE_LENGTH                     0x00000001

#define _CNEN4_CN52IE_POSITION                   0x00000004
#define _CNEN4_CN52IE_MASK                       0x00000010
#define _CNEN4_CN52IE_LENGTH                     0x00000001

#define _CNEN4_CN53IE_POSITION                   0x00000005
#define _CNEN4_CN53IE_MASK                       0x00000020
#define _CNEN4_CN53IE_LENGTH                     0x00000001

#define _CNEN4_CN54IE_POSITION                   0x00000006
#define _CNEN4_CN54IE_MASK                       0x00000040
#define _CNEN4_CN54IE_LENGTH                     0x00000001

#define _CNEN4_CN55IE_POSITION                   0x00000007
#define _CNEN4_CN55IE_MASK                       0x00000080
#define _CNEN4_CN55IE_LENGTH                     0x00000001

#define _CNEN4_CN56IE_POSITION                   0x00000008
#define _CNEN4_CN56IE_MASK                       0x00000100
#define _CNEN4_CN56IE_LENGTH                     0x00000001

#define _CNEN4_CN57IE_POSITION                   0x00000009
#define _CNEN4_CN57IE_MASK                       0x00000200
#define _CNEN4_CN57IE_LENGTH                     0x00000001

#define _CNEN4_CN58IE_POSITION                   0x0000000A
#define _CNEN4_CN58IE_MASK                       0x00000400
#define _CNEN4_CN58IE_LENGTH                     0x00000001

#define _CNEN4_CN59IE_POSITION                   0x0000000B
#define _CNEN4_CN59IE_MASK                       0x00000800
#define _CNEN4_CN59IE_LENGTH                     0x00000001

#define _CNEN4_CN60IE_POSITION                   0x0000000C
#define _CNEN4_CN60IE_MASK                       0x00001000
#define _CNEN4_CN60IE_LENGTH                     0x00000001

#define _CNEN4_CN61IE_POSITION                   0x0000000D
#define _CNEN4_CN61IE_MASK                       0x00002000
#define _CNEN4_CN61IE_LENGTH                     0x00000001

#define _CNEN4_CN62IE_POSITION                   0x0000000E
#define _CNEN4_CN62IE_MASK                       0x00004000
#define _CNEN4_CN62IE_LENGTH                     0x00000001

#define _CNEN4_CN63IE_POSITION                   0x0000000F
#define _CNEN4_CN63IE_MASK                       0x00008000
#define _CNEN4_CN63IE_LENGTH                     0x00000001

#define _CNEN5_CN64IE_POSITION                   0x00000000
#define _CNEN5_CN64IE_MASK                       0x00000001
#define _CNEN5_CN64IE_LENGTH                     0x00000001

#define _CNEN5_CN65IE_POSITION                   0x00000001
#define _CNEN5_CN65IE_MASK                       0x00000002
#define _CNEN5_CN65IE_LENGTH                     0x00000001

#define _CNEN5_CN68IE_POSITION                   0x00000004
#define _CNEN5_CN68IE_MASK                       0x00000010
#define _CNEN5_CN68IE_LENGTH                     0x00000001

#define _CNEN5_CN69IE_POSITION                   0x00000005
#define _CNEN5_CN69IE_MASK                       0x00000020
#define _CNEN5_CN69IE_LENGTH                     0x00000001

#define _CNEN5_CN70IE_POSITION                   0x00000006
#define _CNEN5_CN70IE_MASK                       0x00000040
#define _CNEN5_CN70IE_LENGTH                     0x00000001

#define _CNEN5_CN71IE_POSITION                   0x00000007
#define _CNEN5_CN71IE_MASK                       0x00000080
#define _CNEN5_CN71IE_LENGTH                     0x00000001

#define _CNEN5_CN72IE_POSITION                   0x00000008
#define _CNEN5_CN72IE_MASK                       0x00000100
#define _CNEN5_CN72IE_LENGTH                     0x00000001

#define _CNEN5_CN73IE_POSITION                   0x00000009
#define _CNEN5_CN73IE_MASK                       0x00000200
#define _CNEN5_CN73IE_LENGTH                     0x00000001

#define _CNEN6_CN84IE_POSITION                   0x00000004
#define _CNEN6_CN84IE_MASK                       0x00000010
#define _CNEN6_CN84IE_LENGTH                     0x00000001

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

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

#define _CNPU2_CN23PUE_POSITION                  0x00000007
#define _CNPU2_CN23PUE_MASK                      0x00000080
#define _CNPU2_CN23PUE_LENGTH                    0x00000001

#define _CNPU2_CN24PUE_POSITION                  0x00000008
#define _CNPU2_CN24PUE_MASK                      0x00000100
#define _CNPU2_CN24PUE_LENGTH                    0x00000001

#define _CNPU2_CN25PUE_POSITION                  0x00000009
#define _CNPU2_CN25PUE_MASK                      0x00000200
#define _CNPU2_CN25PUE_LENGTH                    0x00000001

#define _CNPU2_CN26PUE_POSITION                  0x0000000A
#define _CNPU2_CN26PUE_MASK                      0x00000400
#define _CNPU2_CN26PUE_LENGTH                    0x00000001

#define _CNPU2_CN27PUE_POSITION                  0x0000000B
#define _CNPU2_CN27PUE_MASK                      0x00000800
#define _CNPU2_CN27PUE_LENGTH                    0x00000001

#define _CNPU2_CN28PUE_POSITION                  0x0000000C
#define _CNPU2_CN28PUE_MASK                      0x00001000
#define _CNPU2_CN28PUE_LENGTH                    0x00000001

#define _CNPU2_CN29PUE_POSITION                  0x0000000D
#define _CNPU2_CN29PUE_MASK                      0x00002000
#define _CNPU2_CN29PUE_LENGTH                    0x00000001

#define _CNPU2_CN30PUE_POSITION                  0x0000000E
#define _CNPU2_CN30PUE_MASK                      0x00004000
#define _CNPU2_CN30PUE_LENGTH                    0x00000001

#define _CNPU2_CN31PUE_POSITION                  0x0000000F
#define _CNPU2_CN31PUE_MASK                      0x00008000
#define _CNPU2_CN31PUE_LENGTH                    0x00000001

#define _CNPU3_CN32PUE_POSITION                  0x00000000
#define _CNPU3_CN32PUE_MASK                      0x00000001
#define _CNPU3_CN32PUE_LENGTH                    0x00000001

#define _CNPU4_CN49PUE_POSITION                  0x00000001
#define _CNPU4_CN49PUE_MASK                      0x00000002
#define _CNPU4_CN49PUE_LENGTH                    0x00000001

#define _CNPU4_CN50PUE_POSITION                  0x00000002
#define _CNPU4_CN50PUE_MASK                      0x00000004
#define _CNPU4_CN50PUE_LENGTH                    0x00000001

#define _CNPU4_CN51PUE_POSITION                  0x00000003
#define _CNPU4_CN51PUE_MASK                      0x00000008
#define _CNPU4_CN51PUE_LENGTH                    0x00000001

#define _CNPU4_CN52PUE_POSITION                  0x00000004
#define _CNPU4_CN52PUE_MASK                      0x00000010
#define _CNPU4_CN52PUE_LENGTH                    0x00000001

#define _CNPU4_CN53PUE_POSITION                  0x00000005
#define _CNPU4_CN53PUE_MASK                      0x00000020
#define _CNPU4_CN53PUE_LENGTH                    0x00000001

#define _CNPU4_CN54PUE_POSITION                  0x00000006
#define _CNPU4_CN54PUE_MASK                      0x00000040
#define _CNPU4_CN54PUE_LENGTH                    0x00000001

#define _CNPU4_CN55PUE_POSITION                  0x00000007
#define _CNPU4_CN55PUE_MASK                      0x00000080
#define _CNPU4_CN55PUE_LENGTH                    0x00000001

#define _CNPU4_CN56PUE_POSITION                  0x00000008
#define _CNPU4_CN56PUE_MASK                      0x00000100
#define _CNPU4_CN56PUE_LENGTH                    0x00000001

#define _CNPU4_CN57PUE_POSITION                  0x00000009
#define _CNPU4_CN57PUE_MASK                      0x00000200
#define _CNPU4_CN57PUE_LENGTH                    0x00000001

#define _CNPU4_CN58PUE_POSITION                  0x0000000A
#define _CNPU4_CN58PUE_MASK                      0x00000400
#define _CNPU4_CN58PUE_LENGTH                    0x00000001

#define _CNPU4_CN59PUE_POSITION                  0x0000000B
#define _CNPU4_CN59PUE_MASK                      0x00000800
#define _CNPU4_CN59PUE_LENGTH                    0x00000001

#define _CNPU4_CN60PUE_POSITION                  0x0000000C
#define _CNPU4_CN60PUE_MASK                      0x00001000
#define _CNPU4_CN60PUE_LENGTH                    0x00000001

#define _CNPU4_CN61PUE_POSITION                  0x0000000D
#define _CNPU4_CN61PUE_MASK                      0x00002000
#define _CNPU4_CN61PUE_LENGTH                    0x00000001

#define _CNPU4_CN62PUE_POSITION                  0x0000000E
#define _CNPU4_CN62PUE_MASK                      0x00004000
#define _CNPU4_CN62PUE_LENGTH                    0x00000001

#define _CNPU4_CN63PUE_POSITION                  0x0000000F
#define _CNPU4_CN63PUE_MASK                      0x00008000
#define _CNPU4_CN63PUE_LENGTH                    0x00000001

#define _CNPU5_CN64PUE_POSITION                  0x00000000
#define _CNPU5_CN64PUE_MASK                      0x00000001
#define _CNPU5_CN64PUE_LENGTH                    0x00000001

#define _CNPU5_CN65PUE_POSITION                  0x00000001
#define _CNPU5_CN65PUE_MASK                      0x00000002
#define _CNPU5_CN65PUE_LENGTH                    0x00000001

#define _CNPU5_CN68PUE_POSITION                  0x00000004
#define _CNPU5_CN68PUE_MASK                      0x00000010
#define _CNPU5_CN68PUE_LENGTH                    0x00000001

#define _CNPU5_CN69PUE_POSITION                  0x00000005
#define _CNPU5_CN69PUE_MASK                      0x00000020
#define _CNPU5_CN69PUE_LENGTH                    0x00000001

#define _CNPU5_CN70PUE_POSITION                  0x00000006
#define _CNPU5_CN70PUE_MASK                      0x00000040
#define _CNPU5_CN70PUE_LENGTH                    0x00000001

#define _CNPU5_CN71PUE_POSITION                  0x00000007
#define _CNPU5_CN71PUE_MASK                      0x00000080
#define _CNPU5_CN71PUE_LENGTH                    0x00000001

#define _CNPU5_CN72PUE_POSITION                  0x00000008
#define _CNPU5_CN72PUE_MASK                      0x00000100
#define _CNPU5_CN72PUE_LENGTH                    0x00000001

#define _CNPU5_CN73PUE_POSITION                  0x00000009
#define _CNPU5_CN73PUE_MASK                      0x00000200
#define _CNPU5_CN73PUE_LENGTH                    0x00000001

#define _CNPU6_CN84PUE_POSITION                  0x00000004
#define _CNPU6_CN84PUE_MASK                      0x00000010
#define _CNPU6_CN84PUE_LENGTH                    0x00000001

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

#define _IFS0_DMA0IF_POSITION                    0x00000004
#define _IFS0_DMA0IF_MASK                        0x00000010
#define _IFS0_DMA0IF_LENGTH                      0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000005
#define _IFS0_IC2IF_MASK                         0x00000020
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x00000006
#define _IFS0_OC2IF_MASK                         0x00000040
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_SPF1IF_POSITION                    0x00000009
#define _IFS0_SPF1IF_MASK                        0x00000200
#define _IFS0_SPF1IF_LENGTH                      0x00000001

#define _IFS0_SPI1IF_POSITION                    0x0000000A
#define _IFS0_SPI1IF_MASK                        0x00000400
#define _IFS0_SPI1IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_DMA1IF_POSITION                    0x0000000E
#define _IFS0_DMA1IF_MASK                        0x00004000
#define _IFS0_DMA1IF_LENGTH                      0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_CMIF_POSITION                      0x00000002
#define _IFS1_CMIF_MASK                          0x00000004
#define _IFS1_CMIF_LENGTH                        0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_IC7IF_POSITION                     0x00000006
#define _IFS1_IC7IF_MASK                         0x00000040
#define _IFS1_IC7IF_LENGTH                       0x00000001

#define _IFS1_DMA2IF_POSITION                    0x00000008
#define _IFS1_DMA2IF_MASK                        0x00000100
#define _IFS1_DMA2IF_LENGTH                      0x00000001

#define _IFS1_OC3IF_POSITION                     0x00000009
#define _IFS1_OC3IF_MASK                         0x00000200
#define _IFS1_OC3IF_LENGTH                       0x00000001

#define _IFS1_OC4IF_POSITION                     0x0000000A
#define _IFS1_OC4IF_MASK                         0x00000400
#define _IFS1_OC4IF_LENGTH                       0x00000001

#define _IFS1_T4IF_POSITION                      0x0000000B
#define _IFS1_T4IF_MASK                          0x00000800
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_T5IF_POSITION                      0x0000000C
#define _IFS1_T5IF_MASK                          0x00001000
#define _IFS1_T5IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_SPF2IF_POSITION                    0x00000000
#define _IFS2_SPF2IF_MASK                        0x00000001
#define _IFS2_SPF2IF_LENGTH                      0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_DMA3IF_POSITION                    0x00000004
#define _IFS2_DMA3IF_MASK                        0x00000010
#define _IFS2_DMA3IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS2_IC5IF_POSITION                     0x00000007
#define _IFS2_IC5IF_MASK                         0x00000080
#define _IFS2_IC5IF_LENGTH                       0x00000001

#define _IFS2_IC6IF_POSITION                     0x00000008
#define _IFS2_IC6IF_MASK                         0x00000100
#define _IFS2_IC6IF_LENGTH                       0x00000001

#define _IFS2_OC5IF_POSITION                     0x00000009
#define _IFS2_OC5IF_MASK                         0x00000200
#define _IFS2_OC5IF_LENGTH                       0x00000001

#define _IFS2_OC6IF_POSITION                     0x0000000A
#define _IFS2_OC6IF_MASK                         0x00000400
#define _IFS2_OC6IF_LENGTH                       0x00000001

#define _IFS2_OC7IF_POSITION                     0x0000000B
#define _IFS2_OC7IF_MASK                         0x00000800
#define _IFS2_OC7IF_LENGTH                       0x00000001

#define _IFS2_PMPIF_POSITION                     0x0000000D
#define _IFS2_PMPIF_MASK                         0x00002000
#define _IFS2_PMPIF_LENGTH                       0x00000001

#define _IFS2_DMA4IF_POSITION                    0x0000000E
#define _IFS2_DMA4IF_MASK                        0x00004000
#define _IFS2_DMA4IF_LENGTH                      0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_INT3IF_POSITION                    0x00000005
#define _IFS3_INT3IF_MASK                        0x00000020
#define _IFS3_INT3IF_LENGTH                      0x00000001

#define _IFS3_INT4IF_POSITION                    0x00000006
#define _IFS3_INT4IF_MASK                        0x00000040
#define _IFS3_INT4IF_LENGTH                      0x00000001

#define _IFS3_DMA5IF_POSITION                    0x0000000D
#define _IFS3_DMA5IF_MASK                        0x00002000
#define _IFS3_DMA5IF_LENGTH                      0x00000001

#define _IFS3_RTCIF_POSITION                     0x0000000E
#define _IFS3_RTCIF_MASK                         0x00004000
#define _IFS3_RTCIF_LENGTH                       0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_U2ERIF_POSITION                    0x00000002
#define _IFS4_U2ERIF_MASK                        0x00000004
#define _IFS4_U2ERIF_LENGTH                      0x00000001

#define _IFS4_CRCIF_POSITION                     0x00000003
#define _IFS4_CRCIF_MASK                         0x00000008
#define _IFS4_CRCIF_LENGTH                       0x00000001

#define _IFS4_LVDIF_POSITION                     0x00000008
#define _IFS4_LVDIF_MASK                         0x00000100
#define _IFS4_LVDIF_LENGTH                       0x00000001

#define _IFS4_CTMUIF_POSITION                    0x0000000D
#define _IFS4_CTMUIF_MASK                        0x00002000
#define _IFS4_CTMUIF_LENGTH                      0x00000001

#define _IFS5_U3ERIF_POSITION                    0x00000001
#define _IFS5_U3ERIF_MASK                        0x00000002
#define _IFS5_U3ERIF_LENGTH                      0x00000001

#define _IFS5_U3RXIF_POSITION                    0x00000002
#define _IFS5_U3RXIF_MASK                        0x00000004
#define _IFS5_U3RXIF_LENGTH                      0x00000001

#define _IFS5_U3TXIF_POSITION                    0x00000003
#define _IFS5_U3TXIF_MASK                        0x00000008
#define _IFS5_U3TXIF_LENGTH                      0x00000001

#define _IFS5_U4ERIF_POSITION                    0x00000007
#define _IFS5_U4ERIF_MASK                        0x00000080
#define _IFS5_U4ERIF_LENGTH                      0x00000001

#define _IFS5_U4RXIF_POSITION                    0x00000008
#define _IFS5_U4RXIF_MASK                        0x00000100
#define _IFS5_U4RXIF_LENGTH                      0x00000001

#define _IFS5_U4TXIF_POSITION                    0x00000009
#define _IFS5_U4TXIF_MASK                        0x00000200
#define _IFS5_U4TXIF_LENGTH                      0x00000001

#define _IFS6_LCDIF_POSITION                     0x00000004
#define _IFS6_LCDIF_MASK                         0x00000010
#define _IFS6_LCDIF_LENGTH                       0x00000001

#define _IFS7_JTAGIF_POSITION                    0x00000005
#define _IFS7_JTAGIF_MASK                        0x00000020
#define _IFS7_JTAGIF_LENGTH                      0x00000001

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

#define _IEC0_DMA0IE_POSITION                    0x00000004
#define _IEC0_DMA0IE_MASK                        0x00000010
#define _IEC0_DMA0IE_LENGTH                      0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000005
#define _IEC0_IC2IE_MASK                         0x00000020
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x00000006
#define _IEC0_OC2IE_MASK                         0x00000040
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_SPF1IE_POSITION                    0x00000009
#define _IEC0_SPF1IE_MASK                        0x00000200
#define _IEC0_SPF1IE_LENGTH                      0x00000001

#define _IEC0_SPI1IE_POSITION                    0x0000000A
#define _IEC0_SPI1IE_MASK                        0x00000400
#define _IEC0_SPI1IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_DMA1IE_POSITION                    0x0000000E
#define _IEC0_DMA1IE_MASK                        0x00004000
#define _IEC0_DMA1IE_LENGTH                      0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_CMIE_POSITION                      0x00000002
#define _IEC1_CMIE_MASK                          0x00000004
#define _IEC1_CMIE_LENGTH                        0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_IC7IE_POSITION                     0x00000006
#define _IEC1_IC7IE_MASK                         0x00000040
#define _IEC1_IC7IE_LENGTH                       0x00000001

#define _IEC1_DMA2IE_POSITION                    0x00000008
#define _IEC1_DMA2IE_MASK                        0x00000100
#define _IEC1_DMA2IE_LENGTH                      0x00000001

#define _IEC1_OC3IE_POSITION                     0x00000009
#define _IEC1_OC3IE_MASK                         0x00000200
#define _IEC1_OC3IE_LENGTH                       0x00000001

#define _IEC1_OC4IE_POSITION                     0x0000000A
#define _IEC1_OC4IE_MASK                         0x00000400
#define _IEC1_OC4IE_LENGTH                       0x00000001

#define _IEC1_T4IE_POSITION                      0x0000000B
#define _IEC1_T4IE_MASK                          0x00000800
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_T5IE_POSITION                      0x0000000C
#define _IEC1_T5IE_MASK                          0x00001000
#define _IEC1_T5IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_SPF2IE_POSITION                    0x00000000
#define _IEC2_SPF2IE_MASK                        0x00000001
#define _IEC2_SPF2IE_LENGTH                      0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_DMA3IE_POSITION                    0x00000004
#define _IEC2_DMA3IE_MASK                        0x00000010
#define _IEC2_DMA3IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC2_IC5IE_POSITION                     0x00000007
#define _IEC2_IC5IE_MASK                         0x00000080
#define _IEC2_IC5IE_LENGTH                       0x00000001

#define _IEC2_IC6IE_POSITION                     0x00000008
#define _IEC2_IC6IE_MASK                         0x00000100
#define _IEC2_IC6IE_LENGTH                       0x00000001

#define _IEC2_OC5IE_POSITION                     0x00000009
#define _IEC2_OC5IE_MASK                         0x00000200
#define _IEC2_OC5IE_LENGTH                       0x00000001

#define _IEC2_OC6IE_POSITION                     0x0000000A
#define _IEC2_OC6IE_MASK                         0x00000400
#define _IEC2_OC6IE_LENGTH                       0x00000001

#define _IEC2_OC7IE_POSITION                     0x0000000B
#define _IEC2_OC7IE_MASK                         0x00000800
#define _IEC2_OC7IE_LENGTH                       0x00000001

#define _IEC2_PMPIE_POSITION                     0x0000000D
#define _IEC2_PMPIE_MASK                         0x00002000
#define _IEC2_PMPIE_LENGTH                       0x00000001

#define _IEC2_DMA4IE_POSITION                    0x0000000E
#define _IEC2_DMA4IE_MASK                        0x00004000
#define _IEC2_DMA4IE_LENGTH                      0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_INT3IE_POSITION                    0x00000005
#define _IEC3_INT3IE_MASK                        0x00000020
#define _IEC3_INT3IE_LENGTH                      0x00000001

#define _IEC3_INT4IE_POSITION                    0x00000006
#define _IEC3_INT4IE_MASK                        0x00000040
#define _IEC3_INT4IE_LENGTH                      0x00000001

#define _IEC3_DMA5IE_POSITION                    0x0000000D
#define _IEC3_DMA5IE_MASK                        0x00002000
#define _IEC3_DMA5IE_LENGTH                      0x00000001

#define _IEC3_RTCIE_POSITION                     0x0000000E
#define _IEC3_RTCIE_MASK                         0x00004000
#define _IEC3_RTCIE_LENGTH                       0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_U2ERIE_POSITION                    0x00000002
#define _IEC4_U2ERIE_MASK                        0x00000004
#define _IEC4_U2ERIE_LENGTH                      0x00000001

#define _IEC4_CRCIE_POSITION                     0x00000003
#define _IEC4_CRCIE_MASK                         0x00000008
#define _IEC4_CRCIE_LENGTH                       0x00000001

#define _IEC4_LVDIE_POSITION                     0x00000008
#define _IEC4_LVDIE_MASK                         0x00000100
#define _IEC4_LVDIE_LENGTH                       0x00000001

#define _IEC4_CTMUIE_POSITION                    0x0000000D
#define _IEC4_CTMUIE_MASK                        0x00002000
#define _IEC4_CTMUIE_LENGTH                      0x00000001

#define _IEC5_U3ERIE_POSITION                    0x00000001
#define _IEC5_U3ERIE_MASK                        0x00000002
#define _IEC5_U3ERIE_LENGTH                      0x00000001

#define _IEC5_U3RXIE_POSITION                    0x00000002
#define _IEC5_U3RXIE_MASK                        0x00000004
#define _IEC5_U3RXIE_LENGTH                      0x00000001

#define _IEC5_U3TXIE_POSITION                    0x00000003
#define _IEC5_U3TXIE_MASK                        0x00000008
#define _IEC5_U3TXIE_LENGTH                      0x00000001

#define _IEC5_U4ERIE_POSITION                    0x00000007
#define _IEC5_U4ERIE_MASK                        0x00000080
#define _IEC5_U4ERIE_LENGTH                      0x00000001

#define _IEC5_U4RXIE_POSITION                    0x00000008
#define _IEC5_U4RXIE_MASK                        0x00000100
#define _IEC5_U4RXIE_LENGTH                      0x00000001

#define _IEC5_U4TXIE_POSITION                    0x00000009
#define _IEC5_U4TXIE_MASK                        0x00000200
#define _IEC5_U4TXIE_LENGTH                      0x00000001

#define _IEC6_LCDIE_POSITION                     0x00000004
#define _IEC6_LCDIE_MASK                         0x00000010
#define _IEC6_LCDIE_LENGTH                       0x00000001

#define _IEC7_JTAGIE_POSITION                    0x00000005
#define _IEC7_JTAGIE_MASK                        0x00000020
#define _IEC7_JTAGIE_LENGTH                      0x00000001

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

#define _IPC1_DMA0IP_POSITION                    0x00000000
#define _IPC1_DMA0IP_MASK                        0x00000007
#define _IPC1_DMA0IP_LENGTH                      0x00000003

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_DMA0IP0_POSITION                   0x00000000
#define _IPC1_DMA0IP0_MASK                       0x00000001
#define _IPC1_DMA0IP0_LENGTH                     0x00000001

#define _IPC1_DMA0IP1_POSITION                   0x00000001
#define _IPC1_DMA0IP1_MASK                       0x00000002
#define _IPC1_DMA0IP1_LENGTH                     0x00000001

#define _IPC1_DMA0IP2_POSITION                   0x00000002
#define _IPC1_DMA0IP2_MASK                       0x00000004
#define _IPC1_DMA0IP2_LENGTH                     0x00000001

#define _IPC1_IC2IP0_POSITION                    0x00000004
#define _IPC1_IC2IP0_MASK                        0x00000010
#define _IPC1_IC2IP0_LENGTH                      0x00000001

#define _IPC1_IC2IP1_POSITION                    0x00000005
#define _IPC1_IC2IP1_MASK                        0x00000020
#define _IPC1_IC2IP1_LENGTH                      0x00000001

#define _IPC1_IC2IP2_POSITION                    0x00000006
#define _IPC1_IC2IP2_MASK                        0x00000040
#define _IPC1_IC2IP2_LENGTH                      0x00000001

#define _IPC1_OC2IP0_POSITION                    0x00000008
#define _IPC1_OC2IP0_MASK                        0x00000100
#define _IPC1_OC2IP0_LENGTH                      0x00000001

#define _IPC1_OC2IP1_POSITION                    0x00000009
#define _IPC1_OC2IP1_MASK                        0x00000200
#define _IPC1_OC2IP1_LENGTH                      0x00000001

#define _IPC1_OC2IP2_POSITION                    0x0000000A
#define _IPC1_OC2IP2_MASK                        0x00000400
#define _IPC1_OC2IP2_LENGTH                      0x00000001

#define _IPC1_T2IP0_POSITION                     0x0000000C
#define _IPC1_T2IP0_MASK                         0x00001000
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x0000000D
#define _IPC1_T2IP1_MASK                         0x00002000
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000E
#define _IPC1_T2IP2_MASK                         0x00004000
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC2_T3IP_POSITION                      0x00000000
#define _IPC2_T3IP_MASK                          0x00000007
#define _IPC2_T3IP_LENGTH                        0x00000003

#define _IPC2_SPF1IP_POSITION                    0x00000004
#define _IPC2_SPF1IP_MASK                        0x00000070
#define _IPC2_SPF1IP_LENGTH                      0x00000003

#define _IPC2_SPI1IP_POSITION                    0x00000008
#define _IPC2_SPI1IP_MASK                        0x00000700
#define _IPC2_SPI1IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_T3IP0_POSITION                     0x00000000
#define _IPC2_T3IP0_MASK                         0x00000001
#define _IPC2_T3IP0_LENGTH                       0x00000001

#define _IPC2_T3IP1_POSITION                     0x00000001
#define _IPC2_T3IP1_MASK                         0x00000002
#define _IPC2_T3IP1_LENGTH                       0x00000001

#define _IPC2_T3IP2_POSITION                     0x00000002
#define _IPC2_T3IP2_MASK                         0x00000004
#define _IPC2_T3IP2_LENGTH                       0x00000001

#define _IPC2_SPF1IP0_POSITION                   0x00000004
#define _IPC2_SPF1IP0_MASK                       0x00000010
#define _IPC2_SPF1IP0_LENGTH                     0x00000001

#define _IPC2_SPF1IP1_POSITION                   0x00000005
#define _IPC2_SPF1IP1_MASK                       0x00000020
#define _IPC2_SPF1IP1_LENGTH                     0x00000001

#define _IPC2_SPF1IP2_POSITION                   0x00000006
#define _IPC2_SPF1IP2_MASK                       0x00000040
#define _IPC2_SPF1IP2_LENGTH                     0x00000001

#define _IPC2_SPI1IP0_POSITION                   0x00000008
#define _IPC2_SPI1IP0_MASK                       0x00000100
#define _IPC2_SPI1IP0_LENGTH                     0x00000001

#define _IPC2_SPI1IP1_POSITION                   0x00000009
#define _IPC2_SPI1IP1_MASK                       0x00000200
#define _IPC2_SPI1IP1_LENGTH                     0x00000001

#define _IPC2_SPI1IP2_POSITION                   0x0000000A
#define _IPC2_SPI1IP2_MASK                       0x00000400
#define _IPC2_SPI1IP2_LENGTH                     0x00000001

#define _IPC2_U1RXIP0_POSITION                   0x0000000C
#define _IPC2_U1RXIP0_MASK                       0x00001000
#define _IPC2_U1RXIP0_LENGTH                     0x00000001

#define _IPC2_U1RXIP1_POSITION                   0x0000000D
#define _IPC2_U1RXIP1_MASK                       0x00002000
#define _IPC2_U1RXIP1_LENGTH                     0x00000001

#define _IPC2_U1RXIP2_POSITION                   0x0000000E
#define _IPC2_U1RXIP2_MASK                       0x00004000
#define _IPC2_U1RXIP2_LENGTH                     0x00000001

#define _IPC3_U1TXIP_POSITION                    0x00000000
#define _IPC3_U1TXIP_MASK                        0x00000007
#define _IPC3_U1TXIP_LENGTH                      0x00000003

#define _IPC3_AD1IP_POSITION                     0x00000004
#define _IPC3_AD1IP_MASK                         0x00000070
#define _IPC3_AD1IP_LENGTH                       0x00000003

#define _IPC3_DMA1IP_POSITION                    0x00000008
#define _IPC3_DMA1IP_MASK                        0x00000700
#define _IPC3_DMA1IP_LENGTH                      0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_AD1IP0_POSITION                    0x00000004
#define _IPC3_AD1IP0_MASK                        0x00000010
#define _IPC3_AD1IP0_LENGTH                      0x00000001

#define _IPC3_AD1IP1_POSITION                    0x00000005
#define _IPC3_AD1IP1_MASK                        0x00000020
#define _IPC3_AD1IP1_LENGTH                      0x00000001

#define _IPC3_AD1IP2_POSITION                    0x00000006
#define _IPC3_AD1IP2_MASK                        0x00000040
#define _IPC3_AD1IP2_LENGTH                      0x00000001

#define _IPC3_DMA1IP0_POSITION                   0x00000008
#define _IPC3_DMA1IP0_MASK                       0x00000100
#define _IPC3_DMA1IP0_LENGTH                     0x00000001

#define _IPC3_DMA1IP1_POSITION                   0x00000009
#define _IPC3_DMA1IP1_MASK                       0x00000200
#define _IPC3_DMA1IP1_LENGTH                     0x00000001

#define _IPC3_DMA1IP2_POSITION                   0x0000000A
#define _IPC3_DMA1IP2_MASK                       0x00000400
#define _IPC3_DMA1IP2_LENGTH                     0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

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

#define _IPC4_CMIP0_POSITION                     0x00000008
#define _IPC4_CMIP0_MASK                         0x00000100
#define _IPC4_CMIP0_LENGTH                       0x00000001

#define _IPC4_CMIP1_POSITION                     0x00000009
#define _IPC4_CMIP1_MASK                         0x00000200
#define _IPC4_CMIP1_LENGTH                       0x00000001

#define _IPC4_CMIP2_POSITION                     0x0000000A
#define _IPC4_CMIP2_MASK                         0x00000400
#define _IPC4_CMIP2_LENGTH                       0x00000001

#define _IPC4_CNIP0_POSITION                     0x0000000C
#define _IPC4_CNIP0_MASK                         0x00001000
#define _IPC4_CNIP0_LENGTH                       0x00000001

#define _IPC4_CNIP1_POSITION                     0x0000000D
#define _IPC4_CNIP1_MASK                         0x00002000
#define _IPC4_CNIP1_LENGTH                       0x00000001

#define _IPC4_CNIP2_POSITION                     0x0000000E
#define _IPC4_CNIP2_MASK                         0x00004000
#define _IPC4_CNIP2_LENGTH                       0x00000001

#define _IPC4_SI2C1P_POSITION                    0x00000000
#define _IPC4_SI2C1P_MASK                        0x00000007
#define _IPC4_SI2C1P_LENGTH                      0x00000003

#define _IPC4_MI2C1P_POSITION                    0x00000004
#define _IPC4_MI2C1P_MASK                        0x00000070
#define _IPC4_MI2C1P_LENGTH                      0x00000003

#define _IPC4_SI2C1P0_POSITION                   0x00000000
#define _IPC4_SI2C1P0_MASK                       0x00000001
#define _IPC4_SI2C1P0_LENGTH                     0x00000001

#define _IPC4_SI2C1P1_POSITION                   0x00000001
#define _IPC4_SI2C1P1_MASK                       0x00000002
#define _IPC4_SI2C1P1_LENGTH                     0x00000001

#define _IPC4_SI2C1P2_POSITION                   0x00000002
#define _IPC4_SI2C1P2_MASK                       0x00000004
#define _IPC4_SI2C1P2_LENGTH                     0x00000001

#define _IPC4_MI2C1P0_POSITION                   0x00000004
#define _IPC4_MI2C1P0_MASK                       0x00000010
#define _IPC4_MI2C1P0_LENGTH                     0x00000001

#define _IPC4_MI2C1P1_POSITION                   0x00000005
#define _IPC4_MI2C1P1_MASK                       0x00000020
#define _IPC4_MI2C1P1_LENGTH                     0x00000001

#define _IPC4_MI2C1P2_POSITION                   0x00000006
#define _IPC4_MI2C1P2_MASK                       0x00000040
#define _IPC4_MI2C1P2_LENGTH                     0x00000001

#define _IPC5_INT1IP_POSITION                    0x00000000
#define _IPC5_INT1IP_MASK                        0x00000007
#define _IPC5_INT1IP_LENGTH                      0x00000003

#define _IPC5_IC7IP_POSITION                     0x00000008
#define _IPC5_IC7IP_MASK                         0x00000700
#define _IPC5_IC7IP_LENGTH                       0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC5_IC7IP0_POSITION                    0x00000008
#define _IPC5_IC7IP0_MASK                        0x00000100
#define _IPC5_IC7IP0_LENGTH                      0x00000001

#define _IPC5_IC7IP1_POSITION                    0x00000009
#define _IPC5_IC7IP1_MASK                        0x00000200
#define _IPC5_IC7IP1_LENGTH                      0x00000001

#define _IPC5_IC7IP2_POSITION                    0x0000000A
#define _IPC5_IC7IP2_MASK                        0x00000400
#define _IPC5_IC7IP2_LENGTH                      0x00000001

#define _IPC6_DMA2IP_POSITION                    0x00000000
#define _IPC6_DMA2IP_MASK                        0x00000007
#define _IPC6_DMA2IP_LENGTH                      0x00000003

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_DMA2IP0_POSITION                   0x00000000
#define _IPC6_DMA2IP0_MASK                       0x00000001
#define _IPC6_DMA2IP0_LENGTH                     0x00000001

#define _IPC6_DMA2IP1_POSITION                   0x00000001
#define _IPC6_DMA2IP1_MASK                       0x00000002
#define _IPC6_DMA2IP1_LENGTH                     0x00000001

#define _IPC6_DMA2IP2_POSITION                   0x00000002
#define _IPC6_DMA2IP2_MASK                       0x00000004
#define _IPC6_DMA2IP2_LENGTH                     0x00000001

#define _IPC6_OC3IP0_POSITION                    0x00000004
#define _IPC6_OC3IP0_MASK                        0x00000010
#define _IPC6_OC3IP0_LENGTH                      0x00000001

#define _IPC6_OC3IP1_POSITION                    0x00000005
#define _IPC6_OC3IP1_MASK                        0x00000020
#define _IPC6_OC3IP1_LENGTH                      0x00000001

#define _IPC6_OC3IP2_POSITION                    0x00000006
#define _IPC6_OC3IP2_MASK                        0x00000040
#define _IPC6_OC3IP2_LENGTH                      0x00000001

#define _IPC6_OC4IP0_POSITION                    0x00000008
#define _IPC6_OC4IP0_MASK                        0x00000100
#define _IPC6_OC4IP0_LENGTH                      0x00000001

#define _IPC6_OC4IP1_POSITION                    0x00000009
#define _IPC6_OC4IP1_MASK                        0x00000200
#define _IPC6_OC4IP1_LENGTH                      0x00000001

#define _IPC6_OC4IP2_POSITION                    0x0000000A
#define _IPC6_OC4IP2_MASK                        0x00000400
#define _IPC6_OC4IP2_LENGTH                      0x00000001

#define _IPC6_T4IP0_POSITION                     0x0000000C
#define _IPC6_T4IP0_MASK                         0x00001000
#define _IPC6_T4IP0_LENGTH                       0x00000001

#define _IPC6_T4IP1_POSITION                     0x0000000D
#define _IPC6_T4IP1_MASK                         0x00002000
#define _IPC6_T4IP1_LENGTH                       0x00000001

#define _IPC6_T4IP2_POSITION                     0x0000000E
#define _IPC6_T4IP2_MASK                         0x00004000
#define _IPC6_T4IP2_LENGTH                       0x00000001

#define _IPC7_T5IP_POSITION                      0x00000000
#define _IPC7_T5IP_MASK                          0x00000007
#define _IPC7_T5IP_LENGTH                        0x00000003

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

#define _IPC7_T5IP0_POSITION                     0x00000000
#define _IPC7_T5IP0_MASK                         0x00000001
#define _IPC7_T5IP0_LENGTH                       0x00000001

#define _IPC7_T5IP1_POSITION                     0x00000001
#define _IPC7_T5IP1_MASK                         0x00000002
#define _IPC7_T5IP1_LENGTH                       0x00000001

#define _IPC7_T5IP2_POSITION                     0x00000002
#define _IPC7_T5IP2_MASK                         0x00000004
#define _IPC7_T5IP2_LENGTH                       0x00000001

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC7_U2RXIP0_POSITION                   0x00000008
#define _IPC7_U2RXIP0_MASK                       0x00000100
#define _IPC7_U2RXIP0_LENGTH                     0x00000001

#define _IPC7_U2RXIP1_POSITION                   0x00000009
#define _IPC7_U2RXIP1_MASK                       0x00000200
#define _IPC7_U2RXIP1_LENGTH                     0x00000001

#define _IPC7_U2RXIP2_POSITION                   0x0000000A
#define _IPC7_U2RXIP2_MASK                       0x00000400
#define _IPC7_U2RXIP2_LENGTH                     0x00000001

#define _IPC7_U2TXIP0_POSITION                   0x0000000C
#define _IPC7_U2TXIP0_MASK                       0x00001000
#define _IPC7_U2TXIP0_LENGTH                     0x00000001

#define _IPC7_U2TXIP1_POSITION                   0x0000000D
#define _IPC7_U2TXIP1_MASK                       0x00002000
#define _IPC7_U2TXIP1_LENGTH                     0x00000001

#define _IPC7_U2TXIP2_POSITION                   0x0000000E
#define _IPC7_U2TXIP2_MASK                       0x00004000
#define _IPC7_U2TXIP2_LENGTH                     0x00000001

#define _IPC8_SPF2IP_POSITION                    0x00000000
#define _IPC8_SPF2IP_MASK                        0x00000007
#define _IPC8_SPF2IP_LENGTH                      0x00000003

#define _IPC8_SPI2IP_POSITION                    0x00000004
#define _IPC8_SPI2IP_MASK                        0x00000070
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_SPF2IP0_POSITION                   0x00000000
#define _IPC8_SPF2IP0_MASK                       0x00000001
#define _IPC8_SPF2IP0_LENGTH                     0x00000001

#define _IPC8_SPF2IP1_POSITION                   0x00000001
#define _IPC8_SPF2IP1_MASK                       0x00000002
#define _IPC8_SPF2IP1_LENGTH                     0x00000001

#define _IPC8_SPF2IP2_POSITION                   0x00000002
#define _IPC8_SPF2IP2_MASK                       0x00000004
#define _IPC8_SPF2IP2_LENGTH                     0x00000001

#define _IPC8_SPI2IP0_POSITION                   0x00000004
#define _IPC8_SPI2IP0_MASK                       0x00000010
#define _IPC8_SPI2IP0_LENGTH                     0x00000001

#define _IPC8_SPI2IP1_POSITION                   0x00000005
#define _IPC8_SPI2IP1_MASK                       0x00000020
#define _IPC8_SPI2IP1_LENGTH                     0x00000001

#define _IPC8_SPI2IP2_POSITION                   0x00000006
#define _IPC8_SPI2IP2_MASK                       0x00000040
#define _IPC8_SPI2IP2_LENGTH                     0x00000001

#define _IPC9_DMA3IP_POSITION                    0x00000000
#define _IPC9_DMA3IP_MASK                        0x00000007
#define _IPC9_DMA3IP_LENGTH                      0x00000003

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_IC5IP_POSITION                     0x0000000C
#define _IPC9_IC5IP_MASK                         0x00007000
#define _IPC9_IC5IP_LENGTH                       0x00000003

#define _IPC9_DMA3IP0_POSITION                   0x00000000
#define _IPC9_DMA3IP0_MASK                       0x00000001
#define _IPC9_DMA3IP0_LENGTH                     0x00000001

#define _IPC9_DMA3IP1_POSITION                   0x00000001
#define _IPC9_DMA3IP1_MASK                       0x00000002
#define _IPC9_DMA3IP1_LENGTH                     0x00000001

#define _IPC9_DMA3IP2_POSITION                   0x00000002
#define _IPC9_DMA3IP2_MASK                       0x00000004
#define _IPC9_DMA3IP2_LENGTH                     0x00000001

#define _IPC9_IC3IP0_POSITION                    0x00000004
#define _IPC9_IC3IP0_MASK                        0x00000010
#define _IPC9_IC3IP0_LENGTH                      0x00000001

#define _IPC9_IC3IP1_POSITION                    0x00000005
#define _IPC9_IC3IP1_MASK                        0x00000020
#define _IPC9_IC3IP1_LENGTH                      0x00000001

#define _IPC9_IC3IP2_POSITION                    0x00000006
#define _IPC9_IC3IP2_MASK                        0x00000040
#define _IPC9_IC3IP2_LENGTH                      0x00000001

#define _IPC9_IC4IP0_POSITION                    0x00000008
#define _IPC9_IC4IP0_MASK                        0x00000100
#define _IPC9_IC4IP0_LENGTH                      0x00000001

#define _IPC9_IC4IP1_POSITION                    0x00000009
#define _IPC9_IC4IP1_MASK                        0x00000200
#define _IPC9_IC4IP1_LENGTH                      0x00000001

#define _IPC9_IC4IP2_POSITION                    0x0000000A
#define _IPC9_IC4IP2_MASK                        0x00000400
#define _IPC9_IC4IP2_LENGTH                      0x00000001

#define _IPC9_IC5IP0_POSITION                    0x0000000C
#define _IPC9_IC5IP0_MASK                        0x00001000
#define _IPC9_IC5IP0_LENGTH                      0x00000001

#define _IPC9_IC5IP1_POSITION                    0x0000000D
#define _IPC9_IC5IP1_MASK                        0x00002000
#define _IPC9_IC5IP1_LENGTH                      0x00000001

#define _IPC9_IC5IP2_POSITION                    0x0000000E
#define _IPC9_IC5IP2_MASK                        0x00004000
#define _IPC9_IC5IP2_LENGTH                      0x00000001

#define _IPC10_IC6IP_POSITION                    0x00000000
#define _IPC10_IC6IP_MASK                        0x00000007
#define _IPC10_IC6IP_LENGTH                      0x00000003

#define _IPC10_OC5IP_POSITION                    0x00000004
#define _IPC10_OC5IP_MASK                        0x00000070
#define _IPC10_OC5IP_LENGTH                      0x00000003

#define _IPC10_OC6IP_POSITION                    0x00000008
#define _IPC10_OC6IP_MASK                        0x00000700
#define _IPC10_OC6IP_LENGTH                      0x00000003

#define _IPC10_OC7IP_POSITION                    0x0000000C
#define _IPC10_OC7IP_MASK                        0x00007000
#define _IPC10_OC7IP_LENGTH                      0x00000003

#define _IPC10_IC6IP0_POSITION                   0x00000000
#define _IPC10_IC6IP0_MASK                       0x00000001
#define _IPC10_IC6IP0_LENGTH                     0x00000001

#define _IPC10_IC6IP1_POSITION                   0x00000001
#define _IPC10_IC6IP1_MASK                       0x00000002
#define _IPC10_IC6IP1_LENGTH                     0x00000001

#define _IPC10_IC6IP2_POSITION                   0x00000002
#define _IPC10_IC6IP2_MASK                       0x00000004
#define _IPC10_IC6IP2_LENGTH                     0x00000001

#define _IPC10_OC5IP0_POSITION                   0x00000004
#define _IPC10_OC5IP0_MASK                       0x00000010
#define _IPC10_OC5IP0_LENGTH                     0x00000001

#define _IPC10_OC5IP1_POSITION                   0x00000005
#define _IPC10_OC5IP1_MASK                       0x00000020
#define _IPC10_OC5IP1_LENGTH                     0x00000001

#define _IPC10_OC5IP2_POSITION                   0x00000006
#define _IPC10_OC5IP2_MASK                       0x00000040
#define _IPC10_OC5IP2_LENGTH                     0x00000001

#define _IPC10_OC6IP0_POSITION                   0x00000008
#define _IPC10_OC6IP0_MASK                       0x00000100
#define _IPC10_OC6IP0_LENGTH                     0x00000001

#define _IPC10_OC6IP1_POSITION                   0x00000009
#define _IPC10_OC6IP1_MASK                       0x00000200
#define _IPC10_OC6IP1_LENGTH                     0x00000001

#define _IPC10_OC6IP2_POSITION                   0x0000000A
#define _IPC10_OC6IP2_MASK                       0x00000400
#define _IPC10_OC6IP2_LENGTH                     0x00000001

#define _IPC10_OC7IP0_POSITION                   0x0000000C
#define _IPC10_OC7IP0_MASK                       0x00001000
#define _IPC10_OC7IP0_LENGTH                     0x00000001

#define _IPC10_OC7IP1_POSITION                   0x0000000D
#define _IPC10_OC7IP1_MASK                       0x00002000
#define _IPC10_OC7IP1_LENGTH                     0x00000001

#define _IPC10_OC7IP2_POSITION                   0x0000000E
#define _IPC10_OC7IP2_MASK                       0x00004000
#define _IPC10_OC7IP2_LENGTH                     0x00000001

#define _IPC11_PMPIP_POSITION                    0x00000004
#define _IPC11_PMPIP_MASK                        0x00000070
#define _IPC11_PMPIP_LENGTH                      0x00000003

#define _IPC11_DMA4IP_POSITION                   0x00000008
#define _IPC11_DMA4IP_MASK                       0x00000700
#define _IPC11_DMA4IP_LENGTH                     0x00000003

#define _IPC11_PMPIP0_POSITION                   0x00000004
#define _IPC11_PMPIP0_MASK                       0x00000010
#define _IPC11_PMPIP0_LENGTH                     0x00000001

#define _IPC11_PMPIP1_POSITION                   0x00000005
#define _IPC11_PMPIP1_MASK                       0x00000020
#define _IPC11_PMPIP1_LENGTH                     0x00000001

#define _IPC11_PMPIP2_POSITION                   0x00000006
#define _IPC11_PMPIP2_MASK                       0x00000040
#define _IPC11_PMPIP2_LENGTH                     0x00000001

#define _IPC11_DMA4IP0_POSITION                  0x00000008
#define _IPC11_DMA4IP0_MASK                      0x00000100
#define _IPC11_DMA4IP0_LENGTH                    0x00000001

#define _IPC11_DMA4IP1_POSITION                  0x00000009
#define _IPC11_DMA4IP1_MASK                      0x00000200
#define _IPC11_DMA4IP1_LENGTH                    0x00000001

#define _IPC11_DMA4IP2_POSITION                  0x0000000A
#define _IPC11_DMA4IP2_MASK                      0x00000400
#define _IPC11_DMA4IP2_LENGTH                    0x00000001

#define _IPC12_SI2C2IP_POSITION                  0x00000004
#define _IPC12_SI2C2IP_MASK                      0x00000070
#define _IPC12_SI2C2IP_LENGTH                    0x00000003

#define _IPC12_MI2C2IP_POSITION                  0x00000008
#define _IPC12_MI2C2IP_MASK                      0x00000700
#define _IPC12_MI2C2IP_LENGTH                    0x00000003

#define _IPC12_SI2C2IP0_POSITION                 0x00000004
#define _IPC12_SI2C2IP0_MASK                     0x00000010
#define _IPC12_SI2C2IP0_LENGTH                   0x00000001

#define _IPC12_SI2C2IP1_POSITION                 0x00000005
#define _IPC12_SI2C2IP1_MASK                     0x00000020
#define _IPC12_SI2C2IP1_LENGTH                   0x00000001

#define _IPC12_SI2C2IP2_POSITION                 0x00000006
#define _IPC12_SI2C2IP2_MASK                     0x00000040
#define _IPC12_SI2C2IP2_LENGTH                   0x00000001

#define _IPC12_MI2C2IP0_POSITION                 0x00000008
#define _IPC12_MI2C2IP0_MASK                     0x00000100
#define _IPC12_MI2C2IP0_LENGTH                   0x00000001

#define _IPC12_MI2C2IP1_POSITION                 0x00000009
#define _IPC12_MI2C2IP1_MASK                     0x00000200
#define _IPC12_MI2C2IP1_LENGTH                   0x00000001

#define _IPC12_MI2C2IP2_POSITION                 0x0000000A
#define _IPC12_MI2C2IP2_MASK                     0x00000400
#define _IPC12_MI2C2IP2_LENGTH                   0x00000001

#define _IPC12_SI2C2P0_POSITION                  0x00000004
#define _IPC12_SI2C2P0_MASK                      0x00000010
#define _IPC12_SI2C2P0_LENGTH                    0x00000001

#define _IPC12_SI2C2P1_POSITION                  0x00000005
#define _IPC12_SI2C2P1_MASK                      0x00000020
#define _IPC12_SI2C2P1_LENGTH                    0x00000001

#define _IPC12_SI2C2P2_POSITION                  0x00000006
#define _IPC12_SI2C2P2_MASK                      0x00000040
#define _IPC12_SI2C2P2_LENGTH                    0x00000001

#define _IPC12_MI2C2P0_POSITION                  0x00000008
#define _IPC12_MI2C2P0_MASK                      0x00000100
#define _IPC12_MI2C2P0_LENGTH                    0x00000001

#define _IPC12_MI2C2P1_POSITION                  0x00000009
#define _IPC12_MI2C2P1_MASK                      0x00000200
#define _IPC12_MI2C2P1_LENGTH                    0x00000001

#define _IPC12_MI2C2P2_POSITION                  0x0000000A
#define _IPC12_MI2C2P2_MASK                      0x00000400
#define _IPC12_MI2C2P2_LENGTH                    0x00000001

#define _IPC12_SI2C2P_POSITION                   0x00000004
#define _IPC12_SI2C2P_MASK                       0x00000070
#define _IPC12_SI2C2P_LENGTH                     0x00000003

#define _IPC12_MI2C2P_POSITION                   0x00000008
#define _IPC12_MI2C2P_MASK                       0x00000700
#define _IPC12_MI2C2P_LENGTH                     0x00000003

#define _IPC13_INT3IP_POSITION                   0x00000004
#define _IPC13_INT3IP_MASK                       0x00000070
#define _IPC13_INT3IP_LENGTH                     0x00000003

#define _IPC13_INT4IP_POSITION                   0x00000008
#define _IPC13_INT4IP_MASK                       0x00000700
#define _IPC13_INT4IP_LENGTH                     0x00000003

#define _IPC13_INT3IP0_POSITION                  0x00000004
#define _IPC13_INT3IP0_MASK                      0x00000010
#define _IPC13_INT3IP0_LENGTH                    0x00000001

#define _IPC13_INT3IP1_POSITION                  0x00000005
#define _IPC13_INT3IP1_MASK                      0x00000020
#define _IPC13_INT3IP1_LENGTH                    0x00000001

#define _IPC13_INT3IP2_POSITION                  0x00000006
#define _IPC13_INT3IP2_MASK                      0x00000040
#define _IPC13_INT3IP2_LENGTH                    0x00000001

#define _IPC13_INT4IP0_POSITION                  0x00000008
#define _IPC13_INT4IP0_MASK                      0x00000100
#define _IPC13_INT4IP0_LENGTH                    0x00000001

#define _IPC13_INT4IP1_POSITION                  0x00000009
#define _IPC13_INT4IP1_MASK                      0x00000200
#define _IPC13_INT4IP1_LENGTH                    0x00000001

#define _IPC13_INT4IP2_POSITION                  0x0000000A
#define _IPC13_INT4IP2_MASK                      0x00000400
#define _IPC13_INT4IP2_LENGTH                    0x00000001

#define _IPC15_DMA5IP_POSITION                   0x00000004
#define _IPC15_DMA5IP_MASK                       0x00000070
#define _IPC15_DMA5IP_LENGTH                     0x00000003

#define _IPC15_RTCIP_POSITION                    0x00000008
#define _IPC15_RTCIP_MASK                        0x00000700
#define _IPC15_RTCIP_LENGTH                      0x00000003

#define _IPC15_DMA5IP0_POSITION                  0x00000004
#define _IPC15_DMA5IP0_MASK                      0x00000010
#define _IPC15_DMA5IP0_LENGTH                    0x00000001

#define _IPC15_DMA5IP1_POSITION                  0x00000005
#define _IPC15_DMA5IP1_MASK                      0x00000020
#define _IPC15_DMA5IP1_LENGTH                    0x00000001

#define _IPC15_DMA5IP2_POSITION                  0x00000006
#define _IPC15_DMA5IP2_MASK                      0x00000040
#define _IPC15_DMA5IP2_LENGTH                    0x00000001

#define _IPC15_RTCIP0_POSITION                   0x00000008
#define _IPC15_RTCIP0_MASK                       0x00000100
#define _IPC15_RTCIP0_LENGTH                     0x00000001

#define _IPC15_RTCIP1_POSITION                   0x00000009
#define _IPC15_RTCIP1_MASK                       0x00000200
#define _IPC15_RTCIP1_LENGTH                     0x00000001

#define _IPC15_RTCIP2_POSITION                   0x0000000A
#define _IPC15_RTCIP2_MASK                       0x00000400
#define _IPC15_RTCIP2_LENGTH                     0x00000001

#define _IPC16_U1ERIP_POSITION                   0x00000004
#define _IPC16_U1ERIP_MASK                       0x00000070
#define _IPC16_U1ERIP_LENGTH                     0x00000003

#define _IPC16_U2ERIP_POSITION                   0x00000008
#define _IPC16_U2ERIP_MASK                       0x00000700
#define _IPC16_U2ERIP_LENGTH                     0x00000003

#define _IPC16_CRCIP_POSITION                    0x0000000C
#define _IPC16_CRCIP_MASK                        0x00007000
#define _IPC16_CRCIP_LENGTH                      0x00000003

#define _IPC16_U1ERIP0_POSITION                  0x00000004
#define _IPC16_U1ERIP0_MASK                      0x00000010
#define _IPC16_U1ERIP0_LENGTH                    0x00000001

#define _IPC16_U1ERIP1_POSITION                  0x00000005
#define _IPC16_U1ERIP1_MASK                      0x00000020
#define _IPC16_U1ERIP1_LENGTH                    0x00000001

#define _IPC16_U1ERIP2_POSITION                  0x00000006
#define _IPC16_U1ERIP2_MASK                      0x00000040
#define _IPC16_U1ERIP2_LENGTH                    0x00000001

#define _IPC16_U2ERIP0_POSITION                  0x00000008
#define _IPC16_U2ERIP0_MASK                      0x00000100
#define _IPC16_U2ERIP0_LENGTH                    0x00000001

#define _IPC16_U2ERIP1_POSITION                  0x00000009
#define _IPC16_U2ERIP1_MASK                      0x00000200
#define _IPC16_U2ERIP1_LENGTH                    0x00000001

#define _IPC16_U2ERIP2_POSITION                  0x0000000A
#define _IPC16_U2ERIP2_MASK                      0x00000400
#define _IPC16_U2ERIP2_LENGTH                    0x00000001

#define _IPC16_CRCIP0_POSITION                   0x0000000C
#define _IPC16_CRCIP0_MASK                       0x00001000
#define _IPC16_CRCIP0_LENGTH                     0x00000001

#define _IPC16_CRCIP1_POSITION                   0x0000000D
#define _IPC16_CRCIP1_MASK                       0x00002000
#define _IPC16_CRCIP1_LENGTH                     0x00000001

#define _IPC16_CRCIP2_POSITION                   0x0000000E
#define _IPC16_CRCIP2_MASK                       0x00004000
#define _IPC16_CRCIP2_LENGTH                     0x00000001

#define _IPC18_LVDIP_POSITION                    0x00000000
#define _IPC18_LVDIP_MASK                        0x00000007
#define _IPC18_LVDIP_LENGTH                      0x00000003

#define _IPC18_LVDIP0_POSITION                   0x00000000
#define _IPC18_LVDIP0_MASK                       0x00000001
#define _IPC18_LVDIP0_LENGTH                     0x00000001

#define _IPC18_LVDIP1_POSITION                   0x00000001
#define _IPC18_LVDIP1_MASK                       0x00000002
#define _IPC18_LVDIP1_LENGTH                     0x00000001

#define _IPC18_LVDIP2_POSITION                   0x00000002
#define _IPC18_LVDIP2_MASK                       0x00000004
#define _IPC18_LVDIP2_LENGTH                     0x00000001

#define _IPC19_CTMUIP_POSITION                   0x00000004
#define _IPC19_CTMUIP_MASK                       0x00000070
#define _IPC19_CTMUIP_LENGTH                     0x00000003

#define _IPC19_CTMUIP0_POSITION                  0x00000004
#define _IPC19_CTMUIP0_MASK                      0x00000010
#define _IPC19_CTMUIP0_LENGTH                    0x00000001

#define _IPC19_CTMUIP1_POSITION                  0x00000005
#define _IPC19_CTMUIP1_MASK                      0x00000020
#define _IPC19_CTMUIP1_LENGTH                    0x00000001

#define _IPC19_CTMUIP2_POSITION                  0x00000006
#define _IPC19_CTMUIP2_MASK                      0x00000040
#define _IPC19_CTMUIP2_LENGTH                    0x00000001

#define _IPC20_U3ERIP_POSITION                   0x00000004
#define _IPC20_U3ERIP_MASK                       0x00000070
#define _IPC20_U3ERIP_LENGTH                     0x00000003

#define _IPC20_U3RXIP_POSITION                   0x00000008
#define _IPC20_U3RXIP_MASK                       0x00000700
#define _IPC20_U3RXIP_LENGTH                     0x00000003

#define _IPC20_U3TXIP_POSITION                   0x0000000C
#define _IPC20_U3TXIP_MASK                       0x00007000
#define _IPC20_U3TXIP_LENGTH                     0x00000003

#define _IPC20_U3ERIP0_POSITION                  0x00000004
#define _IPC20_U3ERIP0_MASK                      0x00000010
#define _IPC20_U3ERIP0_LENGTH                    0x00000001

#define _IPC20_U3ERIP1_POSITION                  0x00000005
#define _IPC20_U3ERIP1_MASK                      0x00000020
#define _IPC20_U3ERIP1_LENGTH                    0x00000001

#define _IPC20_U3ERIP2_POSITION                  0x00000006
#define _IPC20_U3ERIP2_MASK                      0x00000040
#define _IPC20_U3ERIP2_LENGTH                    0x00000001

#define _IPC20_U3RXIP0_POSITION                  0x00000008
#define _IPC20_U3RXIP0_MASK                      0x00000100
#define _IPC20_U3RXIP0_LENGTH                    0x00000001

#define _IPC20_U3RXIP1_POSITION                  0x00000009
#define _IPC20_U3RXIP1_MASK                      0x00000200
#define _IPC20_U3RXIP1_LENGTH                    0x00000001

#define _IPC20_U3RXIP2_POSITION                  0x0000000A
#define _IPC20_U3RXIP2_MASK                      0x00000400
#define _IPC20_U3RXIP2_LENGTH                    0x00000001

#define _IPC20_U3TXIP0_POSITION                  0x0000000C
#define _IPC20_U3TXIP0_MASK                      0x00001000
#define _IPC20_U3TXIP0_LENGTH                    0x00000001

#define _IPC20_U3TXIP1_POSITION                  0x0000000D
#define _IPC20_U3TXIP1_MASK                      0x00002000
#define _IPC20_U3TXIP1_LENGTH                    0x00000001

#define _IPC20_U3TXIP2_POSITION                  0x0000000E
#define _IPC20_U3TXIP2_MASK                      0x00004000
#define _IPC20_U3TXIP2_LENGTH                    0x00000001

#define _IPC21_U4ERIP_POSITION                   0x0000000C
#define _IPC21_U4ERIP_MASK                       0x00007000
#define _IPC21_U4ERIP_LENGTH                     0x00000003

#define _IPC21_U4ERIP0_POSITION                  0x0000000C
#define _IPC21_U4ERIP0_MASK                      0x00001000
#define _IPC21_U4ERIP0_LENGTH                    0x00000001

#define _IPC21_U4ERIP1_POSITION                  0x0000000D
#define _IPC21_U4ERIP1_MASK                      0x00002000
#define _IPC21_U4ERIP1_LENGTH                    0x00000001

#define _IPC21_U4ERIP2_POSITION                  0x0000000E
#define _IPC21_U4ERIP2_MASK                      0x00004000
#define _IPC21_U4ERIP2_LENGTH                    0x00000001

#define _IPC22_U4RXIP_POSITION                   0x00000000
#define _IPC22_U4RXIP_MASK                       0x00000007
#define _IPC22_U4RXIP_LENGTH                     0x00000003

#define _IPC22_U4TXIP_POSITION                   0x00000004
#define _IPC22_U4TXIP_MASK                       0x00000070
#define _IPC22_U4TXIP_LENGTH                     0x00000003

#define _IPC22_U4RXIP0_POSITION                  0x00000000
#define _IPC22_U4RXIP0_MASK                      0x00000001
#define _IPC22_U4RXIP0_LENGTH                    0x00000001

#define _IPC22_U4RXIP1_POSITION                  0x00000001
#define _IPC22_U4RXIP1_MASK                      0x00000002
#define _IPC22_U4RXIP1_LENGTH                    0x00000001

#define _IPC22_U4RXIP2_POSITION                  0x00000002
#define _IPC22_U4RXIP2_MASK                      0x00000004
#define _IPC22_U4RXIP2_LENGTH                    0x00000001

#define _IPC22_U4TXIP0_POSITION                  0x00000004
#define _IPC22_U4TXIP0_MASK                      0x00000010
#define _IPC22_U4TXIP0_LENGTH                    0x00000001

#define _IPC22_U4TXIP1_POSITION                  0x00000005
#define _IPC22_U4TXIP1_MASK                      0x00000020
#define _IPC22_U4TXIP1_LENGTH                    0x00000001

#define _IPC22_U4TXIP2_POSITION                  0x00000006
#define _IPC22_U4TXIP2_MASK                      0x00000040
#define _IPC22_U4TXIP2_LENGTH                    0x00000001

#define _IPC25_LCDIP_POSITION                    0x00000000
#define _IPC25_LCDIP_MASK                        0x00000007
#define _IPC25_LCDIP_LENGTH                      0x00000003

#define _IPC25_LCDIP0_POSITION                   0x00000000
#define _IPC25_LCDIP0_MASK                       0x00000001
#define _IPC25_LCDIP0_LENGTH                     0x00000001

#define _IPC25_LCDIP1_POSITION                   0x00000001
#define _IPC25_LCDIP1_MASK                       0x00000002
#define _IPC25_LCDIP1_LENGTH                     0x00000001

#define _IPC25_LCDIP2_POSITION                   0x00000002
#define _IPC25_LCDIP2_MASK                       0x00000004
#define _IPC25_LCDIP2_LENGTH                     0x00000001

#define _IPC29_JTAGIP_POSITION                   0x00000004
#define _IPC29_JTAGIP_MASK                       0x00000070
#define _IPC29_JTAGIP_LENGTH                     0x00000003

#define _IPC29_JTAGIP0_POSITION                  0x00000004
#define _IPC29_JTAGIP0_MASK                      0x00000010
#define _IPC29_JTAGIP0_LENGTH                    0x00000001

#define _IPC29_JTAGIP1_POSITION                  0x00000005
#define _IPC29_JTAGIP1_MASK                      0x00000020
#define _IPC29_JTAGIP1_LENGTH                    0x00000001

#define _IPC29_JTAGIP2_POSITION                  0x00000006
#define _IPC29_JTAGIP2_MASK                      0x00000040
#define _IPC29_JTAGIP2_LENGTH                    0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VHOLD_POSITION                  0x0000000D
#define _INTTREG_VHOLD_MASK                      0x00002000
#define _INTTREG_VHOLD_LENGTH                    0x00000001

#define _INTTREG_CPUIRQ_POSITION                 0x0000000F
#define _INTTREG_CPUIRQ_MASK                     0x00008000
#define _INTTREG_CPUIRQ_LENGTH                   0x00000001

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

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

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

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TIECS_POSITION                    0x00000008
#define _T1CON_TIECS_MASK                        0x00000300
#define _T1CON_TIECS_LENGTH                      0x00000002

#define _T1CON_T1ECS0_POSITION                   0x00000008
#define _T1CON_T1ECS0_MASK                       0x00000100
#define _T1CON_T1ECS0_LENGTH                     0x00000001

#define _T1CON_T1ECS1_POSITION                   0x00000009
#define _T1CON_T1ECS1_MASK                       0x00000200
#define _T1CON_T1ECS1_LENGTH                     0x00000001

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

#define _T4CON_T45_POSITION                      0x00000003
#define _T4CON_T45_MASK                          0x00000008
#define _T4CON_T45_LENGTH                        0x00000001

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

#define _IC1CON1_ICM_POSITION                    0x00000000
#define _IC1CON1_ICM_MASK                        0x00000007
#define _IC1CON1_ICM_LENGTH                      0x00000003

#define _IC1CON1_ICBNE_POSITION                  0x00000003
#define _IC1CON1_ICBNE_MASK                      0x00000008
#define _IC1CON1_ICBNE_LENGTH                    0x00000001

#define _IC1CON1_ICOV_POSITION                   0x00000004
#define _IC1CON1_ICOV_MASK                       0x00000010
#define _IC1CON1_ICOV_LENGTH                     0x00000001

#define _IC1CON1_ICI_POSITION                    0x00000005
#define _IC1CON1_ICI_MASK                        0x00000060
#define _IC1CON1_ICI_LENGTH                      0x00000002

#define _IC1CON1_ICTSEL_POSITION                 0x0000000A
#define _IC1CON1_ICTSEL_MASK                     0x00001C00
#define _IC1CON1_ICTSEL_LENGTH                   0x00000003

#define _IC1CON1_ICSIDL_POSITION                 0x0000000D
#define _IC1CON1_ICSIDL_MASK                     0x00002000
#define _IC1CON1_ICSIDL_LENGTH                   0x00000001

#define _IC1CON1_ICM0_POSITION                   0x00000000
#define _IC1CON1_ICM0_MASK                       0x00000001
#define _IC1CON1_ICM0_LENGTH                     0x00000001

#define _IC1CON1_ICM1_POSITION                   0x00000001
#define _IC1CON1_ICM1_MASK                       0x00000002
#define _IC1CON1_ICM1_LENGTH                     0x00000001

#define _IC1CON1_ICM2_POSITION                   0x00000002
#define _IC1CON1_ICM2_MASK                       0x00000004
#define _IC1CON1_ICM2_LENGTH                     0x00000001

#define _IC1CON1_ICI0_POSITION                   0x00000005
#define _IC1CON1_ICI0_MASK                       0x00000020
#define _IC1CON1_ICI0_LENGTH                     0x00000001

#define _IC1CON1_ICI1_POSITION                   0x00000006
#define _IC1CON1_ICI1_MASK                       0x00000040
#define _IC1CON1_ICI1_LENGTH                     0x00000001

#define _IC1CON1_ICTSEL0_POSITION                0x0000000A
#define _IC1CON1_ICTSEL0_MASK                    0x00000400
#define _IC1CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL1_POSITION                0x0000000B
#define _IC1CON1_ICTSEL1_MASK                    0x00000800
#define _IC1CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL2_POSITION                0x0000000C
#define _IC1CON1_ICTSEL2_MASK                    0x00001000
#define _IC1CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC1CON2_SYNCSEL_POSITION                0x00000000
#define _IC1CON2_SYNCSEL_MASK                    0x0000001F
#define _IC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC1CON2_TRIGSTAT_POSITION               0x00000006
#define _IC1CON2_TRIGSTAT_MASK                   0x00000040
#define _IC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC1CON2_ICTRIG_POSITION                 0x00000007
#define _IC1CON2_ICTRIG_MASK                     0x00000080
#define _IC1CON2_ICTRIG_LENGTH                   0x00000001

#define _IC1CON2_IC32_POSITION                   0x00000008
#define _IC1CON2_IC32_MASK                       0x00000100
#define _IC1CON2_IC32_LENGTH                     0x00000001

#define _IC1CON2_SYNCSEL0_POSITION               0x00000000
#define _IC1CON2_SYNCSEL0_MASK                   0x00000001
#define _IC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL1_POSITION               0x00000001
#define _IC1CON2_SYNCSEL1_MASK                   0x00000002
#define _IC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL2_POSITION               0x00000002
#define _IC1CON2_SYNCSEL2_MASK                   0x00000004
#define _IC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL3_POSITION               0x00000003
#define _IC1CON2_SYNCSEL3_MASK                   0x00000008
#define _IC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL4_POSITION               0x00000004
#define _IC1CON2_SYNCSEL4_MASK                   0x00000010
#define _IC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC2CON1_ICM_POSITION                    0x00000000
#define _IC2CON1_ICM_MASK                        0x00000007
#define _IC2CON1_ICM_LENGTH                      0x00000003

#define _IC2CON1_ICBNE_POSITION                  0x00000003
#define _IC2CON1_ICBNE_MASK                      0x00000008
#define _IC2CON1_ICBNE_LENGTH                    0x00000001

#define _IC2CON1_ICOV_POSITION                   0x00000004
#define _IC2CON1_ICOV_MASK                       0x00000010
#define _IC2CON1_ICOV_LENGTH                     0x00000001

#define _IC2CON1_ICI_POSITION                    0x00000005
#define _IC2CON1_ICI_MASK                        0x00000060
#define _IC2CON1_ICI_LENGTH                      0x00000002

#define _IC2CON1_ICTSEL_POSITION                 0x0000000A
#define _IC2CON1_ICTSEL_MASK                     0x00001C00
#define _IC2CON1_ICTSEL_LENGTH                   0x00000003

#define _IC2CON1_ICSIDL_POSITION                 0x0000000D
#define _IC2CON1_ICSIDL_MASK                     0x00002000
#define _IC2CON1_ICSIDL_LENGTH                   0x00000001

#define _IC2CON1_ICM0_POSITION                   0x00000000
#define _IC2CON1_ICM0_MASK                       0x00000001
#define _IC2CON1_ICM0_LENGTH                     0x00000001

#define _IC2CON1_ICM1_POSITION                   0x00000001
#define _IC2CON1_ICM1_MASK                       0x00000002
#define _IC2CON1_ICM1_LENGTH                     0x00000001

#define _IC2CON1_ICM2_POSITION                   0x00000002
#define _IC2CON1_ICM2_MASK                       0x00000004
#define _IC2CON1_ICM2_LENGTH                     0x00000001

#define _IC2CON1_ICI0_POSITION                   0x00000005
#define _IC2CON1_ICI0_MASK                       0x00000020
#define _IC2CON1_ICI0_LENGTH                     0x00000001

#define _IC2CON1_ICI1_POSITION                   0x00000006
#define _IC2CON1_ICI1_MASK                       0x00000040
#define _IC2CON1_ICI1_LENGTH                     0x00000001

#define _IC2CON1_ICTSEL0_POSITION                0x0000000A
#define _IC2CON1_ICTSEL0_MASK                    0x00000400
#define _IC2CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL1_POSITION                0x0000000B
#define _IC2CON1_ICTSEL1_MASK                    0x00000800
#define _IC2CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL2_POSITION                0x0000000C
#define _IC2CON1_ICTSEL2_MASK                    0x00001000
#define _IC2CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC2CON2_SYNCSEL_POSITION                0x00000000
#define _IC2CON2_SYNCSEL_MASK                    0x0000001F
#define _IC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC2CON2_TRIGSTAT_POSITION               0x00000006
#define _IC2CON2_TRIGSTAT_MASK                   0x00000040
#define _IC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC2CON2_ICTRIG_POSITION                 0x00000007
#define _IC2CON2_ICTRIG_MASK                     0x00000080
#define _IC2CON2_ICTRIG_LENGTH                   0x00000001

#define _IC2CON2_IC32_POSITION                   0x00000008
#define _IC2CON2_IC32_MASK                       0x00000100
#define _IC2CON2_IC32_LENGTH                     0x00000001

#define _IC2CON2_SYNCSEL0_POSITION               0x00000000
#define _IC2CON2_SYNCSEL0_MASK                   0x00000001
#define _IC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL1_POSITION               0x00000001
#define _IC2CON2_SYNCSEL1_MASK                   0x00000002
#define _IC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL2_POSITION               0x00000002
#define _IC2CON2_SYNCSEL2_MASK                   0x00000004
#define _IC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL3_POSITION               0x00000003
#define _IC2CON2_SYNCSEL3_MASK                   0x00000008
#define _IC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL4_POSITION               0x00000004
#define _IC2CON2_SYNCSEL4_MASK                   0x00000010
#define _IC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC3CON1_ICM_POSITION                    0x00000000
#define _IC3CON1_ICM_MASK                        0x00000007
#define _IC3CON1_ICM_LENGTH                      0x00000003

#define _IC3CON1_ICBNE_POSITION                  0x00000003
#define _IC3CON1_ICBNE_MASK                      0x00000008
#define _IC3CON1_ICBNE_LENGTH                    0x00000001

#define _IC3CON1_ICOV_POSITION                   0x00000004
#define _IC3CON1_ICOV_MASK                       0x00000010
#define _IC3CON1_ICOV_LENGTH                     0x00000001

#define _IC3CON1_ICI_POSITION                    0x00000005
#define _IC3CON1_ICI_MASK                        0x00000060
#define _IC3CON1_ICI_LENGTH                      0x00000002

#define _IC3CON1_ICTSEL_POSITION                 0x0000000A
#define _IC3CON1_ICTSEL_MASK                     0x00001C00
#define _IC3CON1_ICTSEL_LENGTH                   0x00000003

#define _IC3CON1_ICSIDL_POSITION                 0x0000000D
#define _IC3CON1_ICSIDL_MASK                     0x00002000
#define _IC3CON1_ICSIDL_LENGTH                   0x00000001

#define _IC3CON1_ICM0_POSITION                   0x00000000
#define _IC3CON1_ICM0_MASK                       0x00000001
#define _IC3CON1_ICM0_LENGTH                     0x00000001

#define _IC3CON1_ICM1_POSITION                   0x00000001
#define _IC3CON1_ICM1_MASK                       0x00000002
#define _IC3CON1_ICM1_LENGTH                     0x00000001

#define _IC3CON1_ICM2_POSITION                   0x00000002
#define _IC3CON1_ICM2_MASK                       0x00000004
#define _IC3CON1_ICM2_LENGTH                     0x00000001

#define _IC3CON1_ICI0_POSITION                   0x00000005
#define _IC3CON1_ICI0_MASK                       0x00000020
#define _IC3CON1_ICI0_LENGTH                     0x00000001

#define _IC3CON1_ICI1_POSITION                   0x00000006
#define _IC3CON1_ICI1_MASK                       0x00000040
#define _IC3CON1_ICI1_LENGTH                     0x00000001

#define _IC3CON1_ICTSEL0_POSITION                0x0000000A
#define _IC3CON1_ICTSEL0_MASK                    0x00000400
#define _IC3CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL1_POSITION                0x0000000B
#define _IC3CON1_ICTSEL1_MASK                    0x00000800
#define _IC3CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL2_POSITION                0x0000000C
#define _IC3CON1_ICTSEL2_MASK                    0x00001000
#define _IC3CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC3CON2_SYNCSEL_POSITION                0x00000000
#define _IC3CON2_SYNCSEL_MASK                    0x0000001F
#define _IC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC3CON2_TRIGSTAT_POSITION               0x00000006
#define _IC3CON2_TRIGSTAT_MASK                   0x00000040
#define _IC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC3CON2_ICTRIG_POSITION                 0x00000007
#define _IC3CON2_ICTRIG_MASK                     0x00000080
#define _IC3CON2_ICTRIG_LENGTH                   0x00000001

#define _IC3CON2_IC32_POSITION                   0x00000008
#define _IC3CON2_IC32_MASK                       0x00000100
#define _IC3CON2_IC32_LENGTH                     0x00000001

#define _IC3CON2_SYNCSEL0_POSITION               0x00000000
#define _IC3CON2_SYNCSEL0_MASK                   0x00000001
#define _IC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL1_POSITION               0x00000001
#define _IC3CON2_SYNCSEL1_MASK                   0x00000002
#define _IC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL2_POSITION               0x00000002
#define _IC3CON2_SYNCSEL2_MASK                   0x00000004
#define _IC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL3_POSITION               0x00000003
#define _IC3CON2_SYNCSEL3_MASK                   0x00000008
#define _IC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL4_POSITION               0x00000004
#define _IC3CON2_SYNCSEL4_MASK                   0x00000010
#define _IC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC4CON1_ICM_POSITION                    0x00000000
#define _IC4CON1_ICM_MASK                        0x00000007
#define _IC4CON1_ICM_LENGTH                      0x00000003

#define _IC4CON1_ICBNE_POSITION                  0x00000003
#define _IC4CON1_ICBNE_MASK                      0x00000008
#define _IC4CON1_ICBNE_LENGTH                    0x00000001

#define _IC4CON1_ICOV_POSITION                   0x00000004
#define _IC4CON1_ICOV_MASK                       0x00000010
#define _IC4CON1_ICOV_LENGTH                     0x00000001

#define _IC4CON1_ICI_POSITION                    0x00000005
#define _IC4CON1_ICI_MASK                        0x00000060
#define _IC4CON1_ICI_LENGTH                      0x00000002

#define _IC4CON1_ICTSEL_POSITION                 0x0000000A
#define _IC4CON1_ICTSEL_MASK                     0x00001C00
#define _IC4CON1_ICTSEL_LENGTH                   0x00000003

#define _IC4CON1_ICSIDL_POSITION                 0x0000000D
#define _IC4CON1_ICSIDL_MASK                     0x00002000
#define _IC4CON1_ICSIDL_LENGTH                   0x00000001

#define _IC4CON1_ICM0_POSITION                   0x00000000
#define _IC4CON1_ICM0_MASK                       0x00000001
#define _IC4CON1_ICM0_LENGTH                     0x00000001

#define _IC4CON1_ICM1_POSITION                   0x00000001
#define _IC4CON1_ICM1_MASK                       0x00000002
#define _IC4CON1_ICM1_LENGTH                     0x00000001

#define _IC4CON1_ICM2_POSITION                   0x00000002
#define _IC4CON1_ICM2_MASK                       0x00000004
#define _IC4CON1_ICM2_LENGTH                     0x00000001

#define _IC4CON1_ICI0_POSITION                   0x00000005
#define _IC4CON1_ICI0_MASK                       0x00000020
#define _IC4CON1_ICI0_LENGTH                     0x00000001

#define _IC4CON1_ICI1_POSITION                   0x00000006
#define _IC4CON1_ICI1_MASK                       0x00000040
#define _IC4CON1_ICI1_LENGTH                     0x00000001

#define _IC4CON1_ICTSEL0_POSITION                0x0000000A
#define _IC4CON1_ICTSEL0_MASK                    0x00000400
#define _IC4CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL1_POSITION                0x0000000B
#define _IC4CON1_ICTSEL1_MASK                    0x00000800
#define _IC4CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL2_POSITION                0x0000000C
#define _IC4CON1_ICTSEL2_MASK                    0x00001000
#define _IC4CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC4CON2_SYNCSEL_POSITION                0x00000000
#define _IC4CON2_SYNCSEL_MASK                    0x0000001F
#define _IC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC4CON2_TRIGSTAT_POSITION               0x00000006
#define _IC4CON2_TRIGSTAT_MASK                   0x00000040
#define _IC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC4CON2_ICTRIG_POSITION                 0x00000007
#define _IC4CON2_ICTRIG_MASK                     0x00000080
#define _IC4CON2_ICTRIG_LENGTH                   0x00000001

#define _IC4CON2_IC32_POSITION                   0x00000008
#define _IC4CON2_IC32_MASK                       0x00000100
#define _IC4CON2_IC32_LENGTH                     0x00000001

#define _IC4CON2_SYNCSEL0_POSITION               0x00000000
#define _IC4CON2_SYNCSEL0_MASK                   0x00000001
#define _IC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL1_POSITION               0x00000001
#define _IC4CON2_SYNCSEL1_MASK                   0x00000002
#define _IC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL2_POSITION               0x00000002
#define _IC4CON2_SYNCSEL2_MASK                   0x00000004
#define _IC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL3_POSITION               0x00000003
#define _IC4CON2_SYNCSEL3_MASK                   0x00000008
#define _IC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL4_POSITION               0x00000004
#define _IC4CON2_SYNCSEL4_MASK                   0x00000010
#define _IC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC5CON1_ICM_POSITION                    0x00000000
#define _IC5CON1_ICM_MASK                        0x00000007
#define _IC5CON1_ICM_LENGTH                      0x00000003

#define _IC5CON1_ICBNE_POSITION                  0x00000003
#define _IC5CON1_ICBNE_MASK                      0x00000008
#define _IC5CON1_ICBNE_LENGTH                    0x00000001

#define _IC5CON1_ICOV_POSITION                   0x00000004
#define _IC5CON1_ICOV_MASK                       0x00000010
#define _IC5CON1_ICOV_LENGTH                     0x00000001

#define _IC5CON1_ICI_POSITION                    0x00000005
#define _IC5CON1_ICI_MASK                        0x00000060
#define _IC5CON1_ICI_LENGTH                      0x00000002

#define _IC5CON1_ICTSEL_POSITION                 0x0000000A
#define _IC5CON1_ICTSEL_MASK                     0x00001C00
#define _IC5CON1_ICTSEL_LENGTH                   0x00000003

#define _IC5CON1_ICSIDL_POSITION                 0x0000000D
#define _IC5CON1_ICSIDL_MASK                     0x00002000
#define _IC5CON1_ICSIDL_LENGTH                   0x00000001

#define _IC5CON1_ICM0_POSITION                   0x00000000
#define _IC5CON1_ICM0_MASK                       0x00000001
#define _IC5CON1_ICM0_LENGTH                     0x00000001

#define _IC5CON1_ICM1_POSITION                   0x00000001
#define _IC5CON1_ICM1_MASK                       0x00000002
#define _IC5CON1_ICM1_LENGTH                     0x00000001

#define _IC5CON1_ICM2_POSITION                   0x00000002
#define _IC5CON1_ICM2_MASK                       0x00000004
#define _IC5CON1_ICM2_LENGTH                     0x00000001

#define _IC5CON1_ICI0_POSITION                   0x00000005
#define _IC5CON1_ICI0_MASK                       0x00000020
#define _IC5CON1_ICI0_LENGTH                     0x00000001

#define _IC5CON1_ICI1_POSITION                   0x00000006
#define _IC5CON1_ICI1_MASK                       0x00000040
#define _IC5CON1_ICI1_LENGTH                     0x00000001

#define _IC5CON1_ICTSEL0_POSITION                0x0000000A
#define _IC5CON1_ICTSEL0_MASK                    0x00000400
#define _IC5CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC5CON1_ICTSEL1_POSITION                0x0000000B
#define _IC5CON1_ICTSEL1_MASK                    0x00000800
#define _IC5CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC5CON1_ICTSEL2_POSITION                0x0000000C
#define _IC5CON1_ICTSEL2_MASK                    0x00001000
#define _IC5CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC5CON2_SYNCSEL_POSITION                0x00000000
#define _IC5CON2_SYNCSEL_MASK                    0x0000001F
#define _IC5CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC5CON2_TRIGSTAT_POSITION               0x00000006
#define _IC5CON2_TRIGSTAT_MASK                   0x00000040
#define _IC5CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC5CON2_ICTRIG_POSITION                 0x00000007
#define _IC5CON2_ICTRIG_MASK                     0x00000080
#define _IC5CON2_ICTRIG_LENGTH                   0x00000001

#define _IC5CON2_IC32_POSITION                   0x00000008
#define _IC5CON2_IC32_MASK                       0x00000100
#define _IC5CON2_IC32_LENGTH                     0x00000001

#define _IC5CON2_SYNCSEL0_POSITION               0x00000000
#define _IC5CON2_SYNCSEL0_MASK                   0x00000001
#define _IC5CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC5CON2_SYNCSEL1_POSITION               0x00000001
#define _IC5CON2_SYNCSEL1_MASK                   0x00000002
#define _IC5CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC5CON2_SYNCSEL2_POSITION               0x00000002
#define _IC5CON2_SYNCSEL2_MASK                   0x00000004
#define _IC5CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC5CON2_SYNCSEL3_POSITION               0x00000003
#define _IC5CON2_SYNCSEL3_MASK                   0x00000008
#define _IC5CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC5CON2_SYNCSEL4_POSITION               0x00000004
#define _IC5CON2_SYNCSEL4_MASK                   0x00000010
#define _IC5CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC6CON1_ICM_POSITION                    0x00000000
#define _IC6CON1_ICM_MASK                        0x00000007
#define _IC6CON1_ICM_LENGTH                      0x00000003

#define _IC6CON1_ICBNE_POSITION                  0x00000003
#define _IC6CON1_ICBNE_MASK                      0x00000008
#define _IC6CON1_ICBNE_LENGTH                    0x00000001

#define _IC6CON1_ICOV_POSITION                   0x00000004
#define _IC6CON1_ICOV_MASK                       0x00000010
#define _IC6CON1_ICOV_LENGTH                     0x00000001

#define _IC6CON1_ICI_POSITION                    0x00000005
#define _IC6CON1_ICI_MASK                        0x00000060
#define _IC6CON1_ICI_LENGTH                      0x00000002

#define _IC6CON1_ICTSEL_POSITION                 0x0000000A
#define _IC6CON1_ICTSEL_MASK                     0x00001C00
#define _IC6CON1_ICTSEL_LENGTH                   0x00000003

#define _IC6CON1_ICSIDL_POSITION                 0x0000000D
#define _IC6CON1_ICSIDL_MASK                     0x00002000
#define _IC6CON1_ICSIDL_LENGTH                   0x00000001

#define _IC6CON1_ICM0_POSITION                   0x00000000
#define _IC6CON1_ICM0_MASK                       0x00000001
#define _IC6CON1_ICM0_LENGTH                     0x00000001

#define _IC6CON1_ICM1_POSITION                   0x00000001
#define _IC6CON1_ICM1_MASK                       0x00000002
#define _IC6CON1_ICM1_LENGTH                     0x00000001

#define _IC6CON1_ICM2_POSITION                   0x00000002
#define _IC6CON1_ICM2_MASK                       0x00000004
#define _IC6CON1_ICM2_LENGTH                     0x00000001

#define _IC6CON1_ICI0_POSITION                   0x00000005
#define _IC6CON1_ICI0_MASK                       0x00000020
#define _IC6CON1_ICI0_LENGTH                     0x00000001

#define _IC6CON1_ICI1_POSITION                   0x00000006
#define _IC6CON1_ICI1_MASK                       0x00000040
#define _IC6CON1_ICI1_LENGTH                     0x00000001

#define _IC6CON1_ICTSEL0_POSITION                0x0000000A
#define _IC6CON1_ICTSEL0_MASK                    0x00000400
#define _IC6CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC6CON1_ICTSEL1_POSITION                0x0000000B
#define _IC6CON1_ICTSEL1_MASK                    0x00000800
#define _IC6CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC6CON1_ICTSEL2_POSITION                0x0000000C
#define _IC6CON1_ICTSEL2_MASK                    0x00001000
#define _IC6CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC6CON2_SYNCSEL_POSITION                0x00000000
#define _IC6CON2_SYNCSEL_MASK                    0x0000001F
#define _IC6CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC6CON2_TRIGSTAT_POSITION               0x00000006
#define _IC6CON2_TRIGSTAT_MASK                   0x00000040
#define _IC6CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC6CON2_ICTRIG_POSITION                 0x00000007
#define _IC6CON2_ICTRIG_MASK                     0x00000080
#define _IC6CON2_ICTRIG_LENGTH                   0x00000001

#define _IC6CON2_IC32_POSITION                   0x00000008
#define _IC6CON2_IC32_MASK                       0x00000100
#define _IC6CON2_IC32_LENGTH                     0x00000001

#define _IC6CON2_SYNCSEL0_POSITION               0x00000000
#define _IC6CON2_SYNCSEL0_MASK                   0x00000001
#define _IC6CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC6CON2_SYNCSEL1_POSITION               0x00000001
#define _IC6CON2_SYNCSEL1_MASK                   0x00000002
#define _IC6CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC6CON2_SYNCSEL2_POSITION               0x00000002
#define _IC6CON2_SYNCSEL2_MASK                   0x00000004
#define _IC6CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC6CON2_SYNCSEL3_POSITION               0x00000003
#define _IC6CON2_SYNCSEL3_MASK                   0x00000008
#define _IC6CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC6CON2_SYNCSEL4_POSITION               0x00000004
#define _IC6CON2_SYNCSEL4_MASK                   0x00000010
#define _IC6CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC7CON1_ICM_POSITION                    0x00000000
#define _IC7CON1_ICM_MASK                        0x00000007
#define _IC7CON1_ICM_LENGTH                      0x00000003

#define _IC7CON1_ICBNE_POSITION                  0x00000003
#define _IC7CON1_ICBNE_MASK                      0x00000008
#define _IC7CON1_ICBNE_LENGTH                    0x00000001

#define _IC7CON1_ICOV_POSITION                   0x00000004
#define _IC7CON1_ICOV_MASK                       0x00000010
#define _IC7CON1_ICOV_LENGTH                     0x00000001

#define _IC7CON1_ICI_POSITION                    0x00000005
#define _IC7CON1_ICI_MASK                        0x00000060
#define _IC7CON1_ICI_LENGTH                      0x00000002

#define _IC7CON1_ICTSEL_POSITION                 0x0000000A
#define _IC7CON1_ICTSEL_MASK                     0x00001C00
#define _IC7CON1_ICTSEL_LENGTH                   0x00000003

#define _IC7CON1_ICSIDL_POSITION                 0x0000000D
#define _IC7CON1_ICSIDL_MASK                     0x00002000
#define _IC7CON1_ICSIDL_LENGTH                   0x00000001

#define _IC7CON1_ICM0_POSITION                   0x00000000
#define _IC7CON1_ICM0_MASK                       0x00000001
#define _IC7CON1_ICM0_LENGTH                     0x00000001

#define _IC7CON1_ICM1_POSITION                   0x00000001
#define _IC7CON1_ICM1_MASK                       0x00000002
#define _IC7CON1_ICM1_LENGTH                     0x00000001

#define _IC7CON1_ICM2_POSITION                   0x00000002
#define _IC7CON1_ICM2_MASK                       0x00000004
#define _IC7CON1_ICM2_LENGTH                     0x00000001

#define _IC7CON1_ICI0_POSITION                   0x00000005
#define _IC7CON1_ICI0_MASK                       0x00000020
#define _IC7CON1_ICI0_LENGTH                     0x00000001

#define _IC7CON1_ICI1_POSITION                   0x00000006
#define _IC7CON1_ICI1_MASK                       0x00000040
#define _IC7CON1_ICI1_LENGTH                     0x00000001

#define _IC7CON1_ICTSEL0_POSITION                0x0000000A
#define _IC7CON1_ICTSEL0_MASK                    0x00000400
#define _IC7CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC7CON1_ICTSEL1_POSITION                0x0000000B
#define _IC7CON1_ICTSEL1_MASK                    0x00000800
#define _IC7CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC7CON1_ICTSEL2_POSITION                0x0000000C
#define _IC7CON1_ICTSEL2_MASK                    0x00001000
#define _IC7CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC7CON2_SYNCSEL_POSITION                0x00000000
#define _IC7CON2_SYNCSEL_MASK                    0x0000001F
#define _IC7CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC7CON2_TRIGSTAT_POSITION               0x00000006
#define _IC7CON2_TRIGSTAT_MASK                   0x00000040
#define _IC7CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC7CON2_ICTRIG_POSITION                 0x00000007
#define _IC7CON2_ICTRIG_MASK                     0x00000080
#define _IC7CON2_ICTRIG_LENGTH                   0x00000001

#define _IC7CON2_IC32_POSITION                   0x00000008
#define _IC7CON2_IC32_MASK                       0x00000100
#define _IC7CON2_IC32_LENGTH                     0x00000001

#define _IC7CON2_SYNCSEL0_POSITION               0x00000000
#define _IC7CON2_SYNCSEL0_MASK                   0x00000001
#define _IC7CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC7CON2_SYNCSEL1_POSITION               0x00000001
#define _IC7CON2_SYNCSEL1_MASK                   0x00000002
#define _IC7CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC7CON2_SYNCSEL2_POSITION               0x00000002
#define _IC7CON2_SYNCSEL2_MASK                   0x00000004
#define _IC7CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC7CON2_SYNCSEL3_POSITION               0x00000003
#define _IC7CON2_SYNCSEL3_MASK                   0x00000008
#define _IC7CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC7CON2_SYNCSEL4_POSITION               0x00000004
#define _IC7CON2_SYNCSEL4_MASK                   0x00000010
#define _IC7CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC1CON1_OCM_POSITION                    0x00000000
#define _OC1CON1_OCM_MASK                        0x00000007
#define _OC1CON1_OCM_LENGTH                      0x00000003

#define _OC1CON1_TRIGMODE_POSITION               0x00000003
#define _OC1CON1_TRIGMODE_MASK                   0x00000008
#define _OC1CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC1CON1_OCFLT_POSITION                  0x00000004
#define _OC1CON1_OCFLT_MASK                      0x00000070
#define _OC1CON1_OCFLT_LENGTH                    0x00000003

#define _OC1CON1_ENFLT_POSITION                  0x00000007
#define _OC1CON1_ENFLT_MASK                      0x00000380
#define _OC1CON1_ENFLT_LENGTH                    0x00000003

#define _OC1CON1_OCTSEL_POSITION                 0x0000000A
#define _OC1CON1_OCTSEL_MASK                     0x00001C00
#define _OC1CON1_OCTSEL_LENGTH                   0x00000003

#define _OC1CON1_OCSIDL_POSITION                 0x0000000D
#define _OC1CON1_OCSIDL_MASK                     0x00002000
#define _OC1CON1_OCSIDL_LENGTH                   0x00000001

#define _OC1CON1_OCM0_POSITION                   0x00000000
#define _OC1CON1_OCM0_MASK                       0x00000001
#define _OC1CON1_OCM0_LENGTH                     0x00000001

#define _OC1CON1_OCM1_POSITION                   0x00000001
#define _OC1CON1_OCM1_MASK                       0x00000002
#define _OC1CON1_OCM1_LENGTH                     0x00000001

#define _OC1CON1_OCM2_POSITION                   0x00000002
#define _OC1CON1_OCM2_MASK                       0x00000004
#define _OC1CON1_OCM2_LENGTH                     0x00000001

#define _OC1CON1_OCFLT0_POSITION                 0x00000004
#define _OC1CON1_OCFLT0_MASK                     0x00000010
#define _OC1CON1_OCFLT0_LENGTH                   0x00000001

#define _OC1CON1_OCFLT1_POSITION                 0x00000005
#define _OC1CON1_OCFLT1_MASK                     0x00000020
#define _OC1CON1_OCFLT1_LENGTH                   0x00000001

#define _OC1CON1_OCFLT2_POSITION                 0x00000006
#define _OC1CON1_OCFLT2_MASK                     0x00000040
#define _OC1CON1_OCFLT2_LENGTH                   0x00000001

#define _OC1CON1_ENFLT0_POSITION                 0x00000007
#define _OC1CON1_ENFLT0_MASK                     0x00000080
#define _OC1CON1_ENFLT0_LENGTH                   0x00000001

#define _OC1CON1_ENFLT1_POSITION                 0x00000008
#define _OC1CON1_ENFLT1_MASK                     0x00000100
#define _OC1CON1_ENFLT1_LENGTH                   0x00000001

#define _OC1CON1_ENFLT2_POSITION                 0x00000009
#define _OC1CON1_ENFLT2_MASK                     0x00000200
#define _OC1CON1_ENFLT2_LENGTH                   0x00000001

#define _OC1CON1_OCTSEL0_POSITION                0x0000000A
#define _OC1CON1_OCTSEL0_MASK                    0x00000400
#define _OC1CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL1_POSITION                0x0000000B
#define _OC1CON1_OCTSEL1_MASK                    0x00000800
#define _OC1CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL2_POSITION                0x0000000C
#define _OC1CON1_OCTSEL2_MASK                    0x00001000
#define _OC1CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC1CON2_SYNCSEL_POSITION                0x00000000
#define _OC1CON2_SYNCSEL_MASK                    0x0000001F
#define _OC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC1CON2_OCTRIS_POSITION                 0x00000005
#define _OC1CON2_OCTRIS_MASK                     0x00000020
#define _OC1CON2_OCTRIS_LENGTH                   0x00000001

#define _OC1CON2_TRIGSTAT_POSITION               0x00000006
#define _OC1CON2_TRIGSTAT_MASK                   0x00000040
#define _OC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC1CON2_OCTRIG_POSITION                 0x00000007
#define _OC1CON2_OCTRIG_MASK                     0x00000080
#define _OC1CON2_OCTRIG_LENGTH                   0x00000001

#define _OC1CON2_OC32_POSITION                   0x00000008
#define _OC1CON2_OC32_MASK                       0x00000100
#define _OC1CON2_OC32_LENGTH                     0x00000001

#define _OC1CON2_DCB_POSITION                    0x00000009
#define _OC1CON2_DCB_MASK                        0x00000600
#define _OC1CON2_DCB_LENGTH                      0x00000002

#define _OC1CON2_OCINV_POSITION                  0x0000000C
#define _OC1CON2_OCINV_MASK                      0x00001000
#define _OC1CON2_OCINV_LENGTH                    0x00000001

#define _OC1CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC1CON2_FLTTRIEN_MASK                   0x00002000
#define _OC1CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC1CON2_FLTOUT_POSITION                 0x0000000E
#define _OC1CON2_FLTOUT_MASK                     0x00004000
#define _OC1CON2_FLTOUT_LENGTH                   0x00000001

#define _OC1CON2_FLTMD_POSITION                  0x0000000F
#define _OC1CON2_FLTMD_MASK                      0x00008000
#define _OC1CON2_FLTMD_LENGTH                    0x00000001

#define _OC1CON2_SYNCSEL0_POSITION               0x00000000
#define _OC1CON2_SYNCSEL0_MASK                   0x00000001
#define _OC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL1_POSITION               0x00000001
#define _OC1CON2_SYNCSEL1_MASK                   0x00000002
#define _OC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL2_POSITION               0x00000002
#define _OC1CON2_SYNCSEL2_MASK                   0x00000004
#define _OC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL3_POSITION               0x00000003
#define _OC1CON2_SYNCSEL3_MASK                   0x00000008
#define _OC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL4_POSITION               0x00000004
#define _OC1CON2_SYNCSEL4_MASK                   0x00000010
#define _OC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC1CON2_DCB0_POSITION                   0x00000009
#define _OC1CON2_DCB0_MASK                       0x00000200
#define _OC1CON2_DCB0_LENGTH                     0x00000001

#define _OC1CON2_DCB1_POSITION                   0x0000000A
#define _OC1CON2_DCB1_MASK                       0x00000400
#define _OC1CON2_DCB1_LENGTH                     0x00000001

#define _OC1CON2_FLTMODE_POSITION                0x0000000F
#define _OC1CON2_FLTMODE_MASK                    0x00008000
#define _OC1CON2_FLTMODE_LENGTH                  0x00000001

#define _OC2CON1_OCM_POSITION                    0x00000000
#define _OC2CON1_OCM_MASK                        0x00000007
#define _OC2CON1_OCM_LENGTH                      0x00000003

#define _OC2CON1_TRIGMODE_POSITION               0x00000003
#define _OC2CON1_TRIGMODE_MASK                   0x00000008
#define _OC2CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC2CON1_OCFLT_POSITION                  0x00000004
#define _OC2CON1_OCFLT_MASK                      0x00000070
#define _OC2CON1_OCFLT_LENGTH                    0x00000003

#define _OC2CON1_ENFLT_POSITION                  0x00000007
#define _OC2CON1_ENFLT_MASK                      0x00000380
#define _OC2CON1_ENFLT_LENGTH                    0x00000003

#define _OC2CON1_OCTSEL_POSITION                 0x0000000A
#define _OC2CON1_OCTSEL_MASK                     0x00001C00
#define _OC2CON1_OCTSEL_LENGTH                   0x00000003

#define _OC2CON1_OCSIDL_POSITION                 0x0000000D
#define _OC2CON1_OCSIDL_MASK                     0x00002000
#define _OC2CON1_OCSIDL_LENGTH                   0x00000001

#define _OC2CON1_OCM0_POSITION                   0x00000000
#define _OC2CON1_OCM0_MASK                       0x00000001
#define _OC2CON1_OCM0_LENGTH                     0x00000001

#define _OC2CON1_OCM1_POSITION                   0x00000001
#define _OC2CON1_OCM1_MASK                       0x00000002
#define _OC2CON1_OCM1_LENGTH                     0x00000001

#define _OC2CON1_OCM2_POSITION                   0x00000002
#define _OC2CON1_OCM2_MASK                       0x00000004
#define _OC2CON1_OCM2_LENGTH                     0x00000001

#define _OC2CON1_OCFLT0_POSITION                 0x00000004
#define _OC2CON1_OCFLT0_MASK                     0x00000010
#define _OC2CON1_OCFLT0_LENGTH                   0x00000001

#define _OC2CON1_OCFLT1_POSITION                 0x00000005
#define _OC2CON1_OCFLT1_MASK                     0x00000020
#define _OC2CON1_OCFLT1_LENGTH                   0x00000001

#define _OC2CON1_OCFLT2_POSITION                 0x00000006
#define _OC2CON1_OCFLT2_MASK                     0x00000040
#define _OC2CON1_OCFLT2_LENGTH                   0x00000001

#define _OC2CON1_ENFLT0_POSITION                 0x00000007
#define _OC2CON1_ENFLT0_MASK                     0x00000080
#define _OC2CON1_ENFLT0_LENGTH                   0x00000001

#define _OC2CON1_ENFLT1_POSITION                 0x00000008
#define _OC2CON1_ENFLT1_MASK                     0x00000100
#define _OC2CON1_ENFLT1_LENGTH                   0x00000001

#define _OC2CON1_ENFLT2_POSITION                 0x00000009
#define _OC2CON1_ENFLT2_MASK                     0x00000200
#define _OC2CON1_ENFLT2_LENGTH                   0x00000001

#define _OC2CON1_OCTSEL0_POSITION                0x0000000A
#define _OC2CON1_OCTSEL0_MASK                    0x00000400
#define _OC2CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL1_POSITION                0x0000000B
#define _OC2CON1_OCTSEL1_MASK                    0x00000800
#define _OC2CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL2_POSITION                0x0000000C
#define _OC2CON1_OCTSEL2_MASK                    0x00001000
#define _OC2CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC2CON2_SYNCSEL_POSITION                0x00000000
#define _OC2CON2_SYNCSEL_MASK                    0x0000001F
#define _OC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC2CON2_OCTRIS_POSITION                 0x00000005
#define _OC2CON2_OCTRIS_MASK                     0x00000020
#define _OC2CON2_OCTRIS_LENGTH                   0x00000001

#define _OC2CON2_TRIGSTAT_POSITION               0x00000006
#define _OC2CON2_TRIGSTAT_MASK                   0x00000040
#define _OC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC2CON2_OCTRIG_POSITION                 0x00000007
#define _OC2CON2_OCTRIG_MASK                     0x00000080
#define _OC2CON2_OCTRIG_LENGTH                   0x00000001

#define _OC2CON2_OC32_POSITION                   0x00000008
#define _OC2CON2_OC32_MASK                       0x00000100
#define _OC2CON2_OC32_LENGTH                     0x00000001

#define _OC2CON2_DCB_POSITION                    0x00000009
#define _OC2CON2_DCB_MASK                        0x00000600
#define _OC2CON2_DCB_LENGTH                      0x00000002

#define _OC2CON2_OCINV_POSITION                  0x0000000C
#define _OC2CON2_OCINV_MASK                      0x00001000
#define _OC2CON2_OCINV_LENGTH                    0x00000001

#define _OC2CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC2CON2_FLTTRIEN_MASK                   0x00002000
#define _OC2CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC2CON2_FLTOUT_POSITION                 0x0000000E
#define _OC2CON2_FLTOUT_MASK                     0x00004000
#define _OC2CON2_FLTOUT_LENGTH                   0x00000001

#define _OC2CON2_FLTMD_POSITION                  0x0000000F
#define _OC2CON2_FLTMD_MASK                      0x00008000
#define _OC2CON2_FLTMD_LENGTH                    0x00000001

#define _OC2CON2_SYNCSEL0_POSITION               0x00000000
#define _OC2CON2_SYNCSEL0_MASK                   0x00000001
#define _OC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL1_POSITION               0x00000001
#define _OC2CON2_SYNCSEL1_MASK                   0x00000002
#define _OC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL2_POSITION               0x00000002
#define _OC2CON2_SYNCSEL2_MASK                   0x00000004
#define _OC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL3_POSITION               0x00000003
#define _OC2CON2_SYNCSEL3_MASK                   0x00000008
#define _OC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL4_POSITION               0x00000004
#define _OC2CON2_SYNCSEL4_MASK                   0x00000010
#define _OC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC2CON2_DCB0_POSITION                   0x00000009
#define _OC2CON2_DCB0_MASK                       0x00000200
#define _OC2CON2_DCB0_LENGTH                     0x00000001

#define _OC2CON2_DCB1_POSITION                   0x0000000A
#define _OC2CON2_DCB1_MASK                       0x00000400
#define _OC2CON2_DCB1_LENGTH                     0x00000001

#define _OC2CON2_FLTMODE_POSITION                0x0000000F
#define _OC2CON2_FLTMODE_MASK                    0x00008000
#define _OC2CON2_FLTMODE_LENGTH                  0x00000001

#define _OC3CON1_OCM_POSITION                    0x00000000
#define _OC3CON1_OCM_MASK                        0x00000007
#define _OC3CON1_OCM_LENGTH                      0x00000003

#define _OC3CON1_TRIGMODE_POSITION               0x00000003
#define _OC3CON1_TRIGMODE_MASK                   0x00000008
#define _OC3CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC3CON1_OCFLT_POSITION                  0x00000004
#define _OC3CON1_OCFLT_MASK                      0x00000070
#define _OC3CON1_OCFLT_LENGTH                    0x00000003

#define _OC3CON1_ENFLT_POSITION                  0x00000007
#define _OC3CON1_ENFLT_MASK                      0x00000380
#define _OC3CON1_ENFLT_LENGTH                    0x00000003

#define _OC3CON1_OCTSEL_POSITION                 0x0000000A
#define _OC3CON1_OCTSEL_MASK                     0x00001C00
#define _OC3CON1_OCTSEL_LENGTH                   0x00000003

#define _OC3CON1_OCSIDL_POSITION                 0x0000000D
#define _OC3CON1_OCSIDL_MASK                     0x00002000
#define _OC3CON1_OCSIDL_LENGTH                   0x00000001

#define _OC3CON1_OCM0_POSITION                   0x00000000
#define _OC3CON1_OCM0_MASK                       0x00000001
#define _OC3CON1_OCM0_LENGTH                     0x00000001

#define _OC3CON1_OCM1_POSITION                   0x00000001
#define _OC3CON1_OCM1_MASK                       0x00000002
#define _OC3CON1_OCM1_LENGTH                     0x00000001

#define _OC3CON1_OCM2_POSITION                   0x00000002
#define _OC3CON1_OCM2_MASK                       0x00000004
#define _OC3CON1_OCM2_LENGTH                     0x00000001

#define _OC3CON1_OCFLT0_POSITION                 0x00000004
#define _OC3CON1_OCFLT0_MASK                     0x00000010
#define _OC3CON1_OCFLT0_LENGTH                   0x00000001

#define _OC3CON1_OCFLT1_POSITION                 0x00000005
#define _OC3CON1_OCFLT1_MASK                     0x00000020
#define _OC3CON1_OCFLT1_LENGTH                   0x00000001

#define _OC3CON1_OCFLT2_POSITION                 0x00000006
#define _OC3CON1_OCFLT2_MASK                     0x00000040
#define _OC3CON1_OCFLT2_LENGTH                   0x00000001

#define _OC3CON1_ENFLT0_POSITION                 0x00000007
#define _OC3CON1_ENFLT0_MASK                     0x00000080
#define _OC3CON1_ENFLT0_LENGTH                   0x00000001

#define _OC3CON1_ENFLT1_POSITION                 0x00000008
#define _OC3CON1_ENFLT1_MASK                     0x00000100
#define _OC3CON1_ENFLT1_LENGTH                   0x00000001

#define _OC3CON1_ENFLT2_POSITION                 0x00000009
#define _OC3CON1_ENFLT2_MASK                     0x00000200
#define _OC3CON1_ENFLT2_LENGTH                   0x00000001

#define _OC3CON1_OCTSEL0_POSITION                0x0000000A
#define _OC3CON1_OCTSEL0_MASK                    0x00000400
#define _OC3CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL1_POSITION                0x0000000B
#define _OC3CON1_OCTSEL1_MASK                    0x00000800
#define _OC3CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL2_POSITION                0x0000000C
#define _OC3CON1_OCTSEL2_MASK                    0x00001000
#define _OC3CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC3CON2_SYNCSEL_POSITION                0x00000000
#define _OC3CON2_SYNCSEL_MASK                    0x0000001F
#define _OC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC3CON2_OCTRIS_POSITION                 0x00000005
#define _OC3CON2_OCTRIS_MASK                     0x00000020
#define _OC3CON2_OCTRIS_LENGTH                   0x00000001

#define _OC3CON2_TRIGSTAT_POSITION               0x00000006
#define _OC3CON2_TRIGSTAT_MASK                   0x00000040
#define _OC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC3CON2_OCTRIG_POSITION                 0x00000007
#define _OC3CON2_OCTRIG_MASK                     0x00000080
#define _OC3CON2_OCTRIG_LENGTH                   0x00000001

#define _OC3CON2_OC32_POSITION                   0x00000008
#define _OC3CON2_OC32_MASK                       0x00000100
#define _OC3CON2_OC32_LENGTH                     0x00000001

#define _OC3CON2_DCB_POSITION                    0x00000009
#define _OC3CON2_DCB_MASK                        0x00000600
#define _OC3CON2_DCB_LENGTH                      0x00000002

#define _OC3CON2_OCINV_POSITION                  0x0000000C
#define _OC3CON2_OCINV_MASK                      0x00001000
#define _OC3CON2_OCINV_LENGTH                    0x00000001

#define _OC3CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC3CON2_FLTTRIEN_MASK                   0x00002000
#define _OC3CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC3CON2_FLTOUT_POSITION                 0x0000000E
#define _OC3CON2_FLTOUT_MASK                     0x00004000
#define _OC3CON2_FLTOUT_LENGTH                   0x00000001

#define _OC3CON2_FLTMD_POSITION                  0x0000000F
#define _OC3CON2_FLTMD_MASK                      0x00008000
#define _OC3CON2_FLTMD_LENGTH                    0x00000001

#define _OC3CON2_SYNCSEL0_POSITION               0x00000000
#define _OC3CON2_SYNCSEL0_MASK                   0x00000001
#define _OC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL1_POSITION               0x00000001
#define _OC3CON2_SYNCSEL1_MASK                   0x00000002
#define _OC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL2_POSITION               0x00000002
#define _OC3CON2_SYNCSEL2_MASK                   0x00000004
#define _OC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL3_POSITION               0x00000003
#define _OC3CON2_SYNCSEL3_MASK                   0x00000008
#define _OC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL4_POSITION               0x00000004
#define _OC3CON2_SYNCSEL4_MASK                   0x00000010
#define _OC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC3CON2_DCB0_POSITION                   0x00000009
#define _OC3CON2_DCB0_MASK                       0x00000200
#define _OC3CON2_DCB0_LENGTH                     0x00000001

#define _OC3CON2_DCB1_POSITION                   0x0000000A
#define _OC3CON2_DCB1_MASK                       0x00000400
#define _OC3CON2_DCB1_LENGTH                     0x00000001

#define _OC3CON2_FLTMODE_POSITION                0x0000000F
#define _OC3CON2_FLTMODE_MASK                    0x00008000
#define _OC3CON2_FLTMODE_LENGTH                  0x00000001

#define _OC4CON1_OCM_POSITION                    0x00000000
#define _OC4CON1_OCM_MASK                        0x00000007
#define _OC4CON1_OCM_LENGTH                      0x00000003

#define _OC4CON1_TRIGMODE_POSITION               0x00000003
#define _OC4CON1_TRIGMODE_MASK                   0x00000008
#define _OC4CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC4CON1_OCFLT_POSITION                  0x00000004
#define _OC4CON1_OCFLT_MASK                      0x00000070
#define _OC4CON1_OCFLT_LENGTH                    0x00000003

#define _OC4CON1_ENFLT_POSITION                  0x00000007
#define _OC4CON1_ENFLT_MASK                      0x00000380
#define _OC4CON1_ENFLT_LENGTH                    0x00000003

#define _OC4CON1_OCTSEL_POSITION                 0x0000000A
#define _OC4CON1_OCTSEL_MASK                     0x00001C00
#define _OC4CON1_OCTSEL_LENGTH                   0x00000003

#define _OC4CON1_OCSIDL_POSITION                 0x0000000D
#define _OC4CON1_OCSIDL_MASK                     0x00002000
#define _OC4CON1_OCSIDL_LENGTH                   0x00000001

#define _OC4CON1_OCM0_POSITION                   0x00000000
#define _OC4CON1_OCM0_MASK                       0x00000001
#define _OC4CON1_OCM0_LENGTH                     0x00000001

#define _OC4CON1_OCM1_POSITION                   0x00000001
#define _OC4CON1_OCM1_MASK                       0x00000002
#define _OC4CON1_OCM1_LENGTH                     0x00000001

#define _OC4CON1_OCM2_POSITION                   0x00000002
#define _OC4CON1_OCM2_MASK                       0x00000004
#define _OC4CON1_OCM2_LENGTH                     0x00000001

#define _OC4CON1_OCFLT0_POSITION                 0x00000004
#define _OC4CON1_OCFLT0_MASK                     0x00000010
#define _OC4CON1_OCFLT0_LENGTH                   0x00000001

#define _OC4CON1_OCFLT1_POSITION                 0x00000005
#define _OC4CON1_OCFLT1_MASK                     0x00000020
#define _OC4CON1_OCFLT1_LENGTH                   0x00000001

#define _OC4CON1_OCFLT2_POSITION                 0x00000006
#define _OC4CON1_OCFLT2_MASK                     0x00000040
#define _OC4CON1_OCFLT2_LENGTH                   0x00000001

#define _OC4CON1_ENFLT0_POSITION                 0x00000007
#define _OC4CON1_ENFLT0_MASK                     0x00000080
#define _OC4CON1_ENFLT0_LENGTH                   0x00000001

#define _OC4CON1_ENFLT1_POSITION                 0x00000008
#define _OC4CON1_ENFLT1_MASK                     0x00000100
#define _OC4CON1_ENFLT1_LENGTH                   0x00000001

#define _OC4CON1_ENFLT2_POSITION                 0x00000009
#define _OC4CON1_ENFLT2_MASK                     0x00000200
#define _OC4CON1_ENFLT2_LENGTH                   0x00000001

#define _OC4CON1_OCTSEL0_POSITION                0x0000000A
#define _OC4CON1_OCTSEL0_MASK                    0x00000400
#define _OC4CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL1_POSITION                0x0000000B
#define _OC4CON1_OCTSEL1_MASK                    0x00000800
#define _OC4CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL2_POSITION                0x0000000C
#define _OC4CON1_OCTSEL2_MASK                    0x00001000
#define _OC4CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC4CON2_SYNCSEL_POSITION                0x00000000
#define _OC4CON2_SYNCSEL_MASK                    0x0000001F
#define _OC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC4CON2_OCTRIS_POSITION                 0x00000005
#define _OC4CON2_OCTRIS_MASK                     0x00000020
#define _OC4CON2_OCTRIS_LENGTH                   0x00000001

#define _OC4CON2_TRIGSTAT_POSITION               0x00000006
#define _OC4CON2_TRIGSTAT_MASK                   0x00000040
#define _OC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC4CON2_OCTRIG_POSITION                 0x00000007
#define _OC4CON2_OCTRIG_MASK                     0x00000080
#define _OC4CON2_OCTRIG_LENGTH                   0x00000001

#define _OC4CON2_OC32_POSITION                   0x00000008
#define _OC4CON2_OC32_MASK                       0x00000100
#define _OC4CON2_OC32_LENGTH                     0x00000001

#define _OC4CON2_DCB_POSITION                    0x00000009
#define _OC4CON2_DCB_MASK                        0x00000600
#define _OC4CON2_DCB_LENGTH                      0x00000002

#define _OC4CON2_OCINV_POSITION                  0x0000000C
#define _OC4CON2_OCINV_MASK                      0x00001000
#define _OC4CON2_OCINV_LENGTH                    0x00000001

#define _OC4CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC4CON2_FLTTRIEN_MASK                   0x00002000
#define _OC4CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC4CON2_FLTOUT_POSITION                 0x0000000E
#define _OC4CON2_FLTOUT_MASK                     0x00004000
#define _OC4CON2_FLTOUT_LENGTH                   0x00000001

#define _OC4CON2_FLTMD_POSITION                  0x0000000F
#define _OC4CON2_FLTMD_MASK                      0x00008000
#define _OC4CON2_FLTMD_LENGTH                    0x00000001

#define _OC4CON2_SYNCSEL0_POSITION               0x00000000
#define _OC4CON2_SYNCSEL0_MASK                   0x00000001
#define _OC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL1_POSITION               0x00000001
#define _OC4CON2_SYNCSEL1_MASK                   0x00000002
#define _OC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL2_POSITION               0x00000002
#define _OC4CON2_SYNCSEL2_MASK                   0x00000004
#define _OC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL3_POSITION               0x00000003
#define _OC4CON2_SYNCSEL3_MASK                   0x00000008
#define _OC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL4_POSITION               0x00000004
#define _OC4CON2_SYNCSEL4_MASK                   0x00000010
#define _OC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC4CON2_DCB0_POSITION                   0x00000009
#define _OC4CON2_DCB0_MASK                       0x00000200
#define _OC4CON2_DCB0_LENGTH                     0x00000001

#define _OC4CON2_DCB1_POSITION                   0x0000000A
#define _OC4CON2_DCB1_MASK                       0x00000400
#define _OC4CON2_DCB1_LENGTH                     0x00000001

#define _OC4CON2_FLTMODE_POSITION                0x0000000F
#define _OC4CON2_FLTMODE_MASK                    0x00008000
#define _OC4CON2_FLTMODE_LENGTH                  0x00000001

#define _OC5CON1_OCM_POSITION                    0x00000000
#define _OC5CON1_OCM_MASK                        0x00000007
#define _OC5CON1_OCM_LENGTH                      0x00000003

#define _OC5CON1_TRIGMODE_POSITION               0x00000003
#define _OC5CON1_TRIGMODE_MASK                   0x00000008
#define _OC5CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC5CON1_OCFLT_POSITION                  0x00000004
#define _OC5CON1_OCFLT_MASK                      0x00000070
#define _OC5CON1_OCFLT_LENGTH                    0x00000003

#define _OC5CON1_ENFLT_POSITION                  0x00000007
#define _OC5CON1_ENFLT_MASK                      0x00000380
#define _OC5CON1_ENFLT_LENGTH                    0x00000003

#define _OC5CON1_OCTSEL_POSITION                 0x0000000A
#define _OC5CON1_OCTSEL_MASK                     0x00001C00
#define _OC5CON1_OCTSEL_LENGTH                   0x00000003

#define _OC5CON1_OCSIDL_POSITION                 0x0000000D
#define _OC5CON1_OCSIDL_MASK                     0x00002000
#define _OC5CON1_OCSIDL_LENGTH                   0x00000001

#define _OC5CON1_OCM0_POSITION                   0x00000000
#define _OC5CON1_OCM0_MASK                       0x00000001
#define _OC5CON1_OCM0_LENGTH                     0x00000001

#define _OC5CON1_OCM1_POSITION                   0x00000001
#define _OC5CON1_OCM1_MASK                       0x00000002
#define _OC5CON1_OCM1_LENGTH                     0x00000001

#define _OC5CON1_OCM2_POSITION                   0x00000002
#define _OC5CON1_OCM2_MASK                       0x00000004
#define _OC5CON1_OCM2_LENGTH                     0x00000001

#define _OC5CON1_OCFLT0_POSITION                 0x00000004
#define _OC5CON1_OCFLT0_MASK                     0x00000010
#define _OC5CON1_OCFLT0_LENGTH                   0x00000001

#define _OC5CON1_OCFLT1_POSITION                 0x00000005
#define _OC5CON1_OCFLT1_MASK                     0x00000020
#define _OC5CON1_OCFLT1_LENGTH                   0x00000001

#define _OC5CON1_OCFLT2_POSITION                 0x00000006
#define _OC5CON1_OCFLT2_MASK                     0x00000040
#define _OC5CON1_OCFLT2_LENGTH                   0x00000001

#define _OC5CON1_ENFLT0_POSITION                 0x00000007
#define _OC5CON1_ENFLT0_MASK                     0x00000080
#define _OC5CON1_ENFLT0_LENGTH                   0x00000001

#define _OC5CON1_ENFLT1_POSITION                 0x00000008
#define _OC5CON1_ENFLT1_MASK                     0x00000100
#define _OC5CON1_ENFLT1_LENGTH                   0x00000001

#define _OC5CON1_ENFLT2_POSITION                 0x00000009
#define _OC5CON1_ENFLT2_MASK                     0x00000200
#define _OC5CON1_ENFLT2_LENGTH                   0x00000001

#define _OC5CON1_OCTSEL0_POSITION                0x0000000A
#define _OC5CON1_OCTSEL0_MASK                    0x00000400
#define _OC5CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC5CON1_OCTSEL1_POSITION                0x0000000B
#define _OC5CON1_OCTSEL1_MASK                    0x00000800
#define _OC5CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC5CON1_OCTSEL2_POSITION                0x0000000C
#define _OC5CON1_OCTSEL2_MASK                    0x00001000
#define _OC5CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC5CON2_SYNCSEL_POSITION                0x00000000
#define _OC5CON2_SYNCSEL_MASK                    0x0000001F
#define _OC5CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC5CON2_OCTRIS_POSITION                 0x00000005
#define _OC5CON2_OCTRIS_MASK                     0x00000020
#define _OC5CON2_OCTRIS_LENGTH                   0x00000001

#define _OC5CON2_TRIGSTAT_POSITION               0x00000006
#define _OC5CON2_TRIGSTAT_MASK                   0x00000040
#define _OC5CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC5CON2_OCTRIG_POSITION                 0x00000007
#define _OC5CON2_OCTRIG_MASK                     0x00000080
#define _OC5CON2_OCTRIG_LENGTH                   0x00000001

#define _OC5CON2_OC32_POSITION                   0x00000008
#define _OC5CON2_OC32_MASK                       0x00000100
#define _OC5CON2_OC32_LENGTH                     0x00000001

#define _OC5CON2_DCB_POSITION                    0x00000009
#define _OC5CON2_DCB_MASK                        0x00000600
#define _OC5CON2_DCB_LENGTH                      0x00000002

#define _OC5CON2_OCINV_POSITION                  0x0000000C
#define _OC5CON2_OCINV_MASK                      0x00001000
#define _OC5CON2_OCINV_LENGTH                    0x00000001

#define _OC5CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC5CON2_FLTTRIEN_MASK                   0x00002000
#define _OC5CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC5CON2_FLTOUT_POSITION                 0x0000000E
#define _OC5CON2_FLTOUT_MASK                     0x00004000
#define _OC5CON2_FLTOUT_LENGTH                   0x00000001

#define _OC5CON2_FLTMD_POSITION                  0x0000000F
#define _OC5CON2_FLTMD_MASK                      0x00008000
#define _OC5CON2_FLTMD_LENGTH                    0x00000001

#define _OC5CON2_SYNCSEL0_POSITION               0x00000000
#define _OC5CON2_SYNCSEL0_MASK                   0x00000001
#define _OC5CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC5CON2_SYNCSEL1_POSITION               0x00000001
#define _OC5CON2_SYNCSEL1_MASK                   0x00000002
#define _OC5CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC5CON2_SYNCSEL2_POSITION               0x00000002
#define _OC5CON2_SYNCSEL2_MASK                   0x00000004
#define _OC5CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC5CON2_SYNCSEL3_POSITION               0x00000003
#define _OC5CON2_SYNCSEL3_MASK                   0x00000008
#define _OC5CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC5CON2_SYNCSEL4_POSITION               0x00000004
#define _OC5CON2_SYNCSEL4_MASK                   0x00000010
#define _OC5CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC5CON2_DCB0_POSITION                   0x00000009
#define _OC5CON2_DCB0_MASK                       0x00000200
#define _OC5CON2_DCB0_LENGTH                     0x00000001

#define _OC5CON2_DCB1_POSITION                   0x0000000A
#define _OC5CON2_DCB1_MASK                       0x00000400
#define _OC5CON2_DCB1_LENGTH                     0x00000001

#define _OC5CON2_FLTMODE_POSITION                0x0000000F
#define _OC5CON2_FLTMODE_MASK                    0x00008000
#define _OC5CON2_FLTMODE_LENGTH                  0x00000001

#define _OC6CON1_OCM_POSITION                    0x00000000
#define _OC6CON1_OCM_MASK                        0x00000007
#define _OC6CON1_OCM_LENGTH                      0x00000003

#define _OC6CON1_TRIGMODE_POSITION               0x00000003
#define _OC6CON1_TRIGMODE_MASK                   0x00000008
#define _OC6CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC6CON1_OCFLT_POSITION                  0x00000004
#define _OC6CON1_OCFLT_MASK                      0x00000070
#define _OC6CON1_OCFLT_LENGTH                    0x00000003

#define _OC6CON1_ENFLT_POSITION                  0x00000007
#define _OC6CON1_ENFLT_MASK                      0x00000380
#define _OC6CON1_ENFLT_LENGTH                    0x00000003

#define _OC6CON1_OCTSEL_POSITION                 0x0000000A
#define _OC6CON1_OCTSEL_MASK                     0x00001C00
#define _OC6CON1_OCTSEL_LENGTH                   0x00000003

#define _OC6CON1_OCSIDL_POSITION                 0x0000000D
#define _OC6CON1_OCSIDL_MASK                     0x00002000
#define _OC6CON1_OCSIDL_LENGTH                   0x00000001

#define _OC6CON1_OCM0_POSITION                   0x00000000
#define _OC6CON1_OCM0_MASK                       0x00000001
#define _OC6CON1_OCM0_LENGTH                     0x00000001

#define _OC6CON1_OCM1_POSITION                   0x00000001
#define _OC6CON1_OCM1_MASK                       0x00000002
#define _OC6CON1_OCM1_LENGTH                     0x00000001

#define _OC6CON1_OCM2_POSITION                   0x00000002
#define _OC6CON1_OCM2_MASK                       0x00000004
#define _OC6CON1_OCM2_LENGTH                     0x00000001

#define _OC6CON1_OCFLT0_POSITION                 0x00000004
#define _OC6CON1_OCFLT0_MASK                     0x00000010
#define _OC6CON1_OCFLT0_LENGTH                   0x00000001

#define _OC6CON1_OCFLT1_POSITION                 0x00000005
#define _OC6CON1_OCFLT1_MASK                     0x00000020
#define _OC6CON1_OCFLT1_LENGTH                   0x00000001

#define _OC6CON1_OCFLT2_POSITION                 0x00000006
#define _OC6CON1_OCFLT2_MASK                     0x00000040
#define _OC6CON1_OCFLT2_LENGTH                   0x00000001

#define _OC6CON1_ENFLT0_POSITION                 0x00000007
#define _OC6CON1_ENFLT0_MASK                     0x00000080
#define _OC6CON1_ENFLT0_LENGTH                   0x00000001

#define _OC6CON1_ENFLT1_POSITION                 0x00000008
#define _OC6CON1_ENFLT1_MASK                     0x00000100
#define _OC6CON1_ENFLT1_LENGTH                   0x00000001

#define _OC6CON1_ENFLT2_POSITION                 0x00000009
#define _OC6CON1_ENFLT2_MASK                     0x00000200
#define _OC6CON1_ENFLT2_LENGTH                   0x00000001

#define _OC6CON1_OCTSEL0_POSITION                0x0000000A
#define _OC6CON1_OCTSEL0_MASK                    0x00000400
#define _OC6CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC6CON1_OCTSEL1_POSITION                0x0000000B
#define _OC6CON1_OCTSEL1_MASK                    0x00000800
#define _OC6CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC6CON1_OCTSEL2_POSITION                0x0000000C
#define _OC6CON1_OCTSEL2_MASK                    0x00001000
#define _OC6CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC6CON2_SYNCSEL_POSITION                0x00000000
#define _OC6CON2_SYNCSEL_MASK                    0x0000001F
#define _OC6CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC6CON2_OCTRIS_POSITION                 0x00000005
#define _OC6CON2_OCTRIS_MASK                     0x00000020
#define _OC6CON2_OCTRIS_LENGTH                   0x00000001

#define _OC6CON2_TRIGSTAT_POSITION               0x00000006
#define _OC6CON2_TRIGSTAT_MASK                   0x00000040
#define _OC6CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC6CON2_OCTRIG_POSITION                 0x00000007
#define _OC6CON2_OCTRIG_MASK                     0x00000080
#define _OC6CON2_OCTRIG_LENGTH                   0x00000001

#define _OC6CON2_OC32_POSITION                   0x00000008
#define _OC6CON2_OC32_MASK                       0x00000100
#define _OC6CON2_OC32_LENGTH                     0x00000001

#define _OC6CON2_DCB_POSITION                    0x00000009
#define _OC6CON2_DCB_MASK                        0x00000600
#define _OC6CON2_DCB_LENGTH                      0x00000002

#define _OC6CON2_OCINV_POSITION                  0x0000000C
#define _OC6CON2_OCINV_MASK                      0x00001000
#define _OC6CON2_OCINV_LENGTH                    0x00000001

#define _OC6CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC6CON2_FLTTRIEN_MASK                   0x00002000
#define _OC6CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC6CON2_FLTOUT_POSITION                 0x0000000E
#define _OC6CON2_FLTOUT_MASK                     0x00004000
#define _OC6CON2_FLTOUT_LENGTH                   0x00000001

#define _OC6CON2_FLTMD_POSITION                  0x0000000F
#define _OC6CON2_FLTMD_MASK                      0x00008000
#define _OC6CON2_FLTMD_LENGTH                    0x00000001

#define _OC6CON2_SYNCSEL0_POSITION               0x00000000
#define _OC6CON2_SYNCSEL0_MASK                   0x00000001
#define _OC6CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC6CON2_SYNCSEL1_POSITION               0x00000001
#define _OC6CON2_SYNCSEL1_MASK                   0x00000002
#define _OC6CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC6CON2_SYNCSEL2_POSITION               0x00000002
#define _OC6CON2_SYNCSEL2_MASK                   0x00000004
#define _OC6CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC6CON2_SYNCSEL3_POSITION               0x00000003
#define _OC6CON2_SYNCSEL3_MASK                   0x00000008
#define _OC6CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC6CON2_SYNCSEL4_POSITION               0x00000004
#define _OC6CON2_SYNCSEL4_MASK                   0x00000010
#define _OC6CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC6CON2_DCB0_POSITION                   0x00000009
#define _OC6CON2_DCB0_MASK                       0x00000200
#define _OC6CON2_DCB0_LENGTH                     0x00000001

#define _OC6CON2_DCB1_POSITION                   0x0000000A
#define _OC6CON2_DCB1_MASK                       0x00000400
#define _OC6CON2_DCB1_LENGTH                     0x00000001

#define _OC6CON2_FLTMODE_POSITION                0x0000000F
#define _OC6CON2_FLTMODE_MASK                    0x00008000
#define _OC6CON2_FLTMODE_LENGTH                  0x00000001

#define _OC7CON1_OCM_POSITION                    0x00000000
#define _OC7CON1_OCM_MASK                        0x00000007
#define _OC7CON1_OCM_LENGTH                      0x00000003

#define _OC7CON1_TRIGMODE_POSITION               0x00000003
#define _OC7CON1_TRIGMODE_MASK                   0x00000008
#define _OC7CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC7CON1_OCFLT_POSITION                  0x00000004
#define _OC7CON1_OCFLT_MASK                      0x00000070
#define _OC7CON1_OCFLT_LENGTH                    0x00000003

#define _OC7CON1_ENFLT_POSITION                  0x00000007
#define _OC7CON1_ENFLT_MASK                      0x00000380
#define _OC7CON1_ENFLT_LENGTH                    0x00000003

#define _OC7CON1_OCTSEL_POSITION                 0x0000000A
#define _OC7CON1_OCTSEL_MASK                     0x00001C00
#define _OC7CON1_OCTSEL_LENGTH                   0x00000003

#define _OC7CON1_OCSIDL_POSITION                 0x0000000D
#define _OC7CON1_OCSIDL_MASK                     0x00002000
#define _OC7CON1_OCSIDL_LENGTH                   0x00000001

#define _OC7CON1_OCM0_POSITION                   0x00000000
#define _OC7CON1_OCM0_MASK                       0x00000001
#define _OC7CON1_OCM0_LENGTH                     0x00000001

#define _OC7CON1_OCM1_POSITION                   0x00000001
#define _OC7CON1_OCM1_MASK                       0x00000002
#define _OC7CON1_OCM1_LENGTH                     0x00000001

#define _OC7CON1_OCM2_POSITION                   0x00000002
#define _OC7CON1_OCM2_MASK                       0x00000004
#define _OC7CON1_OCM2_LENGTH                     0x00000001

#define _OC7CON1_OCFLT0_POSITION                 0x00000004
#define _OC7CON1_OCFLT0_MASK                     0x00000010
#define _OC7CON1_OCFLT0_LENGTH                   0x00000001

#define _OC7CON1_OCFLT1_POSITION                 0x00000005
#define _OC7CON1_OCFLT1_MASK                     0x00000020
#define _OC7CON1_OCFLT1_LENGTH                   0x00000001

#define _OC7CON1_OCFLT2_POSITION                 0x00000006
#define _OC7CON1_OCFLT2_MASK                     0x00000040
#define _OC7CON1_OCFLT2_LENGTH                   0x00000001

#define _OC7CON1_ENFLT0_POSITION                 0x00000007
#define _OC7CON1_ENFLT0_MASK                     0x00000080
#define _OC7CON1_ENFLT0_LENGTH                   0x00000001

#define _OC7CON1_ENFLT1_POSITION                 0x00000008
#define _OC7CON1_ENFLT1_MASK                     0x00000100
#define _OC7CON1_ENFLT1_LENGTH                   0x00000001

#define _OC7CON1_ENFLT2_POSITION                 0x00000009
#define _OC7CON1_ENFLT2_MASK                     0x00000200
#define _OC7CON1_ENFLT2_LENGTH                   0x00000001

#define _OC7CON1_OCTSEL0_POSITION                0x0000000A
#define _OC7CON1_OCTSEL0_MASK                    0x00000400
#define _OC7CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC7CON1_OCTSEL1_POSITION                0x0000000B
#define _OC7CON1_OCTSEL1_MASK                    0x00000800
#define _OC7CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC7CON1_OCTSEL2_POSITION                0x0000000C
#define _OC7CON1_OCTSEL2_MASK                    0x00001000
#define _OC7CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC7CON2_SYNCSEL_POSITION                0x00000000
#define _OC7CON2_SYNCSEL_MASK                    0x0000001F
#define _OC7CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC7CON2_OCTRIS_POSITION                 0x00000005
#define _OC7CON2_OCTRIS_MASK                     0x00000020
#define _OC7CON2_OCTRIS_LENGTH                   0x00000001

#define _OC7CON2_TRIGSTAT_POSITION               0x00000006
#define _OC7CON2_TRIGSTAT_MASK                   0x00000040
#define _OC7CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC7CON2_OCTRIG_POSITION                 0x00000007
#define _OC7CON2_OCTRIG_MASK                     0x00000080
#define _OC7CON2_OCTRIG_LENGTH                   0x00000001

#define _OC7CON2_OC32_POSITION                   0x00000008
#define _OC7CON2_OC32_MASK                       0x00000100
#define _OC7CON2_OC32_LENGTH                     0x00000001

#define _OC7CON2_DCB_POSITION                    0x00000009
#define _OC7CON2_DCB_MASK                        0x00000600
#define _OC7CON2_DCB_LENGTH                      0x00000002

#define _OC7CON2_OCINV_POSITION                  0x0000000C
#define _OC7CON2_OCINV_MASK                      0x00001000
#define _OC7CON2_OCINV_LENGTH                    0x00000001

#define _OC7CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC7CON2_FLTTRIEN_MASK                   0x00002000
#define _OC7CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC7CON2_FLTOUT_POSITION                 0x0000000E
#define _OC7CON2_FLTOUT_MASK                     0x00004000
#define _OC7CON2_FLTOUT_LENGTH                   0x00000001

#define _OC7CON2_FLTMD_POSITION                  0x0000000F
#define _OC7CON2_FLTMD_MASK                      0x00008000
#define _OC7CON2_FLTMD_LENGTH                    0x00000001

#define _OC7CON2_SYNCSEL0_POSITION               0x00000000
#define _OC7CON2_SYNCSEL0_MASK                   0x00000001
#define _OC7CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC7CON2_SYNCSEL1_POSITION               0x00000001
#define _OC7CON2_SYNCSEL1_MASK                   0x00000002
#define _OC7CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC7CON2_SYNCSEL2_POSITION               0x00000002
#define _OC7CON2_SYNCSEL2_MASK                   0x00000004
#define _OC7CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC7CON2_SYNCSEL3_POSITION               0x00000003
#define _OC7CON2_SYNCSEL3_MASK                   0x00000008
#define _OC7CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC7CON2_SYNCSEL4_POSITION               0x00000004
#define _OC7CON2_SYNCSEL4_MASK                   0x00000010
#define _OC7CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC7CON2_DCB0_POSITION                   0x00000009
#define _OC7CON2_DCB0_MASK                       0x00000200
#define _OC7CON2_DCB0_LENGTH                     0x00000001

#define _OC7CON2_DCB1_POSITION                   0x0000000A
#define _OC7CON2_DCB1_MASK                       0x00000400
#define _OC7CON2_DCB1_LENGTH                     0x00000001

#define _OC7CON2_FLTMODE_POSITION                0x0000000F
#define _OC7CON2_FLTMODE_MASK                    0x00008000
#define _OC7CON2_FLTMODE_LENGTH                  0x00000001

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

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_NOT_W_POSITION               0x00000002
#define _I2C1STAT_R_NOT_W_MASK                   0x00000004
#define _I2C1STAT_R_NOT_W_LENGTH                 0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_NOT_A_POSITION               0x00000005
#define _I2C1STAT_D_NOT_A_MASK                   0x00000020
#define _I2C1STAT_D_NOT_A_LENGTH                 0x00000001

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

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_NOT_W_POSITION               0x00000002
#define _I2C2STAT_R_NOT_W_MASK                   0x00000004
#define _I2C2STAT_R_NOT_W_LENGTH                 0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_NOT_A_POSITION               0x00000005
#define _I2C2STAT_D_NOT_A_MASK                   0x00000020
#define _I2C2STAT_D_NOT_A_LENGTH                 0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

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

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

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

#define _U1STA_UTXISEL0_POSITION                 0x0000000D
#define _U1STA_UTXISEL0_MASK                     0x00002000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000E
#define _U1STA_UTXINV_MASK                       0x00004000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

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

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000D
#define _U2STA_UTXISEL0_MASK                     0x00002000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000E
#define _U2STA_UTXINV_MASK                       0x00004000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2TXREG_UTXREG0_POSITION                0x00000000
#define _U2TXREG_UTXREG0_MASK                    0x00000001
#define _U2TXREG_UTXREG0_LENGTH                  0x00000001

#define _U2TXREG_UTXREG1_POSITION                0x00000001
#define _U2TXREG_UTXREG1_MASK                    0x00000002
#define _U2TXREG_UTXREG1_LENGTH                  0x00000001

#define _U2TXREG_UTXREG2_POSITION                0x00000002
#define _U2TXREG_UTXREG2_MASK                    0x00000004
#define _U2TXREG_UTXREG2_LENGTH                  0x00000001

#define _U2TXREG_UTXREG3_POSITION                0x00000003
#define _U2TXREG_UTXREG3_MASK                    0x00000008
#define _U2TXREG_UTXREG3_LENGTH                  0x00000001

#define _U2TXREG_UTXREG4_POSITION                0x00000004
#define _U2TXREG_UTXREG4_MASK                    0x00000010
#define _U2TXREG_UTXREG4_LENGTH                  0x00000001

#define _U2TXREG_UTXREG5_POSITION                0x00000005
#define _U2TXREG_UTXREG5_MASK                    0x00000020
#define _U2TXREG_UTXREG5_LENGTH                  0x00000001

#define _U2TXREG_UTXREG6_POSITION                0x00000006
#define _U2TXREG_UTXREG6_MASK                    0x00000040
#define _U2TXREG_UTXREG6_LENGTH                  0x00000001

#define _U2TXREG_UTXREG7_POSITION                0x00000007
#define _U2TXREG_UTXREG7_MASK                    0x00000080
#define _U2TXREG_UTXREG7_LENGTH                  0x00000001

#define _U2TXREG_UTXREG8_POSITION                0x00000008
#define _U2TXREG_UTXREG8_MASK                    0x00000100
#define _U2TXREG_UTXREG8_LENGTH                  0x00000001

#define _U2RXREG_URXREG0_POSITION                0x00000000
#define _U2RXREG_URXREG0_MASK                    0x00000001
#define _U2RXREG_URXREG0_LENGTH                  0x00000001

#define _U2RXREG_URXREG1_POSITION                0x00000001
#define _U2RXREG_URXREG1_MASK                    0x00000002
#define _U2RXREG_URXREG1_LENGTH                  0x00000001

#define _U2RXREG_URXREG2_POSITION                0x00000002
#define _U2RXREG_URXREG2_MASK                    0x00000004
#define _U2RXREG_URXREG2_LENGTH                  0x00000001

#define _U2RXREG_URXREG3_POSITION                0x00000003
#define _U2RXREG_URXREG3_MASK                    0x00000008
#define _U2RXREG_URXREG3_LENGTH                  0x00000001

#define _U2RXREG_URXREG4_POSITION                0x00000004
#define _U2RXREG_URXREG4_MASK                    0x00000010
#define _U2RXREG_URXREG4_LENGTH                  0x00000001

#define _U2RXREG_URXREG5_POSITION                0x00000005
#define _U2RXREG_URXREG5_MASK                    0x00000020
#define _U2RXREG_URXREG5_LENGTH                  0x00000001

#define _U2RXREG_URXREG6_POSITION                0x00000006
#define _U2RXREG_URXREG6_MASK                    0x00000040
#define _U2RXREG_URXREG6_LENGTH                  0x00000001

#define _U2RXREG_URXREG7_POSITION                0x00000007
#define _U2RXREG_URXREG7_MASK                    0x00000080
#define _U2RXREG_URXREG7_LENGTH                  0x00000001

#define _U2RXREG_URXREG8_POSITION                0x00000008
#define _U2RXREG_URXREG8_MASK                    0x00000100
#define _U2RXREG_URXREG8_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SISEL_POSITION                 0x00000002
#define _SPI1STAT_SISEL_MASK                     0x0000001C
#define _SPI1STAT_SISEL_LENGTH                   0x00000003

#define _SPI1STAT_SRXMPT_POSITION                0x00000005
#define _SPI1STAT_SRXMPT_MASK                    0x00000020
#define _SPI1STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMPT_POSITION                 0x00000007
#define _SPI1STAT_SRMPT_MASK                     0x00000080
#define _SPI1STAT_SRMPT_LENGTH                   0x00000001

#define _SPI1STAT_SPIBEC_POSITION                0x00000008
#define _SPI1STAT_SPIBEC_MASK                    0x00000700
#define _SPI1STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1STAT_SISEL0_POSITION                0x00000002
#define _SPI1STAT_SISEL0_MASK                    0x00000004
#define _SPI1STAT_SISEL0_LENGTH                  0x00000001

#define _SPI1STAT_SISEL1_POSITION                0x00000003
#define _SPI1STAT_SISEL1_MASK                    0x00000008
#define _SPI1STAT_SISEL1_LENGTH                  0x00000001

#define _SPI1STAT_SISEL2_POSITION                0x00000004
#define _SPI1STAT_SISEL2_MASK                    0x00000010
#define _SPI1STAT_SISEL2_LENGTH                  0x00000001

#define _SPI1STAT_SPIBEC0_POSITION               0x00000008
#define _SPI1STAT_SPIBEC0_MASK                   0x00000100
#define _SPI1STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC1_POSITION               0x00000009
#define _SPI1STAT_SPIBEC1_MASK                   0x00000200
#define _SPI1STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI1STAT_SPIBEC2_MASK                   0x00000400
#define _SPI1STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI1CON1_PPRE_POSITION                  0x00000000
#define _SPI1CON1_PPRE_MASK                      0x00000003
#define _SPI1CON1_PPRE_LENGTH                    0x00000002

#define _SPI1CON1_SPRE_POSITION                  0x00000002
#define _SPI1CON1_SPRE_MASK                      0x0000001C
#define _SPI1CON1_SPRE_LENGTH                    0x00000003

#define _SPI1CON1_MSTEN_POSITION                 0x00000005
#define _SPI1CON1_MSTEN_MASK                     0x00000020
#define _SPI1CON1_MSTEN_LENGTH                   0x00000001

#define _SPI1CON1_CKP_POSITION                   0x00000006
#define _SPI1CON1_CKP_MASK                       0x00000040
#define _SPI1CON1_CKP_LENGTH                     0x00000001

#define _SPI1CON1_SSEN_POSITION                  0x00000007
#define _SPI1CON1_SSEN_MASK                      0x00000080
#define _SPI1CON1_SSEN_LENGTH                    0x00000001

#define _SPI1CON1_CKE_POSITION                   0x00000008
#define _SPI1CON1_CKE_MASK                       0x00000100
#define _SPI1CON1_CKE_LENGTH                     0x00000001

#define _SPI1CON1_SMP_POSITION                   0x00000009
#define _SPI1CON1_SMP_MASK                       0x00000200
#define _SPI1CON1_SMP_LENGTH                     0x00000001

#define _SPI1CON1_MODE16_POSITION                0x0000000A
#define _SPI1CON1_MODE16_MASK                    0x00000400
#define _SPI1CON1_MODE16_LENGTH                  0x00000001

#define _SPI1CON1_DISSDO_POSITION                0x0000000B
#define _SPI1CON1_DISSDO_MASK                    0x00000800
#define _SPI1CON1_DISSDO_LENGTH                  0x00000001

#define _SPI1CON1_DISSCK_POSITION                0x0000000C
#define _SPI1CON1_DISSCK_MASK                    0x00001000
#define _SPI1CON1_DISSCK_LENGTH                  0x00000001

#define _SPI1CON1_PPRE0_POSITION                 0x00000000
#define _SPI1CON1_PPRE0_MASK                     0x00000001
#define _SPI1CON1_PPRE0_LENGTH                   0x00000001

#define _SPI1CON1_PPRE1_POSITION                 0x00000001
#define _SPI1CON1_PPRE1_MASK                     0x00000002
#define _SPI1CON1_PPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE0_POSITION                 0x00000002
#define _SPI1CON1_SPRE0_MASK                     0x00000004
#define _SPI1CON1_SPRE0_LENGTH                   0x00000001

#define _SPI1CON1_SPRE1_POSITION                 0x00000003
#define _SPI1CON1_SPRE1_MASK                     0x00000008
#define _SPI1CON1_SPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE2_POSITION                 0x00000004
#define _SPI1CON1_SPRE2_MASK                     0x00000010
#define _SPI1CON1_SPRE2_LENGTH                   0x00000001

#define _SPI1CON2_SPIBEN_POSITION                0x00000000
#define _SPI1CON2_SPIBEN_MASK                    0x00000001
#define _SPI1CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI1CON2_SPIFE_POSITION                 0x00000001
#define _SPI1CON2_SPIFE_MASK                     0x00000002
#define _SPI1CON2_SPIFE_LENGTH                   0x00000001

#define _SPI1CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI1CON2_SPIFPOL_MASK                   0x00002000
#define _SPI1CON2_SPIFPOL_LENGTH                 0x00000001

#define _SPI1CON2_SPIFSD_POSITION                0x0000000E
#define _SPI1CON2_SPIFSD_MASK                    0x00004000
#define _SPI1CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI1CON2_FRMEN_POSITION                 0x0000000F
#define _SPI1CON2_FRMEN_MASK                     0x00008000
#define _SPI1CON2_FRMEN_LENGTH                   0x00000001

#define _U3MODE_STSEL_POSITION                   0x00000000
#define _U3MODE_STSEL_MASK                       0x00000001
#define _U3MODE_STSEL_LENGTH                     0x00000001

#define _U3MODE_PDSEL_POSITION                   0x00000001
#define _U3MODE_PDSEL_MASK                       0x00000006
#define _U3MODE_PDSEL_LENGTH                     0x00000002

#define _U3MODE_BRGH_POSITION                    0x00000003
#define _U3MODE_BRGH_MASK                        0x00000008
#define _U3MODE_BRGH_LENGTH                      0x00000001

#define _U3MODE_RXINV_POSITION                   0x00000004
#define _U3MODE_RXINV_MASK                       0x00000010
#define _U3MODE_RXINV_LENGTH                     0x00000001

#define _U3MODE_ABAUD_POSITION                   0x00000005
#define _U3MODE_ABAUD_MASK                       0x00000020
#define _U3MODE_ABAUD_LENGTH                     0x00000001

#define _U3MODE_LPBACK_POSITION                  0x00000006
#define _U3MODE_LPBACK_MASK                      0x00000040
#define _U3MODE_LPBACK_LENGTH                    0x00000001

#define _U3MODE_WAKE_POSITION                    0x00000007
#define _U3MODE_WAKE_MASK                        0x00000080
#define _U3MODE_WAKE_LENGTH                      0x00000001

#define _U3MODE_UEN_POSITION                     0x00000008
#define _U3MODE_UEN_MASK                         0x00000300
#define _U3MODE_UEN_LENGTH                       0x00000002

#define _U3MODE_RTSMD_POSITION                   0x0000000B
#define _U3MODE_RTSMD_MASK                       0x00000800
#define _U3MODE_RTSMD_LENGTH                     0x00000001

#define _U3MODE_IREN_POSITION                    0x0000000C
#define _U3MODE_IREN_MASK                        0x00001000
#define _U3MODE_IREN_LENGTH                      0x00000001

#define _U3MODE_USIDL_POSITION                   0x0000000D
#define _U3MODE_USIDL_MASK                       0x00002000
#define _U3MODE_USIDL_LENGTH                     0x00000001

#define _U3MODE_UARTEN_POSITION                  0x0000000F
#define _U3MODE_UARTEN_MASK                      0x00008000
#define _U3MODE_UARTEN_LENGTH                    0x00000001

#define _U3MODE_PDSEL0_POSITION                  0x00000001
#define _U3MODE_PDSEL0_MASK                      0x00000002
#define _U3MODE_PDSEL0_LENGTH                    0x00000001

#define _U3MODE_PDSEL1_POSITION                  0x00000002
#define _U3MODE_PDSEL1_MASK                      0x00000004
#define _U3MODE_PDSEL1_LENGTH                    0x00000001

#define _U3MODE_UEN0_POSITION                    0x00000008
#define _U3MODE_UEN0_MASK                        0x00000100
#define _U3MODE_UEN0_LENGTH                      0x00000001

#define _U3MODE_UEN1_POSITION                    0x00000009
#define _U3MODE_UEN1_MASK                        0x00000200
#define _U3MODE_UEN1_LENGTH                      0x00000001

#define _U3STA_URXDA_POSITION                    0x00000000
#define _U3STA_URXDA_MASK                        0x00000001
#define _U3STA_URXDA_LENGTH                      0x00000001

#define _U3STA_OERR_POSITION                     0x00000001
#define _U3STA_OERR_MASK                         0x00000002
#define _U3STA_OERR_LENGTH                       0x00000001

#define _U3STA_FERR_POSITION                     0x00000002
#define _U3STA_FERR_MASK                         0x00000004
#define _U3STA_FERR_LENGTH                       0x00000001

#define _U3STA_PERR_POSITION                     0x00000003
#define _U3STA_PERR_MASK                         0x00000008
#define _U3STA_PERR_LENGTH                       0x00000001

#define _U3STA_RIDLE_POSITION                    0x00000004
#define _U3STA_RIDLE_MASK                        0x00000010
#define _U3STA_RIDLE_LENGTH                      0x00000001

#define _U3STA_ADDEN_POSITION                    0x00000005
#define _U3STA_ADDEN_MASK                        0x00000020
#define _U3STA_ADDEN_LENGTH                      0x00000001

#define _U3STA_URXISEL_POSITION                  0x00000006
#define _U3STA_URXISEL_MASK                      0x000000C0
#define _U3STA_URXISEL_LENGTH                    0x00000002

#define _U3STA_TRMT_POSITION                     0x00000008
#define _U3STA_TRMT_MASK                         0x00000100
#define _U3STA_TRMT_LENGTH                       0x00000001

#define _U3STA_UTXBF_POSITION                    0x00000009
#define _U3STA_UTXBF_MASK                        0x00000200
#define _U3STA_UTXBF_LENGTH                      0x00000001

#define _U3STA_UTXEN_POSITION                    0x0000000A
#define _U3STA_UTXEN_MASK                        0x00000400
#define _U3STA_UTXEN_LENGTH                      0x00000001

#define _U3STA_UTXBRK_POSITION                   0x0000000B
#define _U3STA_UTXBRK_MASK                       0x00000800
#define _U3STA_UTXBRK_LENGTH                     0x00000001

#define _U3STA_UTXISEL0_POSITION                 0x0000000D
#define _U3STA_UTXISEL0_MASK                     0x00002000
#define _U3STA_UTXISEL0_LENGTH                   0x00000001

#define _U3STA_UTXINV_POSITION                   0x0000000E
#define _U3STA_UTXINV_MASK                       0x00004000
#define _U3STA_UTXINV_LENGTH                     0x00000001

#define _U3STA_UTXISEL1_POSITION                 0x0000000F
#define _U3STA_UTXISEL1_MASK                     0x00008000
#define _U3STA_UTXISEL1_LENGTH                   0x00000001

#define _U3STA_URXISEL0_POSITION                 0x00000006
#define _U3STA_URXISEL0_MASK                     0x00000040
#define _U3STA_URXISEL0_LENGTH                   0x00000001

#define _U3STA_URXISEL1_POSITION                 0x00000007
#define _U3STA_URXISEL1_MASK                     0x00000080
#define _U3STA_URXISEL1_LENGTH                   0x00000001

#define _U3TXREG_UTXREG0_POSITION                0x00000000
#define _U3TXREG_UTXREG0_MASK                    0x00000001
#define _U3TXREG_UTXREG0_LENGTH                  0x00000001

#define _U3TXREG_UTXREG1_POSITION                0x00000001
#define _U3TXREG_UTXREG1_MASK                    0x00000002
#define _U3TXREG_UTXREG1_LENGTH                  0x00000001

#define _U3TXREG_UTXREG2_POSITION                0x00000002
#define _U3TXREG_UTXREG2_MASK                    0x00000004
#define _U3TXREG_UTXREG2_LENGTH                  0x00000001

#define _U3TXREG_UTXREG3_POSITION                0x00000003
#define _U3TXREG_UTXREG3_MASK                    0x00000008
#define _U3TXREG_UTXREG3_LENGTH                  0x00000001

#define _U3TXREG_UTXREG4_POSITION                0x00000004
#define _U3TXREG_UTXREG4_MASK                    0x00000010
#define _U3TXREG_UTXREG4_LENGTH                  0x00000001

#define _U3TXREG_UTXREG5_POSITION                0x00000005
#define _U3TXREG_UTXREG5_MASK                    0x00000020
#define _U3TXREG_UTXREG5_LENGTH                  0x00000001

#define _U3TXREG_UTXREG6_POSITION                0x00000006
#define _U3TXREG_UTXREG6_MASK                    0x00000040
#define _U3TXREG_UTXREG6_LENGTH                  0x00000001

#define _U3TXREG_UTXREG7_POSITION                0x00000007
#define _U3TXREG_UTXREG7_MASK                    0x00000080
#define _U3TXREG_UTXREG7_LENGTH                  0x00000001

#define _U3TXREG_UTXREG8_POSITION                0x00000008
#define _U3TXREG_UTXREG8_MASK                    0x00000100
#define _U3TXREG_UTXREG8_LENGTH                  0x00000001

#define _U3RXREG_URXREG0_POSITION                0x00000000
#define _U3RXREG_URXREG0_MASK                    0x00000001
#define _U3RXREG_URXREG0_LENGTH                  0x00000001

#define _U3RXREG_URXREG1_POSITION                0x00000001
#define _U3RXREG_URXREG1_MASK                    0x00000002
#define _U3RXREG_URXREG1_LENGTH                  0x00000001

#define _U3RXREG_URXREG2_POSITION                0x00000002
#define _U3RXREG_URXREG2_MASK                    0x00000004
#define _U3RXREG_URXREG2_LENGTH                  0x00000001

#define _U3RXREG_URXREG3_POSITION                0x00000003
#define _U3RXREG_URXREG3_MASK                    0x00000008
#define _U3RXREG_URXREG3_LENGTH                  0x00000001

#define _U3RXREG_URXREG4_POSITION                0x00000004
#define _U3RXREG_URXREG4_MASK                    0x00000010
#define _U3RXREG_URXREG4_LENGTH                  0x00000001

#define _U3RXREG_URXREG5_POSITION                0x00000005
#define _U3RXREG_URXREG5_MASK                    0x00000020
#define _U3RXREG_URXREG5_LENGTH                  0x00000001

#define _U3RXREG_URXREG6_POSITION                0x00000006
#define _U3RXREG_URXREG6_MASK                    0x00000040
#define _U3RXREG_URXREG6_LENGTH                  0x00000001

#define _U3RXREG_URXREG7_POSITION                0x00000007
#define _U3RXREG_URXREG7_MASK                    0x00000080
#define _U3RXREG_URXREG7_LENGTH                  0x00000001

#define _U3RXREG_URXREG8_POSITION                0x00000008
#define _U3RXREG_URXREG8_MASK                    0x00000100
#define _U3RXREG_URXREG8_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SISEL_POSITION                 0x00000002
#define _SPI2STAT_SISEL_MASK                     0x0000001C
#define _SPI2STAT_SISEL_LENGTH                   0x00000003

#define _SPI2STAT_SRXMPT_POSITION                0x00000005
#define _SPI2STAT_SRXMPT_MASK                    0x00000020
#define _SPI2STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMPT_POSITION                 0x00000007
#define _SPI2STAT_SRMPT_MASK                     0x00000080
#define _SPI2STAT_SRMPT_LENGTH                   0x00000001

#define _SPI2STAT_SPIBEC_POSITION                0x00000008
#define _SPI2STAT_SPIBEC_MASK                    0x00000700
#define _SPI2STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2STAT_SISEL0_POSITION                0x00000002
#define _SPI2STAT_SISEL0_MASK                    0x00000004
#define _SPI2STAT_SISEL0_LENGTH                  0x00000001

#define _SPI2STAT_SISEL1_POSITION                0x00000003
#define _SPI2STAT_SISEL1_MASK                    0x00000008
#define _SPI2STAT_SISEL1_LENGTH                  0x00000001

#define _SPI2STAT_SISEL2_POSITION                0x00000004
#define _SPI2STAT_SISEL2_MASK                    0x00000010
#define _SPI2STAT_SISEL2_LENGTH                  0x00000001

#define _SPI2STAT_SPIBEC0_POSITION               0x00000008
#define _SPI2STAT_SPIBEC0_MASK                   0x00000100
#define _SPI2STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC1_POSITION               0x00000009
#define _SPI2STAT_SPIBEC1_MASK                   0x00000200
#define _SPI2STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI2STAT_SPIBEC2_MASK                   0x00000400
#define _SPI2STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI2CON1_PPRE_POSITION                  0x00000000
#define _SPI2CON1_PPRE_MASK                      0x00000003
#define _SPI2CON1_PPRE_LENGTH                    0x00000002

#define _SPI2CON1_SPRE_POSITION                  0x00000002
#define _SPI2CON1_SPRE_MASK                      0x0000001C
#define _SPI2CON1_SPRE_LENGTH                    0x00000003

#define _SPI2CON1_MSTEN_POSITION                 0x00000005
#define _SPI2CON1_MSTEN_MASK                     0x00000020
#define _SPI2CON1_MSTEN_LENGTH                   0x00000001

#define _SPI2CON1_CKP_POSITION                   0x00000006
#define _SPI2CON1_CKP_MASK                       0x00000040
#define _SPI2CON1_CKP_LENGTH                     0x00000001

#define _SPI2CON1_SSEN_POSITION                  0x00000007
#define _SPI2CON1_SSEN_MASK                      0x00000080
#define _SPI2CON1_SSEN_LENGTH                    0x00000001

#define _SPI2CON1_CKE_POSITION                   0x00000008
#define _SPI2CON1_CKE_MASK                       0x00000100
#define _SPI2CON1_CKE_LENGTH                     0x00000001

#define _SPI2CON1_SMP_POSITION                   0x00000009
#define _SPI2CON1_SMP_MASK                       0x00000200
#define _SPI2CON1_SMP_LENGTH                     0x00000001

#define _SPI2CON1_MODE16_POSITION                0x0000000A
#define _SPI2CON1_MODE16_MASK                    0x00000400
#define _SPI2CON1_MODE16_LENGTH                  0x00000001

#define _SPI2CON1_DISSDO_POSITION                0x0000000B
#define _SPI2CON1_DISSDO_MASK                    0x00000800
#define _SPI2CON1_DISSDO_LENGTH                  0x00000001

#define _SPI2CON1_DISSCK_POSITION                0x0000000C
#define _SPI2CON1_DISSCK_MASK                    0x00001000
#define _SPI2CON1_DISSCK_LENGTH                  0x00000001

#define _SPI2CON1_PPRE0_POSITION                 0x00000000
#define _SPI2CON1_PPRE0_MASK                     0x00000001
#define _SPI2CON1_PPRE0_LENGTH                   0x00000001

#define _SPI2CON1_PPRE1_POSITION                 0x00000001
#define _SPI2CON1_PPRE1_MASK                     0x00000002
#define _SPI2CON1_PPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE0_POSITION                 0x00000002
#define _SPI2CON1_SPRE0_MASK                     0x00000004
#define _SPI2CON1_SPRE0_LENGTH                   0x00000001

#define _SPI2CON1_SPRE1_POSITION                 0x00000003
#define _SPI2CON1_SPRE1_MASK                     0x00000008
#define _SPI2CON1_SPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE2_POSITION                 0x00000004
#define _SPI2CON1_SPRE2_MASK                     0x00000010
#define _SPI2CON1_SPRE2_LENGTH                   0x00000001

#define _SPI2CON2_SPIBEN_POSITION                0x00000000
#define _SPI2CON2_SPIBEN_MASK                    0x00000001
#define _SPI2CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI2CON2_SPIFE_POSITION                 0x00000001
#define _SPI2CON2_SPIFE_MASK                     0x00000002
#define _SPI2CON2_SPIFE_LENGTH                   0x00000001

#define _SPI2CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI2CON2_SPIFPOL_MASK                   0x00002000
#define _SPI2CON2_SPIFPOL_LENGTH                 0x00000001

#define _SPI2CON2_SPIFSD_POSITION                0x0000000E
#define _SPI2CON2_SPIFSD_MASK                    0x00004000
#define _SPI2CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI2CON2_FRMEN_POSITION                 0x0000000F
#define _SPI2CON2_FRMEN_MASK                     0x00008000
#define _SPI2CON2_FRMEN_LENGTH                   0x00000001

#define _U4MODE_STSEL_POSITION                   0x00000000
#define _U4MODE_STSEL_MASK                       0x00000001
#define _U4MODE_STSEL_LENGTH                     0x00000001

#define _U4MODE_PDSEL_POSITION                   0x00000001
#define _U4MODE_PDSEL_MASK                       0x00000006
#define _U4MODE_PDSEL_LENGTH                     0x00000002

#define _U4MODE_BRGH_POSITION                    0x00000003
#define _U4MODE_BRGH_MASK                        0x00000008
#define _U4MODE_BRGH_LENGTH                      0x00000001

#define _U4MODE_RXINV_POSITION                   0x00000004
#define _U4MODE_RXINV_MASK                       0x00000010
#define _U4MODE_RXINV_LENGTH                     0x00000001

#define _U4MODE_ABAUD_POSITION                   0x00000005
#define _U4MODE_ABAUD_MASK                       0x00000020
#define _U4MODE_ABAUD_LENGTH                     0x00000001

#define _U4MODE_LPBACK_POSITION                  0x00000006
#define _U4MODE_LPBACK_MASK                      0x00000040
#define _U4MODE_LPBACK_LENGTH                    0x00000001

#define _U4MODE_WAKE_POSITION                    0x00000007
#define _U4MODE_WAKE_MASK                        0x00000080
#define _U4MODE_WAKE_LENGTH                      0x00000001

#define _U4MODE_UEN_POSITION                     0x00000008
#define _U4MODE_UEN_MASK                         0x00000300
#define _U4MODE_UEN_LENGTH                       0x00000002

#define _U4MODE_RTSMD_POSITION                   0x0000000B
#define _U4MODE_RTSMD_MASK                       0x00000800
#define _U4MODE_RTSMD_LENGTH                     0x00000001

#define _U4MODE_IREN_POSITION                    0x0000000C
#define _U4MODE_IREN_MASK                        0x00001000
#define _U4MODE_IREN_LENGTH                      0x00000001

#define _U4MODE_USIDL_POSITION                   0x0000000D
#define _U4MODE_USIDL_MASK                       0x00002000
#define _U4MODE_USIDL_LENGTH                     0x00000001

#define _U4MODE_UARTEN_POSITION                  0x0000000F
#define _U4MODE_UARTEN_MASK                      0x00008000
#define _U4MODE_UARTEN_LENGTH                    0x00000001

#define _U4MODE_PDSEL0_POSITION                  0x00000001
#define _U4MODE_PDSEL0_MASK                      0x00000002
#define _U4MODE_PDSEL0_LENGTH                    0x00000001

#define _U4MODE_PDSEL1_POSITION                  0x00000002
#define _U4MODE_PDSEL1_MASK                      0x00000004
#define _U4MODE_PDSEL1_LENGTH                    0x00000001

#define _U4MODE_UEN0_POSITION                    0x00000008
#define _U4MODE_UEN0_MASK                        0x00000100
#define _U4MODE_UEN0_LENGTH                      0x00000001

#define _U4MODE_UEN1_POSITION                    0x00000009
#define _U4MODE_UEN1_MASK                        0x00000200
#define _U4MODE_UEN1_LENGTH                      0x00000001

#define _U4STA_URXDA_POSITION                    0x00000000
#define _U4STA_URXDA_MASK                        0x00000001
#define _U4STA_URXDA_LENGTH                      0x00000001

#define _U4STA_OERR_POSITION                     0x00000001
#define _U4STA_OERR_MASK                         0x00000002
#define _U4STA_OERR_LENGTH                       0x00000001

#define _U4STA_FERR_POSITION                     0x00000002
#define _U4STA_FERR_MASK                         0x00000004
#define _U4STA_FERR_LENGTH                       0x00000001

#define _U4STA_PERR_POSITION                     0x00000003
#define _U4STA_PERR_MASK                         0x00000008
#define _U4STA_PERR_LENGTH                       0x00000001

#define _U4STA_RIDLE_POSITION                    0x00000004
#define _U4STA_RIDLE_MASK                        0x00000010
#define _U4STA_RIDLE_LENGTH                      0x00000001

#define _U4STA_ADDEN_POSITION                    0x00000005
#define _U4STA_ADDEN_MASK                        0x00000020
#define _U4STA_ADDEN_LENGTH                      0x00000001

#define _U4STA_URXISEL_POSITION                  0x00000006
#define _U4STA_URXISEL_MASK                      0x000000C0
#define _U4STA_URXISEL_LENGTH                    0x00000002

#define _U4STA_TRMT_POSITION                     0x00000008
#define _U4STA_TRMT_MASK                         0x00000100
#define _U4STA_TRMT_LENGTH                       0x00000001

#define _U4STA_UTXBF_POSITION                    0x00000009
#define _U4STA_UTXBF_MASK                        0x00000200
#define _U4STA_UTXBF_LENGTH                      0x00000001

#define _U4STA_UTXEN_POSITION                    0x0000000A
#define _U4STA_UTXEN_MASK                        0x00000400
#define _U4STA_UTXEN_LENGTH                      0x00000001

#define _U4STA_UTXBRK_POSITION                   0x0000000B
#define _U4STA_UTXBRK_MASK                       0x00000800
#define _U4STA_UTXBRK_LENGTH                     0x00000001

#define _U4STA_UTXISEL0_POSITION                 0x0000000D
#define _U4STA_UTXISEL0_MASK                     0x00002000
#define _U4STA_UTXISEL0_LENGTH                   0x00000001

#define _U4STA_UTXINV_POSITION                   0x0000000E
#define _U4STA_UTXINV_MASK                       0x00004000
#define _U4STA_UTXINV_LENGTH                     0x00000001

#define _U4STA_UTXISEL1_POSITION                 0x0000000F
#define _U4STA_UTXISEL1_MASK                     0x00008000
#define _U4STA_UTXISEL1_LENGTH                   0x00000001

#define _U4STA_URXISEL0_POSITION                 0x00000006
#define _U4STA_URXISEL0_MASK                     0x00000040
#define _U4STA_URXISEL0_LENGTH                   0x00000001

#define _U4STA_URXISEL1_POSITION                 0x00000007
#define _U4STA_URXISEL1_MASK                     0x00000080
#define _U4STA_URXISEL1_LENGTH                   0x00000001

#define _U4TXREG_UTXREG0_POSITION                0x00000000
#define _U4TXREG_UTXREG0_MASK                    0x00000001
#define _U4TXREG_UTXREG0_LENGTH                  0x00000001

#define _U4TXREG_UTXREG1_POSITION                0x00000001
#define _U4TXREG_UTXREG1_MASK                    0x00000002
#define _U4TXREG_UTXREG1_LENGTH                  0x00000001

#define _U4TXREG_UTXREG2_POSITION                0x00000002
#define _U4TXREG_UTXREG2_MASK                    0x00000004
#define _U4TXREG_UTXREG2_LENGTH                  0x00000001

#define _U4TXREG_UTXREG3_POSITION                0x00000003
#define _U4TXREG_UTXREG3_MASK                    0x00000008
#define _U4TXREG_UTXREG3_LENGTH                  0x00000001

#define _U4TXREG_UTXREG4_POSITION                0x00000004
#define _U4TXREG_UTXREG4_MASK                    0x00000010
#define _U4TXREG_UTXREG4_LENGTH                  0x00000001

#define _U4TXREG_UTXREG5_POSITION                0x00000005
#define _U4TXREG_UTXREG5_MASK                    0x00000020
#define _U4TXREG_UTXREG5_LENGTH                  0x00000001

#define _U4TXREG_UTXREG6_POSITION                0x00000006
#define _U4TXREG_UTXREG6_MASK                    0x00000040
#define _U4TXREG_UTXREG6_LENGTH                  0x00000001

#define _U4TXREG_UTXREG7_POSITION                0x00000007
#define _U4TXREG_UTXREG7_MASK                    0x00000080
#define _U4TXREG_UTXREG7_LENGTH                  0x00000001

#define _U4TXREG_UTXREG8_POSITION                0x00000008
#define _U4TXREG_UTXREG8_MASK                    0x00000100
#define _U4TXREG_UTXREG8_LENGTH                  0x00000001

#define _U4RXREG_URXREG0_POSITION                0x00000000
#define _U4RXREG_URXREG0_MASK                    0x00000001
#define _U4RXREG_URXREG0_LENGTH                  0x00000001

#define _U4RXREG_URXREG1_POSITION                0x00000001
#define _U4RXREG_URXREG1_MASK                    0x00000002
#define _U4RXREG_URXREG1_LENGTH                  0x00000001

#define _U4RXREG_URXREG2_POSITION                0x00000002
#define _U4RXREG_URXREG2_MASK                    0x00000004
#define _U4RXREG_URXREG2_LENGTH                  0x00000001

#define _U4RXREG_URXREG3_POSITION                0x00000003
#define _U4RXREG_URXREG3_MASK                    0x00000008
#define _U4RXREG_URXREG3_LENGTH                  0x00000001

#define _U4RXREG_URXREG4_POSITION                0x00000004
#define _U4RXREG_URXREG4_MASK                    0x00000010
#define _U4RXREG_URXREG4_LENGTH                  0x00000001

#define _U4RXREG_URXREG5_POSITION                0x00000005
#define _U4RXREG_URXREG5_MASK                    0x00000020
#define _U4RXREG_URXREG5_LENGTH                  0x00000001

#define _U4RXREG_URXREG6_POSITION                0x00000006
#define _U4RXREG_URXREG6_MASK                    0x00000040
#define _U4RXREG_URXREG6_LENGTH                  0x00000001

#define _U4RXREG_URXREG7_POSITION                0x00000007
#define _U4RXREG_URXREG7_MASK                    0x00000080
#define _U4RXREG_URXREG7_LENGTH                  0x00000001

#define _U4RXREG_URXREG8_POSITION                0x00000008
#define _U4RXREG_URXREG8_MASK                    0x00000100
#define _U4RXREG_URXREG8_LENGTH                  0x00000001

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

#define _ODCB_ODB0_POSITION                      0x00000000
#define _ODCB_ODB0_MASK                          0x00000001
#define _ODCB_ODB0_LENGTH                        0x00000001

#define _ODCB_ODB1_POSITION                      0x00000001
#define _ODCB_ODB1_MASK                          0x00000002
#define _ODCB_ODB1_LENGTH                        0x00000001

#define _ODCB_ODB2_POSITION                      0x00000002
#define _ODCB_ODB2_MASK                          0x00000004
#define _ODCB_ODB2_LENGTH                        0x00000001

#define _ODCB_ODB3_POSITION                      0x00000003
#define _ODCB_ODB3_MASK                          0x00000008
#define _ODCB_ODB3_LENGTH                        0x00000001

#define _ODCB_ODB4_POSITION                      0x00000004
#define _ODCB_ODB4_MASK                          0x00000010
#define _ODCB_ODB4_LENGTH                        0x00000001

#define _ODCB_ODB5_POSITION                      0x00000005
#define _ODCB_ODB5_MASK                          0x00000020
#define _ODCB_ODB5_LENGTH                        0x00000001

#define _ODCB_ODB6_POSITION                      0x00000006
#define _ODCB_ODB6_MASK                          0x00000040
#define _ODCB_ODB6_LENGTH                        0x00000001

#define _ODCB_ODB7_POSITION                      0x00000007
#define _ODCB_ODB7_MASK                          0x00000080
#define _ODCB_ODB7_LENGTH                        0x00000001

#define _ODCB_ODB8_POSITION                      0x00000008
#define _ODCB_ODB8_MASK                          0x00000100
#define _ODCB_ODB8_LENGTH                        0x00000001

#define _ODCB_ODB9_POSITION                      0x00000009
#define _ODCB_ODB9_MASK                          0x00000200
#define _ODCB_ODB9_LENGTH                        0x00000001

#define _ODCB_ODB10_POSITION                     0x0000000A
#define _ODCB_ODB10_MASK                         0x00000400
#define _ODCB_ODB10_LENGTH                       0x00000001

#define _ODCB_ODB11_POSITION                     0x0000000B
#define _ODCB_ODB11_MASK                         0x00000800
#define _ODCB_ODB11_LENGTH                       0x00000001

#define _ODCB_ODB12_POSITION                     0x0000000C
#define _ODCB_ODB12_MASK                         0x00001000
#define _ODCB_ODB12_LENGTH                       0x00000001

#define _ODCB_ODB13_POSITION                     0x0000000D
#define _ODCB_ODB13_MASK                         0x00002000
#define _ODCB_ODB13_LENGTH                       0x00000001

#define _ODCB_ODB14_POSITION                     0x0000000E
#define _ODCB_ODB14_MASK                         0x00004000
#define _ODCB_ODB14_LENGTH                       0x00000001

#define _ODCB_ODB15_POSITION                     0x0000000F
#define _ODCB_ODB15_MASK                         0x00008000
#define _ODCB_ODB15_LENGTH                       0x00000001

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _ODCC_ODC12_POSITION                     0x0000000C
#define _ODCC_ODC12_MASK                         0x00001000
#define _ODCC_ODC12_LENGTH                       0x00000001

#define _ODCC_ODC13_POSITION                     0x0000000D
#define _ODCC_ODC13_MASK                         0x00002000
#define _ODCC_ODC13_LENGTH                       0x00000001

#define _ODCC_ODC14_POSITION                     0x0000000E
#define _ODCC_ODC14_MASK                         0x00004000
#define _ODCC_ODC14_LENGTH                       0x00000001

#define _ODCC_ODC15_POSITION                     0x0000000F
#define _ODCC_ODC15_MASK                         0x00008000
#define _ODCC_ODC15_LENGTH                       0x00000001

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

#define _ODCD_ODD0_POSITION                      0x00000000
#define _ODCD_ODD0_MASK                          0x00000001
#define _ODCD_ODD0_LENGTH                        0x00000001

#define _ODCD_ODD1_POSITION                      0x00000001
#define _ODCD_ODD1_MASK                          0x00000002
#define _ODCD_ODD1_LENGTH                        0x00000001

#define _ODCD_ODD2_POSITION                      0x00000002
#define _ODCD_ODD2_MASK                          0x00000004
#define _ODCD_ODD2_LENGTH                        0x00000001

#define _ODCD_ODD3_POSITION                      0x00000003
#define _ODCD_ODD3_MASK                          0x00000008
#define _ODCD_ODD3_LENGTH                        0x00000001

#define _ODCD_ODD4_POSITION                      0x00000004
#define _ODCD_ODD4_MASK                          0x00000010
#define _ODCD_ODD4_LENGTH                        0x00000001

#define _ODCD_ODD5_POSITION                      0x00000005
#define _ODCD_ODD5_MASK                          0x00000020
#define _ODCD_ODD5_LENGTH                        0x00000001

#define _ODCD_ODD6_POSITION                      0x00000006
#define _ODCD_ODD6_MASK                          0x00000040
#define _ODCD_ODD6_LENGTH                        0x00000001

#define _ODCD_ODD7_POSITION                      0x00000007
#define _ODCD_ODD7_MASK                          0x00000080
#define _ODCD_ODD7_LENGTH                        0x00000001

#define _ODCD_ODD8_POSITION                      0x00000008
#define _ODCD_ODD8_MASK                          0x00000100
#define _ODCD_ODD8_LENGTH                        0x00000001

#define _ODCD_ODD9_POSITION                      0x00000009
#define _ODCD_ODD9_MASK                          0x00000200
#define _ODCD_ODD9_LENGTH                        0x00000001

#define _ODCD_ODD10_POSITION                     0x0000000A
#define _ODCD_ODD10_MASK                         0x00000400
#define _ODCD_ODD10_LENGTH                       0x00000001

#define _ODCD_ODD11_POSITION                     0x0000000B
#define _ODCD_ODD11_MASK                         0x00000800
#define _ODCD_ODD11_LENGTH                       0x00000001

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

#define _ODCE_ODE0_POSITION                      0x00000000
#define _ODCE_ODE0_MASK                          0x00000001
#define _ODCE_ODE0_LENGTH                        0x00000001

#define _ODCE_ODE1_POSITION                      0x00000001
#define _ODCE_ODE1_MASK                          0x00000002
#define _ODCE_ODE1_LENGTH                        0x00000001

#define _ODCE_ODE2_POSITION                      0x00000002
#define _ODCE_ODE2_MASK                          0x00000004
#define _ODCE_ODE2_LENGTH                        0x00000001

#define _ODCE_ODE3_POSITION                      0x00000003
#define _ODCE_ODE3_MASK                          0x00000008
#define _ODCE_ODE3_LENGTH                        0x00000001

#define _ODCE_ODE4_POSITION                      0x00000004
#define _ODCE_ODE4_MASK                          0x00000010
#define _ODCE_ODE4_LENGTH                        0x00000001

#define _ODCE_ODE5_POSITION                      0x00000005
#define _ODCE_ODE5_MASK                          0x00000020
#define _ODCE_ODE5_LENGTH                        0x00000001

#define _ODCE_ODE6_POSITION                      0x00000006
#define _ODCE_ODE6_MASK                          0x00000040
#define _ODCE_ODE6_LENGTH                        0x00000001

#define _ODCE_ODE7_POSITION                      0x00000007
#define _ODCE_ODE7_MASK                          0x00000080
#define _ODCE_ODE7_LENGTH                        0x00000001

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

#define _ODCF_ODF0_POSITION                      0x00000000
#define _ODCF_ODF0_MASK                          0x00000001
#define _ODCF_ODF0_LENGTH                        0x00000001

#define _ODCF_ODF1_POSITION                      0x00000001
#define _ODCF_ODF1_MASK                          0x00000002
#define _ODCF_ODF1_LENGTH                        0x00000001

#define _ODCF_ODF2_POSITION                      0x00000002
#define _ODCF_ODF2_MASK                          0x00000004
#define _ODCF_ODF2_LENGTH                        0x00000001

#define _ODCF_ODF3_POSITION                      0x00000003
#define _ODCF_ODF3_MASK                          0x00000008
#define _ODCF_ODF3_LENGTH                        0x00000001

#define _ODCF_ODF4_POSITION                      0x00000004
#define _ODCF_ODF4_MASK                          0x00000010
#define _ODCF_ODF4_LENGTH                        0x00000001

#define _ODCF_ODF5_POSITION                      0x00000005
#define _ODCF_ODF5_MASK                          0x00000020
#define _ODCF_ODF5_LENGTH                        0x00000001

#define _ODCF_ODF6_POSITION                      0x00000006
#define _ODCF_ODF6_MASK                          0x00000040
#define _ODCF_ODF6_LENGTH                        0x00000001

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

#define _ODCG_ODG2_POSITION                      0x00000002
#define _ODCG_ODG2_MASK                          0x00000004
#define _ODCG_ODG2_LENGTH                        0x00000001

#define _ODCG_ODG3_POSITION                      0x00000003
#define _ODCG_ODG3_MASK                          0x00000008
#define _ODCG_ODG3_LENGTH                        0x00000001

#define _ODCG_ODG6_POSITION                      0x00000006
#define _ODCG_ODG6_MASK                          0x00000040
#define _ODCG_ODG6_LENGTH                        0x00000001

#define _ODCG_ODG7_POSITION                      0x00000007
#define _ODCG_ODG7_MASK                          0x00000080
#define _ODCG_ODG7_LENGTH                        0x00000001

#define _ODCG_ODG8_POSITION                      0x00000008
#define _ODCG_ODG8_MASK                          0x00000100
#define _ODCG_ODG8_LENGTH                        0x00000001

#define _ODCG_ODG9_POSITION                      0x00000009
#define _ODCG_ODG9_MASK                          0x00000200
#define _ODCG_ODG9_LENGTH                        0x00000001

#define _PADCFG1_PMPTTL_POSITION                 0x00000000
#define _PADCFG1_PMPTTL_MASK                     0x00000001
#define _PADCFG1_PMPTTL_LENGTH                   0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_MODE12_POSITION                 0x0000000A
#define _AD1CON1_MODE12_MASK                     0x00000400
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_DMAEN_POSITION                  0x0000000B
#define _AD1CON1_DMAEN_MASK                      0x00000800
#define _AD1CON1_DMAEN_LENGTH                    0x00000001

#define _AD1CON1_DMABM_POSITION                  0x0000000C
#define _AD1CON1_DMABM_MASK                      0x00001000
#define _AD1CON1_DMABM_LENGTH                    0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000004
#define _AD1CON1_SSRC0_MASK                      0x00000010
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000005
#define _AD1CON1_SSRC1_MASK                      0x00000020
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000006
#define _AD1CON1_SSRC2_MASK                      0x00000040
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_SSRC3_POSITION                  0x00000007
#define _AD1CON1_SSRC3_MASK                      0x00000080
#define _AD1CON1_SSRC3_LENGTH                    0x00000001

#define _AD1CON1_FORM0_POSITION                  0x00000008
#define _AD1CON1_FORM0_MASK                      0x00000100
#define _AD1CON1_FORM0_LENGTH                    0x00000001

#define _AD1CON1_FORM1_POSITION                  0x00000009
#define _AD1CON1_FORM1_MASK                      0x00000200
#define _AD1CON1_FORM1_LENGTH                    0x00000001

#define _AD1CON2_ALTS_POSITION                   0x00000000
#define _AD1CON2_ALTS_MASK                       0x00000001
#define _AD1CON2_ALTS_LENGTH                     0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_NVCFG0_POSITION                 0x0000000D
#define _AD1CON2_NVCFG0_MASK                     0x00002000
#define _AD1CON2_NVCFG0_LENGTH                   0x00000001

#define _AD1CON2_PVCFG_POSITION                  0x0000000E
#define _AD1CON2_PVCFG_MASK                      0x0000C000
#define _AD1CON2_PVCFG_LENGTH                    0x00000002

#define _AD1CON2_SMPI0_POSITION                  0x00000002
#define _AD1CON2_SMPI0_MASK                      0x00000004
#define _AD1CON2_SMPI0_LENGTH                    0x00000001

#define _AD1CON2_SMPI1_POSITION                  0x00000003
#define _AD1CON2_SMPI1_MASK                      0x00000008
#define _AD1CON2_SMPI1_LENGTH                    0x00000001

#define _AD1CON2_SMPI2_POSITION                  0x00000004
#define _AD1CON2_SMPI2_MASK                      0x00000010
#define _AD1CON2_SMPI2_LENGTH                    0x00000001

#define _AD1CON2_SMPI3_POSITION                  0x00000005
#define _AD1CON2_SMPI3_MASK                      0x00000020
#define _AD1CON2_SMPI3_LENGTH                    0x00000001

#define _AD1CON2_SMPI4_POSITION                  0x00000006
#define _AD1CON2_SMPI4_MASK                      0x00000040
#define _AD1CON2_SMPI4_LENGTH                    0x00000001

#define _AD1CON2_PCVFG0_POSITION                 0x0000000E
#define _AD1CON2_PCVFG0_MASK                     0x00004000
#define _AD1CON2_PCVFG0_LENGTH                   0x00000001

#define _AD1CON2_PCVFG1_POSITION                 0x0000000F
#define _AD1CON2_PCVFG1_MASK                     0x00008000
#define _AD1CON2_PCVFG1_LENGTH                   0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_PUMPEN_POSITION                 0x0000000D
#define _AD1CON3_PUMPEN_MASK                     0x00002000
#define _AD1CON3_PUMPEN_LENGTH                   0x00000001

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_ADCS0_POSITION                  0x00000000
#define _AD1CON3_ADCS0_MASK                      0x00000001
#define _AD1CON3_ADCS0_LENGTH                    0x00000001

#define _AD1CON3_ADCS1_POSITION                  0x00000001
#define _AD1CON3_ADCS1_MASK                      0x00000002
#define _AD1CON3_ADCS1_LENGTH                    0x00000001

#define _AD1CON3_ADCS2_POSITION                  0x00000002
#define _AD1CON3_ADCS2_MASK                      0x00000004
#define _AD1CON3_ADCS2_LENGTH                    0x00000001

#define _AD1CON3_ADCS3_POSITION                  0x00000003
#define _AD1CON3_ADCS3_MASK                      0x00000008
#define _AD1CON3_ADCS3_LENGTH                    0x00000001

#define _AD1CON3_ADCS4_POSITION                  0x00000004
#define _AD1CON3_ADCS4_MASK                      0x00000010
#define _AD1CON3_ADCS4_LENGTH                    0x00000001

#define _AD1CON3_ADCS5_POSITION                  0x00000005
#define _AD1CON3_ADCS5_MASK                      0x00000020
#define _AD1CON3_ADCS5_LENGTH                    0x00000001

#define _AD1CON3_ADCS6_POSITION                  0x00000006
#define _AD1CON3_ADCS6_MASK                      0x00000040
#define _AD1CON3_ADCS6_LENGTH                    0x00000001

#define _AD1CON3_ADCS7_POSITION                  0x00000007
#define _AD1CON3_ADCS7_MASK                      0x00000080
#define _AD1CON3_ADCS7_LENGTH                    0x00000001

#define _AD1CON3_SAMC0_POSITION                  0x00000008
#define _AD1CON3_SAMC0_MASK                      0x00000100
#define _AD1CON3_SAMC0_LENGTH                    0x00000001

#define _AD1CON3_SAMC1_POSITION                  0x00000009
#define _AD1CON3_SAMC1_MASK                      0x00000200
#define _AD1CON3_SAMC1_LENGTH                    0x00000001

#define _AD1CON3_SAMC2_POSITION                  0x0000000A
#define _AD1CON3_SAMC2_MASK                      0x00000400
#define _AD1CON3_SAMC2_LENGTH                    0x00000001

#define _AD1CON3_SAMC3_POSITION                  0x0000000B
#define _AD1CON3_SAMC3_MASK                      0x00000800
#define _AD1CON3_SAMC3_LENGTH                    0x00000001

#define _AD1CON3_SAMC4_POSITION                  0x0000000C
#define _AD1CON3_SAMC4_MASK                      0x00001000
#define _AD1CON3_SAMC4_LENGTH                    0x00000001

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00001F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000005

#define _AD1CHS_CH0NB_POSITION                   0x0000000D
#define _AD1CHS_CH0NB_MASK                       0x0000E000
#define _AD1CHS_CH0NB_LENGTH                     0x00000003

#define _AD1CHS_CH0SA0_POSITION                  0x00000000
#define _AD1CHS_CH0SA0_MASK                      0x00000001
#define _AD1CHS_CH0SA0_LENGTH                    0x00000001

#define _AD1CHS_CH0SA1_POSITION                  0x00000001
#define _AD1CHS_CH0SA1_MASK                      0x00000002
#define _AD1CHS_CH0SA1_LENGTH                    0x00000001

#define _AD1CHS_CH0SA2_POSITION                  0x00000002
#define _AD1CHS_CH0SA2_MASK                      0x00000004
#define _AD1CHS_CH0SA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SA3_POSITION                  0x00000003
#define _AD1CHS_CH0SA3_MASK                      0x00000008
#define _AD1CHS_CH0SA3_LENGTH                    0x00000001

#define _AD1CHS_CH0SA4_POSITION                  0x00000004
#define _AD1CHS_CH0SA4_MASK                      0x00000010
#define _AD1CHS_CH0SA4_LENGTH                    0x00000001

#define _AD1CHS_CH0NA0_POSITION                  0x00000005
#define _AD1CHS_CH0NA0_MASK                      0x00000020
#define _AD1CHS_CH0NA0_LENGTH                    0x00000001

#define _AD1CHS_CH0NA1_POSITION                  0x00000006
#define _AD1CHS_CH0NA1_MASK                      0x00000040
#define _AD1CHS_CH0NA1_LENGTH                    0x00000001

#define _AD1CHS_CH0NA2_POSITION                  0x00000007
#define _AD1CHS_CH0NA2_MASK                      0x00000080
#define _AD1CHS_CH0NA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB0_POSITION                  0x00000008
#define _AD1CHS_CH0SB0_MASK                      0x00000100
#define _AD1CHS_CH0SB0_LENGTH                    0x00000001

#define _AD1CHS_CH0SB1_POSITION                  0x00000009
#define _AD1CHS_CH0SB1_MASK                      0x00000200
#define _AD1CHS_CH0SB1_LENGTH                    0x00000001

#define _AD1CHS_CH0SB2_POSITION                  0x0000000A
#define _AD1CHS_CH0SB2_MASK                      0x00000400
#define _AD1CHS_CH0SB2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB3_POSITION                  0x0000000B
#define _AD1CHS_CH0SB3_MASK                      0x00000800
#define _AD1CHS_CH0SB3_LENGTH                    0x00000001

#define _AD1CHS_CH0SB4_POSITION                  0x0000000C
#define _AD1CHS_CH0SB4_MASK                      0x00001000
#define _AD1CHS_CH0SB4_LENGTH                    0x00000001

#define _AD1CHS_CH0NB0_POSITION                  0x0000000D
#define _AD1CHS_CH0NB0_MASK                      0x00002000
#define _AD1CHS_CH0NB0_LENGTH                    0x00000001

#define _AD1CHS_CH0NB1_POSITION                  0x0000000E
#define _AD1CHS_CH0NB1_MASK                      0x00004000
#define _AD1CHS_CH0NB1_LENGTH                    0x00000001

#define _AD1CHS_CH0NB2_POSITION                  0x0000000F
#define _AD1CHS_CH0NB2_MASK                      0x00008000
#define _AD1CHS_CH0NB2_LENGTH                    0x00000001

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000005
#define _AD1CHS0_CH0NA_MASK                      0x000000E0
#define _AD1CHS0_CH0NA_LENGTH                    0x00000003

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000D
#define _AD1CHS0_CH0NB_MASK                      0x0000E000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000003

#define _AD1CHS0_CH0SA0_POSITION                 0x00000000
#define _AD1CHS0_CH0SA0_MASK                     0x00000001
#define _AD1CHS0_CH0SA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA1_POSITION                 0x00000001
#define _AD1CHS0_CH0SA1_MASK                     0x00000002
#define _AD1CHS0_CH0SA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA2_POSITION                 0x00000002
#define _AD1CHS0_CH0SA2_MASK                     0x00000004
#define _AD1CHS0_CH0SA2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA3_POSITION                 0x00000003
#define _AD1CHS0_CH0SA3_MASK                     0x00000008
#define _AD1CHS0_CH0SA3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA4_POSITION                 0x00000004
#define _AD1CHS0_CH0SA4_MASK                     0x00000010
#define _AD1CHS0_CH0SA4_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA0_POSITION                 0x00000005
#define _AD1CHS0_CH0NA0_MASK                     0x00000020
#define _AD1CHS0_CH0NA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA1_POSITION                 0x00000006
#define _AD1CHS0_CH0NA1_MASK                     0x00000040
#define _AD1CHS0_CH0NA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA2_POSITION                 0x00000007
#define _AD1CHS0_CH0NA2_MASK                     0x00000080
#define _AD1CHS0_CH0NA2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB0_POSITION                 0x00000008
#define _AD1CHS0_CH0SB0_MASK                     0x00000100
#define _AD1CHS0_CH0SB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB1_POSITION                 0x00000009
#define _AD1CHS0_CH0SB1_MASK                     0x00000200
#define _AD1CHS0_CH0SB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB2_POSITION                 0x0000000A
#define _AD1CHS0_CH0SB2_MASK                     0x00000400
#define _AD1CHS0_CH0SB2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB3_POSITION                 0x0000000B
#define _AD1CHS0_CH0SB3_MASK                     0x00000800
#define _AD1CHS0_CH0SB3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB4_POSITION                 0x0000000C
#define _AD1CHS0_CH0SB4_MASK                     0x00001000
#define _AD1CHS0_CH0SB4_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB0_POSITION                 0x0000000D
#define _AD1CHS0_CH0NB0_MASK                     0x00002000
#define _AD1CHS0_CH0NB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB1_POSITION                 0x0000000E
#define _AD1CHS0_CH0NB1_MASK                     0x00004000
#define _AD1CHS0_CH0NB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB2_POSITION                 0x0000000F
#define _AD1CHS0_CH0NB2_MASK                     0x00008000
#define _AD1CHS0_CH0NB2_LENGTH                   0x00000001

#define _AD1CSSH_CSS16_POSITION                  0x00000000
#define _AD1CSSH_CSS16_MASK                      0x00000001
#define _AD1CSSH_CSS16_LENGTH                    0x00000001

#define _AD1CSSH_CSS17_POSITION                  0x00000001
#define _AD1CSSH_CSS17_MASK                      0x00000002
#define _AD1CSSH_CSS17_LENGTH                    0x00000001

#define _AD1CSSH_CSS18_POSITION                  0x00000002
#define _AD1CSSH_CSS18_MASK                      0x00000004
#define _AD1CSSH_CSS18_LENGTH                    0x00000001

#define _AD1CSSH_CSS19_POSITION                  0x00000003
#define _AD1CSSH_CSS19_MASK                      0x00000008
#define _AD1CSSH_CSS19_LENGTH                    0x00000001

#define _AD1CSSH_CSS20_POSITION                  0x00000004
#define _AD1CSSH_CSS20_MASK                      0x00000010
#define _AD1CSSH_CSS20_LENGTH                    0x00000001

#define _AD1CSSH_CSS21_POSITION                  0x00000005
#define _AD1CSSH_CSS21_MASK                      0x00000020
#define _AD1CSSH_CSS21_LENGTH                    0x00000001

#define _AD1CSSH_CSS22_POSITION                  0x00000006
#define _AD1CSSH_CSS22_MASK                      0x00000040
#define _AD1CSSH_CSS22_LENGTH                    0x00000001

#define _AD1CSSH_CSS23_POSITION                  0x00000007
#define _AD1CSSH_CSS23_MASK                      0x00000080
#define _AD1CSSH_CSS23_LENGTH                    0x00000001

#define _AD1CSSH_CSS24_POSITION                  0x00000008
#define _AD1CSSH_CSS24_MASK                      0x00000100
#define _AD1CSSH_CSS24_LENGTH                    0x00000001

#define _AD1CSSH_CSS25_POSITION                  0x00000009
#define _AD1CSSH_CSS25_MASK                      0x00000200
#define _AD1CSSH_CSS25_LENGTH                    0x00000001

#define _AD1CSSH_CSS26_POSITION                  0x0000000A
#define _AD1CSSH_CSS26_MASK                      0x00000400
#define _AD1CSSH_CSS26_LENGTH                    0x00000001

#define _AD1CSSH_CSS27_POSITION                  0x0000000B
#define _AD1CSSH_CSS27_MASK                      0x00000800
#define _AD1CSSH_CSS27_LENGTH                    0x00000001

#define _AD1CSSH_CSS28_POSITION                  0x0000000C
#define _AD1CSSH_CSS28_MASK                      0x00001000
#define _AD1CSSH_CSS28_LENGTH                    0x00000001

#define _AD1CSSH_CSS29_POSITION                  0x0000000D
#define _AD1CSSH_CSS29_MASK                      0x00002000
#define _AD1CSSH_CSS29_LENGTH                    0x00000001

#define _AD1CSSH_CSS30_POSITION                  0x0000000E
#define _AD1CSSH_CSS30_MASK                      0x00004000
#define _AD1CSSH_CSS30_LENGTH                    0x00000001

#define _AD1CSSL_CSS0_POSITION                   0x00000000
#define _AD1CSSL_CSS0_MASK                       0x00000001
#define _AD1CSSL_CSS0_LENGTH                     0x00000001

#define _AD1CSSL_CSS1_POSITION                   0x00000001
#define _AD1CSSL_CSS1_MASK                       0x00000002
#define _AD1CSSL_CSS1_LENGTH                     0x00000001

#define _AD1CSSL_CSS2_POSITION                   0x00000002
#define _AD1CSSL_CSS2_MASK                       0x00000004
#define _AD1CSSL_CSS2_LENGTH                     0x00000001

#define _AD1CSSL_CSS3_POSITION                   0x00000003
#define _AD1CSSL_CSS3_MASK                       0x00000008
#define _AD1CSSL_CSS3_LENGTH                     0x00000001

#define _AD1CSSL_CSS4_POSITION                   0x00000004
#define _AD1CSSL_CSS4_MASK                       0x00000010
#define _AD1CSSL_CSS4_LENGTH                     0x00000001

#define _AD1CSSL_CSS5_POSITION                   0x00000005
#define _AD1CSSL_CSS5_MASK                       0x00000020
#define _AD1CSSL_CSS5_LENGTH                     0x00000001

#define _AD1CSSL_CSS6_POSITION                   0x00000006
#define _AD1CSSL_CSS6_MASK                       0x00000040
#define _AD1CSSL_CSS6_LENGTH                     0x00000001

#define _AD1CSSL_CSS7_POSITION                   0x00000007
#define _AD1CSSL_CSS7_MASK                       0x00000080
#define _AD1CSSL_CSS7_LENGTH                     0x00000001

#define _AD1CSSL_CSS8_POSITION                   0x00000008
#define _AD1CSSL_CSS8_MASK                       0x00000100
#define _AD1CSSL_CSS8_LENGTH                     0x00000001

#define _AD1CSSL_CSS9_POSITION                   0x00000009
#define _AD1CSSL_CSS9_MASK                       0x00000200
#define _AD1CSSL_CSS9_LENGTH                     0x00000001

#define _AD1CSSL_CSS10_POSITION                  0x0000000A
#define _AD1CSSL_CSS10_MASK                      0x00000400
#define _AD1CSSL_CSS10_LENGTH                    0x00000001

#define _AD1CSSL_CSS11_POSITION                  0x0000000B
#define _AD1CSSL_CSS11_MASK                      0x00000800
#define _AD1CSSL_CSS11_LENGTH                    0x00000001

#define _AD1CSSL_CSS12_POSITION                  0x0000000C
#define _AD1CSSL_CSS12_MASK                      0x00001000
#define _AD1CSSL_CSS12_LENGTH                    0x00000001

#define _AD1CSSL_CSS13_POSITION                  0x0000000D
#define _AD1CSSL_CSS13_MASK                      0x00002000
#define _AD1CSSL_CSS13_LENGTH                    0x00000001

#define _AD1CSSL_CSS14_POSITION                  0x0000000E
#define _AD1CSSL_CSS14_MASK                      0x00004000
#define _AD1CSSL_CSS14_LENGTH                    0x00000001

#define _AD1CSSL_CSS15_POSITION                  0x0000000F
#define _AD1CSSL_CSS15_MASK                      0x00008000
#define _AD1CSSL_CSS15_LENGTH                    0x00000001

#define _AD1CON4_DMABL_POSITION                  0x00000000
#define _AD1CON4_DMABL_MASK                      0x00000007
#define _AD1CON4_DMABL_LENGTH                    0x00000003

#define _AD1CON4_DMABL0_POSITION                 0x00000000
#define _AD1CON4_DMABL0_MASK                     0x00000001
#define _AD1CON4_DMABL0_LENGTH                   0x00000001

#define _AD1CON4_DMABL1_POSITION                 0x00000001
#define _AD1CON4_DMABL1_MASK                     0x00000002
#define _AD1CON4_DMABL1_LENGTH                   0x00000001

#define _AD1CON4_DMABL2_POSITION                 0x00000002
#define _AD1CON4_DMABL2_MASK                     0x00000004
#define _AD1CON4_DMABL2_LENGTH                   0x00000001

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_CTMREQ_POSITION                 0x0000000D
#define _AD1CON5_CTMREQ_MASK                     0x00002000
#define _AD1CON5_CTMREQ_LENGTH                   0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CON5_CM0_POSITION                    0x00000000
#define _AD1CON5_CM0_MASK                        0x00000001
#define _AD1CON5_CM0_LENGTH                      0x00000001

#define _AD1CON5_CM1_POSITION                    0x00000001
#define _AD1CON5_CM1_MASK                        0x00000002
#define _AD1CON5_CM1_LENGTH                      0x00000001

#define _AD1CON5_WM0_POSITION                    0x00000002
#define _AD1CON5_WM0_MASK                        0x00000004
#define _AD1CON5_WM0_LENGTH                      0x00000001

#define _AD1CON5_WM1_POSITION                    0x00000003
#define _AD1CON5_WM1_MASK                        0x00000008
#define _AD1CON5_WM1_LENGTH                      0x00000001

#define _AD1CON5_ASINT0_POSITION                 0x00000008
#define _AD1CON5_ASINT0_MASK                     0x00000100
#define _AD1CON5_ASINT0_LENGTH                   0x00000001

#define _AD1CON5_ASINT1_POSITION                 0x00000009
#define _AD1CON5_ASINT1_MASK                     0x00000200
#define _AD1CON5_ASINT1_LENGTH                   0x00000001

#define _AD1CHITL_CHH0_POSITION                  0x00000000
#define _AD1CHITL_CHH0_MASK                      0x00000001
#define _AD1CHITL_CHH0_LENGTH                    0x00000001

#define _AD1CHITL_CHH1_POSITION                  0x00000001
#define _AD1CHITL_CHH1_MASK                      0x00000002
#define _AD1CHITL_CHH1_LENGTH                    0x00000001

#define _AD1CHITL_CHH2_POSITION                  0x00000002
#define _AD1CHITL_CHH2_MASK                      0x00000004
#define _AD1CHITL_CHH2_LENGTH                    0x00000001

#define _AD1CHITL_CHH3_POSITION                  0x00000003
#define _AD1CHITL_CHH3_MASK                      0x00000008
#define _AD1CHITL_CHH3_LENGTH                    0x00000001

#define _AD1CHITL_CHH4_POSITION                  0x00000004
#define _AD1CHITL_CHH4_MASK                      0x00000010
#define _AD1CHITL_CHH4_LENGTH                    0x00000001

#define _AD1CHITL_CHH5_POSITION                  0x00000005
#define _AD1CHITL_CHH5_MASK                      0x00000020
#define _AD1CHITL_CHH5_LENGTH                    0x00000001

#define _AD1CHITL_CHH6_POSITION                  0x00000006
#define _AD1CHITL_CHH6_MASK                      0x00000040
#define _AD1CHITL_CHH6_LENGTH                    0x00000001

#define _AD1CHITL_CHH7_POSITION                  0x00000007
#define _AD1CHITL_CHH7_MASK                      0x00000080
#define _AD1CHITL_CHH7_LENGTH                    0x00000001

#define _AD1CHITL_CHH8_POSITION                  0x00000008
#define _AD1CHITL_CHH8_MASK                      0x00000100
#define _AD1CHITL_CHH8_LENGTH                    0x00000001

#define _AD1CHITL_CHH9_POSITION                  0x00000009
#define _AD1CHITL_CHH9_MASK                      0x00000200
#define _AD1CHITL_CHH9_LENGTH                    0x00000001

#define _AD1CHITL_CHH10_POSITION                 0x0000000A
#define _AD1CHITL_CHH10_MASK                     0x00000400
#define _AD1CHITL_CHH10_LENGTH                   0x00000001

#define _AD1CHITL_CHH11_POSITION                 0x0000000B
#define _AD1CHITL_CHH11_MASK                     0x00000800
#define _AD1CHITL_CHH11_LENGTH                   0x00000001

#define _AD1CHITL_CHH12_POSITION                 0x0000000C
#define _AD1CHITL_CHH12_MASK                     0x00001000
#define _AD1CHITL_CHH12_LENGTH                   0x00000001

#define _AD1CHITL_CHH13_POSITION                 0x0000000D
#define _AD1CHITL_CHH13_MASK                     0x00002000
#define _AD1CHITL_CHH13_LENGTH                   0x00000001

#define _AD1CHITL_CHH14_POSITION                 0x0000000E
#define _AD1CHITL_CHH14_MASK                     0x00004000
#define _AD1CHITL_CHH14_LENGTH                   0x00000001

#define _AD1CHITL_CHH15_POSITION                 0x0000000F
#define _AD1CHITL_CHH15_MASK                     0x00008000
#define _AD1CHITL_CHH15_LENGTH                   0x00000001

#define _CTMUCON1_CTTRIG_POSITION                0x00000008
#define _CTMUCON1_CTTRIG_MASK                    0x00000100
#define _CTMUCON1_CTTRIG_LENGTH                  0x00000001

#define _CTMUCON1_IDISSEN_POSITION               0x00000009
#define _CTMUCON1_IDISSEN_MASK                   0x00000200
#define _CTMUCON1_IDISSEN_LENGTH                 0x00000001

#define _CTMUCON1_EDGSEQEN_POSITION              0x0000000A
#define _CTMUCON1_EDGSEQEN_MASK                  0x00000400
#define _CTMUCON1_EDGSEQEN_LENGTH                0x00000001

#define _CTMUCON1_EDGEN_POSITION                 0x0000000B
#define _CTMUCON1_EDGEN_MASK                     0x00000800
#define _CTMUCON1_EDGEN_LENGTH                   0x00000001

#define _CTMUCON1_TGEN_POSITION                  0x0000000C
#define _CTMUCON1_TGEN_MASK                      0x00001000
#define _CTMUCON1_TGEN_LENGTH                    0x00000001

#define _CTMUCON1_CTMUSIDL_POSITION              0x0000000D
#define _CTMUCON1_CTMUSIDL_MASK                  0x00002000
#define _CTMUCON1_CTMUSIDL_LENGTH                0x00000001

#define _CTMUCON1_CTMUEN_POSITION                0x0000000F
#define _CTMUCON1_CTMUEN_MASK                    0x00008000
#define _CTMUCON1_CTMUEN_LENGTH                  0x00000001

#define _CTMUCON2_EDG2SEL_POSITION               0x00000002
#define _CTMUCON2_EDG2SEL_MASK                   0x0000003C
#define _CTMUCON2_EDG2SEL_LENGTH                 0x00000004

#define _CTMUCON2_EDG2POL_POSITION               0x00000006
#define _CTMUCON2_EDG2POL_MASK                   0x00000040
#define _CTMUCON2_EDG2POL_LENGTH                 0x00000001

#define _CTMUCON2_EDG2MOD_POSITION               0x00000007
#define _CTMUCON2_EDG2MOD_MASK                   0x00000080
#define _CTMUCON2_EDG2MOD_LENGTH                 0x00000001

#define _CTMUCON2_EDG1STAT_POSITION              0x00000008
#define _CTMUCON2_EDG1STAT_MASK                  0x00000100
#define _CTMUCON2_EDG1STAT_LENGTH                0x00000001

#define _CTMUCON2_EDG2STAT_POSITION              0x00000009
#define _CTMUCON2_EDG2STAT_MASK                  0x00000200
#define _CTMUCON2_EDG2STAT_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL_POSITION               0x0000000A
#define _CTMUCON2_EDG1SEL_MASK                   0x00003C00
#define _CTMUCON2_EDG1SEL_LENGTH                 0x00000004

#define _CTMUCON2_EDG1POL_POSITION               0x0000000E
#define _CTMUCON2_EDG1POL_MASK                   0x00004000
#define _CTMUCON2_EDG1POL_LENGTH                 0x00000001

#define _CTMUCON2_EDG1MOD_POSITION               0x0000000F
#define _CTMUCON2_EDG1MOD_MASK                   0x00008000
#define _CTMUCON2_EDG1MOD_LENGTH                 0x00000001

#define _CTMUCON2_EDG2SEL0_POSITION              0x00000002
#define _CTMUCON2_EDG2SEL0_MASK                  0x00000004
#define _CTMUCON2_EDG2SEL0_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL1_POSITION              0x00000003
#define _CTMUCON2_EDG2SEL1_MASK                  0x00000008
#define _CTMUCON2_EDG2SEL1_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL2_POSITION              0x00000004
#define _CTMUCON2_EDG2SEL2_MASK                  0x00000010
#define _CTMUCON2_EDG2SEL2_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL3_POSITION              0x00000005
#define _CTMUCON2_EDG2SEL3_MASK                  0x00000020
#define _CTMUCON2_EDG2SEL3_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL0_POSITION              0x0000000A
#define _CTMUCON2_EDG1SEL0_MASK                  0x00000400
#define _CTMUCON2_EDG1SEL0_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL1_POSITION              0x0000000B
#define _CTMUCON2_EDG1SEL1_MASK                  0x00000800
#define _CTMUCON2_EDG1SEL1_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL2_POSITION              0x0000000C
#define _CTMUCON2_EDG1SEL2_MASK                  0x00001000
#define _CTMUCON2_EDG1SEL2_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL3_POSITION              0x0000000D
#define _CTMUCON2_EDG1SEL3_MASK                  0x00002000
#define _CTMUCON2_EDG1SEL3_LENGTH                0x00000001

#define _CTMUICON_IRNG_POSITION                  0x00000008
#define _CTMUICON_IRNG_MASK                      0x00000300
#define _CTMUICON_IRNG_LENGTH                    0x00000002

#define _CTMUICON_ITRIM_POSITION                 0x0000000A
#define _CTMUICON_ITRIM_MASK                     0x0000FC00
#define _CTMUICON_ITRIM_LENGTH                   0x00000006

#define _CTMUICON_IRNG0_POSITION                 0x00000008
#define _CTMUICON_IRNG0_MASK                     0x00000100
#define _CTMUICON_IRNG0_LENGTH                   0x00000001

#define _CTMUICON_IRNG1_POSITION                 0x00000009
#define _CTMUICON_IRNG1_MASK                     0x00000200
#define _CTMUICON_IRNG1_LENGTH                   0x00000001

#define _CTMUICON_ITRIM0_POSITION                0x0000000A
#define _CTMUICON_ITRIM0_MASK                    0x00000400
#define _CTMUICON_ITRIM0_LENGTH                  0x00000001

#define _CTMUICON_ITRIM1_POSITION                0x0000000B
#define _CTMUICON_ITRIM1_MASK                    0x00000800
#define _CTMUICON_ITRIM1_LENGTH                  0x00000001

#define _CTMUICON_ITRIM2_POSITION                0x0000000C
#define _CTMUICON_ITRIM2_MASK                    0x00001000
#define _CTMUICON_ITRIM2_LENGTH                  0x00000001

#define _CTMUICON_ITRIM3_POSITION                0x0000000D
#define _CTMUICON_ITRIM3_MASK                    0x00002000
#define _CTMUICON_ITRIM3_LENGTH                  0x00000001

#define _CTMUICON_ITRIM4_POSITION                0x0000000E
#define _CTMUICON_ITRIM4_MASK                    0x00004000
#define _CTMUICON_ITRIM4_LENGTH                  0x00000001

#define _CTMUICON_ITRIM5_POSITION                0x0000000F
#define _CTMUICON_ITRIM5_MASK                    0x00008000
#define _CTMUICON_ITRIM5_LENGTH                  0x00000001

#define _AD1CTMENH_CTMEN16_POSITION              0x00000000
#define _AD1CTMENH_CTMEN16_MASK                  0x00000001
#define _AD1CTMENH_CTMEN16_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN17_POSITION              0x00000001
#define _AD1CTMENH_CTMEN17_MASK                  0x00000002
#define _AD1CTMENH_CTMEN17_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN18_POSITION              0x00000002
#define _AD1CTMENH_CTMEN18_MASK                  0x00000004
#define _AD1CTMENH_CTMEN18_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN19_POSITION              0x00000003
#define _AD1CTMENH_CTMEN19_MASK                  0x00000008
#define _AD1CTMENH_CTMEN19_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN20_POSITION              0x00000004
#define _AD1CTMENH_CTMEN20_MASK                  0x00000010
#define _AD1CTMENH_CTMEN20_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN21_POSITION              0x00000005
#define _AD1CTMENH_CTMEN21_MASK                  0x00000020
#define _AD1CTMENH_CTMEN21_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN22_POSITION              0x00000006
#define _AD1CTMENH_CTMEN22_MASK                  0x00000040
#define _AD1CTMENH_CTMEN22_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN23_POSITION              0x00000007
#define _AD1CTMENH_CTMEN23_MASK                  0x00000080
#define _AD1CTMENH_CTMEN23_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN24_POSITION              0x00000008
#define _AD1CTMENH_CTMEN24_MASK                  0x00000100
#define _AD1CTMENH_CTMEN24_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN25_POSITION              0x00000009
#define _AD1CTMENH_CTMEN25_MASK                  0x00000200
#define _AD1CTMENH_CTMEN25_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN26_POSITION              0x0000000A
#define _AD1CTMENH_CTMEN26_MASK                  0x00000400
#define _AD1CTMENH_CTMEN26_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN27_POSITION              0x0000000B
#define _AD1CTMENH_CTMEN27_MASK                  0x00000800
#define _AD1CTMENH_CTMEN27_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN28_POSITION              0x0000000C
#define _AD1CTMENH_CTMEN28_MASK                  0x00001000
#define _AD1CTMENH_CTMEN28_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN29_POSITION              0x0000000D
#define _AD1CTMENH_CTMEN29_MASK                  0x00002000
#define _AD1CTMENH_CTMEN29_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN30_POSITION              0x0000000E
#define _AD1CTMENH_CTMEN30_MASK                  0x00004000
#define _AD1CTMENH_CTMEN30_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN31_POSITION              0x0000000F
#define _AD1CTMENH_CTMEN31_MASK                  0x00008000
#define _AD1CTMENH_CTMEN31_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN0_POSITION               0x00000000
#define _AD1CTMENL_CTMEN0_MASK                   0x00000001
#define _AD1CTMENL_CTMEN0_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN1_POSITION               0x00000001
#define _AD1CTMENL_CTMEN1_MASK                   0x00000002
#define _AD1CTMENL_CTMEN1_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN2_POSITION               0x00000002
#define _AD1CTMENL_CTMEN2_MASK                   0x00000004
#define _AD1CTMENL_CTMEN2_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN3_POSITION               0x00000003
#define _AD1CTMENL_CTMEN3_MASK                   0x00000008
#define _AD1CTMENL_CTMEN3_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN4_POSITION               0x00000004
#define _AD1CTMENL_CTMEN4_MASK                   0x00000010
#define _AD1CTMENL_CTMEN4_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN5_POSITION               0x00000005
#define _AD1CTMENL_CTMEN5_MASK                   0x00000020
#define _AD1CTMENL_CTMEN5_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN6_POSITION               0x00000006
#define _AD1CTMENL_CTMEN6_MASK                   0x00000040
#define _AD1CTMENL_CTMEN6_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN7_POSITION               0x00000007
#define _AD1CTMENL_CTMEN7_MASK                   0x00000080
#define _AD1CTMENL_CTMEN7_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN8_POSITION               0x00000008
#define _AD1CTMENL_CTMEN8_MASK                   0x00000100
#define _AD1CTMENL_CTMEN8_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN9_POSITION               0x00000009
#define _AD1CTMENL_CTMEN9_MASK                   0x00000200
#define _AD1CTMENL_CTMEN9_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN10_POSITION              0x0000000A
#define _AD1CTMENL_CTMEN10_MASK                  0x00000400
#define _AD1CTMENL_CTMEN10_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN11_POSITION              0x0000000B
#define _AD1CTMENL_CTMEN11_MASK                  0x00000800
#define _AD1CTMENL_CTMEN11_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN12_POSITION              0x0000000C
#define _AD1CTMENL_CTMEN12_MASK                  0x00001000
#define _AD1CTMENL_CTMEN12_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN13_POSITION              0x0000000D
#define _AD1CTMENL_CTMEN13_MASK                  0x00002000
#define _AD1CTMENL_CTMEN13_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN14_POSITION              0x0000000E
#define _AD1CTMENL_CTMEN14_MASK                  0x00004000
#define _AD1CTMENL_CTMEN14_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN15_POSITION              0x0000000F
#define _AD1CTMENL_CTMEN15_MASK                  0x00008000
#define _AD1CTMENL_CTMEN15_LENGTH                0x00000001

#define _DMACON_PRSSEL_POSITION                  0x00000000
#define _DMACON_PRSSEL_MASK                      0x00000001
#define _DMACON_PRSSEL_LENGTH                    0x00000001

#define _DMACON_DMAEN_POSITION                   0x0000000F
#define _DMACON_DMAEN_MASK                       0x00008000
#define _DMACON_DMAEN_LENGTH                     0x00000001

#define _DMACH0_CHEN_POSITION                    0x00000000
#define _DMACH0_CHEN_MASK                        0x00000001
#define _DMACH0_CHEN_LENGTH                      0x00000001

#define _DMACH0_BYTE_POSITION                    0x00000001
#define _DMACH0_BYTE_MASK                        0x00000002
#define _DMACH0_BYTE_LENGTH                      0x00000001

#define _DMACH0_TRMODE_POSITION                  0x00000002
#define _DMACH0_TRMODE_MASK                      0x0000000C
#define _DMACH0_TRMODE_LENGTH                    0x00000002

#define _DMACH0_DAMODE_POSITION                  0x00000004
#define _DMACH0_DAMODE_MASK                      0x00000030
#define _DMACH0_DAMODE_LENGTH                    0x00000002

#define _DMACH0_SAMODE_POSITION                  0x00000006
#define _DMACH0_SAMODE_MASK                      0x000000C0
#define _DMACH0_SAMODE_LENGTH                    0x00000002

#define _DMACH0_CHREQ_POSITION                   0x00000008
#define _DMACH0_CHREQ_MASK                       0x00000100
#define _DMACH0_CHREQ_LENGTH                     0x00000001

#define _DMACH0_RELOAD_POSITION                  0x00000009
#define _DMACH0_RELOAD_MASK                      0x00000200
#define _DMACH0_RELOAD_LENGTH                    0x00000001

#define _DMACH0_NULLW_POSITION                   0x0000000A
#define _DMACH0_NULLW_MASK                       0x00000400
#define _DMACH0_NULLW_LENGTH                     0x00000001

#define _DMACH0_TRMODE0_POSITION                 0x00000002
#define _DMACH0_TRMODE0_MASK                     0x00000004
#define _DMACH0_TRMODE0_LENGTH                   0x00000001

#define _DMACH0_TRMODE1_POSITION                 0x00000003
#define _DMACH0_TRMODE1_MASK                     0x00000008
#define _DMACH0_TRMODE1_LENGTH                   0x00000001

#define _DMACH0_DAMODE0_POSITION                 0x00000004
#define _DMACH0_DAMODE0_MASK                     0x00000010
#define _DMACH0_DAMODE0_LENGTH                   0x00000001

#define _DMACH0_DAMODE1_POSITION                 0x00000005
#define _DMACH0_DAMODE1_MASK                     0x00000020
#define _DMACH0_DAMODE1_LENGTH                   0x00000001

#define _DMACH0_SAMODE0_POSITION                 0x00000006
#define _DMACH0_SAMODE0_MASK                     0x00000040
#define _DMACH0_SAMODE0_LENGTH                   0x00000001

#define _DMACH0_SAMODE1_POSITION                 0x00000007
#define _DMACH0_SAMODE1_MASK                     0x00000080
#define _DMACH0_SAMODE1_LENGTH                   0x00000001

#define _DMAINT0_HALFEN_POSITION                 0x00000000
#define _DMAINT0_HALFEN_MASK                     0x00000001
#define _DMAINT0_HALFEN_LENGTH                   0x00000001

#define _DMAINT0_OVRUNIF_POSITION                0x00000003
#define _DMAINT0_OVRUNIF_MASK                    0x00000008
#define _DMAINT0_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT0_HALFIF_POSITION                 0x00000004
#define _DMAINT0_HALFIF_MASK                     0x00000010
#define _DMAINT0_HALFIF_LENGTH                   0x00000001

#define _DMAINT0_DONEIF_POSITION                 0x00000005
#define _DMAINT0_DONEIF_MASK                     0x00000020
#define _DMAINT0_DONEIF_LENGTH                   0x00000001

#define _DMAINT0_LOWIF_POSITION                  0x00000006
#define _DMAINT0_LOWIF_MASK                      0x00000040
#define _DMAINT0_LOWIF_LENGTH                    0x00000001

#define _DMAINT0_HIGHIF_POSITION                 0x00000007
#define _DMAINT0_HIGHIF_MASK                     0x00000080
#define _DMAINT0_HIGHIF_LENGTH                   0x00000001

#define _DMAINT0_CHSEL_POSITION                  0x00000008
#define _DMAINT0_CHSEL_MASK                      0x00003F00
#define _DMAINT0_CHSEL_LENGTH                    0x00000006

#define _DMAINT0_DBUFWF_POSITION                 0x0000000F
#define _DMAINT0_DBUFWF_MASK                     0x00008000
#define _DMAINT0_DBUFWF_LENGTH                   0x00000001

#define _DMAINT0_CHSEL0_POSITION                 0x00000008
#define _DMAINT0_CHSEL0_MASK                     0x00000100
#define _DMAINT0_CHSEL0_LENGTH                   0x00000001

#define _DMAINT0_CHSEL1_POSITION                 0x00000009
#define _DMAINT0_CHSEL1_MASK                     0x00000200
#define _DMAINT0_CHSEL1_LENGTH                   0x00000001

#define _DMAINT0_CHSEL2_POSITION                 0x0000000A
#define _DMAINT0_CHSEL2_MASK                     0x00000400
#define _DMAINT0_CHSEL2_LENGTH                   0x00000001

#define _DMAINT0_CHSEL3_POSITION                 0x0000000B
#define _DMAINT0_CHSEL3_MASK                     0x00000800
#define _DMAINT0_CHSEL3_LENGTH                   0x00000001

#define _DMAINT0_CHSEL4_POSITION                 0x0000000C
#define _DMAINT0_CHSEL4_MASK                     0x00001000
#define _DMAINT0_CHSEL4_LENGTH                   0x00000001

#define _DMAINT0_CHSEL5_POSITION                 0x0000000D
#define _DMAINT0_CHSEL5_MASK                     0x00002000
#define _DMAINT0_CHSEL5_LENGTH                   0x00000001

#define _DMACH1_CHEN_POSITION                    0x00000000
#define _DMACH1_CHEN_MASK                        0x00000001
#define _DMACH1_CHEN_LENGTH                      0x00000001

#define _DMACH1_BYTE_POSITION                    0x00000001
#define _DMACH1_BYTE_MASK                        0x00000002
#define _DMACH1_BYTE_LENGTH                      0x00000001

#define _DMACH1_TRMODE_POSITION                  0x00000002
#define _DMACH1_TRMODE_MASK                      0x0000000C
#define _DMACH1_TRMODE_LENGTH                    0x00000002

#define _DMACH1_DAMODE_POSITION                  0x00000004
#define _DMACH1_DAMODE_MASK                      0x00000030
#define _DMACH1_DAMODE_LENGTH                    0x00000002

#define _DMACH1_SAMODE_POSITION                  0x00000006
#define _DMACH1_SAMODE_MASK                      0x000000C0
#define _DMACH1_SAMODE_LENGTH                    0x00000002

#define _DMACH1_CHREQ_POSITION                   0x00000008
#define _DMACH1_CHREQ_MASK                       0x00000100
#define _DMACH1_CHREQ_LENGTH                     0x00000001

#define _DMACH1_RELOAD_POSITION                  0x00000009
#define _DMACH1_RELOAD_MASK                      0x00000200
#define _DMACH1_RELOAD_LENGTH                    0x00000001

#define _DMACH1_NULLW_POSITION                   0x0000000A
#define _DMACH1_NULLW_MASK                       0x00000400
#define _DMACH1_NULLW_LENGTH                     0x00000001

#define _DMACH1_TRMODE0_POSITION                 0x00000002
#define _DMACH1_TRMODE0_MASK                     0x00000004
#define _DMACH1_TRMODE0_LENGTH                   0x00000001

#define _DMACH1_TRMODE1_POSITION                 0x00000003
#define _DMACH1_TRMODE1_MASK                     0x00000008
#define _DMACH1_TRMODE1_LENGTH                   0x00000001

#define _DMACH1_DAMODE0_POSITION                 0x00000004
#define _DMACH1_DAMODE0_MASK                     0x00000010
#define _DMACH1_DAMODE0_LENGTH                   0x00000001

#define _DMACH1_DAMODE1_POSITION                 0x00000005
#define _DMACH1_DAMODE1_MASK                     0x00000020
#define _DMACH1_DAMODE1_LENGTH                   0x00000001

#define _DMACH1_SAMODE0_POSITION                 0x00000006
#define _DMACH1_SAMODE0_MASK                     0x00000040
#define _DMACH1_SAMODE0_LENGTH                   0x00000001

#define _DMACH1_SAMODE1_POSITION                 0x00000007
#define _DMACH1_SAMODE1_MASK                     0x00000080
#define _DMACH1_SAMODE1_LENGTH                   0x00000001

#define _DMAINT1_HALFEN_POSITION                 0x00000000
#define _DMAINT1_HALFEN_MASK                     0x00000001
#define _DMAINT1_HALFEN_LENGTH                   0x00000001

#define _DMAINT1_OVRUNIF_POSITION                0x00000003
#define _DMAINT1_OVRUNIF_MASK                    0x00000008
#define _DMAINT1_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT1_HALFIF_POSITION                 0x00000004
#define _DMAINT1_HALFIF_MASK                     0x00000010
#define _DMAINT1_HALFIF_LENGTH                   0x00000001

#define _DMAINT1_DONEIF_POSITION                 0x00000005
#define _DMAINT1_DONEIF_MASK                     0x00000020
#define _DMAINT1_DONEIF_LENGTH                   0x00000001

#define _DMAINT1_LOWIF_POSITION                  0x00000006
#define _DMAINT1_LOWIF_MASK                      0x00000040
#define _DMAINT1_LOWIF_LENGTH                    0x00000001

#define _DMAINT1_HIGHIF_POSITION                 0x00000007
#define _DMAINT1_HIGHIF_MASK                     0x00000080
#define _DMAINT1_HIGHIF_LENGTH                   0x00000001

#define _DMAINT1_CHSEL_POSITION                  0x00000008
#define _DMAINT1_CHSEL_MASK                      0x00003F00
#define _DMAINT1_CHSEL_LENGTH                    0x00000006

#define _DMAINT1_DBUFWF_POSITION                 0x0000000F
#define _DMAINT1_DBUFWF_MASK                     0x00008000
#define _DMAINT1_DBUFWF_LENGTH                   0x00000001

#define _DMAINT1_CHSEL0_POSITION                 0x00000008
#define _DMAINT1_CHSEL0_MASK                     0x00000100
#define _DMAINT1_CHSEL0_LENGTH                   0x00000001

#define _DMAINT1_CHSEL1_POSITION                 0x00000009
#define _DMAINT1_CHSEL1_MASK                     0x00000200
#define _DMAINT1_CHSEL1_LENGTH                   0x00000001

#define _DMAINT1_CHSEL2_POSITION                 0x0000000A
#define _DMAINT1_CHSEL2_MASK                     0x00000400
#define _DMAINT1_CHSEL2_LENGTH                   0x00000001

#define _DMAINT1_CHSEL3_POSITION                 0x0000000B
#define _DMAINT1_CHSEL3_MASK                     0x00000800
#define _DMAINT1_CHSEL3_LENGTH                   0x00000001

#define _DMAINT1_CHSEL4_POSITION                 0x0000000C
#define _DMAINT1_CHSEL4_MASK                     0x00001000
#define _DMAINT1_CHSEL4_LENGTH                   0x00000001

#define _DMAINT1_CHSEL5_POSITION                 0x0000000D
#define _DMAINT1_CHSEL5_MASK                     0x00002000
#define _DMAINT1_CHSEL5_LENGTH                   0x00000001

#define _DMACH2_CHEN_POSITION                    0x00000000
#define _DMACH2_CHEN_MASK                        0x00000001
#define _DMACH2_CHEN_LENGTH                      0x00000001

#define _DMACH2_BYTE_POSITION                    0x00000001
#define _DMACH2_BYTE_MASK                        0x00000002
#define _DMACH2_BYTE_LENGTH                      0x00000001

#define _DMACH2_TRMODE_POSITION                  0x00000002
#define _DMACH2_TRMODE_MASK                      0x0000000C
#define _DMACH2_TRMODE_LENGTH                    0x00000002

#define _DMACH2_DAMODE_POSITION                  0x00000004
#define _DMACH2_DAMODE_MASK                      0x00000030
#define _DMACH2_DAMODE_LENGTH                    0x00000002

#define _DMACH2_SAMODE_POSITION                  0x00000006
#define _DMACH2_SAMODE_MASK                      0x000000C0
#define _DMACH2_SAMODE_LENGTH                    0x00000002

#define _DMACH2_CHREQ_POSITION                   0x00000008
#define _DMACH2_CHREQ_MASK                       0x00000100
#define _DMACH2_CHREQ_LENGTH                     0x00000001

#define _DMACH2_RELOAD_POSITION                  0x00000009
#define _DMACH2_RELOAD_MASK                      0x00000200
#define _DMACH2_RELOAD_LENGTH                    0x00000001

#define _DMACH2_NULLW_POSITION                   0x0000000A
#define _DMACH2_NULLW_MASK                       0x00000400
#define _DMACH2_NULLW_LENGTH                     0x00000001

#define _DMACH2_TRMODE0_POSITION                 0x00000002
#define _DMACH2_TRMODE0_MASK                     0x00000004
#define _DMACH2_TRMODE0_LENGTH                   0x00000001

#define _DMACH2_TRMODE1_POSITION                 0x00000003
#define _DMACH2_TRMODE1_MASK                     0x00000008
#define _DMACH2_TRMODE1_LENGTH                   0x00000001

#define _DMACH2_DAMODE0_POSITION                 0x00000004
#define _DMACH2_DAMODE0_MASK                     0x00000010
#define _DMACH2_DAMODE0_LENGTH                   0x00000001

#define _DMACH2_DAMODE1_POSITION                 0x00000005
#define _DMACH2_DAMODE1_MASK                     0x00000020
#define _DMACH2_DAMODE1_LENGTH                   0x00000001

#define _DMACH2_SAMODE0_POSITION                 0x00000006
#define _DMACH2_SAMODE0_MASK                     0x00000040
#define _DMACH2_SAMODE0_LENGTH                   0x00000001

#define _DMACH2_SAMODE1_POSITION                 0x00000007
#define _DMACH2_SAMODE1_MASK                     0x00000080
#define _DMACH2_SAMODE1_LENGTH                   0x00000001

#define _DMAINT2_HALFEN_POSITION                 0x00000000
#define _DMAINT2_HALFEN_MASK                     0x00000001
#define _DMAINT2_HALFEN_LENGTH                   0x00000001

#define _DMAINT2_OVRUNIF_POSITION                0x00000003
#define _DMAINT2_OVRUNIF_MASK                    0x00000008
#define _DMAINT2_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT2_HALFIF_POSITION                 0x00000004
#define _DMAINT2_HALFIF_MASK                     0x00000010
#define _DMAINT2_HALFIF_LENGTH                   0x00000001

#define _DMAINT2_DONEIF_POSITION                 0x00000005
#define _DMAINT2_DONEIF_MASK                     0x00000020
#define _DMAINT2_DONEIF_LENGTH                   0x00000001

#define _DMAINT2_LOWIF_POSITION                  0x00000006
#define _DMAINT2_LOWIF_MASK                      0x00000040
#define _DMAINT2_LOWIF_LENGTH                    0x00000001

#define _DMAINT2_HIGHIF_POSITION                 0x00000007
#define _DMAINT2_HIGHIF_MASK                     0x00000080
#define _DMAINT2_HIGHIF_LENGTH                   0x00000001

#define _DMAINT2_CHSEL_POSITION                  0x00000008
#define _DMAINT2_CHSEL_MASK                      0x00003F00
#define _DMAINT2_CHSEL_LENGTH                    0x00000006

#define _DMAINT2_DBUFWF_POSITION                 0x0000000F
#define _DMAINT2_DBUFWF_MASK                     0x00008000
#define _DMAINT2_DBUFWF_LENGTH                   0x00000001

#define _DMAINT2_CHSEL0_POSITION                 0x00000008
#define _DMAINT2_CHSEL0_MASK                     0x00000100
#define _DMAINT2_CHSEL0_LENGTH                   0x00000001

#define _DMAINT2_CHSEL1_POSITION                 0x00000009
#define _DMAINT2_CHSEL1_MASK                     0x00000200
#define _DMAINT2_CHSEL1_LENGTH                   0x00000001

#define _DMAINT2_CHSEL2_POSITION                 0x0000000A
#define _DMAINT2_CHSEL2_MASK                     0x00000400
#define _DMAINT2_CHSEL2_LENGTH                   0x00000001

#define _DMAINT2_CHSEL3_POSITION                 0x0000000B
#define _DMAINT2_CHSEL3_MASK                     0x00000800
#define _DMAINT2_CHSEL3_LENGTH                   0x00000001

#define _DMAINT2_CHSEL4_POSITION                 0x0000000C
#define _DMAINT2_CHSEL4_MASK                     0x00001000
#define _DMAINT2_CHSEL4_LENGTH                   0x00000001

#define _DMAINT2_CHSEL5_POSITION                 0x0000000D
#define _DMAINT2_CHSEL5_MASK                     0x00002000
#define _DMAINT2_CHSEL5_LENGTH                   0x00000001

#define _DMACH3_CHEN_POSITION                    0x00000000
#define _DMACH3_CHEN_MASK                        0x00000001
#define _DMACH3_CHEN_LENGTH                      0x00000001

#define _DMACH3_BYTE_POSITION                    0x00000001
#define _DMACH3_BYTE_MASK                        0x00000002
#define _DMACH3_BYTE_LENGTH                      0x00000001

#define _DMACH3_TRMODE_POSITION                  0x00000002
#define _DMACH3_TRMODE_MASK                      0x0000000C
#define _DMACH3_TRMODE_LENGTH                    0x00000002

#define _DMACH3_DAMODE_POSITION                  0x00000004
#define _DMACH3_DAMODE_MASK                      0x00000030
#define _DMACH3_DAMODE_LENGTH                    0x00000002

#define _DMACH3_SAMODE_POSITION                  0x00000006
#define _DMACH3_SAMODE_MASK                      0x000000C0
#define _DMACH3_SAMODE_LENGTH                    0x00000002

#define _DMACH3_CHREQ_POSITION                   0x00000008
#define _DMACH3_CHREQ_MASK                       0x00000100
#define _DMACH3_CHREQ_LENGTH                     0x00000001

#define _DMACH3_RELOAD_POSITION                  0x00000009
#define _DMACH3_RELOAD_MASK                      0x00000200
#define _DMACH3_RELOAD_LENGTH                    0x00000001

#define _DMACH3_NULLW_POSITION                   0x0000000A
#define _DMACH3_NULLW_MASK                       0x00000400
#define _DMACH3_NULLW_LENGTH                     0x00000001

#define _DMACH3_TRMODE0_POSITION                 0x00000002
#define _DMACH3_TRMODE0_MASK                     0x00000004
#define _DMACH3_TRMODE0_LENGTH                   0x00000001

#define _DMACH3_TRMODE1_POSITION                 0x00000003
#define _DMACH3_TRMODE1_MASK                     0x00000008
#define _DMACH3_TRMODE1_LENGTH                   0x00000001

#define _DMACH3_DAMODE0_POSITION                 0x00000004
#define _DMACH3_DAMODE0_MASK                     0x00000010
#define _DMACH3_DAMODE0_LENGTH                   0x00000001

#define _DMACH3_DAMODE1_POSITION                 0x00000005
#define _DMACH3_DAMODE1_MASK                     0x00000020
#define _DMACH3_DAMODE1_LENGTH                   0x00000001

#define _DMACH3_SAMODE0_POSITION                 0x00000006
#define _DMACH3_SAMODE0_MASK                     0x00000040
#define _DMACH3_SAMODE0_LENGTH                   0x00000001

#define _DMACH3_SAMODE1_POSITION                 0x00000007
#define _DMACH3_SAMODE1_MASK                     0x00000080
#define _DMACH3_SAMODE1_LENGTH                   0x00000001

#define _DMAINT3_HALFEN_POSITION                 0x00000000
#define _DMAINT3_HALFEN_MASK                     0x00000001
#define _DMAINT3_HALFEN_LENGTH                   0x00000001

#define _DMAINT3_OVRUNIF_POSITION                0x00000003
#define _DMAINT3_OVRUNIF_MASK                    0x00000008
#define _DMAINT3_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT3_HALFIF_POSITION                 0x00000004
#define _DMAINT3_HALFIF_MASK                     0x00000010
#define _DMAINT3_HALFIF_LENGTH                   0x00000001

#define _DMAINT3_DONEIF_POSITION                 0x00000005
#define _DMAINT3_DONEIF_MASK                     0x00000020
#define _DMAINT3_DONEIF_LENGTH                   0x00000001

#define _DMAINT3_LOWIF_POSITION                  0x00000006
#define _DMAINT3_LOWIF_MASK                      0x00000040
#define _DMAINT3_LOWIF_LENGTH                    0x00000001

#define _DMAINT3_HIGHIF_POSITION                 0x00000007
#define _DMAINT3_HIGHIF_MASK                     0x00000080
#define _DMAINT3_HIGHIF_LENGTH                   0x00000001

#define _DMAINT3_CHSEL_POSITION                  0x00000008
#define _DMAINT3_CHSEL_MASK                      0x00003F00
#define _DMAINT3_CHSEL_LENGTH                    0x00000006

#define _DMAINT3_DBUFWF_POSITION                 0x0000000F
#define _DMAINT3_DBUFWF_MASK                     0x00008000
#define _DMAINT3_DBUFWF_LENGTH                   0x00000001

#define _DMAINT3_CHSEL0_POSITION                 0x00000008
#define _DMAINT3_CHSEL0_MASK                     0x00000100
#define _DMAINT3_CHSEL0_LENGTH                   0x00000001

#define _DMAINT3_CHSEL1_POSITION                 0x00000009
#define _DMAINT3_CHSEL1_MASK                     0x00000200
#define _DMAINT3_CHSEL1_LENGTH                   0x00000001

#define _DMAINT3_CHSEL2_POSITION                 0x0000000A
#define _DMAINT3_CHSEL2_MASK                     0x00000400
#define _DMAINT3_CHSEL2_LENGTH                   0x00000001

#define _DMAINT3_CHSEL3_POSITION                 0x0000000B
#define _DMAINT3_CHSEL3_MASK                     0x00000800
#define _DMAINT3_CHSEL3_LENGTH                   0x00000001

#define _DMAINT3_CHSEL4_POSITION                 0x0000000C
#define _DMAINT3_CHSEL4_MASK                     0x00001000
#define _DMAINT3_CHSEL4_LENGTH                   0x00000001

#define _DMAINT3_CHSEL5_POSITION                 0x0000000D
#define _DMAINT3_CHSEL5_MASK                     0x00002000
#define _DMAINT3_CHSEL5_LENGTH                   0x00000001

#define _DMACH4_CHEN_POSITION                    0x00000000
#define _DMACH4_CHEN_MASK                        0x00000001
#define _DMACH4_CHEN_LENGTH                      0x00000001

#define _DMACH4_BYTE_POSITION                    0x00000001
#define _DMACH4_BYTE_MASK                        0x00000002
#define _DMACH4_BYTE_LENGTH                      0x00000001

#define _DMACH4_TRMODE_POSITION                  0x00000002
#define _DMACH4_TRMODE_MASK                      0x0000000C
#define _DMACH4_TRMODE_LENGTH                    0x00000002

#define _DMACH4_DAMODE_POSITION                  0x00000004
#define _DMACH4_DAMODE_MASK                      0x00000030
#define _DMACH4_DAMODE_LENGTH                    0x00000002

#define _DMACH4_SAMODE_POSITION                  0x00000006
#define _DMACH4_SAMODE_MASK                      0x000000C0
#define _DMACH4_SAMODE_LENGTH                    0x00000002

#define _DMACH4_CHREQ_POSITION                   0x00000008
#define _DMACH4_CHREQ_MASK                       0x00000100
#define _DMACH4_CHREQ_LENGTH                     0x00000001

#define _DMACH4_RELOAD_POSITION                  0x00000009
#define _DMACH4_RELOAD_MASK                      0x00000200
#define _DMACH4_RELOAD_LENGTH                    0x00000001

#define _DMACH4_NULLW_POSITION                   0x0000000A
#define _DMACH4_NULLW_MASK                       0x00000400
#define _DMACH4_NULLW_LENGTH                     0x00000001

#define _DMACH4_TRMODE0_POSITION                 0x00000002
#define _DMACH4_TRMODE0_MASK                     0x00000004
#define _DMACH4_TRMODE0_LENGTH                   0x00000001

#define _DMACH4_TRMODE1_POSITION                 0x00000003
#define _DMACH4_TRMODE1_MASK                     0x00000008
#define _DMACH4_TRMODE1_LENGTH                   0x00000001

#define _DMACH4_DAMODE0_POSITION                 0x00000004
#define _DMACH4_DAMODE0_MASK                     0x00000010
#define _DMACH4_DAMODE0_LENGTH                   0x00000001

#define _DMACH4_DAMODE1_POSITION                 0x00000005
#define _DMACH4_DAMODE1_MASK                     0x00000020
#define _DMACH4_DAMODE1_LENGTH                   0x00000001

#define _DMACH4_SAMODE0_POSITION                 0x00000006
#define _DMACH4_SAMODE0_MASK                     0x00000040
#define _DMACH4_SAMODE0_LENGTH                   0x00000001

#define _DMACH4_SAMODE1_POSITION                 0x00000007
#define _DMACH4_SAMODE1_MASK                     0x00000080
#define _DMACH4_SAMODE1_LENGTH                   0x00000001

#define _DMAINT4_HALFEN_POSITION                 0x00000000
#define _DMAINT4_HALFEN_MASK                     0x00000001
#define _DMAINT4_HALFEN_LENGTH                   0x00000001

#define _DMAINT4_OVRUNIF_POSITION                0x00000003
#define _DMAINT4_OVRUNIF_MASK                    0x00000008
#define _DMAINT4_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT4_HALFIF_POSITION                 0x00000004
#define _DMAINT4_HALFIF_MASK                     0x00000010
#define _DMAINT4_HALFIF_LENGTH                   0x00000001

#define _DMAINT4_DONEIF_POSITION                 0x00000005
#define _DMAINT4_DONEIF_MASK                     0x00000020
#define _DMAINT4_DONEIF_LENGTH                   0x00000001

#define _DMAINT4_LOWIF_POSITION                  0x00000006
#define _DMAINT4_LOWIF_MASK                      0x00000040
#define _DMAINT4_LOWIF_LENGTH                    0x00000001

#define _DMAINT4_HIGHIF_POSITION                 0x00000007
#define _DMAINT4_HIGHIF_MASK                     0x00000080
#define _DMAINT4_HIGHIF_LENGTH                   0x00000001

#define _DMAINT4_CHSEL_POSITION                  0x00000008
#define _DMAINT4_CHSEL_MASK                      0x00003F00
#define _DMAINT4_CHSEL_LENGTH                    0x00000006

#define _DMAINT4_DBUFWF_POSITION                 0x0000000F
#define _DMAINT4_DBUFWF_MASK                     0x00008000
#define _DMAINT4_DBUFWF_LENGTH                   0x00000001

#define _DMAINT4_CHSEL0_POSITION                 0x00000008
#define _DMAINT4_CHSEL0_MASK                     0x00000100
#define _DMAINT4_CHSEL0_LENGTH                   0x00000001

#define _DMAINT4_CHSEL1_POSITION                 0x00000009
#define _DMAINT4_CHSEL1_MASK                     0x00000200
#define _DMAINT4_CHSEL1_LENGTH                   0x00000001

#define _DMAINT4_CHSEL2_POSITION                 0x0000000A
#define _DMAINT4_CHSEL2_MASK                     0x00000400
#define _DMAINT4_CHSEL2_LENGTH                   0x00000001

#define _DMAINT4_CHSEL3_POSITION                 0x0000000B
#define _DMAINT4_CHSEL3_MASK                     0x00000800
#define _DMAINT4_CHSEL3_LENGTH                   0x00000001

#define _DMAINT4_CHSEL4_POSITION                 0x0000000C
#define _DMAINT4_CHSEL4_MASK                     0x00001000
#define _DMAINT4_CHSEL4_LENGTH                   0x00000001

#define _DMAINT4_CHSEL5_POSITION                 0x0000000D
#define _DMAINT4_CHSEL5_MASK                     0x00002000
#define _DMAINT4_CHSEL5_LENGTH                   0x00000001

#define _DMACH5_CHEN_POSITION                    0x00000000
#define _DMACH5_CHEN_MASK                        0x00000001
#define _DMACH5_CHEN_LENGTH                      0x00000001

#define _DMACH5_BYTE_POSITION                    0x00000001
#define _DMACH5_BYTE_MASK                        0x00000002
#define _DMACH5_BYTE_LENGTH                      0x00000001

#define _DMACH5_TRMODE_POSITION                  0x00000002
#define _DMACH5_TRMODE_MASK                      0x0000000C
#define _DMACH5_TRMODE_LENGTH                    0x00000002

#define _DMACH5_DAMODE_POSITION                  0x00000004
#define _DMACH5_DAMODE_MASK                      0x00000030
#define _DMACH5_DAMODE_LENGTH                    0x00000002

#define _DMACH5_SAMODE_POSITION                  0x00000006
#define _DMACH5_SAMODE_MASK                      0x000000C0
#define _DMACH5_SAMODE_LENGTH                    0x00000002

#define _DMACH5_CHREQ_POSITION                   0x00000008
#define _DMACH5_CHREQ_MASK                       0x00000100
#define _DMACH5_CHREQ_LENGTH                     0x00000001

#define _DMACH5_RELOAD_POSITION                  0x00000009
#define _DMACH5_RELOAD_MASK                      0x00000200
#define _DMACH5_RELOAD_LENGTH                    0x00000001

#define _DMACH5_NULLW_POSITION                   0x0000000A
#define _DMACH5_NULLW_MASK                       0x00000400
#define _DMACH5_NULLW_LENGTH                     0x00000001

#define _DMACH5_TRMODE0_POSITION                 0x00000002
#define _DMACH5_TRMODE0_MASK                     0x00000004
#define _DMACH5_TRMODE0_LENGTH                   0x00000001

#define _DMACH5_TRMODE1_POSITION                 0x00000003
#define _DMACH5_TRMODE1_MASK                     0x00000008
#define _DMACH5_TRMODE1_LENGTH                   0x00000001

#define _DMACH5_DAMODE0_POSITION                 0x00000004
#define _DMACH5_DAMODE0_MASK                     0x00000010
#define _DMACH5_DAMODE0_LENGTH                   0x00000001

#define _DMACH5_DAMODE1_POSITION                 0x00000005
#define _DMACH5_DAMODE1_MASK                     0x00000020
#define _DMACH5_DAMODE1_LENGTH                   0x00000001

#define _DMACH5_SAMODE0_POSITION                 0x00000006
#define _DMACH5_SAMODE0_MASK                     0x00000040
#define _DMACH5_SAMODE0_LENGTH                   0x00000001

#define _DMACH5_SAMODE1_POSITION                 0x00000007
#define _DMACH5_SAMODE1_MASK                     0x00000080
#define _DMACH5_SAMODE1_LENGTH                   0x00000001

#define _DMAINT5_HALFEN_POSITION                 0x00000000
#define _DMAINT5_HALFEN_MASK                     0x00000001
#define _DMAINT5_HALFEN_LENGTH                   0x00000001

#define _DMAINT5_OVRUNIF_POSITION                0x00000003
#define _DMAINT5_OVRUNIF_MASK                    0x00000008
#define _DMAINT5_OVRUNIF_LENGTH                  0x00000001

#define _DMAINT5_HALFIF_POSITION                 0x00000004
#define _DMAINT5_HALFIF_MASK                     0x00000010
#define _DMAINT5_HALFIF_LENGTH                   0x00000001

#define _DMAINT5_DONEIF_POSITION                 0x00000005
#define _DMAINT5_DONEIF_MASK                     0x00000020
#define _DMAINT5_DONEIF_LENGTH                   0x00000001

#define _DMAINT5_LOWIF_POSITION                  0x00000006
#define _DMAINT5_LOWIF_MASK                      0x00000040
#define _DMAINT5_LOWIF_LENGTH                    0x00000001

#define _DMAINT5_HIGHIF_POSITION                 0x00000007
#define _DMAINT5_HIGHIF_MASK                     0x00000080
#define _DMAINT5_HIGHIF_LENGTH                   0x00000001

#define _DMAINT5_CHSEL_POSITION                  0x00000008
#define _DMAINT5_CHSEL_MASK                      0x00003F00
#define _DMAINT5_CHSEL_LENGTH                    0x00000006

#define _DMAINT5_DBUFWF_POSITION                 0x0000000F
#define _DMAINT5_DBUFWF_MASK                     0x00008000
#define _DMAINT5_DBUFWF_LENGTH                   0x00000001

#define _DMAINT5_CHSEL0_POSITION                 0x00000008
#define _DMAINT5_CHSEL0_MASK                     0x00000100
#define _DMAINT5_CHSEL0_LENGTH                   0x00000001

#define _DMAINT5_CHSEL1_POSITION                 0x00000009
#define _DMAINT5_CHSEL1_MASK                     0x00000200
#define _DMAINT5_CHSEL1_LENGTH                   0x00000001

#define _DMAINT5_CHSEL2_POSITION                 0x0000000A
#define _DMAINT5_CHSEL2_MASK                     0x00000400
#define _DMAINT5_CHSEL2_LENGTH                   0x00000001

#define _DMAINT5_CHSEL3_POSITION                 0x0000000B
#define _DMAINT5_CHSEL3_MASK                     0x00000800
#define _DMAINT5_CHSEL3_LENGTH                   0x00000001

#define _DMAINT5_CHSEL4_POSITION                 0x0000000C
#define _DMAINT5_CHSEL4_MASK                     0x00001000
#define _DMAINT5_CHSEL4_LENGTH                   0x00000001

#define _DMAINT5_CHSEL5_POSITION                 0x0000000D
#define _DMAINT5_CHSEL5_MASK                     0x00002000
#define _DMAINT5_CHSEL5_LENGTH                   0x00000001

#define _ANCFG_VBGEN_POSITION                    0x00000000
#define _ANCFG_VBGEN_MASK                        0x00000001
#define _ANCFG_VBGEN_LENGTH                      0x00000001

#define _ANCFG_VBG2EN_POSITION                   0x00000001
#define _ANCFG_VBG2EN_MASK                       0x00000002
#define _ANCFG_VBG2EN_LENGTH                     0x00000001

#define _ANCFG_VBG6EN_POSITION                   0x00000002
#define _ANCFG_VBG6EN_MASK                       0x00000004
#define _ANCFG_VBG6EN_LENGTH                     0x00000001

#define _ANSB_ANSB0_POSITION                     0x00000000
#define _ANSB_ANSB0_MASK                         0x00000001
#define _ANSB_ANSB0_LENGTH                       0x00000001

#define _ANSB_ANSB1_POSITION                     0x00000001
#define _ANSB_ANSB1_MASK                         0x00000002
#define _ANSB_ANSB1_LENGTH                       0x00000001

#define _ANSB_ANSB2_POSITION                     0x00000002
#define _ANSB_ANSB2_MASK                         0x00000004
#define _ANSB_ANSB2_LENGTH                       0x00000001

#define _ANSB_ANSB3_POSITION                     0x00000003
#define _ANSB_ANSB3_MASK                         0x00000008
#define _ANSB_ANSB3_LENGTH                       0x00000001

#define _ANSB_ANSB4_POSITION                     0x00000004
#define _ANSB_ANSB4_MASK                         0x00000010
#define _ANSB_ANSB4_LENGTH                       0x00000001

#define _ANSB_ANSB5_POSITION                     0x00000005
#define _ANSB_ANSB5_MASK                         0x00000020
#define _ANSB_ANSB5_LENGTH                       0x00000001

#define _ANSB_ANSB6_POSITION                     0x00000006
#define _ANSB_ANSB6_MASK                         0x00000040
#define _ANSB_ANSB6_LENGTH                       0x00000001

#define _ANSB_ANSB7_POSITION                     0x00000007
#define _ANSB_ANSB7_MASK                         0x00000080
#define _ANSB_ANSB7_LENGTH                       0x00000001

#define _ANSB_ANSB8_POSITION                     0x00000008
#define _ANSB_ANSB8_MASK                         0x00000100
#define _ANSB_ANSB8_LENGTH                       0x00000001

#define _ANSB_ANSB9_POSITION                     0x00000009
#define _ANSB_ANSB9_MASK                         0x00000200
#define _ANSB_ANSB9_LENGTH                       0x00000001

#define _ANSB_ANSB10_POSITION                    0x0000000A
#define _ANSB_ANSB10_MASK                        0x00000400
#define _ANSB_ANSB10_LENGTH                      0x00000001

#define _ANSB_ANSB11_POSITION                    0x0000000B
#define _ANSB_ANSB11_MASK                        0x00000800
#define _ANSB_ANSB11_LENGTH                      0x00000001

#define _ANSB_ANSB12_POSITION                    0x0000000C
#define _ANSB_ANSB12_MASK                        0x00001000
#define _ANSB_ANSB12_LENGTH                      0x00000001

#define _ANSB_ANSB13_POSITION                    0x0000000D
#define _ANSB_ANSB13_MASK                        0x00002000
#define _ANSB_ANSB13_LENGTH                      0x00000001

#define _ANSB_ANSB14_POSITION                    0x0000000E
#define _ANSB_ANSB14_MASK                        0x00004000
#define _ANSB_ANSB14_LENGTH                      0x00000001

#define _ANSB_ANSB15_POSITION                    0x0000000F
#define _ANSB_ANSB15_MASK                        0x00008000
#define _ANSB_ANSB15_LENGTH                      0x00000001

#define _ANSB_ANSELB0_POSITION                   0x00000000
#define _ANSB_ANSELB0_MASK                       0x00000001
#define _ANSB_ANSELB0_LENGTH                     0x00000001

#define _ANSB_ANSELB1_POSITION                   0x00000001
#define _ANSB_ANSELB1_MASK                       0x00000002
#define _ANSB_ANSELB1_LENGTH                     0x00000001

#define _ANSB_ANSELB2_POSITION                   0x00000002
#define _ANSB_ANSELB2_MASK                       0x00000004
#define _ANSB_ANSELB2_LENGTH                     0x00000001

#define _ANSB_ANSELB3_POSITION                   0x00000003
#define _ANSB_ANSELB3_MASK                       0x00000008
#define _ANSB_ANSELB3_LENGTH                     0x00000001

#define _ANSB_ANSELB4_POSITION                   0x00000004
#define _ANSB_ANSELB4_MASK                       0x00000010
#define _ANSB_ANSELB4_LENGTH                     0x00000001

#define _ANSB_ANSELB5_POSITION                   0x00000005
#define _ANSB_ANSELB5_MASK                       0x00000020
#define _ANSB_ANSELB5_LENGTH                     0x00000001

#define _ANSB_ANSELB6_POSITION                   0x00000006
#define _ANSB_ANSELB6_MASK                       0x00000040
#define _ANSB_ANSELB6_LENGTH                     0x00000001

#define _ANSB_ANSELB7_POSITION                   0x00000007
#define _ANSB_ANSELB7_MASK                       0x00000080
#define _ANSB_ANSELB7_LENGTH                     0x00000001

#define _ANSB_ANSELB8_POSITION                   0x00000008
#define _ANSB_ANSELB8_MASK                       0x00000100
#define _ANSB_ANSELB8_LENGTH                     0x00000001

#define _ANSB_ANSELB9_POSITION                   0x00000009
#define _ANSB_ANSELB9_MASK                       0x00000200
#define _ANSB_ANSELB9_LENGTH                     0x00000001

#define _ANSB_ANSELB10_POSITION                  0x0000000A
#define _ANSB_ANSELB10_MASK                      0x00000400
#define _ANSB_ANSELB10_LENGTH                    0x00000001

#define _ANSB_ANSELB11_POSITION                  0x0000000B
#define _ANSB_ANSELB11_MASK                      0x00000800
#define _ANSB_ANSELB11_LENGTH                    0x00000001

#define _ANSB_ANSELB12_POSITION                  0x0000000C
#define _ANSB_ANSELB12_MASK                      0x00001000
#define _ANSB_ANSELB12_LENGTH                    0x00000001

#define _ANSB_ANSELB13_POSITION                  0x0000000D
#define _ANSB_ANSELB13_MASK                      0x00002000
#define _ANSB_ANSELB13_LENGTH                    0x00000001

#define _ANSB_ANSELB14_POSITION                  0x0000000E
#define _ANSB_ANSELB14_MASK                      0x00004000
#define _ANSB_ANSELB14_LENGTH                    0x00000001

#define _ANSB_ANSELB15_POSITION                  0x0000000F
#define _ANSB_ANSELB15_MASK                      0x00008000
#define _ANSB_ANSELB15_LENGTH                    0x00000001

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB5_POSITION                   0x00000005
#define _ANSELB_ANSB5_MASK                       0x00000020
#define _ANSELB_ANSB5_LENGTH                     0x00000001

#define _ANSELB_ANSB6_POSITION                   0x00000006
#define _ANSELB_ANSB6_MASK                       0x00000040
#define _ANSELB_ANSB6_LENGTH                     0x00000001

#define _ANSELB_ANSB7_POSITION                   0x00000007
#define _ANSELB_ANSB7_MASK                       0x00000080
#define _ANSELB_ANSB7_LENGTH                     0x00000001

#define _ANSELB_ANSB8_POSITION                   0x00000008
#define _ANSELB_ANSB8_MASK                       0x00000100
#define _ANSELB_ANSB8_LENGTH                     0x00000001

#define _ANSELB_ANSB9_POSITION                   0x00000009
#define _ANSELB_ANSB9_MASK                       0x00000200
#define _ANSELB_ANSB9_LENGTH                     0x00000001

#define _ANSELB_ANSB10_POSITION                  0x0000000A
#define _ANSELB_ANSB10_MASK                      0x00000400
#define _ANSELB_ANSB10_LENGTH                    0x00000001

#define _ANSELB_ANSB11_POSITION                  0x0000000B
#define _ANSELB_ANSB11_MASK                      0x00000800
#define _ANSELB_ANSB11_LENGTH                    0x00000001

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_ANSELB0_POSITION                 0x00000000
#define _ANSELB_ANSELB0_MASK                     0x00000001
#define _ANSELB_ANSELB0_LENGTH                   0x00000001

#define _ANSELB_ANSELB1_POSITION                 0x00000001
#define _ANSELB_ANSELB1_MASK                     0x00000002
#define _ANSELB_ANSELB1_LENGTH                   0x00000001

#define _ANSELB_ANSELB2_POSITION                 0x00000002
#define _ANSELB_ANSELB2_MASK                     0x00000004
#define _ANSELB_ANSELB2_LENGTH                   0x00000001

#define _ANSELB_ANSELB3_POSITION                 0x00000003
#define _ANSELB_ANSELB3_MASK                     0x00000008
#define _ANSELB_ANSELB3_LENGTH                   0x00000001

#define _ANSELB_ANSELB4_POSITION                 0x00000004
#define _ANSELB_ANSELB4_MASK                     0x00000010
#define _ANSELB_ANSELB4_LENGTH                   0x00000001

#define _ANSELB_ANSELB5_POSITION                 0x00000005
#define _ANSELB_ANSELB5_MASK                     0x00000020
#define _ANSELB_ANSELB5_LENGTH                   0x00000001

#define _ANSELB_ANSELB6_POSITION                 0x00000006
#define _ANSELB_ANSELB6_MASK                     0x00000040
#define _ANSELB_ANSELB6_LENGTH                   0x00000001

#define _ANSELB_ANSELB7_POSITION                 0x00000007
#define _ANSELB_ANSELB7_MASK                     0x00000080
#define _ANSELB_ANSELB7_LENGTH                   0x00000001

#define _ANSELB_ANSELB8_POSITION                 0x00000008
#define _ANSELB_ANSELB8_MASK                     0x00000100
#define _ANSELB_ANSELB8_LENGTH                   0x00000001

#define _ANSELB_ANSELB9_POSITION                 0x00000009
#define _ANSELB_ANSELB9_MASK                     0x00000200
#define _ANSELB_ANSELB9_LENGTH                   0x00000001

#define _ANSELB_ANSELB10_POSITION                0x0000000A
#define _ANSELB_ANSELB10_MASK                    0x00000400
#define _ANSELB_ANSELB10_LENGTH                  0x00000001

#define _ANSELB_ANSELB11_POSITION                0x0000000B
#define _ANSELB_ANSELB11_MASK                    0x00000800
#define _ANSELB_ANSELB11_LENGTH                  0x00000001

#define _ANSELB_ANSELB12_POSITION                0x0000000C
#define _ANSELB_ANSELB12_MASK                    0x00001000
#define _ANSELB_ANSELB12_LENGTH                  0x00000001

#define _ANSELB_ANSELB13_POSITION                0x0000000D
#define _ANSELB_ANSELB13_MASK                    0x00002000
#define _ANSELB_ANSELB13_LENGTH                  0x00000001

#define _ANSELB_ANSELB14_POSITION                0x0000000E
#define _ANSELB_ANSELB14_MASK                    0x00004000
#define _ANSELB_ANSELB14_LENGTH                  0x00000001

#define _ANSELB_ANSELB15_POSITION                0x0000000F
#define _ANSELB_ANSELB15_MASK                    0x00008000
#define _ANSELB_ANSELB15_LENGTH                  0x00000001

#define _ANSD_ANSD6_POSITION                     0x00000006
#define _ANSD_ANSD6_MASK                         0x00000040
#define _ANSD_ANSD6_LENGTH                       0x00000001

#define _ANSD_ANSD7_POSITION                     0x00000007
#define _ANSD_ANSD7_MASK                         0x00000080
#define _ANSD_ANSD7_LENGTH                       0x00000001

#define _ANSD_ANSD10_POSITION                    0x0000000A
#define _ANSD_ANSD10_MASK                        0x00000400
#define _ANSD_ANSD10_LENGTH                      0x00000001

#define _ANSD_ANSD11_POSITION                    0x0000000B
#define _ANSD_ANSD11_MASK                        0x00000800
#define _ANSD_ANSD11_LENGTH                      0x00000001

#define _ANSD_ANSELD6_POSITION                   0x00000006
#define _ANSD_ANSELD6_MASK                       0x00000040
#define _ANSD_ANSELD6_LENGTH                     0x00000001

#define _ANSD_ANSELD7_POSITION                   0x00000007
#define _ANSD_ANSELD7_MASK                       0x00000080
#define _ANSD_ANSELD7_LENGTH                     0x00000001

#define _ANSD_ANSELD10_POSITION                  0x0000000A
#define _ANSD_ANSELD10_MASK                      0x00000400
#define _ANSD_ANSELD10_LENGTH                    0x00000001

#define _ANSD_ANSELD11_POSITION                  0x0000000B
#define _ANSD_ANSELD11_MASK                      0x00000800
#define _ANSD_ANSELD11_LENGTH                    0x00000001

#define _ANSELD_ANSD6_POSITION                   0x00000006
#define _ANSELD_ANSD6_MASK                       0x00000040
#define _ANSELD_ANSD6_LENGTH                     0x00000001

#define _ANSELD_ANSD7_POSITION                   0x00000007
#define _ANSELD_ANSD7_MASK                       0x00000080
#define _ANSELD_ANSD7_LENGTH                     0x00000001

#define _ANSELD_ANSD10_POSITION                  0x0000000A
#define _ANSELD_ANSD10_MASK                      0x00000400
#define _ANSELD_ANSD10_LENGTH                    0x00000001

#define _ANSELD_ANSD11_POSITION                  0x0000000B
#define _ANSELD_ANSD11_MASK                      0x00000800
#define _ANSELD_ANSD11_LENGTH                    0x00000001

#define _ANSELD_ANSELD6_POSITION                 0x00000006
#define _ANSELD_ANSELD6_MASK                     0x00000040
#define _ANSELD_ANSELD6_LENGTH                   0x00000001

#define _ANSELD_ANSELD7_POSITION                 0x00000007
#define _ANSELD_ANSELD7_MASK                     0x00000080
#define _ANSELD_ANSELD7_LENGTH                   0x00000001

#define _ANSELD_ANSELD10_POSITION                0x0000000A
#define _ANSELD_ANSELD10_MASK                    0x00000400
#define _ANSELD_ANSELD10_LENGTH                  0x00000001

#define _ANSELD_ANSELD11_POSITION                0x0000000B
#define _ANSELD_ANSELD11_MASK                    0x00000800
#define _ANSELD_ANSELD11_LENGTH                  0x00000001

#define _ANSE_ANSE4_POSITION                     0x00000004
#define _ANSE_ANSE4_MASK                         0x00000010
#define _ANSE_ANSE4_LENGTH                       0x00000001

#define _ANSE_ANSE5_POSITION                     0x00000005
#define _ANSE_ANSE5_MASK                         0x00000020
#define _ANSE_ANSE5_LENGTH                       0x00000001

#define _ANSE_ANSE6_POSITION                     0x00000006
#define _ANSE_ANSE6_MASK                         0x00000040
#define _ANSE_ANSE6_LENGTH                       0x00000001

#define _ANSE_ANSE7_POSITION                     0x00000007
#define _ANSE_ANSE7_MASK                         0x00000080
#define _ANSE_ANSE7_LENGTH                       0x00000001

#define _ANSE_ANSELE4_POSITION                   0x00000004
#define _ANSE_ANSELE4_MASK                       0x00000010
#define _ANSE_ANSELE4_LENGTH                     0x00000001

#define _ANSE_ANSELE5_POSITION                   0x00000005
#define _ANSE_ANSELE5_MASK                       0x00000020
#define _ANSE_ANSELE5_LENGTH                     0x00000001

#define _ANSE_ANSELE6_POSITION                   0x00000006
#define _ANSE_ANSELE6_MASK                       0x00000040
#define _ANSE_ANSELE6_LENGTH                     0x00000001

#define _ANSE_ANSELE7_POSITION                   0x00000007
#define _ANSE_ANSELE7_MASK                       0x00000080
#define _ANSE_ANSELE7_LENGTH                     0x00000001

#define _ANSELE_ANSE4_POSITION                   0x00000004
#define _ANSELE_ANSE4_MASK                       0x00000010
#define _ANSELE_ANSE4_LENGTH                     0x00000001

#define _ANSELE_ANSE5_POSITION                   0x00000005
#define _ANSELE_ANSE5_MASK                       0x00000020
#define _ANSELE_ANSE5_LENGTH                     0x00000001

#define _ANSELE_ANSE6_POSITION                   0x00000006
#define _ANSELE_ANSE6_MASK                       0x00000040
#define _ANSELE_ANSE6_LENGTH                     0x00000001

#define _ANSELE_ANSE7_POSITION                   0x00000007
#define _ANSELE_ANSE7_MASK                       0x00000080
#define _ANSELE_ANSE7_LENGTH                     0x00000001

#define _ANSELE_ANSELE4_POSITION                 0x00000004
#define _ANSELE_ANSELE4_MASK                     0x00000010
#define _ANSELE_ANSELE4_LENGTH                   0x00000001

#define _ANSELE_ANSELE5_POSITION                 0x00000005
#define _ANSELE_ANSELE5_MASK                     0x00000020
#define _ANSELE_ANSELE5_LENGTH                   0x00000001

#define _ANSELE_ANSELE6_POSITION                 0x00000006
#define _ANSELE_ANSELE6_MASK                     0x00000040
#define _ANSELE_ANSELE6_LENGTH                   0x00000001

#define _ANSELE_ANSELE7_POSITION                 0x00000007
#define _ANSELE_ANSELE7_MASK                     0x00000080
#define _ANSELE_ANSELE7_LENGTH                   0x00000001

#define _ANSELG_ANSG6_POSITION                   0x00000006
#define _ANSELG_ANSG6_MASK                       0x00000040
#define _ANSELG_ANSG6_LENGTH                     0x00000001

#define _ANSELG_ANSG7_POSITION                   0x00000007
#define _ANSELG_ANSG7_MASK                       0x00000080
#define _ANSELG_ANSG7_LENGTH                     0x00000001

#define _ANSELG_ANSG8_POSITION                   0x00000008
#define _ANSELG_ANSG8_MASK                       0x00000100
#define _ANSELG_ANSG8_LENGTH                     0x00000001

#define _ANSELG_ANSG9_POSITION                   0x00000009
#define _ANSELG_ANSG9_MASK                       0x00000200
#define _ANSELG_ANSG9_LENGTH                     0x00000001

#define _ANSELG_ANSELG6_POSITION                 0x00000006
#define _ANSELG_ANSELG6_MASK                     0x00000040
#define _ANSELG_ANSELG6_LENGTH                   0x00000001

#define _ANSELG_ANSELG7_POSITION                 0x00000007
#define _ANSELG_ANSELG7_MASK                     0x00000080
#define _ANSELG_ANSELG7_LENGTH                   0x00000001

#define _ANSELG_ANSELG8_POSITION                 0x00000008
#define _ANSELG_ANSELG8_MASK                     0x00000100
#define _ANSELG_ANSELG8_LENGTH                   0x00000001

#define _ANSELG_ANSELG9_POSITION                 0x00000009
#define _ANSELG_ANSELG9_MASK                     0x00000200
#define _ANSELG_ANSELG9_LENGTH                   0x00000001

#define _ANSG_ANSG6_POSITION                     0x00000006
#define _ANSG_ANSG6_MASK                         0x00000040
#define _ANSG_ANSG6_LENGTH                       0x00000001

#define _ANSG_ANSG7_POSITION                     0x00000007
#define _ANSG_ANSG7_MASK                         0x00000080
#define _ANSG_ANSG7_LENGTH                       0x00000001

#define _ANSG_ANSG8_POSITION                     0x00000008
#define _ANSG_ANSG8_MASK                         0x00000100
#define _ANSG_ANSG8_LENGTH                       0x00000001

#define _ANSG_ANSG9_POSITION                     0x00000009
#define _ANSG_ANSG9_MASK                         0x00000200
#define _ANSG_ANSG9_LENGTH                       0x00000001

#define _ANSG_ANSELG6_POSITION                   0x00000006
#define _ANSG_ANSELG6_MASK                       0x00000040
#define _ANSG_ANSELG6_LENGTH                     0x00000001

#define _ANSG_ANSELG7_POSITION                   0x00000007
#define _ANSG_ANSELG7_MASK                       0x00000080
#define _ANSG_ANSELG7_LENGTH                     0x00000001

#define _ANSG_ANSELG8_POSITION                   0x00000008
#define _ANSG_ANSELG8_MASK                       0x00000100
#define _ANSG_ANSELG8_LENGTH                     0x00000001

#define _ANSG_ANSELG9_POSITION                   0x00000009
#define _ANSG_ANSELG9_MASK                       0x00000200
#define _ANSG_ANSELG9_LENGTH                     0x00000001

#define _LCDREG_CKSEL_POSITION                   0x00000000
#define _LCDREG_CKSEL_MASK                       0x00000003
#define _LCDREG_CKSEL_LENGTH                     0x00000002

#define _LCDREG_MODE13_POSITION                  0x00000002
#define _LCDREG_MODE13_MASK                      0x00000004
#define _LCDREG_MODE13_LENGTH                    0x00000001

#define _LCDREG_BIAS_POSITION                    0x00000003
#define _LCDREG_BIAS_MASK                        0x00000038
#define _LCDREG_BIAS_LENGTH                      0x00000003

#define _LCDREG_CPEN_POSITION                    0x0000000F
#define _LCDREG_CPEN_MASK                        0x00008000
#define _LCDREG_CPEN_LENGTH                      0x00000001

#define _LCDREG_CKSEL0_POSITION                  0x00000000
#define _LCDREG_CKSEL0_MASK                      0x00000001
#define _LCDREG_CKSEL0_LENGTH                    0x00000001

#define _LCDREG_CKSEL1_POSITION                  0x00000001
#define _LCDREG_CKSEL1_MASK                      0x00000002
#define _LCDREG_CKSEL1_LENGTH                    0x00000001

#define _LCDREG_BIAS0_POSITION                   0x00000003
#define _LCDREG_BIAS0_MASK                       0x00000008
#define _LCDREG_BIAS0_LENGTH                     0x00000001

#define _LCDREG_BIAS1_POSITION                   0x00000004
#define _LCDREG_BIAS1_MASK                       0x00000010
#define _LCDREG_BIAS1_LENGTH                     0x00000001

#define _LCDREG_BIAS2_POSITION                   0x00000005
#define _LCDREG_BIAS2_MASK                       0x00000020
#define _LCDREG_BIAS2_LENGTH                     0x00000001

#define _LCDREF_LRLAT_POSITION                   0x00000000
#define _LCDREF_LRLAT_MASK                       0x00000007
#define _LCDREF_LRLAT_LENGTH                     0x00000003

#define _LCDREF_LRLBP_POSITION                   0x00000004
#define _LCDREF_LRLBP_MASK                       0x00000030
#define _LCDREF_LRLBP_LENGTH                     0x00000002

#define _LCDREF_LRLAP_POSITION                   0x00000006
#define _LCDREF_LRLAP_MASK                       0x000000C0
#define _LCDREF_LRLAP_LENGTH                     0x00000002

#define _LCDREF_VLCD1PE_POSITION                 0x00000008
#define _LCDREF_VLCD1PE_MASK                     0x00000100
#define _LCDREF_VLCD1PE_LENGTH                   0x00000001

#define _LCDREF_VLCD2PE_POSITION                 0x00000009
#define _LCDREF_VLCD2PE_MASK                     0x00000200
#define _LCDREF_VLCD2PE_LENGTH                   0x00000001

#define _LCDREF_VLCD3PE_POSITION                 0x0000000A
#define _LCDREF_VLCD3PE_MASK                     0x00000400
#define _LCDREF_VLCD3PE_LENGTH                   0x00000001

#define _LCDREF_LCDCST_POSITION                  0x0000000B
#define _LCDREF_LCDCST_MASK                      0x00003800
#define _LCDREF_LCDCST_LENGTH                    0x00000003

#define _LCDREF_LCDIRE_POSITION                  0x0000000F
#define _LCDREF_LCDIRE_MASK                      0x00008000
#define _LCDREF_LCDIRE_LENGTH                    0x00000001

#define _LCDREF_LRLAT0_POSITION                  0x00000000
#define _LCDREF_LRLAT0_MASK                      0x00000001
#define _LCDREF_LRLAT0_LENGTH                    0x00000001

#define _LCDREF_LRLAT1_POSITION                  0x00000001
#define _LCDREF_LRLAT1_MASK                      0x00000002
#define _LCDREF_LRLAT1_LENGTH                    0x00000001

#define _LCDREF_LRLAT2_POSITION                  0x00000002
#define _LCDREF_LRLAT2_MASK                      0x00000004
#define _LCDREF_LRLAT2_LENGTH                    0x00000001

#define _LCDREF_LRLBP0_POSITION                  0x00000004
#define _LCDREF_LRLBP0_MASK                      0x00000010
#define _LCDREF_LRLBP0_LENGTH                    0x00000001

#define _LCDREF_LRLBP1_POSITION                  0x00000005
#define _LCDREF_LRLBP1_MASK                      0x00000020
#define _LCDREF_LRLBP1_LENGTH                    0x00000001

#define _LCDREF_LRLAP0_POSITION                  0x00000006
#define _LCDREF_LRLAP0_MASK                      0x00000040
#define _LCDREF_LRLAP0_LENGTH                    0x00000001

#define _LCDREF_LRLAP1_POSITION                  0x00000007
#define _LCDREF_LRLAP1_MASK                      0x00000080
#define _LCDREF_LRLAP1_LENGTH                    0x00000001

#define _LCDREF_LCDCST0_POSITION                 0x0000000B
#define _LCDREF_LCDCST0_MASK                     0x00000800
#define _LCDREF_LCDCST0_LENGTH                   0x00000001

#define _LCDREF_LCDCST1_POSITION                 0x0000000C
#define _LCDREF_LCDCST1_MASK                     0x00001000
#define _LCDREF_LCDCST1_LENGTH                   0x00000001

#define _LCDREF_LCDCST2_POSITION                 0x0000000D
#define _LCDREF_LCDCST2_MASK                     0x00002000
#define _LCDREF_LCDCST2_LENGTH                   0x00000001

#define _LCDCON_LMUX_POSITION                    0x00000000
#define _LCDCON_LMUX_MASK                        0x00000007
#define _LCDCON_LMUX_LENGTH                      0x00000003

#define _LCDCON_CS_POSITION                      0x00000003
#define _LCDCON_CS_MASK                          0x00000018
#define _LCDCON_CS_LENGTH                        0x00000002

#define _LCDCON_WERR_POSITION                    0x00000005
#define _LCDCON_WERR_MASK                        0x00000020
#define _LCDCON_WERR_LENGTH                      0x00000001

#define _LCDCON_SLPEN_POSITION                   0x00000006
#define _LCDCON_SLPEN_MASK                       0x00000040
#define _LCDCON_SLPEN_LENGTH                     0x00000001

#define _LCDCON_LCDSIDL_POSITION                 0x0000000D
#define _LCDCON_LCDSIDL_MASK                     0x00002000
#define _LCDCON_LCDSIDL_LENGTH                   0x00000001

#define _LCDCON_LCDEN_POSITION                   0x0000000F
#define _LCDCON_LCDEN_MASK                       0x00008000
#define _LCDCON_LCDEN_LENGTH                     0x00000001

#define _LCDCON_LMUX0_POSITION                   0x00000000
#define _LCDCON_LMUX0_MASK                       0x00000001
#define _LCDCON_LMUX0_LENGTH                     0x00000001

#define _LCDCON_LMUX1_POSITION                   0x00000001
#define _LCDCON_LMUX1_MASK                       0x00000002
#define _LCDCON_LMUX1_LENGTH                     0x00000001

#define _LCDCON_LMUX2_POSITION                   0x00000002
#define _LCDCON_LMUX2_MASK                       0x00000004
#define _LCDCON_LMUX2_LENGTH                     0x00000001

#define _LCDCON_CS0_POSITION                     0x00000003
#define _LCDCON_CS0_MASK                         0x00000008
#define _LCDCON_CS0_LENGTH                       0x00000001

#define _LCDCON_CS1_POSITION                     0x00000004
#define _LCDCON_CS1_MASK                         0x00000010
#define _LCDCON_CS1_LENGTH                       0x00000001

#define _LCDPS_LP_POSITION                       0x00000000
#define _LCDPS_LP_MASK                           0x0000000F
#define _LCDPS_LP_LENGTH                         0x00000004

#define _LCDPS_WA_POSITION                       0x00000004
#define _LCDPS_WA_MASK                           0x00000010
#define _LCDPS_WA_LENGTH                         0x00000001

#define _LCDPS_LCDA_POSITION                     0x00000005
#define _LCDPS_LCDA_MASK                         0x00000020
#define _LCDPS_LCDA_LENGTH                       0x00000001

#define _LCDPS_BIASMD_POSITION                   0x00000006
#define _LCDPS_BIASMD_MASK                       0x00000040
#define _LCDPS_BIASMD_LENGTH                     0x00000001

#define _LCDPS_WFT_POSITION                      0x00000007
#define _LCDPS_WFT_MASK                          0x00000080
#define _LCDPS_WFT_LENGTH                        0x00000001

#define _LCDPS_LP0_POSITION                      0x00000000
#define _LCDPS_LP0_MASK                          0x00000001
#define _LCDPS_LP0_LENGTH                        0x00000001

#define _LCDPS_LP1_POSITION                      0x00000001
#define _LCDPS_LP1_MASK                          0x00000002
#define _LCDPS_LP1_LENGTH                        0x00000001

#define _LCDPS_LP2_POSITION                      0x00000002
#define _LCDPS_LP2_MASK                          0x00000004
#define _LCDPS_LP2_LENGTH                        0x00000001

#define _LCDPS_LP3_POSITION                      0x00000003
#define _LCDPS_LP3_MASK                          0x00000008
#define _LCDPS_LP3_LENGTH                        0x00000001

#define _LCDSE0_SE00_POSITION                    0x00000000
#define _LCDSE0_SE00_MASK                        0x00000001
#define _LCDSE0_SE00_LENGTH                      0x00000001

#define _LCDSE0_SE01_POSITION                    0x00000001
#define _LCDSE0_SE01_MASK                        0x00000002
#define _LCDSE0_SE01_LENGTH                      0x00000001

#define _LCDSE0_SE02_POSITION                    0x00000002
#define _LCDSE0_SE02_MASK                        0x00000004
#define _LCDSE0_SE02_LENGTH                      0x00000001

#define _LCDSE0_SE03_POSITION                    0x00000003
#define _LCDSE0_SE03_MASK                        0x00000008
#define _LCDSE0_SE03_LENGTH                      0x00000001

#define _LCDSE0_SE04_POSITION                    0x00000004
#define _LCDSE0_SE04_MASK                        0x00000010
#define _LCDSE0_SE04_LENGTH                      0x00000001

#define _LCDSE0_SE05_POSITION                    0x00000005
#define _LCDSE0_SE05_MASK                        0x00000020
#define _LCDSE0_SE05_LENGTH                      0x00000001

#define _LCDSE0_SE06_POSITION                    0x00000006
#define _LCDSE0_SE06_MASK                        0x00000040
#define _LCDSE0_SE06_LENGTH                      0x00000001

#define _LCDSE0_SE07_POSITION                    0x00000007
#define _LCDSE0_SE07_MASK                        0x00000080
#define _LCDSE0_SE07_LENGTH                      0x00000001

#define _LCDSE0_SE08_POSITION                    0x00000008
#define _LCDSE0_SE08_MASK                        0x00000100
#define _LCDSE0_SE08_LENGTH                      0x00000001

#define _LCDSE0_SE09_POSITION                    0x00000009
#define _LCDSE0_SE09_MASK                        0x00000200
#define _LCDSE0_SE09_LENGTH                      0x00000001

#define _LCDSE0_SE10_POSITION                    0x0000000A
#define _LCDSE0_SE10_MASK                        0x00000400
#define _LCDSE0_SE10_LENGTH                      0x00000001

#define _LCDSE0_SE11_POSITION                    0x0000000B
#define _LCDSE0_SE11_MASK                        0x00000800
#define _LCDSE0_SE11_LENGTH                      0x00000001

#define _LCDSE0_SE12_POSITION                    0x0000000C
#define _LCDSE0_SE12_MASK                        0x00001000
#define _LCDSE0_SE12_LENGTH                      0x00000001

#define _LCDSE0_SE13_POSITION                    0x0000000D
#define _LCDSE0_SE13_MASK                        0x00002000
#define _LCDSE0_SE13_LENGTH                      0x00000001

#define _LCDSE0_SE14_POSITION                    0x0000000E
#define _LCDSE0_SE14_MASK                        0x00004000
#define _LCDSE0_SE14_LENGTH                      0x00000001

#define _LCDSE0_SE15_POSITION                    0x0000000F
#define _LCDSE0_SE15_MASK                        0x00008000
#define _LCDSE0_SE15_LENGTH                      0x00000001

#define _LCDSE1_SE16_POSITION                    0x00000000
#define _LCDSE1_SE16_MASK                        0x00000001
#define _LCDSE1_SE16_LENGTH                      0x00000001

#define _LCDSE1_SE17_POSITION                    0x00000001
#define _LCDSE1_SE17_MASK                        0x00000002
#define _LCDSE1_SE17_LENGTH                      0x00000001

#define _LCDSE1_SE18_POSITION                    0x00000002
#define _LCDSE1_SE18_MASK                        0x00000004
#define _LCDSE1_SE18_LENGTH                      0x00000001

#define _LCDSE1_SE19_POSITION                    0x00000003
#define _LCDSE1_SE19_MASK                        0x00000008
#define _LCDSE1_SE19_LENGTH                      0x00000001

#define _LCDSE1_SE20_POSITION                    0x00000004
#define _LCDSE1_SE20_MASK                        0x00000010
#define _LCDSE1_SE20_LENGTH                      0x00000001

#define _LCDSE1_SE21_POSITION                    0x00000005
#define _LCDSE1_SE21_MASK                        0x00000020
#define _LCDSE1_SE21_LENGTH                      0x00000001

#define _LCDSE1_SE22_POSITION                    0x00000006
#define _LCDSE1_SE22_MASK                        0x00000040
#define _LCDSE1_SE22_LENGTH                      0x00000001

#define _LCDSE1_SE23_POSITION                    0x00000007
#define _LCDSE1_SE23_MASK                        0x00000080
#define _LCDSE1_SE23_LENGTH                      0x00000001

#define _LCDSE1_SE24_POSITION                    0x00000008
#define _LCDSE1_SE24_MASK                        0x00000100
#define _LCDSE1_SE24_LENGTH                      0x00000001

#define _LCDSE1_SE25_POSITION                    0x00000009
#define _LCDSE1_SE25_MASK                        0x00000200
#define _LCDSE1_SE25_LENGTH                      0x00000001

#define _LCDSE1_SE26_POSITION                    0x0000000A
#define _LCDSE1_SE26_MASK                        0x00000400
#define _LCDSE1_SE26_LENGTH                      0x00000001

#define _LCDSE1_SE27_POSITION                    0x0000000B
#define _LCDSE1_SE27_MASK                        0x00000800
#define _LCDSE1_SE27_LENGTH                      0x00000001

#define _LCDSE1_SE28_POSITION                    0x0000000C
#define _LCDSE1_SE28_MASK                        0x00001000
#define _LCDSE1_SE28_LENGTH                      0x00000001

#define _LCDSE1_SE29_POSITION                    0x0000000D
#define _LCDSE1_SE29_MASK                        0x00002000
#define _LCDSE1_SE29_LENGTH                      0x00000001

#define _LCDSE1_SE30_POSITION                    0x0000000E
#define _LCDSE1_SE30_MASK                        0x00004000
#define _LCDSE1_SE30_LENGTH                      0x00000001

#define _LCDSE1_SE31_POSITION                    0x0000000F
#define _LCDSE1_SE31_MASK                        0x00008000
#define _LCDSE1_SE31_LENGTH                      0x00000001

#define _LCDSE2_SE47_POSITION                    0x0000000F
#define _LCDSE2_SE47_MASK                        0x00008000
#define _LCDSE2_SE47_LENGTH                      0x00000001

#define _LCDSE3_SE48_POSITION                    0x00000000
#define _LCDSE3_SE48_MASK                        0x00000001
#define _LCDSE3_SE48_LENGTH                      0x00000001

#define _LCDDATA0_S00C0_POSITION                 0x00000000
#define _LCDDATA0_S00C0_MASK                     0x00000001
#define _LCDDATA0_S00C0_LENGTH                   0x00000001

#define _LCDDATA0_S01C0_POSITION                 0x00000001
#define _LCDDATA0_S01C0_MASK                     0x00000002
#define _LCDDATA0_S01C0_LENGTH                   0x00000001

#define _LCDDATA0_S02C0_POSITION                 0x00000002
#define _LCDDATA0_S02C0_MASK                     0x00000004
#define _LCDDATA0_S02C0_LENGTH                   0x00000001

#define _LCDDATA0_S03C0_POSITION                 0x00000003
#define _LCDDATA0_S03C0_MASK                     0x00000008
#define _LCDDATA0_S03C0_LENGTH                   0x00000001

#define _LCDDATA0_S04C0_POSITION                 0x00000004
#define _LCDDATA0_S04C0_MASK                     0x00000010
#define _LCDDATA0_S04C0_LENGTH                   0x00000001

#define _LCDDATA0_S05C0_POSITION                 0x00000005
#define _LCDDATA0_S05C0_MASK                     0x00000020
#define _LCDDATA0_S05C0_LENGTH                   0x00000001

#define _LCDDATA0_S06C0_POSITION                 0x00000006
#define _LCDDATA0_S06C0_MASK                     0x00000040
#define _LCDDATA0_S06C0_LENGTH                   0x00000001

#define _LCDDATA0_S07C0_POSITION                 0x00000007
#define _LCDDATA0_S07C0_MASK                     0x00000080
#define _LCDDATA0_S07C0_LENGTH                   0x00000001

#define _LCDDATA0_S08C0_POSITION                 0x00000008
#define _LCDDATA0_S08C0_MASK                     0x00000100
#define _LCDDATA0_S08C0_LENGTH                   0x00000001

#define _LCDDATA0_S09C0_POSITION                 0x00000009
#define _LCDDATA0_S09C0_MASK                     0x00000200
#define _LCDDATA0_S09C0_LENGTH                   0x00000001

#define _LCDDATA0_S10C0_POSITION                 0x0000000A
#define _LCDDATA0_S10C0_MASK                     0x00000400
#define _LCDDATA0_S10C0_LENGTH                   0x00000001

#define _LCDDATA0_S11C0_POSITION                 0x0000000B
#define _LCDDATA0_S11C0_MASK                     0x00000800
#define _LCDDATA0_S11C0_LENGTH                   0x00000001

#define _LCDDATA0_S12C0_POSITION                 0x0000000C
#define _LCDDATA0_S12C0_MASK                     0x00001000
#define _LCDDATA0_S12C0_LENGTH                   0x00000001

#define _LCDDATA0_S13C0_POSITION                 0x0000000D
#define _LCDDATA0_S13C0_MASK                     0x00002000
#define _LCDDATA0_S13C0_LENGTH                   0x00000001

#define _LCDDATA0_S14C0_POSITION                 0x0000000E
#define _LCDDATA0_S14C0_MASK                     0x00004000
#define _LCDDATA0_S14C0_LENGTH                   0x00000001

#define _LCDDATA0_S15C0_POSITION                 0x0000000F
#define _LCDDATA0_S15C0_MASK                     0x00008000
#define _LCDDATA0_S15C0_LENGTH                   0x00000001

#define _LCDDATA1_S16C0_POSITION                 0x00000000
#define _LCDDATA1_S16C0_MASK                     0x00000001
#define _LCDDATA1_S16C0_LENGTH                   0x00000001

#define _LCDDATA1_S17C0_POSITION                 0x00000001
#define _LCDDATA1_S17C0_MASK                     0x00000002
#define _LCDDATA1_S17C0_LENGTH                   0x00000001

#define _LCDDATA1_S18C0_POSITION                 0x00000002
#define _LCDDATA1_S18C0_MASK                     0x00000004
#define _LCDDATA1_S18C0_LENGTH                   0x00000001

#define _LCDDATA1_S19C0_POSITION                 0x00000003
#define _LCDDATA1_S19C0_MASK                     0x00000008
#define _LCDDATA1_S19C0_LENGTH                   0x00000001

#define _LCDDATA1_S20C0_POSITION                 0x00000004
#define _LCDDATA1_S20C0_MASK                     0x00000010
#define _LCDDATA1_S20C0_LENGTH                   0x00000001

#define _LCDDATA1_S21C0_POSITION                 0x00000005
#define _LCDDATA1_S21C0_MASK                     0x00000020
#define _LCDDATA1_S21C0_LENGTH                   0x00000001

#define _LCDDATA1_S22C0_POSITION                 0x00000006
#define _LCDDATA1_S22C0_MASK                     0x00000040
#define _LCDDATA1_S22C0_LENGTH                   0x00000001

#define _LCDDATA1_S23C0_POSITION                 0x00000007
#define _LCDDATA1_S23C0_MASK                     0x00000080
#define _LCDDATA1_S23C0_LENGTH                   0x00000001

#define _LCDDATA1_S24C0_POSITION                 0x00000008
#define _LCDDATA1_S24C0_MASK                     0x00000100
#define _LCDDATA1_S24C0_LENGTH                   0x00000001

#define _LCDDATA1_S25C0_POSITION                 0x00000009
#define _LCDDATA1_S25C0_MASK                     0x00000200
#define _LCDDATA1_S25C0_LENGTH                   0x00000001

#define _LCDDATA1_S26C0_POSITION                 0x0000000A
#define _LCDDATA1_S26C0_MASK                     0x00000400
#define _LCDDATA1_S26C0_LENGTH                   0x00000001

#define _LCDDATA1_S27C0_POSITION                 0x0000000B
#define _LCDDATA1_S27C0_MASK                     0x00000800
#define _LCDDATA1_S27C0_LENGTH                   0x00000001

#define _LCDDATA1_S28C0_POSITION                 0x0000000C
#define _LCDDATA1_S28C0_MASK                     0x00001000
#define _LCDDATA1_S28C0_LENGTH                   0x00000001

#define _LCDDATA1_S29C0_POSITION                 0x0000000D
#define _LCDDATA1_S29C0_MASK                     0x00002000
#define _LCDDATA1_S29C0_LENGTH                   0x00000001

#define _LCDDATA1_S30C0_POSITION                 0x0000000E
#define _LCDDATA1_S30C0_MASK                     0x00004000
#define _LCDDATA1_S30C0_LENGTH                   0x00000001

#define _LCDDATA1_S31C0_POSITION                 0x0000000F
#define _LCDDATA1_S31C0_MASK                     0x00008000
#define _LCDDATA1_S31C0_LENGTH                   0x00000001

#define _LCDDATA2_S47C0_POSITION                 0x0000000F
#define _LCDDATA2_S47C0_MASK                     0x00008000
#define _LCDDATA2_S47C0_LENGTH                   0x00000001

#define _LCDDATA3_S48C0_POSITION                 0x00000000
#define _LCDDATA3_S48C0_MASK                     0x00000001
#define _LCDDATA3_S48C0_LENGTH                   0x00000001

#define _LCDDATA4_S00C1_POSITION                 0x00000000
#define _LCDDATA4_S00C1_MASK                     0x00000001
#define _LCDDATA4_S00C1_LENGTH                   0x00000001

#define _LCDDATA4_S01C1_POSITION                 0x00000001
#define _LCDDATA4_S01C1_MASK                     0x00000002
#define _LCDDATA4_S01C1_LENGTH                   0x00000001

#define _LCDDATA4_S02C1_POSITION                 0x00000002
#define _LCDDATA4_S02C1_MASK                     0x00000004
#define _LCDDATA4_S02C1_LENGTH                   0x00000001

#define _LCDDATA4_S03C1_POSITION                 0x00000003
#define _LCDDATA4_S03C1_MASK                     0x00000008
#define _LCDDATA4_S03C1_LENGTH                   0x00000001

#define _LCDDATA4_S04C1_POSITION                 0x00000004
#define _LCDDATA4_S04C1_MASK                     0x00000010
#define _LCDDATA4_S04C1_LENGTH                   0x00000001

#define _LCDDATA4_S05C1_POSITION                 0x00000005
#define _LCDDATA4_S05C1_MASK                     0x00000020
#define _LCDDATA4_S05C1_LENGTH                   0x00000001

#define _LCDDATA4_S06C1_POSITION                 0x00000006
#define _LCDDATA4_S06C1_MASK                     0x00000040
#define _LCDDATA4_S06C1_LENGTH                   0x00000001

#define _LCDDATA4_S07C1_POSITION                 0x00000007
#define _LCDDATA4_S07C1_MASK                     0x00000080
#define _LCDDATA4_S07C1_LENGTH                   0x00000001

#define _LCDDATA4_S08C1_POSITION                 0x00000008
#define _LCDDATA4_S08C1_MASK                     0x00000100
#define _LCDDATA4_S08C1_LENGTH                   0x00000001

#define _LCDDATA4_S09C1_POSITION                 0x00000009
#define _LCDDATA4_S09C1_MASK                     0x00000200
#define _LCDDATA4_S09C1_LENGTH                   0x00000001

#define _LCDDATA4_S10C1_POSITION                 0x0000000A
#define _LCDDATA4_S10C1_MASK                     0x00000400
#define _LCDDATA4_S10C1_LENGTH                   0x00000001

#define _LCDDATA4_S11C1_POSITION                 0x0000000B
#define _LCDDATA4_S11C1_MASK                     0x00000800
#define _LCDDATA4_S11C1_LENGTH                   0x00000001

#define _LCDDATA4_S12C1_POSITION                 0x0000000C
#define _LCDDATA4_S12C1_MASK                     0x00001000
#define _LCDDATA4_S12C1_LENGTH                   0x00000001

#define _LCDDATA4_S13C1_POSITION                 0x0000000D
#define _LCDDATA4_S13C1_MASK                     0x00002000
#define _LCDDATA4_S13C1_LENGTH                   0x00000001

#define _LCDDATA4_S14C1_POSITION                 0x0000000E
#define _LCDDATA4_S14C1_MASK                     0x00004000
#define _LCDDATA4_S14C1_LENGTH                   0x00000001

#define _LCDDATA4_S15C1_POSITION                 0x0000000F
#define _LCDDATA4_S15C1_MASK                     0x00008000
#define _LCDDATA4_S15C1_LENGTH                   0x00000001

#define _LCDDATA5_S16C1_POSITION                 0x00000000
#define _LCDDATA5_S16C1_MASK                     0x00000001
#define _LCDDATA5_S16C1_LENGTH                   0x00000001

#define _LCDDATA5_S17C1_POSITION                 0x00000001
#define _LCDDATA5_S17C1_MASK                     0x00000002
#define _LCDDATA5_S17C1_LENGTH                   0x00000001

#define _LCDDATA5_S18C1_POSITION                 0x00000002
#define _LCDDATA5_S18C1_MASK                     0x00000004
#define _LCDDATA5_S18C1_LENGTH                   0x00000001

#define _LCDDATA5_S19C1_POSITION                 0x00000003
#define _LCDDATA5_S19C1_MASK                     0x00000008
#define _LCDDATA5_S19C1_LENGTH                   0x00000001

#define _LCDDATA5_S20C1_POSITION                 0x00000004
#define _LCDDATA5_S20C1_MASK                     0x00000010
#define _LCDDATA5_S20C1_LENGTH                   0x00000001

#define _LCDDATA5_S21C1_POSITION                 0x00000005
#define _LCDDATA5_S21C1_MASK                     0x00000020
#define _LCDDATA5_S21C1_LENGTH                   0x00000001

#define _LCDDATA5_S22C1_POSITION                 0x00000006
#define _LCDDATA5_S22C1_MASK                     0x00000040
#define _LCDDATA5_S22C1_LENGTH                   0x00000001

#define _LCDDATA5_S23C1_POSITION                 0x00000007
#define _LCDDATA5_S23C1_MASK                     0x00000080
#define _LCDDATA5_S23C1_LENGTH                   0x00000001

#define _LCDDATA5_S24C1_POSITION                 0x00000008
#define _LCDDATA5_S24C1_MASK                     0x00000100
#define _LCDDATA5_S24C1_LENGTH                   0x00000001

#define _LCDDATA5_S25C1_POSITION                 0x00000009
#define _LCDDATA5_S25C1_MASK                     0x00000200
#define _LCDDATA5_S25C1_LENGTH                   0x00000001

#define _LCDDATA5_S26C1_POSITION                 0x0000000A
#define _LCDDATA5_S26C1_MASK                     0x00000400
#define _LCDDATA5_S26C1_LENGTH                   0x00000001

#define _LCDDATA5_S27C1_POSITION                 0x0000000B
#define _LCDDATA5_S27C1_MASK                     0x00000800
#define _LCDDATA5_S27C1_LENGTH                   0x00000001

#define _LCDDATA5_S28C1_POSITION                 0x0000000C
#define _LCDDATA5_S28C1_MASK                     0x00001000
#define _LCDDATA5_S28C1_LENGTH                   0x00000001

#define _LCDDATA5_S29C1_POSITION                 0x0000000D
#define _LCDDATA5_S29C1_MASK                     0x00002000
#define _LCDDATA5_S29C1_LENGTH                   0x00000001

#define _LCDDATA5_S30C1_POSITION                 0x0000000E
#define _LCDDATA5_S30C1_MASK                     0x00004000
#define _LCDDATA5_S30C1_LENGTH                   0x00000001

#define _LCDDATA5_S31C1_POSITION                 0x0000000F
#define _LCDDATA5_S31C1_MASK                     0x00008000
#define _LCDDATA5_S31C1_LENGTH                   0x00000001

#define _LCDDATA6_S47C1_POSITION                 0x0000000F
#define _LCDDATA6_S47C1_MASK                     0x00008000
#define _LCDDATA6_S47C1_LENGTH                   0x00000001

#define _LCDDATA7_S48C1_POSITION                 0x00000000
#define _LCDDATA7_S48C1_MASK                     0x00000001
#define _LCDDATA7_S48C1_LENGTH                   0x00000001

#define _LCDDATA8_S00C2_POSITION                 0x00000000
#define _LCDDATA8_S00C2_MASK                     0x00000001
#define _LCDDATA8_S00C2_LENGTH                   0x00000001

#define _LCDDATA8_S01C2_POSITION                 0x00000001
#define _LCDDATA8_S01C2_MASK                     0x00000002
#define _LCDDATA8_S01C2_LENGTH                   0x00000001

#define _LCDDATA8_S02C2_POSITION                 0x00000002
#define _LCDDATA8_S02C2_MASK                     0x00000004
#define _LCDDATA8_S02C2_LENGTH                   0x00000001

#define _LCDDATA8_S03C2_POSITION                 0x00000003
#define _LCDDATA8_S03C2_MASK                     0x00000008
#define _LCDDATA8_S03C2_LENGTH                   0x00000001

#define _LCDDATA8_S04C2_POSITION                 0x00000004
#define _LCDDATA8_S04C2_MASK                     0x00000010
#define _LCDDATA8_S04C2_LENGTH                   0x00000001

#define _LCDDATA8_S05C2_POSITION                 0x00000005
#define _LCDDATA8_S05C2_MASK                     0x00000020
#define _LCDDATA8_S05C2_LENGTH                   0x00000001

#define _LCDDATA8_S06C2_POSITION                 0x00000006
#define _LCDDATA8_S06C2_MASK                     0x00000040
#define _LCDDATA8_S06C2_LENGTH                   0x00000001

#define _LCDDATA8_S07C2_POSITION                 0x00000007
#define _LCDDATA8_S07C2_MASK                     0x00000080
#define _LCDDATA8_S07C2_LENGTH                   0x00000001

#define _LCDDATA8_S08C2_POSITION                 0x00000008
#define _LCDDATA8_S08C2_MASK                     0x00000100
#define _LCDDATA8_S08C2_LENGTH                   0x00000001

#define _LCDDATA8_S09C2_POSITION                 0x00000009
#define _LCDDATA8_S09C2_MASK                     0x00000200
#define _LCDDATA8_S09C2_LENGTH                   0x00000001

#define _LCDDATA8_S10C2_POSITION                 0x0000000A
#define _LCDDATA8_S10C2_MASK                     0x00000400
#define _LCDDATA8_S10C2_LENGTH                   0x00000001

#define _LCDDATA8_S11C2_POSITION                 0x0000000B
#define _LCDDATA8_S11C2_MASK                     0x00000800
#define _LCDDATA8_S11C2_LENGTH                   0x00000001

#define _LCDDATA8_S12C2_POSITION                 0x0000000C
#define _LCDDATA8_S12C2_MASK                     0x00001000
#define _LCDDATA8_S12C2_LENGTH                   0x00000001

#define _LCDDATA8_S13C2_POSITION                 0x0000000D
#define _LCDDATA8_S13C2_MASK                     0x00002000
#define _LCDDATA8_S13C2_LENGTH                   0x00000001

#define _LCDDATA8_S14C2_POSITION                 0x0000000E
#define _LCDDATA8_S14C2_MASK                     0x00004000
#define _LCDDATA8_S14C2_LENGTH                   0x00000001

#define _LCDDATA8_S15C2_POSITION                 0x0000000F
#define _LCDDATA8_S15C2_MASK                     0x00008000
#define _LCDDATA8_S15C2_LENGTH                   0x00000001

#define _LCDDATA9_S16C2_POSITION                 0x00000000
#define _LCDDATA9_S16C2_MASK                     0x00000001
#define _LCDDATA9_S16C2_LENGTH                   0x00000001

#define _LCDDATA9_S17C2_POSITION                 0x00000001
#define _LCDDATA9_S17C2_MASK                     0x00000002
#define _LCDDATA9_S17C2_LENGTH                   0x00000001

#define _LCDDATA9_S18C2_POSITION                 0x00000002
#define _LCDDATA9_S18C2_MASK                     0x00000004
#define _LCDDATA9_S18C2_LENGTH                   0x00000001

#define _LCDDATA9_S19C2_POSITION                 0x00000003
#define _LCDDATA9_S19C2_MASK                     0x00000008
#define _LCDDATA9_S19C2_LENGTH                   0x00000001

#define _LCDDATA9_S20C2_POSITION                 0x00000004
#define _LCDDATA9_S20C2_MASK                     0x00000010
#define _LCDDATA9_S20C2_LENGTH                   0x00000001

#define _LCDDATA9_S21C2_POSITION                 0x00000005
#define _LCDDATA9_S21C2_MASK                     0x00000020
#define _LCDDATA9_S21C2_LENGTH                   0x00000001

#define _LCDDATA9_S22C2_POSITION                 0x00000006
#define _LCDDATA9_S22C2_MASK                     0x00000040
#define _LCDDATA9_S22C2_LENGTH                   0x00000001

#define _LCDDATA9_S23C2_POSITION                 0x00000007
#define _LCDDATA9_S23C2_MASK                     0x00000080
#define _LCDDATA9_S23C2_LENGTH                   0x00000001

#define _LCDDATA9_S24C2_POSITION                 0x00000008
#define _LCDDATA9_S24C2_MASK                     0x00000100
#define _LCDDATA9_S24C2_LENGTH                   0x00000001

#define _LCDDATA9_S25C2_POSITION                 0x00000009
#define _LCDDATA9_S25C2_MASK                     0x00000200
#define _LCDDATA9_S25C2_LENGTH                   0x00000001

#define _LCDDATA9_S26C2_POSITION                 0x0000000A
#define _LCDDATA9_S26C2_MASK                     0x00000400
#define _LCDDATA9_S26C2_LENGTH                   0x00000001

#define _LCDDATA9_S27C2_POSITION                 0x0000000B
#define _LCDDATA9_S27C2_MASK                     0x00000800
#define _LCDDATA9_S27C2_LENGTH                   0x00000001

#define _LCDDATA9_S28C2_POSITION                 0x0000000C
#define _LCDDATA9_S28C2_MASK                     0x00001000
#define _LCDDATA9_S28C2_LENGTH                   0x00000001

#define _LCDDATA9_S29C2_POSITION                 0x0000000D
#define _LCDDATA9_S29C2_MASK                     0x00002000
#define _LCDDATA9_S29C2_LENGTH                   0x00000001

#define _LCDDATA9_S30C2_POSITION                 0x0000000E
#define _LCDDATA9_S30C2_MASK                     0x00004000
#define _LCDDATA9_S30C2_LENGTH                   0x00000001

#define _LCDDATA9_S31C2_POSITION                 0x0000000F
#define _LCDDATA9_S31C2_MASK                     0x00008000
#define _LCDDATA9_S31C2_LENGTH                   0x00000001

#define _LCDDATA10_S47C2_POSITION                0x0000000F
#define _LCDDATA10_S47C2_MASK                    0x00008000
#define _LCDDATA10_S47C2_LENGTH                  0x00000001

#define _LCDDATA11_S48C2_POSITION                0x00000000
#define _LCDDATA11_S48C2_MASK                    0x00000001
#define _LCDDATA11_S48C2_LENGTH                  0x00000001

#define _LCDDATA12_S00C3_POSITION                0x00000000
#define _LCDDATA12_S00C3_MASK                    0x00000001
#define _LCDDATA12_S00C3_LENGTH                  0x00000001

#define _LCDDATA12_S01C3_POSITION                0x00000001
#define _LCDDATA12_S01C3_MASK                    0x00000002
#define _LCDDATA12_S01C3_LENGTH                  0x00000001

#define _LCDDATA12_S02C3_POSITION                0x00000002
#define _LCDDATA12_S02C3_MASK                    0x00000004
#define _LCDDATA12_S02C3_LENGTH                  0x00000001

#define _LCDDATA12_S03C3_POSITION                0x00000003
#define _LCDDATA12_S03C3_MASK                    0x00000008
#define _LCDDATA12_S03C3_LENGTH                  0x00000001

#define _LCDDATA12_S04C3_POSITION                0x00000004
#define _LCDDATA12_S04C3_MASK                    0x00000010
#define _LCDDATA12_S04C3_LENGTH                  0x00000001

#define _LCDDATA12_S05C3_POSITION                0x00000005
#define _LCDDATA12_S05C3_MASK                    0x00000020
#define _LCDDATA12_S05C3_LENGTH                  0x00000001

#define _LCDDATA12_S06C3_POSITION                0x00000006
#define _LCDDATA12_S06C3_MASK                    0x00000040
#define _LCDDATA12_S06C3_LENGTH                  0x00000001

#define _LCDDATA12_S07C3_POSITION                0x00000007
#define _LCDDATA12_S07C3_MASK                    0x00000080
#define _LCDDATA12_S07C3_LENGTH                  0x00000001

#define _LCDDATA12_S08C3_POSITION                0x00000008
#define _LCDDATA12_S08C3_MASK                    0x00000100
#define _LCDDATA12_S08C3_LENGTH                  0x00000001

#define _LCDDATA12_S09C3_POSITION                0x00000009
#define _LCDDATA12_S09C3_MASK                    0x00000200
#define _LCDDATA12_S09C3_LENGTH                  0x00000001

#define _LCDDATA12_S10C3_POSITION                0x0000000A
#define _LCDDATA12_S10C3_MASK                    0x00000400
#define _LCDDATA12_S10C3_LENGTH                  0x00000001

#define _LCDDATA12_S11C3_POSITION                0x0000000B
#define _LCDDATA12_S11C3_MASK                    0x00000800
#define _LCDDATA12_S11C3_LENGTH                  0x00000001

#define _LCDDATA12_S12C3_POSITION                0x0000000C
#define _LCDDATA12_S12C3_MASK                    0x00001000
#define _LCDDATA12_S12C3_LENGTH                  0x00000001

#define _LCDDATA12_S13C3_POSITION                0x0000000D
#define _LCDDATA12_S13C3_MASK                    0x00002000
#define _LCDDATA12_S13C3_LENGTH                  0x00000001

#define _LCDDATA12_S14C3_POSITION                0x0000000E
#define _LCDDATA12_S14C3_MASK                    0x00004000
#define _LCDDATA12_S14C3_LENGTH                  0x00000001

#define _LCDDATA12_S15C3_POSITION                0x0000000F
#define _LCDDATA12_S15C3_MASK                    0x00008000
#define _LCDDATA12_S15C3_LENGTH                  0x00000001

#define _LCDDATA13_S16C3_POSITION                0x00000000
#define _LCDDATA13_S16C3_MASK                    0x00000001
#define _LCDDATA13_S16C3_LENGTH                  0x00000001

#define _LCDDATA13_S17C3_POSITION                0x00000001
#define _LCDDATA13_S17C3_MASK                    0x00000002
#define _LCDDATA13_S17C3_LENGTH                  0x00000001

#define _LCDDATA13_S18C3_POSITION                0x00000002
#define _LCDDATA13_S18C3_MASK                    0x00000004
#define _LCDDATA13_S18C3_LENGTH                  0x00000001

#define _LCDDATA13_S19C3_POSITION                0x00000003
#define _LCDDATA13_S19C3_MASK                    0x00000008
#define _LCDDATA13_S19C3_LENGTH                  0x00000001

#define _LCDDATA13_S20C3_POSITION                0x00000004
#define _LCDDATA13_S20C3_MASK                    0x00000010
#define _LCDDATA13_S20C3_LENGTH                  0x00000001

#define _LCDDATA13_S21C3_POSITION                0x00000005
#define _LCDDATA13_S21C3_MASK                    0x00000020
#define _LCDDATA13_S21C3_LENGTH                  0x00000001

#define _LCDDATA13_S22C3_POSITION                0x00000006
#define _LCDDATA13_S22C3_MASK                    0x00000040
#define _LCDDATA13_S22C3_LENGTH                  0x00000001

#define _LCDDATA13_S23C3_POSITION                0x00000007
#define _LCDDATA13_S23C3_MASK                    0x00000080
#define _LCDDATA13_S23C3_LENGTH                  0x00000001

#define _LCDDATA13_S24C3_POSITION                0x00000008
#define _LCDDATA13_S24C3_MASK                    0x00000100
#define _LCDDATA13_S24C3_LENGTH                  0x00000001

#define _LCDDATA13_S25C3_POSITION                0x00000009
#define _LCDDATA13_S25C3_MASK                    0x00000200
#define _LCDDATA13_S25C3_LENGTH                  0x00000001

#define _LCDDATA13_S26C3_POSITION                0x0000000A
#define _LCDDATA13_S26C3_MASK                    0x00000400
#define _LCDDATA13_S26C3_LENGTH                  0x00000001

#define _LCDDATA13_S27C3_POSITION                0x0000000B
#define _LCDDATA13_S27C3_MASK                    0x00000800
#define _LCDDATA13_S27C3_LENGTH                  0x00000001

#define _LCDDATA13_S28C3_POSITION                0x0000000C
#define _LCDDATA13_S28C3_MASK                    0x00001000
#define _LCDDATA13_S28C3_LENGTH                  0x00000001

#define _LCDDATA13_S29C3_POSITION                0x0000000D
#define _LCDDATA13_S29C3_MASK                    0x00002000
#define _LCDDATA13_S29C3_LENGTH                  0x00000001

#define _LCDDATA13_S30C3_POSITION                0x0000000E
#define _LCDDATA13_S30C3_MASK                    0x00004000
#define _LCDDATA13_S30C3_LENGTH                  0x00000001

#define _LCDDATA13_S31C3_POSITION                0x0000000F
#define _LCDDATA13_S31C3_MASK                    0x00008000
#define _LCDDATA13_S31C3_LENGTH                  0x00000001

#define _LCDDATA14_S47C3_POSITION                0x0000000F
#define _LCDDATA14_S47C3_MASK                    0x00008000
#define _LCDDATA14_S47C3_LENGTH                  0x00000001

#define _LCDDATA15_S48C3_POSITION                0x00000000
#define _LCDDATA15_S48C3_MASK                    0x00000001
#define _LCDDATA15_S48C3_LENGTH                  0x00000001

#define _LCDDATA16_S00C4_POSITION                0x00000000
#define _LCDDATA16_S00C4_MASK                    0x00000001
#define _LCDDATA16_S00C4_LENGTH                  0x00000001

#define _LCDDATA16_S01C4_POSITION                0x00000001
#define _LCDDATA16_S01C4_MASK                    0x00000002
#define _LCDDATA16_S01C4_LENGTH                  0x00000001

#define _LCDDATA16_S02C4_POSITION                0x00000002
#define _LCDDATA16_S02C4_MASK                    0x00000004
#define _LCDDATA16_S02C4_LENGTH                  0x00000001

#define _LCDDATA16_S03C4_POSITION                0x00000003
#define _LCDDATA16_S03C4_MASK                    0x00000008
#define _LCDDATA16_S03C4_LENGTH                  0x00000001

#define _LCDDATA16_S04C4_POSITION                0x00000004
#define _LCDDATA16_S04C4_MASK                    0x00000010
#define _LCDDATA16_S04C4_LENGTH                  0x00000001

#define _LCDDATA16_S05C4_POSITION                0x00000005
#define _LCDDATA16_S05C4_MASK                    0x00000020
#define _LCDDATA16_S05C4_LENGTH                  0x00000001

#define _LCDDATA16_S06C4_POSITION                0x00000006
#define _LCDDATA16_S06C4_MASK                    0x00000040
#define _LCDDATA16_S06C4_LENGTH                  0x00000001

#define _LCDDATA16_S07C4_POSITION                0x00000007
#define _LCDDATA16_S07C4_MASK                    0x00000080
#define _LCDDATA16_S07C4_LENGTH                  0x00000001

#define _LCDDATA16_S08C4_POSITION                0x00000008
#define _LCDDATA16_S08C4_MASK                    0x00000100
#define _LCDDATA16_S08C4_LENGTH                  0x00000001

#define _LCDDATA16_S09C4_POSITION                0x00000009
#define _LCDDATA16_S09C4_MASK                    0x00000200
#define _LCDDATA16_S09C4_LENGTH                  0x00000001

#define _LCDDATA16_S10C4_POSITION                0x0000000A
#define _LCDDATA16_S10C4_MASK                    0x00000400
#define _LCDDATA16_S10C4_LENGTH                  0x00000001

#define _LCDDATA16_S11C4_POSITION                0x0000000B
#define _LCDDATA16_S11C4_MASK                    0x00000800
#define _LCDDATA16_S11C4_LENGTH                  0x00000001

#define _LCDDATA16_S12C4_POSITION                0x0000000C
#define _LCDDATA16_S12C4_MASK                    0x00001000
#define _LCDDATA16_S12C4_LENGTH                  0x00000001

#define _LCDDATA16_S13C4_POSITION                0x0000000D
#define _LCDDATA16_S13C4_MASK                    0x00002000
#define _LCDDATA16_S13C4_LENGTH                  0x00000001

#define _LCDDATA16_S14C4_POSITION                0x0000000E
#define _LCDDATA16_S14C4_MASK                    0x00004000
#define _LCDDATA16_S14C4_LENGTH                  0x00000001

#define _LCDDATA16_S15C4_POSITION                0x0000000F
#define _LCDDATA16_S15C4_MASK                    0x00008000
#define _LCDDATA16_S15C4_LENGTH                  0x00000001

#define _LCDDATA17_S16C4_POSITION                0x00000000
#define _LCDDATA17_S16C4_MASK                    0x00000001
#define _LCDDATA17_S16C4_LENGTH                  0x00000001

#define _LCDDATA17_S17C4_POSITION                0x00000001
#define _LCDDATA17_S17C4_MASK                    0x00000002
#define _LCDDATA17_S17C4_LENGTH                  0x00000001

#define _LCDDATA17_S18C4_POSITION                0x00000002
#define _LCDDATA17_S18C4_MASK                    0x00000004
#define _LCDDATA17_S18C4_LENGTH                  0x00000001

#define _LCDDATA17_S19C4_POSITION                0x00000003
#define _LCDDATA17_S19C4_MASK                    0x00000008
#define _LCDDATA17_S19C4_LENGTH                  0x00000001

#define _LCDDATA17_S20C4_POSITION                0x00000004
#define _LCDDATA17_S20C4_MASK                    0x00000010
#define _LCDDATA17_S20C4_LENGTH                  0x00000001

#define _LCDDATA17_S21C4_POSITION                0x00000005
#define _LCDDATA17_S21C4_MASK                    0x00000020
#define _LCDDATA17_S21C4_LENGTH                  0x00000001

#define _LCDDATA17_S22C4_POSITION                0x00000006
#define _LCDDATA17_S22C4_MASK                    0x00000040
#define _LCDDATA17_S22C4_LENGTH                  0x00000001

#define _LCDDATA17_S23C4_POSITION                0x00000007
#define _LCDDATA17_S23C4_MASK                    0x00000080
#define _LCDDATA17_S23C4_LENGTH                  0x00000001

#define _LCDDATA17_S24C4_POSITION                0x00000008
#define _LCDDATA17_S24C4_MASK                    0x00000100
#define _LCDDATA17_S24C4_LENGTH                  0x00000001

#define _LCDDATA17_S25C4_POSITION                0x00000009
#define _LCDDATA17_S25C4_MASK                    0x00000200
#define _LCDDATA17_S25C4_LENGTH                  0x00000001

#define _LCDDATA17_S26C4_POSITION                0x0000000A
#define _LCDDATA17_S26C4_MASK                    0x00000400
#define _LCDDATA17_S26C4_LENGTH                  0x00000001

#define _LCDDATA17_S27C4_POSITION                0x0000000B
#define _LCDDATA17_S27C4_MASK                    0x00000800
#define _LCDDATA17_S27C4_LENGTH                  0x00000001

#define _LCDDATA17_S28C4_POSITION                0x0000000C
#define _LCDDATA17_S28C4_MASK                    0x00001000
#define _LCDDATA17_S28C4_LENGTH                  0x00000001

#define _LCDDATA17_S29C4_POSITION                0x0000000D
#define _LCDDATA17_S29C4_MASK                    0x00002000
#define _LCDDATA17_S29C4_LENGTH                  0x00000001

#define _LCDDATA17_S30C4_POSITION                0x0000000E
#define _LCDDATA17_S30C4_MASK                    0x00004000
#define _LCDDATA17_S30C4_LENGTH                  0x00000001

#define _LCDDATA17_S31C4_POSITION                0x0000000F
#define _LCDDATA17_S31C4_MASK                    0x00008000
#define _LCDDATA17_S31C4_LENGTH                  0x00000001

#define _LCDDATA18_S47C4_POSITION                0x0000000F
#define _LCDDATA18_S47C4_MASK                    0x00008000
#define _LCDDATA18_S47C4_LENGTH                  0x00000001

#define _LCDDATA19_S48C4_POSITION                0x00000000
#define _LCDDATA19_S48C4_MASK                    0x00000001
#define _LCDDATA19_S48C4_LENGTH                  0x00000001

#define _LCDDATA20_S00C5_POSITION                0x00000000
#define _LCDDATA20_S00C5_MASK                    0x00000001
#define _LCDDATA20_S00C5_LENGTH                  0x00000001

#define _LCDDATA20_S01C5_POSITION                0x00000001
#define _LCDDATA20_S01C5_MASK                    0x00000002
#define _LCDDATA20_S01C5_LENGTH                  0x00000001

#define _LCDDATA20_S02C5_POSITION                0x00000002
#define _LCDDATA20_S02C5_MASK                    0x00000004
#define _LCDDATA20_S02C5_LENGTH                  0x00000001

#define _LCDDATA20_S03C5_POSITION                0x00000003
#define _LCDDATA20_S03C5_MASK                    0x00000008
#define _LCDDATA20_S03C5_LENGTH                  0x00000001

#define _LCDDATA20_S04C5_POSITION                0x00000004
#define _LCDDATA20_S04C5_MASK                    0x00000010
#define _LCDDATA20_S04C5_LENGTH                  0x00000001

#define _LCDDATA20_S05C5_POSITION                0x00000005
#define _LCDDATA20_S05C5_MASK                    0x00000020
#define _LCDDATA20_S05C5_LENGTH                  0x00000001

#define _LCDDATA20_S06C5_POSITION                0x00000006
#define _LCDDATA20_S06C5_MASK                    0x00000040
#define _LCDDATA20_S06C5_LENGTH                  0x00000001

#define _LCDDATA20_S07C5_POSITION                0x00000007
#define _LCDDATA20_S07C5_MASK                    0x00000080
#define _LCDDATA20_S07C5_LENGTH                  0x00000001

#define _LCDDATA20_S08C5_POSITION                0x00000008
#define _LCDDATA20_S08C5_MASK                    0x00000100
#define _LCDDATA20_S08C5_LENGTH                  0x00000001

#define _LCDDATA20_S09C5_POSITION                0x00000009
#define _LCDDATA20_S09C5_MASK                    0x00000200
#define _LCDDATA20_S09C5_LENGTH                  0x00000001

#define _LCDDATA20_S10C5_POSITION                0x0000000A
#define _LCDDATA20_S10C5_MASK                    0x00000400
#define _LCDDATA20_S10C5_LENGTH                  0x00000001

#define _LCDDATA20_S11C5_POSITION                0x0000000B
#define _LCDDATA20_S11C5_MASK                    0x00000800
#define _LCDDATA20_S11C5_LENGTH                  0x00000001

#define _LCDDATA20_S12C5_POSITION                0x0000000C
#define _LCDDATA20_S12C5_MASK                    0x00001000
#define _LCDDATA20_S12C5_LENGTH                  0x00000001

#define _LCDDATA20_S13C5_POSITION                0x0000000D
#define _LCDDATA20_S13C5_MASK                    0x00002000
#define _LCDDATA20_S13C5_LENGTH                  0x00000001

#define _LCDDATA20_S14C5_POSITION                0x0000000E
#define _LCDDATA20_S14C5_MASK                    0x00004000
#define _LCDDATA20_S14C5_LENGTH                  0x00000001

#define _LCDDATA20_S15C5_POSITION                0x0000000F
#define _LCDDATA20_S15C5_MASK                    0x00008000
#define _LCDDATA20_S15C5_LENGTH                  0x00000001

#define _LCDDATA21_S16C5_POSITION                0x00000000
#define _LCDDATA21_S16C5_MASK                    0x00000001
#define _LCDDATA21_S16C5_LENGTH                  0x00000001

#define _LCDDATA21_S17C5_POSITION                0x00000001
#define _LCDDATA21_S17C5_MASK                    0x00000002
#define _LCDDATA21_S17C5_LENGTH                  0x00000001

#define _LCDDATA21_S18C5_POSITION                0x00000002
#define _LCDDATA21_S18C5_MASK                    0x00000004
#define _LCDDATA21_S18C5_LENGTH                  0x00000001

#define _LCDDATA21_S19C5_POSITION                0x00000003
#define _LCDDATA21_S19C5_MASK                    0x00000008
#define _LCDDATA21_S19C5_LENGTH                  0x00000001

#define _LCDDATA21_S20C5_POSITION                0x00000004
#define _LCDDATA21_S20C5_MASK                    0x00000010
#define _LCDDATA21_S20C5_LENGTH                  0x00000001

#define _LCDDATA21_S21C5_POSITION                0x00000005
#define _LCDDATA21_S21C5_MASK                    0x00000020
#define _LCDDATA21_S21C5_LENGTH                  0x00000001

#define _LCDDATA21_S22C5_POSITION                0x00000006
#define _LCDDATA21_S22C5_MASK                    0x00000040
#define _LCDDATA21_S22C5_LENGTH                  0x00000001

#define _LCDDATA21_S23C5_POSITION                0x00000007
#define _LCDDATA21_S23C5_MASK                    0x00000080
#define _LCDDATA21_S23C5_LENGTH                  0x00000001

#define _LCDDATA21_S24C5_POSITION                0x00000008
#define _LCDDATA21_S24C5_MASK                    0x00000100
#define _LCDDATA21_S24C5_LENGTH                  0x00000001

#define _LCDDATA21_S25C5_POSITION                0x00000009
#define _LCDDATA21_S25C5_MASK                    0x00000200
#define _LCDDATA21_S25C5_LENGTH                  0x00000001

#define _LCDDATA21_S26C5_POSITION                0x0000000A
#define _LCDDATA21_S26C5_MASK                    0x00000400
#define _LCDDATA21_S26C5_LENGTH                  0x00000001

#define _LCDDATA21_S27C5_POSITION                0x0000000B
#define _LCDDATA21_S27C5_MASK                    0x00000800
#define _LCDDATA21_S27C5_LENGTH                  0x00000001

#define _LCDDATA21_S28C5_POSITION                0x0000000C
#define _LCDDATA21_S28C5_MASK                    0x00001000
#define _LCDDATA21_S28C5_LENGTH                  0x00000001

#define _LCDDATA21_S29C5_POSITION                0x0000000D
#define _LCDDATA21_S29C5_MASK                    0x00002000
#define _LCDDATA21_S29C5_LENGTH                  0x00000001

#define _LCDDATA21_S30C5_POSITION                0x0000000E
#define _LCDDATA21_S30C5_MASK                    0x00004000
#define _LCDDATA21_S30C5_LENGTH                  0x00000001

#define _LCDDATA21_S31C5_POSITION                0x0000000F
#define _LCDDATA21_S31C5_MASK                    0x00008000
#define _LCDDATA21_S31C5_LENGTH                  0x00000001

#define _LCDDATA22_S47C5_POSITION                0x0000000F
#define _LCDDATA22_S47C5_MASK                    0x00008000
#define _LCDDATA22_S47C5_LENGTH                  0x00000001

#define _LCDDATA23_S48C5_POSITION                0x00000000
#define _LCDDATA23_S48C5_MASK                    0x00000001
#define _LCDDATA23_S48C5_LENGTH                  0x00000001

#define _LCDDATA24_S00C6_POSITION                0x00000000
#define _LCDDATA24_S00C6_MASK                    0x00000001
#define _LCDDATA24_S00C6_LENGTH                  0x00000001

#define _LCDDATA24_S01C6_POSITION                0x00000001
#define _LCDDATA24_S01C6_MASK                    0x00000002
#define _LCDDATA24_S01C6_LENGTH                  0x00000001

#define _LCDDATA24_S02C6_POSITION                0x00000002
#define _LCDDATA24_S02C6_MASK                    0x00000004
#define _LCDDATA24_S02C6_LENGTH                  0x00000001

#define _LCDDATA24_S03C6_POSITION                0x00000003
#define _LCDDATA24_S03C6_MASK                    0x00000008
#define _LCDDATA24_S03C6_LENGTH                  0x00000001

#define _LCDDATA24_S04C6_POSITION                0x00000004
#define _LCDDATA24_S04C6_MASK                    0x00000010
#define _LCDDATA24_S04C6_LENGTH                  0x00000001

#define _LCDDATA24_S05C6_POSITION                0x00000005
#define _LCDDATA24_S05C6_MASK                    0x00000020
#define _LCDDATA24_S05C6_LENGTH                  0x00000001

#define _LCDDATA24_S06C6_POSITION                0x00000006
#define _LCDDATA24_S06C6_MASK                    0x00000040
#define _LCDDATA24_S06C6_LENGTH                  0x00000001

#define _LCDDATA24_S07C6_POSITION                0x00000007
#define _LCDDATA24_S07C6_MASK                    0x00000080
#define _LCDDATA24_S07C6_LENGTH                  0x00000001

#define _LCDDATA24_S08C6_POSITION                0x00000008
#define _LCDDATA24_S08C6_MASK                    0x00000100
#define _LCDDATA24_S08C6_LENGTH                  0x00000001

#define _LCDDATA24_S09C6_POSITION                0x00000009
#define _LCDDATA24_S09C6_MASK                    0x00000200
#define _LCDDATA24_S09C6_LENGTH                  0x00000001

#define _LCDDATA24_S10C6_POSITION                0x0000000A
#define _LCDDATA24_S10C6_MASK                    0x00000400
#define _LCDDATA24_S10C6_LENGTH                  0x00000001

#define _LCDDATA24_S11C6_POSITION                0x0000000B
#define _LCDDATA24_S11C6_MASK                    0x00000800
#define _LCDDATA24_S11C6_LENGTH                  0x00000001

#define _LCDDATA24_S12C6_POSITION                0x0000000C
#define _LCDDATA24_S12C6_MASK                    0x00001000
#define _LCDDATA24_S12C6_LENGTH                  0x00000001

#define _LCDDATA24_S13C6_POSITION                0x0000000D
#define _LCDDATA24_S13C6_MASK                    0x00002000
#define _LCDDATA24_S13C6_LENGTH                  0x00000001

#define _LCDDATA24_S14C6_POSITION                0x0000000E
#define _LCDDATA24_S14C6_MASK                    0x00004000
#define _LCDDATA24_S14C6_LENGTH                  0x00000001

#define _LCDDATA24_S15C6_POSITION                0x0000000F
#define _LCDDATA24_S15C6_MASK                    0x00008000
#define _LCDDATA24_S15C6_LENGTH                  0x00000001

#define _LCDDATA25_S16C6_POSITION                0x00000000
#define _LCDDATA25_S16C6_MASK                    0x00000001
#define _LCDDATA25_S16C6_LENGTH                  0x00000001

#define _LCDDATA25_S17C6_POSITION                0x00000001
#define _LCDDATA25_S17C6_MASK                    0x00000002
#define _LCDDATA25_S17C6_LENGTH                  0x00000001

#define _LCDDATA25_S18C6_POSITION                0x00000002
#define _LCDDATA25_S18C6_MASK                    0x00000004
#define _LCDDATA25_S18C6_LENGTH                  0x00000001

#define _LCDDATA25_S19C6_POSITION                0x00000003
#define _LCDDATA25_S19C6_MASK                    0x00000008
#define _LCDDATA25_S19C6_LENGTH                  0x00000001

#define _LCDDATA25_S20C6_POSITION                0x00000004
#define _LCDDATA25_S20C6_MASK                    0x00000010
#define _LCDDATA25_S20C6_LENGTH                  0x00000001

#define _LCDDATA25_S21C6_POSITION                0x00000005
#define _LCDDATA25_S21C6_MASK                    0x00000020
#define _LCDDATA25_S21C6_LENGTH                  0x00000001

#define _LCDDATA25_S22C6_POSITION                0x00000006
#define _LCDDATA25_S22C6_MASK                    0x00000040
#define _LCDDATA25_S22C6_LENGTH                  0x00000001

#define _LCDDATA25_S23C6_POSITION                0x00000007
#define _LCDDATA25_S23C6_MASK                    0x00000080
#define _LCDDATA25_S23C6_LENGTH                  0x00000001

#define _LCDDATA25_S24C6_POSITION                0x00000008
#define _LCDDATA25_S24C6_MASK                    0x00000100
#define _LCDDATA25_S24C6_LENGTH                  0x00000001

#define _LCDDATA25_S25C6_POSITION                0x00000009
#define _LCDDATA25_S25C6_MASK                    0x00000200
#define _LCDDATA25_S25C6_LENGTH                  0x00000001

#define _LCDDATA25_S26C6_POSITION                0x0000000A
#define _LCDDATA25_S26C6_MASK                    0x00000400
#define _LCDDATA25_S26C6_LENGTH                  0x00000001

#define _LCDDATA25_S27C6_POSITION                0x0000000B
#define _LCDDATA25_S27C6_MASK                    0x00000800
#define _LCDDATA25_S27C6_LENGTH                  0x00000001

#define _LCDDATA25_S28C6_POSITION                0x0000000C
#define _LCDDATA25_S28C6_MASK                    0x00001000
#define _LCDDATA25_S28C6_LENGTH                  0x00000001

#define _LCDDATA25_S29C6_POSITION                0x0000000D
#define _LCDDATA25_S29C6_MASK                    0x00002000
#define _LCDDATA25_S29C6_LENGTH                  0x00000001

#define _LCDDATA25_S30C6_POSITION                0x0000000E
#define _LCDDATA25_S30C6_MASK                    0x00004000
#define _LCDDATA25_S30C6_LENGTH                  0x00000001

#define _LCDDATA25_S31C6_POSITION                0x0000000F
#define _LCDDATA25_S31C6_MASK                    0x00008000
#define _LCDDATA25_S31C6_LENGTH                  0x00000001

#define _LCDDATA26_S47C6_POSITION                0x0000000F
#define _LCDDATA26_S47C6_MASK                    0x00008000
#define _LCDDATA26_S47C6_LENGTH                  0x00000001

#define _LCDDATA27_S48C6_POSITION                0x00000000
#define _LCDDATA27_S48C6_MASK                    0x00000001
#define _LCDDATA27_S48C6_LENGTH                  0x00000001

#define _LCDDATA28_S00C7_POSITION                0x00000000
#define _LCDDATA28_S00C7_MASK                    0x00000001
#define _LCDDATA28_S00C7_LENGTH                  0x00000001

#define _LCDDATA28_S01C7_POSITION                0x00000001
#define _LCDDATA28_S01C7_MASK                    0x00000002
#define _LCDDATA28_S01C7_LENGTH                  0x00000001

#define _LCDDATA28_S02C7_POSITION                0x00000002
#define _LCDDATA28_S02C7_MASK                    0x00000004
#define _LCDDATA28_S02C7_LENGTH                  0x00000001

#define _LCDDATA28_S03C7_POSITION                0x00000003
#define _LCDDATA28_S03C7_MASK                    0x00000008
#define _LCDDATA28_S03C7_LENGTH                  0x00000001

#define _LCDDATA28_S04C7_POSITION                0x00000004
#define _LCDDATA28_S04C7_MASK                    0x00000010
#define _LCDDATA28_S04C7_LENGTH                  0x00000001

#define _LCDDATA28_S05C7_POSITION                0x00000005
#define _LCDDATA28_S05C7_MASK                    0x00000020
#define _LCDDATA28_S05C7_LENGTH                  0x00000001

#define _LCDDATA28_S06C7_POSITION                0x00000006
#define _LCDDATA28_S06C7_MASK                    0x00000040
#define _LCDDATA28_S06C7_LENGTH                  0x00000001

#define _LCDDATA28_S07C7_POSITION                0x00000007
#define _LCDDATA28_S07C7_MASK                    0x00000080
#define _LCDDATA28_S07C7_LENGTH                  0x00000001

#define _LCDDATA28_S08C7_POSITION                0x00000008
#define _LCDDATA28_S08C7_MASK                    0x00000100
#define _LCDDATA28_S08C7_LENGTH                  0x00000001

#define _LCDDATA28_S09C7_POSITION                0x00000009
#define _LCDDATA28_S09C7_MASK                    0x00000200
#define _LCDDATA28_S09C7_LENGTH                  0x00000001

#define _LCDDATA28_S10C7_POSITION                0x0000000A
#define _LCDDATA28_S10C7_MASK                    0x00000400
#define _LCDDATA28_S10C7_LENGTH                  0x00000001

#define _LCDDATA28_S11C7_POSITION                0x0000000B
#define _LCDDATA28_S11C7_MASK                    0x00000800
#define _LCDDATA28_S11C7_LENGTH                  0x00000001

#define _LCDDATA28_S12C7_POSITION                0x0000000C
#define _LCDDATA28_S12C7_MASK                    0x00001000
#define _LCDDATA28_S12C7_LENGTH                  0x00000001

#define _LCDDATA28_S13C7_POSITION                0x0000000D
#define _LCDDATA28_S13C7_MASK                    0x00002000
#define _LCDDATA28_S13C7_LENGTH                  0x00000001

#define _LCDDATA28_S14C7_POSITION                0x0000000E
#define _LCDDATA28_S14C7_MASK                    0x00004000
#define _LCDDATA28_S14C7_LENGTH                  0x00000001

#define _LCDDATA28_S15C7_POSITION                0x0000000F
#define _LCDDATA28_S15C7_MASK                    0x00008000
#define _LCDDATA28_S15C7_LENGTH                  0x00000001

#define _LCDDATA29_S16C7_POSITION                0x00000000
#define _LCDDATA29_S16C7_MASK                    0x00000001
#define _LCDDATA29_S16C7_LENGTH                  0x00000001

#define _LCDDATA29_S17C7_POSITION                0x00000001
#define _LCDDATA29_S17C7_MASK                    0x00000002
#define _LCDDATA29_S17C7_LENGTH                  0x00000001

#define _LCDDATA29_S18C7_POSITION                0x00000002
#define _LCDDATA29_S18C7_MASK                    0x00000004
#define _LCDDATA29_S18C7_LENGTH                  0x00000001

#define _LCDDATA29_S19C7_POSITION                0x00000003
#define _LCDDATA29_S19C7_MASK                    0x00000008
#define _LCDDATA29_S19C7_LENGTH                  0x00000001

#define _LCDDATA29_S20C7_POSITION                0x00000004
#define _LCDDATA29_S20C7_MASK                    0x00000010
#define _LCDDATA29_S20C7_LENGTH                  0x00000001

#define _LCDDATA29_S21C7_POSITION                0x00000005
#define _LCDDATA29_S21C7_MASK                    0x00000020
#define _LCDDATA29_S21C7_LENGTH                  0x00000001

#define _LCDDATA29_S22C7_POSITION                0x00000006
#define _LCDDATA29_S22C7_MASK                    0x00000040
#define _LCDDATA29_S22C7_LENGTH                  0x00000001

#define _LCDDATA29_S23C7_POSITION                0x00000007
#define _LCDDATA29_S23C7_MASK                    0x00000080
#define _LCDDATA29_S23C7_LENGTH                  0x00000001

#define _LCDDATA29_S24C7_POSITION                0x00000008
#define _LCDDATA29_S24C7_MASK                    0x00000100
#define _LCDDATA29_S24C7_LENGTH                  0x00000001

#define _LCDDATA29_S25C7_POSITION                0x00000009
#define _LCDDATA29_S25C7_MASK                    0x00000200
#define _LCDDATA29_S25C7_LENGTH                  0x00000001

#define _LCDDATA29_S26C7_POSITION                0x0000000A
#define _LCDDATA29_S26C7_MASK                    0x00000400
#define _LCDDATA29_S26C7_LENGTH                  0x00000001

#define _LCDDATA29_S27C7_POSITION                0x0000000B
#define _LCDDATA29_S27C7_MASK                    0x00000800
#define _LCDDATA29_S27C7_LENGTH                  0x00000001

#define _LCDDATA29_S28C7_POSITION                0x0000000C
#define _LCDDATA29_S28C7_MASK                    0x00001000
#define _LCDDATA29_S28C7_LENGTH                  0x00000001

#define _LCDDATA29_S29C7_POSITION                0x0000000D
#define _LCDDATA29_S29C7_MASK                    0x00002000
#define _LCDDATA29_S29C7_LENGTH                  0x00000001

#define _LCDDATA29_S30C7_POSITION                0x0000000E
#define _LCDDATA29_S30C7_MASK                    0x00004000
#define _LCDDATA29_S30C7_LENGTH                  0x00000001

#define _LCDDATA29_S31C7_POSITION                0x0000000F
#define _LCDDATA29_S31C7_MASK                    0x00008000
#define _LCDDATA29_S31C7_LENGTH                  0x00000001

#define _LCDDATA30_S47C7_POSITION                0x0000000F
#define _LCDDATA30_S47C7_MASK                    0x00008000
#define _LCDDATA30_S47C7_LENGTH                  0x00000001

#define _LCDDATA31_S48C7_POSITION                0x00000000
#define _LCDDATA31_S48C7_MASK                    0x00000001
#define _LCDDATA31_S48C7_LENGTH                  0x00000001

#define _PMCON1_IRQM_POSITION                    0x00000000
#define _PMCON1_IRQM_MASK                        0x00000003
#define _PMCON1_IRQM_LENGTH                      0x00000002

#define _PMCON1_BUSKEEP_POSITION                 0x00000002
#define _PMCON1_BUSKEEP_MASK                     0x00000004
#define _PMCON1_BUSKEEP_LENGTH                   0x00000001

#define _PMCON1_ALMODE_POSITION                  0x00000004
#define _PMCON1_ALMODE_MASK                      0x00000010
#define _PMCON1_ALMODE_LENGTH                    0x00000001

#define _PMCON1_ALP_POSITION                     0x00000005
#define _PMCON1_ALP_MASK                         0x00000020
#define _PMCON1_ALP_LENGTH                       0x00000001

#define _PMCON1_CSF_POSITION                     0x00000006
#define _PMCON1_CSF_MASK                         0x000000C0
#define _PMCON1_CSF_LENGTH                       0x00000002

#define _PMCON1_MODE_POSITION                    0x00000008
#define _PMCON1_MODE_MASK                        0x00000300
#define _PMCON1_MODE_LENGTH                      0x00000002

#define _PMCON1_ADRMUX_POSITION                  0x0000000B
#define _PMCON1_ADRMUX_MASK                      0x00001800
#define _PMCON1_ADRMUX_LENGTH                    0x00000002

#define _PMCON1_PSIDL_POSITION                   0x0000000D
#define _PMCON1_PSIDL_MASK                       0x00002000
#define _PMCON1_PSIDL_LENGTH                     0x00000001

#define _PMCON1_PMPEN_POSITION                   0x0000000F
#define _PMCON1_PMPEN_MASK                       0x00008000
#define _PMCON1_PMPEN_LENGTH                     0x00000001

#define _PMCON1_IRQM0_POSITION                   0x00000000
#define _PMCON1_IRQM0_MASK                       0x00000001
#define _PMCON1_IRQM0_LENGTH                     0x00000001

#define _PMCON1_IRQM1_POSITION                   0x00000001
#define _PMCON1_IRQM1_MASK                       0x00000002
#define _PMCON1_IRQM1_LENGTH                     0x00000001

#define _PMCON1_CSF0_POSITION                    0x00000006
#define _PMCON1_CSF0_MASK                        0x00000040
#define _PMCON1_CSF0_LENGTH                      0x00000001

#define _PMCON1_CSF1_POSITION                    0x00000007
#define _PMCON1_CSF1_MASK                        0x00000080
#define _PMCON1_CSF1_LENGTH                      0x00000001

#define _PMCON1_MODE0_POSITION                   0x00000008
#define _PMCON1_MODE0_MASK                       0x00000100
#define _PMCON1_MODE0_LENGTH                     0x00000001

#define _PMCON1_MODE1_POSITION                   0x00000009
#define _PMCON1_MODE1_MASK                       0x00000200
#define _PMCON1_MODE1_LENGTH                     0x00000001

#define _PMCON1_ADRMUX0_POSITION                 0x0000000B
#define _PMCON1_ADRMUX0_MASK                     0x00000800
#define _PMCON1_ADRMUX0_LENGTH                   0x00000001

#define _PMCON1_ADRMUX1_POSITION                 0x0000000C
#define _PMCON1_ADRMUX1_MASK                     0x00001000
#define _PMCON1_ADRMUX1_LENGTH                   0x00000001

#define _PMCON2_RADDR_POSITION                   0x00000000
#define _PMCON2_RADDR_MASK                       0x000000FF
#define _PMCON2_RADDR_LENGTH                     0x00000008

#define _PMCON2_TIMEOUT_POSITION                 0x0000000C
#define _PMCON2_TIMEOUT_MASK                     0x00001000
#define _PMCON2_TIMEOUT_LENGTH                   0x00000001

#define _PMCON2_ERROR_POSITION                   0x0000000D
#define _PMCON2_ERROR_MASK                       0x00002000
#define _PMCON2_ERROR_LENGTH                     0x00000001

#define _PMCON2_BUSY_POSITION                    0x0000000F
#define _PMCON2_BUSY_MASK                        0x00008000
#define _PMCON2_BUSY_LENGTH                      0x00000001

#define _PMCON2_RADDR16_POSITION                 0x00000000
#define _PMCON2_RADDR16_MASK                     0x00000001
#define _PMCON2_RADDR16_LENGTH                   0x00000001

#define _PMCON2_RADDR17_POSITION                 0x00000001
#define _PMCON2_RADDR17_MASK                     0x00000002
#define _PMCON2_RADDR17_LENGTH                   0x00000001

#define _PMCON2_RADDR18_POSITION                 0x00000002
#define _PMCON2_RADDR18_MASK                     0x00000004
#define _PMCON2_RADDR18_LENGTH                   0x00000001

#define _PMCON2_RADDR19_POSITION                 0x00000003
#define _PMCON2_RADDR19_MASK                     0x00000008
#define _PMCON2_RADDR19_LENGTH                   0x00000001

#define _PMCON2_RADDR20_POSITION                 0x00000004
#define _PMCON2_RADDR20_MASK                     0x00000010
#define _PMCON2_RADDR20_LENGTH                   0x00000001

#define _PMCON2_RADDR21_POSITION                 0x00000005
#define _PMCON2_RADDR21_MASK                     0x00000020
#define _PMCON2_RADDR21_LENGTH                   0x00000001

#define _PMCON2_RADDR22_POSITION                 0x00000006
#define _PMCON2_RADDR22_MASK                     0x00000040
#define _PMCON2_RADDR22_LENGTH                   0x00000001

#define _PMCON2_RADDR23_POSITION                 0x00000007
#define _PMCON2_RADDR23_MASK                     0x00000080
#define _PMCON2_RADDR23_LENGTH                   0x00000001

#define _PMCON3_PTEN16_POSITION                  0x00000000
#define _PMCON3_PTEN16_MASK                      0x00000001
#define _PMCON3_PTEN16_LENGTH                    0x00000001

#define _PMCON3_PTEN17_POSITION                  0x00000001
#define _PMCON3_PTEN17_MASK                      0x00000002
#define _PMCON3_PTEN17_LENGTH                    0x00000001

#define _PMCON3_PTEN18_POSITION                  0x00000002
#define _PMCON3_PTEN18_MASK                      0x00000004
#define _PMCON3_PTEN18_LENGTH                    0x00000001

#define _PMCON3_PTEN19_POSITION                  0x00000003
#define _PMCON3_PTEN19_MASK                      0x00000008
#define _PMCON3_PTEN19_LENGTH                    0x00000001

#define _PMCON3_PTEN20_POSITION                  0x00000004
#define _PMCON3_PTEN20_MASK                      0x00000010
#define _PMCON3_PTEN20_LENGTH                    0x00000001

#define _PMCON3_PTEN21_POSITION                  0x00000005
#define _PMCON3_PTEN21_MASK                      0x00000020
#define _PMCON3_PTEN21_LENGTH                    0x00000001

#define _PMCON3_PTEN22_POSITION                  0x00000006
#define _PMCON3_PTEN22_MASK                      0x00000040
#define _PMCON3_PTEN22_LENGTH                    0x00000001

#define _PMCON3_AWAITE_POSITION                  0x00000008
#define _PMCON3_AWAITE_MASK                      0x00000100
#define _PMCON3_AWAITE_LENGTH                    0x00000001

#define _PMCON3_AWAITM_POSITION                  0x00000009
#define _PMCON3_AWAITM_MASK                      0x00000600
#define _PMCON3_AWAITM_LENGTH                    0x00000002

#define _PMCON3_PTBE0EN_POSITION                 0x0000000C
#define _PMCON3_PTBE0EN_MASK                     0x00001000
#define _PMCON3_PTBE0EN_LENGTH                   0x00000001

#define _PMCON3_PTBE1EN_POSITION                 0x0000000D
#define _PMCON3_PTBE1EN_MASK                     0x00002000
#define _PMCON3_PTBE1EN_LENGTH                   0x00000001

#define _PMCON3_PTRDEN_POSITION                  0x0000000E
#define _PMCON3_PTRDEN_MASK                      0x00004000
#define _PMCON3_PTRDEN_LENGTH                    0x00000001

#define _PMCON3_PTWREN_POSITION                  0x0000000F
#define _PMCON3_PTWREN_MASK                      0x00008000
#define _PMCON3_PTWREN_LENGTH                    0x00000001

#define _PMCON3_AWAITM0_POSITION                 0x00000009
#define _PMCON3_AWAITM0_MASK                     0x00000200
#define _PMCON3_AWAITM0_LENGTH                   0x00000001

#define _PMCON3_AWAITM1_POSITION                 0x0000000A
#define _PMCON3_AWAITM1_MASK                     0x00000400
#define _PMCON3_AWAITM1_LENGTH                   0x00000001

#define _PMCON4_PTEN0_POSITION                   0x00000000
#define _PMCON4_PTEN0_MASK                       0x00000001
#define _PMCON4_PTEN0_LENGTH                     0x00000001

#define _PMCON4_PTEN1_POSITION                   0x00000001
#define _PMCON4_PTEN1_MASK                       0x00000002
#define _PMCON4_PTEN1_LENGTH                     0x00000001

#define _PMCON4_PTEN2_POSITION                   0x00000002
#define _PMCON4_PTEN2_MASK                       0x00000004
#define _PMCON4_PTEN2_LENGTH                     0x00000001

#define _PMCON4_PTEN3_POSITION                   0x00000003
#define _PMCON4_PTEN3_MASK                       0x00000008
#define _PMCON4_PTEN3_LENGTH                     0x00000001

#define _PMCON4_PTEN4_POSITION                   0x00000004
#define _PMCON4_PTEN4_MASK                       0x00000010
#define _PMCON4_PTEN4_LENGTH                     0x00000001

#define _PMCON4_PTEN5_POSITION                   0x00000005
#define _PMCON4_PTEN5_MASK                       0x00000020
#define _PMCON4_PTEN5_LENGTH                     0x00000001

#define _PMCON4_PTEN6_POSITION                   0x00000006
#define _PMCON4_PTEN6_MASK                       0x00000040
#define _PMCON4_PTEN6_LENGTH                     0x00000001

#define _PMCON4_PTEN7_POSITION                   0x00000007
#define _PMCON4_PTEN7_MASK                       0x00000080
#define _PMCON4_PTEN7_LENGTH                     0x00000001

#define _PMCON4_PTEN8_POSITION                   0x00000008
#define _PMCON4_PTEN8_MASK                       0x00000100
#define _PMCON4_PTEN8_LENGTH                     0x00000001

#define _PMCON4_PTEN9_POSITION                   0x00000009
#define _PMCON4_PTEN9_MASK                       0x00000200
#define _PMCON4_PTEN9_LENGTH                     0x00000001

#define _PMCON4_PTEN10_POSITION                  0x0000000A
#define _PMCON4_PTEN10_MASK                      0x00000400
#define _PMCON4_PTEN10_LENGTH                    0x00000001

#define _PMCON4_PTEN11_POSITION                  0x0000000B
#define _PMCON4_PTEN11_MASK                      0x00000800
#define _PMCON4_PTEN11_LENGTH                    0x00000001

#define _PMCON4_PTEN12_POSITION                  0x0000000C
#define _PMCON4_PTEN12_MASK                      0x00001000
#define _PMCON4_PTEN12_LENGTH                    0x00000001

#define _PMCON4_PTEN13_POSITION                  0x0000000D
#define _PMCON4_PTEN13_MASK                      0x00002000
#define _PMCON4_PTEN13_LENGTH                    0x00000001

#define _PMCON4_PTEN14_POSITION                  0x0000000E
#define _PMCON4_PTEN14_MASK                      0x00004000
#define _PMCON4_PTEN14_LENGTH                    0x00000001

#define _PMCON4_PTEN15_POSITION                  0x0000000F
#define _PMCON4_PTEN15_MASK                      0x00008000
#define _PMCON4_PTEN15_LENGTH                    0x00000001

#define _PMCS1CF_PTSZ_POSITION                   0x00000005
#define _PMCS1CF_PTSZ_MASK                       0x00000060
#define _PMCS1CF_PTSZ_LENGTH                     0x00000002

#define _PMCS1CF_ACKP_POSITION                   0x00000007
#define _PMCS1CF_ACKP_MASK                       0x00000080
#define _PMCS1CF_ACKP_LENGTH                     0x00000001

#define _PMCS1CF_SM_POSITION                     0x00000008
#define _PMCS1CF_SM_MASK                         0x00000100
#define _PMCS1CF_SM_LENGTH                       0x00000001

#define _PMCS1CF_RDSP_POSITION                   0x00000009
#define _PMCS1CF_RDSP_MASK                       0x00000200
#define _PMCS1CF_RDSP_LENGTH                     0x00000001

#define _PMCS1CF_WRSP_POSITION                   0x0000000A
#define _PMCS1CF_WRSP_MASK                       0x00000400
#define _PMCS1CF_WRSP_LENGTH                     0x00000001

#define _PMCS1CF_BEP_POSITION                    0x0000000C
#define _PMCS1CF_BEP_MASK                        0x00001000
#define _PMCS1CF_BEP_LENGTH                      0x00000001

#define _PMCS1CF_CSPTEN_POSITION                 0x0000000D
#define _PMCS1CF_CSPTEN_MASK                     0x00002000
#define _PMCS1CF_CSPTEN_LENGTH                   0x00000001

#define _PMCS1CF_CSP_POSITION                    0x0000000E
#define _PMCS1CF_CSP_MASK                        0x00004000
#define _PMCS1CF_CSP_LENGTH                      0x00000001

#define _PMCS1CF_CSDIS_POSITION                  0x0000000F
#define _PMCS1CF_CSDIS_MASK                      0x00008000
#define _PMCS1CF_CSDIS_LENGTH                    0x00000001

#define _PMCS1CF_PTSZ0_POSITION                  0x00000005
#define _PMCS1CF_PTSZ0_MASK                      0x00000020
#define _PMCS1CF_PTSZ0_LENGTH                    0x00000001

#define _PMCS1CF_PTSZ1_POSITION                  0x00000006
#define _PMCS1CF_PTSZ1_MASK                      0x00000040
#define _PMCS1CF_PTSZ1_LENGTH                    0x00000001

#define _PMCS1BS_BASE11_POSITION                 0x00000003
#define _PMCS1BS_BASE11_MASK                     0x00000008
#define _PMCS1BS_BASE11_LENGTH                   0x00000001

#define _PMCS1BS_BASE15_POSITION                 0x00000007
#define _PMCS1BS_BASE15_MASK                     0x00000080
#define _PMCS1BS_BASE15_LENGTH                   0x00000001

#define _PMCS1BS_BASE16_POSITION                 0x00000008
#define _PMCS1BS_BASE16_MASK                     0x00000100
#define _PMCS1BS_BASE16_LENGTH                   0x00000001

#define _PMCS1BS_BASE17_POSITION                 0x00000009
#define _PMCS1BS_BASE17_MASK                     0x00000200
#define _PMCS1BS_BASE17_LENGTH                   0x00000001

#define _PMCS1BS_BASE18_POSITION                 0x0000000A
#define _PMCS1BS_BASE18_MASK                     0x00000400
#define _PMCS1BS_BASE18_LENGTH                   0x00000001

#define _PMCS1BS_BASE19_POSITION                 0x0000000B
#define _PMCS1BS_BASE19_MASK                     0x00000800
#define _PMCS1BS_BASE19_LENGTH                   0x00000001

#define _PMCS1BS_BASE20_POSITION                 0x0000000C
#define _PMCS1BS_BASE20_MASK                     0x00001000
#define _PMCS1BS_BASE20_LENGTH                   0x00000001

#define _PMCS1BS_BASE21_POSITION                 0x0000000D
#define _PMCS1BS_BASE21_MASK                     0x00002000
#define _PMCS1BS_BASE21_LENGTH                   0x00000001

#define _PMCS1BS_BASE22_POSITION                 0x0000000E
#define _PMCS1BS_BASE22_MASK                     0x00004000
#define _PMCS1BS_BASE22_LENGTH                   0x00000001

#define _PMCS1BS_BASE23_POSITION                 0x0000000F
#define _PMCS1BS_BASE23_MASK                     0x00008000
#define _PMCS1BS_BASE23_LENGTH                   0x00000001

#define _PMCS1MD_DWAITE_POSITION                 0x00000000
#define _PMCS1MD_DWAITE_MASK                     0x00000003
#define _PMCS1MD_DWAITE_LENGTH                   0x00000002

#define _PMCS1MD_DWAITM_POSITION                 0x00000002
#define _PMCS1MD_DWAITM_MASK                     0x0000003C
#define _PMCS1MD_DWAITM_LENGTH                   0x00000004

#define _PMCS1MD_DWAITB_POSITION                 0x00000006
#define _PMCS1MD_DWAITB_MASK                     0x000000C0
#define _PMCS1MD_DWAITB_LENGTH                   0x00000002

#define _PMCS1MD_AMWAIT_POSITION                 0x0000000B
#define _PMCS1MD_AMWAIT_MASK                     0x00003800
#define _PMCS1MD_AMWAIT_LENGTH                   0x00000003

#define _PMCS1MD_ACKM_POSITION                   0x0000000E
#define _PMCS1MD_ACKM_MASK                       0x0000C000
#define _PMCS1MD_ACKM_LENGTH                     0x00000002

#define _PMCS1MD_DWAITE0_POSITION                0x00000000
#define _PMCS1MD_DWAITE0_MASK                    0x00000001
#define _PMCS1MD_DWAITE0_LENGTH                  0x00000001

#define _PMCS1MD_DWAITE1_POSITION                0x00000001
#define _PMCS1MD_DWAITE1_MASK                    0x00000002
#define _PMCS1MD_DWAITE1_LENGTH                  0x00000001

#define _PMCS1MD_DWAITM0_POSITION                0x00000002
#define _PMCS1MD_DWAITM0_MASK                    0x00000004
#define _PMCS1MD_DWAITM0_LENGTH                  0x00000001

#define _PMCS1MD_DWAITM1_POSITION                0x00000003
#define _PMCS1MD_DWAITM1_MASK                    0x00000008
#define _PMCS1MD_DWAITM1_LENGTH                  0x00000001

#define _PMCS1MD_DWAITM2_POSITION                0x00000004
#define _PMCS1MD_DWAITM2_MASK                    0x00000010
#define _PMCS1MD_DWAITM2_LENGTH                  0x00000001

#define _PMCS1MD_DWAITM3_POSITION                0x00000005
#define _PMCS1MD_DWAITM3_MASK                    0x00000020
#define _PMCS1MD_DWAITM3_LENGTH                  0x00000001

#define _PMCS1MD_DWAITB0_POSITION                0x00000006
#define _PMCS1MD_DWAITB0_MASK                    0x00000040
#define _PMCS1MD_DWAITB0_LENGTH                  0x00000001

#define _PMCS1MD_DWAITB1_POSITION                0x00000007
#define _PMCS1MD_DWAITB1_MASK                    0x00000080
#define _PMCS1MD_DWAITB1_LENGTH                  0x00000001

#define _PMCS1MD_AMWAIT0_POSITION                0x0000000B
#define _PMCS1MD_AMWAIT0_MASK                    0x00000800
#define _PMCS1MD_AMWAIT0_LENGTH                  0x00000001

#define _PMCS1MD_AMWAIT1_POSITION                0x0000000C
#define _PMCS1MD_AMWAIT1_MASK                    0x00001000
#define _PMCS1MD_AMWAIT1_LENGTH                  0x00000001

#define _PMCS1MD_AMWAIT2_POSITION                0x0000000D
#define _PMCS1MD_AMWAIT2_MASK                    0x00002000
#define _PMCS1MD_AMWAIT2_LENGTH                  0x00000001

#define _PMCS1MD_ACKM0_POSITION                  0x0000000E
#define _PMCS1MD_ACKM0_MASK                      0x00004000
#define _PMCS1MD_ACKM0_LENGTH                    0x00000001

#define _PMCS1MD_ACKM1_POSITION                  0x0000000F
#define _PMCS1MD_ACKM1_MASK                      0x00008000
#define _PMCS1MD_ACKM1_LENGTH                    0x00000001

#define _PMCS2CF_PTSZ_POSITION                   0x00000005
#define _PMCS2CF_PTSZ_MASK                       0x00000060
#define _PMCS2CF_PTSZ_LENGTH                     0x00000002

#define _PMCS2CF_ACKP_POSITION                   0x00000007
#define _PMCS2CF_ACKP_MASK                       0x00000080
#define _PMCS2CF_ACKP_LENGTH                     0x00000001

#define _PMCS2CF_SM_POSITION                     0x00000008
#define _PMCS2CF_SM_MASK                         0x00000100
#define _PMCS2CF_SM_LENGTH                       0x00000001

#define _PMCS2CF_RDSP_POSITION                   0x00000009
#define _PMCS2CF_RDSP_MASK                       0x00000200
#define _PMCS2CF_RDSP_LENGTH                     0x00000001

#define _PMCS2CF_WRSP_POSITION                   0x0000000A
#define _PMCS2CF_WRSP_MASK                       0x00000400
#define _PMCS2CF_WRSP_LENGTH                     0x00000001

#define _PMCS2CF_BEP_POSITION                    0x0000000C
#define _PMCS2CF_BEP_MASK                        0x00001000
#define _PMCS2CF_BEP_LENGTH                      0x00000001

#define _PMCS2CF_CSPTEN_POSITION                 0x0000000D
#define _PMCS2CF_CSPTEN_MASK                     0x00002000
#define _PMCS2CF_CSPTEN_LENGTH                   0x00000001

#define _PMCS2CF_CSP_POSITION                    0x0000000E
#define _PMCS2CF_CSP_MASK                        0x00004000
#define _PMCS2CF_CSP_LENGTH                      0x00000001

#define _PMCS2CF_CSDIS_POSITION                  0x0000000F
#define _PMCS2CF_CSDIS_MASK                      0x00008000
#define _PMCS2CF_CSDIS_LENGTH                    0x00000001

#define _PMCS2CF_PTSZ0_POSITION                  0x00000005
#define _PMCS2CF_PTSZ0_MASK                      0x00000020
#define _PMCS2CF_PTSZ0_LENGTH                    0x00000001

#define _PMCS2CF_PTSZ1_POSITION                  0x00000006
#define _PMCS2CF_PTSZ1_MASK                      0x00000040
#define _PMCS2CF_PTSZ1_LENGTH                    0x00000001

#define _PMCS2BS_BASE11_POSITION                 0x00000003
#define _PMCS2BS_BASE11_MASK                     0x00000008
#define _PMCS2BS_BASE11_LENGTH                   0x00000001

#define _PMCS2BS_BASE15_POSITION                 0x00000007
#define _PMCS2BS_BASE15_MASK                     0x00000080
#define _PMCS2BS_BASE15_LENGTH                   0x00000001

#define _PMCS2BS_BASE16_POSITION                 0x00000008
#define _PMCS2BS_BASE16_MASK                     0x00000100
#define _PMCS2BS_BASE16_LENGTH                   0x00000001

#define _PMCS2BS_BASE17_POSITION                 0x00000009
#define _PMCS2BS_BASE17_MASK                     0x00000200
#define _PMCS2BS_BASE17_LENGTH                   0x00000001

#define _PMCS2BS_BASE18_POSITION                 0x0000000A
#define _PMCS2BS_BASE18_MASK                     0x00000400
#define _PMCS2BS_BASE18_LENGTH                   0x00000001

#define _PMCS2BS_BASE19_POSITION                 0x0000000B
#define _PMCS2BS_BASE19_MASK                     0x00000800
#define _PMCS2BS_BASE19_LENGTH                   0x00000001

#define _PMCS2BS_BASE20_POSITION                 0x0000000C
#define _PMCS2BS_BASE20_MASK                     0x00001000
#define _PMCS2BS_BASE20_LENGTH                   0x00000001

#define _PMCS2BS_BASE21_POSITION                 0x0000000D
#define _PMCS2BS_BASE21_MASK                     0x00002000
#define _PMCS2BS_BASE21_LENGTH                   0x00000001

#define _PMCS2BS_BASE22_POSITION                 0x0000000E
#define _PMCS2BS_BASE22_MASK                     0x00004000
#define _PMCS2BS_BASE22_LENGTH                   0x00000001

#define _PMCS2BS_BASE23_POSITION                 0x0000000F
#define _PMCS2BS_BASE23_MASK                     0x00008000
#define _PMCS2BS_BASE23_LENGTH                   0x00000001

#define _PMCS2MD_DWAITE_POSITION                 0x00000000
#define _PMCS2MD_DWAITE_MASK                     0x00000003
#define _PMCS2MD_DWAITE_LENGTH                   0x00000002

#define _PMCS2MD_DWAITM_POSITION                 0x00000002
#define _PMCS2MD_DWAITM_MASK                     0x0000003C
#define _PMCS2MD_DWAITM_LENGTH                   0x00000004

#define _PMCS2MD_DWAITB_POSITION                 0x00000006
#define _PMCS2MD_DWAITB_MASK                     0x000000C0
#define _PMCS2MD_DWAITB_LENGTH                   0x00000002

#define _PMCS2MD_AMWAIT_POSITION                 0x0000000B
#define _PMCS2MD_AMWAIT_MASK                     0x00003800
#define _PMCS2MD_AMWAIT_LENGTH                   0x00000003

#define _PMCS2MD_ACKM_POSITION                   0x0000000E
#define _PMCS2MD_ACKM_MASK                       0x0000C000
#define _PMCS2MD_ACKM_LENGTH                     0x00000002

#define _PMCS2MD_DWAITE0_POSITION                0x00000000
#define _PMCS2MD_DWAITE0_MASK                    0x00000001
#define _PMCS2MD_DWAITE0_LENGTH                  0x00000001

#define _PMCS2MD_DWAITE1_POSITION                0x00000001
#define _PMCS2MD_DWAITE1_MASK                    0x00000002
#define _PMCS2MD_DWAITE1_LENGTH                  0x00000001

#define _PMCS2MD_DWAITM0_POSITION                0x00000002
#define _PMCS2MD_DWAITM0_MASK                    0x00000004
#define _PMCS2MD_DWAITM0_LENGTH                  0x00000001

#define _PMCS2MD_DWAITM1_POSITION                0x00000003
#define _PMCS2MD_DWAITM1_MASK                    0x00000008
#define _PMCS2MD_DWAITM1_LENGTH                  0x00000001

#define _PMCS2MD_DWAITM2_POSITION                0x00000004
#define _PMCS2MD_DWAITM2_MASK                    0x00000010
#define _PMCS2MD_DWAITM2_LENGTH                  0x00000001

#define _PMCS2MD_DWAITM3_POSITION                0x00000005
#define _PMCS2MD_DWAITM3_MASK                    0x00000020
#define _PMCS2MD_DWAITM3_LENGTH                  0x00000001

#define _PMCS2MD_DWAITB0_POSITION                0x00000006
#define _PMCS2MD_DWAITB0_MASK                    0x00000040
#define _PMCS2MD_DWAITB0_LENGTH                  0x00000001

#define _PMCS2MD_DWAITB1_POSITION                0x00000007
#define _PMCS2MD_DWAITB1_MASK                    0x00000080
#define _PMCS2MD_DWAITB1_LENGTH                  0x00000001

#define _PMCS2MD_AMWAIT0_POSITION                0x0000000B
#define _PMCS2MD_AMWAIT0_MASK                    0x00000800
#define _PMCS2MD_AMWAIT0_LENGTH                  0x00000001

#define _PMCS2MD_AMWAIT1_POSITION                0x0000000C
#define _PMCS2MD_AMWAIT1_MASK                    0x00001000
#define _PMCS2MD_AMWAIT1_LENGTH                  0x00000001

#define _PMCS2MD_AMWAIT2_POSITION                0x0000000D
#define _PMCS2MD_AMWAIT2_MASK                    0x00002000
#define _PMCS2MD_AMWAIT2_LENGTH                  0x00000001

#define _PMCS2MD_ACKM0_POSITION                  0x0000000E
#define _PMCS2MD_ACKM0_MASK                      0x00004000
#define _PMCS2MD_ACKM0_LENGTH                    0x00000001

#define _PMCS2MD_ACKM1_POSITION                  0x0000000F
#define _PMCS2MD_ACKM1_MASK                      0x00008000
#define _PMCS2MD_ACKM1_LENGTH                    0x00000001

#define _PMSTAT_OB0E_POSITION                    0x00000000
#define _PMSTAT_OB0E_MASK                        0x00000001
#define _PMSTAT_OB0E_LENGTH                      0x00000001

#define _PMSTAT_OB1E_POSITION                    0x00000001
#define _PMSTAT_OB1E_MASK                        0x00000002
#define _PMSTAT_OB1E_LENGTH                      0x00000001

#define _PMSTAT_OB2E_POSITION                    0x00000002
#define _PMSTAT_OB2E_MASK                        0x00000004
#define _PMSTAT_OB2E_LENGTH                      0x00000001

#define _PMSTAT_OB3E_POSITION                    0x00000003
#define _PMSTAT_OB3E_MASK                        0x00000008
#define _PMSTAT_OB3E_LENGTH                      0x00000001

#define _PMSTAT_OBUF_POSITION                    0x00000006
#define _PMSTAT_OBUF_MASK                        0x00000040
#define _PMSTAT_OBUF_LENGTH                      0x00000001

#define _PMSTAT_OBE_POSITION                     0x00000007
#define _PMSTAT_OBE_MASK                         0x00000080
#define _PMSTAT_OBE_LENGTH                       0x00000001

#define _PMSTAT_IB0F_POSITION                    0x00000008
#define _PMSTAT_IB0F_MASK                        0x00000100
#define _PMSTAT_IB0F_LENGTH                      0x00000001

#define _PMSTAT_IB1F_POSITION                    0x00000009
#define _PMSTAT_IB1F_MASK                        0x00000200
#define _PMSTAT_IB1F_LENGTH                      0x00000001

#define _PMSTAT_IB2F_POSITION                    0x0000000A
#define _PMSTAT_IB2F_MASK                        0x00000400
#define _PMSTAT_IB2F_LENGTH                      0x00000001

#define _PMSTAT_IB3F_POSITION                    0x0000000B
#define _PMSTAT_IB3F_MASK                        0x00000800
#define _PMSTAT_IB3F_LENGTH                      0x00000001

#define _PMSTAT_IBOV_POSITION                    0x0000000E
#define _PMSTAT_IBOV_MASK                        0x00004000
#define _PMSTAT_IBOV_LENGTH                      0x00000001

#define _PMSTAT_IBF_POSITION                     0x0000000F
#define _PMSTAT_IBF_MASK                         0x00008000
#define _PMSTAT_IBF_LENGTH                       0x00000001

#define _ALCFGRPT_ARPT_POSITION                  0x00000000
#define _ALCFGRPT_ARPT_MASK                      0x000000FF
#define _ALCFGRPT_ARPT_LENGTH                    0x00000008

#define _ALCFGRPT_ALRMPTR_POSITION               0x00000008
#define _ALCFGRPT_ALRMPTR_MASK                   0x00000300
#define _ALCFGRPT_ALRMPTR_LENGTH                 0x00000002

#define _ALCFGRPT_AMASK_POSITION                 0x0000000A
#define _ALCFGRPT_AMASK_MASK                     0x00003C00
#define _ALCFGRPT_AMASK_LENGTH                   0x00000004

#define _ALCFGRPT_CHIME_POSITION                 0x0000000E
#define _ALCFGRPT_CHIME_MASK                     0x00004000
#define _ALCFGRPT_CHIME_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMEN_POSITION                0x0000000F
#define _ALCFGRPT_ALRMEN_MASK                    0x00008000
#define _ALCFGRPT_ALRMEN_LENGTH                  0x00000001

#define _ALCFGRPT_ARPT0_POSITION                 0x00000000
#define _ALCFGRPT_ARPT0_MASK                     0x00000001
#define _ALCFGRPT_ARPT0_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT1_POSITION                 0x00000001
#define _ALCFGRPT_ARPT1_MASK                     0x00000002
#define _ALCFGRPT_ARPT1_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT2_POSITION                 0x00000002
#define _ALCFGRPT_ARPT2_MASK                     0x00000004
#define _ALCFGRPT_ARPT2_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT3_POSITION                 0x00000003
#define _ALCFGRPT_ARPT3_MASK                     0x00000008
#define _ALCFGRPT_ARPT3_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT4_POSITION                 0x00000004
#define _ALCFGRPT_ARPT4_MASK                     0x00000010
#define _ALCFGRPT_ARPT4_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT5_POSITION                 0x00000005
#define _ALCFGRPT_ARPT5_MASK                     0x00000020
#define _ALCFGRPT_ARPT5_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT6_POSITION                 0x00000006
#define _ALCFGRPT_ARPT6_MASK                     0x00000040
#define _ALCFGRPT_ARPT6_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT7_POSITION                 0x00000007
#define _ALCFGRPT_ARPT7_MASK                     0x00000080
#define _ALCFGRPT_ARPT7_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMPTR0_POSITION              0x00000008
#define _ALCFGRPT_ALRMPTR0_MASK                  0x00000100
#define _ALCFGRPT_ALRMPTR0_LENGTH                0x00000001

#define _ALCFGRPT_ALRMPTR1_POSITION              0x00000009
#define _ALCFGRPT_ALRMPTR1_MASK                  0x00000200
#define _ALCFGRPT_ALRMPTR1_LENGTH                0x00000001

#define _ALCFGRPT_AMASK0_POSITION                0x0000000A
#define _ALCFGRPT_AMASK0_MASK                    0x00000400
#define _ALCFGRPT_AMASK0_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK1_POSITION                0x0000000B
#define _ALCFGRPT_AMASK1_MASK                    0x00000800
#define _ALCFGRPT_AMASK1_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK2_POSITION                0x0000000C
#define _ALCFGRPT_AMASK2_MASK                    0x00001000
#define _ALCFGRPT_AMASK2_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK3_POSITION                0x0000000D
#define _ALCFGRPT_AMASK3_MASK                    0x00002000
#define _ALCFGRPT_AMASK3_LENGTH                  0x00000001

#define _RCFGCAL_CAL_POSITION                    0x00000000
#define _RCFGCAL_CAL_MASK                        0x000000FF
#define _RCFGCAL_CAL_LENGTH                      0x00000008

#define _RCFGCAL_RTCPTR_POSITION                 0x00000008
#define _RCFGCAL_RTCPTR_MASK                     0x00000300
#define _RCFGCAL_RTCPTR_LENGTH                   0x00000002

#define _RCFGCAL_RTCOE_POSITION                  0x0000000A
#define _RCFGCAL_RTCOE_MASK                      0x00000400
#define _RCFGCAL_RTCOE_LENGTH                    0x00000001

#define _RCFGCAL_HALFSEC_POSITION                0x0000000B
#define _RCFGCAL_HALFSEC_MASK                    0x00000800
#define _RCFGCAL_HALFSEC_LENGTH                  0x00000001

#define _RCFGCAL_RTCSYNC_POSITION                0x0000000C
#define _RCFGCAL_RTCSYNC_MASK                    0x00001000
#define _RCFGCAL_RTCSYNC_LENGTH                  0x00000001

#define _RCFGCAL_RTCWREN_POSITION                0x0000000D
#define _RCFGCAL_RTCWREN_MASK                    0x00002000
#define _RCFGCAL_RTCWREN_LENGTH                  0x00000001

#define _RCFGCAL_RTCEN_POSITION                  0x0000000F
#define _RCFGCAL_RTCEN_MASK                      0x00008000
#define _RCFGCAL_RTCEN_LENGTH                    0x00000001

#define _RCFGCAL_CAL0_POSITION                   0x00000000
#define _RCFGCAL_CAL0_MASK                       0x00000001
#define _RCFGCAL_CAL0_LENGTH                     0x00000001

#define _RCFGCAL_CAL1_POSITION                   0x00000001
#define _RCFGCAL_CAL1_MASK                       0x00000002
#define _RCFGCAL_CAL1_LENGTH                     0x00000001

#define _RCFGCAL_CAL2_POSITION                   0x00000002
#define _RCFGCAL_CAL2_MASK                       0x00000004
#define _RCFGCAL_CAL2_LENGTH                     0x00000001

#define _RCFGCAL_CAL3_POSITION                   0x00000003
#define _RCFGCAL_CAL3_MASK                       0x00000008
#define _RCFGCAL_CAL3_LENGTH                     0x00000001

#define _RCFGCAL_CAL4_POSITION                   0x00000004
#define _RCFGCAL_CAL4_MASK                       0x00000010
#define _RCFGCAL_CAL4_LENGTH                     0x00000001

#define _RCFGCAL_CAL5_POSITION                   0x00000005
#define _RCFGCAL_CAL5_MASK                       0x00000020
#define _RCFGCAL_CAL5_LENGTH                     0x00000001

#define _RCFGCAL_CAL6_POSITION                   0x00000006
#define _RCFGCAL_CAL6_MASK                       0x00000040
#define _RCFGCAL_CAL6_LENGTH                     0x00000001

#define _RCFGCAL_CAL7_POSITION                   0x00000007
#define _RCFGCAL_CAL7_MASK                       0x00000080
#define _RCFGCAL_CAL7_LENGTH                     0x00000001

#define _RCFGCAL_RTCPTR0_POSITION                0x00000008
#define _RCFGCAL_RTCPTR0_MASK                    0x00000100
#define _RCFGCAL_RTCPTR0_LENGTH                  0x00000001

#define _RCFGCAL_RTCPTR1_POSITION                0x00000009
#define _RCFGCAL_RTCPTR1_MASK                    0x00000200
#define _RCFGCAL_RTCPTR1_LENGTH                  0x00000001

#define _RTCPWC_RTCOUT_POSITION                  0x00000008
#define _RTCPWC_RTCOUT_MASK                      0x00000300
#define _RTCPWC_RTCOUT_LENGTH                    0x00000002

#define _RTCPWC_RTCLK_POSITION                   0x0000000A
#define _RTCPWC_RTCLK_MASK                       0x00000C00
#define _RTCPWC_RTCLK_LENGTH                     0x00000002

#define _RTCPWC_PWSPRE_POSITION                  0x0000000C
#define _RTCPWC_PWSPRE_MASK                      0x00001000
#define _RTCPWC_PWSPRE_LENGTH                    0x00000001

#define _RTCPWC_PWCPRE_POSITION                  0x0000000D
#define _RTCPWC_PWCPRE_MASK                      0x00002000
#define _RTCPWC_PWCPRE_LENGTH                    0x00000001

#define _RTCPWC_PWCPOL_POSITION                  0x0000000E
#define _RTCPWC_PWCPOL_MASK                      0x00004000
#define _RTCPWC_PWCPOL_LENGTH                    0x00000001

#define _RTCPWC_PWCEN_POSITION                   0x0000000F
#define _RTCPWC_PWCEN_MASK                       0x00008000
#define _RTCPWC_PWCEN_LENGTH                     0x00000001

#define _RTCPWC_RTCOUT0_POSITION                 0x00000008
#define _RTCPWC_RTCOUT0_MASK                     0x00000100
#define _RTCPWC_RTCOUT0_LENGTH                   0x00000001

#define _RTCPWC_RTCOUT1_POSITION                 0x00000009
#define _RTCPWC_RTCOUT1_MASK                     0x00000200
#define _RTCPWC_RTCOUT1_LENGTH                   0x00000001

#define _RTCPWC_RTCLK0_POSITION                  0x0000000A
#define _RTCPWC_RTCLK0_MASK                      0x00000400
#define _RTCPWC_RTCLK0_LENGTH                    0x00000001

#define _RTCPWC_RTCLK1_POSITION                  0x0000000B
#define _RTCPWC_RTCLK1_MASK                      0x00000800
#define _RTCPWC_RTCLK1_LENGTH                    0x00000001

#define _MDCON_MDBIT_POSITION                    0x00000000
#define _MDCON_MDBIT_MASK                        0x00000001
#define _MDCON_MDBIT_LENGTH                      0x00000001

#define _MDCON_MDOPOL_POSITION                   0x00000004
#define _MDCON_MDOPOL_MASK                       0x00000010
#define _MDCON_MDOPOL_LENGTH                     0x00000001

#define _MDCON_MDSLR_POSITION                    0x00000005
#define _MDCON_MDSLR_MASK                        0x00000020
#define _MDCON_MDSLR_LENGTH                      0x00000001

#define _MDCON_MDOE_POSITION                     0x00000006
#define _MDCON_MDOE_MASK                         0x00000040
#define _MDCON_MDOE_LENGTH                       0x00000001

#define _MDCON_MDSIDL_POSITION                   0x0000000D
#define _MDCON_MDSIDL_MASK                       0x00002000
#define _MDCON_MDSIDL_LENGTH                     0x00000001

#define _MDCON_MDEN_POSITION                     0x0000000F
#define _MDCON_MDEN_MASK                         0x00008000
#define _MDCON_MDEN_LENGTH                       0x00000001

#define _MDSRC_MS_POSITION                       0x00000000
#define _MDSRC_MS_MASK                           0x0000000F
#define _MDSRC_MS_LENGTH                         0x00000004

#define _MDSRC_SODIS_POSITION                    0x00000007
#define _MDSRC_SODIS_MASK                        0x00000080
#define _MDSRC_SODIS_LENGTH                      0x00000001

#define _MDSRC_MS0_POSITION                      0x00000000
#define _MDSRC_MS0_MASK                          0x00000001
#define _MDSRC_MS0_LENGTH                        0x00000001

#define _MDSRC_MS1_POSITION                      0x00000001
#define _MDSRC_MS1_MASK                          0x00000002
#define _MDSRC_MS1_LENGTH                        0x00000001

#define _MDSRC_MS2_POSITION                      0x00000002
#define _MDSRC_MS2_MASK                          0x00000004
#define _MDSRC_MS2_LENGTH                        0x00000001

#define _MDSRC_MS3_POSITION                      0x00000003
#define _MDSRC_MS3_MASK                          0x00000008
#define _MDSRC_MS3_LENGTH                        0x00000001

#define _MDCAR_CL_POSITION                       0x00000000
#define _MDCAR_CL_MASK                           0x0000000F
#define _MDCAR_CL_LENGTH                         0x00000004

#define _MDCAR_CLSYNC_POSITION                   0x00000005
#define _MDCAR_CLSYNC_MASK                       0x00000020
#define _MDCAR_CLSYNC_LENGTH                     0x00000001

#define _MDCAR_CLPOL_POSITION                    0x00000006
#define _MDCAR_CLPOL_MASK                        0x00000040
#define _MDCAR_CLPOL_LENGTH                      0x00000001

#define _MDCAR_CLODIS_POSITION                   0x00000007
#define _MDCAR_CLODIS_MASK                       0x00000080
#define _MDCAR_CLODIS_LENGTH                     0x00000001

#define _MDCAR_CH_POSITION                       0x00000008
#define _MDCAR_CH_MASK                           0x00000F00
#define _MDCAR_CH_LENGTH                         0x00000004

#define _MDCAR_CHSYNC_POSITION                   0x0000000D
#define _MDCAR_CHSYNC_MASK                       0x00002000
#define _MDCAR_CHSYNC_LENGTH                     0x00000001

#define _MDCAR_CHPOL_POSITION                    0x0000000E
#define _MDCAR_CHPOL_MASK                        0x00004000
#define _MDCAR_CHPOL_LENGTH                      0x00000001

#define _MDCAR_CHODIS_POSITION                   0x0000000F
#define _MDCAR_CHODIS_MASK                       0x00008000
#define _MDCAR_CHODIS_LENGTH                     0x00000001

#define _MDCAR_CL0_POSITION                      0x00000000
#define _MDCAR_CL0_MASK                          0x00000001
#define _MDCAR_CL0_LENGTH                        0x00000001

#define _MDCAR_CL1_POSITION                      0x00000001
#define _MDCAR_CL1_MASK                          0x00000002
#define _MDCAR_CL1_LENGTH                        0x00000001

#define _MDCAR_CL2_POSITION                      0x00000002
#define _MDCAR_CL2_MASK                          0x00000004
#define _MDCAR_CL2_LENGTH                        0x00000001

#define _MDCAR_CL3_POSITION                      0x00000003
#define _MDCAR_CL3_MASK                          0x00000008
#define _MDCAR_CL3_LENGTH                        0x00000001

#define _MDCAR_CH0_POSITION                      0x00000008
#define _MDCAR_CH0_MASK                          0x00000100
#define _MDCAR_CH0_LENGTH                        0x00000001

#define _MDCAR_CH1_POSITION                      0x00000009
#define _MDCAR_CH1_MASK                          0x00000200
#define _MDCAR_CH1_LENGTH                        0x00000001

#define _MDCAR_CH2_POSITION                      0x0000000A
#define _MDCAR_CH2_MASK                          0x00000400
#define _MDCAR_CH2_LENGTH                        0x00000001

#define _MDCAR_CH3_POSITION                      0x0000000B
#define _MDCAR_CH3_MASK                          0x00000800
#define _MDCAR_CH3_LENGTH                        0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000009
#define _CMSTAT_C2EVT_MASK                       0x00000200
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_C3EVT_POSITION                   0x0000000A
#define _CMSTAT_C3EVT_MASK                       0x00000400
#define _CMSTAT_C3EVT_LENGTH                     0x00000001

#define _CMSTAT_CMIDL_POSITION                   0x0000000F
#define _CMSTAT_CMIDL_MASK                       0x00008000
#define _CMSTAT_CMIDL_LENGTH                     0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRSS_POSITION                   0x00000004
#define _CVRCON_CVRSS_MASK                       0x00000010
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_CVREN_POSITION                   0x00000007
#define _CVRCON_CVREN_MASK                       0x00000080
#define _CVRCON_CVREN_LENGTH                     0x00000001

#define _CVRCON_CVREFM_POSITION                  0x00000008
#define _CVRCON_CVREFM_MASK                      0x00000300
#define _CVRCON_CVREFM_LENGTH                    0x00000002

#define _CVRCON_CVREFP_POSITION                  0x0000000A
#define _CVRCON_CVREFP_MASK                      0x00000400
#define _CVRCON_CVREFP_LENGTH                    0x00000001

#define _CVRCON_CVR0_POSITION                    0x00000000
#define _CVRCON_CVR0_MASK                        0x00000001
#define _CVRCON_CVR0_LENGTH                      0x00000001

#define _CVRCON_CVR1_POSITION                    0x00000001
#define _CVRCON_CVR1_MASK                        0x00000002
#define _CVRCON_CVR1_LENGTH                      0x00000001

#define _CVRCON_CVR2_POSITION                    0x00000002
#define _CVRCON_CVR2_MASK                        0x00000004
#define _CVRCON_CVR2_LENGTH                      0x00000001

#define _CVRCON_CVR3_POSITION                    0x00000003
#define _CVRCON_CVR3_MASK                        0x00000008
#define _CVRCON_CVR3_LENGTH                      0x00000001

#define _CVRCON_CVREFM0_POSITION                 0x00000008
#define _CVRCON_CVREFM0_MASK                     0x00000100
#define _CVRCON_CVREFM0_LENGTH                   0x00000001

#define _CVRCON_CVREFM1_POSITION                 0x00000009
#define _CVRCON_CVREFM1_MASK                     0x00000200
#define _CVRCON_CVREFM1_LENGTH                   0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_CON_POSITION                     0x0000000F
#define _CM1CON_CON_MASK                         0x00008000
#define _CM1CON_CON_LENGTH                       0x00000001

#define _CM1CON_CCH0_POSITION                    0x00000000
#define _CM1CON_CCH0_MASK                        0x00000001
#define _CM1CON_CCH0_LENGTH                      0x00000001

#define _CM1CON_CCH1_POSITION                    0x00000001
#define _CM1CON_CCH1_MASK                        0x00000002
#define _CM1CON_CCH1_LENGTH                      0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _CM1CON_CEN_POSITION                     0x0000000F
#define _CM1CON_CEN_MASK                         0x00008000
#define _CM1CON_CEN_LENGTH                       0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_CON_POSITION                     0x0000000F
#define _CM2CON_CON_MASK                         0x00008000
#define _CM2CON_CON_LENGTH                       0x00000001

#define _CM2CON_CCH0_POSITION                    0x00000000
#define _CM2CON_CCH0_MASK                        0x00000001
#define _CM2CON_CCH0_LENGTH                      0x00000001

#define _CM2CON_CCH1_POSITION                    0x00000001
#define _CM2CON_CCH1_MASK                        0x00000002
#define _CM2CON_CCH1_LENGTH                      0x00000001

#define _CM2CON_EVPOL0_POSITION                  0x00000006
#define _CM2CON_EVPOL0_MASK                      0x00000040
#define _CM2CON_EVPOL0_LENGTH                    0x00000001

#define _CM2CON_EVPOL1_POSITION                  0x00000007
#define _CM2CON_EVPOL1_MASK                      0x00000080
#define _CM2CON_EVPOL1_LENGTH                    0x00000001

#define _CM2CON_CEN_POSITION                     0x0000000F
#define _CM2CON_CEN_MASK                         0x00008000
#define _CM2CON_CEN_LENGTH                       0x00000001

#define _CM3CON_CCH_POSITION                     0x00000000
#define _CM3CON_CCH_MASK                         0x00000003
#define _CM3CON_CCH_LENGTH                       0x00000002

#define _CM3CON_CREF_POSITION                    0x00000004
#define _CM3CON_CREF_MASK                        0x00000010
#define _CM3CON_CREF_LENGTH                      0x00000001

#define _CM3CON_EVPOL_POSITION                   0x00000006
#define _CM3CON_EVPOL_MASK                       0x000000C0
#define _CM3CON_EVPOL_LENGTH                     0x00000002

#define _CM3CON_COUT_POSITION                    0x00000008
#define _CM3CON_COUT_MASK                        0x00000100
#define _CM3CON_COUT_LENGTH                      0x00000001

#define _CM3CON_CEVT_POSITION                    0x00000009
#define _CM3CON_CEVT_MASK                        0x00000200
#define _CM3CON_CEVT_LENGTH                      0x00000001

#define _CM3CON_CPOL_POSITION                    0x0000000D
#define _CM3CON_CPOL_MASK                        0x00002000
#define _CM3CON_CPOL_LENGTH                      0x00000001

#define _CM3CON_COE_POSITION                     0x0000000E
#define _CM3CON_COE_MASK                         0x00004000
#define _CM3CON_COE_LENGTH                       0x00000001

#define _CM3CON_CON_POSITION                     0x0000000F
#define _CM3CON_CON_MASK                         0x00008000
#define _CM3CON_CON_LENGTH                       0x00000001

#define _CM3CON_CCH0_POSITION                    0x00000000
#define _CM3CON_CCH0_MASK                        0x00000001
#define _CM3CON_CCH0_LENGTH                      0x00000001

#define _CM3CON_CCH1_POSITION                    0x00000001
#define _CM3CON_CCH1_MASK                        0x00000002
#define _CM3CON_CCH1_LENGTH                      0x00000001

#define _CM3CON_EVPOL0_POSITION                  0x00000006
#define _CM3CON_EVPOL0_MASK                      0x00000040
#define _CM3CON_EVPOL0_LENGTH                    0x00000001

#define _CM3CON_EVPOL1_POSITION                  0x00000007
#define _CM3CON_EVPOL1_MASK                      0x00000080
#define _CM3CON_EVPOL1_LENGTH                    0x00000001

#define _CM3CON_CEN_POSITION                     0x0000000F
#define _CM3CON_CEN_MASK                         0x00008000
#define _CM3CON_CEN_LENGTH                       0x00000001

#define _CRCCON1_LENDIAN_POSITION                0x00000003
#define _CRCCON1_LENDIAN_MASK                    0x00000008
#define _CRCCON1_LENDIAN_LENGTH                  0x00000001

#define _CRCCON1_CRCGO_POSITION                  0x00000004
#define _CRCCON1_CRCGO_MASK                      0x00000010
#define _CRCCON1_CRCGO_LENGTH                    0x00000001

#define _CRCCON1_CRCISEL_POSITION                0x00000005
#define _CRCCON1_CRCISEL_MASK                    0x00000020
#define _CRCCON1_CRCISEL_LENGTH                  0x00000001

#define _CRCCON1_CRCMPT_POSITION                 0x00000006
#define _CRCCON1_CRCMPT_MASK                     0x00000040
#define _CRCCON1_CRCMPT_LENGTH                   0x00000001

#define _CRCCON1_CRCFUL_POSITION                 0x00000007
#define _CRCCON1_CRCFUL_MASK                     0x00000080
#define _CRCCON1_CRCFUL_LENGTH                   0x00000001

#define _CRCCON1_VWORD_POSITION                  0x00000008
#define _CRCCON1_VWORD_MASK                      0x00001F00
#define _CRCCON1_VWORD_LENGTH                    0x00000005

#define _CRCCON1_CSIDL_POSITION                  0x0000000D
#define _CRCCON1_CSIDL_MASK                      0x00002000
#define _CRCCON1_CSIDL_LENGTH                    0x00000001

#define _CRCCON1_CRCEN_POSITION                  0x0000000F
#define _CRCCON1_CRCEN_MASK                      0x00008000
#define _CRCCON1_CRCEN_LENGTH                    0x00000001

#define _CRCCON1_VWORD0_POSITION                 0x00000008
#define _CRCCON1_VWORD0_MASK                     0x00000100
#define _CRCCON1_VWORD0_LENGTH                   0x00000001

#define _CRCCON1_VWORD1_POSITION                 0x00000009
#define _CRCCON1_VWORD1_MASK                     0x00000200
#define _CRCCON1_VWORD1_LENGTH                   0x00000001

#define _CRCCON1_VWORD2_POSITION                 0x0000000A
#define _CRCCON1_VWORD2_MASK                     0x00000400
#define _CRCCON1_VWORD2_LENGTH                   0x00000001

#define _CRCCON1_VWORD3_POSITION                 0x0000000B
#define _CRCCON1_VWORD3_MASK                     0x00000800
#define _CRCCON1_VWORD3_LENGTH                   0x00000001

#define _CRCCON1_VWORD4_POSITION                 0x0000000C
#define _CRCCON1_VWORD4_MASK                     0x00001000
#define _CRCCON1_VWORD4_LENGTH                   0x00000001

#define _CRCCON2_PLEN_POSITION                   0x00000000
#define _CRCCON2_PLEN_MASK                       0x0000001F
#define _CRCCON2_PLEN_LENGTH                     0x00000005

#define _CRCCON2_DWIDTH_POSITION                 0x00000008
#define _CRCCON2_DWIDTH_MASK                     0x00001F00
#define _CRCCON2_DWIDTH_LENGTH                   0x00000005

#define _CRCCON2_PLEN0_POSITION                  0x00000000
#define _CRCCON2_PLEN0_MASK                      0x00000001
#define _CRCCON2_PLEN0_LENGTH                    0x00000001

#define _CRCCON2_PLEN1_POSITION                  0x00000001
#define _CRCCON2_PLEN1_MASK                      0x00000002
#define _CRCCON2_PLEN1_LENGTH                    0x00000001

#define _CRCCON2_PLEN2_POSITION                  0x00000002
#define _CRCCON2_PLEN2_MASK                      0x00000004
#define _CRCCON2_PLEN2_LENGTH                    0x00000001

#define _CRCCON2_PLEN3_POSITION                  0x00000003
#define _CRCCON2_PLEN3_MASK                      0x00000008
#define _CRCCON2_PLEN3_LENGTH                    0x00000001

#define _CRCCON2_PLEN4_POSITION                  0x00000004
#define _CRCCON2_PLEN4_MASK                      0x00000010
#define _CRCCON2_PLEN4_LENGTH                    0x00000001

#define _CRCCON2_DWIDTH0_POSITION                0x00000008
#define _CRCCON2_DWIDTH0_MASK                    0x00000100
#define _CRCCON2_DWIDTH0_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH1_POSITION                0x00000009
#define _CRCCON2_DWIDTH1_MASK                    0x00000200
#define _CRCCON2_DWIDTH1_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH2_POSITION                0x0000000A
#define _CRCCON2_DWIDTH2_MASK                    0x00000400
#define _CRCCON2_DWIDTH2_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH3_POSITION                0x0000000B
#define _CRCCON2_DWIDTH3_MASK                    0x00000800
#define _CRCCON2_DWIDTH3_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH4_POSITION                0x0000000C
#define _CRCCON2_DWIDTH4_MASK                    0x00001000
#define _CRCCON2_DWIDTH4_LENGTH                  0x00000001

#define _CRCXORL_X1_POSITION                     0x00000001
#define _CRCXORL_X1_MASK                         0x00000002
#define _CRCXORL_X1_LENGTH                       0x00000001

#define _CRCXORL_X2_POSITION                     0x00000002
#define _CRCXORL_X2_MASK                         0x00000004
#define _CRCXORL_X2_LENGTH                       0x00000001

#define _CRCXORL_X3_POSITION                     0x00000003
#define _CRCXORL_X3_MASK                         0x00000008
#define _CRCXORL_X3_LENGTH                       0x00000001

#define _CRCXORL_X4_POSITION                     0x00000004
#define _CRCXORL_X4_MASK                         0x00000010
#define _CRCXORL_X4_LENGTH                       0x00000001

#define _CRCXORL_X5_POSITION                     0x00000005
#define _CRCXORL_X5_MASK                         0x00000020
#define _CRCXORL_X5_LENGTH                       0x00000001

#define _CRCXORL_X6_POSITION                     0x00000006
#define _CRCXORL_X6_MASK                         0x00000040
#define _CRCXORL_X6_LENGTH                       0x00000001

#define _CRCXORL_X7_POSITION                     0x00000007
#define _CRCXORL_X7_MASK                         0x00000080
#define _CRCXORL_X7_LENGTH                       0x00000001

#define _CRCXORL_X8_POSITION                     0x00000008
#define _CRCXORL_X8_MASK                         0x00000100
#define _CRCXORL_X8_LENGTH                       0x00000001

#define _CRCXORL_X9_POSITION                     0x00000009
#define _CRCXORL_X9_MASK                         0x00000200
#define _CRCXORL_X9_LENGTH                       0x00000001

#define _CRCXORL_X10_POSITION                    0x0000000A
#define _CRCXORL_X10_MASK                        0x00000400
#define _CRCXORL_X10_LENGTH                      0x00000001

#define _CRCXORL_X11_POSITION                    0x0000000B
#define _CRCXORL_X11_MASK                        0x00000800
#define _CRCXORL_X11_LENGTH                      0x00000001

#define _CRCXORL_X12_POSITION                    0x0000000C
#define _CRCXORL_X12_MASK                        0x00001000
#define _CRCXORL_X12_LENGTH                      0x00000001

#define _CRCXORL_X13_POSITION                    0x0000000D
#define _CRCXORL_X13_MASK                        0x00002000
#define _CRCXORL_X13_LENGTH                      0x00000001

#define _CRCXORL_X14_POSITION                    0x0000000E
#define _CRCXORL_X14_MASK                        0x00004000
#define _CRCXORL_X14_LENGTH                      0x00000001

#define _CRCXORL_X15_POSITION                    0x0000000F
#define _CRCXORL_X15_MASK                        0x00008000
#define _CRCXORL_X15_LENGTH                      0x00000001

#define _CRCXORH_X16_POSITION                    0x00000000
#define _CRCXORH_X16_MASK                        0x00000001
#define _CRCXORH_X16_LENGTH                      0x00000001

#define _CRCXORH_X17_POSITION                    0x00000001
#define _CRCXORH_X17_MASK                        0x00000002
#define _CRCXORH_X17_LENGTH                      0x00000001

#define _CRCXORH_X18_POSITION                    0x00000002
#define _CRCXORH_X18_MASK                        0x00000004
#define _CRCXORH_X18_LENGTH                      0x00000001

#define _CRCXORH_X19_POSITION                    0x00000003
#define _CRCXORH_X19_MASK                        0x00000008
#define _CRCXORH_X19_LENGTH                      0x00000001

#define _CRCXORH_X20_POSITION                    0x00000004
#define _CRCXORH_X20_MASK                        0x00000010
#define _CRCXORH_X20_LENGTH                      0x00000001

#define _CRCXORH_X21_POSITION                    0x00000005
#define _CRCXORH_X21_MASK                        0x00000020
#define _CRCXORH_X21_LENGTH                      0x00000001

#define _CRCXORH_X22_POSITION                    0x00000006
#define _CRCXORH_X22_MASK                        0x00000040
#define _CRCXORH_X22_LENGTH                      0x00000001

#define _CRCXORH_X23_POSITION                    0x00000007
#define _CRCXORH_X23_MASK                        0x00000080
#define _CRCXORH_X23_LENGTH                      0x00000001

#define _CRCXORH_X24_POSITION                    0x00000008
#define _CRCXORH_X24_MASK                        0x00000100
#define _CRCXORH_X24_LENGTH                      0x00000001

#define _CRCXORH_X25_POSITION                    0x00000009
#define _CRCXORH_X25_MASK                        0x00000200
#define _CRCXORH_X25_LENGTH                      0x00000001

#define _CRCXORH_X26_POSITION                    0x0000000A
#define _CRCXORH_X26_MASK                        0x00000400
#define _CRCXORH_X26_LENGTH                      0x00000001

#define _CRCXORH_X27_POSITION                    0x0000000B
#define _CRCXORH_X27_MASK                        0x00000800
#define _CRCXORH_X27_LENGTH                      0x00000001

#define _CRCXORH_X28_POSITION                    0x0000000C
#define _CRCXORH_X28_MASK                        0x00001000
#define _CRCXORH_X28_LENGTH                      0x00000001

#define _CRCXORH_X29_POSITION                    0x0000000D
#define _CRCXORH_X29_MASK                        0x00002000
#define _CRCXORH_X29_LENGTH                      0x00000001

#define _CRCXORH_X30_POSITION                    0x0000000E
#define _CRCXORH_X30_MASK                        0x00004000
#define _CRCXORH_X30_LENGTH                      0x00000001

#define _CRCXORH_X31_POSITION                    0x0000000F
#define _CRCXORH_X31_MASK                        0x00008000
#define _CRCXORH_X31_LENGTH                      0x00000001

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

#define _RPINR1_INT3R_POSITION                   0x00000008
#define _RPINR1_INT3R_MASK                       0x00003F00
#define _RPINR1_INT3R_LENGTH                     0x00000006

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

#define _RPINR1_INT3R0_POSITION                  0x00000008
#define _RPINR1_INT3R0_MASK                      0x00000100
#define _RPINR1_INT3R0_LENGTH                    0x00000001

#define _RPINR1_INT3R1_POSITION                  0x00000009
#define _RPINR1_INT3R1_MASK                      0x00000200
#define _RPINR1_INT3R1_LENGTH                    0x00000001

#define _RPINR1_INT3R2_POSITION                  0x0000000A
#define _RPINR1_INT3R2_MASK                      0x00000400
#define _RPINR1_INT3R2_LENGTH                    0x00000001

#define _RPINR1_INT3R3_POSITION                  0x0000000B
#define _RPINR1_INT3R3_MASK                      0x00000800
#define _RPINR1_INT3R3_LENGTH                    0x00000001

#define _RPINR1_INT3R4_POSITION                  0x0000000C
#define _RPINR1_INT3R4_MASK                      0x00001000
#define _RPINR1_INT3R4_LENGTH                    0x00000001

#define _RPINR1_INT3R5_POSITION                  0x0000000D
#define _RPINR1_INT3R5_MASK                      0x00002000
#define _RPINR1_INT3R5_LENGTH                    0x00000001

#define _RPINR2_INT4R_POSITION                   0x00000000
#define _RPINR2_INT4R_MASK                       0x0000003F
#define _RPINR2_INT4R_LENGTH                     0x00000006

#define _RPINR2_INT4R0_POSITION                  0x00000000
#define _RPINR2_INT4R0_MASK                      0x00000001
#define _RPINR2_INT4R0_LENGTH                    0x00000001

#define _RPINR2_INT4R1_POSITION                  0x00000001
#define _RPINR2_INT4R1_MASK                      0x00000002
#define _RPINR2_INT4R1_LENGTH                    0x00000001

#define _RPINR2_INT4R2_POSITION                  0x00000002
#define _RPINR2_INT4R2_MASK                      0x00000004
#define _RPINR2_INT4R2_LENGTH                    0x00000001

#define _RPINR2_INT5R3_POSITION                  0x00000003
#define _RPINR2_INT5R3_MASK                      0x00000008
#define _RPINR2_INT5R3_LENGTH                    0x00000001

#define _RPINR2_INT4R4_POSITION                  0x00000004
#define _RPINR2_INT4R4_MASK                      0x00000010
#define _RPINR2_INT4R4_LENGTH                    0x00000001

#define _RPINR2_INT4R5_POSITION                  0x00000005
#define _RPINR2_INT4R5_MASK                      0x00000020
#define _RPINR2_INT4R5_LENGTH                    0x00000001

#define _RPINR2_OC3R0_POSITION                   0x00000008
#define _RPINR2_OC3R0_MASK                       0x00000100
#define _RPINR2_OC3R0_LENGTH                     0x00000001

#define _RPINR2_OC3R1_POSITION                   0x00000009
#define _RPINR2_OC3R1_MASK                       0x00000200
#define _RPINR2_OC3R1_LENGTH                     0x00000001

#define _RPINR2_OC3R2_POSITION                   0x0000000A
#define _RPINR2_OC3R2_MASK                       0x00000400
#define _RPINR2_OC3R2_LENGTH                     0x00000001

#define _RPINR2_OC3R3_POSITION                   0x0000000B
#define _RPINR2_OC3R3_MASK                       0x00000800
#define _RPINR2_OC3R3_LENGTH                     0x00000001

#define _RPINR2_OC3R4_POSITION                   0x0000000C
#define _RPINR2_OC3R4_MASK                       0x00001000
#define _RPINR2_OC3R4_LENGTH                     0x00000001

#define _RPINR2_OC3R5_POSITION                   0x0000000D
#define _RPINR2_OC3R5_MASK                       0x00002000
#define _RPINR2_OC3R5_LENGTH                     0x00000001

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x0000003F
#define _RPINR3_T2CKR_LENGTH                     0x00000006

#define _RPINR3_T3CKR_POSITION                   0x00000008
#define _RPINR3_T3CKR_MASK                       0x00003F00
#define _RPINR3_T3CKR_LENGTH                     0x00000006

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

#define _RPINR3_T3CKR0_POSITION                  0x00000008
#define _RPINR3_T3CKR0_MASK                      0x00000100
#define _RPINR3_T3CKR0_LENGTH                    0x00000001

#define _RPINR3_T3CKR1_POSITION                  0x00000009
#define _RPINR3_T3CKR1_MASK                      0x00000200
#define _RPINR3_T3CKR1_LENGTH                    0x00000001

#define _RPINR3_T3CKR2_POSITION                  0x0000000A
#define _RPINR3_T3CKR2_MASK                      0x00000400
#define _RPINR3_T3CKR2_LENGTH                    0x00000001

#define _RPINR3_T3CKR3_POSITION                  0x0000000B
#define _RPINR3_T3CKR3_MASK                      0x00000800
#define _RPINR3_T3CKR3_LENGTH                    0x00000001

#define _RPINR3_T3CKR4_POSITION                  0x0000000C
#define _RPINR3_T3CKR4_MASK                      0x00001000
#define _RPINR3_T3CKR4_LENGTH                    0x00000001

#define _RPINR3_T3CKR5_POSITION                  0x0000000D
#define _RPINR3_T3CKR5_MASK                      0x00002000
#define _RPINR3_T3CKR5_LENGTH                    0x00000001

#define _RPINR4_T4CKR_POSITION                   0x00000000
#define _RPINR4_T4CKR_MASK                       0x0000003F
#define _RPINR4_T4CKR_LENGTH                     0x00000006

#define _RPINR4_T5CKR_POSITION                   0x00000008
#define _RPINR4_T5CKR_MASK                       0x00003F00
#define _RPINR4_T5CKR_LENGTH                     0x00000006

#define _RPINR4_T4CKR0_POSITION                  0x00000000
#define _RPINR4_T4CKR0_MASK                      0x00000001
#define _RPINR4_T4CKR0_LENGTH                    0x00000001

#define _RPINR4_T4CKR1_POSITION                  0x00000001
#define _RPINR4_T4CKR1_MASK                      0x00000002
#define _RPINR4_T4CKR1_LENGTH                    0x00000001

#define _RPINR4_T4CKR2_POSITION                  0x00000002
#define _RPINR4_T4CKR2_MASK                      0x00000004
#define _RPINR4_T4CKR2_LENGTH                    0x00000001

#define _RPINR4_T4CKR3_POSITION                  0x00000003
#define _RPINR4_T4CKR3_MASK                      0x00000008
#define _RPINR4_T4CKR3_LENGTH                    0x00000001

#define _RPINR4_T4CKR4_POSITION                  0x00000004
#define _RPINR4_T4CKR4_MASK                      0x00000010
#define _RPINR4_T4CKR4_LENGTH                    0x00000001

#define _RPINR4_T4CKR5_POSITION                  0x00000005
#define _RPINR4_T4CKR5_MASK                      0x00000020
#define _RPINR4_T4CKR5_LENGTH                    0x00000001

#define _RPINR4_T5CKR0_POSITION                  0x00000008
#define _RPINR4_T5CKR0_MASK                      0x00000100
#define _RPINR4_T5CKR0_LENGTH                    0x00000001

#define _RPINR4_T5CKR1_POSITION                  0x00000009
#define _RPINR4_T5CKR1_MASK                      0x00000200
#define _RPINR4_T5CKR1_LENGTH                    0x00000001

#define _RPINR4_T5CKR2_POSITION                  0x0000000A
#define _RPINR4_T5CKR2_MASK                      0x00000400
#define _RPINR4_T5CKR2_LENGTH                    0x00000001

#define _RPINR4_T5CKR3_POSITION                  0x0000000B
#define _RPINR4_T5CKR3_MASK                      0x00000800
#define _RPINR4_T5CKR3_LENGTH                    0x00000001

#define _RPINR4_T5CKR4_POSITION                  0x0000000C
#define _RPINR4_T5CKR4_MASK                      0x00001000
#define _RPINR4_T5CKR4_LENGTH                    0x00000001

#define _RPINR4_T5CKR5_POSITION                  0x0000000D
#define _RPINR4_T5CKR5_MASK                      0x00002000
#define _RPINR4_T5CKR5_LENGTH                    0x00000001

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x0000003F
#define _RPINR7_IC1R_LENGTH                      0x00000006

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x00003F00
#define _RPINR7_IC2R_LENGTH                      0x00000006

#define _RPINR7_IC1R0_POSITION                   0x00000000
#define _RPINR7_IC1R0_MASK                       0x00000001
#define _RPINR7_IC1R0_LENGTH                     0x00000001

#define _RPINR7_IC1R1_POSITION                   0x00000001
#define _RPINR7_IC1R1_MASK                       0x00000002
#define _RPINR7_IC1R1_LENGTH                     0x00000001

#define _RPINR7_IC1R2_POSITION                   0x00000002
#define _RPINR7_IC1R2_MASK                       0x00000004
#define _RPINR7_IC1R2_LENGTH                     0x00000001

#define _RPINR7_IC1R3_POSITION                   0x00000003
#define _RPINR7_IC1R3_MASK                       0x00000008
#define _RPINR7_IC1R3_LENGTH                     0x00000001

#define _RPINR7_IC1R4_POSITION                   0x00000004
#define _RPINR7_IC1R4_MASK                       0x00000010
#define _RPINR7_IC1R4_LENGTH                     0x00000001

#define _RPINR7_IC1R5_POSITION                   0x00000005
#define _RPINR7_IC1R5_MASK                       0x00000020
#define _RPINR7_IC1R5_LENGTH                     0x00000001

#define _RPINR7_IC2R0_POSITION                   0x00000008
#define _RPINR7_IC2R0_MASK                       0x00000100
#define _RPINR7_IC2R0_LENGTH                     0x00000001

#define _RPINR7_IC2R1_POSITION                   0x00000009
#define _RPINR7_IC2R1_MASK                       0x00000200
#define _RPINR7_IC2R1_LENGTH                     0x00000001

#define _RPINR7_IC2R2_POSITION                   0x0000000A
#define _RPINR7_IC2R2_MASK                       0x00000400
#define _RPINR7_IC2R2_LENGTH                     0x00000001

#define _RPINR7_IC2R3_POSITION                   0x0000000B
#define _RPINR7_IC2R3_MASK                       0x00000800
#define _RPINR7_IC2R3_LENGTH                     0x00000001

#define _RPINR7_IC2R4_POSITION                   0x0000000C
#define _RPINR7_IC2R4_MASK                       0x00001000
#define _RPINR7_IC2R4_LENGTH                     0x00000001

#define _RPINR7_IC2R5_POSITION                   0x0000000D
#define _RPINR7_IC2R5_MASK                       0x00002000
#define _RPINR7_IC2R5_LENGTH                     0x00000001

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x0000003F
#define _RPINR8_IC3R_LENGTH                      0x00000006

#define _RPINR8_IC4R_POSITION                    0x00000008
#define _RPINR8_IC4R_MASK                        0x00003F00
#define _RPINR8_IC4R_LENGTH                      0x00000006

#define _RPINR8_IC3R0_POSITION                   0x00000000
#define _RPINR8_IC3R0_MASK                       0x00000001
#define _RPINR8_IC3R0_LENGTH                     0x00000001

#define _RPINR8_IC3R1_POSITION                   0x00000001
#define _RPINR8_IC3R1_MASK                       0x00000002
#define _RPINR8_IC3R1_LENGTH                     0x00000001

#define _RPINR8_IC3R2_POSITION                   0x00000002
#define _RPINR8_IC3R2_MASK                       0x00000004
#define _RPINR8_IC3R2_LENGTH                     0x00000001

#define _RPINR8_IC3R3_POSITION                   0x00000003
#define _RPINR8_IC3R3_MASK                       0x00000008
#define _RPINR8_IC3R3_LENGTH                     0x00000001

#define _RPINR8_IC3R4_POSITION                   0x00000004
#define _RPINR8_IC3R4_MASK                       0x00000010
#define _RPINR8_IC3R4_LENGTH                     0x00000001

#define _RPINR8_IC3R5_POSITION                   0x00000005
#define _RPINR8_IC3R5_MASK                       0x00000020
#define _RPINR8_IC3R5_LENGTH                     0x00000001

#define _RPINR8_IC4R0_POSITION                   0x00000008
#define _RPINR8_IC4R0_MASK                       0x00000100
#define _RPINR8_IC4R0_LENGTH                     0x00000001

#define _RPINR8_IC4R1_POSITION                   0x00000009
#define _RPINR8_IC4R1_MASK                       0x00000200
#define _RPINR8_IC4R1_LENGTH                     0x00000001

#define _RPINR8_IC4R2_POSITION                   0x0000000A
#define _RPINR8_IC4R2_MASK                       0x00000400
#define _RPINR8_IC4R2_LENGTH                     0x00000001

#define _RPINR8_IC4R3_POSITION                   0x0000000B
#define _RPINR8_IC4R3_MASK                       0x00000800
#define _RPINR8_IC4R3_LENGTH                     0x00000001

#define _RPINR8_IC4R4_POSITION                   0x0000000C
#define _RPINR8_IC4R4_MASK                       0x00001000
#define _RPINR8_IC4R4_LENGTH                     0x00000001

#define _RPINR8_IC4R5_POSITION                   0x0000000D
#define _RPINR8_IC4R5_MASK                       0x00002000
#define _RPINR8_IC4R5_LENGTH                     0x00000001

#define _RPINR9_IC5R_POSITION                    0x00000000
#define _RPINR9_IC5R_MASK                        0x0000003F
#define _RPINR9_IC5R_LENGTH                      0x00000006

#define _RPINR9_IC6R_POSITION                    0x00000008
#define _RPINR9_IC6R_MASK                        0x00003F00
#define _RPINR9_IC6R_LENGTH                      0x00000006

#define _RPINR9_IC5R0_POSITION                   0x00000000
#define _RPINR9_IC5R0_MASK                       0x00000001
#define _RPINR9_IC5R0_LENGTH                     0x00000001

#define _RPINR9_IC5R1_POSITION                   0x00000001
#define _RPINR9_IC5R1_MASK                       0x00000002
#define _RPINR9_IC5R1_LENGTH                     0x00000001

#define _RPINR9_IC5R2_POSITION                   0x00000002
#define _RPINR9_IC5R2_MASK                       0x00000004
#define _RPINR9_IC5R2_LENGTH                     0x00000001

#define _RPINR9_IC5R3_POSITION                   0x00000003
#define _RPINR9_IC5R3_MASK                       0x00000008
#define _RPINR9_IC5R3_LENGTH                     0x00000001

#define _RPINR9_IC5R4_POSITION                   0x00000004
#define _RPINR9_IC5R4_MASK                       0x00000010
#define _RPINR9_IC5R4_LENGTH                     0x00000001

#define _RPINR9_IC5R5_POSITION                   0x00000005
#define _RPINR9_IC5R5_MASK                       0x00000020
#define _RPINR9_IC5R5_LENGTH                     0x00000001

#define _RPINR9_IC6R0_POSITION                   0x00000008
#define _RPINR9_IC6R0_MASK                       0x00000100
#define _RPINR9_IC6R0_LENGTH                     0x00000001

#define _RPINR9_IC6R1_POSITION                   0x00000009
#define _RPINR9_IC6R1_MASK                       0x00000200
#define _RPINR9_IC6R1_LENGTH                     0x00000001

#define _RPINR9_IC6R2_POSITION                   0x0000000A
#define _RPINR9_IC6R2_MASK                       0x00000400
#define _RPINR9_IC6R2_LENGTH                     0x00000001

#define _RPINR9_IC6R3_POSITION                   0x0000000B
#define _RPINR9_IC6R3_MASK                       0x00000800
#define _RPINR9_IC6R3_LENGTH                     0x00000001

#define _RPINR9_IC6R4_POSITION                   0x0000000C
#define _RPINR9_IC6R4_MASK                       0x00001000
#define _RPINR9_IC6R4_LENGTH                     0x00000001

#define _RPINR9_IC6R5_POSITION                   0x0000000D
#define _RPINR9_IC6R5_MASK                       0x00002000
#define _RPINR9_IC6R5_LENGTH                     0x00000001

#define _RPINR10_IC7R_POSITION                   0x00000000
#define _RPINR10_IC7R_MASK                       0x0000003F
#define _RPINR10_IC7R_LENGTH                     0x00000006

#define _RPINR10_IC7R0_POSITION                  0x00000000
#define _RPINR10_IC7R0_MASK                      0x00000001
#define _RPINR10_IC7R0_LENGTH                    0x00000001

#define _RPINR10_IC7R1_POSITION                  0x00000001
#define _RPINR10_IC7R1_MASK                      0x00000002
#define _RPINR10_IC7R1_LENGTH                    0x00000001

#define _RPINR10_IC7R2_POSITION                  0x00000002
#define _RPINR10_IC7R2_MASK                      0x00000004
#define _RPINR10_IC7R2_LENGTH                    0x00000001

#define _RPINR10_IC7R3_POSITION                  0x00000003
#define _RPINR10_IC7R3_MASK                      0x00000008
#define _RPINR10_IC7R3_LENGTH                    0x00000001

#define _RPINR10_IC7R4_POSITION                  0x00000004
#define _RPINR10_IC7R4_MASK                      0x00000010
#define _RPINR10_IC7R4_LENGTH                    0x00000001

#define _RPINR10_IC7R5_POSITION                  0x00000005
#define _RPINR10_IC7R5_MASK                      0x00000020
#define _RPINR10_IC7R5_LENGTH                    0x00000001

#define _RPINR10_IC8R0_POSITION                  0x00000008
#define _RPINR10_IC8R0_MASK                      0x00000100
#define _RPINR10_IC8R0_LENGTH                    0x00000001

#define _RPINR10_IC8R1_POSITION                  0x00000009
#define _RPINR10_IC8R1_MASK                      0x00000200
#define _RPINR10_IC8R1_LENGTH                    0x00000001

#define _RPINR10_IC8R2_POSITION                  0x0000000A
#define _RPINR10_IC8R2_MASK                      0x00000400
#define _RPINR10_IC8R2_LENGTH                    0x00000001

#define _RPINR10_IC8R3_POSITION                  0x0000000B
#define _RPINR10_IC8R3_MASK                      0x00000800
#define _RPINR10_IC8R3_LENGTH                    0x00000001

#define _RPINR10_IC8R4_POSITION                  0x0000000C
#define _RPINR10_IC8R4_MASK                      0x00001000
#define _RPINR10_IC8R4_LENGTH                    0x00000001

#define _RPINR10_IC8R5_POSITION                  0x0000000D
#define _RPINR10_IC8R5_MASK                      0x00002000
#define _RPINR10_IC8R5_LENGTH                    0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x0000003F
#define _RPINR11_OCFAR_LENGTH                    0x00000006

#define _RPINR11_OCFBR_POSITION                  0x00000008
#define _RPINR11_OCFBR_MASK                      0x00003F00
#define _RPINR11_OCFBR_LENGTH                    0x00000006

#define _RPINR11_OCFAR0_POSITION                 0x00000000
#define _RPINR11_OCFAR0_MASK                     0x00000001
#define _RPINR11_OCFAR0_LENGTH                   0x00000001

#define _RPINR11_OCFAR1_POSITION                 0x00000001
#define _RPINR11_OCFAR1_MASK                     0x00000002
#define _RPINR11_OCFAR1_LENGTH                   0x00000001

#define _RPINR11_OCFAR2_POSITION                 0x00000002
#define _RPINR11_OCFAR2_MASK                     0x00000004
#define _RPINR11_OCFAR2_LENGTH                   0x00000001

#define _RPINR11_OCFAR3_POSITION                 0x00000003
#define _RPINR11_OCFAR3_MASK                     0x00000008
#define _RPINR11_OCFAR3_LENGTH                   0x00000001

#define _RPINR11_OCFAR4_POSITION                 0x00000004
#define _RPINR11_OCFAR4_MASK                     0x00000010
#define _RPINR11_OCFAR4_LENGTH                   0x00000001

#define _RPINR11_OCFAR5_POSITION                 0x00000005
#define _RPINR11_OCFAR5_MASK                     0x00000020
#define _RPINR11_OCFAR5_LENGTH                   0x00000001

#define _RPINR11_OCFBR0_POSITION                 0x00000008
#define _RPINR11_OCFBR0_MASK                     0x00000100
#define _RPINR11_OCFBR0_LENGTH                   0x00000001

#define _RPINR11_OCFBR1_POSITION                 0x00000009
#define _RPINR11_OCFBR1_MASK                     0x00000200
#define _RPINR11_OCFBR1_LENGTH                   0x00000001

#define _RPINR11_OCFBR2_POSITION                 0x0000000A
#define _RPINR11_OCFBR2_MASK                     0x00000400
#define _RPINR11_OCFBR2_LENGTH                   0x00000001

#define _RPINR11_OCFBR3_POSITION                 0x0000000B
#define _RPINR11_OCFBR3_MASK                     0x00000800
#define _RPINR11_OCFBR3_LENGTH                   0x00000001

#define _RPINR11_OCFBR4_POSITION                 0x0000000C
#define _RPINR11_OCFBR4_MASK                     0x00001000
#define _RPINR11_OCFBR4_LENGTH                   0x00000001

#define _RPINR11_OCFBR5_POSITION                 0x0000000D
#define _RPINR11_OCFBR5_MASK                     0x00002000
#define _RPINR11_OCFBR5_LENGTH                   0x00000001

#define _RPINR17_U3RXR_POSITION                  0x00000008
#define _RPINR17_U3RXR_MASK                      0x00003F00
#define _RPINR17_U3RXR_LENGTH                    0x00000006

#define _RPINR17_U3RXR0_POSITION                 0x00000008
#define _RPINR17_U3RXR0_MASK                     0x00000100
#define _RPINR17_U3RXR0_LENGTH                   0x00000001

#define _RPINR17_U3RXR1_POSITION                 0x00000009
#define _RPINR17_U3RXR1_MASK                     0x00000200
#define _RPINR17_U3RXR1_LENGTH                   0x00000001

#define _RPINR17_U3RXR2_POSITION                 0x0000000A
#define _RPINR17_U3RXR2_MASK                     0x00000400
#define _RPINR17_U3RXR2_LENGTH                   0x00000001

#define _RPINR17_U3RXR3_POSITION                 0x0000000B
#define _RPINR17_U3RXR3_MASK                     0x00000800
#define _RPINR17_U3RXR3_LENGTH                   0x00000001

#define _RPINR17_U3RXR4_POSITION                 0x0000000C
#define _RPINR17_U3RXR4_MASK                     0x00001000
#define _RPINR17_U3RXR4_LENGTH                   0x00000001

#define _RPINR17_U3RXR5_POSITION                 0x0000000D
#define _RPINR17_U3RXR5_MASK                     0x00002000
#define _RPINR17_U3RXR5_LENGTH                   0x00000001

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x0000003F
#define _RPINR18_U1RXR_LENGTH                    0x00000006

#define _RPINR18_U1CTSR_POSITION                 0x00000008
#define _RPINR18_U1CTSR_MASK                     0x00003F00
#define _RPINR18_U1CTSR_LENGTH                   0x00000006

#define _RPINR18_U1RXR0_POSITION                 0x00000000
#define _RPINR18_U1RXR0_MASK                     0x00000001
#define _RPINR18_U1RXR0_LENGTH                   0x00000001

#define _RPINR18_U1RXR1_POSITION                 0x00000001
#define _RPINR18_U1RXR1_MASK                     0x00000002
#define _RPINR18_U1RXR1_LENGTH                   0x00000001

#define _RPINR18_U1RXR2_POSITION                 0x00000002
#define _RPINR18_U1RXR2_MASK                     0x00000004
#define _RPINR18_U1RXR2_LENGTH                   0x00000001

#define _RPINR18_U1RXR3_POSITION                 0x00000003
#define _RPINR18_U1RXR3_MASK                     0x00000008
#define _RPINR18_U1RXR3_LENGTH                   0x00000001

#define _RPINR18_U1RXR4_POSITION                 0x00000004
#define _RPINR18_U1RXR4_MASK                     0x00000010
#define _RPINR18_U1RXR4_LENGTH                   0x00000001

#define _RPINR18_U1RXR5_POSITION                 0x00000005
#define _RPINR18_U1RXR5_MASK                     0x00000020
#define _RPINR18_U1RXR5_LENGTH                   0x00000001

#define _RPINR18_U1CTSR0_POSITION                0x00000008
#define _RPINR18_U1CTSR0_MASK                    0x00000100
#define _RPINR18_U1CTSR0_LENGTH                  0x00000001

#define _RPINR18_U1CTSR1_POSITION                0x00000009
#define _RPINR18_U1CTSR1_MASK                    0x00000200
#define _RPINR18_U1CTSR1_LENGTH                  0x00000001

#define _RPINR18_U1CTSR2_POSITION                0x0000000A
#define _RPINR18_U1CTSR2_MASK                    0x00000400
#define _RPINR18_U1CTSR2_LENGTH                  0x00000001

#define _RPINR18_U1CTSR3_POSITION                0x0000000B
#define _RPINR18_U1CTSR3_MASK                    0x00000800
#define _RPINR18_U1CTSR3_LENGTH                  0x00000001

#define _RPINR18_U1CTSR4_POSITION                0x0000000C
#define _RPINR18_U1CTSR4_MASK                    0x00001000
#define _RPINR18_U1CTSR4_LENGTH                  0x00000001

#define _RPINR18_U1CTSR5_POSITION                0x0000000D
#define _RPINR18_U1CTSR5_MASK                    0x00002000
#define _RPINR18_U1CTSR5_LENGTH                  0x00000001

#define _RPINR19_U2RXR_POSITION                  0x00000000
#define _RPINR19_U2RXR_MASK                      0x0000003F
#define _RPINR19_U2RXR_LENGTH                    0x00000006

#define _RPINR19_U2CTSR_POSITION                 0x00000008
#define _RPINR19_U2CTSR_MASK                     0x00003F00
#define _RPINR19_U2CTSR_LENGTH                   0x00000006

#define _RPINR19_U2RXR0_POSITION                 0x00000000
#define _RPINR19_U2RXR0_MASK                     0x00000001
#define _RPINR19_U2RXR0_LENGTH                   0x00000001

#define _RPINR19_U2RXR1_POSITION                 0x00000001
#define _RPINR19_U2RXR1_MASK                     0x00000002
#define _RPINR19_U2RXR1_LENGTH                   0x00000001

#define _RPINR19_U2RXR2_POSITION                 0x00000002
#define _RPINR19_U2RXR2_MASK                     0x00000004
#define _RPINR19_U2RXR2_LENGTH                   0x00000001

#define _RPINR19_U2RXR3_POSITION                 0x00000003
#define _RPINR19_U2RXR3_MASK                     0x00000008
#define _RPINR19_U2RXR3_LENGTH                   0x00000001

#define _RPINR19_U2RXR4_POSITION                 0x00000004
#define _RPINR19_U2RXR4_MASK                     0x00000010
#define _RPINR19_U2RXR4_LENGTH                   0x00000001

#define _RPINR19_U2RXR5_POSITION                 0x00000005
#define _RPINR19_U2RXR5_MASK                     0x00000020
#define _RPINR19_U2RXR5_LENGTH                   0x00000001

#define _RPINR19_U2CTSR0_POSITION                0x00000008
#define _RPINR19_U2CTSR0_MASK                    0x00000100
#define _RPINR19_U2CTSR0_LENGTH                  0x00000001

#define _RPINR19_U2CTSR1_POSITION                0x00000009
#define _RPINR19_U2CTSR1_MASK                    0x00000200
#define _RPINR19_U2CTSR1_LENGTH                  0x00000001

#define _RPINR19_U2CTSR2_POSITION                0x0000000A
#define _RPINR19_U2CTSR2_MASK                    0x00000400
#define _RPINR19_U2CTSR2_LENGTH                  0x00000001

#define _RPINR19_U2CTSR3_POSITION                0x0000000B
#define _RPINR19_U2CTSR3_MASK                    0x00000800
#define _RPINR19_U2CTSR3_LENGTH                  0x00000001

#define _RPINR19_U2CTSR4_POSITION                0x0000000C
#define _RPINR19_U2CTSR4_MASK                    0x00001000
#define _RPINR19_U2CTSR4_LENGTH                  0x00000001

#define _RPINR19_U2CTSR5_POSITION                0x0000000D
#define _RPINR19_U2CTSR5_MASK                    0x00002000
#define _RPINR19_U2CTSR5_LENGTH                  0x00000001

#define _RPINR20_SDI1R_POSITION                  0x00000000
#define _RPINR20_SDI1R_MASK                      0x0000003F
#define _RPINR20_SDI1R_LENGTH                    0x00000006

#define _RPINR20_SCK1R_POSITION                  0x00000008
#define _RPINR20_SCK1R_MASK                      0x00003F00
#define _RPINR20_SCK1R_LENGTH                    0x00000006

#define _RPINR20_SDI1R0_POSITION                 0x00000000
#define _RPINR20_SDI1R0_MASK                     0x00000001
#define _RPINR20_SDI1R0_LENGTH                   0x00000001

#define _RPINR20_SDI1R1_POSITION                 0x00000001
#define _RPINR20_SDI1R1_MASK                     0x00000002
#define _RPINR20_SDI1R1_LENGTH                   0x00000001

#define _RPINR20_SDI1R2_POSITION                 0x00000002
#define _RPINR20_SDI1R2_MASK                     0x00000004
#define _RPINR20_SDI1R2_LENGTH                   0x00000001

#define _RPINR20_SDI1R3_POSITION                 0x00000003
#define _RPINR20_SDI1R3_MASK                     0x00000008
#define _RPINR20_SDI1R3_LENGTH                   0x00000001

#define _RPINR20_SDI1R4_POSITION                 0x00000004
#define _RPINR20_SDI1R4_MASK                     0x00000010
#define _RPINR20_SDI1R4_LENGTH                   0x00000001

#define _RPINR20_SDI1R5_POSITION                 0x00000005
#define _RPINR20_SDI1R5_MASK                     0x00000020
#define _RPINR20_SDI1R5_LENGTH                   0x00000001

#define _RPINR20_SCK1R0_POSITION                 0x00000008
#define _RPINR20_SCK1R0_MASK                     0x00000100
#define _RPINR20_SCK1R0_LENGTH                   0x00000001

#define _RPINR20_SCK1R1_POSITION                 0x00000009
#define _RPINR20_SCK1R1_MASK                     0x00000200
#define _RPINR20_SCK1R1_LENGTH                   0x00000001

#define _RPINR20_SCK1R2_POSITION                 0x0000000A
#define _RPINR20_SCK1R2_MASK                     0x00000400
#define _RPINR20_SCK1R2_LENGTH                   0x00000001

#define _RPINR20_SCK1R3_POSITION                 0x0000000B
#define _RPINR20_SCK1R3_MASK                     0x00000800
#define _RPINR20_SCK1R3_LENGTH                   0x00000001

#define _RPINR20_SCK1R4_POSITION                 0x0000000C
#define _RPINR20_SCK1R4_MASK                     0x00001000
#define _RPINR20_SCK1R4_LENGTH                   0x00000001

#define _RPINR20_SCK1R5_POSITION                 0x0000000D
#define _RPINR20_SCK1R5_MASK                     0x00002000
#define _RPINR20_SCK1R5_LENGTH                   0x00000001

#define _RPINR21_SS1R_POSITION                   0x00000000
#define _RPINR21_SS1R_MASK                       0x0000003F
#define _RPINR21_SS1R_LENGTH                     0x00000006

#define _RPINR21_U3CTSR_POSITION                 0x00000008
#define _RPINR21_U3CTSR_MASK                     0x00003F00
#define _RPINR21_U3CTSR_LENGTH                   0x00000006

#define _RPINR21_SS1R0_POSITION                  0x00000000
#define _RPINR21_SS1R0_MASK                      0x00000001
#define _RPINR21_SS1R0_LENGTH                    0x00000001

#define _RPINR21_SS1R1_POSITION                  0x00000001
#define _RPINR21_SS1R1_MASK                      0x00000002
#define _RPINR21_SS1R1_LENGTH                    0x00000001

#define _RPINR21_SS1R2_POSITION                  0x00000002
#define _RPINR21_SS1R2_MASK                      0x00000004
#define _RPINR21_SS1R2_LENGTH                    0x00000001

#define _RPINR21_SS1R3_POSITION                  0x00000003
#define _RPINR21_SS1R3_MASK                      0x00000008
#define _RPINR21_SS1R3_LENGTH                    0x00000001

#define _RPINR21_SS1R4_POSITION                  0x00000004
#define _RPINR21_SS1R4_MASK                      0x00000010
#define _RPINR21_SS1R4_LENGTH                    0x00000001

#define _RPINR21_SS1R5_POSITION                  0x00000005
#define _RPINR21_SS1R5_MASK                      0x00000020
#define _RPINR21_SS1R5_LENGTH                    0x00000001

#define _RPINR21_U3CTSR0_POSITION                0x00000008
#define _RPINR21_U3CTSR0_MASK                    0x00000100
#define _RPINR21_U3CTSR0_LENGTH                  0x00000001

#define _RPINR21_U3CTSR1_POSITION                0x00000009
#define _RPINR21_U3CTSR1_MASK                    0x00000200
#define _RPINR21_U3CTSR1_LENGTH                  0x00000001

#define _RPINR21_U3CTSR2_POSITION                0x0000000A
#define _RPINR21_U3CTSR2_MASK                    0x00000400
#define _RPINR21_U3CTSR2_LENGTH                  0x00000001

#define _RPINR21_U3CTSR3_POSITION                0x0000000B
#define _RPINR21_U3CTSR3_MASK                    0x00000800
#define _RPINR21_U3CTSR3_LENGTH                  0x00000001

#define _RPINR21_U3CTSR4_POSITION                0x0000000C
#define _RPINR21_U3CTSR4_MASK                    0x00001000
#define _RPINR21_U3CTSR4_LENGTH                  0x00000001

#define _RPINR21_U3CTSR5_POSITION                0x0000000D
#define _RPINR21_U3CTSR5_MASK                    0x00002000
#define _RPINR21_U3CTSR5_LENGTH                  0x00000001

#define _RPINR22_SDI2R_POSITION                  0x00000000
#define _RPINR22_SDI2R_MASK                      0x0000003F
#define _RPINR22_SDI2R_LENGTH                    0x00000006

#define _RPINR22_SCK2R_POSITION                  0x00000008
#define _RPINR22_SCK2R_MASK                      0x00003F00
#define _RPINR22_SCK2R_LENGTH                    0x00000006

#define _RPINR22_SDI2R0_POSITION                 0x00000000
#define _RPINR22_SDI2R0_MASK                     0x00000001
#define _RPINR22_SDI2R0_LENGTH                   0x00000001

#define _RPINR22_SDI2R1_POSITION                 0x00000001
#define _RPINR22_SDI2R1_MASK                     0x00000002
#define _RPINR22_SDI2R1_LENGTH                   0x00000001

#define _RPINR22_SDI2R2_POSITION                 0x00000002
#define _RPINR22_SDI2R2_MASK                     0x00000004
#define _RPINR22_SDI2R2_LENGTH                   0x00000001

#define _RPINR22_SDI2R3_POSITION                 0x00000003
#define _RPINR22_SDI2R3_MASK                     0x00000008
#define _RPINR22_SDI2R3_LENGTH                   0x00000001

#define _RPINR22_SDI2R4_POSITION                 0x00000004
#define _RPINR22_SDI2R4_MASK                     0x00000010
#define _RPINR22_SDI2R4_LENGTH                   0x00000001

#define _RPINR22_SDI2R5_POSITION                 0x00000005
#define _RPINR22_SDI2R5_MASK                     0x00000020
#define _RPINR22_SDI2R5_LENGTH                   0x00000001

#define _RPINR22_SCK2R0_POSITION                 0x00000008
#define _RPINR22_SCK2R0_MASK                     0x00000100
#define _RPINR22_SCK2R0_LENGTH                   0x00000001

#define _RPINR22_SCK2R1_POSITION                 0x00000009
#define _RPINR22_SCK2R1_MASK                     0x00000200
#define _RPINR22_SCK2R1_LENGTH                   0x00000001

#define _RPINR22_SCK2R2_POSITION                 0x0000000A
#define _RPINR22_SCK2R2_MASK                     0x00000400
#define _RPINR22_SCK2R2_LENGTH                   0x00000001

#define _RPINR22_SCK2R3_POSITION                 0x0000000B
#define _RPINR22_SCK2R3_MASK                     0x00000800
#define _RPINR22_SCK2R3_LENGTH                   0x00000001

#define _RPINR22_SCK2R4_POSITION                 0x0000000C
#define _RPINR22_SCK2R4_MASK                     0x00001000
#define _RPINR22_SCK2R4_LENGTH                   0x00000001

#define _RPINR22_SCK2R5_POSITION                 0x0000000D
#define _RPINR22_SCK2R5_MASK                     0x00002000
#define _RPINR22_SCK2R5_LENGTH                   0x00000001

#define _RPINR23_SS2R_POSITION                   0x00000000
#define _RPINR23_SS2R_MASK                       0x0000003F
#define _RPINR23_SS2R_LENGTH                     0x00000006

#define _RPINR23_T1CKR_POSITION                  0x00000008
#define _RPINR23_T1CKR_MASK                      0x00003F00
#define _RPINR23_T1CKR_LENGTH                    0x00000006

#define _RPINR23_SS2R0_POSITION                  0x00000000
#define _RPINR23_SS2R0_MASK                      0x00000001
#define _RPINR23_SS2R0_LENGTH                    0x00000001

#define _RPINR23_SS2R1_POSITION                  0x00000001
#define _RPINR23_SS2R1_MASK                      0x00000002
#define _RPINR23_SS2R1_LENGTH                    0x00000001

#define _RPINR23_SS2R2_POSITION                  0x00000002
#define _RPINR23_SS2R2_MASK                      0x00000004
#define _RPINR23_SS2R2_LENGTH                    0x00000001

#define _RPINR23_SS2R3_POSITION                  0x00000003
#define _RPINR23_SS2R3_MASK                      0x00000008
#define _RPINR23_SS2R3_LENGTH                    0x00000001

#define _RPINR23_SS2R4_POSITION                  0x00000004
#define _RPINR23_SS2R4_MASK                      0x00000010
#define _RPINR23_SS2R4_LENGTH                    0x00000001

#define _RPINR23_SS2R5_POSITION                  0x00000005
#define _RPINR23_SS2R5_MASK                      0x00000020
#define _RPINR23_SS2R5_LENGTH                    0x00000001

#define _RPINR23_T1CKR0_POSITION                 0x00000008
#define _RPINR23_T1CKR0_MASK                     0x00000100
#define _RPINR23_T1CKR0_LENGTH                   0x00000001

#define _RPINR23_T1CKR1_POSITION                 0x00000009
#define _RPINR23_T1CKR1_MASK                     0x00000200
#define _RPINR23_T1CKR1_LENGTH                   0x00000001

#define _RPINR23_T1CKR2_POSITION                 0x0000000A
#define _RPINR23_T1CKR2_MASK                     0x00000400
#define _RPINR23_T1CKR2_LENGTH                   0x00000001

#define _RPINR23_T1CKR3_POSITION                 0x0000000B
#define _RPINR23_T1CKR3_MASK                     0x00000800
#define _RPINR23_T1CKR3_LENGTH                   0x00000001

#define _RPINR23_T1CKR4_POSITION                 0x0000000C
#define _RPINR23_T1CKR4_MASK                     0x00001000
#define _RPINR23_T1CKR4_LENGTH                   0x00000001

#define _RPINR23_T1CKR5_POSITION                 0x0000000D
#define _RPINR23_T1CKR5_MASK                     0x00002000
#define _RPINR23_T1CKR5_LENGTH                   0x00000001

#define _RPINR27_U4RXR_POSITION                  0x00000000
#define _RPINR27_U4RXR_MASK                      0x0000003F
#define _RPINR27_U4RXR_LENGTH                    0x00000006

#define _RPINR27_U4CTSR_POSITION                 0x00000008
#define _RPINR27_U4CTSR_MASK                     0x00003F00
#define _RPINR27_U4CTSR_LENGTH                   0x00000006

#define _RPINR27_U4RXR0_POSITION                 0x00000000
#define _RPINR27_U4RXR0_MASK                     0x00000001
#define _RPINR27_U4RXR0_LENGTH                   0x00000001

#define _RPINR27_U4RXR1_POSITION                 0x00000001
#define _RPINR27_U4RXR1_MASK                     0x00000002
#define _RPINR27_U4RXR1_LENGTH                   0x00000001

#define _RPINR27_U4RXR2_POSITION                 0x00000002
#define _RPINR27_U4RXR2_MASK                     0x00000004
#define _RPINR27_U4RXR2_LENGTH                   0x00000001

#define _RPINR27_U4RXR3_POSITION                 0x00000003
#define _RPINR27_U4RXR3_MASK                     0x00000008
#define _RPINR27_U4RXR3_LENGTH                   0x00000001

#define _RPINR27_U4RXR4_POSITION                 0x00000004
#define _RPINR27_U4RXR4_MASK                     0x00000010
#define _RPINR27_U4RXR4_LENGTH                   0x00000001

#define _RPINR27_U4RXR5_POSITION                 0x00000005
#define _RPINR27_U4RXR5_MASK                     0x00000020
#define _RPINR27_U4RXR5_LENGTH                   0x00000001

#define _RPINR27_U4CTSR0_POSITION                0x00000008
#define _RPINR27_U4CTSR0_MASK                    0x00000100
#define _RPINR27_U4CTSR0_LENGTH                  0x00000001

#define _RPINR27_U4CTSR1_POSITION                0x00000009
#define _RPINR27_U4CTSR1_MASK                    0x00000200
#define _RPINR27_U4CTSR1_LENGTH                  0x00000001

#define _RPINR27_U4CTSR2_POSITION                0x0000000A
#define _RPINR27_U4CTSR2_MASK                    0x00000400
#define _RPINR27_U4CTSR2_LENGTH                  0x00000001

#define _RPINR27_U4CTSR3_POSITION                0x0000000B
#define _RPINR27_U4CTSR3_MASK                    0x00000800
#define _RPINR27_U4CTSR3_LENGTH                  0x00000001

#define _RPINR27_U4CTSR4_POSITION                0x0000000C
#define _RPINR27_U4CTSR4_MASK                    0x00001000
#define _RPINR27_U4CTSR4_LENGTH                  0x00000001

#define _RPINR27_U4CTSR5_POSITION                0x0000000D
#define _RPINR27_U4CTSR5_MASK                    0x00002000
#define _RPINR27_U4CTSR5_LENGTH                  0x00000001

#define _RPINR30_MDMIR_POSITION                  0x00000000
#define _RPINR30_MDMIR_MASK                      0x0000003F
#define _RPINR30_MDMIR_LENGTH                    0x00000006

#define _RPINR30_MDMIR0_POSITION                 0x00000000
#define _RPINR30_MDMIR0_MASK                     0x00000001
#define _RPINR30_MDMIR0_LENGTH                   0x00000001

#define _RPINR30_MDMIR1_POSITION                 0x00000001
#define _RPINR30_MDMIR1_MASK                     0x00000002
#define _RPINR30_MDMIR1_LENGTH                   0x00000001

#define _RPINR30_MDMIR2_POSITION                 0x00000002
#define _RPINR30_MDMIR2_MASK                     0x00000004
#define _RPINR30_MDMIR2_LENGTH                   0x00000001

#define _RPINR30_MDMIR3_POSITION                 0x00000003
#define _RPINR30_MDMIR3_MASK                     0x00000008
#define _RPINR30_MDMIR3_LENGTH                   0x00000001

#define _RPINR30_MDMIR4_POSITION                 0x00000004
#define _RPINR30_MDMIR4_MASK                     0x00000010
#define _RPINR30_MDMIR4_LENGTH                   0x00000001

#define _RPINR30_MDMIR5_POSITION                 0x00000005
#define _RPINR30_MDMIR5_MASK                     0x00000020
#define _RPINR30_MDMIR5_LENGTH                   0x00000001

#define _RPINR31_MDC1R_POSITION                  0x00000000
#define _RPINR31_MDC1R_MASK                      0x0000003F
#define _RPINR31_MDC1R_LENGTH                    0x00000006

#define _RPINR31_MDC2R_POSITION                  0x00000008
#define _RPINR31_MDC2R_MASK                      0x00003F00
#define _RPINR31_MDC2R_LENGTH                    0x00000006

#define _RPINR31_MDC1R0_POSITION                 0x00000000
#define _RPINR31_MDC1R0_MASK                     0x00000001
#define _RPINR31_MDC1R0_LENGTH                   0x00000001

#define _RPINR31_MDC1R1_POSITION                 0x00000001
#define _RPINR31_MDC1R1_MASK                     0x00000002
#define _RPINR31_MDC1R1_LENGTH                   0x00000001

#define _RPINR31_MDC1R2_POSITION                 0x00000002
#define _RPINR31_MDC1R2_MASK                     0x00000004
#define _RPINR31_MDC1R2_LENGTH                   0x00000001

#define _RPINR31_MDC1R3_POSITION                 0x00000003
#define _RPINR31_MDC1R3_MASK                     0x00000008
#define _RPINR31_MDC1R3_LENGTH                   0x00000001

#define _RPINR31_MDC1R4_POSITION                 0x00000004
#define _RPINR31_MDC1R4_MASK                     0x00000010
#define _RPINR31_MDC1R4_LENGTH                   0x00000001

#define _RPINR31_MDC1R5_POSITION                 0x00000005
#define _RPINR31_MDC1R5_MASK                     0x00000020
#define _RPINR31_MDC1R5_LENGTH                   0x00000001

#define _RPINR31_MDC2R0_POSITION                 0x00000008
#define _RPINR31_MDC2R0_MASK                     0x00000100
#define _RPINR31_MDC2R0_LENGTH                   0x00000001

#define _RPINR31_MDC2R1_POSITION                 0x00000009
#define _RPINR31_MDC2R1_MASK                     0x00000200
#define _RPINR31_MDC2R1_LENGTH                   0x00000001

#define _RPINR31_MDC2R2_POSITION                 0x0000000A
#define _RPINR31_MDC2R2_MASK                     0x00000400
#define _RPINR31_MDC2R2_LENGTH                   0x00000001

#define _RPINR31_MDC2R3_POSITION                 0x0000000B
#define _RPINR31_MDC2R3_MASK                     0x00000800
#define _RPINR31_MDC2R3_LENGTH                   0x00000001

#define _RPINR31_MDC2R4_POSITION                 0x0000000C
#define _RPINR31_MDC2R4_MASK                     0x00001000
#define _RPINR31_MDC2R4_LENGTH                   0x00000001

#define _RPINR31_MDC2R5_POSITION                 0x0000000D
#define _RPINR31_MDC2R5_MASK                     0x00002000
#define _RPINR31_MDC2R5_LENGTH                   0x00000001

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

#define _RPOR4_RP8R_POSITION                     0x00000000
#define _RPOR4_RP8R_MASK                         0x0000003F
#define _RPOR4_RP8R_LENGTH                       0x00000006

#define _RPOR4_RP9R_POSITION                     0x00000008
#define _RPOR4_RP9R_MASK                         0x00003F00
#define _RPOR4_RP9R_LENGTH                       0x00000006

#define _RPOR4_RP8R0_POSITION                    0x00000000
#define _RPOR4_RP8R0_MASK                        0x00000001
#define _RPOR4_RP8R0_LENGTH                      0x00000001

#define _RPOR4_RP8R1_POSITION                    0x00000001
#define _RPOR4_RP8R1_MASK                        0x00000002
#define _RPOR4_RP8R1_LENGTH                      0x00000001

#define _RPOR4_RP8R2_POSITION                    0x00000002
#define _RPOR4_RP8R2_MASK                        0x00000004
#define _RPOR4_RP8R2_LENGTH                      0x00000001

#define _RPOR4_RP8R3_POSITION                    0x00000003
#define _RPOR4_RP8R3_MASK                        0x00000008
#define _RPOR4_RP8R3_LENGTH                      0x00000001

#define _RPOR4_RP8R4_POSITION                    0x00000004
#define _RPOR4_RP8R4_MASK                        0x00000010
#define _RPOR4_RP8R4_LENGTH                      0x00000001

#define _RPOR4_RP8R5_POSITION                    0x00000005
#define _RPOR4_RP8R5_MASK                        0x00000020
#define _RPOR4_RP8R5_LENGTH                      0x00000001

#define _RPOR4_RP9R0_POSITION                    0x00000008
#define _RPOR4_RP9R0_MASK                        0x00000100
#define _RPOR4_RP9R0_LENGTH                      0x00000001

#define _RPOR4_RP9R1_POSITION                    0x00000009
#define _RPOR4_RP9R1_MASK                        0x00000200
#define _RPOR4_RP9R1_LENGTH                      0x00000001

#define _RPOR4_RP9R2_POSITION                    0x0000000A
#define _RPOR4_RP9R2_MASK                        0x00000400
#define _RPOR4_RP9R2_LENGTH                      0x00000001

#define _RPOR4_RP9R3_POSITION                    0x0000000B
#define _RPOR4_RP9R3_MASK                        0x00000800
#define _RPOR4_RP9R3_LENGTH                      0x00000001

#define _RPOR4_RP9R4_POSITION                    0x0000000C
#define _RPOR4_RP9R4_MASK                        0x00001000
#define _RPOR4_RP9R4_LENGTH                      0x00000001

#define _RPOR4_RP9R5_POSITION                    0x0000000D
#define _RPOR4_RP9R5_MASK                        0x00002000
#define _RPOR4_RP9R5_LENGTH                      0x00000001

#define _RPOR5_RP10R_POSITION                    0x00000000
#define _RPOR5_RP10R_MASK                        0x0000003F
#define _RPOR5_RP10R_LENGTH                      0x00000006

#define _RPOR5_RP11R_POSITION                    0x00000008
#define _RPOR5_RP11R_MASK                        0x00003F00
#define _RPOR5_RP11R_LENGTH                      0x00000006

#define _RPOR5_RP10R0_POSITION                   0x00000000
#define _RPOR5_RP10R0_MASK                       0x00000001
#define _RPOR5_RP10R0_LENGTH                     0x00000001

#define _RPOR5_RP10R1_POSITION                   0x00000001
#define _RPOR5_RP10R1_MASK                       0x00000002
#define _RPOR5_RP10R1_LENGTH                     0x00000001

#define _RPOR5_RP10R2_POSITION                   0x00000002
#define _RPOR5_RP10R2_MASK                       0x00000004
#define _RPOR5_RP10R2_LENGTH                     0x00000001

#define _RPOR5_RP10R3_POSITION                   0x00000003
#define _RPOR5_RP10R3_MASK                       0x00000008
#define _RPOR5_RP10R3_LENGTH                     0x00000001

#define _RPOR5_RP10R4_POSITION                   0x00000004
#define _RPOR5_RP10R4_MASK                       0x00000010
#define _RPOR5_RP10R4_LENGTH                     0x00000001

#define _RPOR5_RP10R5_POSITION                   0x00000005
#define _RPOR5_RP10R5_MASK                       0x00000020
#define _RPOR5_RP10R5_LENGTH                     0x00000001

#define _RPOR5_RP11R0_POSITION                   0x00000008
#define _RPOR5_RP11R0_MASK                       0x00000100
#define _RPOR5_RP11R0_LENGTH                     0x00000001

#define _RPOR5_RP11R1_POSITION                   0x00000009
#define _RPOR5_RP11R1_MASK                       0x00000200
#define _RPOR5_RP11R1_LENGTH                     0x00000001

#define _RPOR5_RP11R2_POSITION                   0x0000000A
#define _RPOR5_RP11R2_MASK                       0x00000400
#define _RPOR5_RP11R2_LENGTH                     0x00000001

#define _RPOR5_RP11R3_POSITION                   0x0000000B
#define _RPOR5_RP11R3_MASK                       0x00000800
#define _RPOR5_RP11R3_LENGTH                     0x00000001

#define _RPOR5_RP11R4_POSITION                   0x0000000C
#define _RPOR5_RP11R4_MASK                       0x00001000
#define _RPOR5_RP11R4_LENGTH                     0x00000001

#define _RPOR5_RP11R5_POSITION                   0x0000000D
#define _RPOR5_RP11R5_MASK                       0x00002000
#define _RPOR5_RP11R5_LENGTH                     0x00000001

#define _RPOR6_RP12R_POSITION                    0x00000000
#define _RPOR6_RP12R_MASK                        0x0000003F
#define _RPOR6_RP12R_LENGTH                      0x00000006

#define _RPOR6_RP13R_POSITION                    0x00000008
#define _RPOR6_RP13R_MASK                        0x00003F00
#define _RPOR6_RP13R_LENGTH                      0x00000006

#define _RPOR6_RP12R0_POSITION                   0x00000000
#define _RPOR6_RP12R0_MASK                       0x00000001
#define _RPOR6_RP12R0_LENGTH                     0x00000001

#define _RPOR6_RP12R1_POSITION                   0x00000001
#define _RPOR6_RP12R1_MASK                       0x00000002
#define _RPOR6_RP12R1_LENGTH                     0x00000001

#define _RPOR6_RP12R2_POSITION                   0x00000002
#define _RPOR6_RP12R2_MASK                       0x00000004
#define _RPOR6_RP12R2_LENGTH                     0x00000001

#define _RPOR6_RP12R3_POSITION                   0x00000003
#define _RPOR6_RP12R3_MASK                       0x00000008
#define _RPOR6_RP12R3_LENGTH                     0x00000001

#define _RPOR6_RP12R4_POSITION                   0x00000004
#define _RPOR6_RP12R4_MASK                       0x00000010
#define _RPOR6_RP12R4_LENGTH                     0x00000001

#define _RPOR6_RP12R5_POSITION                   0x00000005
#define _RPOR6_RP12R5_MASK                       0x00000020
#define _RPOR6_RP12R5_LENGTH                     0x00000001

#define _RPOR6_RP13R0_POSITION                   0x00000008
#define _RPOR6_RP13R0_MASK                       0x00000100
#define _RPOR6_RP13R0_LENGTH                     0x00000001

#define _RPOR6_RP13R1_POSITION                   0x00000009
#define _RPOR6_RP13R1_MASK                       0x00000200
#define _RPOR6_RP13R1_LENGTH                     0x00000001

#define _RPOR6_RP13R2_POSITION                   0x0000000A
#define _RPOR6_RP13R2_MASK                       0x00000400
#define _RPOR6_RP13R2_LENGTH                     0x00000001

#define _RPOR6_RP13R3_POSITION                   0x0000000B
#define _RPOR6_RP13R3_MASK                       0x00000800
#define _RPOR6_RP13R3_LENGTH                     0x00000001

#define _RPOR6_RP13R4_POSITION                   0x0000000C
#define _RPOR6_RP13R4_MASK                       0x00001000
#define _RPOR6_RP13R4_LENGTH                     0x00000001

#define _RPOR6_RP13R5_POSITION                   0x0000000D
#define _RPOR6_RP13R5_MASK                       0x00002000
#define _RPOR6_RP13R5_LENGTH                     0x00000001

#define _RPOR7_RP14R_POSITION                    0x00000000
#define _RPOR7_RP14R_MASK                        0x0000003F
#define _RPOR7_RP14R_LENGTH                      0x00000006

#define _RPOR7_RP14R0_POSITION                   0x00000000
#define _RPOR7_RP14R0_MASK                       0x00000001
#define _RPOR7_RP14R0_LENGTH                     0x00000001

#define _RPOR7_RP14R1_POSITION                   0x00000001
#define _RPOR7_RP14R1_MASK                       0x00000002
#define _RPOR7_RP14R1_LENGTH                     0x00000001

#define _RPOR7_RP14R2_POSITION                   0x00000002
#define _RPOR7_RP14R2_MASK                       0x00000004
#define _RPOR7_RP14R2_LENGTH                     0x00000001

#define _RPOR7_RP14R3_POSITION                   0x00000003
#define _RPOR7_RP14R3_MASK                       0x00000008
#define _RPOR7_RP14R3_LENGTH                     0x00000001

#define _RPOR7_RP14R4_POSITION                   0x00000004
#define _RPOR7_RP14R4_MASK                       0x00000010
#define _RPOR7_RP14R4_LENGTH                     0x00000001

#define _RPOR7_RP14R5_POSITION                   0x00000005
#define _RPOR7_RP14R5_MASK                       0x00000020
#define _RPOR7_RP14R5_LENGTH                     0x00000001

#define _RPOR8_RP16R_POSITION                    0x00000000
#define _RPOR8_RP16R_MASK                        0x0000003F
#define _RPOR8_RP16R_LENGTH                      0x00000006

#define _RPOR8_RP17R_POSITION                    0x00000008
#define _RPOR8_RP17R_MASK                        0x00003F00
#define _RPOR8_RP17R_LENGTH                      0x00000006

#define _RPOR8_RP16R0_POSITION                   0x00000000
#define _RPOR8_RP16R0_MASK                       0x00000001
#define _RPOR8_RP16R0_LENGTH                     0x00000001

#define _RPOR8_RP16R1_POSITION                   0x00000001
#define _RPOR8_RP16R1_MASK                       0x00000002
#define _RPOR8_RP16R1_LENGTH                     0x00000001

#define _RPOR8_RP16R2_POSITION                   0x00000002
#define _RPOR8_RP16R2_MASK                       0x00000004
#define _RPOR8_RP16R2_LENGTH                     0x00000001

#define _RPOR8_RP16R3_POSITION                   0x00000003
#define _RPOR8_RP16R3_MASK                       0x00000008
#define _RPOR8_RP16R3_LENGTH                     0x00000001

#define _RPOR8_RP16R4_POSITION                   0x00000004
#define _RPOR8_RP16R4_MASK                       0x00000010
#define _RPOR8_RP16R4_LENGTH                     0x00000001

#define _RPOR8_RP16R5_POSITION                   0x00000005
#define _RPOR8_RP16R5_MASK                       0x00000020
#define _RPOR8_RP16R5_LENGTH                     0x00000001

#define _RPOR8_RP17R0_POSITION                   0x00000008
#define _RPOR8_RP17R0_MASK                       0x00000100
#define _RPOR8_RP17R0_LENGTH                     0x00000001

#define _RPOR8_RP17R1_POSITION                   0x00000009
#define _RPOR8_RP17R1_MASK                       0x00000200
#define _RPOR8_RP17R1_LENGTH                     0x00000001

#define _RPOR8_RP17R2_POSITION                   0x0000000A
#define _RPOR8_RP17R2_MASK                       0x00000400
#define _RPOR8_RP17R2_LENGTH                     0x00000001

#define _RPOR8_RP17R3_POSITION                   0x0000000B
#define _RPOR8_RP17R3_MASK                       0x00000800
#define _RPOR8_RP17R3_LENGTH                     0x00000001

#define _RPOR8_RP17R4_POSITION                   0x0000000C
#define _RPOR8_RP17R4_MASK                       0x00001000
#define _RPOR8_RP17R4_LENGTH                     0x00000001

#define _RPOR8_RP17R5_POSITION                   0x0000000D
#define _RPOR8_RP17R5_MASK                       0x00002000
#define _RPOR8_RP17R5_LENGTH                     0x00000001

#define _RPOR9_RP18R_POSITION                    0x00000000
#define _RPOR9_RP18R_MASK                        0x0000003F
#define _RPOR9_RP18R_LENGTH                      0x00000006

#define _RPOR9_RP19R_POSITION                    0x00000008
#define _RPOR9_RP19R_MASK                        0x00003F00
#define _RPOR9_RP19R_LENGTH                      0x00000006

#define _RPOR9_RP18R0_POSITION                   0x00000000
#define _RPOR9_RP18R0_MASK                       0x00000001
#define _RPOR9_RP18R0_LENGTH                     0x00000001

#define _RPOR9_RP18R1_POSITION                   0x00000001
#define _RPOR9_RP18R1_MASK                       0x00000002
#define _RPOR9_RP18R1_LENGTH                     0x00000001

#define _RPOR9_RP18R2_POSITION                   0x00000002
#define _RPOR9_RP18R2_MASK                       0x00000004
#define _RPOR9_RP18R2_LENGTH                     0x00000001

#define _RPOR9_RP18R3_POSITION                   0x00000003
#define _RPOR9_RP18R3_MASK                       0x00000008
#define _RPOR9_RP18R3_LENGTH                     0x00000001

#define _RPOR9_RP18R4_POSITION                   0x00000004
#define _RPOR9_RP18R4_MASK                       0x00000010
#define _RPOR9_RP18R4_LENGTH                     0x00000001

#define _RPOR9_RP18R5_POSITION                   0x00000005
#define _RPOR9_RP18R5_MASK                       0x00000020
#define _RPOR9_RP18R5_LENGTH                     0x00000001

#define _RPOR9_RP19R0_POSITION                   0x00000008
#define _RPOR9_RP19R0_MASK                       0x00000100
#define _RPOR9_RP19R0_LENGTH                     0x00000001

#define _RPOR9_RP19R1_POSITION                   0x00000009
#define _RPOR9_RP19R1_MASK                       0x00000200
#define _RPOR9_RP19R1_LENGTH                     0x00000001

#define _RPOR9_RP19R2_POSITION                   0x0000000A
#define _RPOR9_RP19R2_MASK                       0x00000400
#define _RPOR9_RP19R2_LENGTH                     0x00000001

#define _RPOR9_RP19R3_POSITION                   0x0000000B
#define _RPOR9_RP19R3_MASK                       0x00000800
#define _RPOR9_RP19R3_LENGTH                     0x00000001

#define _RPOR9_RP19R4_POSITION                   0x0000000C
#define _RPOR9_RP19R4_MASK                       0x00001000
#define _RPOR9_RP19R4_LENGTH                     0x00000001

#define _RPOR9_RP19R5_POSITION                   0x0000000D
#define _RPOR9_RP19R5_MASK                       0x00002000
#define _RPOR9_RP19R5_LENGTH                     0x00000001

#define _RPOR10_RP20R_POSITION                   0x00000000
#define _RPOR10_RP20R_MASK                       0x0000003F
#define _RPOR10_RP20R_LENGTH                     0x00000006

#define _RPOR10_RP21R_POSITION                   0x00000008
#define _RPOR10_RP21R_MASK                       0x00003F00
#define _RPOR10_RP21R_LENGTH                     0x00000006

#define _RPOR10_RP20R0_POSITION                  0x00000000
#define _RPOR10_RP20R0_MASK                      0x00000001
#define _RPOR10_RP20R0_LENGTH                    0x00000001

#define _RPOR10_RP20R1_POSITION                  0x00000001
#define _RPOR10_RP20R1_MASK                      0x00000002
#define _RPOR10_RP20R1_LENGTH                    0x00000001

#define _RPOR10_RP20R2_POSITION                  0x00000002
#define _RPOR10_RP20R2_MASK                      0x00000004
#define _RPOR10_RP20R2_LENGTH                    0x00000001

#define _RPOR10_RP20R3_POSITION                  0x00000003
#define _RPOR10_RP20R3_MASK                      0x00000008
#define _RPOR10_RP20R3_LENGTH                    0x00000001

#define _RPOR10_RP20R4_POSITION                  0x00000004
#define _RPOR10_RP20R4_MASK                      0x00000010
#define _RPOR10_RP20R4_LENGTH                    0x00000001

#define _RPOR10_RP20R5_POSITION                  0x00000005
#define _RPOR10_RP20R5_MASK                      0x00000020
#define _RPOR10_RP20R5_LENGTH                    0x00000001

#define _RPOR10_RP21R0_POSITION                  0x00000008
#define _RPOR10_RP21R0_MASK                      0x00000100
#define _RPOR10_RP21R0_LENGTH                    0x00000001

#define _RPOR10_RP21R1_POSITION                  0x00000009
#define _RPOR10_RP21R1_MASK                      0x00000200
#define _RPOR10_RP21R1_LENGTH                    0x00000001

#define _RPOR10_RP21R2_POSITION                  0x0000000A
#define _RPOR10_RP21R2_MASK                      0x00000400
#define _RPOR10_RP21R2_LENGTH                    0x00000001

#define _RPOR10_RP21R3_POSITION                  0x0000000B
#define _RPOR10_RP21R3_MASK                      0x00000800
#define _RPOR10_RP21R3_LENGTH                    0x00000001

#define _RPOR10_RP21R4_POSITION                  0x0000000C
#define _RPOR10_RP21R4_MASK                      0x00001000
#define _RPOR10_RP21R4_LENGTH                    0x00000001

#define _RPOR10_RP21R5_POSITION                  0x0000000D
#define _RPOR10_RP21R5_MASK                      0x00002000
#define _RPOR10_RP21R5_LENGTH                    0x00000001

#define _RPOR11_RP22R_POSITION                   0x00000000
#define _RPOR11_RP22R_MASK                       0x0000003F
#define _RPOR11_RP22R_LENGTH                     0x00000006

#define _RPOR11_RP23R_POSITION                   0x00000008
#define _RPOR11_RP23R_MASK                       0x00003F00
#define _RPOR11_RP23R_LENGTH                     0x00000006

#define _RPOR11_RP22R0_POSITION                  0x00000000
#define _RPOR11_RP22R0_MASK                      0x00000001
#define _RPOR11_RP22R0_LENGTH                    0x00000001

#define _RPOR11_RP22R1_POSITION                  0x00000001
#define _RPOR11_RP22R1_MASK                      0x00000002
#define _RPOR11_RP22R1_LENGTH                    0x00000001

#define _RPOR11_RP22R2_POSITION                  0x00000002
#define _RPOR11_RP22R2_MASK                      0x00000004
#define _RPOR11_RP22R2_LENGTH                    0x00000001

#define _RPOR11_RP22R3_POSITION                  0x00000003
#define _RPOR11_RP22R3_MASK                      0x00000008
#define _RPOR11_RP22R3_LENGTH                    0x00000001

#define _RPOR11_RP22R4_POSITION                  0x00000004
#define _RPOR11_RP22R4_MASK                      0x00000010
#define _RPOR11_RP22R4_LENGTH                    0x00000001

#define _RPOR11_RP22R5_POSITION                  0x00000005
#define _RPOR11_RP22R5_MASK                      0x00000020
#define _RPOR11_RP22R5_LENGTH                    0x00000001

#define _RPOR11_RP23R0_POSITION                  0x00000008
#define _RPOR11_RP23R0_MASK                      0x00000100
#define _RPOR11_RP23R0_LENGTH                    0x00000001

#define _RPOR11_RP23R1_POSITION                  0x00000009
#define _RPOR11_RP23R1_MASK                      0x00000200
#define _RPOR11_RP23R1_LENGTH                    0x00000001

#define _RPOR11_RP23R2_POSITION                  0x0000000A
#define _RPOR11_RP23R2_MASK                      0x00000400
#define _RPOR11_RP23R2_LENGTH                    0x00000001

#define _RPOR11_RP23R3_POSITION                  0x0000000B
#define _RPOR11_RP23R3_MASK                      0x00000800
#define _RPOR11_RP23R3_LENGTH                    0x00000001

#define _RPOR11_RP23R4_POSITION                  0x0000000C
#define _RPOR11_RP23R4_MASK                      0x00001000
#define _RPOR11_RP23R4_LENGTH                    0x00000001

#define _RPOR11_RP23R5_POSITION                  0x0000000D
#define _RPOR11_RP23R5_MASK                      0x00002000
#define _RPOR11_RP23R5_LENGTH                    0x00000001

#define _RPOR12_RP24R_POSITION                   0x00000000
#define _RPOR12_RP24R_MASK                       0x0000003F
#define _RPOR12_RP24R_LENGTH                     0x00000006

#define _RPOR12_RP25R_POSITION                   0x00000008
#define _RPOR12_RP25R_MASK                       0x00003F00
#define _RPOR12_RP25R_LENGTH                     0x00000006

#define _RPOR12_RP24R0_POSITION                  0x00000000
#define _RPOR12_RP24R0_MASK                      0x00000001
#define _RPOR12_RP24R0_LENGTH                    0x00000001

#define _RPOR12_RP24R1_POSITION                  0x00000001
#define _RPOR12_RP24R1_MASK                      0x00000002
#define _RPOR12_RP24R1_LENGTH                    0x00000001

#define _RPOR12_RP24R2_POSITION                  0x00000002
#define _RPOR12_RP24R2_MASK                      0x00000004
#define _RPOR12_RP24R2_LENGTH                    0x00000001

#define _RPOR12_RP24R3_POSITION                  0x00000003
#define _RPOR12_RP24R3_MASK                      0x00000008
#define _RPOR12_RP24R3_LENGTH                    0x00000001

#define _RPOR12_RP24R4_POSITION                  0x00000004
#define _RPOR12_RP24R4_MASK                      0x00000010
#define _RPOR12_RP24R4_LENGTH                    0x00000001

#define _RPOR12_RP24R5_POSITION                  0x00000005
#define _RPOR12_RP24R5_MASK                      0x00000020
#define _RPOR12_RP24R5_LENGTH                    0x00000001

#define _RPOR12_RP25R0_POSITION                  0x00000008
#define _RPOR12_RP25R0_MASK                      0x00000100
#define _RPOR12_RP25R0_LENGTH                    0x00000001

#define _RPOR12_RP25R1_POSITION                  0x00000009
#define _RPOR12_RP25R1_MASK                      0x00000200
#define _RPOR12_RP25R1_LENGTH                    0x00000001

#define _RPOR12_RP25R2_POSITION                  0x0000000A
#define _RPOR12_RP25R2_MASK                      0x00000400
#define _RPOR12_RP25R2_LENGTH                    0x00000001

#define _RPOR12_RP25R3_POSITION                  0x0000000B
#define _RPOR12_RP25R3_MASK                      0x00000800
#define _RPOR12_RP25R3_LENGTH                    0x00000001

#define _RPOR12_RP25R4_POSITION                  0x0000000C
#define _RPOR12_RP25R4_MASK                      0x00001000
#define _RPOR12_RP25R4_LENGTH                    0x00000001

#define _RPOR12_RP25R5_POSITION                  0x0000000D
#define _RPOR12_RP25R5_MASK                      0x00002000
#define _RPOR12_RP25R5_LENGTH                    0x00000001

#define _RPOR13_RP26R_POSITION                   0x00000000
#define _RPOR13_RP26R_MASK                       0x0000003F
#define _RPOR13_RP26R_LENGTH                     0x00000006

#define _RPOR13_RP27R_POSITION                   0x00000008
#define _RPOR13_RP27R_MASK                       0x00003F00
#define _RPOR13_RP27R_LENGTH                     0x00000006

#define _RPOR13_RP26R0_POSITION                  0x00000000
#define _RPOR13_RP26R0_MASK                      0x00000001
#define _RPOR13_RP26R0_LENGTH                    0x00000001

#define _RPOR13_RP26R1_POSITION                  0x00000001
#define _RPOR13_RP26R1_MASK                      0x00000002
#define _RPOR13_RP26R1_LENGTH                    0x00000001

#define _RPOR13_RP26R2_POSITION                  0x00000002
#define _RPOR13_RP26R2_MASK                      0x00000004
#define _RPOR13_RP26R2_LENGTH                    0x00000001

#define _RPOR13_RP26R3_POSITION                  0x00000003
#define _RPOR13_RP26R3_MASK                      0x00000008
#define _RPOR13_RP26R3_LENGTH                    0x00000001

#define _RPOR13_RP26R4_POSITION                  0x00000004
#define _RPOR13_RP26R4_MASK                      0x00000010
#define _RPOR13_RP26R4_LENGTH                    0x00000001

#define _RPOR13_RP26R5_POSITION                  0x00000005
#define _RPOR13_RP26R5_MASK                      0x00000020
#define _RPOR13_RP26R5_LENGTH                    0x00000001

#define _RPOR13_RP27R0_POSITION                  0x00000008
#define _RPOR13_RP27R0_MASK                      0x00000100
#define _RPOR13_RP27R0_LENGTH                    0x00000001

#define _RPOR13_RP27R1_POSITION                  0x00000009
#define _RPOR13_RP27R1_MASK                      0x00000200
#define _RPOR13_RP27R1_LENGTH                    0x00000001

#define _RPOR13_RP27R2_POSITION                  0x0000000A
#define _RPOR13_RP27R2_MASK                      0x00000400
#define _RPOR13_RP27R2_LENGTH                    0x00000001

#define _RPOR13_RP27R3_POSITION                  0x0000000B
#define _RPOR13_RP27R3_MASK                      0x00000800
#define _RPOR13_RP27R3_LENGTH                    0x00000001

#define _RPOR13_RP27R4_POSITION                  0x0000000C
#define _RPOR13_RP27R4_MASK                      0x00001000
#define _RPOR13_RP27R4_LENGTH                    0x00000001

#define _RPOR13_RP27R5_POSITION                  0x0000000D
#define _RPOR13_RP27R5_MASK                      0x00002000
#define _RPOR13_RP27R5_LENGTH                    0x00000001

#define _RPOR14_RP28R_POSITION                   0x00000000
#define _RPOR14_RP28R_MASK                       0x0000003F
#define _RPOR14_RP28R_LENGTH                     0x00000006

#define _RPOR14_RP29R_POSITION                   0x00000008
#define _RPOR14_RP29R_MASK                       0x00003F00
#define _RPOR14_RP29R_LENGTH                     0x00000006

#define _RPOR14_RP28R0_POSITION                  0x00000000
#define _RPOR14_RP28R0_MASK                      0x00000001
#define _RPOR14_RP28R0_LENGTH                    0x00000001

#define _RPOR14_RP28R1_POSITION                  0x00000001
#define _RPOR14_RP28R1_MASK                      0x00000002
#define _RPOR14_RP28R1_LENGTH                    0x00000001

#define _RPOR14_RP28R2_POSITION                  0x00000002
#define _RPOR14_RP28R2_MASK                      0x00000004
#define _RPOR14_RP28R2_LENGTH                    0x00000001

#define _RPOR14_RP28R3_POSITION                  0x00000003
#define _RPOR14_RP28R3_MASK                      0x00000008
#define _RPOR14_RP28R3_LENGTH                    0x00000001

#define _RPOR14_RP28R4_POSITION                  0x00000004
#define _RPOR14_RP28R4_MASK                      0x00000010
#define _RPOR14_RP28R4_LENGTH                    0x00000001

#define _RPOR14_RP28R5_POSITION                  0x00000005
#define _RPOR14_RP28R5_MASK                      0x00000020
#define _RPOR14_RP28R5_LENGTH                    0x00000001

#define _RPOR14_RP29R0_POSITION                  0x00000008
#define _RPOR14_RP29R0_MASK                      0x00000100
#define _RPOR14_RP29R0_LENGTH                    0x00000001

#define _RPOR14_RP29R1_POSITION                  0x00000009
#define _RPOR14_RP29R1_MASK                      0x00000200
#define _RPOR14_RP29R1_LENGTH                    0x00000001

#define _RPOR14_RP29R2_POSITION                  0x0000000A
#define _RPOR14_RP29R2_MASK                      0x00000400
#define _RPOR14_RP29R2_LENGTH                    0x00000001

#define _RPOR14_RP29R3_POSITION                  0x0000000B
#define _RPOR14_RP29R3_MASK                      0x00000800
#define _RPOR14_RP29R3_LENGTH                    0x00000001

#define _RPOR14_RP29R4_POSITION                  0x0000000C
#define _RPOR14_RP29R4_MASK                      0x00001000
#define _RPOR14_RP29R4_LENGTH                    0x00000001

#define _RPOR14_RP29R5_POSITION                  0x0000000D
#define _RPOR14_RP29R5_MASK                      0x00002000
#define _RPOR14_RP29R5_LENGTH                    0x00000001

#define _RPOR15_RP30R_POSITION                   0x00000000
#define _RPOR15_RP30R_MASK                       0x0000003F
#define _RPOR15_RP30R_LENGTH                     0x00000006

#define _RPOR15_RP30R0_POSITION                  0x00000000
#define _RPOR15_RP30R0_MASK                      0x00000001
#define _RPOR15_RP30R0_LENGTH                    0x00000001

#define _RPOR15_RP30R1_POSITION                  0x00000001
#define _RPOR15_RP30R1_MASK                      0x00000002
#define _RPOR15_RP30R1_LENGTH                    0x00000001

#define _RPOR15_RP30R2_POSITION                  0x00000002
#define _RPOR15_RP30R2_MASK                      0x00000004
#define _RPOR15_RP30R2_LENGTH                    0x00000001

#define _RPOR15_RP30R3_POSITION                  0x00000003
#define _RPOR15_RP30R3_MASK                      0x00000008
#define _RPOR15_RP30R3_LENGTH                    0x00000001

#define _RPOR15_RP30R4_POSITION                  0x00000004
#define _RPOR15_RP30R4_MASK                      0x00000010
#define _RPOR15_RP30R4_LENGTH                    0x00000001

#define _RPOR15_RP30R5_POSITION                  0x00000005
#define _RPOR15_RP30R5_MASK                      0x00000020
#define _RPOR15_RP30R5_LENGTH                    0x00000001

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

#define _RCON_DPSLP_POSITION                     0x0000000A
#define _RCON_DPSLP_MASK                         0x00000400
#define _RCON_DPSLP_LENGTH                       0x00000001

#define _RCON_RETEN_POSITION                     0x0000000C
#define _RCON_RETEN_MASK                         0x00001000
#define _RCON_RETEN_LENGTH                       0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_POSCEN_POSITION                  0x00000002
#define _OSCCON_POSCEN_MASK                      0x00000004
#define _OSCCON_POSCEN_LENGTH                    0x00000001

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

#define _CLKDIV_RCDIV_POSITION                   0x00000008
#define _CLKDIV_RCDIV_MASK                       0x00000700
#define _CLKDIV_RCDIV_LENGTH                     0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_RCDIV0_POSITION                  0x00000008
#define _CLKDIV_RCDIV0_MASK                      0x00000100
#define _CLKDIV_RCDIV0_LENGTH                    0x00000001

#define _CLKDIV_RCDIV1_POSITION                  0x00000009
#define _CLKDIV_RCDIV1_MASK                      0x00000200
#define _CLKDIV_RCDIV1_LENGTH                    0x00000001

#define _CLKDIV_RCDIV2_POSITION                  0x0000000A
#define _CLKDIV_RCDIV2_MASK                      0x00000400
#define _CLKDIV_RCDIV2_LENGTH                    0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

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

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _REFOCON_ROEN_POSITION                   0x0000000F
#define _REFOCON_ROEN_MASK                       0x00008000
#define _REFOCON_ROEN_LENGTH                     0x00000001

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

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_IRVST_POSITION                  0x00000005
#define _HLVDCON_IRVST_MASK                      0x00000020
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x00000006
#define _HLVDCON_BGVST_MASK                      0x00000040
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x00000007
#define _HLVDCON_VDIR_MASK                       0x00000080
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_LSIDL_POSITION                  0x0000000D
#define _HLVDCON_LSIDL_MASK                      0x00002000
#define _HLVDCON_LSIDL_LENGTH                    0x00000001

#define _HLVDCON_HLVDEN_POSITION                 0x0000000F
#define _HLVDCON_HLVDEN_MASK                     0x00008000
#define _HLVDCON_HLVDEN_LENGTH                   0x00000001

#define _HLVDCON_HLVDL0_POSITION                 0x00000000
#define _HLVDCON_HLVDL0_MASK                     0x00000001
#define _HLVDCON_HLVDL0_LENGTH                   0x00000001

#define _HLVDCON_HLVDL1_POSITION                 0x00000001
#define _HLVDCON_HLVDL1_MASK                     0x00000002
#define _HLVDCON_HLVDL1_LENGTH                   0x00000001

#define _HLVDCON_HLVDL2_POSITION                 0x00000002
#define _HLVDCON_HLVDL2_MASK                     0x00000004
#define _HLVDCON_HLVDL2_LENGTH                   0x00000001

#define _HLVDCON_HLVDL3_POSITION                 0x00000003
#define _HLVDCON_HLVDL3_MASK                     0x00000008
#define _HLVDCON_HLVDL3_LENGTH                   0x00000001

#define _DSCON_RELEASE_POSITION                  0x00000000
#define _DSCON_RELEASE_MASK                      0x00000001
#define _DSCON_RELEASE_LENGTH                    0x00000001

#define _DSCON_DSBOR_POSITION                    0x00000001
#define _DSCON_DSBOR_MASK                        0x00000002
#define _DSCON_DSBOR_LENGTH                      0x00000001

#define _DSCON_DSEN_POSITION                     0x0000000F
#define _DSCON_DSEN_MASK                         0x00008000
#define _DSCON_DSEN_LENGTH                       0x00000001

#define _DSWAKE_DSMCLR_POSITION                  0x00000002
#define _DSWAKE_DSMCLR_MASK                      0x00000004
#define _DSWAKE_DSMCLR_LENGTH                    0x00000001

#define _DSWAKE_DSRTCC_POSITION                  0x00000003
#define _DSWAKE_DSRTCC_MASK                      0x00000008
#define _DSWAKE_DSRTCC_LENGTH                    0x00000001

#define _DSWAKE_DSWDT_POSITION                   0x00000004
#define _DSWAKE_DSWDT_MASK                       0x00000010
#define _DSWAKE_DSWDT_LENGTH                     0x00000001

#define _DSWAKE_DSFLT_POSITION                   0x00000007
#define _DSWAKE_DSFLT_MASK                       0x00000080
#define _DSWAKE_DSFLT_LENGTH                     0x00000001

#define _DSWAKE_DSINT0_POSITION                  0x00000008
#define _DSWAKE_DSINT0_MASK                      0x00000100
#define _DSWAKE_DSINT0_LENGTH                    0x00000001

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

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000000F
#define _NVMCON_PROGOP_LENGTH                    0x00000004

#define _RCON2_VBAT_POSITION                     0x00000000
#define _RCON2_VBAT_MASK                         0x00000001
#define _RCON2_VBAT_LENGTH                       0x00000001

#define _RCON2_VBPOR_POSITION                    0x00000001
#define _RCON2_VBPOR_MASK                        0x00000002
#define _RCON2_VBPOR_LENGTH                      0x00000001

#define _RCON2_VDDPOR_POSITION                   0x00000002
#define _RCON2_VDDPOR_MASK                       0x00000004
#define _RCON2_VDDPOR_LENGTH                     0x00000001

#define _RCON2_VDDBOR_POSITION                   0x00000003
#define _RCON2_VDDBOR_MASK                       0x00000008
#define _RCON2_VDDBOR_LENGTH                     0x00000001

#define _PMD1_ADC1MD_POSITION                    0x00000000
#define _PMD1_ADC1MD_MASK                        0x00000001
#define _PMD1_ADC1MD_LENGTH                      0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_SPI2MD_POSITION                    0x00000004
#define _PMD1_SPI2MD_MASK                        0x00000010
#define _PMD1_SPI2MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

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

#define _PMD2_OC5MD_POSITION                     0x00000004
#define _PMD2_OC5MD_MASK                         0x00000010
#define _PMD2_OC5MD_LENGTH                       0x00000001

#define _PMD2_OC6MD_POSITION                     0x00000005
#define _PMD2_OC6MD_MASK                         0x00000020
#define _PMD2_OC6MD_LENGTH                       0x00000001

#define _PMD2_OC7MD_POSITION                     0x00000006
#define _PMD2_OC7MD_MASK                         0x00000040
#define _PMD2_OC7MD_LENGTH                       0x00000001

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

#define _PMD2_IC5MD_POSITION                     0x0000000C
#define _PMD2_IC5MD_MASK                         0x00001000
#define _PMD2_IC5MD_LENGTH                       0x00000001

#define _PMD2_IC6MD_POSITION                     0x0000000D
#define _PMD2_IC6MD_MASK                         0x00002000
#define _PMD2_IC6MD_LENGTH                       0x00000001

#define _PMD2_IC7MD_POSITION                     0x0000000E
#define _PMD2_IC7MD_MASK                         0x00004000
#define _PMD2_IC7MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_U3MD_POSITION                      0x00000003
#define _PMD3_U3MD_MASK                          0x00000008
#define _PMD3_U3MD_LENGTH                        0x00000001

#define _PMD3_CRCMD_POSITION                     0x00000007
#define _PMD3_CRCMD_MASK                         0x00000080
#define _PMD3_CRCMD_LENGTH                       0x00000001

#define _PMD3_PMPMD_POSITION                     0x00000008
#define _PMD3_PMPMD_MASK                         0x00000100
#define _PMD3_PMPMD_LENGTH                       0x00000001

#define _PMD3_RTCCMD_POSITION                    0x00000009
#define _PMD3_RTCCMD_MASK                        0x00000200
#define _PMD3_RTCCMD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD3_TXMMD_POSITION                     0x0000000B
#define _PMD3_TXMMD_MASK                         0x00000800
#define _PMD3_TXMMD_LENGTH                       0x00000001

#define _PMD3_CRCPMD_POSITION                    0x00000007
#define _PMD3_CRCPMD_MASK                        0x00000080
#define _PMD3_CRCPMD_LENGTH                      0x00000001

#define _PMD3_DSMMD_POSITION                     0x0000000B
#define _PMD3_DSMMD_MASK                         0x00000800
#define _PMD3_DSMMD_LENGTH                       0x00000001

#define _PMD4_LVDMD_POSITION                     0x00000001
#define _PMD4_LVDMD_MASK                         0x00000002
#define _PMD4_LVDMD_LENGTH                       0x00000001

#define _PMD4_CTMUMD_POSITION                    0x00000002
#define _PMD4_CTMUMD_MASK                        0x00000004
#define _PMD4_CTMUMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD4_U4MD_POSITION                      0x00000005
#define _PMD4_U4MD_MASK                          0x00000020
#define _PMD4_U4MD_LENGTH                        0x00000001

#define _PMD4_UPWMMD_POSITION                    0x00000006
#define _PMD4_UPWMMD_MASK                        0x00000040
#define _PMD4_UPWMMD_LENGTH                      0x00000001

#define _PMD6_SPI3MD_POSITION                    0x00000000
#define _PMD6_SPI3MD_MASK                        0x00000001
#define _PMD6_SPI3MD_LENGTH                      0x00000001

#define _PMD6_LCDMD_POSITION                     0x00000006
#define _PMD6_LCDMD_MASK                         0x00000040
#define _PMD6_LCDMD_LENGTH                       0x00000001

#define _PMD7_DMA0MD_POSITION                    0x00000004
#define _PMD7_DMA0MD_MASK                        0x00000010
#define _PMD7_DMA0MD_LENGTH                      0x00000001

#define _PMD7_DMA1MD_POSITION                    0x00000005
#define _PMD7_DMA1MD_MASK                        0x00000020
#define _PMD7_DMA1MD_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register CONFIG4 (0x157f8)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG4;
#define _CONFIG4(x) __attribute__((address(0x157f8),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG4.sec"),space(prog))) __prog__ uint16_t _CONFIG4 = (x);

/*
** Only one invocation of CONFIG4 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG4.
** Multiple options may be combined, as shown:
**
** _CONFIG4( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Deep Sleep Watchdog Timer Postscale Select bits:
**     DSWDTPS_DSWDTPS0     1:32 (1 mS)
**     DSWDTPS_DSWDTPS1     1:64 (2.1 mS)
**     DSWDTPS_DSWDTPS2     1:128 (4.1 mS)
**     DSWDTPS_DSWDTPS3     1: 256 (8.3 mS)
**     DSWDTPS_DSWDTPS4     1:512 (16.5 mS)
**     DSWDTPS_DSWDTPS5     1:1024 (33 mS)
**     DSWDTPS_DSWDTPS6     1:2048 (66.1 mS)
**     DSWDTPS_DSWDTPS7     1:4096 (132.1 mS)
**     DSWDTPS_DSWDTPS8     1:8192 (264.3 mS)
**     DSWDTPS_DSWDTPS9     1:16384 (528.5 mS)
**     DSWDTPS_DSWDTPSA     1:32768 (1.057 Secs)
**     DSWDTPS_DSWDTPSB     1:65536 (2.114 Secs)
**     DSWDTPS_DSWDTPSC     1:131072 (4.228 Secs)
**     DSWDTPS_DSWDTPSD     1:262114 (8.456 Secs)
**     DSWDTPS_DSWDTPSE     1:524288 (16.912 Secs)
**     DSWDTPS_DSWDTPSF     1:1048576 (33.825 Secs)
**     DSWDTPS_DSWDTPS10    1:2097152 (67.7 Secs)
**     DSWDTPS_DSWDTPS11    1:4194304 (135.3 Secs)
**     DSWDTPS_DSWDTPS12    1:8388608 (4.5 Minutes)
**     DSWDTPS_DSWDTPS13    1:16777216 (9 Minutes)
**     DSWDTPS_DSWDTPS14    1:33554432 (18 Minutes)
**     DSWDTPS_DSWDTPS15    1:67108864 (36.1 Minutes)
**     DSWDTPS_DSWDTPS16    1:134217728 (72.2 Minutes)
**     DSWDTPS_DSWDTPS17    1:268435456 (2.4 Hours)
**     DSWDTPS_DSWDTPS18    1:536870912 (4.8 Hours)
**     DSWDTPS_DSWDTPS19    1:1073741824 (9.6 Hours)
**     DSWDTPS_DSWDTPS1A    1:2147483648 (19.2 Hours)
**     DSWDTPS_DSWDTPS1B    1:4294967296 (38.5 Hours)
**     DSWDTPS_DSWDTPS1C    1:8589934592 (77 Hours)
**     DSWDTPS_DSWDTPS1D    1:17179869184 (6.4 Days)
**     DSWDTPS_DSWDTPS1E    1:34359738368 (12.8  Days)
**     DSWDTPS_DSWDTPS1F    1:68719476736 (25.7 Days)
**
**   DSWDT Reference Clock Select:
**     DSWDTOSC_SOSC        DSWDT uses SOSC as reference clock
**     DSWDTOSC_LPRC        DSWDT uses LPRC as reference clock
**
**   Deep Sleep BOR Enable bit:
**     DSBOREN_OFF          DSBOR Disabled
**     DSBOREN_ON           DSBOR Enabled
**
**   Deep Sleep Watchdog Timer Enable:
**     DSWDTEN_OFF          DSWDT Disabled
**     DSWDTEN_ON           DSWDT Enabled
**
**   DSEN Bit Enable:
**     DSSWEN_OFF           Deep Sleep operation is always disabled
**     DSSWEN_ON            Deep Sleep is controlled by the register bit DSEN
**
*/

#define DSWDTPS_DSWDTPS0     0xFFE0
#define DSWDTPS_DSWDTPS1     0xFFE1
#define DSWDTPS_DSWDTPS2     0xFFE2
#define DSWDTPS_DSWDTPS3     0xFFE3
#define DSWDTPS_DSWDTPS4     0xFFE4
#define DSWDTPS_DSWDTPS5     0xFFE5
#define DSWDTPS_DSWDTPS6     0xFFE6
#define DSWDTPS_DSWDTPS7     0xFFE7
#define DSWDTPS_DSWDTPS8     0xFFE8
#define DSWDTPS_DSWDTPS9     0xFFE9
#define DSWDTPS_DSWDTPSA     0xFFEA
#define DSWDTPS_DSWDTPSB     0xFFEB
#define DSWDTPS_DSWDTPSC     0xFFEC
#define DSWDTPS_DSWDTPSD     0xFFED
#define DSWDTPS_DSWDTPSE     0xFFEE
#define DSWDTPS_DSWDTPSF     0xFFEF
#define DSWDTPS_DSWDTPS10    0xFFF0
#define DSWDTPS_DSWDTPS11    0xFFF1
#define DSWDTPS_DSWDTPS12    0xFFF2
#define DSWDTPS_DSWDTPS13    0xFFF3
#define DSWDTPS_DSWDTPS14    0xFFF4
#define DSWDTPS_DSWDTPS15    0xFFF5
#define DSWDTPS_DSWDTPS16    0xFFF6
#define DSWDTPS_DSWDTPS17    0xFFF7
#define DSWDTPS_DSWDTPS18    0xFFF8
#define DSWDTPS_DSWDTPS19    0xFFF9
#define DSWDTPS_DSWDTPS1A    0xFFFA
#define DSWDTPS_DSWDTPS1B    0xFFFB
#define DSWDTPS_DSWDTPS1C    0xFFFC
#define DSWDTPS_DSWDTPS1D    0xFFFD
#define DSWDTPS_DSWDTPS1E    0xFFFE
#define DSWDTPS_DSWDTPS1F    0xFFFF

#define DSWDTOSC_SOSC        0xFFDF
#define DSWDTOSC_LPRC        0xFFFF

#define DSBOREN_OFF          0xFFBF
#define DSBOREN_ON           0xFFFF

#define DSWDTEN_OFF          0xFF7F
#define DSWDTEN_ON           0xFFFF

#define DSSWEN_OFF           0xFEFF
#define DSSWEN_ON            0xFFFF

/* Register CONFIG3 (0x157fa)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG3;
#define _CONFIG3(x) __attribute__((address(0x157fa),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG3.sec"),space(prog))) __prog__ uint16_t _CONFIG3 = (x);

/*
** Only one invocation of CONFIG3 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG3.
** Multiple options may be combined, as shown:
**
** _CONFIG3( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Write Protection Flash Page Segment Boundary:
**     WPFP_WPFP0           Page 0 (0x00)
**     WPFP_WPFP1           Page 1 (0x400)
**     WPFP_WPFP2           Page 2 (0x800)
**     WPFP_WPFP3           Page 3 (0xC00)
**     WPFP_WPFP4           Page 4 (0x1000)
**     WPFP_WPFP5           Page 5 (0x1400)
**     WPFP_WPFP6           Page 6 (0x1800)
**     WPFP_WPFP7           Page 7 (0x1C00)
**     WPFP_WPFP8           Page 8 (0x2000)
**     WPFP_WPFP9           Page 9 (0x2400)
**     WPFP_WPFP10          Page 10 (0x2800)
**     WPFP_WPFP11          Page 11 (0x2C00)
**     WPFP_WPFP12          Page 12 (0x3000)
**     WPFP_WPFP13          Page 13 (0x3400)
**     WPFP_WPFP14          Page 14 (0x3800)
**     WPFP_WPFP15          Page 15 (0x3C00)
**     WPFP_WPFP16          Page 16 (0x4000)
**     WPFP_WPFP17          Page 17 (0x4400)
**     WPFP_WPFP18          Page 18 (0x4800)
**     WPFP_WPFP19          Page 19 (0x4C00)
**     WPFP_WPFP20          Page 20 (0x5000)
**     WPFP_WPFP21          Page 21 (0x5400)
**     WPFP_WPFP22          Page 22 (0x5800)
**     WPFP_WPFP23          Page 23 (0x5C00)
**     WPFP_WPFP24          Page 24 (0x6000)
**     WPFP_WPFP25          Page 25 (0x6400)
**     WPFP_WPFP26          Page 26 (0x6800)
**     WPFP_WPFP27          Page 27 (0x6C00)
**     WPFP_WPFP28          Page 28 (0x7000)
**     WPFP_WPFP29          Page 29 (0x7400)
**     WPFP_WPFP30          Page 30 (0x7800)
**     WPFP_WPFP31          Page 31 (0x7C00)
**     WPFP_WPFP32          Page 32 (0x8000)
**     WPFP_WPFP33          Page 33 (0x8400)
**     WPFP_WPFP34          Page 34 (0x8800)
**     WPFP_WPFP35          Page 35 (0x8C00)
**     WPFP_WPFP36          Page 36 (0x9000)
**     WPFP_WPFP37          Page 37 (0x9400)
**     WPFP_WPFP38          Page 38 (0x9800)
**     WPFP_WPFP39          Page 39 (0x9C00)
**     WPFP_WPFP40          Page 40 (0xA000)
**     WPFP_WPFP41          Page 41 (0xA400)
**     WPFP_WPFP42          Page 42 (0xA800)
**     WPFP_WPFP43          Page 43 (0xAC00)
**     WPFP_WPFP44          Page 44 (0xB000)
**     WPFP_WPFP45          Page 45 (0xB400)
**     WPFP_WPFP46          Page 46 (0xB800)
**     WPFP_WPFP47          Page 47 (0xBC00)
**     WPFP_WPFP48          Page 48 (0xC000)
**     WPFP_WPFP49          Page 49 (0xC400)
**     WPFP_WPFP50          Page 50 (0xC800)
**     WPFP_WPFP51          Page 51 (0xCC00)
**     WPFP_WPFP52          Page 52 (0xD000)
**     WPFP_WPFP53          Page 53 (0xD400)
**     WPFP_WPFP54          Page 54 (0xD800)
**     WPFP_WPFP55          Page 55 (0xDC00)
**     WPFP_WPFP56          Page 56 (0xE000)
**     WPFP_WPFP57          Page 57 (0xE400)
**     WPFP_WPFP58          Page 58 (0xE800)
**     WPFP_WPFP59          Page 59 (0xEC00)
**     WPFP_WPFP60          Page 60 (0xF000)
**     WPFP_WPFP61          Page 61 (0xF400)
**     WPFP_WPFP62          Page 62 (0xF800)
**     WPFP_WPFP63          Page 63 (0xFC00)
**     WPFP_WPFP64          Page 64 (0x10000)
**     WPFP_WPFP65          Page 65 (0x10400)
**     WPFP_WPFP66          Page 66 (0x10800)
**     WPFP_WPFP67          Page 67 (0x10C00)
**     WPFP_WPFP68          Page 68 (0x11000)
**     WPFP_WPFP69          Page 69 (0x11400)
**     WPFP_WPFP70          Page 70 (0x11800)
**     WPFP_WPFP71          Page 71 (0x11C00)
**     WPFP_WPFP72          Page 72 (0x12000)
**     WPFP_WPFP73          Page 73 (0x12400)
**     WPFP_WPFP74          Page 74 (0x12800)
**     WPFP_WPFP75          Page 75 (0x12C00)
**     WPFP_WPFP76          Page 76 (0x13000)
**     WPFP_WPFP77          Page 77 (0x13400)
**     WPFP_WPFP78          Page 78 (0x13800)
**     WPFP_WPFP79          Page 79 (0x13C00)
**     WPFP_WPFP80          Page 80 (0x14000)
**     WPFP_WPFP81          Page 81 (0x14400)
**     WPFP_WPFP82          Page 82 (0x14800)
**     WPFP_WPFP83          Page 83 (0x14C00)
**     WPFP_WPFP84          Page 84 (0x15000)
**     WPFP_WPFP85          Page 85 (0x15400)
**     WPFP_WPFP86          Page 86 (0x15800)
**     WPFP_WPFP87          Page 87 (0x15C00)
**     WPFP_WPFP88          Page 88 (0x16000)
**     WPFP_WPFP89          Page 89 (0x16400)
**     WPFP_WPFP90          Page 90 (0x16800)
**     WPFP_WPFP91          Page 91 (0x16C00)
**     WPFP_WPFP92          Page 92 (0x17000)
**     WPFP_WPFP93          Page 93 (0x17400)
**     WPFP_WPFP94          Page 94 (0x17800)
**     WPFP_WPFP95          Page 95 (0x17C00)
**     WPFP_WPFP96          Page 96 (0x18000)
**     WPFP_WPFP97          Page 97 (0x18400)
**     WPFP_WPFP98          Page 98 (0x18800)
**     WPFP_WPFP99          Page 99 (0x18C00)
**     WPFP_WPFP100         Page 100 (0x19000)
**     WPFP_WPFP101         Page 101 (0x19400)
**     WPFP_WPFP102         Page 102 (0x19800)
**     WPFP_WPFP103         Page 103 (0x19C00)
**     WPFP_WPFP104         Page 104 (0x1A000)
**     WPFP_WPFP105         Page 105 (0x1A400)
**     WPFP_WPFP106         Page 106 (0x1A800)
**     WPFP_WPFP107         Page 107 (0x1AC00)
**     WPFP_WPFP108         Page 108 (0x1B000)
**     WPFP_WPFP109         Page 109 (0x1B400)
**     WPFP_WPFP110         Page 110 (0x1B800)
**     WPFP_WPFP111         Page 111 (0x1BC00)
**     WPFP_WPFP112         Page 112 (0x1C000)
**     WPFP_WPFP113         Page 113 (0x1C400)
**     WPFP_WPFP114         Page 114 (0x1C800)
**     WPFP_WPFP115         Page 115 (0x1CC00)
**     WPFP_WPFP116         Page 116 (0x1D000)
**     WPFP_WPFP117         Page 117 (0x1D400)
**     WPFP_WPFP118         Page 118 (0x1D800)
**     WPFP_WPFP119         Page 119 (0x1DC00)
**     WPFP_WPFP120         Page 120 (0x1E000)
**     WPFP_WPFP121         Page 121 (0x1E400)
**     WPFP_WPFP122         Page 122 (0x1E800)
**     WPFP_WPFP123         Page 123 (0x1EC00)
**     WPFP_WPFP124         Page 124 (0x1F000)
**     WPFP_WPFP125         Page 125 (0x1F400)
**     WPFP_WPFP126         Page 126 (0x1F800)
**     WPFP_WPFP127         Page 127 (0x1FC00)
**
**   VBAT BOR enable bit:
**     VBTBOR_OFF           VBAT BOR disabled
**     VBTBOR_ON            VBAT BOR enabled
**
**   SOSC Selection bits:
**     SOSCSEL_OFF          Digital (SCLKI) mode
**     SOSCSEL_ON           SOSC circuit selected
**
**   Watch Dog Timer Window Width:
**     WDTWIN_PS75_0        Watch Dog Timer Window Width is 75 percent
**     WDTWIN_PS50_0        Watch Dog Timer Window Width is 50 percent
**     WDTWIN_PS37_5        Watch Dog Timer Window Width is 37.5 percent 
**     WDTWIN_PS25_0        Watch Dog Timer Window Width is 25 percent
**
**   Brown-out Reset Enable:
**     BOREN_OFF            Brown-out Reset Disabled
**     BOREN_ON             Brown-out Reset Enable
**
**   Segment Write Protection Disable:
**     WPDIS_WPEN           Enabled
**     WPDIS_WPDIS          Disabled
**
**   Write Protect Configuration Page Select:
**     WPCFG_WPCFGEN        Enabled
**     WPCFG_WPCFGDIS       Disabled
**
**   Segment Write Protection End Page Select:
**     WPEND_WPSTARTMEM     Write Protect from page 0 to WPFP
**     WPEND_WPENDMEM       Write Protect from WPFP to the last page of memory
**
*/

#define WPFP_WPFP0           0xFF80
#define WPFP_WPFP1           0xFF81
#define WPFP_WPFP2           0xFF82
#define WPFP_WPFP3           0xFF83
#define WPFP_WPFP4           0xFF84
#define WPFP_WPFP5           0xFF85
#define WPFP_WPFP6           0xFF86
#define WPFP_WPFP7           0xFF87
#define WPFP_WPFP8           0xFF88
#define WPFP_WPFP9           0xFF89
#define WPFP_WPFP10          0xFF8A
#define WPFP_WPFP11          0xFF8B
#define WPFP_WPFP12          0xFF8C
#define WPFP_WPFP13          0xFF8D
#define WPFP_WPFP14          0xFF8E
#define WPFP_WPFP15          0xFF8F
#define WPFP_WPFP16          0xFF90
#define WPFP_WPFP17          0xFF91
#define WPFP_WPFP18          0xFF92
#define WPFP_WPFP19          0xFF93
#define WPFP_WPFP20          0xFF94
#define WPFP_WPFP21          0xFF95
#define WPFP_WPFP22          0xFF96
#define WPFP_WPFP23          0xFF97
#define WPFP_WPFP24          0xFF98
#define WPFP_WPFP25          0xFF99
#define WPFP_WPFP26          0xFF9A
#define WPFP_WPFP27          0xFF9B
#define WPFP_WPFP28          0xFF9C
#define WPFP_WPFP29          0xFF9D
#define WPFP_WPFP30          0xFF9E
#define WPFP_WPFP31          0xFF9F
#define WPFP_WPFP32          0xFFA0
#define WPFP_WPFP33          0xFFA1
#define WPFP_WPFP34          0xFFA2
#define WPFP_WPFP35          0xFFA3
#define WPFP_WPFP36          0xFFA4
#define WPFP_WPFP37          0xFFA5
#define WPFP_WPFP38          0xFFA6
#define WPFP_WPFP39          0xFFA7
#define WPFP_WPFP40          0xFFA8
#define WPFP_WPFP41          0xFFA9
#define WPFP_WPFP42          0xFFAA
#define WPFP_WPFP43          0xFFAB
#define WPFP_WPFP44          0xFFAC
#define WPFP_WPFP45          0xFFAD
#define WPFP_WPFP46          0xFFAE
#define WPFP_WPFP47          0xFFAF
#define WPFP_WPFP48          0xFFB0
#define WPFP_WPFP49          0xFFB1
#define WPFP_WPFP50          0xFFB2
#define WPFP_WPFP51          0xFFB3
#define WPFP_WPFP52          0xFFB4
#define WPFP_WPFP53          0xFFB5
#define WPFP_WPFP54          0xFFB6
#define WPFP_WPFP55          0xFFB7
#define WPFP_WPFP56          0xFFB8
#define WPFP_WPFP57          0xFFB9
#define WPFP_WPFP58          0xFFBA
#define WPFP_WPFP59          0xFFBB
#define WPFP_WPFP60          0xFFBC
#define WPFP_WPFP61          0xFFBD
#define WPFP_WPFP62          0xFFBE
#define WPFP_WPFP63          0xFFBF
#define WPFP_WPFP64          0xFFC0
#define WPFP_WPFP65          0xFFC1
#define WPFP_WPFP66          0xFFC2
#define WPFP_WPFP67          0xFFC3
#define WPFP_WPFP68          0xFFC4
#define WPFP_WPFP69          0xFFC5
#define WPFP_WPFP70          0xFFC6
#define WPFP_WPFP71          0xFFC7
#define WPFP_WPFP72          0xFFC8
#define WPFP_WPFP73          0xFFC9
#define WPFP_WPFP74          0xFFCA
#define WPFP_WPFP75          0xFFCB
#define WPFP_WPFP76          0xFFCC
#define WPFP_WPFP77          0xFFCD
#define WPFP_WPFP78          0xFFCE
#define WPFP_WPFP79          0xFFCF
#define WPFP_WPFP80          0xFFD0
#define WPFP_WPFP81          0xFFD1
#define WPFP_WPFP82          0xFFD2
#define WPFP_WPFP83          0xFFD3
#define WPFP_WPFP84          0xFFD4
#define WPFP_WPFP85          0xFFD5
#define WPFP_WPFP86          0xFFD6
#define WPFP_WPFP87          0xFFD7
#define WPFP_WPFP88          0xFFD8
#define WPFP_WPFP89          0xFFD9
#define WPFP_WPFP90          0xFFDA
#define WPFP_WPFP91          0xFFDB
#define WPFP_WPFP92          0xFFDC
#define WPFP_WPFP93          0xFFDD
#define WPFP_WPFP94          0xFFDE
#define WPFP_WPFP95          0xFFDF
#define WPFP_WPFP96          0xFFE0
#define WPFP_WPFP97          0xFFE1
#define WPFP_WPFP98          0xFFE2
#define WPFP_WPFP99          0xFFE3
#define WPFP_WPFP100         0xFFE4
#define WPFP_WPFP101         0xFFE5
#define WPFP_WPFP102         0xFFE6
#define WPFP_WPFP103         0xFFE7
#define WPFP_WPFP104         0xFFE8
#define WPFP_WPFP105         0xFFE9
#define WPFP_WPFP106         0xFFEA
#define WPFP_WPFP107         0xFFEB
#define WPFP_WPFP108         0xFFEC
#define WPFP_WPFP109         0xFFED
#define WPFP_WPFP110         0xFFEE
#define WPFP_WPFP111         0xFFEF
#define WPFP_WPFP112         0xFFF0
#define WPFP_WPFP113         0xFFF1
#define WPFP_WPFP114         0xFFF2
#define WPFP_WPFP115         0xFFF3
#define WPFP_WPFP116         0xFFF4
#define WPFP_WPFP117         0xFFF5
#define WPFP_WPFP118         0xFFF6
#define WPFP_WPFP119         0xFFF7
#define WPFP_WPFP120         0xFFF8
#define WPFP_WPFP121         0xFFF9
#define WPFP_WPFP122         0xFFFA
#define WPFP_WPFP123         0xFFFB
#define WPFP_WPFP124         0xFFFC
#define WPFP_WPFP125         0xFFFD
#define WPFP_WPFP126         0xFFFE
#define WPFP_WPFP127         0xFFFF

#define VBTBOR_OFF           0xFF7F
#define VBTBOR_ON            0xFFFF

#define SOSCSEL_OFF          0xFEFF
#define SOSCSEL_ON           0xFFFF

#define WDTWIN_PS75_0        0xF3FF
#define WDTWIN_PS50_0        0xF7FF
#define WDTWIN_PS37_5        0xFBFF
#define WDTWIN_PS25_0        0xFFFF

#define BOREN_OFF            0xEFFF
#define BOREN_ON             0xFFFF

#define WPDIS_WPEN           0xDFFF
#define WPDIS_WPDIS          0xFFFF

#define WPCFG_WPCFGEN        0xBFFF
#define WPCFG_WPCFGDIS       0xFFFF

#define WPEND_WPSTARTMEM     0x7FFF
#define WPEND_WPENDMEM       0xFFFF

/* Register CONFIG2 (0x157fc)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG2;
#define _CONFIG2(x) __attribute__((address(0x157fc),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG2.sec"),space(prog))) __prog__ uint16_t _CONFIG2 = (x);

/*
** Only one invocation of CONFIG2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG2.
** Multiple options may be combined, as shown:
**
** _CONFIG2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Select:
**     POSCMD_EC            External-Clock Mode Enabled
**     POSCMD_XT            XT Oscillator Enabled
**     POSCMD_HS            HS Oscillator Enabled
**     POSCMD_NONE          Primary Oscillator Disabled
**
**   BOR Override bit:
**     BOREN1_DIS           BOR Disabled [When BOREN=0]
**     BOREN1_EN            BOR Enabled [When BOREN=1]
**
**   IOLOCK One-Way Set Enable bit:
**     IOL1WAY_OFF          The IOLOCK bit can be set and cleared using the unlock sequence
**     IOL1WAY_ON           Once set, the IOLOCK bit cannot be cleared
**
**   OSCO Pin Configuration:
**     OSCIOFCN_ON          OSCO/CLKO/RC15 functions as port I/O (RC15)
**     OSCIOFCN_OFF         OSCO/CLKO/RC15 functions as CLKO (FOSC/2)
**
**   Clock Switching and Fail-Safe Clock Monitor Configuration bits:
**     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
**
**   Initial Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with PLL module (FRCPLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (XTPLL,HSPLL, ECPLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
**
**   Alternate VREF/CVREF Pins Selection bit:
**     ALTVREF_ALT_AV_ALT_CVVoltage reference input, ADC =RB0/RB1   Comparator =RB0/RB1
**     ALTVREF_ALT_AV_DLT_CVVoltage reference input, ADC =RB0/RB1   Comparator =RA9,RA10
**     ALTVREF_DLT_AV_ALT_CVVoltage reference input, ADC =RA9/RA10 Comparator =RB0,RB1
**     ALTVREF_DLT_AV_DLT_CVVoltage reference input, ADC =RA9/RA10 Comparator =RA9,RA10
**
**   Internal External Switchover:
**     IESO_OFF             Disabled
**     IESO_ON              Enabled
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define BOREN1_DIS           0xFFF7
#define BOREN1_EN            0xFFFF

#define IOL1WAY_OFF          0xFFEF
#define IOL1WAY_ON           0xFFFF

#define OSCIOFCN_ON          0xFFDF
#define OSCIOFCN_OFF         0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define FNOSC_FRC            0xF8FF
#define FNOSC_FRCPLL         0xF9FF
#define FNOSC_PRI            0xFAFF
#define FNOSC_PRIPLL         0xFBFF
#define FNOSC_SOSC           0xFCFF
#define FNOSC_LPRC           0xFDFF
#define FNOSC_FRCDIV         0xFFFF

#define ALTVREF_ALT_AV_ALT_CV 0xE7FF
#define ALTVREF_ALT_AV_DLT_CV 0xEFFF
#define ALTVREF_DLT_AV_ALT_CV 0xF7FF
#define ALTVREF_DLT_AV_DLT_CV 0xFFFF

#define IESO_OFF             0x7FFF
#define IESO_ON              0xFFFF

/* Register CONFIG1 (0x157fe)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG1;
#define _CONFIG1(x) __attribute__((address(0x157fe),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG1.sec"),space(prog))) __prog__ uint16_t _CONFIG1 = (x);

/*
** Only one invocation of CONFIG1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG1.
** Multiple options may be combined, as shown:
**
** _CONFIG1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler Select:
**     WDTPS_PS1            1:1
**     WDTPS_PS2            1:2
**     WDTPS_PS4            1:4
**     WDTPS_PS8            1:8
**     WDTPS_PS16           1:16
**     WDTPS_PS32           1:32
**     WDTPS_PS64           1:64
**     WDTPS_PS128          1:128
**     WDTPS_PS256          1:256
**     WDTPS_PS512          1:512
**     WDTPS_PS1024         1:1,024
**     WDTPS_PS2048         1:2,048
**     WDTPS_PS4096         1:4,096
**     WDTPS_PS8192         1:8,192
**     WDTPS_PS16384        1:16,384
**     WDTPS_PS32768        1:32,768
**
**   WDT Prescaler Ratio Select:
**     FWPSA_PR32           1:32
**     FWPSA_PR128          1:128
**
**   Watchdog Timer Enable:
**     FWDTEN_WDT_DIS       WDT disabled in hardware; SWDTEN bit disabled
**     FWDTEN_WDT_ACT       WDT enabled only while device active and disabled in Sleep
**     FWDTEN_WDT_SW        WDT controlled with the SWDTEN bit
**     FWDTEN_WDT_HW        WDT enabled in hardware
**
**   Windowed WDT Disable:
**     WINDIS_ON            Windowed Watchdog Timer
**     WINDIS_OFF           Standard Watchdog Timer
**
**   Emulator Pin Placement Select bits:
**     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
**     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
**     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
**
**   Low power regulator control:
**     LPCFG_ON             Enabled
**     LPCFG_OFF            Disabled
**
**   General Segment Write Protect:
**     GWRP_ON              Enabled
**     GWRP_OFF             Disabled
**
**   General Segment Code Protect:
**     GCP_ON               Code protection is enabled
**     GCP_OFF              Code protection is disabled
**
**   JTAG Port Enable:
**     JTAGEN_OFF           Disabled
**     JTAGEN_ON            Enabled
**
*/

#define WDTPS_PS1            0xFFF0
#define WDTPS_PS2            0xFFF1
#define WDTPS_PS4            0xFFF2
#define WDTPS_PS8            0xFFF3
#define WDTPS_PS16           0xFFF4
#define WDTPS_PS32           0xFFF5
#define WDTPS_PS64           0xFFF6
#define WDTPS_PS128          0xFFF7
#define WDTPS_PS256          0xFFF8
#define WDTPS_PS512          0xFFF9
#define WDTPS_PS1024         0xFFFA
#define WDTPS_PS2048         0xFFFB
#define WDTPS_PS4096         0xFFFC
#define WDTPS_PS8192         0xFFFD
#define WDTPS_PS16384        0xFFFE
#define WDTPS_PS32768        0xFFFF

#define FWPSA_PR32           0xFFEF
#define FWPSA_PR128          0xFFFF

#define FWDTEN_WDT_DIS       0xFF9F
#define FWDTEN_WDT_ACT       0xFFBF
#define FWDTEN_WDT_SW        0xFFDF
#define FWDTEN_WDT_HW        0xFFFF

#define WINDIS_ON            0xFF7F
#define WINDIS_OFF           0xFFFF

#define ICS_PGx3             0xFDFF
#define ICS_PGx2             0xFEFF
#define ICS_PGx1             0xFFFF

#define LPCFG_ON             0xFBFF
#define LPCFG_OFF            0xFFFF

#define GWRP_ON              0xEFFF
#define GWRP_OFF             0xFFFF

#define GCP_ON               0xDFFF
#define GCP_OFF              0xFFFF

#define JTAGEN_OFF           0xBFFF
#define JTAGEN_ON            0xFFFF



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
#define __PROGRAM_LENGTH 0x155f8

#define __CONFIG4_BASE 0x157f8
#define __CONFIG4_LENGTH 0x2

#define __CONFIG3_BASE 0x157fa
#define __CONFIG3_LENGTH 0x2

#define __CONFIG2_BASE 0x157fc
#define __CONFIG2_LENGTH 0x2

#define __CONFIG1_BASE 0x157fe
#define __CONFIG1_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x2000


/*
 * PPS Remapping Pin Names
 */

#define _RPOUT_C1OUT 1
#define _RPOUT_C2OUT 2
#define _RPOUT_U1TX 3
#define _RPOUT_U1RTS 4
#define _RPOUT_U2TX 5
#define _RPOUT_U2RTS 6
#define _RPOUT_SDO1 7
#define _RPOUT_SCK1OUT 8
#define _RPOUT_SS1OUT 9
#define _RPOUT_SDO2 10
#define _RPOUT_SCK2OUT 11
#define _RPOUT_SS2OUT 12
#define _RPOUT_OC1 18
#define _RPOUT_OC2 19
#define _RPOUT_OC3 20
#define _RPOUT_OC4 21
#define _RPOUT_OC5 22
#define _RPOUT_OC6 23
#define _RPOUT_OC7 24
#define _RPOUT_U3TX 28
#define _RPOUT_U3RTS 29
#define _RPOUT_U4TX 30
#define _RPOUT_U4RTS 31
#define _RPOUT_C3OUT 36
#define _RPOUT_MDOUT 37

#endif
