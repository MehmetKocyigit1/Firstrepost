#include <iostream>
#include <locale.h>
using namespace std;

//girilen 2 say� aral���ndaki say�lar�n toplam�n� bulma

int main() {
	setlocale(LC_ALL,"Turkish");	
int topla=0;
int a;
int b;
cout<<"2 say� aras�ndaki de�erleri toplamak i�in 2 say� giriniz:";
cin>>a>>b;
for(int i=b+1;i<a;i++)
{
	topla=topla+i;
}
cout<<"Sonucunuz:"<<topla<<endl;
	


	system("PAUSE");
	return 0;
}
