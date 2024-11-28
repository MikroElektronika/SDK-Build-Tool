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
* @brief MK02FN64VFM10 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_INITIAL_STACK_POINTER = 0;
static const int INTERRUPTS_INITIAL_PROGRAM_COUNTER = 1;
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED7 = 7;
static const int INTERRUPTS_RESERVED8 = 8;
static const int INTERRUPTS_RESERVED9 = 9;
static const int INTERRUPTS_RESERVED10 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUG_MONITOR = 12;
static const int INTERRUPTS_RESERVED13 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_RESERVED20 = 20;
static const int INTERRUPTS_RESERVED21 = 21;
static const int INTERRUPTS_RESERVED22 = 22;
static const int INTERRUPTS_RESERVED23 = 23;
static const int INTERRUPTS_RESERVED24 = 24;
static const int INTERRUPTS_RESERVED25 = 25;
static const int INTERRUPTS_RESERVED26 = 26;
static const int INTERRUPTS_RESERVED27 = 27;
static const int INTERRUPTS_RESERVED28 = 28;
static const int INTERRUPTS_RESERVED29 = 29;
static const int INTERRUPTS_RESERVED30 = 30;
static const int INTERRUPTS_RESERVED31 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_FPU_SOURCES = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT. = 38;
static const int INTERRUPTS_RESERVED39 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_RESERVED41 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_RESERVED43 = 43;
static const int INTERRUPTS_RESERVED44 = 44;
static const int INTERRUPTS_RESERVED45 = 45;
static const int INTERRUPTS_RESERVED46 = 46;
static const int INTERRUPTS_UART0_RX_TX = 47;
static const int INTERRUPTS_UART0_ERR = 48;
static const int INTERRUPTS_UART1_RX_TX = 49;
static const int INTERRUPTS_UART1_ERR = 50;
static const int INTERRUPTS_RESERVED51 = 51;
static const int INTERRUPTS_RESERVED52 = 52;
static const int INTERRUPTS_RESERVED53 = 53;
static const int INTERRUPTS_RESERVED54 = 54;
static const int INTERRUPTS_RESERVED55 = 55;
static const int INTERRUPTS_RESERVED56 = 56;
static const int INTERRUPTS_RESERVED57 = 57;
static const int INTERRUPTS_RESERVED58 = 58;
static const int INTERRUPTS_RESERVED59 = 59;
static const int INTERRUPTS_RESERVED60 = 60;
static const int INTERRUPTS_RESERVED61 = 61;
static const int INTERRUPTS_RESERVED62 = 62;
static const int INTERRUPTS_RESERVED63 = 63;
static const int INTERRUPTS_RESERVED64 = 64;
static const int INTERRUPTS_RESERVED65 = 65;
static const int INTERRUPTS_RESERVED66 = 66;
static const int INTERRUPTS_RESERVED67 = 67;
static const int INTERRUPTS_RESERVED68 = 68;
static const int INTERRUPTS_RESERVED69 = 69;
static const int INTERRUPTS_RESERVED70 = 70;
static const int INTERRUPTS_RESERVED71 = 71;
static const int INTERRUPTS_RESERVED72 = 72;
static const int INTERRUPTS_RESERVED73 = 73;
static const int INTERRUPTS_LPTMR0 = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SOFTWARE_INTERRUPT = 80;
static const int INTERRUPTS_RESERVED81 = 81;
static const int INTERRUPTS_RESERVED82 = 82;
static const int INTERRUPTS_RESERVED83 = 83;
static const int INTERRUPTS_RESERVED84 = 84;
static const int INTERRUPTS_RESERVED85 = 85;
static const int INTERRUPTS_RESERVED86 = 86;
static const int INTERRUPTS_RESERVED87 = 87;
static const int INTERRUPTS_RESERVED88 = 88;
static const int INTERRUPTS_RESERVED89 = 89;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK02FN64VFM10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

