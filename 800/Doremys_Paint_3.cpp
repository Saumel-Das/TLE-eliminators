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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    if(m.size() > 2)
    {
        cout << "No" << endl;
    }
    else
    {
        vector<int> n;
        for(auto u : m) n.push_back(u.second);
        if((n[0] == n[1] || n.size() == 1 || abs(n[0] - n[1]) == 1))
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
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