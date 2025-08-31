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
#define all(a) (a).begin(), (a).end()
#define check cout << "yuhu" << endl

void solve()
{
    int n, k;
    cin >> n >> k;
    ll q;
    cin >> q;
    vector<ll> v(n);
    vector<int> temp;
    for (auto &u : v) cin >> u;
    int cnt = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= q)
        {
            cnt++;
        }
        else
        {
            if(cnt >= k) temp.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt >= k) temp.push_back(cnt);

    for(int i = 0; i < temp.size(); i++)
    {
        ans += (1LL * (temp[i] - k + 1) * (temp[i] - k + 2)) / 2;
    }
    cout << ans << endl;
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