/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief mk82fn256vdc15 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEM_MANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED7 = 7;
static const int INTERRUPTS_RESERVED8 = 8;
static const int INTERRUPTS_RESERVED9 = 9;
static const int INTERRUPTS_RESERVED10 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_RESERVED13 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0_DMA16 = 16;
static const int INTERRUPTS_DMA1_DMA17 = 17;
static const int INTERRUPTS_DMA2_DMA18 = 18;
static const int INTERRUPTS_DMA3_DMA19 = 19;
static const int INTERRUPTS_DMA4_DMA20 = 20;
static const int INTERRUPTS_DMA5_DMA21 = 21;
static const int INTERRUPTS_DMA6_DMA22 = 22;
static const int INTERRUPTS_DMA7_DMA23 = 23;
static const int INTERRUPTS_DMA8_DMA24 = 24;
static const int INTERRUPTS_DMA9_DMA25 = 25;
static const int INTERRUPTS_DMA10_DMA26 = 26;
static const int INTERRUPTS_DMA11_DMA27 = 27;
static const int INTERRUPTS_DMA12_DMA28 = 28;
static const int INTERRUPTS_DMA13_DMA29 = 29;
static const int INTERRUPTS_DMA14_DMA30 = 30;
static const int INTERRUPTS_DMA15_DMA31 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_MCM = 33;
static const int INTERRUPTS_FTFA = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_LVD_LVW = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_WDOG_EWM = 38;
static const int INTERRUPTS_TRNG0 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_I2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_I2S0_TX = 44;
static const int INTERRUPTS_I2S0_RX = 45;
static const int INTERRUPTS_LPUART0 = 46;
static const int INTERRUPTS_LPUART1 = 47;
static const int INTERRUPTS_LPUART2 = 48;
static const int INTERRUPTS_LPUART3 = 49;
static const int INTERRUPTS_LPUART4 = 50;
static const int INTERRUPTS_RESERVED51 = 51;
static const int INTERRUPTS_RESERVED52 = 52;
static const int INTERRUPTS_EMVSIM0 = 53;
static const int INTERRUPTS_EMVSIM1 = 54;
static const int INTERRUPTS_ADC0 = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_CMP1 = 57;
static const int INTERRUPTS_FTM0 = 58;
static const int INTERRUPTS_FTM1 = 59;
static const int INTERRUPTS_FTM2 = 60;
static const int INTERRUPTS_CMT = 61;
static const int INTERRUPTS_RTC = 62;
static const int INTERRUPTS_RTC_SECONDS = 63;
static const int INTERRUPTS_PIT0CH0 = 64;
static const int INTERRUPTS_PIT0CH1 = 65;
static const int INTERRUPTS_PIT0CH2 = 66;
static const int INTERRUPTS_PIT0CH3 = 67;
static const int INTERRUPTS_PDB0 = 68;
static const int INTERRUPTS_USB0 = 69;
static const int INTERRUPTS_USBDCD = 70;
static const int INTERRUPTS_RESERVED71 = 71;
static const int INTERRUPTS_DAC0 = 72;
static const int INTERRUPTS_MCG = 73;
static const int INTERRUPTS_LPTMR0_LPTMR1 = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SWI = 80;
static const int INTERRUPTS_SPI2 = 81;
static const int INTERRUPTS_RESERVED82 = 82;
static const int INTERRUPTS_RESERVED83 = 83;
static const int INTERRUPTS_RESERVED84 = 84;
static const int INTERRUPTS_RESERVED85 = 85;
static const int INTERRUPTS_FLEXIO0 = 86;
static const int INTERRUPTS_FTM3 = 87;
static const int INTERRUPTS_RESERVED88 = 88;
static const int INTERRUPTS_RESERVED89 = 89;
static const int INTERRUPTS_I2C2 = 90;
static const int INTERRUPTS_RESERVED91 = 91;
static const int INTERRUPTS_RESERVED92 = 92;
static const int INTERRUPTS_RESERVED93 = 93;
static const int INTERRUPTS_RESERVED94 = 94;
static const int INTERRUPTS_RESERVED95 = 95;
static const int INTERRUPTS_RESERVED96 = 96;
static const int INTERRUPTS_SDHC = 97;
static const int INTERRUPTS_RESERVED98 = 98;
static const int INTERRUPTS_RESERVED99 = 99;
static const int INTERRUPTS_RESERVED100 = 100;
static const int INTERRUPTS_RESERVED101 = 101;
static const int INTERRUPTS_RESERVED102 = 102;
static const int INTERRUPTS_TSI0 = 103;
static const int INTERRUPTS_TPM1 = 104;
static const int INTERRUPTS_TPM2 = 105;
static const int INTERRUPTS_RESERVED106 = 106;
static const int INTERRUPTS_I2C3 = 107;
static const int INTERRUPTS_RESERVED108 = 108;
static const int INTERRUPTS_RESERVED109 = 109;
static const int INTERRUPTS_RESERVED110 = 110;
static const int INTERRUPTS_RESERVED111 = 111;
static const int INTERRUPTS_RESERVED112 = 112;
static const int INTERRUPTS_RESERVED113 = 113;
static const int INTERRUPTS_RESERVED114 = 114;
static const int INTERRUPTS_RESERVED115 = 115;
static const int INTERRUPTS_QUADSPI0 = 116;
static const int INTERRUPTS_RESERVED117 = 117;
static const int INTERRUPTS_RESERVED118 = 118;
static const int INTERRUPTS_RESERVED119 = 119;
static const int INTERRUPTS_LTC0 = 120;
static const int INTERRUPTS_RESERVED121 = 121;
static const int INTERRUPTS_RESERVED122 = 122;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for mk82fn256vdc15.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk82fn256vdc15.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END