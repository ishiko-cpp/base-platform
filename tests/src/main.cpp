/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#include "OSTests.hpp"
#include "CompilerTests.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoPlatform");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<OSTests>();
    theTests.append<CompilerTests>();

    return theTestHarness.run();
}
