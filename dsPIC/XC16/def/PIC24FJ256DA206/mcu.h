/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FJ256DA206 processor header
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

#ifndef __PIC24FJ256DA206__
#error "Include file does not match processor setting"
#endif

#include <stdint.h>

#ifndef __24FJ256DA206_H
#define __24FJ256DA206_H

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
  uint16_t CN0PDE:1;
  uint16_t CN1PDE:1;
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
  uint16_t :1;
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
  uint16_t :1;
  uint16_t CN71PDE:1;
} CNPD5BITS;
extern volatile CNPD5BITS CNPD5bits __attribute__((__sfr__));

#define CNPD6 CNPD6
extern volatile uint16_t CNPD6 __attribute__((__sfr__));
typedef struct tagCNPD6BITS {
  uint16_t :3;
  uint16_t CN83PDE:1;
  uint16_t CN84PDE:1;
} CNPD6BITS;
extern volatile CNPD6BITS CNPD6bits __attribute__((__sfr__));

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
  uint16_t :1;
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
  uint16_t :1;
  uint16_t CN71IE:1;
} CNEN5BITS;
extern volatile CNEN5BITS CNEN5bits __attribute__((__sfr__));

#define CNEN6 CNEN6
extern volatile uint16_t CNEN6 __attribute__((__sfr__));
typedef struct tagCNEN6BITS {
  uint16_t :3;
  uint16_t CN83IE:1;
  uint16_t CN84IE:1;
} CNEN6BITS;
extern volatile CNEN6BITS CNEN6bits __attribute__((__sfr__));

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
  uint16_t :1;
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
  uint16_t :1;
  uint16_t CN71PUE:1;
} CNPU5BITS;
extern volatile CNPU5BITS CNPU5bits __attribute__((__sfr__));

#define CNPU6 CNPU6
extern volatile uint16_t CNPU6 __attribute__((__sfr__));
typedef struct tagCNPU6BITS {
  uint16_t :3;
  uint16_t CN83PUE:1;
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
  uint16_t :1;
  uint16_t IC2IF:1;
  uint16_t OC2IF:1;
  uint16_t T2IF:1;
  uint16_t T3IF:1;
  uint16_t SPF1IF:1;
  uint16_t SPI1IF:1;
  uint16_t U1RXIF:1;
  uint16_t U1TXIF:1;
  uint16_t AD1IF:1;
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
  uint16_t IC8IF:1;
  uint16_t :1;
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
  uint16_t :3;
  uint16_t IC3IF:1;
  uint16_t IC4IF:1;
  uint16_t IC5IF:1;
  uint16_t IC6IF:1;
  uint16_t OC5IF:1;
  uint16_t OC6IF:1;
  uint16_t OC7IF:1;
  uint16_t OC8IF:1;
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
  uint16_t :7;
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
  uint16_t SI2C3IF:1;
  uint16_t MI2C3IF:1;
  uint16_t USB1IF:1;
  uint16_t U4ERIF:1;
  uint16_t U4RXIF:1;
  uint16_t U4TXIF:1;
  uint16_t SPF3IF:1;
  uint16_t SPI3IF:1;
  uint16_t OC9IF:1;
  uint16_t IC9IF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile uint16_t IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  uint16_t :4;
  uint16_t GFX1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile uint16_t IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  uint16_t INT0IE:1;
  uint16_t IC1IE:1;
  uint16_t OC1IE:1;
  uint16_t T1IE:1;
  uint16_t :1;
  uint16_t IC2IE:1;
  uint16_t OC2IE:1;
  uint16_t T2IE:1;
  uint16_t T3IE:1;
  uint16_t SPF1IE:1;
  uint16_t SPI1IE:1;
  uint16_t U1RXIE:1;
  uint16_t U1TXIE:1;
  uint16_t AD1IE:1;
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
  uint16_t IC8IE:1;
  uint16_t :1;
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
  uint16_t :3;
  uint16_t IC3IE:1;
  uint16_t IC4IE:1;
  uint16_t IC5IE:1;
  uint16_t IC6IE:1;
  uint16_t OC5IE:1;
  uint16_t OC6IE:1;
  uint16_t OC7IE:1;
  uint16_t OC8IE:1;
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
  uint16_t :7;
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
  uint16_t SI2C3IE:1;
  uint16_t MI2C3IE:1;
  uint16_t USB1IE:1;
  uint16_t U4ERIE:1;
  uint16_t U4RXIE:1;
  uint16_t U4TXIE:1;
  uint16_t SPF3IE:1;
  uint16_t SPI3IE:1;
  uint16_t OC9IE:1;
  uint16_t IC9IE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile uint16_t IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  uint16_t :4;
  uint16_t GFX1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

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
      uint16_t :4;
      uint16_t IC2IP:3;
      uint16_t :1;
      uint16_t OC2IP:3;
      uint16_t :1;
      uint16_t T2IP:3;
    };
    struct {
      uint16_t :4;
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
    };
    struct {
      uint16_t U1TXIP0:1;
      uint16_t U1TXIP1:1;
      uint16_t U1TXIP2:1;
      uint16_t :1;
      uint16_t AD1IP0:1;
      uint16_t AD1IP1:1;
      uint16_t AD1IP2:1;
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
      uint16_t :1;
      uint16_t IC8IP:3;
    };
    struct {
      uint16_t INT1IP0:1;
      uint16_t INT1IP1:1;
      uint16_t INT1IP2:1;
      uint16_t :5;
      uint16_t IC7IP0:1;
      uint16_t IC7IP1:1;
      uint16_t IC7IP2:1;
      uint16_t :1;
      uint16_t IC8IP0:1;
      uint16_t IC8IP1:1;
      uint16_t IC8IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC6 IPC6
extern volatile uint16_t IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      uint16_t :4;
      uint16_t OC3IP:3;
      uint16_t :1;
      uint16_t OC4IP:3;
      uint16_t :1;
      uint16_t T4IP:3;
    };
    struct {
      uint16_t :4;
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
      uint16_t :4;
      uint16_t IC3IP:3;
      uint16_t :1;
      uint16_t IC4IP:3;
      uint16_t :1;
      uint16_t IC5IP:3;
    };
    struct {
      uint16_t :4;
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
      uint16_t OC8IP:3;
    };
    struct {
      uint16_t OC8IP0:1;
      uint16_t OC8IP1:1;
      uint16_t OC8IP2:1;
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
      uint16_t :8;
      uint16_t RTCIP:3;
    };
    struct {
      uint16_t :8;
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
      uint16_t SI2C3IP:3;
      uint16_t :1;
      uint16_t MI2C3IP:3;
      uint16_t :1;
      uint16_t USB1IP:3;
      uint16_t :1;
      uint16_t U4ERIP:3;
    };
    struct {
      uint16_t SI2C3IP0:1;
      uint16_t SI2C3IP1:1;
      uint16_t SI2C3IP2:1;
      uint16_t :1;
      uint16_t MI2C3IP0:1;
      uint16_t MI2C3IP1:1;
      uint16_t MI2C3IP2:1;
      uint16_t :1;
      uint16_t USB1IP0:1;
      uint16_t USB1IP1:1;
      uint16_t USB1IP2:1;
      uint16_t :1;
      uint16_t U4ERIP0:1;
      uint16_t U4ERIP1:1;
      uint16_t U4ERIP2:1;
    };
    struct {
      uint16_t SI2C3P0:1;
      uint16_t SI2C3P1:1;
      uint16_t SI2C3P2:1;
      uint16_t :1;
      uint16_t MI2C3P0:1;
      uint16_t MI2C3P1:1;
      uint16_t MI2C3P2:1;
    };
    struct {
      uint16_t SI2C3P:3;
      uint16_t :1;
      uint16_t MI2C3P:3;
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
      uint16_t :1;
      uint16_t SPF3IP:3;
      uint16_t :1;
      uint16_t SPI3IP:3;
    };
    struct {
      uint16_t U4RXIP0:1;
      uint16_t U4RXIP1:1;
      uint16_t U4RXIP2:1;
      uint16_t :1;
      uint16_t U4TXIP0:1;
      uint16_t U4TXIP1:1;
      uint16_t U4TXIP2:1;
      uint16_t :1;
      uint16_t SPF3IP0:1;
      uint16_t SPF3IP1:1;
      uint16_t SPF3IP2:1;
      uint16_t :1;
      uint16_t SPI3IP0:1;
      uint16_t SPI3IP1:1;
      uint16_t SPI3IP2:1;
    };
  };
} IPC22BITS;
extern volatile IPC22BITS IPC22bits __attribute__((__sfr__));

#define IPC23 IPC23
extern volatile uint16_t IPC23 __attribute__((__sfr__));
__extension__ typedef struct tagIPC23BITS {
  union {
    struct {
      uint16_t OC9IP:3;
      uint16_t :1;
      uint16_t IC9IP:3;
    };
    struct {
      uint16_t OC9IP0:1;
      uint16_t OC9IP1:1;
      uint16_t OC9IP2:1;
      uint16_t :1;
      uint16_t IC9IP0:1;
      uint16_t IC9IP1:1;
      uint16_t IC9IP2:1;
    };
  };
} IPC23BITS;
extern volatile IPC23BITS IPC23bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile uint16_t IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      uint16_t GFX1IP:3;
    };
    struct {
      uint16_t GFX1IP0:1;
      uint16_t GFX1IP1:1;
      uint16_t GFX1IP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

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
#define IC8CON1 IC8CON1
extern volatile uint16_t IC8CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC8CON1BITS {
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
} IC8CON1BITS;
extern volatile IC8CON1BITS IC8CON1bits __attribute__((__sfr__));

#define IC8CON2 IC8CON2
extern volatile uint16_t IC8CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC8CON2BITS {
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
} IC8CON2BITS;
extern volatile IC8CON2BITS IC8CON2bits __attribute__((__sfr__));


#define IC8 ACC8
extern volatile IC IC8 __attribute__((__sfr__));

#define IC8BUF IC8BUF
extern volatile uint16_t IC8BUF __attribute__((__sfr__));
#define IC8TMR IC8TMR
extern volatile uint16_t IC8TMR __attribute__((__sfr__));
#define IC9CON1 IC9CON1
extern volatile uint16_t IC9CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC9CON1BITS {
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
} IC9CON1BITS;
extern volatile IC9CON1BITS IC9CON1bits __attribute__((__sfr__));

#define IC9CON2 IC9CON2
extern volatile uint16_t IC9CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC9CON2BITS {
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
} IC9CON2BITS;
extern volatile IC9CON2BITS IC9CON2bits __attribute__((__sfr__));


#define IC9 ACC9
extern volatile IC IC9 __attribute__((__sfr__));

#define IC9BUF IC9BUF
extern volatile uint16_t IC9BUF __attribute__((__sfr__));
#define IC9TMR IC9TMR
extern volatile uint16_t IC9TMR __attribute__((__sfr__));
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
#define OC8CON1 OC8CON1
extern volatile uint16_t OC8CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC8CON1BITS {
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
} OC8CON1BITS;
extern volatile OC8CON1BITS OC8CON1bits __attribute__((__sfr__));

#define OC8CON2 OC8CON2
extern volatile uint16_t OC8CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC8CON2BITS {
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
} OC8CON2BITS;
extern volatile OC8CON2BITS OC8CON2bits __attribute__((__sfr__));


#define OC8RS OC8RS
extern volatile uint16_t OC8RS __attribute__((__sfr__));
#define OC8R OC8R
extern volatile uint16_t OC8R __attribute__((__sfr__));
#define OC8TMR OC8TMR
extern volatile uint16_t OC8TMR __attribute__((__sfr__));
#define OC9CON1 OC9CON1
extern volatile uint16_t OC9CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC9CON1BITS {
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
} OC9CON1BITS;
extern volatile OC9CON1BITS OC9CON1bits __attribute__((__sfr__));

#define OC9CON2 OC9CON2
extern volatile uint16_t OC9CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC9CON2BITS {
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
} OC9CON2BITS;
extern volatile OC9CON2BITS OC9CON2bits __attribute__((__sfr__));


#define OC9RS OC9RS
extern volatile uint16_t OC9RS __attribute__((__sfr__));
#define OC9R OC9R
extern volatile uint16_t OC9R __attribute__((__sfr__));
#define OC9TMR OC9TMR
extern volatile uint16_t OC9TMR __attribute__((__sfr__));
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
#define I2C3RCV I2C3RCV
extern volatile uint16_t I2C3RCV __attribute__((__sfr__));
#define I2C3TRN I2C3TRN
extern volatile uint16_t I2C3TRN __attribute__((__sfr__));
#define I2C3BRG I2C3BRG
extern volatile uint16_t I2C3BRG __attribute__((__sfr__));
#define I2C3CON I2C3CON
extern volatile uint16_t I2C3CON __attribute__((__sfr__));
typedef struct tagI2C3CONBITS {
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
} I2C3CONBITS;
extern volatile I2C3CONBITS I2C3CONbits __attribute__((__sfr__));

#define I2C3STAT I2C3STAT
extern volatile uint16_t I2C3STAT __attribute__((__sfr__));
__extension__ typedef struct tagI2C3STATBITS {
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
} I2C3STATBITS;
extern volatile I2C3STATBITS I2C3STATbits __attribute__((__sfr__));

#define I2C3ADD I2C3ADD
extern volatile uint16_t I2C3ADD __attribute__((__sfr__));
#define I2C3MSK I2C3MSK
extern volatile uint16_t I2C3MSK __attribute__((__sfr__));

#define SPI3 SPI3
extern volatile SPI SPI3 __attribute__((__sfr__));

#define SPI3STAT SPI3STAT
extern volatile uint16_t SPI3STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI3STATBITS {
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
} SPI3STATBITS;
extern volatile SPI3STATBITS SPI3STATbits __attribute__((__sfr__));

#define SPI3CON1 SPI3CON1
extern volatile uint16_t SPI3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI3CON1BITS {
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
} SPI3CON1BITS;
extern volatile SPI3CON1BITS SPI3CON1bits __attribute__((__sfr__));

#define SPI3CON2 SPI3CON2
extern volatile uint16_t SPI3CON2 __attribute__((__sfr__));
typedef struct tagSPI3CON2BITS {
  uint16_t SPIBEN:1;
  uint16_t SPIFE:1;
  uint16_t :11;
  uint16_t SPIFPOL:1;
  uint16_t SPIFSD:1;
  uint16_t FRMEN:1;
} SPI3CON2BITS;
extern volatile SPI3CON2BITS SPI3CON2bits __attribute__((__sfr__));

#define SPI3BUF SPI3BUF
extern volatile uint16_t SPI3BUF __attribute__((__sfr__));

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
  uint16_t TRISC13:1;
  uint16_t TRISC14:1;
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
  uint16_t :1;
  uint16_t TRISF3:1;
  uint16_t TRISF4:1;
  uint16_t TRISF5:1;
  uint16_t :1;
  uint16_t TRISF7:1;
} TRISFBITS;
extern volatile TRISFBITS TRISFbits __attribute__((__sfr__));

#define PORTF PORTF
extern volatile uint16_t PORTF __attribute__((__sfr__));
typedef struct tagPORTFBITS {
  uint16_t RF0:1;
  uint16_t RF1:1;
  uint16_t :1;
  uint16_t RF3:1;
  uint16_t RF4:1;
  uint16_t RF5:1;
  uint16_t :1;
  uint16_t RF7:1;
} PORTFBITS;
extern volatile PORTFBITS PORTFbits __attribute__((__sfr__));

#define LATF LATF
extern volatile uint16_t LATF __attribute__((__sfr__));
typedef struct tagLATFBITS {
  uint16_t LATF0:1;
  uint16_t LATF1:1;
  uint16_t :1;
  uint16_t LATF3:1;
  uint16_t LATF4:1;
  uint16_t LATF5:1;
  uint16_t :1;
  uint16_t LATF7:1;
} LATFBITS;
extern volatile LATFBITS LATFbits __attribute__((__sfr__));

#define ODCF ODCF
extern volatile uint16_t ODCF __attribute__((__sfr__));
typedef struct tagODCFBITS {
  uint16_t ODF0:1;
  uint16_t ODF1:1;
  uint16_t :1;
  uint16_t ODF3:1;
  uint16_t ODF4:1;
  uint16_t ODF5:1;
  uint16_t :1;
  uint16_t ODF7:1;
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
__extension__ typedef struct tagPADCFG1BITS {
  union {
    struct {
      uint16_t :1;
      uint16_t RTSECSEL:1;
    };
    struct {
      uint16_t :1;
      uint16_t RTSECSEL0:1;
    };
  };
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
#define ADC1BUFA ADC1BUFA
extern volatile uint16_t ADC1BUFA __attribute__((__sfr__));
#define ADC1BUFB ADC1BUFB
extern volatile uint16_t ADC1BUFB __attribute__((__sfr__));
#define ADC1BUFC ADC1BUFC
extern volatile uint16_t ADC1BUFC __attribute__((__sfr__));
#define ADC1BUFD ADC1BUFD
extern volatile uint16_t ADC1BUFD __attribute__((__sfr__));
#define ADC1BUFE ADC1BUFE
extern volatile uint16_t ADC1BUFE __attribute__((__sfr__));
#define ADC1BUFF ADC1BUFF
extern volatile uint16_t ADC1BUFF __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile uint16_t AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      uint16_t DONE:1;
      uint16_t SAMP:1;
      uint16_t ASAM:1;
      uint16_t :2;
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
      uint16_t :2;
      uint16_t VCFG:3;
    };
    struct {
      uint16_t :2;
      uint16_t SMPI0:1;
      uint16_t SMPI1:1;
      uint16_t SMPI2:1;
      uint16_t SMPI3:1;
      uint16_t SMPI4:1;
      uint16_t :6;
      uint16_t VCFG0:1;
      uint16_t VCFG1:1;
      uint16_t VCFG2:1;
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
      uint16_t :2;
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
      uint16_t :2;
      uint16_t CH0NA:1;
      uint16_t CH0SB:5;
      uint16_t :2;
      uint16_t CH0NB:1;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t :3;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
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
      uint16_t :2;
      uint16_t CH0NA:1;
      uint16_t CH0SB:5;
      uint16_t :2;
      uint16_t CH0NB:1;
    };
    struct {
      uint16_t CH0SA0:1;
      uint16_t CH0SA1:1;
      uint16_t CH0SA2:1;
      uint16_t CH0SA3:1;
      uint16_t CH0SA4:1;
      uint16_t :3;
      uint16_t CH0SB0:1;
      uint16_t CH0SB1:1;
      uint16_t CH0SB2:1;
      uint16_t CH0SB3:1;
      uint16_t CH0SB4:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile uint16_t AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  uint16_t :8;
  uint16_t CSSL24:1;
  uint16_t CSSL25:1;
  uint16_t CSSL26:1;
  uint16_t CSSL27:1;
} AD1CSSHBITS;
extern volatile AD1CSSHBITS AD1CSSHbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile uint16_t AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
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
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define CTMUCON CTMUCON
extern volatile uint16_t CTMUCON __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCONBITS {
  union {
    struct {
      uint16_t EDG1STAT:1;
      uint16_t EDG2STAT:1;
      uint16_t EDG1SEL:2;
      uint16_t EDG1POL:1;
      uint16_t EDG2SEL:2;
      uint16_t EDG2POL:1;
      uint16_t CTTRIG:1;
      uint16_t IDISSEN:1;
      uint16_t EDGSEQEN:1;
      uint16_t EDGEN:1;
      uint16_t TGEN:1;
      uint16_t CTMUSIDL:1;
      uint16_t :1;
      uint16_t CTMUEN:1;
    };
    struct {
      uint16_t :2;
      uint16_t EDG1SEL0:1;
      uint16_t EDG1SEL1:1;
      uint16_t :1;
      uint16_t EDG2SEL0:1;
      uint16_t EDG2SEL1:1;
    };
  };
} CTMUCONBITS;
extern volatile CTMUCONBITS CTMUCONbits __attribute__((__sfr__));

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
#define ADC1BUF16 ADC1BUF16
extern volatile uint16_t ADC1BUF16 __attribute__((__sfr__));
#define ADC1BUF17 ADC1BUF17
extern volatile uint16_t ADC1BUF17 __attribute__((__sfr__));
#define ADC1BUF18 ADC1BUF18
extern volatile uint16_t ADC1BUF18 __attribute__((__sfr__));
#define ADC1BUF19 ADC1BUF19
extern volatile uint16_t ADC1BUF19 __attribute__((__sfr__));
#define ADC1BUF1A ADC1BUF1A
extern volatile uint16_t ADC1BUF1A __attribute__((__sfr__));
#define ADC1BUF1B ADC1BUF1B
extern volatile uint16_t ADC1BUF1B __attribute__((__sfr__));
#define ADC1BUF1C ADC1BUF1C
extern volatile uint16_t ADC1BUF1C __attribute__((__sfr__));
#define ADC1BUF1D ADC1BUF1D
extern volatile uint16_t ADC1BUF1D __attribute__((__sfr__));
#define ADC1BUF1E ADC1BUF1E
extern volatile uint16_t ADC1BUF1E __attribute__((__sfr__));
#define ADC1BUF1F ADC1BUF1F
extern volatile uint16_t ADC1BUF1F __attribute__((__sfr__));
#define U1OTGIR U1OTGIR
extern volatile uint16_t U1OTGIR __attribute__((__sfr__));
typedef struct tagU1OTGIRBITS {
  uint16_t VBUSVDIF:1;
  uint16_t :1;
  uint16_t SESENDIF:1;
  uint16_t SESVDIF:1;
  uint16_t ACTVIF:1;
  uint16_t LSTATEIF:1;
  uint16_t T1MSECIF:1;
  uint16_t IDIF:1;
} U1OTGIRBITS;
extern volatile U1OTGIRBITS U1OTGIRbits __attribute__((__sfr__));

#define U1OTGIE U1OTGIE
extern volatile uint16_t U1OTGIE __attribute__((__sfr__));
typedef struct tagU1OTGIEBITS {
  uint16_t VBUSVDIE:1;
  uint16_t :1;
  uint16_t SESENDIE:1;
  uint16_t SESVDIE:1;
  uint16_t ACTVIE:1;
  uint16_t LSTATEIE:1;
  uint16_t T1MSECIE:1;
  uint16_t IDIE:1;
} U1OTGIEBITS;
extern volatile U1OTGIEBITS U1OTGIEbits __attribute__((__sfr__));

#define U1OTGSTAT U1OTGSTAT
extern volatile uint16_t U1OTGSTAT __attribute__((__sfr__));
typedef struct tagU1OTGSTATBITS {
  uint16_t VBUSVD:1;
  uint16_t :1;
  uint16_t SESEND:1;
  uint16_t SESVD:1;
  uint16_t :1;
  uint16_t LSTATE:1;
  uint16_t :1;
  uint16_t ID:1;
} U1OTGSTATBITS;
extern volatile U1OTGSTATBITS U1OTGSTATbits __attribute__((__sfr__));

#define U1OTGCON U1OTGCON
extern volatile uint16_t U1OTGCON __attribute__((__sfr__));
typedef struct tagU1OTGCONBITS {
  uint16_t VBUSDIS:1;
  uint16_t VBUSCHG:1;
  uint16_t OTGEN:1;
  uint16_t VBUSON:1;
  uint16_t DMPULDWN:1;
  uint16_t DPPULDWN:1;
  uint16_t DMPULUP:1;
  uint16_t DPPULUP:1;
} U1OTGCONBITS;
extern volatile U1OTGCONBITS U1OTGCONbits __attribute__((__sfr__));

#define U1PWRC U1PWRC
extern volatile uint16_t U1PWRC __attribute__((__sfr__));
__extension__ typedef struct tagU1PWRCBITS {
  union {
    struct {
      uint16_t USBPWR:1;
      uint16_t USUSPND:1;
      uint16_t :2;
      uint16_t USLPGRD:1;
      uint16_t :2;
      uint16_t UACTPND:1;
    };
    struct {
      uint16_t :1;
      uint16_t USUSPEND:1;
    };
  };
} U1PWRCBITS;
extern volatile U1PWRCBITS U1PWRCbits __attribute__((__sfr__));

#define U1IR U1IR
extern volatile uint16_t U1IR __attribute__((__sfr__));
__extension__ typedef struct tagU1IRBITS {
  union {
    struct {
      uint16_t URSTIF:1;
      uint16_t UERRIF:1;
      uint16_t SOFIF:1;
      uint16_t TRNIF:1;
      uint16_t IDLEIF:1;
      uint16_t RESUMEIF:1;
      uint16_t ATTACHIF:1;
      uint16_t STALLIF:1;
    };
    struct {
      uint16_t DETACHIF:1;
    };
  };
} U1IRBITS;
extern volatile U1IRBITS U1IRbits __attribute__((__sfr__));

#define U1IE U1IE
extern volatile uint16_t U1IE __attribute__((__sfr__));
__extension__ typedef struct tagU1IEBITS {
  union {
    struct {
      uint16_t URSTIE:1;
      uint16_t UERRIE:1;
      uint16_t SOFIE:1;
      uint16_t TRNIE:1;
      uint16_t IDLEIE:1;
      uint16_t RESUMEIE:1;
      uint16_t ATTACHIE:1;
      uint16_t STALLIE:1;
    };
    struct {
      uint16_t DETACHIE:1;
    };
  };
} U1IEBITS;
extern volatile U1IEBITS U1IEbits __attribute__((__sfr__));

#define U1EIR U1EIR
extern volatile uint16_t U1EIR __attribute__((__sfr__));
__extension__ typedef struct tagU1EIRBITS {
  union {
    struct {
      uint16_t PIDEF:1;
      uint16_t CRC5EF:1;
      uint16_t CRC16EF:1;
      uint16_t DFN8EF:1;
      uint16_t BTOEF:1;
      uint16_t DMAEF:1;
      uint16_t :1;
      uint16_t BTSEF:1;
    };
    struct {
      uint16_t :1;
      uint16_t EOFEF:1;
    };
  };
} U1EIRBITS;
extern volatile U1EIRBITS U1EIRbits __attribute__((__sfr__));

#define U1EIE U1EIE
extern volatile uint16_t U1EIE __attribute__((__sfr__));
__extension__ typedef struct tagU1EIEBITS {
  union {
    struct {
      uint16_t PIDEE:1;
      uint16_t CRC5EE:1;
      uint16_t CRC16EE:1;
      uint16_t DFN8EE:1;
      uint16_t BTOEE:1;
      uint16_t DMAEE:1;
      uint16_t :1;
      uint16_t BTSEE:1;
    };
    struct {
      uint16_t :1;
      uint16_t EOFEE:1;
    };
  };
} U1EIEBITS;
extern volatile U1EIEBITS U1EIEbits __attribute__((__sfr__));

#define U1STAT U1STAT
extern volatile uint16_t U1STAT __attribute__((__sfr__));
__extension__ typedef struct tagU1STATBITS {
  union {
    struct {
      uint16_t :2;
      uint16_t PPBI:1;
      uint16_t DIR:1;
      uint16_t ENDPT:4;
    };
    struct {
      uint16_t :4;
      uint16_t ENDPT0:1;
      uint16_t ENDPT1:1;
      uint16_t ENDPT2:1;
      uint16_t ENDPT3:1;
    };
  };
} U1STATBITS;
extern volatile U1STATBITS U1STATbits __attribute__((__sfr__));

#define U1CON U1CON
extern volatile uint16_t U1CON __attribute__((__sfr__));
__extension__ typedef struct tagU1CONBITS {
  union {
    struct {
      uint16_t USBEN:1;
      uint16_t PPBRST:1;
      uint16_t RESUME:1;
      uint16_t HOSTEN:1;
      uint16_t USBRST:1;
      uint16_t PKTDIS:1;
      uint16_t SE0:1;
      uint16_t JSTATE:1;
    };
    struct {
      uint16_t SOFEN:1;
      uint16_t :3;
      uint16_t RESET:1;
      uint16_t TOKBUSY:1;
    };
  };
} U1CONBITS;
extern volatile U1CONBITS U1CONbits __attribute__((__sfr__));

#define U1ADDR U1ADDR
extern volatile uint16_t U1ADDR __attribute__((__sfr__));
__extension__ typedef struct tagU1ADDRBITS {
  union {
    struct {
      uint16_t DEVADDR:7;
      uint16_t LOWSPDEN:1;
    };
    struct {
      uint16_t DEVADDR0:1;
      uint16_t DEVADDR1:1;
      uint16_t DEVADDR2:1;
      uint16_t DEVADDR3:1;
      uint16_t DEVADDR4:1;
      uint16_t DEVADDR5:1;
      uint16_t DEVADDR6:1;
      uint16_t LSPDEN:1;
    };
  };
} U1ADDRBITS;
extern volatile U1ADDRBITS U1ADDRbits __attribute__((__sfr__));

#define U1BDTP1 U1BDTP1
extern volatile uint16_t U1BDTP1 __attribute__((__sfr__));
__extension__ typedef struct tagU1BDTP1BITS {
  union {
    struct {
      uint16_t :1;
      uint16_t BDTPTRL:7;
    };
    struct {
      uint16_t :1;
      uint16_t BDTPTRL0:1;
      uint16_t BDTPTRL1:1;
      uint16_t BDTPTRL2:1;
      uint16_t BDTPTRL3:1;
      uint16_t BDTPTRL4:1;
      uint16_t BDTPTRL5:1;
      uint16_t BDTPTRL6:1;
    };
  };
} U1BDTP1BITS;
extern volatile U1BDTP1BITS U1BDTP1bits __attribute__((__sfr__));

#define U1FRML U1FRML
extern volatile uint16_t U1FRML __attribute__((__sfr__));
typedef struct tagU1FRMLBITS {
  uint16_t FRM0:1;
  uint16_t FRM1:1;
  uint16_t FRM2:1;
  uint16_t FRM3:1;
  uint16_t FRM4:1;
  uint16_t FRM5:1;
  uint16_t FRM6:1;
  uint16_t FRM7:1;
} U1FRMLBITS;
extern volatile U1FRMLBITS U1FRMLbits __attribute__((__sfr__));

#define U1FRMH U1FRMH
extern volatile uint16_t U1FRMH __attribute__((__sfr__));
typedef struct tagU1FRMHBITS {
  uint16_t FRM8:1;
  uint16_t FRM9:1;
  uint16_t FRM10:1;
} U1FRMHBITS;
extern volatile U1FRMHBITS U1FRMHbits __attribute__((__sfr__));

#define U1TOK U1TOK
extern volatile uint16_t U1TOK __attribute__((__sfr__));
__extension__ typedef struct tagU1TOKBITS {
  union {
    struct {
      uint16_t EP:4;
      uint16_t PID:4;
    };
    struct {
      uint16_t EP0:1;
      uint16_t EP1:1;
      uint16_t EP2:1;
      uint16_t EP3:1;
      uint16_t PID0:1;
      uint16_t PID1:1;
      uint16_t PID2:1;
      uint16_t PID3:1;
    };
  };
} U1TOKBITS;
extern volatile U1TOKBITS U1TOKbits __attribute__((__sfr__));

#define U1SOF U1SOF
extern volatile uint16_t U1SOF __attribute__((__sfr__));
__extension__ typedef struct tagU1SOFBITS {
  union {
    struct {
      uint16_t CNT:8;
    };
    struct {
      uint16_t CNT0:1;
      uint16_t CNT1:1;
      uint16_t CNT2:1;
      uint16_t CNT3:1;
      uint16_t CNT4:1;
      uint16_t CNT5:1;
      uint16_t CNT6:1;
      uint16_t CNT7:1;
    };
  };
} U1SOFBITS;
extern volatile U1SOFBITS U1SOFbits __attribute__((__sfr__));

#define U1CNFG1 U1CNFG1
extern volatile uint16_t U1CNFG1 __attribute__((__sfr__));
__extension__ typedef struct tagU1CNFG1BITS {
  union {
    struct {
      uint16_t PPB:2;
      uint16_t :2;
      uint16_t USBSIDL:1;
      uint16_t :1;
      uint16_t UOEMON:1;
      uint16_t UTEYE:1;
    };
    struct {
      uint16_t PPB0:1;
      uint16_t PPB1:1;
    };
  };
} U1CNFG1BITS;
extern volatile U1CNFG1BITS U1CNFG1bits __attribute__((__sfr__));

#define U1CNFG2 U1CNFG2
extern volatile uint16_t U1CNFG2 __attribute__((__sfr__));
typedef struct tagU1CNFG2BITS {
  uint16_t UTRDIS:1;
  uint16_t UVCMPDIS:1;
  uint16_t UVBUSDIS:1;
  uint16_t EXTI2CEN:1;
  uint16_t PUVBUS:1;
  uint16_t UVCMPSEL:1;
} U1CNFG2BITS;
extern volatile U1CNFG2BITS U1CNFG2bits __attribute__((__sfr__));

#define U1EP0 U1EP0
extern volatile uint16_t U1EP0 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP0BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
      uint16_t :1;
      uint16_t RETRYDIS:1;
      uint16_t LSPD:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
      uint16_t :3;
      uint16_t LOWSPD:1;
    };
  };
} U1EP0BITS;
extern volatile U1EP0BITS U1EP0bits __attribute__((__sfr__));

#define U1EP1 U1EP1
extern volatile uint16_t U1EP1 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP1BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP1BITS;
extern volatile U1EP1BITS U1EP1bits __attribute__((__sfr__));

#define U1EP2 U1EP2
extern volatile uint16_t U1EP2 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP2BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP2BITS;
extern volatile U1EP2BITS U1EP2bits __attribute__((__sfr__));

#define U1EP3 U1EP3
extern volatile uint16_t U1EP3 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP3BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP3BITS;
extern volatile U1EP3BITS U1EP3bits __attribute__((__sfr__));

#define U1EP4 U1EP4
extern volatile uint16_t U1EP4 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP4BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP4BITS;
extern volatile U1EP4BITS U1EP4bits __attribute__((__sfr__));

#define U1EP5 U1EP5
extern volatile uint16_t U1EP5 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP5BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP5BITS;
extern volatile U1EP5BITS U1EP5bits __attribute__((__sfr__));

#define U1EP6 U1EP6
extern volatile uint16_t U1EP6 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP6BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP6BITS;
extern volatile U1EP6BITS U1EP6bits __attribute__((__sfr__));

#define U1EP7 U1EP7
extern volatile uint16_t U1EP7 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP7BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP7BITS;
extern volatile U1EP7BITS U1EP7bits __attribute__((__sfr__));

#define U1EP8 U1EP8
extern volatile uint16_t U1EP8 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP8BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP8BITS;
extern volatile U1EP8BITS U1EP8bits __attribute__((__sfr__));

#define U1EP9 U1EP9
extern volatile uint16_t U1EP9 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP9BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP9BITS;
extern volatile U1EP9BITS U1EP9bits __attribute__((__sfr__));

#define U1EP10 U1EP10
extern volatile uint16_t U1EP10 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP10BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP10BITS;
extern volatile U1EP10BITS U1EP10bits __attribute__((__sfr__));

#define U1EP11 U1EP11
extern volatile uint16_t U1EP11 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP11BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP11BITS;
extern volatile U1EP11BITS U1EP11bits __attribute__((__sfr__));

#define U1EP12 U1EP12
extern volatile uint16_t U1EP12 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP12BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP12BITS;
extern volatile U1EP12BITS U1EP12bits __attribute__((__sfr__));

#define U1EP13 U1EP13
extern volatile uint16_t U1EP13 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP13BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP13BITS;
extern volatile U1EP13BITS U1EP13bits __attribute__((__sfr__));

#define U1EP14 U1EP14
extern volatile uint16_t U1EP14 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP14BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP14BITS;
extern volatile U1EP14BITS U1EP14bits __attribute__((__sfr__));

#define U1EP15 U1EP15
extern volatile uint16_t U1EP15 __attribute__((__sfr__));
__extension__ typedef struct tagU1EP15BITS {
  union {
    struct {
      uint16_t EPHSHK:1;
      uint16_t EPSTALL:1;
      uint16_t EPTXEN:1;
      uint16_t EPRXEN:1;
      uint16_t EPCONDIS:1;
    };
    struct {
      uint16_t :2;
      uint16_t EPINEN:1;
      uint16_t EPOUTEN:1;
    };
  };
} U1EP15BITS;
extern volatile U1EP15BITS U1EP15bits __attribute__((__sfr__));

#define U1PWMRRS U1PWMRRS
extern volatile uint16_t U1PWMRRS __attribute__((__sfr__));
__extension__ typedef struct tagU1PWMRRSBITS {
  union {
    struct {
      uint16_t PER:8;
      uint16_t DC:8;
    };
    struct {
      uint16_t PER0:1;
      uint16_t PER1:1;
      uint16_t PER2:1;
      uint16_t PER3:1;
      uint16_t PER4:1;
      uint16_t PER5:1;
      uint16_t PER6:1;
      uint16_t PER7:1;
      uint16_t DC0:1;
      uint16_t DC1:1;
      uint16_t DC2:1;
      uint16_t DC3:1;
      uint16_t DC4:1;
      uint16_t DC5:1;
      uint16_t DC6:1;
      uint16_t DC7:1;
    };
    struct {
      uint16_t USBRS0:1;
      uint16_t USBRS1:1;
      uint16_t USBRS2:1;
      uint16_t USBRS3:1;
      uint16_t USBRS4:1;
      uint16_t USBRS5:1;
      uint16_t USBRS6:1;
      uint16_t USBRS7:1;
      uint16_t USBR0:1;
      uint16_t USBR1:1;
      uint16_t USBR2:1;
      uint16_t USBR3:1;
      uint16_t USBR4:1;
      uint16_t USBR5:1;
      uint16_t USBR6:1;
      uint16_t USBR7:1;
    };
    struct {
      uint16_t USBRS:8;
      uint16_t USBR:8;
    };
  };
} U1PWMRRSBITS;
extern volatile U1PWMRRSBITS U1PWMRRSbits __attribute__((__sfr__));

#define U1PWMCON U1PWMCON
extern volatile uint16_t U1PWMCON __attribute__((__sfr__));
typedef struct tagU1PWMCONBITS {
  uint16_t :8;
  uint16_t CNTEN:1;
  uint16_t PWMPOL:1;
  uint16_t :5;
  uint16_t PWMEN:1;
} U1PWMCONBITS;
extern volatile U1PWMCONBITS U1PWMCONbits __attribute__((__sfr__));

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
typedef struct tagANSBBITS {
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
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define ANSC ANSC
extern volatile uint16_t ANSC __attribute__((__sfr__));
typedef struct tagANSCBITS {
  uint16_t :13;
  uint16_t ANSC13:1;
  uint16_t ANSC14:1;
} ANSCBITS;
extern volatile ANSCBITS ANSCbits __attribute__((__sfr__));

#define ANSD ANSD
extern volatile uint16_t ANSD __attribute__((__sfr__));
typedef struct tagANSDBITS {
  uint16_t :6;
  uint16_t ANSD6:1;
  uint16_t ANSD7:1;
} ANSDBITS;
extern volatile ANSDBITS ANSDbits __attribute__((__sfr__));

#define ANSF ANSF
extern volatile uint16_t ANSF __attribute__((__sfr__));
typedef struct tagANSFBITS {
  uint16_t ANSF0:1;
} ANSFBITS;
extern volatile ANSFBITS ANSFbits __attribute__((__sfr__));

#define ANSG ANSG
extern volatile uint16_t ANSG __attribute__((__sfr__));
typedef struct tagANSGBITS {
  uint16_t :6;
  uint16_t ANSG6:1;
  uint16_t ANSG7:1;
  uint16_t ANSG8:1;
  uint16_t ANSG9:1;
} ANSGBITS;
extern volatile ANSGBITS ANSGbits __attribute__((__sfr__));

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
      uint16_t INT4R3:1;
      uint16_t INT4R4:1;
      uint16_t INT4R5:1;
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
      uint16_t :2;
      uint16_t IC8R:6;
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

#define RPINR15 RPINR15
extern volatile uint16_t RPINR15 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR15BITS {
  union {
    struct {
      uint16_t :8;
      uint16_t IC9R:6;
    };
    struct {
      uint16_t :8;
      uint16_t IC9R0:1;
      uint16_t IC9R1:1;
      uint16_t IC9R2:1;
      uint16_t IC9R3:1;
      uint16_t IC9R4:1;
      uint16_t IC9R5:1;
    };
  };
} RPINR15BITS;
extern volatile RPINR15BITS RPINR15bits __attribute__((__sfr__));

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
    };
    struct {
      uint16_t SS2R0:1;
      uint16_t SS2R1:1;
      uint16_t SS2R2:1;
      uint16_t SS2R3:1;
      uint16_t SS2R4:1;
      uint16_t SS2R5:1;
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

#define RPINR28 RPINR28
extern volatile uint16_t RPINR28 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR28BITS {
  union {
    struct {
      uint16_t SDI3R:6;
      uint16_t :2;
      uint16_t SCK3R:6;
    };
    struct {
      uint16_t SDI3R0:1;
      uint16_t SDI3R1:1;
      uint16_t SDI3R2:1;
      uint16_t SDI3R3:1;
      uint16_t SDI3R4:1;
      uint16_t SDI3R5:1;
      uint16_t :2;
      uint16_t SCK3R0:1;
      uint16_t SCK3R1:1;
      uint16_t SCK3R2:1;
      uint16_t SCK3R3:1;
      uint16_t SCK3R4:1;
      uint16_t SCK3R5:1;
    };
  };
} RPINR28BITS;
extern volatile RPINR28BITS RPINR28bits __attribute__((__sfr__));

#define RPINR29 RPINR29
extern volatile uint16_t RPINR29 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR29BITS {
  union {
    struct {
      uint16_t SS3R:6;
    };
    struct {
      uint16_t SS3R0:1;
      uint16_t SS3R1:1;
      uint16_t SS3R2:1;
      uint16_t SS3R3:1;
      uint16_t SS3R4:1;
      uint16_t SS3R5:1;
    };
  };
} RPINR29BITS;
extern volatile RPINR29BITS RPINR29bits __attribute__((__sfr__));

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

#define G1CMDL G1CMDL
extern volatile uint16_t G1CMDL __attribute__((__sfr__));
typedef struct tagG1CMDLBITS {
  uint16_t GCMD0:1;
  uint16_t GCMD1:1;
  uint16_t GCMD2:1;
  uint16_t GCMD3:1;
  uint16_t GCMD4:1;
  uint16_t GCMD5:1;
  uint16_t GCMD6:1;
  uint16_t GCMD7:1;
  uint16_t GCMD8:1;
  uint16_t GCMD9:1;
  uint16_t GCMD10:1;
  uint16_t GCMD11:1;
  uint16_t GCMD12:1;
  uint16_t GCMD13:1;
  uint16_t GCMD14:1;
  uint16_t GCMD15:1;
} G1CMDLBITS;
extern volatile G1CMDLBITS G1CMDLbits __attribute__((__sfr__));

#define G1CMDH G1CMDH
extern volatile uint16_t G1CMDH __attribute__((__sfr__));
typedef struct tagG1CMDHBITS {
  uint16_t GCMD16:1;
  uint16_t GCMD17:1;
  uint16_t GCMD18:1;
  uint16_t GCMD19:1;
  uint16_t GCMD20:1;
  uint16_t GCMD21:1;
  uint16_t GCMD22:1;
  uint16_t GCMD23:1;
  uint16_t GCMD24:1;
  uint16_t GCMD25:1;
  uint16_t GCMD26:1;
  uint16_t GCMD27:1;
  uint16_t GCMD28:1;
  uint16_t GCMD29:1;
  uint16_t GCMD30:1;
  uint16_t GCMD31:1;
} G1CMDHBITS;
extern volatile G1CMDHBITS G1CMDHbits __attribute__((__sfr__));

#define G1CON1 G1CON1
extern volatile uint16_t G1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagG1CON1BITS {
  union {
    struct {
      uint16_t GCMDCNT:5;
      uint16_t PUBPP:3;
      uint16_t GCMDWMK:5;
      uint16_t G1SIDL:1;
      uint16_t :1;
      uint16_t G1EN:1;
    };
    struct {
      uint16_t GCMDCNT0:1;
      uint16_t GCMDCNT1:1;
      uint16_t GCMDCNT2:1;
      uint16_t GCMDCNT3:1;
      uint16_t GCMDCNT4:1;
      uint16_t PUBPP0:1;
      uint16_t PUBPP1:1;
      uint16_t PUBPP2:1;
      uint16_t GCMDWMK0:1;
      uint16_t GCMDWMK1:1;
      uint16_t GCMDWMK2:1;
      uint16_t GCMDWMK3:1;
      uint16_t GCMDWMK4:1;
    };
  };
} G1CON1BITS;
extern volatile G1CON1BITS G1CON1bits __attribute__((__sfr__));

#define G1STAT G1STAT
extern volatile uint16_t G1STAT __attribute__((__sfr__));
typedef struct tagG1STATBITS {
  uint16_t CMDMPT:1;
  uint16_t CMDFUL:1;
  uint16_t CMDLV:1;
  uint16_t HMRGN:1;
  uint16_t VMRGN:1;
  uint16_t CHRBUSY:1;
  uint16_t RCCBUSY:1;
  uint16_t IPUBUSY:1;
  uint16_t :7;
  uint16_t PUBUSY:1;
} G1STATBITS;
extern volatile G1STATBITS G1STATbits __attribute__((__sfr__));

#define G1IE G1IE
extern volatile uint16_t G1IE __attribute__((__sfr__));
typedef struct tagG1IEBITS {
  uint16_t CMDMPTIE:1;
  uint16_t CMDFULIE:1;
  uint16_t CMDLVIE:1;
  uint16_t HMRGNIE:1;
  uint16_t VMRGNIE:1;
  uint16_t CHRIE:1;
  uint16_t RCCIE:1;
  uint16_t IPUIE:1;
  uint16_t :7;
  uint16_t PUIE:1;
} G1IEBITS;
extern volatile G1IEBITS G1IEbits __attribute__((__sfr__));

#define G1IR G1IR
extern volatile uint16_t G1IR __attribute__((__sfr__));
typedef struct tagG1IRBITS {
  uint16_t CMDMPTIF:1;
  uint16_t CMDFULIF:1;
  uint16_t CMDLVIF:1;
  uint16_t HMRGNIF:1;
  uint16_t VMRGNIF:1;
  uint16_t CHRIF:1;
  uint16_t RCCIF:1;
  uint16_t IPUIF:1;
  uint16_t :7;
  uint16_t PUIF:1;
} G1IRBITS;
extern volatile G1IRBITS G1IRbits __attribute__((__sfr__));

#define G1W1ADRL G1W1ADRL
extern volatile uint16_t G1W1ADRL __attribute__((__sfr__));
typedef struct tagG1W1ADRLBITS {
  uint16_t W1ADR0:1;
  uint16_t W1ADR1:1;
  uint16_t W1ADR2:1;
  uint16_t W1ADR3:1;
  uint16_t W1ADR4:1;
  uint16_t W1ADR5:1;
  uint16_t W1ADR6:1;
  uint16_t W1ADR7:1;
  uint16_t W1ADR8:1;
  uint16_t W1ADR9:1;
  uint16_t W1ADR10:1;
  uint16_t W1ADR11:1;
  uint16_t W1ADR12:1;
  uint16_t W1ADR13:1;
  uint16_t W1ADR14:1;
  uint16_t W1ADR15:1;
} G1W1ADRLBITS;
extern volatile G1W1ADRLBITS G1W1ADRLbits __attribute__((__sfr__));

#define G1W1ADRH G1W1ADRH
extern volatile uint16_t G1W1ADRH __attribute__((__sfr__));
typedef struct tagG1W1ADRHBITS {
  uint16_t W1ADR16:1;
  uint16_t W1ADR17:1;
  uint16_t W1ADR18:1;
  uint16_t W1ADR19:1;
  uint16_t W1ADR20:1;
  uint16_t W1ADR21:1;
  uint16_t W1ADR22:1;
  uint16_t W1ADR23:1;
} G1W1ADRHBITS;
extern volatile G1W1ADRHBITS G1W1ADRHbits __attribute__((__sfr__));

#define G1W2ADRL G1W2ADRL
extern volatile uint16_t G1W2ADRL __attribute__((__sfr__));
typedef struct tagG1W2ADRLBITS {
  uint16_t W2ADR0:1;
  uint16_t W2ADR1:1;
  uint16_t W2ADR2:1;
  uint16_t W2ADR3:1;
  uint16_t W2ADR4:1;
  uint16_t W2ADR5:1;
  uint16_t W2ADR6:1;
  uint16_t W2ADR7:1;
  uint16_t W2ADR8:1;
  uint16_t W2ADR9:1;
  uint16_t W2ADR10:1;
  uint16_t W2ADR11:1;
  uint16_t W2ADR12:1;
  uint16_t W2ADR13:1;
  uint16_t W2ADR14:1;
  uint16_t W2ADR15:1;
} G1W2ADRLBITS;
extern volatile G1W2ADRLBITS G1W2ADRLbits __attribute__((__sfr__));

#define G1W2ADRH G1W2ADRH
extern volatile uint16_t G1W2ADRH __attribute__((__sfr__));
typedef struct tagG1W2ADRHBITS {
  uint16_t W2ADR16:1;
  uint16_t W2ADR17:1;
  uint16_t W2ADR18:1;
  uint16_t W2ADR19:1;
  uint16_t W2ADR20:1;
  uint16_t W2ADR21:1;
  uint16_t W2ADR22:1;
  uint16_t W2ADR23:1;
} G1W2ADRHBITS;
extern volatile G1W2ADRHBITS G1W2ADRHbits __attribute__((__sfr__));

#define G1PUW G1PUW
extern volatile uint16_t G1PUW __attribute__((__sfr__));
__extension__ typedef struct tagG1PUWBITS {
  union {
    struct {
      uint16_t PUW:11;
    };
    struct {
      uint16_t PUW0:1;
      uint16_t PUW1:1;
      uint16_t PUW2:1;
      uint16_t PUW3:1;
      uint16_t PUW4:1;
      uint16_t PUW5:1;
      uint16_t PUW6:1;
      uint16_t PUW7:1;
      uint16_t PUW8:1;
      uint16_t PUW9:1;
      uint16_t PUW10:1;
    };
  };
} G1PUWBITS;
extern volatile G1PUWBITS G1PUWbits __attribute__((__sfr__));

#define G1PUH G1PUH
extern volatile uint16_t G1PUH __attribute__((__sfr__));
__extension__ typedef struct tagG1PUHBITS {
  union {
    struct {
      uint16_t PUH:11;
    };
    struct {
      uint16_t PUH0:1;
      uint16_t PUH1:1;
      uint16_t PUH2:1;
      uint16_t PUH3:1;
      uint16_t PUH4:1;
      uint16_t PUH5:1;
      uint16_t PUH6:1;
      uint16_t PUH7:1;
      uint16_t PUH8:1;
      uint16_t PUH9:1;
      uint16_t PUH10:1;
    };
  };
} G1PUHBITS;
extern volatile G1PUHBITS G1PUHbits __attribute__((__sfr__));

#define G1DPADRL G1DPADRL
extern volatile uint16_t G1DPADRL __attribute__((__sfr__));
typedef struct tagG1DPADRLBITS {
  uint16_t DPADR0:1;
  uint16_t DPADR1:1;
  uint16_t DPADR2:1;
  uint16_t DPADR3:1;
  uint16_t DPADR4:1;
  uint16_t DPADR5:1;
  uint16_t DPADR6:1;
  uint16_t DPADR7:1;
  uint16_t DPADR8:1;
  uint16_t DPADR9:1;
  uint16_t DPADR10:1;
  uint16_t DPADR11:1;
  uint16_t DPADR12:1;
  uint16_t DPADR13:1;
  uint16_t DPADR14:1;
  uint16_t DPADR15:1;
} G1DPADRLBITS;
extern volatile G1DPADRLBITS G1DPADRLbits __attribute__((__sfr__));

#define G1DPADRH G1DPADRH
extern volatile uint16_t G1DPADRH __attribute__((__sfr__));
typedef struct tagG1DPADRHBITS {
  uint16_t DPADR16:1;
  uint16_t DPADR17:1;
  uint16_t DPADR18:1;
  uint16_t DPADR19:1;
  uint16_t DPADR20:1;
  uint16_t DPADR21:1;
  uint16_t DPADR22:1;
  uint16_t DPADR23:1;
} G1DPADRHBITS;
extern volatile G1DPADRHBITS G1DPADRHbits __attribute__((__sfr__));

#define G1DPW G1DPW
extern volatile uint16_t G1DPW __attribute__((__sfr__));
__extension__ typedef struct tagG1DPWBITS {
  union {
    struct {
      uint16_t DPW:11;
    };
    struct {
      uint16_t DPW0:1;
      uint16_t DPW1:1;
      uint16_t DPW2:1;
      uint16_t DPW3:1;
      uint16_t DPW4:1;
      uint16_t DPW5:1;
      uint16_t DPW6:1;
      uint16_t DPW7:1;
      uint16_t DPW8:1;
      uint16_t DPW9:1;
      uint16_t DPW10:1;
    };
  };
} G1DPWBITS;
extern volatile G1DPWBITS G1DPWbits __attribute__((__sfr__));

#define G1DPH G1DPH
extern volatile uint16_t G1DPH __attribute__((__sfr__));
__extension__ typedef struct tagG1DPHBITS {
  union {
    struct {
      uint16_t DPH:11;
    };
    struct {
      uint16_t DPH0:1;
      uint16_t DPH1:1;
      uint16_t DPH2:1;
      uint16_t DPH3:1;
      uint16_t DPH4:1;
      uint16_t DPH5:1;
      uint16_t DPH6:1;
      uint16_t DPH7:1;
      uint16_t DPH8:1;
      uint16_t DPH9:1;
      uint16_t DPH10:1;
    };
  };
} G1DPHBITS;
extern volatile G1DPHBITS G1DPHbits __attribute__((__sfr__));

#define G1DPWT G1DPWT
extern volatile uint16_t G1DPWT __attribute__((__sfr__));
__extension__ typedef struct tagG1DPWTBITS {
  union {
    struct {
      uint16_t DPWT:11;
    };
    struct {
      uint16_t DPWT0:1;
      uint16_t DPWT1:1;
      uint16_t DPWT2:1;
      uint16_t DPWT3:1;
      uint16_t DPWT4:1;
      uint16_t DPWT5:1;
      uint16_t DPWT6:1;
      uint16_t DPWT7:1;
      uint16_t DPWT8:1;
      uint16_t DPWT9:1;
      uint16_t DPWT10:1;
    };
  };
} G1DPWTBITS;
extern volatile G1DPWTBITS G1DPWTbits __attribute__((__sfr__));

#define G1DPHT G1DPHT
extern volatile uint16_t G1DPHT __attribute__((__sfr__));
__extension__ typedef struct tagG1DPHTBITS {
  union {
    struct {
      uint16_t DPHT:11;
    };
    struct {
      uint16_t DPHT0:1;
      uint16_t DPHT1:1;
      uint16_t DPHT2:1;
      uint16_t DPHT3:1;
      uint16_t DPHT4:1;
      uint16_t DPHT5:1;
      uint16_t DPHT6:1;
      uint16_t DPHT7:1;
      uint16_t DPHT8:1;
      uint16_t DPHT9:1;
      uint16_t DPHT10:1;
    };
  };
} G1DPHTBITS;
extern volatile G1DPHTBITS G1DPHTbits __attribute__((__sfr__));

#define G1CON2 G1CON2
extern volatile uint16_t G1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagG1CON2BITS {
  union {
    struct {
      uint16_t DPMODE:3;
      uint16_t :2;
      uint16_t DPBPP:3;
      uint16_t DPTEST:2;
      uint16_t :2;
      uint16_t DPSTGER:2;
      uint16_t DPGWDTH:2;
    };
    struct {
      uint16_t DPMODE0:1;
      uint16_t DPMODE1:1;
      uint16_t DPMODE2:1;
      uint16_t :2;
      uint16_t DPBPP0:1;
      uint16_t DPBPP1:1;
      uint16_t DPBPP2:1;
      uint16_t DPTEST0:1;
      uint16_t DPTEST1:1;
      uint16_t :2;
      uint16_t DPSTGER0:1;
      uint16_t DPSTGER1:1;
      uint16_t DPGWDTH0:1;
      uint16_t DPGWDTH1:1;
    };
  };
} G1CON2BITS;
extern volatile G1CON2BITS G1CON2bits __attribute__((__sfr__));

#define G1CON3 G1CON3
extern volatile uint16_t G1CON3 __attribute__((__sfr__));
typedef struct tagG1CON3BITS {
  uint16_t DPHSOE:1;
  uint16_t DPVSOE:1;
  uint16_t DPENOE:1;
  uint16_t DPPWROE:1;
  uint16_t DPHSPOL:1;
  uint16_t DPVSPOL:1;
  uint16_t DPENPOL:1;
  uint16_t DPCLKPOL:1;
  uint16_t DPPOWER:1;
  uint16_t DPPINOE:1;
} G1CON3BITS;
extern volatile G1CON3BITS G1CON3bits __attribute__((__sfr__));

#define G1ACTDA G1ACTDA
extern volatile uint16_t G1ACTDA __attribute__((__sfr__));
__extension__ typedef struct tagG1ACTDABITS {
  union {
    struct {
      uint16_t ACTPIX:8;
      uint16_t ACTLINE:8;
    };
    struct {
      uint16_t ACTPIX0:1;
      uint16_t ACTPIX1:1;
      uint16_t ACTPIX2:1;
      uint16_t ACTPIX3:1;
      uint16_t ACTPIX4:1;
      uint16_t ACTPIX5:1;
      uint16_t ACTPIX6:1;
      uint16_t ACTPIX7:1;
      uint16_t ACTLINE0:1;
      uint16_t ACTLINE1:1;
      uint16_t ACTLINE2:1;
      uint16_t ACTLINE3:1;
      uint16_t ACTLINE4:1;
      uint16_t ACTLINE5:1;
      uint16_t ACTLINE6:1;
      uint16_t ACTLINE7:1;
    };
  };
} G1ACTDABITS;
extern volatile G1ACTDABITS G1ACTDAbits __attribute__((__sfr__));

#define G1HSYNC G1HSYNC
extern volatile uint16_t G1HSYNC __attribute__((__sfr__));
__extension__ typedef struct tagG1HSYNCBITS {
  union {
    struct {
      uint16_t HSST:8;
      uint16_t HSLEN:8;
    };
    struct {
      uint16_t HSST0:1;
      uint16_t HSST1:1;
      uint16_t HSST2:1;
      uint16_t HSST3:1;
      uint16_t HSST4:1;
      uint16_t HSST5:1;
      uint16_t HSST6:1;
      uint16_t HSST7:1;
      uint16_t HSLEN0:1;
      uint16_t HSLEN1:1;
      uint16_t HSLEN2:1;
      uint16_t HSLEN3:1;
      uint16_t HSLEN4:1;
      uint16_t HSLEN5:1;
      uint16_t HSLEN6:1;
      uint16_t HSLEN7:1;
    };
  };
} G1HSYNCBITS;
extern volatile G1HSYNCBITS G1HSYNCbits __attribute__((__sfr__));

#define G1VSYNC G1VSYNC
extern volatile uint16_t G1VSYNC __attribute__((__sfr__));
__extension__ typedef struct tagG1VSYNCBITS {
  union {
    struct {
      uint16_t VSST:8;
      uint16_t VSLEN:8;
    };
    struct {
      uint16_t VSST0:1;
      uint16_t VSST1:1;
      uint16_t VSST2:1;
      uint16_t VSST3:1;
      uint16_t VSST4:1;
      uint16_t VSST5:1;
      uint16_t VSST6:1;
      uint16_t VSST7:1;
      uint16_t VSLEN0:1;
      uint16_t VSLEN1:1;
      uint16_t VSLEN2:1;
      uint16_t VSLEN3:1;
      uint16_t VSLEN4:1;
      uint16_t VSLEN5:1;
      uint16_t VSLEN6:1;
      uint16_t VSLEN7:1;
    };
  };
} G1VSYNCBITS;
extern volatile G1VSYNCBITS G1VSYNCbits __attribute__((__sfr__));

#define G1DBLCON G1DBLCON
extern volatile uint16_t G1DBLCON __attribute__((__sfr__));
__extension__ typedef struct tagG1DBLCONBITS {
  union {
    struct {
      uint16_t HENST:8;
      uint16_t VENST:8;
    };
    struct {
      uint16_t HENST0:1;
      uint16_t HENST1:1;
      uint16_t HENST2:1;
      uint16_t HENST3:1;
      uint16_t HENST4:1;
      uint16_t HENST5:1;
      uint16_t HENST6:1;
      uint16_t HENST7:1;
      uint16_t VENST0:1;
      uint16_t VENST1:1;
      uint16_t VENST2:1;
      uint16_t VENST3:1;
      uint16_t VENST4:1;
      uint16_t VENST5:1;
      uint16_t VENST6:1;
      uint16_t VENST7:1;
    };
  };
} G1DBLCONBITS;
extern volatile G1DBLCONBITS G1DBLCONbits __attribute__((__sfr__));

#define G1CLUT G1CLUT
extern volatile uint16_t G1CLUT __attribute__((__sfr__));
__extension__ typedef struct tagG1CLUTBITS {
  union {
    struct {
      uint16_t CLUTADR:8;
      uint16_t CLUTRWEN:1;
      uint16_t CLUTTRD:1;
      uint16_t :4;
      uint16_t CLUTBUSY:1;
      uint16_t CLUTEN:1;
    };
    struct {
      uint16_t CLUTADR0:1;
      uint16_t CLUTADR1:1;
      uint16_t CLUTADR2:1;
      uint16_t CLUTADR3:1;
      uint16_t CLUTADR4:1;
      uint16_t CLUTADR5:1;
      uint16_t CLUTADR6:1;
      uint16_t CLUTADR7:1;
    };
  };
} G1CLUTBITS;
extern volatile G1CLUTBITS G1CLUTbits __attribute__((__sfr__));

#define G1CLUTWR G1CLUTWR
extern volatile uint16_t G1CLUTWR __attribute__((__sfr__));
__extension__ typedef struct tagG1CLUTWRBITS {
  union {
    struct {
      uint16_t CLUTWR:16;
    };
    struct {
      uint16_t CLUTWR0:1;
      uint16_t CLUTWR1:1;
      uint16_t CLUTWR2:1;
      uint16_t CLUTWR3:1;
      uint16_t CLUTWR4:1;
      uint16_t CLUTWR5:1;
      uint16_t CLUTWR6:1;
      uint16_t CLUTWR7:1;
      uint16_t CLUTWR8:1;
      uint16_t CLUTWR9:1;
      uint16_t CLUTWR10:1;
      uint16_t CLUTWR11:1;
      uint16_t CLUTWR12:1;
      uint16_t CLUTWR13:1;
      uint16_t CLUTWR14:1;
      uint16_t CLUTWR15:1;
    };
  };
} G1CLUTWRBITS;
extern volatile G1CLUTWRBITS G1CLUTWRbits __attribute__((__sfr__));

#define G1CLUTRD G1CLUTRD
extern volatile uint16_t G1CLUTRD __attribute__((__sfr__));
__extension__ typedef struct tagG1CLUTRDBITS {
  union {
    struct {
      uint16_t CLUTRD:16;
    };
    struct {
      uint16_t CLUTRD0:1;
      uint16_t CLUTRD1:1;
      uint16_t CLUTRD2:1;
      uint16_t CLUTRD3:1;
      uint16_t CLUTRD4:1;
      uint16_t CLUTRD5:1;
      uint16_t CLUTRD6:1;
      uint16_t CLUTRD7:1;
      uint16_t CLUTRD8:1;
      uint16_t CLUTRD9:1;
      uint16_t CLUTRD10:1;
      uint16_t CLUTRD11:1;
      uint16_t CLUTRD12:1;
      uint16_t CLUTRD13:1;
      uint16_t CLUTRD14:1;
      uint16_t CLUTRD15:1;
    };
  };
} G1CLUTRDBITS;
extern volatile G1CLUTRDBITS G1CLUTRDbits __attribute__((__sfr__));

#define G1MRGN G1MRGN
extern volatile uint16_t G1MRGN __attribute__((__sfr__));
__extension__ typedef struct tagG1MRGNBITS {
  union {
    struct {
      uint16_t HBAMGN:8;
      uint16_t VBAMGN:8;
    };
    struct {
      uint16_t HBAMGN0:1;
      uint16_t HBAMGN1:1;
      uint16_t HBAMGN2:1;
      uint16_t HBAMGN3:1;
      uint16_t HBAMGN4:1;
      uint16_t HBAMGN5:1;
      uint16_t HBAMGN6:1;
      uint16_t HBAMGN7:1;
      uint16_t VBAMGN0:1;
      uint16_t VBAMGN1:1;
      uint16_t VBAMGN2:1;
      uint16_t VBAMGN3:1;
      uint16_t VBAMGN4:1;
      uint16_t VBAMGN5:1;
      uint16_t VBAMGN6:1;
      uint16_t VBAMGN7:1;
    };
  };
} G1MRGNBITS;
extern volatile G1MRGNBITS G1MRGNbits __attribute__((__sfr__));

#define G1CHRX G1CHRX
extern volatile uint16_t G1CHRX __attribute__((__sfr__));
__extension__ typedef struct tagG1CHRXBITS {
  union {
    struct {
      uint16_t CURPOSX:11;
    };
    struct {
      uint16_t CURPOSX0:1;
      uint16_t CURPOSX1:1;
      uint16_t CURPOSX2:1;
      uint16_t CURPOSX3:1;
      uint16_t CURPOSX4:1;
      uint16_t CURPOSX5:1;
      uint16_t CURPOSX6:1;
      uint16_t CURPOSX7:1;
      uint16_t CURPOSX8:1;
      uint16_t CURPOSX9:1;
      uint16_t CURPOSX10:1;
    };
  };
} G1CHRXBITS;
extern volatile G1CHRXBITS G1CHRXbits __attribute__((__sfr__));

#define G1CHRY G1CHRY
extern volatile uint16_t G1CHRY __attribute__((__sfr__));
__extension__ typedef struct tagG1CHRYBITS {
  union {
    struct {
      uint16_t CURPOSY:11;
    };
    struct {
      uint16_t CURPOSY0:1;
      uint16_t CURPOSY1:1;
      uint16_t CURPOSY2:1;
      uint16_t CURPOSY3:1;
      uint16_t CURPOSY4:1;
      uint16_t CURPOSY5:1;
      uint16_t CURPOSY6:1;
      uint16_t CURPOSY7:1;
      uint16_t CURPOSY8:1;
      uint16_t CURPOSY9:1;
      uint16_t CURPOSY10:1;
    };
  };
} G1CHRYBITS;
extern volatile G1CHRYBITS G1CHRYbits __attribute__((__sfr__));

#define G1IPU G1IPU
extern volatile uint16_t G1IPU __attribute__((__sfr__));
typedef struct tagG1IPUBITS {
  uint16_t BFINAL:1;
  uint16_t IPUDONE:1;
  uint16_t WRAPERR:1;
  uint16_t LENERR:1;
  uint16_t BLCKERR:1;
  uint16_t HUFFERR:1;
} G1IPUBITS;
extern volatile G1IPUBITS G1IPUbits __attribute__((__sfr__));

#define G1DBEN G1DBEN
extern volatile uint16_t G1DBEN __attribute__((__sfr__));
__extension__ typedef struct tagG1DBENBITS {
  union {
    struct {
      uint16_t GDBEN:16;
    };
    struct {
      uint16_t GDBEN0:1;
      uint16_t GDBEN1:1;
      uint16_t GDBEN2:1;
      uint16_t GDBEN3:1;
      uint16_t GDBEN4:1;
      uint16_t GDBEN5:1;
      uint16_t GDBEN6:1;
      uint16_t GDBEN7:1;
      uint16_t GDBEN8:1;
      uint16_t GDBEN9:1;
      uint16_t GDBEN10:1;
      uint16_t GDBEN11:1;
      uint16_t GDBEN12:1;
      uint16_t GDBEN13:1;
      uint16_t GDBEN14:1;
      uint16_t GDBEN15:1;
    };
  };
} G1DBENBITS;
extern volatile G1DBENBITS G1DBENbits __attribute__((__sfr__));

#define RCON RCON
extern volatile uint16_t RCON __attribute__((__sfr__));
__extension__ typedef struct tagRCONBITS {
  union {
    struct {
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
    };
    struct {
      uint16_t :8;
      uint16_t PMSLP:1;
    };
  };
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
      uint16_t :1;
      uint16_t LPOSCEN:1;
      uint16_t :6;
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
      uint16_t :4;
      uint16_t G1CLKSEL:1;
      uint16_t PLLEN:1;
      uint16_t CPDIV:2;
      uint16_t RCDIV:3;
      uint16_t DOZEN:1;
      uint16_t DOZE:3;
      uint16_t ROI:1;
    };
    struct {
      uint16_t :6;
      uint16_t CPDIV0:1;
      uint16_t CPDIV1:1;
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

#define CLKDIV2 CLKDIV2
extern volatile uint16_t CLKDIV2 __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIV2BITS {
  union {
    struct {
      uint16_t :9;
      uint16_t GCLKDIV:7;
    };
    struct {
      uint16_t :9;
      uint16_t GCLKDIV0:1;
      uint16_t GCLKDIV1:1;
      uint16_t GCLKDIV2:1;
      uint16_t GCLKDIV3:1;
      uint16_t GCLKDIV4:1;
      uint16_t GCLKDIV5:1;
      uint16_t GCLKDIV6:1;
    };
  };
} CLKDIV2BITS;
extern volatile CLKDIV2BITS CLKDIV2bits __attribute__((__sfr__));

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
  uint16_t OC8MD:1;
  uint16_t IC1MD:1;
  uint16_t IC2MD:1;
  uint16_t IC3MD:1;
  uint16_t IC4MD:1;
  uint16_t IC5MD:1;
  uint16_t IC6MD:1;
  uint16_t IC7MD:1;
  uint16_t IC8MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile uint16_t PMD3 __attribute__((__sfr__));
__extension__ typedef struct tagPMD3BITS {
  union {
    struct {
      uint16_t :1;
      uint16_t I2C2MD:1;
      uint16_t I2C3MD:1;
      uint16_t U3MD:1;
      uint16_t :3;
      uint16_t CRCMD:1;
      uint16_t :1;
      uint16_t RTCCMD:1;
      uint16_t CMPMD:1;
    };
    struct {
      uint16_t :7;
      uint16_t CRCPMD:1;
    };
  };
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile uint16_t PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  uint16_t USB1MD:1;
  uint16_t LVDMD:1;
  uint16_t CTMUMD:1;
  uint16_t REFOMD:1;
  uint16_t :1;
  uint16_t U4MD:1;
  uint16_t UPWMMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD5 PMD5
extern volatile uint16_t PMD5 __attribute__((__sfr__));
typedef struct tagPMD5BITS {
  uint16_t OC9MD:1;
  uint16_t :7;
  uint16_t IC9MD:1;
} PMD5BITS;
extern volatile PMD5BITS PMD5bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile uint16_t PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  uint16_t SPI3MD:1;
  uint16_t :5;
  uint16_t GFX1MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));



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
/* Bitname _DC cannot be defined because it is used by more than one SFR */
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IPL3 CORCONbits.IPL3

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
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
#define _CN71PDE CNPD5bits.CN71PDE

/* CNPD6 */
#define _CN83PDE CNPD6bits.CN83PDE
#define _CN84PDE CNPD6bits.CN84PDE

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
#define _CN71IE CNEN5bits.CN71IE

/* CNEN6 */
#define _CN83IE CNEN6bits.CN83IE
#define _CN84IE CNEN6bits.CN84IE

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
#define _CN71PUE CNPU5bits.CN71PUE

/* CNPU6 */
#define _CN83PUE CNPU6bits.CN83PUE
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
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPF1IF IFS0bits.SPF1IF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _IC7IF IFS1bits.IC7IF
#define _IC8IF IFS1bits.IC8IF
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
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF
#define _IC5IF IFS2bits.IC5IF
#define _IC6IF IFS2bits.IC6IF
#define _OC5IF IFS2bits.OC5IF
#define _OC6IF IFS2bits.OC6IF
#define _OC7IF IFS2bits.OC7IF
#define _OC8IF IFS2bits.OC8IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _INT3IF IFS3bits.INT3IF
#define _INT4IF IFS3bits.INT4IF
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
#define _SI2C3IF IFS5bits.SI2C3IF
#define _MI2C3IF IFS5bits.MI2C3IF
#define _USB1IF IFS5bits.USB1IF
#define _U4ERIF IFS5bits.U4ERIF
#define _U4RXIF IFS5bits.U4RXIF
#define _U4TXIF IFS5bits.U4TXIF
#define _SPF3IF IFS5bits.SPF3IF
#define _SPI3IF IFS5bits.SPI3IF
#define _OC9IF IFS5bits.OC9IF
#define _IC9IF IFS5bits.IC9IF

/* IFS6 */
#define _GFX1IF IFS6bits.GFX1IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPF1IE IEC0bits.SPF1IE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _IC7IE IEC1bits.IC7IE
#define _IC8IE IEC1bits.IC8IE
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
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE
#define _IC5IE IEC2bits.IC5IE
#define _IC6IE IEC2bits.IC6IE
#define _OC5IE IEC2bits.OC5IE
#define _OC6IE IEC2bits.OC6IE
#define _OC7IE IEC2bits.OC7IE
#define _OC8IE IEC2bits.OC8IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _INT3IE IEC3bits.INT3IE
#define _INT4IE IEC3bits.INT4IE
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
#define _SI2C3IE IEC5bits.SI2C3IE
#define _MI2C3IE IEC5bits.MI2C3IE
#define _USB1IE IEC5bits.USB1IE
#define _U4ERIE IEC5bits.U4ERIE
#define _U4RXIE IEC5bits.U4RXIE
#define _U4TXIE IEC5bits.U4TXIE
#define _SPF3IE IEC5bits.SPF3IE
#define _SPI3IE IEC5bits.SPI3IE
#define _OC9IE IEC5bits.OC9IE
#define _IC9IE IEC5bits.IC9IE

/* IEC6 */
#define _GFX1IE IEC6bits.GFX1IE

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
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2

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
#define _IC8IP IPC5bits.IC8IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _IC7IP0 IPC5bits.IC7IP0
#define _IC7IP1 IPC5bits.IC7IP1
#define _IC7IP2 IPC5bits.IC7IP2
#define _IC8IP0 IPC5bits.IC8IP0
#define _IC8IP1 IPC5bits.IC8IP1
#define _IC8IP2 IPC5bits.IC8IP2

/* IPC6 */
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
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
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC5IP IPC9bits.IC5IP
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
#define _OC8IP IPC11bits.OC8IP
#define _OC8IP0 IPC11bits.OC8IP0
#define _OC8IP1 IPC11bits.OC8IP1
#define _OC8IP2 IPC11bits.OC8IP2

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
#define _RTCIP IPC15bits.RTCIP
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
#define _SI2C3IP IPC21bits.SI2C3IP
#define _MI2C3IP IPC21bits.MI2C3IP
#define _USB1IP IPC21bits.USB1IP
#define _U4ERIP IPC21bits.U4ERIP
#define _SI2C3IP0 IPC21bits.SI2C3IP0
#define _SI2C3IP1 IPC21bits.SI2C3IP1
#define _SI2C3IP2 IPC21bits.SI2C3IP2
#define _MI2C3IP0 IPC21bits.MI2C3IP0
#define _MI2C3IP1 IPC21bits.MI2C3IP1
#define _MI2C3IP2 IPC21bits.MI2C3IP2
#define _USB1IP0 IPC21bits.USB1IP0
#define _USB1IP1 IPC21bits.USB1IP1
#define _USB1IP2 IPC21bits.USB1IP2
#define _U4ERIP0 IPC21bits.U4ERIP0
#define _U4ERIP1 IPC21bits.U4ERIP1
#define _U4ERIP2 IPC21bits.U4ERIP2
#define _SI2C3P0 IPC21bits.SI2C3P0
#define _SI2C3P1 IPC21bits.SI2C3P1
#define _SI2C3P2 IPC21bits.SI2C3P2
#define _MI2C3P0 IPC21bits.MI2C3P0
#define _MI2C3P1 IPC21bits.MI2C3P1
#define _MI2C3P2 IPC21bits.MI2C3P2
#define _SI2C3P IPC21bits.SI2C3P
#define _MI2C3P IPC21bits.MI2C3P

/* IPC22 */
#define _U4RXIP IPC22bits.U4RXIP
#define _U4TXIP IPC22bits.U4TXIP
#define _SPF3IP IPC22bits.SPF3IP
#define _SPI3IP IPC22bits.SPI3IP
#define _U4RXIP0 IPC22bits.U4RXIP0
#define _U4RXIP1 IPC22bits.U4RXIP1
#define _U4RXIP2 IPC22bits.U4RXIP2
#define _U4TXIP0 IPC22bits.U4TXIP0
#define _U4TXIP1 IPC22bits.U4TXIP1
#define _U4TXIP2 IPC22bits.U4TXIP2
#define _SPF3IP0 IPC22bits.SPF3IP0
#define _SPF3IP1 IPC22bits.SPF3IP1
#define _SPF3IP2 IPC22bits.SPF3IP2
#define _SPI3IP0 IPC22bits.SPI3IP0
#define _SPI3IP1 IPC22bits.SPI3IP1
#define _SPI3IP2 IPC22bits.SPI3IP2

/* IPC23 */
#define _OC9IP IPC23bits.OC9IP
#define _IC9IP IPC23bits.IC9IP
#define _OC9IP0 IPC23bits.OC9IP0
#define _OC9IP1 IPC23bits.OC9IP1
#define _OC9IP2 IPC23bits.OC9IP2
#define _IC9IP0 IPC23bits.IC9IP0
#define _IC9IP1 IPC23bits.IC9IP1
#define _IC9IP2 IPC23bits.IC9IP2

/* IPC25 */
#define _GFX1IP IPC25bits.GFX1IP
#define _GFX1IP0 IPC25bits.GFX1IP0
#define _GFX1IP1 IPC25bits.GFX1IP1
#define _GFX1IP2 IPC25bits.GFX1IP2

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
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1

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

/* IC8CON1 */
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

/* IC8CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC9CON1 */
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

/* IC9CON2 */
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

/* OC8CON1 */
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

/* OC8CON2 */
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

/* OC9CON1 */
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

/* OC9CON2 */
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

/* I2C1STAT */
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

/* SPI1CON1 */
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

/* SPI1CON2 */
/* Bitname _SPIBEN cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFE cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

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

/* I2C3CON */
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

/* I2C3STAT */
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

/* SPI3STAT */
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

/* SPI3CON1 */
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

/* SPI3CON2 */
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
#define _TRISC13 TRISCbits.TRISC13
#define _TRISC14 TRISCbits.TRISC14
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
#define _TRISF3 TRISFbits.TRISF3
#define _TRISF4 TRISFbits.TRISF4
#define _TRISF5 TRISFbits.TRISF5
#define _TRISF7 TRISFbits.TRISF7

/* PORTF */
#define _RF0 PORTFbits.RF0
#define _RF1 PORTFbits.RF1
#define _RF3 PORTFbits.RF3
#define _RF4 PORTFbits.RF4
#define _RF5 PORTFbits.RF5
#define _RF7 PORTFbits.RF7

/* LATF */
#define _LATF0 LATFbits.LATF0
#define _LATF1 LATFbits.LATF1
#define _LATF3 LATFbits.LATF3
#define _LATF4 LATFbits.LATF4
#define _LATF5 LATFbits.LATF5
#define _LATF7 LATFbits.LATF7

/* ODCF */
#define _ODF0 ODCFbits.ODF0
#define _ODF1 ODCFbits.ODF1
#define _ODF3 ODCFbits.ODF3
#define _ODF4 ODCFbits.ODF4
#define _ODF5 ODCFbits.ODF5
#define _ODF7 ODCFbits.ODF7

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
#define _RTSECSEL PADCFG1bits.RTSECSEL
#define _RTSECSEL0 PADCFG1bits.RTSECSEL0

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CSCNA AD1CON2bits.CSCNA
#define _VCFG AD1CON2bits.VCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _SMPI4 AD1CON2bits.SMPI4
#define _VCFG0 AD1CON2bits.VCFG0
#define _VCFG1 AD1CON2bits.VCFG1
#define _VCFG2 AD1CON2bits.VCFG2

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
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
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3
#define _CH0SB4 AD1CHSbits.CH0SB4

/* AD1CSSH */
#define _CSSL24 AD1CSSHbits.CSSL24
#define _CSSL25 AD1CSSHbits.CSSL25
#define _CSSL26 AD1CSSHbits.CSSL26
#define _CSSL27 AD1CSSHbits.CSSL27

/* AD1CSSL */
#define _CSSL0 AD1CSSLbits.CSSL0
#define _CSSL1 AD1CSSLbits.CSSL1
#define _CSSL2 AD1CSSLbits.CSSL2
#define _CSSL3 AD1CSSLbits.CSSL3
#define _CSSL4 AD1CSSLbits.CSSL4
#define _CSSL5 AD1CSSLbits.CSSL5
#define _CSSL6 AD1CSSLbits.CSSL6
#define _CSSL7 AD1CSSLbits.CSSL7
#define _CSSL8 AD1CSSLbits.CSSL8
#define _CSSL9 AD1CSSLbits.CSSL9
#define _CSSL10 AD1CSSLbits.CSSL10
#define _CSSL11 AD1CSSLbits.CSSL11
#define _CSSL12 AD1CSSLbits.CSSL12
#define _CSSL13 AD1CSSLbits.CSSL13
#define _CSSL14 AD1CSSLbits.CSSL14
#define _CSSL15 AD1CSSLbits.CSSL15

/* CTMUCON */
#define _EDG1STAT CTMUCONbits.EDG1STAT
#define _EDG2STAT CTMUCONbits.EDG2STAT
#define _EDG1SEL CTMUCONbits.EDG1SEL
#define _EDG1POL CTMUCONbits.EDG1POL
#define _EDG2SEL CTMUCONbits.EDG2SEL
#define _EDG2POL CTMUCONbits.EDG2POL
#define _CTTRIG CTMUCONbits.CTTRIG
#define _IDISSEN CTMUCONbits.IDISSEN
#define _EDGSEQEN CTMUCONbits.EDGSEQEN
#define _EDGEN CTMUCONbits.EDGEN
#define _TGEN CTMUCONbits.TGEN
#define _CTMUSIDL CTMUCONbits.CTMUSIDL
#define _CTMUEN CTMUCONbits.CTMUEN
#define _EDG1SEL0 CTMUCONbits.EDG1SEL0
#define _EDG1SEL1 CTMUCONbits.EDG1SEL1
#define _EDG2SEL0 CTMUCONbits.EDG2SEL0
#define _EDG2SEL1 CTMUCONbits.EDG2SEL1

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

/* U1OTGIR */
#define _VBUSVDIF U1OTGIRbits.VBUSVDIF
#define _SESENDIF U1OTGIRbits.SESENDIF
#define _SESVDIF U1OTGIRbits.SESVDIF
#define _ACTVIF U1OTGIRbits.ACTVIF
#define _LSTATEIF U1OTGIRbits.LSTATEIF
#define _T1MSECIF U1OTGIRbits.T1MSECIF
#define _IDIF U1OTGIRbits.IDIF

/* U1OTGIE */
#define _VBUSVDIE U1OTGIEbits.VBUSVDIE
#define _SESENDIE U1OTGIEbits.SESENDIE
#define _SESVDIE U1OTGIEbits.SESVDIE
#define _ACTVIE U1OTGIEbits.ACTVIE
#define _LSTATEIE U1OTGIEbits.LSTATEIE
#define _T1MSECIE U1OTGIEbits.T1MSECIE
#define _IDIE U1OTGIEbits.IDIE

/* U1OTGSTAT */
#define _VBUSVD U1OTGSTATbits.VBUSVD
#define _SESEND U1OTGSTATbits.SESEND
#define _SESVD U1OTGSTATbits.SESVD
#define _LSTATE U1OTGSTATbits.LSTATE
#define _ID U1OTGSTATbits.ID

/* U1OTGCON */
#define _VBUSDIS U1OTGCONbits.VBUSDIS
#define _VBUSCHG U1OTGCONbits.VBUSCHG
#define _OTGEN U1OTGCONbits.OTGEN
#define _VBUSON U1OTGCONbits.VBUSON
#define _DMPULDWN U1OTGCONbits.DMPULDWN
#define _DPPULDWN U1OTGCONbits.DPPULDWN
#define _DMPULUP U1OTGCONbits.DMPULUP
#define _DPPULUP U1OTGCONbits.DPPULUP

/* U1PWRC */
#define _USBPWR U1PWRCbits.USBPWR
#define _USUSPND U1PWRCbits.USUSPND
#define _USLPGRD U1PWRCbits.USLPGRD
#define _UACTPND U1PWRCbits.UACTPND
#define _USUSPEND U1PWRCbits.USUSPEND

/* U1IR */
#define _URSTIF U1IRbits.URSTIF
#define _UERRIF U1IRbits.UERRIF
#define _SOFIF U1IRbits.SOFIF
#define _TRNIF U1IRbits.TRNIF
#define _IDLEIF U1IRbits.IDLEIF
#define _RESUMEIF U1IRbits.RESUMEIF
#define _ATTACHIF U1IRbits.ATTACHIF
#define _STALLIF U1IRbits.STALLIF
#define _DETACHIF U1IRbits.DETACHIF

/* U1IE */
#define _URSTIE U1IEbits.URSTIE
#define _UERRIE U1IEbits.UERRIE
#define _SOFIE U1IEbits.SOFIE
#define _TRNIE U1IEbits.TRNIE
#define _IDLEIE U1IEbits.IDLEIE
#define _RESUMEIE U1IEbits.RESUMEIE
#define _ATTACHIE U1IEbits.ATTACHIE
#define _STALLIE U1IEbits.STALLIE
#define _DETACHIE U1IEbits.DETACHIE

/* U1EIR */
#define _PIDEF U1EIRbits.PIDEF
#define _CRC5EF U1EIRbits.CRC5EF
#define _CRC16EF U1EIRbits.CRC16EF
#define _DFN8EF U1EIRbits.DFN8EF
#define _BTOEF U1EIRbits.BTOEF
#define _DMAEF U1EIRbits.DMAEF
#define _BTSEF U1EIRbits.BTSEF
#define _EOFEF U1EIRbits.EOFEF

/* U1EIE */
#define _PIDEE U1EIEbits.PIDEE
#define _CRC5EE U1EIEbits.CRC5EE
#define _CRC16EE U1EIEbits.CRC16EE
#define _DFN8EE U1EIEbits.DFN8EE
#define _BTOEE U1EIEbits.BTOEE
#define _DMAEE U1EIEbits.DMAEE
#define _BTSEE U1EIEbits.BTSEE
#define _EOFEE U1EIEbits.EOFEE

/* U1STAT */
#define _PPBI U1STATbits.PPBI
#define _DIR U1STATbits.DIR
#define _ENDPT U1STATbits.ENDPT
#define _ENDPT0 U1STATbits.ENDPT0
#define _ENDPT1 U1STATbits.ENDPT1
#define _ENDPT2 U1STATbits.ENDPT2
#define _ENDPT3 U1STATbits.ENDPT3

/* U1CON */
#define _USBEN U1CONbits.USBEN
#define _PPBRST U1CONbits.PPBRST
#define _RESUME U1CONbits.RESUME
#define _HOSTEN U1CONbits.HOSTEN
#define _USBRST U1CONbits.USBRST
#define _PKTDIS U1CONbits.PKTDIS
#define _SE0 U1CONbits.SE0
#define _JSTATE U1CONbits.JSTATE
#define _SOFEN U1CONbits.SOFEN
#define _RESET U1CONbits.RESET
#define _TOKBUSY U1CONbits.TOKBUSY

/* U1ADDR */
#define _DEVADDR U1ADDRbits.DEVADDR
#define _LOWSPDEN U1ADDRbits.LOWSPDEN
#define _DEVADDR0 U1ADDRbits.DEVADDR0
#define _DEVADDR1 U1ADDRbits.DEVADDR1
#define _DEVADDR2 U1ADDRbits.DEVADDR2
#define _DEVADDR3 U1ADDRbits.DEVADDR3
#define _DEVADDR4 U1ADDRbits.DEVADDR4
#define _DEVADDR5 U1ADDRbits.DEVADDR5
#define _DEVADDR6 U1ADDRbits.DEVADDR6
#define _LSPDEN U1ADDRbits.LSPDEN

/* U1BDTP1 */
#define _BDTPTRL U1BDTP1bits.BDTPTRL
#define _BDTPTRL0 U1BDTP1bits.BDTPTRL0
#define _BDTPTRL1 U1BDTP1bits.BDTPTRL1
#define _BDTPTRL2 U1BDTP1bits.BDTPTRL2
#define _BDTPTRL3 U1BDTP1bits.BDTPTRL3
#define _BDTPTRL4 U1BDTP1bits.BDTPTRL4
#define _BDTPTRL5 U1BDTP1bits.BDTPTRL5
#define _BDTPTRL6 U1BDTP1bits.BDTPTRL6

/* U1FRML */
#define _FRM0 U1FRMLbits.FRM0
#define _FRM1 U1FRMLbits.FRM1
#define _FRM2 U1FRMLbits.FRM2
#define _FRM3 U1FRMLbits.FRM3
#define _FRM4 U1FRMLbits.FRM4
#define _FRM5 U1FRMLbits.FRM5
#define _FRM6 U1FRMLbits.FRM6
#define _FRM7 U1FRMLbits.FRM7

/* U1FRMH */
#define _FRM8 U1FRMHbits.FRM8
#define _FRM9 U1FRMHbits.FRM9
#define _FRM10 U1FRMHbits.FRM10

/* U1TOK */
#define _EP U1TOKbits.EP
#define _PID U1TOKbits.PID
#define _EP0 U1TOKbits.EP0
#define _EP1 U1TOKbits.EP1
#define _EP2 U1TOKbits.EP2
#define _EP3 U1TOKbits.EP3
#define _PID0 U1TOKbits.PID0
#define _PID1 U1TOKbits.PID1
#define _PID2 U1TOKbits.PID2
#define _PID3 U1TOKbits.PID3

/* U1SOF */
#define _CNT U1SOFbits.CNT
#define _CNT0 U1SOFbits.CNT0
#define _CNT1 U1SOFbits.CNT1
#define _CNT2 U1SOFbits.CNT2
#define _CNT3 U1SOFbits.CNT3
#define _CNT4 U1SOFbits.CNT4
#define _CNT5 U1SOFbits.CNT5
#define _CNT6 U1SOFbits.CNT6
#define _CNT7 U1SOFbits.CNT7

/* U1CNFG1 */
#define _PPB U1CNFG1bits.PPB
#define _USBSIDL U1CNFG1bits.USBSIDL
#define _UOEMON U1CNFG1bits.UOEMON
#define _UTEYE U1CNFG1bits.UTEYE
#define _PPB0 U1CNFG1bits.PPB0
#define _PPB1 U1CNFG1bits.PPB1

/* U1CNFG2 */
#define _UTRDIS U1CNFG2bits.UTRDIS
#define _UVCMPDIS U1CNFG2bits.UVCMPDIS
#define _UVBUSDIS U1CNFG2bits.UVBUSDIS
#define _EXTI2CEN U1CNFG2bits.EXTI2CEN
#define _PUVBUS U1CNFG2bits.PUVBUS
#define _UVCMPSEL U1CNFG2bits.UVCMPSEL

/* U1EP0 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
#define _RETRYDIS U1EP0bits.RETRYDIS
#define _LSPD U1EP0bits.LSPD
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */
#define _LOWSPD U1EP0bits.LOWSPD

/* U1EP1 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP2 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP3 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP4 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP5 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP6 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP7 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP8 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP9 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP10 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP11 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP12 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP13 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP14 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1EP15 */
/* Bitname _EPHSHK cannot be defined because it is used by more than one SFR */
/* Bitname _EPSTALL cannot be defined because it is used by more than one SFR */
/* Bitname _EPTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPRXEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPCONDIS cannot be defined because it is used by more than one SFR */
/* Bitname _EPINEN cannot be defined because it is used by more than one SFR */
/* Bitname _EPOUTEN cannot be defined because it is used by more than one SFR */

/* U1PWMRRS */
#define _PER U1PWMRRSbits.PER
/* Bitname _DC cannot be defined because it is used by more than one SFR */
#define _PER0 U1PWMRRSbits.PER0
#define _PER1 U1PWMRRSbits.PER1
#define _PER2 U1PWMRRSbits.PER2
#define _PER3 U1PWMRRSbits.PER3
#define _PER4 U1PWMRRSbits.PER4
#define _PER5 U1PWMRRSbits.PER5
#define _PER6 U1PWMRRSbits.PER6
#define _PER7 U1PWMRRSbits.PER7
#define _DC0 U1PWMRRSbits.DC0
#define _DC1 U1PWMRRSbits.DC1
#define _DC2 U1PWMRRSbits.DC2
#define _DC3 U1PWMRRSbits.DC3
#define _DC4 U1PWMRRSbits.DC4
#define _DC5 U1PWMRRSbits.DC5
#define _DC6 U1PWMRRSbits.DC6
#define _DC7 U1PWMRRSbits.DC7
#define _USBRS0 U1PWMRRSbits.USBRS0
#define _USBRS1 U1PWMRRSbits.USBRS1
#define _USBRS2 U1PWMRRSbits.USBRS2
#define _USBRS3 U1PWMRRSbits.USBRS3
#define _USBRS4 U1PWMRRSbits.USBRS4
#define _USBRS5 U1PWMRRSbits.USBRS5
#define _USBRS6 U1PWMRRSbits.USBRS6
#define _USBRS7 U1PWMRRSbits.USBRS7
#define _USBR0 U1PWMRRSbits.USBR0
#define _USBR1 U1PWMRRSbits.USBR1
#define _USBR2 U1PWMRRSbits.USBR2
#define _USBR3 U1PWMRRSbits.USBR3
#define _USBR4 U1PWMRRSbits.USBR4
#define _USBR5 U1PWMRRSbits.USBR5
#define _USBR6 U1PWMRRSbits.USBR6
#define _USBR7 U1PWMRRSbits.USBR7
#define _USBRS U1PWMRRSbits.USBRS
#define _USBR U1PWMRRSbits.USBR

/* U1PWMCON */
#define _CNTEN U1PWMCONbits.CNTEN
#define _PWMPOL U1PWMCONbits.PWMPOL
#define _PWMEN U1PWMCONbits.PWMEN

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

/* ANSC */
#define _ANSC13 ANSCbits.ANSC13
#define _ANSC14 ANSCbits.ANSC14

/* ANSD */
#define _ANSD6 ANSDbits.ANSD6
#define _ANSD7 ANSDbits.ANSD7

/* ANSF */
#define _ANSF0 ANSFbits.ANSF0

/* ANSG */
#define _ANSG6 ANSGbits.ANSG6
#define _ANSG7 ANSGbits.ANSG7
#define _ANSG8 ANSGbits.ANSG8
#define _ANSG9 ANSGbits.ANSG9

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
#define _INT4R3 RPINR2bits.INT4R3
#define _INT4R4 RPINR2bits.INT4R4
#define _INT4R5 RPINR2bits.INT4R5

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
#define _IC8R RPINR10bits.IC8R
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

/* RPINR15 */
#define _IC9R RPINR15bits.IC9R
#define _IC9R0 RPINR15bits.IC9R0
#define _IC9R1 RPINR15bits.IC9R1
#define _IC9R2 RPINR15bits.IC9R2
#define _IC9R3 RPINR15bits.IC9R3
#define _IC9R4 RPINR15bits.IC9R4
#define _IC9R5 RPINR15bits.IC9R5

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
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4
#define _SS2R5 RPINR23bits.SS2R5

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

/* RPINR28 */
#define _SDI3R RPINR28bits.SDI3R
#define _SCK3R RPINR28bits.SCK3R
#define _SDI3R0 RPINR28bits.SDI3R0
#define _SDI3R1 RPINR28bits.SDI3R1
#define _SDI3R2 RPINR28bits.SDI3R2
#define _SDI3R3 RPINR28bits.SDI3R3
#define _SDI3R4 RPINR28bits.SDI3R4
#define _SDI3R5 RPINR28bits.SDI3R5
#define _SCK3R0 RPINR28bits.SCK3R0
#define _SCK3R1 RPINR28bits.SCK3R1
#define _SCK3R2 RPINR28bits.SCK3R2
#define _SCK3R3 RPINR28bits.SCK3R3
#define _SCK3R4 RPINR28bits.SCK3R4
#define _SCK3R5 RPINR28bits.SCK3R5

/* RPINR29 */
#define _SS3R RPINR29bits.SS3R
#define _SS3R0 RPINR29bits.SS3R0
#define _SS3R1 RPINR29bits.SS3R1
#define _SS3R2 RPINR29bits.SS3R2
#define _SS3R3 RPINR29bits.SS3R3
#define _SS3R4 RPINR29bits.SS3R4
#define _SS3R5 RPINR29bits.SS3R5

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

/* G1CMDL */
#define _GCMD0 G1CMDLbits.GCMD0
#define _GCMD1 G1CMDLbits.GCMD1
#define _GCMD2 G1CMDLbits.GCMD2
#define _GCMD3 G1CMDLbits.GCMD3
#define _GCMD4 G1CMDLbits.GCMD4
#define _GCMD5 G1CMDLbits.GCMD5
#define _GCMD6 G1CMDLbits.GCMD6
#define _GCMD7 G1CMDLbits.GCMD7
#define _GCMD8 G1CMDLbits.GCMD8
#define _GCMD9 G1CMDLbits.GCMD9
#define _GCMD10 G1CMDLbits.GCMD10
#define _GCMD11 G1CMDLbits.GCMD11
#define _GCMD12 G1CMDLbits.GCMD12
#define _GCMD13 G1CMDLbits.GCMD13
#define _GCMD14 G1CMDLbits.GCMD14
#define _GCMD15 G1CMDLbits.GCMD15

/* G1CMDH */
#define _GCMD16 G1CMDHbits.GCMD16
#define _GCMD17 G1CMDHbits.GCMD17
#define _GCMD18 G1CMDHbits.GCMD18
#define _GCMD19 G1CMDHbits.GCMD19
#define _GCMD20 G1CMDHbits.GCMD20
#define _GCMD21 G1CMDHbits.GCMD21
#define _GCMD22 G1CMDHbits.GCMD22
#define _GCMD23 G1CMDHbits.GCMD23
#define _GCMD24 G1CMDHbits.GCMD24
#define _GCMD25 G1CMDHbits.GCMD25
#define _GCMD26 G1CMDHbits.GCMD26
#define _GCMD27 G1CMDHbits.GCMD27
#define _GCMD28 G1CMDHbits.GCMD28
#define _GCMD29 G1CMDHbits.GCMD29
#define _GCMD30 G1CMDHbits.GCMD30
#define _GCMD31 G1CMDHbits.GCMD31

/* G1CON1 */
#define _GCMDCNT G1CON1bits.GCMDCNT
#define _PUBPP G1CON1bits.PUBPP
#define _GCMDWMK G1CON1bits.GCMDWMK
#define _G1SIDL G1CON1bits.G1SIDL
#define _G1EN G1CON1bits.G1EN
#define _GCMDCNT0 G1CON1bits.GCMDCNT0
#define _GCMDCNT1 G1CON1bits.GCMDCNT1
#define _GCMDCNT2 G1CON1bits.GCMDCNT2
#define _GCMDCNT3 G1CON1bits.GCMDCNT3
#define _GCMDCNT4 G1CON1bits.GCMDCNT4
#define _PUBPP0 G1CON1bits.PUBPP0
#define _PUBPP1 G1CON1bits.PUBPP1
#define _PUBPP2 G1CON1bits.PUBPP2
#define _GCMDWMK0 G1CON1bits.GCMDWMK0
#define _GCMDWMK1 G1CON1bits.GCMDWMK1
#define _GCMDWMK2 G1CON1bits.GCMDWMK2
#define _GCMDWMK3 G1CON1bits.GCMDWMK3
#define _GCMDWMK4 G1CON1bits.GCMDWMK4

/* G1STAT */
#define _CMDMPT G1STATbits.CMDMPT
#define _CMDFUL G1STATbits.CMDFUL
#define _CMDLV G1STATbits.CMDLV
#define _HMRGN G1STATbits.HMRGN
#define _VMRGN G1STATbits.VMRGN
#define _CHRBUSY G1STATbits.CHRBUSY
#define _RCCBUSY G1STATbits.RCCBUSY
#define _IPUBUSY G1STATbits.IPUBUSY
#define _PUBUSY G1STATbits.PUBUSY

/* G1IE */
#define _CMDMPTIE G1IEbits.CMDMPTIE
#define _CMDFULIE G1IEbits.CMDFULIE
#define _CMDLVIE G1IEbits.CMDLVIE
#define _HMRGNIE G1IEbits.HMRGNIE
#define _VMRGNIE G1IEbits.VMRGNIE
#define _CHRIE G1IEbits.CHRIE
#define _RCCIE G1IEbits.RCCIE
#define _IPUIE G1IEbits.IPUIE
#define _PUIE G1IEbits.PUIE

/* G1IR */
#define _CMDMPTIF G1IRbits.CMDMPTIF
#define _CMDFULIF G1IRbits.CMDFULIF
#define _CMDLVIF G1IRbits.CMDLVIF
#define _HMRGNIF G1IRbits.HMRGNIF
#define _VMRGNIF G1IRbits.VMRGNIF
#define _CHRIF G1IRbits.CHRIF
#define _RCCIF G1IRbits.RCCIF
#define _IPUIF G1IRbits.IPUIF
#define _PUIF G1IRbits.PUIF

/* G1W1ADRL */
#define _W1ADR0 G1W1ADRLbits.W1ADR0
#define _W1ADR1 G1W1ADRLbits.W1ADR1
#define _W1ADR2 G1W1ADRLbits.W1ADR2
#define _W1ADR3 G1W1ADRLbits.W1ADR3
#define _W1ADR4 G1W1ADRLbits.W1ADR4
#define _W1ADR5 G1W1ADRLbits.W1ADR5
#define _W1ADR6 G1W1ADRLbits.W1ADR6
#define _W1ADR7 G1W1ADRLbits.W1ADR7
#define _W1ADR8 G1W1ADRLbits.W1ADR8
#define _W1ADR9 G1W1ADRLbits.W1ADR9
#define _W1ADR10 G1W1ADRLbits.W1ADR10
#define _W1ADR11 G1W1ADRLbits.W1ADR11
#define _W1ADR12 G1W1ADRLbits.W1ADR12
#define _W1ADR13 G1W1ADRLbits.W1ADR13
#define _W1ADR14 G1W1ADRLbits.W1ADR14
#define _W1ADR15 G1W1ADRLbits.W1ADR15

/* G1W1ADRH */
#define _W1ADR16 G1W1ADRHbits.W1ADR16
#define _W1ADR17 G1W1ADRHbits.W1ADR17
#define _W1ADR18 G1W1ADRHbits.W1ADR18
#define _W1ADR19 G1W1ADRHbits.W1ADR19
#define _W1ADR20 G1W1ADRHbits.W1ADR20
#define _W1ADR21 G1W1ADRHbits.W1ADR21
#define _W1ADR22 G1W1ADRHbits.W1ADR22
#define _W1ADR23 G1W1ADRHbits.W1ADR23

/* G1W2ADRL */
#define _W2ADR0 G1W2ADRLbits.W2ADR0
#define _W2ADR1 G1W2ADRLbits.W2ADR1
#define _W2ADR2 G1W2ADRLbits.W2ADR2
#define _W2ADR3 G1W2ADRLbits.W2ADR3
#define _W2ADR4 G1W2ADRLbits.W2ADR4
#define _W2ADR5 G1W2ADRLbits.W2ADR5
#define _W2ADR6 G1W2ADRLbits.W2ADR6
#define _W2ADR7 G1W2ADRLbits.W2ADR7
#define _W2ADR8 G1W2ADRLbits.W2ADR8
#define _W2ADR9 G1W2ADRLbits.W2ADR9
#define _W2ADR10 G1W2ADRLbits.W2ADR10
#define _W2ADR11 G1W2ADRLbits.W2ADR11
#define _W2ADR12 G1W2ADRLbits.W2ADR12
#define _W2ADR13 G1W2ADRLbits.W2ADR13
#define _W2ADR14 G1W2ADRLbits.W2ADR14
#define _W2ADR15 G1W2ADRLbits.W2ADR15

/* G1W2ADRH */
#define _W2ADR16 G1W2ADRHbits.W2ADR16
#define _W2ADR17 G1W2ADRHbits.W2ADR17
#define _W2ADR18 G1W2ADRHbits.W2ADR18
#define _W2ADR19 G1W2ADRHbits.W2ADR19
#define _W2ADR20 G1W2ADRHbits.W2ADR20
#define _W2ADR21 G1W2ADRHbits.W2ADR21
#define _W2ADR22 G1W2ADRHbits.W2ADR22
#define _W2ADR23 G1W2ADRHbits.W2ADR23

/* G1PUW */
#define _PUW G1PUWbits.PUW
#define _PUW0 G1PUWbits.PUW0
#define _PUW1 G1PUWbits.PUW1
#define _PUW2 G1PUWbits.PUW2
#define _PUW3 G1PUWbits.PUW3
#define _PUW4 G1PUWbits.PUW4
#define _PUW5 G1PUWbits.PUW5
#define _PUW6 G1PUWbits.PUW6
#define _PUW7 G1PUWbits.PUW7
#define _PUW8 G1PUWbits.PUW8
#define _PUW9 G1PUWbits.PUW9
#define _PUW10 G1PUWbits.PUW10

/* G1PUH */
#define _PUH G1PUHbits.PUH
#define _PUH0 G1PUHbits.PUH0
#define _PUH1 G1PUHbits.PUH1
#define _PUH2 G1PUHbits.PUH2
#define _PUH3 G1PUHbits.PUH3
#define _PUH4 G1PUHbits.PUH4
#define _PUH5 G1PUHbits.PUH5
#define _PUH6 G1PUHbits.PUH6
#define _PUH7 G1PUHbits.PUH7
#define _PUH8 G1PUHbits.PUH8
#define _PUH9 G1PUHbits.PUH9
#define _PUH10 G1PUHbits.PUH10

/* G1DPADRL */
#define _DPADR0 G1DPADRLbits.DPADR0
#define _DPADR1 G1DPADRLbits.DPADR1
#define _DPADR2 G1DPADRLbits.DPADR2
#define _DPADR3 G1DPADRLbits.DPADR3
#define _DPADR4 G1DPADRLbits.DPADR4
#define _DPADR5 G1DPADRLbits.DPADR5
#define _DPADR6 G1DPADRLbits.DPADR6
#define _DPADR7 G1DPADRLbits.DPADR7
#define _DPADR8 G1DPADRLbits.DPADR8
#define _DPADR9 G1DPADRLbits.DPADR9
#define _DPADR10 G1DPADRLbits.DPADR10
#define _DPADR11 G1DPADRLbits.DPADR11
#define _DPADR12 G1DPADRLbits.DPADR12
#define _DPADR13 G1DPADRLbits.DPADR13
#define _DPADR14 G1DPADRLbits.DPADR14
#define _DPADR15 G1DPADRLbits.DPADR15

/* G1DPADRH */
#define _DPADR16 G1DPADRHbits.DPADR16
#define _DPADR17 G1DPADRHbits.DPADR17
#define _DPADR18 G1DPADRHbits.DPADR18
#define _DPADR19 G1DPADRHbits.DPADR19
#define _DPADR20 G1DPADRHbits.DPADR20
#define _DPADR21 G1DPADRHbits.DPADR21
#define _DPADR22 G1DPADRHbits.DPADR22
#define _DPADR23 G1DPADRHbits.DPADR23

/* G1DPW */
#define _DPW G1DPWbits.DPW
#define _DPW0 G1DPWbits.DPW0
#define _DPW1 G1DPWbits.DPW1
#define _DPW2 G1DPWbits.DPW2
#define _DPW3 G1DPWbits.DPW3
#define _DPW4 G1DPWbits.DPW4
#define _DPW5 G1DPWbits.DPW5
#define _DPW6 G1DPWbits.DPW6
#define _DPW7 G1DPWbits.DPW7
#define _DPW8 G1DPWbits.DPW8
#define _DPW9 G1DPWbits.DPW9
#define _DPW10 G1DPWbits.DPW10

/* G1DPH */
#define _DPH G1DPHbits.DPH
#define _DPH0 G1DPHbits.DPH0
#define _DPH1 G1DPHbits.DPH1
#define _DPH2 G1DPHbits.DPH2
#define _DPH3 G1DPHbits.DPH3
#define _DPH4 G1DPHbits.DPH4
#define _DPH5 G1DPHbits.DPH5
#define _DPH6 G1DPHbits.DPH6
#define _DPH7 G1DPHbits.DPH7
#define _DPH8 G1DPHbits.DPH8
#define _DPH9 G1DPHbits.DPH9
#define _DPH10 G1DPHbits.DPH10

/* G1DPWT */
#define _DPWT G1DPWTbits.DPWT
#define _DPWT0 G1DPWTbits.DPWT0
#define _DPWT1 G1DPWTbits.DPWT1
#define _DPWT2 G1DPWTbits.DPWT2
#define _DPWT3 G1DPWTbits.DPWT3
#define _DPWT4 G1DPWTbits.DPWT4
#define _DPWT5 G1DPWTbits.DPWT5
#define _DPWT6 G1DPWTbits.DPWT6
#define _DPWT7 G1DPWTbits.DPWT7
#define _DPWT8 G1DPWTbits.DPWT8
#define _DPWT9 G1DPWTbits.DPWT9
#define _DPWT10 G1DPWTbits.DPWT10

/* G1DPHT */
#define _DPHT G1DPHTbits.DPHT
#define _DPHT0 G1DPHTbits.DPHT0
#define _DPHT1 G1DPHTbits.DPHT1
#define _DPHT2 G1DPHTbits.DPHT2
#define _DPHT3 G1DPHTbits.DPHT3
#define _DPHT4 G1DPHTbits.DPHT4
#define _DPHT5 G1DPHTbits.DPHT5
#define _DPHT6 G1DPHTbits.DPHT6
#define _DPHT7 G1DPHTbits.DPHT7
#define _DPHT8 G1DPHTbits.DPHT8
#define _DPHT9 G1DPHTbits.DPHT9
#define _DPHT10 G1DPHTbits.DPHT10

/* G1CON2 */
#define _DPMODE G1CON2bits.DPMODE
#define _DPBPP G1CON2bits.DPBPP
#define _DPTEST G1CON2bits.DPTEST
#define _DPSTGER G1CON2bits.DPSTGER
#define _DPGWDTH G1CON2bits.DPGWDTH
#define _DPMODE0 G1CON2bits.DPMODE0
#define _DPMODE1 G1CON2bits.DPMODE1
#define _DPMODE2 G1CON2bits.DPMODE2
#define _DPBPP0 G1CON2bits.DPBPP0
#define _DPBPP1 G1CON2bits.DPBPP1
#define _DPBPP2 G1CON2bits.DPBPP2
#define _DPTEST0 G1CON2bits.DPTEST0
#define _DPTEST1 G1CON2bits.DPTEST1
#define _DPSTGER0 G1CON2bits.DPSTGER0
#define _DPSTGER1 G1CON2bits.DPSTGER1
#define _DPGWDTH0 G1CON2bits.DPGWDTH0
#define _DPGWDTH1 G1CON2bits.DPGWDTH1

/* G1CON3 */
#define _DPHSOE G1CON3bits.DPHSOE
#define _DPVSOE G1CON3bits.DPVSOE
#define _DPENOE G1CON3bits.DPENOE
#define _DPPWROE G1CON3bits.DPPWROE
#define _DPHSPOL G1CON3bits.DPHSPOL
#define _DPVSPOL G1CON3bits.DPVSPOL
#define _DPENPOL G1CON3bits.DPENPOL
#define _DPCLKPOL G1CON3bits.DPCLKPOL
#define _DPPOWER G1CON3bits.DPPOWER
#define _DPPINOE G1CON3bits.DPPINOE

/* G1ACTDA */
#define _ACTPIX G1ACTDAbits.ACTPIX
#define _ACTLINE G1ACTDAbits.ACTLINE
#define _ACTPIX0 G1ACTDAbits.ACTPIX0
#define _ACTPIX1 G1ACTDAbits.ACTPIX1
#define _ACTPIX2 G1ACTDAbits.ACTPIX2
#define _ACTPIX3 G1ACTDAbits.ACTPIX3
#define _ACTPIX4 G1ACTDAbits.ACTPIX4
#define _ACTPIX5 G1ACTDAbits.ACTPIX5
#define _ACTPIX6 G1ACTDAbits.ACTPIX6
#define _ACTPIX7 G1ACTDAbits.ACTPIX7
#define _ACTLINE0 G1ACTDAbits.ACTLINE0
#define _ACTLINE1 G1ACTDAbits.ACTLINE1
#define _ACTLINE2 G1ACTDAbits.ACTLINE2
#define _ACTLINE3 G1ACTDAbits.ACTLINE3
#define _ACTLINE4 G1ACTDAbits.ACTLINE4
#define _ACTLINE5 G1ACTDAbits.ACTLINE5
#define _ACTLINE6 G1ACTDAbits.ACTLINE6
#define _ACTLINE7 G1ACTDAbits.ACTLINE7

/* G1HSYNC */
#define _HSST G1HSYNCbits.HSST
#define _HSLEN G1HSYNCbits.HSLEN
#define _HSST0 G1HSYNCbits.HSST0
#define _HSST1 G1HSYNCbits.HSST1
#define _HSST2 G1HSYNCbits.HSST2
#define _HSST3 G1HSYNCbits.HSST3
#define _HSST4 G1HSYNCbits.HSST4
#define _HSST5 G1HSYNCbits.HSST5
#define _HSST6 G1HSYNCbits.HSST6
#define _HSST7 G1HSYNCbits.HSST7
#define _HSLEN0 G1HSYNCbits.HSLEN0
#define _HSLEN1 G1HSYNCbits.HSLEN1
#define _HSLEN2 G1HSYNCbits.HSLEN2
#define _HSLEN3 G1HSYNCbits.HSLEN3
#define _HSLEN4 G1HSYNCbits.HSLEN4
#define _HSLEN5 G1HSYNCbits.HSLEN5
#define _HSLEN6 G1HSYNCbits.HSLEN6
#define _HSLEN7 G1HSYNCbits.HSLEN7

/* G1VSYNC */
#define _VSST G1VSYNCbits.VSST
#define _VSLEN G1VSYNCbits.VSLEN
#define _VSST0 G1VSYNCbits.VSST0
#define _VSST1 G1VSYNCbits.VSST1
#define _VSST2 G1VSYNCbits.VSST2
#define _VSST3 G1VSYNCbits.VSST3
#define _VSST4 G1VSYNCbits.VSST4
#define _VSST5 G1VSYNCbits.VSST5
#define _VSST6 G1VSYNCbits.VSST6
#define _VSST7 G1VSYNCbits.VSST7
#define _VSLEN0 G1VSYNCbits.VSLEN0
#define _VSLEN1 G1VSYNCbits.VSLEN1
#define _VSLEN2 G1VSYNCbits.VSLEN2
#define _VSLEN3 G1VSYNCbits.VSLEN3
#define _VSLEN4 G1VSYNCbits.VSLEN4
#define _VSLEN5 G1VSYNCbits.VSLEN5
#define _VSLEN6 G1VSYNCbits.VSLEN6
#define _VSLEN7 G1VSYNCbits.VSLEN7

/* G1DBLCON */
#define _HENST G1DBLCONbits.HENST
#define _VENST G1DBLCONbits.VENST
#define _HENST0 G1DBLCONbits.HENST0
#define _HENST1 G1DBLCONbits.HENST1
#define _HENST2 G1DBLCONbits.HENST2
#define _HENST3 G1DBLCONbits.HENST3
#define _HENST4 G1DBLCONbits.HENST4
#define _HENST5 G1DBLCONbits.HENST5
#define _HENST6 G1DBLCONbits.HENST6
#define _HENST7 G1DBLCONbits.HENST7
#define _VENST0 G1DBLCONbits.VENST0
#define _VENST1 G1DBLCONbits.VENST1
#define _VENST2 G1DBLCONbits.VENST2
#define _VENST3 G1DBLCONbits.VENST3
#define _VENST4 G1DBLCONbits.VENST4
#define _VENST5 G1DBLCONbits.VENST5
#define _VENST6 G1DBLCONbits.VENST6
#define _VENST7 G1DBLCONbits.VENST7

/* G1CLUT */
#define _CLUTADR G1CLUTbits.CLUTADR
#define _CLUTRWEN G1CLUTbits.CLUTRWEN
#define _CLUTTRD G1CLUTbits.CLUTTRD
#define _CLUTBUSY G1CLUTbits.CLUTBUSY
#define _CLUTEN G1CLUTbits.CLUTEN
#define _CLUTADR0 G1CLUTbits.CLUTADR0
#define _CLUTADR1 G1CLUTbits.CLUTADR1
#define _CLUTADR2 G1CLUTbits.CLUTADR2
#define _CLUTADR3 G1CLUTbits.CLUTADR3
#define _CLUTADR4 G1CLUTbits.CLUTADR4
#define _CLUTADR5 G1CLUTbits.CLUTADR5
#define _CLUTADR6 G1CLUTbits.CLUTADR6
#define _CLUTADR7 G1CLUTbits.CLUTADR7

/* G1CLUTWR */
#define _CLUTWR G1CLUTWRbits.CLUTWR
#define _CLUTWR0 G1CLUTWRbits.CLUTWR0
#define _CLUTWR1 G1CLUTWRbits.CLUTWR1
#define _CLUTWR2 G1CLUTWRbits.CLUTWR2
#define _CLUTWR3 G1CLUTWRbits.CLUTWR3
#define _CLUTWR4 G1CLUTWRbits.CLUTWR4
#define _CLUTWR5 G1CLUTWRbits.CLUTWR5
#define _CLUTWR6 G1CLUTWRbits.CLUTWR6
#define _CLUTWR7 G1CLUTWRbits.CLUTWR7
#define _CLUTWR8 G1CLUTWRbits.CLUTWR8
#define _CLUTWR9 G1CLUTWRbits.CLUTWR9
#define _CLUTWR10 G1CLUTWRbits.CLUTWR10
#define _CLUTWR11 G1CLUTWRbits.CLUTWR11
#define _CLUTWR12 G1CLUTWRbits.CLUTWR12
#define _CLUTWR13 G1CLUTWRbits.CLUTWR13
#define _CLUTWR14 G1CLUTWRbits.CLUTWR14
#define _CLUTWR15 G1CLUTWRbits.CLUTWR15

/* G1CLUTRD */
#define _CLUTRD G1CLUTRDbits.CLUTRD
#define _CLUTRD0 G1CLUTRDbits.CLUTRD0
#define _CLUTRD1 G1CLUTRDbits.CLUTRD1
#define _CLUTRD2 G1CLUTRDbits.CLUTRD2
#define _CLUTRD3 G1CLUTRDbits.CLUTRD3
#define _CLUTRD4 G1CLUTRDbits.CLUTRD4
#define _CLUTRD5 G1CLUTRDbits.CLUTRD5
#define _CLUTRD6 G1CLUTRDbits.CLUTRD6
#define _CLUTRD7 G1CLUTRDbits.CLUTRD7
#define _CLUTRD8 G1CLUTRDbits.CLUTRD8
#define _CLUTRD9 G1CLUTRDbits.CLUTRD9
#define _CLUTRD10 G1CLUTRDbits.CLUTRD10
#define _CLUTRD11 G1CLUTRDbits.CLUTRD11
#define _CLUTRD12 G1CLUTRDbits.CLUTRD12
#define _CLUTRD13 G1CLUTRDbits.CLUTRD13
#define _CLUTRD14 G1CLUTRDbits.CLUTRD14
#define _CLUTRD15 G1CLUTRDbits.CLUTRD15

/* G1MRGN */
#define _HBAMGN G1MRGNbits.HBAMGN
#define _VBAMGN G1MRGNbits.VBAMGN
#define _HBAMGN0 G1MRGNbits.HBAMGN0
#define _HBAMGN1 G1MRGNbits.HBAMGN1
#define _HBAMGN2 G1MRGNbits.HBAMGN2
#define _HBAMGN3 G1MRGNbits.HBAMGN3
#define _HBAMGN4 G1MRGNbits.HBAMGN4
#define _HBAMGN5 G1MRGNbits.HBAMGN5
#define _HBAMGN6 G1MRGNbits.HBAMGN6
#define _HBAMGN7 G1MRGNbits.HBAMGN7
#define _VBAMGN0 G1MRGNbits.VBAMGN0
#define _VBAMGN1 G1MRGNbits.VBAMGN1
#define _VBAMGN2 G1MRGNbits.VBAMGN2
#define _VBAMGN3 G1MRGNbits.VBAMGN3
#define _VBAMGN4 G1MRGNbits.VBAMGN4
#define _VBAMGN5 G1MRGNbits.VBAMGN5
#define _VBAMGN6 G1MRGNbits.VBAMGN6
#define _VBAMGN7 G1MRGNbits.VBAMGN7

/* G1CHRX */
#define _CURPOSX G1CHRXbits.CURPOSX
#define _CURPOSX0 G1CHRXbits.CURPOSX0
#define _CURPOSX1 G1CHRXbits.CURPOSX1
#define _CURPOSX2 G1CHRXbits.CURPOSX2
#define _CURPOSX3 G1CHRXbits.CURPOSX3
#define _CURPOSX4 G1CHRXbits.CURPOSX4
#define _CURPOSX5 G1CHRXbits.CURPOSX5
#define _CURPOSX6 G1CHRXbits.CURPOSX6
#define _CURPOSX7 G1CHRXbits.CURPOSX7
#define _CURPOSX8 G1CHRXbits.CURPOSX8
#define _CURPOSX9 G1CHRXbits.CURPOSX9
#define _CURPOSX10 G1CHRXbits.CURPOSX10

/* G1CHRY */
#define _CURPOSY G1CHRYbits.CURPOSY
#define _CURPOSY0 G1CHRYbits.CURPOSY0
#define _CURPOSY1 G1CHRYbits.CURPOSY1
#define _CURPOSY2 G1CHRYbits.CURPOSY2
#define _CURPOSY3 G1CHRYbits.CURPOSY3
#define _CURPOSY4 G1CHRYbits.CURPOSY4
#define _CURPOSY5 G1CHRYbits.CURPOSY5
#define _CURPOSY6 G1CHRYbits.CURPOSY6
#define _CURPOSY7 G1CHRYbits.CURPOSY7
#define _CURPOSY8 G1CHRYbits.CURPOSY8
#define _CURPOSY9 G1CHRYbits.CURPOSY9
#define _CURPOSY10 G1CHRYbits.CURPOSY10

/* G1IPU */
#define _BFINAL G1IPUbits.BFINAL
#define _IPUDONE G1IPUbits.IPUDONE
#define _WRAPERR G1IPUbits.WRAPERR
#define _LENERR G1IPUbits.LENERR
#define _BLCKERR G1IPUbits.BLCKERR
#define _HUFFERR G1IPUbits.HUFFERR

/* G1DBEN */
#define _GDBEN G1DBENbits.GDBEN
#define _GDBEN0 G1DBENbits.GDBEN0
#define _GDBEN1 G1DBENbits.GDBEN1
#define _GDBEN2 G1DBENbits.GDBEN2
#define _GDBEN3 G1DBENbits.GDBEN3
#define _GDBEN4 G1DBENbits.GDBEN4
#define _GDBEN5 G1DBENbits.GDBEN5
#define _GDBEN6 G1DBENbits.GDBEN6
#define _GDBEN7 G1DBENbits.GDBEN7
#define _GDBEN8 G1DBENbits.GDBEN8
#define _GDBEN9 G1DBENbits.GDBEN9
#define _GDBEN10 G1DBENbits.GDBEN10
#define _GDBEN11 G1DBENbits.GDBEN11
#define _GDBEN12 G1DBENbits.GDBEN12
#define _GDBEN13 G1DBENbits.GDBEN13
#define _GDBEN14 G1DBENbits.GDBEN14
#define _GDBEN15 G1DBENbits.GDBEN15

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
#define _PMSLP RCONbits.PMSLP

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
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _G1CLKSEL CLKDIVbits.G1CLKSEL
#define _PLLEN CLKDIVbits.PLLEN
#define _CPDIV CLKDIVbits.CPDIV
#define _RCDIV CLKDIVbits.RCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _CPDIV0 CLKDIVbits.CPDIV0
#define _CPDIV1 CLKDIVbits.CPDIV1
#define _RCDIV0 CLKDIVbits.RCDIV0
#define _RCDIV1 CLKDIVbits.RCDIV1
#define _RCDIV2 CLKDIVbits.RCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* CLKDIV2 */
#define _GCLKDIV CLKDIV2bits.GCLKDIV
#define _GCLKDIV0 CLKDIV2bits.GCLKDIV0
#define _GCLKDIV1 CLKDIV2bits.GCLKDIV1
#define _GCLKDIV2 CLKDIV2bits.GCLKDIV2
#define _GCLKDIV3 CLKDIV2bits.GCLKDIV3
#define _GCLKDIV4 CLKDIV2bits.GCLKDIV4
#define _GCLKDIV5 CLKDIV2bits.GCLKDIV5
#define _GCLKDIV6 CLKDIV2bits.GCLKDIV6

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
#define _OC8MD PMD2bits.OC8MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD
#define _IC5MD PMD2bits.IC5MD
#define _IC6MD PMD2bits.IC6MD
#define _IC7MD PMD2bits.IC7MD
#define _IC8MD PMD2bits.IC8MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _I2C3MD PMD3bits.I2C3MD
#define _U3MD PMD3bits.U3MD
#define _CRCMD PMD3bits.CRCMD
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD
#define _CRCPMD PMD3bits.CRCPMD

/* PMD4 */
#define _USB1MD PMD4bits.USB1MD
#define _LVDMD PMD4bits.LVDMD
#define _CTMUMD PMD4bits.CTMUMD
#define _REFOMD PMD4bits.REFOMD
#define _U4MD PMD4bits.U4MD
#define _UPWMMD PMD4bits.UPWMMD

/* PMD5 */
#define _OC9MD PMD5bits.OC9MD
#define _IC9MD PMD5bits.IC9MD

/* PMD6 */
#define _SPI3MD PMD6bits.SPI3MD
#define _GFX1MD PMD6bits.GFX1MD


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

#define _CNPD1_CN0PDE_POSITION                   0x00000000
#define _CNPD1_CN0PDE_MASK                       0x00000001
#define _CNPD1_CN0PDE_LENGTH                     0x00000001

#define _CNPD1_CN1PDE_POSITION                   0x00000001
#define _CNPD1_CN1PDE_MASK                       0x00000002
#define _CNPD1_CN1PDE_LENGTH                     0x00000001

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

#define _CNPD5_CN71PDE_POSITION                  0x00000007
#define _CNPD5_CN71PDE_MASK                      0x00000080
#define _CNPD5_CN71PDE_LENGTH                    0x00000001

#define _CNPD6_CN83PDE_POSITION                  0x00000003
#define _CNPD6_CN83PDE_MASK                      0x00000008
#define _CNPD6_CN83PDE_LENGTH                    0x00000001

#define _CNPD6_CN84PDE_POSITION                  0x00000004
#define _CNPD6_CN84PDE_MASK                      0x00000010
#define _CNPD6_CN84PDE_LENGTH                    0x00000001

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

#define _CNEN5_CN71IE_POSITION                   0x00000007
#define _CNEN5_CN71IE_MASK                       0x00000080
#define _CNEN5_CN71IE_LENGTH                     0x00000001

#define _CNEN6_CN83IE_POSITION                   0x00000003
#define _CNEN6_CN83IE_MASK                       0x00000008
#define _CNEN6_CN83IE_LENGTH                     0x00000001

#define _CNEN6_CN84IE_POSITION                   0x00000004
#define _CNEN6_CN84IE_MASK                       0x00000010
#define _CNEN6_CN84IE_LENGTH                     0x00000001

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

#define _CNPU5_CN71PUE_POSITION                  0x00000007
#define _CNPU5_CN71PUE_MASK                      0x00000080
#define _CNPU5_CN71PUE_LENGTH                    0x00000001

#define _CNPU6_CN83PUE_POSITION                  0x00000003
#define _CNPU6_CN83PUE_MASK                      0x00000008
#define _CNPU6_CN83PUE_LENGTH                    0x00000001

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

#define _IFS1_IC8IF_POSITION                     0x00000007
#define _IFS1_IC8IF_MASK                         0x00000080
#define _IFS1_IC8IF_LENGTH                       0x00000001

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

#define _IFS2_OC8IF_POSITION                     0x0000000C
#define _IFS2_OC8IF_MASK                         0x00001000
#define _IFS2_OC8IF_LENGTH                       0x00000001

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

#define _IFS5_SI2C3IF_POSITION                   0x00000004
#define _IFS5_SI2C3IF_MASK                       0x00000010
#define _IFS5_SI2C3IF_LENGTH                     0x00000001

#define _IFS5_MI2C3IF_POSITION                   0x00000005
#define _IFS5_MI2C3IF_MASK                       0x00000020
#define _IFS5_MI2C3IF_LENGTH                     0x00000001

#define _IFS5_USB1IF_POSITION                    0x00000006
#define _IFS5_USB1IF_MASK                        0x00000040
#define _IFS5_USB1IF_LENGTH                      0x00000001

#define _IFS5_U4ERIF_POSITION                    0x00000007
#define _IFS5_U4ERIF_MASK                        0x00000080
#define _IFS5_U4ERIF_LENGTH                      0x00000001

#define _IFS5_U4RXIF_POSITION                    0x00000008
#define _IFS5_U4RXIF_MASK                        0x00000100
#define _IFS5_U4RXIF_LENGTH                      0x00000001

#define _IFS5_U4TXIF_POSITION                    0x00000009
#define _IFS5_U4TXIF_MASK                        0x00000200
#define _IFS5_U4TXIF_LENGTH                      0x00000001

#define _IFS5_SPF3IF_POSITION                    0x0000000A
#define _IFS5_SPF3IF_MASK                        0x00000400
#define _IFS5_SPF3IF_LENGTH                      0x00000001

#define _IFS5_SPI3IF_POSITION                    0x0000000B
#define _IFS5_SPI3IF_MASK                        0x00000800
#define _IFS5_SPI3IF_LENGTH                      0x00000001

#define _IFS5_OC9IF_POSITION                     0x0000000C
#define _IFS5_OC9IF_MASK                         0x00001000
#define _IFS5_OC9IF_LENGTH                       0x00000001

#define _IFS5_IC9IF_POSITION                     0x0000000D
#define _IFS5_IC9IF_MASK                         0x00002000
#define _IFS5_IC9IF_LENGTH                       0x00000001

#define _IFS6_GFX1IF_POSITION                    0x00000004
#define _IFS6_GFX1IF_MASK                        0x00000010
#define _IFS6_GFX1IF_LENGTH                      0x00000001

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

#define _IEC1_IC8IE_POSITION                     0x00000007
#define _IEC1_IC8IE_MASK                         0x00000080
#define _IEC1_IC8IE_LENGTH                       0x00000001

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

#define _IEC2_OC8IE_POSITION                     0x0000000C
#define _IEC2_OC8IE_MASK                         0x00001000
#define _IEC2_OC8IE_LENGTH                       0x00000001

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

#define _IEC5_SI2C3IE_POSITION                   0x00000004
#define _IEC5_SI2C3IE_MASK                       0x00000010
#define _IEC5_SI2C3IE_LENGTH                     0x00000001

#define _IEC5_MI2C3IE_POSITION                   0x00000005
#define _IEC5_MI2C3IE_MASK                       0x00000020
#define _IEC5_MI2C3IE_LENGTH                     0x00000001

#define _IEC5_USB1IE_POSITION                    0x00000006
#define _IEC5_USB1IE_MASK                        0x00000040
#define _IEC5_USB1IE_LENGTH                      0x00000001

#define _IEC5_U4ERIE_POSITION                    0x00000007
#define _IEC5_U4ERIE_MASK                        0x00000080
#define _IEC5_U4ERIE_LENGTH                      0x00000001

#define _IEC5_U4RXIE_POSITION                    0x00000008
#define _IEC5_U4RXIE_MASK                        0x00000100
#define _IEC5_U4RXIE_LENGTH                      0x00000001

#define _IEC5_U4TXIE_POSITION                    0x00000009
#define _IEC5_U4TXIE_MASK                        0x00000200
#define _IEC5_U4TXIE_LENGTH                      0x00000001

#define _IEC5_SPF3IE_POSITION                    0x0000000A
#define _IEC5_SPF3IE_MASK                        0x00000400
#define _IEC5_SPF3IE_LENGTH                      0x00000001

#define _IEC5_SPI3IE_POSITION                    0x0000000B
#define _IEC5_SPI3IE_MASK                        0x00000800
#define _IEC5_SPI3IE_LENGTH                      0x00000001

#define _IEC5_OC9IE_POSITION                     0x0000000C
#define _IEC5_OC9IE_MASK                         0x00001000
#define _IEC5_OC9IE_LENGTH                       0x00000001

#define _IEC5_IC9IE_POSITION                     0x0000000D
#define _IEC5_IC9IE_MASK                         0x00002000
#define _IEC5_IC9IE_LENGTH                       0x00000001

#define _IEC6_GFX1IE_POSITION                    0x00000004
#define _IEC6_GFX1IE_MASK                        0x00000010
#define _IEC6_GFX1IE_LENGTH                      0x00000001

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

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

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

#define _IPC5_IC8IP_POSITION                     0x0000000C
#define _IPC5_IC8IP_MASK                         0x00007000
#define _IPC5_IC8IP_LENGTH                       0x00000003

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

#define _IPC5_IC8IP0_POSITION                    0x0000000C
#define _IPC5_IC8IP0_MASK                        0x00001000
#define _IPC5_IC8IP0_LENGTH                      0x00000001

#define _IPC5_IC8IP1_POSITION                    0x0000000D
#define _IPC5_IC8IP1_MASK                        0x00002000
#define _IPC5_IC8IP1_LENGTH                      0x00000001

#define _IPC5_IC8IP2_POSITION                    0x0000000E
#define _IPC5_IC8IP2_MASK                        0x00004000
#define _IPC5_IC8IP2_LENGTH                      0x00000001

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

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

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_IC5IP_POSITION                     0x0000000C
#define _IPC9_IC5IP_MASK                         0x00007000
#define _IPC9_IC5IP_LENGTH                       0x00000003

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

#define _IPC11_OC8IP_POSITION                    0x00000000
#define _IPC11_OC8IP_MASK                        0x00000007
#define _IPC11_OC8IP_LENGTH                      0x00000003

#define _IPC11_OC8IP0_POSITION                   0x00000000
#define _IPC11_OC8IP0_MASK                       0x00000001
#define _IPC11_OC8IP0_LENGTH                     0x00000001

#define _IPC11_OC8IP1_POSITION                   0x00000001
#define _IPC11_OC8IP1_MASK                       0x00000002
#define _IPC11_OC8IP1_LENGTH                     0x00000001

#define _IPC11_OC8IP2_POSITION                   0x00000002
#define _IPC11_OC8IP2_MASK                       0x00000004
#define _IPC11_OC8IP2_LENGTH                     0x00000001

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

#define _IPC15_RTCIP_POSITION                    0x00000008
#define _IPC15_RTCIP_MASK                        0x00000700
#define _IPC15_RTCIP_LENGTH                      0x00000003

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

#define _IPC21_SI2C3IP_POSITION                  0x00000000
#define _IPC21_SI2C3IP_MASK                      0x00000007
#define _IPC21_SI2C3IP_LENGTH                    0x00000003

#define _IPC21_MI2C3IP_POSITION                  0x00000004
#define _IPC21_MI2C3IP_MASK                      0x00000070
#define _IPC21_MI2C3IP_LENGTH                    0x00000003

#define _IPC21_USB1IP_POSITION                   0x00000008
#define _IPC21_USB1IP_MASK                       0x00000700
#define _IPC21_USB1IP_LENGTH                     0x00000003

#define _IPC21_U4ERIP_POSITION                   0x0000000C
#define _IPC21_U4ERIP_MASK                       0x00007000
#define _IPC21_U4ERIP_LENGTH                     0x00000003

#define _IPC21_SI2C3IP0_POSITION                 0x00000000
#define _IPC21_SI2C3IP0_MASK                     0x00000001
#define _IPC21_SI2C3IP0_LENGTH                   0x00000001

#define _IPC21_SI2C3IP1_POSITION                 0x00000001
#define _IPC21_SI2C3IP1_MASK                     0x00000002
#define _IPC21_SI2C3IP1_LENGTH                   0x00000001

#define _IPC21_SI2C3IP2_POSITION                 0x00000002
#define _IPC21_SI2C3IP2_MASK                     0x00000004
#define _IPC21_SI2C3IP2_LENGTH                   0x00000001

#define _IPC21_MI2C3IP0_POSITION                 0x00000004
#define _IPC21_MI2C3IP0_MASK                     0x00000010
#define _IPC21_MI2C3IP0_LENGTH                   0x00000001

#define _IPC21_MI2C3IP1_POSITION                 0x00000005
#define _IPC21_MI2C3IP1_MASK                     0x00000020
#define _IPC21_MI2C3IP1_LENGTH                   0x00000001

#define _IPC21_MI2C3IP2_POSITION                 0x00000006
#define _IPC21_MI2C3IP2_MASK                     0x00000040
#define _IPC21_MI2C3IP2_LENGTH                   0x00000001

#define _IPC21_USB1IP0_POSITION                  0x00000008
#define _IPC21_USB1IP0_MASK                      0x00000100
#define _IPC21_USB1IP0_LENGTH                    0x00000001

#define _IPC21_USB1IP1_POSITION                  0x00000009
#define _IPC21_USB1IP1_MASK                      0x00000200
#define _IPC21_USB1IP1_LENGTH                    0x00000001

#define _IPC21_USB1IP2_POSITION                  0x0000000A
#define _IPC21_USB1IP2_MASK                      0x00000400
#define _IPC21_USB1IP2_LENGTH                    0x00000001

#define _IPC21_U4ERIP0_POSITION                  0x0000000C
#define _IPC21_U4ERIP0_MASK                      0x00001000
#define _IPC21_U4ERIP0_LENGTH                    0x00000001

#define _IPC21_U4ERIP1_POSITION                  0x0000000D
#define _IPC21_U4ERIP1_MASK                      0x00002000
#define _IPC21_U4ERIP1_LENGTH                    0x00000001

#define _IPC21_U4ERIP2_POSITION                  0x0000000E
#define _IPC21_U4ERIP2_MASK                      0x00004000
#define _IPC21_U4ERIP2_LENGTH                    0x00000001

#define _IPC21_SI2C3P0_POSITION                  0x00000000
#define _IPC21_SI2C3P0_MASK                      0x00000001
#define _IPC21_SI2C3P0_LENGTH                    0x00000001

#define _IPC21_SI2C3P1_POSITION                  0x00000001
#define _IPC21_SI2C3P1_MASK                      0x00000002
#define _IPC21_SI2C3P1_LENGTH                    0x00000001

#define _IPC21_SI2C3P2_POSITION                  0x00000002
#define _IPC21_SI2C3P2_MASK                      0x00000004
#define _IPC21_SI2C3P2_LENGTH                    0x00000001

#define _IPC21_MI2C3P0_POSITION                  0x00000004
#define _IPC21_MI2C3P0_MASK                      0x00000010
#define _IPC21_MI2C3P0_LENGTH                    0x00000001

#define _IPC21_MI2C3P1_POSITION                  0x00000005
#define _IPC21_MI2C3P1_MASK                      0x00000020
#define _IPC21_MI2C3P1_LENGTH                    0x00000001

#define _IPC21_MI2C3P2_POSITION                  0x00000006
#define _IPC21_MI2C3P2_MASK                      0x00000040
#define _IPC21_MI2C3P2_LENGTH                    0x00000001

#define _IPC21_SI2C3P_POSITION                   0x00000000
#define _IPC21_SI2C3P_MASK                       0x00000007
#define _IPC21_SI2C3P_LENGTH                     0x00000003

#define _IPC21_MI2C3P_POSITION                   0x00000004
#define _IPC21_MI2C3P_MASK                       0x00000070
#define _IPC21_MI2C3P_LENGTH                     0x00000003

#define _IPC22_U4RXIP_POSITION                   0x00000000
#define _IPC22_U4RXIP_MASK                       0x00000007
#define _IPC22_U4RXIP_LENGTH                     0x00000003

#define _IPC22_U4TXIP_POSITION                   0x00000004
#define _IPC22_U4TXIP_MASK                       0x00000070
#define _IPC22_U4TXIP_LENGTH                     0x00000003

#define _IPC22_SPF3IP_POSITION                   0x00000008
#define _IPC22_SPF3IP_MASK                       0x00000700
#define _IPC22_SPF3IP_LENGTH                     0x00000003

#define _IPC22_SPI3IP_POSITION                   0x0000000C
#define _IPC22_SPI3IP_MASK                       0x00007000
#define _IPC22_SPI3IP_LENGTH                     0x00000003

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

#define _IPC22_SPF3IP0_POSITION                  0x00000008
#define _IPC22_SPF3IP0_MASK                      0x00000100
#define _IPC22_SPF3IP0_LENGTH                    0x00000001

#define _IPC22_SPF3IP1_POSITION                  0x00000009
#define _IPC22_SPF3IP1_MASK                      0x00000200
#define _IPC22_SPF3IP1_LENGTH                    0x00000001

#define _IPC22_SPF3IP2_POSITION                  0x0000000A
#define _IPC22_SPF3IP2_MASK                      0x00000400
#define _IPC22_SPF3IP2_LENGTH                    0x00000001

#define _IPC22_SPI3IP0_POSITION                  0x0000000C
#define _IPC22_SPI3IP0_MASK                      0x00001000
#define _IPC22_SPI3IP0_LENGTH                    0x00000001

#define _IPC22_SPI3IP1_POSITION                  0x0000000D
#define _IPC22_SPI3IP1_MASK                      0x00002000
#define _IPC22_SPI3IP1_LENGTH                    0x00000001

#define _IPC22_SPI3IP2_POSITION                  0x0000000E
#define _IPC22_SPI3IP2_MASK                      0x00004000
#define _IPC22_SPI3IP2_LENGTH                    0x00000001

#define _IPC23_OC9IP_POSITION                    0x00000000
#define _IPC23_OC9IP_MASK                        0x00000007
#define _IPC23_OC9IP_LENGTH                      0x00000003

#define _IPC23_IC9IP_POSITION                    0x00000004
#define _IPC23_IC9IP_MASK                        0x00000070
#define _IPC23_IC9IP_LENGTH                      0x00000003

#define _IPC23_OC9IP0_POSITION                   0x00000000
#define _IPC23_OC9IP0_MASK                       0x00000001
#define _IPC23_OC9IP0_LENGTH                     0x00000001

#define _IPC23_OC9IP1_POSITION                   0x00000001
#define _IPC23_OC9IP1_MASK                       0x00000002
#define _IPC23_OC9IP1_LENGTH                     0x00000001

#define _IPC23_OC9IP2_POSITION                   0x00000002
#define _IPC23_OC9IP2_MASK                       0x00000004
#define _IPC23_OC9IP2_LENGTH                     0x00000001

#define _IPC23_IC9IP0_POSITION                   0x00000004
#define _IPC23_IC9IP0_MASK                       0x00000010
#define _IPC23_IC9IP0_LENGTH                     0x00000001

#define _IPC23_IC9IP1_POSITION                   0x00000005
#define _IPC23_IC9IP1_MASK                       0x00000020
#define _IPC23_IC9IP1_LENGTH                     0x00000001

#define _IPC23_IC9IP2_POSITION                   0x00000006
#define _IPC23_IC9IP2_MASK                       0x00000040
#define _IPC23_IC9IP2_LENGTH                     0x00000001

#define _IPC25_GFX1IP_POSITION                   0x00000000
#define _IPC25_GFX1IP_MASK                       0x00000007
#define _IPC25_GFX1IP_LENGTH                     0x00000003

#define _IPC25_GFX1IP0_POSITION                  0x00000000
#define _IPC25_GFX1IP0_MASK                      0x00000001
#define _IPC25_GFX1IP0_LENGTH                    0x00000001

#define _IPC25_GFX1IP1_POSITION                  0x00000001
#define _IPC25_GFX1IP1_MASK                      0x00000002
#define _IPC25_GFX1IP1_LENGTH                    0x00000001

#define _IPC25_GFX1IP2_POSITION                  0x00000002
#define _IPC25_GFX1IP2_MASK                      0x00000004
#define _IPC25_GFX1IP2_LENGTH                    0x00000001

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

#define _IC8CON1_ICM_POSITION                    0x00000000
#define _IC8CON1_ICM_MASK                        0x00000007
#define _IC8CON1_ICM_LENGTH                      0x00000003

#define _IC8CON1_ICBNE_POSITION                  0x00000003
#define _IC8CON1_ICBNE_MASK                      0x00000008
#define _IC8CON1_ICBNE_LENGTH                    0x00000001

#define _IC8CON1_ICOV_POSITION                   0x00000004
#define _IC8CON1_ICOV_MASK                       0x00000010
#define _IC8CON1_ICOV_LENGTH                     0x00000001

#define _IC8CON1_ICI_POSITION                    0x00000005
#define _IC8CON1_ICI_MASK                        0x00000060
#define _IC8CON1_ICI_LENGTH                      0x00000002

#define _IC8CON1_ICTSEL_POSITION                 0x0000000A
#define _IC8CON1_ICTSEL_MASK                     0x00001C00
#define _IC8CON1_ICTSEL_LENGTH                   0x00000003

#define _IC8CON1_ICSIDL_POSITION                 0x0000000D
#define _IC8CON1_ICSIDL_MASK                     0x00002000
#define _IC8CON1_ICSIDL_LENGTH                   0x00000001

#define _IC8CON1_ICM0_POSITION                   0x00000000
#define _IC8CON1_ICM0_MASK                       0x00000001
#define _IC8CON1_ICM0_LENGTH                     0x00000001

#define _IC8CON1_ICM1_POSITION                   0x00000001
#define _IC8CON1_ICM1_MASK                       0x00000002
#define _IC8CON1_ICM1_LENGTH                     0x00000001

#define _IC8CON1_ICM2_POSITION                   0x00000002
#define _IC8CON1_ICM2_MASK                       0x00000004
#define _IC8CON1_ICM2_LENGTH                     0x00000001

#define _IC8CON1_ICI0_POSITION                   0x00000005
#define _IC8CON1_ICI0_MASK                       0x00000020
#define _IC8CON1_ICI0_LENGTH                     0x00000001

#define _IC8CON1_ICI1_POSITION                   0x00000006
#define _IC8CON1_ICI1_MASK                       0x00000040
#define _IC8CON1_ICI1_LENGTH                     0x00000001

#define _IC8CON1_ICTSEL0_POSITION                0x0000000A
#define _IC8CON1_ICTSEL0_MASK                    0x00000400
#define _IC8CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC8CON1_ICTSEL1_POSITION                0x0000000B
#define _IC8CON1_ICTSEL1_MASK                    0x00000800
#define _IC8CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC8CON1_ICTSEL2_POSITION                0x0000000C
#define _IC8CON1_ICTSEL2_MASK                    0x00001000
#define _IC8CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC8CON2_SYNCSEL_POSITION                0x00000000
#define _IC8CON2_SYNCSEL_MASK                    0x0000001F
#define _IC8CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC8CON2_TRIGSTAT_POSITION               0x00000006
#define _IC8CON2_TRIGSTAT_MASK                   0x00000040
#define _IC8CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC8CON2_ICTRIG_POSITION                 0x00000007
#define _IC8CON2_ICTRIG_MASK                     0x00000080
#define _IC8CON2_ICTRIG_LENGTH                   0x00000001

#define _IC8CON2_IC32_POSITION                   0x00000008
#define _IC8CON2_IC32_MASK                       0x00000100
#define _IC8CON2_IC32_LENGTH                     0x00000001

#define _IC8CON2_SYNCSEL0_POSITION               0x00000000
#define _IC8CON2_SYNCSEL0_MASK                   0x00000001
#define _IC8CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC8CON2_SYNCSEL1_POSITION               0x00000001
#define _IC8CON2_SYNCSEL1_MASK                   0x00000002
#define _IC8CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC8CON2_SYNCSEL2_POSITION               0x00000002
#define _IC8CON2_SYNCSEL2_MASK                   0x00000004
#define _IC8CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC8CON2_SYNCSEL3_POSITION               0x00000003
#define _IC8CON2_SYNCSEL3_MASK                   0x00000008
#define _IC8CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC8CON2_SYNCSEL4_POSITION               0x00000004
#define _IC8CON2_SYNCSEL4_MASK                   0x00000010
#define _IC8CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC9CON1_ICM_POSITION                    0x00000000
#define _IC9CON1_ICM_MASK                        0x00000007
#define _IC9CON1_ICM_LENGTH                      0x00000003

#define _IC9CON1_ICBNE_POSITION                  0x00000003
#define _IC9CON1_ICBNE_MASK                      0x00000008
#define _IC9CON1_ICBNE_LENGTH                    0x00000001

#define _IC9CON1_ICOV_POSITION                   0x00000004
#define _IC9CON1_ICOV_MASK                       0x00000010
#define _IC9CON1_ICOV_LENGTH                     0x00000001

#define _IC9CON1_ICI_POSITION                    0x00000005
#define _IC9CON1_ICI_MASK                        0x00000060
#define _IC9CON1_ICI_LENGTH                      0x00000002

#define _IC9CON1_ICTSEL_POSITION                 0x0000000A
#define _IC9CON1_ICTSEL_MASK                     0x00001C00
#define _IC9CON1_ICTSEL_LENGTH                   0x00000003

#define _IC9CON1_ICSIDL_POSITION                 0x0000000D
#define _IC9CON1_ICSIDL_MASK                     0x00002000
#define _IC9CON1_ICSIDL_LENGTH                   0x00000001

#define _IC9CON1_ICM0_POSITION                   0x00000000
#define _IC9CON1_ICM0_MASK                       0x00000001
#define _IC9CON1_ICM0_LENGTH                     0x00000001

#define _IC9CON1_ICM1_POSITION                   0x00000001
#define _IC9CON1_ICM1_MASK                       0x00000002
#define _IC9CON1_ICM1_LENGTH                     0x00000001

#define _IC9CON1_ICM2_POSITION                   0x00000002
#define _IC9CON1_ICM2_MASK                       0x00000004
#define _IC9CON1_ICM2_LENGTH                     0x00000001

#define _IC9CON1_ICI0_POSITION                   0x00000005
#define _IC9CON1_ICI0_MASK                       0x00000020
#define _IC9CON1_ICI0_LENGTH                     0x00000001

#define _IC9CON1_ICI1_POSITION                   0x00000006
#define _IC9CON1_ICI1_MASK                       0x00000040
#define _IC9CON1_ICI1_LENGTH                     0x00000001

#define _IC9CON1_ICTSEL0_POSITION                0x0000000A
#define _IC9CON1_ICTSEL0_MASK                    0x00000400
#define _IC9CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC9CON1_ICTSEL1_POSITION                0x0000000B
#define _IC9CON1_ICTSEL1_MASK                    0x00000800
#define _IC9CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC9CON1_ICTSEL2_POSITION                0x0000000C
#define _IC9CON1_ICTSEL2_MASK                    0x00001000
#define _IC9CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC9CON2_SYNCSEL_POSITION                0x00000000
#define _IC9CON2_SYNCSEL_MASK                    0x0000001F
#define _IC9CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC9CON2_TRIGSTAT_POSITION               0x00000006
#define _IC9CON2_TRIGSTAT_MASK                   0x00000040
#define _IC9CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC9CON2_ICTRIG_POSITION                 0x00000007
#define _IC9CON2_ICTRIG_MASK                     0x00000080
#define _IC9CON2_ICTRIG_LENGTH                   0x00000001

#define _IC9CON2_IC32_POSITION                   0x00000008
#define _IC9CON2_IC32_MASK                       0x00000100
#define _IC9CON2_IC32_LENGTH                     0x00000001

#define _IC9CON2_SYNCSEL0_POSITION               0x00000000
#define _IC9CON2_SYNCSEL0_MASK                   0x00000001
#define _IC9CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC9CON2_SYNCSEL1_POSITION               0x00000001
#define _IC9CON2_SYNCSEL1_MASK                   0x00000002
#define _IC9CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC9CON2_SYNCSEL2_POSITION               0x00000002
#define _IC9CON2_SYNCSEL2_MASK                   0x00000004
#define _IC9CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC9CON2_SYNCSEL3_POSITION               0x00000003
#define _IC9CON2_SYNCSEL3_MASK                   0x00000008
#define _IC9CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC9CON2_SYNCSEL4_POSITION               0x00000004
#define _IC9CON2_SYNCSEL4_MASK                   0x00000010
#define _IC9CON2_SYNCSEL4_LENGTH                 0x00000001

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

#define _OC8CON1_OCM_POSITION                    0x00000000
#define _OC8CON1_OCM_MASK                        0x00000007
#define _OC8CON1_OCM_LENGTH                      0x00000003

#define _OC8CON1_TRIGMODE_POSITION               0x00000003
#define _OC8CON1_TRIGMODE_MASK                   0x00000008
#define _OC8CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC8CON1_OCFLT_POSITION                  0x00000004
#define _OC8CON1_OCFLT_MASK                      0x00000070
#define _OC8CON1_OCFLT_LENGTH                    0x00000003

#define _OC8CON1_ENFLT_POSITION                  0x00000007
#define _OC8CON1_ENFLT_MASK                      0x00000380
#define _OC8CON1_ENFLT_LENGTH                    0x00000003

#define _OC8CON1_OCTSEL_POSITION                 0x0000000A
#define _OC8CON1_OCTSEL_MASK                     0x00001C00
#define _OC8CON1_OCTSEL_LENGTH                   0x00000003

#define _OC8CON1_OCSIDL_POSITION                 0x0000000D
#define _OC8CON1_OCSIDL_MASK                     0x00002000
#define _OC8CON1_OCSIDL_LENGTH                   0x00000001

#define _OC8CON1_OCM0_POSITION                   0x00000000
#define _OC8CON1_OCM0_MASK                       0x00000001
#define _OC8CON1_OCM0_LENGTH                     0x00000001

#define _OC8CON1_OCM1_POSITION                   0x00000001
#define _OC8CON1_OCM1_MASK                       0x00000002
#define _OC8CON1_OCM1_LENGTH                     0x00000001

#define _OC8CON1_OCM2_POSITION                   0x00000002
#define _OC8CON1_OCM2_MASK                       0x00000004
#define _OC8CON1_OCM2_LENGTH                     0x00000001

#define _OC8CON1_OCFLT0_POSITION                 0x00000004
#define _OC8CON1_OCFLT0_MASK                     0x00000010
#define _OC8CON1_OCFLT0_LENGTH                   0x00000001

#define _OC8CON1_OCFLT1_POSITION                 0x00000005
#define _OC8CON1_OCFLT1_MASK                     0x00000020
#define _OC8CON1_OCFLT1_LENGTH                   0x00000001

#define _OC8CON1_OCFLT2_POSITION                 0x00000006
#define _OC8CON1_OCFLT2_MASK                     0x00000040
#define _OC8CON1_OCFLT2_LENGTH                   0x00000001

#define _OC8CON1_ENFLT0_POSITION                 0x00000007
#define _OC8CON1_ENFLT0_MASK                     0x00000080
#define _OC8CON1_ENFLT0_LENGTH                   0x00000001

#define _OC8CON1_ENFLT1_POSITION                 0x00000008
#define _OC8CON1_ENFLT1_MASK                     0x00000100
#define _OC8CON1_ENFLT1_LENGTH                   0x00000001

#define _OC8CON1_ENFLT2_POSITION                 0x00000009
#define _OC8CON1_ENFLT2_MASK                     0x00000200
#define _OC8CON1_ENFLT2_LENGTH                   0x00000001

#define _OC8CON1_OCTSEL0_POSITION                0x0000000A
#define _OC8CON1_OCTSEL0_MASK                    0x00000400
#define _OC8CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC8CON1_OCTSEL1_POSITION                0x0000000B
#define _OC8CON1_OCTSEL1_MASK                    0x00000800
#define _OC8CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC8CON1_OCTSEL2_POSITION                0x0000000C
#define _OC8CON1_OCTSEL2_MASK                    0x00001000
#define _OC8CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC8CON2_SYNCSEL_POSITION                0x00000000
#define _OC8CON2_SYNCSEL_MASK                    0x0000001F
#define _OC8CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC8CON2_OCTRIS_POSITION                 0x00000005
#define _OC8CON2_OCTRIS_MASK                     0x00000020
#define _OC8CON2_OCTRIS_LENGTH                   0x00000001

#define _OC8CON2_TRIGSTAT_POSITION               0x00000006
#define _OC8CON2_TRIGSTAT_MASK                   0x00000040
#define _OC8CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC8CON2_OCTRIG_POSITION                 0x00000007
#define _OC8CON2_OCTRIG_MASK                     0x00000080
#define _OC8CON2_OCTRIG_LENGTH                   0x00000001

#define _OC8CON2_OC32_POSITION                   0x00000008
#define _OC8CON2_OC32_MASK                       0x00000100
#define _OC8CON2_OC32_LENGTH                     0x00000001

#define _OC8CON2_DCB_POSITION                    0x00000009
#define _OC8CON2_DCB_MASK                        0x00000600
#define _OC8CON2_DCB_LENGTH                      0x00000002

#define _OC8CON2_OCINV_POSITION                  0x0000000C
#define _OC8CON2_OCINV_MASK                      0x00001000
#define _OC8CON2_OCINV_LENGTH                    0x00000001

#define _OC8CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC8CON2_FLTTRIEN_MASK                   0x00002000
#define _OC8CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC8CON2_FLTOUT_POSITION                 0x0000000E
#define _OC8CON2_FLTOUT_MASK                     0x00004000
#define _OC8CON2_FLTOUT_LENGTH                   0x00000001

#define _OC8CON2_FLTMD_POSITION                  0x0000000F
#define _OC8CON2_FLTMD_MASK                      0x00008000
#define _OC8CON2_FLTMD_LENGTH                    0x00000001

#define _OC8CON2_SYNCSEL0_POSITION               0x00000000
#define _OC8CON2_SYNCSEL0_MASK                   0x00000001
#define _OC8CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC8CON2_SYNCSEL1_POSITION               0x00000001
#define _OC8CON2_SYNCSEL1_MASK                   0x00000002
#define _OC8CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC8CON2_SYNCSEL2_POSITION               0x00000002
#define _OC8CON2_SYNCSEL2_MASK                   0x00000004
#define _OC8CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC8CON2_SYNCSEL3_POSITION               0x00000003
#define _OC8CON2_SYNCSEL3_MASK                   0x00000008
#define _OC8CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC8CON2_SYNCSEL4_POSITION               0x00000004
#define _OC8CON2_SYNCSEL4_MASK                   0x00000010
#define _OC8CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC8CON2_DCB0_POSITION                   0x00000009
#define _OC8CON2_DCB0_MASK                       0x00000200
#define _OC8CON2_DCB0_LENGTH                     0x00000001

#define _OC8CON2_DCB1_POSITION                   0x0000000A
#define _OC8CON2_DCB1_MASK                       0x00000400
#define _OC8CON2_DCB1_LENGTH                     0x00000001

#define _OC8CON2_FLTMODE_POSITION                0x0000000F
#define _OC8CON2_FLTMODE_MASK                    0x00008000
#define _OC8CON2_FLTMODE_LENGTH                  0x00000001

#define _OC9CON1_OCM_POSITION                    0x00000000
#define _OC9CON1_OCM_MASK                        0x00000007
#define _OC9CON1_OCM_LENGTH                      0x00000003

#define _OC9CON1_TRIGMODE_POSITION               0x00000003
#define _OC9CON1_TRIGMODE_MASK                   0x00000008
#define _OC9CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC9CON1_OCFLT_POSITION                  0x00000004
#define _OC9CON1_OCFLT_MASK                      0x00000070
#define _OC9CON1_OCFLT_LENGTH                    0x00000003

#define _OC9CON1_ENFLT_POSITION                  0x00000007
#define _OC9CON1_ENFLT_MASK                      0x00000380
#define _OC9CON1_ENFLT_LENGTH                    0x00000003

#define _OC9CON1_OCTSEL_POSITION                 0x0000000A
#define _OC9CON1_OCTSEL_MASK                     0x00001C00
#define _OC9CON1_OCTSEL_LENGTH                   0x00000003

#define _OC9CON1_OCSIDL_POSITION                 0x0000000D
#define _OC9CON1_OCSIDL_MASK                     0x00002000
#define _OC9CON1_OCSIDL_LENGTH                   0x00000001

#define _OC9CON1_OCM0_POSITION                   0x00000000
#define _OC9CON1_OCM0_MASK                       0x00000001
#define _OC9CON1_OCM0_LENGTH                     0x00000001

#define _OC9CON1_OCM1_POSITION                   0x00000001
#define _OC9CON1_OCM1_MASK                       0x00000002
#define _OC9CON1_OCM1_LENGTH                     0x00000001

#define _OC9CON1_OCM2_POSITION                   0x00000002
#define _OC9CON1_OCM2_MASK                       0x00000004
#define _OC9CON1_OCM2_LENGTH                     0x00000001

#define _OC9CON1_OCFLT0_POSITION                 0x00000004
#define _OC9CON1_OCFLT0_MASK                     0x00000010
#define _OC9CON1_OCFLT0_LENGTH                   0x00000001

#define _OC9CON1_OCFLT1_POSITION                 0x00000005
#define _OC9CON1_OCFLT1_MASK                     0x00000020
#define _OC9CON1_OCFLT1_LENGTH                   0x00000001

#define _OC9CON1_OCFLT2_POSITION                 0x00000006
#define _OC9CON1_OCFLT2_MASK                     0x00000040
#define _OC9CON1_OCFLT2_LENGTH                   0x00000001

#define _OC9CON1_ENFLT0_POSITION                 0x00000007
#define _OC9CON1_ENFLT0_MASK                     0x00000080
#define _OC9CON1_ENFLT0_LENGTH                   0x00000001

#define _OC9CON1_ENFLT1_POSITION                 0x00000008
#define _OC9CON1_ENFLT1_MASK                     0x00000100
#define _OC9CON1_ENFLT1_LENGTH                   0x00000001

#define _OC9CON1_ENFLT2_POSITION                 0x00000009
#define _OC9CON1_ENFLT2_MASK                     0x00000200
#define _OC9CON1_ENFLT2_LENGTH                   0x00000001

#define _OC9CON1_OCTSEL0_POSITION                0x0000000A
#define _OC9CON1_OCTSEL0_MASK                    0x00000400
#define _OC9CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC9CON1_OCTSEL1_POSITION                0x0000000B
#define _OC9CON1_OCTSEL1_MASK                    0x00000800
#define _OC9CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC9CON1_OCTSEL2_POSITION                0x0000000C
#define _OC9CON1_OCTSEL2_MASK                    0x00001000
#define _OC9CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC9CON2_SYNCSEL_POSITION                0x00000000
#define _OC9CON2_SYNCSEL_MASK                    0x0000001F
#define _OC9CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC9CON2_OCTRIS_POSITION                 0x00000005
#define _OC9CON2_OCTRIS_MASK                     0x00000020
#define _OC9CON2_OCTRIS_LENGTH                   0x00000001

#define _OC9CON2_TRIGSTAT_POSITION               0x00000006
#define _OC9CON2_TRIGSTAT_MASK                   0x00000040
#define _OC9CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC9CON2_OCTRIG_POSITION                 0x00000007
#define _OC9CON2_OCTRIG_MASK                     0x00000080
#define _OC9CON2_OCTRIG_LENGTH                   0x00000001

#define _OC9CON2_OC32_POSITION                   0x00000008
#define _OC9CON2_OC32_MASK                       0x00000100
#define _OC9CON2_OC32_LENGTH                     0x00000001

#define _OC9CON2_DCB_POSITION                    0x00000009
#define _OC9CON2_DCB_MASK                        0x00000600
#define _OC9CON2_DCB_LENGTH                      0x00000002

#define _OC9CON2_OCINV_POSITION                  0x0000000C
#define _OC9CON2_OCINV_MASK                      0x00001000
#define _OC9CON2_OCINV_LENGTH                    0x00000001

#define _OC9CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC9CON2_FLTTRIEN_MASK                   0x00002000
#define _OC9CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC9CON2_FLTOUT_POSITION                 0x0000000E
#define _OC9CON2_FLTOUT_MASK                     0x00004000
#define _OC9CON2_FLTOUT_LENGTH                   0x00000001

#define _OC9CON2_FLTMD_POSITION                  0x0000000F
#define _OC9CON2_FLTMD_MASK                      0x00008000
#define _OC9CON2_FLTMD_LENGTH                    0x00000001

#define _OC9CON2_SYNCSEL0_POSITION               0x00000000
#define _OC9CON2_SYNCSEL0_MASK                   0x00000001
#define _OC9CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC9CON2_SYNCSEL1_POSITION               0x00000001
#define _OC9CON2_SYNCSEL1_MASK                   0x00000002
#define _OC9CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC9CON2_SYNCSEL2_POSITION               0x00000002
#define _OC9CON2_SYNCSEL2_MASK                   0x00000004
#define _OC9CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC9CON2_SYNCSEL3_POSITION               0x00000003
#define _OC9CON2_SYNCSEL3_MASK                   0x00000008
#define _OC9CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC9CON2_SYNCSEL4_POSITION               0x00000004
#define _OC9CON2_SYNCSEL4_MASK                   0x00000010
#define _OC9CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC9CON2_DCB0_POSITION                   0x00000009
#define _OC9CON2_DCB0_MASK                       0x00000200
#define _OC9CON2_DCB0_LENGTH                     0x00000001

#define _OC9CON2_DCB1_POSITION                   0x0000000A
#define _OC9CON2_DCB1_MASK                       0x00000400
#define _OC9CON2_DCB1_LENGTH                     0x00000001

#define _OC9CON2_FLTMODE_POSITION                0x0000000F
#define _OC9CON2_FLTMODE_MASK                    0x00008000
#define _OC9CON2_FLTMODE_LENGTH                  0x00000001

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

#define _I2C3CON_SEN_POSITION                    0x00000000
#define _I2C3CON_SEN_MASK                        0x00000001
#define _I2C3CON_SEN_LENGTH                      0x00000001

#define _I2C3CON_RSEN_POSITION                   0x00000001
#define _I2C3CON_RSEN_MASK                       0x00000002
#define _I2C3CON_RSEN_LENGTH                     0x00000001

#define _I2C3CON_PEN_POSITION                    0x00000002
#define _I2C3CON_PEN_MASK                        0x00000004
#define _I2C3CON_PEN_LENGTH                      0x00000001

#define _I2C3CON_RCEN_POSITION                   0x00000003
#define _I2C3CON_RCEN_MASK                       0x00000008
#define _I2C3CON_RCEN_LENGTH                     0x00000001

#define _I2C3CON_ACKEN_POSITION                  0x00000004
#define _I2C3CON_ACKEN_MASK                      0x00000010
#define _I2C3CON_ACKEN_LENGTH                    0x00000001

#define _I2C3CON_ACKDT_POSITION                  0x00000005
#define _I2C3CON_ACKDT_MASK                      0x00000020
#define _I2C3CON_ACKDT_LENGTH                    0x00000001

#define _I2C3CON_STREN_POSITION                  0x00000006
#define _I2C3CON_STREN_MASK                      0x00000040
#define _I2C3CON_STREN_LENGTH                    0x00000001

#define _I2C3CON_GCEN_POSITION                   0x00000007
#define _I2C3CON_GCEN_MASK                       0x00000080
#define _I2C3CON_GCEN_LENGTH                     0x00000001

#define _I2C3CON_SMEN_POSITION                   0x00000008
#define _I2C3CON_SMEN_MASK                       0x00000100
#define _I2C3CON_SMEN_LENGTH                     0x00000001

#define _I2C3CON_DISSLW_POSITION                 0x00000009
#define _I2C3CON_DISSLW_MASK                     0x00000200
#define _I2C3CON_DISSLW_LENGTH                   0x00000001

#define _I2C3CON_A10M_POSITION                   0x0000000A
#define _I2C3CON_A10M_MASK                       0x00000400
#define _I2C3CON_A10M_LENGTH                     0x00000001

#define _I2C3CON_IPMIEN_POSITION                 0x0000000B
#define _I2C3CON_IPMIEN_MASK                     0x00000800
#define _I2C3CON_IPMIEN_LENGTH                   0x00000001

#define _I2C3CON_SCLREL_POSITION                 0x0000000C
#define _I2C3CON_SCLREL_MASK                     0x00001000
#define _I2C3CON_SCLREL_LENGTH                   0x00000001

#define _I2C3CON_I2CSIDL_POSITION                0x0000000D
#define _I2C3CON_I2CSIDL_MASK                    0x00002000
#define _I2C3CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C3CON_I2CEN_POSITION                  0x0000000F
#define _I2C3CON_I2CEN_MASK                      0x00008000
#define _I2C3CON_I2CEN_LENGTH                    0x00000001

#define _I2C3STAT_TBF_POSITION                   0x00000000
#define _I2C3STAT_TBF_MASK                       0x00000001
#define _I2C3STAT_TBF_LENGTH                     0x00000001

#define _I2C3STAT_RBF_POSITION                   0x00000001
#define _I2C3STAT_RBF_MASK                       0x00000002
#define _I2C3STAT_RBF_LENGTH                     0x00000001

#define _I2C3STAT_R_NOT_W_POSITION               0x00000002
#define _I2C3STAT_R_NOT_W_MASK                   0x00000004
#define _I2C3STAT_R_NOT_W_LENGTH                 0x00000001

#define _I2C3STAT_S_POSITION                     0x00000003
#define _I2C3STAT_S_MASK                         0x00000008
#define _I2C3STAT_S_LENGTH                       0x00000001

#define _I2C3STAT_P_POSITION                     0x00000004
#define _I2C3STAT_P_MASK                         0x00000010
#define _I2C3STAT_P_LENGTH                       0x00000001

#define _I2C3STAT_D_NOT_A_POSITION               0x00000005
#define _I2C3STAT_D_NOT_A_MASK                   0x00000020
#define _I2C3STAT_D_NOT_A_LENGTH                 0x00000001

#define _I2C3STAT_I2COV_POSITION                 0x00000006
#define _I2C3STAT_I2COV_MASK                     0x00000040
#define _I2C3STAT_I2COV_LENGTH                   0x00000001

#define _I2C3STAT_IWCOL_POSITION                 0x00000007
#define _I2C3STAT_IWCOL_MASK                     0x00000080
#define _I2C3STAT_IWCOL_LENGTH                   0x00000001

#define _I2C3STAT_ADD10_POSITION                 0x00000008
#define _I2C3STAT_ADD10_MASK                     0x00000100
#define _I2C3STAT_ADD10_LENGTH                   0x00000001

#define _I2C3STAT_GCSTAT_POSITION                0x00000009
#define _I2C3STAT_GCSTAT_MASK                    0x00000200
#define _I2C3STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C3STAT_BCL_POSITION                   0x0000000A
#define _I2C3STAT_BCL_MASK                       0x00000400
#define _I2C3STAT_BCL_LENGTH                     0x00000001

#define _I2C3STAT_TRSTAT_POSITION                0x0000000E
#define _I2C3STAT_TRSTAT_MASK                    0x00004000
#define _I2C3STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C3STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C3STAT_ACKSTAT_MASK                   0x00008000
#define _I2C3STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C3STAT_R_W_POSITION                   0x00000002
#define _I2C3STAT_R_W_MASK                       0x00000004
#define _I2C3STAT_R_W_LENGTH                     0x00000001

#define _I2C3STAT_D_A_POSITION                   0x00000005
#define _I2C3STAT_D_A_MASK                       0x00000020
#define _I2C3STAT_D_A_LENGTH                     0x00000001

#define _SPI3STAT_SPIRBF_POSITION                0x00000000
#define _SPI3STAT_SPIRBF_MASK                    0x00000001
#define _SPI3STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI3STAT_SPITBF_POSITION                0x00000001
#define _SPI3STAT_SPITBF_MASK                    0x00000002
#define _SPI3STAT_SPITBF_LENGTH                  0x00000001

#define _SPI3STAT_SISEL_POSITION                 0x00000002
#define _SPI3STAT_SISEL_MASK                     0x0000001C
#define _SPI3STAT_SISEL_LENGTH                   0x00000003

#define _SPI3STAT_SRXMPT_POSITION                0x00000005
#define _SPI3STAT_SRXMPT_MASK                    0x00000020
#define _SPI3STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI3STAT_SPIROV_POSITION                0x00000006
#define _SPI3STAT_SPIROV_MASK                    0x00000040
#define _SPI3STAT_SPIROV_LENGTH                  0x00000001

#define _SPI3STAT_SRMPT_POSITION                 0x00000007
#define _SPI3STAT_SRMPT_MASK                     0x00000080
#define _SPI3STAT_SRMPT_LENGTH                   0x00000001

#define _SPI3STAT_SPIBEC_POSITION                0x00000008
#define _SPI3STAT_SPIBEC_MASK                    0x00000700
#define _SPI3STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI3STAT_SPISIDL_POSITION               0x0000000D
#define _SPI3STAT_SPISIDL_MASK                   0x00002000
#define _SPI3STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI3STAT_SPIEN_POSITION                 0x0000000F
#define _SPI3STAT_SPIEN_MASK                     0x00008000
#define _SPI3STAT_SPIEN_LENGTH                   0x00000001

#define _SPI3STAT_SISEL0_POSITION                0x00000002
#define _SPI3STAT_SISEL0_MASK                    0x00000004
#define _SPI3STAT_SISEL0_LENGTH                  0x00000001

#define _SPI3STAT_SISEL1_POSITION                0x00000003
#define _SPI3STAT_SISEL1_MASK                    0x00000008
#define _SPI3STAT_SISEL1_LENGTH                  0x00000001

#define _SPI3STAT_SISEL2_POSITION                0x00000004
#define _SPI3STAT_SISEL2_MASK                    0x00000010
#define _SPI3STAT_SISEL2_LENGTH                  0x00000001

#define _SPI3STAT_SPIBEC0_POSITION               0x00000008
#define _SPI3STAT_SPIBEC0_MASK                   0x00000100
#define _SPI3STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI3STAT_SPIBEC1_POSITION               0x00000009
#define _SPI3STAT_SPIBEC1_MASK                   0x00000200
#define _SPI3STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI3STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI3STAT_SPIBEC2_MASK                   0x00000400
#define _SPI3STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI3CON1_PPRE_POSITION                  0x00000000
#define _SPI3CON1_PPRE_MASK                      0x00000003
#define _SPI3CON1_PPRE_LENGTH                    0x00000002

#define _SPI3CON1_SPRE_POSITION                  0x00000002
#define _SPI3CON1_SPRE_MASK                      0x0000001C
#define _SPI3CON1_SPRE_LENGTH                    0x00000003

#define _SPI3CON1_MSTEN_POSITION                 0x00000005
#define _SPI3CON1_MSTEN_MASK                     0x00000020
#define _SPI3CON1_MSTEN_LENGTH                   0x00000001

#define _SPI3CON1_CKP_POSITION                   0x00000006
#define _SPI3CON1_CKP_MASK                       0x00000040
#define _SPI3CON1_CKP_LENGTH                     0x00000001

#define _SPI3CON1_SSEN_POSITION                  0x00000007
#define _SPI3CON1_SSEN_MASK                      0x00000080
#define _SPI3CON1_SSEN_LENGTH                    0x00000001

#define _SPI3CON1_CKE_POSITION                   0x00000008
#define _SPI3CON1_CKE_MASK                       0x00000100
#define _SPI3CON1_CKE_LENGTH                     0x00000001

#define _SPI3CON1_SMP_POSITION                   0x00000009
#define _SPI3CON1_SMP_MASK                       0x00000200
#define _SPI3CON1_SMP_LENGTH                     0x00000001

#define _SPI3CON1_MODE16_POSITION                0x0000000A
#define _SPI3CON1_MODE16_MASK                    0x00000400
#define _SPI3CON1_MODE16_LENGTH                  0x00000001

#define _SPI3CON1_DISSDO_POSITION                0x0000000B
#define _SPI3CON1_DISSDO_MASK                    0x00000800
#define _SPI3CON1_DISSDO_LENGTH                  0x00000001

#define _SPI3CON1_DISSCK_POSITION                0x0000000C
#define _SPI3CON1_DISSCK_MASK                    0x00001000
#define _SPI3CON1_DISSCK_LENGTH                  0x00000001

#define _SPI3CON1_PPRE0_POSITION                 0x00000000
#define _SPI3CON1_PPRE0_MASK                     0x00000001
#define _SPI3CON1_PPRE0_LENGTH                   0x00000001

#define _SPI3CON1_PPRE1_POSITION                 0x00000001
#define _SPI3CON1_PPRE1_MASK                     0x00000002
#define _SPI3CON1_PPRE1_LENGTH                   0x00000001

#define _SPI3CON1_SPRE0_POSITION                 0x00000002
#define _SPI3CON1_SPRE0_MASK                     0x00000004
#define _SPI3CON1_SPRE0_LENGTH                   0x00000001

#define _SPI3CON1_SPRE1_POSITION                 0x00000003
#define _SPI3CON1_SPRE1_MASK                     0x00000008
#define _SPI3CON1_SPRE1_LENGTH                   0x00000001

#define _SPI3CON1_SPRE2_POSITION                 0x00000004
#define _SPI3CON1_SPRE2_MASK                     0x00000010
#define _SPI3CON1_SPRE2_LENGTH                   0x00000001

#define _SPI3CON2_SPIBEN_POSITION                0x00000000
#define _SPI3CON2_SPIBEN_MASK                    0x00000001
#define _SPI3CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI3CON2_SPIFE_POSITION                 0x00000001
#define _SPI3CON2_SPIFE_MASK                     0x00000002
#define _SPI3CON2_SPIFE_LENGTH                   0x00000001

#define _SPI3CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI3CON2_SPIFPOL_MASK                   0x00002000
#define _SPI3CON2_SPIFPOL_LENGTH                 0x00000001

#define _SPI3CON2_SPIFSD_POSITION                0x0000000E
#define _SPI3CON2_SPIFSD_MASK                    0x00004000
#define _SPI3CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI3CON2_FRMEN_POSITION                 0x0000000F
#define _SPI3CON2_FRMEN_MASK                     0x00008000
#define _SPI3CON2_FRMEN_LENGTH                   0x00000001

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

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

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

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF7_POSITION                   0x00000007
#define _TRISF_TRISF7_MASK                       0x00000080
#define _TRISF_TRISF7_LENGTH                     0x00000001

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF7_POSITION                      0x00000007
#define _PORTF_RF7_MASK                          0x00000080
#define _PORTF_RF7_LENGTH                        0x00000001

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF7_POSITION                     0x00000007
#define _LATF_LATF7_MASK                         0x00000080
#define _LATF_LATF7_LENGTH                       0x00000001

#define _ODCF_ODF0_POSITION                      0x00000000
#define _ODCF_ODF0_MASK                          0x00000001
#define _ODCF_ODF0_LENGTH                        0x00000001

#define _ODCF_ODF1_POSITION                      0x00000001
#define _ODCF_ODF1_MASK                          0x00000002
#define _ODCF_ODF1_LENGTH                        0x00000001

#define _ODCF_ODF3_POSITION                      0x00000003
#define _ODCF_ODF3_MASK                          0x00000008
#define _ODCF_ODF3_LENGTH                        0x00000001

#define _ODCF_ODF4_POSITION                      0x00000004
#define _ODCF_ODF4_MASK                          0x00000010
#define _ODCF_ODF4_LENGTH                        0x00000001

#define _ODCF_ODF5_POSITION                      0x00000005
#define _ODCF_ODF5_MASK                          0x00000020
#define _ODCF_ODF5_LENGTH                        0x00000001

#define _ODCF_ODF7_POSITION                      0x00000007
#define _ODCF_ODF7_MASK                          0x00000080
#define _ODCF_ODF7_LENGTH                        0x00000001

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

#define _PADCFG1_RTSECSEL_POSITION               0x00000001
#define _PADCFG1_RTSECSEL_MASK                   0x00000002
#define _PADCFG1_RTSECSEL_LENGTH                 0x00000001

#define _PADCFG1_RTSECSEL0_POSITION              0x00000001
#define _PADCFG1_RTSECSEL0_MASK                  0x00000002
#define _PADCFG1_RTSECSEL0_LENGTH                0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000005
#define _AD1CON1_SSRC0_MASK                      0x00000020
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000006
#define _AD1CON1_SSRC1_MASK                      0x00000040
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000007
#define _AD1CON1_SSRC2_MASK                      0x00000080
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

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

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

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

#define _AD1CON2_VCFG0_POSITION                  0x0000000D
#define _AD1CON2_VCFG0_MASK                      0x00002000
#define _AD1CON2_VCFG0_LENGTH                    0x00000001

#define _AD1CON2_VCFG1_POSITION                  0x0000000E
#define _AD1CON2_VCFG1_MASK                      0x00004000
#define _AD1CON2_VCFG1_LENGTH                    0x00000001

#define _AD1CON2_VCFG2_POSITION                  0x0000000F
#define _AD1CON2_VCFG2_MASK                      0x00008000
#define _AD1CON2_VCFG2_LENGTH                    0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

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

#define _AD1CHS_CH0NA_POSITION                   0x00000007
#define _AD1CHS_CH0NA_MASK                       0x00000080
#define _AD1CHS_CH0NA_LENGTH                     0x00000001

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00001F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000005

#define _AD1CHS_CH0NB_POSITION                   0x0000000F
#define _AD1CHS_CH0NB_MASK                       0x00008000
#define _AD1CHS_CH0NB_LENGTH                     0x00000001

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

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000007
#define _AD1CHS0_CH0NA_MASK                      0x00000080
#define _AD1CHS0_CH0NA_LENGTH                    0x00000001

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000F
#define _AD1CHS0_CH0NB_MASK                      0x00008000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000001

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

#define _AD1CSSH_CSSL24_POSITION                 0x00000008
#define _AD1CSSH_CSSL24_MASK                     0x00000100
#define _AD1CSSH_CSSL24_LENGTH                   0x00000001

#define _AD1CSSH_CSSL25_POSITION                 0x00000009
#define _AD1CSSH_CSSL25_MASK                     0x00000200
#define _AD1CSSH_CSSL25_LENGTH                   0x00000001

#define _AD1CSSH_CSSL26_POSITION                 0x0000000A
#define _AD1CSSH_CSSL26_MASK                     0x00000400
#define _AD1CSSH_CSSL26_LENGTH                   0x00000001

#define _AD1CSSH_CSSL27_POSITION                 0x0000000B
#define _AD1CSSH_CSSL27_MASK                     0x00000800
#define _AD1CSSH_CSSL27_LENGTH                   0x00000001

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL2_POSITION                  0x00000002
#define _AD1CSSL_CSSL2_MASK                      0x00000004
#define _AD1CSSL_CSSL2_LENGTH                    0x00000001

#define _AD1CSSL_CSSL3_POSITION                  0x00000003
#define _AD1CSSL_CSSL3_MASK                      0x00000008
#define _AD1CSSL_CSSL3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL4_POSITION                  0x00000004
#define _AD1CSSL_CSSL4_MASK                      0x00000010
#define _AD1CSSL_CSSL4_LENGTH                    0x00000001

#define _AD1CSSL_CSSL5_POSITION                  0x00000005
#define _AD1CSSL_CSSL5_MASK                      0x00000020
#define _AD1CSSL_CSSL5_LENGTH                    0x00000001

#define _AD1CSSL_CSSL6_POSITION                  0x00000006
#define _AD1CSSL_CSSL6_MASK                      0x00000040
#define _AD1CSSL_CSSL6_LENGTH                    0x00000001

#define _AD1CSSL_CSSL7_POSITION                  0x00000007
#define _AD1CSSL_CSSL7_MASK                      0x00000080
#define _AD1CSSL_CSSL7_LENGTH                    0x00000001

#define _AD1CSSL_CSSL8_POSITION                  0x00000008
#define _AD1CSSL_CSSL8_MASK                      0x00000100
#define _AD1CSSL_CSSL8_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL11_POSITION                 0x0000000B
#define _AD1CSSL_CSSL11_MASK                     0x00000800
#define _AD1CSSL_CSSL11_LENGTH                   0x00000001

#define _AD1CSSL_CSSL12_POSITION                 0x0000000C
#define _AD1CSSL_CSSL12_MASK                     0x00001000
#define _AD1CSSL_CSSL12_LENGTH                   0x00000001

#define _AD1CSSL_CSSL13_POSITION                 0x0000000D
#define _AD1CSSL_CSSL13_MASK                     0x00002000
#define _AD1CSSL_CSSL13_LENGTH                   0x00000001

#define _AD1CSSL_CSSL14_POSITION                 0x0000000E
#define _AD1CSSL_CSSL14_MASK                     0x00004000
#define _AD1CSSL_CSSL14_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

#define _CTMUCON_EDG1STAT_POSITION               0x00000000
#define _CTMUCON_EDG1STAT_MASK                   0x00000001
#define _CTMUCON_EDG1STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG2STAT_POSITION               0x00000001
#define _CTMUCON_EDG2STAT_MASK                   0x00000002
#define _CTMUCON_EDG2STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG1SEL_POSITION                0x00000002
#define _CTMUCON_EDG1SEL_MASK                    0x0000000C
#define _CTMUCON_EDG1SEL_LENGTH                  0x00000002

#define _CTMUCON_EDG1POL_POSITION                0x00000004
#define _CTMUCON_EDG1POL_MASK                    0x00000010
#define _CTMUCON_EDG1POL_LENGTH                  0x00000001

#define _CTMUCON_EDG2SEL_POSITION                0x00000005
#define _CTMUCON_EDG2SEL_MASK                    0x00000060
#define _CTMUCON_EDG2SEL_LENGTH                  0x00000002

#define _CTMUCON_EDG2POL_POSITION                0x00000007
#define _CTMUCON_EDG2POL_MASK                    0x00000080
#define _CTMUCON_EDG2POL_LENGTH                  0x00000001

#define _CTMUCON_CTTRIG_POSITION                 0x00000008
#define _CTMUCON_CTTRIG_MASK                     0x00000100
#define _CTMUCON_CTTRIG_LENGTH                   0x00000001

#define _CTMUCON_IDISSEN_POSITION                0x00000009
#define _CTMUCON_IDISSEN_MASK                    0x00000200
#define _CTMUCON_IDISSEN_LENGTH                  0x00000001

#define _CTMUCON_EDGSEQEN_POSITION               0x0000000A
#define _CTMUCON_EDGSEQEN_MASK                   0x00000400
#define _CTMUCON_EDGSEQEN_LENGTH                 0x00000001

#define _CTMUCON_EDGEN_POSITION                  0x0000000B
#define _CTMUCON_EDGEN_MASK                      0x00000800
#define _CTMUCON_EDGEN_LENGTH                    0x00000001

#define _CTMUCON_TGEN_POSITION                   0x0000000C
#define _CTMUCON_TGEN_MASK                       0x00001000
#define _CTMUCON_TGEN_LENGTH                     0x00000001

#define _CTMUCON_CTMUSIDL_POSITION               0x0000000D
#define _CTMUCON_CTMUSIDL_MASK                   0x00002000
#define _CTMUCON_CTMUSIDL_LENGTH                 0x00000001

#define _CTMUCON_CTMUEN_POSITION                 0x0000000F
#define _CTMUCON_CTMUEN_MASK                     0x00008000
#define _CTMUCON_CTMUEN_LENGTH                   0x00000001

#define _CTMUCON_EDG1SEL0_POSITION               0x00000002
#define _CTMUCON_EDG1SEL0_MASK                   0x00000004
#define _CTMUCON_EDG1SEL0_LENGTH                 0x00000001

#define _CTMUCON_EDG1SEL1_POSITION               0x00000003
#define _CTMUCON_EDG1SEL1_MASK                   0x00000008
#define _CTMUCON_EDG1SEL1_LENGTH                 0x00000001

#define _CTMUCON_EDG2SEL0_POSITION               0x00000005
#define _CTMUCON_EDG2SEL0_MASK                   0x00000020
#define _CTMUCON_EDG2SEL0_LENGTH                 0x00000001

#define _CTMUCON_EDG2SEL1_POSITION               0x00000006
#define _CTMUCON_EDG2SEL1_MASK                   0x00000040
#define _CTMUCON_EDG2SEL1_LENGTH                 0x00000001

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

#define _U1OTGIR_VBUSVDIF_POSITION               0x00000000
#define _U1OTGIR_VBUSVDIF_MASK                   0x00000001
#define _U1OTGIR_VBUSVDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESENDIF_POSITION               0x00000002
#define _U1OTGIR_SESENDIF_MASK                   0x00000004
#define _U1OTGIR_SESENDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESVDIF_POSITION                0x00000003
#define _U1OTGIR_SESVDIF_MASK                    0x00000008
#define _U1OTGIR_SESVDIF_LENGTH                  0x00000001

#define _U1OTGIR_ACTVIF_POSITION                 0x00000004
#define _U1OTGIR_ACTVIF_MASK                     0x00000010
#define _U1OTGIR_ACTVIF_LENGTH                   0x00000001

#define _U1OTGIR_LSTATEIF_POSITION               0x00000005
#define _U1OTGIR_LSTATEIF_MASK                   0x00000020
#define _U1OTGIR_LSTATEIF_LENGTH                 0x00000001

#define _U1OTGIR_T1MSECIF_POSITION               0x00000006
#define _U1OTGIR_T1MSECIF_MASK                   0x00000040
#define _U1OTGIR_T1MSECIF_LENGTH                 0x00000001

#define _U1OTGIR_IDIF_POSITION                   0x00000007
#define _U1OTGIR_IDIF_MASK                       0x00000080
#define _U1OTGIR_IDIF_LENGTH                     0x00000001

#define _U1OTGIE_VBUSVDIE_POSITION               0x00000000
#define _U1OTGIE_VBUSVDIE_MASK                   0x00000001
#define _U1OTGIE_VBUSVDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESENDIE_POSITION               0x00000002
#define _U1OTGIE_SESENDIE_MASK                   0x00000004
#define _U1OTGIE_SESENDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESVDIE_POSITION                0x00000003
#define _U1OTGIE_SESVDIE_MASK                    0x00000008
#define _U1OTGIE_SESVDIE_LENGTH                  0x00000001

#define _U1OTGIE_ACTVIE_POSITION                 0x00000004
#define _U1OTGIE_ACTVIE_MASK                     0x00000010
#define _U1OTGIE_ACTVIE_LENGTH                   0x00000001

#define _U1OTGIE_LSTATEIE_POSITION               0x00000005
#define _U1OTGIE_LSTATEIE_MASK                   0x00000020
#define _U1OTGIE_LSTATEIE_LENGTH                 0x00000001

#define _U1OTGIE_T1MSECIE_POSITION               0x00000006
#define _U1OTGIE_T1MSECIE_MASK                   0x00000040
#define _U1OTGIE_T1MSECIE_LENGTH                 0x00000001

#define _U1OTGIE_IDIE_POSITION                   0x00000007
#define _U1OTGIE_IDIE_MASK                       0x00000080
#define _U1OTGIE_IDIE_LENGTH                     0x00000001

#define _U1OTGSTAT_VBUSVD_POSITION               0x00000000
#define _U1OTGSTAT_VBUSVD_MASK                   0x00000001
#define _U1OTGSTAT_VBUSVD_LENGTH                 0x00000001

#define _U1OTGSTAT_SESEND_POSITION               0x00000002
#define _U1OTGSTAT_SESEND_MASK                   0x00000004
#define _U1OTGSTAT_SESEND_LENGTH                 0x00000001

#define _U1OTGSTAT_SESVD_POSITION                0x00000003
#define _U1OTGSTAT_SESVD_MASK                    0x00000008
#define _U1OTGSTAT_SESVD_LENGTH                  0x00000001

#define _U1OTGSTAT_LSTATE_POSITION               0x00000005
#define _U1OTGSTAT_LSTATE_MASK                   0x00000020
#define _U1OTGSTAT_LSTATE_LENGTH                 0x00000001

#define _U1OTGSTAT_ID_POSITION                   0x00000007
#define _U1OTGSTAT_ID_MASK                       0x00000080
#define _U1OTGSTAT_ID_LENGTH                     0x00000001

#define _U1OTGCON_VBUSDIS_POSITION               0x00000000
#define _U1OTGCON_VBUSDIS_MASK                   0x00000001
#define _U1OTGCON_VBUSDIS_LENGTH                 0x00000001

#define _U1OTGCON_VBUSCHG_POSITION               0x00000001
#define _U1OTGCON_VBUSCHG_MASK                   0x00000002
#define _U1OTGCON_VBUSCHG_LENGTH                 0x00000001

#define _U1OTGCON_OTGEN_POSITION                 0x00000002
#define _U1OTGCON_OTGEN_MASK                     0x00000004
#define _U1OTGCON_OTGEN_LENGTH                   0x00000001

#define _U1OTGCON_VBUSON_POSITION                0x00000003
#define _U1OTGCON_VBUSON_MASK                    0x00000008
#define _U1OTGCON_VBUSON_LENGTH                  0x00000001

#define _U1OTGCON_DMPULDWN_POSITION              0x00000004
#define _U1OTGCON_DMPULDWN_MASK                  0x00000010
#define _U1OTGCON_DMPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DPPULDWN_POSITION              0x00000005
#define _U1OTGCON_DPPULDWN_MASK                  0x00000020
#define _U1OTGCON_DPPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DMPULUP_POSITION               0x00000006
#define _U1OTGCON_DMPULUP_MASK                   0x00000040
#define _U1OTGCON_DMPULUP_LENGTH                 0x00000001

#define _U1OTGCON_DPPULUP_POSITION               0x00000007
#define _U1OTGCON_DPPULUP_MASK                   0x00000080
#define _U1OTGCON_DPPULUP_LENGTH                 0x00000001

#define _U1PWRC_USBPWR_POSITION                  0x00000000
#define _U1PWRC_USBPWR_MASK                      0x00000001
#define _U1PWRC_USBPWR_LENGTH                    0x00000001

#define _U1PWRC_USUSPND_POSITION                 0x00000001
#define _U1PWRC_USUSPND_MASK                     0x00000002
#define _U1PWRC_USUSPND_LENGTH                   0x00000001

#define _U1PWRC_USLPGRD_POSITION                 0x00000004
#define _U1PWRC_USLPGRD_MASK                     0x00000010
#define _U1PWRC_USLPGRD_LENGTH                   0x00000001

#define _U1PWRC_UACTPND_POSITION                 0x00000007
#define _U1PWRC_UACTPND_MASK                     0x00000080
#define _U1PWRC_UACTPND_LENGTH                   0x00000001

#define _U1PWRC_USUSPEND_POSITION                0x00000001
#define _U1PWRC_USUSPEND_MASK                    0x00000002
#define _U1PWRC_USUSPEND_LENGTH                  0x00000001

#define _U1IR_URSTIF_POSITION                    0x00000000
#define _U1IR_URSTIF_MASK                        0x00000001
#define _U1IR_URSTIF_LENGTH                      0x00000001

#define _U1IR_UERRIF_POSITION                    0x00000001
#define _U1IR_UERRIF_MASK                        0x00000002
#define _U1IR_UERRIF_LENGTH                      0x00000001

#define _U1IR_SOFIF_POSITION                     0x00000002
#define _U1IR_SOFIF_MASK                         0x00000004
#define _U1IR_SOFIF_LENGTH                       0x00000001

#define _U1IR_TRNIF_POSITION                     0x00000003
#define _U1IR_TRNIF_MASK                         0x00000008
#define _U1IR_TRNIF_LENGTH                       0x00000001

#define _U1IR_IDLEIF_POSITION                    0x00000004
#define _U1IR_IDLEIF_MASK                        0x00000010
#define _U1IR_IDLEIF_LENGTH                      0x00000001

#define _U1IR_RESUMEIF_POSITION                  0x00000005
#define _U1IR_RESUMEIF_MASK                      0x00000020
#define _U1IR_RESUMEIF_LENGTH                    0x00000001

#define _U1IR_ATTACHIF_POSITION                  0x00000006
#define _U1IR_ATTACHIF_MASK                      0x00000040
#define _U1IR_ATTACHIF_LENGTH                    0x00000001

#define _U1IR_STALLIF_POSITION                   0x00000007
#define _U1IR_STALLIF_MASK                       0x00000080
#define _U1IR_STALLIF_LENGTH                     0x00000001

#define _U1IR_DETACHIF_POSITION                  0x00000000
#define _U1IR_DETACHIF_MASK                      0x00000001
#define _U1IR_DETACHIF_LENGTH                    0x00000001

#define _U1IE_URSTIE_POSITION                    0x00000000
#define _U1IE_URSTIE_MASK                        0x00000001
#define _U1IE_URSTIE_LENGTH                      0x00000001

#define _U1IE_UERRIE_POSITION                    0x00000001
#define _U1IE_UERRIE_MASK                        0x00000002
#define _U1IE_UERRIE_LENGTH                      0x00000001

#define _U1IE_SOFIE_POSITION                     0x00000002
#define _U1IE_SOFIE_MASK                         0x00000004
#define _U1IE_SOFIE_LENGTH                       0x00000001

#define _U1IE_TRNIE_POSITION                     0x00000003
#define _U1IE_TRNIE_MASK                         0x00000008
#define _U1IE_TRNIE_LENGTH                       0x00000001

#define _U1IE_IDLEIE_POSITION                    0x00000004
#define _U1IE_IDLEIE_MASK                        0x00000010
#define _U1IE_IDLEIE_LENGTH                      0x00000001

#define _U1IE_RESUMEIE_POSITION                  0x00000005
#define _U1IE_RESUMEIE_MASK                      0x00000020
#define _U1IE_RESUMEIE_LENGTH                    0x00000001

#define _U1IE_ATTACHIE_POSITION                  0x00000006
#define _U1IE_ATTACHIE_MASK                      0x00000040
#define _U1IE_ATTACHIE_LENGTH                    0x00000001

#define _U1IE_STALLIE_POSITION                   0x00000007
#define _U1IE_STALLIE_MASK                       0x00000080
#define _U1IE_STALLIE_LENGTH                     0x00000001

#define _U1IE_DETACHIE_POSITION                  0x00000000
#define _U1IE_DETACHIE_MASK                      0x00000001
#define _U1IE_DETACHIE_LENGTH                    0x00000001

#define _U1EIR_PIDEF_POSITION                    0x00000000
#define _U1EIR_PIDEF_MASK                        0x00000001
#define _U1EIR_PIDEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_POSITION                   0x00000001
#define _U1EIR_CRC5EF_MASK                       0x00000002
#define _U1EIR_CRC5EF_LENGTH                     0x00000001

#define _U1EIR_CRC16EF_POSITION                  0x00000002
#define _U1EIR_CRC16EF_MASK                      0x00000004
#define _U1EIR_CRC16EF_LENGTH                    0x00000001

#define _U1EIR_DFN8EF_POSITION                   0x00000003
#define _U1EIR_DFN8EF_MASK                       0x00000008
#define _U1EIR_DFN8EF_LENGTH                     0x00000001

#define _U1EIR_BTOEF_POSITION                    0x00000004
#define _U1EIR_BTOEF_MASK                        0x00000010
#define _U1EIR_BTOEF_LENGTH                      0x00000001

#define _U1EIR_DMAEF_POSITION                    0x00000005
#define _U1EIR_DMAEF_MASK                        0x00000020
#define _U1EIR_DMAEF_LENGTH                      0x00000001

#define _U1EIR_BTSEF_POSITION                    0x00000007
#define _U1EIR_BTSEF_MASK                        0x00000080
#define _U1EIR_BTSEF_LENGTH                      0x00000001

#define _U1EIR_EOFEF_POSITION                    0x00000001
#define _U1EIR_EOFEF_MASK                        0x00000002
#define _U1EIR_EOFEF_LENGTH                      0x00000001

#define _U1EIE_PIDEE_POSITION                    0x00000000
#define _U1EIE_PIDEE_MASK                        0x00000001
#define _U1EIE_PIDEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_POSITION                   0x00000001
#define _U1EIE_CRC5EE_MASK                       0x00000002
#define _U1EIE_CRC5EE_LENGTH                     0x00000001

#define _U1EIE_CRC16EE_POSITION                  0x00000002
#define _U1EIE_CRC16EE_MASK                      0x00000004
#define _U1EIE_CRC16EE_LENGTH                    0x00000001

#define _U1EIE_DFN8EE_POSITION                   0x00000003
#define _U1EIE_DFN8EE_MASK                       0x00000008
#define _U1EIE_DFN8EE_LENGTH                     0x00000001

#define _U1EIE_BTOEE_POSITION                    0x00000004
#define _U1EIE_BTOEE_MASK                        0x00000010
#define _U1EIE_BTOEE_LENGTH                      0x00000001

#define _U1EIE_DMAEE_POSITION                    0x00000005
#define _U1EIE_DMAEE_MASK                        0x00000020
#define _U1EIE_DMAEE_LENGTH                      0x00000001

#define _U1EIE_BTSEE_POSITION                    0x00000007
#define _U1EIE_BTSEE_MASK                        0x00000080
#define _U1EIE_BTSEE_LENGTH                      0x00000001

#define _U1EIE_EOFEE_POSITION                    0x00000001
#define _U1EIE_EOFEE_MASK                        0x00000002
#define _U1EIE_EOFEE_LENGTH                      0x00000001

#define _U1STAT_PPBI_POSITION                    0x00000002
#define _U1STAT_PPBI_MASK                        0x00000004
#define _U1STAT_PPBI_LENGTH                      0x00000001

#define _U1STAT_DIR_POSITION                     0x00000003
#define _U1STAT_DIR_MASK                         0x00000008
#define _U1STAT_DIR_LENGTH                       0x00000001

#define _U1STAT_ENDPT_POSITION                   0x00000004
#define _U1STAT_ENDPT_MASK                       0x000000F0
#define _U1STAT_ENDPT_LENGTH                     0x00000004

#define _U1STAT_ENDPT0_POSITION                  0x00000004
#define _U1STAT_ENDPT0_MASK                      0x00000010
#define _U1STAT_ENDPT0_LENGTH                    0x00000001

#define _U1STAT_ENDPT1_POSITION                  0x00000005
#define _U1STAT_ENDPT1_MASK                      0x00000020
#define _U1STAT_ENDPT1_LENGTH                    0x00000001

#define _U1STAT_ENDPT2_POSITION                  0x00000006
#define _U1STAT_ENDPT2_MASK                      0x00000040
#define _U1STAT_ENDPT2_LENGTH                    0x00000001

#define _U1STAT_ENDPT3_POSITION                  0x00000007
#define _U1STAT_ENDPT3_MASK                      0x00000080
#define _U1STAT_ENDPT3_LENGTH                    0x00000001

#define _U1CON_USBEN_POSITION                    0x00000000
#define _U1CON_USBEN_MASK                        0x00000001
#define _U1CON_USBEN_LENGTH                      0x00000001

#define _U1CON_PPBRST_POSITION                   0x00000001
#define _U1CON_PPBRST_MASK                       0x00000002
#define _U1CON_PPBRST_LENGTH                     0x00000001

#define _U1CON_RESUME_POSITION                   0x00000002
#define _U1CON_RESUME_MASK                       0x00000004
#define _U1CON_RESUME_LENGTH                     0x00000001

#define _U1CON_HOSTEN_POSITION                   0x00000003
#define _U1CON_HOSTEN_MASK                       0x00000008
#define _U1CON_HOSTEN_LENGTH                     0x00000001

#define _U1CON_USBRST_POSITION                   0x00000004
#define _U1CON_USBRST_MASK                       0x00000010
#define _U1CON_USBRST_LENGTH                     0x00000001

#define _U1CON_PKTDIS_POSITION                   0x00000005
#define _U1CON_PKTDIS_MASK                       0x00000020
#define _U1CON_PKTDIS_LENGTH                     0x00000001

#define _U1CON_SE0_POSITION                      0x00000006
#define _U1CON_SE0_MASK                          0x00000040
#define _U1CON_SE0_LENGTH                        0x00000001

#define _U1CON_JSTATE_POSITION                   0x00000007
#define _U1CON_JSTATE_MASK                       0x00000080
#define _U1CON_JSTATE_LENGTH                     0x00000001

#define _U1CON_SOFEN_POSITION                    0x00000000
#define _U1CON_SOFEN_MASK                        0x00000001
#define _U1CON_SOFEN_LENGTH                      0x00000001

#define _U1CON_RESET_POSITION                    0x00000004
#define _U1CON_RESET_MASK                        0x00000010
#define _U1CON_RESET_LENGTH                      0x00000001

#define _U1CON_TOKBUSY_POSITION                  0x00000005
#define _U1CON_TOKBUSY_MASK                      0x00000020
#define _U1CON_TOKBUSY_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR_POSITION                 0x00000000
#define _U1ADDR_DEVADDR_MASK                     0x0000007F
#define _U1ADDR_DEVADDR_LENGTH                   0x00000007

#define _U1ADDR_LOWSPDEN_POSITION                0x00000007
#define _U1ADDR_LOWSPDEN_MASK                    0x00000080
#define _U1ADDR_LOWSPDEN_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR0_POSITION                0x00000000
#define _U1ADDR_DEVADDR0_MASK                    0x00000001
#define _U1ADDR_DEVADDR0_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR1_POSITION                0x00000001
#define _U1ADDR_DEVADDR1_MASK                    0x00000002
#define _U1ADDR_DEVADDR1_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR2_POSITION                0x00000002
#define _U1ADDR_DEVADDR2_MASK                    0x00000004
#define _U1ADDR_DEVADDR2_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR3_POSITION                0x00000003
#define _U1ADDR_DEVADDR3_MASK                    0x00000008
#define _U1ADDR_DEVADDR3_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR4_POSITION                0x00000004
#define _U1ADDR_DEVADDR4_MASK                    0x00000010
#define _U1ADDR_DEVADDR4_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR5_POSITION                0x00000005
#define _U1ADDR_DEVADDR5_MASK                    0x00000020
#define _U1ADDR_DEVADDR5_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR6_POSITION                0x00000006
#define _U1ADDR_DEVADDR6_MASK                    0x00000040
#define _U1ADDR_DEVADDR6_LENGTH                  0x00000001

#define _U1ADDR_LSPDEN_POSITION                  0x00000007
#define _U1ADDR_LSPDEN_MASK                      0x00000080
#define _U1ADDR_LSPDEN_LENGTH                    0x00000001

#define _U1BDTP1_BDTPTRL_POSITION                0x00000001
#define _U1BDTP1_BDTPTRL_MASK                    0x000000FE
#define _U1BDTP1_BDTPTRL_LENGTH                  0x00000007

#define _U1BDTP1_BDTPTRL0_POSITION               0x00000001
#define _U1BDTP1_BDTPTRL0_MASK                   0x00000002
#define _U1BDTP1_BDTPTRL0_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL1_POSITION               0x00000002
#define _U1BDTP1_BDTPTRL1_MASK                   0x00000004
#define _U1BDTP1_BDTPTRL1_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL2_POSITION               0x00000003
#define _U1BDTP1_BDTPTRL2_MASK                   0x00000008
#define _U1BDTP1_BDTPTRL2_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL3_POSITION               0x00000004
#define _U1BDTP1_BDTPTRL3_MASK                   0x00000010
#define _U1BDTP1_BDTPTRL3_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL4_POSITION               0x00000005
#define _U1BDTP1_BDTPTRL4_MASK                   0x00000020
#define _U1BDTP1_BDTPTRL4_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL5_POSITION               0x00000006
#define _U1BDTP1_BDTPTRL5_MASK                   0x00000040
#define _U1BDTP1_BDTPTRL5_LENGTH                 0x00000001

#define _U1BDTP1_BDTPTRL6_POSITION               0x00000007
#define _U1BDTP1_BDTPTRL6_MASK                   0x00000080
#define _U1BDTP1_BDTPTRL6_LENGTH                 0x00000001

#define _U1FRML_FRM0_POSITION                    0x00000000
#define _U1FRML_FRM0_MASK                        0x00000001
#define _U1FRML_FRM0_LENGTH                      0x00000001

#define _U1FRML_FRM1_POSITION                    0x00000001
#define _U1FRML_FRM1_MASK                        0x00000002
#define _U1FRML_FRM1_LENGTH                      0x00000001

#define _U1FRML_FRM2_POSITION                    0x00000002
#define _U1FRML_FRM2_MASK                        0x00000004
#define _U1FRML_FRM2_LENGTH                      0x00000001

#define _U1FRML_FRM3_POSITION                    0x00000003
#define _U1FRML_FRM3_MASK                        0x00000008
#define _U1FRML_FRM3_LENGTH                      0x00000001

#define _U1FRML_FRM4_POSITION                    0x00000004
#define _U1FRML_FRM4_MASK                        0x00000010
#define _U1FRML_FRM4_LENGTH                      0x00000001

#define _U1FRML_FRM5_POSITION                    0x00000005
#define _U1FRML_FRM5_MASK                        0x00000020
#define _U1FRML_FRM5_LENGTH                      0x00000001

#define _U1FRML_FRM6_POSITION                    0x00000006
#define _U1FRML_FRM6_MASK                        0x00000040
#define _U1FRML_FRM6_LENGTH                      0x00000001

#define _U1FRML_FRM7_POSITION                    0x00000007
#define _U1FRML_FRM7_MASK                        0x00000080
#define _U1FRML_FRM7_LENGTH                      0x00000001

#define _U1FRMH_FRM8_POSITION                    0x00000000
#define _U1FRMH_FRM8_MASK                        0x00000001
#define _U1FRMH_FRM8_LENGTH                      0x00000001

#define _U1FRMH_FRM9_POSITION                    0x00000001
#define _U1FRMH_FRM9_MASK                        0x00000002
#define _U1FRMH_FRM9_LENGTH                      0x00000001

#define _U1FRMH_FRM10_POSITION                   0x00000002
#define _U1FRMH_FRM10_MASK                       0x00000004
#define _U1FRMH_FRM10_LENGTH                     0x00000001

#define _U1TOK_EP_POSITION                       0x00000000
#define _U1TOK_EP_MASK                           0x0000000F
#define _U1TOK_EP_LENGTH                         0x00000004

#define _U1TOK_PID_POSITION                      0x00000004
#define _U1TOK_PID_MASK                          0x000000F0
#define _U1TOK_PID_LENGTH                        0x00000004

#define _U1TOK_EP0_POSITION                      0x00000000
#define _U1TOK_EP0_MASK                          0x00000001
#define _U1TOK_EP0_LENGTH                        0x00000001

#define _U1TOK_EP1_POSITION                      0x00000001
#define _U1TOK_EP1_MASK                          0x00000002
#define _U1TOK_EP1_LENGTH                        0x00000001

#define _U1TOK_EP2_POSITION                      0x00000002
#define _U1TOK_EP2_MASK                          0x00000004
#define _U1TOK_EP2_LENGTH                        0x00000001

#define _U1TOK_EP3_POSITION                      0x00000003
#define _U1TOK_EP3_MASK                          0x00000008
#define _U1TOK_EP3_LENGTH                        0x00000001

#define _U1TOK_PID0_POSITION                     0x00000004
#define _U1TOK_PID0_MASK                         0x00000010
#define _U1TOK_PID0_LENGTH                       0x00000001

#define _U1TOK_PID1_POSITION                     0x00000005
#define _U1TOK_PID1_MASK                         0x00000020
#define _U1TOK_PID1_LENGTH                       0x00000001

#define _U1TOK_PID2_POSITION                     0x00000006
#define _U1TOK_PID2_MASK                         0x00000040
#define _U1TOK_PID2_LENGTH                       0x00000001

#define _U1TOK_PID3_POSITION                     0x00000007
#define _U1TOK_PID3_MASK                         0x00000080
#define _U1TOK_PID3_LENGTH                       0x00000001

#define _U1SOF_CNT_POSITION                      0x00000000
#define _U1SOF_CNT_MASK                          0x000000FF
#define _U1SOF_CNT_LENGTH                        0x00000008

#define _U1SOF_CNT0_POSITION                     0x00000000
#define _U1SOF_CNT0_MASK                         0x00000001
#define _U1SOF_CNT0_LENGTH                       0x00000001

#define _U1SOF_CNT1_POSITION                     0x00000001
#define _U1SOF_CNT1_MASK                         0x00000002
#define _U1SOF_CNT1_LENGTH                       0x00000001

#define _U1SOF_CNT2_POSITION                     0x00000002
#define _U1SOF_CNT2_MASK                         0x00000004
#define _U1SOF_CNT2_LENGTH                       0x00000001

#define _U1SOF_CNT3_POSITION                     0x00000003
#define _U1SOF_CNT3_MASK                         0x00000008
#define _U1SOF_CNT3_LENGTH                       0x00000001

#define _U1SOF_CNT4_POSITION                     0x00000004
#define _U1SOF_CNT4_MASK                         0x00000010
#define _U1SOF_CNT4_LENGTH                       0x00000001

#define _U1SOF_CNT5_POSITION                     0x00000005
#define _U1SOF_CNT5_MASK                         0x00000020
#define _U1SOF_CNT5_LENGTH                       0x00000001

#define _U1SOF_CNT6_POSITION                     0x00000006
#define _U1SOF_CNT6_MASK                         0x00000040
#define _U1SOF_CNT6_LENGTH                       0x00000001

#define _U1SOF_CNT7_POSITION                     0x00000007
#define _U1SOF_CNT7_MASK                         0x00000080
#define _U1SOF_CNT7_LENGTH                       0x00000001

#define _U1CNFG1_PPB_POSITION                    0x00000000
#define _U1CNFG1_PPB_MASK                        0x00000003
#define _U1CNFG1_PPB_LENGTH                      0x00000002

#define _U1CNFG1_USBSIDL_POSITION                0x00000004
#define _U1CNFG1_USBSIDL_MASK                    0x00000010
#define _U1CNFG1_USBSIDL_LENGTH                  0x00000001

#define _U1CNFG1_UOEMON_POSITION                 0x00000006
#define _U1CNFG1_UOEMON_MASK                     0x00000040
#define _U1CNFG1_UOEMON_LENGTH                   0x00000001

#define _U1CNFG1_UTEYE_POSITION                  0x00000007
#define _U1CNFG1_UTEYE_MASK                      0x00000080
#define _U1CNFG1_UTEYE_LENGTH                    0x00000001

#define _U1CNFG1_PPB0_POSITION                   0x00000000
#define _U1CNFG1_PPB0_MASK                       0x00000001
#define _U1CNFG1_PPB0_LENGTH                     0x00000001

#define _U1CNFG1_PPB1_POSITION                   0x00000001
#define _U1CNFG1_PPB1_MASK                       0x00000002
#define _U1CNFG1_PPB1_LENGTH                     0x00000001

#define _U1CNFG2_UTRDIS_POSITION                 0x00000000
#define _U1CNFG2_UTRDIS_MASK                     0x00000001
#define _U1CNFG2_UTRDIS_LENGTH                   0x00000001

#define _U1CNFG2_UVCMPDIS_POSITION               0x00000001
#define _U1CNFG2_UVCMPDIS_MASK                   0x00000002
#define _U1CNFG2_UVCMPDIS_LENGTH                 0x00000001

#define _U1CNFG2_UVBUSDIS_POSITION               0x00000002
#define _U1CNFG2_UVBUSDIS_MASK                   0x00000004
#define _U1CNFG2_UVBUSDIS_LENGTH                 0x00000001

#define _U1CNFG2_EXTI2CEN_POSITION               0x00000003
#define _U1CNFG2_EXTI2CEN_MASK                   0x00000008
#define _U1CNFG2_EXTI2CEN_LENGTH                 0x00000001

#define _U1CNFG2_PUVBUS_POSITION                 0x00000004
#define _U1CNFG2_PUVBUS_MASK                     0x00000010
#define _U1CNFG2_PUVBUS_LENGTH                   0x00000001

#define _U1CNFG2_UVCMPSEL_POSITION               0x00000005
#define _U1CNFG2_UVCMPSEL_MASK                   0x00000020
#define _U1CNFG2_UVCMPSEL_LENGTH                 0x00000001

#define _U1EP0_EPHSHK_POSITION                   0x00000000
#define _U1EP0_EPHSHK_MASK                       0x00000001
#define _U1EP0_EPHSHK_LENGTH                     0x00000001

#define _U1EP0_EPSTALL_POSITION                  0x00000001
#define _U1EP0_EPSTALL_MASK                      0x00000002
#define _U1EP0_EPSTALL_LENGTH                    0x00000001

#define _U1EP0_EPTXEN_POSITION                   0x00000002
#define _U1EP0_EPTXEN_MASK                       0x00000004
#define _U1EP0_EPTXEN_LENGTH                     0x00000001

#define _U1EP0_EPRXEN_POSITION                   0x00000003
#define _U1EP0_EPRXEN_MASK                       0x00000008
#define _U1EP0_EPRXEN_LENGTH                     0x00000001

#define _U1EP0_EPCONDIS_POSITION                 0x00000004
#define _U1EP0_EPCONDIS_MASK                     0x00000010
#define _U1EP0_EPCONDIS_LENGTH                   0x00000001

#define _U1EP0_RETRYDIS_POSITION                 0x00000006
#define _U1EP0_RETRYDIS_MASK                     0x00000040
#define _U1EP0_RETRYDIS_LENGTH                   0x00000001

#define _U1EP0_LSPD_POSITION                     0x00000007
#define _U1EP0_LSPD_MASK                         0x00000080
#define _U1EP0_LSPD_LENGTH                       0x00000001

#define _U1EP0_EPINEN_POSITION                   0x00000002
#define _U1EP0_EPINEN_MASK                       0x00000004
#define _U1EP0_EPINEN_LENGTH                     0x00000001

#define _U1EP0_EPOUTEN_POSITION                  0x00000003
#define _U1EP0_EPOUTEN_MASK                      0x00000008
#define _U1EP0_EPOUTEN_LENGTH                    0x00000001

#define _U1EP0_LOWSPD_POSITION                   0x00000007
#define _U1EP0_LOWSPD_MASK                       0x00000080
#define _U1EP0_LOWSPD_LENGTH                     0x00000001

#define _U1EP1_EPHSHK_POSITION                   0x00000000
#define _U1EP1_EPHSHK_MASK                       0x00000001
#define _U1EP1_EPHSHK_LENGTH                     0x00000001

#define _U1EP1_EPSTALL_POSITION                  0x00000001
#define _U1EP1_EPSTALL_MASK                      0x00000002
#define _U1EP1_EPSTALL_LENGTH                    0x00000001

#define _U1EP1_EPTXEN_POSITION                   0x00000002
#define _U1EP1_EPTXEN_MASK                       0x00000004
#define _U1EP1_EPTXEN_LENGTH                     0x00000001

#define _U1EP1_EPRXEN_POSITION                   0x00000003
#define _U1EP1_EPRXEN_MASK                       0x00000008
#define _U1EP1_EPRXEN_LENGTH                     0x00000001

#define _U1EP1_EPCONDIS_POSITION                 0x00000004
#define _U1EP1_EPCONDIS_MASK                     0x00000010
#define _U1EP1_EPCONDIS_LENGTH                   0x00000001

#define _U1EP1_EPINEN_POSITION                   0x00000002
#define _U1EP1_EPINEN_MASK                       0x00000004
#define _U1EP1_EPINEN_LENGTH                     0x00000001

#define _U1EP1_EPOUTEN_POSITION                  0x00000003
#define _U1EP1_EPOUTEN_MASK                      0x00000008
#define _U1EP1_EPOUTEN_LENGTH                    0x00000001

#define _U1EP2_EPHSHK_POSITION                   0x00000000
#define _U1EP2_EPHSHK_MASK                       0x00000001
#define _U1EP2_EPHSHK_LENGTH                     0x00000001

#define _U1EP2_EPSTALL_POSITION                  0x00000001
#define _U1EP2_EPSTALL_MASK                      0x00000002
#define _U1EP2_EPSTALL_LENGTH                    0x00000001

#define _U1EP2_EPTXEN_POSITION                   0x00000002
#define _U1EP2_EPTXEN_MASK                       0x00000004
#define _U1EP2_EPTXEN_LENGTH                     0x00000001

#define _U1EP2_EPRXEN_POSITION                   0x00000003
#define _U1EP2_EPRXEN_MASK                       0x00000008
#define _U1EP2_EPRXEN_LENGTH                     0x00000001

#define _U1EP2_EPCONDIS_POSITION                 0x00000004
#define _U1EP2_EPCONDIS_MASK                     0x00000010
#define _U1EP2_EPCONDIS_LENGTH                   0x00000001

#define _U1EP2_EPINEN_POSITION                   0x00000002
#define _U1EP2_EPINEN_MASK                       0x00000004
#define _U1EP2_EPINEN_LENGTH                     0x00000001

#define _U1EP2_EPOUTEN_POSITION                  0x00000003
#define _U1EP2_EPOUTEN_MASK                      0x00000008
#define _U1EP2_EPOUTEN_LENGTH                    0x00000001

#define _U1EP3_EPHSHK_POSITION                   0x00000000
#define _U1EP3_EPHSHK_MASK                       0x00000001
#define _U1EP3_EPHSHK_LENGTH                     0x00000001

#define _U1EP3_EPSTALL_POSITION                  0x00000001
#define _U1EP3_EPSTALL_MASK                      0x00000002
#define _U1EP3_EPSTALL_LENGTH                    0x00000001

#define _U1EP3_EPTXEN_POSITION                   0x00000002
#define _U1EP3_EPTXEN_MASK                       0x00000004
#define _U1EP3_EPTXEN_LENGTH                     0x00000001

#define _U1EP3_EPRXEN_POSITION                   0x00000003
#define _U1EP3_EPRXEN_MASK                       0x00000008
#define _U1EP3_EPRXEN_LENGTH                     0x00000001

#define _U1EP3_EPCONDIS_POSITION                 0x00000004
#define _U1EP3_EPCONDIS_MASK                     0x00000010
#define _U1EP3_EPCONDIS_LENGTH                   0x00000001

#define _U1EP3_EPINEN_POSITION                   0x00000002
#define _U1EP3_EPINEN_MASK                       0x00000004
#define _U1EP3_EPINEN_LENGTH                     0x00000001

#define _U1EP3_EPOUTEN_POSITION                  0x00000003
#define _U1EP3_EPOUTEN_MASK                      0x00000008
#define _U1EP3_EPOUTEN_LENGTH                    0x00000001

#define _U1EP4_EPHSHK_POSITION                   0x00000000
#define _U1EP4_EPHSHK_MASK                       0x00000001
#define _U1EP4_EPHSHK_LENGTH                     0x00000001

#define _U1EP4_EPSTALL_POSITION                  0x00000001
#define _U1EP4_EPSTALL_MASK                      0x00000002
#define _U1EP4_EPSTALL_LENGTH                    0x00000001

#define _U1EP4_EPTXEN_POSITION                   0x00000002
#define _U1EP4_EPTXEN_MASK                       0x00000004
#define _U1EP4_EPTXEN_LENGTH                     0x00000001

#define _U1EP4_EPRXEN_POSITION                   0x00000003
#define _U1EP4_EPRXEN_MASK                       0x00000008
#define _U1EP4_EPRXEN_LENGTH                     0x00000001

#define _U1EP4_EPCONDIS_POSITION                 0x00000004
#define _U1EP4_EPCONDIS_MASK                     0x00000010
#define _U1EP4_EPCONDIS_LENGTH                   0x00000001

#define _U1EP4_EPINEN_POSITION                   0x00000002
#define _U1EP4_EPINEN_MASK                       0x00000004
#define _U1EP4_EPINEN_LENGTH                     0x00000001

#define _U1EP4_EPOUTEN_POSITION                  0x00000003
#define _U1EP4_EPOUTEN_MASK                      0x00000008
#define _U1EP4_EPOUTEN_LENGTH                    0x00000001

#define _U1EP5_EPHSHK_POSITION                   0x00000000
#define _U1EP5_EPHSHK_MASK                       0x00000001
#define _U1EP5_EPHSHK_LENGTH                     0x00000001

#define _U1EP5_EPSTALL_POSITION                  0x00000001
#define _U1EP5_EPSTALL_MASK                      0x00000002
#define _U1EP5_EPSTALL_LENGTH                    0x00000001

#define _U1EP5_EPTXEN_POSITION                   0x00000002
#define _U1EP5_EPTXEN_MASK                       0x00000004
#define _U1EP5_EPTXEN_LENGTH                     0x00000001

#define _U1EP5_EPRXEN_POSITION                   0x00000003
#define _U1EP5_EPRXEN_MASK                       0x00000008
#define _U1EP5_EPRXEN_LENGTH                     0x00000001

#define _U1EP5_EPCONDIS_POSITION                 0x00000004
#define _U1EP5_EPCONDIS_MASK                     0x00000010
#define _U1EP5_EPCONDIS_LENGTH                   0x00000001

#define _U1EP5_EPINEN_POSITION                   0x00000002
#define _U1EP5_EPINEN_MASK                       0x00000004
#define _U1EP5_EPINEN_LENGTH                     0x00000001

#define _U1EP5_EPOUTEN_POSITION                  0x00000003
#define _U1EP5_EPOUTEN_MASK                      0x00000008
#define _U1EP5_EPOUTEN_LENGTH                    0x00000001

#define _U1EP6_EPHSHK_POSITION                   0x00000000
#define _U1EP6_EPHSHK_MASK                       0x00000001
#define _U1EP6_EPHSHK_LENGTH                     0x00000001

#define _U1EP6_EPSTALL_POSITION                  0x00000001
#define _U1EP6_EPSTALL_MASK                      0x00000002
#define _U1EP6_EPSTALL_LENGTH                    0x00000001

#define _U1EP6_EPTXEN_POSITION                   0x00000002
#define _U1EP6_EPTXEN_MASK                       0x00000004
#define _U1EP6_EPTXEN_LENGTH                     0x00000001

#define _U1EP6_EPRXEN_POSITION                   0x00000003
#define _U1EP6_EPRXEN_MASK                       0x00000008
#define _U1EP6_EPRXEN_LENGTH                     0x00000001

#define _U1EP6_EPCONDIS_POSITION                 0x00000004
#define _U1EP6_EPCONDIS_MASK                     0x00000010
#define _U1EP6_EPCONDIS_LENGTH                   0x00000001

#define _U1EP6_EPINEN_POSITION                   0x00000002
#define _U1EP6_EPINEN_MASK                       0x00000004
#define _U1EP6_EPINEN_LENGTH                     0x00000001

#define _U1EP6_EPOUTEN_POSITION                  0x00000003
#define _U1EP6_EPOUTEN_MASK                      0x00000008
#define _U1EP6_EPOUTEN_LENGTH                    0x00000001

#define _U1EP7_EPHSHK_POSITION                   0x00000000
#define _U1EP7_EPHSHK_MASK                       0x00000001
#define _U1EP7_EPHSHK_LENGTH                     0x00000001

#define _U1EP7_EPSTALL_POSITION                  0x00000001
#define _U1EP7_EPSTALL_MASK                      0x00000002
#define _U1EP7_EPSTALL_LENGTH                    0x00000001

#define _U1EP7_EPTXEN_POSITION                   0x00000002
#define _U1EP7_EPTXEN_MASK                       0x00000004
#define _U1EP7_EPTXEN_LENGTH                     0x00000001

#define _U1EP7_EPRXEN_POSITION                   0x00000003
#define _U1EP7_EPRXEN_MASK                       0x00000008
#define _U1EP7_EPRXEN_LENGTH                     0x00000001

#define _U1EP7_EPCONDIS_POSITION                 0x00000004
#define _U1EP7_EPCONDIS_MASK                     0x00000010
#define _U1EP7_EPCONDIS_LENGTH                   0x00000001

#define _U1EP7_EPINEN_POSITION                   0x00000002
#define _U1EP7_EPINEN_MASK                       0x00000004
#define _U1EP7_EPINEN_LENGTH                     0x00000001

#define _U1EP7_EPOUTEN_POSITION                  0x00000003
#define _U1EP7_EPOUTEN_MASK                      0x00000008
#define _U1EP7_EPOUTEN_LENGTH                    0x00000001

#define _U1EP8_EPHSHK_POSITION                   0x00000000
#define _U1EP8_EPHSHK_MASK                       0x00000001
#define _U1EP8_EPHSHK_LENGTH                     0x00000001

#define _U1EP8_EPSTALL_POSITION                  0x00000001
#define _U1EP8_EPSTALL_MASK                      0x00000002
#define _U1EP8_EPSTALL_LENGTH                    0x00000001

#define _U1EP8_EPTXEN_POSITION                   0x00000002
#define _U1EP8_EPTXEN_MASK                       0x00000004
#define _U1EP8_EPTXEN_LENGTH                     0x00000001

#define _U1EP8_EPRXEN_POSITION                   0x00000003
#define _U1EP8_EPRXEN_MASK                       0x00000008
#define _U1EP8_EPRXEN_LENGTH                     0x00000001

#define _U1EP8_EPCONDIS_POSITION                 0x00000004
#define _U1EP8_EPCONDIS_MASK                     0x00000010
#define _U1EP8_EPCONDIS_LENGTH                   0x00000001

#define _U1EP8_EPINEN_POSITION                   0x00000002
#define _U1EP8_EPINEN_MASK                       0x00000004
#define _U1EP8_EPINEN_LENGTH                     0x00000001

#define _U1EP8_EPOUTEN_POSITION                  0x00000003
#define _U1EP8_EPOUTEN_MASK                      0x00000008
#define _U1EP8_EPOUTEN_LENGTH                    0x00000001

#define _U1EP9_EPHSHK_POSITION                   0x00000000
#define _U1EP9_EPHSHK_MASK                       0x00000001
#define _U1EP9_EPHSHK_LENGTH                     0x00000001

#define _U1EP9_EPSTALL_POSITION                  0x00000001
#define _U1EP9_EPSTALL_MASK                      0x00000002
#define _U1EP9_EPSTALL_LENGTH                    0x00000001

#define _U1EP9_EPTXEN_POSITION                   0x00000002
#define _U1EP9_EPTXEN_MASK                       0x00000004
#define _U1EP9_EPTXEN_LENGTH                     0x00000001

#define _U1EP9_EPRXEN_POSITION                   0x00000003
#define _U1EP9_EPRXEN_MASK                       0x00000008
#define _U1EP9_EPRXEN_LENGTH                     0x00000001

#define _U1EP9_EPCONDIS_POSITION                 0x00000004
#define _U1EP9_EPCONDIS_MASK                     0x00000010
#define _U1EP9_EPCONDIS_LENGTH                   0x00000001

#define _U1EP9_EPINEN_POSITION                   0x00000002
#define _U1EP9_EPINEN_MASK                       0x00000004
#define _U1EP9_EPINEN_LENGTH                     0x00000001

#define _U1EP9_EPOUTEN_POSITION                  0x00000003
#define _U1EP9_EPOUTEN_MASK                      0x00000008
#define _U1EP9_EPOUTEN_LENGTH                    0x00000001

#define _U1EP10_EPHSHK_POSITION                  0x00000000
#define _U1EP10_EPHSHK_MASK                      0x00000001
#define _U1EP10_EPHSHK_LENGTH                    0x00000001

#define _U1EP10_EPSTALL_POSITION                 0x00000001
#define _U1EP10_EPSTALL_MASK                     0x00000002
#define _U1EP10_EPSTALL_LENGTH                   0x00000001

#define _U1EP10_EPTXEN_POSITION                  0x00000002
#define _U1EP10_EPTXEN_MASK                      0x00000004
#define _U1EP10_EPTXEN_LENGTH                    0x00000001

#define _U1EP10_EPRXEN_POSITION                  0x00000003
#define _U1EP10_EPRXEN_MASK                      0x00000008
#define _U1EP10_EPRXEN_LENGTH                    0x00000001

#define _U1EP10_EPCONDIS_POSITION                0x00000004
#define _U1EP10_EPCONDIS_MASK                    0x00000010
#define _U1EP10_EPCONDIS_LENGTH                  0x00000001

#define _U1EP10_EPINEN_POSITION                  0x00000002
#define _U1EP10_EPINEN_MASK                      0x00000004
#define _U1EP10_EPINEN_LENGTH                    0x00000001

#define _U1EP10_EPOUTEN_POSITION                 0x00000003
#define _U1EP10_EPOUTEN_MASK                     0x00000008
#define _U1EP10_EPOUTEN_LENGTH                   0x00000001

#define _U1EP11_EPHSHK_POSITION                  0x00000000
#define _U1EP11_EPHSHK_MASK                      0x00000001
#define _U1EP11_EPHSHK_LENGTH                    0x00000001

#define _U1EP11_EPSTALL_POSITION                 0x00000001
#define _U1EP11_EPSTALL_MASK                     0x00000002
#define _U1EP11_EPSTALL_LENGTH                   0x00000001

#define _U1EP11_EPTXEN_POSITION                  0x00000002
#define _U1EP11_EPTXEN_MASK                      0x00000004
#define _U1EP11_EPTXEN_LENGTH                    0x00000001

#define _U1EP11_EPRXEN_POSITION                  0x00000003
#define _U1EP11_EPRXEN_MASK                      0x00000008
#define _U1EP11_EPRXEN_LENGTH                    0x00000001

#define _U1EP11_EPCONDIS_POSITION                0x00000004
#define _U1EP11_EPCONDIS_MASK                    0x00000010
#define _U1EP11_EPCONDIS_LENGTH                  0x00000001

#define _U1EP11_EPINEN_POSITION                  0x00000002
#define _U1EP11_EPINEN_MASK                      0x00000004
#define _U1EP11_EPINEN_LENGTH                    0x00000001

#define _U1EP11_EPOUTEN_POSITION                 0x00000003
#define _U1EP11_EPOUTEN_MASK                     0x00000008
#define _U1EP11_EPOUTEN_LENGTH                   0x00000001

#define _U1EP12_EPHSHK_POSITION                  0x00000000
#define _U1EP12_EPHSHK_MASK                      0x00000001
#define _U1EP12_EPHSHK_LENGTH                    0x00000001

#define _U1EP12_EPSTALL_POSITION                 0x00000001
#define _U1EP12_EPSTALL_MASK                     0x00000002
#define _U1EP12_EPSTALL_LENGTH                   0x00000001

#define _U1EP12_EPTXEN_POSITION                  0x00000002
#define _U1EP12_EPTXEN_MASK                      0x00000004
#define _U1EP12_EPTXEN_LENGTH                    0x00000001

#define _U1EP12_EPRXEN_POSITION                  0x00000003
#define _U1EP12_EPRXEN_MASK                      0x00000008
#define _U1EP12_EPRXEN_LENGTH                    0x00000001

#define _U1EP12_EPCONDIS_POSITION                0x00000004
#define _U1EP12_EPCONDIS_MASK                    0x00000010
#define _U1EP12_EPCONDIS_LENGTH                  0x00000001

#define _U1EP12_EPINEN_POSITION                  0x00000002
#define _U1EP12_EPINEN_MASK                      0x00000004
#define _U1EP12_EPINEN_LENGTH                    0x00000001

#define _U1EP12_EPOUTEN_POSITION                 0x00000003
#define _U1EP12_EPOUTEN_MASK                     0x00000008
#define _U1EP12_EPOUTEN_LENGTH                   0x00000001

#define _U1EP13_EPHSHK_POSITION                  0x00000000
#define _U1EP13_EPHSHK_MASK                      0x00000001
#define _U1EP13_EPHSHK_LENGTH                    0x00000001

#define _U1EP13_EPSTALL_POSITION                 0x00000001
#define _U1EP13_EPSTALL_MASK                     0x00000002
#define _U1EP13_EPSTALL_LENGTH                   0x00000001

#define _U1EP13_EPTXEN_POSITION                  0x00000002
#define _U1EP13_EPTXEN_MASK                      0x00000004
#define _U1EP13_EPTXEN_LENGTH                    0x00000001

#define _U1EP13_EPRXEN_POSITION                  0x00000003
#define _U1EP13_EPRXEN_MASK                      0x00000008
#define _U1EP13_EPRXEN_LENGTH                    0x00000001

#define _U1EP13_EPCONDIS_POSITION                0x00000004
#define _U1EP13_EPCONDIS_MASK                    0x00000010
#define _U1EP13_EPCONDIS_LENGTH                  0x00000001

#define _U1EP13_EPINEN_POSITION                  0x00000002
#define _U1EP13_EPINEN_MASK                      0x00000004
#define _U1EP13_EPINEN_LENGTH                    0x00000001

#define _U1EP13_EPOUTEN_POSITION                 0x00000003
#define _U1EP13_EPOUTEN_MASK                     0x00000008
#define _U1EP13_EPOUTEN_LENGTH                   0x00000001

#define _U1EP14_EPHSHK_POSITION                  0x00000000
#define _U1EP14_EPHSHK_MASK                      0x00000001
#define _U1EP14_EPHSHK_LENGTH                    0x00000001

#define _U1EP14_EPSTALL_POSITION                 0x00000001
#define _U1EP14_EPSTALL_MASK                     0x00000002
#define _U1EP14_EPSTALL_LENGTH                   0x00000001

#define _U1EP14_EPTXEN_POSITION                  0x00000002
#define _U1EP14_EPTXEN_MASK                      0x00000004
#define _U1EP14_EPTXEN_LENGTH                    0x00000001

#define _U1EP14_EPRXEN_POSITION                  0x00000003
#define _U1EP14_EPRXEN_MASK                      0x00000008
#define _U1EP14_EPRXEN_LENGTH                    0x00000001

#define _U1EP14_EPCONDIS_POSITION                0x00000004
#define _U1EP14_EPCONDIS_MASK                    0x00000010
#define _U1EP14_EPCONDIS_LENGTH                  0x00000001

#define _U1EP14_EPINEN_POSITION                  0x00000002
#define _U1EP14_EPINEN_MASK                      0x00000004
#define _U1EP14_EPINEN_LENGTH                    0x00000001

#define _U1EP14_EPOUTEN_POSITION                 0x00000003
#define _U1EP14_EPOUTEN_MASK                     0x00000008
#define _U1EP14_EPOUTEN_LENGTH                   0x00000001

#define _U1EP15_EPHSHK_POSITION                  0x00000000
#define _U1EP15_EPHSHK_MASK                      0x00000001
#define _U1EP15_EPHSHK_LENGTH                    0x00000001

#define _U1EP15_EPSTALL_POSITION                 0x00000001
#define _U1EP15_EPSTALL_MASK                     0x00000002
#define _U1EP15_EPSTALL_LENGTH                   0x00000001

#define _U1EP15_EPTXEN_POSITION                  0x00000002
#define _U1EP15_EPTXEN_MASK                      0x00000004
#define _U1EP15_EPTXEN_LENGTH                    0x00000001

#define _U1EP15_EPRXEN_POSITION                  0x00000003
#define _U1EP15_EPRXEN_MASK                      0x00000008
#define _U1EP15_EPRXEN_LENGTH                    0x00000001

#define _U1EP15_EPCONDIS_POSITION                0x00000004
#define _U1EP15_EPCONDIS_MASK                    0x00000010
#define _U1EP15_EPCONDIS_LENGTH                  0x00000001

#define _U1EP15_EPINEN_POSITION                  0x00000002
#define _U1EP15_EPINEN_MASK                      0x00000004
#define _U1EP15_EPINEN_LENGTH                    0x00000001

#define _U1EP15_EPOUTEN_POSITION                 0x00000003
#define _U1EP15_EPOUTEN_MASK                     0x00000008
#define _U1EP15_EPOUTEN_LENGTH                   0x00000001

#define _U1PWMRRS_PER_POSITION                   0x00000000
#define _U1PWMRRS_PER_MASK                       0x000000FF
#define _U1PWMRRS_PER_LENGTH                     0x00000008

#define _U1PWMRRS_DC_POSITION                    0x00000008
#define _U1PWMRRS_DC_MASK                        0x0000FF00
#define _U1PWMRRS_DC_LENGTH                      0x00000008

#define _U1PWMRRS_PER0_POSITION                  0x00000000
#define _U1PWMRRS_PER0_MASK                      0x00000001
#define _U1PWMRRS_PER0_LENGTH                    0x00000001

#define _U1PWMRRS_PER1_POSITION                  0x00000001
#define _U1PWMRRS_PER1_MASK                      0x00000002
#define _U1PWMRRS_PER1_LENGTH                    0x00000001

#define _U1PWMRRS_PER2_POSITION                  0x00000002
#define _U1PWMRRS_PER2_MASK                      0x00000004
#define _U1PWMRRS_PER2_LENGTH                    0x00000001

#define _U1PWMRRS_PER3_POSITION                  0x00000003
#define _U1PWMRRS_PER3_MASK                      0x00000008
#define _U1PWMRRS_PER3_LENGTH                    0x00000001

#define _U1PWMRRS_PER4_POSITION                  0x00000004
#define _U1PWMRRS_PER4_MASK                      0x00000010
#define _U1PWMRRS_PER4_LENGTH                    0x00000001

#define _U1PWMRRS_PER5_POSITION                  0x00000005
#define _U1PWMRRS_PER5_MASK                      0x00000020
#define _U1PWMRRS_PER5_LENGTH                    0x00000001

#define _U1PWMRRS_PER6_POSITION                  0x00000006
#define _U1PWMRRS_PER6_MASK                      0x00000040
#define _U1PWMRRS_PER6_LENGTH                    0x00000001

#define _U1PWMRRS_PER7_POSITION                  0x00000007
#define _U1PWMRRS_PER7_MASK                      0x00000080
#define _U1PWMRRS_PER7_LENGTH                    0x00000001

#define _U1PWMRRS_DC0_POSITION                   0x00000008
#define _U1PWMRRS_DC0_MASK                       0x00000100
#define _U1PWMRRS_DC0_LENGTH                     0x00000001

#define _U1PWMRRS_DC1_POSITION                   0x00000009
#define _U1PWMRRS_DC1_MASK                       0x00000200
#define _U1PWMRRS_DC1_LENGTH                     0x00000001

#define _U1PWMRRS_DC2_POSITION                   0x0000000A
#define _U1PWMRRS_DC2_MASK                       0x00000400
#define _U1PWMRRS_DC2_LENGTH                     0x00000001

#define _U1PWMRRS_DC3_POSITION                   0x0000000B
#define _U1PWMRRS_DC3_MASK                       0x00000800
#define _U1PWMRRS_DC3_LENGTH                     0x00000001

#define _U1PWMRRS_DC4_POSITION                   0x0000000C
#define _U1PWMRRS_DC4_MASK                       0x00001000
#define _U1PWMRRS_DC4_LENGTH                     0x00000001

#define _U1PWMRRS_DC5_POSITION                   0x0000000D
#define _U1PWMRRS_DC5_MASK                       0x00002000
#define _U1PWMRRS_DC5_LENGTH                     0x00000001

#define _U1PWMRRS_DC6_POSITION                   0x0000000E
#define _U1PWMRRS_DC6_MASK                       0x00004000
#define _U1PWMRRS_DC6_LENGTH                     0x00000001

#define _U1PWMRRS_DC7_POSITION                   0x0000000F
#define _U1PWMRRS_DC7_MASK                       0x00008000
#define _U1PWMRRS_DC7_LENGTH                     0x00000001

#define _U1PWMRRS_USBRS0_POSITION                0x00000000
#define _U1PWMRRS_USBRS0_MASK                    0x00000001
#define _U1PWMRRS_USBRS0_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS1_POSITION                0x00000001
#define _U1PWMRRS_USBRS1_MASK                    0x00000002
#define _U1PWMRRS_USBRS1_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS2_POSITION                0x00000002
#define _U1PWMRRS_USBRS2_MASK                    0x00000004
#define _U1PWMRRS_USBRS2_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS3_POSITION                0x00000003
#define _U1PWMRRS_USBRS3_MASK                    0x00000008
#define _U1PWMRRS_USBRS3_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS4_POSITION                0x00000004
#define _U1PWMRRS_USBRS4_MASK                    0x00000010
#define _U1PWMRRS_USBRS4_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS5_POSITION                0x00000005
#define _U1PWMRRS_USBRS5_MASK                    0x00000020
#define _U1PWMRRS_USBRS5_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS6_POSITION                0x00000006
#define _U1PWMRRS_USBRS6_MASK                    0x00000040
#define _U1PWMRRS_USBRS6_LENGTH                  0x00000001

#define _U1PWMRRS_USBRS7_POSITION                0x00000007
#define _U1PWMRRS_USBRS7_MASK                    0x00000080
#define _U1PWMRRS_USBRS7_LENGTH                  0x00000001

#define _U1PWMRRS_USBR0_POSITION                 0x00000008
#define _U1PWMRRS_USBR0_MASK                     0x00000100
#define _U1PWMRRS_USBR0_LENGTH                   0x00000001

#define _U1PWMRRS_USBR1_POSITION                 0x00000009
#define _U1PWMRRS_USBR1_MASK                     0x00000200
#define _U1PWMRRS_USBR1_LENGTH                   0x00000001

#define _U1PWMRRS_USBR2_POSITION                 0x0000000A
#define _U1PWMRRS_USBR2_MASK                     0x00000400
#define _U1PWMRRS_USBR2_LENGTH                   0x00000001

#define _U1PWMRRS_USBR3_POSITION                 0x0000000B
#define _U1PWMRRS_USBR3_MASK                     0x00000800
#define _U1PWMRRS_USBR3_LENGTH                   0x00000001

#define _U1PWMRRS_USBR4_POSITION                 0x0000000C
#define _U1PWMRRS_USBR4_MASK                     0x00001000
#define _U1PWMRRS_USBR4_LENGTH                   0x00000001

#define _U1PWMRRS_USBR5_POSITION                 0x0000000D
#define _U1PWMRRS_USBR5_MASK                     0x00002000
#define _U1PWMRRS_USBR5_LENGTH                   0x00000001

#define _U1PWMRRS_USBR6_POSITION                 0x0000000E
#define _U1PWMRRS_USBR6_MASK                     0x00004000
#define _U1PWMRRS_USBR6_LENGTH                   0x00000001

#define _U1PWMRRS_USBR7_POSITION                 0x0000000F
#define _U1PWMRRS_USBR7_MASK                     0x00008000
#define _U1PWMRRS_USBR7_LENGTH                   0x00000001

#define _U1PWMRRS_USBRS_POSITION                 0x00000000
#define _U1PWMRRS_USBRS_MASK                     0x000000FF
#define _U1PWMRRS_USBRS_LENGTH                   0x00000008

#define _U1PWMRRS_USBR_POSITION                  0x00000008
#define _U1PWMRRS_USBR_MASK                      0x0000FF00
#define _U1PWMRRS_USBR_LENGTH                    0x00000008

#define _U1PWMCON_CNTEN_POSITION                 0x00000008
#define _U1PWMCON_CNTEN_MASK                     0x00000100
#define _U1PWMCON_CNTEN_LENGTH                   0x00000001

#define _U1PWMCON_PWMPOL_POSITION                0x00000009
#define _U1PWMCON_PWMPOL_MASK                    0x00000200
#define _U1PWMCON_PWMPOL_LENGTH                  0x00000001

#define _U1PWMCON_PWMEN_POSITION                 0x0000000F
#define _U1PWMCON_PWMEN_MASK                     0x00008000
#define _U1PWMCON_PWMEN_LENGTH                   0x00000001

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

#define _ANSC_ANSC13_POSITION                    0x0000000D
#define _ANSC_ANSC13_MASK                        0x00002000
#define _ANSC_ANSC13_LENGTH                      0x00000001

#define _ANSC_ANSC14_POSITION                    0x0000000E
#define _ANSC_ANSC14_MASK                        0x00004000
#define _ANSC_ANSC14_LENGTH                      0x00000001

#define _ANSD_ANSD6_POSITION                     0x00000006
#define _ANSD_ANSD6_MASK                         0x00000040
#define _ANSD_ANSD6_LENGTH                       0x00000001

#define _ANSD_ANSD7_POSITION                     0x00000007
#define _ANSD_ANSD7_MASK                         0x00000080
#define _ANSD_ANSD7_LENGTH                       0x00000001

#define _ANSF_ANSF0_POSITION                     0x00000000
#define _ANSF_ANSF0_MASK                         0x00000001
#define _ANSF_ANSF0_LENGTH                       0x00000001

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

#define _RPINR2_INT4R3_POSITION                  0x00000003
#define _RPINR2_INT4R3_MASK                      0x00000008
#define _RPINR2_INT4R3_LENGTH                    0x00000001

#define _RPINR2_INT4R4_POSITION                  0x00000004
#define _RPINR2_INT4R4_MASK                      0x00000010
#define _RPINR2_INT4R4_LENGTH                    0x00000001

#define _RPINR2_INT4R5_POSITION                  0x00000005
#define _RPINR2_INT4R5_MASK                      0x00000020
#define _RPINR2_INT4R5_LENGTH                    0x00000001

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

#define _RPINR10_IC8R_POSITION                   0x00000008
#define _RPINR10_IC8R_MASK                       0x00003F00
#define _RPINR10_IC8R_LENGTH                     0x00000006

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

#define _RPINR15_IC9R_POSITION                   0x00000008
#define _RPINR15_IC9R_MASK                       0x00003F00
#define _RPINR15_IC9R_LENGTH                     0x00000006

#define _RPINR15_IC9R0_POSITION                  0x00000008
#define _RPINR15_IC9R0_MASK                      0x00000100
#define _RPINR15_IC9R0_LENGTH                    0x00000001

#define _RPINR15_IC9R1_POSITION                  0x00000009
#define _RPINR15_IC9R1_MASK                      0x00000200
#define _RPINR15_IC9R1_LENGTH                    0x00000001

#define _RPINR15_IC9R2_POSITION                  0x0000000A
#define _RPINR15_IC9R2_MASK                      0x00000400
#define _RPINR15_IC9R2_LENGTH                    0x00000001

#define _RPINR15_IC9R3_POSITION                  0x0000000B
#define _RPINR15_IC9R3_MASK                      0x00000800
#define _RPINR15_IC9R3_LENGTH                    0x00000001

#define _RPINR15_IC9R4_POSITION                  0x0000000C
#define _RPINR15_IC9R4_MASK                      0x00001000
#define _RPINR15_IC9R4_LENGTH                    0x00000001

#define _RPINR15_IC9R5_POSITION                  0x0000000D
#define _RPINR15_IC9R5_MASK                      0x00002000
#define _RPINR15_IC9R5_LENGTH                    0x00000001

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

#define _RPINR28_SDI3R_POSITION                  0x00000000
#define _RPINR28_SDI3R_MASK                      0x0000003F
#define _RPINR28_SDI3R_LENGTH                    0x00000006

#define _RPINR28_SCK3R_POSITION                  0x00000008
#define _RPINR28_SCK3R_MASK                      0x00003F00
#define _RPINR28_SCK3R_LENGTH                    0x00000006

#define _RPINR28_SDI3R0_POSITION                 0x00000000
#define _RPINR28_SDI3R0_MASK                     0x00000001
#define _RPINR28_SDI3R0_LENGTH                   0x00000001

#define _RPINR28_SDI3R1_POSITION                 0x00000001
#define _RPINR28_SDI3R1_MASK                     0x00000002
#define _RPINR28_SDI3R1_LENGTH                   0x00000001

#define _RPINR28_SDI3R2_POSITION                 0x00000002
#define _RPINR28_SDI3R2_MASK                     0x00000004
#define _RPINR28_SDI3R2_LENGTH                   0x00000001

#define _RPINR28_SDI3R3_POSITION                 0x00000003
#define _RPINR28_SDI3R3_MASK                     0x00000008
#define _RPINR28_SDI3R3_LENGTH                   0x00000001

#define _RPINR28_SDI3R4_POSITION                 0x00000004
#define _RPINR28_SDI3R4_MASK                     0x00000010
#define _RPINR28_SDI3R4_LENGTH                   0x00000001

#define _RPINR28_SDI3R5_POSITION                 0x00000005
#define _RPINR28_SDI3R5_MASK                     0x00000020
#define _RPINR28_SDI3R5_LENGTH                   0x00000001

#define _RPINR28_SCK3R0_POSITION                 0x00000008
#define _RPINR28_SCK3R0_MASK                     0x00000100
#define _RPINR28_SCK3R0_LENGTH                   0x00000001

#define _RPINR28_SCK3R1_POSITION                 0x00000009
#define _RPINR28_SCK3R1_MASK                     0x00000200
#define _RPINR28_SCK3R1_LENGTH                   0x00000001

#define _RPINR28_SCK3R2_POSITION                 0x0000000A
#define _RPINR28_SCK3R2_MASK                     0x00000400
#define _RPINR28_SCK3R2_LENGTH                   0x00000001

#define _RPINR28_SCK3R3_POSITION                 0x0000000B
#define _RPINR28_SCK3R3_MASK                     0x00000800
#define _RPINR28_SCK3R3_LENGTH                   0x00000001

#define _RPINR28_SCK3R4_POSITION                 0x0000000C
#define _RPINR28_SCK3R4_MASK                     0x00001000
#define _RPINR28_SCK3R4_LENGTH                   0x00000001

#define _RPINR28_SCK3R5_POSITION                 0x0000000D
#define _RPINR28_SCK3R5_MASK                     0x00002000
#define _RPINR28_SCK3R5_LENGTH                   0x00000001

#define _RPINR29_SS3R_POSITION                   0x00000000
#define _RPINR29_SS3R_MASK                       0x0000003F
#define _RPINR29_SS3R_LENGTH                     0x00000006

#define _RPINR29_SS3R0_POSITION                  0x00000000
#define _RPINR29_SS3R0_MASK                      0x00000001
#define _RPINR29_SS3R0_LENGTH                    0x00000001

#define _RPINR29_SS3R1_POSITION                  0x00000001
#define _RPINR29_SS3R1_MASK                      0x00000002
#define _RPINR29_SS3R1_LENGTH                    0x00000001

#define _RPINR29_SS3R2_POSITION                  0x00000002
#define _RPINR29_SS3R2_MASK                      0x00000004
#define _RPINR29_SS3R2_LENGTH                    0x00000001

#define _RPINR29_SS3R3_POSITION                  0x00000003
#define _RPINR29_SS3R3_MASK                      0x00000008
#define _RPINR29_SS3R3_LENGTH                    0x00000001

#define _RPINR29_SS3R4_POSITION                  0x00000004
#define _RPINR29_SS3R4_MASK                      0x00000010
#define _RPINR29_SS3R4_LENGTH                    0x00000001

#define _RPINR29_SS3R5_POSITION                  0x00000005
#define _RPINR29_SS3R5_MASK                      0x00000020
#define _RPINR29_SS3R5_LENGTH                    0x00000001

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

#define _G1CMDL_GCMD0_POSITION                   0x00000000
#define _G1CMDL_GCMD0_MASK                       0x00000001
#define _G1CMDL_GCMD0_LENGTH                     0x00000001

#define _G1CMDL_GCMD1_POSITION                   0x00000001
#define _G1CMDL_GCMD1_MASK                       0x00000002
#define _G1CMDL_GCMD1_LENGTH                     0x00000001

#define _G1CMDL_GCMD2_POSITION                   0x00000002
#define _G1CMDL_GCMD2_MASK                       0x00000004
#define _G1CMDL_GCMD2_LENGTH                     0x00000001

#define _G1CMDL_GCMD3_POSITION                   0x00000003
#define _G1CMDL_GCMD3_MASK                       0x00000008
#define _G1CMDL_GCMD3_LENGTH                     0x00000001

#define _G1CMDL_GCMD4_POSITION                   0x00000004
#define _G1CMDL_GCMD4_MASK                       0x00000010
#define _G1CMDL_GCMD4_LENGTH                     0x00000001

#define _G1CMDL_GCMD5_POSITION                   0x00000005
#define _G1CMDL_GCMD5_MASK                       0x00000020
#define _G1CMDL_GCMD5_LENGTH                     0x00000001

#define _G1CMDL_GCMD6_POSITION                   0x00000006
#define _G1CMDL_GCMD6_MASK                       0x00000040
#define _G1CMDL_GCMD6_LENGTH                     0x00000001

#define _G1CMDL_GCMD7_POSITION                   0x00000007
#define _G1CMDL_GCMD7_MASK                       0x00000080
#define _G1CMDL_GCMD7_LENGTH                     0x00000001

#define _G1CMDL_GCMD8_POSITION                   0x00000008
#define _G1CMDL_GCMD8_MASK                       0x00000100
#define _G1CMDL_GCMD8_LENGTH                     0x00000001

#define _G1CMDL_GCMD9_POSITION                   0x00000009
#define _G1CMDL_GCMD9_MASK                       0x00000200
#define _G1CMDL_GCMD9_LENGTH                     0x00000001

#define _G1CMDL_GCMD10_POSITION                  0x0000000A
#define _G1CMDL_GCMD10_MASK                      0x00000400
#define _G1CMDL_GCMD10_LENGTH                    0x00000001

#define _G1CMDL_GCMD11_POSITION                  0x0000000B
#define _G1CMDL_GCMD11_MASK                      0x00000800
#define _G1CMDL_GCMD11_LENGTH                    0x00000001

#define _G1CMDL_GCMD12_POSITION                  0x0000000C
#define _G1CMDL_GCMD12_MASK                      0x00001000
#define _G1CMDL_GCMD12_LENGTH                    0x00000001

#define _G1CMDL_GCMD13_POSITION                  0x0000000D
#define _G1CMDL_GCMD13_MASK                      0x00002000
#define _G1CMDL_GCMD13_LENGTH                    0x00000001

#define _G1CMDL_GCMD14_POSITION                  0x0000000E
#define _G1CMDL_GCMD14_MASK                      0x00004000
#define _G1CMDL_GCMD14_LENGTH                    0x00000001

#define _G1CMDL_GCMD15_POSITION                  0x0000000F
#define _G1CMDL_GCMD15_MASK                      0x00008000
#define _G1CMDL_GCMD15_LENGTH                    0x00000001

#define _G1CMDH_GCMD16_POSITION                  0x00000000
#define _G1CMDH_GCMD16_MASK                      0x00000001
#define _G1CMDH_GCMD16_LENGTH                    0x00000001

#define _G1CMDH_GCMD17_POSITION                  0x00000001
#define _G1CMDH_GCMD17_MASK                      0x00000002
#define _G1CMDH_GCMD17_LENGTH                    0x00000001

#define _G1CMDH_GCMD18_POSITION                  0x00000002
#define _G1CMDH_GCMD18_MASK                      0x00000004
#define _G1CMDH_GCMD18_LENGTH                    0x00000001

#define _G1CMDH_GCMD19_POSITION                  0x00000003
#define _G1CMDH_GCMD19_MASK                      0x00000008
#define _G1CMDH_GCMD19_LENGTH                    0x00000001

#define _G1CMDH_GCMD20_POSITION                  0x00000004
#define _G1CMDH_GCMD20_MASK                      0x00000010
#define _G1CMDH_GCMD20_LENGTH                    0x00000001

#define _G1CMDH_GCMD21_POSITION                  0x00000005
#define _G1CMDH_GCMD21_MASK                      0x00000020
#define _G1CMDH_GCMD21_LENGTH                    0x00000001

#define _G1CMDH_GCMD22_POSITION                  0x00000006
#define _G1CMDH_GCMD22_MASK                      0x00000040
#define _G1CMDH_GCMD22_LENGTH                    0x00000001

#define _G1CMDH_GCMD23_POSITION                  0x00000007
#define _G1CMDH_GCMD23_MASK                      0x00000080
#define _G1CMDH_GCMD23_LENGTH                    0x00000001

#define _G1CMDH_GCMD24_POSITION                  0x00000008
#define _G1CMDH_GCMD24_MASK                      0x00000100
#define _G1CMDH_GCMD24_LENGTH                    0x00000001

#define _G1CMDH_GCMD25_POSITION                  0x00000009
#define _G1CMDH_GCMD25_MASK                      0x00000200
#define _G1CMDH_GCMD25_LENGTH                    0x00000001

#define _G1CMDH_GCMD26_POSITION                  0x0000000A
#define _G1CMDH_GCMD26_MASK                      0x00000400
#define _G1CMDH_GCMD26_LENGTH                    0x00000001

#define _G1CMDH_GCMD27_POSITION                  0x0000000B
#define _G1CMDH_GCMD27_MASK                      0x00000800
#define _G1CMDH_GCMD27_LENGTH                    0x00000001

#define _G1CMDH_GCMD28_POSITION                  0x0000000C
#define _G1CMDH_GCMD28_MASK                      0x00001000
#define _G1CMDH_GCMD28_LENGTH                    0x00000001

#define _G1CMDH_GCMD29_POSITION                  0x0000000D
#define _G1CMDH_GCMD29_MASK                      0x00002000
#define _G1CMDH_GCMD29_LENGTH                    0x00000001

#define _G1CMDH_GCMD30_POSITION                  0x0000000E
#define _G1CMDH_GCMD30_MASK                      0x00004000
#define _G1CMDH_GCMD30_LENGTH                    0x00000001

#define _G1CMDH_GCMD31_POSITION                  0x0000000F
#define _G1CMDH_GCMD31_MASK                      0x00008000
#define _G1CMDH_GCMD31_LENGTH                    0x00000001

#define _G1CON1_GCMDCNT_POSITION                 0x00000000
#define _G1CON1_GCMDCNT_MASK                     0x0000001F
#define _G1CON1_GCMDCNT_LENGTH                   0x00000005

#define _G1CON1_PUBPP_POSITION                   0x00000005
#define _G1CON1_PUBPP_MASK                       0x000000E0
#define _G1CON1_PUBPP_LENGTH                     0x00000003

#define _G1CON1_GCMDWMK_POSITION                 0x00000008
#define _G1CON1_GCMDWMK_MASK                     0x00001F00
#define _G1CON1_GCMDWMK_LENGTH                   0x00000005

#define _G1CON1_G1SIDL_POSITION                  0x0000000D
#define _G1CON1_G1SIDL_MASK                      0x00002000
#define _G1CON1_G1SIDL_LENGTH                    0x00000001

#define _G1CON1_G1EN_POSITION                    0x0000000F
#define _G1CON1_G1EN_MASK                        0x00008000
#define _G1CON1_G1EN_LENGTH                      0x00000001

#define _G1CON1_GCMDCNT0_POSITION                0x00000000
#define _G1CON1_GCMDCNT0_MASK                    0x00000001
#define _G1CON1_GCMDCNT0_LENGTH                  0x00000001

#define _G1CON1_GCMDCNT1_POSITION                0x00000001
#define _G1CON1_GCMDCNT1_MASK                    0x00000002
#define _G1CON1_GCMDCNT1_LENGTH                  0x00000001

#define _G1CON1_GCMDCNT2_POSITION                0x00000002
#define _G1CON1_GCMDCNT2_MASK                    0x00000004
#define _G1CON1_GCMDCNT2_LENGTH                  0x00000001

#define _G1CON1_GCMDCNT3_POSITION                0x00000003
#define _G1CON1_GCMDCNT3_MASK                    0x00000008
#define _G1CON1_GCMDCNT3_LENGTH                  0x00000001

#define _G1CON1_GCMDCNT4_POSITION                0x00000004
#define _G1CON1_GCMDCNT4_MASK                    0x00000010
#define _G1CON1_GCMDCNT4_LENGTH                  0x00000001

#define _G1CON1_PUBPP0_POSITION                  0x00000005
#define _G1CON1_PUBPP0_MASK                      0x00000020
#define _G1CON1_PUBPP0_LENGTH                    0x00000001

#define _G1CON1_PUBPP1_POSITION                  0x00000006
#define _G1CON1_PUBPP1_MASK                      0x00000040
#define _G1CON1_PUBPP1_LENGTH                    0x00000001

#define _G1CON1_PUBPP2_POSITION                  0x00000007
#define _G1CON1_PUBPP2_MASK                      0x00000080
#define _G1CON1_PUBPP2_LENGTH                    0x00000001

#define _G1CON1_GCMDWMK0_POSITION                0x00000008
#define _G1CON1_GCMDWMK0_MASK                    0x00000100
#define _G1CON1_GCMDWMK0_LENGTH                  0x00000001

#define _G1CON1_GCMDWMK1_POSITION                0x00000009
#define _G1CON1_GCMDWMK1_MASK                    0x00000200
#define _G1CON1_GCMDWMK1_LENGTH                  0x00000001

#define _G1CON1_GCMDWMK2_POSITION                0x0000000A
#define _G1CON1_GCMDWMK2_MASK                    0x00000400
#define _G1CON1_GCMDWMK2_LENGTH                  0x00000001

#define _G1CON1_GCMDWMK3_POSITION                0x0000000B
#define _G1CON1_GCMDWMK3_MASK                    0x00000800
#define _G1CON1_GCMDWMK3_LENGTH                  0x00000001

#define _G1CON1_GCMDWMK4_POSITION                0x0000000C
#define _G1CON1_GCMDWMK4_MASK                    0x00001000
#define _G1CON1_GCMDWMK4_LENGTH                  0x00000001

#define _G1STAT_CMDMPT_POSITION                  0x00000000
#define _G1STAT_CMDMPT_MASK                      0x00000001
#define _G1STAT_CMDMPT_LENGTH                    0x00000001

#define _G1STAT_CMDFUL_POSITION                  0x00000001
#define _G1STAT_CMDFUL_MASK                      0x00000002
#define _G1STAT_CMDFUL_LENGTH                    0x00000001

#define _G1STAT_CMDLV_POSITION                   0x00000002
#define _G1STAT_CMDLV_MASK                       0x00000004
#define _G1STAT_CMDLV_LENGTH                     0x00000001

#define _G1STAT_HMRGN_POSITION                   0x00000003
#define _G1STAT_HMRGN_MASK                       0x00000008
#define _G1STAT_HMRGN_LENGTH                     0x00000001

#define _G1STAT_VMRGN_POSITION                   0x00000004
#define _G1STAT_VMRGN_MASK                       0x00000010
#define _G1STAT_VMRGN_LENGTH                     0x00000001

#define _G1STAT_CHRBUSY_POSITION                 0x00000005
#define _G1STAT_CHRBUSY_MASK                     0x00000020
#define _G1STAT_CHRBUSY_LENGTH                   0x00000001

#define _G1STAT_RCCBUSY_POSITION                 0x00000006
#define _G1STAT_RCCBUSY_MASK                     0x00000040
#define _G1STAT_RCCBUSY_LENGTH                   0x00000001

#define _G1STAT_IPUBUSY_POSITION                 0x00000007
#define _G1STAT_IPUBUSY_MASK                     0x00000080
#define _G1STAT_IPUBUSY_LENGTH                   0x00000001

#define _G1STAT_PUBUSY_POSITION                  0x0000000F
#define _G1STAT_PUBUSY_MASK                      0x00008000
#define _G1STAT_PUBUSY_LENGTH                    0x00000001

#define _G1IE_CMDMPTIE_POSITION                  0x00000000
#define _G1IE_CMDMPTIE_MASK                      0x00000001
#define _G1IE_CMDMPTIE_LENGTH                    0x00000001

#define _G1IE_CMDFULIE_POSITION                  0x00000001
#define _G1IE_CMDFULIE_MASK                      0x00000002
#define _G1IE_CMDFULIE_LENGTH                    0x00000001

#define _G1IE_CMDLVIE_POSITION                   0x00000002
#define _G1IE_CMDLVIE_MASK                       0x00000004
#define _G1IE_CMDLVIE_LENGTH                     0x00000001

#define _G1IE_HMRGNIE_POSITION                   0x00000003
#define _G1IE_HMRGNIE_MASK                       0x00000008
#define _G1IE_HMRGNIE_LENGTH                     0x00000001

#define _G1IE_VMRGNIE_POSITION                   0x00000004
#define _G1IE_VMRGNIE_MASK                       0x00000010
#define _G1IE_VMRGNIE_LENGTH                     0x00000001

#define _G1IE_CHRIE_POSITION                     0x00000005
#define _G1IE_CHRIE_MASK                         0x00000020
#define _G1IE_CHRIE_LENGTH                       0x00000001

#define _G1IE_RCCIE_POSITION                     0x00000006
#define _G1IE_RCCIE_MASK                         0x00000040
#define _G1IE_RCCIE_LENGTH                       0x00000001

#define _G1IE_IPUIE_POSITION                     0x00000007
#define _G1IE_IPUIE_MASK                         0x00000080
#define _G1IE_IPUIE_LENGTH                       0x00000001

#define _G1IE_PUIE_POSITION                      0x0000000F
#define _G1IE_PUIE_MASK                          0x00008000
#define _G1IE_PUIE_LENGTH                        0x00000001

#define _G1IR_CMDMPTIF_POSITION                  0x00000000
#define _G1IR_CMDMPTIF_MASK                      0x00000001
#define _G1IR_CMDMPTIF_LENGTH                    0x00000001

#define _G1IR_CMDFULIF_POSITION                  0x00000001
#define _G1IR_CMDFULIF_MASK                      0x00000002
#define _G1IR_CMDFULIF_LENGTH                    0x00000001

#define _G1IR_CMDLVIF_POSITION                   0x00000002
#define _G1IR_CMDLVIF_MASK                       0x00000004
#define _G1IR_CMDLVIF_LENGTH                     0x00000001

#define _G1IR_HMRGNIF_POSITION                   0x00000003
#define _G1IR_HMRGNIF_MASK                       0x00000008
#define _G1IR_HMRGNIF_LENGTH                     0x00000001

#define _G1IR_VMRGNIF_POSITION                   0x00000004
#define _G1IR_VMRGNIF_MASK                       0x00000010
#define _G1IR_VMRGNIF_LENGTH                     0x00000001

#define _G1IR_CHRIF_POSITION                     0x00000005
#define _G1IR_CHRIF_MASK                         0x00000020
#define _G1IR_CHRIF_LENGTH                       0x00000001

#define _G1IR_RCCIF_POSITION                     0x00000006
#define _G1IR_RCCIF_MASK                         0x00000040
#define _G1IR_RCCIF_LENGTH                       0x00000001

#define _G1IR_IPUIF_POSITION                     0x00000007
#define _G1IR_IPUIF_MASK                         0x00000080
#define _G1IR_IPUIF_LENGTH                       0x00000001

#define _G1IR_PUIF_POSITION                      0x0000000F
#define _G1IR_PUIF_MASK                          0x00008000
#define _G1IR_PUIF_LENGTH                        0x00000001

#define _G1W1ADRL_W1ADR0_POSITION                0x00000000
#define _G1W1ADRL_W1ADR0_MASK                    0x00000001
#define _G1W1ADRL_W1ADR0_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR1_POSITION                0x00000001
#define _G1W1ADRL_W1ADR1_MASK                    0x00000002
#define _G1W1ADRL_W1ADR1_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR2_POSITION                0x00000002
#define _G1W1ADRL_W1ADR2_MASK                    0x00000004
#define _G1W1ADRL_W1ADR2_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR3_POSITION                0x00000003
#define _G1W1ADRL_W1ADR3_MASK                    0x00000008
#define _G1W1ADRL_W1ADR3_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR4_POSITION                0x00000004
#define _G1W1ADRL_W1ADR4_MASK                    0x00000010
#define _G1W1ADRL_W1ADR4_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR5_POSITION                0x00000005
#define _G1W1ADRL_W1ADR5_MASK                    0x00000020
#define _G1W1ADRL_W1ADR5_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR6_POSITION                0x00000006
#define _G1W1ADRL_W1ADR6_MASK                    0x00000040
#define _G1W1ADRL_W1ADR6_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR7_POSITION                0x00000007
#define _G1W1ADRL_W1ADR7_MASK                    0x00000080
#define _G1W1ADRL_W1ADR7_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR8_POSITION                0x00000008
#define _G1W1ADRL_W1ADR8_MASK                    0x00000100
#define _G1W1ADRL_W1ADR8_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR9_POSITION                0x00000009
#define _G1W1ADRL_W1ADR9_MASK                    0x00000200
#define _G1W1ADRL_W1ADR9_LENGTH                  0x00000001

#define _G1W1ADRL_W1ADR10_POSITION               0x0000000A
#define _G1W1ADRL_W1ADR10_MASK                   0x00000400
#define _G1W1ADRL_W1ADR10_LENGTH                 0x00000001

#define _G1W1ADRL_W1ADR11_POSITION               0x0000000B
#define _G1W1ADRL_W1ADR11_MASK                   0x00000800
#define _G1W1ADRL_W1ADR11_LENGTH                 0x00000001

#define _G1W1ADRL_W1ADR12_POSITION               0x0000000C
#define _G1W1ADRL_W1ADR12_MASK                   0x00001000
#define _G1W1ADRL_W1ADR12_LENGTH                 0x00000001

#define _G1W1ADRL_W1ADR13_POSITION               0x0000000D
#define _G1W1ADRL_W1ADR13_MASK                   0x00002000
#define _G1W1ADRL_W1ADR13_LENGTH                 0x00000001

#define _G1W1ADRL_W1ADR14_POSITION               0x0000000E
#define _G1W1ADRL_W1ADR14_MASK                   0x00004000
#define _G1W1ADRL_W1ADR14_LENGTH                 0x00000001

#define _G1W1ADRL_W1ADR15_POSITION               0x0000000F
#define _G1W1ADRL_W1ADR15_MASK                   0x00008000
#define _G1W1ADRL_W1ADR15_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR16_POSITION               0x00000000
#define _G1W1ADRH_W1ADR16_MASK                   0x00000001
#define _G1W1ADRH_W1ADR16_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR17_POSITION               0x00000001
#define _G1W1ADRH_W1ADR17_MASK                   0x00000002
#define _G1W1ADRH_W1ADR17_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR18_POSITION               0x00000002
#define _G1W1ADRH_W1ADR18_MASK                   0x00000004
#define _G1W1ADRH_W1ADR18_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR19_POSITION               0x00000003
#define _G1W1ADRH_W1ADR19_MASK                   0x00000008
#define _G1W1ADRH_W1ADR19_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR20_POSITION               0x00000004
#define _G1W1ADRH_W1ADR20_MASK                   0x00000010
#define _G1W1ADRH_W1ADR20_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR21_POSITION               0x00000005
#define _G1W1ADRH_W1ADR21_MASK                   0x00000020
#define _G1W1ADRH_W1ADR21_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR22_POSITION               0x00000006
#define _G1W1ADRH_W1ADR22_MASK                   0x00000040
#define _G1W1ADRH_W1ADR22_LENGTH                 0x00000001

#define _G1W1ADRH_W1ADR23_POSITION               0x00000007
#define _G1W1ADRH_W1ADR23_MASK                   0x00000080
#define _G1W1ADRH_W1ADR23_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR0_POSITION                0x00000000
#define _G1W2ADRL_W2ADR0_MASK                    0x00000001
#define _G1W2ADRL_W2ADR0_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR1_POSITION                0x00000001
#define _G1W2ADRL_W2ADR1_MASK                    0x00000002
#define _G1W2ADRL_W2ADR1_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR2_POSITION                0x00000002
#define _G1W2ADRL_W2ADR2_MASK                    0x00000004
#define _G1W2ADRL_W2ADR2_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR3_POSITION                0x00000003
#define _G1W2ADRL_W2ADR3_MASK                    0x00000008
#define _G1W2ADRL_W2ADR3_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR4_POSITION                0x00000004
#define _G1W2ADRL_W2ADR4_MASK                    0x00000010
#define _G1W2ADRL_W2ADR4_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR5_POSITION                0x00000005
#define _G1W2ADRL_W2ADR5_MASK                    0x00000020
#define _G1W2ADRL_W2ADR5_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR6_POSITION                0x00000006
#define _G1W2ADRL_W2ADR6_MASK                    0x00000040
#define _G1W2ADRL_W2ADR6_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR7_POSITION                0x00000007
#define _G1W2ADRL_W2ADR7_MASK                    0x00000080
#define _G1W2ADRL_W2ADR7_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR8_POSITION                0x00000008
#define _G1W2ADRL_W2ADR8_MASK                    0x00000100
#define _G1W2ADRL_W2ADR8_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR9_POSITION                0x00000009
#define _G1W2ADRL_W2ADR9_MASK                    0x00000200
#define _G1W2ADRL_W2ADR9_LENGTH                  0x00000001

#define _G1W2ADRL_W2ADR10_POSITION               0x0000000A
#define _G1W2ADRL_W2ADR10_MASK                   0x00000400
#define _G1W2ADRL_W2ADR10_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR11_POSITION               0x0000000B
#define _G1W2ADRL_W2ADR11_MASK                   0x00000800
#define _G1W2ADRL_W2ADR11_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR12_POSITION               0x0000000C
#define _G1W2ADRL_W2ADR12_MASK                   0x00001000
#define _G1W2ADRL_W2ADR12_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR13_POSITION               0x0000000D
#define _G1W2ADRL_W2ADR13_MASK                   0x00002000
#define _G1W2ADRL_W2ADR13_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR14_POSITION               0x0000000E
#define _G1W2ADRL_W2ADR14_MASK                   0x00004000
#define _G1W2ADRL_W2ADR14_LENGTH                 0x00000001

#define _G1W2ADRL_W2ADR15_POSITION               0x0000000F
#define _G1W2ADRL_W2ADR15_MASK                   0x00008000
#define _G1W2ADRL_W2ADR15_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR16_POSITION               0x00000000
#define _G1W2ADRH_W2ADR16_MASK                   0x00000001
#define _G1W2ADRH_W2ADR16_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR17_POSITION               0x00000001
#define _G1W2ADRH_W2ADR17_MASK                   0x00000002
#define _G1W2ADRH_W2ADR17_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR18_POSITION               0x00000002
#define _G1W2ADRH_W2ADR18_MASK                   0x00000004
#define _G1W2ADRH_W2ADR18_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR19_POSITION               0x00000003
#define _G1W2ADRH_W2ADR19_MASK                   0x00000008
#define _G1W2ADRH_W2ADR19_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR20_POSITION               0x00000004
#define _G1W2ADRH_W2ADR20_MASK                   0x00000010
#define _G1W2ADRH_W2ADR20_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR21_POSITION               0x00000005
#define _G1W2ADRH_W2ADR21_MASK                   0x00000020
#define _G1W2ADRH_W2ADR21_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR22_POSITION               0x00000006
#define _G1W2ADRH_W2ADR22_MASK                   0x00000040
#define _G1W2ADRH_W2ADR22_LENGTH                 0x00000001

#define _G1W2ADRH_W2ADR23_POSITION               0x00000007
#define _G1W2ADRH_W2ADR23_MASK                   0x00000080
#define _G1W2ADRH_W2ADR23_LENGTH                 0x00000001

#define _G1PUW_PUW_POSITION                      0x00000000
#define _G1PUW_PUW_MASK                          0x000007FF
#define _G1PUW_PUW_LENGTH                        0x0000000B

#define _G1PUW_PUW0_POSITION                     0x00000000
#define _G1PUW_PUW0_MASK                         0x00000001
#define _G1PUW_PUW0_LENGTH                       0x00000001

#define _G1PUW_PUW1_POSITION                     0x00000001
#define _G1PUW_PUW1_MASK                         0x00000002
#define _G1PUW_PUW1_LENGTH                       0x00000001

#define _G1PUW_PUW2_POSITION                     0x00000002
#define _G1PUW_PUW2_MASK                         0x00000004
#define _G1PUW_PUW2_LENGTH                       0x00000001

#define _G1PUW_PUW3_POSITION                     0x00000003
#define _G1PUW_PUW3_MASK                         0x00000008
#define _G1PUW_PUW3_LENGTH                       0x00000001

#define _G1PUW_PUW4_POSITION                     0x00000004
#define _G1PUW_PUW4_MASK                         0x00000010
#define _G1PUW_PUW4_LENGTH                       0x00000001

#define _G1PUW_PUW5_POSITION                     0x00000005
#define _G1PUW_PUW5_MASK                         0x00000020
#define _G1PUW_PUW5_LENGTH                       0x00000001

#define _G1PUW_PUW6_POSITION                     0x00000006
#define _G1PUW_PUW6_MASK                         0x00000040
#define _G1PUW_PUW6_LENGTH                       0x00000001

#define _G1PUW_PUW7_POSITION                     0x00000007
#define _G1PUW_PUW7_MASK                         0x00000080
#define _G1PUW_PUW7_LENGTH                       0x00000001

#define _G1PUW_PUW8_POSITION                     0x00000008
#define _G1PUW_PUW8_MASK                         0x00000100
#define _G1PUW_PUW8_LENGTH                       0x00000001

#define _G1PUW_PUW9_POSITION                     0x00000009
#define _G1PUW_PUW9_MASK                         0x00000200
#define _G1PUW_PUW9_LENGTH                       0x00000001

#define _G1PUW_PUW10_POSITION                    0x0000000A
#define _G1PUW_PUW10_MASK                        0x00000400
#define _G1PUW_PUW10_LENGTH                      0x00000001

#define _G1PUH_PUH_POSITION                      0x00000000
#define _G1PUH_PUH_MASK                          0x000007FF
#define _G1PUH_PUH_LENGTH                        0x0000000B

#define _G1PUH_PUH0_POSITION                     0x00000000
#define _G1PUH_PUH0_MASK                         0x00000001
#define _G1PUH_PUH0_LENGTH                       0x00000001

#define _G1PUH_PUH1_POSITION                     0x00000001
#define _G1PUH_PUH1_MASK                         0x00000002
#define _G1PUH_PUH1_LENGTH                       0x00000001

#define _G1PUH_PUH2_POSITION                     0x00000002
#define _G1PUH_PUH2_MASK                         0x00000004
#define _G1PUH_PUH2_LENGTH                       0x00000001

#define _G1PUH_PUH3_POSITION                     0x00000003
#define _G1PUH_PUH3_MASK                         0x00000008
#define _G1PUH_PUH3_LENGTH                       0x00000001

#define _G1PUH_PUH4_POSITION                     0x00000004
#define _G1PUH_PUH4_MASK                         0x00000010
#define _G1PUH_PUH4_LENGTH                       0x00000001

#define _G1PUH_PUH5_POSITION                     0x00000005
#define _G1PUH_PUH5_MASK                         0x00000020
#define _G1PUH_PUH5_LENGTH                       0x00000001

#define _G1PUH_PUH6_POSITION                     0x00000006
#define _G1PUH_PUH6_MASK                         0x00000040
#define _G1PUH_PUH6_LENGTH                       0x00000001

#define _G1PUH_PUH7_POSITION                     0x00000007
#define _G1PUH_PUH7_MASK                         0x00000080
#define _G1PUH_PUH7_LENGTH                       0x00000001

#define _G1PUH_PUH8_POSITION                     0x00000008
#define _G1PUH_PUH8_MASK                         0x00000100
#define _G1PUH_PUH8_LENGTH                       0x00000001

#define _G1PUH_PUH9_POSITION                     0x00000009
#define _G1PUH_PUH9_MASK                         0x00000200
#define _G1PUH_PUH9_LENGTH                       0x00000001

#define _G1PUH_PUH10_POSITION                    0x0000000A
#define _G1PUH_PUH10_MASK                        0x00000400
#define _G1PUH_PUH10_LENGTH                      0x00000001

#define _G1DPADRL_DPADR0_POSITION                0x00000000
#define _G1DPADRL_DPADR0_MASK                    0x00000001
#define _G1DPADRL_DPADR0_LENGTH                  0x00000001

#define _G1DPADRL_DPADR1_POSITION                0x00000001
#define _G1DPADRL_DPADR1_MASK                    0x00000002
#define _G1DPADRL_DPADR1_LENGTH                  0x00000001

#define _G1DPADRL_DPADR2_POSITION                0x00000002
#define _G1DPADRL_DPADR2_MASK                    0x00000004
#define _G1DPADRL_DPADR2_LENGTH                  0x00000001

#define _G1DPADRL_DPADR3_POSITION                0x00000003
#define _G1DPADRL_DPADR3_MASK                    0x00000008
#define _G1DPADRL_DPADR3_LENGTH                  0x00000001

#define _G1DPADRL_DPADR4_POSITION                0x00000004
#define _G1DPADRL_DPADR4_MASK                    0x00000010
#define _G1DPADRL_DPADR4_LENGTH                  0x00000001

#define _G1DPADRL_DPADR5_POSITION                0x00000005
#define _G1DPADRL_DPADR5_MASK                    0x00000020
#define _G1DPADRL_DPADR5_LENGTH                  0x00000001

#define _G1DPADRL_DPADR6_POSITION                0x00000006
#define _G1DPADRL_DPADR6_MASK                    0x00000040
#define _G1DPADRL_DPADR6_LENGTH                  0x00000001

#define _G1DPADRL_DPADR7_POSITION                0x00000007
#define _G1DPADRL_DPADR7_MASK                    0x00000080
#define _G1DPADRL_DPADR7_LENGTH                  0x00000001

#define _G1DPADRL_DPADR8_POSITION                0x00000008
#define _G1DPADRL_DPADR8_MASK                    0x00000100
#define _G1DPADRL_DPADR8_LENGTH                  0x00000001

#define _G1DPADRL_DPADR9_POSITION                0x00000009
#define _G1DPADRL_DPADR9_MASK                    0x00000200
#define _G1DPADRL_DPADR9_LENGTH                  0x00000001

#define _G1DPADRL_DPADR10_POSITION               0x0000000A
#define _G1DPADRL_DPADR10_MASK                   0x00000400
#define _G1DPADRL_DPADR10_LENGTH                 0x00000001

#define _G1DPADRL_DPADR11_POSITION               0x0000000B
#define _G1DPADRL_DPADR11_MASK                   0x00000800
#define _G1DPADRL_DPADR11_LENGTH                 0x00000001

#define _G1DPADRL_DPADR12_POSITION               0x0000000C
#define _G1DPADRL_DPADR12_MASK                   0x00001000
#define _G1DPADRL_DPADR12_LENGTH                 0x00000001

#define _G1DPADRL_DPADR13_POSITION               0x0000000D
#define _G1DPADRL_DPADR13_MASK                   0x00002000
#define _G1DPADRL_DPADR13_LENGTH                 0x00000001

#define _G1DPADRL_DPADR14_POSITION               0x0000000E
#define _G1DPADRL_DPADR14_MASK                   0x00004000
#define _G1DPADRL_DPADR14_LENGTH                 0x00000001

#define _G1DPADRL_DPADR15_POSITION               0x0000000F
#define _G1DPADRL_DPADR15_MASK                   0x00008000
#define _G1DPADRL_DPADR15_LENGTH                 0x00000001

#define _G1DPADRH_DPADR16_POSITION               0x00000000
#define _G1DPADRH_DPADR16_MASK                   0x00000001
#define _G1DPADRH_DPADR16_LENGTH                 0x00000001

#define _G1DPADRH_DPADR17_POSITION               0x00000001
#define _G1DPADRH_DPADR17_MASK                   0x00000002
#define _G1DPADRH_DPADR17_LENGTH                 0x00000001

#define _G1DPADRH_DPADR18_POSITION               0x00000002
#define _G1DPADRH_DPADR18_MASK                   0x00000004
#define _G1DPADRH_DPADR18_LENGTH                 0x00000001

#define _G1DPADRH_DPADR19_POSITION               0x00000003
#define _G1DPADRH_DPADR19_MASK                   0x00000008
#define _G1DPADRH_DPADR19_LENGTH                 0x00000001

#define _G1DPADRH_DPADR20_POSITION               0x00000004
#define _G1DPADRH_DPADR20_MASK                   0x00000010
#define _G1DPADRH_DPADR20_LENGTH                 0x00000001

#define _G1DPADRH_DPADR21_POSITION               0x00000005
#define _G1DPADRH_DPADR21_MASK                   0x00000020
#define _G1DPADRH_DPADR21_LENGTH                 0x00000001

#define _G1DPADRH_DPADR22_POSITION               0x00000006
#define _G1DPADRH_DPADR22_MASK                   0x00000040
#define _G1DPADRH_DPADR22_LENGTH                 0x00000001

#define _G1DPADRH_DPADR23_POSITION               0x00000007
#define _G1DPADRH_DPADR23_MASK                   0x00000080
#define _G1DPADRH_DPADR23_LENGTH                 0x00000001

#define _G1DPW_DPW_POSITION                      0x00000000
#define _G1DPW_DPW_MASK                          0x000007FF
#define _G1DPW_DPW_LENGTH                        0x0000000B

#define _G1DPW_DPW0_POSITION                     0x00000000
#define _G1DPW_DPW0_MASK                         0x00000001
#define _G1DPW_DPW0_LENGTH                       0x00000001

#define _G1DPW_DPW1_POSITION                     0x00000001
#define _G1DPW_DPW1_MASK                         0x00000002
#define _G1DPW_DPW1_LENGTH                       0x00000001

#define _G1DPW_DPW2_POSITION                     0x00000002
#define _G1DPW_DPW2_MASK                         0x00000004
#define _G1DPW_DPW2_LENGTH                       0x00000001

#define _G1DPW_DPW3_POSITION                     0x00000003
#define _G1DPW_DPW3_MASK                         0x00000008
#define _G1DPW_DPW3_LENGTH                       0x00000001

#define _G1DPW_DPW4_POSITION                     0x00000004
#define _G1DPW_DPW4_MASK                         0x00000010
#define _G1DPW_DPW4_LENGTH                       0x00000001

#define _G1DPW_DPW5_POSITION                     0x00000005
#define _G1DPW_DPW5_MASK                         0x00000020
#define _G1DPW_DPW5_LENGTH                       0x00000001

#define _G1DPW_DPW6_POSITION                     0x00000006
#define _G1DPW_DPW6_MASK                         0x00000040
#define _G1DPW_DPW6_LENGTH                       0x00000001

#define _G1DPW_DPW7_POSITION                     0x00000007
#define _G1DPW_DPW7_MASK                         0x00000080
#define _G1DPW_DPW7_LENGTH                       0x00000001

#define _G1DPW_DPW8_POSITION                     0x00000008
#define _G1DPW_DPW8_MASK                         0x00000100
#define _G1DPW_DPW8_LENGTH                       0x00000001

#define _G1DPW_DPW9_POSITION                     0x00000009
#define _G1DPW_DPW9_MASK                         0x00000200
#define _G1DPW_DPW9_LENGTH                       0x00000001

#define _G1DPW_DPW10_POSITION                    0x0000000A
#define _G1DPW_DPW10_MASK                        0x00000400
#define _G1DPW_DPW10_LENGTH                      0x00000001

#define _G1DPH_DPH_POSITION                      0x00000000
#define _G1DPH_DPH_MASK                          0x000007FF
#define _G1DPH_DPH_LENGTH                        0x0000000B

#define _G1DPH_DPH0_POSITION                     0x00000000
#define _G1DPH_DPH0_MASK                         0x00000001
#define _G1DPH_DPH0_LENGTH                       0x00000001

#define _G1DPH_DPH1_POSITION                     0x00000001
#define _G1DPH_DPH1_MASK                         0x00000002
#define _G1DPH_DPH1_LENGTH                       0x00000001

#define _G1DPH_DPH2_POSITION                     0x00000002
#define _G1DPH_DPH2_MASK                         0x00000004
#define _G1DPH_DPH2_LENGTH                       0x00000001

#define _G1DPH_DPH3_POSITION                     0x00000003
#define _G1DPH_DPH3_MASK                         0x00000008
#define _G1DPH_DPH3_LENGTH                       0x00000001

#define _G1DPH_DPH4_POSITION                     0x00000004
#define _G1DPH_DPH4_MASK                         0x00000010
#define _G1DPH_DPH4_LENGTH                       0x00000001

#define _G1DPH_DPH5_POSITION                     0x00000005
#define _G1DPH_DPH5_MASK                         0x00000020
#define _G1DPH_DPH5_LENGTH                       0x00000001

#define _G1DPH_DPH6_POSITION                     0x00000006
#define _G1DPH_DPH6_MASK                         0x00000040
#define _G1DPH_DPH6_LENGTH                       0x00000001

#define _G1DPH_DPH7_POSITION                     0x00000007
#define _G1DPH_DPH7_MASK                         0x00000080
#define _G1DPH_DPH7_LENGTH                       0x00000001

#define _G1DPH_DPH8_POSITION                     0x00000008
#define _G1DPH_DPH8_MASK                         0x00000100
#define _G1DPH_DPH8_LENGTH                       0x00000001

#define _G1DPH_DPH9_POSITION                     0x00000009
#define _G1DPH_DPH9_MASK                         0x00000200
#define _G1DPH_DPH9_LENGTH                       0x00000001

#define _G1DPH_DPH10_POSITION                    0x0000000A
#define _G1DPH_DPH10_MASK                        0x00000400
#define _G1DPH_DPH10_LENGTH                      0x00000001

#define _G1DPWT_DPWT_POSITION                    0x00000000
#define _G1DPWT_DPWT_MASK                        0x000007FF
#define _G1DPWT_DPWT_LENGTH                      0x0000000B

#define _G1DPWT_DPWT0_POSITION                   0x00000000
#define _G1DPWT_DPWT0_MASK                       0x00000001
#define _G1DPWT_DPWT0_LENGTH                     0x00000001

#define _G1DPWT_DPWT1_POSITION                   0x00000001
#define _G1DPWT_DPWT1_MASK                       0x00000002
#define _G1DPWT_DPWT1_LENGTH                     0x00000001

#define _G1DPWT_DPWT2_POSITION                   0x00000002
#define _G1DPWT_DPWT2_MASK                       0x00000004
#define _G1DPWT_DPWT2_LENGTH                     0x00000001

#define _G1DPWT_DPWT3_POSITION                   0x00000003
#define _G1DPWT_DPWT3_MASK                       0x00000008
#define _G1DPWT_DPWT3_LENGTH                     0x00000001

#define _G1DPWT_DPWT4_POSITION                   0x00000004
#define _G1DPWT_DPWT4_MASK                       0x00000010
#define _G1DPWT_DPWT4_LENGTH                     0x00000001

#define _G1DPWT_DPWT5_POSITION                   0x00000005
#define _G1DPWT_DPWT5_MASK                       0x00000020
#define _G1DPWT_DPWT5_LENGTH                     0x00000001

#define _G1DPWT_DPWT6_POSITION                   0x00000006
#define _G1DPWT_DPWT6_MASK                       0x00000040
#define _G1DPWT_DPWT6_LENGTH                     0x00000001

#define _G1DPWT_DPWT7_POSITION                   0x00000007
#define _G1DPWT_DPWT7_MASK                       0x00000080
#define _G1DPWT_DPWT7_LENGTH                     0x00000001

#define _G1DPWT_DPWT8_POSITION                   0x00000008
#define _G1DPWT_DPWT8_MASK                       0x00000100
#define _G1DPWT_DPWT8_LENGTH                     0x00000001

#define _G1DPWT_DPWT9_POSITION                   0x00000009
#define _G1DPWT_DPWT9_MASK                       0x00000200
#define _G1DPWT_DPWT9_LENGTH                     0x00000001

#define _G1DPWT_DPWT10_POSITION                  0x0000000A
#define _G1DPWT_DPWT10_MASK                      0x00000400
#define _G1DPWT_DPWT10_LENGTH                    0x00000001

#define _G1DPHT_DPHT_POSITION                    0x00000000
#define _G1DPHT_DPHT_MASK                        0x000007FF
#define _G1DPHT_DPHT_LENGTH                      0x0000000B

#define _G1DPHT_DPHT0_POSITION                   0x00000000
#define _G1DPHT_DPHT0_MASK                       0x00000001
#define _G1DPHT_DPHT0_LENGTH                     0x00000001

#define _G1DPHT_DPHT1_POSITION                   0x00000001
#define _G1DPHT_DPHT1_MASK                       0x00000002
#define _G1DPHT_DPHT1_LENGTH                     0x00000001

#define _G1DPHT_DPHT2_POSITION                   0x00000002
#define _G1DPHT_DPHT2_MASK                       0x00000004
#define _G1DPHT_DPHT2_LENGTH                     0x00000001

#define _G1DPHT_DPHT3_POSITION                   0x00000003
#define _G1DPHT_DPHT3_MASK                       0x00000008
#define _G1DPHT_DPHT3_LENGTH                     0x00000001

#define _G1DPHT_DPHT4_POSITION                   0x00000004
#define _G1DPHT_DPHT4_MASK                       0x00000010
#define _G1DPHT_DPHT4_LENGTH                     0x00000001

#define _G1DPHT_DPHT5_POSITION                   0x00000005
#define _G1DPHT_DPHT5_MASK                       0x00000020
#define _G1DPHT_DPHT5_LENGTH                     0x00000001

#define _G1DPHT_DPHT6_POSITION                   0x00000006
#define _G1DPHT_DPHT6_MASK                       0x00000040
#define _G1DPHT_DPHT6_LENGTH                     0x00000001

#define _G1DPHT_DPHT7_POSITION                   0x00000007
#define _G1DPHT_DPHT7_MASK                       0x00000080
#define _G1DPHT_DPHT7_LENGTH                     0x00000001

#define _G1DPHT_DPHT8_POSITION                   0x00000008
#define _G1DPHT_DPHT8_MASK                       0x00000100
#define _G1DPHT_DPHT8_LENGTH                     0x00000001

#define _G1DPHT_DPHT9_POSITION                   0x00000009
#define _G1DPHT_DPHT9_MASK                       0x00000200
#define _G1DPHT_DPHT9_LENGTH                     0x00000001

#define _G1DPHT_DPHT10_POSITION                  0x0000000A
#define _G1DPHT_DPHT10_MASK                      0x00000400
#define _G1DPHT_DPHT10_LENGTH                    0x00000001

#define _G1CON2_DPMODE_POSITION                  0x00000000
#define _G1CON2_DPMODE_MASK                      0x00000007
#define _G1CON2_DPMODE_LENGTH                    0x00000003

#define _G1CON2_DPBPP_POSITION                   0x00000005
#define _G1CON2_DPBPP_MASK                       0x000000E0
#define _G1CON2_DPBPP_LENGTH                     0x00000003

#define _G1CON2_DPTEST_POSITION                  0x00000008
#define _G1CON2_DPTEST_MASK                      0x00000300
#define _G1CON2_DPTEST_LENGTH                    0x00000002

#define _G1CON2_DPSTGER_POSITION                 0x0000000C
#define _G1CON2_DPSTGER_MASK                     0x00003000
#define _G1CON2_DPSTGER_LENGTH                   0x00000002

#define _G1CON2_DPGWDTH_POSITION                 0x0000000E
#define _G1CON2_DPGWDTH_MASK                     0x0000C000
#define _G1CON2_DPGWDTH_LENGTH                   0x00000002

#define _G1CON2_DPMODE0_POSITION                 0x00000000
#define _G1CON2_DPMODE0_MASK                     0x00000001
#define _G1CON2_DPMODE0_LENGTH                   0x00000001

#define _G1CON2_DPMODE1_POSITION                 0x00000001
#define _G1CON2_DPMODE1_MASK                     0x00000002
#define _G1CON2_DPMODE1_LENGTH                   0x00000001

#define _G1CON2_DPMODE2_POSITION                 0x00000002
#define _G1CON2_DPMODE2_MASK                     0x00000004
#define _G1CON2_DPMODE2_LENGTH                   0x00000001

#define _G1CON2_DPBPP0_POSITION                  0x00000005
#define _G1CON2_DPBPP0_MASK                      0x00000020
#define _G1CON2_DPBPP0_LENGTH                    0x00000001

#define _G1CON2_DPBPP1_POSITION                  0x00000006
#define _G1CON2_DPBPP1_MASK                      0x00000040
#define _G1CON2_DPBPP1_LENGTH                    0x00000001

#define _G1CON2_DPBPP2_POSITION                  0x00000007
#define _G1CON2_DPBPP2_MASK                      0x00000080
#define _G1CON2_DPBPP2_LENGTH                    0x00000001

#define _G1CON2_DPTEST0_POSITION                 0x00000008
#define _G1CON2_DPTEST0_MASK                     0x00000100
#define _G1CON2_DPTEST0_LENGTH                   0x00000001

#define _G1CON2_DPTEST1_POSITION                 0x00000009
#define _G1CON2_DPTEST1_MASK                     0x00000200
#define _G1CON2_DPTEST1_LENGTH                   0x00000001

#define _G1CON2_DPSTGER0_POSITION                0x0000000C
#define _G1CON2_DPSTGER0_MASK                    0x00001000
#define _G1CON2_DPSTGER0_LENGTH                  0x00000001

#define _G1CON2_DPSTGER1_POSITION                0x0000000D
#define _G1CON2_DPSTGER1_MASK                    0x00002000
#define _G1CON2_DPSTGER1_LENGTH                  0x00000001

#define _G1CON2_DPGWDTH0_POSITION                0x0000000E
#define _G1CON2_DPGWDTH0_MASK                    0x00004000
#define _G1CON2_DPGWDTH0_LENGTH                  0x00000001

#define _G1CON2_DPGWDTH1_POSITION                0x0000000F
#define _G1CON2_DPGWDTH1_MASK                    0x00008000
#define _G1CON2_DPGWDTH1_LENGTH                  0x00000001

#define _G1CON3_DPHSOE_POSITION                  0x00000000
#define _G1CON3_DPHSOE_MASK                      0x00000001
#define _G1CON3_DPHSOE_LENGTH                    0x00000001

#define _G1CON3_DPVSOE_POSITION                  0x00000001
#define _G1CON3_DPVSOE_MASK                      0x00000002
#define _G1CON3_DPVSOE_LENGTH                    0x00000001

#define _G1CON3_DPENOE_POSITION                  0x00000002
#define _G1CON3_DPENOE_MASK                      0x00000004
#define _G1CON3_DPENOE_LENGTH                    0x00000001

#define _G1CON3_DPPWROE_POSITION                 0x00000003
#define _G1CON3_DPPWROE_MASK                     0x00000008
#define _G1CON3_DPPWROE_LENGTH                   0x00000001

#define _G1CON3_DPHSPOL_POSITION                 0x00000004
#define _G1CON3_DPHSPOL_MASK                     0x00000010
#define _G1CON3_DPHSPOL_LENGTH                   0x00000001

#define _G1CON3_DPVSPOL_POSITION                 0x00000005
#define _G1CON3_DPVSPOL_MASK                     0x00000020
#define _G1CON3_DPVSPOL_LENGTH                   0x00000001

#define _G1CON3_DPENPOL_POSITION                 0x00000006
#define _G1CON3_DPENPOL_MASK                     0x00000040
#define _G1CON3_DPENPOL_LENGTH                   0x00000001

#define _G1CON3_DPCLKPOL_POSITION                0x00000007
#define _G1CON3_DPCLKPOL_MASK                    0x00000080
#define _G1CON3_DPCLKPOL_LENGTH                  0x00000001

#define _G1CON3_DPPOWER_POSITION                 0x00000008
#define _G1CON3_DPPOWER_MASK                     0x00000100
#define _G1CON3_DPPOWER_LENGTH                   0x00000001

#define _G1CON3_DPPINOE_POSITION                 0x00000009
#define _G1CON3_DPPINOE_MASK                     0x00000200
#define _G1CON3_DPPINOE_LENGTH                   0x00000001

#define _G1ACTDA_ACTPIX_POSITION                 0x00000000
#define _G1ACTDA_ACTPIX_MASK                     0x000000FF
#define _G1ACTDA_ACTPIX_LENGTH                   0x00000008

#define _G1ACTDA_ACTLINE_POSITION                0x00000008
#define _G1ACTDA_ACTLINE_MASK                    0x0000FF00
#define _G1ACTDA_ACTLINE_LENGTH                  0x00000008

#define _G1ACTDA_ACTPIX0_POSITION                0x00000000
#define _G1ACTDA_ACTPIX0_MASK                    0x00000001
#define _G1ACTDA_ACTPIX0_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX1_POSITION                0x00000001
#define _G1ACTDA_ACTPIX1_MASK                    0x00000002
#define _G1ACTDA_ACTPIX1_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX2_POSITION                0x00000002
#define _G1ACTDA_ACTPIX2_MASK                    0x00000004
#define _G1ACTDA_ACTPIX2_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX3_POSITION                0x00000003
#define _G1ACTDA_ACTPIX3_MASK                    0x00000008
#define _G1ACTDA_ACTPIX3_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX4_POSITION                0x00000004
#define _G1ACTDA_ACTPIX4_MASK                    0x00000010
#define _G1ACTDA_ACTPIX4_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX5_POSITION                0x00000005
#define _G1ACTDA_ACTPIX5_MASK                    0x00000020
#define _G1ACTDA_ACTPIX5_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX6_POSITION                0x00000006
#define _G1ACTDA_ACTPIX6_MASK                    0x00000040
#define _G1ACTDA_ACTPIX6_LENGTH                  0x00000001

#define _G1ACTDA_ACTPIX7_POSITION                0x00000007
#define _G1ACTDA_ACTPIX7_MASK                    0x00000080
#define _G1ACTDA_ACTPIX7_LENGTH                  0x00000001

#define _G1ACTDA_ACTLINE0_POSITION               0x00000008
#define _G1ACTDA_ACTLINE0_MASK                   0x00000100
#define _G1ACTDA_ACTLINE0_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE1_POSITION               0x00000009
#define _G1ACTDA_ACTLINE1_MASK                   0x00000200
#define _G1ACTDA_ACTLINE1_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE2_POSITION               0x0000000A
#define _G1ACTDA_ACTLINE2_MASK                   0x00000400
#define _G1ACTDA_ACTLINE2_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE3_POSITION               0x0000000B
#define _G1ACTDA_ACTLINE3_MASK                   0x00000800
#define _G1ACTDA_ACTLINE3_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE4_POSITION               0x0000000C
#define _G1ACTDA_ACTLINE4_MASK                   0x00001000
#define _G1ACTDA_ACTLINE4_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE5_POSITION               0x0000000D
#define _G1ACTDA_ACTLINE5_MASK                   0x00002000
#define _G1ACTDA_ACTLINE5_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE6_POSITION               0x0000000E
#define _G1ACTDA_ACTLINE6_MASK                   0x00004000
#define _G1ACTDA_ACTLINE6_LENGTH                 0x00000001

#define _G1ACTDA_ACTLINE7_POSITION               0x0000000F
#define _G1ACTDA_ACTLINE7_MASK                   0x00008000
#define _G1ACTDA_ACTLINE7_LENGTH                 0x00000001

#define _G1HSYNC_HSST_POSITION                   0x00000000
#define _G1HSYNC_HSST_MASK                       0x000000FF
#define _G1HSYNC_HSST_LENGTH                     0x00000008

#define _G1HSYNC_HSLEN_POSITION                  0x00000008
#define _G1HSYNC_HSLEN_MASK                      0x0000FF00
#define _G1HSYNC_HSLEN_LENGTH                    0x00000008

#define _G1HSYNC_HSST0_POSITION                  0x00000000
#define _G1HSYNC_HSST0_MASK                      0x00000001
#define _G1HSYNC_HSST0_LENGTH                    0x00000001

#define _G1HSYNC_HSST1_POSITION                  0x00000001
#define _G1HSYNC_HSST1_MASK                      0x00000002
#define _G1HSYNC_HSST1_LENGTH                    0x00000001

#define _G1HSYNC_HSST2_POSITION                  0x00000002
#define _G1HSYNC_HSST2_MASK                      0x00000004
#define _G1HSYNC_HSST2_LENGTH                    0x00000001

#define _G1HSYNC_HSST3_POSITION                  0x00000003
#define _G1HSYNC_HSST3_MASK                      0x00000008
#define _G1HSYNC_HSST3_LENGTH                    0x00000001

#define _G1HSYNC_HSST4_POSITION                  0x00000004
#define _G1HSYNC_HSST4_MASK                      0x00000010
#define _G1HSYNC_HSST4_LENGTH                    0x00000001

#define _G1HSYNC_HSST5_POSITION                  0x00000005
#define _G1HSYNC_HSST5_MASK                      0x00000020
#define _G1HSYNC_HSST5_LENGTH                    0x00000001

#define _G1HSYNC_HSST6_POSITION                  0x00000006
#define _G1HSYNC_HSST6_MASK                      0x00000040
#define _G1HSYNC_HSST6_LENGTH                    0x00000001

#define _G1HSYNC_HSST7_POSITION                  0x00000007
#define _G1HSYNC_HSST7_MASK                      0x00000080
#define _G1HSYNC_HSST7_LENGTH                    0x00000001

#define _G1HSYNC_HSLEN0_POSITION                 0x00000008
#define _G1HSYNC_HSLEN0_MASK                     0x00000100
#define _G1HSYNC_HSLEN0_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN1_POSITION                 0x00000009
#define _G1HSYNC_HSLEN1_MASK                     0x00000200
#define _G1HSYNC_HSLEN1_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN2_POSITION                 0x0000000A
#define _G1HSYNC_HSLEN2_MASK                     0x00000400
#define _G1HSYNC_HSLEN2_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN3_POSITION                 0x0000000B
#define _G1HSYNC_HSLEN3_MASK                     0x00000800
#define _G1HSYNC_HSLEN3_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN4_POSITION                 0x0000000C
#define _G1HSYNC_HSLEN4_MASK                     0x00001000
#define _G1HSYNC_HSLEN4_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN5_POSITION                 0x0000000D
#define _G1HSYNC_HSLEN5_MASK                     0x00002000
#define _G1HSYNC_HSLEN5_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN6_POSITION                 0x0000000E
#define _G1HSYNC_HSLEN6_MASK                     0x00004000
#define _G1HSYNC_HSLEN6_LENGTH                   0x00000001

#define _G1HSYNC_HSLEN7_POSITION                 0x0000000F
#define _G1HSYNC_HSLEN7_MASK                     0x00008000
#define _G1HSYNC_HSLEN7_LENGTH                   0x00000001

#define _G1VSYNC_VSST_POSITION                   0x00000000
#define _G1VSYNC_VSST_MASK                       0x000000FF
#define _G1VSYNC_VSST_LENGTH                     0x00000008

#define _G1VSYNC_VSLEN_POSITION                  0x00000008
#define _G1VSYNC_VSLEN_MASK                      0x0000FF00
#define _G1VSYNC_VSLEN_LENGTH                    0x00000008

#define _G1VSYNC_VSST0_POSITION                  0x00000000
#define _G1VSYNC_VSST0_MASK                      0x00000001
#define _G1VSYNC_VSST0_LENGTH                    0x00000001

#define _G1VSYNC_VSST1_POSITION                  0x00000001
#define _G1VSYNC_VSST1_MASK                      0x00000002
#define _G1VSYNC_VSST1_LENGTH                    0x00000001

#define _G1VSYNC_VSST2_POSITION                  0x00000002
#define _G1VSYNC_VSST2_MASK                      0x00000004
#define _G1VSYNC_VSST2_LENGTH                    0x00000001

#define _G1VSYNC_VSST3_POSITION                  0x00000003
#define _G1VSYNC_VSST3_MASK                      0x00000008
#define _G1VSYNC_VSST3_LENGTH                    0x00000001

#define _G1VSYNC_VSST4_POSITION                  0x00000004
#define _G1VSYNC_VSST4_MASK                      0x00000010
#define _G1VSYNC_VSST4_LENGTH                    0x00000001

#define _G1VSYNC_VSST5_POSITION                  0x00000005
#define _G1VSYNC_VSST5_MASK                      0x00000020
#define _G1VSYNC_VSST5_LENGTH                    0x00000001

#define _G1VSYNC_VSST6_POSITION                  0x00000006
#define _G1VSYNC_VSST6_MASK                      0x00000040
#define _G1VSYNC_VSST6_LENGTH                    0x00000001

#define _G1VSYNC_VSST7_POSITION                  0x00000007
#define _G1VSYNC_VSST7_MASK                      0x00000080
#define _G1VSYNC_VSST7_LENGTH                    0x00000001

#define _G1VSYNC_VSLEN0_POSITION                 0x00000008
#define _G1VSYNC_VSLEN0_MASK                     0x00000100
#define _G1VSYNC_VSLEN0_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN1_POSITION                 0x00000009
#define _G1VSYNC_VSLEN1_MASK                     0x00000200
#define _G1VSYNC_VSLEN1_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN2_POSITION                 0x0000000A
#define _G1VSYNC_VSLEN2_MASK                     0x00000400
#define _G1VSYNC_VSLEN2_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN3_POSITION                 0x0000000B
#define _G1VSYNC_VSLEN3_MASK                     0x00000800
#define _G1VSYNC_VSLEN3_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN4_POSITION                 0x0000000C
#define _G1VSYNC_VSLEN4_MASK                     0x00001000
#define _G1VSYNC_VSLEN4_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN5_POSITION                 0x0000000D
#define _G1VSYNC_VSLEN5_MASK                     0x00002000
#define _G1VSYNC_VSLEN5_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN6_POSITION                 0x0000000E
#define _G1VSYNC_VSLEN6_MASK                     0x00004000
#define _G1VSYNC_VSLEN6_LENGTH                   0x00000001

#define _G1VSYNC_VSLEN7_POSITION                 0x0000000F
#define _G1VSYNC_VSLEN7_MASK                     0x00008000
#define _G1VSYNC_VSLEN7_LENGTH                   0x00000001

#define _G1DBLCON_HENST_POSITION                 0x00000000
#define _G1DBLCON_HENST_MASK                     0x000000FF
#define _G1DBLCON_HENST_LENGTH                   0x00000008

#define _G1DBLCON_VENST_POSITION                 0x00000008
#define _G1DBLCON_VENST_MASK                     0x0000FF00
#define _G1DBLCON_VENST_LENGTH                   0x00000008

#define _G1DBLCON_HENST0_POSITION                0x00000000
#define _G1DBLCON_HENST0_MASK                    0x00000001
#define _G1DBLCON_HENST0_LENGTH                  0x00000001

#define _G1DBLCON_HENST1_POSITION                0x00000001
#define _G1DBLCON_HENST1_MASK                    0x00000002
#define _G1DBLCON_HENST1_LENGTH                  0x00000001

#define _G1DBLCON_HENST2_POSITION                0x00000002
#define _G1DBLCON_HENST2_MASK                    0x00000004
#define _G1DBLCON_HENST2_LENGTH                  0x00000001

#define _G1DBLCON_HENST3_POSITION                0x00000003
#define _G1DBLCON_HENST3_MASK                    0x00000008
#define _G1DBLCON_HENST3_LENGTH                  0x00000001

#define _G1DBLCON_HENST4_POSITION                0x00000004
#define _G1DBLCON_HENST4_MASK                    0x00000010
#define _G1DBLCON_HENST4_LENGTH                  0x00000001

#define _G1DBLCON_HENST5_POSITION                0x00000005
#define _G1DBLCON_HENST5_MASK                    0x00000020
#define _G1DBLCON_HENST5_LENGTH                  0x00000001

#define _G1DBLCON_HENST6_POSITION                0x00000006
#define _G1DBLCON_HENST6_MASK                    0x00000040
#define _G1DBLCON_HENST6_LENGTH                  0x00000001

#define _G1DBLCON_HENST7_POSITION                0x00000007
#define _G1DBLCON_HENST7_MASK                    0x00000080
#define _G1DBLCON_HENST7_LENGTH                  0x00000001

#define _G1DBLCON_VENST0_POSITION                0x00000008
#define _G1DBLCON_VENST0_MASK                    0x00000100
#define _G1DBLCON_VENST0_LENGTH                  0x00000001

#define _G1DBLCON_VENST1_POSITION                0x00000009
#define _G1DBLCON_VENST1_MASK                    0x00000200
#define _G1DBLCON_VENST1_LENGTH                  0x00000001

#define _G1DBLCON_VENST2_POSITION                0x0000000A
#define _G1DBLCON_VENST2_MASK                    0x00000400
#define _G1DBLCON_VENST2_LENGTH                  0x00000001

#define _G1DBLCON_VENST3_POSITION                0x0000000B
#define _G1DBLCON_VENST3_MASK                    0x00000800
#define _G1DBLCON_VENST3_LENGTH                  0x00000001

#define _G1DBLCON_VENST4_POSITION                0x0000000C
#define _G1DBLCON_VENST4_MASK                    0x00001000
#define _G1DBLCON_VENST4_LENGTH                  0x00000001

#define _G1DBLCON_VENST5_POSITION                0x0000000D
#define _G1DBLCON_VENST5_MASK                    0x00002000
#define _G1DBLCON_VENST5_LENGTH                  0x00000001

#define _G1DBLCON_VENST6_POSITION                0x0000000E
#define _G1DBLCON_VENST6_MASK                    0x00004000
#define _G1DBLCON_VENST6_LENGTH                  0x00000001

#define _G1DBLCON_VENST7_POSITION                0x0000000F
#define _G1DBLCON_VENST7_MASK                    0x00008000
#define _G1DBLCON_VENST7_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR_POSITION                 0x00000000
#define _G1CLUT_CLUTADR_MASK                     0x000000FF
#define _G1CLUT_CLUTADR_LENGTH                   0x00000008

#define _G1CLUT_CLUTRWEN_POSITION                0x00000008
#define _G1CLUT_CLUTRWEN_MASK                    0x00000100
#define _G1CLUT_CLUTRWEN_LENGTH                  0x00000001

#define _G1CLUT_CLUTTRD_POSITION                 0x00000009
#define _G1CLUT_CLUTTRD_MASK                     0x00000200
#define _G1CLUT_CLUTTRD_LENGTH                   0x00000001

#define _G1CLUT_CLUTBUSY_POSITION                0x0000000E
#define _G1CLUT_CLUTBUSY_MASK                    0x00004000
#define _G1CLUT_CLUTBUSY_LENGTH                  0x00000001

#define _G1CLUT_CLUTEN_POSITION                  0x0000000F
#define _G1CLUT_CLUTEN_MASK                      0x00008000
#define _G1CLUT_CLUTEN_LENGTH                    0x00000001

#define _G1CLUT_CLUTADR0_POSITION                0x00000000
#define _G1CLUT_CLUTADR0_MASK                    0x00000001
#define _G1CLUT_CLUTADR0_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR1_POSITION                0x00000001
#define _G1CLUT_CLUTADR1_MASK                    0x00000002
#define _G1CLUT_CLUTADR1_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR2_POSITION                0x00000002
#define _G1CLUT_CLUTADR2_MASK                    0x00000004
#define _G1CLUT_CLUTADR2_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR3_POSITION                0x00000003
#define _G1CLUT_CLUTADR3_MASK                    0x00000008
#define _G1CLUT_CLUTADR3_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR4_POSITION                0x00000004
#define _G1CLUT_CLUTADR4_MASK                    0x00000010
#define _G1CLUT_CLUTADR4_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR5_POSITION                0x00000005
#define _G1CLUT_CLUTADR5_MASK                    0x00000020
#define _G1CLUT_CLUTADR5_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR6_POSITION                0x00000006
#define _G1CLUT_CLUTADR6_MASK                    0x00000040
#define _G1CLUT_CLUTADR6_LENGTH                  0x00000001

#define _G1CLUT_CLUTADR7_POSITION                0x00000007
#define _G1CLUT_CLUTADR7_MASK                    0x00000080
#define _G1CLUT_CLUTADR7_LENGTH                  0x00000001

#define _G1CLUTWR_CLUTWR_POSITION                0x00000000
#define _G1CLUTWR_CLUTWR_MASK                    0x0000FFFF
#define _G1CLUTWR_CLUTWR_LENGTH                  0x00000010

#define _G1CLUTWR_CLUTWR0_POSITION               0x00000000
#define _G1CLUTWR_CLUTWR0_MASK                   0x00000001
#define _G1CLUTWR_CLUTWR0_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR1_POSITION               0x00000001
#define _G1CLUTWR_CLUTWR1_MASK                   0x00000002
#define _G1CLUTWR_CLUTWR1_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR2_POSITION               0x00000002
#define _G1CLUTWR_CLUTWR2_MASK                   0x00000004
#define _G1CLUTWR_CLUTWR2_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR3_POSITION               0x00000003
#define _G1CLUTWR_CLUTWR3_MASK                   0x00000008
#define _G1CLUTWR_CLUTWR3_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR4_POSITION               0x00000004
#define _G1CLUTWR_CLUTWR4_MASK                   0x00000010
#define _G1CLUTWR_CLUTWR4_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR5_POSITION               0x00000005
#define _G1CLUTWR_CLUTWR5_MASK                   0x00000020
#define _G1CLUTWR_CLUTWR5_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR6_POSITION               0x00000006
#define _G1CLUTWR_CLUTWR6_MASK                   0x00000040
#define _G1CLUTWR_CLUTWR6_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR7_POSITION               0x00000007
#define _G1CLUTWR_CLUTWR7_MASK                   0x00000080
#define _G1CLUTWR_CLUTWR7_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR8_POSITION               0x00000008
#define _G1CLUTWR_CLUTWR8_MASK                   0x00000100
#define _G1CLUTWR_CLUTWR8_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR9_POSITION               0x00000009
#define _G1CLUTWR_CLUTWR9_MASK                   0x00000200
#define _G1CLUTWR_CLUTWR9_LENGTH                 0x00000001

#define _G1CLUTWR_CLUTWR10_POSITION              0x0000000A
#define _G1CLUTWR_CLUTWR10_MASK                  0x00000400
#define _G1CLUTWR_CLUTWR10_LENGTH                0x00000001

#define _G1CLUTWR_CLUTWR11_POSITION              0x0000000B
#define _G1CLUTWR_CLUTWR11_MASK                  0x00000800
#define _G1CLUTWR_CLUTWR11_LENGTH                0x00000001

#define _G1CLUTWR_CLUTWR12_POSITION              0x0000000C
#define _G1CLUTWR_CLUTWR12_MASK                  0x00001000
#define _G1CLUTWR_CLUTWR12_LENGTH                0x00000001

#define _G1CLUTWR_CLUTWR13_POSITION              0x0000000D
#define _G1CLUTWR_CLUTWR13_MASK                  0x00002000
#define _G1CLUTWR_CLUTWR13_LENGTH                0x00000001

#define _G1CLUTWR_CLUTWR14_POSITION              0x0000000E
#define _G1CLUTWR_CLUTWR14_MASK                  0x00004000
#define _G1CLUTWR_CLUTWR14_LENGTH                0x00000001

#define _G1CLUTWR_CLUTWR15_POSITION              0x0000000F
#define _G1CLUTWR_CLUTWR15_MASK                  0x00008000
#define _G1CLUTWR_CLUTWR15_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD_POSITION                0x00000000
#define _G1CLUTRD_CLUTRD_MASK                    0x0000FFFF
#define _G1CLUTRD_CLUTRD_LENGTH                  0x00000010

#define _G1CLUTRD_CLUTRD0_POSITION               0x00000000
#define _G1CLUTRD_CLUTRD0_MASK                   0x00000001
#define _G1CLUTRD_CLUTRD0_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD1_POSITION               0x00000001
#define _G1CLUTRD_CLUTRD1_MASK                   0x00000002
#define _G1CLUTRD_CLUTRD1_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD2_POSITION               0x00000002
#define _G1CLUTRD_CLUTRD2_MASK                   0x00000004
#define _G1CLUTRD_CLUTRD2_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD3_POSITION               0x00000003
#define _G1CLUTRD_CLUTRD3_MASK                   0x00000008
#define _G1CLUTRD_CLUTRD3_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD4_POSITION               0x00000004
#define _G1CLUTRD_CLUTRD4_MASK                   0x00000010
#define _G1CLUTRD_CLUTRD4_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD5_POSITION               0x00000005
#define _G1CLUTRD_CLUTRD5_MASK                   0x00000020
#define _G1CLUTRD_CLUTRD5_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD6_POSITION               0x00000006
#define _G1CLUTRD_CLUTRD6_MASK                   0x00000040
#define _G1CLUTRD_CLUTRD6_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD7_POSITION               0x00000007
#define _G1CLUTRD_CLUTRD7_MASK                   0x00000080
#define _G1CLUTRD_CLUTRD7_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD8_POSITION               0x00000008
#define _G1CLUTRD_CLUTRD8_MASK                   0x00000100
#define _G1CLUTRD_CLUTRD8_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD9_POSITION               0x00000009
#define _G1CLUTRD_CLUTRD9_MASK                   0x00000200
#define _G1CLUTRD_CLUTRD9_LENGTH                 0x00000001

#define _G1CLUTRD_CLUTRD10_POSITION              0x0000000A
#define _G1CLUTRD_CLUTRD10_MASK                  0x00000400
#define _G1CLUTRD_CLUTRD10_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD11_POSITION              0x0000000B
#define _G1CLUTRD_CLUTRD11_MASK                  0x00000800
#define _G1CLUTRD_CLUTRD11_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD12_POSITION              0x0000000C
#define _G1CLUTRD_CLUTRD12_MASK                  0x00001000
#define _G1CLUTRD_CLUTRD12_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD13_POSITION              0x0000000D
#define _G1CLUTRD_CLUTRD13_MASK                  0x00002000
#define _G1CLUTRD_CLUTRD13_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD14_POSITION              0x0000000E
#define _G1CLUTRD_CLUTRD14_MASK                  0x00004000
#define _G1CLUTRD_CLUTRD14_LENGTH                0x00000001

#define _G1CLUTRD_CLUTRD15_POSITION              0x0000000F
#define _G1CLUTRD_CLUTRD15_MASK                  0x00008000
#define _G1CLUTRD_CLUTRD15_LENGTH                0x00000001

#define _G1MRGN_HBAMGN_POSITION                  0x00000000
#define _G1MRGN_HBAMGN_MASK                      0x000000FF
#define _G1MRGN_HBAMGN_LENGTH                    0x00000008

#define _G1MRGN_VBAMGN_POSITION                  0x00000008
#define _G1MRGN_VBAMGN_MASK                      0x0000FF00
#define _G1MRGN_VBAMGN_LENGTH                    0x00000008

#define _G1MRGN_HBAMGN0_POSITION                 0x00000000
#define _G1MRGN_HBAMGN0_MASK                     0x00000001
#define _G1MRGN_HBAMGN0_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN1_POSITION                 0x00000001
#define _G1MRGN_HBAMGN1_MASK                     0x00000002
#define _G1MRGN_HBAMGN1_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN2_POSITION                 0x00000002
#define _G1MRGN_HBAMGN2_MASK                     0x00000004
#define _G1MRGN_HBAMGN2_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN3_POSITION                 0x00000003
#define _G1MRGN_HBAMGN3_MASK                     0x00000008
#define _G1MRGN_HBAMGN3_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN4_POSITION                 0x00000004
#define _G1MRGN_HBAMGN4_MASK                     0x00000010
#define _G1MRGN_HBAMGN4_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN5_POSITION                 0x00000005
#define _G1MRGN_HBAMGN5_MASK                     0x00000020
#define _G1MRGN_HBAMGN5_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN6_POSITION                 0x00000006
#define _G1MRGN_HBAMGN6_MASK                     0x00000040
#define _G1MRGN_HBAMGN6_LENGTH                   0x00000001

#define _G1MRGN_HBAMGN7_POSITION                 0x00000007
#define _G1MRGN_HBAMGN7_MASK                     0x00000080
#define _G1MRGN_HBAMGN7_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN0_POSITION                 0x00000008
#define _G1MRGN_VBAMGN0_MASK                     0x00000100
#define _G1MRGN_VBAMGN0_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN1_POSITION                 0x00000009
#define _G1MRGN_VBAMGN1_MASK                     0x00000200
#define _G1MRGN_VBAMGN1_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN2_POSITION                 0x0000000A
#define _G1MRGN_VBAMGN2_MASK                     0x00000400
#define _G1MRGN_VBAMGN2_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN3_POSITION                 0x0000000B
#define _G1MRGN_VBAMGN3_MASK                     0x00000800
#define _G1MRGN_VBAMGN3_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN4_POSITION                 0x0000000C
#define _G1MRGN_VBAMGN4_MASK                     0x00001000
#define _G1MRGN_VBAMGN4_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN5_POSITION                 0x0000000D
#define _G1MRGN_VBAMGN5_MASK                     0x00002000
#define _G1MRGN_VBAMGN5_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN6_POSITION                 0x0000000E
#define _G1MRGN_VBAMGN6_MASK                     0x00004000
#define _G1MRGN_VBAMGN6_LENGTH                   0x00000001

#define _G1MRGN_VBAMGN7_POSITION                 0x0000000F
#define _G1MRGN_VBAMGN7_MASK                     0x00008000
#define _G1MRGN_VBAMGN7_LENGTH                   0x00000001

#define _G1CHRX_CURPOSX_POSITION                 0x00000000
#define _G1CHRX_CURPOSX_MASK                     0x000007FF
#define _G1CHRX_CURPOSX_LENGTH                   0x0000000B

#define _G1CHRX_CURPOSX0_POSITION                0x00000000
#define _G1CHRX_CURPOSX0_MASK                    0x00000001
#define _G1CHRX_CURPOSX0_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX1_POSITION                0x00000001
#define _G1CHRX_CURPOSX1_MASK                    0x00000002
#define _G1CHRX_CURPOSX1_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX2_POSITION                0x00000002
#define _G1CHRX_CURPOSX2_MASK                    0x00000004
#define _G1CHRX_CURPOSX2_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX3_POSITION                0x00000003
#define _G1CHRX_CURPOSX3_MASK                    0x00000008
#define _G1CHRX_CURPOSX3_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX4_POSITION                0x00000004
#define _G1CHRX_CURPOSX4_MASK                    0x00000010
#define _G1CHRX_CURPOSX4_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX5_POSITION                0x00000005
#define _G1CHRX_CURPOSX5_MASK                    0x00000020
#define _G1CHRX_CURPOSX5_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX6_POSITION                0x00000006
#define _G1CHRX_CURPOSX6_MASK                    0x00000040
#define _G1CHRX_CURPOSX6_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX7_POSITION                0x00000007
#define _G1CHRX_CURPOSX7_MASK                    0x00000080
#define _G1CHRX_CURPOSX7_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX8_POSITION                0x00000008
#define _G1CHRX_CURPOSX8_MASK                    0x00000100
#define _G1CHRX_CURPOSX8_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX9_POSITION                0x00000009
#define _G1CHRX_CURPOSX9_MASK                    0x00000200
#define _G1CHRX_CURPOSX9_LENGTH                  0x00000001

#define _G1CHRX_CURPOSX10_POSITION               0x0000000A
#define _G1CHRX_CURPOSX10_MASK                   0x00000400
#define _G1CHRX_CURPOSX10_LENGTH                 0x00000001

#define _G1CHRY_CURPOSY_POSITION                 0x00000000
#define _G1CHRY_CURPOSY_MASK                     0x000007FF
#define _G1CHRY_CURPOSY_LENGTH                   0x0000000B

#define _G1CHRY_CURPOSY0_POSITION                0x00000000
#define _G1CHRY_CURPOSY0_MASK                    0x00000001
#define _G1CHRY_CURPOSY0_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY1_POSITION                0x00000001
#define _G1CHRY_CURPOSY1_MASK                    0x00000002
#define _G1CHRY_CURPOSY1_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY2_POSITION                0x00000002
#define _G1CHRY_CURPOSY2_MASK                    0x00000004
#define _G1CHRY_CURPOSY2_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY3_POSITION                0x00000003
#define _G1CHRY_CURPOSY3_MASK                    0x00000008
#define _G1CHRY_CURPOSY3_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY4_POSITION                0x00000004
#define _G1CHRY_CURPOSY4_MASK                    0x00000010
#define _G1CHRY_CURPOSY4_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY5_POSITION                0x00000005
#define _G1CHRY_CURPOSY5_MASK                    0x00000020
#define _G1CHRY_CURPOSY5_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY6_POSITION                0x00000006
#define _G1CHRY_CURPOSY6_MASK                    0x00000040
#define _G1CHRY_CURPOSY6_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY7_POSITION                0x00000007
#define _G1CHRY_CURPOSY7_MASK                    0x00000080
#define _G1CHRY_CURPOSY7_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY8_POSITION                0x00000008
#define _G1CHRY_CURPOSY8_MASK                    0x00000100
#define _G1CHRY_CURPOSY8_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY9_POSITION                0x00000009
#define _G1CHRY_CURPOSY9_MASK                    0x00000200
#define _G1CHRY_CURPOSY9_LENGTH                  0x00000001

#define _G1CHRY_CURPOSY10_POSITION               0x0000000A
#define _G1CHRY_CURPOSY10_MASK                   0x00000400
#define _G1CHRY_CURPOSY10_LENGTH                 0x00000001

#define _G1IPU_BFINAL_POSITION                   0x00000000
#define _G1IPU_BFINAL_MASK                       0x00000001
#define _G1IPU_BFINAL_LENGTH                     0x00000001

#define _G1IPU_IPUDONE_POSITION                  0x00000001
#define _G1IPU_IPUDONE_MASK                      0x00000002
#define _G1IPU_IPUDONE_LENGTH                    0x00000001

#define _G1IPU_WRAPERR_POSITION                  0x00000002
#define _G1IPU_WRAPERR_MASK                      0x00000004
#define _G1IPU_WRAPERR_LENGTH                    0x00000001

#define _G1IPU_LENERR_POSITION                   0x00000003
#define _G1IPU_LENERR_MASK                       0x00000008
#define _G1IPU_LENERR_LENGTH                     0x00000001

#define _G1IPU_BLCKERR_POSITION                  0x00000004
#define _G1IPU_BLCKERR_MASK                      0x00000010
#define _G1IPU_BLCKERR_LENGTH                    0x00000001

#define _G1IPU_HUFFERR_POSITION                  0x00000005
#define _G1IPU_HUFFERR_MASK                      0x00000020
#define _G1IPU_HUFFERR_LENGTH                    0x00000001

#define _G1DBEN_GDBEN_POSITION                   0x00000000
#define _G1DBEN_GDBEN_MASK                       0x0000FFFF
#define _G1DBEN_GDBEN_LENGTH                     0x00000010

#define _G1DBEN_GDBEN0_POSITION                  0x00000000
#define _G1DBEN_GDBEN0_MASK                      0x00000001
#define _G1DBEN_GDBEN0_LENGTH                    0x00000001

#define _G1DBEN_GDBEN1_POSITION                  0x00000001
#define _G1DBEN_GDBEN1_MASK                      0x00000002
#define _G1DBEN_GDBEN1_LENGTH                    0x00000001

#define _G1DBEN_GDBEN2_POSITION                  0x00000002
#define _G1DBEN_GDBEN2_MASK                      0x00000004
#define _G1DBEN_GDBEN2_LENGTH                    0x00000001

#define _G1DBEN_GDBEN3_POSITION                  0x00000003
#define _G1DBEN_GDBEN3_MASK                      0x00000008
#define _G1DBEN_GDBEN3_LENGTH                    0x00000001

#define _G1DBEN_GDBEN4_POSITION                  0x00000004
#define _G1DBEN_GDBEN4_MASK                      0x00000010
#define _G1DBEN_GDBEN4_LENGTH                    0x00000001

#define _G1DBEN_GDBEN5_POSITION                  0x00000005
#define _G1DBEN_GDBEN5_MASK                      0x00000020
#define _G1DBEN_GDBEN5_LENGTH                    0x00000001

#define _G1DBEN_GDBEN6_POSITION                  0x00000006
#define _G1DBEN_GDBEN6_MASK                      0x00000040
#define _G1DBEN_GDBEN6_LENGTH                    0x00000001

#define _G1DBEN_GDBEN7_POSITION                  0x00000007
#define _G1DBEN_GDBEN7_MASK                      0x00000080
#define _G1DBEN_GDBEN7_LENGTH                    0x00000001

#define _G1DBEN_GDBEN8_POSITION                  0x00000008
#define _G1DBEN_GDBEN8_MASK                      0x00000100
#define _G1DBEN_GDBEN8_LENGTH                    0x00000001

#define _G1DBEN_GDBEN9_POSITION                  0x00000009
#define _G1DBEN_GDBEN9_MASK                      0x00000200
#define _G1DBEN_GDBEN9_LENGTH                    0x00000001

#define _G1DBEN_GDBEN10_POSITION                 0x0000000A
#define _G1DBEN_GDBEN10_MASK                     0x00000400
#define _G1DBEN_GDBEN10_LENGTH                   0x00000001

#define _G1DBEN_GDBEN11_POSITION                 0x0000000B
#define _G1DBEN_GDBEN11_MASK                     0x00000800
#define _G1DBEN_GDBEN11_LENGTH                   0x00000001

#define _G1DBEN_GDBEN12_POSITION                 0x0000000C
#define _G1DBEN_GDBEN12_MASK                     0x00001000
#define _G1DBEN_GDBEN12_LENGTH                   0x00000001

#define _G1DBEN_GDBEN13_POSITION                 0x0000000D
#define _G1DBEN_GDBEN13_MASK                     0x00002000
#define _G1DBEN_GDBEN13_LENGTH                   0x00000001

#define _G1DBEN_GDBEN14_POSITION                 0x0000000E
#define _G1DBEN_GDBEN14_MASK                     0x00004000
#define _G1DBEN_GDBEN14_LENGTH                   0x00000001

#define _G1DBEN_GDBEN15_POSITION                 0x0000000F
#define _G1DBEN_GDBEN15_MASK                     0x00008000
#define _G1DBEN_GDBEN15_LENGTH                   0x00000001

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

#define _RCON_PMSLP_POSITION                     0x00000008
#define _RCON_PMSLP_MASK                         0x00000100
#define _RCON_PMSLP_LENGTH                       0x00000001

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

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

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

#define _CLKDIV_G1CLKSEL_POSITION                0x00000004
#define _CLKDIV_G1CLKSEL_MASK                    0x00000010
#define _CLKDIV_G1CLKSEL_LENGTH                  0x00000001

#define _CLKDIV_PLLEN_POSITION                   0x00000005
#define _CLKDIV_PLLEN_MASK                       0x00000020
#define _CLKDIV_PLLEN_LENGTH                     0x00000001

#define _CLKDIV_CPDIV_POSITION                   0x00000006
#define _CLKDIV_CPDIV_MASK                       0x000000C0
#define _CLKDIV_CPDIV_LENGTH                     0x00000002

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

#define _CLKDIV_CPDIV0_POSITION                  0x00000006
#define _CLKDIV_CPDIV0_MASK                      0x00000040
#define _CLKDIV_CPDIV0_LENGTH                    0x00000001

#define _CLKDIV_CPDIV1_POSITION                  0x00000007
#define _CLKDIV_CPDIV1_MASK                      0x00000080
#define _CLKDIV_CPDIV1_LENGTH                    0x00000001

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

#define _CLKDIV2_GCLKDIV_POSITION                0x00000009
#define _CLKDIV2_GCLKDIV_MASK                    0x0000FE00
#define _CLKDIV2_GCLKDIV_LENGTH                  0x00000007

#define _CLKDIV2_GCLKDIV0_POSITION               0x00000009
#define _CLKDIV2_GCLKDIV0_MASK                   0x00000200
#define _CLKDIV2_GCLKDIV0_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV1_POSITION               0x0000000A
#define _CLKDIV2_GCLKDIV1_MASK                   0x00000400
#define _CLKDIV2_GCLKDIV1_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV2_POSITION               0x0000000B
#define _CLKDIV2_GCLKDIV2_MASK                   0x00000800
#define _CLKDIV2_GCLKDIV2_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV3_POSITION               0x0000000C
#define _CLKDIV2_GCLKDIV3_MASK                   0x00001000
#define _CLKDIV2_GCLKDIV3_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV4_POSITION               0x0000000D
#define _CLKDIV2_GCLKDIV4_MASK                   0x00002000
#define _CLKDIV2_GCLKDIV4_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV5_POSITION               0x0000000E
#define _CLKDIV2_GCLKDIV5_MASK                   0x00004000
#define _CLKDIV2_GCLKDIV5_LENGTH                 0x00000001

#define _CLKDIV2_GCLKDIV6_POSITION               0x0000000F
#define _CLKDIV2_GCLKDIV6_MASK                   0x00008000
#define _CLKDIV2_GCLKDIV6_LENGTH                 0x00000001

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

#define _PMD2_OC8MD_POSITION                     0x00000007
#define _PMD2_OC8MD_MASK                         0x00000080
#define _PMD2_OC8MD_LENGTH                       0x00000001

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

#define _PMD2_IC8MD_POSITION                     0x0000000F
#define _PMD2_IC8MD_MASK                         0x00008000
#define _PMD2_IC8MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_I2C3MD_POSITION                    0x00000002
#define _PMD3_I2C3MD_MASK                        0x00000004
#define _PMD3_I2C3MD_LENGTH                      0x00000001

#define _PMD3_U3MD_POSITION                      0x00000003
#define _PMD3_U3MD_MASK                          0x00000008
#define _PMD3_U3MD_LENGTH                        0x00000001

#define _PMD3_CRCMD_POSITION                     0x00000007
#define _PMD3_CRCMD_MASK                         0x00000080
#define _PMD3_CRCMD_LENGTH                       0x00000001

#define _PMD3_RTCCMD_POSITION                    0x00000009
#define _PMD3_RTCCMD_MASK                        0x00000200
#define _PMD3_RTCCMD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD3_CRCPMD_POSITION                    0x00000007
#define _PMD3_CRCPMD_MASK                        0x00000080
#define _PMD3_CRCPMD_LENGTH                      0x00000001

#define _PMD4_USB1MD_POSITION                    0x00000000
#define _PMD4_USB1MD_MASK                        0x00000001
#define _PMD4_USB1MD_LENGTH                      0x00000001

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

#define _PMD5_OC9MD_POSITION                     0x00000000
#define _PMD5_OC9MD_MASK                         0x00000001
#define _PMD5_OC9MD_LENGTH                       0x00000001

#define _PMD5_IC9MD_POSITION                     0x00000008
#define _PMD5_IC9MD_MASK                         0x00000100
#define _PMD5_IC9MD_LENGTH                       0x00000001

#define _PMD6_SPI3MD_POSITION                    0x00000000
#define _PMD6_SPI3MD_MASK                        0x00000001
#define _PMD6_SPI3MD_LENGTH                      0x00000001

#define _PMD6_GFX1MD_POSITION                    0x00000006
#define _PMD6_GFX1MD_MASK                        0x00000040
#define _PMD6_GFX1MD_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register CONFIG4 (0x2abf8)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG4;
#define _CONFIG4(x) __attribute__((address(0x2abf8),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG4.sec"),space(prog))) __prog__ uint16_t _CONFIG4 = (x);

/*
** Only one invocation of CONFIG4 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG4.
** Multiple options may be combined, as shown:
**
** _CONFIG4( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register CONFIG3 (0x2abfa)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG3;
#define _CONFIG3(x) __attribute__((address(0x2abfa),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG3.sec"),space(prog))) __prog__ uint16_t _CONFIG3 = (x);

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
**     WPFP_WPFP128         Page 128 (0x20000)
**     WPFP_WPFP129         Page 129 (0x20400)
**     WPFP_WPFP130         Page 130 (0x20800)
**     WPFP_WPFP131         Page 131 (0x20C00)
**     WPFP_WPFP132         Page 132 (0x21000)
**     WPFP_WPFP133         Page 133 (0x21400)
**     WPFP_WPFP134         Page 134 (0x21800)
**     WPFP_WPFP135         Page 135 (0x21C00)
**     WPFP_WPFP136         Page 136 (0x22000)
**     WPFP_WPFP137         Page 137 (0x22400)
**     WPFP_WPFP138         Page 138 (0x22800)
**     WPFP_WPFP139         Page 139 (0x22C00)
**     WPFP_WPFP140         Page 140 (0x23000)
**     WPFP_WPFP141         Page 141 (0x23400)
**     WPFP_WPFP142         Page 142 (0x23800)
**     WPFP_WPFP143         Page 143 (0x23C00)
**     WPFP_WPFP144         Page 144 (0x24000)
**     WPFP_WPFP145         Page 145 (0x24400)
**     WPFP_WPFP146         Page 146 (0x24800)
**     WPFP_WPFP147         Page 147 (0x24C00)
**     WPFP_WPFP148         Page 148 (0x25000)
**     WPFP_WPFP149         Page 149 (0x25400)
**     WPFP_WPFP150         Page 150 (0x25800)
**     WPFP_WPFP151         Page 151 (0x25C00)
**     WPFP_WPFP152         Page 152 (0x26000)
**     WPFP_WPFP153         Page 153 (0x26400)
**     WPFP_WPFP154         Page 154 (0x26800)
**     WPFP_WPFP155         Page 155 (0x26C00)
**     WPFP_WPFP156         Page 156 (0x27000)
**     WPFP_WPFP157         Page 157 (0x27400)
**     WPFP_WPFP158         Page 158 (0x27800)
**     WPFP_WPFP159         Page 159 (0x27C00)
**     WPFP_WPFP160         Page 160 (0x28000)
**     WPFP_WPFP161         Page 161 (0x28400)
**     WPFP_WPFP162         Page 162 (0x28800)
**     WPFP_WPFP163         Page 163 (0x28C00)
**     WPFP_WPFP164         Page 164 (0x29000)
**     WPFP_WPFP165         Page 165 (0x29400)
**     WPFP_WPFP166         Page 166 (0x29800)
**     WPFP_WPFP167         Page 167 (0x29C00)
**     WPFP_WPFP168         Page 168 (0x2A000)
**     WPFP_WPFP169         Page 169 (0x2A400)
**     WPFP_WPFP170         Page 170 (0x2A800)
**     WPFP_WPFP255         Highest Page (same as page 170)
**
**   Secondary Oscillator Power Mode Select:
**     SOSCSEL_EC           External clock (SCLKI) or Digital I/O mode(
**     SOSCSEL_LPSOSC       Secondary oscillator is in Low-Power (low drive strength) Oscillator mode
**     SOSCSEL_SOSC         Secondary oscillator is in Default (high drive strength) Oscillator mode
**
**   Voltage Regulator Wake-up Time Select:
**     WUTSEL_FST           Fast regulator start-up time is used
**     WUTSEL_LEG           Default regulator start-up time is used
**
**   Alternate PMP Pin Mapping:
**     ALTPMP_ALTPMPEN      EPMP pins are in alternate location mode
**     ALTPMP_ALPMPDIS      EPMP pins are in default location mode
**
**   Segment Write Protection Disable:
**     WPDIS_WPEN           Segmented code protection is enabled; protected segment is defined by the WPEND, WPCFG and WPFPx Configuration bits
**     WPDIS_WPDIS          Segmented code protection is disabled
**
**   Write Protect Configuration Page Select:
**     WPCFG_WPCFGEN        Last page and Flash Configuration Words are write-protected, provided WPDIS = 0
**     WPCFG_WPCFGDIS       Last page (at the top of program memory) and Flash Configuration Words are not write-protected
**
**   Segment Write Protection End Page Select:
**     WPEND_WPSTARTMEM     Protected code segment lower boundary is at the bottom of the program memory (000000h); upper boundary is the code page specified by WPFP
**     WPEND_WPENDMEM       Protected code segment upper boundary is at the last page of program memory; the lower boundary is the code page specified by WPFP
**
*/

#define WPFP_WPFP0           0xFF00
#define WPFP_WPFP1           0xFF01
#define WPFP_WPFP2           0xFF02
#define WPFP_WPFP3           0xFF03
#define WPFP_WPFP4           0xFF04
#define WPFP_WPFP5           0xFF05
#define WPFP_WPFP6           0xFF06
#define WPFP_WPFP7           0xFF07
#define WPFP_WPFP8           0xFF08
#define WPFP_WPFP9           0xFF09
#define WPFP_WPFP10          0xFF0A
#define WPFP_WPFP11          0xFF0B
#define WPFP_WPFP12          0xFF0C
#define WPFP_WPFP13          0xFF0D
#define WPFP_WPFP14          0xFF0E
#define WPFP_WPFP15          0xFF0F
#define WPFP_WPFP16          0xFF10
#define WPFP_WPFP17          0xFF11
#define WPFP_WPFP18          0xFF12
#define WPFP_WPFP19          0xFF13
#define WPFP_WPFP20          0xFF14
#define WPFP_WPFP21          0xFF15
#define WPFP_WPFP22          0xFF16
#define WPFP_WPFP23          0xFF17
#define WPFP_WPFP24          0xFF18
#define WPFP_WPFP25          0xFF19
#define WPFP_WPFP26          0xFF1A
#define WPFP_WPFP27          0xFF1B
#define WPFP_WPFP28          0xFF1C
#define WPFP_WPFP29          0xFF1D
#define WPFP_WPFP30          0xFF1E
#define WPFP_WPFP31          0xFF1F
#define WPFP_WPFP32          0xFF20
#define WPFP_WPFP33          0xFF21
#define WPFP_WPFP34          0xFF22
#define WPFP_WPFP35          0xFF23
#define WPFP_WPFP36          0xFF24
#define WPFP_WPFP37          0xFF25
#define WPFP_WPFP38          0xFF26
#define WPFP_WPFP39          0xFF27
#define WPFP_WPFP40          0xFF28
#define WPFP_WPFP41          0xFF29
#define WPFP_WPFP42          0xFF2A
#define WPFP_WPFP43          0xFF2B
#define WPFP_WPFP44          0xFF2C
#define WPFP_WPFP45          0xFF2D
#define WPFP_WPFP46          0xFF2E
#define WPFP_WPFP47          0xFF2F
#define WPFP_WPFP48          0xFF30
#define WPFP_WPFP49          0xFF31
#define WPFP_WPFP50          0xFF32
#define WPFP_WPFP51          0xFF33
#define WPFP_WPFP52          0xFF34
#define WPFP_WPFP53          0xFF35
#define WPFP_WPFP54          0xFF36
#define WPFP_WPFP55          0xFF37
#define WPFP_WPFP56          0xFF38
#define WPFP_WPFP57          0xFF39
#define WPFP_WPFP58          0xFF3A
#define WPFP_WPFP59          0xFF3B
#define WPFP_WPFP60          0xFF3C
#define WPFP_WPFP61          0xFF3D
#define WPFP_WPFP62          0xFF3E
#define WPFP_WPFP63          0xFF3F
#define WPFP_WPFP64          0xFF40
#define WPFP_WPFP65          0xFF41
#define WPFP_WPFP66          0xFF42
#define WPFP_WPFP67          0xFF43
#define WPFP_WPFP68          0xFF44
#define WPFP_WPFP69          0xFF45
#define WPFP_WPFP70          0xFF46
#define WPFP_WPFP71          0xFF47
#define WPFP_WPFP72          0xFF48
#define WPFP_WPFP73          0xFF49
#define WPFP_WPFP74          0xFF4A
#define WPFP_WPFP75          0xFF4B
#define WPFP_WPFP76          0xFF4C
#define WPFP_WPFP77          0xFF4D
#define WPFP_WPFP78          0xFF4E
#define WPFP_WPFP79          0xFF4F
#define WPFP_WPFP80          0xFF50
#define WPFP_WPFP81          0xFF51
#define WPFP_WPFP82          0xFF52
#define WPFP_WPFP83          0xFF53
#define WPFP_WPFP84          0xFF54
#define WPFP_WPFP85          0xFF55
#define WPFP_WPFP86          0xFF56
#define WPFP_WPFP87          0xFF57
#define WPFP_WPFP88          0xFF58
#define WPFP_WPFP89          0xFF59
#define WPFP_WPFP90          0xFF5A
#define WPFP_WPFP91          0xFF5B
#define WPFP_WPFP92          0xFF5C
#define WPFP_WPFP93          0xFF5D
#define WPFP_WPFP94          0xFF5E
#define WPFP_WPFP95          0xFF5F
#define WPFP_WPFP96          0xFF60
#define WPFP_WPFP97          0xFF61
#define WPFP_WPFP98          0xFF62
#define WPFP_WPFP99          0xFF63
#define WPFP_WPFP100         0xFF64
#define WPFP_WPFP101         0xFF65
#define WPFP_WPFP102         0xFF66
#define WPFP_WPFP103         0xFF67
#define WPFP_WPFP104         0xFF68
#define WPFP_WPFP105         0xFF69
#define WPFP_WPFP106         0xFF6A
#define WPFP_WPFP107         0xFF6B
#define WPFP_WPFP108         0xFF6C
#define WPFP_WPFP109         0xFF6D
#define WPFP_WPFP110         0xFF6E
#define WPFP_WPFP111         0xFF6F
#define WPFP_WPFP112         0xFF70
#define WPFP_WPFP113         0xFF71
#define WPFP_WPFP114         0xFF72
#define WPFP_WPFP115         0xFF73
#define WPFP_WPFP116         0xFF74
#define WPFP_WPFP117         0xFF75
#define WPFP_WPFP118         0xFF76
#define WPFP_WPFP119         0xFF77
#define WPFP_WPFP120         0xFF78
#define WPFP_WPFP121         0xFF79
#define WPFP_WPFP122         0xFF7A
#define WPFP_WPFP123         0xFF7B
#define WPFP_WPFP124         0xFF7C
#define WPFP_WPFP125         0xFF7D
#define WPFP_WPFP126         0xFF7E
#define WPFP_WPFP127         0xFF7F
#define WPFP_WPFP128         0xFF80
#define WPFP_WPFP129         0xFF81
#define WPFP_WPFP130         0xFF82
#define WPFP_WPFP131         0xFF83
#define WPFP_WPFP132         0xFF84
#define WPFP_WPFP133         0xFF85
#define WPFP_WPFP134         0xFF86
#define WPFP_WPFP135         0xFF87
#define WPFP_WPFP136         0xFF88
#define WPFP_WPFP137         0xFF89
#define WPFP_WPFP138         0xFF8A
#define WPFP_WPFP139         0xFF8B
#define WPFP_WPFP140         0xFF8C
#define WPFP_WPFP141         0xFF8D
#define WPFP_WPFP142         0xFF8E
#define WPFP_WPFP143         0xFF8F
#define WPFP_WPFP144         0xFF90
#define WPFP_WPFP145         0xFF91
#define WPFP_WPFP146         0xFF92
#define WPFP_WPFP147         0xFF93
#define WPFP_WPFP148         0xFF94
#define WPFP_WPFP149         0xFF95
#define WPFP_WPFP150         0xFF96
#define WPFP_WPFP151         0xFF97
#define WPFP_WPFP152         0xFF98
#define WPFP_WPFP153         0xFF99
#define WPFP_WPFP154         0xFF9A
#define WPFP_WPFP155         0xFF9B
#define WPFP_WPFP156         0xFF9C
#define WPFP_WPFP157         0xFF9D
#define WPFP_WPFP158         0xFF9E
#define WPFP_WPFP159         0xFF9F
#define WPFP_WPFP160         0xFFA0
#define WPFP_WPFP161         0xFFA1
#define WPFP_WPFP162         0xFFA2
#define WPFP_WPFP163         0xFFA3
#define WPFP_WPFP164         0xFFA4
#define WPFP_WPFP165         0xFFA5
#define WPFP_WPFP166         0xFFA6
#define WPFP_WPFP167         0xFFA7
#define WPFP_WPFP168         0xFFA8
#define WPFP_WPFP169         0xFFA9
#define WPFP_WPFP170         0xFFAA
#define WPFP_WPFP255         0xFFFF

#define SOSCSEL_EC           0xFCFF
#define SOSCSEL_LPSOSC       0xFDFF
#define SOSCSEL_SOSC         0xFFFF

#define WUTSEL_FST           0xF7FF
#define WUTSEL_LEG           0xFFFF

#define ALTPMP_ALTPMPEN      0xEFFF
#define ALTPMP_ALPMPDIS      0xFFFF

#define WPDIS_WPEN           0xDFFF
#define WPDIS_WPDIS          0xFFFF

#define WPCFG_WPCFGEN        0xBFFF
#define WPCFG_WPCFGDIS       0xFFFF

#define WPEND_WPSTARTMEM     0x7FFF
#define WPEND_WPENDMEM       0xFFFF

/* Register CONFIG2 (0x2abfc)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG2;
#define _CONFIG2(x) __attribute__((address(0x2abfc),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG2.sec"),space(prog))) __prog__ uint16_t _CONFIG2 = (x);

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
**     POSCMOD_EC           EC Oscillator mode is selected
**     POSCMOD_XT           XT Oscillator mode is selected
**     POSCMOD_HS           HS Oscillator mode is selected
**     POSCMOD_NONE         Primary oscillator is disabled
**
**   IOLOCK One-Way Set Enable:
**     IOL1WAY_OFF          The IOLOCK bit can be set and cleared as needed, provided the unlock sequence has been completed
**     IOL1WAY_ON           The IOLOCK bit (OSCCON<6>) can be set once, provided the unlock sequence has been completed. Once set, the Peripheral Pin Select registers cannot be written to a second time.
**
**   OSCO Pin Configuration:
**     OSCIOFNC_ON          OSCO/CLKO/RC15 functions as port I/O (RC15)
**     OSCIOFNC_OFF         OSCO/CLKO/RC15 functions as CLKO (FOSC/2)
**
**   Clock Switching and Fail-Safe Clock Monitor:
**     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
**
**   Initial Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL module (FRCPLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (XTPLL, HSPLL, ECPLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
**
**   96MHz PLL Startup Select:
**     PLL96MHZ_OFF         96 MHz PLL is software controlled (can be enabled by setting the PLLEN bit in CLKDIV<5>)
**     PLL96MHZ_ON          96 MHz PLL is enabled automatically on start-up
**
**   96 MHz PLL Prescaler Select:
**     PLLDIV_NODIV         Oscillator input is used directly (4 MHz input)
**     PLLDIV_DIV2          Oscillator input is divided by 2 (8 MHz input)
**     PLLDIV_DIV3          Oscillator input is divided by 3 (12 MHz input)
**     PLLDIV_DIV4          Oscillator input is divided by 4 (16 MHz input)
**     PLLDIV_DIV5          Oscillator input is divided by 5 (20 MHz input)
**     PLLDIV_DIV6          Oscillator input is divided by 6 (24 MHz input)
**     PLLDIV_DIV8          Oscillator input is divided by 8 (32 MHz input)
**     PLLDIV_DIV12         Oscillator input is divided by 12 (48 MHz input)
**
**   Internal External Switchover:
**     IESO_OFF             IESO mode (Two-Speed Start-up) is disabled
**     IESO_ON              IESO mode (Two-Speed Start-up) is enabled
**
*/

#define POSCMOD_EC           0xFFFC
#define POSCMOD_XT           0xFFFD
#define POSCMOD_HS           0xFFFE
#define POSCMOD_NONE         0xFFFF

#define IOL1WAY_OFF          0xFFEF
#define IOL1WAY_ON           0xFFFF

#define OSCIOFNC_ON          0xFFDF
#define OSCIOFNC_OFF         0xFFFF

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

#define PLL96MHZ_OFF         0xF7FF
#define PLL96MHZ_ON          0xFFFF

#define PLLDIV_NODIV         0x8FFF
#define PLLDIV_DIV2          0x9FFF
#define PLLDIV_DIV3          0xAFFF
#define PLLDIV_DIV4          0xBFFF
#define PLLDIV_DIV5          0xCFFF
#define PLLDIV_DIV6          0xDFFF
#define PLLDIV_DIV8          0xEFFF
#define PLLDIV_DIV12         0xFFFF

#define IESO_OFF             0x7FFF
#define IESO_ON              0xFFFF

/* Register CONFIG1 (0x2abfe)                               */

extern __attribute__((space(prog))) __prog__ uint16_t _CONFIG1;
#define _CONFIG1(x) __attribute__((address(0x2abfe),deprecated_definition("consider migrating to #pragma config"),section("__CONFIG1.sec"),space(prog))) __prog__ uint16_t _CONFIG1 = (x);

/*
** Only one invocation of CONFIG1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG1.
** Multiple options may be combined, as shown:
**
** _CONFIG1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler:
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
**   WDT Prescaler:
**     FWPSA_PR32           Prescaler ratio of 1:32
**     FWPSA_PR128          Prescaler ratio of 1:128
**
**   Windowed WDT:
**     WINDIS_ON            Windowed Watchdog Timer is enabled; FWDTEN must be 1
**     WINDIS_OFF           Standard Watchdog Timer enabled,(Windowed-mode is disabled)
**
**   Watchdog Timer:
**     FWDTEN_OFF           Watchdog Timer is disabled
**     FWDTEN_ON            Watchdog Timer is enabled
**
**   Emulator Pin Placement Select bits:
**     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
**     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
**     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
**
**   General Segment Write Protect:
**     GWRP_ON              Writes to program memory are not allowed
**     GWRP_OFF             Writes to program memory are allowed
**
**   General Segment Code Protect:
**     GCP_ON               Code protection is enabled for the entire program memory space
**     GCP_OFF              Code protection is disabled
**
**   JTAG Port Enable:
**     JTAGEN_OFF           JTAG port is disabled
**     JTAGEN_ON            JTAG port is enabled
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

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

#define FWDTEN_OFF           0xFF7F
#define FWDTEN_ON            0xFFFF

#define ICS_PGx3             0xFDFF
#define ICS_PGx2             0xFEFF
#define ICS_PGx1             0xFFFF

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
#define __PROGRAM_LENGTH 0x2a9f8

#define __CONFIG4_BASE 0x2abf8
#define __CONFIG4_LENGTH 0x2

#define __CONFIG3_BASE 0x2abfa
#define __CONFIG3_LENGTH 0x2

#define __CONFIG2_BASE 0x2abfc
#define __CONFIG2_LENGTH 0x2

#define __CONFIG1_BASE 0x2abfe
#define __CONFIG1_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x7800

#define __EDS_BASE 0x8000
#define __EDS_LENGTH 0x10800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x7800

#define __EDS_BASE 0x8000
#define __EDS_LENGTH 0x10800

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x7800

#define __EDS_BASE 0x8000
#define __EDS_LENGTH 0x10800


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
#define _RPOUT_OC8 25
#define _RPOUT_U3TX 28
#define _RPOUT_U3RTS 29
#define _RPOUT_U4TX 30
#define _RPOUT_U4RTS 31
#define _RPOUT_SDO3 32
#define _RPOUT_SCK3OUT 33
#define _RPOUT_SS3OUT 34
#define _RPOUT_OC9 35
#define _RPOUT_C3OUT 36

#endif
