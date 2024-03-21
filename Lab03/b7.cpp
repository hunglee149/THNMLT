#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;

    int cnt = 0;

    while (temp > 0)
    {
        temp/=2;
        cnt++;
    }
    long long convertToBin = 0;

    int i = cnt;
    while (i > 0)
    {
        while (n > 0)
        {
            int bit = n%2;
            convertToBin += bit*pow(10, cnt - i);
            n/=2;
            i--;
        }
    }
    cout << convertToBin;
}
