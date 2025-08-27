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
    string s;
    cin >> s;
    int cnt = 0, empty = 0, dot = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
        {
            empty++;
            dot++;
        }
        else
        {
            cnt = max(cnt,empty);
            empty = 0;
        }
    }
    
    cnt = max(cnt, empty);
    if(cnt < 3) cout << dot << endl;
    else if(cnt >= 3) cout << 2 << endl;
    else cout << 0 << endl;
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