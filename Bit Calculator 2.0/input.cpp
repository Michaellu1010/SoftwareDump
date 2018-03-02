#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned long long input()
{
	while (true)
	{
		cout << "Maximum -> 18446744073709551615 | Exit -> 0 | Enter Number: ";
		unsigned long long userInput;
		cin >> userInput;
		cout << endl;
		if (std::cin.fail() || userInput < 0)										//Overflow gate.
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return userInput;
		}
	}
}