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
 * @file  hal_ll_adc.c
 * @brief Low level HAL ADC source file.
 */

#include "hal_ll_adc.h"
#include "hal_ll_gpio.h"
#include "hal_ll_adc_pin_map.h"

// ------------------------------------------------------------- PRIVATE MACROS
/*!< @brief Helper macro for getting hal_ll_module_state address */
#define hal_ll_adc_get_module_state_address ((hal_ll_adc_handle_register_t *)*handle)
/*!< @brief Helper macro for getting module specific control register structure base address // first register address */
#define hal_ll_adc_get_handle (hal_ll_adc_handle_register_t *)hal_ll_adc_get_module_state_address->hal_ll_adc_handle
/*!< @brief Helper macro for getting module specific control register structure */
#define hal_ll_adc_get_base_struct(_handle) ((hal_ll_adc_base_handle_t *)_handle)
/*!< @brief Helper macro for getting module specific base address directly from HAL layer handle */
#define hal_ll_adc_get_base_from_hal_handle ((hal_ll_adc_hw_specifics_map_t *)((hal_ll_adc_handle_register_t *)\
                                            (((hal_ll_adc_handle_register_t *)(handle))->hal_ll_adc_handle))->hal_ll_adc_handle)->base

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_adc_module_num(_module_num) (_module_num - 1)

#define HAL_LL_ADC_CCR_OFFSET               0x304

#define HAL_LL_ADC_ADON_BIT                 0
#define HAL_LL_ADC_SR_EOC_BIT               1
#define HAL_LL_ADC_CONT_BIT                 1
#define HAL_LL_ADC_SCAN_BIT                 8
#define HAL_LL_ADC_ALIGN_BIT                11
#define HAL_LL_ADC_RESOLUTION_BIT0          24
#define HAL_LL_ADC_RESOLUTION_BIT1          25
#define HAL_LL_ADC_SWSTART_BIT              30

#define HAL_LL_ADC1_ENABLE_CLOCK            8
#define HAL_LL_ADC2_ENABLE_CLOCK            9
#define HAL_LL_ADC3_ENABLE_CLOCK            10

#define HAL_LL_ADC_CONT                     0x00000002ul
#define HAL_LL_ADC_SCAN                     0x00000100ul
#define HAL_LL_ADC_ALIGN                    0x00000800ul
#define HAL_LL_ADC_JEXTSEL                  0x000F0000ul

#define HAL_LL_ADC_16MHZ                    16000000ul
#define HAL_LL_ADC_60MHZ                    60000000ul
#define HAL_LL_ADC_72MHZ                    72000000ul
#define HAL_LL_ADC_120MHZ                   120000000ul
#define HAL_LL_ADC_144MHZ                   144000000ul
#define HAL_LL_ADC_180MHZ                   180000000ul

#define HAL_LL_ADC_PRESCALER_2              0x00000000ul
#define HAL_LL_ADC_PRESCALER_4              0x00010000ul
#define HAL_LL_ADC_PRESCALER_6              0x00020000ul
#define HAL_LL_ADC_PRESCALER_8              0x00030000ul

#define HAL_LL_ADC_PRESCALER_MASK           0x00030000ul
#define HAL_LL_ADC_SEQUENCE_LENGTH_MASK     0x00F00000ul
#define HAL_LL_ADC_CONVERSION_ONE           0x0000001Ful

#define HAL_LL_ADC_12BIT_RES                0x00000000ul
#define HAL_LL_ADC_10BIT_RES                0x01000000ul
#define HAL_LL_ADC_8BIT_RES                0x02000000ul
#define HAL_LL_ADC_6BIT_RES                0x03000000ul

#define HAL_LL_RESOLUTION_MASK              0xFCFFFFFFul

#define HAL_LL_MODULE_INDEX_ERROR           0xFFFFFFFFul

// -------------------------------------------------------------- PRIVATE TYPES
/*!< @brief Local handle list */
static hal_ll_adc_handle_register_t hal_ll_module_state[ADC_MODULE_COUNT] = { (handle_t *) NULL, (handle_t *) NULL, false };

/**
 *  ADC modules
 */
typedef enum
{
    HAL_LL_MODULE_ADC_DEFAULT = 0xFF,
    #if defined(ADC_MODULE_1)
    HAL_LL_MODULE_ADC_1 = 1,
    #endif
    #if defined(ADC_MODULE_2)
    HAL_LL_MODULE_ADC_2 = 2,
    #endif
    #if defined(ADC_MODULE_3)
    HAL_LL_MODULE_ADC_3 = 3,
    #endif
    HAL_LL_MODULE_ADC_NONE
} hal_ll_adc_module_number_t;

/**
 *  Return values
 */
typedef enum
{
    HAL_LL_ADC_SUCCESS = 0,
    HAL_LL_ADC_WRONG_PIN,

    HAL_LL_ADC_UNSUPPORTED_RESOLUTION = 1100,
    HAL_LL_ADC_UNSUPPORTED_VREF,
    HAL_LL_ADC_WRONG_CHANNEL,
    HAL_LL_ADC_ERROR = (-1)
} hal_ll_adc_err_t;

/*!< @brief ADC register structure. */
typedef struct
{
    uint32_t sr;    /* ADC status register (ADC_SR) */
    uint32_t cr1;    /* ADC control register 1 (ADC_CR1) */
    uint32_t cr2;    /* ADC control register 1 (ADC_CR1) */
    uint32_t smpr1;    /* ADC sample time register 1 (ADC_SMPR1) */
    uint32_t smpr2;    /* ADC sample time register 1 (ADC_SMPR1) */
    uint32_t jofr1;    /* ADC injected channel data offset register x (ADC_JOFRx) (x=1..4) */
    uint32_t jofr2;    /* ADC injected channel data offset register x (ADC_JOFRx) (x=1..4) */
    uint32_t jofr3;    /* ADC injected channel data offset register x (ADC_JOFRx) (x=1..4) */
    uint32_t jofr4;    /* ADC injected channel data offset register x (ADC_JOFRx) (x=1..4) */
    uint32_t htr;    /* ADC watchdog higher threshold register (ADC_HTR) */
    uint32_t ltr;    /* ADC watchdog lower threshold register (ADC_LTR) */
    uint32_t sqr1;    /* ADC regular sequence register 1 (ADC_SQR1) */
    uint32_t sqr2;    /* ADC regular sequence register 1 (ADC_SQR1) */
    uint32_t sqr3;    /* ADC regular sequence register 1 (ADC_SQR1) */
    uint32_t jsqr;    /* ADC injected sequence register (ADC_JSQR) */
    uint32_t jdr1;    /* ADC injected data register x (ADC_JDRx) (x= 1..4) */
    uint32_t jdr2;    /* ADC injected data register x (ADC_JDRx) (x= 1..4) */
    uint32_t jdr3;    /* ADC injected data register x (ADC_JDRx) (x= 1..4) */
    uint32_t jdr4;    /* ADC injected data register x (ADC_JDRx) (x= 1..4) */
    uint32_t dr;    /* ADC regular data register (ADC_DR) */
    uint32_t csr;    /* ADC Common status register (ADC_CSR) */
    uint32_t ccr;    /* ADC common control register (ADC_CCR) */
    uint32_t cdr;    /* ADC common regular data register for dual and triple modes (ADC_CDR) */

} hal_ll_adc_base_handle_t;

/*!< @brief ADC hw specific module values */
typedef struct
{
    uint16_t pin_an[ADC_MODULE_COUNT];
} hal_ll_adc_pin_id;

static hal_ll_adc_hw_specifics_map_t hal_ll_adc_hw_specifics_map[] =
{
    #ifdef ADC_MODULE_1
    {ADC1_BASE_ADDR, hal_ll_adc_module_num(ADC_MODULE_1), HAL_LL_PIN_NC, HAL_LL_ADC_VREF_DEFAULT, 0, HAL_LL_ADC_RESOLUTION_12_BIT, 0xFF},
    #endif
    #ifdef ADC_MODULE_2
    {ADC2_BASE_ADDR, hal_ll_adc_module_num(ADC_MODULE_2), HAL_LL_PIN_NC, HAL_LL_ADC_VREF_DEFAULT, 0, HAL_LL_ADC_RESOLUTION_12_BIT, 0xFF},
    #endif
    #ifdef ADC_MODULE_3
    {ADC3_BASE_ADDR, hal_ll_adc_module_num(ADC_MODULE_3), HAL_LL_PIN_NC, HAL_LL_ADC_VREF_DEFAULT, 0, HAL_LL_ADC_RESOLUTION_12_BIT, 0xFF},
    #endif


    {HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR, HAL_LL_PIN_NC, HAL_LL_ADC_VREF_DEFAULT, 0, HAL_LL_ADC_RESOLUTION_12_BIT, 0xFF}
};

// ------------------------------------------------------------------ VARIABLES

/*!< @brief Global handle variables used in functions */
static volatile hal_ll_adc_handle_register_t *low_level_handle;
static volatile hal_ll_adc_hw_specifics_map_t *hal_ll_adc_hw_specifics_map_local;

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS

/**
  * @brief  Enable ADC module 1 clock.
  * @param  none
  * @return none
  */
static inline void adc1_enable_clock();
/**
  * @brief  Enable ADC module 2 clock.
  * @param  none
  * @return none
  */
static inline void adc2_enable_clock();
/**
  * @brief  Enable ADC module 3 clock.
  * @param  none
  * @return none
  */
static inline void adc3_enable_clock();


/**
  * @brief  Initialize ADC module.
  * @param  *map - ADC module local map.
  * @return None
  */
static void hal_ll_adc_init( hal_ll_adc_hw_specifics_map_t *map );

/**
  * @brief  Check if pins are adequate.
  *
  * Checks analog pin the user has passed with pre-defined
  * pins in ADC pin map.
  *
  * @param[in]  pin - ADC pre-defined pin name.
  * @param[in]  *index - ADC map index value.
  * @return hal_ll_pin_name_t Module index based on pin.
  *
  * Returns pre-defined module index from pin maps, if pin
  * is adequate.
  */
static hal_ll_pin_name_t hal_ll_adc_check_pins( hal_ll_pin_name_t pin, hal_ll_adc_pin_id *index, hal_ll_adc_handle_register_t *handle_map );

/**
 * @brief  Maps new-found module specific values.
 *
 * Maps pin name and channel.
 *
 * @param[in]  module_index ADC HW module index -- 0,1,2...
 * @param[in]  *index  Pointer with ADC pin map index value
 *
 * @return  None
 */
static void hal_ll_adc_map_pin( uint8_t module_index, hal_ll_adc_pin_id *index );

/**
  * @brief  Get local hardware specific map.
  *
  * Checks handle value and returns address of adequate
  * hal_ll_adc_hw_specifics_map array index.
  *
  * @param[in]  handle - Object specific context handler.
  * @return hal_ll_adc_hw_specifics_map_t Map address.
  *
  * Returns pre-defined map index address based on handle value,
  * if handle is adequate.
  */
static hal_ll_adc_hw_specifics_map_t *hal_ll_get_specifics( handle_t handle );

/**
  * @brief  Enable ADC module gate clock.
  * @param  *base - ADC module base address.
  * @return None
  */
static void _hal_ll_adc_enable_clock( uint8_t base );

/**
  * @brief  Initialize ADC module.
  * @param  *base - ADC module base address.
  * @param  resolution - ADC module resolution.
  * @return None
  */
static void _hal_ll_adc_hw_init( hal_ll_adc_base_handle_t *base, uint32_t resolution );

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS
hal_ll_err_t hal_ll_adc_register_handle(hal_ll_pin_name_t pin, hal_ll_adc_voltage_reference_t vref_input, hal_ll_adc_resolution_t resolution, hal_ll_adc_handle_register_t *handle_map, uint8_t *hal_module_id)
{
    uint16_t pin_check_result;
    hal_ll_adc_pin_id index = {HAL_LL_PIN_NC};

    if ( (pin_check_result = hal_ll_adc_check_pins( pin, &index, handle_map )) == HAL_LL_PIN_NC ) {
        return HAL_LL_ADC_WRONG_PIN;
    };

    switch ( resolution )
    {
    case HAL_LL_ADC_RESOLUTION_12_BIT:
        hal_ll_adc_hw_specifics_map[pin_check_result].resolution = HAL_LL_ADC_12BIT_RES;
        break;
    case HAL_LL_ADC_RESOLUTION_10_BIT:
        hal_ll_adc_hw_specifics_map[pin_check_result].resolution = HAL_LL_ADC_10BIT_RES;
        break;
    case HAL_LL_ADC_RESOLUTION_8_BIT:
        hal_ll_adc_hw_specifics_map[pin_check_result].resolution = HAL_LL_ADC_8BIT_RES;
        break;
    case HAL_LL_ADC_RESOLUTION_6_BIT:
        hal_ll_adc_hw_specifics_map[pin_check_result].resolution = HAL_LL_ADC_6BIT_RES;
        break;
    default:
        return HAL_LL_ADC_UNSUPPORTED_RESOLUTION;
    }

    switch ( vref_input )
    {
        case HAL_LL_ADC_VREF_EXTERNAL:
            break;

        default:
            return HAL_LL_ADC_UNSUPPORTED_VREF;
    }

    if ( hal_ll_adc_hw_specifics_map[pin_check_result].pin != pin )
    {
        hal_ll_adc_map_pin( pin_check_result, &index );

        handle_map[pin_check_result].init_ll_state = false;
    }

    *hal_module_id = pin_check_result;

    hal_ll_module_state[pin_check_result].hal_ll_adc_handle = (handle_t *)&hal_ll_adc_hw_specifics_map[pin_check_result].base;

    handle_map[pin_check_result].hal_ll_adc_handle = (handle_t *)&hal_ll_module_state[pin_check_result].hal_ll_adc_handle;

    return HAL_LL_ADC_SUCCESS;
}

hal_ll_err_t hal_ll_module_configure_adc( handle_t *handle )
{
    hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);
    hal_ll_adc_handle_register_t *hal_handle = (hal_ll_adc_handle_register_t *)*handle;
    uint8_t pin_check_result = hal_ll_adc_hw_specifics_map_local->module_index;

    hal_ll_adc_init( hal_ll_adc_hw_specifics_map_local );

    hal_ll_module_state[pin_check_result].hal_ll_adc_handle = (handle_t *)&hal_ll_adc_hw_specifics_map[pin_check_result].base;
    hal_ll_module_state[pin_check_result].init_ll_state = true;
    hal_handle->init_ll_state = true;

    return HAL_LL_ADC_SUCCESS;
}

hal_ll_err_t hal_ll_adc_set_resolution(handle_t *handle, hal_ll_adc_resolution_t resolution)
{
    low_level_handle = hal_ll_adc_get_handle;
    hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);

    low_level_handle->init_ll_state = false;

    switch( resolution ) {
        case HAL_LL_ADC_RESOLUTION_12_BIT:
            hal_ll_adc_hw_specifics_map_local->resolution = HAL_LL_ADC_12BIT_RES;
            break;
        case HAL_LL_ADC_RESOLUTION_10_BIT:
            hal_ll_adc_hw_specifics_map_local->resolution = HAL_LL_ADC_10BIT_RES;
            break;
        case HAL_LL_ADC_RESOLUTION_8_BIT:
            hal_ll_adc_hw_specifics_map_local->resolution = HAL_LL_ADC_8BIT_RES;
            break;
        case HAL_LL_ADC_RESOLUTION_6_BIT:
            hal_ll_adc_hw_specifics_map_local->resolution = HAL_LL_ADC_6BIT_RES;
            break;

        default:
            return HAL_LL_ADC_UNSUPPORTED_RESOLUTION;
    }

    hal_ll_adc_init( hal_ll_adc_hw_specifics_map_local );

    low_level_handle->init_ll_state = true;

    return HAL_LL_ADC_SUCCESS;
}

hal_ll_err_t hal_ll_adc_set_vref_input(handle_t *handle, hal_ll_adc_voltage_reference_t vref_input)
{
    hal_ll_adc_handle_register_t *low_level_handle = hal_ll_adc_get_handle;
    hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);

    low_level_handle->init_ll_state = false;

    switch( vref_input ) {
        case HAL_LL_ADC_VREF_EXTERNAL:
            break;

        default:
            return HAL_LL_ADC_UNSUPPORTED_VREF;
    }

    hal_ll_adc_init( hal_ll_adc_hw_specifics_map_local );

    low_level_handle->init_ll_state = true;

    return HAL_LL_ADC_SUCCESS;
}

void hal_ll_adc_set_vref_value(handle_t *handle, float vref_value)
{
    low_level_handle = hal_ll_adc_get_handle;
    hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);

    hal_ll_adc_hw_specifics_map_local->vref_value = vref_value;
}

hal_ll_err_t hal_ll_adc_read( handle_t *handle, uint16_t *readDatabuf )
{
    hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);
    low_level_handle = hal_ll_adc_get_handle;
    hal_ll_adc_base_handle_t *base = ( hal_ll_adc_base_handle_t * )hal_ll_adc_hw_specifics_map_local->base ;

    base->sqr3 &= ~HAL_LL_ADC_CONVERSION_ONE;
    base->sqr3 |= ( ( hal_ll_adc_hw_specifics_map_local->channel ) & ( HAL_LL_ADC_CONVERSION_ONE ) );

    // Start the conversion
    set_reg_bit( &( base->cr2 ), HAL_LL_ADC_SWSTART_BIT );

    // The application should allow a delay of tSTAB between power up and start of conversion.
    Delay_1us();

    while ( !( check_reg_bit( &( base->sr ), HAL_LL_ADC_SR_EOC_BIT ) ) );
    // Conversion result from SS3.
    *readDatabuf = base->dr;

    return HAL_LL_ADC_SUCCESS;
}

void hal_ll_adc_close( handle_t *handle )
{
    hal_ll_adc_hw_specifics_map_t *hal_ll_adc_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_adc_get_module_state_address);
    low_level_handle = hal_ll_adc_get_handle;

    if( hal_ll_adc_hw_specifics_map_local->base != HAL_LL_MODULE_ERROR ) {

        hal_ll_adc_hw_specifics_map_local->vref_input = HAL_LL_ADC_VREF_DEFAULT;
        hal_ll_adc_hw_specifics_map_local->vref_value = 0;
        hal_ll_adc_hw_specifics_map_local->resolution = HAL_LL_ADC_RESOLUTION_12_BIT;

        low_level_handle->hal_ll_adc_handle = NULL;
        low_level_handle->hal_drv_adc_handle = NULL;

        low_level_handle->init_ll_state = false;

        hal_ll_adc_hw_specifics_map_local->pin = HAL_LL_PIN_NC;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS
static hal_ll_pin_name_t hal_ll_adc_check_pins( hal_ll_pin_name_t pin, hal_ll_adc_pin_id *index, hal_ll_adc_handle_register_t *handle_map )
{
    static const uint16_t     adc_map_size = ( sizeof( _adc_map ) / sizeof( hal_ll_adc_pin_map_t ) );
    uint16_t     pin_index = 0;
    uint8_t      index_counter = 0;
    uint8_t      hal_ll_module_id = 0;

    if ( HAL_LL_PIN_NC == pin ) {
        return HAL_LL_PIN_NC;
    }

    for ( pin_index = 0; pin_index < adc_map_size; pin_index++ )
    {
        if ( pin == _adc_map[pin_index].pin )
        {
            // Get module number
            hal_ll_module_id = _adc_map[pin_index].module_index;
            // Map pin name
            index->pin_an[hal_ll_module_id] = pin_index;

            // Check if module is taken
            if ( NULL == handle_map[ hal_ll_module_id ].hal_drv_adc_handle ) {
                return hal_ll_module_id;
            } else if ( ADC_MODULE_COUNT == ++index_counter ) {
                return --index_counter;
            }
        }
    }

    if ( index_counter ) {
        return hal_ll_module_id;
    } else {
        return HAL_LL_PIN_NC;
    }
}

static void hal_ll_adc_map_pin( uint8_t module_index, hal_ll_adc_pin_id *index ) {
    // Map new pins
    hal_ll_adc_hw_specifics_map[module_index].pin = _adc_map[ index->pin_an[module_index] ].pin;
    hal_ll_adc_hw_specifics_map[module_index].channel = _adc_map[ index->pin_an[module_index] ].channel;
}

static hal_ll_adc_hw_specifics_map_t *hal_ll_get_specifics( handle_t handle ) {
    uint8_t hal_ll_module_count = sizeof(hal_ll_module_state) / (sizeof(hal_ll_adc_handle_register_t));
    static uint8_t hal_ll_module_error = sizeof(hal_ll_module_state) / (sizeof(hal_ll_adc_handle_register_t));

    while( hal_ll_module_count-- ) {
        if (hal_ll_adc_get_base_from_hal_handle == hal_ll_adc_hw_specifics_map[hal_ll_module_count].base) {
            return &hal_ll_adc_hw_specifics_map[hal_ll_module_count];
        }
    }

    return &hal_ll_adc_hw_specifics_map[hal_ll_module_error];
}

static inline void adc1_enable_clock()
{
        set_reg_bit( _RCC_APB2ENR, HAL_LL_ADC1_ENABLE_CLOCK );
}
static inline void adc2_enable_clock()
{
        set_reg_bit( _RCC_APB2ENR, HAL_LL_ADC2_ENABLE_CLOCK );
}
static inline void adc3_enable_clock()
{
        set_reg_bit( _RCC_APB2ENR, HAL_LL_ADC3_ENABLE_CLOCK );
}



static void _hal_ll_adc_enable_clock( uint8_t base )
{
    switch ( base )  // 32-bit base address.
    {
        #ifdef ADC_MODULE_1
        case ( hal_ll_adc_module_num(ADC_MODULE_1) ):
            adc1_enable_clock();
            break;
        #endif
        #ifdef ADC_MODULE_2
        case ( hal_ll_adc_module_num(ADC_MODULE_2) ):
            adc2_enable_clock();
            break;
        #endif
        #ifdef ADC_MODULE_3
        case ( hal_ll_adc_module_num(ADC_MODULE_3) ):
            adc3_enable_clock();
            break;
        #endif
    }
}

static void _hal_ll_adc_hw_init( hal_ll_adc_base_handle_t *base, uint32_t resolution )
{
    rcc_clocks_t rcc_clocks;
    static uint32_t *reg = ADC1_BASE_ADDR + HAL_LL_ADC_CCR_OFFSET;
    /* ADC_CCR register is a common register
       and relative to ADC1 + HAL_ADC_CCR_OFFSET. */
    /* ADC clock
       The ADC features two clock schemes:
       Clock for the analog circuitry: ADCCLK, common to all ADCs
       This clock is generated from the APB2 clock divided by a programmable prescaler that
       allows the ADC to work at fPCLK2/2, /4, /6 or /8. ADCCLK maximum value is 30 MHz
       when the APB2 clock is at 60 MHz. */
    RCC_GetClocksFrequency( &rcc_clocks );

    *reg &= ~HAL_LL_ADC_PRESCALER_MASK;

    if ( rcc_clocks.pclk2 > HAL_LL_ADC_180MHZ )
    {
        *reg |= HAL_LL_ADC_PRESCALER_8;
    }
    else if ( rcc_clocks.pclk2 > HAL_LL_ADC_120MHZ )
    {
        *reg |= HAL_LL_ADC_PRESCALER_6;
    }
    else if ( rcc_clocks.pclk2 > HAL_LL_ADC_60MHZ )
    {
        *reg |= HAL_LL_ADC_PRESCALER_4;
    }
    else
    {
        *reg |= HAL_LL_ADC_PRESCALER_2;
    }

    // Clear SCAN bits.
    base->cr1 &= 0xFFF0FEFF;//HAL_ADC_SCAN;

    // Clear CONT, ALIGN and EXTSEL bits.
    base->cr2 &= ~( HAL_LL_ADC_CONT |
                    HAL_LL_ADC_ALIGN |
                    HAL_LL_ADC_JEXTSEL );

    // Set resolution.
    base->cr1 &= HAL_LL_RESOLUTION_MASK;

    base->cr1 |= resolution;

    // Scan mode disabled.
    clear_reg_bit( &( base->cr1 ), HAL_LL_ADC_SCAN_BIT );

    // Single conversion mode.
    clear_reg_bit( &( base->cr2 ), HAL_LL_ADC_CONT_BIT );

    // Data alighment = right.
    clear_reg_bit( &( base->cr2 ), HAL_LL_ADC_ALIGN_BIT );

    // Regular channel sequence length 0000: 1 conversion.
    base->sqr1 &= HAL_LL_ADC_SEQUENCE_LENGTH_MASK;

    // Enable ADC.
    set_reg_bit( &( base->cr2 ), HAL_LL_ADC_ADON_BIT );

}

static void hal_ll_adc_init( hal_ll_adc_hw_specifics_map_t *map ) {

    hal_ll_gpio_analog_input( hal_ll_gpio_port_base( hal_ll_gpio_port_index( map->pin ) ),
                                                     hal_ll_gpio_pin_mask( map->pin ) );


    _hal_ll_adc_enable_clock( map->module_index );

    _hal_ll_adc_hw_init((hal_ll_adc_base_handle_t *)map->base, map->resolution);

}
// ------------------------------------------------------------------------- END



