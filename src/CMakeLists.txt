set(CMAKE_VERBOSE_MAKEFILE ON)

# source/include files to be built
set(DEMO_SRC
        main.cpp
        MagicNumber.cpp
        MagicNumber.h
        UtilMath.cpp
        UtilMath.h
        )

add_executable(demo ${DEMO_SRC})

if (MSVC)
    # see https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
    target_compile_options(demo PUBLIC "/Zc:__cplusplus")
endif()
