#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

void theBitwiseNumber(long long userInput, long long powerTwo, int letterCounter, double exponent)
{
	while (userInput != 0)							//Entering the Bitwise number.
	{
		if (powerTwo <= userInput)
		{
			cout << "1";
			letterCounter++;
			if (letterCounter % 4 == 0)
			{
				cout << " ";
			}
			userInput = userInput - powerTwo;
			powerTwo = powerTwo / 2;
		}
		if (powerTwo > userInput)
		{
			cout << "0";
			letterCounter++;
			if (letterCounter % 4 == 0)
			{
				cout << " ";
			}
			powerTwo = powerTwo / 2;
		}

		if (userInput == 0)							//Entering the last Zeros
		{
			exponent = log(powerTwo) / log(2) + 1;
			for (int i = 0; i < exponent; i++)
			{
				cout << "0";
				letterCounter++;
				if (letterCounter % 4 == 0)
				{
					cout << " ";
				}
			}
		}
	}
}