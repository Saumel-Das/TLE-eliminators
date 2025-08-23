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
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    int dx[] = {1, -1, 1, -1};
    int dy[] = {1, 1, -1, -1};
    set<pair<int, int>> sk, sq;
    for (int i = 0; i < 4; i++)
    {
        sk.insert({xk + a * dx[i], yk + b * dy[i]});
        sk.insert({xk + b * dx[i], yk + a * dy[i]});
    }
    for (int i = 0; i < 4; i++)
    {
        sq.insert({xq + a * dx[i], yq + b * dy[i]});
        sq.insert({xq + b * dx[i], yq + a * dy[i]});
    }
    int cnt = 0;
    for (auto u : sk)
    {
        if (sq.find(u) != sq.end())
            cnt++;
    }
    cout << cnt << endl;
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