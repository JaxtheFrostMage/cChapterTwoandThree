#include  <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double daysStayed = 0;
	double roomCharge = 120;
	double internetCharge = 9.99;
	double totalBill = 0;

	cout << "State your name: ";
	cin >> name;

	cout << "how many days will you be staying: ";
	cin >> daysStayed;

	totalBill = daysStayed * roomCharge + daysStayed * internetCharge;
	cout << "*****************************************************************************************************************" << endl;
	cout << "Thank you " << name << " for choosing us for your staying needs, your bill will be " << totalBill << " enjoy your stay for the next " << daysStayed << " days!" << endl;
	cout << "*****************************************************************************************************************" << endl;
	system("pause");
	return 0;
}