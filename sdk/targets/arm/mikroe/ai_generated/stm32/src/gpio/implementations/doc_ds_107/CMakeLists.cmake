if(${MCU_NAME} MATCHES "^STM32H7B3RI$|^STM32H7B3VI$|^STM32H7B3QI$|^STM32H7B3ZI$|^STM32H7B3AI$|^STM32H7B3II$|^STM32H7B3NI$|^STM32H7B3LI$")
    set(gpio_subimplementation "${CMAKE_CURRENT_LIST_DIR}/hal_ll_gpio_port.c")
    set(rcc_subimplementation "${CMAKE_CURRENT_SOURCE_DIR}/../../include/rcc/implementations/doc_ds_107")
    set(gpio_subimplementation_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio/implementations/doc_ds_107")
    list(APPEND hal_ll_def_list "STM32H7xx")
    list(APPEND hal_ll_def_list "STM32H7Bxx")
    list(APPEND hal_ll_def_list "STM32H7B3xx")
endif()