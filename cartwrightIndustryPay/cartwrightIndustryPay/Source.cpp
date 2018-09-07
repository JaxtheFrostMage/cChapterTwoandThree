//Payroll for cartWright
//Author: Evan J. Raker
//Date: 9/6/2018
#include <iostream>
#include <string>
using namespace std;

double netPay(double pay, double federalWithHoldingTax, double socialSecurityandMedicare, double stateIncomeTax )
{
	double christianYouth = pay - pay * federalWithHoldingTax - pay * socialSecurityandMedicare - pay * stateIncomeTax;
	return christianYouth;
}

int main()
{
 
	double pay = 0;
	double federalWithHoldingTax = .20;
	double socialSecurityandMedicare = .08;
	double stateIncomeTax = .04;

	cout << "What was the gross pay? ";
	cin >> pay;

	cout << "Your net pay will be $" << netPay(pay, federalWithHoldingTax, socialSecurityandMedicare, stateIncomeTax) << " dollars.";

	system("pause");
	return 0;
}