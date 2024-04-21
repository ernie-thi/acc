#include "accLib.h"
#include <gtest/gtest.h>

TEST(AccLibTest, GetGreeting) {
    AccLib lib;
    EXPECT_EQ("Hello from accLib!", lib.getGreeting());
}

TEST(AccLibTest, AddTest) {
    AccLib lib;
    EXPECT_EQ(5, lib.add(2, 3));
}

TEST(AccLibTest, IsEvenTest) {
    AccLib lib;
    EXPECT_TRUE(lib.isEven(2));
    EXPECT_FALSE(lib.isEven(3));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}