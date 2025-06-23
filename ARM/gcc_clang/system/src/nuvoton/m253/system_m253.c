/**************************************************************************//**
 * @file     system_M253.c
 * @version  V0.10
 * @brief    System Setting Source File
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 ****************************************************************************/

#include <arm_cmse.h>
#include <stdio.h>
#include <stdint.h>
// #include "NuMicro.h" // Note: Changed for MikroE implementation.
#include "mcu.h" // Note: Added for MikroE implementation.

#if defined (__ARM_FEATURE_CMSE) &&  (__ARM_FEATURE_CMSE == 3U)
//     #include "partition_M253.h" // Note: Changed for MikroE implementation.
#include "mcu.h" // Note: Added for MikroE implementation.
#endif


extern void *__Vectors;                   /* see startup file */

/*----------------------------------------------------------------------------
  Clock Variable definitions
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock  = __HSI;              /*!< System Clock Frequency (Core Clock) */
uint32_t CyclesPerUs      = (__HSI / 1000000);  /*!< Cycles per micro second             */
uint32_t PllClock         = __HSI;              /*!< PLL Output Clock Frequency          */
const uint32_t gau32ClkSrcTbl[8] = {__HXT, __LXT, 0UL, __LIRC, 0UL, __MIRC, 0UL, __HIRC};


/**
 * @brief    Update the Variable SystemCoreClock
 *
 * @details  This function is used to update the variable SystemCoreClock
 *           and must be called whenever the core clock is changed.
 */
void SystemCoreClockUpdate(void)
{
    uint32_t u32Freq, u32ClkSrc;
    uint32_t u32HclkDiv;

    u32ClkSrc = CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk;

    /* Use the clock sources directly */
    u32Freq = gau32ClkSrcTbl[u32ClkSrc];

    u32HclkDiv = (CLK->CLKDIV0 & CLK_CLKDIV0_HCLKDIV_Msk) + 1;

    /* Update System Core Clock */
    SystemCoreClock = u32Freq / u32HclkDiv;

    CyclesPerUs = (SystemCoreClock + 500000) / 1000000;
}



/**
 * @brief    System Initialization
 *
 * @details  The necessary initialization of system. Global variables are forbidden here.
 */
void SystemInit(void)
{
    /* Set access cycle for CPU @ 48MHz */
    FMC->CYCCTL = (FMC->CYCCTL & ~FMC_CYCCTL_CYCLE_Msk) | (3 << FMC_CYCCTL_CYCLE_Pos) | 0x100;

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &__Vectors;
#endif

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    TZ_SAU_Setup();
    SCU_Setup();
    FMC_NSBA_Setup();
#endif

#ifdef INIT_SYSCLK_AT_BOOTING

#endif

}


#if USE_ASSERT

/**
 * @brief      Assert Error Message
 *
 * @param[in]  file  the source file name
 * @param[in]  line  line number
 *
 * @details    The function prints the source file name and line number where
 *             the ASSERT_PARAM() error occurs, and then stops in an infinite loop.
 */
void AssertError(uint8_t *file, uint32_t line)
{

    printf("[%s] line %u : wrong parameters.\r\n", file, line);

    /* Infinite loop */
    while (1) ;
}

#endif

#ifndef NOT_USE_DBG_UART
/**
 * @brief    Set UART debug MPF
 *
 * @details  The initialization of uart debug multi function pin.
 */
#if defined( __ICCARM__ )
    __WEAK
#else
    __attribute__((weak))
#endif
void UartDebugMFP(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)

    /* Set GPA multi-function pins for UART RXD and TXD */
    SYS->GPA_MFPL = (SYS->GPA_MFPL & ~SYS_GPA_MFPL_PA2MFP_Msk) | SYS_GPA_MFPL_PA2MFP_UART4_RXD;
    SYS->GPA_MFPL = (SYS->GPA_MFPL & ~SYS_GPA_MFPL_PA3MFP_Msk) | SYS_GPA_MFPL_PA3MFP_UART4_TXD;

#endif /* (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING) */
}

/**
 * @brief    Set UART debug clock
 *
 * @details  The initialization of debug uart clock source.
 */
#if defined( __ICCARM__ )
    __WEAK
#else
    __attribute__((weak))
#endif
void UartDebugCLK(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)

    /* Select UART clock source from HIRC */
    CLK_SetModuleClock(UART4_MODULE, CLK_CLKSEL3_UART4SEL_HIRC, CLK_CLKDIV4_UART4(1));

    /* Enable UART clock */
    CLK_EnableModuleClock(UART4_MODULE);

#endif /* (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING) */
}

/**
 * @brief    UART Initial
 *
 * @details  The initialization of debug uart.
 */
#if defined( __ICCARM__ )
    __WEAK
#else
    __attribute__((weak))
#endif
void UartDebugInit(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)

    /* Reset UART module */
    SYS->IPRST1 |= SYS_IPRST1_UART4RST_Msk;
    SYS->IPRST1 &= (~SYS_IPRST1_UART4RST_Msk);

    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART4, 115200);

#endif /* (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING) */
}

#endif /* NOT_USE_DBG_UART */
