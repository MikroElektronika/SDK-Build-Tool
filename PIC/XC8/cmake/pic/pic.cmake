## Get appropriate linker script.
if(${MCU_NAME} MATCHES "^PIC16F18176$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()
