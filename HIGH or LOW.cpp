// HIGH or LOW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>

short getRandomNumber(int min, int max)
{
	static std::random_device rd;
	static std::mt19937 mersenne{ rd() };
	static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

short getUserInput()
{
	while (true)
	{
		short input;
		std::cin >> input;
		if (std::cin.fail() || input > 100)
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Invalid input. Try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return input;
		}
	}
}

char getUserInputExit()
{
	while (true)
	{
		char input;
		std::cin >> input;
		if (std::cin.fail() || input != 'y' && input != 'n')
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Invalid input. Try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return input;
		}
	}
}

void highOrLow()
{
	short randomNumber = getRandomNumber(1, 100);
	for (short i = 1; i <= 7; i++)
	{
		std::cout << "Guess #" << i << ": ";
		short input = getUserInput();
		if (input == randomNumber)
		{
			std::cout << "Correct! You win!\n";
			return;
		}
		else if (input > randomNumber)
		{
			std::cout << "Your guess is too high.\n";
		}
		else if (input != 0 && input < randomNumber)
		{
			std::cout << "Your guess is too low.\n";
		}
		else if (input == 0)
		{
			break;
		}
	}
	std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
}

int main()
{
	while (true)
	{
		std::cout << "Let's play a game. I'm thinking of a number, that's in between 1 and 100. You have 7 tries to guess what it is.\n" << "Exit --> 0\n";
		highOrLow();
		std::cout << "Would you like to play again (y/n)? ";
		char again = getUserInputExit();
		if (again == 'n')
		{
			return 0;
		}
	}
}