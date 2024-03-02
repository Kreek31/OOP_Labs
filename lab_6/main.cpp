#include"file_functions.cpp"



int main(){
	int squirrel_radius;
	int elf_radius;
	int rouge_radius;
	std::string console;



	std::cout << "Enter attack radius for each npc" << std::endl << "Squirrel:";
	std::cin >> squirrel_radius;
	std::cout << "Elf:";
	std::cin >> elf_radius;
	std::cout << "Rouge:";
	std::cin >> rouge_radius;
	
	
	
	CreateSquirrel crt_squirrel;
	CreateElf crt_elf;
	CreateRouge crt_rouge;
	Visitor* who = new Visitor(squirrel_radius, elf_radius, rouge_radius);
	ConsoleObserver* consoler = new ConsoleObserver();
	LogObserver* loger = new LogObserver();
	who->observers.push_back(consoler);
	who->observers.push_back(loger);
	NPC_List l;
	
	
	
	std::cout << "List of commands" << std::endl
	<< "0 - exit programm" << std::endl
	<< "1 - save npc's to file" << std::endl
	<< "2 - load npc's from file" << std::endl
	<< "3 - start battle (will finish programm after)" << std::endl
	<< "4 - create npc" << std::endl;
	std::cin >> console;
	while(console != "0"){
		if (console == "1"){
			save(l);
		} else if (console == "2"){
			load(&l);
		} else if (console == "3"){
			l.battle(who);
			break;
		} else if (console == "4"){
			std::cout << "Enter nps's characteristics (in one string, separated by spaces):" << std::endl
			<< "1)npc type (squirrel/elf/rouge)" << std::endl
			<< "2)npc damage" << std::endl
			<< "3)npc name" << std::endl
			<< "4)npc x coordinate" << std::endl
			<< "5)npc y coordinate" << std::endl
			<< "6)npc health points" << std::endl;
			std::cin >> console;
			l.list.push_back(create_from_input(console));
		}
		std::cin >> console;
	}
	std::cout << "finishing programm" << std::endl;
}
