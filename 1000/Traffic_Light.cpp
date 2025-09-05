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
    char c; cin >> c;
    string s; cin >> s;
    s += s;
    n *= 2;
    ll indx = -1, ans = LLONG_MIN;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'g')
        {
            indx = i;
        }
        if(s[i] == c)
        {
            ans = max(ans, indx - i);
        }
    }
    cout << ans << endl;
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