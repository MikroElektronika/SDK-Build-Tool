if(${MCU_NAME} MATCHES "^STM32WL33KB$|^STM32WL33KC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
