#include "bank_account.h"
#include <iostream>

ATM::ATM() 
{
	BankAccount = BankAccount(123, 500);
}

void ATM::display_balance()
{
	std::cout << "Balance: " << account.get_balance();
}