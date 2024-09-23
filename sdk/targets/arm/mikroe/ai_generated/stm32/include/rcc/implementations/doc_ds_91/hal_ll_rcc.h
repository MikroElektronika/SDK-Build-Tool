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
 * @file  hal_ll_rcc.h
 * @brief Reset and Clock control defines necessary for HAL.
 */

#ifndef _HAL_LL_RCC_H_
#define _HAL_LL_RCC_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>

/**
 *  Core register addresses used in source
 */
#define _RCC_BASE (0x40021000UL)
#define _RCC_CR ((uint32_t *)(_RCC_BASE + 0x0))
#define _RCC_HSICFGR ((uint32_t *)(_RCC_BASE + 0x10))
#define _RCC_CRRCR ((uint32_t *)(_RCC_BASE + 0x14))
#define _RCC_CSICFGR ((uint32_t *)(_RCC_BASE + 0x18))
#define _RCC_CFGR1 ((uint32_t *)(_RCC_BASE + 0x1C))
#define _RCC_CFGR2 ((uint32_t *)(_RCC_BASE + 0x20))
#define _RCC_PLL1CFGR ((uint32_t *)(_RCC_BASE + 0x28))
#define _RCC_PLL2CFGR ((uint32_t *)(_RCC_BASE + 0x2C))
#define _RCC_PLL3CFGR ((uint32_t *)(_RCC_BASE + 0x30))
#define _RCC_PLL1DIVR ((uint32_t *)(_RCC_BASE + 0x34))
#define _RCC_PLL1FRACR ((uint32_t *)(_RCC_BASE + 0x38))
#define _RCC_PLL2DIVR ((uint32_t *)(_RCC_BASE + 0x3C))
#define _RCC_PLL2FRACR ((uint32_t *)(_RCC_BASE + 0x40))
#define _RCC_PLL3DIVR ((uint32_t *)(_RCC_BASE + 0x44))
#define _RCC_PLL3FRACR ((uint32_t *)(_RCC_BASE + 0x48))
#define _RCC_CIER ((uint32_t *)(_RCC_BASE + 0x50))
#define _RCC_CIFR ((uint32_t *)(_RCC_BASE + 0x54))
#define _RCC_CICR ((uint32_t *)(_RCC_BASE + 0x58))
#define _RCC_AHB1RSTR ((uint32_t *)(_RCC_BASE + 0x60))
#define _RCC_AHB2RSTR ((uint32_t *)(_RCC_BASE + 0x64))
#define _RCC_AHB4RSTR ((uint32_t *)(_RCC_BASE + 0x6C))
#define _RCC_APB1LRSTR ((uint32_t *)(_RCC_BASE + 0x74))
#define _RCC_APB1HRSTR ((uint32_t *)(_RCC_BASE + 0x78))
#define _RCC_APB2RSTR ((uint32_t *)(_RCC_BASE + 0x7C))
#define _RCC_APB3RSTR ((uint32_t *)(_RCC_BASE + 0x80))
#define _RCC_AHB1ENR ((uint32_t *)(_RCC_BASE + 0x88))
#define _RCC_AHB2ENR ((uint32_t *)(_RCC_BASE + 0x8C))
#define _RCC_AHB4ENR ((uint32_t *)(_RCC_BASE + 0x94))
#define _RCC_APB1LENR ((uint32_t *)(_RCC_BASE + 0x9C))
#define _RCC_APB1HENR ((uint32_t *)(_RCC_BASE + 0xA0))
#define _RCC_APB2ENR ((uint32_t *)(_RCC_BASE + 0xA4))
#define _RCC_APB3ENR ((uint32_t *)(_RCC_BASE + 0xA8))
#define _RCC_AHB1LPENR ((uint32_t *)(_RCC_BASE + 0xB0))
#define _RCC_AHB2LPENR ((uint32_t *)(_RCC_BASE + 0xB4))
#define _RCC_AHB4LPENR ((uint32_t *)(_RCC_BASE + 0xBC))
#define _RCC_APB1LLPENR ((uint32_t *)(_RCC_BASE + 0xC4))
#define _RCC_APB1HLPENR ((uint32_t *)(_RCC_BASE + 0xC8))
#define _RCC_APB2LPENR ((uint32_t *)(_RCC_BASE + 0xCC))
#define _RCC_APB3LPENR ((uint32_t *)(_RCC_BASE + 0xD0))
#define _RCC_CCIPR1 ((uint32_t *)(_RCC_BASE + 0xD8))
#define _RCC_CCIPR2 ((uint32_t *)(_RCC_BASE + 0xDC))
#define _RCC_CCIPR3 ((uint32_t *)(_RCC_BASE + 0xE0))
#define _RCC_CCIPR4 ((uint32_t *)(_RCC_BASE + 0xE4))
#define _RCC_CCIPR5 ((uint32_t *)(_RCC_BASE + 0xE8))
#define _RCC_BDCR ((uint32_t *)(_RCC_BASE + 0xF0))
#define _RCC_RSR ((uint32_t *)(_RCC_BASE + 0xF4))
#define _RCC_SECCFGR ((uint32_t *)(_RCC_BASE + 0x110))
#define _RCC_PRIVCFGR ((uint32_t *)(_RCC_BASE + 0x114))

/**
 *  RCC Structs used in source
 */
typedef struct rcc_clocks
{
  uint32_t sysclk; // SYSCLK clock frequency  in Hz
  uint32_t hclk;   // HCLK   clock frequency  in Hz
  uint32_t pclk1;   // PCLK   clock frequency  in Hz
  uint32_t pclk2;   // PCLK   clock frequency  in Hz
  uint32_t pclk3;   // PCLK   clock frequency  in Hz   // PCLK   clock frequency  in Hz
  uint32_t tpclk;  // TPCLK  clock frequency  in Hz
} rcc_clocks_t;

/**
 * @brief Gets clock values.
 *
 * @param rcc_clocks_t[OUT] RCC clocks structure.
 *
 * @return *rcc_clocks_t Structure containing clock values.
 */
void RCC_GetClocksFrequency(rcc_clocks_t *RCC_Clocks);

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_RCC_H_
// ------------------------------------------------------------------------- END
