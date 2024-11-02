//
// Created by Elias Aggergaard Larsen on 02/11/2024.
//

#include <gtest/gtest.h>

class BoardTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}