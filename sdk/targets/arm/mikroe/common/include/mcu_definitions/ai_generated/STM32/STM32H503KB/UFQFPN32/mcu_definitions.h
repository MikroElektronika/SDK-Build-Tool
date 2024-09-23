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
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions for STM32H503KB_UFQFPN32.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#ifdef __cplusplus
extern "C"{
#endif

// ADC
#define ADC1_PA0_CHN1
#define ADC1_PA0_CHP0
#define ADC1_PA1_CHP1
#define ADC1_PA2_CHP14
#define ADC1_PA3_CHP15
#define ADC1_PA4_CHP18
#define ADC1_PA5_CHN18
#define ADC1_PA5_CHP19
#define ADC1_PA6_CHP3
#define ADC1_PA7_CHN3
#define ADC1_PA7_CHP7
#define ADC1_PB0_CHN5
#define ADC1_PB0_CHP9
#define ADC1_PB1_CHP5

#define ADC_MODULE_1 (1)

#define ADC_MODULE_COUNT (1)
// EOF ADC

// CAN
#define FDCAN1_RX_PA11_AF9
#define FDCAN1_RX_PA8_AF9
#define FDCAN1_RX_PB3(JTDO_TRACESWO)
#define FDCAN1_RX_PB5_AF9
#define FDCAN1_RX_PB8_AF9
#define FDCAN1_TX_PA12_AF9
#define FDCAN1_TX_PB15_AF9
#define FDCAN1_TX_PB4(NJTRST)_AF9
#define FDCAN1_TX_PB6_AF9
#define FDCAN1_TX_PB7_AF9

#define CAN_MODULE_1 (1)

#define CAN_MODULE_COUNT (1)

#define HAL_LL_FDCAN1_GPIO_AF9 (9)
#define HAL_LL_FDCAN1_GPIO_TRACESWO) ()
// EOF CAN

// DMA

// EOF DMA

// I2C
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PB5_AF11
#define I2C1_SDA_PB7_AF4
#define I2C2_SCL_PB3(JTDO_TRACESWO)
#define I2C2_SCL_PB5_AF8
#define I2C2_SDA_PB3(JTDO_TRACESWO)
#define I2C2_SDA_PB4(NJTRST)_AF8
#define I2C2_SDA_PB8_AF8

#define I2C_MODULE_1 (1)
#define I2C_MODULE_2 (2)

#define I2C_MODULE_COUNT (2)
// EOF I2C

// U(S)ART
#define LPUART1_RX_PA2_AF3
#define LPUART1_RX_PB15_AF8
#define LPUART1_RX_PB7_AF8
#define LPUART1_TX_PA3_AF3
#define LPUART1_TX_PA9_AF3
#define LPUART1_TX_PB6_AF8
#define USART1_RX_PA11_AF8
#define USART1_RX_PA13(JTMS_SWDIO)
#define USART1_RX_PA1_AF8
#define USART1_RX_PB15_AF4
#define USART1_RX_PB7_AF7
#define USART1_TX_PA12_AF8
#define USART1_TX_PA14(JTCK_SWCLK)
#define USART1_TX_PA2_AF8
#define USART1_TX_PA9_AF7
#define USART1_TX_PB6_AF7
#define USART2_RX_PA11_AF4
#define USART2_RX_PA13(JTMS_SWDIO)
#define USART2_RX_PA15(JTDI)_AF9
#define USART2_RX_PA3_AF7
#define USART2_RX_PB15_AF13
#define USART2_RX_PB1_AF9
#define USART2_RX_PB5_AF13
#define USART2_TX_PA12_AF4
#define USART2_TX_PA14(JTCK_SWCLK)
#define USART2_TX_PA2_AF7
#define USART2_TX_PA5_AF9
#define USART2_TX_PA8_AF4
#define USART2_TX_PB0_AF9
#define USART2_TX_PB4(NJTRST)_AF13
#define USART3_RX_PA12_AF13
#define USART3_RX_PA15(JTDI)_AF13
#define USART3_RX_PA3_AF13
#define USART3_RX_PA5_AF13
#define USART3_RX_PB8_AF13
#define USART3_TX_PA4_AF13
#define USART3_TX_PA8_AF13
#define USART3_TX_PB3(JTDO_TRACESWO)
#define USART3_TX_PB7_AF13

#define UART_MODULE_1 (1)
#define UART_MODULE_2 (2)
#define UART_MODULE_3 (3)

#define UART_MODULE_COUNT (3)
// EOF U(S)ART

// SPI
#define SPI1_MISO_PA0_AF12
#define SPI1_MISO_PA3_AF4
#define SPI1_MISO_PA6_AF5
#define SPI1_MISO_PA9_AF4
#define SPI1_MISO_PB4(NJTRST)_AF5
#define SPI1_MOSI_PA4_AF4
#define SPI1_MOSI_PA7_AF5
#define SPI1_MOSI_PB5_AF5
#define SPI1_SCK_PA2_AF4
#define SPI1_SCK_PA5_AF5
#define SPI1_SCK_PA8_AF12
#define SPI1_SCK_PB3(JTDO_TRACESWO)
#define SPI2_MISO_PA15(JTDI)_AF7
#define SPI2_MISO_PA7_AF11
#define SPI2_MISO_PB5_AF6
#define SPI2_MOSI_PA8_AF6
#define SPI2_MOSI_PB15_AF5
#define SPI2_MOSI_PB1_AF6
#define SPI2_SCK_PA12_AF5
#define SPI2_SCK_PA5_AF7
#define SPI2_SCK_PA9_AF5
#define SPI3_MISO_PA2_AF6
#define SPI3_MISO_PA4_AF10
#define SPI3_MISO_PB15_AF6
#define SPI3_MISO_PB4(NJTRST)_AF6
#define SPI3_MOSI_PA3_AF6
#define SPI3_MOSI_PA5_AF10
#define SPI3_MOSI_PA9_AF10
#define SPI3_MOSI_PB5_AF7
#define SPI3_SCK_PA15(JTDI)_AF10
#define SPI3_SCK_PA1_AF6
#define SPI3_SCK_PB3(JTDO_TRACESWO)
#define SPI3_SCK_PB7_AF6

#define SPI_MODULE_1 (1)
#define SPI_MODULE_2 (2)
#define SPI_MODULE_3 (3)

#define SPI_MODULE_COUNT (3)
// EOF SPI

// TIM
#define LPTIM1_CH1_PA13(JTMS_SWDIO)
#define LPTIM1_CH1_PA5_AF4
#define LPTIM1_CH1_PB15_AF2
#define LPTIM1_CH1_PB3(JTDO_TRACESWO)
#define LPTIM1_CH2_PB4(NJTRST)_AF4
#define LPTIM1_CH2_PB8_AF2
#define LPTIM1_ETR_PA0_AF4
#define LPTIM1_ETR_PA14(JTCK_SWCLK)
#define LPTIM1_ETR_PA5_AF2
#define LPTIM2_CH1_PA14(JTCK_SWCLK)
#define LPTIM2_CH1_PA15(JTDI)_AF3
#define LPTIM2_CH1_PA4_AF3
#define LPTIM2_CH1_PB8_AF14
#define LPTIM2_CH2_PA11_AF14
#define LPTIM2_CH2_PA5_AF3
#define LPTIM2_ETR_PA0_AF3
#define LPTIM2_ETR_PA7_AF3
#define LPTIM2_ETR_PB1_AF3
#define TIM1_BKIN2_PB8_AF1
#define TIM1_BKIN_PA4_AF14
#define TIM1_BKIN_PA6_AF1
#define TIM1_BKIN_PB3(JTDO_TRACESWO)
#define TIM1_CH1N_PA3_AF14
#define TIM1_CH1N_PA7_AF1
#define TIM1_CH1_PA13(JTMS_SWDIO)
#define TIM1_CH1_PA8_AF1
#define TIM1_CH1_PB1_AF14
#define TIM1_CH1_PB7_AF14
#define TIM1_CH2N_PA4_AF1
#define TIM1_CH2N_PB0_AF1
#define TIM1_CH2N_PB7_AF1
#define TIM1_CH2_PA14(JTCK_SWCLK)
#define TIM1_CH2_PA9_AF1
#define TIM1_CH2_PB4(NJTRST)_AF14
#define TIM1_CH2_PB6_AF14
#define TIM1_CH3N_PB15_AF1
#define TIM1_CH3N_PB1_AF1
#define TIM1_CH3N_PB6_AF1
#define TIM1_CH3_PA1_AF14
#define TIM1_CH3_PB5_AF1
#define TIM1_CH4N_PA14(JTCK_SWCLK)
#define TIM1_CH4N_PA8_AF14
#define TIM1_CH4N_PB4(NJTRST)_AF1
#define TIM1_CH4_PA11_AF1
#define TIM1_CH4_PA2_AF14
#define TIM1_ETR_PA12_AF1
#define TIM1_ETR_PA13(JTMS_SWDIO)
#define TIM1_ETR_PB0_AF14
#define TIM2_CH1_PA0_AF1
#define TIM2_CH1_PA15(JTDI)_AF1
#define TIM2_CH1_PA5_AF1
#define TIM2_CH2_PA1_AF1
#define TIM2_CH2_PB3(JTDO_TRACESWO)
#define TIM2_CH3_PA2_AF1
#define TIM2_CH3_PA7_AF14
#define TIM2_CH4_PA12_AF14
#define TIM2_CH4_PA3_AF1
#define TIM2_ETR_PA0_AF14
#define TIM2_ETR_PA15(JTDI)_AF14
#define TIM2_ETR_PA5_AF14
#define TIM3_CH1_PA0_AF2
#define TIM3_CH1_PA14(JTCK_SWCLK)
#define TIM3_CH1_PA6_AF2
#define TIM3_CH1_PB4(NJTRST)_AF2
#define TIM3_CH2_PA11_AF2
#define TIM3_CH2_PA7_AF2
#define TIM3_CH2_PB5_AF2
#define TIM3_CH3_PA8_AF2
#define TIM3_CH3_PB0_AF2
#define TIM3_CH3_PB6_AF2
#define TIM3_CH4_PA12_AF2
#define TIM3_CH4_PB15_AF14
#define TIM3_CH4_PB1_AF2
#define TIM3_ETR_PA2_AF2
#define TIM3_ETR_PB7_AF2

#define TIM_MODULE_1 (1)
#define TIM_MODULE_2 (2)
#define TIM_MODULE_3 (3)

#define TIM_MODULE_COUNT (3)

#define TIM1_BUS (2)
#define TIM2_BUS (1)
#define TIM3_BUS (1)
// EOF TIM

// GPIO
#define __PA0_CN
#define __PA1_CN
#define __PA11_CN
#define __PA12_CN
#define __PA13_CN
#define __PA14_CN
#define __PA15_CN
#define __PA2_CN
#define __PA3_CN
#define __PA4_CN
#define __PA5_CN
#define __PA6_CN
#define __PA7_CN
#define __PA8_CN
#define __PA9_CN
#define __PB0_CN
#define __PB1_CN
#define __PB15_CN
#define __PB3_CN
#define __PB4_CN
#define __PB5_CN
#define __PB6_CN
#define __PB7_CN
#define __PB8_CN
#define __PC14_CN
#define __PC15_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN

#define PORT_COUNT (3)
#define PORT_SIZE (16)
// EOF GPIO

// IVT_TABLE

// EOF IVT_TABLE

#ifdef __cplusplus
}
#endif

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
