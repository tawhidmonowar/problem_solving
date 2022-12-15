#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    cin >> n;
    if(n==1 || n==3)
    {
        cout << -1 << endl;
    }
    else
    {
        for(long i=n/2; i<n; i++)
        {
            cout << i+1 << " ";
        }
        for(long i=0; i<n/2; i++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
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