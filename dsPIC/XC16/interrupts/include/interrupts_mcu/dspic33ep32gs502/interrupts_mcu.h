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
* @brief dspic33ep32gs502 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_
#include "mcu.h"

// Interrupt table
#define INTERRUPTS_INT0 (0)
#define INTERRUPTS_IC1 (1)
#define INTERRUPTS_OC1 (2)
#define INTERRUPTS_T1 (3)
#define INTERRUPTS_IC2 (4)
#define INTERRUPTS_OC2 (5)
#define INTERRUPTS_T2 (6)
#define INTERRUPTS_T3 (7)
#define INTERRUPTS_SPI1E (8)
#define INTERRUPTS_SPI1 (9)
#define INTERRUPTS_U1RX (10)
#define INTERRUPTS_U1TX (11)
#define INTERRUPTS_ADC (12)
#define INTERRUPTS_NVM (13)
#define INTERRUPTS_SI2C1 (14)
#define INTERRUPTS_MI2C1 (15)
#define INTERRUPTS_AC1 (16)
#define INTERRUPTS_CN (17)
#define INTERRUPTS_INT1 (18)
#define INTERRUPTS_OC3 (19)
#define INTERRUPTS_OC4 (20)
#define INTERRUPTS_T4 (21)
#define INTERRUPTS_T5 (22)
#define INTERRUPTS_INT2 (23)
#define INTERRUPTS_U2RX (24)
#define INTERRUPTS_U2TX (25)
#define INTERRUPTS_SPI2E (26)
#define INTERRUPTS_SPI2 (27)
#define INTERRUPTS_IC3 (28)
#define INTERRUPTS_IC4 (29)
#define INTERRUPTS_SI2C2 (30)
#define INTERRUPTS_MI2C2 (31)
#define INTERRUPTS_INT4 (32)
#define INTERRUPTS_PSEM (33)
#define INTERRUPTS_U1E (34)
#define INTERRUPTS_U2E (35)
#define INTERRUPTS_PSES (36)
#define INTERRUPTS_PWM1 (37)
#define INTERRUPTS_PWM2 (38)
#define INTERRUPTS_PWM3 (39)
#define INTERRUPTS_PWM4 (40)
#define INTERRUPTS_PWM5 (41)
#define INTERRUPTS_AC2 (42)
#define INTERRUPTS_AC3 (43)
#define INTERRUPTS_AC4 (44)
#define INTERRUPTS_ADCAN0 (45)
#define INTERRUPTS_ADCAN1 (46)
#define INTERRUPTS_ADCAN2 (47)
#define INTERRUPTS_ADCAN3 (48)
#define INTERRUPTS_ADCAN4 (49)
#define INTERRUPTS_ADCAN5 (50)
#define INTERRUPTS_ADCAN6 (51)
#define INTERRUPTS_ADCAN7 (52)
#define INTERRUPTS_JTAG (53)
#define INTERRUPTS_ADCAN18 (54)
#define INTERRUPTS_ADCAN19 (55)
#define INTERRUPTS_ADCAN20 (56)
#define INTERRUPTS_ADCAN21 (57)
#define INTERRUPTS_I2C1BC (58)
#define INTERRUPTS_I2C2BC (59)
#define INTERRUPTS_ADCMP0 (60)
#define INTERRUPTS_ADCMP1 (61)
#define INTERRUPTS_ADFLTR0 (62)
#define INTERRUPTS_ADFLTR1 (63)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_INT0_REGISTER (IEC0)
#define INTERRUPT_IC1_REGISTER (IEC0)
#define INTERRUPT_OC1_REGISTER (IEC0)
#define INTERRUPT_T1_REGISTER (IEC0)
#define INTERRUPT_IC2_REGISTER (IEC0)
#define INTERRUPT_OC2_REGISTER (IEC0)
#define INTERRUPT_T2_REGISTER (IEC0)
#define INTERRUPT_T3_REGISTER (IEC0)
#define INTERRUPT_SPI1E_REGISTER (IEC0)
#define INTERRUPT_SPI1_REGISTER (IEC0)
#define INTERRUPT_U1RX_REGISTER (IEC0)
#define INTERRUPT_U1TX_REGISTER (IEC0)
#define INTERRUPT_ADC_REGISTER (IEC0)
#define INTERRUPT_NVM_REGISTER (IEC0)
#define INTERRUPT_SI2C1_REGISTER (IEC1)
#define INTERRUPT_MI2C1_REGISTER (IEC1)
#define INTERRUPT_AC1_REGISTER (IEC1)
#define INTERRUPT_CN_REGISTER (IEC1)
#define INTERRUPT_INT1_REGISTER (IEC1)
#define INTERRUPT_OC3_REGISTER (IEC1)
#define INTERRUPT_OC4_REGISTER (IEC1)
#define INTERRUPT_T4_REGISTER (IEC1)
#define INTERRUPT_T5_REGISTER (IEC1)
#define INTERRUPT_INT2_REGISTER (IEC1)
#define INTERRUPT_U2RX_REGISTER (IEC1)
#define INTERRUPT_U2TX_REGISTER (IEC1)
#define INTERRUPT_SPI2E_REGISTER (IEC2)
#define INTERRUPT_SPI2_REGISTER (IEC2)
#define INTERRUPT_IC3_REGISTER (IEC2)
#define INTERRUPT_IC4_REGISTER (IEC2)
#define INTERRUPT_SI2C2_REGISTER (IEC3)
#define INTERRUPT_MI2C2_REGISTER (IEC3)
#define INTERRUPT_INT4_REGISTER (IEC3)
#define INTERRUPT_PSEM_REGISTER (IEC3)
#define INTERRUPT_U1E_REGISTER (IEC4)
#define INTERRUPT_U2E_REGISTER (IEC4)
#define INTERRUPT_PSES_REGISTER (IEC4)
#define INTERRUPT_PWM1_REGISTER (IEC5)
#define INTERRUPT_PWM2_REGISTER (IEC5)
#define INTERRUPT_PWM3_REGISTER (IEC6)
#define INTERRUPT_PWM4_REGISTER (IEC6)
#define INTERRUPT_PWM5_REGISTER (IEC6)
#define INTERRUPT_AC2_REGISTER (IEC6)
#define INTERRUPT_AC3_REGISTER (IEC6)
#define INTERRUPT_AC4_REGISTER (IEC6)
#define INTERRUPT_ADCAN0_REGISTER (IEC6)
#define INTERRUPT_ADCAN1_REGISTER (IEC6)
#define INTERRUPT_ADCAN2_REGISTER (IEC7)
#define INTERRUPT_ADCAN3_REGISTER (IEC7)
#define INTERRUPT_ADCAN4_REGISTER (IEC7)
#define INTERRUPT_ADCAN5_REGISTER (IEC7)
#define INTERRUPT_ADCAN6_REGISTER (IEC7)
#define INTERRUPT_ADCAN7_REGISTER (IEC7)
#define INTERRUPT_JTAG_REGISTER (IEC8)
#define INTERRUPT_ADCAN18_REGISTER (IEC10)
#define INTERRUPT_ADCAN19_REGISTER (IEC10)
#define INTERRUPT_ADCAN20_REGISTER (IEC10)
#define INTERRUPT_ADCAN21_REGISTER (IEC10)
#define INTERRUPT_I2C1BC_REGISTER (IEC10)
#define INTERRUPT_I2C2BC_REGISTER (IEC10)
#define INTERRUPT_ADCMP0_REGISTER (IEC11)
#define INTERRUPT_ADCMP1_REGISTER (IEC11)
#define INTERRUPT_ADFLTR0_REGISTER (IEC11)
#define INTERRUPT_ADFLTR1_REGISTER (IEC11)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_INT0_BIT (0)
#define INTERRUPT_IC1_BIT (1)
#define INTERRUPT_OC1_BIT (2)
#define INTERRUPT_T1_BIT (3)
#define INTERRUPT_IC2_BIT (5)
#define INTERRUPT_OC2_BIT (6)
#define INTERRUPT_T2_BIT (7)
#define INTERRUPT_T3_BIT (8)
#define INTERRUPT_SPI1E_BIT (9)
#define INTERRUPT_SPI1_BIT (10)
#define INTERRUPT_U1RX_BIT (11)
#define INTERRUPT_U1TX_BIT (12)
#define INTERRUPT_ADC_BIT (13)
#define INTERRUPT_NVM_BIT (15)
#define INTERRUPT_SI2C1_BIT (0)
#define INTERRUPT_MI2C1_BIT (1)
#define INTERRUPT_AC1_BIT (2)
#define INTERRUPT_CN_BIT (3)
#define INTERRUPT_INT1_BIT (4)
#define INTERRUPT_OC3_BIT (9)
#define INTERRUPT_OC4_BIT (10)
#define INTERRUPT_T4_BIT (11)
#define INTERRUPT_T5_BIT (12)
#define INTERRUPT_INT2_BIT (13)
#define INTERRUPT_U2RX_BIT (14)
#define INTERRUPT_U2TX_BIT (15)
#define INTERRUPT_SPI2E_BIT (0)
#define INTERRUPT_SPI2_BIT (1)
#define INTERRUPT_IC3_BIT (5)
#define INTERRUPT_IC4_BIT (6)
#define INTERRUPT_SI2C2_BIT (1)
#define INTERRUPT_MI2C2_BIT (2)
#define INTERRUPT_INT4_BIT (6)
#define INTERRUPT_PSEM_BIT (9)
#define INTERRUPT_U1E_BIT (1)
#define INTERRUPT_U2E_BIT (2)
#define INTERRUPT_PSES_BIT (9)
#define INTERRUPT_PWM1_BIT (14)
#define INTERRUPT_PWM2_BIT (15)
#define INTERRUPT_PWM3_BIT (0)
#define INTERRUPT_PWM4_BIT (1)
#define INTERRUPT_PWM5_BIT (2)
#define INTERRUPT_AC2_BIT (7)
#define INTERRUPT_AC3_BIT (8)
#define INTERRUPT_AC4_BIT (9)
#define INTERRUPT_ADCAN0_BIT (14)
#define INTERRUPT_ADCAN1_BIT (15)
#define INTERRUPT_ADCAN2_BIT (0)
#define INTERRUPT_ADCAN3_BIT (1)
#define INTERRUPT_ADCAN4_BIT (2)
#define INTERRUPT_ADCAN5_BIT (3)
#define INTERRUPT_ADCAN6_BIT (4)
#define INTERRUPT_ADCAN7_BIT (5)
#define INTERRUPT_JTAG_BIT (15)
#define INTERRUPT_ADCAN18_BIT (1)
#define INTERRUPT_ADCAN19_BIT (2)
#define INTERRUPT_ADCAN20_BIT (3)
#define INTERRUPT_ADCAN21_BIT (4)
#define INTERRUPT_I2C1BC_BIT (13)
#define INTERRUPT_I2C2BC_BIT (14)
#define INTERRUPT_ADCMP0_BIT (1)
#define INTERRUPT_ADCMP1_BIT (2)
#define INTERRUPT_ADFLTR0_BIT (3)
#define INTERRUPT_ADFLTR1_BIT (4)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
