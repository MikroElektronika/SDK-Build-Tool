if(${MCU_NAME} MATCHES "^PIC16F18426$|^PIC16F18446$|^PIC16LF18426$|^PIC16LF18446$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()