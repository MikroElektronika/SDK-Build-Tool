if(${MCU_NAME} MATCHES "^STM32H523CE$|^STM32H523HE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
