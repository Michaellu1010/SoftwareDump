// Learning Application 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

unsigned long long userInput()
{
	while (true)
	{
		std::cout << "Exit -> 0 | Type Number to Factorize: ";
		unsigned long long number;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return number;
		}
	}
}

bool isPrime(unsigned long long number)
{
	for (unsigned long long i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	const unsigned char bool1 = 0b0000'0001;
	const unsigned char bool2 = 0b0000'0010;
	const unsigned char bool3 = 0b0000'0100;
	const unsigned char bool4 = 0b0000'1000;
	const unsigned char bool5 = 0b0001'0000;
	const unsigned char bool6 = 0b0010'0000;
	const unsigned char bool7 = 0b0100'0000;
	const unsigned char bool8 = 0b1000'0000;
	unsigned char flags = 0;

	while (true)
	{
		unsigned long long number = userInput();
		if (number == 0)
		{
			return 0;
		}
		flags |= bool1;
		while (true)
		{
			if (number == 1)
			{
				break;
			}
			flags &= ~bool1;
			unsigned long long i = 2;
			while (true)
			{
				i += 2;
				flags |= bool3;
				flags &= ~bool2;
				if (number == 1)
				{
					break;
				}
				if (i == 4)
				{
					i -= 2;
					flags |= bool2;
				}
				if (isPrime(i) == true && number % i == 0)
				{
					number = number / i;
					std::cout << i << " ";
					i = 2;
					flags &= ~bool3;
					if (flags & bool2)
					{
						i = 1;
					}
				}
				if (flags & bool3 && i == 2)
				{
					i = 1;
				}
			}
		}
		if (flags & bool1)
		{
			std::cout << number << "\n";
		}
		else
		{
			std::cout << "\n";
		}
	}
}