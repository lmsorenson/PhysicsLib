#pragma once
#include <iostream>

namespace test {

/// Test Fixture for Google Test
class Fixture : public ::testing::Test
{
protected:
    void SetUp() override
    {
        std::cout << "SetUp Tests" << std::endl;
    }

    void TearDown() override
    {
        std::cout << "TearDowns Tests" << std::endl;
    }
};

}// namespace test