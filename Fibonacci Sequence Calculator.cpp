// Learning Application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

long long fibonacci(short number)
{
	if (number == 1)
	{
		return 0;
	}
	else if (number == 2)
	{
		return 1;
	}
	long long numberArray[] = { 0, 1, 0 };
	int n = 2;
	while (true)
	{
		numberArray[2] = numberArray[0] + numberArray[1];
		n++;
		if (n == number)
		{
			return numberArray[2];
		}
		numberArray[0] = numberArray[2] + numberArray[1];
		n++;
		if (n == number)
		{
			return numberArray[0];
		}
		numberArray[1] = numberArray[0] + numberArray[2];
		n++;
		if (n == number)
		{
			return numberArray[1];
		}
	}
}

int main()
{
	while (true)
	{
		short length;
		while (true)
		{
			std::cout << "Leave --> 0 | Max --> 93 | Enter to which place should the fibonacci sequence be calculated to: ";
			std::cin >> length;
			if (std::cin.fail() || length > 93)
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
			}
			else
			{
				std::cin.ignore(32767, '\n');
				break;
			}
		}
		if (length == 0)
		{
			return 0;
		}
		for (auto i = 1; i <= length; i++)
		{
			std::cout << i << " --> " << fibonacci(i) << "\n";
		}
	}
}