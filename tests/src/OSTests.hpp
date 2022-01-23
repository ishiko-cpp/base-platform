/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_BASEPLATFORM_TESTS_OSTESTS_HPP_
#define _ISHIKO_CPP_BASEPLATFORM_TESTS_OSTESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class OSTests : public Ishiko::Tests::TestSequence
{
public:
    OSTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestContext& context);

private:
    static void IshikoOSTest1(Ishiko::Tests::Test& test);
    static void IshikoOSTest2(Ishiko::Tests::Test& test);
    static void IshikoOSTest3(Ishiko::Tests::Test& test);
};

#endif
