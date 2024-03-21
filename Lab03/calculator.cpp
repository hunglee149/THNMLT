#include <iostream>
using namespace std;
#define tab '\t'
#define xdg '\n'

int n;

void calculatorScreen()
{
    cout << tab << "MAY TINH DON GIAN" << xdg;
    cout << tab << "1. Cong" << xdg;
    cout << tab << "2. Tru" << xdg;
    cout << tab << "3. Nhan" << xdg;
    cout << tab << "4. Chia" << xdg;
    cout << tab << "0. Dung chuong trinh" << xdg;
    cout << xdg;
    cout << "Lua chon cua ban la: ";
}

void aCongB(double a, double b)
{
    cout << "Moi nhap vao so thu nhat: ";
    cin >> a;
    cout << "Moi nhap vao so thu hai: ";
    cin >> b;
    cout << "Ket qua: " << a << " + " << b << " = " << a+b;
}

void aTruB(double a, double b)
{
    cout << "Moi nhap vao so thu nhat: ";
    cin >> a;
    cout << "Moi nhap vao so thu hai: ";
    cin >> b;
    cout << "Ket qua: " << a << " - " << b << " = " << a-b;
}

void aNhanB(double a, double b)
{
    cout << "Moi nhap vao so thu nhat: ";
    cin >> a;
    cout << "Moi nhap vao so thu hai: ";
    cin >> b;
    cout << "Ket qua: " << a << " * " << b << " = " << a*b;
}

void aChiaB(double a, double b)
{
    cout << "Moi nhap vao so thu nhat: ";
    cin >> a;
    cout << "Moi nhap vao so thu hai: ";
    cin >> b;
    if (b == 0) cout << "Wrong input";
    else
    {
        cout << "Ket qua: " << a << " / " << b << " = " << a/b;
    }
}
int main()
{
    while(1)
    {
        calculatorScreen();
        int n;
        cin >> n;
        cout << xdg;
        if (n != 0)
        {
            double a, b;
            switch(n)
            {
                case 1:
                    aCongB(a, b);
                    cout << xdg;
                    break;
                case 2:
                    aTruB(a, b);
                    cout << xdg;
                    break;
                case 3:
                    aNhanB(a, b);
                    cout << xdg;
                    break;
                case 4:
                    aChiaB(a, b);
                    cout << xdg;
                    break;
                default:
                    cout << "Invalid input" << xdg;
            }
            cout << "--------------------------" << xdg;
        }
        else
        {
            cout << "Ban da thoat chuong trinh!";
            break;
        }
    }
}


