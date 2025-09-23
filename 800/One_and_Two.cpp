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
    vector<int> freq(3, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    if(freq[2] % 2 != 0)
    {
        cout << -1 << endl; return;
    }
    if(freq[1] == n)
    {
        cout << 1 << endl;
    }
    else
    {
        int cnt = 0, k = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == 2)
            {
                cnt++;
            }
            k++;
            if(cnt == (freq[2] / 2)) break;
        }
        cout << k << endl;
    }

    
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