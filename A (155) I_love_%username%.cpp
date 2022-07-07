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
    int n;
    cin >> n;
    int x[n];

    for(i=0; i<n; i++)
    {
        cin >> x[i];
    }

    int xLess=x[0],xMore=x[0],amazing=0;

    for(i=0; i<n; i++)
    {
        if(x[i]<xLess)
        {
            xLess=x[i];
            amazing++;
        }

        if(x[i]>xMore)
        {
            xMore=x[i];
            amazing++;
        }

    }

    cout << amazing << endl;
}

int main()
{
    FastRead
    solve();

    return 0;
}
