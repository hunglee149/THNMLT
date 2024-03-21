#include<iostream>
using namespace std;

int main()
{
    double toan, ly, hoa;
    cout << "Nhap vao diem 3 mon Toan, Ly, Hoa: ";
    cin >> toan >> ly >> hoa;

    double sum = toan+ly+hoa;

    if (sum >= 15 & toan >= 4 && ly >= 4 && hoa >= 4)
    {
        cout << "Ket qua dau\n";
        if (toan >= 5 && ly >= 5 && hoa >= 5) cout << "Hoc deu cac mon\n";
        else cout << "Hoc chua deu cac mon\n";
    }
    else cout << "Thi hong\n";
}

