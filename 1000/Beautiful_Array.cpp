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
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "yuhu" << endl

void solve()
{
    ll n;
    cin >> n;
    ll k, b, s;
    cin >> k >> b >> s;
    ll max_sum = (k * b) + (n * (k - 1)), min_sum = k * b;
    
    if(s > max_sum || s < min_sum)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> ans(n, 0);
        ans[0] = min_sum;
        s -= min_sum;
        for(int i = 0; i < n; i++)
        {
            ll add = min(k - 1, s);
            ans[i] += add;
            s -= add;
        }
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        nl;
    }
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