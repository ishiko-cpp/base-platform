/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Platform/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_PLATFORM_OS_H_
#define _ISHIKO_PLATFORM_OS_H_

#if defined(__linux__)
#define ISHIKO_OS_LINUX 1
#define ISHIKO_OS ISHIKO_OS_LINUX
#elif defined(_WIN32)
#define ISHIKO_OS_WINDOWS 2
#define ISHIKO_OS ISHIKO_OS_WINDOWS
#endif

#endif
