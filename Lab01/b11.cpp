#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    freopen("hli.in", "r", stdin);
    freopen("hli.out", "w", stdout);

    int soGiay;

    cout << "Nhap vao so giay: ";
    cin >> soGiay;

    int sec = soGiay%60;
    int hour = soGiay/(60*60);
    int minute = (soGiay - hour*3600 - sec)/60;

    cout << hour << ":" << minute << ":" << sec;


}







