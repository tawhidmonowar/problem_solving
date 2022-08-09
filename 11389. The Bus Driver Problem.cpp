#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
string str,str2,str3;
bool stop,yes,on;

void solve()
{
    int i,n,d,r,temp=0;
    while(cin>>n&&n!=0&&cin>>d&&d!=0&&cin>>r&&r!=0)
    {
        int mor[n],eve[n];
        for(i=0; i<n; i++)
        {
            cin >> mor[i];
        }
        for(i=0; i<n; i++)
        {
            cin >> eve[i];
        }

        sort(mor,mor+n);
        sort(eve,eve+n,greater<int>());

        for(i=0; i<n; i++)
        {
            int x = mor[i];
            int y = eve[i];
            if(x+y>d)
            {
                temp+=(x+y)-d;
            }
        }

        cout << temp*r << endl;
        temp = 0;
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
