if(${MCU_NAME} MATCHES "^STM32H7A3NI$|^STM32H7A3LI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
