//This program reads input from a file with random numbers
//user inputs the file path and then the program calculates a variety of things
//created by Luke Ledermann
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main() {

	//asks user to input location of the random text file
	string fileName;
	ifstream inputFile;
	cout
			<< "Enter the name of the file you wish to open. Be sure you include the path, if necessary!";
	cin >> fileName;
	inputFile.open(fileName);

	//declare variables used
	int numNumbers = 0, numEven = 0, numOdd = 0, numSum = 0, readN;
	float numAvg = 0;

	//validate file is open
	if (inputFile) {
		cout << "File Opened successfully." << endl;

		//while loop to read each file line
		while (inputFile >> readN) {
			//count number of numbers in file
			numNumbers++;
			//sum numbers into numSum
			numSum += readN;
			//calculate # odd and even
			if (readN % 2 == 0) {
				numEven++;
			} else {
				numOdd++;
			}
		}

		numAvg = numSum / numNumbers;
		inputFile.close();

		//Create table of information
		cout << left << setw(25) << "Numbers read from file: " << setw(8)
				<< numNumbers << endl;
		cout << left << setw(25) << "Sum of all numbers: " << setw(8) << numSum
				<< endl;
		cout << left << setw(25) << "Average of all numbers: " << setw(8)
				<< numAvg << endl;
		cout << left << setw(25) << "Number of odd Numbers: " << setw(8)
				<< numOdd << endl;
		cout << left << setw(25) << "Number of even numbers: " << setw(8)
				<< numEven << endl;

	} else {
		//display error message
		cout << "There was an error opening your File!" << endl;
	}
	return 0;
}
