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
#define check cout << "-__________________-" << endl

void solve()
{
    int ans = 0;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c && b == d)
    {
        cout << 0 << endl;
        return;
    }
    if(b > d)
    {
        cout << -1 << endl;
        return;
    } 
    ans += d - b;
    a += ans;
    if(c > a)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans + (a - c) << endl;
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