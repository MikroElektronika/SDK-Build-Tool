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
* @brief STM32L552VE MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_RESET = 1;
static const int INTERRUPTS_NONMASKABLEINT = 2;
static const int INTERRUPTS_HARDFAULT = 3;
static const int INTERRUPTS_MEMORYMANAGEMENT = 4;
static const int INTERRUPTS_BUSFAULT = 5;
static const int INTERRUPTS_USAGEFAULT = 6;
static const int INTERRUPTS_SECUREFAULT = 7;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUGMONITOR = 12;
static const int INTERRUPTS_PENDSV = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_WWDG = 16;
static const int INTERRUPTS_PVD_PVM = 17;
static const int INTERRUPTS_RTC = 18;
static const int INTERRUPTS_RTC_S = 19;
static const int INTERRUPTS_TAMP = 20;
static const int INTERRUPTS_TAMP_S = 21;
static const int INTERRUPTS_FLASH = 22;
static const int INTERRUPTS_FLASH_S = 23;
static const int INTERRUPTS_GTZC = 24;
static const int INTERRUPTS_RCC = 25;
static const int INTERRUPTS_RCC_S = 26;
static const int INTERRUPTS_EXTI0 = 27;
static const int INTERRUPTS_EXTI1 = 28;
static const int INTERRUPTS_EXTI2 = 29;
static const int INTERRUPTS_EXTI3 = 30;
static const int INTERRUPTS_EXTI4 = 31;
static const int INTERRUPTS_EXTI5 = 32;
static const int INTERRUPTS_EXTI6 = 33;
static const int INTERRUPTS_EXTI7 = 34;
static const int INTERRUPTS_EXTI8 = 35;
static const int INTERRUPTS_EXTI9 = 36;
static const int INTERRUPTS_EXTI10 = 37;
static const int INTERRUPTS_EXTI11 = 38;
static const int INTERRUPTS_EXTI12 = 39;
static const int INTERRUPTS_EXTI13 = 40;
static const int INTERRUPTS_EXTI14 = 41;
static const int INTERRUPTS_EXTI15 = 42;
static const int INTERRUPTS_DMAMUX1 = 43;
static const int INTERRUPTS_DMAMUX1_S = 44;
static const int INTERRUPTS_DMA1_CHANNEL1 = 45;
static const int INTERRUPTS_DMA1_CHANNEL2 = 46;
static const int INTERRUPTS_DMA1_CHANNEL3 = 47;
static const int INTERRUPTS_DMA1_CHANNEL4 = 48;
static const int INTERRUPTS_DMA1_CHANNEL5 = 49;
static const int INTERRUPTS_DMA1_CHANNEL6 = 50;
static const int INTERRUPTS_DMA1_CHANNEL7 = 51;
static const int INTERRUPTS_DMA1_CHANNEL8 = 52;
static const int INTERRUPTS_ADC1_2 = 53;
static const int INTERRUPTS_DAC = 54;
static const int INTERRUPTS_FDCAN1_IT0 = 55;
static const int INTERRUPTS_FDCAN1_IT1 = 56;
static const int INTERRUPTS_TIM1_BRK = 57;
static const int INTERRUPTS_TIM1_UP = 58;
static const int INTERRUPTS_TIM1_TRG_COM = 59;
static const int INTERRUPTS_TIM1_CC = 60;
static const int INTERRUPTS_TIM2 = 61;
static const int INTERRUPTS_TIM3 = 62;
static const int INTERRUPTS_TIM4 = 63;
static const int INTERRUPTS_TIM5 = 64;
static const int INTERRUPTS_TIM6 = 65;
static const int INTERRUPTS_TIM7 = 66;
static const int INTERRUPTS_TIM8_BRK = 67;
static const int INTERRUPTS_TIM8_UP = 68;
static const int INTERRUPTS_TIM8_TRG_COM = 69;
static const int INTERRUPTS_TIM8_CC = 70;
static const int INTERRUPTS_I2C1_EV = 71;
static const int INTERRUPTS_I2C1_ER = 72;
static const int INTERRUPTS_I2C2_EV = 73;
static const int INTERRUPTS_I2C2_ER = 74;
static const int INTERRUPTS_SPI1 = 75;
static const int INTERRUPTS_SPI2 = 76;
static const int INTERRUPTS_USART1 = 77;
static const int INTERRUPTS_USART2 = 78;
static const int INTERRUPTS_USART3 = 79;
static const int INTERRUPTS_UART4 = 80;
static const int INTERRUPTS_UART5 = 81;
static const int INTERRUPTS_LPUART1 = 82;
static const int INTERRUPTS_LPTIM1 = 83;
static const int INTERRUPTS_LPTIM2 = 84;
static const int INTERRUPTS_TIM15 = 85;
static const int INTERRUPTS_TIM16 = 86;
static const int INTERRUPTS_TIM17 = 87;
static const int INTERRUPTS_COMP = 88;
static const int INTERRUPTS_USB_FS = 89;
static const int INTERRUPTS_CRS = 90;
static const int INTERRUPTS_FMC = 91;
static const int INTERRUPTS_OCTOSPI1 = 92;
static const int INTERRUPTS_SDMMC1 = 94;
static const int INTERRUPTS_DMA2_CHANNEL1 = 96;
static const int INTERRUPTS_DMA2_CHANNEL2 = 97;
static const int INTERRUPTS_DMA2_CHANNEL3 = 98;
static const int INTERRUPTS_DMA2_CHANNEL4 = 99;
static const int INTERRUPTS_DMA2_CHANNEL5 = 100;
static const int INTERRUPTS_DMA2_CHANNEL6 = 101;
static const int INTERRUPTS_DMA2_CHANNEL7 = 102;
static const int INTERRUPTS_DMA2_CHANNEL8 = 103;
static const int INTERRUPTS_I2C3_EV = 104;
static const int INTERRUPTS_I2C3_ER = 105;
static const int INTERRUPTS_SAI1 = 106;
static const int INTERRUPTS_SAI2 = 107;
static const int INTERRUPTS_TSC = 108;
static const int INTERRUPTS_RNG = 110;
static const int INTERRUPTS_FPU = 111;
static const int INTERRUPTS_HASH = 112;
static const int INTERRUPTS_LPTIM3 = 114;
static const int INTERRUPTS_SPI3 = 115;
static const int INTERRUPTS_I2C4_ER = 116;
static const int INTERRUPTS_I2C4_EV = 117;
static const int INTERRUPTS_DFSDM1_FLT0 = 118;
static const int INTERRUPTS_DFSDM1_FLT1 = 119;
static const int INTERRUPTS_DFSDM1_FLT2 = 120;
static const int INTERRUPTS_DFSDM1_FLT3 = 121;
static const int INTERRUPTS_UCPD1 = 122;
static const int INTERRUPTS_ICACHE = 123;
// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for STM32L552VE.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for STM32L552VE.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END