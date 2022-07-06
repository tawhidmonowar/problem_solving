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
    int a,b,c,x,y;
    cin >>a>>b>>c>>x>>y;
    bool dog=false,cat=false;

    if(a>=x && b>=y)
    {
        cout << "YES" << endl;
        return;
    }

    if(a>=x)
    {
        dog = true;
    }
    else if(x-a<=c)
    {
        dog = true;
        c-=x-a;
    }

    if(b>=y)
    {
        cat = true;
    }
    else if(y-b<=c)
    {
        cat = true;
        c-=x-a;
    }

    if(dog&&cat)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
