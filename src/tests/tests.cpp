#include <gtest/gtest.h>
#include "simple_library.h"

TEST(simple_test, ret5)
{
    ASSERT_EQ(simple_project::Return5(), 5);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}