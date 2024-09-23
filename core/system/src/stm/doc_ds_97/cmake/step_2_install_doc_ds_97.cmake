if(${MCU_NAME} MATCHES "^STM32H735AG$|^STM32H735IG$|^STM32H735RG$|^STM32H735VG$|^STM32H735ZG$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_97/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
