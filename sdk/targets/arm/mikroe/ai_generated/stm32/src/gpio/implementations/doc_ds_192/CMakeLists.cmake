if(${MCU_NAME} MATCHES "^STM32WLE5C8$|^STM32WLE5CB$|^STM32WLE5CC$|^STM32WLE5J8$|^STM32WLE5JB$|^STM32WLE5JC$|^STM32WLE4C8$|^STM32WLE4CB$|^STM32WLE4CC$|^STM32WLE4J8$|^STM32WLE4JB$|^STM32WLE4JC$")
    set(gpio_subimplementation "${CMAKE_CURRENT_LIST_DIR}/hal_ll_gpio_port.c")
    set(rcc_subimplementation "${CMAKE_CURRENT_SOURCE_DIR}/../../include/rcc/implementations/doc_ds_192")
    set(gpio_subimplementation_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio/implementations/doc_ds_192")
    list(APPEND hal_ll_def_list "STM32WLxx")
    list(APPEND hal_ll_def_list "STM32WLExx")
    list(APPEND hal_ll_def_list "STM32WLE5xx")
endif()
