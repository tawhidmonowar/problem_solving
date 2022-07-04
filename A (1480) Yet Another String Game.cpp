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

void solve()
{
    string x;
    cin >> x;

    for(int i=0; i<x.length(); i++)
    {
        if(i%2==0)
        {
            if(x[i]=='a')
            {
                x[i]='b';
            }
            else
            {
                x[i]='a';
            }
        }
        else
        {
            if(x[i]=='z')
            {
                x[i]='y';
            }
            else
            {
                x[i]='z';
            }
        }
    }

    cout << x <<endl;

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
