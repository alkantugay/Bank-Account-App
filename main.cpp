#include <iostream>
#include "bank_account.h"

using namespace std;

int main()
{
	int x,y,z,t;

	bank_account account1;
	account1.account();
anamenu:

	cout<<endl<<"Yapmak istediginiz islemi secin: "<<endl<<endl
		<<"1 - Para Cekme"<<endl<<"2 - Para Yatirma"<<endl<<"3- Bakiye Kontrolu"<<endl<<endl;

	cin>>x;

	if(x<1 || x>3){
	cout<<endl<<"Yanlis numara tusladiniz lutfen tekrar deneyiniz!!"<<endl<<endl<<endl;
	goto anamenu;
	}


	switch(x)
	{

	case 1:
		cout<<endl<<"Cekmek istediginiz miktari girin: ";   cin>>y;
		cout<<endl;
		account1.debit(y);
		cout<<endl;
		break;

	case 2:
		cout<<endl<<"Yatirmak istediginiz miktari girin: ";   cin>>z;
		cout<<endl;
		account1.credit(z);
		cout<<endl;
		break;

	case 3:
		account1.getBalance();
		break;
	
	}

hataligiris:

	cout<<endl<<"Ana menuye donmek icin 1'e cikmak icin 0'a basiniz : ";  cin>>t;


	if(t==1)
		goto anamenu;

	else if (t==0)
		return -1;
	
	else
	{
		cout<<"Hatali giris yaptiniz lutfen 1 ya da 0 a bastiginizdan emin olun : ";
	    goto hataligiris;
	}

	return 0;
}