if(${MCU_NAME} MATCHES "^STM32H7B3RI$|^STM32H7B3VI$|^STM32H7B3QI$|^STM32H7B3ZI$|^STM32H7B3AI$|^STM32H7B3II$|^STM32H7B3NI$|^STM32H7B3LI$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
