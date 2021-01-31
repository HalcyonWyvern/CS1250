#include <iostream>
using namespace std;

int main()
{
	float percentageOfSales;
	int companySales;
	int eastCoastSales;

	percentageOfSales = 0.62;
	companySales = 8600000;
	eastCoastSales = companySales * percentageOfSales;

	cout << "The East Coast Division generated " << eastCoastSales << " dollars.";
	return 0;
}
