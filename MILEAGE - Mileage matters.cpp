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
    float x,y,z,n,a,b,c;
    cin >>n>>x>>y>>a>>b;

    float pet = x/a;
    float die = y/b;

    if(pet<die)
    {
        cout << "PETROL" << endl;
    }
    else if(pet>die)
    {
        cout << "DIESEL" << endl;
    }
    else
    {
        cout << "ANY" << endl;
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
