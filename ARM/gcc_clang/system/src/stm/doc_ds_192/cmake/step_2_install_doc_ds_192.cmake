if(${MCU_NAME} MATCHES "^STM32WLE5C8$|^STM32WLE5CB$|^STM32WLE5CC$|^STM32WLE5J8$|^STM32WLE5JB$|^STM32WLE5JC$|^STM32WLE4C8$|^STM32WLE4CB$|^STM32WLE4CC$|^STM32WLE4J8$|^STM32WLE4JB$|^STM32WLE4JC$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_192/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
