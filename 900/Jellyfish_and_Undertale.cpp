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
    ll a, b; int n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for(auto &u : v) cin >> u;
    ll sum = 0;
    if(b > 1) sum += b - 1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] + 1 >= a)
        {
            sum += a - 1;
        }
        else
        {
            sum += v[i];
        }
    }
    cout << (sum + 1) << endl;
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