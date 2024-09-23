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
 * @file  hal_ll_i2c_pin_map.h
 * @brief I2C HAL LOW LEVEL PIN MAP.
 */

#ifndef _HAL_LL_I2C_PIN_MAP_H_
#define _HAL_LL_I2C_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_i2c_module_num(_module_num) (_module_num - 1)

/*!< @brief Macro defining `weak` attribute */
#define __weak __attribute__((weak))

/*!< @brief I2C module base addresses */
#ifdef I2C_MODULE_1
static const hal_ll_base_addr_t HAL_LL_I2C1_BASE_ADDR = 0x41000000;
#endif

#ifdef I2C_MODULE_2
static const hal_ll_base_addr_t HAL_LL_I2C2_BASE_ADDR = 0x41001000;
#endif


/*!< @brief I2C module alternate functions */
#ifdef I2C_MODULE_1
static const uint8_t HAL_LL_I2C1_GPIO_AF0 = 0;
#endif

#ifdef I2C_MODULE_2
static const uint8_t HAL_LL_I2C2_GPIO_AF0 = 0;
#endif



/*!< @brief Pin function structure */
typedef struct
{
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    hal_ll_pin_name_t module_index;
    uint32_t af;
} hal_ll_i2c_pin_map_t;

/*!< @brief I2C SCL pins */
static const hal_ll_i2c_pin_map_t hal_ll_i2c_scl_map[] =
{
    //------------ BEGIN SCL
// /*!< @brief Macros used for STM32F1xx chip remap */
// #define HAL_LL_I2C_AFIO_MAPR_REMAP 0x2
// #define HAL_LL_I2C_REMAP_DISABLE 0
// #define HAL_LL_I2C_REMAP_ENABLE 0x08000000UL

// static const uint32_t HAL_LL_I2C1_GPIO_REMAP = HAL_LL_I2C_AFIO_MAPR_REMAP | HAL_LL_I2C_REMAP_ENABLE;
    #ifdef I2C_MODULE_1
    #ifdef I2C1_SCL_PA0_AF0
    {PA0, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SCL_PB6_AF0
    {PB6, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SCL_PB10_AF0
    {PB10, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SCL_PB11_AF0
    {PB11, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #endif


// /*!< @brief Macros used for STM32F1xx chip remap */
// #define HAL_LL_I2C_AFIO_MAPR_REMAP 0x2
// #define HAL_LL_I2C_REMAP_DISABLE 0
// #define HAL_LL_I2C_REMAP_ENABLE 0x08000000UL

// static const uint32_t HAL_LL_I2C1_GPIO_REMAP = HAL_LL_I2C_AFIO_MAPR_REMAP | HAL_LL_I2C_REMAP_ENABLE;
    #ifdef I2C_MODULE_2
    #ifdef I2C2_SCL_PA5_AF0
    {PA5, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SCL_PA6_AF0
    {PA6, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SCL_PA7_AF0
    {PA7, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SCL_PA12_AF0
    {PA12, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SCL_PA13_AF0
    {PA13, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SCL_PA14_AF0
    {PA14, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #endif



    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
    //------------ END SCL
};

/*!< @brief I2C SDA pins */
static const hal_ll_i2c_pin_map_t hal_ll_i2c_sda_map[] =
{
    //------------ BEGIN SDA
    #ifdef I2C_MODULE_1
    #ifdef I2C1_SDA_PA1_AF0
    {PA1, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SDA_PA2_AF0
    {PA2, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SDA_PB7_AF0
    {PB7, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SDA_PB8_AF0
    {PB8, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SDA_PB10_AF0
    {PB10, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #ifdef I2C1_SDA_PB11_AF0
    {PB11, HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), HAL_LL_I2C1_GPIO_AF0},
    #endif
    #endif


    #ifdef I2C_MODULE_2
    #ifdef I2C2_SDA_PA6_AF0
    {PA6, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SDA_PA7_AF0
    {PA7, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SDA_PA13_AF0
    {PA13, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SDA_PA14_AF0
    {PA14, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #ifdef I2C2_SDA_PA15_AF0
    {PA15, HAL_LL_I2C2_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_2), HAL_LL_I2C2_GPIO_AF0},
    #endif
    #endif



    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
    //------------ END SDA
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_I2C_PIN_MAP_H_
// ------------------------------------------------------------------------- END

