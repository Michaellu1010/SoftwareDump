// Bit Calculator.cpp : Defines the entry point for the console application.
//

#include "targetver.h"
#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

unsigned long long bitwiseValueAndCorrection(unsigned long long powerTwo, unsigned long long userInput);
short starterZeros(short exponent);
void theBitwiseNumber(long long userInput, long long powerTwo, int letterCounter, double exponent);

void placeHex(short baseSixteen);
int calculateFirstDigit(unsigned long long baseSixteenEnd);
void calculateRest(short counter, unsigned long long input);

unsigned long long input();

int main()
{
	while (true)															//Infinite loop.
	{
		unsigned long long userInput = input();								//Getting the input from user.
		if (userInput == 0)													//Creating an exit.
		{
			return 0;
		}

		short counter = calculateFirstDigit(userInput);						//Setting the range and calculating the first hexadecimal.

		calculateRest(counter, userInput);									//Calculating the rest of the hexadecimal number.


		if (userInput >= 9223372036854775808)
		{
			cout << "9223372036854775807 is max for Binary." << endl << endl;
		}
		if (userInput < 9223372036854775808)
		{
			unsigned long long powerTwo = 2;

			powerTwo = bitwiseValueAndCorrection(powerTwo, userInput);		//Counting highest Bit value and correcting it.

			double exponent2 = log(powerTwo) / log(2) + 1;					//Calculating the exponent.

			short exponent = static_cast<short>(exponent2);					//Converting decimal exponent to integer.

			int letterCounter = starterZeros(exponent);						//Entering the Zeros at the start.

			theBitwiseNumber(userInput, powerTwo, letterCounter, exponent);	//Entering the Bitwise number.

			cout << endl << endl;
		}
	}
}