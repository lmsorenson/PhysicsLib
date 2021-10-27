#include <gtest/gtest.h>
#include "Fixture.h"

using ::test::Fixture;

/// First unit test
TEST_F(Fixture, test_1)
{
    ASSERT_EQ(1, 2);
}

