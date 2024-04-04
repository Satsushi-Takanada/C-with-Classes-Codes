#include "Header_Name_Calling.h";

class Character_Type {
	std::string CharacterName, CharacterChosen;
	std::string Type[4] = {"WARRIOR", "MAGE", "ROGUE", "ARCHER"};

public:
	std::string setCharacterName() {
		std::cout << "\nWhats is your name Adventurer? \n";
		std::getline(std::cin >> std::ws, CharacterName);

		
		return CharacterName;
	}

	std::string setCharacterType() {
		do {
			std::cout << "Character Type: \n Warrior\n Mage\n Rogue\n Archer\n\n";
			std::cout << "Choose Character: ";
			std::getline(std::cin >> std::ws, CharacterChosen);
			transform(CharacterChosen.begin(), CharacterChosen.end(), CharacterChosen.begin(), toupper);

		} while (find(begin(Type), end(Type), CharacterChosen) == end(Type));

		return CharacterChosen;
	}
};
