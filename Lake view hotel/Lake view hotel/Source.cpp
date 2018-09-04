#include  <iostream>
#include <string>
using namespace std;

int main()
{
	double daysStayed = 0;
	double roomCharge = 100;
	double phoneCharge = 0.25;
	double totalBill = 0;
	double minutes = 0;

	cout << "how many days have you stayed? ";
	cin >> daysStayed;

	cout << "how many minutes where you on the phone? ";
	cin >> minutes;

	totalBill = daysStayed * roomCharge + minutes * phoneCharge;
	cout << "Thank you for choosing us for your staying needs, your bill will be " << totalBill << ", have a great day! " << endl;
	system("pause");
	return 0;
}