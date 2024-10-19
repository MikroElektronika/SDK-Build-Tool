if(${MCU_NAME} MATCHES "^STM32L412CB$|^STM32L412KB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
