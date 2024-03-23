#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

//main class answers
class Answers {
public:
	std::string HangedMan[9] = { " ", "Head", "Body", "Left Arm", "Right Arm", "Left Leg", "Right Leg", "Rope", "Dead" };
	std::string guess_answer, hidden_answer, unhidden_answer;
	char user_guess_input;
	bool game = true;
	int body = 0;
	int j = 0;

	void Intro() {
		std::cout << "Genre: ";
	}
};

//Inheritance class music
class Music : public Answers {
public:
	void Intro() {
		system("cls");
		std::cout << "Genre: Music\n\n";
	}

	void Game_Start(int random_pick) {
		std::string Answer[4] = { " ", "CAVETOWN", "FALL OUT BOY", "WALLOWS" };
		hidden_answer = Answer[random_pick];
		unhidden_answer = Answer[random_pick];
		
		//Will hide the answer from the user
		for (int i = 0; i < hidden_answer.length(); i++) {
			if (hidden_answer[i] != ' ') {
				hidden_answer[i] = '*';
				guess_answer = hidden_answer;
			}
		}

		do {
			std::cout << guess_answer;
			std::cout << "\nGuess: \n";
			std::cin >> user_guess_input;
			user_guess_input = toupper(user_guess_input);


			if (unhidden_answer.find(user_guess_input) != std::string::npos) {
				for (int j = 0; j < unhidden_answer.length(); j++) {
					if (user_guess_input == unhidden_answer[j]) {
						guess_answer[j] = user_guess_input;
					}
				}

				if (guess_answer == unhidden_answer) {
					system("cls");
					std::cout << "You Win!!\n\n";
					std::cout << "You guessed until: " << HangedMan[body];
					game = false;
				}
			}

			else {
				body++;
				std::cout << "Wrong Guess!";
				std::cout << "\n" << HangedMan[body] << "\n\n";
			}
			
			if (body == 8) {
				system("cls");
				std::cout << "You Failed!!";
				std::cout << "\n" << HangedMan[body];
				game = false;
			}
		} while (game != false);

		exit(0);
	}
};


//Inheritance class history
class History : public Answers {
public:
	std::string Answer[4] = { " ", "ADOLF HITLER", "MARTIN LUTHER", "NAPOLEON BONAPARTE" };

	void Intro() {
		system("cls");
		std::cout << "Genre: History\n\n";
	}

	void Game_Start(int random_pick) {
		std::string guess_answer = Answer[random_pick];

		//Will hide the answer from the user
		hidden_answer = Answer[random_pick];
		unhidden_answer = Answer[random_pick];

		//Will hide the answer from the user
		for (int i = 0; i < hidden_answer.length(); i++) {
			if (hidden_answer[i] != ' ') {
				hidden_answer[i] = '*';
				guess_answer = hidden_answer;
			}
		}

		do {
			std::cout << guess_answer;
			std::cout << "\nGuess: \n";
			std::cin >> user_guess_input;
			user_guess_input = toupper(user_guess_input);


			if (unhidden_answer.find(user_guess_input) != std::string::npos) {
				for (int j = 0; j < unhidden_answer.length(); j++) {
					if (user_guess_input == unhidden_answer[j]) {
						guess_answer[j] = user_guess_input;
					}
				}

				if (guess_answer == unhidden_answer) {
					system("cls");
					std::cout << "You Win!!";
					std::cout << HangedMan[body];
					game = false;
				}
			}

			else {
				body++;
				std::cout << "Wrong Guess!";
				std::cout << "\n" << HangedMan[body] << "\n\n";
			}

			if (body == 8) {
				system("cls");
				std::cout << "You Failed!!";
				std::cout << "\n" << HangedMan[body];
				game = false;
			}
		} while (game != false);

		exit(0);
	}
};

//Inheritance class book
class Book : public Answers {
public:
	std::string Answer[4] = { " ", "HARRY POTTER", "PERCY JACKSON", "NARNIA" };

	void Intro() {
		system("cls");
		std::cout << "Genre: Book\n\n";
	}

	void Game_Start(int random_pick) {
		hidden_answer = Answer[random_pick];
		unhidden_answer = Answer[random_pick];

		//Will hide the answer from the user
		for (int i = 0; i < hidden_answer.length(); i++) {
			if (hidden_answer[i] != ' ') {
				hidden_answer[i] = '*';
				guess_answer = hidden_answer;
			}
		}

		do {
			std::cout << guess_answer;
			std::cout << "\nGuess: \n";
			std::cin >> user_guess_input;
			user_guess_input = toupper(user_guess_input);


			if (unhidden_answer.find(user_guess_input) != std::string::npos) {
				for (int j = 0; j < unhidden_answer.length(); j++) {
					if (user_guess_input == unhidden_answer[j]) {
						guess_answer[j] = user_guess_input;
					}
				}

				if (guess_answer == unhidden_answer) {
					system("cls");
					std::cout << "You Win!!";
					std::cout << HangedMan[body];
					game = false;
				}
			}

			else {
				body++;
				std::cout << "Wrong Guess!";
				std::cout << "\n" << HangedMan[body] << "\n\n";
			}

			if (body == 8) {
				system("cls");
				std::cout << "You Failed!!";
				std::cout << "\n" << HangedMan[body];
				game = false;
			}
		} while (game != false);

		exit(0);
	}
};
