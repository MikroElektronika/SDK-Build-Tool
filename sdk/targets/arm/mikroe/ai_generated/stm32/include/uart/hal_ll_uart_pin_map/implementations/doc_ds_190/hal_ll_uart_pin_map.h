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

/*!< @brief Macro defining `weak` attribute */
#define __weak __attribute__((weak))

/*!< @brief Macros used for STM32F1xx chip remap */
#define HAL_LL_UART_REMAP_ENABLE 0x08000000UL
#define HAL_LL_UART_REMAP_DISABLE 0

/*!< @brief UART module base addresses */
#ifdef UART_MODULE_1
static const hal_ll_base_addr_t HAL_LL_UART1_BASE_ADDRESS = 0x41004000;
#endif


/*!< @brief UART module alternate function values */
#ifdef UART_MODULE_1
static const uint8_t HAL_LL_UART1_GPIO_AF1 = 1;
#endif
#ifdef UART_MODULE_1
static const uint8_t HAL_LL_UART1_GPIO_AF0 = 0;
#endif


/*!< @brief Pin structure */
typedef struct
{
    uint8_t module_index;
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    uint32_t af;
} hal_ll_uart_pin_map_t;

/*!< @brief UART TX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_tx_map[] =
{
    //------------ BEGIN TX

    #ifdef UART_MODULE_1
    #ifdef UART1_TX_PA1_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA1, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PA2_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA2, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PA4_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA4, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PA5_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA5, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PA9_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA9, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PA10_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA10, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PB3_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB3, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PB4_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB4, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PB6_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB6, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PB8_AF0
    {hal_ll_uart_module_num(UART_MODULE_1), PB8, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF0 },
    #endif
    #ifdef UART1_TX_PB9_AF0
    {hal_ll_uart_module_num(UART_MODULE_1), PB9, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF0 },
    #endif
    #ifdef UART1_TX_PB14_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB14, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_TX_PB15_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB15, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #endif



    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END TX
};

/*!< @brief UART RX pins */
static const hal_ll_uart_pin_map_t hal_ll_uart_rx_map[] =
{
    //------------ BEGIN RX

    #ifdef UART_MODULE_1
    #ifdef UART1_RX_PA4_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA4, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PA5_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA5, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PA6_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA6, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PA8_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA8, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PA14_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA14, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PA15_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PA15, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB0_AF0
    {hal_ll_uart_module_num(UART_MODULE_1), PB0, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF0 },
    #endif
    #ifdef UART1_RX_PB5_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB5, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB7_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB7, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB8_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB8, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB9_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB9, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB13_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB13, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB14_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB14, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #ifdef UART1_RX_PB15_AF1
    {hal_ll_uart_module_num(UART_MODULE_1), PB15, HAL_LL_UART1_BASE_ADDRESS, HAL_LL_UART1_GPIO_AF1 },
    #endif
    #endif



    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
    //------------ END RX
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_UART_PIN_MAP_H_
// ------------------------------------------------------------------------- END

