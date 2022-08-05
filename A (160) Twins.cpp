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
int i,j,k,arr[MAX];

void solve()
{
    string str,str2,str3;
    int x,y,z,n,a,b,c;
    bool stop,yes,on;
    int me=0,cont=0,sum=0;

    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr,arr+n);
    j=n-1;

    while(me<=sum)
    {
        me+=arr[j];
        sum-=arr[j];
        cont++;
        j--;
    }

    cout << cont << endl;
}

int main()
{
    FastRead
    solve();

    return 0;
}
