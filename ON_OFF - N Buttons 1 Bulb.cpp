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
    cin >> n;
    string str,str2;
    cin >> str >> str2;
    bool on = true;

    for(i=0; i<str.length(); i++)
    {
        if(str[i]==str2[i])
        {
            continue;
        }
        else
        {
            if(on)
            {
                on = false;
            }
            else
            {
                on = true;
            }
        }
    }

    if(on)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
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
