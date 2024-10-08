if(${MCU_NAME} MATCHES "^STM32H533CE$|^STM32H533HE$|^STM32H533RE$|^STM32H533VE$|^STM32H533ZE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_200/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
