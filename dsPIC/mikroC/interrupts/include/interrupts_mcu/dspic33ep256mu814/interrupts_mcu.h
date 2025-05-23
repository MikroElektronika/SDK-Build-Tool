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
* @brief dspic33ep256mu814 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NVM = 0;
static const int INTERRUPTS_DMA1 = 1;
static const int INTERRUPTS_AD1 = 2;
static const int INTERRUPTS_U1TX = 3;
static const int INTERRUPTS_U1RX = 4;
static const int INTERRUPTS_SPI1 = 5;
static const int INTERRUPTS_SPI1E = 6;
static const int INTERRUPTS_T3 = 7;
static const int INTERRUPTS_T2 = 8;
static const int INTERRUPTS_OC2 = 9;
static const int INTERRUPTS_IC2 = 10;
static const int INTERRUPTS_DMA0 = 11;
static const int INTERRUPTS_T1 = 12;
static const int INTERRUPTS_OC1 = 13;
static const int INTERRUPTS_IC1 = 14;
static const int INTERRUPTS_INT0 = 15;
static const int INTERRUPTS_U2TX = 16;
static const int INTERRUPTS_U2RX = 17;
static const int INTERRUPTS_INT2 = 18;
static const int INTERRUPTS_T5 = 19;
static const int INTERRUPTS_T4 = 20;
static const int INTERRUPTS_OC4 = 21;
static const int INTERRUPTS_OC3 = 22;
static const int INTERRUPTS_DMA2 = 23;
static const int INTERRUPTS_IC8 = 24;
static const int INTERRUPTS_IC7 = 25;
static const int INTERRUPTS_AD2 = 26;
static const int INTERRUPTS_INT1 = 27;
static const int INTERRUPTS_CN = 28;
static const int INTERRUPTS_CM = 29;
static const int INTERRUPTS_MI2C1 = 30;
static const int INTERRUPTS_SI2C1 = 31;
static const int INTERRUPTS_T6 = 32;
static const int INTERRUPTS_DMA4 = 33;
static const int INTERRUPTS_PMP = 34;
static const int INTERRUPTS_OC8 = 35;
static const int INTERRUPTS_OC7 = 36;
static const int INTERRUPTS_OC6 = 37;
static const int INTERRUPTS_OC5 = 38;
static const int INTERRUPTS_IC6 = 39;
static const int INTERRUPTS_IC5 = 40;
static const int INTERRUPTS_IC4 = 41;
static const int INTERRUPTS_IC3 = 42;
static const int INTERRUPTS_DMA3 = 43;
static const int INTERRUPTS_C1 = 44;
static const int INTERRUPTS_C1RX = 45;
static const int INTERRUPTS_SPI2 = 46;
static const int INTERRUPTS_SPI2E = 47;
static const int INTERRUPTS_RTC = 48;
static const int INTERRUPTS_DMA5 = 49;
static const int INTERRUPTS_DCI = 50;
static const int INTERRUPTS_DCIE = 51;
static const int INTERRUPTS_QEI1 = 52;
static const int INTERRUPTS_PSEM = 53;
static const int INTERRUPTS_C2 = 54;
static const int INTERRUPTS_C2RX = 55;
static const int INTERRUPTS_INT4 = 56;
static const int INTERRUPTS_INT3 = 57;
static const int INTERRUPTS_T9 = 58;
static const int INTERRUPTS_T8 = 59;
static const int INTERRUPTS_MI2C2 = 60;
static const int INTERRUPTS_SI2C2 = 61;
static const int INTERRUPTS_T7 = 62;
static const int INTERRUPTS_QEI2 = 63;
static const int INTERRUPTS_PSESM = 64;
static const int INTERRUPTS_C2TX = 65;
static const int INTERRUPTS_C1TX = 66;
static const int INTERRUPTS_DMA7 = 67;
static const int INTERRUPTS_DMA6 = 68;
static const int INTERRUPTS_CRC = 69;
static const int INTERRUPTS_U2E = 70;
static const int INTERRUPTS_U1E = 71;
static const int INTERRUPTS_PWM2 = 72;
static const int INTERRUPTS_PWM1 = 73;
static const int INTERRUPTS_IC9 = 74;
static const int INTERRUPTS_OC9 = 75;
static const int INTERRUPTS_SPI3 = 76;
static const int INTERRUPTS_SPI3E = 77;
static const int INTERRUPTS_U4TX = 78;
static const int INTERRUPTS_U4RX = 79;
static const int INTERRUPTS_U4E = 80;
static const int INTERRUPTS_USB1 = 81;
static const int INTERRUPTS_U3TX = 82;
static const int INTERRUPTS_U3RX = 83;
static const int INTERRUPTS_U3E = 84;
static const int INTERRUPTS_PWM7 = 85;
static const int INTERRUPTS_PWM6 = 86;
static const int INTERRUPTS_PWM5 = 87;
static const int INTERRUPTS_PWM4 = 88;
static const int INTERRUPTS_PWM3 = 89;
static const int INTERRUPTS_IC11 = 90;
static const int INTERRUPTS_OC11 = 91;
static const int INTERRUPTS_IC10 = 92;
static const int INTERRUPTS_OC10 = 93;
static const int INTERRUPTS_SPI4 = 94;
static const int INTERRUPTS_SPI4E = 95;
static const int INTERRUPTS_DMA11 = 96;
static const int INTERRUPTS_DMA10 = 97;
static const int INTERRUPTS_DMA9 = 98;
static const int INTERRUPTS_DMA8 = 99;
static const int INTERRUPTS_ICDIFIE = 100;
static const int INTERRUPTS_IC16 = 101;
static const int INTERRUPTS_OC16 = 102;
static const int INTERRUPTS_IC15 = 103;
static const int INTERRUPTS_OC15 = 104;
static const int INTERRUPTS_IC14 = 105;
static const int INTERRUPTS_OC14 = 106;
static const int INTERRUPTS_IC13 = 107;
static const int INTERRUPTS_OC13 = 108;
static const int INTERRUPTS_DMA14 = 109;
static const int INTERRUPTS_DMA13 = 110;
static const int INTERRUPTS_DMA12 = 111;
static const int INTERRUPTS_IC12 = 112;
static const int INTERRUPTS_OC12 = 113;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_DMA1_REGISTER (IEC0)
#define INTERRUPT_AD1_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_DMA0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_IC8_REGISTER (IEC1)
#define INTERRUPT_IC7_REGISTER (IEC1)
#define INTERRUPT_AD2_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_CM_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_T6_REGISTER (IEC2)
#define INTERRUPT_DMA4_REGISTER (IEC2)
#define INTERRUPT_PMP_REGISTER (IEC2)
#define INTERRUPT_OC8_REGISTER (IEC2)
#define INTERRUPT_OC7_REGISTER (IEC2)
#define INTERRUPT_OC6_REGISTER (IEC2)
#define INTERRUPT_OC5_REGISTER (IEC2)
#define INTERRUPT_IC6_REGISTER (IEC2)
#define INTERRUPT_IC5_REGISTER (IEC2)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_DMA3_REGISTER (IEC2)
#define INTERRUPT_C1_REGISTER (IEC2)
#define INTERRUPT_C1RX_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_RTC_REGISTER (IEC3)
#define INTERRUPT_DMA5_REGISTER (IEC3)
#define INTERRUPT_DCI_REGISTER (IEC3)
#define INTERRUPT_DCIE_REGISTER (IEC3)
#define INTERRUPT_QEI1_REGISTER (IEC3)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_C2_REGISTER (IEC3)
#define INTERRUPT_C2RX_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_INT3_REGISTER (IEC3)
#define INTERRUPT_T9_REGISTER (IEC3)
#define INTERRUPT_T8_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_T7_REGISTER (IEC3)
#define INTERRUPT_QEI2_REGISTER (IEC4)
#define INTERRUPT_PSESM_REGISTER (IEC4)
#define INTERRUPT_C2TX_REGISTER (IEC4)
#define INTERRUPT_C1TX_REGISTER (IEC4)
#define INTERRUPT_DMA7_REGISTER (IEC4)
#define INTERRUPT_DMA6_REGISTER (IEC4)
#define INTERRUPT_CRC_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_IC9_REGISTER (IEC5)
#define INTERRUPT_OC9_REGISTER (IEC5)
#define INTERRUPT_SPI3_REGISTER (IEC5)
#define INTERRUPT_SPI3E_REGISTER (IEC5)
#define INTERRUPT_U4TX_REGISTER (IEC5)
#define INTERRUPT_U4RX_REGISTER (IEC5)
#define INTERRUPT_U4E_REGISTER (IEC5)
#define INTERRUPT_USB1_REGISTER (IEC5)
#define INTERRUPT_U3TX_REGISTER (IEC5)
#define INTERRUPT_U3RX_REGISTER (IEC5)
#define INTERRUPT_U3E_REGISTER (IEC5)
#define INTERRUPT_PWM7_REGISTER (IEC6)
#define INTERRUPT_PWM6_REGISTER (IEC6)
#define INTERRUPT_PWM5_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_IC11_REGISTER (IEC7)
#define INTERRUPT_OC11_REGISTER (IEC7)
#define INTERRUPT_IC10_REGISTER (IEC7)
#define INTERRUPT_OC10_REGISTER (IEC7)
#define INTERRUPT_SPI4_REGISTER (IEC7)
#define INTERRUPT_SPI4E_REGISTER (IEC7)
#define INTERRUPT_DMA11_REGISTER (IEC7)
#define INTERRUPT_DMA10_REGISTER (IEC7)
#define INTERRUPT_DMA9_REGISTER (IEC7)
#define INTERRUPT_DMA8_REGISTER (IEC7)
#define INTERRUPT_ICDIFIE_REGISTER (IEC8)
#define INTERRUPT_IC16_REGISTER (IEC8)
#define INTERRUPT_OC16_REGISTER (IEC8)
#define INTERRUPT_IC15_REGISTER (IEC8)
#define INTERRUPT_OC15_REGISTER (IEC8)
#define INTERRUPT_IC14_REGISTER (IEC8)
#define INTERRUPT_OC14_REGISTER (IEC8)
#define INTERRUPT_IC13_REGISTER (IEC8)
#define INTERRUPT_OC13_REGISTER (IEC8)
#define INTERRUPT_DMA14_REGISTER (IEC8)
#define INTERRUPT_DMA13_REGISTER (IEC8)
#define INTERRUPT_DMA12_REGISTER (IEC8)
#define INTERRUPT_IC12_REGISTER (IEC8)
#define INTERRUPT_OC12_REGISTER (IEC8)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_DMA1_BIT (14)
#define INTERRUPT_AD1_BIT (13)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_DMA0_BIT (4)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_DMA2_BIT (8)
#define INTERRUPT_IC8_BIT (7)
#define INTERRUPT_IC7_BIT (6)
#define INTERRUPT_AD2_BIT (5)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_CM_BIT (2)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_T6_BIT (15)
#define INTERRUPT_DMA4_BIT (14)
#define INTERRUPT_PMP_BIT (13)
#define INTERRUPT_OC8_BIT (12)
#define INTERRUPT_OC7_BIT (11)
#define INTERRUPT_OC6_BIT (10)
#define INTERRUPT_OC5_BIT (9)
#define INTERRUPT_IC6_BIT (8)
#define INTERRUPT_IC5_BIT (7)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_DMA3_BIT (4)
#define INTERRUPT_C1_BIT (3)
#define INTERRUPT_C1RX_BIT (2)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_RTC_BIT (14)
#define INTERRUPT_DMA5_BIT (13)
#define INTERRUPT_DCI_BIT (12)
#define INTERRUPT_DCIE_BIT (11)
#define INTERRUPT_QEI1_BIT (10)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_C2_BIT (8)
#define INTERRUPT_C2RX_BIT (7)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_INT3_BIT (5)
#define INTERRUPT_T9_BIT (4)
#define INTERRUPT_T8_BIT (3)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_T7_BIT (0)
#define INTERRUPT_QEI2_BIT (11)
#define INTERRUPT_PSESM_BIT (9)
#define INTERRUPT_C2TX_BIT (7)
#define INTERRUPT_C1TX_BIT (6)
#define INTERRUPT_DMA7_BIT (5)
#define INTERRUPT_DMA6_BIT (4)
#define INTERRUPT_CRC_BIT (3)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_IC9_BIT (13)
#define INTERRUPT_OC9_BIT (12)
#define INTERRUPT_SPI3_BIT (11)
#define INTERRUPT_SPI3E_BIT (10)
#define INTERRUPT_U4TX_BIT (9)
#define INTERRUPT_U4RX_BIT (8)
#define INTERRUPT_U4E_BIT (7)
#define INTERRUPT_USB1_BIT (6)
#define INTERRUPT_U3TX_BIT (3)
#define INTERRUPT_U3RX_BIT (2)
#define INTERRUPT_U3E_BIT (1)
#define INTERRUPT_PWM7_BIT (4)
#define INTERRUPT_PWM6_BIT (3)
#define INTERRUPT_PWM5_BIT (2)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_IC11_BIT (15)
#define INTERRUPT_OC11_BIT (14)
#define INTERRUPT_IC10_BIT (13)
#define INTERRUPT_OC10_BIT (12)
#define INTERRUPT_SPI4_BIT (11)
#define INTERRUPT_SPI4E_BIT (10)
#define INTERRUPT_DMA11_BIT (9)
#define INTERRUPT_DMA10_BIT (8)
#define INTERRUPT_DMA9_BIT (7)
#define INTERRUPT_DMA8_BIT (6)
#define INTERRUPT_ICDIFIE_BIT (14)
#define INTERRUPT_IC16_BIT (13)
#define INTERRUPT_OC16_BIT (12)
#define INTERRUPT_IC15_BIT (11)
#define INTERRUPT_OC15_BIT (10)
#define INTERRUPT_IC14_BIT (9)
#define INTERRUPT_OC14_BIT (8)
#define INTERRUPT_IC13_BIT (7)
#define INTERRUPT_OC13_BIT (6)
#define INTERRUPT_DMA14_BIT (4)
#define INTERRUPT_DMA13_BIT (3)
#define INTERRUPT_DMA12_BIT (2)
#define INTERRUPT_IC12_BIT (1)
#define INTERRUPT_OC12_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
