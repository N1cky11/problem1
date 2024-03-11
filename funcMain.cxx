#include <gtest/gtest.h>
#include <vector>
#include "func.h" 

TEST(outputTest, goodCase) {
	using std::vector ;
    EXPECT_EQ(vector<int>{3}, func(vector<int>{0, 1, 2, 3}));
    EXPECT_EQ(vector<int>{1, 2, 3, 4}, func(vector<int>{4, 3, 2, 1}));
    EXPECT_EQ(vector<int>{5, 7}, func(vector<int>{0, 7, 3, 5}));
    EXPECT_EQ(vector<double>{4.4}, func(vector<double>{1.1, 2.2, 3.3}));
    EXPECT_EQ(vector<double>{5.5, 7.7}, func(vector<double>{0.0, 7.7, 3.3, 5.5}));
}
 
TEST(outputTest, badCase) {
	using std::vector ;
    EXPECT_EQ(vector<int>{}, func(vector<int>{}));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
