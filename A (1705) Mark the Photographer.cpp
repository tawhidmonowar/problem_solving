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
string str,str2,str3;
int i,j,k,arr[MAX];
int x,y,z,n,a,b,c;
bool stop,yes,on;

void print(int x[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << x[i] << " ";
    }
}

void solve()
{
    cin >> n >> x;
    int arr1[n],arr2[n];

    for(i=0; i<n*2; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n*2);

    for(i=0; i<n; i++)
    {
        arr1[i]=arr[i];
    }

    for(j=0; i<n*2; i++,j++)
    {
        arr2[j]=arr[i];
    }

    for(i=0; i<n; i++)
    {
        if(arr2[i]-arr1[i]>=x)
        {
            yes=true;
            continue;
        }
        else
        {
            yes=false;
            break;
        }
    }

    if(yes)
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
