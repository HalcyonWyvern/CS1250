//Rock Paper Scissors game created using functions for all processes
//Create by Luke Ledermann
#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROCK = 1, PAPER = 2, SCISSORS = 3;

//Function Prototypes
int computerChoice();	//computer choice
int userChoice();	//user's input
void gameResult(int, int, bool &);	//choice comparison
int inputValidate();	//takes input from keyboard and validates

using namespace std;

int main() {
	int comp, user;
	bool tie_breaker;
	do {
		user = userChoice();
		comp = computerChoice();
		gameResult(comp, user, tie_breaker);
	} while (tie_breaker == 1);

	return 0;
}

int computerChoice() {
	//generate random num
	unsigned seed = time(0);
	srand(seed);
	int choice = 1 + (rand() % 3);

	//What the computer chose
	cout << "Computer Choice: " << endl;
	if (choice == ROCK)
		cout << "ROCK!\n";
	if (choice == PAPER)
		cout << "PAPER!\n";
	if (choice == SCISSORS)
		cout << "SCISSORS!\n";

	//return 1-3
	return choice;
}

int userChoice() {
	cout << "Please Input 1 for Rock, 2 for Paper, and 3 for Scissors";
	int choice = inputValidate();

	cout << "Your Choice: " << endl;
	if (choice == ROCK)
		cout << "ROCK!\n";
	if (choice == PAPER)
		cout << "PAPER!\n";
	if (choice == SCISSORS)
		cout << "SCISSORS!\n";
	cout << endl;
	return choice;
}

int inputValidate() {
	int numValid = 0;
	while (!(cin >> numValid) || numValid < 1 || numValid > 3) {
		cout
				<< "There was an error in your input.\n Please select one, two, or three.";
		cin.clear();
		cin.sync();
	}
	return numValid;
}

void gameResult(int comp_choice, int user_choice, bool &tie_breaker) {
	if (comp_choice == ROCK) {
		if (user_choice == ROCK) {
			cout << "TIE! NO WINNER! PLAY AGAIN!\n";
			tie_breaker = 1;
		}
		if (user_choice == PAPER) {
			cout << "YOU WIN!";
			tie_breaker = 0;
		}
		if (user_choice == SCISSORS) {
			cout << "YOU LOSE! TOO BAD!";
			tie_breaker = 0;
		}
	} else if (comp_choice == PAPER) {
		if (user_choice == ROCK) {
			cout << "YOU LOSE! TOO BAD!";
			tie_breaker = 0;
		}
		if (user_choice == PAPER) {
			cout << "TIE! NO WINNER! PLAY AGAIN!\n";
			tie_breaker = 1;
		}
		if (user_choice == SCISSORS) {
			cout << "YOU WIN! GREAT WORK!";
			tie_breaker = 0;
		}
	} else if (comp_choice == SCISSORS) {
		if (user_choice == ROCK) {
			cout << "YOU WIN!";
			tie_breaker = 0;
		}
		if (user_choice == PAPER) {
			cout << "YOU LOSE! TOO BAD!";
			tie_breaker = 0;
		}
		if (user_choice == SCISSORS) {
			cout << "TIE! NO WINNER! PLAY AGAIN!\n";
			tie_breaker = 1;
		}
	}
}

