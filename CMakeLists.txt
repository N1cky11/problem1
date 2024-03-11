cmake_minimum_required(VERSION 3.10)

project(problem1) 
 
SET(CMAKE_CXX_STANDARD 20) 
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
if(GTest_FOUND) 
   add_executable(Func funcMain.cxx func.h)
   target_link_libraries(Func GTest::GTest)
else() 
   message(WARNING "Google test not found") 
endif() 
