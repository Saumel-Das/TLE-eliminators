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
    ll n;
    cin >> n;
    if(n < 4 || n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll mx = 0, mn = 0;
        if(n % 6 == 0) mn = n / 6;
        else mn = n / 6 + 1;
        mx = n / 4;
        cout << mn << " " << mx << endl;
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