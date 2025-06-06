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
#define hal_ll_spi_module_num(_module_num) hal_ll_spi_master_module_num(_module_num)

/*!< @brief Pin function structure. */
typedef struct
{
    hal_ll_pin_name_t pin;
    hal_ll_base_addr_t base;
    uint8_t module_index;
    uint32_t af;
} hal_ll_spi_master_pin_map_t;

#ifdef SPI_MODULE_1
#define SPI1_BASE_ADDRESS (0x50013000UL)
#define SPI1_BASE_ADDR SPI1_BASE_ADDRESS
#define HAL_LL_SPI1_BASE_ADDR SPI1_BASE_ADDRESS
#define HAL_LL_SPI1_BASE_ADDRESS SPI1_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_2
#define SPI2_BASE_ADDRESS (0x50003800UL)
#define SPI2_BASE_ADDR SPI2_BASE_ADDRESS
#define HAL_LL_SPI2_BASE_ADDR SPI2_BASE_ADDRESS
#define HAL_LL_SPI2_BASE_ADDRESS SPI2_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_3
#define SPI3_BASE_ADDRESS (0x56002000UL)
#define SPI3_BASE_ADDR SPI3_BASE_ADDRESS
#define HAL_LL_SPI3_BASE_ADDR SPI3_BASE_ADDRESS
#define HAL_LL_SPI3_BASE_ADDRESS SPI3_BASE_ADDRESS
#endif

/*!< @brief SPI SCK pins. */
static const hal_ll_spi_master_pin_map_t _spi_sck_map[] =
{
    #ifdef SPI1_SCK_PA1_AF5
    {PA1, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_SCK_PA5_AF5
    {PA5, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_SCK_PB3_AF5
    {PB3, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_SCK_PA9_AF3
    {PA9, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 3},
    #endif
    #ifdef SPI2_SCK_PB10_AF5
    {PB10, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_SCK_PB13_AF5
    {PB13, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_SCK_PB3_AF6
    {PB3, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI1_SCK_PE13_AF5
    {PE13, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_SCK_PG2_AF5
    {PG2, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_SCK_PD1_AF5
    {PD1, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_SCK_PD3_AF3
    {PD3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 3},
    #endif
    #ifdef SPI3_SCK_PC10_AF6
    {PC10, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI3_SCK_PG9_AF6
    {PG9, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI2_SCK_PI1_AF5
    {PI1, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

/*!< @brief SPI MISO pins. */
static const hal_ll_spi_master_pin_map_t _spi_miso_map[] =
{
    #ifdef SPI1_MISO_PA11_AF5
    {PA11, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MISO_PA6_AF5
    {PA6, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MISO_PB4_AF5
    {PB4, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MISO_PB14_AF5
    {PB14, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MISO_PB4_AF6
    {PB4, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI1_MISO_PE14_AF5
    {PE14, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MISO_PG3_AF5
    {PG3, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MISO_PC2_AF5
    {PC2, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_MISO_PD3_AF5
    {PD3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MISO_PC11_AF6
    {PC11, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI3_MISO_PG10_AF6
    {PG10, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI2_MISO_PI2_AF5
    {PI2, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

/*!< @brief SPI MOSI pins. */
static const hal_ll_spi_master_pin_map_t _spi_mosi_map[] =
{
    #ifdef SPI1_MOSI_PA12_AF5
    {PA12, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MOSI_PA7_AF5
    {PA7, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MOSI_PB5_AF5
    {PB5, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MOSI_PB15_AF5
    {PB15, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MOSI_PB5_AF6
    {PB5, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI1_MOSI_PE15_AF5
    {PE15, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MOSI_PG4_AF5
    {PG4, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MOSI_PC1_AF3
    {PC1, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 3},
    #endif
    #ifdef SPI2_MOSI_PC3_AF5
    {PC3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_MOSI_PD4_AF5
    {PD4, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MOSI_PC12_AF6
    {PC12, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI3_MOSI_PD6_AF5
    {PD6, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 5},
    #endif
    #ifdef SPI3_MOSI_PG11_AF6
    {PG11, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI2_MOSI_PI3_AF5
    {PI3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_SPI_MASTER_PIN_MAP_H_
// ------------------------------------------------------------------------- END
