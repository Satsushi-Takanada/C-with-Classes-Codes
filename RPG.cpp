#include "Story.h"
#include "Player_Stats.h"
#include "Character_Selection.h"

int main() {
	Story RPG;
	Character_Type User_Character;
	Player_Stats Player;

	std::string Character_Name, Character_Chosen;
	int Player_Level = 1;
	int BattleEXP = 0;

	std::vector<std::string>::iterator User_Character_Chosen;

	for (int i = 1; i <= 140; i++) {
		std::cout << "#";
		if (i == 70) {
			std::cout << '\n';
			for (int j = 0; j <= 8; j++) {
				std::cout << " ";
			}
			std::cout << "Loreweaver's Veil: Quest for the Lost Constellations\n";
		}
	}

	std::cout << "\n\n";
	for (int k = 0; k <= 27; k++) {
		std::cout << " ";
	}
	std::cout << "Press Enter\n";

	std::cin.get();

	//Creation of Character
	RPG.Narration_Story_Begin(Character_Name, Character_Chosen);
	RPG.Narration_Story_Begin(Character_Name, Character_Chosen);
	Character_Name = User_Character.setCharacterName();
	RPG.Narration_Story_Begin(Character_Name, Character_Chosen);
	Character_Chosen = User_Character.setCharacterType();
	RPG.Narration_Story_Begin(Character_Name, Character_Chosen);
	RPG.Narration_Story_Begin(Character_Name, Character_Chosen);

	//Main Town
	do {
		system("CLS");

		//Get level and stats
		Player_Level = Player.CPlayer_Level(Player_Level);
		Player.Class(Character_Chosen);

		//Get EXP
		Player.PExperience(BattleEXP);


		Player.Display(Character_Name, Character_Chosen);
		std::cin.get();
	} while (true);
}

