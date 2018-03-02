#include "stdafx.h"
#include <iostream>

using namespace std;

short starterZeros(short exponent)	//Entering the Zeros at the start.
{
	if (exponent % 4 == 1)
	{
		cout << "000";
		return 3;
	}
	if (exponent % 4 == 2)
	{
		cout << "00";
		return 2;
	}
	if (exponent % 4 == 3)
	{
		cout << "0";
		return 1;
	}
	if (exponent % 4 == 0)
	{
		return 0;
	}
}