// Next Prime Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

class PrimeNumber
{
private:
	unsigned const char bool1 = 0b0000'0001;
	unsigned const char bool2 = 0b0000'0010;
	unsigned const char bool3 = 0b0000'0100;
	unsigned const char bool4 = 0b0000'1000;
	unsigned const char bool5 = 0b0001'0000;
	unsigned const char bool6 = 0b0010'0000;
	unsigned const char bool7 = 0b0100'0000;
	unsigned const char bool8 = 0b1000'0000;
	unsigned char flags = 0x0;
	
	bool input()
	{
		while (true)
		{
			std::cout << "Exit -> 0 | Continue or not? ";
			std::string input;
			std::cin >> input;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
			}
			else if (input == "No" || input == "no" || input == "n" || input == "N")
			{
				std::cin.ignore(32767, '\n');
				return false;
			}
			else if (input == "Yes" || input == "yes" || input == "y" || input == "Y")
			{
				std::cin.ignore(32767, '\n');
				return true;
			}
		}
	}

	bool isPrime(const int &number)
	{
		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
			{
				return false;
			}
		}
		return true;
	}

public:
	PrimeNumber()
	{
	}

	void nextNumber()
	{
		unsigned long b = 0;
		for (unsigned long i = 1; true; i++)
		{
			flags |= bool1;
			while (flags & bool1)
			{
				b++;
				if (isPrime(b))
				{
					std::cout << "Prime number " << i << "# -> " << b << "\n";
					flags &= ~bool1;
				}
			}
			if (!(input()))
			{
				return;
			}
		}
	}
};

int main()
{
	PrimeNumber primeGen;
	primeGen.nextNumber();
}