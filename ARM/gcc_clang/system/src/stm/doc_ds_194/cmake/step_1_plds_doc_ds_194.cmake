if(${MCU_NAME} MATCHES "^STM32U031F4$|^STM32U031K4$|^STM32U031F6$|^STM32U031K6$|^STM32U031C6$|^STM32U031R6$|^STM32U031G6$|^STM32U031F8$|^STM32U031K8$|^STM32U031C8$|^STM32U031R8$|^STM32U031G8$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
