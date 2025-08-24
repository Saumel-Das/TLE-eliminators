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


void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    if(n == 1)
    {
        int maxi = max(v[0], abs(v[0] - x) * 2);
        cout << maxi << endl;
    }
    else
    {
        int ans = v[0];
        for(int i = 1; i < n; i++)
        {
            ans = max(ans, v[i] - v[i - 1]);
        }
        ans = max(ans,(x - v[v.size() - 1]) * 2);
        cout << ans << endl;
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