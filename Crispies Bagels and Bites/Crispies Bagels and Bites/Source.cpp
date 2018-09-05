//Crispies Bagels and Bites
//Author: Evan J. Raker
//Data: 9/5/2018
#include <iostream>
#include <string>
using namespace std;

double findCost(double bagels, double donuts, double coffees)
{
	double bagles = .99;
	double donuts = .75;
	double coffees = 1.20;
	double totalCost = bagles + donuts + coffees;
	return totalCost;
}
int main()
{

	double bagels = 0;
	double donuts = 0;
	double coffees = 0;

	cout << "How many bagels have you purchased";
	cin >> bagels;
	cout << "How many donuts have you purchased";
	cin >> donuts;
	cout << "How many cups of coffee have you purchased";
	cin >> coffees;

	cout << "your total cost is $" << totalCost(bagels, donuts, coffees) << endl;

	system("pause");
	return 0;
}