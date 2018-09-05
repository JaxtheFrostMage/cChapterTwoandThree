//Dozen egg calculator
//Author: Evan J. Raker
//date: 9/4/2018
#include <iostream>
#include <string>
using namespace std;


	int convertToDozens(int eggs)
{
	int dozenEggs = eggs / 12;
	return dozenEggs;
}

	int findRemainder(int eggs)
	{
		int remainder = eggs % 12;
		return remainder;
	}

	double totalCost(int eggs)
	{
		int dozenEggs = convertToDozens(eggs);
		int remainder = findRemainder(eggs);
		if (eggs > 120) {
			double totalCost = dozenEggs * 1.50 + remainder * .25;
			return totalCost;
		}
		else {
			double totalCost = dozenEggs * 2.00 + remainder * .25;
			return totalCost;
		}
	}
		
int main()
{
	int eggs;

	cout << "how many eggs will you be buying? ";
	cin >> eggs;
	cout << "The cost of " << eggs << " eggs equals $" << totalCost(eggs) << "." << endl;

system("pause");
return 0;
}