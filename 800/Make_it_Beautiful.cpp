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
#define check cout << "-__________________-" << endl


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    int cnt = 1, temp = v[0];
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == temp) cnt++;
    }
    sort(v.rbegin(), v.rend());
    int flag = -1;
    if(v[0] == v[1])
    {
        flag = 1;
        for(int i = 1; i < n; i++)
        {
            if(v[i] != v[0])
            {
                flag = -1;
                swap(v[0], v[i]);
            }
        }
    }
    if(flag == -1)
    {
        yes;
        for(auto u : v) cout << u << " ";
        nl;
    }
    else no;
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