if(${MCU_NAME} MATCHES "^STM32H533CE$|^STM32H533HE$|^STM32H533RE$|^STM32H533VE$|^STM32H533ZE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
