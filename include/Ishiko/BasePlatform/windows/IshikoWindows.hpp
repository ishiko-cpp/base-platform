/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINDOWS_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_WINDOWS_ISHIKOWINDOWS_HPP

#pragma push_macro("UNICODE")
#pragma push_macro("WIN32_LEAN_AND_MEAN")

// There seems to be an error with the definition of GetEnvironmentStringsA so we undefine UNICODE so that we can use
// GetEnvironmentStrings. To get the ASCII version call GetEnvironmentStrings, to get the Unicode version call 
// GetEnvironmentStringsW.
#undef UNICODE

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#pragma pop_macro("UNICODE")
#pragma pop_macro("WIN32_LEAN_AND_MEAN")

#endif
