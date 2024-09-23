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
 * @file  hal_ll_spi_master_pin_map.h
 * @brief SPI HAL LOW LEVEL MASTER PIN MAP.
 */

#ifndef _HAL_LL_SPI_MASTER_PIN_MAP_H_
#define _HAL_LL_SPI_MASTER_PIN_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_spi_master_module_num(_module_num) (_module_num - 1)

/*!< @brief Macro defining `weak` attribute */
#define __weak __attribute__((weak))

/*!< SPI module base addresses. */
#ifdef SPI_MODULE_1
static const hal_ll_base_addr_t HAL_LL_SPI1_BASE_ADDR   = 0x41002000;
#endif

#ifdef SPI_MODULE_3
static const hal_ll_base_addr_t HAL_LL_SPI3_BASE_ADDR   = 0x41007000;
#endif


/*!< SPI modules. */
#ifdef SPI_MODULE_1
static const uint8_t HAL_LL_SPI1_GPIO_AF3 = 3;
#endif

#ifdef SPI_MODULE_3
static const uint8_t HAL_LL_SPI3_GPIO_AF3 = 3;
#endif


/*!< @brief Pin function structure. */
typedef struct
{
    hal_ll_pin_name_t       pin;
    hal_ll_base_addr_t      base;
    uint8_t                 module_index;
    uint32_t                af;
} hal_ll_spi_master_pin_map_t;

/*!< SPI SCK pins. */
static const hal_ll_spi_master_pin_map_t _spi_sck_map[] = {
    #ifdef SPI_MODULE_1
    #ifdef SPI1_SCK_PA12_AF3
    {PA12,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_SCK_PA13_AF3
    {PA13,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_SCK_PA14_AF3
    {PA14,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_SCK_PB1_AF3
    {PB1,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_SCK_PB10_AF3
    {PB10,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_SCK_PB11_AF3
    {PB11,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #endif


    #ifdef SPI_MODULE_3
    #ifdef SPI3_SCK_PA2_AF3
    {PA2,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_SCK_PA3_AF3
    {PA3,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_SCK_PB6_AF3
    {PB6,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #endif



    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
};

/*!< SPI MISO pins. */
static const hal_ll_spi_master_pin_map_t _spi_miso_map[] =
{
    #ifdef SPI_MODULE_1
    #ifdef SPI1_MISO_PA13_AF3
    {PA13,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PA14_AF3
    {PA14,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PA15_AF3
    {PA15,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PB2_AF3
    {PB2,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PB3_AF3
    {PB3,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PB4_AF3
    {PB4,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MISO_PB9_AF3
    {PB9,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #endif


    #ifdef SPI_MODULE_3
    #ifdef SPI3_MISO_PA8_AF3
    {PA8,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_MISO_PB7_AF3
    {PB7,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_MISO_PB8_AF3
    {PB8,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #endif



    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
};

/*!< SPI MOSI pins. */
static const hal_ll_spi_master_pin_map_t _spi_mosi_map[] =
{
    #ifdef SPI_MODULE_1
    #ifdef SPI1_MOSI_PA14_AF3
    {PA14,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MOSI_PA15_AF3
    {PA15,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MOSI_PB3_AF3
    {PB3,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MOSI_PB4_AF3
    {PB4,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #ifdef SPI1_MOSI_PB9_AF3
    {PB9,  HAL_LL_SPI1_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_1), HAL_LL_SPI1_GPIO_AF3},
    #endif
    #endif


    #ifdef SPI_MODULE_3
    #ifdef SPI3_MOSI_PA11_AF3
    {PA11,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_MOSI_PB7_AF3
    {PB7,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #ifdef SPI3_MOSI_PB8_AF3
    {PB8,  HAL_LL_SPI3_BASE_ADDR, hal_ll_spi_master_module_num(SPI_MODULE_3), HAL_LL_SPI3_GPIO_AF3},
    #endif
    #endif



    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC}
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_SPI_MASTER_PIN_MAP_H_
// ------------------------------------------------------------------------- END

