cmake_minimum_required(VERSION 3.0)
project(TUF)

include_directories(external)
# Set the source file name
set(SOURCE_FILE main.cpp)

# Set the output file name
set(OUTPUT_FILE output.txt)

# Set the input file name
set(INPUT_FILE input.txt)

# Set the C++ compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Set the executable and link the necessary libraries
add_executable(TUF ${SOURCE_FILE})

# Set the command to run the executable with input/output redirection
set(EXECUTION_COMMAND ./${PROJECT_NAME} < ${INPUT_FILE} > ${OUTPUT_FILE})

# Create a custom target to execute the program with the specified command
add_custom_target(run
        COMMAND ${CMAKE_COMMAND} -E echo "Running ${PROJECT_NAME}..."
        COMMAND ${CMAKE_COMMAND} -E echo "Input file: ${INPUT_FILE}"
        COMMAND ${CMAKE_COMMAND} -E echo "Output file: ${OUTPUT_FILE}"
        COMMAND ${EXECUTION_COMMAND}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Running ${PROJECT_NAME}"
)