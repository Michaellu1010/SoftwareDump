// Challenge 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void calculateFall(double height);

int main()
{
	long double height;
	cout << "Enter the initial height of the tower in meters: ";
	cin >> height;
	calculateFall(height);
	cin >> height;
    return 0;
}

