if(${MCU_NAME} MATCHES "^STM32G051C6$|^STM32G051F6$|^STM32G051G6$|^STM32G051K6$|^STM32G051C8$|^STM32G051F8$|^STM32G051G8$|^STM32G051K8$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
