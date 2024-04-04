#include "Header_Name_Calling.h";

class Player_Stats{
private: 
	Pts Max_Health, Current_Health, Max_Mana, Current_Mana, Heal_Mana, Heal_Health, Damage;
	int Level, Current_Experience_Points, Max_Experience_Points;
public:
	Pts Class(std::string Chosen_Class) {
		if (Chosen_Class == "WARRIOR") {
			Max_Health = 250;
			Max_Mana = 60;
			Damage = 24;
		}

		if (Chosen_Class == "MAGE") {
			Max_Health = 150;
			Max_Mana = 120;
			Damage = 38;
		}

		if (Chosen_Class == "ROGUE") {
			Max_Health = 180;
			Max_Mana = 100;
			Damage = 28;
		}

		if (Chosen_Class == "ARCHER") {
			Max_Health = 200;
			Max_Mana = 70;
			Damage = 32;
		}

		return Max_Health, Max_Mana, Damage;
	}

	int CPlayer_Level(int player_level) {
		this->Level = player_level;

		return Level;
	}

	int PExperience(int BattleEXP) {
		this->Current_Experience_Points = BattleEXP;
		this->Max_Experience_Points = Level * 50;

		return Current_Experience_Points, Max_Experience_Points;
	}

	void Display(std::string name, std::string player_class) {
		std::cout << "Name: " + name << "\nClass: " + player_class << "\nLevel: " << Level;
		std::cout << "\n\nHealth: " << Max_Health << "\nMana: " << Max_Mana << "\nEXP: " << Current_Experience_Points << " / " << Max_Experience_Points;
	}
};
