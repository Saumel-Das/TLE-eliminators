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
    vector<ll> v(n); 
    for(auto &u : v) cin >> u;
    vector<ll> ans;
    ans.push_back(v[0]);
    if(v.size() == 1)
    {
        cout << 1 << endl;
        cout << v[0] << endl;
        return;
    }
    ll temp = v[0];
    for(int i = 1; i < n; i++)
    {
        if(temp <= v[i])
        {
            ans.push_back(v[i]);
        }
        else
        {
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
        temp = v[i];
    }
    cout << ans.size() << endl;
    for(auto u : ans) cout << u << " ";
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