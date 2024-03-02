#include"file_functions.cpp"
#include<gtest/gtest.h>

TEST(save_load, saving){
	CreateSquirrel crt_squirrel;
	CreateElf crt_elf;
	CreateRouge crt_rouge;
	NPC_List l;
	
	Squirrel* sqr1 = crt_squirrel.create(20, "BigSquirrel1", 0, 0, 40);
	Squirrel* sqr2 = crt_squirrel.create(5, "SmallSquirrel2", 0, 0, 20);
	Elf* elf1 = crt_elf.create(30, "SuperElf1", 0, 0, 60);
	Rouge* rge1 = crt_rouge.create(10, "Assasin1", 0, 0, 50);
	l.list.push_back(sqr1);
	l.list.push_back(sqr2);
	l.list.push_back(elf1);
	l.list.push_back(rge1);
	save(l);
	std::cout << std::endl;
	
	std::ifstream file;
	std::string line;
	file.open("npcs.txt");
	while(std::getline(file, line)){
		std::cout << line << std::endl;
	}
	SUCCEED();
}

TEST(save_load, loading_and_battle){
	Visitor* who = new Visitor(10, 10, 10);
	ConsoleObserver* consoler = new ConsoleObserver();
	LogObserver* loger = new LogObserver();
	who->observers.push_back(consoler);
	who->observers.push_back(loger);
	NPC_List l;
	
	load(&l);
	l.battle(who);
	SUCCEED();
}
int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
