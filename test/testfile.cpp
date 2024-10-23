//
// Created by Taras Neridnyi on 24.10.2024.
//

#include <gtest/gtest.h>
#include "/Users/tarasneridnyi/Desktop/2desktop/5-6/Lab5_5/src/functions.cpp"

TEST(TEST1 , check1) {
    int depth = 0;
    EXPECT_EQ(find_mod(1,1,1 ,1 , depth), 0 );
    EXPECT_EQ(2 , depth);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}