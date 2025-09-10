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
    vector<ll> v(n);
    map<ll, ll> freq;
    ll maxi = LLONG_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        maxi = max(maxi, v[i]);
    }
    sort(v.begin(), v.end());
    if(v[0] == v[n - 1])
    {
        cout << -1 << endl;
        return;
    }
    cout << n - freq[maxi] << " " << freq[maxi] << endl;
    int size = n - freq[maxi];
    for(int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    nl;
    for(int i = size; i < n; i++)
    {
        cout << maxi << " ";
    }
    nl;
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