#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long a,b;
    cin >> a >> b;
    long one = a;
    one += 2*b;

    if(one%2==0)
    {
        if(a==0 && b%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }


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
