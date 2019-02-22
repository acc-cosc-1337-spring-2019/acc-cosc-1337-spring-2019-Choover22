#include "bank_account.h"
class BankAccount 
{
public:
	BankAccount(int act, double bal);//constructor
	double get_balance();
	void deposit(double amount);
	void withdraw(double amount);


private:
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);

};
