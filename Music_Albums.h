#include "Header_Initiate.h"

class musicArtists {
private:
	vvString music = { {"WALLOWS", "Tell me That It's Over", " ", "Hard to Believe", "I Don't Want to Talk", "Especially You",
			"At the End of the Day", "Marvelous", "Permanent Price",
			"Missing Out", "Hurts Me", "That's What I Get", "Guitar Romantic Search Adventure" }, {"WALLOWS", "dmcf" } , {"CAVETOWN" , "Idea of Her"} }; // A vector array to hold the albums
	vvString holdMusic;
public:
	void FindMusic(std::string name) {
		system("CLS");

		for (int i = 0; i < music.size(); i++) {
			if (music[i][0] == name) {
				for (int j = 1; j < music[i].size(); j++) { // This will output the searched band/artist
					std::cout << music[i][j] << "\n";
				}
				std::cout << "\n";
			}
			for (int c = 1; c < music[i].size(); c++) {
				std::string temp = music[i][c];
				transform(temp.begin(), temp.end(), temp.begin(), toupper);
				if (temp == name) {
					std::cout << music[i][c];  // This will output the searched song
				}
			}
		}
	}
};
