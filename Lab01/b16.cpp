#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //freopen("hli.in", "r", stdin);
    //freopen("hli.out", "w", stdout);

    int x, y;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;

    cout << "   " << x << '\n';
    cout << " x " << y << '\n';
    cout << "------" << '\n';

    int Num3x = x%10;
    int Num2x = (x%100)/10;
    int Num1x = x/100;

    int Num3y = y%10;
    int Num2y = (y%100)/10;
    int Num1y = y/100;

    // First Line after ---

    int Num4Line1 = (Num3y*Num3x)%10;
    int soNho1Line1 = (Num3y*Num3x)/10;

    int Num3Line1 = (Num3y*Num2x + soNho1Line1)%10;
    int soNho2Line1 = (Num3y*Num2x + soNho1Line1)/10;

    int Num12Line1 = Num3y*Num1x + soNho2Line1;

    cout << "  " << Num12Line1 << Num3Line1 << Num4Line1;

    // Second Line after ---

    int Num4Line2 = (Num2y*Num3x)%10;
    int soNho1Line2 = (Num2y*Num3x)/10;

    int Num3Line2 = (Num2y*Num2x + soNho1Line2)%10;
    int soNho2Line2 = (Num2y*Num2x + soNho1Line2)/10;

    int Num12Line2 = Num2y*Num1x + soNho2Line2;

    cout << "\n " << Num12Line2 << Num3Line2 << Num4Line2;

    // Third Line after ---

    int Num4Line3 = (Num1y*Num3x)%10;
    int soNho1Line3 = (Num1y*Num3x)/10;

    int Num3Line3 = (Num1y*Num2x + soNho1Line3)%10;
    int soNho2Line3 = (Num1y*Num2x + soNho1Line3)/10;

    int Num12Line3 = Num1y*Num1x + soNho2Line3;

    cout << "\n" << Num12Line3 << Num3Line3 << Num4Line3;

    cout << "\n------" << '\n';

    // Sum

    int Num2Line1 = Num12Line1%10;
    int Num1Line1 = Num12Line1/10;

    int Num2Line2 = Num12Line2%10;
    int Num1Line2 = Num12Line2/10;

    int Num2Line3 = Num12Line3%10;
    int Num1Line3 = Num12Line3/10;

    int sixDigit = Num4Line1;
    int fifDigit = (Num3Line1 + Num4Line2)%10;
    int soNhoSum1 = (Num3Line1 + Num4Line2)/10;

    int forthDigit = (Num2Line1 + Num3Line2 + Num4Line3 + soNhoSum1)%10;
    int soNhoSum2 = (Num2Line1 + Num3Line2 + Num4Line3 + soNhoSum1)/10;

    int thirdDigit = (Num1Line1 + Num2Line2 + Num3Line3 + soNhoSum2)%10;
    int soNhoSum3 = (Num1Line1 + Num2Line2 + Num3Line3 + soNhoSum2)/10;

    int secDigit = (Num1Line2 + Num2Line3 + soNhoSum3)%10;
    int soNhoSum4 = (Num1Line2 + Num2Line3 + soNhoSum3)/10;

    int fiDigit = Num1Line3 + soNhoSum4;

    // Sum

    cout << fiDigit << secDigit << thirdDigit << forthDigit << fifDigit << sixDigit;

}
