#include "stdafx.h"
#include "constants.h"
#include <iostream>

using namespace std;
using namespace myConstants;

void calculateFall(double height)
{
	long double fallSpeed = 0.0;
	for (long double i = 0.0; i <= 9223372036854775808; i++)
	{
		long double fallHeight = height - ((gravity * (i * i)) / 2);
		fallSpeed = gravity * i;
		if (fallHeight < 0.0)
		{
			cout << endl << "At " << i << " seconds, the ball is on the ground." << endl;
			return;
		}
		cout << endl << "At " << i << " seconds, the ball is at height: " << fallHeight << endl;
		cout << "Speed: " << fallSpeed << endl;
	}
}