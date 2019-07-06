#include <iostream>
#include "bank_account.h"

using namespace std;

int bank_account::account()
{
	cout<<"Enter the Bank Account Balance : ";
	cin>>accountBalance;

	if(accountBalance<0)
	{
		cout<<endl<<"Hesap bakiyeniz 0 dan kucuk, hesabiniz sifirlaniyor."<<endl<<endl;
		accountBalance = 0;

		cout<<endl<<"Hesap bakiyeniz : "<<accountBalance<<endl<<endl;

		cout<<"Lutfen yeni bakiyenizi giriniz : ";  cin>>accountBalance;
	}

	return accountBalance;
}

int bank_account::debit(int a)
{
	if(a>accountBalance)
		cout<<"Hesabinizda yeterli bakiye yok!!"<<endl;

	else
	{
		accountBalance = accountBalance - a;
		cout<<endl<<"Yeni bakiyeniz: "<<accountBalance<<endl;
	}

	return accountBalance;
}

int bank_account::credit(int b)
{
	accountBalance = accountBalance + b;

	cout<<endl<<"Yeni bakiyeniz : "<<accountBalance;

	return accountBalance;
}

void bank_account::getBalance()
{
	cout<<"Bakiyeniz : "<<accountBalance<<endl<<endl;
}