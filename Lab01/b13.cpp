#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //freopen("hli.in", "r", stdin);
    //freopen("hli.out", "w", stdout);

    double tanGao;

    cout << "Nhap so luong tan gao: ";
    cin >> tanGao;

    double kgGao = tanGao*1000;
    int baoGao = int(kgGao)/20;
    double kgGaoDu = kgGao - baoGao;
    int baoGaoDu = (kgGaoDu < 20) && (kgGaoDu != 0);

    cout << baoGao + baoGaoDu;

}







