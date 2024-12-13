if(${MCU_NAME} MATCHES "^STM32U535CB$|^STM32U535CC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
