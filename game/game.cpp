using namespace std;

#include <iostream>
#include <string>
#include <cstdlib>


#include "game.h"
#include <time.h>

void greet() {
	cout << "\n---------------------------------------";
	cout << "\n Rock, Paper, or Scissors?\n\n"
		<< "     1 for Rock\n"
		<< "     2 for Paper\n"
		<< "     3 for Scissors\n\n"
		<< "     First to five wins!\n";
	cout << "---------------------------------------\n";
}

void display_Score(int user_score, int computer_Score) {
	cout << "\nYour Score: " << user_score << "\n";
	cout << "Computer Score: " << computer_Score << "\n";
}

void game() {

	int input;

	int user_score = 0;
	int computer_score = 0;

	// -------------
	// 0 = ROCK
	// 1 = PAPER
	// 2 = SCISSORS
	// -------------
	while (user_score < 5 && computer_score < 5) {
		int max;
		max = 2;
		srand(time(0));
		int rand_int = rand() % max;

		cout << "\n";
		cin >> input;

		if (rand_int == 0) {
			if (input == 1) {
				cout << "-----------------------------\n";
				cout << "\nYou entered: Rock\n"
					"It's a tie\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";

			}
			else if (input == 2) {
				user_score++;
				cout << "-----------------------------\n";
				cout << "\nYou entered: Paper\n"
					"You win!\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else if (input == 3) {
				computer_score++;
				cout << "-----------------------------\n";
				cout << "\nYou entered: Scissors\n"
					"You lose.\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else {
				cout << "\nPlease enter a valid number.\n";
			}
		}
		else if (rand_int == 1) {
			if (input == 1) {
				computer_score++;
				cout << "-----------------------------\n";
				cout << "\nYou entered: Rock\n"
					"You lose.\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else if (input == 2) {
				cout << "-----------------------------\n";
				cout << "\nYou entered: Paper\n"
					"It's a tie\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else if (input == 3) {
				user_score++;
				cout << "-----------------------------\n";
				cout << "You entered: Scissors\n"
					"You win!\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else {
				cout << "\nPlease enter a valid number.\n";
			}
		}
		else if (rand_int == 2) {
			if (input == 1) {
				user_score++;
				cout << "-----------------------------\n";
				cout << "\nYou entered: Rock\n"
					"You win!\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else if (input == 2) {
				computer_score++;
				cout << "-----------------------------\n";
				cout << "\nYou entered: Paper\n"
					"You lose.\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
			else if (input == 3) {
				cout << "-----------------------------\n";
				cout << "\nYou entered: Scissors\n"
					"It's a tie!\n";
				display_Score(user_score, computer_score);
				cout << "-----------------------------\n";
			}
		}
	}
}