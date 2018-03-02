// Prime Number Checker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int getInputForPrime();

int main()
{
	bool repeat;
	unsigned long long theNumber;
	bool isPrime;
	repeat = true;
	while (repeat == true)
	{
		theNumber = getInputForPrime();
		isPrime = true;
		if (theNumber == 0)
		{
			return 0;
		}
		for (int i = 2; i <= theNumber / 2; i++)
		{
			if (theNumber % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << "The number is a prime :)" << endl;
		}
		else
		{
			cout << "The number is not a prime :(" << endl;
		}
		repeat = true;
		cout << "Repeat? no --> 0" << endl;
	}
}

