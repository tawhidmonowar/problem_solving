#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int x,y,k;
    cin >> x >> y >> k;
    int x_steps = (x+k-1)/k;
    int y_steps = (y+k-1)/k;

    if (x_steps>y_steps)
    {
        cout << (2*x_steps)-1 << endl;
    }
    else
    {
        cout << (2*y_steps) << endl;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}