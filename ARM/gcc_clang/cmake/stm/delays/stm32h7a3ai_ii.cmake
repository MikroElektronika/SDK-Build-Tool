if(${MCU_NAME} MATCHES "^STM32H7A3AI$|^STM32H7A3II$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
