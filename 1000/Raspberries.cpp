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
    vector<ll> v(n);
    for (auto &u : v)
    {
        cin >> u;
    }
    ll mn = LONG_LONG_MAX;
    int cnt_e = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            cnt_e++;
        if (v[i] % k == 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            mn = min(mn, k - v[i] % k);
        }
    }
    if (k == 4)
    {
        if (cnt_e >= 2)
            cout << 0 << endl;
        else if (cnt_e == 1)
            cout << 1 << endl;
        else
            cout << min(mn, 2LL) << endl;
    }
    else
        cout << mn << endl;
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