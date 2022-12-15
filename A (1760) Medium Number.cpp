#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long a,b,c;
    cin >>a>>b>>c;

    long mx=max(a,max(b,c));
    long mn=min(a,min(b,c));

    if(a!=mx && a!=mn)
    {
        cout << a <<endl;
    }
    else if(b!=mx && b!=mn)
    {
        cout << b <<endl;
    }
    else
    {
        cout << c << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}

/**



**/