#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
int temp=0,total=0,sum=0;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
string str,str2,str3;
int i,j,k,arr[MAX];
int x,y,z,n,a,b,c;
bool stop,yes,on;

void solve()
{
    int field[2][2];
    int grass = 0;

    cin >> field[0][0];
    cin >> field[0][1];
    cin >> field[1][0];
    cin >> field[1][1];

    if(field[0][0]==1)
    {
        grass++;
    }
    if(field[0][1]==1)
    {
        grass++;
    }
    if(field[1][0]==1)
    {
        grass++;
    }
    if(field[1][1]==1)
    {
        grass++;
    }

    if(grass==0)
    {
        cout << 0 << endl;
    }
    else if (grass==4)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
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
