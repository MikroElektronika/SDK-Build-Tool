if(${MCU_NAME} MATCHES "^STM32U585OI$|^STM32U585QI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
