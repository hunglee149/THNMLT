#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //freopen("hli.in", "r", stdin);
    //freopen("hli.out", "w", stdout);

    int soChaiNuoc, donGia, soTienInp;

    cout << "Nhap vao lan luot so chai nuoc, don gia va so tien nguoi dung tra: ";
    cin >> soChaiNuoc >> donGia >> soTienInp;

    int soTienMoiChai = donGia/soChaiNuoc;

    int tienLe = soTienInp - donGia;
    int soTo10 = soTien/10;
    int soDuSau10 = soTien%10;
    int soTo5 = soDuSau10/5;
    int soDuSau5 = soDuSau10%5;
    int soTo2 = soDuSau5/2;
    int soDuSau2 = soDuSau5%2;
}








