#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned long long bitwiseValueAndCorrection(unsigned long long powerTwo, unsigned long long userInput)
{
	while (powerTwo < userInput)					//Counting highest Bit value.
	{
		powerTwo = powerTwo * 2;
	}
	if (powerTwo > userInput)						//Correcting Bit value.
	{
		powerTwo = powerTwo / 2;
	}
	return powerTwo;
}