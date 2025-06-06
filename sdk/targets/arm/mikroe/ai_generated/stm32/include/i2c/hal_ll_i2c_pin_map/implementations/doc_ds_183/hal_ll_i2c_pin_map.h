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

/*!< @brief Pin function structure */
typedef struct
{
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    hal_ll_pin_name_t module_index;
    uint8_t af;
} hal_ll_i2c_pin_map_t;

#ifdef I2C_MODULE_1
#define I2C1_BASE_ADDRESS (0x50005400UL)
#define I2C1_BASE_ADDR I2C1_BASE_ADDRESS
#define HAL_LL_I2C1_BASE_ADDR I2C1_BASE_ADDRESS
#define HAL_LL_I2C1_BASE_ADDRESS I2C1_BASE_ADDRESS
#endif
#ifdef I2C_MODULE_2
#define I2C2_BASE_ADDRESS (0x50005800UL)
#define I2C2_BASE_ADDR I2C2_BASE_ADDRESS
#define HAL_LL_I2C2_BASE_ADDR I2C2_BASE_ADDRESS
#define HAL_LL_I2C2_BASE_ADDRESS I2C2_BASE_ADDRESS
#endif
#ifdef I2C_MODULE_3
#define I2C3_BASE_ADDRESS (0x56002800UL)
#define I2C3_BASE_ADDR I2C3_BASE_ADDRESS
#define HAL_LL_I2C3_BASE_ADDR I2C3_BASE_ADDRESS
#define HAL_LL_I2C3_BASE_ADDRESS I2C3_BASE_ADDRESS
#endif
#ifdef I2C_MODULE_4
#define I2C4_BASE_ADDRESS (0x50008400UL)
#define I2C4_BASE_ADDR I2C4_BASE_ADDRESS
#define HAL_LL_I2C4_BASE_ADDR I2C4_BASE_ADDRESS
#define HAL_LL_I2C4_BASE_ADDRESS I2C4_BASE_ADDRESS
#endif
#ifdef I2C_MODULE_5
#define I2C5_BASE_ADDRESS (0x50009800UL)
#define I2C5_BASE_ADDR I2C5_BASE_ADDRESS
#define HAL_LL_I2C5_BASE_ADDR I2C5_BASE_ADDRESS
#define HAL_LL_I2C5_BASE_ADDRESS I2C5_BASE_ADDRESS
#endif
#ifdef I2C_MODULE_6
#define I2C6_BASE_ADDRESS (0x50009C00UL)
#define I2C6_BASE_ADDR I2C6_BASE_ADDRESS
#define HAL_LL_I2C6_BASE_ADDR I2C6_BASE_ADDRESS
#define HAL_LL_I2C6_BASE_ADDRESS I2C6_BASE_ADDRESS
#endif

/*!< @brief I2C SCL pins */
static const hal_ll_i2c_pin_map_t hal_ll_i2c_scl_map[] =
{
    #ifdef I2C1_SCL_PB6_AF4
    {PB6, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C1_SCL_PB8_AF4
    {PB8, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C1_SCL_PG14_AF4
    {PG14, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C2_SCL_PB10_AF4
    {PB10, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C2_SCL_PB13_AF4
    {PB13, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C2_SCL_PF1_AF4
    {PF1, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C3_SCL_PA7_AF4
    {PA7, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C3_SCL_PC0_AF4
    {PC0, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C3_SCL_PG7_AF4
    {PG7, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C4_SCL_PB10_AF3
    {PB10, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 3},
    #endif
    #ifdef I2C4_SCL_PB6_AF5
    {PB6, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 5},
    #endif
    #ifdef I2C4_SCL_PD12_AF4
    {PD12, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 4},
    #endif
    #ifdef I2C4_SCL_PF14_AF4
    {PF14, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 4},
    #endif
    #ifdef I2C5_SCL_PD1_AF4
    {PD1, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 4},
    #endif
    #ifdef I2C6_SCL_PD1_AF2
    {PD1, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    #ifdef I2C6_SCL_PF1_AF2
    {PF1, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    #ifdef I2C2_SCL_PH4_AF4
    {PH4, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C3_SCL_PH7_AF4
    {PH7, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C5_SCL_PH5_AF2
    {PH5, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 2},
    #endif
    #ifdef I2C5_SCL_PJ2_AF4
    {PJ2, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 4},
    #endif
    #ifdef I2C6_SCL_PJ10_AF2
    {PJ10, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
    //------------ END SCL
};

/*!< @brief I2C SDA pins */
static const hal_ll_i2c_pin_map_t hal_ll_i2c_sda_map[] =
{
    #ifdef I2C1_SDA_PB3_AF4
    {PB3, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C1_SDA_PB7_AF4
    {PB7, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C1_SDA_PB9_AF4
    {PB9, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C1_SDA_PG13_AF4
    {PG13, I2C1_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_1), 4},
    #endif
    #ifdef I2C2_SDA_PB11_AF4
    {PB11, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C2_SDA_PB14_AF4
    {PB14, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C2_SDA_PF0_AF4
    {PF0, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C3_SDA_PB4_AF4
    {PB4, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C3_SDA_PC1_AF4
    {PC1, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C3_SDA_PG8_AF4
    {PG8, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C4_SDA_PB11_AF3
    {PB11, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 3},
    #endif
    #ifdef I2C4_SDA_PB7_AF5
    {PB7, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 5},
    #endif
    #ifdef I2C4_SDA_PD13_AF4
    {PD13, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 4},
    #endif
    #ifdef I2C4_SDA_PF15_AF4
    {PF15, I2C4_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_4), 4},
    #endif
    #ifdef I2C5_SDA_PD0_AF4
    {PD0, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 4},
    #endif
    #ifdef I2C6_SDA_PD0_AF2
    {PD0, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    #ifdef I2C6_SDA_PF0_AF2
    {PF0, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    #ifdef I2C2_SDA_PH5_AF4
    {PH5, I2C2_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_2), 4},
    #endif
    #ifdef I2C3_SDA_PH8_AF4
    {PH8, I2C3_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_3), 4},
    #endif
    #ifdef I2C5_SDA_PH4_AF2
    {PH4, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 2},
    #endif
    #ifdef I2C5_SDA_PJ1_AF4
    {PJ1, I2C5_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_5), 4},
    #endif
    #ifdef I2C6_SDA_PJ9_AF2
    {PJ9, I2C6_BASE_ADDRESS, hal_ll_i2c_module_num(I2C_MODULE_6), 2},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
    //------------ END SDA
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_I2C_PIN_MAP_H_
// ------------------------------------------------------------------------- END
