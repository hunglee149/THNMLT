#include <iostream>
#include <math.h>

using namespace std;

const double k = 6.67*(10^(-11));

int main()
{

    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    double m1, m2;

    cout << "Nhap lan luot khoi luong 2 vat 1 va 2: ";
    cin >> m1 >> m2;

    double d;

    cout << "Nhap vao khoang cach cua 2 vat: ";
    cin >> d;

    double lucHapDan = k*((m1*m2)/(d*d));

    cout << lucHapDan;

}







