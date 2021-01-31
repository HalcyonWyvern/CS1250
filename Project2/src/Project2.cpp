// This program calculates a number by multiplying a percentage with an integer.
// Created for CS1250 - Project 2
#include <iostream>
using namespace std;

int main()
{
	int surveyedCustomers;


	float	perCitrus,
			perMulti,
			perOther,
			citrusCustomers,
			multiCustomers,
			otherCustomers;

	surveyedCustomers = 16500;

	perCitrus = 0.58;
	perMulti = 0.15;
	perOther = 0.90;	//I placed a random percent here since we were not given one.

	citrusCustomers = perCitrus * surveyedCustomers;
	multiCustomers = perMulti * surveyedCustomers;
	otherCustomers = perOther * surveyedCustomers;

	cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << multiCustomers << endl;
	cout << "The approximate number of customers in the survey who prefer citrus flavored energy drinks: " << citrusCustomers << endl;
	cout << "The approximate number of customers in the survey who purchase any other drink but energy drinks per week: " << otherCustomers << endl;
}
