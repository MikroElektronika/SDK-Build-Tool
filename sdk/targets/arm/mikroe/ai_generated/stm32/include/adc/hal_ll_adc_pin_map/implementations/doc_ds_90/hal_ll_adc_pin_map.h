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
 * @file  hal_ll_adc_pin_map.h
 * @brief Header file containing symbolic pin name definitions.
 */

#ifndef _HAL_LL_ADC_PIN_MAP_H_
#define _HAL_LL_ADC_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_adc_module_num(_module_num) (_module_num - 1)

/**
 * ADC channels.
 */
typedef enum
{
    HAL_LL_ADC_CHANNEL_0 = 0,
    HAL_LL_ADC_CHANNEL_1,
    HAL_LL_ADC_CHANNEL_2,
    HAL_LL_ADC_CHANNEL_3,
    HAL_LL_ADC_CHANNEL_4,
    HAL_LL_ADC_CHANNEL_5,
    HAL_LL_ADC_CHANNEL_6,
    HAL_LL_ADC_CHANNEL_7,
    HAL_LL_ADC_CHANNEL_8,
    HAL_LL_ADC_CHANNEL_9,
    HAL_LL_ADC_CHANNEL_10,
    HAL_LL_ADC_CHANNEL_11,
    HAL_LL_ADC_CHANNEL_12,
    HAL_LL_ADC_CHANNEL_13,
    HAL_LL_ADC_CHANNEL_14,
    HAL_LL_ADC_CHANNEL_15,
    HAL_LL_ADC_CHANNEL_16,
    HAL_LL_ADC_CHANNEL_17,
    HAL_LL_ADC_CHANNEL_18,
    HAL_LL_ADC_CHANNEL_19,
    HAL_LL_ADC_CHANNEL_20,
    HAL_LL_ADC_CHANNEL_21,
    HAL_LL_ADC_CHANNEL_22,
    HAL_LL_ADC_CHANNEL_23,
    HAL_LL_ADC_CHANNEL_24,
    HAL_LL_ADC_CHANNEL_25,
    HAL_LL_ADC_CHANNEL_26,
    HAL_LL_ADC_CHANNEL_27,
    HAL_LL_ADC_CHANNEL_28,
    HAL_LL_ADC_CHANNEL_29,
    HAL_LL_ADC_CHANNEL_30,
    HAL_LL_ADC_CHANNEL_31,

    HAL_LL_ADC_CHANNEL_NC = 0xFFFF
} hal_ll_adc_channel_t;

/*!< @brief ADC pin structure. */
typedef struct
{
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    hal_ll_pin_name_t module_index;
    hal_ll_adc_channel_t channel;
} hal_ll_adc_pin_map_t;

#ifdef ADC_MODULE_1
#define ADC1_BASE_ADDRESS (0x42028000UL)
#define ADC1_BASE_ADDR ADC1_BASE_ADDRESS
#define HAL_LL_ADC1_BASE_ADDR ADC1_BASE_ADDRESS
#define HAL_LL_ADC1_BASE_ADDRESS ADC1_BASE_ADDRESS
#endif

/*!< ADC input pins. */
static const hal_ll_adc_pin_map_t _adc_map[] =
{
    #ifdef ADC1_PA0_CHN1
    // {PA0, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA0_CHP0
    // {PA0, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA1_CHP1
    // {PA1, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA2_CHP14
    // {PA2, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA3_CHP15
    // {PA3, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA4_CHP18
    // {PA4, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA5_CHN18
    // {PA5, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA5_CHP19
    // {PA5, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA6_CHP3
    // {PA6, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA7_CHN3
    // {PA7, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PA7_CHP7
    // {PA7, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PB0_CHN5
    // {PB0, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PB0_CHP9
    // {PB0, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PB1_CHP5
    // {PB1, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC0_CHP10
    // {PC0, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC1_CHN10
    // {PC1, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC1_CHP11
    // {PC1, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC2_CHN11
    // {PC2, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC2_CHP12
    // {PC2, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC3_CHN12
    // {PC3, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC3_CHP13
    // {PC3, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC4_CHP4
    // {PC4, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC5_CHN4
    // {PC5, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    #ifdef ADC1_PC5_CHP8
    // {PC5, ADC1_BASE_ADDRESS, hal_ll_adc_module_num(ADC_MODULE_1), 0},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_CHANNEL_ERROR}
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_ADC_PIN_MAP_H_
// ------------------------------------------------------------------------- END