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
    int x,y,z,n,a,b,c;
    bool stop,yes,on;
    int temp=0,total=0,sum=0;

    cin >> n;

    if(n==1)
    {
        cout << 2 << endl;
    }
    else if(n==2)
    {
        cout << 1 << endl;
    }
    else if(n%3==0)
    {
        cout << n/3 << endl;
    }
    else
    {
        temp = (int)n/3;
        if((temp*3)+1==n)
        {
            cout << temp+1 << endl;
        }
        else if((temp*3)+2==n)
        {
            cout << temp+1 << endl;
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
