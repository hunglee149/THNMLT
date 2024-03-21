#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    double m, D;

    cout << "Nhap vao khoi luong cua vat: ";
    cin >> m;
    cout << "Nhap vao khoi luong rieng cua vat: ";
    cin >> D;

    double theTich = m/D;

    cout << "The tich cua vat la: " << theTich;
}



