/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Platform/blob/master/LICENSE.txt
*/

#include "OSTests.h"
#include "CompilerTests.h"
#include "Ishiko/TestFramework/TestFrameworkCore.h"

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoPlatform");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<OSTests>();
    theTests.append<CompilerTests>();

    return theTestHarness.run();
}
