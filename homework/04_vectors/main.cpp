/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include<iostream>
#include "vectors.h"


int main() 
{
	vector<int> primes = vector_of_primes(50);

	for (int p : primes)
	{
		std::cout << p << " " << std::endl;
	}
	system("pause");

	return 0;
}