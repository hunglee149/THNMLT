#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct PhanSo
{
    int tu1, mau1;
    int tu2, mau2;
};

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	if (fopen("test.txt","r"))
	{
	    freopen("test.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	}
	PhanSo p;

    cin >> p.tu1 >> p.mau1 >> p.tu2 >> p.mau2;
    int tu = p.tu1*p.mau2 + p.tu2*p.mau1;
    int mau = p.mau1*p.mau2;
    cout << tu/gcd(tu,mau) << "/" << mau/gcd(tu,mau);
}
