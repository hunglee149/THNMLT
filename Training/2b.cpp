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

int checkDiff(int a[], int n)
{
	int cnt = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] - a[i - 1] != 1) cnt++;
	}
	return cnt;
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }
    sort(a, a + n);

    cout << checkDiff(a, n);
}