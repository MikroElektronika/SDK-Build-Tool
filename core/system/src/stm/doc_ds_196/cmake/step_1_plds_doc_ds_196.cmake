if(${MCU_NAME} MATCHES "^STM32U083KC$|^STM32U083HC$|^STM32U083CC$|^STM32U083RC$|^STM32U083MC$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
