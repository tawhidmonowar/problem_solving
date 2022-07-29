#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int n,i,j,k,x[MAX];
int temp=0,total=0;

void solve()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if(str=="yes")
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
