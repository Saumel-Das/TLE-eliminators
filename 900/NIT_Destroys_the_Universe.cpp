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
    if(count(v.begin(), v.end(), 0) == 0)
    {
        cout << 1 << endl;
        return;
    }
    if(count(v.begin(), v.end(), 0) == n)
    {
        cout << 0 << endl;
        return;
    }
    int seg = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 0) continue;
        if(v[i + 1] == 0 || i == n - 1) seg++;
    }
    if(seg == 1) cout << 1 << endl;
    else cout << 2 << endl;

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