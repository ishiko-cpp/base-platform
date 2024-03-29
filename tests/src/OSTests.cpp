/*
    Copyright (c) 2020-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#include "OSTests.hpp"
#include "Ishiko/BasePlatform/OS.hpp"

using namespace Ishiko;

OSTests::OSTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "OS tests", context)
{
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 1", IshikoOSTest1);
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 2", IshikoOSTest2);
    append<HeapAllocationErrorsTest>("ISHIKO_OS test 3", IshikoOSTest3);
    append<HeapAllocationErrorsTest>("Family test 1", IshikoOSFamilyTest1);
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
    ISHIKO_TEST_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHIKO_TEST_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_TEST_FAIL();
#endif
    ISHIKO_TEST_PASS();
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
    ISHIKO_TEST_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHIKO_TEST_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_TEST_FAIL();
#endif
    ISHIKO_TEST_PASS();
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
    ISHIKO_TEST_FAIL_IF_NEQ(value, 1);
#elif defined(_WIN32)
    ISHIKO_TEST_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_TEST_FAIL();
#endif
    ISHIKO_TEST_PASS();
}


void OSTests::IshikoOSFamilyTest1(Test& test)
{
    std::string os_family = OS::Family();

#if ISHIKO_OS == ISHIKO_OS_LINUX
    ISHIKO_TEST_FAIL_IF_NEQ(os_family, "linux");
#elif ISHIKO_OS == ISHIKO_OS_WINDOWS
    ISHIKO_TEST_FAIL_IF_NEQ(os_family, "windows");
#else
    #error Unsupported or unrecognized OS
#endif
    ISHIKO_TEST_PASS();
}
