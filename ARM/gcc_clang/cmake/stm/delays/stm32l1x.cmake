if(${MCU_NAME} MATCHES "(^STM32L1(.+)$)")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
