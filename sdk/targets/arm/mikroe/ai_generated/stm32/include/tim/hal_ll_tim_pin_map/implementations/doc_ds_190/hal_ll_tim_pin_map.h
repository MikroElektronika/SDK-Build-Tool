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

#define CAPTURE_COMPARE_COMPLEMENTARY_OUTPUT

/*!< If module is remapped */
#define HAL_LL_TIM_REMAP_DISABLE            0
#define HAL_LL_TIM_REMAP_ENABLE             0x80000000ul

/*!< @brief Macro defining `weak` attribute */
#define __weak __attribute__((weak))

/*!< Abbreviations used in source. */
typedef uint32_t hal_ll_tim_gpio_af_t;

/*!< @brief Alternate pin function structure. */
typedef struct
{
    hal_ll_pin_name_t   pin;
    hal_ll_base_addr_t  base;
    hal_ll_channel_t    channel;
    uint32_t            af;
    hal_ll_pin_name_t   module_index;
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

/*!< TIM module base addresses. */
#ifdef TIM_MODULE_2
#define HAL_LL_TIM2_BASE_ADDR 0x40002000
#endif

#ifdef TIM_MODULE_16
#define HAL_LL_TIM16_BASE_ADDR 0x40005000
#endif


/*!< TIM modules. */
#ifdef TIM_MODULE_2
#define HAL_LL_TIM2_GPIO_AF3 3
#endif
#ifdef TIM_MODULE_2
#define HAL_LL_TIM2_GPIO_AF4 4
#endif

#ifdef TIM_MODULE_16
#define HAL_LL_TIM16_GPIO_AF2 2
#endif


/*!< TIM pins. */
static const hal_ll_tim_pin_map_t _tim_map[] = {
    #ifdef TIM_MODULE_2
    #ifdef TIM2_CH3_PA0_AF3
    {PA0, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA1_AF3
    {PA1, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA2_AF3
    {PA2, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA3_AF3
    {PA3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA4_AF3
    {PA4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA5_AF3
    {PA5, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PA6_AF3
    {PA6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA7_AF3
    {PA7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA8_AF3
    {PA8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA9_AF3
    {PA9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA10_AF3
    {PA10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA12_AF3
    {PA12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA13_AF3
    {PA13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB3_AF3
    {PB3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB4_AF3
    {PB4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB6_AF3
    {PB6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB7_AF3
    {PB7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB8_AF3
    {PB8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB9_AF3
    {PB9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB10_AF3
    {PB10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB11_AF3
    {PB11, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB12_AF3
    {PB12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB13_AF3
    {PB13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB14_AF3
    {PB14, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #endif
    #ifdef TIM_MODULE_2
    #ifdef TIM2_CH3_PA0_AF3
    {PA0, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA0_AF4
    {PA0, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA1_AF3
    {PA1, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA1_AF4
    {PA1, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA2_AF3
    {PA2, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA2_AF4
    {PA2, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA3_AF3
    {PA3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA3_AF4
    {PA3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA4_AF3
    {PA4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA4_AF4
    {PA4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA5_AF3
    {PA5, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA5_AF4
    {PA5, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PA6_AF3
    {PA6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PA6_AF4
    {PA6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA7_AF3
    {PA7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA7_AF4
    {PA7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA8_AF3
    {PA8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PA8_AF4
    {PA8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA9_AF3
    {PA9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA9_AF4
    {PA9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA10_AF3
    {PA10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PA10_AF4
    {PA10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA12_AF3
    {PA12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA12_AF4
    {PA12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA13_AF3
    {PA13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH1_PA13_AF4
    {PA13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB3_AF3
    {PB3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB3_AF4
    {PB3, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB4_AF3
    {PB4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB4_AF4
    {PB4, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB6_AF3
    {PB6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB6_AF4
    {PB6, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB7_AF3
    {PB7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB7_AF4
    {PB7, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB8_AF3
    {PB8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB8_AF4
    {PB8, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB9_AF3
    {PB9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB9_AF4
    {PB9, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB10_AF3
    {PB10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB10_AF4
    {PB10, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB11_AF3
    {PB11, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH2_PB11_AF4
    {PB11, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_2, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB12_AF3
    {PB12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH3_PB12_AF4
    {PB12, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_3, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB13_AF3
    {PB13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB13_AF4
    {PB13, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB14_AF3
    {PB14, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF3, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #ifdef TIM2_CH4_PB14_AF4
    {PB14, HAL_LL_TIM2_BASE_ADDR, HAL_LL_TIM_CHANNEL_4, HAL_LL_TIM2_GPIO_AF4, hal_ll_tim_module_num(TIM_MODULE_2)},
    #endif
    #endif


    #ifdef TIM_MODULE_16
    #ifdef TIM16_CH1_PA1_AF2
    {PA1, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1_PA2_AF2
    {PA2, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1_PA3_AF2
    {PA3, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1_PB0_AF2
    {PB0, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #endif


    #ifdef CAPTURE_COMPARE_COMPLEMENTARY_OUTPUT
    #ifdef TIM16_CH1N_PA2_AF2
    {PA2, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1N, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1N_PA3_AF2
    {PA3, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1N, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #ifdef TIM16_CH1N_PB1_AF2
    {PB1, HAL_LL_TIM16_BASE_ADDR, HAL_LL_TIM_CHANNEL_1N, HAL_LL_TIM16_GPIO_AF2, hal_ll_tim_module_num(TIM_MODULE_16)},
    #endif
    #endif



    { HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_CHANNEL_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC }
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_TIM_PIN_MAP_H_
// ------------------------------------------------------------------------- END

