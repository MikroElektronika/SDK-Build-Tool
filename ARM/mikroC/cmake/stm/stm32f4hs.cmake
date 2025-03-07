if(${MCU_NAME} MATCHES "(^STM32F4[2-467][6-79](.+)$)")
    set(SYSTEM_LIB_SOURCE "system/ST/M4/src/__Lib_System_4XXHS.c")
    set(SYSTEM_LIB_INCLUDE_DIR "system/ST/M4/include")
    set(MATH_LIB_SOURCE "math/M4EF/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/M4EF/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/m4ef/__lib_delays.c")
endif()
