#include <iostream>

using namespace std;
int main() {
	//Prices and limits will never be changed, so they get declared using const.
	const float PLAN_A_LIMIT = 4.00,
			PLAN_B_LIMIT = 8.00,
			PLAN_A_OVERCHARGE = 10.00,
			PLAN_B_OVERCHARGE = 5.00,
			PLAN_A_COST = 39.99,
			PLAN_B_COST = 59.99,
			PLAN_C_COST = 69.99;

	//variable declaration
	char packChoice;
	float gigsUsed, gigsOver, monthlyBill;

	//ask user for package and gigabytes used
	cout << "What mobile data package have you purchased?\n"
			<< "Please select package A, B, or C.\n";
	cin >> packChoice;
	cout << "How many gigabytes of data have you used this month?";
	cin >> gigsUsed;

	//switch allows uppercase and lowercase char input
	switch (packChoice) {
	case 'a':
	case 'A':
		if (gigsUsed > PLAN_A_LIMIT) {
			gigsOver = gigsUsed - PLAN_A_LIMIT;
			monthlyBill = PLAN_A_COST + gigsOver * PLAN_A_OVERCHARGE;
			cout << "Your bill is: $" << monthlyBill << " for this month\n";
			cout << "You were " << gigsOver << " gigabytes over your limit this month.";
		} else {
			cout << "Your bill is: $" << PLAN_A_COST << " for this month\n";
		}
		break;

	case 'b':
	case 'B':
		if (gigsUsed > PLAN_B_LIMIT) {
			gigsOver = gigsUsed - PLAN_B_LIMIT;
			monthlyBill = PLAN_B_COST + gigsOver * PLAN_B_OVERCHARGE;
			cout << "Your bill is: $" << monthlyBill << " for this month\n";
			cout << "You were " << gigsOver << " gigabytes over your limit this month.";
		} else {
			cout << "Your bill is: $" << PLAN_B_COST << " for this month\n";
		}
		break;

	case 'c':
	case 'C':
		cout << "Your bill is: $" << PLAN_C_COST << " for this month.\n";
		cout << "Good news! You also have unlimited data with package C!";
		break;

	default:
		cout << "\nYou didn't enter A, B, or C! Please try again\n";
	}
	return 0;
}
