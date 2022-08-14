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
    int n,c=0;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    for(i=0; i<n-1; i++)
    {
        if(abs(arr[i]-arr[i+1])<=1)
        {
            c++;
        }
        else
        {
            break;
        }
    }

    if(n-c==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
