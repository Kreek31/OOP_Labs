#include<iostream>
#include<vector>
#include<fstream>



class NPC
{
public:
	NPC (int damage, std::string name, int x_cord, int y_cord, int hp): dmg(damage), name(name), x_cord(x_cord), y_cord(y_cord), hp(hp){}
	~NPC(){
		std::cout << "NPC deleting " << this << std::endl;
	}
	virtual std::string get_type(){
		return this->npc_type;
	}
	const std::string npc_type = "None";
	const std::string name;
	const int dmg;
	int x_cord;
	int y_cord;
	int hp;
	virtual void do_dmg(){
		hp = 1;
	}
};



class Observer
{
public:
	virtual void announce_kill(NPC*, NPC*) = 0;
};



class ConsoleObserver: public Observer
{
public:
	void announce_kill(NPC* killer, NPC* died) override {
		std::cout << killer->get_type() << " " << killer->name << " killing " << died->get_type() << " " << died->name << std::endl;
	}
};



class LogObserver: public Observer
{
private:
	std::ofstream file;
public:
	LogObserver(){file.open("log.txt");}
	~LogObserver(){file.close();}
	void announce_kill(NPC* killer, NPC* died) override {
		file << killer->get_type() << " " << killer->name << " killing " << died->get_type() << " " << died->name << std::endl;
	}
};




class Visitor
{
public:
	int const squirrel_range;
	int const elf_range;
	int const rouge_range;
	std::vector<Observer*> observers;
	Visitor(int s_range, int e_range, int r_range): squirrel_range(s_range), elf_range(e_range), rouge_range(r_range){}
	
	virtual std::vector<NPC*>::iterator deal_damage(NPC* dealing_npc, std::vector<NPC*>::iterator iter, std::vector<NPC*>* list, NPC* taking_npc, bool* fighted){		
		
		
		if (dealing_npc->get_type() == "Squirrel" && (squirrel_range * squirrel_range)>=(((taking_npc->x_cord - dealing_npc->x_cord) * (taking_npc->x_cord - dealing_npc->x_cord))+((taking_npc->y_cord - dealing_npc->y_cord) * (taking_npc->y_cord - dealing_npc->y_cord)))){
			if(taking_npc->get_type() == "Elf"){
				*fighted = true;
				taking_npc->hp -= dealing_npc->dmg;
				std::cout << "Squirrel " << dealing_npc->name << " damages Elf " << taking_npc->name << " for " << dealing_npc->dmg << " damage points" << std::endl << taking_npc->name << " now have " << taking_npc->hp << " health points " << std::endl;
				if (taking_npc->hp <= 0){
					for(Observer* observ: observers){
						observ->announce_kill(dealing_npc, taking_npc);
					}
					std::vector<NPC*>::iterator new_iter = list->erase(iter);
					delete taking_npc;
					std::cout << "deleted" << std::endl;
					if (new_iter == list->end()){
						return new_iter-1;
					} else {
						return new_iter;
					}
				}
			}
		}
		else if (dealing_npc->get_type() == "Elf" && (elf_range * elf_range)>=(((taking_npc->x_cord - dealing_npc->x_cord) * (taking_npc->x_cord - dealing_npc->x_cord))+((taking_npc->y_cord - dealing_npc->y_cord) * (taking_npc->y_cord - dealing_npc->y_cord)))){
			if(taking_npc->get_type() == "Rouge"){
				*fighted = true;
				taking_npc->hp -= dealing_npc->dmg;
				std::cout << "Elf " << dealing_npc->name << " damages Rouge " << taking_npc->name << " for " << dealing_npc->dmg << " damage points" << std::endl << taking_npc->name << " now have " << taking_npc->hp << " health points " << std::endl;
				if (taking_npc->hp <= 0){
					for(Observer* observ: observers){
						observ->announce_kill(dealing_npc, taking_npc);
					}
					std::vector<NPC*>::iterator new_iter = list->erase(iter);
					delete taking_npc;
					std::cout << "deleted" << std::endl;
					if (new_iter == list->end()){
						return new_iter-1;
					} else {
						return new_iter;
					}
				}
			}
		}
		else if (dealing_npc->get_type() == "Rouge" && (rouge_range * rouge_range)>=(((taking_npc->x_cord - dealing_npc->x_cord) * (taking_npc->x_cord - dealing_npc->x_cord))+((taking_npc->y_cord - dealing_npc->y_cord) * (taking_npc->y_cord - dealing_npc->y_cord)))){
			if(taking_npc->get_type() == "Squirrel"){
				*fighted = true;
				taking_npc->hp -= dealing_npc->dmg;
				std::cout << "Rouge " << dealing_npc->name << " damages Squirrel " << taking_npc->name << " for " << dealing_npc->dmg << " damage points" << std::endl << taking_npc->name << " now have " << taking_npc->hp << " health points " << std::endl;
				if (taking_npc->hp <= 0){
					for(Observer* observ: observers){
						observ->announce_kill(dealing_npc, taking_npc);
					}
					std::vector<NPC*>::iterator new_iter = list->erase(iter);
					delete taking_npc;
					std::cout << "deleted" << std::endl;
					if (new_iter == list->end()){
						return new_iter-1;
					} else {
						return new_iter;
					}
				}
			}
		}
	return iter;
	}
};



class NPC_List
{
public:
	NPC_List(){}
	NPC_List(std::initializer_list<NPC*> init): list(init){}
	std::vector<NPC*> list;
	std::vector<NPC*>::iterator iter;
	std::vector<NPC*>::iterator g;
	void calling_visitor(NPC* npc, Visitor* vis, bool* fighted){
		for (iter = list.begin(); iter != list.end(); iter++){
			if (*iter == npc){
				continue;
			}
			iter = vis->deal_damage(npc, iter, &(this->list), *iter, fighted);
		}
	}
	void battle(Visitor* vis){
		bool fighted = true;
		std::cout << "battle!" << std::endl << std::endl;
		for(int round = 1; fighted == true; round++){
			std::cout << std::endl << "fighting round:" << round << std::endl;
			fighted = false;
			for (int i = 0; i < list.size(); i++){
				this->calling_visitor(list[i], vis, &fighted);
			}
		}
		std::cout << "end of battle" << std::endl;
	}
};

class Squirrel: public NPC
{
public:
	Squirrel (int damage, std::string name, int x_cord, int y_cord, int hp): NPC(damage, name, x_cord, y_cord, hp), npc_type("Squirrel"){}
	const std::string npc_type = "Squirrel";
	std::string get_type() override{
		return this->npc_type;
	}
};



class Elf: public NPC
{
public:
	Elf (int damage, std::string name, int x_cord, int y_cord, int hp): NPC(damage, name, x_cord, y_cord, hp){}
	const std::string npc_type = "Elf";
	std::string get_type() override{
		return this->npc_type;
	}
};



class Rouge: public NPC
{
public:
	Rouge (int damage, std::string name, int x_cord, int y_cord, int hp): NPC(damage, name, x_cord, y_cord, hp){}
	const std::string npc_type = "Rouge";
	std::string get_type() override{
		return this->npc_type;
	}
};
