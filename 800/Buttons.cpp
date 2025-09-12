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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a > b)
    {
        cout << "First" << endl;
    }
    else if(b > a)
    {
        cout << "Second" << endl;
    }
    else 
    {
        if(c % 2 == 0)
        {
            cout << "Second" << endl;
        }
        else 
        {
            cout << "First" << endl;
        }
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