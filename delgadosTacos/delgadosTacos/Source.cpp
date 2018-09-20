//Delgados Tacos
//Author: Evan J. Raker
//Date: 9/7/2018
#include <iostream>
#include <string>
using namespace std;


double totalCost(int tacos, int burritos, int bakedBeans, int enchiladas, int softDrinks, double tacoCost, double burritoCost, double bakedBeanCost, double enchiladaCost, double softDrinkCost)
{
	double payMePls = tacos * tacoCost + burritos * burritoCost + bakedBeans * bakedBeanCost + enchiladas * enchiladaCost + softDrinks * softDrinkCost;
	double taxTotal = payMePls * 1.07;
	return taxTotal;
}


int main()
{
	int choice;
	int tacos = 0;
	int burritos = 0;
	int bakedBeans = 0;
	int enchiladas = 0;
	int softDrinks = 0;
	double tacoCost = 1.02;
	double burritoCost = 2.51;
	double bakedBeanCost = 0.05;
	double enchiladaCost = 1.00;
	double softDrinkCost = 6.00;
	
	cout << "  ***************************************************" << endl;
	cout << "  *                 __________________          |    *" << endl;
	cout << "  *                |                  |         |     *" << endl;
	cout << "  *                |                  |         |_______*" << endl;
	cout << "  *                |__________________|                   **" << endl;
	cout << "  *                  Delgados' Tacos                         *" << endl;
	cout << "  *                                                          *" << endl;
	cout << "  *                                                          *" << endl;
	cout << "  ************************************************************" << endl;
	cout << "               *   *                           *   *      " << endl;
	cout << "                ***                             ***       " << endl;

	do {
		cout << "\n From the menu which items would you like? \n 1 = taco 1.02 \n 2 = burrito 2.51 \n 3 = baked bean .05 \n 4 = enchilada 1.00 \n 5 = soft drink 6.00 \n 6 = end order" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "How many tacos would you care to purchase? ";
			cin >> tacos;
		}
		else if (choice == 2)
		{
			cout << "How many burritos would you care to purchase? ";
			cin >> burritos;
		}
		else if (choice == 3)
		{
			cout << "How many baked beans would you care to purchase? ";
			cin >> bakedBeans;
		}
		else if (choice == 4)
		{
			cout << "How many enchiladas would you care to purchase? ";
			cin >> enchiladas;
		}
		else if (choice == 5)
		{
			cout << "How many soft drinks would you care to purchase? ";
			cin >> softDrinks;
		}
		else if (choice == 6)
			cout << "Thank you for eating at Delgados' Tacos, have a great day. " << endl;
		else
		{
			cout << "i'm sorry, thats not an option." << endl;
		}
	} while (choice != 6);
	
	cout << "Your total cost will come out to be " << totalCost(tacos, burritos, bakedBeans, enchiladas, softDrinks, tacoCost, burritoCost, bakedBeanCost, enchiladaCost, softDrinkCost) << " dollars." << endl;
	
	system("pause");
	return 0;
}