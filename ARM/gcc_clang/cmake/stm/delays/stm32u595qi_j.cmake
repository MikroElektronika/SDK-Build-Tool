if(${MCU_NAME} MATCHES "^STM32U595QI$|^STM32U595QJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
