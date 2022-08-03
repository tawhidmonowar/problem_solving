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
int i,j,k,arr[MAX];

void solve()
{
    string str,str2,str3;
    int x,y,z,n,a,b,c,d;
    bool stop,yes,on;
    int temp=0,total=0,sum=0;
    cin >> n;
    while(1)
    {
        n++;
        temp = n;
        a=temp%10;
        temp=temp/10;
        b=temp%10;
        temp=temp/10;
        c=temp%10;
        temp=temp/10;
        d=temp%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout << n;
            break;
        }
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
