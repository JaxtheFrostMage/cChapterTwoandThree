//Example page 91 
//Author Evan Raker
//Date 08/30/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{

	double totalBill = 0.0;
	double liqour = 0.0;
	double tipPercent = 0.0;
	double totalNoLiqour = 0.0;
	double tip = 0.0;

	cout << "Enter the total bill: ";
	cin >> totalBill;

	cout << "Enter the liqour charge: ";
	cin >> liqour;

	cout << "Enter the tip percentage in decimal format: ";
	cin >> tipPercent;

	totalNoLiqour = totalBill - liqour;
	tip = totalNoLiqour * tipPercent;

	cout << "tip $ " << tip << endl;

	system("pause");
	return 0;
}