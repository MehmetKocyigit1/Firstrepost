#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");	
	
	int sayi,b,control;
	cout<<"Bir say� girniz:";
	cin>>sayi;
	int x=sqrt(sayi);
	
	if (sayi<2)
	{
		cout<<"2 den daha b�y�k say� giriniz.";
	}

	for (int i=2;i<sayi/2;i++)
	{
		if (sayi%i==0)
		{
			control=2;
			break;
		}
	}
	if (control==2)
	{
		cout<<"Bu say� asal say� de�il."<<endl;
	}
	else
	{
		cout<<"Bu say� asal say�."<<endl;
	}
	
    return 0;
}

