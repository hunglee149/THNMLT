#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    double v, s;

    cout << "Nhap van toc cua Tuan: ";
    cin >> v;
    cout << "Nhap do dai quang duong: ";
    cin >> s;

    double t = s/v;

    cout << "Thoi gian Tuan di tu nha toi truong la: " << t;
}




