#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n, k;
    cin >> n >> k;

    int temp = max(1, n-k+1);
    int odd_f = temp, odd_l = n, res = 0;

    if (temp%2==0)
    {
        odd_f = temp+1;
    }

    if (n%2==0)
    {
        odd_l = n-1;
    }

    if (odd_f <= odd_l)
    {
        res = ((odd_l - odd_f)/2+1);
    }

    if (res % 2 == 0) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
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