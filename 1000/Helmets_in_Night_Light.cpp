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
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);
    for(auto &u : a) cin >> u; 
    for(auto &u : b) cin >> u;

    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++)
    {
        vp.push_back({b[i], a[i]});
    }

    sort(vp.begin(), vp.end());
    
    ll rest = n - 1, cost = p;
    for(int i = 0; i < n; i++)
    {
        if(p < vp[i].first)
        {
            cost += (p * rest);
            break;
        }
        else
        {
            if(rest <= vp[i].second)
            {
                cost += (vp[i].first * rest);
                rest = 0;
            }
            else
            {
                cost += (vp[i].first * vp[i].second);
                rest -= vp[i].second;
            }
            if(rest == 0) break;
        }
    }
    cout << cost << endl;
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