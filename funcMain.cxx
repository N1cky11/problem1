#include <gtest/gtest.h>
#include <vector>
#include "func.h" 

TEST(outputTest, goodCase) {
	using std::vector ;
	
	vector<int> vec=func(vector<int>{0, 1, 2, 3}) ; 
	vector<int> vecResult={3} ; 
    EXPECT_EQ(vecResult.size(),vec.size() ) ;
    for(int i{} ; i!=vec.size() ; ++i) EXPECT_EQ(vec[i],vecResult[i]) ; 
    
    vec=func(vector<int>{4,3,2,1}) ; 
    vecResult=vector<int>{1,2,3,4} ; 
    EXPECT_EQ(vecResult.size(),vec.size() ) ;
    for(int i{} ; i!=vec.size() ; ++i) EXPECT_EQ(vec[i],vecResult[i]) ; 
    
    vector<double> vec1=func(vector<double>{1.1, 2.2, 3.3,4.4}); 
    vector<double> vec1Result=vector<double>{4.4} ; 
    double error=1.e-9 ; 
    EXPECT_EQ(vecResult.size(),vec.size() ) ;
    for(int i{} ; i!=vec1.size() ; ++i) EXPECT_NEAR(vec1[i],vec1Result[i],error) ;
}
 
TEST(outputTest, badCase) {
	using std::vector ;
	
	vector<int> vec=func(vector<int>{}) ; 
	vector<int> vecResult=vector<int>{} ; 
	EXPECT_EQ(vecResult.size(),vec.size() ) ;
    for(int i{} ; i!=vec.size() ; ++i) EXPECT_EQ(vec[i],vecResult[i]) ;
}

int main(int argc, char **argv) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
