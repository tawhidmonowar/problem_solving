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

void solve()
{
    int n,setn=1;

    while(cin>>n && n!=0)
    {
        int i,arr[n],sum=0,res=0;

        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }

        int temp = sum/n;

        for(i=0; i<n; i++)
        {
            if(arr[i]>temp)
            {
                res+=arr[i]-temp;
            }
        }

        cout <<"Set #"<<setn<< endl;
        setn++;
        cout <<"The minimum number of moves is "<<res<<"."<< endl;
        cout << endl;
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
