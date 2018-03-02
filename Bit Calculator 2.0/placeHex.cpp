#include "stdafx.h"
#include <iostream>

using namespace std;

void placeHex(short baseSixteen)
{
	if (baseSixteen < 10)
	{
		cout << baseSixteen;
	}
	if (baseSixteen == 10)
	{
		cout << "A";
	}
	if (baseSixteen == 11)
	{
		cout << "B";
	}
	if (baseSixteen == 12)
	{
		cout << "C";
	}
	if (baseSixteen == 13)
	{
		cout << "D";
	}
	if (baseSixteen == 14)
	{
		cout << "E";
	}
	if (baseSixteen == 15)
	{
		cout << "F";
	}
}