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

void solve()
{
    int x,t;
    cin >> t;

    for(x=0; x<t; x++)
    {
        int i,n,l,res;
        cin >> n >> l;
        int arr[n],arr2[n];

        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(i=0; i<n; i++)
        {
            cin >> arr2[i];
        }

        for(i=0; i<n; i++)
        {
            if(arr[i]<=arr2[i] && l>=arr[i])
            {
                l-=arr[i];
                res=1;
            }
            else
            {
                res=-1;
                break;
            }
        }

        if(res==1)
        {
            cout << "Case " << x+1 << ":" << " Yes" << endl;
        }
        else
        {
            cout << "Case " << x+1 << ":" << " No" << endl;
        }
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
