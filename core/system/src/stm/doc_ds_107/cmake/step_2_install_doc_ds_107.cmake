if(${MCU_NAME} MATCHES "^STM32H7B3RI$|^STM32H7B3VI$|^STM32H7B3QI$|^STM32H7B3ZI$|^STM32H7B3AI$|^STM32H7B3II$|^STM32H7B3NI$|^STM32H7B3LI$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_107/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
