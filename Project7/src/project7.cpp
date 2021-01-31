#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//global constants for use in functions
const int numStu = 5;
const int numTests = 3;

//function prototypes
//I decided to use functions as a way to get practice working with 2d arrays within them
void studentAverage(double array[][numTests]);
void testAverage(double array[][numTests]);
void bestScore(double array[][numTests]);
void countFScores(double array[][numTests]);

int main() {

	//variable declarations
	ifstream fileInput;
	string fileName;

	//enter file location and open file for processing
	cout << "Enter the exact location of the p6.dat file on your computer: ";
	cin >> fileName;
	fileInput.open(fileName);

	//input validation: ends program if p6.dat is not entered properly.
	if (!fileInput) {
		cout << "You did not enter a correct file location. Please try again.";
		cin.clear();
		return 0;
	}

	//create 2D array
	double testArray[numStu][numTests];

	//Process file information into testArray
	for (int i = 0; i < numStu; i++) {
		for (int j = 0; j < numTests; j++) {
			fileInput >> testArray[i][j];
		}
	}

	//close file stream
	fileInput.close();

	//call functions using 2D array with test info
	studentAverage(testArray);
	testAverage(testArray);
	bestScore(testArray);
	countFScores(testArray);

	return 0;
}

//Averages student scores
void studentAverage(double array[][numTests]) {
	for (int i = 0; i < numStu; i++) {
		double sum = 0;
		for (int j = 0; j < numTests; j++) {
			sum += array[i][j];
		}
		double avg = sum / numTests;
		cout << fixed << setprecision(2);
		cout << "Student " << (i + 1) << " Average: " << avg << "\t";
	}
	cout << endl;
}

//averages test scores
void testAverage(double array[][numTests]) {
	for (int i = 0; i < numTests; i++) {
		double sum = 0;
		for (int j = 0; j < numStu; j++) {
			sum += array[i][j];
		}
		double avg = sum / numStu;
		cout << "Test " << (i + 1) << " Average: " << avg << "\t";
	}
	cout << endl;
}

//finds the best score in the array
void bestScore(double array[][numTests]) {
	double best = 0;
	for (int i = 0; i < numStu; i++) {
		for (int j = 0; j < numTests; j++) {
			if (array[i][j] > best)
				best = array[i][j];
		}
	}
	cout << "The Best Score: " << best << endl;
}

//counts the F scores in the array
void countFScores(double array[][numTests]) {
	double badScores = 0;
	for (int i = 0; i < numStu; i++) {
		for (int j = 0; j < numTests; j++) {
			if (array[i][j] < 60)
				++badScores;
		}
	}
	cout << "Number of F Scores: " << badScores << endl;

}
