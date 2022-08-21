#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    int x,y;
    cin >>x>>y;

    if(x==1&&y==1)
    {
        cout << 0 << endl;
    }
    else if(x>y)
    {
        cout << y+y+(x-2) << endl;
    }
    else
    {
        cout << x+x+(y-2) << endl;
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