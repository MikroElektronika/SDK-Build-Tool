if(${MCU_NAME} MATCHES "^STM32U5A5AJ$|^STM32U5A5QI$|^STM32U5A5QJ$|^STM32U5A5RJ$|^STM32U5A5VJ$|^STM32U5A5ZJ$|^STM32U5A9BJ$|^STM32U5A9NJ$|^STM32U5A9VJ$|^STM32U5A9ZJ$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
