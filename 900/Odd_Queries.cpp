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
    int n, q;
    cin >> n >> q;
    vector<ll> v(n + 1);
    vector<ll> pre_sum(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }
    while(q--)
    {
        ll l, r, k; cin >> l >> r >> k;
        ll K_mul = 0;
        if(l == r) K_mul = k;
        else if(l == 1) K_mul = r * k;
        else K_mul = (r - l + 1) * k;

        ll pre_left = 0, pre_right = 0;
        if(l != 1) pre_left = pre_sum[l - 1];
        if(r != n) pre_right = pre_sum[n] - pre_sum[r];
        
        ll ans = K_mul + pre_left + pre_right;

        // cout << ans << endl;
        if(ans % 2 == 0) no;
        else yes;
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