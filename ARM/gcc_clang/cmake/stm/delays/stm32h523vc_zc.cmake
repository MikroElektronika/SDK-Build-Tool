if(${MCU_NAME} MATCHES "^STM32H523VC$|^STM32H523ZC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
