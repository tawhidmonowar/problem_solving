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

void solve(int runingTestCase)
{
    int i,n,mid;
    cin >> n;
    int teamArray[n];

    for(i=0; i<n; i++)
    {
        cin >> teamArray[i];
    }

    sort(teamArray,teamArray+n);

    mid=(1+n)/2;
    cout << "Case " << runingTestCase << ": ";
    cout<< teamArray[mid-1] << endl;

}

int main()
{
    FastRead
    int testCase,runingTestCase=0;
    cin >> testCase;

    while(testCase--)
    {
        solve(++runingTestCase);
    }

    return 0;
}
