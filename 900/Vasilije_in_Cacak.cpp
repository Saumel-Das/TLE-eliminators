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
    ll x, n, k;
    cin >> n >> k >> x;
    ll max_sum = 0, min_sum = 0;

    min_sum = (k * (k + 1)) / 2;
    for(int i = 0; i < k; i++)
    {
        max_sum += n - i;
    }
    if(x >= min_sum && x <= max_sum) yes;
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