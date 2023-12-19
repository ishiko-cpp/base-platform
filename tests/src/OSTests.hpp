/*
    Copyright (c) 2020-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_TESTS_OSTESTS_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_TESTS_OSTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class OSTests : public Ishiko::TestSequence
{
public:
    OSTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void IshikoOSTest1(Ishiko::Test& test);
    static void IshikoOSTest2(Ishiko::Test& test);
    static void IshikoOSTest3(Ishiko::Test& test);
    static void IshikoOSFamilyTest1(Ishiko::Test& test);
};

#endif
