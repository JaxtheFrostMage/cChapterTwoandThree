//Delgados Tacos
//Author: Evan J. Raker
//Date: 9/7/2018
#include <iostream>
#include <string>
using namespace std;

double totalCost(int tacos, int burritos, int bakedBeans, int enchiladas, int softDrinks, double tacoCost, double burritoCost, double bakedBeanCost, double enchiladaCost, double softDrinkCost)
{
	double payMePls = tacos * tacoCost + burritos * burritoCost + bakedBeans * bakedBeanCost + enchiladas * enchiladaCost + softDrinks * softDrinkCost;
	return payMePls;
}

int main()
{
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


	cout << "How many tacos would you care to purchase? ";
	cin >> tacos;
	cout << "How many burritos would you care to purchase? ";
	cin >> burritos;
	cout << "How many baked beans would you care to purchase? ";
	cin >> bakedBeans;
	cout << "How many enchiladas would you care to purchase? ";
	cin >> enchiladas;
	cout << "How many soft drinks would you care to purchase? ";
	cin >> softDrinks;

	cout << "Your total cost will come out to be " << totalCost(tacos, burritos, bakedBeans, enchiladas, softDrinks, tacoCost, burritoCost, bakedBeanCost, enchiladaCost, softDrinkCost) << " dollars.";
	
	system("pause");
	return 0;
}