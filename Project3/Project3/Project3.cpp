//This program calculates a monthly interest rate payment and creates a report using user input.
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	//User inputs these variables.
	double monthlyRate, annualRate, loanAmount;
	int numPayments;
	string fullName;

	//Program outputs these variables.
	double monthlyPayment;

	//Take input from user
	cout << "Please input loan amount.\n";
	cin >> loanAmount;
	//Please note that this asks for annual rate, not monthly rate. Rates in finance are always stated annually.
	cout << "Please input annual rate in decimal form.\n";
	cin >> annualRate;
	cout << "Please input number of payment periods.\n";
	cin >> numPayments;
	cout << "Please input your full name.\n";
	cin.ignore();
	getline(cin, fullName);

	//Calculations for monthly rate and other information.
	monthlyRate = annualRate / 12;
	monthlyPayment = (monthlyRate * pow(1 + monthlyRate, numPayments))
			/ (pow(1 + monthlyRate, numPayments) - 1) * loanAmount;
	double paidBack = monthlyPayment * numPayments;
	double intPaid = paidBack - loanAmount;

	//Formatted outputs for the data report
	cout << fixed << setprecision(2);
	cout << "Loan Amount:           $" << setw(10) << loanAmount << endl;
	cout << "Monthly Interest Rate:  " << setw(9) << monthlyRate * 100 << "%"
			<< endl;
	cout << "Number of Payments:     " << setw(10) << numPayments << endl;
	cout << "Monthly Payment:       $" << setw(10) << monthlyPayment << endl;
	cout << "Amount Paid Back:      $" << setw(10) << paidBack << endl;
	cout << "Interest Paid:         $" << setw(10) << intPaid << endl;

	//Final statement with name.
	cout << fullName << " paid a total interest in the amount of $" << intPaid
			<< " in " << numPayments << " months.";
	return 0;
}
