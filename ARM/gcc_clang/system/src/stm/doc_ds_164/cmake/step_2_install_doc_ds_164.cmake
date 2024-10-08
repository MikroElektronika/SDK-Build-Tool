if(${MCU_NAME} MATCHES "^STM32L552CC$|^STM32L552CE$|^STM32L552ME$|^STM32L552QC$|^STM32L552QE$|^STM32L552RC$|^STM32L552RE$|^STM32L552VC$|^STM32L552VE$|^STM32L552ZC$|^STM32L552ZE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_164/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
