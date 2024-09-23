if(${MCU_NAME} MATCHES "^STM32U031F4$|^STM32U031K4$|^STM32U031F6$|^STM32U031K6$|^STM32U031C6$|^STM32U031R6$|^STM32U031G6$|^STM32U031F8$|^STM32U031K8$|^STM32U031C8$|^STM32U031R8$|^STM32U031G8$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_194/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
