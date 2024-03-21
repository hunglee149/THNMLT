#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "stdlib.h"

using namespace std;
using ll = long long;

#define task "hli"

void doiXung(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n/2; j++)
		{
			swap(a[i][j], a[i][n - j - 1]);
		}
	}

	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
}

bool checkChinh(int a[][100], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			//cout << a[i][j] << " " << a[j][i] << endl;
			if (a[i][j] != a[j][i]) return false;
		}
	}
	return true;
}

int main()
{
	if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

	int pt;
	cout << "Input n: ";
	cin >> pt;
	int n = int(sqrt(pt));
	int a[100][100];
	cout << "Input array: ";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	if (checkChinh(a, n) == false)
	{
		doiXung(a, n);
		if (checkChinh(a, n) == false) cout << "False";
		else cout << "True";
	}
	else
	{
		cout << "True";
	}
	//if (checkChinh(a, n) || checkPhu(a, n)) cout << "True";
	//else cout << "False";
}
