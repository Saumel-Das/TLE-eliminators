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
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &u : v) cin >> u;
    int vi = 0, vj = 0;
    ll dis = LLONG_MAX;
    bool s = is_sorted(v.begin(), v.end());
    if(!s)
    {
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(abs(v[i] - v[i + 1]) < dis)
        {
            dis = abs(v[i] - v[i + 1]);
        }
    }
    cout << dis / 2 + 1 << endl;
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