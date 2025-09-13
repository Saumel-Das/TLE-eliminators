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

void solve()
{
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<ll> v(n);
    for (auto &u : v) cin >> u;
    vector<pair<ll,ll>> segments(n);
    for(int i = 0; i < n; i++)
    {
        segments[i] = {v[i] - x, v[i] + x};
    }
    ll cnt = 0, l = segments[0].first, r = segments[0].second;
    for(int i = 0; i < n; i++)
    {
        l = max(l, segments[i].first);
        r = min(r, segments[i].second);
        if(l > r)
        {
            cnt++;
            l = segments[i].first;
            r = segments[i].second;
        }
    }
    cout << cnt << endl;
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