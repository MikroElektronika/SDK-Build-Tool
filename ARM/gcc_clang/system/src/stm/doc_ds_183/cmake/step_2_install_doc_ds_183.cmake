if(${MCU_NAME} MATCHES "^STM32U5A5AJ$|^STM32U5A5QI$|^STM32U5A5QJ$|^STM32U5A5RJ$|^STM32U5A5VJ$|^STM32U5A5ZJ$|^STM32U5A9BJ$|^STM32U5A9NJ$|^STM32U5A9VJ$|^STM32U5A9ZJ$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_183/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
