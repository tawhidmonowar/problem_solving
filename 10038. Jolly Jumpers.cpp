#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k;

void solve()
{
    int n;
    while(cin>>n)
    {
        int arr[n],temp,stop=0;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int arr2[n-1];

        for(i=0; i<n-1; i++)
        {
            temp=abs(arr[i]-arr[i+1]);
            arr2[i]=temp;
        }

        sort(arr2,arr2+(n-1));

        for(i=0; i<n-1; i++)
        {
            if(arr2[i]!=i+1)
            {
                stop=1;
                break;
            }
        }

        if (stop==0)
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
    }
}

int main()
{
    FastRead
    solve();
    return 0;
}
