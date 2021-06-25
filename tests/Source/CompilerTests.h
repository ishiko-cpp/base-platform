/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Platform/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_PLATFORM_TESTS_COMPILERTESTS_H_
#define _ISHIKO_PLATFORM_TESTS_COMPILERTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"

class CompilerTests : public Ishiko::Tests::TestSequence
{
public:
    CompilerTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void IshikoCompilerTest1(Ishiko::Tests::Test& test);
    static void IshikoCompilerTest2(Ishiko::Tests::Test& test);
    static void IshikoCompilerTest3(Ishiko::Tests::Test& test);
};

#endif
