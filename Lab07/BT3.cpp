#include <iostream>
using namespace std;

#define MAX 100

void set2dArray(int a[][MAX], int &m, int &n)
{
    cin >> m >> n;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> a[row][col];
        }
    }
}

void print2dArray(int a[][MAX], int m, int n)
{
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}

int sumArray(int a[][MAX], int m, int n)
{
    int sum = 0;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            sum += a[row][col];
        }
    }
    return sum;
}

int sumDiagonal(int a[][MAX], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[i][i];
    }
    return sum;
}

int findMin(int a[][MAX], int m, int n)
{
    int minNum = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < minNum)
            {
                minNum = a[i][j];
            }
        }
    }
    return minNum;
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

int countNumberOfPrime(int a[][MAX], int m, int n)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isPrime(a[i][j]))
                cnt++;
        }
    }
    return cnt;
}

void countNumberofUniquePrime(int a[][MAX], int m, int n)
{
    int cnt = 0;
    int b[m*n];
    int it = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isPrime(a[i][j]))
            {
                int cnt = 0;
                for (int k = 0; k < m*n; k++)
                {
                    if (b[k] == a[i][j])
                    {
                        cnt++;
                        break;
                    }
                }
                if (cnt == 0) b[it++] = a[i][j];
            }
        }
    }
    cout << it << endl;
}

int countOcurrences(int a[][MAX], int m, int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x) cnt++;
        }
    }
    return cnt;
}

void swapNums(int& a, int& b)
{
    int temp = b;
    b = a;
    a = temp;
}

void deleteRow(int a[][MAX], int i, int& m, int n)
{
    int indexRow = i;
    while (indexRow < m - 1)
    {
        for (int j = 0; j < n; j++)
        {
            swapNums(a[indexRow][j], a[indexRow+1][j]);
        }
        indexRow++;
    }
    m--;
}

void deleteCol(int a[][MAX], int j, int m, int &n)
{
    int indexCol = j;
    while (indexCol < n - 1)
    {
        for (int i = 0; i < m; i++)
        {
            swapNums(a[i][indexCol], a[i][indexCol+1]);
        }
        indexCol++;
    }
    n--;
}

void deleteItems(int a[][MAX], int &m, int &n, int x)
{
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                cout << i << " " << j << endl;
                deleteRow(a, i, m, n);
                deleteCol(a, j, m, n);
                break;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int m, n;
    set2dArray(a, m, n);
    deleteItems(a, m, n, 7);
}
