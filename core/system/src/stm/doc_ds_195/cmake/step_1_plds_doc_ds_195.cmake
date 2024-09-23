if(${MCU_NAME} MATCHES "^STM32U073K8$|^STM32U073H8$|^STM32U073C8$|^STM32U073R8$|^STM32U073M8$|^STM32U073KB$|^STM32U073HB$|^STM32U073CB$|^STM32U073RB$|^STM32U073MB$|^STM32U073KC$|^STM32U073HC$|^STM32U073CC$|^STM32U073RC$|^STM32U073MC$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
