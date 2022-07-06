#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
using namespace std;
typedef long long int ll;
const int MOD = (int)1e9+7;
const int MAX = 1e6;

void solve()
{
    int x,y;
    cin >>x>>y;

    if(x==y)
    {
        cout << 0 << endl;
    }
    else if(y>x)
    {
        cout << y-x << endl;
    }
    else
    {
        if((x-y)%2==0)
        {
            cout << (x-y)/2 << endl;
        }
        else
        {
            cout << 2+(x-y)/2 << endl;
        }

    }
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
