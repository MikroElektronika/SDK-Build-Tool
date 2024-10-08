if(${MCU_NAME} MATCHES "^STM32U575AG$|^STM32U575AI$|^STM32U575CG$|^STM32U575CI$|^STM32U575OG$|^STM32U575OI$|^STM32U575QG$|^STM32U575QI$|^STM32U575RG$|^STM32U575RI$|^STM32U575VG$|^STM32U575VI$|^STM32U575ZG$|^STM32U575ZI$")
    string(SUBSTRING ${MCU_NAME} 0 9 mcu_name_append)
    target_compile_definitions(lib_core
        PRIVATE
            "${mcu_name_append}xx"
        PUBLIC
            "${mcu_name_append}xx"
    )
endif()
