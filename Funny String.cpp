#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;

void funnyCheck(int x[], int y[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(x[i]!=y[i])
        {
            cout << "Not Funny\n";
            return;
        }
    }
    cout << "Funny\n";
}

void solve()
{
    string temp,x,y;
    cin >> temp;
    x=temp;
    reverse(temp.begin(),temp.end());
    y=temp;

    int inX[x.size()], inY[y.size()];

    for(int i=0; i<x.size(); i++)
    {
        inX[i] = (int)x[i];
        inY[i] = (int)y[i];
    }

    int absDX[x.size()],absDY[y.size()];

    for(int i=0; i<x.size()-1; i++)
    {
        absDX[i]=abs(inX[i]-inX[i+1]);
        absDY[i]=abs(inY[i]-inY[i+1]);
    }

    funnyCheck(absDX,absDY,x.size());
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
