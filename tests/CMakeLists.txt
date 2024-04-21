# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add executable for the tests
add_executable(runTests accLibTest.cpp)

# Link test executable against gtest & gtest_main
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread accLib)

# Enable testing with CTest
enable_testing()

# Add the test to CTest so it can be run with `ctest`
include(GoogleTest)
gtest_discover_tests(runTests)