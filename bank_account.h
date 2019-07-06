#pragma once
#include <iostream>

using namespace std;

class bank_account
{
private:
	int accountBalance;

public:
	
	int account();
	int debit(int);
	int credit(int);
	void getBalance();
	
};
