if(${MCU_NAME} MATCHES "^STM32H757AI$|^STM32H757BI$|^STM32H757II$|^STM32H757XI$|^STM32H757ZI$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_104/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
