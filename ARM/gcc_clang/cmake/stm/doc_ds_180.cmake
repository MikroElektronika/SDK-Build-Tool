if(${MCU_NAME} MATCHES "^STM32U575AG$|^STM32U575AI$|^STM32U575CG$|^STM32U575CI$|^STM32U575OG$|^STM32U575OI$|^STM32U575QG$|^STM32U575QI$|^STM32U575RG$|^STM32U575RI$|^STM32U575VG$|^STM32U575VI$|^STM32U575ZG$|^STM32U575ZI$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_180/init_clock.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Src/system_stm32u5xx.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_pwr_ex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_rcc.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal_cortex.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/STM32U5xx_HAL_Driver/Src/stm32u5xx_hal.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/CMSIS/Device/ST/STM32U5xx/Source/Templates/system_stm32u5xx_s.c)
    list(APPEND local_list_include system/src/stm/doc_ds_180/thirdparty/Drivers/CMSIS/Device/ST/STM32U5xx/Source/Templates/system_stm32u5xx_ns.c)
endif()