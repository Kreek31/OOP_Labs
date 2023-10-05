#include<iostream>
#include<gtest/gtest.h>
#include"function.h"

using namespace std;

TEST(test_case, name){
	ASSERT_EQ(1, 1) << "1 not 0";
}

int main(){
	char string[100];
	int result;
	
	cout << "input your string (max size of string is 100 symbols and it must consist of small letters):" << endl;
	cin >> string;
	result = counting_glasnye(string);
	cout << "found:" << result << endl;
}
