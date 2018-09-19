//Random number generator
//Author: Evan J. Raker
//Date: 9/11/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int doorGame()
{
	int userDoorChoice;
	do {
		cout << "Choose one of the three doors, one will save you, one will hurt you, the other will end you. \ndoor1/door2/door3 ";
		cin >> userDoorChoice;

		switch (userDoorChoice)
		{
		case '1':
			cout << " (You reach your hand to the nob and as you do a spring loaded bear trap bites into your hand) \n The wrong door " << endl;
			break;

		case '2':
			cout << "The door opens and you see a blinding light in the distance, it is the sun. \n Always take the right doors in life. " << endl;
			break;
		case '3':
			cout << "the door opens and you see a blinding light in the distance, it is the sun. as you step towards it you feel the ground below you crumble and you fall to your death. \n the wrong door and your last. " << endl;
			break;

		default:
			cout << "then you choose death. " << endl;
		}
	} while (userDoorChoice != 4);
	return 0;
}

int randomGame()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << "A knack for gambling, are you willing to take the chance with lady luck? ";
	cin >> numChoice; 

	if (numChoice == secret)
	{
		cout << "The odds are in your favor..." << endl;
	}
	else
	{
		cout << "It seems you've run out of luck... " << secret << endl;
	}
	return 0;
}

int randomGame2()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	cout << "A knack for gambling, are you willing to take the chance with lady luck? ";
	cin >> numChoice;

	if (numChoice == secret)
	{
		cout << "The odds are in your favor..." << endl;
	}
	else
	{
		cout << "It seems you've run out of luck... " << secret << endl;
	}
	return 0;
}


int main()
{
	int pickGame = 4;
	int choice;
	do {
		cout << "Lets play a game, Pick your poison... \n doorGame = 1 RandomGame = 2 randomGame2= 3 Leave = 4" << endl;
		cin >> pickGame;

		if (pickGame == 1)
		{
			doorGame();
		}
		else if (pickGame == 2)
		{
			randomGame();
		}
		else if (pickGame == 3)
		{
			randomGame2();
		}
		else
		{
			cout << "you die" << endl;
		}

	} while (pickGame != 4);
	system("pause");
	return 0;
}