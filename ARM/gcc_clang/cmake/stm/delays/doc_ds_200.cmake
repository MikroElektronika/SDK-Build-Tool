if(${MCU_NAME} MATCHES "^STM32H533CE$|^STM32H533HE$|^STM32H533RE$|^STM32H533VE$|^STM32H533ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
