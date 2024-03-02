#include"file_functions.cpp"
#include<gtest/gtest.h>
TEST(battle, all_in_range){
	CreateSquirrel crt_squirrel;
	CreateElf crt_elf;
	CreateRouge crt_rouge;
	Visitor* who = new Visitor(20, 20, 20);
	ConsoleObserver* consoler = new ConsoleObserver();
	LogObserver* loger = new LogObserver();
	who->observers.push_back(consoler);
	who->observers.push_back(loger);
	NPC_List l;
	
	Squirrel* sqr1 = crt_squirrel.create(20, "sqr1", 0, 0, 40);
	Squirrel* sqr2 = crt_squirrel.create(5, "sqr2", 0, 0, 20);
	Elf* elf1 = crt_elf.create(30, "elf1", 0, 0, 60);
	Rouge* rge1 = crt_rouge.create(10, "rge1", 0, 0, 50);
	l.list.push_back(sqr1);
	l.list.push_back(sqr2);
	l.list.push_back(elf1);
	l.list.push_back(rge1);
	l.battle(who);
	SUCCEED();
}



TEST(battle, out_of_range){
	CreateSquirrel crt_squirrel;
	CreateElf crt_elf;
	CreateRouge crt_rouge;
	Visitor* who = new Visitor(10, 40, 20);
	ConsoleObserver* consoler = new ConsoleObserver();
	LogObserver* loger = new LogObserver();
	who->observers.push_back(consoler);
	who->observers.push_back(loger);
	NPC_List l;
	
	Squirrel* sqr1 = crt_squirrel.create(20, "sqr1", 0, 0, 40);
	Squirrel* sqr2 = crt_squirrel.create(5, "sqr2", 20, 20, 20);
	Elf* elf1 = crt_elf.create(30, "elf1", 10, 0, 60);
	Rouge* rge1 = crt_rouge.create(10, "rge1", 20, 20, 50);
	l.list.push_back(sqr1);
	l.list.push_back(sqr2);
	l.list.push_back(elf1);
	l.list.push_back(rge1);
	l.battle(who);
	SUCCEED();
}
int main(){
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
