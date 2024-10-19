/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
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
 * @file  init_clock.c
 * @brief Mikroe clock initialization API.
 */

#include "core_header.h"
#include "stm32h5xx_hal_rcc.h"

static RCC_OscInitTypeDef RCC_OscInitStruct = {0};
static RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

extern uint32_t uwTick;
extern uint32_t uwTickFreq;

__attribute__ ((interrupt("IRQ"))) void SysTick_Handler(void) {
    uwTick += (uint32_t)uwTickFreq;
}

void clockConfig(void) {
    // Reset of all peripherals, initialize the Flash interface and the Systick
    HAL_Init();

    // Enable system and power clocks.
    __HAL_RCC_SYSCFG_CLK_ENABLE();
    __HAL_RCC_PWR_CLK_ENABLE();

    // Please fill RCC_OscInitStruct
    // FOUND FIELDS:
    RCC_OscInitStruct.OscillatorType = TODO;
    RCC_OscInitStruct.HSEState = TODO;
    RCC_OscInitStruct.LSEState = TODO;
    RCC_OscInitStruct.HSIState = TODO;
    RCC_OscInitStruct.HSIDiv = TODO;
    RCC_OscInitStruct.HSICalibrationValue = TODO;
    RCC_OscInitStruct.LSIState = TODO;
    RCC_OscInitStruct.CSIState = TODO;
    RCC_OscInitStruct.CSICalibrationValue = TODO;
    RCC_OscInitStruct.HSI48State = TODO;
    RCC_OscInitStruct.PLL = TODO;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
        while(1);

    // Please fill RCC_ClkInitTypeDef
    // FOUND FIELDS:
    RCC_ClkInitTypeDef.ClockType = TODO;
    RCC_ClkInitTypeDef.SYSCLKSource = TODO;
    RCC_ClkInitTypeDef.AHBCLKDivider = TODO;
    RCC_ClkInitTypeDef.APB1CLKDivider = TODO;
    RCC_ClkInitTypeDef.APB2CLKDivider = TODO;
    RCC_ClkInitTypeDef.APB3CLKDivider = TODO;

    // TODOFLASH is defined as a number in flash header files
    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, TODOFLASH) != HAL_OK)
        while(1);
}

/**
* @brief Functions used for clock retrieval.
*/
/*
// Step 1 - API typedef
typedef void (*clockFunc_t)(void *);

// Step 2 - pointer function
clockFunc_t clockValues = (void *)&HAL_RCC_GetClockConfig;

// Step 3 - typedef to a typedef
typedef RCC_ClkInitTypeDef RCC_ClocksTypeDef;

// Step 4 - New API which calls the mapped function
void __RCC_GetClocksFrequency(RCC_ClocksTypeDef *RCC_Clocks) {
    // Get the clock dividers/multipliers
    (*clockValues)(RCC_Clocks);
    // Use the dividers and multipliers to calculate actual clocks
    uint32_t *ptr = (uint32_t *)&RCC_Clocks;
    for(int i = 0; i < (sizeof(RCC_ClocksTypeDef) / sizeof(uint32_t)); i++) {
        // Divide the value for the calculation to be complete
        *ptr = FOSC_KHZ_VALUE / *ptr;
        // Increment the pointer
        ptr++;
    }
}
*/
