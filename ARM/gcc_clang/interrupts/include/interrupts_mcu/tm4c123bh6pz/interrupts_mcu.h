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
* @brief tm4c123bh6pz MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_FAULT_NMI = 2;
static const int INTERRUPTS_FAULT_HARD = 3;
static const int INTERRUPTS_FAULT_MPU = 4;
static const int INTERRUPTS_FAULT_BUS = 5;
static const int INTERRUPTS_FAULT_USAGE = 6;
static const int INTERRUPTS_MCU_RESERVED7 = 7;
static const int INTERRUPTS_MCU_RESERVED8 = 8;
static const int INTERRUPTS_MCU_RESERVED9 = 9;
static const int INTERRUPTS_MCU_RESERVED10 = 10;
static const int INTERRUPTS_FAULT_SVCALL = 11;
static const int INTERRUPTS_FAULT_DEBUG = 12;
static const int INTERRUPTS_MCU_RESERVED13 = 13;
static const int INTERRUPTS_FAULT_PENDSV = 14;
static const int INTERRUPTS_FAULT_SYSTICK = 15;
static const int INTERRUPTS_GPIOA = 16;
static const int INTERRUPTS_GPIOB = 17;
static const int INTERRUPTS_GPIOC = 18;
static const int INTERRUPTS_GPIOD = 19;
static const int INTERRUPTS_GPIOE = 20;
static const int INTERRUPTS_UART0 = 21;
static const int INTERRUPTS_UART1 = 22;
static const int INTERRUPTS_SSI0 = 23;
static const int INTERRUPTS_I2C0 = 24;
static const int INTERRUPTS_PWM0_FAULT = 25;
static const int INTERRUPTS_PWM0_GEN0 = 26;
static const int INTERRUPTS_PWM0_GEN1 = 27;
static const int INTERRUPTS_PWM0_GEN2 = 28;
static const int INTERRUPTS_QEI0 = 29;
static const int INTERRUPTS_ADC0SS0 = 30;
static const int INTERRUPTS_ADC0SS1 = 31;
static const int INTERRUPTS_ADC0SS2 = 32;
static const int INTERRUPTS_ADC0SS3 = 33;
static const int INTERRUPTS_WATCHDOG = 34;
static const int INTERRUPTS_TIMER0A_16_32_BIT = 35;
static const int INTERRUPTS_TIMER0B_16_32_BIT = 36;
static const int INTERRUPTS_TIMER1A_16_32_BIT = 37;
static const int INTERRUPTS_TIMER1B_16_32_BIT = 38;
static const int INTERRUPTS_TIMER2A_16_32_BIT = 39;
static const int INTERRUPTS_TIMER2B_16_32_BIT = 40;
static const int INTERRUPTS_COMP0 = 41;
static const int INTERRUPTS_COMP1 = 42;
static const int INTERRUPTS_COMP2 = 43;
static const int INTERRUPTS_SYSCTL = 44;
static const int INTERRUPTS_FLASH_EEPROM = 45;
static const int INTERRUPTS_GPIOF = 46;
static const int INTERRUPTS_GPIOG = 47;
static const int INTERRUPTS_GPIOH = 48;
static const int INTERRUPTS_UART2 = 49;
static const int INTERRUPTS_SSI1 = 50;
static const int INTERRUPTS_TIMER3A_16_32_BIT = 51;
static const int INTERRUPTS_TIMER3B_16_32_BIT = 52;
static const int INTERRUPTS_I2C1 = 53;
static const int INTERRUPTS_QEI1 = 54;
static const int INTERRUPTS_CAN0 = 55;
static const int INTERRUPTS_CAN1 = 56;
static const int INTERRUPTS_RESERVED0 = 57;
static const int INTERRUPTS_RESERVED1 = 58;
static const int INTERRUPTS_HIBERNATE = 59;
static const int INTERRUPTS_RESERVED2 = 60;
static const int INTERRUPTS_PWM_GEN3 = 61;
static const int INTERRUPTS_UDMA = 62;
static const int INTERRUPTS_UDMAERR = 63;
static const int INTERRUPTS_ADC1SS0 = 64;
static const int INTERRUPTS_ADC1SS1 = 65;
static const int INTERRUPTS_ADC1SS2 = 66;
static const int INTERRUPTS_ADC1SS3 = 67;
static const int INTERRUPTS_RESERVED3 = 68;
static const int INTERRUPTS_RESERVED4 = 69;
static const int INTERRUPTS_GPIOJ = 70;
static const int INTERRUPTS_GPIOK = 71;
static const int INTERRUPTS_RESERVED5 = 72;
static const int INTERRUPTS_SSI2 = 73;
static const int INTERRUPTS_SSI3 = 74;
static const int INTERRUPTS_UART3 = 75;
static const int INTERRUPTS_UART4 = 76;
static const int INTERRUPTS_UART5 = 77;
static const int INTERRUPTS_UART6 = 78;
static const int INTERRUPTS_UART7 = 79;
static const int INTERRUPTS_RESERVED6 = 80;
static const int INTERRUPTS_RESERVED7 = 81;
static const int INTERRUPTS_RESERVED8 = 82;
static const int INTERRUPTS_RESERVED9 = 83;
static const int INTERRUPTS_I2C2 = 84;
static const int INTERRUPTS_I2C3 = 85;
static const int INTERRUPTS_TIMER4A_16_32_BIT = 86;
static const int INTERRUPTS_TIMER4B_16_32_BIT = 87;
static const int INTERRUPTS_RESERVED10 = 88;
static const int INTERRUPTS_RESERVED11 = 89;
static const int INTERRUPTS_RESERVED12 = 90;
static const int INTERRUPTS_RESERVED13 = 91;
static const int INTERRUPTS_RESERVED14 = 92;
static const int INTERRUPTS_RESERVED15 = 93;
static const int INTERRUPTS_RESERVED16 = 94;
static const int INTERRUPTS_RESERVED17 = 95;
static const int INTERRUPTS_RESERVED18 = 96;
static const int INTERRUPTS_RESERVED19 = 97;
static const int INTERRUPTS_RESERVED20 = 98;
static const int INTERRUPTS_RESERVED21 = 99;
static const int INTERRUPTS_RESERVED22 = 100;
static const int INTERRUPTS_RESERVED23 = 101;
static const int INTERRUPTS_RESERVED24 = 102;
static const int INTERRUPTS_RESERVED25 = 103;
static const int INTERRUPTS_RESERVED26 = 104;
static const int INTERRUPTS_RESERVED27 = 105;
static const int INTERRUPTS_RESERVED28 = 106;
static const int INTERRUPTS_RESERVED29 = 107;
static const int INTERRUPTS_TIMER5A_16_32_BIT = 108;
static const int INTERRUPTS_TIMER5B_16_32_BIT = 109;
static const int INTERRUPTS_TIMER0A_32_64_BIT = 110;
static const int INTERRUPTS_TIMER0B_32_64_BIT = 111;
static const int INTERRUPTS_TIMER1A_32_64_BIT = 112;
static const int INTERRUPTS_TIMER1B_32_64_BIT = 113;
static const int INTERRUPTS_TIMER2A_32_64_BIT = 114;
static const int INTERRUPTS_TIMER2B_32_64_BIT = 115;
static const int INTERRUPTS_TIMER3A_32_64_BIT = 116;
static const int INTERRUPTS_TIMER3B_32_64_BIT = 117;
static const int INTERRUPTS_TIMER4A_32_64_BIT = 118;
static const int INTERRUPTS_TIMER4B_32_64_BIT = 119;
static const int INTERRUPTS_TIMER5A_32_64_BIT = 120;
static const int INTERRUPTS_TIMER5B_32_64_BIT = 121;
static const int INTERRUPTS_SYS_EXC = 122;
static const int INTERRUPTS_RESERVED30 = 123;
static const int INTERRUPTS_RESERVED31 = 124;
static const int INTERRUPTS_I2C4 = 125;
static const int INTERRUPTS_I2C5 = 126;
static const int INTERRUPTS_RESERVED32 = 127;
static const int INTERRUPTS_RESERVED33 = 128;
static const int INTERRUPTS_RESERVED34 = 129;
static const int INTERRUPTS_RESERVED35 = 130;
static const int INTERRUPTS_RESERVED36 = 131;
static const int INTERRUPTS_RESERVED37 = 132;
static const int INTERRUPTS_RESERVED38 = 133;
static const int INTERRUPTS_RESERVED39 = 134;
static const int INTERRUPTS_RESERVED40 = 135;
static const int INTERRUPTS_RESERVED41 = 136;
static const int INTERRUPTS_RESERVED42 = 137;
static const int INTERRUPTS_RESERVED43 = 138;
static const int INTERRUPTS_RESERVED44 = 139;
static const int INTERRUPTS_RESERVED45 = 140;
static const int INTERRUPTS_RESERVED46 = 141;
static const int INTERRUPTS_RESERVED47 = 142;
static const int INTERRUPTS_RESERVED48 = 143;
static const int INTERRUPTS_RESERVED49 = 144;
static const int INTERRUPTS_RESERVED50 = 145;
static const int INTERRUPTS_RESERVED51 = 146;
static const int INTERRUPTS_RESERVED52 = 147;
static const int INTERRUPTS_RESERVED53 = 148;
static const int INTERRUPTS_RESERVED54 = 149;
static const int INTERRUPTS_PWM1_GEN0 = 150;
static const int INTERRUPTS_PWM1_GEN1 = 151;
static const int INTERRUPTS_PWM1_GEN2 = 152;
static const int INTERRUPTS_PWM1_GEN3 = 153;
static const int INTERRUPTS_PWM1_FAULT = 154;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for tm4c123bh6pz.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for tm4c123bh6pz.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
