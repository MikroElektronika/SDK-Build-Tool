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
* @brief pic32mz1024efm100 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_CT = 0;
static const int INTERRUPTS_CS0 = 1;
static const int INTERRUPTS_CS1 = 2;
static const int INTERRUPTS_INT0 = 3;
static const int INTERRUPTS_T1 = 4;
static const int INTERRUPTS_IC1E = 5;
static const int INTERRUPTS_IC1 = 6;
static const int INTERRUPTS_OC1 = 7;
static const int INTERRUPTS_INT1 = 8;
static const int INTERRUPTS_T2 = 9;
static const int INTERRUPTS_IC2E = 10;
static const int INTERRUPTS_IC2 = 11;
static const int INTERRUPTS_OC2 = 12;
static const int INTERRUPTS_INT2 = 13;
static const int INTERRUPTS_T3 = 14;
static const int INTERRUPTS_IC3E = 15;
static const int INTERRUPTS_IC3 = 16;
static const int INTERRUPTS_OC3 = 17;
static const int INTERRUPTS_INT3 = 18;
static const int INTERRUPTS_T4 = 19;
static const int INTERRUPTS_IC4E = 20;
static const int INTERRUPTS_IC4 = 21;
static const int INTERRUPTS_OC4 = 22;
static const int INTERRUPTS_INT4 = 23;
static const int INTERRUPTS_T5 = 24;
static const int INTERRUPTS_IC5E = 25;
static const int INTERRUPTS_IC5 = 26;
static const int INTERRUPTS_OC5 = 27;
static const int INTERRUPTS_T6 = 28;
static const int INTERRUPTS_IC6E = 29;
static const int INTERRUPTS_IC6 = 30;
static const int INTERRUPTS_OC6 = 31;
static const int INTERRUPTS_T7 = 32;
static const int INTERRUPTS_IC7E = 33;
static const int INTERRUPTS_IC7 = 34;
static const int INTERRUPTS_OC7 = 35;
static const int INTERRUPTS_T8 = 36;
static const int INTERRUPTS_IC8E = 37;
static const int INTERRUPTS_IC8 = 38;
static const int INTERRUPTS_OC8 = 39;
static const int INTERRUPTS_T9 = 40;
static const int INTERRUPTS_IC9E = 41;
static const int INTERRUPTS_IC9 = 42;
static const int INTERRUPTS_OC9 = 43;
static const int INTERRUPTS_ADC = 44;
static const int INTERRUPTS_ADCFIFO = 45;
static const int INTERRUPTS_ADCDC1 = 46;
static const int INTERRUPTS_ADCDC2 = 47;
static const int INTERRUPTS_ADCDC3 = 48;
static const int INTERRUPTS_ADCDC4 = 49;
static const int INTERRUPTS_ADCDC5 = 50;
static const int INTERRUPTS_ADCDC6 = 51;
static const int INTERRUPTS_ADCDF1 = 52;
static const int INTERRUPTS_ADCDF2 = 53;
static const int INTERRUPTS_ADCDF3 = 54;
static const int INTERRUPTS_ADCDF4 = 55;
static const int INTERRUPTS_ADCDF5 = 56;
static const int INTERRUPTS_ADCDF6 = 57;
static const int INTERRUPTS_ADCFLT = 58;
static const int INTERRUPTS_ADCD0 = 59;
static const int INTERRUPTS_ADCD1 = 60;
static const int INTERRUPTS_ADCD2 = 61;
static const int INTERRUPTS_ADCD3 = 62;
static const int INTERRUPTS_ADCD4 = 63;
static const int INTERRUPTS_ADCD5 = 64;
static const int INTERRUPTS_ADCD6 = 65;
static const int INTERRUPTS_ADCD7 = 66;
static const int INTERRUPTS_ADCD8 = 67;
static const int INTERRUPTS_ADCD9 = 68;
static const int INTERRUPTS_ADCD10 = 69;
static const int INTERRUPTS_ADCD11 = 70;
static const int INTERRUPTS_ADCD12 = 71;
static const int INTERRUPTS_ADCD13 = 72;
static const int INTERRUPTS_ADCD14 = 73;
static const int INTERRUPTS_ADCD15 = 74;
static const int INTERRUPTS_ADCD16 = 75;
static const int INTERRUPTS_ADCD17 = 76;
static const int INTERRUPTS_ADCD18 = 77;
static const int INTERRUPTS_ADCD19 = 78;
static const int INTERRUPTS_ADCD20 = 79;
static const int INTERRUPTS_ADCD21 = 80;
static const int INTERRUPTS_ADCD22 = 81;
static const int INTERRUPTS_ADCD23 = 82;
static const int INTERRUPTS_ADCD24 = 83;
static const int INTERRUPTS_ADCD25 = 84;
static const int INTERRUPTS_ADCD26 = 85;
static const int INTERRUPTS_ADCD27 = 86;
static const int INTERRUPTS_ADCD28 = 87;
static const int INTERRUPTS_ADCD29 = 88;
static const int INTERRUPTS_ADCD30 = 89;
static const int INTERRUPTS_ADCD31 = 90;
static const int INTERRUPTS_ADCD32 = 91;
static const int INTERRUPTS_ADCD33 = 92;
static const int INTERRUPTS_ADCD34 = 93;
static const int INTERRUPTS_ADCD43 = 94;
static const int INTERRUPTS_ADCD44 = 95;
static const int INTERRUPTS_CPC = 96;
static const int INTERRUPTS_CFDC = 97;
static const int INTERRUPTS_SB = 98;
static const int INTERRUPTS_CRPT = 99;
static const int INTERRUPTS_SPI1E = 100;
static const int INTERRUPTS_SPI1RX = 101;
static const int INTERRUPTS_SPI1TX = 102;
static const int INTERRUPTS_U1E = 103;
static const int INTERRUPTS_U1RX = 104;
static const int INTERRUPTS_U1TX = 105;
static const int INTERRUPTS_I2C1B = 106;
static const int INTERRUPTS_I2C1S = 107;
static const int INTERRUPTS_I2C1M = 108;
static const int INTERRUPTS_CNA = 109;
static const int INTERRUPTS_CNB = 110;
static const int INTERRUPTS_CNC = 111;
static const int INTERRUPTS_CND = 112;
static const int INTERRUPTS_CNE = 113;
static const int INTERRUPTS_CNF = 114;
static const int INTERRUPTS_CNG = 115;
static const int INTERRUPTS_PMP = 116;
static const int INTERRUPTS_PMPE = 117;
static const int INTERRUPTS_CMP1 = 118;
static const int INTERRUPTS_CMP2 = 119;
static const int INTERRUPTS_USB = 120;
static const int INTERRUPTS_USBDMA = 121;
static const int INTERRUPTS_DMA0 = 122;
static const int INTERRUPTS_DMA1 = 123;
static const int INTERRUPTS_DMA2 = 124;
static const int INTERRUPTS_DMA3 = 125;
static const int INTERRUPTS_DMA4 = 126;
static const int INTERRUPTS_DMA5 = 127;
static const int INTERRUPTS_DMA6 = 128;
static const int INTERRUPTS_DMA7 = 129;
static const int INTERRUPTS_SPI2E = 130;
static const int INTERRUPTS_SPI2RX = 131;
static const int INTERRUPTS_SPI2TX = 132;
static const int INTERRUPTS_U2E = 133;
static const int INTERRUPTS_U2RX = 134;
static const int INTERRUPTS_U2TX = 135;
static const int INTERRUPTS_I2C2B = 136;
static const int INTERRUPTS_I2C2S = 137;
static const int INTERRUPTS_I2C2M = 138;
static const int INTERRUPTS_CAN1 = 139;
static const int INTERRUPTS_CAN2 = 140;
static const int INTERRUPTS_ETH = 141;
static const int INTERRUPTS_SPI3E = 142;
static const int INTERRUPTS_SPI3RX = 143;
static const int INTERRUPTS_SPI3TX = 144;
static const int INTERRUPTS_U3E = 145;
static const int INTERRUPTS_U3RX = 146;
static const int INTERRUPTS_U3TX = 147;
static const int INTERRUPTS_I2C3B = 148;
static const int INTERRUPTS_I2C3S = 149;
static const int INTERRUPTS_I2C3M = 150;
static const int INTERRUPTS_SPI4E = 151;
static const int INTERRUPTS_SPI4RX = 152;
static const int INTERRUPTS_SPI4TX = 153;
static const int INTERRUPTS_RTCC = 154;
static const int INTERRUPTS_FCE = 155;
static const int INTERRUPTS_PRE = 156;
static const int INTERRUPTS_SQI1 = 157;
static const int INTERRUPTS_U4E = 158;
static const int INTERRUPTS_U4RX = 159;
static const int INTERRUPTS_U4TX = 160;
static const int INTERRUPTS_I2C4B = 161;
static const int INTERRUPTS_I2C4S = 162;
static const int INTERRUPTS_I2C4M = 163;
static const int INTERRUPTS_SPI5E = 164;
static const int INTERRUPTS_SPI5RX = 165;
static const int INTERRUPTS_SPI5TX = 166;
static const int INTERRUPTS_U5E = 167;
static const int INTERRUPTS_U5RX = 168;
static const int INTERRUPTS_U5TX = 169;
static const int INTERRUPTS_I2C5B = 170;
static const int INTERRUPTS_I2C5S = 171;
static const int INTERRUPTS_I2C5M = 172;
static const int INTERRUPTS_SPI6 = 173;
static const int INTERRUPTS_SPI6RX = 174;
static const int INTERRUPTS_SPI6TX = 175;
static const int INTERRUPTS_U6E = 176;
static const int INTERRUPTS_U6RX = 177;
static const int INTERRUPTS_U6TX = 178;
static const int INTERRUPTS_ADCEOS = 179;
static const int INTERRUPTS_ADCARDY = 180;
static const int INTERRUPTS_ADCURDY = 181;
static const int INTERRUPTS_ADCGRP = 182;
static const int INTERRUPTS_ADC0E = 183;
static const int INTERRUPTS_ADC1E = 184;
static const int INTERRUPTS_ADC2E = 185;
static const int INTERRUPTS_ADC3E = 186;
static const int INTERRUPTS_ADC4E = 187;
static const int INTERRUPTS_ADC7E = 188;
static const int INTERRUPTS_ADC0W = 189;
static const int INTERRUPTS_ADC1W = 190;
static const int INTERRUPTS_ADC2W = 191;
static const int INTERRUPTS_ADC3W = 192;
static const int INTERRUPTS_ADC4W = 193;
static const int INTERRUPTS_ADC7W = 194;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_CT_REGISTER (IEC0)
#define INTERRUPT_CS0_REGISTER (IEC0)
#define INTERRUPT_CS1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_IC1E_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_INT1_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_IC2E_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_IC3E_REGISTER (IEC0)
#define INTERRUPT_IC3_REGISTER (IEC0)
#define INTERRUPT_OC3_REGISTER (IEC0)
#define INTERRUPT_INT3_REGISTER (IEC0)
#define INTERRUPT_T4_REGISTER (IEC0)
#define INTERRUPT_IC4E_REGISTER (IEC0)
#define INTERRUPT_IC4_REGISTER (IEC0)
#define INTERRUPT_OC4_REGISTER (IEC0)
#define INTERRUPT_INT4_REGISTER (IEC0)
#define INTERRUPT_T5_REGISTER (IEC0)
#define INTERRUPT_IC5E_REGISTER (IEC0)
#define INTERRUPT_IC5_REGISTER (IEC0)
#define INTERRUPT_OC5_REGISTER (IEC0)
#define INTERRUPT_T6_REGISTER (IEC0)
#define INTERRUPT_IC6E_REGISTER (IEC0)
#define INTERRUPT_IC6_REGISTER (IEC0)
#define INTERRUPT_OC6_REGISTER (IEC0)
#define INTERRUPT_T7_REGISTER (IEC1)
#define INTERRUPT_IC7E_REGISTER (IEC1)
#define INTERRUPT_IC7_REGISTER (IEC1)
#define INTERRUPT_OC7_REGISTER (IEC1)
#define INTERRUPT_T8_REGISTER (IEC1)
#define INTERRUPT_IC8E_REGISTER (IEC1)
#define INTERRUPT_IC8_REGISTER (IEC1)
#define INTERRUPT_OC8_REGISTER (IEC1)
#define INTERRUPT_T9_REGISTER (IEC1)
#define INTERRUPT_IC9E_REGISTER (IEC1)
#define INTERRUPT_IC9_REGISTER (IEC1)
#define INTERRUPT_OC9_REGISTER (IEC1)
#define INTERRUPT_ADC_REGISTER (IEC1)
#define INTERRUPT_ADCFIFO_REGISTER (IEC1)
#define INTERRUPT_ADCDC1_REGISTER (IEC1)
#define INTERRUPT_ADCDC2_REGISTER (IEC1)
#define INTERRUPT_ADCDC3_REGISTER (IEC1)
#define INTERRUPT_ADCDC4_REGISTER (IEC1)
#define INTERRUPT_ADCDC5_REGISTER (IEC1)
#define INTERRUPT_ADCDC6_REGISTER (IEC1)
#define INTERRUPT_ADCDF1_REGISTER (IEC1)
#define INTERRUPT_ADCDF2_REGISTER (IEC1)
#define INTERRUPT_ADCDF3_REGISTER (IEC1)
#define INTERRUPT_ADCDF4_REGISTER (IEC1)
#define INTERRUPT_ADCDF5_REGISTER (IEC1)
#define INTERRUPT_ADCDF6_REGISTER (IEC1)
#define INTERRUPT_ADCFLT_REGISTER (IEC1)
#define INTERRUPT_ADCD0_REGISTER (IEC1)
#define INTERRUPT_ADCD1_REGISTER (IEC1)
#define INTERRUPT_ADCD2_REGISTER (IEC1)
#define INTERRUPT_ADCD3_REGISTER (IEC1)
#define INTERRUPT_ADCD4_REGISTER (IEC1)
#define INTERRUPT_ADCD5_REGISTER (IEC2)
#define INTERRUPT_ADCD6_REGISTER (IEC2)
#define INTERRUPT_ADCD7_REGISTER (IEC2)
#define INTERRUPT_ADCD8_REGISTER (IEC2)
#define INTERRUPT_ADCD9_REGISTER (IEC2)
#define INTERRUPT_ADCD10_REGISTER (IEC2)
#define INTERRUPT_ADCD11_REGISTER (IEC2)
#define INTERRUPT_ADCD12_REGISTER (IEC2)
#define INTERRUPT_ADCD13_REGISTER (IEC2)
#define INTERRUPT_ADCD14_REGISTER (IEC2)
#define INTERRUPT_ADCD15_REGISTER (IEC2)
#define INTERRUPT_ADCD16_REGISTER (IEC2)
#define INTERRUPT_ADCD17_REGISTER (IEC2)
#define INTERRUPT_ADCD18_REGISTER (IEC2)
#define INTERRUPT_ADCD19_REGISTER (IEC2)
#define INTERRUPT_ADCD20_REGISTER (IEC2)
#define INTERRUPT_ADCD21_REGISTER (IEC2)
#define INTERRUPT_ADCD22_REGISTER (IEC2)
#define INTERRUPT_ADCD23_REGISTER (IEC2)
#define INTERRUPT_ADCD24_REGISTER (IEC2)
#define INTERRUPT_ADCD25_REGISTER (IEC2)
#define INTERRUPT_ADCD26_REGISTER (IEC2)
#define INTERRUPT_ADCD27_REGISTER (IEC2)
#define INTERRUPT_ADCD28_REGISTER (IEC2)
#define INTERRUPT_ADCD29_REGISTER (IEC2)
#define INTERRUPT_ADCD30_REGISTER (IEC2)
#define INTERRUPT_ADCD31_REGISTER (IEC2)
#define INTERRUPT_ADCD32_REGISTER (IEC2)
#define INTERRUPT_ADCD33_REGISTER (IEC2)
#define INTERRUPT_ADCD34_REGISTER (IEC2)
#define INTERRUPT_ADCD43_REGISTER (IEC3)
#define INTERRUPT_ADCD44_REGISTER (IEC3)
#define INTERRUPT_CPC_REGISTER (IEC3)
#define INTERRUPT_CFDC_REGISTER (IEC3)
#define INTERRUPT_SB_REGISTER (IEC3)
#define INTERRUPT_CRPT_REGISTER (IEC3)
#define INTERRUPT_SPI1E_REGISTER (IEC3)
#define INTERRUPT_SPI1RX_REGISTER (IEC3)
#define INTERRUPT_SPI1TX_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC3)
#define INTERRUPT_U1RX_REGISTER (IEC3)
#define INTERRUPT_U1TX_REGISTER (IEC3)
#define INTERRUPT_I2C1B_REGISTER (IEC3)
#define INTERRUPT_I2C1S_REGISTER (IEC3)
#define INTERRUPT_I2C1M_REGISTER (IEC3)
#define INTERRUPT_CNA_REGISTER (IEC3)
#define INTERRUPT_CNB_REGISTER (IEC3)
#define INTERRUPT_CNC_REGISTER (IEC3)
#define INTERRUPT_CND_REGISTER (IEC3)
#define INTERRUPT_CNE_REGISTER (IEC3)
#define INTERRUPT_CNF_REGISTER (IEC3)
#define INTERRUPT_CNG_REGISTER (IEC3)
#define INTERRUPT_PMP_REGISTER (IEC4)
#define INTERRUPT_PMPE_REGISTER (IEC4)
#define INTERRUPT_CMP1_REGISTER (IEC4)
#define INTERRUPT_CMP2_REGISTER (IEC4)
#define INTERRUPT_USB_REGISTER (IEC4)
#define INTERRUPT_USBDMA_REGISTER (IEC4)
#define INTERRUPT_DMA0_REGISTER (IEC4)
#define INTERRUPT_DMA1_REGISTER (IEC4)
#define INTERRUPT_DMA2_REGISTER (IEC4)
#define INTERRUPT_DMA3_REGISTER (IEC4)
#define INTERRUPT_DMA4_REGISTER (IEC4)
#define INTERRUPT_DMA5_REGISTER (IEC4)
#define INTERRUPT_DMA6_REGISTER (IEC4)
#define INTERRUPT_DMA7_REGISTER (IEC4)
#define INTERRUPT_SPI2E_REGISTER (IEC4)
#define INTERRUPT_SPI2RX_REGISTER (IEC4)
#define INTERRUPT_SPI2TX_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_U2RX_REGISTER (IEC4)
#define INTERRUPT_U2TX_REGISTER (IEC4)
#define INTERRUPT_I2C2B_REGISTER (IEC4)
#define INTERRUPT_I2C2S_REGISTER (IEC4)
#define INTERRUPT_I2C2M_REGISTER (IEC4)
#define INTERRUPT_CAN1_REGISTER (IEC4)
#define INTERRUPT_CAN2_REGISTER (IEC4)
#define INTERRUPT_ETH_REGISTER (IEC4)
#define INTERRUPT_SPI3E_REGISTER (IEC4)
#define INTERRUPT_SPI3RX_REGISTER (IEC4)
#define INTERRUPT_SPI3TX_REGISTER (IEC4)
#define INTERRUPT_U3E_REGISTER (IEC4)
#define INTERRUPT_U3RX_REGISTER (IEC4)
#define INTERRUPT_U3TX_REGISTER (IEC4)
#define INTERRUPT_I2C3B_REGISTER (IEC5)
#define INTERRUPT_I2C3S_REGISTER (IEC5)
#define INTERRUPT_I2C3M_REGISTER (IEC5)
#define INTERRUPT_SPI4E_REGISTER (IEC5)
#define INTERRUPT_SPI4RX_REGISTER (IEC5)
#define INTERRUPT_SPI4TX_REGISTER (IEC5)
#define INTERRUPT_RTCC_REGISTER (IEC5)
#define INTERRUPT_FCE_REGISTER (IEC5)
#define INTERRUPT_PRE_REGISTER (IEC5)
#define INTERRUPT_SQI1_REGISTER (IEC5)
#define INTERRUPT_U4E_REGISTER (IEC5)
#define INTERRUPT_U4RX_REGISTER (IEC5)
#define INTERRUPT_U4TX_REGISTER (IEC5)
#define INTERRUPT_I2C4B_REGISTER (IEC5)
#define INTERRUPT_I2C4S_REGISTER (IEC5)
#define INTERRUPT_I2C4M_REGISTER (IEC5)
#define INTERRUPT_SPI5E_REGISTER (IEC5)
#define INTERRUPT_SPI5RX_REGISTER (IEC5)
#define INTERRUPT_SPI5TX_REGISTER (IEC5)
#define INTERRUPT_U5E_REGISTER (IEC5)
#define INTERRUPT_U5RX_REGISTER (IEC5)
#define INTERRUPT_U5TX_REGISTER (IEC5)
#define INTERRUPT_I2C5B_REGISTER (IEC5)
#define INTERRUPT_I2C5S_REGISTER (IEC5)
#define INTERRUPT_I2C5M_REGISTER (IEC5)
#define INTERRUPT_SPI6_REGISTER (IEC5)
#define INTERRUPT_SPI6RX_REGISTER (IEC5)
#define INTERRUPT_SPI6TX_REGISTER (IEC5)
#define INTERRUPT_U6E_REGISTER (IEC5)
#define INTERRUPT_U6RX_REGISTER (IEC5)
#define INTERRUPT_U6TX_REGISTER (IEC5)
#define INTERRUPT_ADCEOS_REGISTER (IEC6)
#define INTERRUPT_ADCARDY_REGISTER (IEC6)
#define INTERRUPT_ADCURDY_REGISTER (IEC6)
#define INTERRUPT_ADCGRP_REGISTER (IEC6)
#define INTERRUPT_ADC0E_REGISTER (IEC6)
#define INTERRUPT_ADC1E_REGISTER (IEC6)
#define INTERRUPT_ADC2E_REGISTER (IEC6)
#define INTERRUPT_ADC3E_REGISTER (IEC6)
#define INTERRUPT_ADC4E_REGISTER (IEC6)
#define INTERRUPT_ADC7E_REGISTER (IEC6)
#define INTERRUPT_ADC0W_REGISTER (IEC6)
#define INTERRUPT_ADC1W_REGISTER (IEC6)
#define INTERRUPT_ADC2W_REGISTER (IEC6)
#define INTERRUPT_ADC3W_REGISTER (IEC6)
#define INTERRUPT_ADC4W_REGISTER (IEC6)
#define INTERRUPT_ADC7W_REGISTER (IEC6)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_CT_BIT (0)
#define INTERRUPT_CS0_BIT (1)
#define INTERRUPT_CS1_BIT (2)
#define INTERRUPT_INT0_BIT (3)
#define INTERRUPT_T1_BIT (4)
#define INTERRUPT_IC1E_BIT (5)
#define INTERRUPT_IC1_BIT (6)
#define INTERRUPT_OC1_BIT (7)
#define INTERRUPT_INT1_BIT (8)
#define INTERRUPT_T2_BIT (9)
#define INTERRUPT_IC2E_BIT (10)
#define INTERRUPT_IC2_BIT (11)
#define INTERRUPT_OC2_BIT (12)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_T3_BIT (14)
#define INTERRUPT_IC3E_BIT (15)
#define INTERRUPT_IC3_BIT (16)
#define INTERRUPT_OC3_BIT (17)
#define INTERRUPT_INT3_BIT (18)
#define INTERRUPT_T4_BIT (19)
#define INTERRUPT_IC4E_BIT (20)
#define INTERRUPT_IC4_BIT (21)
#define INTERRUPT_OC4_BIT (22)
#define INTERRUPT_INT4_BIT (23)
#define INTERRUPT_T5_BIT (24)
#define INTERRUPT_IC5E_BIT (25)
#define INTERRUPT_IC5_BIT (26)
#define INTERRUPT_OC5_BIT (27)
#define INTERRUPT_T6_BIT (28)
#define INTERRUPT_IC6E_BIT (29)
#define INTERRUPT_IC6_BIT (30)
#define INTERRUPT_OC6_BIT (31)
#define INTERRUPT_T7_BIT (0)
#define INTERRUPT_IC7E_BIT (1)
#define INTERRUPT_IC7_BIT (2)
#define INTERRUPT_OC7_BIT (3)
#define INTERRUPT_T8_BIT (4)
#define INTERRUPT_IC8E_BIT (5)
#define INTERRUPT_IC8_BIT (6)
#define INTERRUPT_OC8_BIT (7)
#define INTERRUPT_T9_BIT (8)
#define INTERRUPT_IC9E_BIT (9)
#define INTERRUPT_IC9_BIT (10)
#define INTERRUPT_OC9_BIT (11)
#define INTERRUPT_ADC_BIT (12)
#define INTERRUPT_ADCFIFO_BIT (13)
#define INTERRUPT_ADCDC1_BIT (14)
#define INTERRUPT_ADCDC2_BIT (15)
#define INTERRUPT_ADCDC3_BIT (16)
#define INTERRUPT_ADCDC4_BIT (17)
#define INTERRUPT_ADCDC5_BIT (18)
#define INTERRUPT_ADCDC6_BIT (19)
#define INTERRUPT_ADCDF1_BIT (20)
#define INTERRUPT_ADCDF2_BIT (21)
#define INTERRUPT_ADCDF3_BIT (22)
#define INTERRUPT_ADCDF4_BIT (23)
#define INTERRUPT_ADCDF5_BIT (24)
#define INTERRUPT_ADCDF6_BIT (25)
#define INTERRUPT_ADCFLT_BIT (26)
#define INTERRUPT_ADCD0_BIT (27)
#define INTERRUPT_ADCD1_BIT (28)
#define INTERRUPT_ADCD2_BIT (29)
#define INTERRUPT_ADCD3_BIT (30)
#define INTERRUPT_ADCD4_BIT (31)
#define INTERRUPT_ADCD5_BIT (0)
#define INTERRUPT_ADCD6_BIT (1)
#define INTERRUPT_ADCD7_BIT (2)
#define INTERRUPT_ADCD8_BIT (3)
#define INTERRUPT_ADCD9_BIT (4)
#define INTERRUPT_ADCD10_BIT (5)
#define INTERRUPT_ADCD11_BIT (6)
#define INTERRUPT_ADCD12_BIT (7)
#define INTERRUPT_ADCD13_BIT (8)
#define INTERRUPT_ADCD14_BIT (9)
#define INTERRUPT_ADCD15_BIT (10)
#define INTERRUPT_ADCD16_BIT (11)
#define INTERRUPT_ADCD17_BIT (12)
#define INTERRUPT_ADCD18_BIT (13)
#define INTERRUPT_ADCD19_BIT (14)
#define INTERRUPT_ADCD20_BIT (15)
#define INTERRUPT_ADCD21_BIT (16)
#define INTERRUPT_ADCD22_BIT (17)
#define INTERRUPT_ADCD23_BIT (18)
#define INTERRUPT_ADCD24_BIT (19)
#define INTERRUPT_ADCD25_BIT (20)
#define INTERRUPT_ADCD26_BIT (21)
#define INTERRUPT_ADCD27_BIT (22)
#define INTERRUPT_ADCD28_BIT (23)
#define INTERRUPT_ADCD29_BIT (24)
#define INTERRUPT_ADCD30_BIT (25)
#define INTERRUPT_ADCD31_BIT (26)
#define INTERRUPT_ADCD32_BIT (27)
#define INTERRUPT_ADCD33_BIT (28)
#define INTERRUPT_ADCD34_BIT (29)
#define INTERRUPT_ADCD43_BIT (6)
#define INTERRUPT_ADCD44_BIT (7)
#define INTERRUPT_CPC_BIT (8)
#define INTERRUPT_CFDC_BIT (9)
#define INTERRUPT_SB_BIT (10)
#define INTERRUPT_CRPT_BIT (11)
#define INTERRUPT_SPI1E_BIT (13)
#define INTERRUPT_SPI1RX_BIT (14)
#define INTERRUPT_SPI1TX_BIT (15)
#define INTERRUPT_U1E_BIT (16)
#define INTERRUPT_U1RX_BIT (17)
#define INTERRUPT_U1TX_BIT (18)
#define INTERRUPT_I2C1B_BIT (19)
#define INTERRUPT_I2C1S_BIT (20)
#define INTERRUPT_I2C1M_BIT (21)
#define INTERRUPT_CNA_BIT (22)
#define INTERRUPT_CNB_BIT (23)
#define INTERRUPT_CNC_BIT (24)
#define INTERRUPT_CND_BIT (25)
#define INTERRUPT_CNE_BIT (26)
#define INTERRUPT_CNF_BIT (27)
#define INTERRUPT_CNG_BIT (28)
#define INTERRUPT_PMP_BIT (0)
#define INTERRUPT_PMPE_BIT (1)
#define INTERRUPT_CMP1_BIT (2)
#define INTERRUPT_CMP2_BIT (3)
#define INTERRUPT_USB_BIT (4)
#define INTERRUPT_USBDMA_BIT (5)
#define INTERRUPT_DMA0_BIT (6)
#define INTERRUPT_DMA1_BIT (7)
#define INTERRUPT_DMA2_BIT (8)
#define INTERRUPT_DMA3_BIT (9)
#define INTERRUPT_DMA4_BIT (10)
#define INTERRUPT_DMA5_BIT (11)
#define INTERRUPT_DMA6_BIT (12)
#define INTERRUPT_DMA7_BIT (13)
#define INTERRUPT_SPI2E_BIT (14)
#define INTERRUPT_SPI2RX_BIT (15)
#define INTERRUPT_SPI2TX_BIT (16)
#define INTERRUPT_U2E_BIT (17)
#define INTERRUPT_U2RX_BIT (18)
#define INTERRUPT_U2TX_BIT (19)
#define INTERRUPT_I2C2B_BIT (20)
#define INTERRUPT_I2C2S_BIT (21)
#define INTERRUPT_I2C2M_BIT (22)
#define INTERRUPT_CAN1_BIT (23)
#define INTERRUPT_CAN2_BIT (24)
#define INTERRUPT_ETH_BIT (25)
#define INTERRUPT_SPI3E_BIT (26)
#define INTERRUPT_SPI3RX_BIT (27)
#define INTERRUPT_SPI3TX_BIT (28)
#define INTERRUPT_U3E_BIT (29)
#define INTERRUPT_U3RX_BIT (30)
#define INTERRUPT_U3TX_BIT (31)
#define INTERRUPT_I2C3B_BIT (0)
#define INTERRUPT_I2C3S_BIT (1)
#define INTERRUPT_I2C3M_BIT (2)
#define INTERRUPT_SPI4E_BIT (3)
#define INTERRUPT_SPI4RX_BIT (4)
#define INTERRUPT_SPI4TX_BIT (5)
#define INTERRUPT_RTCC_BIT (6)
#define INTERRUPT_FCE_BIT (7)
#define INTERRUPT_PRE_BIT (8)
#define INTERRUPT_SQI1_BIT (9)
#define INTERRUPT_U4E_BIT (10)
#define INTERRUPT_U4RX_BIT (11)
#define INTERRUPT_U4TX_BIT (12)
#define INTERRUPT_I2C4B_BIT (13)
#define INTERRUPT_I2C4S_BIT (14)
#define INTERRUPT_I2C4M_BIT (15)
#define INTERRUPT_SPI5E_BIT (16)
#define INTERRUPT_SPI5RX_BIT (17)
#define INTERRUPT_SPI5TX_BIT (18)
#define INTERRUPT_U5E_BIT (19)
#define INTERRUPT_U5RX_BIT (20)
#define INTERRUPT_U5TX_BIT (21)
#define INTERRUPT_I2C5B_BIT (22)
#define INTERRUPT_I2C5S_BIT (23)
#define INTERRUPT_I2C5M_BIT (24)
#define INTERRUPT_SPI6_BIT (25)
#define INTERRUPT_SPI6RX_BIT (26)
#define INTERRUPT_SPI6TX_BIT (27)
#define INTERRUPT_U6E_BIT (28)
#define INTERRUPT_U6RX_BIT (29)
#define INTERRUPT_U6TX_BIT (30)
#define INTERRUPT_ADCEOS_BIT (0)
#define INTERRUPT_ADCARDY_BIT (1)
#define INTERRUPT_ADCURDY_BIT (2)
#define INTERRUPT_ADCGRP_BIT (4)
#define INTERRUPT_ADC0E_BIT (6)
#define INTERRUPT_ADC1E_BIT (7)
#define INTERRUPT_ADC2E_BIT (8)
#define INTERRUPT_ADC3E_BIT (9)
#define INTERRUPT_ADC4E_BIT (10)
#define INTERRUPT_ADC7E_BIT (13)
#define INTERRUPT_ADC0W_BIT (14)
#define INTERRUPT_ADC1W_BIT (15)
#define INTERRUPT_ADC2W_BIT (16)
#define INTERRUPT_ADC3W_BIT (17)
#define INTERRUPT_ADC4W_BIT (18)
#define INTERRUPT_ADC7W_BIT (21)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END