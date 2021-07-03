/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/platform/blob/main/LICENSE.txt
*/

#include "OSTests.h"
#include "CompilerTests.h"
#include <Ishiko/Tests/Core.h>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoPlatform");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<OSTests>();
    theTests.append<CompilerTests>();

    return theTestHarness.run();
}
