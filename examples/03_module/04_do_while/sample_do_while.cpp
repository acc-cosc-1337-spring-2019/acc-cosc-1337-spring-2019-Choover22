#include <iostream>
#include <switch.h>

//Write code for void function prompt_user to loop until
//user opts not to continue.  





//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/01_module/07_switch
folder.

*/
void run_menu()
{
	int option;
	char choice;

	do
	{
		cout << "Enter a number";
		cin >> option;
		cout << factorial(option);
		cout << "Continue? y or n";
		cin >> choice;

	}

	while (choice == 'y' || choice == 'Y');
}


