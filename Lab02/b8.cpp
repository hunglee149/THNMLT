#include<iostream>
#include<math.h>

#define xdg endl
using namespace std;

int main()
{
    int a, b, c;
    bool checkTamGiac;
    cout << "Nhap vao 3 canh: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) checkTamGiac = true;
    else checkTamGiac = false;

    if (!checkTamGiac) cout << "3 canh khong tao nen mot tam giac";
    else
    {
        if (a == b)
        {
            if (a != c)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                cout << "Tam giac deu";
                return 0;
            }
        }
        else
        {
            if (a == c || b == c)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                if (a^2 + b^2 == c^2 || a^2 + c^2 == b^2 || b^2 + c^2 == a^2)
                {
                    cout << "Tam giac vuong";
                    return 0;
                }
                else
                {
                    cout << "Tam giac thuong";
                    return 0;
                }
            }
        }

        if (b == c)
        {
            if (b != a)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                cout << "Tam giac deu";
                return 0;
            }
        }
        else
        {
            if (a == b || a == c)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                if (a^2 + b^2 == c^2 || a^2 + c^2 == b^2 || b^2 + c^2 == a^2)
                {
                    cout << "Tam giac vuong";
                    return 0;
                }
                else
                {
                    cout << "Tam giac thuong";
                    return 0;
                }
            }
        }

        if (a == c)
        {
            if (b != a)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                cout << "Tam giac deu";
                return 0;
            }
        }
        else
        {
            if (a == b || b == c)
            {
                cout << "Tam giac can";
                return 0;
            }
            else
            {
                if (a^2 + b^2 == c^2 || a^2 + c^2 == b^2 || b^2 + c^2 == a^2)
                {
                    cout << "Tam giac vuong";
                    return 0;
                }
                else
                {
                    cout << "Tam giac thuong";
                    return 0;
                }
            }
        }
    }

    return 0;
}




