#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin >>a>>b>>c;
    if(a==(b+c) || b == (a+c) || c== (a+b))
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
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}
