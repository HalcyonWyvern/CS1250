//this program calculates distance traveled using a for loop
//input validation is done by a while loop
//cin.clear() and cin.sync() are two methods for clearing incorrect input that I learned online
//!(cin >> hours) makes sure that the user only enters an int
#include <iostream>

using namespace std;
int main() {
	//Variable declarations
	int speed, hours, i;
	//We start at 0 at the beginning of our trip
	int distance = 0;

	//This while loop ensures that no characters or incorrect numbers are input
	cout << "What is the speed of the vehicle in mph? ";
	while (!(cin >> speed) || (speed <= 0)) {
		cout
				<< "The speed of the vehicle must be greater than zero and an integer!\n"
				<< "Please try again!" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "How many hours did you travel? ";
	while (!(cin >> hours) || (hours < 1)) {
		cout
				<< "You must input your hours as greater than one! Input an integer!\n"
				<< "Please try again!" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "Hour\t\t" << "Distance Traveled" << endl;
	cout << "-------------------------------------" << endl;

	for (i = 0; i < hours; i++) {
		distance += speed;
		cout << (i + 1) << "\t\t" << distance << endl;
	}
	return 0;
}
