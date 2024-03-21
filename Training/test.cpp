//                                               _                               _
/*            _                               _ //                             _|_|        
_____________/_\_____________________________/_\______________________________|_|______________________ 
|  __       _____    ______    __    __   _______   ______    _      _   _     _   ___     _   ______  |
| | |      |  ___|  | ____ |   |     | | |  ___  | |  ____|  | |    | | | |   | | |   \   | | |  ____| |
| | |      | |___   | |    |   | |   | | | |   | | | |       | |____| | | |   | | | |\ \  | | | |  __  |
| | |      |  ___|  | |   _|   | |   | | | |   | | | |       |  ____| | | |   | | | | \ \ | | | | |_ | |
| | |____  | |___   | |__|_|_  | |___| | | |___| | | |____   | |    | | | |___| | | |  \ \| | | |__| | |
| |______| |_____|  |______|_| |_______| |_______| |______|  |_|    |_| |_______| |_|   \___| |______| |
|______________________________________________________________________________________________________|
 
*/
      
#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;

#define faster ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define vii vector<int>::iterator
#define mkp(x, y) make_pair(x, y)
#define task "hli"
#define endl '\n'
#define all(a) a.begin(), a.end()
const int maxn = 1e7;
const int MOD = 1e9 + 7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*

(A+B)%C = ((A%C) + (B%C)) % C
(A-B)%C = ((A%C) - (B%C) + C) % C
(A*B)%C = ((A%C) * (B%C)) % C
(A/B)%C = ((A%C) * (B^-1%C)) % C
 
*/

bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int countPrimeFromTwoPoints(int mat[][100], int nRow, int nCol, int xA, int yA, int xB, int yB)
{
	int cnt = 0;
	int h1 = 0, c1 = 0, h2 = nRow - 1, c2 = nCol - 1;
	while(h1 <= h2 && c1 <= c2)
    {
    	for (int i = c1; i <= c2; i++)
    	{
    		if (isPrime(mat[h1][i])) mat[h1][i] = ++cnt;
    		else mat[h1][i] = cnt; 
    	}
    	h1++;
    	for (int i = h1; i <= h2; i++)
    	{
    		if (isPrime(mat[i][c2])) mat[i][c2] = ++cnt;
    		else mat[i][c2] = cnt;
    	}
    	c2--;
    	for (int i = c2; i >= c1; i--)
    	{
    		if (isPrime(mat[h2][i])) mat[h2][i] = ++cnt;
    		else mat[h2][i] = cnt;
    	}
    	h2--;
    	for (int i = h2; i >= h1; i--)
    	{
    		if (isPrime(mat[i][c1])) mat[i][c1] = ++cnt;
    		else mat[i][c1] = cnt;
    	}
    	c1++;
    }

    return abs(mat[xA][yA] - mat[xB][yB]) - 1;
}

int main()
{
    faster
    
    if (fopen(task".txt","r"))
    {
        freopen(task".txt", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    int n; cin >> n;
    int a[100][100];

    for (int i = 0; i < n; i++)
    	for (int j = 0; j < n; j++)
    		cin >> a[i][j];
    
    cout << countPrimeFromTwoPoints(a, n, n, 3, 0, 2, 2);
}