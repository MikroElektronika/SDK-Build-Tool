if(${MCU_NAME} MATCHES "(^PIC32MX(([34].+)|([5][36][4].+)|(57[^0].+)|([67].+))$)")
    set(SYSTEM_LIB_SOURCE "system/MIPS32/src/__Lib_System.c")
    set(SYSTEM_LIB_INCLUDE_DIR "system/MIPS32/include/")
    set(MATH_LIB_SOURCE "math/MIPS32/__Lib_Math.c")
    set(MATH_DOUBLE_SOURCE "math_double/MIPS32/__Lib_MathDouble.c")
    set(DELAY_SOURCE "delay/mips32/__lib_delays.c")
endif()