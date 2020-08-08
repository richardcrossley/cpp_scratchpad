project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Adding the Google_Tests run target
add_executable(Google_Tests_run SimpleCalcTest.cpp)

# Linking Google_Tests_run with SimpleCalc which will be tested
target_link_libraries(Google_Tests_run SimpleCalc_lib)
target_link_libraries(Google_Tests_run gtest gtest_main)
