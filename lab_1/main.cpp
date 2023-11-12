#include<iostream>
#include<gtest/gtest.h>
#include"function.h"

using namespace std;

int main(){
	char string[100];
	int result;
	
	cout << "input your string (max size of string is 100 symbols and it must consist of small letters):" << endl;
	cin >> string;
	result = counting_glasnye(string);
	cout << "found:" << result << endl;
}
