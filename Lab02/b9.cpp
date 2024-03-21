#include<iostream>
#include<math.h>

#define xdg endl
using namespace std;

int main()
{
    int moc1 = 1;
    int moc2 = 5;
    int moc3 = 120;
    double gia1 = 15;
    double gia2 = 13.5;
    double gia3 = 11;

    double tongTien;

    double soKm;
    cin >> soKm;

    if (soKm > 0)
    {
        if (soKm <= moc1) tongTien = soKm*gia1;
        else // soKM > 1
        {
            if (soKm <= moc2) tongTien = moc1*gia1 + (soKm - moc1)*gia2;
            else
            {
                tongTien = moc1*gia1 + (moc2 - moc1)*gia2 + (soKm - moc2) * gia3;
                if (soKm >= moc3)
                {
                    tongTien/=10;
                }
            }
        }
        cout << tongTien;
    }
    else cout << "Wrong input";

    return 0;
}




