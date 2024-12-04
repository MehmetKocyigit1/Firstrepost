#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");	
	
	int sayi,b,control;
	cout<<"Bir sayý girniz:";
	cin>>sayi;
	int x=sqrt(sayi);
	
	if (sayi<2)
	{
		cout<<"2 den daha büyük sayý giriniz.";
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
		cout<<"Bu sayý asal sayý deðil."<<endl;
	}
	else
	{
		cout<<"Bu sayý asal sayý."<<endl;
	}
	
    return 0;
}

