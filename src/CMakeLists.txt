set(CMAKE_VERBOSE_MAKEFILE ON)

# source/include files to be built
set(DEMO_SRC
        main.cpp
        MagicNumber.cpp
        MagicNumber.h
        UtilMath.cpp
        UtilMath.h
        IUtilMathPassThrough.h UtilMathPassThrough.cpp UtilMathPassThrough.h MagicNumberDependencies.cpp MagicNumberDependencies.h IMagicNumberDependencies.h SmartDeleter.h IMagicNumber.h)

add_executable(demo ${DEMO_SRC})

if (MSVC)
    # see https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
    target_compile_options(demo PUBLIC "/Zc:__cplusplus")
endif()
