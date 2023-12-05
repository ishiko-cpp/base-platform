/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINDOWS_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINDOWS_HPP

#ifdef WIN32_LEAN_AND_MEAN
    #include <Windows.h>
#else
    #define WIN32_LEAN_AND_MEAN
    #include <Windows.h>
    #undef WIN32_LEAN_AND_MEAN
#endif

#endif
