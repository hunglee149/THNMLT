#include <iostream>
using namespace std;

#define xdg endl

void setArray(int a[], int &n)
{
    cout << "Size of Array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void printArray(int a[], int n)
{
    cout << "\nArray is: " << xdg;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "  << a[i] << " ";
        cout << xdg;
    }
}

int sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int findMin(int a[], int n)
{
    int minNum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < minNum)
        {
            minNum = a[i];
        }
    }
    return minNum;
}

int checkPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int countNumberofPrime(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i])) cnt++;
    }
    return cnt;
}

int isAscendingOrder(int a[], int n)
{
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i+1]) cnt++;
    }
    if (cnt == n) return 1;
    return 0;
}

int countOcurrences(int a[], int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) cnt++;
    }
    return cnt;
}

void deleteItems(int a[], int &n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            int temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
    }
    n--;
    printArray(a, n);
}

void deleteItemsFromIndex(int a[], int &n, int index, int no_items)
{
    for (int id = index; id < n-no_items; id++)
    {
            int temp = a[id+no_items];
            a[id+no_items] = a[id];
            a[id] = temp;
    }
    n-=no_items;
    printArray(a, n);
}

void concatTwoArrays(int a[], int n, int b[], int m, int c[])
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[i+n] = b[i];
    }
    printArray(c, n+m);
}

void concatInterspersedlyTwoArrays(int a[], int n, int b[], int m, int c[])
{
    int itA = 0, itB = 0, itC = 0;

    while (itA < n && itB < m)
    {
        c[itC++] = a[itA++];
        c[itC++] = b[itB++];
    }
    while (itA < n)
    {
        c[itC++] = a[itA++];
    }
    while (itB < m)
    {
        c[itC++] = b[itB++];
    }

    printArray(c, n+m);
}

int main()
{
    int a[100], b[100], c[2*100];
    int n, m;

    setArray(a, n);
    setArray(b, m);

    concatInterspersedlyTwoArrays(a, n, b, m, c);
    return 0;
}


