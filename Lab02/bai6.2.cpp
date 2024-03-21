#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minNum = a;
    if (a == 1 && b == 0)
    {
        cout << "{1;0}";
        return 0;
    }
    if (a == 0 && b == 1)
    {
        cout << "{0;1}";
        return 0;
    }
    if (a > b) minNum = b;
    int ucln;

    for (int i = minNum; i > 0; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            ucln = i;
            break;
        }
    }
    if (a == b) ucln = a;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln << '\n';
    double m = a/ucln;
    double n = b/ucln;
    double y = 1;

    //double x = (1 - n*y)/m;
    //cout << int(x);
    while ((1-n*y)/m != int((1-n*y)/m))
    {
        y++;
    }
    int x = (1-n*y)/m;
    cout << "Cap so nguyen x, y la: {" << x << "; " << y << "}";
}
