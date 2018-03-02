#include "stdafx.h"
#include <iostream>

using namespace std;

void placeHex(short baseSixteen);

void calculateRest(short counter, unsigned long long input)
{
	unsigned long long baseSixteenEnd = input;
	short rest = 0;
	for (int b = counter; b > 0; b--)
	{
		for (int i = b; i > 0; i--)
		{
			rest = baseSixteenEnd % 16;
			baseSixteenEnd = (baseSixteenEnd - rest) / 16;
		}
		baseSixteenEnd = input;
		placeHex(rest);
	}
	cout << endl << endl;
}