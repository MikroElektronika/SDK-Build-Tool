if(${MCU_NAME} MATCHES "^STM32U545CE$|^STM32U545JE$|^STM32U545NE$|^STM32U545RE$|^STM32U545VE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
