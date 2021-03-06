// Name Sorter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	while (true)
	{
		// Input
		std::vector<std::string> names{};
		int sizeCounter = 0;
		for (int i = 1; true; i++)
		{
			names.resize(i);
			std::cout << "Enter name #" << i << ": ";
			std::getline(std::cin, names[i - 1]);
			if (names[i - 1] == "0")
			{
				break;
			}
			else if (names[i - 1] == "exit")
			{
				return 0;
			}
			sizeCounter++;
		}
		//Sort
		for (int i = 0; i < sizeCounter - 1; ++i)
		{
			int smallestIndex = i;
			for (int currentIndex = i + 1; currentIndex < sizeCounter; ++currentIndex)
			{
				if (names[currentIndex] < names[smallestIndex])
				{
					smallestIndex = currentIndex;
				}
			}
			std::swap(names[i], names[smallestIndex]);
		}
		//Print
		std::cout << "\n" << "Here is your sorted list:\n";
		for (int i = 0; i < sizeCounter; i++)
		{
			std::cout << "Name #" << i + 1 << ": " << names[i] << "\n";
		}
		std::cout << "\n";
	}
}