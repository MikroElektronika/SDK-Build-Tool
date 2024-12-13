if(${MCU_NAME} MATCHES "^STM32U5G7VJ$|^STM32U5G9BJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
