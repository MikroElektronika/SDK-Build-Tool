if(${MCU_NAME} MATCHES "(^STM32F2(.+)$)")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()