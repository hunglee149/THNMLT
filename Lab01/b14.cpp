#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //freopen("hli.in", "r", stdin);
    //freopen("hli.out", "w", stdout);

    int soTien;

    cout << "Nhap vao so tien dang co: ";
    cin >> soTien;

    int soTo10 = soTien/10;
    int soDuSau10 = soTien%10;
    int soTo5 = soDuSau10/5;
    int soDuSau5 = soDuSau10%5;
    int soTo2 = soDuSau5/2;
    int soDuSau2 = soDuSau5%2;

    cout << "So to 10 dong: " << soTo10 << '\n';
    cout << "So to 5 dong: " << soTo5 << '\n';
    cout << "So to 2 dong: " << soTo2 << '\n';
    cout << "So to 1 dong: " << soDuSau2;
}







