if(${MCU_NAME} MATCHES "^STM32H733VG$|^STM32H733ZG$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_96/init_clock.c)
endif()