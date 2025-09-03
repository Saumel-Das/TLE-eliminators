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
    unordered_set<char> st;
    vector<ll> prefix(n + 1, 0);
    vector<ll> suffix(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        st.insert(s[i - 1]);
        prefix[i] = st.size();
    }
    st.clear();
    for(int i = n; i >= 1; i--)
    {
        st.insert(s[i - 1]);
        suffix[i] = st.size();
    }
    ll ans = LLONG_MIN;
    for(int i = 1; i < n; i++)
    {
        ans = max(ans, prefix[i] + suffix[i + 1]);
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