if(${MCU_NAME} MATCHES "^STM32G0B0KE$|^STM32G0B0CE$|^STM32G0B0RE$|^STM32G0B0VE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_79/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
