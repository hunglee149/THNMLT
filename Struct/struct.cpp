#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student
{
    string nm;
    float mathSc;
    float physSc;
};
int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    if (!inFile.is_open())
    {
        cout << "Khong mo duoc file!";
        return 0;
    }
    string ignore_s = "";
    getline(inFile, ignore_s);

    Student SinhVien[4];

    Student temp;

    string name;
    string mathScore;
    string physScore;

    int i = 0;

    while (getline(inFile, name,';'))
    {
        getline(inFile, mathScore, ';');
        getline(inFile, physScore, '\n');

        //outFile << mathScore << " " << physScore << endl;

        temp.nm = name;
        temp.mathSc = stof(mathScore);
        temp.physSc = stof(physScore);


        SinhVien[i++] = temp;
    }
    outFile << "Ten  Tong Diem: \n";

    for (int i = 0; i < 4; i++)
    {
        //cout << SinhVien[i].nm;
        outFile << SinhVien[i].nm << " " << SinhVien[i].mathSc + SinhVien[i].physSc << endl;
    }
    inFile.close();
    outFile.close();
}
