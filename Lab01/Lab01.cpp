// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int iRandNum = 0;
int iGuess = 5;
int iUser = 0;

int main()
{
	srand(time(0));
	iRandNum = rand() % 100 + 1;

	while (iGuess > 0)
	{
		cout << "Guess a number between 1-100" << endl;
		cin >> iUser;
		if(iUser < iRandNum)
		{
			cout << "Higher" << endl;
		}

		else if (iUser > iRandNum)
		{
			cout << "Lower" << endl;
		}

		if (iUser == iRandNum)
		{
			cout << "Success" << endl;

			system("pause");

			return 0;
		}
		iGuess = iGuess - 1;
	}
	if (iGuess == 0)
	{
		cout << "Out of Guesses" << endl;
	}

	system("pause");

    return 0;
}

