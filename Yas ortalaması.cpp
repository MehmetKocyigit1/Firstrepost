#include <iostream>
#include <locale.h>
using namespace std;

//girilen 2 sayý aralýðýndaki sayýlarýn toplamýný bulma

int main() {
	setlocale(LC_ALL,"Turkish");	
int topla=0;
int a;
int b;
cout<<"2 sayý arasýndaki deðerleri toplamak için 2 sayý giriniz:";
cin>>a>>b;
for(int i=b+1;i<a;i++)
{
	topla=topla+i;
}
cout<<"Sonucunuz:"<<topla<<endl;
	


	system("PAUSE");
	return 0;
}
