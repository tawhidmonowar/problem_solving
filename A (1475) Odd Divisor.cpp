#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    cin >> n;
    if (n & (n - 1))
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();

    }


    return 0;
}