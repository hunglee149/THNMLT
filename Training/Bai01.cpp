#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "stdlib.h"

using namespace std;
using ll = long long;

#define task "hli"

const int maxn = 1e5;

int limit[maxn];

ll sqr(ll n)
{
	return n*n;
}

bool check(ll n)
{
	ll temp = n;
	while (temp != 1)
	{
		ll m = temp;
		ll sum = 0;
		while (m)
		{
			sum += 1ll*sqr(m % 10);
			m /= 10;
		}
		limit[sum]++;
		if (limit[sum] > 1) return false;
		temp = sum;
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

	ll n;
	cout << "Input number: ";
	cin >> n;
	cout << "Output: ";
	if (check(n)) cout << "true";
	else cout << "false";
}
