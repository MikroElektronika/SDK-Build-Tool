if(${MCU_NAME} MATCHES "^STM32WL33C8$|^STM32WL33CB$|^STM32WL33CC$|^STM32WL33K8$|^STM32WL33KB$|^STM32WL33KC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
