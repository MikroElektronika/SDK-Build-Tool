if(${MCU_NAME} MATCHES "^STM32U545CE$|^STM32U545JE$|^STM32U545NE$|^STM32U545RE$|^STM32U545VE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()