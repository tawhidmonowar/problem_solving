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

void solve()
{
    float m,res=0,temp;
    int n;
    cin >>n>>m;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(res<=ceil(arr[i]/m))
        {
            res= ceil(arr[i]/m);
            temp=i;
        }
    }
    
    cout << temp+1 << endl;
}

int main()
{
    FastRead
    solve();

    return 0;
}
