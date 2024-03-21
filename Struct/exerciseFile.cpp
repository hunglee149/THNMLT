#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void copyFile(char input[], char output[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    getline(inFile, inp);

    string out = "";

    int inpSize = inp.size();
    for(int i = 0; i < inpSize; i++)
    {
        out += inp[i];
    }

    int outSize = out.size();
    for(int i = 0; i < outSize; i++)
    {
        outFile << out[i];
    }    
}

void convertFile60CharsperLine(char input[], char output[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    getline(inFile, inp);

    string out = "";

    int cnt = 0;

    int ssize1 = inp.size();
    int i1 = 1;
    while(i1 < ssize1/60)
    {
        inp.insert(60*i1 + cnt, " ");
        cnt++;
        i1++;
    }
    int ssize2 = inp.size();
    int i2 = 0;
    while (i2 < ssize2)
    {
        string subs = inp.substr(i2, 60);
        outFile << subs << endl;
        i2 += 61;
    }
}

double countAverageChar(char input[])
{
    int cnt = 0, sum = 0;
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    while(getline(inFile, inp))
    {
        cnt++;
        sum += inp.size();
    }
    return 1.0*sum/cnt;
}

void deleteLastLine(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;

    int it = 0;
    string a[10000];
    
    while(getline(inFile, inp))
    {
        a[it++] = inp;
    }
    
    --it;
    
    for (int i = 0; i < it; i++) outFile << a[i] << endl;
}

void deleteEmptyLines(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    while(getline(inFile, inp))
    {
        a[it++] = inp;
    }
    for (int i = 0; i < it; i++)
    {
        if (a[i].size() != 0) outFile << a[i] << endl;
    }
}

void insert7thLine(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    while(getline(inFile, inp))
    {
        a[it++] = inp;
    }

    for (int i = 0; i < it; i++)
    {
        if (i == 6) outFile << a[i] << endl << endl;
        else outFile << a[i] << endl;
    }
}

void insertDoubleSpaces(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    while(getline(inFile, inp))
    {
        a[it++] = inp;
    }

    for (int i = 0; i < it; i++)
    {
        outFile << a[i];
        if (i != it - 1) outFile << endl << endl;
    }
}

void insert2thLine(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    string temp;
    while(getline(inFile, inp))
    {
        if (it == 1) temp = inp;
        a[it++] = inp;
    }

    outFile << a[0] << endl << a[1] << endl;
    for (int i = 2; i < it; i++)
    {
        outFile << a[i] << endl << temp << endl;
    }
}

void delete2FirstLines(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;

    while(getline(inFile, inp))
    {
        inp.erase(0, 2);
        a[it++] = inp;
    }

    for (int i = 0; i < it; i++) outFile << a[i] << endl;
}

bool checkSumDigits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 2 == 0) ? true : false;
}

void writeListEvenNumbers(int n, char output[])
{
    ofstream outFile;
    outFile.open("output.txt", ios::out);

    for (int i = 0; i < n; i++)
    {
        if (checkSumDigits(i)) outFile << i << endl;
    }
}

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

void countPrimes(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("output.txt", ios::in);
    outFile.open("outputTest.txt", ios::out);

    int n, cnt = 0;
    while (inFile >> n)
    {
        if (isPrime(n)) cnt++;
    }
    outFile << cnt;
}

void sumMatrix(int a[][100], int &n, int &m)
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    inFile >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            inFile >> a[i][j];
            sum += a[i][j];
            if (i == n - 1 && j == m - 1) outFile << sum;
        }
    }
}

void sort(string a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                string temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

void sortListName(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    int n;
    while(getline(inFile, inp))
    {
        if (isdigit(inp[0])) n = stoi(inp);
        else a[it++] = inp;
    }

    sort(a, n);
    outFile << "Danh sach ten thi sinh sau khi sap xep la: " << endl;
    for (int i = 0; i < n; i++) outFile << a[i] << endl;
}

void harder(char input[])
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("test.txt", ios::in);
    outFile.open("output.txt", ios::out);

    string inp = (string)input;
    string a[10000];
    int it = 0;
    while(getline(inFile, inp))
    {
        a[it++] = inp;
    }
    sort(a, it);
    outFile << "Danh sach ten thi sinh sau khi sap xep la: " << endl;
    for (int i = 0; i < it; i++) outFile << a[i] << endl;
}

int main()
{
    int a[100][100], n, m;
    char inp[10000], out[10000];
    //copyFile(inp, out);
    //convertFile60CharsperLine(inp, out);
    //outFile << countAverageChar(inp);
    //deleteLastLine(inp);
    //deleteEmptyLines(inp);
    //insert7thLine(inp);
    //insertDoubleSpaces(inp);
    //insert2thLine(inp);
    //delete2FirstLines(inp);
    //writeListEvenNumbers(50, out);
    //countPrimes(inp);
    //sumMatrix(a, n, m);
    //sortListName(inp);
    harder(inp);
}
