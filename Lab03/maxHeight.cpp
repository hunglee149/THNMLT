#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double height1;
    cout << "Nhap vao chieu cao: ";
    cin >> height1;
    double maxHeight = height1;
    double height2;
    cout << "Nhap vao chieu cao: ";
    cin >> height2;
    double minHeight = height2;

    while(1)
    {
        double heightInp;
        cout << "Nhap vao chieu cao: ";
        cin >> heightInp;
        if (heightInp != 0)
        {
            if (heightInp > maxHeight) maxHeight = heightInp;
            else minHeight = heightInp;
        }
        else break;
    }
    cout << "Chieu cao cua hoc sinh dung dau danh sach: " << minHeight << " (m)" << endl;
    cout << "Chieu cao cua hoc sinh dung cuoi danh sach: " << maxHeight << " (m)" << endl;
}

