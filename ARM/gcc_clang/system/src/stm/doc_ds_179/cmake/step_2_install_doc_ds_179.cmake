if(${MCU_NAME} MATCHES "^STM32U545CE$|^STM32U545JE$|^STM32U545NE$|^STM32U545RE$|^STM32U545VE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_179/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
