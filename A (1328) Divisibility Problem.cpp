#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    int a,b,res=0;
    cin >> a >> b;


    if(a%b==0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b-(a%b) << endl;
    }

}

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}