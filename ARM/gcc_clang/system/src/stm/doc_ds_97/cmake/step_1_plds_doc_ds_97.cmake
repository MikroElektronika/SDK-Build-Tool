if(${MCU_NAME} MATCHES "^STM32H735AG$|^STM32H735IG$|^STM32H735RG$|^STM32H735VG$|^STM32H735ZG$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
