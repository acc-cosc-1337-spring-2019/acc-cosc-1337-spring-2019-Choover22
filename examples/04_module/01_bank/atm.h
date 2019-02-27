#include "bank_account.h"
#include <iostream>

#ifndef ATM_H
#define ATM_H

class ATM 
{
public:
	ATM();
	void display_balance();
private:
	BankAccount account(12345, 500);
};

#endif // !ATM_H