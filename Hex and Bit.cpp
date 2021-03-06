// Hex and Bit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void convertionTable(char letter)
{
	switch (letter)
	{
	case '0':
		std::cout << "0000 ";
		break;
	case '1':
		std::cout << "0001 ";
		break;
	case '2':
		std::cout << "0010 ";
		break;
	case '3':
		std::cout << "0011 ";
		break;
	case '4':
		std::cout << "0100 ";
		break;
	case '5':
		std::cout << "0101 ";
		break;
	case '6':
		std::cout << "0110 ";
		break;
	case '7':
		std::cout << "0111 ";
		break;
	case '8':
		std::cout << "1000 ";
		break;
	case '9':
		std::cout << "1001 ";
		break;
	case 'A':
	case 'a':
		std::cout << "1010 ";
		break;
	case 'B':
	case 'b':
		std::cout << "1011 ";
		break;
	case 'C':
	case 'c':
		std::cout << "1100 ";
		break;
	case 'D':
	case 'd':
		std::cout << "1101 ";
		break;
	case 'E':
	case 'e':
		std::cout << "1110 ";
		break;
	case 'F':
	case 'f':
		std::cout << "1111 ";
		break;
	default:
		std::cout << "???? ";
		break;
	}
}

std::string input()
{
	while (true)
	{
		std::cout << "Exit --> 0 | Hex to Bit converter:\n" << "0x";
		std::string userInput;
		std::cin >> userInput;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Something was invalid. Try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return userInput;
		}
	}
}

int main()
{
	while (true)
	{
		std::string input1 = input();
		if (input1[0] == '0')
		{
			return 0;
		}
		for (int i = 0; i < input1.length(); i++)
		{
			char letter = static_cast<char>(input1[i]);
			convertionTable(letter);
		}
		std::cout << "\n";
	}
}