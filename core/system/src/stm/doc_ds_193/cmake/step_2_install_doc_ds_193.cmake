if(${MCU_NAME} MATCHES "^STM32H7S3A8$|^STM32H7S3I8$|^STM32H7S3L8$|^STM32H7S3R8$|^STM32H7S3V8$|^STM32H7S3Z8$|^STM32H7S7A8$|^STM32H7S7I8$|^STM32H7S7L8$|^STM32H7S7Z8$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_193/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
