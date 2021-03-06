set(TEST_DEMO_SRCS
        stdafx.h
        ../src/MagicNumber.cpp
        ../src/MagicNumber.h
        ../src/UtilMath.cpp
        ../src/UtilMath.h
         "MagicNumberTests.cpp")

add_executable(test_demo ${TEST_DEMO_SRCS})

if (MSVC)
    # see https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
    target_compile_options(test_demo PUBLIC "/Zc:__cplusplus")
endif()

# should help improve compile time for test project
target_precompile_headers(test_demo PRIVATE stdafx.h)

# link with google test (including google mock)
target_link_libraries(test_demo PUBLIC gmock gtest_main)
