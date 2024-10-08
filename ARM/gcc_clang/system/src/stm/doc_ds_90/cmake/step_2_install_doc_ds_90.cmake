if(${MCU_NAME} MATCHES "^STM32H503EB$|^STM32H503KB$|^STM32H503CB$|^STM32H503RB$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_90/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
