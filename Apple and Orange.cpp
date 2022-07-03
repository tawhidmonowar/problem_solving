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
    int i,s,t,a,b,m,n,ap=0,ora=0;
    cin >>s>>t>>a>>b>>m>>n;
    int apple[m],orange[n];

    for(i=0; i<m; i++)
    {
        cin >> apple[i];
        if(apple[i]+a>=s && apple[i]+a<=t)
        {
            ap++;
        }
    }

    for(i=0; i<n; i++)
    {
        cin >> orange[i];
        if(orange[i]+b<=t && orange[i]+b>=s)
        {
            ora++;
        }
    }

    cout << ap << endl << ora;

}

int main()
{
    FastRead
    solve();

    return 0;
}
