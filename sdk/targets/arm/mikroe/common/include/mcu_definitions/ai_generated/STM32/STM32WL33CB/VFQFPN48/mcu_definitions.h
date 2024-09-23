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
 * @brief MCU specific pin and module definitions for STM32WL33CB_VFQFPN48.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#ifdef __cplusplus
extern "C"{
#endif

// ADC
#define ADC1_PA2_CH2
#define ADC1_PA3_CH2
#define ADC1_PB0_CH1
#define ADC1_PB1_CH1
#define ADC1_PB2_CH0
#define ADC1_PB3_CH0
#define ADC1_PB4_CH3
#define ADC1_PB5_CH3

#define ADC_MODULE_1 (1)

#define ADC_MODULE_COUNT (1)
// EOF ADC

// CAN

// EOF CAN

// DMA
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_CHANNELS_FAMILY (0)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_MODULES (1)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
#define DMA_NUM_OF_STREAMS_FAMILY (0)
// EOF DMA

// I2C
#define I2C1_SCL_PA0_AF0
#define I2C1_SCL_PB10_AF0
#define I2C1_SCL_PB11_AF0
#define I2C1_SCL_PB6_AF0
#define I2C1_SDA_PA1_AF0
#define I2C1_SDA_PA2_AF0
#define I2C1_SDA_PB10_AF0
#define I2C1_SDA_PB11_AF0
#define I2C1_SDA_PB7_AF0
#define I2C1_SDA_PB8_AF0
#define I2C2_SCL_PA12_AF0
#define I2C2_SCL_PA13_AF0
#define I2C2_SCL_PA14_AF0
#define I2C2_SCL_PA5_AF0
#define I2C2_SCL_PA6_AF0
#define I2C2_SCL_PA7_AF0
#define I2C2_SDA_PA13_AF0
#define I2C2_SDA_PA14_AF0
#define I2C2_SDA_PA15_AF0
#define I2C2_SDA_PA6_AF0
#define I2C2_SDA_PA7_AF0

#define I2C_MODULE_1 (1)
#define I2C_MODULE_2 (2)

#define I2C_MODULE_COUNT (2)
// EOF I2C

// U(S)ART
#define UART1_RX_PA14_AF1
#define UART1_RX_PA15_AF1
#define UART1_RX_PA4_AF1
#define UART1_RX_PA5_AF1
#define UART1_RX_PA6_AF1
#define UART1_RX_PA8_AF1
#define UART1_RX_PB0_AF0
#define UART1_RX_PB13_AF1
#define UART1_RX_PB14_AF1
#define UART1_RX_PB15_AF1
#define UART1_RX_PB5_AF1
#define UART1_RX_PB7_AF1
#define UART1_RX_PB8_AF1
#define UART1_RX_PB9_AF1
#define UART1_TX_PA10_AF1
#define UART1_TX_PA1_AF1
#define UART1_TX_PA2_AF1
#define UART1_TX_PA4_AF1
#define UART1_TX_PA5_AF1
#define UART1_TX_PA9_AF1
#define UART1_TX_PB14_AF1
#define UART1_TX_PB15_AF1
#define UART1_TX_PB3_AF1
#define UART1_TX_PB4_AF1
#define UART1_TX_PB6_AF1
#define UART1_TX_PB8_AF0
#define UART1_TX_PB9_AF0

#define UART_MODULE_1 (1)

#define UART_MODULE_COUNT (1)
// EOF U(S)ART

// SPI
#define SPI1_MISO_PA13_AF3
#define SPI1_MISO_PA14_AF3
#define SPI1_MISO_PA15_AF3
#define SPI1_MISO_PB2_AF3
#define SPI1_MISO_PB3_AF3
#define SPI1_MISO_PB4_AF3
#define SPI1_MISO_PB9_AF3
#define SPI1_MOSI_PA14_AF3
#define SPI1_MOSI_PA15_AF3
#define SPI1_MOSI_PB3_AF3
#define SPI1_MOSI_PB4_AF3
#define SPI1_MOSI_PB9_AF3
#define SPI1_SCK_PA12_AF3
#define SPI1_SCK_PA13_AF3
#define SPI1_SCK_PA14_AF3
#define SPI1_SCK_PB10_AF3
#define SPI1_SCK_PB11_AF3
#define SPI1_SCK_PB1_AF3
#define SPI3_MISO_PA8_AF3
#define SPI3_MISO_PB7_AF3
#define SPI3_MISO_PB8_AF3
#define SPI3_MOSI_PA11_AF3
#define SPI3_MOSI_PB7_AF3
#define SPI3_MOSI_PB8_AF3
#define SPI3_SCK_PA2_AF3
#define SPI3_SCK_PA3_AF3
#define SPI3_SCK_PB6_AF3

#define SPI_MODULE_1 (1)
#define SPI_MODULE_3 (2)

#define SPI_MODULE_COUNT (2)
// EOF SPI

// TIM
#define TIM16_CH1N_PA2_AF2
#define TIM16_CH1N_PA3_AF2
#define TIM16_CH1N_PB1_AF2
#define TIM16_CH1_PA1_AF2
#define TIM16_CH1_PA2_AF2
#define TIM16_CH1_PA3_AF2
#define TIM16_CH1_PB0_AF2
#define TIM2_CH1_PA12_AF3
#define TIM2_CH1_PA12_AF4
#define TIM2_CH1_PA13_AF3
#define TIM2_CH1_PA13_AF4
#define TIM2_CH1_PA3_AF3
#define TIM2_CH1_PA3_AF4
#define TIM2_CH1_PA4_AF3
#define TIM2_CH1_PA4_AF4
#define TIM2_CH1_PA5_AF3
#define TIM2_CH1_PA5_AF4
#define TIM2_CH1_PA7_AF3
#define TIM2_CH1_PA7_AF4
#define TIM2_CH2_PA6_AF3
#define TIM2_CH2_PA6_AF4
#define TIM2_CH2_PB10_AF3
#define TIM2_CH2_PB10_AF4
#define TIM2_CH2_PB11_AF3
#define TIM2_CH2_PB11_AF4
#define TIM2_CH3_PA0_AF3
#define TIM2_CH3_PA0_AF4
#define TIM2_CH3_PA8_AF3
#define TIM2_CH3_PA8_AF4
#define TIM2_CH3_PB12_AF3
#define TIM2_CH3_PB12_AF4
#define TIM2_CH3_PB6_AF3
#define TIM2_CH3_PB6_AF4
#define TIM2_CH4_PA10_AF3
#define TIM2_CH4_PA10_AF4
#define TIM2_CH4_PA1_AF3
#define TIM2_CH4_PA1_AF4
#define TIM2_CH4_PA2_AF3
#define TIM2_CH4_PA2_AF4
#define TIM2_CH4_PA9_AF3
#define TIM2_CH4_PA9_AF4
#define TIM2_CH4_PB13_AF3
#define TIM2_CH4_PB13_AF4
#define TIM2_CH4_PB14_AF3
#define TIM2_CH4_PB14_AF4
#define TIM2_CH4_PB3_AF3
#define TIM2_CH4_PB3_AF4
#define TIM2_CH4_PB4_AF3
#define TIM2_CH4_PB4_AF4
#define TIM2_CH4_PB7_AF3
#define TIM2_CH4_PB7_AF4
#define TIM2_CH4_PB8_AF3
#define TIM2_CH4_PB8_AF4
#define TIM2_CH4_PB9_AF3
#define TIM2_CH4_PB9_AF4

#define TIM_MODULE_2 (1)
#define TIM_MODULE_16 (2)

#define TIM_MODULE_COUNT (2)

#define TIM16_BUS (0)
#define TIM2_BUS (0)
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

#define __PORT_A_CN
#define __PORT_B_CN

#define PORT_COUNT (2)
#define PORT_SIZE (16)
// EOF GPIO

// IVT_TABLE
#define UART_IVT (8)
#define UART_NVIC (24)
// EOF IVT_TABLE

#ifdef __cplusplus
}
#endif

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
