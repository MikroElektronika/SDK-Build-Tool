if(${MCU_NAME} MATCHES "^STM32F405RG$|^STM32F405VG$|^STM32F405ZG$|^STM32F405OG$|^STM32F405OE$|^STM32F407VG$|^STM32F407IG$|^STM32F407ZG$|^STM32F407VE$|^STM32F407ZE$|^STM32F407IE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_48/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
