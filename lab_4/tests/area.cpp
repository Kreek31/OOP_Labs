#include<iostream>
#include<gtest/gtest.h>
#include"figures.cpp"

TEST(overall_area, area){
size_t length = 2;
	size_t fig_count = 2;
	int index;
	double area;
	double summ = 0;
	std::string name;
	std::string command;
	
	std::cout << "mas length:2" << std::endl;
	
	
	Figure<float>* mas[length];
	bool empty[length];
	std::cout << "figure name:square" << std::endl;
	name = "square";
	mas[0] = new Square<float>(1, 1, 2);
	empty[0] = false;
	std::cout << "figure name:triangle" << std::endl;
	name = "triangle";
	mas[1] = new Triangle<float>(1, 1, 2, 2, 1, 3);
	empty[1] = false;
	for (int i = 0; i < length; i++){
		if(empty[i]){
			continue;
		} else {
			area = *mas[i];
			mas[i]->geometricCenter();
			std::cout << "area:" << area << std::endl << std::endl;
		}
	}
	for (int i = 0; i < length; i++){
		if(empty[i]){
			continue;
		} else {
			area = *mas[i];
			summ += area;
		}
	}
	std::cout << "Overall area:" << summ << std::endl;
	SUCCEED();
}

int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
