if(${MCU_NAME} MATCHES "^STM32H735AG$|^STM32H735IG$|^STM32H735RG$|^STM32H735VG$|^STM32H735ZG$")
    set(spi_subimplementation "${CMAKE_CURRENT_LIST_DIR}/hal_ll_spi_master.c")
    set(rcc_subimplementation "${CMAKE_CURRENT_SOURCE_DIR}/../../include/rcc/implementations/doc_ds_97")
    set(gpio_subimplementation_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../include/gpio/implementations/doc_ds_97")
    list(APPEND hal_ll_def_list "STM32H7xx")
    list(APPEND hal_ll_def_list "STM32H73xx")
    list(APPEND hal_ll_def_list "STM32H735xx")
    set(spi_pin_map "${CMAKE_CURRENT_SOURCE_DIR}/../../include/spi_master/hal_ll_spi_master_pin_map/implementations/doc_ds_97")
endif()
