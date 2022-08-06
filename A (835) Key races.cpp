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
    int s,v1,v2,t1,t2;
    cin >>s>>v1>>v2>>t1>>t2;
    int first = 2*t1+v1*s;
    int second = 2*t2+v2*s;

    if(first==second)
    {
        cout << "Friendship" << endl;
    }
    else if(first<second)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
