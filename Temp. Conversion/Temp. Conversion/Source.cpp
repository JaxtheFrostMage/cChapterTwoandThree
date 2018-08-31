//Tempature Conversion
//Author: Evan Raker
//Date: 8/30/2018
#include <iostream>
#include <string>
using namespace std;

double convert(double fahren)
{
	double r;
	r = (fahren - 32) * 5 / 9;
	return r;
}
int main()
{
	double temp1 =0;
	double temp2 =0;
	double temp3 =0;
	double z;

	cout << "What was the tempature at 8:00 am? ";
	cin >> temp1;

	cout << "What was the tempature at 12:00 pm? ";
	cin >> temp2;

	cout << "What was the tempature at 5:00 pm? ";
	cin >> temp3; 

	z = convert(temp1);
	cout << "your tempature at 8:00 am is  " << temp1 << " in Fahrenheit and " << z << " Celcius." << endl;
	z = convert(temp1);
	cout << "your tempature at 8:00 am is  " << temp1 << " in Fahrenheit and " << z << " Celcius." << endl;
	z = convert(temp1);
	cout << "your tempature at 8:00 am is  " << temp1 << " in Fahrenheit and " << z << " Celcius." << endl;

	system("pause");
	return 0;
}