/*
    Copyright (c) 2020-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_COMPILERS_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_COMPILERS_HPP

#if defined(__GNUC__)
    #define ISHIKO_COMPILER_GCC 1
    #define ISHIKO_COMPILER ISHIKO_COMPILER_GCC
#elif defined(_MSC_VER)
    #define ISHIKO_COMPILER_MSVC 3
    #define ISHIKO_COMPILER ISHIKO_COMPILER_MSVC
#else
    #error Unsupported or unrecognized compiler
#endif

#if !defined(NDEBUG)
    #define ISHIKO_DEBUG 1
#endif

#endif
