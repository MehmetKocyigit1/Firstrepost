#include <iostream>
#include<locale.h>
#include<cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");
    int b, a;
    char islem;
    
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

    return 0;
}
