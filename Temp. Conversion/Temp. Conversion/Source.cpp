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
	double z;
	double tempArray[5] = { 0.0 };

	for (int i = 0; 1 <= size(tempArray); i++) {
		cout << "Enter A tempature >>";
		cin >> tempArray[i];
		z = convert(tempArray[i]);
		cout << "your temp conversion is "<< z << endl;
	}
	
	system("pause");
	return 0;
}