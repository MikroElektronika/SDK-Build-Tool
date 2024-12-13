if(${MCU_NAME} MATCHES "^STM32H573MI$|^STM32H573RI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
