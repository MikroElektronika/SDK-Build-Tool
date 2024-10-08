if(${MCU_NAME} MATCHES "^STM32H503EB$|^STM32H503KB$|^STM32H503CB$|^STM32H503RB$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
