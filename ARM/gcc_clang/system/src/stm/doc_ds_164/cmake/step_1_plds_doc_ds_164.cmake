if(${MCU_NAME} MATCHES "^STM32L552CC$|^STM32L552CE$|^STM32L552ME$|^STM32L552QC$|^STM32L552QE$|^STM32L552RC$|^STM32L552RE$|^STM32L552VC$|^STM32L552VE$|^STM32L552ZC$|^STM32L552ZE$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
