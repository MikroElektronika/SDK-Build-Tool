if(${MCU_NAME} MATCHES "^STM32F405RG$|^STM32F405VG$|^STM32F405ZG$|^STM32F405OG$|^STM32F405OE$|^STM32F407VG$|^STM32F407IG$|^STM32F407ZG$|^STM32F407VE$|^STM32F407ZE$|^STM32F407IE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
