#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
#define endl "\n"
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k,arr[MAX];

void solve()
{
    ll x,y;
    cin >>x>>y;

    if(x%2!=0 && y%2==0)
    {
        cout << "Burenka" << endl;
    }
    else if(x%2==0 && y%2!=0)
    {
        cout << "Burenka" << endl;
    }
    else
    {
        cout << "Tonya" << endl;
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