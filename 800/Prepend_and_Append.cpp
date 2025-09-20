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
    int cnt = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    string s2, s3;
    s2 = s.substr(0, n / 2);
    if(n % 2 == 0) s3 = s.substr(n / 2);
    else { s3 = s.substr(n / 2 + 1); cnt++;}

    reverse(s2.begin(), s2.end());
    for(int i = s2.size() - 1; i >= 0; i--)
    {
        if(s2[i] != s3[i])
        {
            s2.pop_back(); s3.pop_back();
        }
        else break;
    }
    cnt += (s2.size() + s3.size());
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