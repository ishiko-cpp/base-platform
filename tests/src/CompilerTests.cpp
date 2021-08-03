/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/platform/blob/main/LICENSE.txt
*/

#include "CompilerTests.h"
#include "Ishiko/Platform/Compilers.h"

using namespace Ishiko::Tests;

CompilerTests::CompilerTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "Compiler tests", environment)
{
    append<HeapAllocationErrorsTest>("ISHIKO_COMPILER test 1", IshikoCompilerTest1);
    append<HeapAllocationErrorsTest>("ISHIKO_COMPILER test 2", IshikoCompilerTest2);
    append<HeapAllocationErrorsTest>("ISHIKO_COMPILER test 3", IshikoCompilerTest3);
}

void CompilerTests::IshikoCompilerTest1(Test& test)
{
    int value = 0;

#if ISHIKO_COMPILER == ISHIKO_COMPILER_GCC
    value = 1;
#elif ISHIKO_COMPILER == ISHIKO_COMPILER_MSVC
    value = 2;
#endif

#if defined(__GNUC__)
    ISHIKO_FAIL_IF_NEQ(value, 1);
#elif defined(_MSC_VER)
    ISHIKO_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_FAIL();
#endif
    ISHIKO_PASS();
}

void CompilerTests::IshikoCompilerTest2(Test& test)
{
    int value = 0;

#if defined(ISHIKO_COMPILER_GCC)
    value = 1;
#elif defined(ISHIKO_COMPILER_MSVC)
    value = 2;
#endif

#if defined(__GNUC__)
    ISHIKO_FAIL_IF_NEQ(value, 1);
#elif defined(_MSC_VER)
    ISHIKO_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_FAIL();
#endif
    ISHIKO_PASS();
}

void CompilerTests::IshikoCompilerTest3(Test& test)
{
    int value = 0;

#if ISHIKO_COMPILER_GCC
    value = 1;
#elif ISHIKO_COMPILER_MSVC
    value = 2;
#endif

#if defined(__GNUC__)
    ISHIKO_FAIL_IF_NEQ(value, 1);
#elif defined(_MSC_VER)
    ISHIKO_FAIL_IF_NEQ(value, 2);
#else
    ISHIKO_FAIL();
#endif
    ISHIKO_PASS();
}
