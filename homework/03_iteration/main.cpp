#include <iostream>
using std::cout;
using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	menu = 0;
	cout << "Enter 1 for Get GC Content or 2 for Get DNA complement";
	cin >> menu;
	if (menu == 1)
	{
		get_gc_content(dna);
	}
	else
		if (menu == 2)
	{
			get_dna_complement(dna);
	}
	cout << "Do you wish to continue?";
	cin >> menu;
	if (menu == 'Y' || menu == 'y')
	{

	}
	return 0;
}