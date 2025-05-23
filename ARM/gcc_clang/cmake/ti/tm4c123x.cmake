if(${MCU_NAME} MATCHES "^TM4C123.+$")
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_ti_tm4c123xx.c)
endif()
