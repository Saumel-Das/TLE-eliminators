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
    vector<int> v(n); 
    for(auto &u : v) cin >> u;
    int odd = 0, even = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0) even++;
        else odd++;
        sum += v[i];
    }
    if(odd % 2 == 0) yes;
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