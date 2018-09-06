//Paycheck savings
//Author: Evan J. Raker
//Date: 9/6/2018
#include <iostream>
#include <string>
using namespace std;

double totalSave(double averageCheck, int bonusSaving, double percentSaving)
{
	double totalSavings = averageCheck * 24 * percentSaving + bonusSaving;
	return totalSavings;
}


int main()
{
	double averageCheck = 0;
	int bonusSaving = 100;
	double percentSaving = 0;

	cout << "How much did you make with each paycheck? ";
	cin >> averageCheck;
	cout << "What precent do you wish to save from each check? ";
	cin >> percentSaving;

	cout << "You saved $" << totalSave(averageCheck, bonusSaving, percentSaving) << " dollars." << endl;

	system("pause");
	return 0;
}