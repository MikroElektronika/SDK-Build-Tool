if(${MCU_NAME} MATCHES "(^STM32H743AI$|^STM32H743BI$|^STM32H743II$|^STM32H743VI$|^STM32H743XI$|^STM32H743ZI$|^STM32H750IB$|^STM32H750VB$|^STM32H750XB$|^STM32H753AI$|^STM32H753BI$|^STM32H753II$|^STM32H753VI$|^STM32H753XI$|^STM32H753ZI$)")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_stm32h_7xx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_stm32h_7xx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_stm32h_7xx.h)
endif()