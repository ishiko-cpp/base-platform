/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_BASEPLATFORM_COMPILERS_H_
#define _ISHIKO_BASEPLATFORM_COMPILERS_H_

#if defined(__GNUC__)
    #define ISHIKO_COMPILER_GCC 1
    #define ISHIKO_COMPILER ISHIKO_COMPILER_GCC
#elif defined(_MSC_VER)
    #define ISHIKO_COMPILER_MSVC 3
    #define ISHIKO_COMPILER ISHIKO_COMPILER_MSVC
#else
    #error Unsupported or unrecognized compiler
#endif

#endif
