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
#define all(a) (a).begin(), (a).end()
#define check cout << "yuhu" << endl

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &u : v) cin >> u;
    vector<pair<int, int>> p;
    for(int i = 0; i < n; i++)
    {
        if(v[i] % k == 0)
        {
            cout << i + 1 << " ";
        }
        else
        {
            p.push_back({i + 1, (v[i] % k)});
        }
    }
    sort(p.begin(), p.end(), cmp);
    for(auto u : p)
    {
        cout << u.first << " ";
    }
    nl;
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