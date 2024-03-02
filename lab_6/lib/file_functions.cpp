#include"factory.cpp"

void save(NPC_List l){
	std::ofstream file;
	file.open("npcs.txt");
	for(int i = 0; i < l.list.size(); i++){
		file << l.list[i]->get_type() << " " <<
		l.list[i]->dmg << " " <<
		l.list[i]->name << " " <<
		l.list[i]->x_cord << " " <<
		l.list[i]->y_cord << " " <<
		l.list[i]->hp << std::endl;
	}
	file.close();
}



NPC* create_from_input(std::string line){
	CreateSquirrel crt_squirrel;
	CreateElf crt_elf;
	CreateRouge crt_rouge;

	NPC* npc;
	std::string npc_type;
	std::string npc_name;
	int damage;
	int x_cord;
	int y_cord;
	int hp;
	npc_name = "";
	if(line.find("Squirrel") != std::string::npos){
		npc_type = "Squirrel";
		line.erase(0, npc_type.length()+1);
	} else if(line.find("Elf") != std::string::npos){
		npc_type = "Elf";
		line.erase(0, npc_type.length()+1);
	} else if(line.find("Rouge") != std::string::npos){
		npc_type = "Rouge";
		line.erase(0, npc_type.length()+1);
	} else {
		std::cout << "error" << std::endl;
		exit(0);
	}
	damage = std::stoi(line);
	line.erase(0, std::to_string(damage).length()+1);
	
	for(int i = 0; line[i] != ' '; i++){
		npc_name += line[i];
	}
	line.erase(0, npc_name.length()+1);
	
	x_cord = std::stoi(line);
	line.erase(0, std::to_string(x_cord).length()+1);
	
	y_cord = std::stoi(line);
	line.erase(0, std::to_string(y_cord).length()+1);
	
	hp = std::stoi(line);
	line.erase(0, std::to_string(hp).length()+1);
	
	if(npc_type == "Squirrel"){
		npc = crt_squirrel.create(damage, npc_name, x_cord, y_cord, hp);
	} else if(npc_type == "Elf"){
		npc = crt_elf.create(damage, npc_name, x_cord, y_cord, hp);
	} else if(npc_type == "Rouge"){
		npc = crt_rouge.create(damage, npc_name, x_cord, y_cord, hp);
	} else {
		std::cout << "error" << std::endl;
		exit(0);
	}
	return npc;
}



void load(NPC_List* l){
	l->list.clear();
	std::string line;
	std::ifstream file;
	file.open("npcs.txt");
	while(std::getline(file, line)){		
		l->list.push_back(create_from_input(line));
	}
	file.close();
}
