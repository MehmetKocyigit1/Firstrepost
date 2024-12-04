#include <iostream>
#include<locale.h>
#include<cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");
    int b, a;
    char islem;
    
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

    return 0;
}
