if(${MCU_NAME} MATCHES "^STM32L162QC$|^STM32L162ZC$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/stm/doc_ds_139/init_clock.c)
endif()
