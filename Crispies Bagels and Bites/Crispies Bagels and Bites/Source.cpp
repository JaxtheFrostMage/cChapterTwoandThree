//Crispies Bagels and Bites
//Author: Evan J. Raker
//Data: 9/5/2018
#include <iostream>
#include <string>
using namespace std;

double findCost(double bagels, double donuts, double coffees, double bagelsCost, double donutsCost, double coffeesCost)
{
	double totalCost = bagels * bagelsCost + donuts * donutsCost + coffees * coffeesCost;
	return totalCost;
}
int main()
{

	double bagels;
	double donuts;
	double coffees;
	double bagelsCost = .99;
	double donutsCost = .75;
	double coffeesCost = 1.20;

	cout << "How many bagels have you purchased? " ;
	cin >> bagels;
	cout << "How many donuts have you purchased? " ;
	cin >> donuts;
	cout << "How many cups of coffee have you purchased? " ;
	cin >> coffees;

	cout << "your total cost is $" << findCost(bagels, donuts, coffees, bagelsCost, donutsCost, coffeesCost) << endl;

	system("pause");
	return 0;
}