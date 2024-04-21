# Create a shared library
add_library(accLib SHARED accLib.cpp)

# Create an executable
add_executable(main main.cpp)

# Link the library with the executable
target_link_libraries(main accLib)
