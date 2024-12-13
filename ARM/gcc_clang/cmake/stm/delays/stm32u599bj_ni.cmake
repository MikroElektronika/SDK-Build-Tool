if(${MCU_NAME} MATCHES "^STM32U599BJ$|^STM32U599NI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
