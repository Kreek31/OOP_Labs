#include<iostream>
#include<gtest/gtest.h>
#include"Twelve.h"

TEST(inicialization, inicializer_list){
	Twelve one{'1', '2', 'a', 'b'};
	one.print();
	SUCCEED();
	ASSERT_NO_THROW();
}

TEST(inicialization, string){
	Twelve one{"12ab"};
	one.print();
	SUCCEED();
	ASSERT_NO_THROW();
}

TEST(inicialization, copying){
	Twelve one{"12ab"};
	Twelve two(one);
	one.print();
	two.print();
	SUCCEED();
	ASSERT_NO_THROW();
}

TEST(inicialization, invalid_inicializer_list){
	Twelve one{'1', '2', 'a', 'c'};
	one.print();
	SUCCEED();
	ASSERT_NO_THROW();
}

TEST(inicialization, invalid_string){
	Twelve one{"12a b"};
	one.print();
	SUCCEED();
	ASSERT_NO_THROW();
}

int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
