#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &u : v) cin >> u;
	int o = 1, e = 1;
	for(int i = 0; i < n - 1; i++)
	{
		if(v[i] % 2 == 0 && v[i + 1] % 2 == 0)
		{
			e++;
		}
		if(v[i] % 2 != 0 && v[i + 1] % 2 != 0)
		{
			o++;
		}
		
	}
	cout << (e - 1) + (o - 1) << endl;
}
int main()
{
	optimize();

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}