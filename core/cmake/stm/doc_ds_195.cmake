if(${MCU_NAME} MATCHES "^STM32U073K8$|^STM32U073H8$|^STM32U073C8$|^STM32U073R8$|^STM32U073M8$|^STM32U073KB$|^STM32U073HB$|^STM32U073CB$|^STM32U073RB$|^STM32U073MB$|^STM32U073KC$|^STM32U073HC$|^STM32U073CC$|^STM32U073RC$|^STM32U073MC$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_195/init_clock.c)
    list(APPEND local_list_include system/src/stm/doc_ds_195/thirdparty/Src/system_stm32u0xx.c)
    list(APPEND local_list_include system/src/stm/doc_ds_195/thirdparty/Drivers/STM32U0xx_HAL_Driver/Src/stm32u0xx_hal_cortex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_195/thirdparty/Drivers/STM32U0xx_HAL_Driver/Src/stm32u0xx_hal_rcc.c)
    list(APPEND local_list_include system/src/stm/doc_ds_195/thirdparty/Drivers/STM32U0xx_HAL_Driver/Src/stm32u0xx_hal_pwr_ex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_195/thirdparty/Drivers/STM32U0xx_HAL_Driver/Src/stm32u0xx_hal.c)
endif()