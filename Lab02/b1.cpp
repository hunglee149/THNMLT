#include<iostream>
using namespace std;

int main()
{
    int gio, phut, giay;
    cout << "Nhap lan luot gio, phut, giay: ";
    cin >> gio >> phut >> giay;
    if (gio < 0 || phut < 0 || giay < 0) cout << "Invalid input.";
    else
    {
        if (gio > 23 && phut > 59 && giay > 59) cout << "Invalid input";
        else cout << "Valid input.";
    }
}
