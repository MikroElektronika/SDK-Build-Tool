if(${MCU_NAME} MATCHES "^STM32H573VI$|^STM32H573ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
