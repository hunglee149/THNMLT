#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    int n;

    cout << "Nhap vao so nguyen duong co 2 chu so: ";
    cin >> n;

    int lastNum = n%10;
    int fiNum = n/10;

    int soDaoNguoc = lastNum*10+fiNum;

    cout << "So sau khi dao nguoc la: " << soDaoNguoc;
}






