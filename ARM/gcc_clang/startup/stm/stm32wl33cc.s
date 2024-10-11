/**
  ******************************************************************************
  * @file      startup_stm32c011xx.s
  * @author    MCD Application Team
  * @brief     STM32C011xx devices vector table GCC toolchain.
  *            This module performs:
  *                - Set the initial SP
  *                - Set the initial PC == Reset_Handler,
  *                - Set the vector table entries with the exceptions ISR address,
  *                - Configure the clock system
  *                - Branches to main in the C library (which eventually
  *                  calls main()).
  *            After Reset the Cortex-M0+ processor is in Thread mode,
  *            priority is Privileged, and the Stack is set to Main.
  *******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  *******************************************************************************
  */

  .syntax unified
	.cpu cortex-m0plus
	.fpu softvfp
	.thumb

.global	g_pfnVectors
.global	Default_Handler

/* start address for the initialization values of the .data section.
defined in linker script */
.word _sidata
/* start address for the .data section. defined in linker script */
.word _sdata
/* end address for the .data section. defined in linker script */
.word _edata
/* start address for the .bss section. defined in linker script */
.word _sbss
/* end address for the .bss section. defined in linker script */
.word _ebss

  .section .text.Reset_Handler
  .weak Reset_Handler
  .type Reset_Handler, %function
Reset_Handler:
  ldr   r0, =_estack
  mov   sp, r0          /* set stack pointer */
/* Call the clock system initialization function.*/
  // bl  SystemInit /* Removed call for Mikroe implementation. */

/* Copy the data segment initializers from flash to SRAM */
  movs r1, #0
  b LoopCopyDataInit

CopyDataInit:
  ldr r3, =_sidata
  ldr r3, [r3, r1]
  str r3, [r0, r1]
  adds r1, r1, #4

LoopCopyDataInit:
  ldr r0, =_sdata
  ldr r3, =_edata
  adds r2, r0, r1
  cmp r2, r3
  bcc CopyDataInit
  ldr r2, =_sbss
  b LoopFillZerobss
/* Zero fill the bss segment. */
FillZerobss:
  movs r3, #0
  str  r3, [r2]
  adds r2, r2, #4


LoopFillZerobss:
  ldr r3, = _ebss
  cmp r2, r3
  bcc FillZerobss


/* Call static constructors */
  bl __libc_init_array
/* Call the application's entry point.*/
  bl  clockConfig /* Added to call MikroE system clock configuration API. */
  bl main

LoopForever:
    b LoopForever


.size Reset_Handler, .-Reset_Handler

/**
 * @brief  This is the code that gets called when the processor receives an
 *         unexpected interrupt.  This simply enters an infinite loop, preserving
 *         the system state for examination by a debugger.
 *
 * @param  None
 * @retval : None
*/
    .section .text.Default_Handler,"ax",%progbits
Default_Handler:
Infinite_Loop:
  b Infinite_Loop
  .size Default_Handler, .-Default_Handler
/******************************************************************************
*
* The minimal vector table for a Cortex M0.  Note that the proper constructs
* must be placed on this to ensure that it ends up at physical address
* 0x0000.0000.
*
******************************************************************************/
   .section .isr_vector,"a",%progbits
  .type g_pfnVectors, %object
  .size g_pfnVectors, .-g_pfnVectors


g_pfnVectors:
  .word  _estack
  .word  Reset_Handler
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  I2C2_IRQHandler
  .word  SPI1_IRQHandler
  .word  0
  .word  0
  .word  USART1_IRQHandler
  .word  LPUART1_IRQHandler
  .word  TIM2_IRQHandler
  .word  0
  .word  ADC1_IRQHandler
  .word  0
  .word  0
  .word  0
  .word  GPIOB1_IRQHandler
  .word  DMA1_IRQHandler
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
  .word  0
/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the Default_Handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/
  .weak      TIM2_IRQHandler
  .thumb_set TIM2_IRQHandler,Default_Handler
  .weak      TIM16_IRQHandler
  .thumb_set TIM16_IRQHandler,Default_Handler
  .weak      USART1_IRQHandler
  .thumb_set USART1_IRQHandler,Default_Handler
  .weak      LPUART1_IRQHandler
  .thumb_set LPUART1_IRQHandler,Default_Handler
  .weak      GPIOA1_IRQHandler
  .thumb_set GPIOA1_IRQHandler,Default_Handler
  .weak      GPIOB1_IRQHandler
  .thumb_set GPIOB1_IRQHandler,Default_Handler
  .weak      SPI1_IRQHandler
  .thumb_set SPI1_IRQHandler,Default_Handler
  .weak      SPI3_IRQHandler
  .thumb_set SPI3_IRQHandler,Default_Handler
  .weak      I2C1_IRQHandler
  .thumb_set I2C1_IRQHandler,Default_Handler
  .weak      I2C2_IRQHandler
  .thumb_set I2C2_IRQHandler,Default_Handler
  .weak      ADC1_IRQHandler
  .thumb_set ADC1_IRQHandler,Default_Handler
  .weak      DMA1_IRQHandler
  .thumb_set DMA1_IRQHandler,Default_Handler


