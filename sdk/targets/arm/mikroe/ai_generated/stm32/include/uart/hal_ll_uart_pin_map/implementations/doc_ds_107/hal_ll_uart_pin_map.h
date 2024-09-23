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
 * @file  hal_ll_uart_pin_map.h
 * @brief UART HAL LOW LEVEL PIN MAPS.
 */

#ifndef _HAL_LL_UART_PIN_MAP_H_
#define _HAL_LL_UART_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_uart_module_num(_module_num) (_module_num - 1)
#define hal_ll_usart_module_num(_module_num) hal_ll_uart_module_num(_module_num)
#define hal_ll_lpuart_module_num(_module_num) hal_ll_uart_module_num(_module_num)

/*!< @brief Pin structure */
typedef struct
{
    uint8_t module_index;
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    uint32_t af;
} hal_ll_uart_pin_map_t;

#ifdef UART_MODULE_1
#define USART_MODULE_1 UART_MODULE_1
#define UART1_BASE_ADDRESS (0x40011000UL)
#define UART1_BASE_ADDR UART1_BASE_ADDRESS
#define USART1_BASE_ADDR UART1_BASE_ADDRESS
#define USART1_BASE_ADDRESS UART1_BASE_ADDRESS
#define HAL_LL_UART1_BASE_ADDR UART1_BASE_ADDRESS
#define HAL_LL_USART1_BASE_ADDR UART1_BASE_ADDRESS
#define HAL_LL_UART1_BASE_ADDRESS UART1_BASE_ADDRESS
#define HAL_LL_USART1_BASE_ADDRESS UART1_BASE_ADDRESS
#endif
#ifdef UART_MODULE_2
#define USART_MODULE_2 UART_MODULE_2
#define UART2_BASE_ADDRESS (0x40004400UL)
#define UART2_BASE_ADDR UART2_BASE_ADDRESS
#define USART2_BASE_ADDR UART2_BASE_ADDRESS
#define USART2_BASE_ADDRESS UART2_BASE_ADDRESS
#define HAL_LL_UART2_BASE_ADDR UART2_BASE_ADDRESS
#define HAL_LL_USART2_BASE_ADDR UART2_BASE_ADDRESS
#define HAL_LL_UART2_BASE_ADDRESS UART2_BASE_ADDRESS
#define HAL_LL_USART2_BASE_ADDRESS UART2_BASE_ADDRESS
#endif
#ifdef UART_MODULE_3
#define USART_MODULE_3 UART_MODULE_3
#define UART3_BASE_ADDRESS (0x40004800UL)
#define UART3_BASE_ADDR UART3_BASE_ADDRESS
#define USART3_BASE_ADDR UART3_BASE_ADDRESS
#define USART3_BASE_ADDRESS UART3_BASE_ADDRESS
#define HAL_LL_UART3_BASE_ADDR UART3_BASE_ADDRESS
#define HAL_LL_USART3_BASE_ADDR UART3_BASE_ADDRESS
#define HAL_LL_UART3_BASE_ADDRESS UART3_BASE_ADDRESS
#define HAL_LL_USART3_BASE_ADDRESS UART3_BASE_ADDRESS
#endif
#ifdef UART_MODULE_4
#define USART_MODULE_4 UART_MODULE_4
#define UART4_BASE_ADDRESS (0x40004C00UL)
#define UART4_BASE_ADDR UART4_BASE_ADDRESS
#define USART4_BASE_ADDR UART4_BASE_ADDRESS
#define USART4_BASE_ADDRESS UART4_BASE_ADDRESS
#define HAL_LL_UART4_BASE_ADDR UART4_BASE_ADDRESS
#define HAL_LL_USART4_BASE_ADDR UART4_BASE_ADDRESS
#define HAL_LL_UART4_BASE_ADDRESS UART4_BASE_ADDRESS
#define HAL_LL_USART4_BASE_ADDRESS UART4_BASE_ADDRESS
#endif
#ifdef UART_MODULE_5
#define USART_MODULE_5 UART_MODULE_5
#define UART5_BASE_ADDRESS (0x40005000UL)
#define UART5_BASE_ADDR UART5_BASE_ADDRESS
#define USART5_BASE_ADDR UART5_BASE_ADDRESS
#define USART5_BASE_ADDRESS UART5_BASE_ADDRESS
#define HAL_LL_UART5_BASE_ADDR UART5_BASE_ADDRESS
#define HAL_LL_USART5_BASE_ADDR UART5_BASE_ADDRESS
#define HAL_LL_UART5_BASE_ADDRESS UART5_BASE_ADDRESS
#define HAL_LL_USART5_BASE_ADDRESS UART5_BASE_ADDRESS
#endif
#ifdef UART_MODULE_6
#define USART_MODULE_6 UART_MODULE_6
#define UART6_BASE_ADDRESS (0x40011400UL)
#define UART6_BASE_ADDR UART6_BASE_ADDRESS
#define USART6_BASE_ADDR UART6_BASE_ADDRESS
#define USART6_BASE_ADDRESS UART6_BASE_ADDRESS
#define HAL_LL_UART6_BASE_ADDR UART6_BASE_ADDRESS
#define HAL_LL_USART6_BASE_ADDR UART6_BASE_ADDRESS
#define HAL_LL_UART6_BASE_ADDRESS UART6_BASE_ADDRESS
#define HAL_LL_USART6_BASE_ADDRESS UART6_BASE_ADDRESS
#endif
#ifdef UART_MODULE_7
#define USART_MODULE_7 UART_MODULE_7
#define UART7_BASE_ADDRESS (0x40007800UL)
#define UART7_BASE_ADDR UART7_BASE_ADDRESS
#define USART7_BASE_ADDR UART7_BASE_ADDRESS
#define USART7_BASE_ADDRESS UART7_BASE_ADDRESS
#define HAL_LL_UART7_BASE_ADDR UART7_BASE_ADDRESS
#define HAL_LL_USART7_BASE_ADDR UART7_BASE_ADDRESS
#define HAL_LL_UART7_BASE_ADDRESS UART7_BASE_ADDRESS
#define HAL_LL_USART7_BASE_ADDRESS UART7_BASE_ADDRESS
#endif
#ifdef UART_MODULE_8
#define USART_MODULE_8 UART_MODULE_8
#define UART8_BASE_ADDRESS (0x40007C00UL)
#define UART8_BASE_ADDR UART8_BASE_ADDRESS
#define USART8_BASE_ADDR UART8_BASE_ADDRESS
#define USART8_BASE_ADDRESS UART8_BASE_ADDRESS
#define HAL_LL_UART8_BASE_ADDR UART8_BASE_ADDRESS
#define HAL_LL_USART8_BASE_ADDR UART8_BASE_ADDRESS
#define HAL_LL_UART8_BASE_ADDRESS UART8_BASE_ADDRESS
#define HAL_LL_USART8_BASE_ADDRESS UART8_BASE_ADDRESS
#endif
#ifdef UART_MODULE_9
#define USART_MODULE_9 UART_MODULE_9
#define UART9_BASE_ADDRESS (0x40011800UL)
#define UART9_BASE_ADDR UART9_BASE_ADDRESS
#define USART9_BASE_ADDR UART9_BASE_ADDRESS
#define USART9_BASE_ADDRESS UART9_BASE_ADDRESS
#define HAL_LL_UART9_BASE_ADDR UART9_BASE_ADDRESS
#define HAL_LL_USART9_BASE_ADDR UART9_BASE_ADDRESS
#define HAL_LL_UART9_BASE_ADDRESS UART9_BASE_ADDRESS
#define HAL_LL_USART9_BASE_ADDRESS UART9_BASE_ADDRESS
#endif
#ifdef UART_MODULE_10
#define USART_MODULE_10 UART_MODULE_10
#define UART10_BASE_ADDRESS (0x40011C00UL)
#define UART10_BASE_ADDR UART10_BASE_ADDRESS
#define USART10_BASE_ADDR UART10_BASE_ADDRESS
#define USART10_BASE_ADDRESS UART10_BASE_ADDRESS
#define HAL_LL_UART10_BASE_ADDR UART10_BASE_ADDRESS
#define HAL_LL_USART10_BASE_ADDR UART10_BASE_ADDRESS
#define HAL_LL_UART10_BASE_ADDRESS UART10_BASE_ADDRESS
#define HAL_LL_USART10_BASE_ADDRESS UART10_BASE_ADDRESS
#endif

/*!< @brief UART TX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_tx_map[] =
{
    #ifdef UART4_TX_PA0_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PA0, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART4_TX_PA12_AF6
    {hal_ll_uart_module_num(UART_MODULE_4), PA12, UART4_BASE_ADDRESS, 6},
    #endif
    #ifdef UART4_TX_PB9_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PB9, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART4_TX_PC10_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PC10, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART5_TX_PB13_AF14
    {hal_ll_uart_module_num(UART_MODULE_5), PB13, UART5_BASE_ADDRESS, 14},
    #endif
    #ifdef UART5_TX_PB6_AF14
    {hal_ll_uart_module_num(UART_MODULE_5), PB6, UART5_BASE_ADDRESS, 14},
    #endif
    #ifdef UART5_TX_PC12_AF8
    {hal_ll_uart_module_num(UART_MODULE_5), PC12, UART5_BASE_ADDRESS, 8},
    #endif
    #ifdef UART7_TX_PA15_AF11
    {hal_ll_uart_module_num(UART_MODULE_7), PA15, UART7_BASE_ADDRESS, 11},
    #endif
    #ifdef UART7_TX_PB4_AF11
    {hal_ll_uart_module_num(UART_MODULE_7), PB4, UART7_BASE_ADDRESS, 11},
    #endif
    #ifdef USART1_TX_PA9_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PA9, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART1_TX_PB14_AF4
    {hal_ll_usart_module_num(USART_MODULE_1), PB14, USART1_BASE_ADDRESS, 4},
    #endif
    #ifdef USART1_TX_PB6_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PB6, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_TX_PA2_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PA2, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_TX_PB10_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PB10, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_TX_PC10_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PC10, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART6_TX_PC6_AF7
    {hal_ll_usart_module_num(USART_MODULE_6), PC6, USART6_BASE_ADDRESS, 7},
    #endif
    #ifdef UART4_TX_PD1_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PD1, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART7_TX_PE8_AF7
    {hal_ll_uart_module_num(UART_MODULE_7), PE8, UART7_BASE_ADDRESS, 7},
    #endif
    #ifdef UART8_TX_PE1_AF8
    {hal_ll_uart_module_num(UART_MODULE_8), PE1, UART8_BASE_ADDRESS, 8},
    #endif
    #ifdef UART9_TX_PD15_AF11
    {hal_ll_uart_module_num(UART_MODULE_9), PD15, UART9_BASE_ADDRESS, 11},
    #endif
    #ifdef USART2_TX_PD5_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PD5, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_TX_PD8_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PD8, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef UART7_TX_PF7_AF7
    {hal_ll_uart_module_num(UART_MODULE_7), PF7, UART7_BASE_ADDRESS, 7},
    #endif
    #ifdef UART9_TX_PG1_AF11
    {hal_ll_uart_module_num(UART_MODULE_9), PG1, UART9_BASE_ADDRESS, 11},
    #endif
    #ifdef USART6_TX_PG14_AF7
    {hal_ll_usart_module_num(USART_MODULE_6), PG14, USART6_BASE_ADDRESS, 7},
    #endif
    #ifdef UART4_TX_PH13_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PH13, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART8_TX_PJ8_AF8
    {hal_ll_uart_module_num(UART_MODULE_8), PJ8, UART8_BASE_ADDRESS, 8},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END TX
};

/*!< @brief UART RX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_rx_map[] =
{
    #ifdef UART4_RX_PA11_AF6
    {hal_ll_uart_module_num(UART_MODULE_4), PA11, UART4_BASE_ADDRESS, 6},
    #endif
    #ifdef UART4_RX_PA1_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PA1, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART4_RX_PB8_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PB8, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART4_RX_PC11_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PC11, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART5_RX_PB12_AF14
    {hal_ll_uart_module_num(UART_MODULE_5), PB12, UART5_BASE_ADDRESS, 14},
    #endif
    #ifdef UART5_RX_PB5_AF14
    {hal_ll_uart_module_num(UART_MODULE_5), PB5, UART5_BASE_ADDRESS, 14},
    #endif
    #ifdef UART5_RX_PD2_AF8
    {hal_ll_uart_module_num(UART_MODULE_5), PD2, UART5_BASE_ADDRESS, 8},
    #endif
    #ifdef UART7_RX_PA8_AF11
    {hal_ll_uart_module_num(UART_MODULE_7), PA8, UART7_BASE_ADDRESS, 11},
    #endif
    #ifdef UART7_RX_PB3_AF11
    {hal_ll_uart_module_num(UART_MODULE_7), PB3, UART7_BASE_ADDRESS, 11},
    #endif
    #ifdef USART1_RX_PA10_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PA10, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART1_RX_PB15_AF4
    {hal_ll_usart_module_num(USART_MODULE_1), PB15, USART1_BASE_ADDRESS, 4},
    #endif
    #ifdef USART1_RX_PB7_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PB7, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_RX_PA3_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PA3, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_RX_PC11_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PC11, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART6_RX_PC7_AF7
    {hal_ll_usart_module_num(USART_MODULE_6), PC7, USART6_BASE_ADDRESS, 7},
    #endif
    #ifdef UART4_RX_PD0_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PD0, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART7_RX_PE7_AF7
    {hal_ll_uart_module_num(UART_MODULE_7), PE7, UART7_BASE_ADDRESS, 7},
    #endif
    #ifdef UART8_RX_PE0_AF8
    {hal_ll_uart_module_num(UART_MODULE_8), PE0, UART8_BASE_ADDRESS, 8},
    #endif
    #ifdef UART9_RX_PD14_AF11
    {hal_ll_uart_module_num(UART_MODULE_9), PD14, UART9_BASE_ADDRESS, 11},
    #endif
    #ifdef USART2_RX_PD6_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PD6, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_RX_PB11_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PB11, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_RX_PD9_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PD9, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef UART7_RX_PF6_AF7
    {hal_ll_uart_module_num(UART_MODULE_7), PF6, UART7_BASE_ADDRESS, 7},
    #endif
    #ifdef UART9_RX_PG0_AF11
    {hal_ll_uart_module_num(UART_MODULE_9), PG0, UART9_BASE_ADDRESS, 11},
    #endif
    #ifdef USART6_RX_PG9_AF7
    {hal_ll_usart_module_num(USART_MODULE_6), PG9, USART6_BASE_ADDRESS, 7},
    #endif
    #ifdef UART4_RX_PH14_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PH14, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART4_RX_PI9_AF8
    {hal_ll_uart_module_num(UART_MODULE_4), PI9, UART4_BASE_ADDRESS, 8},
    #endif
    #ifdef UART8_RX_PJ9_AF8
    {hal_ll_uart_module_num(UART_MODULE_8), PJ9, UART8_BASE_ADDRESS, 8},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END RX
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_UART_PIN_MAP_H_
// ------------------------------------------------------------------------- END
