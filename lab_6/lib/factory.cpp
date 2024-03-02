#include<iostream>
#include"main_lib.cpp"

class Factory
{
public:
	virtual NPC* create(int damage, std::string name, int x_cord, int y_cord, int hp){
		std::cout << "warning: creating function not overrided" << std::endl;
		return new NPC(damage, name, x_cord, y_cord, hp);
	}
};



class CreateSquirrel: public Factory
{
public:
	Squirrel* create(int damage, std::string name, int x_cord, int y_cord, int hp) override{
		std::cout << "creating squirrel" << std::endl;
		return new Squirrel(damage, name, x_cord, y_cord, hp);
	}
};



class CreateElf: public Factory
{
public:
	Elf* create(int damage, std::string name, int x_cord, int y_cord, int hp) override{
		std::cout << "creating elf" << std::endl;
		return new Elf(damage, name, x_cord, y_cord, hp);
	}
};



class CreateRouge: public Factory
{
public:
	Rouge* create(int damage, std::string name, int x_cord, int y_cord, int hp) override{
		std::cout << "creating rouge" << std::endl;
		return new Rouge(damage, name, x_cord, y_cord, hp);
	}
};
