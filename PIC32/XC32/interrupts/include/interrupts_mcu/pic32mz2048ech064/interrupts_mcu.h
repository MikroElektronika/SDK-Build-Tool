/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
* @brief pic32mz2048ech064 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

#include "mcu.h"

// Interrupt table
#define  INTERRUPTS_CT (0)
#define  INTERRUPTS_CS0 (1)
#define  INTERRUPTS_CS1 (2)
#define  INTERRUPTS_INT0 (3)
#define  INTERRUPTS_T1 (4)
#define  INTERRUPTS_IC1E (5)
#define  INTERRUPTS_IC1 (6)
#define  INTERRUPTS_OC1 (7)
#define  INTERRUPTS_INT1 (8)
#define  INTERRUPTS_T2 (9)
#define  INTERRUPTS_IC2E (10)
#define  INTERRUPTS_IC2 (11)
#define  INTERRUPTS_OC2 (12)
#define  INTERRUPTS_INT2 (13)
#define  INTERRUPTS_T3 (14)
#define  INTERRUPTS_IC3E (15)
#define  INTERRUPTS_IC3 (16)
#define  INTERRUPTS_OC3 (17)
#define  INTERRUPTS_INT3 (18)
#define  INTERRUPTS_T4 (19)
#define  INTERRUPTS_IC4E (20)
#define  INTERRUPTS_IC4 (21)
#define  INTERRUPTS_OC4 (22)
#define  INTERRUPTS_INT4 (23)
#define  INTERRUPTS_T5 (24)
#define  INTERRUPTS_IC5E (25)
#define  INTERRUPTS_IC5 (26)
#define  INTERRUPTS_OC5 (27)
#define  INTERRUPTS_T6 (28)
#define  INTERRUPTS_IC6E (29)
#define  INTERRUPTS_IC6 (30)
#define  INTERRUPTS_OC6 (31)
#define  INTERRUPTS_T7 (32)
#define  INTERRUPTS_IC7E (33)
#define  INTERRUPTS_IC7 (34)
#define  INTERRUPTS_OC7 (35)
#define  INTERRUPTS_T8 (36)
#define  INTERRUPTS_IC8E (37)
#define  INTERRUPTS_IC8 (38)
#define  INTERRUPTS_OC8 (39)
#define  INTERRUPTS_T9 (40)
#define  INTERRUPTS_IC9E (41)
#define  INTERRUPTS_IC9 (42)
#define  INTERRUPTS_OC9 (43)
#define  INTERRUPTS_AD1 (44)
#define  INTERRUPTS_AD1DC1 (45)
#define  INTERRUPTS_AD1DC2 (46)
#define  INTERRUPTS_AD1DC3 (47)
#define  INTERRUPTS_AD1DC4 (48)
#define  INTERRUPTS_AD1DC5 (49)
#define  INTERRUPTS_AD1DC6 (50)
#define  INTERRUPTS_AD1DF1 (51)
#define  INTERRUPTS_AD1DF2 (52)
#define  INTERRUPTS_AD1DF3 (53)
#define  INTERRUPTS_AD1DF4 (54)
#define  INTERRUPTS_AD1DF5 (55)
#define  INTERRUPTS_AD1DF6 (56)
#define  INTERRUPTS_AD1D0 (57)
#define  INTERRUPTS_AD1D1 (58)
#define  INTERRUPTS_AD1D2 (59)
#define  INTERRUPTS_AD1D3 (60)
#define  INTERRUPTS_AD1D4 (61)
#define  INTERRUPTS_AD1D5 (62)
#define  INTERRUPTS_AD1D6 (63)
#define  INTERRUPTS_AD1D7 (64)
#define  INTERRUPTS_AD1D8 (65)
#define  INTERRUPTS_AD1D9 (66)
#define  INTERRUPTS_AD1D10 (67)
#define  INTERRUPTS_AD1D11 (68)
#define  INTERRUPTS_AD1D12 (69)
#define  INTERRUPTS_AD1D13 (70)
#define  INTERRUPTS_AD1D14 (71)
#define  INTERRUPTS_AD1D15 (72)
#define  INTERRUPTS_AD1D16 (73)
#define  INTERRUPTS_AD1D17 (74)
#define  INTERRUPTS_AD1D18 (75)
#define  INTERRUPTS_AD1D43 (76)
#define  INTERRUPTS_AD1D44 (77)
#define  INTERRUPTS_CPC (78)
#define  INTERRUPTS_CFDC (79)
#define  INTERRUPTS_SB (80)
#define  INTERRUPTS_SPI1E (81)
#define  INTERRUPTS_SPI1RX (82)
#define  INTERRUPTS_SPI1TX (83)
#define  INTERRUPTS_U1E (84)
#define  INTERRUPTS_U1RX (85)
#define  INTERRUPTS_U1TX (86)
#define  INTERRUPTS_I2C1B (87)
#define  INTERRUPTS_I2C1S (88)
#define  INTERRUPTS_I2C1M (89)
#define  INTERRUPTS_CNB (90)
#define  INTERRUPTS_CNC (91)
#define  INTERRUPTS_CND (92)
#define  INTERRUPTS_CNE (93)
#define  INTERRUPTS_CNF (94)
#define  INTERRUPTS_CNG (95)
#define  INTERRUPTS_PMP (96)
#define  INTERRUPTS_PMPE (97)
#define  INTERRUPTS_CMP1 (98)
#define  INTERRUPTS_CMP2 (99)
#define  INTERRUPTS_USB (100)
#define  INTERRUPTS_USBDMA (101)
#define  INTERRUPTS_DMA0 (102)
#define  INTERRUPTS_DMA1 (103)
#define  INTERRUPTS_DMA2 (104)
#define  INTERRUPTS_DMA3 (105)
#define  INTERRUPTS_DMA4 (106)
#define  INTERRUPTS_DMA5 (107)
#define  INTERRUPTS_DMA6 (108)
#define  INTERRUPTS_DMA7 (109)
#define  INTERRUPTS_SPI2E (110)
#define  INTERRUPTS_SPI2RX (111)
#define  INTERRUPTS_SPI2TX (112)
#define  INTERRUPTS_U2E (113)
#define  INTERRUPTS_U2RX (114)
#define  INTERRUPTS_U2TX (115)
#define  INTERRUPTS_CAN1 (116)
#define  INTERRUPTS_CAN2 (117)
#define  INTERRUPTS_ETH (118)
#define  INTERRUPTS_SPI3E (119)
#define  INTERRUPTS_SPI3RX (120)
#define  INTERRUPTS_SPI3TX (121)
#define  INTERRUPTS_U3E (122)
#define  INTERRUPTS_U3RX (123)
#define  INTERRUPTS_U3TX (124)
#define  INTERRUPTS_I2C3B (125)
#define  INTERRUPTS_I2C3S (126)
#define  INTERRUPTS_I2C3M (127)
#define  INTERRUPTS_SPI4E (128)
#define  INTERRUPTS_SPI4RX (129)
#define  INTERRUPTS_SPI4TX (130)
#define  INTERRUPTS_RTCC (131)
#define  INTERRUPTS_FCE (132)
#define  INTERRUPTS_PRE (133)
#define  INTERRUPTS_SQI1 (134)
#define  INTERRUPTS_U4E (135)
#define  INTERRUPTS_U4RX (136)
#define  INTERRUPTS_U4TX (137)
#define  INTERRUPTS_I2C4B (138)
#define  INTERRUPTS_I2C4S (139)
#define  INTERRUPTS_I2C4M (140)
#define  INTERRUPTS_U5E (141)
#define  INTERRUPTS_U5RX (142)
#define  INTERRUPTS_U5TX (143)
#define  INTERRUPTS_I2C5B (144)
#define  INTERRUPTS_I2C5S (145)
#define  INTERRUPTS_I2C5M (146)
#define  INTERRUPTS_U6E (147)
#define  INTERRUPTS_U6RX (148)
#define  INTERRUPTS_U6TX (149)
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
#define INTERRUPT_AD1_REGISTER (IEC1)
#define INTERRUPT_AD1DC1_REGISTER (IEC1)
#define INTERRUPT_AD1DC2_REGISTER (IEC1)
#define INTERRUPT_AD1DC3_REGISTER (IEC1)
#define INTERRUPT_AD1DC4_REGISTER (IEC1)
#define INTERRUPT_AD1DC5_REGISTER (IEC1)
#define INTERRUPT_AD1DC6_REGISTER (IEC1)
#define INTERRUPT_AD1DF1_REGISTER (IEC1)
#define INTERRUPT_AD1DF2_REGISTER (IEC1)
#define INTERRUPT_AD1DF3_REGISTER (IEC1)
#define INTERRUPT_AD1DF4_REGISTER (IEC1)
#define INTERRUPT_AD1DF5_REGISTER (IEC1)
#define INTERRUPT_AD1DF6_REGISTER (IEC1)
#define INTERRUPT_AD1D0_REGISTER (IEC1)
#define INTERRUPT_AD1D1_REGISTER (IEC1)
#define INTERRUPT_AD1D2_REGISTER (IEC1)
#define INTERRUPT_AD1D3_REGISTER (IEC1)
#define INTERRUPT_AD1D4_REGISTER (IEC1)
#define INTERRUPT_AD1D5_REGISTER (IEC2)
#define INTERRUPT_AD1D6_REGISTER (IEC2)
#define INTERRUPT_AD1D7_REGISTER (IEC2)
#define INTERRUPT_AD1D8_REGISTER (IEC2)
#define INTERRUPT_AD1D9_REGISTER (IEC2)
#define INTERRUPT_AD1D10_REGISTER (IEC2)
#define INTERRUPT_AD1D11_REGISTER (IEC2)
#define INTERRUPT_AD1D12_REGISTER (IEC2)
#define INTERRUPT_AD1D13_REGISTER (IEC2)
#define INTERRUPT_AD1D14_REGISTER (IEC2)
#define INTERRUPT_AD1D15_REGISTER (IEC2)
#define INTERRUPT_AD1D16_REGISTER (IEC2)
#define INTERRUPT_AD1D17_REGISTER (IEC2)
#define INTERRUPT_AD1D18_REGISTER (IEC2)
#define INTERRUPT_AD1D43_REGISTER (IEC3)
#define INTERRUPT_AD1D44_REGISTER (IEC3)
#define INTERRUPT_CPC_REGISTER (IEC3)
#define INTERRUPT_CFDC_REGISTER (IEC3)
#define INTERRUPT_SB_REGISTER (IEC3)
#define INTERRUPT_SPI1E_REGISTER (IEC3)
#define INTERRUPT_SPI1RX_REGISTER (IEC3)
#define INTERRUPT_SPI1TX_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC3)
#define INTERRUPT_U1RX_REGISTER (IEC3)
#define INTERRUPT_U1TX_REGISTER (IEC3)
#define INTERRUPT_I2C1B_REGISTER (IEC3)
#define INTERRUPT_I2C1S_REGISTER (IEC3)
#define INTERRUPT_I2C1M_REGISTER (IEC3)
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
#define INTERRUPT_U5E_REGISTER (IEC5)
#define INTERRUPT_U5RX_REGISTER (IEC5)
#define INTERRUPT_U5TX_REGISTER (IEC5)
#define INTERRUPT_I2C5B_REGISTER (IEC5)
#define INTERRUPT_I2C5S_REGISTER (IEC5)
#define INTERRUPT_I2C5M_REGISTER (IEC5)
#define INTERRUPT_U6E_REGISTER (IEC5)
#define INTERRUPT_U6RX_REGISTER (IEC5)
#define INTERRUPT_U6TX_REGISTER (IEC5)
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
#define INTERRUPT_AD1_BIT (12)
#define INTERRUPT_AD1DC1_BIT (14)
#define INTERRUPT_AD1DC2_BIT (15)
#define INTERRUPT_AD1DC3_BIT (16)
#define INTERRUPT_AD1DC4_BIT (17)
#define INTERRUPT_AD1DC5_BIT (18)
#define INTERRUPT_AD1DC6_BIT (19)
#define INTERRUPT_AD1DF1_BIT (20)
#define INTERRUPT_AD1DF2_BIT (21)
#define INTERRUPT_AD1DF3_BIT (22)
#define INTERRUPT_AD1DF4_BIT (23)
#define INTERRUPT_AD1DF5_BIT (24)
#define INTERRUPT_AD1DF6_BIT (25)
#define INTERRUPT_AD1D0_BIT (27)
#define INTERRUPT_AD1D1_BIT (28)
#define INTERRUPT_AD1D2_BIT (29)
#define INTERRUPT_AD1D3_BIT (30)
#define INTERRUPT_AD1D4_BIT (31)
#define INTERRUPT_AD1D5_BIT (0)
#define INTERRUPT_AD1D6_BIT (1)
#define INTERRUPT_AD1D7_BIT (2)
#define INTERRUPT_AD1D8_BIT (3)
#define INTERRUPT_AD1D9_BIT (4)
#define INTERRUPT_AD1D10_BIT (5)
#define INTERRUPT_AD1D11_BIT (6)
#define INTERRUPT_AD1D12_BIT (7)
#define INTERRUPT_AD1D13_BIT (8)
#define INTERRUPT_AD1D14_BIT (9)
#define INTERRUPT_AD1D15_BIT (10)
#define INTERRUPT_AD1D16_BIT (11)
#define INTERRUPT_AD1D17_BIT (12)
#define INTERRUPT_AD1D18_BIT (13)
#define INTERRUPT_AD1D43_BIT (6)
#define INTERRUPT_AD1D44_BIT (7)
#define INTERRUPT_CPC_BIT (8)
#define INTERRUPT_CFDC_BIT (9)
#define INTERRUPT_SB_BIT (10)
#define INTERRUPT_SPI1E_BIT (13)
#define INTERRUPT_SPI1RX_BIT (14)
#define INTERRUPT_SPI1TX_BIT (15)
#define INTERRUPT_U1E_BIT (16)
#define INTERRUPT_U1RX_BIT (17)
#define INTERRUPT_U1TX_BIT (18)
#define INTERRUPT_I2C1B_BIT (19)
#define INTERRUPT_I2C1S_BIT (20)
#define INTERRUPT_I2C1M_BIT (21)
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
#define INTERRUPT_U5E_BIT (19)
#define INTERRUPT_U5RX_BIT (20)
#define INTERRUPT_U5TX_BIT (21)
#define INTERRUPT_I2C5B_BIT (22)
#define INTERRUPT_I2C5S_BIT (23)
#define INTERRUPT_I2C5M_BIT (24)
#define INTERRUPT_U6E_BIT (28)
#define INTERRUPT_U6RX_BIT (29)
#define INTERRUPT_U6TX_BIT (30)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END