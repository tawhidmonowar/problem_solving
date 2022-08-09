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

void process(int x[], int n)
{
    int y=0;
    for(int i=0; i<n*2; i++)
    {
        y^=x[i];
    }

    if(!y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}


void solve()
{
    int n;
    while(cin>>n && n!=0)
    {
        int i,arr[n*2];
        {
            for(i=0; i<n*2; i++)
            {
                cin >> arr[i];
            }
        }

        sort(arr,arr+n);
        process(arr,n);
    }
}


int main()
{
    FastRead
    solve();

    return 0;
}
