if(${MCU_NAME} MATCHES "^MK82F[NX].+$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_nxp_mk8xfxx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_nxp_mk8xfxx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_nxp_mk8xfxx.h)
endif()