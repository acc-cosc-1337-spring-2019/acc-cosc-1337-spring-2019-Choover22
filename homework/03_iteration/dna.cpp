#include "dna.h"
#include <string>
#include <iostream>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	int count = 0;
	for (int i = 0; i < dna.size(); i++)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
			count++;
	}

	return count/(dna.size() * 1.0);
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna) 
{
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		temp += dna[i];
	}
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	get_reverse_string(dna);
	str1 = reverse_string(dna);
	if (dna[i] == 'A') 
	{
		dna[i] == 'T';
	}
		
	else {
		if (dna[i] == 'T')
		{
			dna[i] == 'A';
		}
	}
	else {
		if (dna[i] == 'C')
			{
				dna[i] == 'G';
			}
		}
	else {


		if (dna[i] == 'G')
			{
				dna[i] == 'C';
			}
		}
	return dna;
}



