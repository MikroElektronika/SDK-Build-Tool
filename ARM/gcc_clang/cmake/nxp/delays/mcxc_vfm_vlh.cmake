if(${MCU_NAME} MATCHES "^MCXC141VFM$|^MCXC142VFM$|^MCXC242VFM$|^MCXC141VLH$|^MCXC242VLH$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
