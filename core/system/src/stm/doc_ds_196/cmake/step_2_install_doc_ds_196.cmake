if(${MCU_NAME} MATCHES "^STM32U083KC$|^STM32U083HC$|^STM32U083CC$|^STM32U083RC$|^STM32U083MC$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_196/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
