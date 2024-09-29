#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n, k;
    cin >> n >> k;

    int arr[n*k];

    for (int i = 0; i < n*k; i++)
    {
        cin >> arr[i];
    }
    
    int sum_col = round(n/2.0);
    int temp = sum_col - 1;
    int res = 0;

    for (int i = temp*k; i < n*k; i+=n-temp)
    {
        res+=arr[i];
        //cout << arr[i] << endl;
    }
    
    cout << res << endl;
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