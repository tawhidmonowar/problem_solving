#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n, yasser = 0;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) { cin >> arr[i];}

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum+=arr[i];
        if (sum<=0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    sum = 0;
    for (int i = n-1; i >=0; --i)
    {
        sum += arr[i];
        if (sum<=0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

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