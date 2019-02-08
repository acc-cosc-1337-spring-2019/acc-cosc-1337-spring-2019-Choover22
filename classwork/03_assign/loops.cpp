/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5


returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorial(int num)
{
	int num;
	char choice;

	do
	{
		cout << "Enter a number";
		cin >> num;
		cout << factorial(num);
		cout << "Would you like to continue?";
		cin >> choice;

	} while (choice == "y" || choice == "Y");

}
