#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n > 1 && (sqrt(n) == (int)sqrt(n)))
    {
        cout << n << " la so chinh phuong.";
    }
    else cout << n  << " khong phai la so chinh phuong.";
}


