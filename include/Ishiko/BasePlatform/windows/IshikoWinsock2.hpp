/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINSOCK2_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINSOCK2_HPP

#ifdef NOMINMAX
    #include <winsock2.h>
#else
    #define NOMINMAX
    #include <winsock2.h>
    #undef NOMINMAX
#endif

#endif
