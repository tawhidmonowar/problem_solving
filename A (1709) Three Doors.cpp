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

void solve()
{
    bool aa=false,bb=false,cc=false;
    int a,b,c,x;

    cin >> x;
    cin >> a >> b >> c;

    for(int i=0; i<3; i++)
    {
        if(x==0)
        {
            break;
        }
        else if(x==1)
        {
            x=a;
            aa=true;
        }
        else if (x==2)
        {
            x=b;
            bb=true;
        }
        else if (x==3)
        {
            x=c;
            cc=true;
        }
    }

    if(aa&&bb&&cc)
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
