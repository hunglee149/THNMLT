#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    double banKinh;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> banKinh;
    double dienTich = PI*banKinh*banKinh;
    double chuVi = 2*PI*banKinh;
    cout << "Dien tich cua hinh tron la: " << dienTich << '\n';
    cout << "Chu vi cua hinh tron la: " << chuVi;
}



