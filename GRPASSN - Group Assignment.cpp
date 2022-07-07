#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;

void solve()
{
    int i,n;
    cin >> n;
    int temp;
    map<int, int> m;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (auto b: m)
    {
        if(b.second%b.first!=0)
        {
            cout << "NO\n";
            return;

        }
    }
    cout << "YES\n";
}

int main()
{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
