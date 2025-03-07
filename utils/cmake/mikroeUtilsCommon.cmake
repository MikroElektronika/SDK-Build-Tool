#############################################################################
## Function to find the packages with better error message handling.
#############################################################################
function(find_package_me PACKAGE_NAME)
    # Set the default value of REQUIRED_FLAG to OPTIONAL
    set(REQUIRED_FLAG "OPTIONAL")

    # If a second argument is passed, treat it as REQUIRED_FLAG
    if(ARGC GREATER 1)
        set(REQUIRED_FLAG ${ARGV1})
    endif()

    # Attempt to find the package without the REQUIRED flag
    find_package(${PACKAGE_NAME})

    # If the package is not found, manually trigger an error with a detailed message
    if (NOT ${PACKAGE_NAME}_FOUND AND ${REQUIRED_FLAG} STREQUAL "REQUIRED")
        message(FATAL_ERROR "
      ****************************************************************************
        !!! FATAL ERROR: Setup configuration is incorrect !!!
        If you are using graphical project, ensure that your setup has a display.
        If you are using CAN/DMA/USB/Ethernet/etc. project, ensure that the MCU
        that you are using supports this module. Refer to this link:
        https://github.com/MikroElektronika/mikrosdk_v2/blob/master/SUPPORTED_CHIP_LIST.md
        ****************************************************************************
        ")
    endif()
endfunction()

#############################################################################
## Including this directory will ensure that all necessary support files
## are visible to any project.
#############################################################################
include_directories(BEFORE "${CMAKE_CURRENT_LIST_DIR}/include")

#############################################################################
## Function to include adequate math library in GCC build and create macros.
#############################################################################
function (math_check_target _targetName)
    if (NOT ${TOOLCHAIN_LANGUAGE} MATCHES "MikroC|XC8")
        target_compile_definitions(${_targetName} PUBLIC
            PI=M_PI
            TWO_PI=M_TWOPI
        )
        target_link_libraries(${_targetName} PUBLIC m)
    endif()
endfunction()

#############################################################################
## Macro to copy files from src to dest
#############################################################################
macro(copy_files src dest)
    if(NOT EXISTS "${dest}/bin")
        file(COPY "${src}" DESTINATION "${dest}")
    endif()
endmacro()

#############################################################################
## Macro to append a specific legacy cmake path to CMAKE_MODULE_PATH
#############################################################################
macro(legacy_cmake_path)
    string(REGEX REPLACE "/compilers/.*" "" PACKAGES_PATH "${CMAKE_MikroC_COMPILER}")
    string(REGEX REPLACE ".*mikroc/([^/]+)/mikroc.*" "\\1" ARCHITECTURE "${CMAKE_MikroC_COMPILER}")
    set(full_path "${PACKAGES_PATH}/legacy/${ARCHITECTURE}/legacy-${ARCHITECTURE}")

    # Optionally, verify that the constructed path exists
    if(NOT EXISTS "${full_path}")
        message(WARNING "The path '${full_path}' does not exist.")
    endif()

    # Copy the bin files to .meproject folder
    copy_files("${full_path}/bin" "${CMAKE_CURRENT_LIST_DIR}/.meproject/setup/Debug")
    copy_files("${full_path}/bin" "${CMAKE_CURRENT_LIST_DIR}/.meproject/setup/Release")

    # Append the constructed path to CMAKE_MODULE_PATH in the parent scope
    list(APPEND CMAKE_MODULE_PATH "${full_path}/cmake;" PARENT_SCOPE)
endmacro()

#############################################################################
## Macro for exporting the version of core lib
#############################################################################
set(COMPILER_REVISION 1.0)
macro(core_version_export lib)
    target_compile_definitions(${lib}
        INTERFACE
            MikroCCoreVersion=1
    )
endmacro()

#############################################################################
## Macro for enabling preinit support
#############################################################################
macro(preinit_support lib)
    target_compile_definitions(${lib}
        INTERFACE
            PREINIT_SUPPORTED
    )
endmacro()

#############################################################################
## Function to install and export static library target
#############################################################################
function(core_install targetAlias)
    ## Install library
    get_target_property(_targetName ${targetAlias} ALIASED_TARGET)
    get_target_property(linkLibs ${_targetName} INTERFACE_LINK_LIBRARIES)

    core_version_export(${_targetName})
    preinit_support(${_targetName})

    install(TARGETS ${_targetName}
        EXPORT ${targetAlias}Target
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
    # INSTALL EXPORT FILE
    install(EXPORT ${targetAlias}Target
        FILE ${targetAlias}Targets.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})
    ## Set variable used in configFile
    set(TARGET_NAME ${targetAlias})
    set(findDepsList "")

    foreach(LIB ${linkLibs})
        list(APPEND findDepsList "find_dependency(${LIB})")
    endforeach()
    if (linkLibs)
        list(JOIN findDepsList "\n" FIND_DEPS)
    else()
        set(FIND_DEPS "")
    endif()
    ## Configure package file
    configure_package_config_file(${CMAKE_CURRENT_FUNCTION_LIST_DIR}/mikroeExportConfig.cmake.in
         "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
         INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})

    ## configure package version file
    write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        VERSION ${CMAKE_PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
        ARCH_INDEPENDENT)
    ## Install package export and package version file
    install(FILES
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})

    install(FILES
          "${TEST_LIB_PATH}/include/unit_test_api.h"
          "${PREINIT_ROUTINE_PATH}/include/preinit.h"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/../include/core)
endfunction()

#############################################################################
## Function to create static library target
#############################################################################
macro(core_add_library functionName functionAlias)
    add_library(${functionName} STATIC ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()

#############################################################################
## Function to create interface header only library target
#############################################################################
macro(core_add_interface_library functionName functionAlias)
    add_library(${functionName} INTERFACE ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
endmacro()

#############################################################################
## Macro to define current setup clock frequency in kHz
#############################################################################
macro(add_fosc_macro)

    # Cannot use ARGN directly with list() command,
    # so copy it to a variable first.
    set (extra_args ${ARGN})
    list(LENGTH extra_args extra_count)
    if(${extra_count} GREATER 0)
        foreach(ARGUMENT ${extra_args})
            target_compile_definitions(${ARGUMENT}
                PUBLIC
                    -DOSC_KHZ=${OSC}*1000UL
            )
        endforeach()
    endif()

endmacro()

#############################################################################
## Macro to set preinit macro values
#############################################################################
macro(preinit_macros)

    set(preinit_step_list "")
    preinit_get_step(PREINIT_STEP_1  preinit_step_list)
    preinit_get_step(PREINIT_STEP_2  preinit_step_list)
    preinit_get_step(PREINIT_STEP_3  preinit_step_list)
    preinit_get_step(PREINIT_STEP_4  preinit_step_list)
    preinit_get_step(PREINIT_STEP_5  preinit_step_list)
    preinit_get_step(PREINIT_STEP_6  preinit_step_list)
    preinit_get_step(PREINIT_STEP_7  preinit_step_list)
    preinit_get_step(PREINIT_STEP_8  preinit_step_list)
    preinit_get_step(PREINIT_STEP_9  preinit_step_list)
    preinit_get_step(PREINIT_STEP_10 preinit_step_list)

    set(preinit_steps "")
    set(preinit_osc_value "0")
    if(preinit_step_list)
        set(preinit_osc_value ${PREINIT_OSC_VALUE})
    endif()

    foreach(preinit_step IN LISTS preinit_step_list)
        list(APPEND preinit_steps ${preinit_step})
    endforeach()

    set(macros_out "")
    preinit_macros_set(${preinit_osc_value} macros_out ${preinit_steps})
    preinit_macros_generate(${PREINIT_ROUTINE_PATH}/include preinit.h ${macros_out})

endmacro()

#############################################################################
## Macro to create core library
#############################################################################
macro(create_core_library)

    include(${PREINIT_ROUTINE_PATH}/cmake/preinitUtils.cmake)

    preinit_macros()

    set(MCU_NAME_LOWER "")
    string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)

    set(INTERRUPTS_LIB_SOURCE "interrupts/interrupts.c")
    set(INTERRUPTS_LIB_INCLUDE "interrupts/include/interrupts.h")
    set(INTERRUPTS_LIB_INCLUDE_DIR "interrupts/include")

    set(INTERRUPTS_LIB_INCLUDE_MCU "interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h")
    set(INTERRUPTS_LIB_INCLUDE_MCU_DIR "interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}")

    cmake_path(CONVERT "${SEARCH_PATHS}" TO_CMAKE_PATH_LIST SEARCH_PATH_LIST NORMALIZE)
    list(TRANSFORM SEARCH_PATH_LIST PREPEND "-SP;" )

    set(CUSTOM_COMMAND_STRING ${CMAKE_MikroC_COMPILER} -p${MCU_NAME} -jcom -DL -NRL -MF ${COMPILER_FLAGS} -b${CMAKE_BINARY_DIR} -fo${OSC} ${JCFG_FILE} ${SEARCH_PATH_LIST})
    set(CUSTOM_LINK_COMMAND_STRING ${CMAKE_MikroC_COMPILER} -ARH -NRL ${LINKER_FLAGS} -b${CMAKE_BINARY_DIR} ${SEARCH_PATH_LIST} -SP${CMAKE_BINARY_DIR})

    set(STD_LIB_NAMES "")
    if(${MIKROSDK_TYPE} STREQUAL "mikrosdk")
        foreach(STD_LIB IN LISTS STD_SOURCES)
            get_filename_component(FILE_BASENAME ${STD_LIB} NAME_WE)
            list(APPEND STD_LIB_NAMES ${CMAKE_BINARY_DIR}/${FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION})
        endforeach()
    else()
        list(APPEND STD_LIB_NAMES ${CMAKE_BINARY_DIR}/cstdio${CMAKE_MikroC_OUTPUT_EXTENSION})
    endif()

    set(UNIT_TEST_LIB_SOURCES ${TEST_LIB_PATH}/src/unit_test_api.c)
    set(PREINIT_LIB_SOURCES ${PREINIT_ROUTINE_PATH}/src/preinit.c)

    get_filename_component(DEF_FILE_BASENAME ${DEF_SOURCE} NAME_WE)
    get_filename_component(DELAY_FILE_BASENAME ${DELAY_SOURCE} NAME_WE)
    get_filename_component(MATH_FILE_BASENAME ${MATH_LIB_SOURCE} NAME_WE)
    get_filename_component(MATH_DOUBLE_FILE_BASENAME ${MATH_DOUBLE_SOURCE} NAME_WE)
    get_filename_component(SYSTEM_FILE_BASENAME ${SYSTEM_LIB_SOURCE} NAME_WE)
    get_filename_component(INTERRUPTS_LIB_SOURCE_BASENAME ${INTERRUPTS_LIB_SOURCE} NAME_WE)

    if (${MIKROSDK_TYPE} STREQUAL "mikrosdk")
        set(ARCHIVE_LIB_LIST -out lib_core.a  ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES} ${CMAKE_BINARY_DIR}/unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/preinit${CMAKE_MikroC_OUTPUT_EXTENSION})
    else()
        set(ARCHIVE_LIB_LIST -out lib_core.a  ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}  ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES} ${CMAKE_BINARY_DIR}/unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/preinit${CMAKE_MikroC_OUTPUT_EXTENSION})
    endif()

    add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/std${CMAKE_MikroC_OUTPUT_EXTENSION}
                            ${CMAKE_BINARY_DIR}/lib_core.a
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${DEF_SOURCE}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${MATH_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${MATH_DOUBLE_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -out ${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${DELAY_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_INCLUDE_DIR} -out ${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${SYSTEM_LIB_INCLUDE_DIR} -out std${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_CURRENT_SOURCE_DIR}/${STD_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${TEST_LIB_PATH}/include -out unit_test_api${CMAKE_MikroC_OUTPUT_EXTENSION} ${UNIT_TEST_LIB_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${CMAKE_CURRENT_SOURCE_DIR}/${INTERRUPTS_LIB_INCLUDE_DIR} -IP ${CMAKE_CURRENT_SOURCE_DIR}/${INTERRUPTS_LIB_INCLUDE_MCU_DIR} -out ${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${INTERRUPTS_LIB_SOURCE} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_COMMAND_STRING} -IP${PREINIT_ROUTINE_PATH}/include -out preinit${CMAKE_MikroC_OUTPUT_EXTENSION} ${PREINIT_LIB_SOURCES} ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION} ${STD_LIB_NAMES}
                    COMMAND ${CUSTOM_LINK_COMMAND_STRING} ${ARCHIVE_LIB_LIST}
                    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
                    DEPENDS ${DEF_SOURCE}
                    VERBATIM)

    core_add_interface_library(lib_core MikroC.Core
        ${CMAKE_BINARY_DIR}/${DEF_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${DELAY_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${MATH_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${MATH_DOUBLE_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${SYSTEM_FILE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/${INTERRUPTS_LIB_SOURCE_BASENAME}${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/std${CMAKE_MikroC_OUTPUT_EXTENSION}
        ${CMAKE_BINARY_DIR}/lib_core.a
        ${DEF_SOURCE}
        ${DELAY_SOURCE}
        ${MATH_LIB_SOURCE}
        ${MATH_DOUBLE_SOURCE}
        ${SYSTEM_LIB_SOURCE}
        ${INTERRUPTS_LIB_SOURCE}
    )

    target_include_directories(lib_core
        INTERFACE
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_LIBDIR}/../include/core>
    )

    core_install(MikroC.Core)

    install(
        FILES
            ${CMAKE_BINARY_DIR}/lib_core.a
        DESTINATION
            ${CMAKE_INSTALL_PREFIX}/lib
    )

    install(
        FILES
            common/delays.h
            ${INTERRUPTS_LIB_INCLUDE}
            ${INTERRUPTS_LIB_INCLUDE_MCU}
        DESTINATION
            ${CMAKE_INSTALL_PREFIX}/include/core
    )

    core_version_export(lib_core)
    preinit_support(lib_core)

endmacro()

#############################################################################
## Macro to add preinit library
#############################################################################
macro(add_preinit_lib)
    add_subdirectory(../../../../preinit preinit)
endmacro()

#############################################################################
## Function to fetch adequate linker name based on current device
#############################################################################
function(fetch_linker_name search_path linker_name)
    if(${TOOLCHAIN_LANGUAGE} STREQUAL "GNU")
        file(GLOB_RECURSE linker_full_path ${search_path}/*.ld)
        if(linker_full_path)
            get_filename_component(linker_name_local ${linker_full_path} NAME)
            set(${linker_name} ${linker_name_local} PARENT_SCOPE)
        endif()
    endif()
endfunction()

#############################################################################
## Function to link linker script for all executable targets
#############################################################################
function(add_ld_all_targets DIR project_dir linker_name)
    if(${TOOLCHAIN_LANGUAGE} STREQUAL "GNU")
        get_property(TGTS DIRECTORY "${DIR}" PROPERTY BUILDSYSTEM_TARGETS)
        foreach(TGT IN LISTS TGTS)
            get_target_property(target_type ${TGT} TYPE)
            if(${target_type} STREQUAL "EXECUTABLE")
                target_sources(${TGT}
                    PUBLIC
                        ${project_dir}/.meproject/setup/FileLinker/${linker_name}
                )
                target_link_options(${TGT}
                    PUBLIC
                        -T ${project_dir}/.meproject/setup/FileLinker/${linker_name}
                )
            endif()
        endforeach()

        get_property(SUBDIRS DIRECTORY "${DIR}" PROPERTY SUBDIRECTORIES)
        foreach(SUBDIR IN LISTS SUBDIRS)
            add_ld_all_targets("${SUBDIR}" ${project_dir} ${linker_name})
        endforeach()
    endif()
endfunction()

#############################################################################
## Function to fetch adequate startup name based on current device
#############################################################################
function(fetch_startup_name search_path startup_name)
    if(${TOOLCHAIN_LANGUAGE} STREQUAL "GNU")
        file(GLOB_RECURSE startup_full_path ${search_path}/*.[sS])
        if(startup_full_path)
            get_filename_component(startup_name_local ${startup_full_path} NAME)
            set(${startup_name} ${startup_name_local} PARENT_SCOPE)
        endif()
    endif()
endfunction()

#############################################################################
## Function to link linker script for all executable targets
#############################################################################
function(add_startup_all_targets DIR project_dir startup_name)
    if(${TOOLCHAIN_LANGUAGE} STREQUAL "GNU")
        get_property(TGTS DIRECTORY "${DIR}" PROPERTY BUILDSYSTEM_TARGETS)
        foreach(TGT IN LISTS TGTS)
            get_target_property(target_type ${TGT} TYPE)
            if(${target_type} STREQUAL "EXECUTABLE")
                target_sources(${TGT}
                    PUBLIC
                        ${project_dir}/.meproject/setup/FileStartup/${startup_name}
                )
            endif()
        endforeach()

        get_property(SUBDIRS DIRECTORY "${DIR}" PROPERTY SUBDIRECTORIES)
        foreach(SUBDIR IN LISTS SUBDIRS)
            add_startup_all_targets("${SUBDIR}" ${project_dir} ${startup_name})
        endforeach()
    endif()
endfunction()

#############################################################################
## Macro to add volatile public directives for specific MCUs
#############################################################################
macro(add_volatile_directives libName)
    if(${MCU_NAME} MATCHES "^(AT)?SAM.+")
        target_compile_definitions(${libName}
            PUBLIC
                "__I=volatile"
                "__O=volatile"
                "__IO=volatile"
        )
    endif()
endmacro()

#############################################################################
## Check if device has enough memory. Check either FLASH, RAM or both.
## Usage:
## has_enough_memory(ENOUGH_MEMORY RAM 98304 FLASH 524288)
## if(${ENOUGH_MEMORY})
##     ## Do something if YES
## else()
##     ## Do something if NO
## endif()
#############################################################################
function(has_enough_memory check_value)
    # Initialize the result to false (OFF)
    set(${check_value} OFF PARENT_SCOPE)

    # Parse optional arguments
    set(options)
    set(oneValueArgs FLASH RAM)
    cmake_parse_arguments(ARG "${options}" "${oneValueArgs}" "" ${ARGN})

    message(INFO ": MINIMUM FLASH is ${ARG_FLASH} Bytes")
    message(INFO ": MINIMUM RAM is ${ARG_RAM} Bytes")

    # Validate that at least one of FLASH or RAM is provided
    if(NOT DEFINED ARG_FLASH AND NOT DEFINED ARG_RAM)
        message(FATAL_ERROR "At least one of 'FLASH' or 'RAM' must be specified.")
    endif()

    # Check FLASH memory, if required
    if(DEFINED ARG_FLASH)
        if(NOT DEFINED MCU_FLASH)
            message(FATAL_ERROR "MCU_FLASH not defined for ${MCU_NAME}. Please ensure it is set in the database.")
        elseif(MCU_FLASH LESS ARG_FLASH)
            message(STATUS "The MCU ${MCU_NAME} does not meet the FLASH requirement (Required: ${ARG_FLASH}, Found: ${MCU_FLASH}).")
            return()
        endif()
        message(INFO ": CURRENT FLASH is ${MCU_FLASH} Bytes")
    endif()

    # Check RAM memory, if required
    if(DEFINED ARG_RAM)
        if(NOT DEFINED MCU_RAM)
            message(FATAL_ERROR "MCU_RAM not defined for ${MCU_NAME}. Please ensure it is set in the database.")
        elseif(MCU_RAM LESS ARG_RAM)
            message(STATUS "The MCU ${MCU_NAME} does not meet the RAM requirement (Required: ${ARG_RAM}, Found: ${MCU_RAM}).")
            return()
        endif()
        message(INFO ": CURRENT RAM is ${MCU_RAM} Bytes")
    endif()

    # Infer library name from current directory
    get_filename_component(LIBRARY_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

    # If all checks pass, set the result to true (ON)
    set(${check_value} ON PARENT_SCOPE)

    # Display success message
    message(STATUS "MEMORY_CHECK: ${MCU_NAME} has enough memory for '${LIBRARY_NAME}' library.")
endfunction()
