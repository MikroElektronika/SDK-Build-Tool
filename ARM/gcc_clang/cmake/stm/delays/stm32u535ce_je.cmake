if(${MCU_NAME} MATCHES "^STM32U535CE$|^STM32U535JE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
