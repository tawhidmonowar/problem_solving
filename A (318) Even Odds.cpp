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

void print(int x[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << x[i] << " ";
    }
}

void solve()
{
    ll i,j=0,n,k;
    cin >> n >> k;

    if((n+1)/2>=k)
    {
        cout << k*2-1 << endl;
    }
    else
    {
        cout << (k-(n+1)/2)*2 << endl;
    }

}

int main()
{
    FastRead
    solve();

    return 0;
}