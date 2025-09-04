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
    int n;
    cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, abs(v[i]));
    }
    if(mn == 0) cout << 0 << endl;
    else cout << abs(mn) << endl;
}
int main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}