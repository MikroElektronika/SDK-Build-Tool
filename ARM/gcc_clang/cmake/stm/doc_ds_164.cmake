if(${MCU_NAME} MATCHES "^STM32L552CC$|^STM32L552CE$|^STM32L552ME$|^STM32L552QC$|^STM32L552QE$|^STM32L552RC$|^STM32L552RE$|^STM32L552VC$|^STM32L552VE$|^STM32L552ZC$|^STM32L552ZE$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_164/init_clock.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Src/system_stm32l5xx.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/STM32L5xx_HAL_Driver/Src/stm32l5xx_hal_rcc.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/STM32L5xx_HAL_Driver/Src/stm32l5xx_hal_pwr_ex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/STM32L5xx_HAL_Driver/Src/stm32l5xx_hal.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/STM32L5xx_HAL_Driver/Src/stm32l5xx_hal_cortex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/CMSIS/Device/ST/STM32L5xx/Source/Templates/system_stm32l5xx_s.c)
    list(APPEND local_list_include system/src/stm/doc_ds_164/thirdparty/Drivers/CMSIS/Device/ST/STM32L5xx/Source/Templates/system_stm32l5xx_ns.c)
endif()