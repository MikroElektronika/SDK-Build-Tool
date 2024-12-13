if(${MCU_NAME} MATCHES "^STM32L562VE$|^STM32L562ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
