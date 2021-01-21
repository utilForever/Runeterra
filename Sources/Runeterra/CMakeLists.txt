# Target name
set(target Runeterra)

# Define
set(root_dir ${CMAKE_CURRENT_SOURCE_DIR}/../..)

# Includes
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Libraries
)

# Sources
file(GLOB header_dir
    ${root_dir}/Includes)

file(GLOB_RECURSE headers
    ${header_dir}/*.hpp)

file(GLOB_RECURSE sources
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Custom-build event
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
set(runeterra_header_gen_py ${root_dir}/Scripts/header_gen.py)
add_custom_command(
    COMMAND python ${runeterra_header_gen_py}
    DEPENDS ${headers}
    OUTPUT ${root_dir}/Includes/Runeterra.hpp
)
add_custom_target(runeterra_header_gen_py ALL
    DEPENDS ${root_dir}/Includes/Runeterra.hpp)
else ()
set(runeterra_header_gen_py ${root_dir}/Scripts/header_gen.py)
add_custom_command(
    COMMAND python3 ${runeterra_header_gen_py}
    DEPENDS ${headers}
    OUTPUT ${root_dir}/Includes/Runeterra.hpp
)
add_custom_target(runeterra_header_gen_py ALL
    DEPENDS ${root_dir}/Includes/Runeterra.hpp)
endif ()

# Build library
add_library(${target}
    ${sources})
add_dependencies(${target} runeterra_header_gen_py)

# Project options
set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
)

# Compile options
target_compile_options(${target}
    PRIVATE

    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS}

    INTERFACE
)

target_link_libraries(${target}
    PRIVATE

    PUBLIC
    ${DEFAULT_LINKER_OPTIONS}
	${DEFAULT_LIBRARIES}

    INTERFACE
)

# Install
install(TARGETS ${target} DESTINATION lib)
install(DIRECTORY ${header_dir} DESTINATION include)