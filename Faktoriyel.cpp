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
    
 
	

    cout << "Ne yapmak istiyorsunuz:(4 i�lem ise 0'a bas   Y�zde ve K�kl� i�lemler i�in 1 tu�una   Faktoryel i�in 2 tu�una bas" << endl;
    cin >> x;

    if (x == '0')
    {
        cout << "i�lem yapmak istedi�iniz 1. say�y� giriniz:" << endl;
        cin >> a;

        cout << "Yapaca��n�z i�lemi se�iniz ; (+,-,*,/)" << endl;
        cin >> islem;

        cout << "i�lem yapmak istedi�iniz 2. say�y� giriniz:" << endl;
        cin >> b;

        if (islem == '+')
        {
            cout << "Sonu�=" << a + b << endl;
        }
        else if (islem == '-')
        {
            cout << "Sonu�=" << a - b << endl;
        }
        else if (islem == '*')
        {
            cout << "Sonu�=" << a * b << endl;
        }
        else if (islem == '/')
        {
            cout << "Sonu�=" << a / b << endl;
        }
    }

    else if (x == '1')
    {
        cout << "Say� giriniz:" << endl;
        cin >> a;
        cout << "Yapmak istedi�iniz i�lemi se�iniz:(Y�zde alma i�in %  K�k alma i�in & tu�una bas�n�z):" << endl;
        cin >> islem;

        {
            if (islem == '%')
                cout << "Sonu�=" << a / 100 << endl;
            else if (islem == '&')
                cout << a << "say�s�n�n k�k al�nm�� hali" << "=" << pow(a, 0.5) << endl;

        }



    }
  
    else if (x == '2') {

        cout << "Say� giriniz:" << endl;
        cin >> a;
        cout << "Faktoryel hesaplamak i�in ! tu�unu kullan�n" << endl;
        cin >> islem;

        {
            if (islem == '!')
                cout << "Sonucnuz=" << f(x) << endl;

        }

}
   

    return 0;
	}

