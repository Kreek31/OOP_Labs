#include<iostream>
#include"figures.cpp"
#include<memory>

int main(){
	size_t length;
	size_t fig_count;
	int index;
	double area;
	double summ = 0;
	std::string name;
	std::string command;
	
	std::cout << "Print mas length" << std::endl;
	std::cin >> length;
	
	
	fig_count = length;
	std::shared_ptr<Figure<float>> array[length];
	bool empty[length];
	for (size_t i = 0; i < length; i++){
		std::cout << "Print figure name" << std::endl;
		std::cin >> name;
		if(name == "octagon"){
			array[i] = std::make_shared<Octagon<>>();
		} else if(name == "square"){
			array[i] = std::make_shared<Square<>>();
		} else if(name == "triangle"){
			array[i] = std::make_shared<Triangle<>>();
		} else {
			std::cout << "wrong figure name" << std::endl;
			return 0;
		}
		empty[i] = false;
	}
	std::cout << "Commands:" << std::endl <<
	"0 - exit programm" << std::endl <<
	"1 - add new figure" << std::endl <<
	"2 - delete figure" << std::endl <<
	"3 - calculate overall area of figures" << std::endl << 
	"4 - calculate area and center of every figure" << std::endl;
	do {
		std::cout << "enter your command:";
		std::cin >> command;
		if(command == "0"){
			continue;
		} else if(command == "1"){
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
					array[index] = std::make_shared<Octagon<>>();
				} else if(name == "square"){
					array[index] = std::make_shared<Square<>>();
				} else if(name == "triangle"){
					array[index] = std::make_shared<Triangle<>>();
				} else {
					std::cout << "wrong figure name" << std::endl;
					return 0;
				}
				++fig_count;
			} else {
				std::cout << "cant add figure: reached max number of figures" << std::endl;
			}
		} else if (command == "2"){
			std::cout << "enter deleting index" << std::endl;
			std::cin >> index;
			//array.mas[index] = none;
			empty[index] = true;
		} else if(command == "3"){
			for (int i = 0; i < length; i++){
				if(empty[i]){
					continue;
				} else {
					area = *array[i];
					summ += area;
				}
			}
			std::cout << "Overall area:" << summ << std::endl;
			summ = 0;
		} else if(command == "4"){
			for (size_t i = 0; i < length; i++){
				if(empty[i]){
					continue;
				} else {
					area = *array[i];
					array[i]->geometricCenter();
					std::cout << "area:" << area << std::endl;
				}
			}
		}
	} while (command != "0");
}
