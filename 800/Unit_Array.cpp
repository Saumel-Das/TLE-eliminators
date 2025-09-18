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
    int neg_one = 0, pos_one = 0;
    for(auto &u : v)
    {
        cin >> u;
        if(u == -1) neg_one++;
        else pos_one++;
    }
    int op = 0;
    while(neg_one > pos_one || neg_one % 2 == 1)
    {
        op++;
        pos_one++;
        neg_one--;
    }
    cout << op << endl;
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