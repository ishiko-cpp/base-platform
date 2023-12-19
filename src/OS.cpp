/*
    Copyright (c) 2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#include "OS.hpp"

namespace
{
#if ISHIKO_OS == ISHIKO_OS_LINUX
    static std::string os_family = "linux";
#elif ISHIKO_OS == ISHIKO_OS_WINDOWS
    static std::string os_family = "windows";
#elif ISHIKO_OS ISHIKO_OS_CYGWIN
    static std::string os_family = "cygwin";
#else
    #error Unsupported or unrecognized OS
#endif
}

const std::string& Ishiko::OS::Family()
{
    return os_family;
}
