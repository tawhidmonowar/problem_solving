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
    string s;
    cin >>s;

    char x,y,z;
    x=s[0];
    y=s[1];
    z=s[2];

    if (x==y && y==z)
    {
        cout << -1 << endl;
    }
    else if(x==y)
    {
        cout << z << endl;
    }
    else if(x==z)
    {
        cout << y << endl;
    }
    else if(y==z)
    {
        cout << x << endl;
    }
    else
    {
        cout << x << endl;
    }

}

int main()
{
    FastRead
    solve();
    return 0;
}
