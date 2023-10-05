#include<iostream>
#include<gtest/gtest.h>
#include"function.h"

using namespace std;

TEST(Testing, 1){
	char string[100] = {"asdf"};
	int result;
	
	result = counting_glasnye(string);
	cout << "string:" << string << endl;
	cout << "found:" << result << endl;
	
	ASSERT_EQ(result, 1) << "wrong result";
}

TEST(Testing, 2){
	char string[100] = {"aaaay"};
	int result;
	
	result = counting_glasnye(string);
	cout << "string:" << string << endl;
	cout << "found:" << result << endl;
	
	ASSERT_EQ(result, 5) << "wrong result";
}

TEST(Testing, 3){
	char string[100] = {"abcdefghijklmnopqrstuvwxyz"};
	int result;
	
	result = counting_glasnye(string);
	cout << "string:" << string << endl;
	cout << "found:" << result << endl;
	
	ASSERT_EQ(result, 7) << "wrong result";
}

int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
