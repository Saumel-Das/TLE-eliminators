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
#define check cout << "yuhu" << endl


void solve()
{
    int n; cin >> n;
    ll D; cin >> D;
    vector<ll> v(n); 
    for(auto &u : v) cin >> u;
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        ll sz = 0;
        sz = (D / v[i]) + 1;
        if(v.size() >= sz)
        {
            cnt++;
            v.resize(v.size() - sz);
        }
    }
    cout << cnt << endl;
}
int main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}