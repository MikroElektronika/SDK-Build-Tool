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
 * @file  hal_ll_tim_pin_map.h
 * @brief TIM HAL LOW LEVEL PIN MAP.
 */

#ifndef _HAL_LL_TIM_PIN_MAP_H_
#define _HAL_LL_TIM_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_tim_module_num(_module_num) (_module_num - 1)

/*!< @brief Alternate pin function structure. */
typedef struct
{
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    hal_ll_channel_t channel;
    uint32_t af;
    hal_ll_pin_name_t module_index;
} hal_ll_tim_pin_map_t;

typedef enum
{
    HAL_LL_TIM_CHANNEL_0 = 0,
    HAL_LL_TIM_CHANNEL_1,
    HAL_LL_TIM_CHANNEL_2,
    HAL_LL_TIM_CHANNEL_3,
    HAL_LL_TIM_CHANNEL_4,
    HAL_LL_TIM_CHANNEL_1N,
    HAL_LL_TIM_CHANNEL_2N,
    HAL_LL_TIM_CHANNEL_3N,
    HAL_LL_TIM_CHANNEL_4N
} hal_ll_tim_channel_t;

#ifdef TIM_MODULE_1
#define TIM1_BASE_ADDRESS (0x40012C00UL)
#define TIM1_BASE_ADDR TIM1_BASE_ADDRESS
#define HAL_LL_TIM1_BASE_ADDR TIM1_BASE_ADDRESS
#define HAL_LL_TIM1_BASE_ADDRESS TIM1_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_2
#define TIM2_BASE_ADDRESS (0x40000000UL)
#define TIM2_BASE_ADDR TIM2_BASE_ADDRESS
#define HAL_LL_TIM2_BASE_ADDR TIM2_BASE_ADDRESS
#define HAL_LL_TIM2_BASE_ADDRESS TIM2_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_3
#define TIM3_BASE_ADDRESS (0x40000400UL)
#define TIM3_BASE_ADDR TIM3_BASE_ADDRESS
#define HAL_LL_TIM3_BASE_ADDR TIM3_BASE_ADDRESS
#define HAL_LL_TIM3_BASE_ADDRESS TIM3_BASE_ADDRESS
#endif

/*!< @brief TIM pins. */
static const hal_ll_tim_pin_map_t _tim_map[] = {
    #ifdef LPTIM1_CH1_PA13(JTMS_SWDIO)
    // {PA13(JTMS, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 0, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH1_PA5_AF4
    {PA5, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 4, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH1_PB15_AF2
    {PB15, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH1_PB3(JTDO_TRACESWO)
    // {PB3(JTDO, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 0, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH2_PB4(NJTRST)_AF4
    {PB4(NJTRST), LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 4, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH2_PB8_AF2
    {PB8, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_ETR_PA0_AF4
    // {PA0, LPTIM1_BASE_ADDRESS, 0, 4, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_ETR_PA14(JTCK_SWCLK)
    // // {PA14(JTCK, LPTIM1_BASE_ADDRESS, 0, 0, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_ETR_PA5_AF2
    // {PA5, LPTIM1_BASE_ADDRESS, 0, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM2_CH1_PA14(JTCK_SWCLK)
    // {PA14(JTCK, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 0, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH1_PA15(JTDI)_AF3
    {PA15(JTDI), LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH1_PA4_AF3
    {PA4, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH1_PB8_AF14
    {PB8, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 14, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH2_PA11_AF14
    {PA11, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 14, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH2_PA5_AF3
    {PA5, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_ETR_PA0_AF3
    // {PA0, LPTIM2_BASE_ADDRESS, 0, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_ETR_PA7_AF3
    // {PA7, LPTIM2_BASE_ADDRESS, 0, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_ETR_PB1_AF3
    // {PB1, LPTIM2_BASE_ADDRESS, 0, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef TIM1_BKIN2_PB8_AF1
    // {PB8, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PA4_AF14
    // {PA4, TIM1_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PA6_AF1
    // {PA6, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PB3(JTDO_TRACESWO)
    // // {PB3(JTDO, TIM1_BASE_ADDRESS, 0, 0, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PA3_AF14
    {PA3, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PA7_AF1
    {PA7, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PA13(JTMS_SWDIO)
    // {PA13(JTMS, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 0, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PA8_AF1
    {PA8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PB1_AF14
    {PB1, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PB7_AF14
    {PB7, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PA4_AF1
    {PA4, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB0_AF1
    {PB0, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB7_AF1
    {PB7, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PA14(JTCK_SWCLK)
    // {PA14(JTCK, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 0, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PA9_AF1
    {PA9, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PB4(NJTRST)_AF14
    {PB4(NJTRST), TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PB6_AF14
    {PB6, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PB15_AF1
    {PB15, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PB1_AF1
    {PB1, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PB6_AF1
    {PB6, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PA1_AF14
    {PA1, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PB5_AF1
    {PB5, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4N_PA14(JTCK_SWCLK)
    // {PA14(JTCK, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4N, 0, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4N_PA8_AF14
    {PA8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4N, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4N_PB4(NJTRST)_AF1
    {PB4(NJTRST), TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PA11_AF1
    {PA11, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PA2_AF14
    {PA2, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PA12_AF1
    // {PA12, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PA13(JTMS_SWDIO)
    // // {PA13(JTMS, TIM1_BASE_ADDRESS, 0, 0, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PB0_AF14
    // {PB0, TIM1_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM2_CH1_PA0_AF1
    {PA0, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA15(JTDI)_AF1
    {PA15(JTDI), TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA5_AF1
    {PA5, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PA1_AF1
    {PA1, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB3(JTDO_TRACESWO)
    // {PB3(JTDO, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 0, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA2_AF1
    {PA2, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA7_AF14
    {PA7, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA12_AF14
    {PA12, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA3_AF1
    {PA3, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA0_AF14
    // {PA0, TIM2_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA15(JTDI)_AF14
    // {PA15(JTDI), TIM2_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA5_AF14
    // {PA5, TIM2_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM3_CH1_PA0_AF2
    {PA0, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH1_PA14(JTCK_SWCLK)
    // {PA14(JTCK, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 0, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH1_PA6_AF2
    {PA6, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH1_PB4(NJTRST)_AF2
    {PB4(NJTRST), TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PA11_AF2
    {PA11, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PA7_AF2
    {PA7, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PB5_AF2
    {PB5, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PA8_AF2
    {PA8, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PB0_AF2
    {PB0, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PB6_AF2
    {PB6, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PA12_AF2
    {PA12, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PB15_AF14
    {PB15, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 14, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PB1_AF2
    {PB1, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_ETR_PA2_AF2
    // {PA2, TIM3_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_ETR_PB7_AF2
    // {PB7, TIM3_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef LPTIM1_CH1_PB2_AF5
    {PB2, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 5, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH1_PC12_AF2
    {PC12, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH2_PB2_AF2
    {PB2, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_CH2_PC0_AF2
    {PC0, LPTIM1_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_ETR_PB14_AF2
    // {PB14, LPTIM1_BASE_ADDRESS, 0, 2, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM2_CH1_PB13_AF3
    {PB13, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH1_PC5_AF14
    {PC5, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_1, 14, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH2_PB10_AF14
    {PB10, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 14, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_CH2_PC12_AF3
    {PC12, LPTIM2_BASE_ADDRESS, HAL_LL_LPTIM_CHANNEL_2, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_ETR_PC4_AF3
    // {PC4, LPTIM2_BASE_ADDRESS, 0, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef TIM1_BKIN2_PC10_AF1
    // {PC10, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_PC11_AF14
    // {PC11, TIM1_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PB12_AF1
    // {PB12, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PB13_AF1
    {PB13, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PC6_AF1
    {PC6, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB14_AF1
    {PB14, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB2_AF1
    {PB2, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PC7_AF1
    {PC7, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PA10_AF1
    {PA10, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PC8_AF1
    {PC8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4N_PC5_AF1
    {PC5, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PC12_AF14
    {PC12, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 14, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PC9_AF1
    {PC9, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PC0_AF1
    // {PC0, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM2_CH1_PB2_AF14
    {PB2, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PC11_AF1
    {PC11, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB10_AF1
    {PB10, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PD2_AF1
    {PD2, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PC12_AF1
    {PC12, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PC4_AF1
    {PC4, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PD2_AF14
    // {PD2, TIM2_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM3_CH1_PC6_AF2
    {PC6, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PC7_AF2
    {PC7, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PC8_AF2
    {PC8, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PC9_AF2
    {PC9, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_ETR_PC1_AF2
    // {PC1, TIM3_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_ETR_PD2_AF2
    // {PD2, TIM3_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    { HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_CHANNEL_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC }
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_TIM_PIN_MAP_H_
// ------------------------------------------------------------------------- END
