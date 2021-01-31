//This program calculates the areas of two rectangles and decides which one is bigger.
//Areas are calculated using two numbers input by the user.

#include <iostream>

using namespace std;
int main() {

	double length1, length2, width1, width2;
	//Inputs for Rectangle 1 and Area calculation
	cout << "Enter the length of Rectangle One: ";
	cin >> length1;
	cout << "Enter the width of Rectangle One: ";
	cin >> width1;
	double area1 = width1 * length1;

	//Inputs for Rectangle 2 and Area calculation
	cout << "Enter the length of Rectangle Two: ";
	cin >> length2;
	cout << "Enter the width of Rectangle Two ";
	cin >> width2;
	double area2 = width2 * length2;

	//This section compares the area of the two rectangles and decides which one is larger.
	if (area1 > area2) {
		cout << "Rectangle One has a larger area than Rectangle Two.";
	} else if (area1 < area2) {
		cout << "Rectangle Two has a larger area than Rectangle One.";
	} else if (area1 == area2) {
		cout << "The rectangles both have the same area!";
	}

	return 0;
}
