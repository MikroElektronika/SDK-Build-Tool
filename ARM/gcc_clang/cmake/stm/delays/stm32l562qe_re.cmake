if(${MCU_NAME} MATCHES "^STM32L562QE$|^STM32L562RE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
