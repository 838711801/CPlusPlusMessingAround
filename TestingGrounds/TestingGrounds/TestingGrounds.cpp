// TestingGrounds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main ()
{
	std::cout << "How many numbers do you want to count? ";
	int count;
	std::cin >> count;
	std::cout << "What number are you starting with? ";
	int start;
	std::cin >> start;

	for (int i = 1; i <= count; i++)
	{
		std::cout << start << std::endl;
		start++;
	}
	std::cin.get();
    return 0;

}

	