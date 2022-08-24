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

void print(int x[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << x[i] << " ";
    }
}


void solve()
{
    ll i,x;
    cin >> x;

    ll arr[x];
    ll arr2[x];

    for(i=0; i<x; i++)
    {
        cin >> arr[i];
    }

    for(i=0; i<x; i++)
    {
        cin >> arr2[i];
    }

    for(i=0; i<x; i++)
    {
        if(arr[i]>arr2[i])
        {
            ll temp=arr[i];
            arr[i]=arr2[i];
            arr2[i]=temp;
        }
    }

    ll res=0;

    for(i=0; i<x-1; i++)
    {
        res+=llabs(arr[i]-arr[i+1]);
        res+=llabs(arr2[i]-arr2[i+1]);
    }

    cout << res << endl;
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
