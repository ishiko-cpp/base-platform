/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Platform/blob/master/LICENSE.txt
*/

#include "OSTests.h"
#include "Ishiko/Platform/OS.h"

using namespace Ishiko::Tests;

OSTests::OSTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "OS tests", environment)
{
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 1", IshikoOSTest1);
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 2", IshikoOSTest2);
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 3", IshikoOSTest3);
}

void OSTests::IshikoOSTest1(Test& test)
{
    int value = 0;

#if ISHIKO_OS == ISHIKO_OS_LINUX
    value = 1;
#elif ISHIKO_OS == ISHIKO_OS_WINDOWS
    value = 2;
#endif

#if defined(__linux__)
    ISHTF_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHTF_FAIL_IF_NEQ(value, 2);
#else
    ISHTF_FAIL();
#endif
    ISHTF_PASS();
}

void OSTests::IshikoOSTest2(Test& test)
{
    int value = 0;

#if defined(ISHIKO_OS_LINUX)
    value = 1;
#elif defined(ISHIKO_OS_WINDOWS)
    value = 2;
#endif

#if defined(__linux__)
    ISHTF_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHTF_FAIL_IF_NEQ(value, 2);
#else
    ISHTF_FAIL();
#endif
    ISHTF_PASS();
}

void OSTests::IshikoOSTest3(Test& test)
{
    int value = 0;

#if ISHIKO_OS_LINUX
    value = 1;
#elif ISHIKO_OS_WINDOWS
    value = 2;
#endif

#if defined(__linux__)
    ISHTF_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHTF_FAIL_IF_NEQ(value, 2);
#else
    ISHTF_FAIL();
#endif
    ISHTF_PASS();
}
