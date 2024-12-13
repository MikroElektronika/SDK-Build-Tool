if(${MCU_NAME} MATCHES "^STM32L562CE$|^STM32L562ME$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
