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
 * @file  hal_ll_can_pin_map.h
 * @brief CAN HAL LOW LEVEL PIN MAPS.
 */

#ifndef _HAL_LL_CAN_PIN_MAP_H_
#define _HAL_LL_CAN_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_can_module_num(_module_num) (_module_num - 1)
#define hal_ll_fdcan_module_num(_module_num) hal_ll_can_module_num(_module_num)

/*!< @brief Pin structure */
typedef struct
{
    uint8_t module_index;
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    uint32_t af;
} hal_ll_can_pin_map_t;

REPLACE_MODULE_MACROS

/*!< @brief CAN RX pins */
static const hal_ll_can_pin_map_t hal_ll_can_rx_map[] =
{
    #ifdef FDCAN1_RX_PA11_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PA11, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PA8_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PA8, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PB3(JTDO_TRACESWO)
    // {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB3(JTDO, FDCAN1_BASE_ADDRESS, 0},
    #endif
    #ifdef FDCAN1_RX_PB5_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB5, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PB8_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB8, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PB12_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB12, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PC10_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PC10, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PC6_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PC6, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_RX_PC8_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PC8, FDCAN1_BASE_ADDRESS, 9},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
};

/*!< @brief CAN TX pins */
static const hal_ll_can_pin_map_t hal_ll_can_tx_map[] =
{
    #ifdef FDCAN1_TX_PA12_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PA12, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB15_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB15, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB4(NJTRST)_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB4(NJTRST), FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB6_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB6, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB7_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB7, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB10_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB10, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PB13_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PB13, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PC7_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PC7, FDCAN1_BASE_ADDRESS, 9},
    #endif
    #ifdef FDCAN1_TX_PC9_AF9
    {hal_ll_fdcan_module_num(FDCAN_MODULE_1), PC9, FDCAN1_BASE_ADDRESS, 9},
    #endif
    {HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_CAN_PIN_MAP_H_
// ------------------------------------------------------------------------- END
