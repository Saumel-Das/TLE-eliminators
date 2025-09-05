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
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define check cout << "yuhu" << endl
const int maxi = 1e5+123;
int fa[maxi], fb[maxi];
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll cnt = 1;
    vector<ll> max_freq_a(n * 2 + 1, 0), max_freq_b(n * 2 + 1, 0);
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i - 1]) cnt++;
        else
        {
            max_freq_a[a[i - 1]] = max(cnt, max_freq_a[a[i - 1]]);
            cnt = 1;
        }
    }
    max_freq_a[a[n - 1]] = max(cnt, max_freq_a[a[n - 1]]);
    cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(b[i] == b[i - 1]) cnt++;
        else
        {
            max_freq_b[b[i - 1]] = max(cnt, max_freq_b[b[i - 1]]);
            cnt = 1;
        }
    }
    max_freq_b[b[n - 1]] = max(cnt, max_freq_b[b[n - 1]]);
    ll max_freq = -1;
    for(int i = 1; i <= 2 * n; i++)
    {
        max_freq = max(max_freq, max_freq_a[i] + max_freq_b[i]);
    }
    cout << max_freq << endl;
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