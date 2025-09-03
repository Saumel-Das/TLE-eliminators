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
    int val[10][10] = 
    {
        1,1,1,1,1,1,1,1,1,1,
        1,2,2,2,2,2,2,2,2,1,
        1,2,3,3,3,3,3,3,2,1,
        1,2,3,4,4,4,4,3,2,1,
        1,2,3,4,5,5,4,3,2,1,
        1,2,3,4,5,5,4,3,2,1,
        1,2,3,4,4,4,4,3,2,1,
        1,2,3,3,3,3,3,3,2,1,
        1,2,2,2,2,2,2,2,2,1,
        1,1,1,1,1,1,1,1,1,1
    };
    vector<string> ch(10);
    for(int i = 0; i < 10; i++)
    {
        cin >> ch[i];
    }
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(ch[i][j] == 'X')
            {
                sum += val[i][j];
            }
        }
    }
    cout << sum << endl;

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