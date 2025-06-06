/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
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
* @brief PIC32MZ2025DAH169 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

#include "mcu.h"

// Interrupt table
#define INTERRUPTS_CT (0)
#define INTERRUPTS_CS0 (1)
#define INTERRUPTS_CS1 (2)
#define INTERRUPTS_INT0 (3)
#define INTERRUPTS_T1 (4)
#define INTERRUPTS_IC1E (5)
#define INTERRUPTS_IC1 (6)
#define INTERRUPTS_OC1 (7)
#define INTERRUPTS_INT1 (8)
#define INTERRUPTS_T2 (9)
#define INTERRUPTS_IC2E (10)
#define INTERRUPTS_IC2 (11)
#define INTERRUPTS_OC2 (12)
#define INTERRUPTS_INT2 (13)
#define INTERRUPTS_T3 (14)
#define INTERRUPTS_IC3E (15)
#define INTERRUPTS_IC3 (16)
#define INTERRUPTS_OC3 (17)
#define INTERRUPTS_INT3 (18)
#define INTERRUPTS_T4 (19)
#define INTERRUPTS_IC4E (20)
#define INTERRUPTS_IC4 (21)
#define INTERRUPTS_OC4 (22)
#define INTERRUPTS_INT4 (23)
#define INTERRUPTS_T5 (24)
#define INTERRUPTS_IC5E (25)
#define INTERRUPTS_IC5 (26)
#define INTERRUPTS_OC5 (27)
#define INTERRUPTS_T6 (28)
#define INTERRUPTS_IC6E (29)
#define INTERRUPTS_IC6 (30)
#define INTERRUPTS_OC6 (31)
#define INTERRUPTS_T7 (32)
#define INTERRUPTS_IC7E (33)
#define INTERRUPTS_IC7 (34)
#define INTERRUPTS_OC7 (35)
#define INTERRUPTS_T8 (36)
#define INTERRUPTS_IC8E (37)
#define INTERRUPTS_IC8 (38)
#define INTERRUPTS_OC8 (39)
#define INTERRUPTS_T9 (40)
#define INTERRUPTS_IC9E (41)
#define INTERRUPTS_IC9 (42)
#define INTERRUPTS_OC9 (43)
#define INTERRUPTS_ADC (44)
#define INTERRUPTS_ADCFIFO (45)
#define INTERRUPTS_ADCDC1 (46)
#define INTERRUPTS_ADCDC2 (47)
#define INTERRUPTS_ADCDC3 (48)
#define INTERRUPTS_ADCDC4 (49)
#define INTERRUPTS_ADCDC5 (50)
#define INTERRUPTS_ADCDC6 (51)
#define INTERRUPTS_ADCDF1 (52)
#define INTERRUPTS_ADCDF2 (53)
#define INTERRUPTS_ADCDF3 (54)
#define INTERRUPTS_ADCDF4 (55)
#define INTERRUPTS_ADCDF5 (56)
#define INTERRUPTS_ADCDF6 (57)
#define INTERRUPTS_ADCFLT (58)
#define INTERRUPTS_ADCD0 (59)
#define INTERRUPTS_ADCD1 (60)
#define INTERRUPTS_ADCD2 (61)
#define INTERRUPTS_ADCD3 (62)
#define INTERRUPTS_ADCD4 (63)
#define INTERRUPTS_ADCD5 (64)
#define INTERRUPTS_ADCD6 (65)
#define INTERRUPTS_ADCD7 (66)
#define INTERRUPTS_ADCD8 (67)
#define INTERRUPTS_ADCD9 (68)
#define INTERRUPTS_ADCD10 (69)
#define INTERRUPTS_ADCD11 (70)
#define INTERRUPTS_ADCD12 (71)
#define INTERRUPTS_ADCD13 (72)
#define INTERRUPTS_ADCD14 (73)
#define INTERRUPTS_ADCD15 (74)
#define INTERRUPTS_ADCD16 (75)
#define INTERRUPTS_ADCD17 (76)
#define INTERRUPTS_ADCD18 (77)
#define INTERRUPTS_ADCD19 (78)
#define INTERRUPTS_ADCD20 (79)
#define INTERRUPTS_ADCD21 (80)
#define INTERRUPTS_ADCD22 (81)
#define INTERRUPTS_ADCD23 (82)
#define INTERRUPTS_ADCD24 (83)
#define INTERRUPTS_ADCD25 (84)
#define INTERRUPTS_ADCD26 (85)
#define INTERRUPTS_ADCD27 (86)
#define INTERRUPTS_ADCD28 (87)
#define INTERRUPTS_ADCD29 (88)
#define INTERRUPTS_ADCD30 (89)
#define INTERRUPTS_ADCD31 (90)
#define INTERRUPTS_ADCD32 (91)
#define INTERRUPTS_ADCD33 (92)
#define INTERRUPTS_ADCD34 (93)
#define INTERRUPTS_ADCD35 (94)
#define INTERRUPTS_ADCD36 (95)
#define INTERRUPTS_ADCD37 (96)
#define INTERRUPTS_ADCD38 (97)
#define INTERRUPTS_ADCD39 (98)
#define INTERRUPTS_ADCD40 (99)
#define INTERRUPTS_ADCD41 (100)
#define INTERRUPTS_ADCD42 (101)
#define INTERRUPTS_ADCD43 (102)
#define INTERRUPTS_USBSR (103)
#define INTERRUPTS_CPC (104)
#define INTERRUPTS_CFDC (105)
#define INTERRUPTS_SB (106)
#define INTERRUPTS_CRPT (107)
#define INTERRUPTS_SPI1E (108)
#define INTERRUPTS_SPI1RX (109)
#define INTERRUPTS_SPI1TX (110)
#define INTERRUPTS_U1E (111)
#define INTERRUPTS_U1RX (112)
#define INTERRUPTS_U1TX (113)
#define INTERRUPTS_I2C1B (114)
#define INTERRUPTS_I2C1S (115)
#define INTERRUPTS_I2C1M (116)
#define INTERRUPTS_CNA (117)
#define INTERRUPTS_CNB (118)
#define INTERRUPTS_CNC (119)
#define INTERRUPTS_CND (120)
#define INTERRUPTS_CNE (121)
#define INTERRUPTS_CNF (122)
#define INTERRUPTS_CNG (123)
#define INTERRUPTS_CNH (124)
#define INTERRUPTS_CNJ (125)
#define INTERRUPTS_CNK (126)
#define INTERRUPTS_PMP (127)
#define INTERRUPTS_PMPE (128)
#define INTERRUPTS_CMP1 (129)
#define INTERRUPTS_CMP2 (130)
#define INTERRUPTS_USB (131)
#define INTERRUPTS_USBDMA (132)
#define INTERRUPTS_DMA0 (133)
#define INTERRUPTS_DMA1 (134)
#define INTERRUPTS_DMA2 (135)
#define INTERRUPTS_DMA3 (136)
#define INTERRUPTS_DMA4 (137)
#define INTERRUPTS_DMA5 (138)
#define INTERRUPTS_DMA6 (139)
#define INTERRUPTS_DMA7 (140)
#define INTERRUPTS_SPI2E (141)
#define INTERRUPTS_SPI2RX (142)
#define INTERRUPTS_SPI2TX (143)
#define INTERRUPTS_U2E (144)
#define INTERRUPTS_U2RX (145)
#define INTERRUPTS_U2TX (146)
#define INTERRUPTS_I2C2B (147)
#define INTERRUPTS_I2C2S (148)
#define INTERRUPTS_I2C2M (149)
#define INTERRUPTS_CAN1 (150)
#define INTERRUPTS_CAN2 (151)
#define INTERRUPTS_ETH (152)
#define INTERRUPTS_SPI3E (153)
#define INTERRUPTS_SPI3RX (154)
#define INTERRUPTS_SPI3TX (155)
#define INTERRUPTS_U3E (156)
#define INTERRUPTS_U3RX (157)
#define INTERRUPTS_U3TX (158)
#define INTERRUPTS_I2C3B (159)
#define INTERRUPTS_I2C3S (160)
#define INTERRUPTS_I2C3M (161)
#define INTERRUPTS_SPI4E (162)
#define INTERRUPTS_SPI4RX (163)
#define INTERRUPTS_SPI4TX (164)
#define INTERRUPTS_RTCC (165)
#define INTERRUPTS_FCE (166)
#define INTERRUPTS_PRE (167)
#define INTERRUPTS_SQI1 (168)
#define INTERRUPTS_U4E (169)
#define INTERRUPTS_U4RX (170)
#define INTERRUPTS_U4TX (171)
#define INTERRUPTS_I2C4B (172)
#define INTERRUPTS_I2C4S (173)
#define INTERRUPTS_I2C4M (174)
#define INTERRUPTS_SPI5E (175)
#define INTERRUPTS_SPI5RX (176)
#define INTERRUPTS_SPI5TX (177)
#define INTERRUPTS_U5E (178)
#define INTERRUPTS_U5RX (179)
#define INTERRUPTS_U5TX (180)
#define INTERRUPTS_I2C5B (181)
#define INTERRUPTS_I2C5S (182)
#define INTERRUPTS_I2C5M (183)
#define INTERRUPTS_SPI6 (184)
#define INTERRUPTS_SPI6RX (185)
#define INTERRUPTS_SPI6TX (186)
#define INTERRUPTS_U6E (187)
#define INTERRUPTS_U6RX (188)
#define INTERRUPTS_U6TX (189)
#define INTERRUPTS_SDHC (190)
#define INTERRUPTS_GLCD (191)
#define INTERRUPTS_GPU (192)
#define INTERRUPTS_CTMU (193)
#define INTERRUPTS_ADCEOS (194)
#define INTERRUPTS_ADCARDY (195)
#define INTERRUPTS_ADCURDY (196)
#define INTERRUPTS_ADC0E (197)
#define INTERRUPTS_ADC1E (198)
#define INTERRUPTS_ADC2E (199)
#define INTERRUPTS_ADC3E (200)
#define INTERRUPTS_ADC4E (201)
#define INTERRUPTS_ADCGRP (202)
#define INTERRUPTS_ADC7E (203)
#define INTERRUPTS_ADC0W (204)
#define INTERRUPTS_ADC1W (205)
#define INTERRUPTS_ADC2W (206)
#define INTERRUPTS_ADC3W (207)
#define INTERRUPTS_ADC4W (208)
#define INTERRUPTS_ADC7W (209)
#define INTERRUPTS_MPLLFLT (210)


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
#define INTERRUPT_ADCD35_REGISTER (IEC2)
#define INTERRUPT_ADCD36_REGISTER (IEC2)
#define INTERRUPT_ADCD37_REGISTER (IEC3)
#define INTERRUPT_ADCD38_REGISTER (IEC3)
#define INTERRUPT_ADCD39_REGISTER (IEC3)
#define INTERRUPT_ADCD40_REGISTER (IEC3)
#define INTERRUPT_ADCD41_REGISTER (IEC3)
#define INTERRUPT_ADCD42_REGISTER (IEC3)
#define INTERRUPT_ADCD43_REGISTER (IEC3)
#define INTERRUPT_USBSR_REGISTER (IEC3)
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
#define INTERRUPT_CNH_REGISTER (IEC3)
#define INTERRUPT_CNJ_REGISTER (IEC3)
#define INTERRUPT_CNK_REGISTER (IEC3)
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
#define INTERRUPT_SDHC_REGISTER (IEC5)
#define INTERRUPT_GLCD_REGISTER (IEC6)
#define INTERRUPT_GPU_REGISTER (IEC6)
#define INTERRUPT_CTMU_REGISTER (IEC6)
#define INTERRUPT_ADCEOS_REGISTER (IEC6)
#define INTERRUPT_ADCARDY_REGISTER (IEC6)
#define INTERRUPT_ADCURDY_REGISTER (IEC6)
#define INTERRUPT_ADC0E_REGISTER (IEC6)
#define INTERRUPT_ADC1E_REGISTER (IEC6)
#define INTERRUPT_ADC2E_REGISTER (IEC6)
#define INTERRUPT_ADC3E_REGISTER (IEC6)
#define INTERRUPT_ADC4E_REGISTER (IEC6)
#define INTERRUPT_ADCGRP_REGISTER (IEC6)
#define INTERRUPT_ADC7E_REGISTER (IEC6)
#define INTERRUPT_ADC0W_REGISTER (IEC6)
#define INTERRUPT_ADC1W_REGISTER (IEC6)
#define INTERRUPT_ADC2W_REGISTER (IEC6)
#define INTERRUPT_ADC3W_REGISTER (IEC6)
#define INTERRUPT_ADC4W_REGISTER (IEC6)
#define INTERRUPT_ADC7W_REGISTER (IEC6)
#define INTERRUPT_MPLLFLT_REGISTER (IEC6)

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
#define INTERRUPT_ADCD35_BIT (30)
#define INTERRUPT_ADCD36_BIT (31)
#define INTERRUPT_ADCD37_BIT (0)
#define INTERRUPT_ADCD38_BIT (1)
#define INTERRUPT_ADCD39_BIT (2)
#define INTERRUPT_ADCD40_BIT (3)
#define INTERRUPT_ADCD41_BIT (4)
#define INTERRUPT_ADCD42_BIT (5)
#define INTERRUPT_ADCD43_BIT (6)
#define INTERRUPT_USBSR_BIT (7)
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
#define INTERRUPT_CNH_BIT (29)
#define INTERRUPT_CNJ_BIT (30)
#define INTERRUPT_CNK_BIT (31)
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
#define INTERRUPT_SDHC_BIT (31)
#define INTERRUPT_GLCD_BIT (0)
#define INTERRUPT_GPU_BIT (1)
#define INTERRUPT_CTMU_BIT (3)
#define INTERRUPT_ADCEOS_BIT (4)
#define INTERRUPT_ADCARDY_BIT (5)
#define INTERRUPT_ADCURDY_BIT (6)
#define INTERRUPT_ADC0E_BIT (7)
#define INTERRUPT_ADC1E_BIT (8)
#define INTERRUPT_ADC2E_BIT (9)
#define INTERRUPT_ADC3E_BIT (10)
#define INTERRUPT_ADC4E_BIT (11)
#define INTERRUPT_ADCGRP_BIT (13)
#define INTERRUPT_ADC7E_BIT (14)
#define INTERRUPT_ADC0W_BIT (15)
#define INTERRUPT_ADC1W_BIT (16)
#define INTERRUPT_ADC2W_BIT (17)
#define INTERRUPT_ADC3W_BIT (18)
#define INTERRUPT_ADC4W_BIT (19)
#define INTERRUPT_ADC7W_BIT (22)
#define INTERRUPT_MPLLFLT_BIT (23)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
