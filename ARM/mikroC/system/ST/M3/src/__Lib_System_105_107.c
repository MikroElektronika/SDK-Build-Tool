#include "RCC_typedef.h"
#include "stdint.h"

const register CPU_APSR        = 0;
const register CPU_IAPSR       = 1;
const register CPU_EAPSR       = 2;
const register CPU_XPSR        = 3;
const register CPU_IPSR        = 5;
const register CPU_EPSR        = 6;
const register CPU_IEPSR       = 7;
const register CPU_MSP         = 8;
const register CPU_PSP         = 9;
const register CPU_PRIMASK     = 16;
const register CPU_BASEPRI     = 17;
const register CPU_BASEPRI_MAX = 18;
const register CPU_FAULTMASK   = 19;
const register CPU_CONTROL     = 20;

// Routine that copies from the memory area pointed to by R12
// to the memory area pointed to by R11
// The address up to which it is copied is in R10.
void __CC2DW()
{
    asm {
    L_loopDW:
        LDRB.W       R9, [R12], #1
        STRB.W       R9, [R11], #1
        CMP.W        R11, R10
        BNE          L_loopDW
    }
}

void __CA2AB()
{
    asm {
    L_loopCA2ABs:
        LDRB.W       R9, [R10], #1
        STRB.W       R9, [R11], #1
        CMP.W        R10, R12
        BNE          L_loopCA2ABs
    }
}

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R10, [R11], #1
        CMP.W        R10, #0
        BEQ          L_CS2Send
        STRB.W       R10, [R12], #1
        B            L_loopCS2Ss
    L_CS2Send:
    }
}

void __FZinS()
{
    asm {
    L_loopCS2Ss:
        LDRB.W       R11, [R12], #1
        CMP.W        R11, #0
        BNE          L_loopCS2Ss
        SUB.W        R12, R12, #1
    }
}

void __FillZeros()
{
    asm {
        MOV.W        R9, #0
        MOV.W        R12, #0
        CMP.W        SP, R10
        BGT          L_loopFZs
        CMP.W        SP, R11
        BLT          L_loopFZs
        MOV          R12, R10
        MOV          R10, SP
    L_loopFZs:
        STR.W        R9, [R11], #4
        CMP.W        R11, R10
        BNE          L_loopFZs
        CMP.W        R12, R10
        BLE          L_norep
        MOV          R10, R12
        LDR          R11, [R9]
        ADD          R11, R11,#4
        B            L_loopFZs
    L_norep:
    }
}

void __GenExcept()
{
    while ( 1 )
        ;
}

/**
 * @brief Resets the device.
 * @details This function will perform a software reset of the entire device. The
 *          processor and all peripherals are reset and all device registers will
 *          return to their default values (with the exception of the reset cause
 *          register, which will maintain its current value but have the software reset
 *          bit set as well).
 * @return None.
 */
void SystemReset( void )
{
    // Perform a software reset request.  This will cause the device to reset,
    // no further code is executed.
    SCB_AIRCR = 0x05FA0000 | ( 1ul << SYSRESETREQ );
    // The device should have reset, so this should never be reached.  Just in
    // case, loop forever.
    while ( 1 ) {
    }
}

#define RCC_CFGR_SWS ( 0x0000000C ) /* System Clock Switch Status           */

/**
 * @brief  Resets the RCC clock configuration to the default reset state.
 * @note   The default reset state of the clock configuration is given below:
 *            - HSI ON and used as system clock source
 *            - HSE, PLL and PLLI2S OFF
 *            - AHB, APB1 and APB2 prescaler set to 1.
 *            - CSS, MCO1 and MCO2 OFF
 *            - All interrupts disabled (not used)
 * @note   This function doesn't modify the configuration of the
 *            - Peripheral clocks
 *            - LSI, LSE and RTC clocks
 * @return None.
 */
static void SystemClockSetDefault( void )
{
    /* Set HSION bit */
    RCC_CR |= ( unsigned long )0x00000001;

    /* Reset SW, HPRE, PPRE1, PPRE2, ADCPRE and MCO bits */
    RCC_CFGR = 0xF0FF0000;

    /* Reset HSEON, CSSON and PLLON bits */
    RCC_CR &= ( unsigned long )0xFEF6FFFF;

    /* Reset HSEBYP bit */
    RCC_CR &= ( unsigned long )0xFFFBFFFF;

    /* Reset PLLSRC, PLLXTPRE, PLLMUL and USBPRE/OTGFSPRE bits */
    RCC_CFGR &= ( unsigned long )0xFF80FFFF;

    /* Reset PLL2ON and PLL3ON bits */
    RCC_CR &= ( unsigned long )0xEBFFFFFF;

    /* Reset CFGR2 register */
    RCC_CFGR2 = ( unsigned long )0x00000000;
}

static const char APBAHBPrescTable[ 16 ] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 };
static const char ADCPrescTable[ 4 ] = { 2, 4, 6, 8 };

static void InitialSetUpRCCRCC2()
{
    unsigned long volatile ulRCC_CR, ulRCC_CFGR, ulRCC_CFGR2;
    unsigned long volatile Fosc_kHz;
    unsigned long tmp, SYS_clk, presc;
    ulRCC_CR = 12345678;
    ulRCC_CFGR = 12345679;
    ulRCC_CFGR2 = 12345680;
    Fosc_kHz = 12345677;

    // Zero wait state, if 0 < SYSCLK <= 24 MHz.
    // One wait state, if 24 MHz < SYSCLK <= 48 MHz.
    // Two wait states, if 48 MHz < SYSCLK <= 72 MHz.

    tmp = ulRCC_CFGR & 0x000000F0;
    tmp = tmp >> 4;
    presc = APBAHBPrescTable[ tmp ];

    SYS_clk = Fosc_kHz << presc;

    if ( SYS_clk > 48000 )
        FLASH_ACR |= 2;
    else if ( SYS_clk > 24000 )
        FLASH_ACR |= 1;
    else
        FLASH_ACR &= ~7ul;

    SystemClockSetDefault();

    /* Set clock configuration register */
    RCC_CFGR  = ulRCC_CFGR;

    /* Set clock configuration register 2 */
    RCC_CFGR2 = ulRCC_CFGR2;

    /* Do not start PLLs yet */
    RCC_CR = ulRCC_CR & 0x000FFFFF;

    /* if HSI enabled */
    if ( ulRCC_CR & ( 1ul << HSION ) ) {
        /* Wait for HSIRDY = 1 (HSI is ready) */
        while ( ( RCC_CR & ( 1ul << HSIRDY ) ) == 0 )
            ;
    }

    /* if HSE enabled */
    if ( ulRCC_CR & ( 1ul << HSEON ) ) {
        /* Wait for HSERDY = 1 (HSE is ready) */
        while ( ( RCC_CR & ( 1ul << HSERDY ) ) == 0 )
            ;
    }

    /* if PLL3 enabled */
    if ( ulRCC_CR & ( 1ul << PLL3ON ) ) {
        /* PLL3 On */
        RCC_CR |= ( 1ul << PLL3ON );
        /* Wait for PLL3RDY = 1 (PLL is ready) */
        while ( ( RCC_CR & ( 1ul << PLL3RDY ) ) == 0 )
            ;
    }

    /* if PLL2 enabled */
    if ( ulRCC_CR & ( 1ul << PLL2ON ) ) {
        /* PLL2 On */
        RCC_CR |= ( 1ul << PLL2ON );
        /* Wait for PLL2RDY = 1 (PLL is ready) */
        while ( ( RCC_CR & ( 1ul << PLL2RDY ) ) == 0 )
            ;
    }

    /* if PLL1 enabled */
    if ( ulRCC_CR & ( 1ul << PLLON ) ) {
        /* PLL1 On */
        RCC_CR |= ( 1ul << PLLON );
        /* Wait for PLL1RDY = 1 (PLL is ready) */
        while ( ( RCC_CR & ( 1ul << PLLRDY ) ) == 0 )
            ;
    }

    /* Wait till SYSCLK is stabilized (depending on selected clock) */
    while ( ( RCC_CFGR & RCC_CFGR_SWS ) != ( ( ulRCC_CFGR << 2 ) & RCC_CFGR_SWS ) )
        ;
}

static void InitialSetUpFosc()
{
    __System_CLOCK_IN_KHZ = 12345677;
}

void RCC_GetClocksFrequency( RCC_ClocksTypeDef * RCC_Clocks )
{
    unsigned long tmp, presc;

    RCC_Clocks->HCLK_Frequency = Get_Fosc_kHz() * 1000;

    /* Compute HCLK, PCLK1, PCLK2 and ADCCLK clocks frequencies */
    /* Get HCLK prescaler */
    tmp = RCC_CFGRbits.HPRE;
    presc = APBAHBPrescTable[ tmp ];

    /* HCLK clock frequency */
    RCC_Clocks->SYSCLK_Frequency = RCC_Clocks->HCLK_Frequency << presc;

    /* Get PCLK1 prescaler */
    tmp = RCC_CFGRbits.PPRE1;
    presc = APBAHBPrescTable[ tmp ];

    /* PCLK1 clock frequency */
    RCC_Clocks->PCLK1_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get PCLK2 prescaler */
    tmp = RCC_CFGRbits.PPRE2;
    presc = APBAHBPrescTable[ tmp ];

    /* PCLK2 clock frequency */
    RCC_Clocks->PCLK2_Frequency = RCC_Clocks->HCLK_Frequency >> presc;

    /* Get ADCCLK prescaler */
    tmp = RCC_CFGRbits.ADCPRE;
    presc = ADCPrescTable[ tmp ];

    /* ADCCLK clock frequency */
    RCC_Clocks->ADCCLK_Frequency = RCC_Clocks->PCLK2_Frequency / presc;
}
