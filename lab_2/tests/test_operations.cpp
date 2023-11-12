#include<iostream>
#include<gtest/gtest.h>
#include"Twelve.h"

using namespace std;

TEST(operation, plus){
	Twelve one("19");
	Twelve two("19");
	one.print();
	two.print();
	std::cout << "result of addition(first + second):" << std::endl;
	two.plus(two, one);
	two.print();
	SUCCEED();
}

TEST(operation, minus){
	Twelve one("29");
	Twelve two("19");
	one.print();
	two.print();
	std::cout << "result of subtraction(first - second):" << std::endl;
	two.minus(one, two);
	two.print();
	SUCCEED();
}

TEST(operation, larger){
	Twelve one("29");
	Twelve two("19");
	one.print();
	two.print();
	std::cout << "result of compare(first > second):" << std::endl;
	bool result{one.larger(two)};
	std::cout << result << std::endl;
	SUCCEED();
	ASSERT_EQ(result, true);
}

TEST(operation, equivalent){
	Twelve one("29");
	Twelve two("19");
	one.print();
	two.print();
	std::cout << "result of compare(first == second):" << std::endl;
	bool result{one.equivalent(two)};
	std::cout << result << std::endl;
	SUCCEED();
	ASSERT_EQ(result, false);
}

TEST(operation, smaller){
	Twelve one("09");
	Twelve two("19");
	one.print();
	two.print();
	std::cout << "result of compare(first < second):" << std::endl;
	bool result{one.smaller(two)};
	std::cout << result << std::endl;
	SUCCEED();
	ASSERT_EQ(result, true);
}

int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
