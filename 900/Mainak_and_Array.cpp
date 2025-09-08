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
    vector<int> v(n);   
    for(auto &u : v) cin >> u;
    int ans = INT_MIN;
    if(v.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    for(int i = 1; i < n; i++)
    {
        ans = max(ans, v[i] - v[0]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        ans = max(ans, v[n - 1] - v[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        ans = max(ans, v[i] - v[i + 1]);
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