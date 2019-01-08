// FizzBuzz.cpp : This is my solution to the (in)famous FizzBuzz exercise.

#include "pch.h"
#include <iostream>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (i % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (i % 3 != 0 && i % 5 != 0)
		{
			std::cout << i;
		}

		std::cout << "\n";
	}

	std::cout << "\n\nProgram complete. Created in under 5 minutes by Chris Bryant, Jan. 2019. clb372@cornell.edu\n\n";
	std::cin.ignore(); std::cin.ignore();
	return 0;
}

