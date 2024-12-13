if(${MCU_NAME} MATCHES "^STM32U535NC$|^STM32U535NE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
