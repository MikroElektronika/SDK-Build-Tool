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
* @brief pic32mx440f256h MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_I2C1M = 0;
static const int INTERRUPTS_I2C1S = 1;
static const int INTERRUPTS_I2C1B = 2;
static const int INTERRUPTS_U1TX = 3;
static const int INTERRUPTS_U1RX = 4;
static const int INTERRUPTS_U1E = 5;
static const int INTERRUPTS_OC5 = 6;
static const int INTERRUPTS_IC5 = 7;
static const int INTERRUPTS_T5 = 8;
static const int INTERRUPTS_INT4 = 9;
static const int INTERRUPTS_OC4 = 10;
static const int INTERRUPTS_IC4 = 11;
static const int INTERRUPTS_T4 = 12;
static const int INTERRUPTS_INT3 = 13;
static const int INTERRUPTS_OC3 = 14;
static const int INTERRUPTS_IC3 = 15;
static const int INTERRUPTS_T3 = 16;
static const int INTERRUPTS_INT2 = 17;
static const int INTERRUPTS_OC2 = 18;
static const int INTERRUPTS_IC2 = 19;
static const int INTERRUPTS_T2 = 20;
static const int INTERRUPTS_INT1 = 21;
static const int INTERRUPTS_OC1 = 22;
static const int INTERRUPTS_IC1 = 23;
static const int INTERRUPTS_T1 = 24;
static const int INTERRUPTS_INT0 = 25;
static const int INTERRUPTS_CS1 = 26;
static const int INTERRUPTS_CS0 = 27;
static const int INTERRUPTS_CT = 28;
static const int INTERRUPTS_USB = 29;
static const int INTERRUPTS_FCE = 30;
static const int INTERRUPTS_DMA3 = 31;
static const int INTERRUPTS_DMA2 = 32;
static const int INTERRUPTS_DMA1 = 33;
static const int INTERRUPTS_DMA0 = 34;
static const int INTERRUPTS_RTCC = 35;
static const int INTERRUPTS_FSCM = 36;
static const int INTERRUPTS_I2C2M = 37;
static const int INTERRUPTS_I2C2S = 38;
static const int INTERRUPTS_I2C2B = 39;
static const int INTERRUPTS_U2TX = 40;
static const int INTERRUPTS_U2RX = 41;
static const int INTERRUPTS_U2E = 42;
static const int INTERRUPTS_SPI2RX = 43;
static const int INTERRUPTS_SPI2TX = 44;
static const int INTERRUPTS_SPI2E = 45;
static const int INTERRUPTS_CMP2 = 46;
static const int INTERRUPTS_CMP1 = 47;
static const int INTERRUPTS_PMP = 48;
static const int INTERRUPTS_AD1 = 49;
static const int INTERRUPTS_CN = 50;
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_I2C1M_REGISTER (IEC0)
#define INTERRUPT_I2C1S_REGISTER (IEC0)
#define INTERRUPT_I2C1B_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_U1E_REGISTER (IEC0)
#define INTERRUPT_OC5_REGISTER (IEC0)
#define INTERRUPT_IC5_REGISTER (IEC0)
#define INTERRUPT_T5_REGISTER (IEC0)
#define INTERRUPT_INT4_REGISTER (IEC0)
#define INTERRUPT_OC4_REGISTER (IEC0)
#define INTERRUPT_IC4_REGISTER (IEC0)
#define INTERRUPT_T4_REGISTER (IEC0)
#define INTERRUPT_INT3_REGISTER (IEC0)
#define INTERRUPT_OC3_REGISTER (IEC0)
#define INTERRUPT_IC3_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_INT2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_INT1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_CS1_REGISTER (IEC0)
#define INTERRUPT_CS0_REGISTER (IEC0)
#define INTERRUPT_CT_REGISTER (IEC0)
#define INTERRUPT_USB_REGISTER (IEC1)
#define INTERRUPT_FCE_REGISTER (IEC1)
#define INTERRUPT_DMA3_REGISTER (IEC1)
#define INTERRUPT_DMA2_REGISTER (IEC1)
#define INTERRUPT_DMA1_REGISTER (IEC1)
#define INTERRUPT_DMA0_REGISTER (IEC1)
#define INTERRUPT_RTCC_REGISTER (IEC1)
#define INTERRUPT_FSCM_REGISTER (IEC1)
#define INTERRUPT_I2C2M_REGISTER (IEC1)
#define INTERRUPT_I2C2S_REGISTER (IEC1)
#define INTERRUPT_I2C2B_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_U2E_REGISTER (IEC1)
#define INTERRUPT_SPI2RX_REGISTER (IEC1)
#define INTERRUPT_SPI2TX_REGISTER (IEC1)
#define INTERRUPT_SPI2E_REGISTER (IEC1)
#define INTERRUPT_CMP2_REGISTER (IEC1)
#define INTERRUPT_CMP1_REGISTER (IEC1)
#define INTERRUPT_PMP_REGISTER (IEC1)
#define INTERRUPT_AD1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_I2C1M_BIT (31)
#define INTERRUPT_I2C1S_BIT (30)
#define INTERRUPT_I2C1B_BIT (29)
#define INTERRUPT_U1TX_BIT (28)
#define INTERRUPT_U1RX_BIT (27)
#define INTERRUPT_U1E_BIT (26)
#define INTERRUPT_OC5_BIT (22)
#define INTERRUPT_IC5_BIT (21)
#define INTERRUPT_T5_BIT (20)
#define INTERRUPT_INT4_BIT (19)
#define INTERRUPT_OC4_BIT (18)
#define INTERRUPT_IC4_BIT (17)
#define INTERRUPT_T4_BIT (16)
#define INTERRUPT_INT3_BIT (15)
#define INTERRUPT_OC3_BIT (14)
#define INTERRUPT_IC3_BIT (13)
#define INTERRUPT_T3_BIT (12)
#define INTERRUPT_INT2_BIT (11)
#define INTERRUPT_OC2_BIT (10)
#define INTERRUPT_IC2_BIT (9)
#define INTERRUPT_T2_BIT (8)
#define INTERRUPT_INT1_BIT (7)
#define INTERRUPT_OC1_BIT (6)
#define INTERRUPT_IC1_BIT (5)
#define INTERRUPT_T1_BIT (4)
#define INTERRUPT_INT0_BIT (3)
#define INTERRUPT_CS1_BIT (2)
#define INTERRUPT_CS0_BIT (1)
#define INTERRUPT_CT_BIT (0)
#define INTERRUPT_USB_BIT (25)
#define INTERRUPT_FCE_BIT (24)
#define INTERRUPT_DMA3_BIT (19)
#define INTERRUPT_DMA2_BIT (18)
#define INTERRUPT_DMA1_BIT (17)
#define INTERRUPT_DMA0_BIT (16)
#define INTERRUPT_RTCC_BIT (15)
#define INTERRUPT_FSCM_BIT (14)
#define INTERRUPT_I2C2M_BIT (13)
#define INTERRUPT_I2C2S_BIT (12)
#define INTERRUPT_I2C2B_BIT (11)
#define INTERRUPT_U2TX_BIT (10)
#define INTERRUPT_U2RX_BIT (9)
#define INTERRUPT_U2E_BIT (8)
#define INTERRUPT_SPI2RX_BIT (7)
#define INTERRUPT_SPI2TX_BIT (6)
#define INTERRUPT_SPI2E_BIT (5)
#define INTERRUPT_CMP2_BIT (4)
#define INTERRUPT_CMP1_BIT (3)
#define INTERRUPT_PMP_BIT (2)
#define INTERRUPT_AD1_BIT (1)
#define INTERRUPT_CN_BIT (0)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
