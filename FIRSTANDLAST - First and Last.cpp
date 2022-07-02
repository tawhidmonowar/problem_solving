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
int n,i,j,k,x[MAX];
int temp=0,total=0;

void solve()
{
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> x[i];
    }

    total=x[0]+x[1];

    for(i=1; i<n-1; i++)
    {
        temp=x[i]+x[i+1];

        if(temp>total)
        {
            total = temp;
        }
    }

    temp=x[0]+x[n-1];
    if(temp>total)
    {
        total = temp;
    }
    cout << total << endl;
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

