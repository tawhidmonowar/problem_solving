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
    int n,num=0,ans=0,sum[110];
    string str;
    cin>>str;
    n=str.length();

    for(int i=0; i<n; i++)
    {
        if(str[i]=='Q')
        {
            num ++;
        }
        sum[i]=num;
    }

    for(int i=0; i<n; i++)
    {
        if(str[i]=='A')
        {
            ans += sum[i] * (sum[n-1] - sum[i]);
        }
    }

    cout<<ans<<endl;
}

int main()
{
    FastRead
    solve();

    return 0;
}
