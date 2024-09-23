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
#define UART1_BASE_ADDRESS (0x40013800UL)
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

/*!< @brief UART TX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_tx_map[] =
{
    #ifdef USART1_TX_PA12_AF8
    {hal_ll_usart_module_num(USART_MODULE_1), PA12, USART1_BASE_ADDRESS, 8},
    #endif
    #ifdef USART1_TX_PA14(JTCK_SWCLK)
    // {hal_ll_usart_module_num(USART_MODULE_1), PA14(JTCK, USART1_BASE_ADDRESS, 0},
    #endif
    #ifdef USART1_TX_PA2_AF8
    {hal_ll_usart_module_num(USART_MODULE_1), PA2, USART1_BASE_ADDRESS, 8},
    #endif
    #ifdef USART1_TX_PA9_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PA9, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART1_TX_PB6_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PB6, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_TX_PA12_AF4
    {hal_ll_usart_module_num(USART_MODULE_2), PA12, USART2_BASE_ADDRESS, 4},
    #endif
    #ifdef USART2_TX_PA14(JTCK_SWCLK)
    // {hal_ll_usart_module_num(USART_MODULE_2), PA14(JTCK, USART2_BASE_ADDRESS, 0},
    #endif
    #ifdef USART2_TX_PA2_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PA2, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_TX_PA5_AF9
    {hal_ll_usart_module_num(USART_MODULE_2), PA5, USART2_BASE_ADDRESS, 9},
    #endif
    #ifdef USART2_TX_PA8_AF4
    {hal_ll_usart_module_num(USART_MODULE_2), PA8, USART2_BASE_ADDRESS, 4},
    #endif
    #ifdef USART2_TX_PB0_AF9
    {hal_ll_usart_module_num(USART_MODULE_2), PB0, USART2_BASE_ADDRESS, 9},
    #endif
    #ifdef USART2_TX_PB4(NJTRST)_AF13
    {hal_ll_usart_module_num(USART_MODULE_2), PB4(NJTRST), USART2_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_TX_PA4_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA4, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_TX_PA8_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA8, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_TX_PB3(JTDO_TRACESWO)
    // {hal_ll_usart_module_num(USART_MODULE_3), PB3(JTDO, USART3_BASE_ADDRESS, 0},
    #endif
    #ifdef USART3_TX_PB7_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PB7, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART1_TX_PB14_AF4
    {hal_ll_usart_module_num(USART_MODULE_1), PB14, USART1_BASE_ADDRESS, 4},
    #endif
    #ifdef USART2_TX_PC6_AF13
    {hal_ll_usart_module_num(USART_MODULE_2), PC6, USART2_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_TX_PB10_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PB10, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_TX_PC10_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PC10, USART3_BASE_ADDRESS, 7},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END TX
};

/*!< @brief UART RX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_rx_map[] =
{
    #ifdef USART1_RX_PA11_AF8
    {hal_ll_usart_module_num(USART_MODULE_1), PA11, USART1_BASE_ADDRESS, 8},
    #endif
    #ifdef USART1_RX_PA13(JTMS_SWDIO)
    // {hal_ll_usart_module_num(USART_MODULE_1), PA13(JTMS, USART1_BASE_ADDRESS, 0},
    #endif
    #ifdef USART1_RX_PA1_AF8
    {hal_ll_usart_module_num(USART_MODULE_1), PA1, USART1_BASE_ADDRESS, 8},
    #endif
    #ifdef USART1_RX_PB15_AF4
    {hal_ll_usart_module_num(USART_MODULE_1), PB15, USART1_BASE_ADDRESS, 4},
    #endif
    #ifdef USART1_RX_PB7_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PB7, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_RX_PA11_AF4
    {hal_ll_usart_module_num(USART_MODULE_2), PA11, USART2_BASE_ADDRESS, 4},
    #endif
    #ifdef USART2_RX_PA13(JTMS_SWDIO)
    // {hal_ll_usart_module_num(USART_MODULE_2), PA13(JTMS, USART2_BASE_ADDRESS, 0},
    #endif
    #ifdef USART2_RX_PA15(JTDI)_AF9
    {hal_ll_usart_module_num(USART_MODULE_2), PA15(JTDI), USART2_BASE_ADDRESS, 9},
    #endif
    #ifdef USART2_RX_PA3_AF7
    {hal_ll_usart_module_num(USART_MODULE_2), PA3, USART2_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_RX_PB15_AF13
    {hal_ll_usart_module_num(USART_MODULE_2), PB15, USART2_BASE_ADDRESS, 13},
    #endif
    #ifdef USART2_RX_PB1_AF9
    {hal_ll_usart_module_num(USART_MODULE_2), PB1, USART2_BASE_ADDRESS, 9},
    #endif
    #ifdef USART2_RX_PB5_AF13
    {hal_ll_usart_module_num(USART_MODULE_2), PB5, USART2_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PA12_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA12, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PA15(JTDI)_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA15(JTDI), USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PA3_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA3, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PA5_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PA5, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PB8_AF13
    {hal_ll_usart_module_num(USART_MODULE_3), PB8, USART3_BASE_ADDRESS, 13},
    #endif
    #ifdef USART1_RX_PA10_AF7
    {hal_ll_usart_module_num(USART_MODULE_1), PA10, USART1_BASE_ADDRESS, 7},
    #endif
    #ifdef USART2_RX_PC7_AF13
    {hal_ll_usart_module_num(USART_MODULE_2), PC7, USART2_BASE_ADDRESS, 13},
    #endif
    #ifdef USART3_RX_PC11_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PC11, USART3_BASE_ADDRESS, 7},
    #endif
    #ifdef USART3_RX_PC4_AF7
    {hal_ll_usart_module_num(USART_MODULE_3), PC4, USART3_BASE_ADDRESS, 7},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END RX
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_UART_PIN_MAP_H_
// ------------------------------------------------------------------------- END
