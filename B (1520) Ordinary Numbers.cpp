#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k;
ll arr[]={
1,2,3,4,5,6,7,8,9,
11,22,33,44,55,66,77,88,99,
111,222,333,444,555,666,777,888,999,
1111,2222,3333,4444,5555,6666,7777,8888,9999,
11111,22222,33333,44444,55555,66666,77777,88888,99999,
111111,222222,333333,444444,555555,666666,777777,888888,999999,
1111111,2222222,3333333,4444444,5555555,6666666,7777777,8888888,9999999,
11111111,22222222,33333333,44444444,55555555,66666666,77777777,88888888,99999999,
111111111,222222222,333333333,444444444,555555555,666666666,777777777,888888888,999999999,
1111111111,2222222222,3333333333,4444444444,5555555555,6666666666,7777777777,8888888888,9999999999};

void solve()
{
    string str,str2,str3;
    ll x,y,z,n,a,b,c;
    bool stop,yes,on;
    int temp=0,total=0,sum=0;
    int xSize = sizeof(arr)/sizeof(ll);

    cin >> n;
    for(i=0; i<xSize; i++)
    {
        if(arr[i]>n)
        {
            cout << i << endl;
            break;
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

