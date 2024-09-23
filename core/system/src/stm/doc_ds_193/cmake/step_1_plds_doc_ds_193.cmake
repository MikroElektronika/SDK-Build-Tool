if(${MCU_NAME} MATCHES "^STM32H7S3A8$|^STM32H7S3I8$|^STM32H7S3L8$|^STM32H7S3R8$|^STM32H7S3V8$|^STM32H7S3Z8$|^STM32H7S7A8$|^STM32H7S7I8$|^STM32H7S7L8$|^STM32H7S7Z8$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
