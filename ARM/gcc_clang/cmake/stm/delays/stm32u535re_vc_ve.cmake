if(${MCU_NAME} MATCHES "^STM32U535RE$|^STM32U535VC$|^STM32U535VE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
