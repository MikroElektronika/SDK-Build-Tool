if(${MCU_NAME} MATCHES "^STM32H7A3RG$|^STM32H7A3VG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
