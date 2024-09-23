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
#define SPI1_BASE_ADDRESS (0x40013000UL)
#define SPI1_BASE_ADDR SPI1_BASE_ADDRESS
#define HAL_LL_SPI1_BASE_ADDR SPI1_BASE_ADDRESS
#define HAL_LL_SPI1_BASE_ADDRESS SPI1_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_2
#define SPI2_BASE_ADDRESS (0x40003800UL)
#define SPI2_BASE_ADDR SPI2_BASE_ADDRESS
#define HAL_LL_SPI2_BASE_ADDR SPI2_BASE_ADDRESS
#define HAL_LL_SPI2_BASE_ADDRESS SPI2_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_3
#define SPI3_BASE_ADDRESS (0x40003C00UL)
#define SPI3_BASE_ADDR SPI3_BASE_ADDRESS
#define HAL_LL_SPI3_BASE_ADDR SPI3_BASE_ADDRESS
#define HAL_LL_SPI3_BASE_ADDRESS SPI3_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_4
#define SPI4_BASE_ADDRESS (0x40013400UL)
#define SPI4_BASE_ADDR SPI4_BASE_ADDRESS
#define HAL_LL_SPI4_BASE_ADDR SPI4_BASE_ADDRESS
#define HAL_LL_SPI4_BASE_ADDRESS SPI4_BASE_ADDRESS
#endif
#ifdef SPI_MODULE_5
#define SPI5_BASE_ADDRESS (0x40015000UL)
#define SPI5_BASE_ADDR SPI5_BASE_ADDRESS
#define HAL_LL_SPI5_BASE_ADDR SPI5_BASE_ADDRESS
#define HAL_LL_SPI5_BASE_ADDRESS SPI5_BASE_ADDRESS
#endif

/*!< @brief SPI SCK pins. */
static const hal_ll_spi_master_pin_map_t _spi_sck_map[] =
{
    #ifdef SPI1_SCK_PA5_AF5
    {PA5, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_SCK_PB3_AF5
    {PB3, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_SCK_PA12_AF5
    {PA12, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_SCK_PA9_AF5
    {PA9, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
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
    #ifdef SPI3_SCK_PC10_AF6
    {PC10, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI6_SCK_PA5_AF8
    {PA5, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI6_SCK_PB3_AF8
    {PB3, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI6_SCK_PC12_AF5
    {PC12, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 5},
    #endif
    #ifdef SPI2_SCK_PD3_AF5
    {PD3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI4_SCK_PE12_AF5
    {PE12, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI4_SCK_PE2_AF5
    {PE2, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI1_SCK_PG11_AF5
    {PG11, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI5_SCK_PF7_AF5
    {PF7, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI6_SCK_PG13_AF5
    {PG13, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 5},
    #endif
    #ifdef SPI2_SCK_PI1_AF5
    {PI1, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI5_SCK_PH6_AF5
    {PH6, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI5_SCK_PK0_AF5
    {PK0, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

/*!< @brief SPI MISO pins. */
static const hal_ll_spi_master_pin_map_t _spi_miso_map[] =
{
    #ifdef SPI1_MISO_PA6_AF5
    {PA6, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MISO_PB4_AF5
    {PB4, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MISO_PB14_AF5
    {PB14, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_MISO_PC2_AF5
    {PC2, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MISO_PB4_AF6
    {PB4, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI3_MISO_PC11_AF6
    {PC11, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI6_MISO_PA6_AF8
    {PA6, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI6_MISO_PB4_AF8
    {PB4, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI2_MISO_PC2_C_AF5
    {PC2, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI4_MISO_PE13_AF5
    {PE13, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI4_MISO_PE5_AF5
    {PE5, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI1_MISO_PG9_AF5
    {PG9, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI5_MISO_PF8_AF5
    {PF8, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI6_MISO_PG12_AF5
    {PG12, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 5},
    #endif
    #ifdef SPI2_MISO_PI2_AF5
    {PI2, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI5_MISO_PH7_AF5
    {PH7, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI5_MISO_PJ11_AF5
    {PJ11, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

/*!< @brief SPI MOSI pins. */
static const hal_ll_spi_master_pin_map_t _spi_mosi_map[] =
{
    #ifdef SPI1_MOSI_PA7_AF5
    {PA7, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI1_MOSI_PB5_AF5
    {PB5, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MOSI_PB15_AF5
    {PB15, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_MOSI_PC1_AF5
    {PC1, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI2_MOSI_PC3_AF5
    {PC3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MOSI_PB2_AF7
    {PB2, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 7},
    #endif
    #ifdef SPI3_MOSI_PB5_AF7
    {PB5, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 7},
    #endif
    #ifdef SPI3_MOSI_PC12_AF6
    {PC12, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 6},
    #endif
    #ifdef SPI6_MOSI_PA7_AF8
    {PA7, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI6_MOSI_PB5_AF8
    {PB5, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 8},
    #endif
    #ifdef SPI1_MOSI_PD7_AF5
    {PD7, SPI1_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_1), 5},
    #endif
    #ifdef SPI2_MOSI_PC3_C_AF5
    {PC3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI3_MOSI_PD6_AF5
    {PD6, SPI3_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_3), 5},
    #endif
    #ifdef SPI4_MOSI_PE14_AF5
    {PE14, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI4_MOSI_PE6_AF5
    {PE6, SPI4_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_4), 5},
    #endif
    #ifdef SPI5_MOSI_PF11_AF5
    {PF11, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI5_MOSI_PF9_AF5
    {PF9, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    #ifdef SPI6_MOSI_PG14_AF5
    {PG14, SPI6_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_6), 5},
    #endif
    #ifdef SPI2_MOSI_PI3_AF5
    {PI3, SPI2_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_2), 5},
    #endif
    #ifdef SPI5_MOSI_PJ10_AF5
    {PJ10, SPI5_BASE_ADDRESS, hal_ll_spi_module_num(SPI_MODULE_5), 5},
    #endif
    {HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_PIN_NC}
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_SPI_MASTER_PIN_MAP_H_
// ------------------------------------------------------------------------- END
