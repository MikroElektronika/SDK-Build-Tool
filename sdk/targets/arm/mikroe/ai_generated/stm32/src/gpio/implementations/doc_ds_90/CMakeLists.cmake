if(${MCU_NAME} MATCHES "^STM32H503EB$|^STM32H503KB$|^STM32H503CB$|^STM32H503RB$")
    set(gpio_subimplementation "${CMAKE_CURRENT_LIST_DIR}/hal_ll_gpio_port.c")
    set(rcc_subimplementation "${CMAKE_CURRENT_SOURCE_DIR}/../../include/rcc/implementations/doc_ds_90")
    set(gpio_subimplementation_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio/implementations/doc_ds_90")
    list(APPEND hal_ll_def_list "STM32H5xx")
    list(APPEND hal_ll_def_list "STM32H50xx")
    list(APPEND hal_ll_def_list "STM32H503xx")
endif()
