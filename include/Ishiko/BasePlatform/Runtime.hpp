// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_RUNTIME_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_RUNTIME_HPP

#if ISHIKO_COMPILER == ISHIKO_COMPILER_GCC
    #define ISHIKO_RUNTIME 1
    #define ISHIKO_RUNTIME ISHIKO_RUNTIME_LIBC
#elif ISHIKO_COMPILER == ISHIKO_COMPILER_MSVC
    #define ISHIKO_RUNTIME 3
    #define ISHIKO_RUNTIME ISHIKO_RUNTIME_MICROSOFT_CRT
#else
    #error Unsupported or unrecognized compiler
#endif

#endif
