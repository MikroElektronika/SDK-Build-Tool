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
 * @brief MCU specific pin and module definitions for STM32H7S3V8_LQFP100.
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
#define ADC1_PA6_CHP3
#define ADC1_PA7_CHN3
#define ADC1_PA7_CHP7
#define ADC1_PB0_CHN5
#define ADC1_PB0_CHP9
#define ADC1_PB1_CHP5
#define ADC1_PC0_CHP10
#define ADC1_PC1_CHN10
#define ADC1_PC1_CHP11
#define ADC2_PA0_CHN1
#define ADC2_PA0_CHP0
#define ADC2_PA1_CHP1
#define ADC2_PA2_CHP14
#define ADC2_PA3_CHP15
#define ADC2_PA5_CHP18
#define ADC2_PA6_CHP3
#define ADC2_PA7_CHN3
#define ADC2_PA7_CHP7
#define ADC2_PB0_CHN5
#define ADC2_PB0_CHP9
#define ADC2_PB1_CHP5
#define ADC2_PC0_CHP10
#define ADC2_PC1_CHN10
#define ADC2_PC1_CHP11

#define ADC_MODULE_1 (1)
#define ADC_MODULE_2 (2)

#define ADC_MODULE_COUNT (2)
// EOF ADC

// CAN

// EOF CAN

// DMA

// EOF DMA

// I2C
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PB7_AF4
#define I2C1_SDA_PB9_AF4
#define I2C2_SCL_PB10_AF4
#define I2C2_SDA_PB11_AF4
#define I2C3_SCL_PA8_AF4
#define I2C3_SDA_PA9_AF4

#define I2C_MODULE_1 (1)
#define I2C_MODULE_2 (2)
#define I2C_MODULE_3 (3)

#define I2C_MODULE_COUNT (3)
// EOF I2C

// U(S)ART
#define UART4_RX_PA11_AF6
#define UART4_RX_PA1_AF8
#define UART4_RX_PB8_AF8
#define UART4_RX_PC11_AF8
#define UART4_TX_PA0_AF8
#define UART4_TX_PA12_AF6
#define UART4_TX_PB9_AF8
#define UART4_TX_PC10_AF8
#define UART5_RX_PB12_AF14
#define UART5_RX_PB5_AF14
#define UART5_TX_PB13_AF14
#define UART5_TX_PB6_AF14
#define UART5_TX_PB7_AF14
#define UART5_TX_PC12_AF8
#define UART7_RX_PA8_AF11
#define UART7_RX_PB3_ERROR
#define UART7_RX_PM8_AF7
#define UART7_TX_PA15_ERROR
#define UART7_TX_PB4_ERROR
#define UART7_TX_PM9_AF7
#define USART1_RX_PA10_AF7
#define USART1_RX_PB15_AF4
#define USART1_RX_PB7_AF7
#define USART1_TX_PA9_AF7
#define USART1_TX_PB14_AF4
#define USART1_TX_PB6_AF7
#define USART2_RX_PA3_AF7
#define USART2_TX_PA2_AF7
#define USART3_RX_PB11_AF7
#define USART3_RX_PC11_AF7
#define USART3_TX_PB10_AF7
#define USART3_TX_PC10_AF7

#define UART_MODULE_1 (1)
#define UART_MODULE_2 (2)
#define UART_MODULE_3 (3)
#define UART_MODULE_4 (4)
#define UART_MODULE_5 (5)
#define UART_MODULE_7 (6)

#define UART_MODULE_COUNT (6)
// EOF U(S)ART

// SPI
#define SPI1_MISO_PA6_AF5
#define SPI1_MISO_PB4_ERROR
#define SPI1_MOSI_PA7_AF5
#define SPI1_MOSI_PB5_AF5
#define SPI1_SCK_PA5_AF5
#define SPI1_SCK_PB0_AF5
#define SPI1_SCK_PB3_ERROR
#define SPI2_MISO_PB14_AF5
#define SPI2_MOSI_PB15_AF5
#define SPI2_MOSI_PC1_AF5
#define SPI2_SCK_PA12_AF5
#define SPI2_SCK_PA9_AF5
#define SPI2_SCK_PB10_AF5
#define SPI2_SCK_PB13_AF5
#define SPI3_MISO_PB4_ERROR
#define SPI3_MISO_PC11_AF6
#define SPI3_MOSI_PB2_AF7
#define SPI3_MOSI_PB5_AF7
#define SPI3_MOSI_PC12_AF6
#define SPI3_SCK_PB3_ERROR
#define SPI3_SCK_PC10_AF6
#define SPI5_MISO_PM14_AF5
#define SPI5_MOSI_PM13_AF5
#define SPI5_SCK_PM11_AF5
#define SPI6_MISO_PA6_AF8
#define SPI6_MISO_PB4_ERROR
#define SPI6_MOSI_PA7_AF8
#define SPI6_MOSI_PB5_AF8
#define SPI6_SCK_PA5_AF8
#define SPI6_SCK_PB3_ERROR
#define SPI6_SCK_PC12_AF5

#define SPI_MODULE_1 (1)
#define SPI_MODULE_2 (2)
#define SPI_MODULE_3 (3)
#define SPI_MODULE_5 (4)
#define SPI_MODULE_6 (5)

#define SPI_MODULE_COUNT (5)
// EOF SPI

// TIM
#define TIM12_CH1_PB14_AF2
#define TIM12_CH2_PB15_AF2
#define TIM13_CH1_PA6_AF9
#define TIM14_CH1_PA7_AF9
#define TIM15_BKIN_PA0_AF4
#define TIM15_CH1N_PA1_AF4
#define TIM15_CH1_PA2_AF4
#define TIM15_CH1_PC12_AF2
#define TIM15_CH2_PA3_AF4
#define TIM16_BKIN_PB4_ERROR
#define TIM16_CH1N_PB6_AF1
#define TIM16_CH1_PB8_AF1
#define TIM17_BKIN_PB5_AF1
#define TIM17_CH1N_PB7_AF1
#define TIM17_CH1_PB9_AF1
#define TIM1_BKIN_PA6_AF1
#define TIM1_BKIN_PB12_AF1
#define TIM1_BKIN_PC10_AF1
#define TIM1_CH1N_PA7_AF1
#define TIM1_CH1N_PB13_AF1
#define TIM1_CH1_PA8_AF1
#define TIM1_CH2N_PB0_AF1
#define TIM1_CH2N_PB14_AF1
#define TIM1_CH2_PA9_AF1
#define TIM1_CH3N_PB15_AF1
#define TIM1_CH3N_PB1_AF1
#define TIM1_CH3_PA10_AF1
#define TIM1_CH3_PA3_AF14
#define TIM1_CH4_PA11_AF1
#define TIM1_CH4_PC12_AF1
#define TIM1_ETR_PA12_AF1
#define TIM2_CH1_PA0_AF1
#define TIM2_CH1_PA15_ERROR
#define TIM2_CH1_PA5_AF1
#define TIM2_CH2_PA1_AF1
#define TIM2_CH2_PB3_ERROR
#define TIM2_CH3_PA2_AF1
#define TIM2_CH3_PB10_AF1
#define TIM2_CH4_PA3_AF1
#define TIM2_CH4_PB11_AF1
#define TIM2_ETR_PA15_ERROR
#define TIM2_ETR_PA5_AF2
#define TIM5_CH1_PA0_AF2
#define TIM5_CH2_PA1_AF2
#define TIM5_CH3_PA2_AF2
#define TIM5_CH4_PA3_AF2
#define TIM5_ETR_PA4_AF2
#define TIM9_CH1_PA0_AF3
#define TIM9_CH1_PB0_AF3
#define TIM9_CH2_PA5_AF3
#define TIM9_CH2_PB1_AF3

#define TIM_MODULE_1 (1)
#define TIM_MODULE_2 (2)
#define TIM_MODULE_5 (3)
#define TIM_MODULE_9 (4)
#define TIM_MODULE_12 (5)
#define TIM_MODULE_13 (6)
#define TIM_MODULE_14 (7)
#define TIM_MODULE_15 (8)
#define TIM_MODULE_16 (9)
#define TIM_MODULE_17 (10)

#define TIM_MODULE_COUNT (10)

#define  TIM2_BUS (1)
#define  TIM5_BUS (1)
#define  TIM12_BUS (1)
#define  TIM13_BUS (1)
#define  TIM14_BUS (1)
#define TIM1_BUS (2)
#define  TIM9_BUS (2)
#define  TIM15_BUS (2)
#define TIM16_BUS (2)
#define  TIM17_BUS (2)
// EOF TIM

// GPIO
#define __PA0_CN
#define __PA1_CN
#define __PA10_CN
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
#define __PB10_CN
#define __PB11_CN
#define __PB12_CN
#define __PB13_CN
#define __PB14_CN
#define __PB15_CN
#define __PB2_CN
#define __PB3_CN
#define __PB4_CN
#define __PB5_CN
#define __PB6_CN
#define __PB7_CN
#define __PB8_CN
#define __PB9_CN
#define __PC0_CN
#define __PC1_CN
#define __PC10_CN
#define __PC11_CN
#define __PC12_CN
#define __PC13_CN
#define __PC14_CN
#define __PC15_CN
#define __PH0_CN
#define __PH1_CN
#define __PM0_CN
#define __PM1_CN
#define __PM11_CN
#define __PM12_CN
#define __PM13_CN
#define __PM14_CN
#define __PM2_CN
#define __PM3_CN
#define __PM5_CN
#define __PM6_CN
#define __PM8_CN
#define __PM9_CN
#define __PO0_CN
#define __PO1_CN
#define __PO2_CN
#define __PO4_CN
#define __PO5_CN
#define __PP0_CN
#define __PP1_CN
#define __PP2_CN
#define __PP3_CN
#define __PP4_CN
#define __PP5_CN
#define __PP6_CN
#define __PP7_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_H_CN
#define __PORT_M_CN
#define __PORT_O_CN
#define __PORT_P_CN

#define PORT_COUNT (7)
#define PORT_SIZE (16)
// EOF GPIO

// IVT_TABLE

// EOF IVT_TABLE

#ifdef __cplusplus
}
#endif

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END