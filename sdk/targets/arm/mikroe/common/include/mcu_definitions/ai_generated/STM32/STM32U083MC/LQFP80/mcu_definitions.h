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
 * @brief MCU specific pin and module definitions for STM32U083MC_LQFP80.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#ifdef __cplusplus
extern "C"{
#endif

// ADC
#define ADC1_PA0_CH4
#define ADC1_PA1_CH5
#define ADC1_PA2_CH6
#define ADC1_PA3_CH7
#define ADC1_PA4_CH8
#define ADC1_PA5_CH9
#define ADC1_PA6_CH10
#define ADC1_PA7_CH14
#define ADC1_PB0_CH17
#define ADC1_PB1_CH18
#define ADC1_PC0_CH0
#define ADC1_PC1_CH1
#define ADC1_PC2_CH2
#define ADC1_PC3_CH3
#define ADC1_PC4_CH15
#define ADC1_PC5_CH16

#define ADC_MODULE_1 (1)

#define ADC_MODULE_COUNT (1)
// EOF ADC

// CAN

// EOF CAN

// DMA
#define DMA_NUM_OF_CHANNELS (77)
#define DMA_NUM_OF_CHANNELS_FAMILY (77)
#define DMA_NUM_OF_MODULES (2)
#define DMA_NUM_OF_STREAMS (12)
#define DMA_NUM_OF_STREAMS_FAMILY (12)
// EOF DMA

// I2C
#define I2C1_SCL_PA9_AF4
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PA10_AF4
#define I2C1_SDA_PB7_AF4
#define I2C1_SDA_PB9_AF4
#define I2C2_SCL_PA7_AF3
#define I2C2_SCL_PA9_AF5
#define I2C2_SCL_PB10_AF4
#define I2C2_SCL_PB13_AF4
#define I2C2_SCL_PB3_AF3
#define I2C2_SCL_PB6_AF5
#define I2C2_SCL_PB8_AF3
#define I2C2_SDA_PA10_AF5
#define I2C2_SDA_PA6_AF3
#define I2C2_SDA_PB11_AF4
#define I2C2_SDA_PB14_AF4
#define I2C2_SDA_PB4_AF3
#define I2C2_SDA_PB7_AF5
#define I2C2_SDA_PB9_AF3
#define I2C3_SCL_PA7_AF4
#define I2C3_SCL_PB3_AF4
#define I2C3_SCL_PC0_AF4
#define I2C3_SDA_PA6_AF4
#define I2C3_SDA_PB4_AF4
#define I2C3_SDA_PC1_AF4
#define I2C4_SCL_PB10_AF3
#define I2C4_SCL_PB6_AF3
#define I2C4_SCL_PC0_AF2
#define I2C4_SCL_PD12_AF4
#define I2C4_SDA_PB11_AF3
#define I2C4_SDA_PB7_AF3
#define I2C4_SDA_PC1_AF2
#define I2C4_SDA_PD13_AF4

#define I2C_MODULE_1 (1)
#define I2C_MODULE_2 (2)
#define I2C_MODULE_3 (3)
#define I2C_MODULE_4 (4)

#define I2C_MODULE_COUNT (4)
// EOF I2C

// U(S)ART
#define USART1_RX_PA10_AF7
#define USART1_RX_PB7_AF7
#define USART1_TX_PA9_AF7
#define USART1_TX_PB6_AF7
#define USART2_RX_PA15_AF3
#define USART2_RX_PA3_AF7
#define USART2_RX_PD6_AF7
#define USART2_TX_PA2_AF7
#define USART2_TX_PD5_AF7
#define USART3_RX_PA7_AF7
#define USART3_RX_PB11_AF7
#define USART3_RX_PB9_AF7
#define USART3_RX_PC11_AF7
#define USART3_RX_PC5_AF7
#define USART3_RX_PD9_AF7
#define USART3_TX_PA5_AF7
#define USART3_TX_PB10_AF7
#define USART3_TX_PB8_AF7
#define USART3_TX_PC10_AF7
#define USART3_TX_PC4_AF7
#define USART3_TX_PD8_AF7
#define USART4_RX_PA1_AF8
#define USART4_RX_PC11_AF8
#define USART4_TX_PA0_AF8
#define USART4_TX_PC10_AF8

#define UART_MODULE_1 (1)
#define UART_MODULE_2 (2)
#define UART_MODULE_3 (3)
#define UART_MODULE_4 (4)

#define UART_MODULE_COUNT (4)
// EOF U(S)ART

// SPI
#define SPI1_MISO_PA11_AF5
#define SPI1_MISO_PA6_AF5
#define SPI1_MISO_PB4_AF5
#define SPI1_MOSI_PA12_AF5
#define SPI1_MOSI_PA7_AF5
#define SPI1_MOSI_PB5_AF5
#define SPI1_SCK_PA1_AF5
#define SPI1_SCK_PA5_AF5
#define SPI1_SCK_PB3_AF5
#define SPI2_MISO_PA11_AF6
#define SPI2_MISO_PB14_AF5
#define SPI2_MISO_PC2_AF5
#define SPI2_MISO_PD3_AF5
#define SPI2_MOSI_PA12_AF6
#define SPI2_MOSI_PB15_AF5
#define SPI2_MOSI_PC3_AF5
#define SPI2_MOSI_PD4_AF5
#define SPI2_SCK_PA1_AF6
#define SPI2_SCK_PB10_AF5
#define SPI2_SCK_PB13_AF5
#define SPI2_SCK_PD1_AF5
#define SPI3_MISO_PB4_AF6
#define SPI3_MISO_PC11_AF6
#define SPI3_MOSI_PB5_AF6
#define SPI3_MOSI_PC12_AF6
#define SPI3_SCK_PB3_AF6
#define SPI3_SCK_PC10_AF6

#define SPI_MODULE_1 (1)
#define SPI_MODULE_2 (2)
#define SPI_MODULE_3 (3)

#define SPI_MODULE_COUNT (3)
// EOF SPI

// TIM
#define TIM15_BKIN_PA9_AF14
#define TIM15_BKIN_PB12_AF14
#define TIM15_CH1N_PA1_AF14
#define TIM15_CH1N_PB13_AF14
#define TIM15_CH1_PA2_AF14
#define TIM15_CH1_PB14_AF14
#define TIM15_CH2_PA3_AF14
#define TIM15_CH2_PB15_AF14
#define TIM16_BKIN_PB5_AF14
#define TIM16_CH1N_PB6_AF14
#define TIM16_CH1_PA6_AF14
#define TIM16_CH1_PB8_AF14
#define TIM1_BKIN2_PA11_AF2
#define TIM1_BKIN_PA6_AF1
#define TIM1_BKIN_PB12_AF1
#define TIM1_CH1N_PA7_AF1
#define TIM1_CH1N_PB13_AF1
#define TIM1_CH1N_PE8_AF1
#define TIM1_CH1_PA8_AF1
#define TIM1_CH1_PE9_AF1
#define TIM1_CH2N_PB0_AF1
#define TIM1_CH2N_PB14_AF1
#define TIM1_CH2_PA9_AF1
#define TIM1_CH3N_PB15_AF1
#define TIM1_CH3N_PB1_AF1
#define TIM1_CH3_PA10_AF1
#define TIM1_CH4_PA11_AF1
#define TIM1_ETR_PA12_AF1
#define TIM1_ETR_PE7_AF1
#define TIM2_CH1_PA0_AF1
#define TIM2_CH1_PA15_AF1
#define TIM2_CH1_PA5_AF1
#define TIM2_CH2_PA1_AF1
#define TIM2_CH2_PB3_AF1
#define TIM2_CH3_PA2_AF1
#define TIM2_CH3_PB10_AF1
#define TIM2_CH4_PA3_AF1
#define TIM2_CH4_PB11_AF1
#define TIM2_ETR_PA0_AF14
#define TIM2_ETR_PA15_AF2
#define TIM2_ETR_PA5_AF2
#define TIM3_CH1_PA6_AF2
#define TIM3_CH1_PB4_AF2
#define TIM3_CH1_PC6_AF2
#define TIM3_CH2_PA7_AF2
#define TIM3_CH2_PB5_AF2
#define TIM3_CH2_PC7_AF2
#define TIM3_CH3_PB0_AF2
#define TIM3_CH3_PC8_AF2
#define TIM3_CH4_PB1_AF2
#define TIM3_CH4_PC9_AF2
#define TIM3_ETR_PD2_AF2

#define TIM_MODULE_1 (1)
#define TIM_MODULE_2 (2)
#define TIM_MODULE_3 (3)
#define TIM_MODULE_15 (4)
#define TIM_MODULE_16 (5)

#define TIM_MODULE_COUNT (5)

#define TIM2_BUS (1)
#define TIM3_BUS (1)
#define TIM16_BUS (1)
#define TIM1_BUS (1)
#define TIM15_BUS (1)
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
#define __PC2_CN
#define __PC3_CN
#define __PC4_CN
#define __PC5_CN
#define __PC6_CN
#define __PC7_CN
#define __PC8_CN
#define __PC9_CN
#define __PD0_CN
#define __PD1_CN
#define __PD10_CN
#define __PD11_CN
#define __PD12_CN
#define __PD13_CN
#define __PD2_CN
#define __PD3_CN
#define __PD4_CN
#define __PD5_CN
#define __PD6_CN
#define __PD8_CN
#define __PD9_CN
#define __PE7_CN
#define __PE8_CN
#define __PE9_CN
#define __PF0_CN
#define __PF1_CN
#define __PF2_CN
#define __PF3_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN

#define PORT_COUNT (6)
#define PORT_SIZE (16)
// EOF GPIO

// IVT_TABLE
#define UART1_IVT (27)
#define UART1_NVIC (43)
#define UART2_IVT (28)
#define UART2_NVIC (44)
#define UART3_IVT (29)
#define UART3_NVIC (45)
#define UART4_IVT (30)
#define UART4_NVIC (46)
// EOF IVT_TABLE

#ifdef __cplusplus
}
#endif

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
