#include<iostream>
#include<math.h>

#define xdg endl
using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap 3 so: ";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            if (b < c)
            {
                cout << c << xdg;
                cout << a << " " << b << " " << c;
            }
            else
            {
                cout << b << xdg;
                cout << a << " " << c << " " << b;
            }
        }
        else
        {
            cout << b << xdg;
            cout << c << " " << a << " " << b;
        }
    }
    else
    {
        if (b < c)
        {
            if (a < c)
            {
                cout << c << xdg;
                cout << b << " " << a << " " << c;
            }
            else
            {
                cout << a << xdg;
                cout << b << " " << c << " " << a;
            }
        }
        else
        {
            cout << a << xdg;
            cout << c << " " << b << " " << a;
        }
    }
}




