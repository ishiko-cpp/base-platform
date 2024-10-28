// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

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
