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
* @brief pic16lf18856 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
#define INTERRUPTS_IN (0)
#define INTERRUPTS_IOC (1)
#define INTERRUPTS_TMR0 (2)
#define INTERRUPTS_AD (3)
#define INTERRUPTS_ADT (4)
#define INTERRUPTS_CSW (5)
#define INTERRUPTS_OSF (6)
#define INTERRUPTS_C1 (7)
#define INTERRUPTS_C2 (8)
#define INTERRUPTS_ZCD (9)
#define INTERRUPTS_SSP1 (10)
#define INTERRUPTS_BCL1 (11)
#define INTERRUPTS_SSP2 (12)
#define INTERRUPTS_BCL2 (13)
#define INTERRUPTS_TX (14)
#define INTERRUPTS_RC (15)
#define INTERRUPTS_TMR1 (16)
#define INTERRUPTS_TMR2 (17)
#define INTERRUPTS_TMR3 (18)
#define INTERRUPTS_TMR4 (19)
#define INTERRUPTS_TMR5 (20)
#define INTERRUPTS_TMR6 (21)
#define INTERRUPTS_TMR1G (22)
#define INTERRUPTS_TMR3G (23)
#define INTERRUPTS_TMR5G (24)
#define INTERRUPTS_CLC1 (25)
#define INTERRUPTS_CLC2 (26)
#define INTERRUPTS_CLC3 (27)
#define INTERRUPTS_CLC4 (28)
#define INTERRUPTS_CCP1 (29)
#define INTERRUPTS_CCP2 (30)
#define INTERRUPTS_CCP3 (31)
#define INTERRUPTS_CCP4 (32)
#define INTERRUPTS_CCP5 (33)
#define INTERRUPTS_CWG1 (34)
#define INTERRUPTS_CWG2 (35)
#define INTERRUPTS_CWG3 (36)
#define INTERRUPTS_NCO1 (37)
#define INTERRUPTS_NVM (38)
#define INTERRUPTS_CRC (39)
#define INTERRUPTS_SCAN (40)
#define INTERRUPTS_NCO (41)
#define INTERRUPTS_SMT1 (42)
#define INTERRUPTS_SMT1PRA (43)
#define INTERRUPTS_SMT1PWA (44)
#define INTERRUPTS_SMT2 (45)
#define INTERRUPTS_SMT2PRA (46)
#define INTERRUPTS_SMT2PWA (47)
// EOF Interrupt table

// Interrupt addresses
#define INTERRUPT_IN_REGISTER (PIE0)
#define INTERRUPT_IOC_REGISTER (PIE0)
#define INTERRUPT_TMR0_REGISTER (PIE0)
#define INTERRUPT_AD_REGISTER (PIE1)
#define INTERRUPT_ADT_REGISTER (PIE1)
#define INTERRUPT_CSW_REGISTER (PIE1)
#define INTERRUPT_OSF_REGISTER (PIE1)
#define INTERRUPT_C1_REGISTER (PIE2)
#define INTERRUPT_C2_REGISTER (PIE2)
#define INTERRUPT_ZCD_REGISTER (PIE2)
#define INTERRUPT_SSP1_REGISTER (PIE3)
#define INTERRUPT_BCL1_REGISTER (PIE3)
#define INTERRUPT_SSP2_REGISTER (PIE3)
#define INTERRUPT_BCL2_REGISTER (PIE3)
#define INTERRUPT_TX_REGISTER (PIE3)
#define INTERRUPT_RC_REGISTER (PIE3)
#define INTERRUPT_TMR1_REGISTER (PIE4)
#define INTERRUPT_TMR2_REGISTER (PIE4)
#define INTERRUPT_TMR3_REGISTER (PIE4)
#define INTERRUPT_TMR4_REGISTER (PIE4)
#define INTERRUPT_TMR5_REGISTER (PIE4)
#define INTERRUPT_TMR6_REGISTER (PIE4)
#define INTERRUPT_TMR1G_REGISTER (PIE5)
#define INTERRUPT_TMR3G_REGISTER (PIE5)
#define INTERRUPT_TMR5G_REGISTER (PIE5)
#define INTERRUPT_CLC1_REGISTER (PIE5)
#define INTERRUPT_CLC2_REGISTER (PIE5)
#define INTERRUPT_CLC3_REGISTER (PIE5)
#define INTERRUPT_CLC4_REGISTER (PIE5)
#define INTERRUPT_CCP1_REGISTER (PIE6)
#define INTERRUPT_CCP2_REGISTER (PIE6)
#define INTERRUPT_CCP3_REGISTER (PIE6)
#define INTERRUPT_CCP4_REGISTER (PIE6)
#define INTERRUPT_CCP5_REGISTER (PIE6)
#define INTERRUPT_CWG1_REGISTER (PIE7)
#define INTERRUPT_CWG2_REGISTER (PIE7)
#define INTERRUPT_CWG3_REGISTER (PIE7)
#define INTERRUPT_NCO1_REGISTER (PIE7)
#define INTERRUPT_NVM_REGISTER (PIE7)
#define INTERRUPT_CRC_REGISTER (PIE7)
#define INTERRUPT_SCAN_REGISTER (PIE7)
#define INTERRUPT_NCO_REGISTER (PIE7)
#define INTERRUPT_SMT1_REGISTER (PIE8)
#define INTERRUPT_SMT1PRA_REGISTER (PIE8)
#define INTERRUPT_SMT1PWA_REGISTER (PIE8)
#define INTERRUPT_SMT2_REGISTER (PIE8)
#define INTERRUPT_SMT2PRA_REGISTER (PIE8)
#define INTERRUPT_SMT2PWA_REGISTER (PIE8)
// EOF Interrupt addresses

// Interrupt register bit values
#define INTERRUPT_IN_BIT (0)
#define INTERRUPT_IOC_BIT (4)
#define INTERRUPT_TMR0_BIT (5)
#define INTERRUPT_AD_BIT (0)
#define INTERRUPT_ADT_BIT (1)
#define INTERRUPT_CSW_BIT (6)
#define INTERRUPT_OSF_BIT (7)
#define INTERRUPT_C1_BIT (0)
#define INTERRUPT_C2_BIT (1)
#define INTERRUPT_ZCD_BIT (6)
#define INTERRUPT_SSP1_BIT (0)
#define INTERRUPT_BCL1_BIT (1)
#define INTERRUPT_SSP2_BIT (2)
#define INTERRUPT_BCL2_BIT (3)
#define INTERRUPT_TX_BIT (4)
#define INTERRUPT_RC_BIT (5)
#define INTERRUPT_TMR1_BIT (0)
#define INTERRUPT_TMR2_BIT (1)
#define INTERRUPT_TMR3_BIT (2)
#define INTERRUPT_TMR4_BIT (3)
#define INTERRUPT_TMR5_BIT (4)
#define INTERRUPT_TMR6_BIT (5)
#define INTERRUPT_TMR1G_BIT (0)
#define INTERRUPT_TMR3G_BIT (1)
#define INTERRUPT_TMR5G_BIT (2)
#define INTERRUPT_CLC1_BIT (4)
#define INTERRUPT_CLC2_BIT (5)
#define INTERRUPT_CLC3_BIT (6)
#define INTERRUPT_CLC4_BIT (7)
#define INTERRUPT_CCP1_BIT (0)
#define INTERRUPT_CCP2_BIT (1)
#define INTERRUPT_CCP3_BIT (2)
#define INTERRUPT_CCP4_BIT (3)
#define INTERRUPT_CCP5_BIT (4)
#define INTERRUPT_CWG1_BIT (0)
#define INTERRUPT_CWG2_BIT (1)
#define INTERRUPT_CWG3_BIT (2)
#define INTERRUPT_NCO1_BIT (4)
#define INTERRUPT_NVM_BIT (5)
#define INTERRUPT_CRC_BIT (6)
#define INTERRUPT_SCAN_BIT (7)
#define INTERRUPT_NCO_BIT (4)
#define INTERRUPT_SMT1_BIT (0)
#define INTERRUPT_SMT1PRA_BIT (1)
#define INTERRUPT_SMT1PWA_BIT (2)
#define INTERRUPT_SMT2_BIT (3)
#define INTERRUPT_SMT2PRA_BIT (4)
#define INTERRUPT_SMT2PWA_BIT (5)
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END
