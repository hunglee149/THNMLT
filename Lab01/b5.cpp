#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    int x;
    cout << "Nhap so nguyen x: ";
    cin >> x;
    int eq = x*x*x - 5*x*x + 6;
    cout << eq;
}


