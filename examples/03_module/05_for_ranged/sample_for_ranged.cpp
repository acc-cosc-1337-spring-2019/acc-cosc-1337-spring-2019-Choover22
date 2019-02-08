#include "sample_for_ranged.h"
#include <iostream>
void loop_string_w_index();
{
	for (int i = 0l i < str.length(); ++i)
	{
		std::cout << str[i] << "\n";
	}
}

void loop_string_w_auto(std::string str)
{
	for (auto c : str)
	{
		std::cout << c << "\n";

	}
}