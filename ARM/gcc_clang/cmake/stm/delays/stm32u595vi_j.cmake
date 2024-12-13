if(${MCU_NAME} MATCHES "^STM32U595VI$|^STM32U595VJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
