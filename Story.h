#include "Header_Name_Calling.h";

class Story {
	int count = 0;
	char temp;
public:
	void Narration_Story_Begin(std::string Character_Name, std::string Character_Chosen) {
		system("CLS");
		strvec Narrate_Story{ "In the realm of Astraloria, a land steeped in ancient magic and guarded by the celestial dance of constellations, a shadow\nfalls across the night sky. The once radiant stars have dimmed, and the constellations have vanished, leaving Astraloria in\na state of cosmic disarray. Whispers among the wisest sages speak of an impending doom that threatens to engulf the entire realm.\n\nLegends tell of the Loreweaver, a legendary figure with the ability to manipulate the very fabric of the cosmos.It is said\nthat the Loreweaver's Veil, an artifact of immense power, can unveil the hidden pathways to the Lost Constellations and\nrestore balance to Astraloria. As a chosen adventurer, you find yourself drawn into this cosmic saga.\n\nYour journey begins in the ancient city of Starhaven, where the elders speak of prophecies that foretell your destiny.\nArmed with a basic understanding of celestial magic and a quest bestowed upon you by the ethereal Oracle, you set forth\ninto the mystical landscapes of Astraloria.", 
				      "Ahhh the chosen one welcome! For you are destined to be the savior of this world. Now you are whom?", "Ahh so you are " + Character_Name + " And you are a? \n", "Why yes you are a " + Character_Chosen, "Set forth " + Character_Name + " the " + Character_Chosen + " bring peace to this world!!"};

		for (int i = 0; i < Narrate_Story[count].length(); i++) {
			temp = Narrate_Story[count][i];
			std::cout << temp;
			Sleep(0);
		}
		count++;
		std::cin.get();
	}
};
