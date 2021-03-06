// Learning Application 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//Standart Input function.
unsigned long long userInput()
{
	//Loop till valid input.
	while (true)
	{
		//Get Input.
		std::cout << "Exit -> 0 | Type Number to Factorize: ";
		unsigned long long number;
		std::cin >> number;

		//If thing get messy or bad.
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}

		//Ignore rest and return the value.
		else
		{
			std::cin.ignore(32767, '\n');
			return number;
		}
	}
}

//Function to check if number is a Prime.
bool isPrime(unsigned long long number)
{
	//loop until the counter hits half of the given number.
	for (unsigned long long i = 2; i <= number / 2; i++)
	{
		//If counter becomes divisible with the given number, return number is not a prime.
		if (number % i == 0)
		{
			return false;
		}
	}
	//If divisibility fails, return number is a prime.
	return true;
}

int main()
{
	//Creating 1 bit bools and the flag for decisions.
	const unsigned char bool1 = 0b0000'0001;
	const unsigned char bool2 = 0b0000'0010;
	const unsigned char bool3 = 0b0000'0100;
	const unsigned char bool4 = 0b0000'1000;
	const unsigned char bool5 = 0b0001'0000;
	const unsigned char bool6 = 0b0010'0000;
	const unsigned char bool7 = 0b0100'0000;
	const unsigned char bool8 = 0b1000'0000;
	unsigned char flags = 0;

	//Loop till user says stop.
	while (true)
	{
		//Calling input.
		unsigned long long number = userInput();

		//Creating exit.
		if (number == 0)
		{
			return 0;
		}

		//A "for" loop to print out the numbers, but it starts with a i += 2.
		unsigned long long i = 2;
		while (true)
		{
			//Adding 2. Used mostly for prime number suggestions in the form of i. Prime numbers are always odd (exeption: 2).
			i += 2;

			//A Bit bool turned true.
			flags |= bool3;

			//If we are finished break out.
			if (number == 1)
			{
				break;
			}

			//If i is 4 make it 2.
			if (i == 4)
			{
				i = 2;
			}

			//If the suggested number is a prime and the input is divisible by the suggested number.
			if (isPrime(i) == true && number % i == 0)
			{
				//Divide the input.
				number = number / i;

				//Print the suggested number as a factor.
				std::cout << i << " ";

				//Make i the first attempt of the second factor.
				i = 2;

				//Mark that the if condition was used.
				flags &= ~bool3;
			}

			//If 2 wasn't used, start the odd number suggestions.
			if (flags & bool3 && i == 2)
			{
				i = 1;
			}
		}
		//Adds a space.
		std::cout << "\n";
	}
}