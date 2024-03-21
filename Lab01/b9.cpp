#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    double tienSanPham;

    cout << "Nhap vao gia tien san pham: ";
    cin >> tienSanPham;

    double tienSpSauVAT = tienSanPham*1.1;

    cout << "Thanh tien san pham sau khi co VAT la: " << tienSpSauVAT;
}





