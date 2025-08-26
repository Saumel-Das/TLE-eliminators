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
    string s;
    cin >> s;
    int cnt_one = 0, cnt_zero = 0;
    for(int i = 0; i < s.size(); i++)
    {   
        if(s[i] == '1') cnt_one++;
        else cnt_zero++;
    }
    if(s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    if(cnt_one == cnt_zero)
    {
        cout << 0 << endl;
        return;
    }
    int t = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1' && cnt_zero > 0)
        {
            cnt_zero--;
            t++;
        }
        else if(s[i] == '0' && cnt_one > 0)
        {
            cnt_one--;
            t++;
        }
        else break;
    }
    cout << s.size() - t << endl;
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