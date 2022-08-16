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
int i,j,k;

void solve()
{
    int n,k,res=0,paici=0,ek=0;
    cin >> n >> k;
    int arr[n],arr2[n];

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        arr2[i]=arr[i];
    }

    sort(arr2,arr2+n);

    if(n==k)
    {
        ek=1;
    }
    else
    {
        for(i=0; i<k; i++)
        {
            paici=0;

            for(j=0; j<k; j++)
            {
                if(arr[i]==arr2[j])
                {
                    paici=1;
                    break;
                }
            }

            if(paici==0)
            {
                res++;
            }

        }
    }

    if(ek)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << res << endl;
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