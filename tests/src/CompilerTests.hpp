/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_BASEPLATFORM_TESTS_COMPILERTESTS_HPP_
#define _ISHIKO_CPP_BASEPLATFORM_TESTS_COMPILERTESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class CompilerTests : public Ishiko::TestSequence
{
public:
    CompilerTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void IshikoCompilerTest1(Ishiko::Test& test);
    static void IshikoCompilerTest2(Ishiko::Test& test);
    static void IshikoCompilerTest3(Ishiko::Test& test);
};

#endif
