#include "bank_account.h"
#include <vector>
#include <iostream>
#include "atm.h"
int main() 
{
	ATM atm;
	atm.display_balance();
	std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500); //object 1
	BankAccount account1(55545689, 5000); //object 2

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}
	return 0;
}