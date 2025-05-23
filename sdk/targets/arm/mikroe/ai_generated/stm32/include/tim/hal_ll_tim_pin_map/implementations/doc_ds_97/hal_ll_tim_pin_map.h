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
#define TIM1_BASE_ADDRESS (0x40010000UL)
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
#ifdef TIM_MODULE_4
#define TIM4_BASE_ADDRESS (0x40000800UL)
#define TIM4_BASE_ADDR TIM4_BASE_ADDRESS
#define HAL_LL_TIM4_BASE_ADDR TIM4_BASE_ADDRESS
#define HAL_LL_TIM4_BASE_ADDRESS TIM4_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_5
#define TIM5_BASE_ADDRESS (0x40000C00UL)
#define TIM5_BASE_ADDR TIM5_BASE_ADDRESS
#define HAL_LL_TIM5_BASE_ADDR TIM5_BASE_ADDRESS
#define HAL_LL_TIM5_BASE_ADDRESS TIM5_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_8
#define TIM8_BASE_ADDRESS (0x40010400UL)
#define TIM8_BASE_ADDR TIM8_BASE_ADDRESS
#define HAL_LL_TIM8_BASE_ADDR TIM8_BASE_ADDRESS
#define HAL_LL_TIM8_BASE_ADDRESS TIM8_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_12
#define TIM12_BASE_ADDRESS (0x40001800UL)
#define TIM12_BASE_ADDR TIM12_BASE_ADDRESS
#define HAL_LL_TIM12_BASE_ADDR TIM12_BASE_ADDRESS
#define HAL_LL_TIM12_BASE_ADDRESS TIM12_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_13
#define TIM13_BASE_ADDRESS (0x40001C00UL)
#define TIM13_BASE_ADDR TIM13_BASE_ADDRESS
#define HAL_LL_TIM13_BASE_ADDR TIM13_BASE_ADDRESS
#define HAL_LL_TIM13_BASE_ADDRESS TIM13_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_14
#define TIM14_BASE_ADDRESS (0x40002000UL)
#define TIM14_BASE_ADDR TIM14_BASE_ADDRESS
#define HAL_LL_TIM14_BASE_ADDR TIM14_BASE_ADDRESS
#define HAL_LL_TIM14_BASE_ADDRESS TIM14_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_15
#define TIM15_BASE_ADDRESS (0x40014000UL)
#define TIM15_BASE_ADDR TIM15_BASE_ADDRESS
#define HAL_LL_TIM15_BASE_ADDR TIM15_BASE_ADDRESS
#define HAL_LL_TIM15_BASE_ADDRESS TIM15_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_16
#define TIM16_BASE_ADDRESS (0x40014400UL)
#define TIM16_BASE_ADDR TIM16_BASE_ADDRESS
#define HAL_LL_TIM16_BASE_ADDR TIM16_BASE_ADDRESS
#define HAL_LL_TIM16_BASE_ADDRESS TIM16_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_17
#define TIM17_BASE_ADDRESS (0x40014800UL)
#define TIM17_BASE_ADDR TIM17_BASE_ADDRESS
#define HAL_LL_TIM17_BASE_ADDR TIM17_BASE_ADDRESS
#define HAL_LL_TIM17_BASE_ADDRESS TIM17_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_23
#define TIM23_BASE_ADDRESS (0x4000E000UL)
#define TIM23_BASE_ADDR TIM23_BASE_ADDRESS
#define HAL_LL_TIM23_BASE_ADDR TIM23_BASE_ADDRESS
#define HAL_LL_TIM23_BASE_ADDRESS TIM23_BASE_ADDRESS
#endif
#ifdef TIM_MODULE_24
#define TIM24_BASE_ADDRESS (0x4000E400UL)
#define TIM24_BASE_ADDR TIM24_BASE_ADDRESS
#define HAL_LL_TIM24_BASE_ADDR TIM24_BASE_ADDRESS
#define HAL_LL_TIM24_BASE_ADDRESS TIM24_BASE_ADDRESS
#endif

/*!< @brief TIM pins. */
static const hal_ll_tim_pin_map_t _tim_map[] = {
    #ifdef LPTIM1_ETR_PE0_AF1
    // {PE0, LPTIM1_BASE_ADDRESS, 0, 1, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM1_ETR_PG14_AF1
    // {PG14, LPTIM1_BASE_ADDRESS, 0, 1, hal_ll_lptim_module_num(LPTIM_MODULE_1)},
    #endif
    #ifdef LPTIM2_ETR_PB11_AF3
    // {PB11, LPTIM2_BASE_ADDRESS, 0, 3, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef LPTIM2_ETR_PE0_AF4
    // {PE0, LPTIM2_BASE_ADDRESS, 0, 4, hal_ll_lptim_module_num(LPTIM_MODULE_2)},
    #endif
    #ifdef TIM12_CH1_PB14_AF2
    {PB14, TIM12_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_12)},
    #endif
    #ifdef TIM12_CH2_PB15_AF2
    {PB15, TIM12_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_12)},
    #endif
    #ifdef TIM13_CH1_PA6_AF9
    {PA6, TIM13_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 9, hal_ll_tim_module_num(TIM_MODULE_13)},
    #endif
    #ifdef TIM13_CH1_PF8_AF9
    {PF8, TIM13_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 9, hal_ll_tim_module_num(TIM_MODULE_13)},
    #endif
    #ifdef TIM14_CH1_PA7_AF9
    {PA7, TIM14_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 9, hal_ll_tim_module_num(TIM_MODULE_14)},
    #endif
    #ifdef TIM14_CH1_PF9_AF9
    {PF9, TIM14_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 9, hal_ll_tim_module_num(TIM_MODULE_14)},
    #endif
    #ifdef TIM15_BKIN_PA0_AF4
    // {PA0, TIM15_BASE_ADDRESS, 0, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_BKIN_PD2_AF4
    // {PD2, TIM15_BASE_ADDRESS, 0, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_BKIN_PE3_AF4
    // {PE3, TIM15_BASE_ADDRESS, 0, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1N_PA1_AF4
    {PA1, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1N_PE4_AF4
    {PE4, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1_PA2_AF4
    {PA2, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1_PC12_AF2
    {PC12, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1_PE5_AF4
    {PE5, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH2_PA3_AF4
    {PA3, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH2_PE6_AF4
    {PE6, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM16_BKIN_PB4(NJTRST)_AF1
    // {PB4(NJTRST), TIM16_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_BKIN_PF10_AF1
    // {PF10, TIM16_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1N_PB6_AF1
    {PB6, TIM16_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1N_PF8_AF1
    {PF8, TIM16_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1_PB8_AF1
    {PB8, TIM16_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1_PF6_AF1
    {PF6, TIM16_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM17_BKIN_PB5_AF1
    // {PB5, TIM17_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM17_BKIN_PG6_AF1
    // {PG6, TIM17_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM17_CH1N_PB7_AF1
    {PB7, TIM17_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM17_CH1N_PF9_AF1
    {PF9, TIM17_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM17_CH1_PB9_AF1
    {PB9, TIM17_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM17_CH1_PF7_AF1
    {PF7, TIM17_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_17)},
    #endif
    #ifdef TIM1_BKIN2_COMP1_PE6_AF11
    // {PE6, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_COMP2_PE6_AF11
    // {PE6, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_PA12_AF12
    // {PA12, TIM1_BASE_ADDRESS, 0, 12, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_PE6_AF1
    // {PE6, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP1_PA6_AF12
    // {PA6, TIM1_BASE_ADDRESS, 0, 12, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP1_PB12_AF13
    // {PB12, TIM1_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP1_PE15_AF13
    // {PE15, TIM1_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP2_PA6_AF12
    // {PA6, TIM1_BASE_ADDRESS, 0, 12, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP2_PB12_AF13
    // {PB12, TIM1_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP2_PE15_AF13
    // {PE15, TIM1_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PA6_AF1
    // {PA6, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PB12_AF1
    // {PB12, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PE15_AF1
    // {PE15, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PA7_AF1
    {PA7, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PB13_AF1
    {PB13, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PE8_AF1
    {PE8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PA8_AF1
    {PA8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PE9_AF1
    {PE9, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB0_AF1
    {PB0, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PB14_AF1
    {PB14, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PE10_AF1
    {PE10, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PA9_AF1
    {PA9, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PE11_AF1
    {PE11, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PB15_AF1
    {PB15, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PB1_AF1
    {PB1, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PE12_AF1
    {PE12, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PA10_AF1
    {PA10, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PE13_AF1
    {PE13, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PA11_AF1
    {PA11, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH4_PE14_AF1
    {PE14, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PA12_AF1
    // {PA12, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PE7_AF1
    // {PE7, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM23_CH1_PF6_AF13
    {PF6, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH1_PG12_AF13
    {PG12, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH2_PF7_AF13
    {PF7, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH2_PG13_AF13
    {PG13, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH3_PF8_AF13
    {PF8, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH3_PG14_AF13
    {PG14, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH4_PF9_AF13
    {PF9, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_ETR_PB2_AF13
    // {PB2, TIM23_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM24_CH1_PF11_AF14
    {PF11, TIM24_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 14, hal_ll_tim_module_num(TIM_MODULE_24)},
    #endif
    #ifdef TIM24_CH4_PF14_AF14
    {PF14, TIM24_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 14, hal_ll_tim_module_num(TIM_MODULE_24)},
    #endif
    #ifdef TIM24_ETR_PB3(JTDO_TRACESWO)
    // // {PB3(JTDO, TIM24_BASE_ADDRESS, 0, 0, hal_ll_tim_module_num(TIM_MODULE_24)},
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
    #ifdef TIM2_CH3_PB10_AF1
    {PB10, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA3_AF1
    {PA3, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB11_AF1
    {PB11, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA0_AF1
    // {PA0, TIM2_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA15(JTDI)_AF1
    // {PA15(JTDI), TIM2_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA5_AF1
    // {PA5, TIM2_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM3_CH1_PA6_AF2
    {PA6, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH1_PB4(NJTRST)_AF2
    {PB4(NJTRST), TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH1_PC6_AF2
    {PC6, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PA7_AF2
    {PA7, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PB5_AF2
    {PB5, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH2_PC7_AF2
    {PC7, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PB0_AF2
    {PB0, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH3_PC8_AF2
    {PC8, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PB1_AF2
    {PB1, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_CH4_PC9_AF2
    {PC9, TIM3_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM3_ETR_PD2_AF2
    // {PD2, TIM3_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_3)},
    #endif
    #ifdef TIM4_CH1_PB6_AF2
    {PB6, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH1_PD12_AF2
    {PD12, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH2_PB7_AF2
    {PB7, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH2_PD13_AF2
    {PD13, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH3_PB8_AF2
    {PB8, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH3_PD14_AF2
    {PD14, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH4_PB9_AF2
    {PB9, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_CH4_PD15_AF2
    {PD15, TIM4_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM4_ETR_PE0_AF2
    // {PE0, TIM4_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_4)},
    #endif
    #ifdef TIM5_CH1_PA0_AF2
    {PA0, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH2_PA1_AF2
    {PA1, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH3_PA2_AF2
    {PA2, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH4_PA3_AF2
    {PA3, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_ETR_PA4_AF2
    // {PA4, TIM5_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM8_BKIN2_COMP1_PA8_AF12
    // {PA8, TIM8_BASE_ADDRESS, 0, 12, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN2_COMP2_PA8_AF12
    // {PA8, TIM8_BASE_ADDRESS, 0, 12, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN2_PA8_AF3
    // {PA8, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_COMP1_PA6_AF10
    // {PA6, TIM8_BASE_ADDRESS, 0, 10, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_COMP2_PA6_AF10
    // {PA6, TIM8_BASE_ADDRESS, 0, 10, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_PA6_AF3
    // {PA6, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1N_PA5_AF3
    {PA5, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1N_PA7_AF3
    {PA7, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1_PC6_AF3
    {PC6, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2N_PB0_AF3
    {PB0, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2N_PB14_AF3
    {PB14, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2_PC7_AF3
    {PC7, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH3N_PB15_AF3
    {PB15, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH3N_PB1_AF3
    {PB1, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH3_PC8_AF3
    {PC8, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH4_PC9_AF3
    {PC9, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_ETR_PA0_AF3
    // {PA0, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_ETR_PG8_AF3
    // {PG8, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM15_BKIN_PA0_C_AF4
    // {PA0, TIM15_BASE_ADDRESS, 0, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM15_CH1N_PA1_C_AF4
    {PA1, TIM15_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 4, hal_ll_tim_module_num(TIM_MODULE_15)},
    #endif
    #ifdef TIM1_BKIN2_COMP1_PG4_AF11
    // {PG4, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_COMP2_PG4_AF11
    // {PG4, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN2_PG4_AF1
    // {PG4, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_ETR_PG5_AF1
    // {PG5, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM23_CH1_PF0_AF13
    {PF0, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH2_PF1_AF13
    {PF1, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH3_PF2_AF13
    {PF2, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_CH4_PF3_AF13
    {PF3, TIM23_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_4, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM23_ETR_PG3_AF13
    // {PG3, TIM23_BASE_ADDRESS, 0, 13, hal_ll_tim_module_num(TIM_MODULE_23)},
    #endif
    #ifdef TIM24_CH2_PF12_AF14
    {PF12, TIM24_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 14, hal_ll_tim_module_num(TIM_MODULE_24)},
    #endif
    #ifdef TIM24_CH3_PF13_AF14
    {PF13, TIM24_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 14, hal_ll_tim_module_num(TIM_MODULE_24)},
    #endif
    #ifdef TIM24_ETR_PG2_AF14
    // {PG2, TIM24_BASE_ADDRESS, 0, 14, hal_ll_tim_module_num(TIM_MODULE_24)},
    #endif
    #ifdef TIM2_CH1_PA0_C_AF1
    {PA0, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PA1_C_AF1
    {PA1, TIM2_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_ETR_PA0_C_AF1
    // {PA0, TIM2_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM5_CH1_PA0_C_AF2
    {PA0, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH1_PH10_AF2
    {PH10, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH2_PA1_C_AF2
    {PA1, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH2_PH11_AF2
    {PH11, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM5_CH3_PH12_AF2
    {PH12, TIM5_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM8_BKIN2_COMP1_PG3_AF11
    // {PG3, TIM8_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN2_COMP2_PG3_AF11
    // {PG3, TIM8_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN2_PG3_AF3
    // {PG3, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_COMP1_PG2_AF11
    // {PG2, TIM8_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_COMP2_PG2_AF11
    // {PG2, TIM8_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_PG2_AF3
    // {PG2, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1N_PH13_AF3
    {PH13, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2N_PH14_AF3
    {PH14, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_ETR_PA0_C_AF3
    // {PA0, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM12_CH1_PH6_AF2
    {PH6, TIM12_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 2, hal_ll_tim_module_num(TIM_MODULE_12)},
    #endif
    #ifdef TIM12_CH2_PH9_AF2
    {PH9, TIM12_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 2, hal_ll_tim_module_num(TIM_MODULE_12)},
    #endif
    #ifdef TIM5_ETR_PH8_AF2
    // {PH8, TIM5_BASE_ADDRESS, 0, 2, hal_ll_tim_module_num(TIM_MODULE_5)},
    #endif
    #ifdef TIM8_CH3N_PH15_AF3
    {PH15, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM1_BKIN_COMP1_PK2_AF11
    // {PK2, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_COMP2_PK2_AF11
    // {PK2, TIM1_BASE_ADDRESS, 0, 11, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_BKIN_PK2_AF1
    // {PK2, TIM1_BASE_ADDRESS, 0, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1N_PK0_AF1
    {PK0, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH1_PK1_AF1
    {PK1, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2N_PJ10_AF1
    {PJ10, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH2_PJ11_AF1
    {PJ11, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3N_PJ8_AF1
    {PJ8, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM1_CH3_PJ9_AF1
    {PJ9, TIM1_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 1, hal_ll_tim_module_num(TIM_MODULE_1)},
    #endif
    #ifdef TIM8_BKIN_COMP1_PK2_AF10
    // {PK2, TIM8_BASE_ADDRESS, 0, 10, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_COMP2_PK2_AF10
    // {PK2, TIM8_BASE_ADDRESS, 0, 10, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_BKIN_PK2_AF3
    // {PK2, TIM8_BASE_ADDRESS, 0, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1N_PJ9_AF3
    {PJ9, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH1_PJ8_AF3
    {PJ8, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_1, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2N_PJ11_AF3
    {PJ11, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH2_PJ10_AF3
    {PJ10, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_2, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH3N_PK1_AF3
    {PK1, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3N, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    #ifdef TIM8_CH3_PK0_AF3
    {PK0, TIM8_BASE_ADDRESS, HAL_LL_TIM_CHANNEL_3, 3, hal_ll_tim_module_num(TIM_MODULE_8)},
    #endif
    { HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_CHANNEL_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC }
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_TIM_PIN_MAP_H_
// ------------------------------------------------------------------------- END
