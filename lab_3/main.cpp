#include<iostream>
#include"figures.cpp"

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
	Figure* mas[length];
	bool empty[length];
	for (size_t i = 0; i < length; i++){
		std::cout << "Print figure name" << std::endl;
		std::cin >> name;
		if(name == "octagon"){
			mas[i] = new Octagon;
		} else if(name == "square"){
			mas[i] = new Square;
		} else if(name == "triangle"){
			mas[i] = new Triangle;
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
					mas[index] = new Octagon;
				} else if(name == "square"){
					mas[index] = new Square;
				} else if(name == "triangle"){
					mas[index] = new Triangle;
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
			delete mas[index];
			empty[index] = true;
		} else if(command == "3"){
			for (int i = 0; i < length; i++){
				if(empty[i]){
					continue;
				} else {
					area = *mas[i];
					summ += area;
				}
			}
			std::cout << "Overall area:" << summ << std::endl;
		} else if(command == "4"){
			for (int i = 0; i < length; i++){
				if(empty[i]){
					continue;
				} else {
					area = *mas[i];
					mas[i]->geometricCenter();
					std::cout << "area:" << area << std::endl << std::endl;
				}
			}
		}
	} while (command != "0");
	/*
	Octagon oct;
	//oct >> std::cin;
	oct << std::cout;
	double s = oct;
	std::cout << s << std::endl;
	*/
	
	/*
	Triangle tri;
	tri << std::cout;
	double s = tri;
	std::cout << s << std::endl;
	*/
	/*
	Figure* sqr{new Square};
	*sqr << std::cout;
	double s = *sqr;
	std::cout << s << std::endl;
	*/
}
