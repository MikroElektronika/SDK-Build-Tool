if(${MCU_NAME} MATCHES "^STM32H757AI$|^STM32H757BI$|^STM32H757II$|^STM32H757XI$|^STM32H757ZI$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
