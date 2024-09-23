if(${MCU_NAME} MATCHES "^STM32WLE5C8$|^STM32WLE5CB$|^STM32WLE5CC$|^STM32WLE5J8$|^STM32WLE5JB$|^STM32WLE5JC$|^STM32WLE4C8$|^STM32WLE4CB$|^STM32WLE4CC$|^STM32WLE4J8$|^STM32WLE4JB$|^STM32WLE4JC$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
