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

void solve()
{
    int n, overall_minimum = INT_MAX;
    ll ans = 0;
    cin >> n;
    int t2 = n;
    vector<pair<int, int>> p;
    while (t2--)
    {
        int m;
        cin >> m;
        int first_minimum = INT_MAX, second_minimum = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x <= first_minimum)
            {
                second_minimum = first_minimum;
                first_minimum = x;
            }
            else if (x <= second_minimum)
            {
                second_minimum = x;
            }
        }
        p.push_back({second_minimum, first_minimum});
        overall_minimum = min(overall_minimum, first_minimum);
    }
    sort(p.rbegin(), p.rend());
    for(int i = 0; i < p.size() - 1; i++) ans += p[i].first;
    ans += overall_minimum;
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