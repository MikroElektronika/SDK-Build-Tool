if(${MCU_NAME} MATCHES "^STM32G0B0KE$|^STM32G0B0CE$|^STM32G0B0RE$|^STM32G0B0VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
