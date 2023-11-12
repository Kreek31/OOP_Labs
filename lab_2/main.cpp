#include<iostream>
#include<string>
#include"Twelve.h"
using namespace std;

int main(){
	/*
	//unsigned char* g {'a', 'b', 'c', 'd'};
	Twelve A;
	Twelve B{"b1"};
	Twelve C{"b1"};
	Twelve D{C};
	Twelve* E = new Twelve{'q', 'w', 'e', 'r'};
	*/
	try{
		Twelve L{"09abc"};
	} catch(std::exception& ex){
		std::cout << "called exception:" << std::endl << ex.what() << std::endl;
	}
	char a{'a'};
	char b{'b'};
	int c;
	c = a;
	//cout << c << endl;
	c = b;
	//cout << c << endl;
}
