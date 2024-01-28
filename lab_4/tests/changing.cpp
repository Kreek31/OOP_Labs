#include<iostream>
#include<gtest/gtest.h>
#include"figures.cpp"

TEST(changing, inicialization){
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
	SUCCEED();
}

TEST(changing, adding_failure){
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
	if (fig_count < length) {
		std::cout << "Print figure name" << std::endl;
		std::cin >> name;
		for (int i = 0; i < length; i++){
			if (empty[i]){
				index = i;
				empty[i] = false;
			}
		}
		if(name == "octagon"){
			mas[index] = new Octagon;
		} else if(name == "square"){
			mas[index] = new Square;
		} else if(name == "triangle"){
			mas[index] = new Triangle;
		} else {
			std::cout << "wrong figure name" << std::endl;
			exit(0);
		}
		++fig_count;
	} else {
		std::cout << "cant add figure: reached max number of figures" << std::endl;
	}
	SUCCEED();
}

TEST(changing, adding_deleting_succeed){
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
	std::cout << "deleting index:0" << std::endl;
	index = 0;
	delete mas[index];
	empty[index] = true;
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
		if (empty[i]){
			index = i;
			empty[i] = false;
		}
	}
	std::cout << "adding triangle" << std::endl;
	mas[index] = new Triangle<float>(4, 4, 5, 5, 4, 7);
	for (int i = 0; i < length; i++){
		if(empty[i]){
			continue;
		} else {
			area = *mas[i];
			mas[i]->geometricCenter();
			std::cout << "area:" << area << std::endl << std::endl;
		}
	}
	SUCCEED();
}

int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
