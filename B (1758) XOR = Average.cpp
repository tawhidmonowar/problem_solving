#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;

    if(n%2==0)
    {
        for(long i=0; i<n-2; i++)
        {
            cout << 2 << " ";
        }
        cout << 1 << " " << 3 << endl;
    }
    else
    {
        for(long i=0; i<n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }

    // cout << (((2^2)^1)^3);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long testCase;
    cin >> testCase;
    long test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
 