#include "stdafx.h"
#include <iostream>

using namespace std;

void placeHex(short baseSixteen);

int calculateFirstDigit(unsigned long long baseSixteenEnd)
{
	short rest;
	int counter = 0;
	while (baseSixteenEnd >= 16)
	{
		rest = baseSixteenEnd % 16;
		baseSixteenEnd = (baseSixteenEnd - rest) / 16;
		counter++;
	}
	cout << "0x";
	placeHex(baseSixteenEnd);
	return counter;
}