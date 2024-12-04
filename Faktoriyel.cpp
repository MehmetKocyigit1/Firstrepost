#include <iostream>
#include<locale.h>
#include<cmath>
using namespace std;

  int f(int m)
	{
	{if (m>1)
	return (m*f(m-1));

	else 
	return 1;}
	}
int main()
{
    setlocale(LC_ALL, "Turkish");
    char x;
    double b, a;
    char islem;
    
 
	

    cout << "Ne yapmak istiyorsunuz:(4 iþlem ise 0'a bas   Yüzde ve Köklü iþlemler için 1 tuþuna   Faktoryel için 2 tuþuna bas" << endl;
    cin >> x;

    if (x == '0')
    {
        cout << "iþlem yapmak istediðiniz 1. sayýyý giriniz:" << endl;
        cin >> a;

        cout << "Yapacaðýnýz iþlemi seçiniz ; (+,-,*,/)" << endl;
        cin >> islem;

        cout << "iþlem yapmak istediðiniz 2. sayýyý giriniz:" << endl;
        cin >> b;

        if (islem == '+')
        {
            cout << "Sonuç=" << a + b << endl;
        }
        else if (islem == '-')
        {
            cout << "Sonuç=" << a - b << endl;
        }
        else if (islem == '*')
        {
            cout << "Sonuç=" << a * b << endl;
        }
        else if (islem == '/')
        {
            cout << "Sonuç=" << a / b << endl;
        }
    }

    else if (x == '1')
    {
        cout << "Sayý giriniz:" << endl;
        cin >> a;
        cout << "Yapmak istediðiniz iþlemi seçiniz:(Yüzde alma için %  Kök alma için & tuþuna basýnýz):" << endl;
        cin >> islem;

        {
            if (islem == '%')
                cout << "Sonuç=" << a / 100 << endl;
            else if (islem == '&')
                cout << a << "sayýsýnýn kök alýnmýþ hali" << "=" << pow(a, 0.5) << endl;

        }



    }
  
    else if (x == '2') {

        cout << "Sayý giriniz:" << endl;
        cin >> a;
        cout << "Faktoryel hesaplamak için ! tuþunu kullanýn" << endl;
        cin >> islem;

        {
            if (islem == '!')
                cout << "Sonucnuz=" << f(x) << endl;

        }

}
   

    return 0;
	}

